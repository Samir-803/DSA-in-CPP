#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(1);
    cout<<arr.size()<<" ";
    arr.push_back(2);
    cout<<arr.size()<<" ";
    arr.push_back(3);
    cout<<arr.size()<<" ";
    arr.push_back(4);
    cout<<arr.size()<<endl;
    // arr.size() tells us the size of that vector/array
    // arr.capacity() tells us how many element you can store in that vector/array
    arr.push_back(5);
    cout<<arr.capacity()<<" ";
    arr.push_back(6);
    cout<<arr.capacity()<<" ";
    arr.push_back(7);
    cout<<arr.capacity()<<" ";
    arr.push_back(8);
    cout<<arr.capacity()<<" ";
    // Now all element arrenged in vector there is no more space so if now we do arr.push_back it create a new 8 sapce 
    // so total 16 space so capacity is 16 and sapce is 9
    arr.push_back(8);
    cout<<arr.capacity()<<" ";
    cout<<arr.size();
}
    
