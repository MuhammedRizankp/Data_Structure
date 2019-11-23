#include<stdio.h>
void selection_sort();
void insertion_sort();
void bubble_sort();
void menu();
int choice,i=0,j=0,temp,array[50],n;
void menu()
    {
      printf("1.Selection Sort\n");
      printf("2.Insertion Sort\n");
      printf("3.Bubble Sort\n");
      printf("4.Exit\n");
      printf("Enter ur choice:");
      scanf("%d",&choice);
    }
void selection_sort()
   {
      for(i=0;i<n;i++)
        {
          for(j=i+1;j<n;j++)
            {
              if (array[j]<array[i])
                  {
                    temp=array[j];
                    array[j]=array[i];
                    array[i]=temp;
                   }

            }

        }
       printf("Sorted Array is \n");
       for(i=0;i<n;i++)
            printf("%d",array[i]);
  }
void insertion_sort()
    {
      for(i=0;i<n;i++)
        {
         j=i;
         while(j>0 && array[j] < array[j-1])
           {
             if(array[j] < array[j-1])
                {
                    temp=array[j-1];
                    array[j-1]=array[j];
                    array[j]=temp;
                    j--;
               }
           }
         }  
   printf("Sorted array is: \n");
   for(i=0;i<n;i++)
      {
        printf("%d,",array[i]);
      }
    printf("\n");
    }
   
void main()
      { 
        printf("Enter the no. of elements:");
        scanf("%d",&n);
        printf("Enter the elements:");
        for(i=0;i<n;i++)
          {
            scanf("%d",&array[i]);
          }
        
        while(choice!=4)
           {  menu();
              switch(choice)
                  {
                    case 1:
                       {
                         selection_sort();
                         break;
                       }
                    case 2:
                       {
                         insertion_sort();
                         break;
                       }/*
                    case 3:
                       {
                         bubble_sort();
                         break;
                       }*/
                  }
           }
      }
