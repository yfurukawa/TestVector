#ifndef FUGALISTTEST_H_
#define FUGALISTTEST_H_

#include <gtest/gtest.h>
#include "FugaList.h"

class FugaListTest : public ::testing::Test {
protected:
	FugaList* sut;
	void SetUp();
	void TearDown();

public:
	FugaListTest();
	virtual ~FugaListTest();

};

#endif
