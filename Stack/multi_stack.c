#include<stdio.h>
void push(int ,int,int );
void pop(int ,int );
void menu();
int array[20],i,j,choice,top_array[20],p,item,n,k;
void push(int k,int item,int p)
    {  
       if(top_array[k]>=p*(k+1))
          printf("Stack Overflow");
       else
        { 
          top_array[k]=top_array[k]+1;
          array[top_array[k]]=item;
          printf("Updated %dth staaaack is:\n",k);
          for(j=0;j<20;j++)
            { 
              printf("%d",array[j]);
            }
            printf("%d \n");
        }
     }
void pop(int k,int p)
   {  
      if (top_array[k]==-1+p*k)
         printf("Stack Underflow");
      else
        { 
          top_array[k]=top_array[k]-1;
          printf("Updated %dth stack is: \n",k);
          for(j=k;j<=top_array[k];j++)
           {printf("%d",array[j]);}
        }
   }
void menu()
   {
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Exit\n");
    printf("Enter ur option:");
    scanf("%d",&choice);
   }
void main()
  {
     for (int i = 0; i < 20; i++)
     {
        array[i] = 0;
     }
     
     printf("\nEnter the no. of stack:");
     scanf("%d",&n);
     p=20/n;
     for(i=0;i<n;i++)
       {
        top_array[i]=-1+p*i;
       }
     while (choice !=3)
      { 
        menu();
        switch (choice)
            {
             case 1:
                { 
                   printf("\nEnter the no. of stack to push:");
                   scanf("%d",&k);
                   printf("\nEnter the element to push:");
                   scanf("%d",&item);
                   push(k,item,p);
                   break;
                 }
             case 2:
                 {
                   printf("\nEnter the no. of stack to pop:");
                   scanf("%d",&k);
                   pop(k,p);
                   break;
                 }
            }
        
      }
}
