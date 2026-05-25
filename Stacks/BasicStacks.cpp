#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    cout<<st.size()<<endl;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size()<<endl;

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    
    // print stack in reverse order
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}