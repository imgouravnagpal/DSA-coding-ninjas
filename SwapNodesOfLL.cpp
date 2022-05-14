Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
    if(head==NULL||head->next==NULL)
    {
        return head ;
    }
    Node *fh = NULL ;
    Node *ft = NULL ;
    Node *sh = NULL ;
    Node *st = NULL ;
    Node *previous = NULL ;
    Node *temp = head ;
    int c1 = 0 , c2 = 0 ;
    while(temp!=NULL)
    {
        if(c1==i)
        {
            
            fh = previous ;
            ft = temp ;
        }
        if(c2==j)
        {
            
            sh = previous ;
            st = temp ;
        }
        previous = temp ;
        temp = temp->next ;
        c1++ ;
        c2++ ;
    }
    fh->next = st;
    sh->next = ft;
    
    Node *a = ft->next ;
    ft->next = st->next ;
    st->next = a;
    
    return head ;
}