#pragma once
/**
 * @file	singleton.h
 * @brief	单例模式
 * @note    - EagerSingleton
 *          - LazySingleton
 * @author  gendloop
 */

// c++
#include <memory>

/// 初始化时创建实例
class EagerSingleton {
private:
    static std::unique_ptr<EagerSingleton> s_instance_;

    EagerSingleton(const EagerSingleton&) = delete;
    EagerSingleton& operator=(const EagerSingleton&) = delete;

public:
    static std::unique_ptr<EagerSingleton>& GetInstance() {
        return s_instance_;
    }

    EagerSingleton() = default;
    ~EagerSingleton() = default;
};

/// 第一次调用时创建实例
class LazySingleton {
public:
    static std::unique_ptr<LazySingleton>& GetInstance() {
        static std::unique_ptr<LazySingleton> s_instance = std::make_unique<LazySingleton>();
        return s_instance;
    }

    LazySingleton() = default;
    ~LazySingleton() = default;

private:
    LazySingleton(const LazySingleton&) = delete;
    LazySingleton& operator=(const LazySingleton&) = delete;
};
