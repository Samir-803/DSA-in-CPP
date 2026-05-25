#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public :
    Node* left;
    Node* right;
    int val;
    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

bool isMax(Node* root){
    if(root==NULL) return true;
    if(root->left && root->val<root->left->val) return false;
    if(root->right && root->val<root->right->val) return false;
    return isMax(root->right) && isMax(root->left);
}

int sizeofTree(Node* root){
    if(root==NULL) return 0;
    return 1 + sizeofTree(root->right) + sizeofTree(root->left);
}

bool isCBT(Node* root){
    int size = sizeofTree(root); 
    queue<Node*> q;
    q.push(root);
    int count = 0;
    while(count<size){
    Node* temp = q.front();
    q.pop();
    count++;
    if(temp) q.push(temp->left);
    if(temp) q.push(temp->right);
   } 
    while(q.size()>0){
        Node* temp = q.front();
        if(temp) return false;
        q.pop(); 
    }
    return true;
}

int main(){
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = new Node(6);
    Node* g = NULL;

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    if(isCBT(a) && isMax(a)) cout<<"This BT is MaxHeap"<<endl;
    else cout<<"This BT is Not MaxHeap"<<endl;
}