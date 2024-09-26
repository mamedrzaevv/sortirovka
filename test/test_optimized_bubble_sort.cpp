#include <gtest/gtest.h>
#include "optimized_bubble_sort.h"

TEST(OptimizedBubbleSortTest, HandlesEmptyArray) {
    int arr[] = {};
    optimized_bubble_sort(arr, 0);
    EXPECT_EQ(arr[0], 0); // No elements to compare
}

TEST(OptimizedBubbleSortTest, HandlesSingleElement) {
    int arr[] = {10};
    optimized_bubble_sort(arr, 1);
    EXPECT_EQ(arr[0], 10);
}

TEST(OptimizedBubbleSortTest, HandlesAlreadySortedArray) {
    int arr[] = {1, 2, 3, 4, 5};
    optimized_bubble_sort(arr, 5);
    EXPECT_EQ(arr[0], 1);
    EXPECT_EQ(arr[4], 5);
}
