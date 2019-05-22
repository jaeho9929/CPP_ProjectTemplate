#include <iostream>
#include "gtest/gtest.h"

#include "ProjectTemplate/MyComplex.hpp"


TEST(MyComplexTest, CtorDefaultReal) {
    MyComplex myComplex;
    EXPECT_DOUBLE_EQ(0.0, myComplex.getReal());
}

TEST(MyComplexTest, CtorDefaultImg) {
    MyComplex myComplex;
    EXPECT_DOUBLE_EQ(0.0, myComplex.getImg());
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