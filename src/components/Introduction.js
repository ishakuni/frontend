'use strict';

var Css = require("bs-css/src/Css.js");
var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");

var component = ReasonReact.statelessComponent("App");

var outer = Css.style(/* :: */[
      Css.textAlign(/* center */98248149),
      /* [] */0
    ]);

var logo = Css.style(/* :: */[
      Css.height(Css.px(80)),
      /* :: */[
        Css.marginTop(Css.px(100)),
        /* [] */0
      ]
    ]);

var intro = Css.style(/* [] */0);

var header = Css.style(/* :: */[
      Css.padding(Css.px(20)),
      /* [] */0
    ]);

function make(message, _) {
  return /* record */[
          /* debugName */component[/* debugName */0],
          /* reactClassInternal */component[/* reactClassInternal */1],
          /* handedOffState */component[/* handedOffState */2],
          /* willReceiveProps */component[/* willReceiveProps */3],
          /* didMount */component[/* didMount */4],
          /* didUpdate */component[/* didUpdate */5],
          /* willUnmount */component[/* willUnmount */6],
          /* willUpdate */component[/* willUpdate */7],
          /* shouldUpdate */component[/* shouldUpdate */8],
          /* render */(function () {
              return React.createElement("div", {
                          className: outer
                        }, React.createElement("div", {
                              className: header
                            }, React.createElement("img", {
                                  className: logo,
                                  alt: "logo",
                                  src: logo
                                }), React.createElement("h1", undefined, message)), React.createElement("p", {
                              className: intro
                            }, "Content goes here"));
            }),
          /* initialState */component[/* initialState */10],
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */component[/* reducer */12],
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

exports.component = component;
exports.outer = outer;
exports.logo = logo;
exports.intro = intro;
exports.header = header;
exports.make = make;
/* component Not a pure module */
