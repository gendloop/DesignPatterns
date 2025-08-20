#pragma once
/**
 * @file	composite.h
 * @brief	组合模式
 * @note    - FileComponent
 * @author  gendloop
 */

// c++
#include <iostream>
#include <vector>

class FileComponent {
public:
    explicit FileComponent(const std::string& name);
    virtual ~FileComponent() = default;
    virtual int getSize() const = 0;

protected:
    std::string name_;
};

class File : public FileComponent {
public:
    explicit File(const std::string& name);
    int getSize() const override;
    void setSize(int size);

private:
    int size_ = 0;
};

class Directory : public FileComponent {
public:
    explicit Directory(const std::string& name);
    int getSize() const override;
    void add(const std::shared_ptr<FileComponent>& component);

private:
    std::vector<std::shared_ptr<FileComponent>> children_;
};
