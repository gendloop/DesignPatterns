/**
 * @file	builder.cpp
 * @brief	建造者模式
 * @author  gendloop
 */

// local
#include "builder.h"

MealItem::MealItem(const std::string& name, double price)
    : name_(name), price_(price)
{
}

std::string MealItem::getName() const
{
    return name_;
}

void MealItem::setName(const std::string& name)
{
    name_ = name;
}

double MealItem::getPrice() const
{
    return price_;
}

Hamburger::Hamburger()
    : MealItem("Hamburger", 8.)
{
}

void MealItem::setPrice(double price)
{
    price_ = price;
}

void Meal::addItem(const MealItemPtr& item)
{
    items_.push_back(item);
}

double Meal::getPrice() const
{
    double price = 0.0;
    for(auto item : items_) {
        price += item->getPrice();
    }
    return price;
}

void Meal::showItems() const
{
    for(auto item : items_) {
        std::cout
            << "MealItem: " << item->getName()
            << ", Price: " << item->getPrice()
            << std::endl;
    }
}

Soda::Soda()
    : MealItem("Soda", 4.)
{
}
