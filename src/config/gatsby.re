%raw
{|
module.exports = {
  plugins: [
    {
      resolve: `gatsby-plugin-manifest`,
      options: {
        name: `iShakuni`,
        short_name: `iShakuni`,
        start_url: `/`,
        background_color: `#f7f0eb`,
        theme_color: `#a2466c`,
        // Enables "Add to Homescreen" prompt and disables browser UI (including back button)
        // see https://developers.google.com/web/fundamentals/web-app-manifest/#display
        display: `standalone`,
        icon: `src/images/favicon.svg`,
        include_favicon: true,
      },
    },
    '@wyze/gatsby-plugin',
    'gatsby-plugin-manifest',
  ],
}
|};
