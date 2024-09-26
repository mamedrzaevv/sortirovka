#include <gtest/gtest.h>
#include "selection_sort.h"

TEST(SelectionSortTest, HandlesEmptyArray) {
    int arr[] = {};
    selection_sort(arr, 0);
    EXPECT_EQ(arr[0], 0); // No elements to compare
}

TEST(SelectionSortTest, HandlesSingleElement) {
    int arr[] = {3};
    selection_sort(arr, 1);
    EXPECT_EQ(arr[0], 3);
}

TEST(SelectionSortTest, HandlesBackwardsSortedArray) {
    int arr[] = {5, 4, 3, 2, 1};
    selection_sort(arr, 5);
    EXPECT_EQ(arr[0], 1);
    EXPECT_EQ(arr[4], 5);
}
