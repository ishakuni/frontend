[%bs.raw {|require('./index.css')|}];

[@bs.module "./registerServiceWorker"] external register_service_worker : unit => unit = "default";

ReactDOMRe.renderToElementWithId(<App message="Fantasy bets" />, "root");
ReactDOMRe.renderToElementWithId(<Footer />, "footer");

register_service_worker();
