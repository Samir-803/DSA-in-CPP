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
    int n;
    cin>>n;
    Node* c = new Node(0);
    Node* temp = c;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        Node* x = new Node(a);
        temp->next = x;
        temp = temp->next;
    }

    Node* head = c->next;
    temp = head;
    int count = 0;
    int sum =  0;
    while(temp){
    if(temp->val>=75){
        count++;
        sum += temp->val;
    }
    temp = temp->next;
    }
    cout<<n<<endl;
    cout<<count<<endl;
    if(count==0) cout<<0<<endl;
    else cout<<sum/count<<endl;
}