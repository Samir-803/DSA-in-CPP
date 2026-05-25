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

int levels(TreeNode* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->right),levels(root->left));
} 

void nthLvl(TreeNode* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nthLvl(root->left,curr+1,level);
    nthLvl(root->right,curr+1,level);   
}

void Lvlorder(TreeNode* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        nthLvl(root,1,i);
        cout<<endl;
    }
    return;
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

void leftBoundry(TreeNode* root){ 
    if(root==NULL) return;
    if(root->right==NULL && root->left==NULL) return;
    cout<<root->val<<" ";
    leftBoundry(root->left);
    if(root->left==NULL) leftBoundry(root->right);
}

void leafBoundry(TreeNode* root){
    if(root==NULL) return;
    if(root->right==NULL && root->left==NULL) cout<<root->val<<" ";
    leafBoundry(root->left);
    leafBoundry(root->right);
}

void RightBoundry(TreeNode* root){
    if(root==NULL) return;
    if(root->right==NULL && root->left==NULL) return;
    RightBoundry(root->right);
    if(root->right==NULL) RightBoundry(root->left);
    cout<<root->val<<" ";
}

int main(){
    int arr[] = {1,2,3,4,INT_MIN,5,6,7,8,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,INT_MIN,INT_MIN,13,14,INT_MIN,15,INT_MIN,INT_MIN,16,INT_MIN,INT_MIN,INT_MIN,INT_MIN,INT_MIN,INT_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    TreeNode* root = construct(arr,n);
    Lvlorder(root);
    leftBoundry(root);
    leafBoundry(root);
    RightBoundry(root->right);
}