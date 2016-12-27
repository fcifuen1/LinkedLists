/*
  Insert a node at the head of a linked list
  
  struct Node
  {
    int data;
    Node* next;
  };

*/

Node* Insert(Node *head, int data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    
    newNode->data = data;
    newNode->next = NULL;
    
    // Empty list
    if (head == NULL)
        head = newNode;
    
    // Nonempty list
    else
    {
        newNode->next = head;
        head = newNode;
    }
  
    return head;
}
