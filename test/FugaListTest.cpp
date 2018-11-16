#include "FugaListTest.h"
#include "FugaList.h"

FugaListTest::FugaListTest() : sut(NULL){

}

FugaListTest::~FugaListTest() {

}

void FugaListTest::SetUp() {
	sut = new FugaList();
}

void FugaListTest::TearDown() {
	delete sut;
}

TEST_F (FugaListTest, testGetInstance_OneInstance) {
/* Write a test code here. */
	sut->initialize();
	EXPECT_EQ(1,sut->getSize());
}

TEST_F (FugaListTest, testGetFugaInterger_OneInstance) {
/* Write a test code here. */
	sut->initialize();
	EXPECT_EQ(1,sut->getIntegersSize());
}
