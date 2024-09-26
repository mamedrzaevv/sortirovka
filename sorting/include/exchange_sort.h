#ifndef EXCHANGE_SORT_H
#define EXCHANGE_SORT_H

template <typename T>
void exchange_sort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

#endif