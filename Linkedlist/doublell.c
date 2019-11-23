#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *rlink;
        struct node *llink;};
void insertion(struct node*);
void deletion(struct node*);
void display(struct node*);

void main(){
int opt;

struct node *header=(struct node*)malloc(sizeof(struct node));
header->rlink=NULL;
header->llink=NULL;
//header->data=NULL;
insertion(header);
deletion(header);
display(header);
}
void insertion(struct node *header){
  int key;
  int n,i;
  struct node *ptr=header;
  struct node *new;
  printf("Enter the no.elements:");
  scanf("%d",&n);
  printf("Enter the elements:\n");
  for(i=0;i<n;i++)
{
       new=(struct node*)malloc(sizeof(struct node));
       scanf("%d",&new->data);
       new->rlink=NULL;
       ptr->rlink=new;
       new->llink=ptr;
       ptr=new;
}}

void deletion(struct node *header)
{ 
  
  int key;
  int n,i;
  struct node *ptr=header;
  struct node *new;
 
  printf("enter the data of the node to be deleted:");
  scanf("%d",&key);
  
 
  
  while(ptr->rlink!= NULL && ptr->data!=key){
      
      ptr=ptr->rlink;
     
     }
  if(ptr->data==key)
       {  
          ptr->llink->rlink=ptr->rlink;
          if(ptr->rlink != NULL)
              ptr->rlink->llink=ptr->llink;
          
          free(ptr);}}
void display(struct node *header)
{
   struct node* ptr=header->rlink;
   while(ptr!= NULL)
{
     
      printf("%d\n",ptr->data);
      ptr=ptr->rlink;
}
 


}

