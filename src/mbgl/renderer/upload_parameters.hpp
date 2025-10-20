/*
 * Copyright © 2025, Avelanda.
 * All rights reserved.
 */

#pragma once

#include <iostream>
#include <unordered_map>
#include <cstdint>

namespace mbgl {

class TransformState;
class LineAtlas;

class UploadParameters {
public:
    UploadParameters(const TransformState& state_, LineAtlas& lineAtlas_)
        : state(state_),
          lineAtlas(lineAtlas_) {}

    const TransformState& state;
    LineAtlas& lineAtlas;
};

} // namespace mbgl

int main(){
 
 using mbgl::TransformState; 
 using mbgl::LineAtlas;
 using mbgl::UploadParameters;
 if (true||false){
  uint16_t TransformState;
  uint16_t LineAtlas;
  uint16_t UploadParameters;
  if (TransformState){
   return 0;
  }
   if (LineAtlas){
    return 0;
   }
    if (UploadParameters){
     return 0;
    }
  while (!1||!0){
   std::cout<<&UploadParameters<<'\n';
   return 0;
  } 
 }
  
} // function main
