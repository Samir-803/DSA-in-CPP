#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,4,2,3,9,8};
    int* ptr = arr;
    // int* ptr = &arr[0];
    // after giving array's address you easily excess any element of that array 
    ptr[0]= 10;
    *ptr = 18;
    for(int i=0;i<6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<"\n";
    //now pointer loss address of array so we have to give it's address 
    ptr = arr;
    for(int i=0;i<6;i++){
        *ptr = i+1;
        ptr++;
    }
   ptr = arr;
   for(int i=0;i<6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}