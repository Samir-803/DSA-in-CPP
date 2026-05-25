#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public :
    int val;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int val){
        this->val = val;
        right = NULL;
        left = NULL;
    }
};

void levelorderqueue(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(q.size()>0){
    TreeNode* temp = q.front();
    q.pop();
    cout<<temp->val<<" ";
    if(temp->left) q.push(temp->left);
    if(temp->right) q.push(temp->right);
} 
    cout<<endl;
}

TreeNode* construct(int arr[],int n){
    queue<TreeNode*>q;
    TreeNode* root = new TreeNode(arr[0]);
    q.push(root);
    int i = 1,j = 2;
    while(q.size()>0 && i<n){
        TreeNode* temp = q.front();
        q.pop();
        TreeNode* l;
        TreeNode* r;
        if(arr[i]!=INT_MIN) l = new TreeNode(arr[i]);  
        else l = NULL;
        if(j!=n && arr[j]!=INT_MIN) r = new TreeNode(arr[j]);
        else r = NULL;
        temp->left = l;
        temp->right = r;

        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i += 2;
        j += 2;
    }
    return root;
}

int main(){
    int arr[] = {1,2,3,INT_MIN,INT_MIN,4,5,INT_MIN,6,7,8,INT_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    TreeNode* root = construct(arr,n);
    levelorderqueue(root);
}