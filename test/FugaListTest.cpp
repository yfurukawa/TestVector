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

TEST_F (FugaListTest, testGetInstance_FourInstance) {
/* Write a test code here. */
	sut->initialize();
	sut->deleteFuga();
	EXPECT_EQ(4,sut->getSize());
}

TEST_F (FugaListTest, testGetFugaInterger_FourInstance) {
/* Write a test code here. */
	sut->initialize();
	sut->deleteFugaInteger();
	EXPECT_EQ(4,sut->getIntegersSize());
}

TEST_F (FugaListTest, testGetFugaSubstantial_FourInstance) {
/* Write a test code here. */
	sut->initialize();
	sut->deleteFugaSubstantial();
	EXPECT_EQ(4,sut->getFugaSubstantialSize());
}
