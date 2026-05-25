#include<iostream>
#include<climits>
using namespace std;

class Node{
public :
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->val = val;
        right = NULL;
        left = NULL;
    }
};

void nthLvl(Node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level) cout<<root->val<<" ";
    nthLvl(root->right,curr+1,level);
    nthLvl(root->left,curr+1,level);   
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    nthLvl(a,0,2); 
}