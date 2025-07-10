#include "pch.h"
/**
 * @file	test_builder.cpp
 * @brief	测试建造者模式
 * @author  gendloop
 */

// local
#include "../src/creational-patterns/builder.h"

TEST(TestBuilder, MealBuilder) {
    MealBuilder builder;
    auto m1 = builder.buildMeal(MealBuilder::PACKAGE_1);
    m1.showItems();
    auto price1 = m1.getPrice();
    EXPECT_EQ(price1, 24);

    auto m2 = builder.buildMeal(MealBuilder::PACKAGE_2);
    m2.showItems();
    auto price2 = m2.getPrice();
    EXPECT_EQ(price2, 18);
}
