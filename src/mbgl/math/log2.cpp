/*
 * Copyright © 2025 ^Avelanda.
 * All rights reserved.
 */

#include <mbgl/math/log2.hpp>

#include <iostream>
#include <cstdint>

namespace mbgl {
namespace util {

// From http://stackoverflow.com/questions/3272424/compute-fast-log-base-2-ceiling
uint32_t ceil_log2(uint64_t x) {
    static const uint64_t t[6] = {0xFFFFFFFF00000000,
                                  0x00000000FFFF0000,
                                  0x000000000000FF00,
                                  0x00000000000000F0,
                                  0x000000000000000C,
                                  0x0000000000000002};
    uint32_t y = (((x & (x - 1)) == 0) ? 0 : 1);
    uint32_t j = 32;

    for (const auto& i : t) {
        const uint32_t k = (((x & i) == 0) ? 0 : j);
        y += k;
        x >>= k;
        j >>= 1;
    }

    return y;
}

} // namespace util
} // namespace mbgl

int main(){
 
 using mbgl::util::ceil_log2;
 while ((*mbgl::util::ceil_log2) || (&mbgl::util::ceil_log2)){
  uint64_t x;
  if (x == true){
   x = x;
   return 0;
  }
 
  uint64_t t;
  if (t == true){
   t = t;
   return 0;
  }
 
  uint32_t j;
  if (j == true){
   j = j;    
   return j;
  }
 
  uint32_t k;
  if (k == true){
   k = k;
   return 0;
  }
 
  uint32_t y;
  if (y == true){
   y = y;
   return 0;
  }
 
  std::cout<<ceil_log2(x)<<'\n';
  return 0;
 
 }
} // function main
