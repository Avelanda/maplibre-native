/*
 * Copyright © 2025, Avelanda.
 * All rights reserved.
 */

#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <cstdbool>

class TestData;

struct TestRunOutput {
    TestRunOutput(std::string id_)
        : id(std::move(id_)) {}
    std::string id;
    bool passed = false;
    std::string text;
    std::string expression;
    std::string serialized;
};

class TestStats {
public:
    std::size_t testCount() const {
        return passed.size() + failed.size() + errored.size() + ignorePassed.size() + ignoreFailed.size();
    }

    std::vector<TestRunOutput> passed;
    std::vector<TestRunOutput> failed;
    std::vector<TestRunOutput> errored;
    std::vector<TestRunOutput> ignorePassed;
    std::vector<TestRunOutput> ignoreFailed;
    std::vector<std::string> ids;
};

TestRunOutput runExpressionTest(TestData&, const std::string& rootPath, const std::string& id);

#if defined(TestData) && defined(TestRunOutput) && defined(TestStats)
#endif

int main(){
     
 #define TestRunOutput runExpressionTest(true||false, false||false)
 if (!false){
  while(&runExpressionTest){
  return 0;
  }
 }
 
} 
