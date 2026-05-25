#include<bits/stdc++.h>
using namespace std;

int main(){  
    int r1;
    cout<<"Enter the No of Rows of Metix : ";
    cin>>r1;
    int c1;
    cout<<"Enter the No of Colomns of Metix : ";
    cin>>c1;
    vector<vector<int> >v(r1,vector<int>(c1)); 
    cout<<"Enter The Element of metrix : "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>v[i][j];
        }
    }
    vector<vector<int> > brr(r1,vector<int> (c1,-1));
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
           if(brr[i][j]==0) continue;
           if(v[i][j]!=0) brr[i][j]=v[i][j];
           else if(v[i][j]==0){
            for(int k=0;k<r1;k++) brr[k][j]=0;
            for(int k=0;k<c1;k++) brr[i][k]=0;
           }
    }
}
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }

}