#include "pch.h"

int main(int argc, char* argv[]) {
	::testing::InitGoogleTest(&argc, argv);
    ::testing::FLAGS_gtest_filter = "TestExample.Case1";

    //::testing::FLAGS_gtest_filter += ":TestSingleton.*";
    //::testing::FLAGS_gtest_filter += ":TestBuilder.*";
    //::testing::FLAGS_gtest_filter += ":TestFlyweight.*";
    //::testing::FLAGS_gtest_filter += ":TestStrategy.*";
    //::testing::FLAGS_gtest_filter += ":TestChainOfResponsibility.*";
    //::testing::FLAGS_gtest_filter += ":TestTemplate.*";
    //::testing::FLAGS_gtest_filter += ":TestState.*";
    //::testing::FLAGS_gtest_filter += ":TestFactory.*";
    //::testing::FLAGS_gtest_filter += ":TestAbstractFactory.*";
    ::testing::FLAGS_gtest_filter += ":TestComposite.*";

	return RUN_ALL_TESTS();
}
