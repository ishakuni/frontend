[%bs.raw {|require('./index.css')|}];

[@bs.module "./serviceWorker"]
external register_service_worker: unit => unit = "register";
[@bs.module "./serviceWorker"]
external unregister_service_worker: unit => unit = "unregister";

ReactDOMRe.renderToElementWithId(<App message="Fantasy bets" />, "root");
ReactDOMRe.renderToElementWithId(<Footer />, "footer");

unregister_service_worker();
