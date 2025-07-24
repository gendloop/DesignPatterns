#pragma once
/**
 * @file	flyweight.h
 * @brief	享元模式
 * @note    - IconFlyweight
 * @author  gendloop
 */

// c++
#include <iostream>
#include <string>
#include <unordered_map>
#include <memory>

/// 共享已创建的对象
class Icon {
private:
    std::string name_;

public:
    virtual ~Icon() = default;
    virtual void draw() = 0;

protected:
    virtual void loadIconFile() = 0;
};

class SaveIcon : public Icon {
public:
    SaveIcon();
    void draw() override;

protected:
    void loadIconFile() override;
};

class OpenIcon : public Icon {
public:
    OpenIcon();
    void draw() override;

protected:
    void loadIconFile() override;
};

class IconFlyweight {
private:
    std::unordered_map<std::string, std::shared_ptr<Icon>> icons_;

public:
    std::shared_ptr<Icon> getIcon(const std::string& iconName) {
        if (icons_.find(iconName) == icons_.end()) {
            if (iconName == "save")         { icons_[iconName] = std::make_shared<SaveIcon>(); }
            else if (iconName == "open")    { icons_[iconName] = std::make_shared<OpenIcon>(); }
        }
        return icons_[iconName];
    }
};
