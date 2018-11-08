#!/bin/bash
set -x

GITHUB_OWNER=${GITHUB_OWNER:-"ishakuni"}
GITHUB_REPO=${GITHUB_REPO:-"frontend"}
url="https://api.github.com/repos/${GITHUB_OWNER}/${GITHUB_REPO}/deployments"

create_deployment() {
    IFS='' read -r -d '' post_data <<-END_JSON
    {
        "ref": "master",
        "description": "deploying ${TRAVIS_COMMIT}",
        "required_contexts": []
    }
END_JSON

    data=$(jq -n "$post_data")
    response=$(curl --silent -H "Authorization: bearer $GITHUB_DEPLOYMENT_TOKEN" -X POST -d "$post_data" "$url")
    statuses_url=$(jq --raw-output '.statuses_url' <<< $response)
}

do_deployment() {
    yarn global add now
    yarn run build
    cp now.json build
    cd build
    now -d --regions bru --token $NOW_TOKEN
    now alias ishakuni.com --token $NOW_TOKEN
    now alias www.ishakuni.com --token $NOW_TOKEN
}

update_deployment_status() {
    IFS='' read -r -d '' post_data <<-END_JSON
    {
        "state": "success",
        "description": "deploy was successful"
    }
END_JSON
    data=$(jq -n "$post_data")
    response=$(curl --silent -H "Authorization: bearer $GITHUB_DEPLOYMENT_TOKEN" -X POST -d "$post_data" "$statuses_url")
}

create_deployment
if [[ -z "$statuses_url" ]]; then
    exit "failed to create deployment"
fi
do_deployment
update_deployment_status
