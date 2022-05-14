bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    if(root1->data!=root2->data||root1->children.size()!=root2->children.size())
    {
        return false;
    }
    bool ans =true;
    for(int i=0;i<root1->children.size();i++)
    {
        if(root1->children[i]->data!=root2->children[i]->data)
        {
            return false;
        }
    }
    for(int i=0;i<root1->children.size();i++)
    {
        ans=areIdentical(root1->children[i],root2->children[i]);
    }
    return ans;
    
}