#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>& v,vector<int>& a,vector<int>& b){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) v[k++] = a[i++];
        else v[k++] = b[j++]; 
    }
    if(i==a.size()) while(j<b.size()) v[k++] = b[j++];
    if(j==b.size()) while(i<a.size()) v[k++] = a[i++];
}

void MergeSort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1,n2;
    n1 = n/2 ;
    n2 = n - n/2;

    vector<int> a(n1),b(n2);

    for(int i=0;i<n1;i++){
      a[i] = v[i];
    }
    for(int i=0;i<n2;i++){
      b[i] = v[i+n1];
    }
    // magic
    MergeSort(a);
    MergeSort(b);

    // concanatation
    Merge(v,a,b);

    // Delete Extra Space 
    a.clear();
    b.clear();
}
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Element of Array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> v(arr,arr+n); // copy array in any vector
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    MergeSort(v);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}
// Time Complexity : O(nlogn)