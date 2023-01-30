 int height(Node* root) {
        // Write your code here.
        int cnt=-1;
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            Node* temp=q.front();
            q.pop();
            
            if(temp==NULL){
               cnt++; 
               
               if(!q.empty()){
                   q.push(NULL);
               }
            }
            else{
                 if(temp -> left){
             q.push(temp -> left);
            }

             if(temp -> right){
             q.push(temp -> right);
            } 
            }
        }
        return cnt;
    }
