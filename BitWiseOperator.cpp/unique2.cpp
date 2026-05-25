#include<bits/stdc++.h>
using namespace std;
// XOR is Comutative
void findunique(int* arr,int n){
    int res = 0;
    for(int i=0;i<n;i++) res ^= arr[i];
    int temp = res;
    int k =  0;
    while(true){
        if((temp & 1)==1) break;
        temp = temp>>1;
        k++;
    }
    int retval = 0;
    for(int i=0;i<n;i++){
        if(((arr[i]>>k) & 1)==1) retval ^= arr[i];
    }
    cout<<"First Number is : "<<retval<<endl;
    res ^= retval;
    cout<<"Second Number is : "<<res;
}
int main(){
    int arr[] = {1,2,3,6,5,1,3,2,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    findunique(arr,n);
}
// for next question i don't want to code is 
// so problem is to find max len of subarray which has highest value of bitwise AND ope
// so if you do AND of any two no it will be less then max of those no
// if no are same then AND is that no
// so you just find max no and if there is multiple max continusley then len of all