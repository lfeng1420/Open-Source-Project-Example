#include "stdafx.h"


int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();

	cout << "Press Enter key to continue...";
	fgetc(stdin);

	return 0;
}