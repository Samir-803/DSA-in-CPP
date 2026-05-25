#include<bits/stdc++.h>
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

void Reordering(queue<int> &q){
    int n = q.size();
    stack<int>st;
    // empty half part of queue in stack
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }

    // push st into q
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

    // move other half part in stack
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }

    // alternative push
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }

    // reverse the queue
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    return;
}

int main(){
    queue<int>q;
    for(int i=1;i<=10;i++) q.push(i);
    display(q);
    Reordering(q);
    display(q);
}