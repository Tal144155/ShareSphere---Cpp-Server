//
// Created by Tal on 19/01/2024.
//

#include <gtest/gtest.h>
#include "BloomFilter/BloomFilterArray.h"
#include "BloomFilter/BlackList.h"
#include "BloomFilter/Filter.h"

TEST(BloomFilterArrayTest, BasicTests) {
    //adding new bloom filter array
    BloomFilterArray bmArray = BloomFilterArray();
    //lightning bit number 10
    bmArray.litBit(10);
    //checking if it lit as we wanted.
    ASSERT_EQ(bmArray.isBitLit(10), true);
    //checking that bit number 11 is not lit.
    ASSERT_EQ(bmArray.isBitLit(11), false);
    //adding it to the vector and then checking.
    bmArray.litBit(11);
    ASSERT_EQ(bmArray.isBitLit(11), true);
}

TEST(BlackListURLTest, BasicTests) {
    //creating blacklist object
    BlackList blackList = BlackList();
    //adding first url
    blackList.add("www.com");
    //checking if it was added and if another one is not
    ASSERT_EQ(blackList.doesExist("www.com"), true);
    ASSERT_EQ(blackList.doesExist("www.com2"), false);
    //adding it and checking again.
    blackList.add("www.com2");
    ASSERT_EQ(blackList.doesExist("www.com2"), true);
}

TEST(FilterTest, BasicTests) {
    //creating filter object using static method.
    Filter* filter = Filter::getInstance();
    //adding first url
    blackList.add("www.com");
    //checking if it was added and if another one is not
    ASSERT_EQ(blackList.doesExist("www.com"), true);
    ASSERT_EQ(blackList.doesExist("www.com2"), false);
    //adding it and checking again.
    blackList.add("www.com2");
    ASSERT_EQ(blackList.doesExist("www.com2"), true);
}


