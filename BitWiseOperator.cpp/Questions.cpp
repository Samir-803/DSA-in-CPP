#include<bits/stdc++.h>
using namespace std;

void swapNumber(int& a, int& b){
    a = a^b;
    b = a^b;
    a = a^b;
    return;
}

int checkSetbit(int n, int idx){
    return (n&(1<<idx));
}

int setithBit(int n, int idx){
    return (n|(1<<idx));
}

int clearithSetbit(int n, int idx){
    return (n&(~(1<<idx)));
}

int ToggleithBit(int n, int idx){
    return (n^(1<<idx)); 
}

int RemoveLastSetBit(int n){
    return n&(n-1);
}

int checkPowerof2(int n){
    return ((n&(n-1)) == 0);
}

int MinBitFliptoConvertNum(int start, int goal){
    int ans = start^goal;
    int cnt = 0;
    while(ans > 0){
        ans = ans&(ans-1);
        cnt++;
    }
    return cnt;
}
int main(){
    int a = 5, b = 6;
    swapNumber(a, b);
    cout<<a<<" "<<b<<endl;

    cout<<checkSetbit(5, 2)<<endl;
    cout<<setithBit(5, 1)<<endl;
    cout<<clearithSetbit(7, 2)<<endl;
    cout<<MinBitFliptoConvertNum(10, 7);
}