#include <napi.h>

// Example function
std::string hello(){
  return "Hello World";
}

// Wrap example function
Napi::String HelloWrapped(const Napi::CallbackInfo& info) 
{
  return Napi::String::New(info.Env(),hello());
}

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  exports.Set(
    "hello", Napi::Function::New(env, HelloWrapped)
  );

  return exports;
}

NODE_API_MODULE(testaddon, InitAll)



