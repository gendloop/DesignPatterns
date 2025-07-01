#include "pch.h"
/**
 * @file	test_singleton.cpp
 * @brief	测试单例模式
 * @author  gendloop
 */

// local
#include "../src/creational-patterns/singleton.h"

TEST(TestSingleton, EagerSingleton) {
    auto &t1 = EagerSingleton::GetInstance();
    auto &t2 = EagerSingleton::GetInstance();
    EXPECT_EQ(t1, t2);
}

TEST(TestSingleton, LazySingleton) {
    auto& t1 = LazySingleton::GetInstance();
    auto& t2 = LazySingleton::GetInstance();
    EXPECT_EQ(t1, t2);
}
