/*
  Print the elements of a list in reverse order.
  If the list is NULL, print nothing.
  
  Ex: 1 -> 2 -> 3 -> NULL outputs 
  3
  2
  1
  
  Node is defined as

  struct Node
  {
     int data;
     struct Node *next;
  };

*/

void ReversePrint(Node *head)
{
    if (head != NULL)
    {
        ReversePrint(head->next);
        cout << head->data << endl;
    }
}
