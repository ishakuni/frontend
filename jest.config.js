const jestConfig = require('kcd-scripts/jest')

module.exports = Object.assign(jestConfig, {
  setupTestFrameworkScriptFile: require.resolve('./jest.setup.js')
})
