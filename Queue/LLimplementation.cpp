#include<iostream>
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

class Queue{
public :
    Node* head;
    Node* tail;
    int size;
    Queue(){
       head = NULL;
       size = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = temp;
            tail = temp;
        }
        tail->next = temp;
        tail = tail->next;
        size++;
    }

    void pop(){
       if(size==0){
        cout<<"Queue is Empty!!"<<endl;
        return;
       }
       Node* temp = head;
       head = head->next;
       size--;
       delete(temp);
    }

    int front(){
      if(size==0){
        cout<<"Queue is Empty!!"<<endl;
            return -1;   
        }
       return head->val;  
    }

    int back(){
     if(size==0){
        cout<<"Queue is Empty!!"<<endl;
            return -1;    
        }
    return tail->val;   
    }

    int Size(){
        return size;
    }

    bool empty(){
        if(size==0) return true;
        else return false;
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
    cout<<q.front()<<" ";
    cout<<q.back()<<" ";
    cout<<q.Size();
}