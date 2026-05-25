#include<bits/stdc++.h>
using namespace std;

class Node{
public :
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DLL{
public :
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
    else{
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    size++;
    }
    }

    void insertAtHead(int val){
       Node* temp = new Node(val);
       if(size==0) head = tail = temp;
       temp->next = head;
       head->prev = temp;
       head = temp;
       size++;
    }

    void insertAtIdx(int idx,int val){
        if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
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
            t->prev = temp; 
            t->next->prev = t;
        }
    }

    // Optimise
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"INVALID IDX !! ";
            return -1;
        }
        if(idx==0) return head->val;
        if(idx==size-1) return tail->val;
        else{
            if(idx<(size/2)){
            Node* temp = head;
            for(int i=1;i<=idx;i++) temp = temp->next;
            return temp->val;
            }
            else{ //idx>size/2
            Node* temp = tail;
            for(int i=1;i<size-idx;i++) temp = temp->prev;
            return temp->val;
            }
        }
    }

    void deleteAthead(){
        if(size==0){
            cout<<"List is Empty\n";
            return;
        }
        head = head->next;
        if(head) head->prev = NULL;
        if(head==NULL) tail = NULL;
        size--;
        return;  
    }

    void deleteAtEnd(){
        if(size==0){
            cout<<"List is Empty\n";
            return;
        }
        if(size==1) {
        deleteAthead();
        return;
        }
        Node* temp = tail->prev;
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
            temp->next->prev = temp;
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
    DLL list;
    list.insertAtHead(10);
    list.insertAtTail(20);
    list.insertAtHead(30);
    list.display();
    list.insertAtTail(40);
    list.insertAtTail(50);
    list.display();
    list.insertAtIdx(2,100);
    list.display();
}