#include <gtest/gtest.h>
#include "insertion_sort.h"

TEST(InsertionSortTest, HandlesEmptyArray) {
    int arr[] = {};
    insertion_sort(arr, 0);
    EXPECT_EQ(arr[0], 0); // No elements to compare
}

TEST(InsertionSortTest, HandlesSingleElement) {
    int arr[] = {5};
    insertion_sort(arr, 1);
    EXPECT_EQ(arr[0], 5);
}

TEST(InsertionSortTest, HandlesUnsortedArray) {
    int arr[] = {5, 2, 9, 1, 5, 6};
    insertion_sort(arr, 6);
    EXPECT_EQ(arr[0], 1);
    EXPECT_EQ(arr[5], 9);
}