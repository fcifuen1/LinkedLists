/*
  Get Nth element from the end in a linked list of integers
  
  Node is defined as 
  
  struct Node
  {
     int data;
     struct Node *next;
  };

*/

int GetNthFromEnd(Node *head, int positionFromTail)
{
    int length = 0;
    Node *temp = head;
    
    // Find the length of the list
    while (temp != NULL)
    {
        temp = temp->next;
        length++;
    }
    
    // Check if the position is valid
    if (length < positionFromTail)
        return -1;
    
    // Reset the pointer to the start of the list
    temp = head;
    
    // Find the nth from last node
    for (int i = 0; i < length - positionFromTail - 1; ++i)
        temp = temp->next;
    
    return temp->data;
}
