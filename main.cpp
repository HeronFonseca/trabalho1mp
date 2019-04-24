#include <stdlib.h>
#include <stdio.h>
#include <gtest/gtest.h>
#include "romano.hpp"

   int main(int argc, char** argv){
   	::testing::InitGoogleTest(&argc, argv);
   	return RUN_ALL_TESTS();
   }

TEST(RomanTest, InvalidValue){
	EXPECT_EQ(-1, romanConverter((char*)"1"));
	EXPECT_EQ(-1, romanConverter((char*)"100"));
	EXPECT_EQ(-1, romanConverter((char*)"aaa"));
	EXPECT_EQ(-1, romanConverter((char*)"XXXZ"));
	EXPECT_EQ(-1, romanConverter((char*)"SSSS"));
}

TEST(RomanTest, InvalidNumber){
	EXPECT_EQ(-1, romanConverter((char*)"VV"));
	EXPECT_EQ(-1, romanConverter((char*)"LL"));
	EXPECT_EQ(-1, romanConverter((char*)"DD"));
	EXPECT_EQ(-1, romanConverter((char*)"IIII"));
	EXPECT_EQ(-1, romanConverter((char*)"XXXX"));
	EXPECT_EQ(-1, romanConverter((char*)"CCCC"));
	EXPECT_EQ(-1, romanConverter((char*)"MMMM"));
}

TEST(RomanTest, basictips){
	EXPECT_EQ(1, romanConverter((char*)"I"));
	EXPECT_EQ(5, romanConverter((char*)"V"));
	EXPECT_EQ(10, romanConverter((char*)"X"));
	EXPECT_EQ(50, romanConverter((char*)"L"));
	EXPECT_EQ(100, romanConverter((char*)"C"));
	EXPECT_EQ(500, romanConverter((char*)"D"));
	EXPECT_EQ(1000, romanConverter((char*)"M"));
}


TEST(RomanoTest, addtips){
	EXPECT_EQ(8, romanConverter((char*)"VIII"));
	EXPECT_EQ(15, romanConverter((char*)"XV"));
	EXPECT_EQ(302, romanConverter((char*)"CCCII"));
	EXPECT_EQ(608, romanConverter((char*)"DCVIII"));
	EXPECT_EQ(1250, romanConverter((char*)"MCCL"));
	EXPECT_EQ(2060, romanConverter((char*)"MMLX"));
	
}


TEST(RomanoTest, subtips){
	EXPECT_EQ(9, romanConverter((char*)"IX"));
	EXPECT_EQ(49, romanConverter((char*)"XLIX"));
	EXPECT_EQ(428, romanConverter((char*)"CDXXVIV"));
	EXPECT_EQ(669, romanConverter((char*)"DCLXIX"));
	EXPECT_EQ(1474, romanConverter((char*)"MCDLXXIV"));
	EXPECT_EQ(1511, romanConverter((char*)"MDXI"));	
}



