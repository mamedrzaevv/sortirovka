#include <gtest/gtest.h>
#include "exchange_sort.h"

TEST(ExchangeSortTest, HandlesEmptyArray) {
    int arr[] = {};
    exchange_sort(arr, 0);
    EXPECT_EQ(arr[0], 0); // No elements to compare
}

TEST(ExchangeSortTest, HandlesSingleElement) {
    int arr[] = {8};
    exchange_sort(arr, 1);
    EXPECT_EQ(arr[0], 8);
}

TEST(ExchangeSortTest, HandlesSortedArray) {
    int arr[] = {1, 2, 3, 4, 5};
    exchange_sort(arr, 5);
    EXPECT_EQ(arr[0], 1);
    EXPECT_EQ(arr[4], 5);
}
