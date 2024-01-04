#include "pch.h"
#include "C:\Users\macie\Desktop\inżynieria oprogramownia\testy\ConsoleApplication1\ConsoleApplication1\funkcje.cpp"
#include "gtest/gtest.h"


// Test dla logarytmu naturalnego
TEST(LogarytmNaturalnyTest, PositiveValue) {
    EXPECT_DOUBLE_EQ(logarytmNaturalny(10.0), 2.3025850929940459);
}

TEST(LogarytmNaturalnyTest, ZeroValue) {
    EXPECT_DOUBLE_EQ(logarytmNaturalny(0.0), -INFINITY);
}

// Test dla odchylenia standardowego
TEST(OdchylenieStandardoweTest, NonEmptyVector) {
    std::vector<double> numbers = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    EXPECT_DOUBLE_EQ(odchylenieStandardowe(numbers), 1.4142135623730951);
}

TEST(OdchylenieStandardoweTest, EmptyVector) {
    std::vector<double> numbers;
    EXPECT_DOUBLE_EQ(odchylenieStandardowe(numbers), 0.0);
}

// Test dla exponenty
TEST(ExponentaTest, PositiveValue) {
    EXPECT_DOUBLE_EQ(exponenta(1.0), 2.7182818284590451);
}

TEST(ExponentaTest, ZeroValue) {
    EXPECT_DOUBLE_EQ(exponenta(0.0), 1.0);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
