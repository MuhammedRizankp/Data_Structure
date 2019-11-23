#include<stdio.h>
void menu();
void push();
void pop();
int choice;
int array[50],TOP=-1,SIZE=50,item,i,flag=0;
void menu()
{
 printf("\n1.Push\n");
 printf("2.Pop\n");
 printf("3.Exit\n");
 printf("Enter ur choice:");
 scanf("%d",&choice);
 
}
void push()
    {  
       printf("Enter the element to insert:");
       scanf("%d",&item);
       if(TOP>=SIZE)
          printf("Stack Overflow");
       else
        { 
          TOP=TOP+1;
          array[TOP]=item;
          printf("Updated stack is:\n");
          for(i=0;i<=TOP;i++)
            {printf("%d",array[i]);}
        }
     }
void pop()
   {  
      if (TOP==-1)
         printf("Stack Underflow");


      else
        { 
          TOP--;
          printf("Updated stack is \n");
          for(i=0;i<=TOP;i++)
           {printf("%d",array[i]);}
        }
   }
void main()
{

int flag=0;
while(flag==0)
{menu();
switch(choice)
{
  case 1:
     { 
       push();
       break;
     }
  case 2:
     {
       pop();
       break;
      }
  case 3:
      flag=1;
      break;
}


}









}
