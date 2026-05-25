#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);

    cout<<"Before Pop"<<endl;
    cout<<"Size is : "<<arr.size()<<endl;
    cout<<"capacity is : "<<arr.capacity()<<endl;

    // pop_back generally use to delete last element of that array 
    // remember only last element so only size will decrease 'No' impact on "capacity"
    
    arr.pop_back();
    arr.pop_back();
    
    cout<<endl<<"After Pop"<<endl;
    cout<<"Size is : "<<arr.size()<<endl;
    cout<<"capacity is : "<<arr.capacity()<<endl;
}
    
