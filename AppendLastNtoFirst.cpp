int length(Node *head) {
    if(head==NULL)
    {
        return 0;
    }
    if(head->next==NULL)
    {
        return 1;
    }
int ans = 1+ length(head->next);
    return ans;
}
Node *appendLastNToFirst(Node *head, int n)
{   
    if(head==NULL)
    {
        return head;
    }
    if(n==0)
    {
        return head;
    }
    int l = length(head)-n;
    int count=0;
    Node* temp=head;
    while(count<l-1)
    {
        count++;
        temp=temp->next;
    }
    Node *a=head;
    head=temp->next;
    Node *s=temp->next;
    temp->next=NULL;
    while(s->next!=NULL)
    {
        s=s->next;
    }
    s->next=a;
    return head;
    
}