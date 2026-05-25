#include<bits/stdc++.h>
using namespace std;
float max(float a,float b){
    if(a>=b) return a;
    else return b;
}
float min(float a,float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Element of Array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float kmin = INT_MIN;
    float kmax = INT_MAX;
    bool flag = false;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){ //kmin
         kmin = max(kmin,((arr[i]+arr[i+1])/2.0));
        }
        else{ //kmax
         kmax = min(kmax,((arr[i]+arr[i+1])/2.0));
        }
        if(kmin>kmax) {
          flag = true;
          break;
        }
    }
    if(flag) cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)kmin==0){
        cout<<"There is only 1 value of K : "<<kmin;
        }
        else cout<<-1;
    }
    else{
        if(kmin - (int)kmin>0){
            kmin = (int)kmin + 1;
        }
        cout<<"Range of K is : "<<"[" <<kmin<<","<< (int)kmax <<"]";
    }
}
