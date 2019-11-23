#include<stdio.h>
#include<stdlib.h>
int choice,chld_choice,root_data,root_item,key,insert_data,result;
void inorder(struct node*);
void insert(int );
struct node *ptr,*ptr_2,*ptr_3;
int search(struct node*,int );

void menu();
struct node 
      {
        int data;
        struct node *left;
        struct node *right;  
      }*root,*left_child,*right_child;
void menu()
  {
    printf("1.Insertion\n");
    printf("2.Inorder Traversal\n");
    printf("3.Preorder Traversal\n");
    printf("4.Postorder Traversal\n");
    printf("5.Exit\n");
    printf("Enter ur choice:");
    scanf("%d",&choice);
  }
int search(struct node *ptr,int key) 
{   
    
    if (ptr == NULL) 
        return 0; 
  
    if (ptr->data == key) 
        return 1; 
    int res1 = search(ptr->left, key); 
    int res2 = search(ptr->right, key); 
  
    return res1 || res2; 
}
void inorder(root)
    {
      struct node*ptr_1=root;
      if(ptr_1!=NULL)
         { ptr_2=ptr_1->left;
           inorder(ptr_2);
           printf("%d",ptr->data);
           ptr_3=ptr_1->right;
           inorder(ptr_3);
         }


    }
void main()
   { 
     root=(struct node*)malloc(sizeof(struct node));
     printf("Enter the data for root node:");
     scanf("%d",&root_data);
     root->data=root_data;
     root->left=NULL;
     root->right=NULL;
     ptr=root;
     
     
     while(choice!=5)
        {
          menu();
          switch(choice)
             {
               case 1:
                { 
                  printf("Enter the data of the root node to which data has to inserted:");
                  scanf("%d",&key);
                  result=search(ptr,key);
                  if(result==0)
                      printf("No such element exists in the linkedlist\n");
                  else
                    {   
                        struct node *key_ptr=ptr;
                        printf("1.Insertion at right node");
                        printf("2.Insertion at left node");
                        printf("Enter ur choice:");
                        scanf("%d",&chld_choice);
                        printf("Enter the data to be inserted:");
                        scanf("%d",&insert_data);
                        if(chld_choice==1)
                           {
                            right_child=(struct node*)malloc(sizeof(struct node));
                            key_ptr->right=right_child;
                            right_child->data=insert_data;
                            right_child->right=NULL;
                            right_child->left=NULL;
                           }
                            
                        else if(chld_choice==2)
                           {
                            left_child=(struct node*)malloc(sizeof(struct node));
                            key_ptr->left=left_child;
                            left_child->data=insert_data;
                            left_child->right=NULL;
                            left_child->left=NULL;
                           } 
                     }
                     break;
              }
                 case 2 :
                    {
                      inorder(root);
                      break;
                     }
  /*               case 3 :
                    {
                      preorder(root);
                      break;
                     }
                case 4 :
                    {
                      postorder(root);
                      break;
                     }*/


               }
 
        }
}
                   
