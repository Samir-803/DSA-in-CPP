#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of lines : ";
    cin>>n;
    if(n%2==0) cout<<"Doesn't Make This Pattern";
    else {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i == n/2 + 1 || j == n/2 + 1 ){
                    cout<<"* ";
                }
                else cout<<"  ";
            }cout<<endl;
        }
    }
}