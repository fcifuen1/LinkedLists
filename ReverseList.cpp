/*
  Reverses a singly linked list recursively
  
  Node is defined as
  
  struct Node
  {
     int data;
     struct Node *next;
  };
*/

Node* Reverse(Node *head)
{
    // Empty list & last node case: finds the end of the list
    if (head->next == NULL)
        return head;
    else
    {
        // head->next becomes reversed, sets newNode->head
        Node *newNode = Reverse(head->next); 
        
        // head->next is the current tail, set tail = head
        (head->next)->next = head;  
        
        // head is currently at the end, set its next-link to NULL
        head->next = NULL;      
        
        // returns the newNode -> *** -> head -> NULL list
        return newNode;
    }
}
