#pragma once
/**
 * @file	prototype.h
 * @brief	原型模式
 * @note    避免复杂初始化
 * @note    - OneMore
 * @author  gendloop
 */

// c++
#include <memory>
#include <string>

class Fruit {
public:
    virtual ~Fruit() = default;
    virtual void clone() = 0;
};

class Apple : public Fruit {
private:
    std::string name_;
    std::string color_;
    double size_;

public:
    // undone
};

class Banana : public Fruit {
private:
    std::string name_;
    std::string production_date_;
    double length_;

public:
    // undone
};

class OneMore {
public:
    std::shared_ptr<Fruit> giveMeAnotherOne();
};
