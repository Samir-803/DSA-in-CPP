#include<iostream>
using namespace std;

void change(int* a){//you can use int a[] also because when you send an array to any function 
// generally it we sent it's address 
*a = 10;//a[0]
*(a+2) = 5;
}
int main(){
    // you can also use i[arr] instead of arr[i] 
    int arr[] = {1,2,3,4,5};
    change(arr);
    for(int i=0;i<5;i++){
        cout<<i[arr]<<" ";
    }
    int* ptr = arr;
    //IF we do ptr++ then it point next element of that array because array 
    // arranged in a sequence so now my ptr plus by 4 bytes
    
}