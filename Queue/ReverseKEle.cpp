#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void display(queue<int> &q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reverseKEle(queue<int>&q,int k){
    stack<int>st;
    for(int i=1;i<=k;i++){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()>0){
        int x = st.top();
        st.pop();
        q.push(x);
    }
    for(int i=1;i<=q.size()-k;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
    return;
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40); 
    q.push(50);
    display(q);
    reverseKEle(q,3);
    display(q);
}