/*
  Delete Node at a given position in a linked list 
  Node is defined as

  struct Node
  {
     int data;
     struct Node *next;
  }

*/

void ReversePrint(Node *head)
{
    if (head != NULL)
    {
        ReversePrint(head->next);
        cout << head->data << endl;
    }
}