#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int o = n%10;
    n /= 10;
    int t = n%10;
    n /= 10;
    int h = n%10;
    n /= 10;
    int th = n%10;
    n /= 10;
    vector<int>arr(4);
    arr[0] = o;
    arr[1] = t;
    arr[2] = h;
    arr[3] = th;
    sort(arr.begin(),arr.end());
    int min1 = arr[0];
    min1 *= 10;
    min1 += arr[3];
    int min2 = arr[1];
    min2 *= 10;
    min2 += arr[2];
    int minsum = min1 + min2;
    cout<<"Min Sum of this Number is : "<<minsum;
    }
