/**
 * @file	composite.cpp
 * @brief	组合模式
 * @note    - FileComponent
 * @author  gendloop
 */

// local
#include "composite.h"

FileComponent::FileComponent(const std::string& name)
    : name_(name)
{
}

File::File(const std::string& name)
    : FileComponent(name)
{
}

int File::getSize() const
{
    return size_;
}

void File::setSize(int size)
{
    size_ = size;
}

Directory::Directory(const std::string& name)
    : FileComponent(name)
{
}

int Directory::getSize() const
{
    int sum = 0;
    for(const auto& child : children_) {
        sum += child->getSize();
    }
    return sum;
}

void Directory::add(const std::shared_ptr<FileComponent>& component)
{
    children_.push_back(component);
}
