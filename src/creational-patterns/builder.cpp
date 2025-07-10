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

Hamburger::Hamburger(const std::string& name, double price)
    : MealItem(name, price)
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
    std::cout << "Total price of the meal: " << price << std::endl;
    std::cout << std::endl;
    return price;
}

void Meal::showItems() const
{
    std::cout << "Your meal includes the following items:" << std::endl;
    for(auto item : items_) {
        std::cout
            << "MealItem: " << item->getName()
            << ", Price: " << item->getPrice()
            << std::endl;
    }
    std::cout << std::endl;
}

Soda::Soda()
    : MealItem("Soda", 4.)
{
}

Meal MealBuilder::buildMeal(MEAL_TYPE type)
{
    switch(type) {
        case PACKAGE_1:
            return buildPackage1();
        case PACKAGE_2:
            return buildPackage2();
        default:
            throw std::invalid_argument("Invalid meal type");
    }
}

Meal MealBuilder::buildPackage1()
{
    Meal meal;
    meal.addItem(std::make_shared<Hamburger>());
    meal.addItem(std::make_shared<Hamburger>("Beef Hamburger", 12));
    meal.addItem(std::make_shared<Soda>());

    return meal;
}

Meal MealBuilder::buildPackage2()
{
    Meal meal;
    meal.addItem(std::make_shared<Hamburger>("Chicken Hamburger", 10));
    meal.addItem(std::make_shared<Soda>());
    meal.addItem(std::make_shared<Soda>());

    return meal;
}
