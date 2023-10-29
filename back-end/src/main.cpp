//
// Created by jim on 10/28/23.
//

#include <httplib.h>
#include <fmt/format.h>

auto make_html_page(auto title, auto body){
    constexpr auto html_body = R"S(<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <title>{}</title>
    <link rel="stylesheet" href="style.css">
    <script src="script.js"></script>
  </head>
  <body>
    {}
  </body>
</html>)S";
    return fmt::format(html_body, title, body);
}


int main(){
    httplib::Server svr;

    svr.Get("/hi", [](const httplib::Request & req, httplib::Response &res) {
//        res.set_content(make_html_page("A better name", "A better body"), "text/html");
    });

    svr.listen("0.0.0.0", 8080);
}