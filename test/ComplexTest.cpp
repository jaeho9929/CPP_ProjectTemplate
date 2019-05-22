#include <iostream>
#include "gtest/gtest.h"

#include "ProjectTemplate/MyComplex.hpp"

TEST(MyComplexTest, CopiedObjectAbsPositiveInput) {
    MyComplex source(2, 3);
    MyComplex target = source;
    double absResult = target.abs();
    EXPECT_DOUBLE_EQ(sqrt(13.0), absResult);
}

TEST(MyComplexTest, CopiedObjectAbsNegativeInput) {
    MyComplex source(-2, -3);
    MyComplex target = source;
    double absResult = target.abs();
    EXPECT_DOUBLE_EQ(sqrt(13.0), absResult);
}

TEST(MyComplexTest, AbsPositiveInput) {
    MyComplex myComplex(2, 3);
    double absResult = myComplex.abs();
    EXPECT_DOUBLE_EQ(sqrt(13.0), absResult);
}

TEST(MyComplexTest, AbsNegativeInput) {
    MyComplex myComplex(-2, -3);
    double absResult = myComplex.abs();
    EXPECT_DOUBLE_EQ(sqrt(13.0), absResult);
}

// TODO test fixture examples