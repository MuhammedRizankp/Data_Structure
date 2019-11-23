#include<stdio.h>
main(){
int i,j,n,array[100],key,found=0;
printf("Enter the number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{     printf("Enter the element");
      scanf("%d",&array[i]);	
}
printf("Enter the element to search");
scanf("%d",&key);
for(i=0;i<n;i++){
       if (array[i]==key){
              printf("Position of %d is %d",key,i+1);
              found=1;
              
              continue;}
      
}
if (found==0)
       printf("Element not found");
}



