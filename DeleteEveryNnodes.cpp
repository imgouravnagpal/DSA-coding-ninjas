Node *skipMdeleteN(Node *head, int M, int N)
{	if(head==NULL||head->next==NULL) return head;
 	if(M==0) return NULL;
 	if(N==0) return head;
	int count1=1;
    int count2=1;
    Node *temp1=head;
    Node *temp2=head;
    while(temp1!=NULL)
    {	count1=1;
     	count2=1;
    while(count1<M && temp2 != NULL)
    {
        temp1=temp1->next;
        count1++;
    }
     if(temp1 == NULL){
         return head;
     }
    
    Node *temp2=temp1->next; //
    while(count2 <= N && temp2 != NULL)
    {	Node *d=temp2;
        temp2=temp2->next;
     	delete d;
     	count2++;
     	
    }
   temp1->next = temp2;
     temp1= temp2;
    
    }
    return head;
}