#include <gtest/gtest.h>
#include "bubble_sort.h"

TEST(BubbleSortTest, HandlesEmptyArray) {
    int arr[] = {};
    bubble_sort(arr, 0);
    EXPECT_EQ(arr[0], 0); // No elements to compare
}

TEST(BubbleSortTest, HandlesSingleElement) {
    int arr[] = {7};
    bubble_sort(arr, 1);
    EXPECT_EQ(arr[0], 7);
}

TEST(BubbleSortTest, HandlesPartiallySortedArray) {
    int arr[] = {5, 3, 8, 4, 2};
    bubble_sort(arr, 5);
    EXPECT_EQ(arr[0], 2);
    EXPECT_EQ(arr[4], 8);
}
