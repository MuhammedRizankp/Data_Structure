#include<stdio.h>
#include<ctype.h>
int pop();
void push(int);
char postfix[50];
int i=0,stack[50],TOP=-1,SIZE=50,x,y,z,j,item;
void push(int item)
    {  
       if (TOP>=SIZE)
         {
          printf("Stack overflow");
         } 
       
        else
         {
          TOP=TOP+1;
          stack[TOP]=item;
         }
          
          
       
     }
int pop()
   {  
      if (TOP==-1)
         printf("Stack Underflow");


      else
        { item=stack[TOP];
          TOP--;
          return item;
          
          
          
        }
   }
void main()
    { printf("Enter the postfix expression:\n");
      scanf("%s",&postfix);
    
  while(postfix[i]!='\0')
     {
       if(postfix[i]== '+'|| postfix[i]== '-'|| postfix[i]== '*'|| postfix[i]== '/'|| postfix[i]== '^')
          {
             
                 y=pop();
                 x=pop();
               
             if (postfix[i]=='*')
                 z=x*y;
             if (postfix[i]=='/')
                 z=x/y;
             if (postfix[i]=='+')
                 z=x+y;
             if (postfix[i]=='-')
                 z=x-y;
             if (postfix[i]=='^')
                 z=x^y;
             push(z);
             i++;

          }
        else
          {
             printf("Enter the value:");
             scanf("%d",&item);
             push(item);
             i++;
          }
             


      }
printf("%d",z);
}

