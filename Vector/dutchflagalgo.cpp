#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    cout<<"Enter the element of vector : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        }
        int low = 0;
        int mid = 0;
        int high = v.size()-1;
        // Mid ke bare me hi sochana hai!!
        while(mid<=high){
            if(v[mid]==2) {swap(v[mid],v[high]);high--;}
            else if(v[mid]==0) {swap(v[mid],v[low]);low++;mid++;}
            else mid++;
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        } 

    // Time Complexity = O(n);
    // Space Complexity = O(1);
    }