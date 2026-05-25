#include<bits/stdc++.h>
using namespace std;

class Node{
public :
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // Link them
    a.next = &b;
    b.next = &c;
    c.next = &d;

    cout<<a.val<<" ";  // a
    cout<<(*(a.next)).val<<" "; // b
    cout<<(*((*(a.next)).next)).val<<" ";//c
    cout<<(*((*((*(a.next)).next)).next)).val<<endl;  // d

    cout<<a.val<<" ";
    cout<<a.next->val<<" ";
    cout<<a.next->next->val<<" ";
    cout<<a.next->next->next->val<<endl;

    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }
}
