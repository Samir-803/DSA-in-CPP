#include<bits/stdc++.h>
using namespace std;
bool find(vector<vector<int> > &v,int target){
   int r = v.size();
   int c = v[0].size();
   int i = 0;
   int j = c-1;
   while(i<r && j>=0){
    if(v[i][j]==target) return true;  
    else if(v[i][j]>target) j--;
    else i++;
   }
   return false; 
}
int main(){  
    int r1;
    cout<<"Enter the No of Rows of Metix : ";
    cin>>r1;
    int c1;
    cout<<"Enter the No of Colomns of Metix : ";
    cin>>c1;
    vector<vector<int> >v(r1,vector<int>(c1)); 
    cout<<"Enter The Element sorted  metrix : "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>v[i][j];
        }
    }
    // 1 4 7 11 15
    // 2 5 8 12 19
    // 3 6 9 16 22
    // 10 13 14 17 24
    // 18 21 23 26 30
    int n;
    cout<<"Enter a number you want to find : ";
    cin>>n;
    bool flag = find(v,n);
    if(flag==true) cout<<"Element is present";
    else cout<<"Element is not present";
}
