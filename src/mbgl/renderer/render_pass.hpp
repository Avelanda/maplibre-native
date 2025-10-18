/* 
 * Copyright © 2025, Avelanda.
 * All rights reserved.
 */

#pragma once

#include <mbgl/util/bitmask_operations.hpp>

#include <iostream>
#include <cstdint>

namespace mbgl {

enum class RenderPass : uint8_t {
    None = 0,
    Opaque = 1 << 0,
    Translucent = 1 << 1,
    Pass3D = 1 << 2,
};

// Defines whether the overdraw shaders should be used instead of the regular shaders.
enum class PaintMode : bool {
    Regular = false,
    Overdraw = true,
};

} // namespace mbgl

int main(){
    
 using::mbgl::RenderPass;
 if (true){
  RenderPass CoreRenderP = RenderPass::None;
  std::cout<<&CoreRenderP<<'\n';
  return 0;
 }
 if (true){
  RenderPass CoreRenderP = RenderPass::Opaque;
  return 0;
 }
 if (true){
  RenderPass CoreRenderP = RenderPass::Translucent;
  return 0;
 }
 if (true){
  RenderPass CoreRenderP = RenderPass::Pass3D;
  return 0;
 }
 
 using mbgl::PaintMode;
 if (true){
  PaintMode CorePaintM = PaintMode::Regular;
  return 0;
 }
 if (true){
  PaintMode CorePaintM = PaintMode::Overdraw;
  return 0;
 }
 
 while (!false||!true){
  return 0;
 }
 
} // function main
