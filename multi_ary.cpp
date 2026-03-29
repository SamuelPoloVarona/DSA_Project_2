#include "multi_ary.h"
using namespace std;

int multi_ary::comparisons = 0;
int multi_ary::swaps = 0;

//constructing
multi_ary::multi_ary() {
    setComparisons(0);
    setSwaps(0);
}

int multi_ary::getComparisons() {
    return comparisons;
}

void multi_ary::setComparisons(int a) {
    comparisons = a;
}

int multi_ary::getSwaps() {
    return swaps;
}
void multi_ary::setSwaps(int a) {
    swaps = a;
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
    arr.at(0) = arr.at(arr.size()-1);
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
    int small = i;
    int parent = i;
    while(true) {
        int one = (parent*4)+1;
        int two = (parent*4)+2;
        int three = (parent*4)+3;
        int four = (parent*4)+4;

        comparisons++;
        if(one<arr.size()) {
            small = one;
            comparisons++;
            if(two<arr.size() && arr.at(two)<arr.at(small)) {
                small = two;
                comparisons++;
                if(three<arr.size() && arr.at(three)<arr.at(small)) {
                    small = three;
                    comparisons++;
                    if(four<arr.size() && arr.at(four)<arr.at(small)) {
                        small = four;
                    }
                }
            }
        }

        comparisons++;
        if(arr.at(parent) > arr.at(small)) {
            swaps++;
            swap(arr.at(parent), arr.at(small));
            parent = small;
        } else {
            break;
        }
    }
}





