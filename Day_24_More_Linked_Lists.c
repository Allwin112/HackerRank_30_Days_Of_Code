#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* removeDuplicates(Node *head){
    Node **outer, **inner, *prev, *trash;
    int c1, c2;
    outer = &head;

    while(*outer)
        {
        inner = &((*outer) -> next);
        prev = (*outer);

        while(*inner)
            {
            c1 = (*outer) -> data;
            c2 = (*inner) -> data;
            if(c1 == c2)
                {
                trash = (*inner);
                prev -> next = (*inner) -> next;
                inner = &(prev -> next);
                free(trash);
            }
            else
                {
                inner = &((*inner) -> next);
                prev = prev -> next;
            }
        }
        outer = &((*outer) -> next);
    }
    outer = NULL; prev = NULL;
    return head;
}

Node* insert(Node *head,int data)
{
  Node *p = (Node*)malloc(sizeof(Node));
  p->data = data;
  p->next=NULL;

  if(head==NULL){
   head=p;

  }
  else if(head->next==NULL)
  {
      head->next=p;

  }
  else{
  Node *start=head;
  while(start->next!=NULL)
    start=start->next;

  start->next=p;

  }
      return head;
}
void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
    head=removeDuplicates(head);
	display(head);

}
