#include <iostream>
#include <chrono>
#include <thread>

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


    //heap test

    //4-ary heap test
    auto start = chrono::steady_clock::now();



    auto end = chrono::steady_clock::now();



    auto duration = duration_cast<std::chrono::microseconds>(end - start);



    return 0;
}