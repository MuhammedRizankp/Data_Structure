#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *link;
};
int choice;
void menu();
struct node insertion();
struct node deletion();
struct node merging();
struct node searching();
void menu()
{
printf("Enter ur operation choice:\n");
printf("1.Insertion \n");
printf("2.Deletion\n");
printf("3.Merging\n");
printf("4.Searching\n");
printf("5.Exit\n");
scanf("%d,&choice");
}
struct node insertion(int *ptr)
{
    int item;
    printf("Enter the data to insert:");
    scanf("%d",&item);
    new=(struct node*)malloc(sizeof(struct node));
    new->link=header->link;
    header->link=new;
    new->data=item;

}
void main()
{
menu();
header=(struct node*)malloc(sizeof( struct node));
header->link=NULL;
header->data=NULL;
ptr=header->link;
while (choice!=5)
{
    switch(choice)
    {
        case 1:
            {
                insertion();
                break;
            }
        case 2:
            {
                deletion();
                break;
            }
        case 3:
            {
                merging();
                break;
            }
        case 4
        {
            searching();
            break;
        }
    }
}



}
