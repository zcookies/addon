#include <napi.h>
#include <iostream>
#include <grade.h>
using namespace Napi;

Napi::String result(const CallbackInfo& info){
        
    float grade =  info[0].As<Number>().ToNumber().FloatValue();


    return String::New(info.Env(), grade::judge(grade));
}

Napi::Object Init(Env env,Object exports){
    exports.Set("result",Function::New(env,result));
    return exports;
}

NODE_API_MODULE(addon, Init);