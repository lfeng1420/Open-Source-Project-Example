#include "stdafx.h"
#include "BaseTest.h"


CBaseTest::CBaseTest()
{
}


CBaseTest::~CBaseTest()
{
}


TESTCASE(CBaseTest, Test_01)
void CBaseTest::Test_01()
{
	ASSERT_TRUE(true);
	ASSERT_FALSE(false);
	ASSERT_EQ(0, 1 - 1);
	ASSERT_NE(0, 1);
	ASSERT_GT(1, 0);
	ASSERT_GE(0, 0);
	ASSERT_STRCASEEQ("testcase", "TESTCASE");
	ASSERT_STRNE("test", "tesq");
}
