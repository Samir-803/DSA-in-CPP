#include<iostream>
using namespace std;
void change(int arr[]){
    //in 1D array you don't need to give size to that function
    arr[0] = 100;
}
void change2D(int arr[3][3]){
    //in 2D array you must give size of row and colomn then you send it to that function
    arr[0][0] = 100;
}
int main(){
    // int arr[] = {1,2,3};
    // cout<<arr[0];
    // change(arr);
    // cout<<endl;
    // cout<<arr[0];
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0];
    change2D(arr);
    cout<<endl;
    cout<<arr[0][0];
}
