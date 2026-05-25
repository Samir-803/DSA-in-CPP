#include<iostream>
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

class Deque{
public :
    Node* head;
    Node* tail;
    int size;
    Deque(){
       head = NULL;
       size = 0;
    }

    void pushBack(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = temp;
            tail = temp;
            size++;
            return;
        }
        tail->next = temp;
        temp->prev = tail;
        tail = tail->next;
        size++;
    }

    void pushfront(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = temp;
            tail = temp;
            size++;
            return;
        }
        temp->next = head;
        head->prev = temp;
        head = temp;
        size++;
    }

    void popfront(){
       if(size==0){
        cout<<"Queue is Empty!!"<<endl;
        return;
       }
       Node* temp = head;
       head = head->next;
       size--;
       delete(temp);
       head->prev = NULL;
    }

    void popBack(){
       if(size==0){
        cout<<"Queue is Empty!!"<<endl;
        return;
       }
       Node* temp = tail;
       tail = tail->prev;
       size--;
       delete(temp);
       tail->next = NULL;
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
    Deque q;
    q.pushBack(10);
    q.pushBack(20);
    q.pushBack(30);
    q.pushBack(40);
    q.pushfront(50);
    q.pushfront(60);
    q.display();
    q.popfront();
    q.popBack();
    q.display();
    cout<<q.Size()<<" "<<q.front()<<" "<<q.back();
}
