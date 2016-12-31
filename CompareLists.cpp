/*
  Compare two linked lists A and B
  Return true if they are identical and false if they are not. 
  
  Node is defined as 
  
  struct Node
  {
     int data;
     struct Node *next;
  };
*/

bool CompareLists(Node *headA, Node* headB)
{
    Node *cursorA = headA;
    Node *cursorB = headB;
    
    while (cursorA != NULL && cursorB != NULL)
    {
        if (cursorA->data != cursorB->data)
            return false;
 
        // The current nodes are equal at this point, so advance
        cursorA = cursorA->next;
        cursorB = cursorB->next;
    }
    
    // Identical linked lists should end in NULL
    return (cursorA == NULL && cursorB == NULL);
}
