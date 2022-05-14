int length(Node *head)
{
    int ans =0;
     Node *temp = head;
    while(temp!=NULL)
    {
        temp=temp->next;
        ans++;
    }
    return ans;
    
}
