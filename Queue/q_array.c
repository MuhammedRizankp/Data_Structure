#include<stdio.h>
void enque();
void deque();
void menu();
int choice,front=-1,rear=-1,array[50],SIZE=50,item,i;
void enque()
   {
      if (rear>SIZE)
         printf("Stack overflow");
      else
        {
          printf("Enter the number to enque:\n");
          scanf("%d",&item);
          rear++;
          array[rear]=item;
        }
      printf("Updated Que is \n");
      for(i=front;i<rear;i++)
        {
          printf("%d,",array[i+1]);
        }
        printf("\n");
   }
void deque()
   {
      if (rear==-1)
         printf("Stack Underflow");
      else
        {
         front++;
        }
      printf("Updated Que is \n");
      for(i=front;i<rear;i++)
        {
         printf("%d,",array[i]);
        }
        printf("\n");
   }
void menu()
   {
      printf("1.Enque\n");
      printf("2.Deque\n");
      printf("3.Exit\n");
      printf("Enter ur choice:");
      scanf("%d",&choice);
   }
void main()
    {

      while(choice!=3)
         {
           menu();
           switch(choice)
              {
                case 1:
                    {
                      enque();
                      break;
                    }
                case 2:
                    {
                      deque();
                      break;
                    }
                
              }
         
           }



     }
