#ifndef HOGELISTTEST_H_
#define HOGELISTTEST_H_

#include <gtest/gtest.h>
#include "HogeList.h"

class HogeListTest : public ::testing::Test {
protected:
	HogeList* sut;
	void SetUp();
	void TearDown();

public:
	HogeListTest();
	virtual ~HogeListTest();

};

#endif
