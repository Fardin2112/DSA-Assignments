 void inOrder(Node *root) {
        vector<int>vec;
        //base case
        if(root == NULL){
            return ;
        }
        
        inOrder( root -> left);
        cout<<root->data<<" ";
        inOrder( root -> right);
        
        
    }

