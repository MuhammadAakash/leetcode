class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<TreeNode*> level;
        if(depth == 1){
            TreeNode* newNode = new TreeNode(val);
            newNode -> left = root;
            return newNode;
        }
        int curr_height = 2;
        while(q.size() > 1){
            TreeNode* temp = q.front();
            q.pop();
            if(temp == NULL){
                if(curr_height == depth){
                    break;    
                }
                else{
                    curr_height++;
                }
                level.clear();
                q.push(NULL);
                continue;
            }
            level.push_back(temp); 
            if(temp -> left != NULL)
                q.push(temp -> left);
            if(temp -> right != NULL)
                q.push(temp -> right);
            
        }
        for(auto i : level){
            TreeNode* newNodeLeft = new TreeNode(val), *newNodeRight = new TreeNode(val);
            newNodeLeft -> left = i -> left;
            newNodeRight -> right = i -> right;
            i -> left = newNodeLeft;
            i -> right = newNodeRight;
            
        }
        return root;
        
    }
};