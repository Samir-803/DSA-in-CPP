#include<bits/stdc++.h>
using namespace std;
int maze(int sr,int sc,int er,int ec){
  if(sr>er || sc>ec) return 0;
  if(sr==er && sc==ec) return 1;
  int rightways = maze(sr,sc+1,er,ec);
  int downways = maze(sr+1,sc,er,ec);
  return rightways + downways;  
}

int main(){
    int r;
    cout<<"Enter No of Rows : ";
    cin>>r;
    int c;
    cout<<"Enter No of Colomn : ";
    cin>>c;
    cout<<"Total ways : "<<maze(1,1,r,c);
}