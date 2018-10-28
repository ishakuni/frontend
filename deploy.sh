#!/bin/bash
set -x

GITHUB_OWNER=${GITHUB_OWNER:-"ishakuni"}
GITHUB_REPO=${GITHUB_REPO:-"frontend"}
url="https://api.github.com/repos/${GITHUB_OWNER}/${GITHUB_REPO}/deployments"

IFS='' read -r -d '' query <<-END_GQL
{
  "ref": "create-github-deployment",
  "payload": {
    "deploy": "migrate"
  },
  "description": "test deploy"
}
END_GQL

query_json=$(jq -n --arg query "$query" '{"query": $query}')
branches_json=$(curl --silent -H "Authorization: bearer $GITHUB_DEPLOYMENT_TOKEN" -X POST -d "$query_json" "$url")
echo $branches_json
#read -ra result <<< $(curl --silent --connect-timeout 2 -H "Authorization: bearer $GiITHUB_DEPLOYMENT_TOKEN" -X POST -d "$query_json" "$url" || echo "timeout 500")

#echo ${result[1]}


jq --raw-output '.data.repository.pullRequests.edges | .[] | .node.headRefName' <<< $branches_json

while [ $(jq --raw-output '.data.repository.pullRequests.pageInfo.hasNextPage' <<< $branches_json) = "true" ]; do
  cursor=$(jq --raw-output '.data.repository.pullRequests.pageInfo.endCursor' <<< $branches_json)
  ISF='' read -r -d '' query <<-END_GQL
  query {
    repository(owner: "$GITHUB_OWNER", name: "$GITHUB_REPO") {
      pullRequests(first:100, states:[OPEN], orderBy:{field: UPDATED_AT, direction:DESC} after:"$cursor") {
        pageInfo {
          hasNextPage
          endCursor
        }
        edges {
          node {
            headRefName
          }
        }
      }
    }
  }
END_GQL

  query_json=$(jq -n --arg query "$query" '{"query": $query}')
  branches_json=$(curl --silent -H "Authorization: bearer $GITHUB_KEY" -X POST -d "$query_json" https://api.github.com/graphql)

  jq --raw-output '.data.repository.pullRequests.edges | .[] | .node.headRefName' <<< $branches_json
done

