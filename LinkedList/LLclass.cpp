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

class LinkedList{
public :
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val){
       Node* temp = new Node(val);
       if(size==0) head = tail = temp;
       tail->next = temp;
       tail = temp;
       size++;
    }

    void insertAtHead(int val){
       Node* temp = new Node(val);
       if(size==0) head = tail = temp;
       temp->next = head;
       head = temp;
       size++;
    }

    void insertAtIdx(int idx,int val){
        if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtEnd(val);
        else if(idx<0 || idx>size){
            cout<<"INVALID IDX !!\n";
            return;
        }
        else{
            Node* temp = head;
            Node* t = new Node(val);
            for(int i=1;i<=idx-1;i++) temp = temp->next;
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"INVALID IDX !! ";
            return -1;
        }
        if(idx==0) return head->val;
        if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++) temp = temp->next;
            return temp->val;
        }
    }

    void deleteAthead(){
        if(size==0){
            cout<<"List is Empty\n";
            return;
        }
        head = head->next;
        size--;
        return;  
    }

    void deleteAtEnd(){
        if(size==0){
            cout<<"List is Empty\n";
            return;
        }
        Node* temp = head;
        while(temp->next!=tail) temp = temp->next;
        temp->next = NULL;
        tail = temp;
        size--;  
    }

    void deleteAtIdx(int idx){  
        if(size==0){
            cout<<"List is Empty\n";
            return;
        }
        else if(idx<0 || idx>size){
            cout<<"INVALID IDX !!\n";
            return;
        }
        if(idx==0) deleteAthead();
        else if(idx==size-1) deleteAtEnd();
        else {
            Node* temp = head;
            for(int i=1;i<=idx-1;i++) temp = temp->next;
            temp->next = temp->next->next;
            size--;
        }
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll;
    ll.insertAtEnd(11);
    ll.insertAtEnd(12);
    ll.insertAtEnd(13);
    ll.insertAtEnd(14);
    ll.insertAtEnd(15);
    ll.insertAtEnd(16);
    ll.insertAtHead(10);
    ll.insertAtEnd(17);
    ll.deleteAthead();
    ll.deleteAtEnd();
    ll.deleteAtIdx(2);
    ll.display();
    cout<<ll.size;
}