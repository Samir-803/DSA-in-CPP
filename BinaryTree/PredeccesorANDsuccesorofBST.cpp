// i don't want to write the code so i'll just explain it

// Predecessor : 
// if(root==NULL) return NULL;
// Node* pred = root->left;
// while(root->right) pred = root->right;
// return pred;

// Succesor : 
// if(root==NULL) return NULL;
// Node* succ = root->right;
// while(root->left) pred = root->left;
// return succ;
