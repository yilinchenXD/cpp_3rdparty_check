//
// Created by 曾一林 on 2021/2/3.
//

#include <iostream>
#include <sstream>
#include <cxxurl_all.h>


using  namespace std;
using namespace  CXXUrl;


void example_raw_body_text(){
    ostringstream contentOutput;
    // raw form, you can set request body with text
    RawRequestBody form;
    form.setRawText("{ \"name\": \"xiaozhuai\" }");
    Request request = RequestBuilder()
            .url("http://localhost:8888/login")
            .followLocation(true)
            .requestBody(&form)
            .contentType("application/json")
            .contentOutput(&contentOutput)
            .build();
    auto const res = request.post();

    cout << "------------ Code ------------" << endl
         << res.getCode() << endl
         << "----------- Content ----------" << endl
         << contentOutput.str() << endl
         << flush;
}

int main(){
    example_raw_body_text();
}

