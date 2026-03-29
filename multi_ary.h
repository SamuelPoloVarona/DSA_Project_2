#ifndef MULTI_ARY_H
#define MULTI_ARY_H

#include <vector>
using namespace std;

class multi_ary {
    static int comparisons;
    static int swaps;

    vector<int> arr;

    public:
    multi_ary();

    //testing
    int getComparisons();
    void setComparisons(int a);
    int getSwaps();
    void setSwaps(int a);

    void heapifyDown(int a);
    void heapifyUp(int a);
    void insert(int num);
    int extractMin();


};



#endif //MULTI_ARY_H
