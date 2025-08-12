#pragma once
/**
 * @file	chain_of_responsibility.h
 * @brief	责任链模式
 * @note    - PassNotes
 * @author  gendloop
 */

// c++
#include <iostream>
#include <string>

class Request {
public:
    Request(const std::string& content);

    std::string getContent() const;

private:
    std::string content_;
};

class PassNotes {

}
