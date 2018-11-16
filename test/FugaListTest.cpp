#include "FugaListTest.h"

FugaListTest::FugaListTest() {

}

FugaListTest::~FugaListTest() {

}

void FugaListTest::SetUp() {
	sut = new FugaList();
}

void FugaListTest::TearDown() {
	delete sut;
}

TEST_F (FugaListTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
