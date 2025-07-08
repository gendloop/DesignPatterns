#pragma once
/**
 * @file	builder.h
 * @brief	建造者模式
 * @author  gendloop
 */

// c++
#include <vector>
#include <string>
#include <iostream>

class MealItem {
private:
    std::string name_;
    double price_;

public:
    MealItem(const std::string& name, double price);
      
    std::string getName() const;
    void setName(const std::string& name);

    double getPrice() const;
    void setPrice(double price);
};
using MealItemPtr = std::shared_ptr<MealItem>;

class Meal {
private:
    std::vector<MealItemPtr> items_;

public:
    void addItem(const MealItemPtr& item);
    double getPrice() const;
    void showItems() const;
};

class Soda : public MealItem {
public:
    Soda();
};

class Hamburger : public MealItem {
public:
    Hamburger();
};
