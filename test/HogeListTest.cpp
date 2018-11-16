#include "HogeListTest.h"

HogeListTest::HogeListTest() {

}

HogeListTest::~HogeListTest() {

}

void HogeListTest::SetUp() {
	sut = new HogeList();
}

void HogeListTest::TearDown() {
	delete sut;
}

TEST_F (HogeListTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
