#include<bits/stdc++.h>
using namespace std;

// 1st techenic
// int main(){
//     int n;
//     cout<<"Enter size of Array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the Element of Array : ";
//     for(int i=0;i<n;i++) cin>>arr[i];
//     int i = 0;
//     int j = i+1;
//     int count = 0;
//     while(i<n-1){
//         if(j>n-1) {
//             i++;
//             j = i+1;
//         }
//     else if(arr[i]>arr[j]){
//         count++;
//         j++;
//     }
//     else j++;
//     }
//     cout<<"Total Number of Inversion is : "<<count;
// }

// using Merge Sort
void Merge(vector<int>& v,vector<int>& a,vector<int>& b){
    int i=0,j=0,k=0;

    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) v[k++] = a[i++];
        else v[k++] = b[j++]; 
    }

    if(i==a.size()) while(j<b.size()) v[k++] = b[j++];
    if(j==b.size()) while(i<a.size()) v[k++] = a[i++];
}
int Inversion(vector<int>& a,vector<int>& b){
    int i = 0 , j = 0 , count = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count += (a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
}
int MergeSort(vector<int>& v){
    int count = 0;
    int n = v.size();
    if(n==1) return 0;
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
    count += MergeSort(a);
    count += MergeSort(b);

    // count Inversion
    count += Inversion(a,b);

    // concanatation
    Merge(v,a,b);

    // Delete Extra Space 
    a.clear();
    b.clear(); 
    return count;
}
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Element of Array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int count = 0;
    vector<int> v(arr,arr+n);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    cout<<MergeSort(v);
}