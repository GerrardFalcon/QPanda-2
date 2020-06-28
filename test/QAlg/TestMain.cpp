#include "gtest/gtest.h"
using namespace std;

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
	auto ret = RUN_ALL_TESTS();

	cout << "GTest over, press Enter to continue." << endl;
	getchar();
	return ret;
}
