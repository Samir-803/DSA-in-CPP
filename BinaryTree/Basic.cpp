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

void displaytree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displaytree(root->right);
    displaytree(root->left);
}

int sumtree(Node* root){
    if(root==NULL) return 0;
    return root->val + sumtree(root->right) + sumtree(root->left);
}

int size(Node* root){
    if(root==NULL) return 0;
    return 1 + size(root->right) + size(root->left);
}

int maxval(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(maxval(root->right),maxval(root->left)));
}

int level(Node* root){
    if(root==NULL) return 0;
    return 1 + max(level(root->right),level(root->left));
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
    displaytree(a);
    cout<<endl;
    cout<<"Sum Of Tree is : "<<sumtree(a)<<endl;
    cout<<"Size of The Tree is : "<<size(a)<<endl;
    cout<<"Max Value of the Tree is : "<<maxval(a)<<endl;
    cout<<"Levels Of the Tree are : "<<level(a)<<endl;
    int Lvl = level(a);
    int height = Lvl - 1;
    cout<<"Height of the Tree is : "<<height<<endl; 
}