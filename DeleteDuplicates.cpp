/*
  Remove all duplicate elements from a sorted linked list
  
  struct Node
  {
     int data;
     struct Node *next;
  };

*/

Node* RemoveDuplicates(Node *head)
{
    // Do nothing if it's an empty list
    if (head == NULL)
        return head;
    
    Node *cur = head;
    while (cur->next != NULL)
    {
        // Goes two nodes ahead of the cur pointer and deletes the middle node
        if (cur->data == (cur->next)->data)
        {
            Node *twoAhead = (cur->next)->next;
            free(cur->next);
            cur->next = twoAhead;
        }
        
        else
            cur = cur->next;
    }

    return head;
}
