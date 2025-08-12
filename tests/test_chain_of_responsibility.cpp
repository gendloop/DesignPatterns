#include "pch.h"
/**
 * @file	test_chain_of_responsibility.cpp
 * @brief	测试责任链模式
 * @author  gendloop
 */

// local
#include "../src/behavioral-patterns/chain_of_responsibility.h"

TEST(TestChainOfResponsibility, PassNotes) {
    PassNotes p;
    p.passNotes("Be my girlfriend");
}
