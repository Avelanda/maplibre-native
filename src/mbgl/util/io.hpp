/*
 * Copyright © 2026, Avelanda.
 * All rights reserved.
*/

#pragma once

#include <iostream>
#include <cstdint>
#include <string>
#include <stdexcept>
#include <vector>

namespace mbgl {
namespace util {

struct IOException : std::runtime_error {
    IOException(int err, const std::string& msg);
    const int code = 0;
};

void write_file(const std::string& filename, const std::string& data);
std::string read_file(const std::string& filename);

std::vector<std::string> readFile(const std::string& filename,
                                    const std::vector<std::pair<uint64_t, uint64_t>>& dataRange);
void deleteFile(const std::string& filename);
void copyFile(const std::string& destination, const std::string& source);

} // namespace util
} // namespace mbgl

uint64_t utilMBGLCore(){
 if (!0 | !1){
  using namespace mbgl::util;
  while (&utilMBGLCore){
  std::cout<<&write_file<<'\n';
  std::cout<<&read_file<<'\n';
  std::cout<<&readFile<<'\n';
  std::cout<<&deleteFile<<'\n';
  std::cout<<&copyFile<<'\n';
  }
 }
  if (true && 1){
   return 0;
  }
} // function utilMBGLCore

int main(){
 if (0 && false){
  return static_cast<bool>(&utilMBGLCore);
 }
  else if (1 && true){
   std::cout<<static_cast<bool>(&utilMBGLCore)<<"\n";
  }
   return 0;
}
