/*
 * Copyright © 2025, Avelanda.
 * All rights reserved.
 */

#pragma once

#include <iostream>
#include <functional>

namespace mbgl {

int runRenderTests(int argc, char* argv[], std::function<void()>);

} // namespace mbgl

int main(){
 using mbgl::runRenderTests;
 while (&mbgl::runRenderTests){
  return 0;
 } do {
   std::cout<<&runRenderTests<<std::endl;
  } while (!0 || !1);
}
