#pragma once
/**
 * @file	strategy.h
 * @brief	策略模式
 * @note    - TripMode
 * @author  gendloop
 */

// c++
#include <iostream>
#include <unordered_map>
#include <memory>

enum class TRIP_TYPE {
    BY_BUS,
    BY_TRAIN,
    BY_PLANE
};

class TripMode {
public:
    virtual TRIP_TYPE getType() = 0;
    virtual void travel() = 0;
};

class ByBus : public TripMode {
    TRIP_TYPE getType() override;
    void travel() override;
};

class ByTrain : public TripMode {
    TRIP_TYPE getType() override;
    void travel() override;
};

class ByPlane : public TripMode {
    TRIP_TYPE getType() override;
    void travel() override;
};

class Trip {
public:
    void takeATrip(TRIP_TYPE type);

private:
    static std::unordered_map<TRIP_TYPE, std::shared_ptr<TripMode>> s_trip_modes_;
};
