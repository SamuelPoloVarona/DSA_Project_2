#include "multi_ary.h"
using namespace std;

//constructing
multi_ary::multi_ary() {
    comparisons = 0;
    swaps = 0;
}

//Heap functionality
void multi_ary::insert(int num) {
    arr.push_back(num);
    heapifyUp(arr.size()-1);
}

int multi_ary::extractMin() {
    if(arr.empty()) {
        return -1;
    }
    int result = arr.at(0);
    arr.at(0) = arr.back();
    arr.pop_back();

    if (!arr.empty()) {
        heapifyDown(0);
    }
    return result;
}

void multi_ary::heapifyUp(int i) {
    while (i > 0) {
        int p = (i - 1) / 4;

        comparisons++;
        if (arr.at(i) < arr.at(p)) {
            swaps++;
            swap(arr.at(i), arr.at(p));
            i = p;
        } else {
            break;
        }
    }
}

void multi_ary::heapifyDown(int i) {
    int size = arr.size();

    while(true) {
        int small = i;

        for (int j = 1; j <= 4; j++) {
            int child = 4 * i + j;
            if (child < size) {
                comparisons++;
                if (arr.at(child) < arr.at(small)) {
                    small = child;
                }
            }
        }

        if(small != i) {
            swaps++;
            swap(arr.at(i), arr.at(small));
            i = small;
        } else {
            break;
        }
    }
}