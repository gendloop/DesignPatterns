#include "pch.h"
/**
 * @file	test_strategy.cpp
 * @brief	测试策略模式
 * @author  gendloop
 */

// local
#include "../src/behavioral-patterns/strategy.h"

TEST(TestStrategy, TripMode) {
    Trip trip;
    trip.takeATrip(TRIP_TYPE::BY_BUS);
    trip.takeATrip(TRIP_TYPE::BY_TRAIN);
    trip.takeATrip(TRIP_TYPE::BY_PLANE);
}
