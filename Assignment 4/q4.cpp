#include<bits/stdc++.h>
using namespace std;

class Node{
public :
    int id;
    int quantity;
    Node* next;
    Node(int id,int quantity){
        this->id = id;
        this->quantity = quantity;
        this->next = NULL;
    }
};

int main(){
    int n;
    cin>>n;
    
    Node* c = new Node(0,0);
    Node* temp = c;
    while(n--){
    temp = c;
    int x;
    cin>>x;
    if(x==1){
    int id,q;
    cin>>id>>q;
    Node* t = new Node(id,q);
    while(temp->next){
        temp = temp->next;
    }
    temp->next = t;
    }
    if(x==2){
    int id,q;
    cin>>id>>q;
    Node* t = new Node(id,q); 
    t->next = temp->next;
    temp->next = t;  
    }
    if(x==3){
    if(temp->next) temp->next = temp->next->next;
    }
    }
    int count = 0;
    int sum = 0;
    temp = c->next;
    while(temp){
        count++;
        sum += temp->quantity;
        temp = temp->next;
    }
    cout<<count<<endl;
    cout<<sum<<endl;
}