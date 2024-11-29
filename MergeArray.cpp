#include <iostream>
#include <vector>

std::vector<int> mergeSortedArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> mergedArray;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            mergedArray.push_back(arr1[i]);
            i++;
        } else {
            mergedArray.push_back(arr2[j]);
            j++;
        }
    }
    while (i < arr1.size()) {
        mergedArray.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size()) {
        mergedArray.push_back(arr2[j]);
        j++;
    }

    return mergedArray;
}

