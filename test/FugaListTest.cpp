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

TEST_F (FugaListTest, testGetInstance_FiveInstance) {
/* Write a test code here. */
	sut->initialize();
	EXPECT_EQ(5,sut->getSize());
}

TEST_F (FugaListTest, testGetFugaInterger_FiveInstance) {
/* Write a test code here. */
	sut->initialize();
	EXPECT_EQ(5,sut->getIntegersSize());
}

TEST_F (FugaListTest, testGetFugaSubstantial_FiveInstance) {
/* Write a test code here. */
	sut->initialize();
	EXPECT_EQ(5,sut->getFugaSubstantialSize());
}
