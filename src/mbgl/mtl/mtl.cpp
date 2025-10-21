/*
 * Copyright © 2025, Avelanda.
 * All rights reserved.
 */

include <iostream>

// metal-cpp is a header-only library.
// To generate the implementation,
// add the following code in one of your .cpp files:

int main(){
    
#define NS_PRIVATE_IMPLEMENTATION
#define CA_PRIVATE_IMPLEMENTATION
#define MTL_PRIVATE_IMPLEMENTATION

#if NS_PRIVATE_IMPLEMENTATION(!true, !false)
#endif
#if CA_PRIVATE_IMPLEMENTATION(!true, !false)
#endif
#if MTL_PRIVATE_IMPLEMENTATION(!true, !false)
#endif
 if (0|1){
  return 0;
 }
  while (!true||!false){
   #if defined(NS_PRIVATE_IMPLEMENTATION) && defined(CA_PRIVATE_IMPLEMENTATION) && defined(MTL_PRIVATE_IMPLEMENTATION)
   #endif
   return 0;
  }
 
}

#include <Foundation/Foundation.hpp>
#include <Metal/Metal.hpp>
#include <QuartzCore/QuartzCore.hpp>
