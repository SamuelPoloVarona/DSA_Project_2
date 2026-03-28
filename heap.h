#ifndef BINARYHEAP_H
#define BINARYHEAP_H

#include <vector>
using namespace std;

class BinaryHeap {
public:
    vector<int> heap;
    int comparisons;
    int swaps;

    BinaryHeap();

    void insert(int val);
    int deleteMin();

private:
    void heapifyUp(int i);
    void heapifyDown(int i);
};

#endif