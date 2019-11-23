#include<stdio.h>
#include<stdlib.h>
void enque();
void deque();
void menu();
int choice,item;
struct node
      {
        int data;
        struct node *link;
      }
void menu()
     {
       printf("1.Enque\n");
       printf("2.Deque\n");
       printf("3.Exit\n");
       printf("4.Enter ur choice:\n");
       scanf("%d",&choice);

     }
void enque()
     { 
       if (front->data==NULL)
           front=front->link;
       new=(struct node)malloc(sizeof(node));
       printf("Enter the element to insert:");
       scanf("%d",&item); 
       new->data=item;
       new->link=NULL;
       ptr->link=new;
       rear=rear->link;   
     }
void deque()
      {
         if (rear->data==NULL)
              printf("Que is empty");
         else
            {
              while(ptr->!=NULL)
               {
                 ptr1=ptr;
                 ptr=ptr->link;
               }
                 free(ptr);
                 ptr1->link=NULL;
                 rear=ptr1;
            }
               
      }
void main()
   {
     header=(struct node)malloc(sizeof(node));
     header->data=NULL;
     header->link=NULL;
     ptr=header;
      while(choice!=3)
          {
           menu();
           switch(choice)
                {
                  case 1:
                    {
                      enque;
                      break;
                    }
                  case 2:
                    {
                      deque;
                      break;
                    }

                }
          }
     }
