#include<stdio.h>
#include<string.h>
char infix[50],stack[50],post[50],data,item,i;
int TOP=-1,SIZE=50,len,k=0,j;
void push(char item);
char pop();
void push( char item)
    {  
       
       if(TOP>=SIZE)
          printf("Stack Overflow");
       else
        { 
          TOP=TOP+1;
          stack[TOP]=item;
          printf("Updated stack is:\n");
          for(j=0;j<=TOP;j++)
            { 
              printf("%c",stack[j]);
            }
        }
     }
char pop()
   {  
      if (TOP==-1)
         printf("Stack Underflow");


      else
        { item=stack[TOP];
          TOP--;
          return (item);
          printf("Updated stack is \n");
          for(j=0;j<=TOP;j++)
           {printf("%d",stack[j]);}
        }
   }
void main()
{
     printf("Enter the infix expression:\n");
     gets(infix);
     len=strlen(infix);
     infix[len]=")";
     push("(");
     while(infix[i]!='\0')
          {
            if (i=="+" || i=="-" )
                {
                  if (stack[TOP]=="+"||stack[TOP]=="-")
                        {
                          data=pop();
                          post[k]=data;
                          k++;
                        }
                          
                  else if (stack[TOP]=="*"||stack[TOP]=="/")
                        {
                          data=pop();
                          post[k]=data;
                          k++;
                        }
                  else if (stack[TOP]=="^")
                        {  
                          data=pop();
                          post[k]=data;
                          k++;
                        }
                  else if (stack[TOP]=="("||stack[TOP]==")")
                          push(i);
                }       
             if (i=="*" || i=="/" )
                {
                  if (stack[TOP]=="+"||stack[TOP]=="-")
                          push(i);
                  else if (stack[TOP]=="*"||stack[TOP]=="/")
                        {
                          data=pop();
                          post[k]=data;
                          k++;
                        }
                  else if (stack[TOP]=="^")
                        { 
                          data=pop();
                          post[k]=data;
                          k++;
                        }
                  else if (stack[TOP]=="("||stack[TOP]==")")
                          push(i);
                }        
             if (i=="^" )
                 {
                  if (stack[TOP]=="+"||stack[TOP]=="-")
                          push(i);
                  else if (stack[TOP]=="*"||stack[TOP]=="/")
                          push(i);
                  else if (stack[TOP]=="^")
                        {
                          data=pop();
                          post[k]=data;
                          k++;
                        }
            
                  else if (stack[TOP]=="("||stack[TOP]==")")
                          push(i);
                }  
             if (i=="(" )
                 {
                  push(i);
                 }   
             if (i==")")
                 {
                  while(stack[TOP]=="(")
                       {
                          data=pop();
                          post[k]=data;
                          k++;
                       }
                         pop();
                 }                 
                
          }




    }



