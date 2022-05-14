int findNode(Node *head, int n)
{
    int count =0;
    Node *temp= head;
    int ans;
    while(temp!=NULL)
    {
        if(temp->data==n)
        {
            ans=count;
            break;
        }
        count++;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        return -1;
    }
    else{
        return count;
    }
}