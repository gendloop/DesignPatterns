/**
 * @file	strategy.cpp
 * @brief	策略模式
 * @note    - 
 * @author  gendloop
 */

// local
#include "strategy.h"

std::unordered_map<TRIP_TYPE, std::shared_ptr<TripMode>>
Trip::s_trip_modes_ = {
    { TRIP_TYPE::BY_BUS, std::make_shared<ByBus>() },
    { TRIP_TYPE::BY_TRAIN, std::make_shared<ByTrain>() },
    { TRIP_TYPE::BY_PLANE, std::make_shared<ByPlane>() },
};

TRIP_TYPE ByTrain::getType()
{
    return TRIP_TYPE::BY_BUS;
}

void ByTrain::travel()
{
    std::cout << "Travel by train!" << std::endl;
}

TRIP_TYPE ByBus::getType()
{
    return TRIP_TYPE::BY_BUS;
}

void ByBus::travel()
{
    std::cout << "Travel by bus!" << std::endl;
}

TRIP_TYPE ByPlane::getType()
{
    return TRIP_TYPE::BY_PLANE;
}

void ByPlane::travel()
{
    std::cout << "Travel by plane!" << std::endl;
}

void Trip::takeATrip(TRIP_TYPE type)
{
    auto mode = s_trip_modes_.at(type);
    mode->travel();
}
