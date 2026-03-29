#include <iostream>
#include <chrono>
#include <thread>
#include <vector>
#include <random>
#include "heap.h"
#include  "multi_ary.h"

using namespace std;



int main()
{
    cout<<"---------------"<<endl;
    cout<<"Binary Heap vs 4-Ary Heap test"<<endl;
    cout<<"---------------"<<endl;



while(true) {
    cout<<endl;
    cout<<"Start Test?"<<endl;
    cout<<"A.) yes   B.) No"<<endl;
    cout<<endl;
    std::string Answer;
    cin>>Answer;
    if(Answer == "yes") {
        break;
    }
}
    //Data Generation
    vector<int> dataset;

    for (int i = 0; i < 100000; i++) {
        dataset.push_back(rand() % 1000000);
    }


    //heap test

    BinaryHeap bh;
    {
        auto start = chrono::steady_clock::now();

        for (int x : dataset) {
            bh.insert(x);
        }

        auto end = chrono::steady_clock::now();

        auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

        cout << endl;
        cout << "Binary Heap Time: " << duration.count() << " microseconds" << endl;
        cout << "Comparisons: " << bh.comparisons << endl;
        cout << "Swaps: " << bh.swaps << endl;
    }

    //4-ary heap test
    {
        //whatevr ur class name is
        multi_ary fh;

        auto start = chrono::steady_clock::now();

        for (int x : dataset) {
            fh.insert(x);
        }

        auto end = chrono::steady_clock::now();

        auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

        cout << endl;

        //i added counters in my class for comparisons and swaps just if u wanted to get data there too
        //u can just change the names to the variables u wanna use
        cout << "4-ary Heap Time: " << duration.count() << " microseconds" << endl;
        cout << "Comparisons: " << fh.comparisons << endl;
        cout << "Swaps: " << fh.swaps << endl;
    }
}