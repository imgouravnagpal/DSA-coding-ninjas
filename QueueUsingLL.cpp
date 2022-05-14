class Queue {
	Node* head;
    Node* tail;
    int size;
   public:
    Queue() {
		head=NULL;
        tail=NULL;
        size=0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		return size;
	}

    bool isEmpty() {
		return size==0;
	}

    void enqueue(int data) {
		if(head==NULL)
        {
            Node *newnode = new Node(data);
            head = newnode;
            tail = newnode;
            
        }
        else{
            Node *newnode = new Node(data);
            tail->next = newnode;
            tail=tail->next;
        }
        size++;
	}

    int dequeue() {
        if(head==NULL){
            return -1;
        }
        Node* temp= head->next;
        int ans = head->data;
        delete head;
        head=temp;
        
        size--;
        return ans;
        
    }

    int front() {
        if(head==NULL)
        {
            return -1;
        }
        return head->data;
    }
};