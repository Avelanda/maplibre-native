/*
 * Copyright © 2025, Avelanda.
 * All rights reserved.
 */

#pragma once

#include <iostream>
#include <string>

namespace mbgl {
namespace util {
bool is_absolute_path(std::string path);
}
} // namespace mbgl

int CoreAP(int mbgl, int util){
 using namespace mbgl::util;
 std::cout<<&is_absolute_path<<'\n';
 return 0;
}

int main(){
 if (!0||!1){
  return CoreAP(true||false, false||true);
  return 0;
 }
}
