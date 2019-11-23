#include<stdio.h>
void main(){
int i,n,first=0,middle,key,array[100],found=0;
printf("Enter the number of elements:");
scanf("%d",&n);
int last=n-1;
for(i=0;i<n;i++){
         printf("Enter the element:");
         scanf("%d",&array[i]);}
printf("Enter element to search:");
scanf("%d",&key);

while(first<=last){
      middle=(last+first)/2;
       if(array[middle]==key)
             {printf("Element found at position %d",middle+1);
             found=1;
             break;}
       else if(key>array[middle])
             {first=middle+1;
            
           }
       else
             {last=middle-1; 
              
          }

      }
if (found==0)
   {printf("Element not found");}



}
