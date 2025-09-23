#include "gtest/gtest.h"
#include <map>
#include <exception>

TEST(FetchContent, Test1)
{
    ASSERT_EQ(2 + 2, 4);
}

TEST(FetchContent, Test2)
{
    std::map<int, int> m;

    ASSERT_THROW(m.at(7), std::out_of_range);
}