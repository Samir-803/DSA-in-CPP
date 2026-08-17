#include<bits/stdc++.h>
using namespace std;
// XOR From 1 to n
int f(int n){
    if(n%4 == 1) return 1;
    else if(n%4 == 2) return n+1;
    else if(n%4 == 3) return 0;
    else return n;
}

int XOR(int l, int r){
    return f(l-1)^f(r);
}

int main(){
    cout << XOR(1, 4);
}