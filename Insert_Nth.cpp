/*
  Insert a node at a specific position in a linked list

  struct Node
  {
    int data;
    Node* next;
  };

*/

Node* InsertNth(Node *head, int data, int position)
{
    Node *cur = head;
    Node *prev = NULL;
    Node *newNode = (Node*)malloc(sizeof(Node));
    
    newNode->data = data;
    newNode->next = NULL;
    
    // Empty list
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
        
    // Go to n'th position
    for (int i = 0; i < position; ++i)
    {
        prev = cur;
        cur = cur->next;
    }
    
    newNode->next = cur;
    
    if (position == 0)
        head = newNode;
    
    if (prev != NULL)
        prev->next = newNode;
    
    return head;
}
