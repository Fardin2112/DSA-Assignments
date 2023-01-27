 void preOrder(Node *root) {
       vector<int>vec;
        //base case
        if(root == NULL){
            return ;
        }
        
        cout<<root->data<<" ";
        preOrder( root -> left);
        preOrder( root -> right);
        
    }
