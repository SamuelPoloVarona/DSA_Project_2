#ifndef MULTI_ARY_H
#define MULTI_ARY_H

#include <vector>
using namespace std;

class multi_ary {
public:
    vector<int> arr;
    int comparisons;
    int swaps;

    multi_ary();

    void heapifyDown(int a);
    void heapifyUp(int a);
    void insert(int num);
    int extractMin();
};

#endif //MULTI_ARY_H