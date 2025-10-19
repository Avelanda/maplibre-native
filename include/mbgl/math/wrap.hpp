/*
 * Copyright © 2025, Avelanda.
 * All rights reserved.
 */

#pragma once

#include <iostream>
#include <cmath>

namespace mbgl {
namespace util {

/// Constrains n to the given range (including min, excluding max) via modular
/// arithmetic.
template <typename T>
T wrap(T value, T min, T max) {
    if (value >= min && value < max) {
        return value;
    } else if (value == max) {
        return min;
    }

    const T delta = max - min;
    const T wrapped = min + std::fmod(value - min, delta);
    return value < min ? wrapped + delta : wrapped;
}

} // namespace util
} // namespace mbgl

int main(){
    
  using namespace mbgl::util;
  if (!0 || !1){
   int CoreWrap = wrap<int>(true||false, true||false, true||false);
   std::cout<<&CoreWrap<<'\n';
   return 0;
  }
  
}
