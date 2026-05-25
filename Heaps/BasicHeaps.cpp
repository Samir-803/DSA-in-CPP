#include<iostream>
#include<queue>
using namespace std;


// in priority queue we can access only top most element which is 
// gretest element in that queue but if we want to find any other ele
// we have to delete top most ele
int main(){
    // priority_queue<int> pq;  // max heap
    // pq.push(10);
    // pq.push(12);
    // pq.push(5);
    // pq.push(42);
    // pq.push(35);

    // cout<<pq.top()<<endl;  // 42
    // pq.pop();
    // cout<<pq.top()<<endl;   // 35
    // pq.pop();
    // cout<<pq.top()<<endl;   // 12
    // cout<<pq.size();

    priority_queue<int,vector<int>,greater<int>> mpq;  // min heap
    mpq.push(10);
    mpq.push(12);
    mpq.push(5);
    mpq.push(42);
    mpq.push(35);

    cout<<mpq.top()<<endl;  // 5
    mpq.pop();
    cout<<mpq.top()<<endl;   // 10
    mpq.pop();
    cout<<mpq.top()<<endl;   // 12
    cout<<mpq.size();
}