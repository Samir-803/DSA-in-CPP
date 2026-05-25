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

int levels(Node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->right),levels(root->left));
}

void nthLvl(Node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nthLvl(root->left,curr+1,level);
    nthLvl(root->right,curr+1,level);   
}

void nthLvlRev(Node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return; 
    }
    nthLvlRev(root->right,curr+1,level);
    nthLvlRev(root->left,curr+1,level);   
}

void Lvlorder(Node* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        nthLvlRev(root,1,i);
        cout<<endl;
    }
    return;
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

    Lvlorder(a); 
}