/*
  Delete Node at a given position in a linked list 
  Node is defined as

  struct Node
  {
     int data;
     struct Node *next;
  };

*/

Node* Delete(Node *head, int position)
{
    if (head == NULL)
       return head;
    
    Node *cur = head;
    Node *prev = NULL;
    
    if (position != 0)
    {
        for (int i = 0; i < position; ++i)
        {
            prev = cur;
            cur = cur->next;
        }
    
        prev->next = cur->next;
        delete cur;
        cur = NULL;

        return head;
    }
 
    else
    {
        head = cur->next;
        delete cur;
        return head;
    }
}
