#pragma once


#if defined(WIN32) || defined(WIN64)

#ifdef _DEBUG
#pragma comment(lib, "gtestd.lib")
#else
#pragma comment(lib, "gtest.lib")
#endif

#else

#include <unistd.h>

#endif


#include <iostream>
using namespace std;


#include "gtest/gtest.h"
#define TESTCASE(clsname, casename) TEST_F(clsname,casename) { casename(); }