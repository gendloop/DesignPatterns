﻿#include "pch.h"

int main(int argc, char* argv[]) {
	::testing::InitGoogleTest(&argc, argv);
    ::testing::FLAGS_gtest_filter = "TestExample.Case1";

    ::testing::FLAGS_gtest_filter += ":TestSingleton.*";
    ::testing::FLAGS_gtest_filter += ":TestBuilder.*";

	return RUN_ALL_TESTS();
}
