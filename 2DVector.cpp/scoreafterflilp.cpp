#include<bits/stdc++.h>
using namespace std;
int maxsum(vector<vector<int> > v){
    int r = v.size();
    int c = v[0].size();
    //make first colomn only 1's to increase value
    for(int i=0;i<r;i++){
        if(v[i][0] == 0){
            for(int j=0;j<c;j++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    }
    // now check colomn whic has highest zero's and then flip 
    for(int j=0;j<c;j++){
        int noz = 0;
        int noo = 0;
        for(int i=0;i<r;i++){
            if(v[i][j]==1) noo++;
            else noz++;
        }
        if(noz>noo){
            for(int i=0;i<r;i++){
                if(v[i][j]==0) v[i][j]=1;
                else v[i][j]=0;
            }
        }
    } 
    int sum = 0;
    for(int i=0;i<r;i++){
        int x=1;
        for(int j=0;j<c;j++){
            sum += v[i][j]*x;
            x *= 2;
        }
    }
    return sum;
}
int main(){  
    int r1;
    cout<<"Enter the No of Rows of Metix : ";
    cin>>r1;
    int c1;
    cout<<"Enter the No of Colomns of Metix : ";
    cin>>c1;
    vector<vector<int> >v(r1,vector<int>(c1)); 
    cout<<"Enter The Element of Metix : "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>v[i][j];
        }
    }
    cout<<"The Max Sum after flipling is : ";
    cout<<maxsum(v);   
}
