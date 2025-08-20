#include "pch.h"
/**
 * @file	test_composite.cpp
 * @brief	测试组合模式
 * @author  gendloop
 */

// local
#include "../src/structural-patterns/composite.h"

TEST(TestComposite, FileComponent) {
    std::shared_ptr<File> file1 = std::make_shared<File>("file1.txt");
    file1->setSize(1);
    std::shared_ptr<File> file2 = std::make_shared<File>("file1.txt");
    file2->setSize(10);
    std::shared_ptr<Directory> dir1 = std::make_shared<Directory>("dir1");
    std::shared_ptr<Directory> dir2 = std::make_shared<Directory>("dir2");

    dir1->add(file1);
    dir2->add(file2);
    dir1->add(dir2);
    EXPECT_EQ(dir1->getSize(), 11);
}
