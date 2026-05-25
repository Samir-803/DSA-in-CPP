#include<iostream>
#include<queue>
using namespace std;

class Queue{
public :
    int f;
    int b;
    int size;
    vector<int>arr;
    Queue(){
    size = 0;
    f = 0;
    b = 0;
    }

    void push(int val){
        if(b==5){
            cout<<"Queue is Full !!"<<endl;
            return;
        } 
        arr[b] = val;
        b++;
        size++; 
    }

    void pop(){
        if(f-b==0){
            cout<<"Queue is Empty !!"<<endl;
            return;
        }
        f++;
        size--;
    }

    int front(){
        if(f-b==0){
            cout<<"Queue is Empty !!"<<endl;
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(f-b==0){
            cout<<"Queue is Empty !!"<<endl;
            return -1;
        }
        return arr[b-1];
    }

    int Size(){
        return size;
    }

    bool empty(){
        if(f-b==0) return true;
        return false;
    }

    void display(){
        for(int i=f;i<b;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main(){
    Queue q;
    for(int i=0;i<5;i++) q.push(i+1);
    cout<<q.front()<<" "<<q.back()<<" "<<q.Size()<<endl;
    q.display();
    q.pop();
    q.pop();
    q.display();
}