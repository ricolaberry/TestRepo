#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "../MyLibrary/MyClass.h"

using namespace testing;

TEST(MyClassTest, add_two_and_tree_expect_five)
{
	MyClass testee;

	EXPECT_EQ(testee.add(2, 3), 5);
}
