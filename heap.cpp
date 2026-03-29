//
// Created by Trinca on 3/28/26.
//

#include "heap.h"


// constructor
BinaryHeap::BinaryHeap() {
    comparisons = 0;
    swaps = 0;
}

//insert
void BinaryHeap::insert(int val) {
    heap.push_back(val);
    heapifyUp(heap.size() - 1);
}

//heapifyup
void BinaryHeap::heapifyUp(int i) {
    while (i > 0) {
        int parent = (i - 1) / 2;

        comparisons++;
        if (heap[parent] > heap[i]) {
            int temp = heap[parent];
            heap[parent] = heap[i];
            heap[i] = temp;
            swaps++;

            i = parent;
        } else {
            break;
        }
    }
}

//delete
int BinaryHeap::deleteMin() {
    if (heap.size() == 0) return -1;

    int minVal = heap[0];

    heap[0] = heap.back();
    heap.pop_back();

    heapifyDown(0);

    return minVal;
}

//heapifydown
void BinaryHeap::heapifyDown(int i) {
    int size = heap.size();

    while (true) {
        int left = 2*i + 1;
        int right = 2*i + 2;

        int smallest = i;

        if (left < size) {
            comparisons++;
            if (heap[left] < heap[smallest]) {
                smallest = left;
            }
        }

        if (right < size) {
            comparisons++;
            if (heap[right] < heap[smallest]) {
                smallest = right;
            }
        }

        if (smallest != i) {
            int temp = heap[i];
            heap[i] = heap[smallest];
            heap[smallest] = temp;
            swaps++;

            i = smallest;
        } else {
            break;
        }
    }
}