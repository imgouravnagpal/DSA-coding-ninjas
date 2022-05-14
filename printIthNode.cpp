
void printIthNode(Node *head, int i)
{
    int count=0;
    Node *temp = head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
        if(count==i) cout<<temp->data;
    }
}