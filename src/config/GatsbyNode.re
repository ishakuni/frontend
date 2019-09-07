%raw
{|
'use strict';

const fs = require('fs');

const createPath = (name) => (name === 'index' ? '/' : `/${name}/`);

const getMatches = (component) =>
  /var component = ReasonReact\.[^"]+"(\w+)/.exec(
    fs.readFileSync(component, 'utf-8')
  );

const onCreatePage = ({ actions: { createPage, deletePage }, page }) => {
  const { component } = page;

  // Ignore pages outside of main directory (i.e. from `.cache` folder)
  if (!component.includes('/pages/')) {
    return
  }

  deletePage(page);

  // Skip re-creating test files as pages.
  if (component.includes('/__tests__/')) {
    return
  }

  const matches = getMatches(component);

  if (matches !== null) {
    createPage({ ...page, path: createPath(matches[1]) });

    // Create fallback 404 page
    if (matches[1] === '404') {
      createPage({
        ...page,
        path: '/404.html',
      });
    }
  }
};

exports.onCreatePage = onCreatePage;

|};
