#include <stdio.h>
void main(){
int i,j,n,small,a[10],temp,opt,comp;
printf("Enter the number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++){
        printf("Enter the element:");
	scanf("%d",&a[i]);
}
printf("1.Selection sort \n");
printf("2.Bubble sort \n");
printf("3.Insertion sort \n");
printf("Enter the option:");
scanf("%d",&opt);
comp=n*(n-1)/2;
switch (opt)
{ case 1 :
   for(i=0;i<n;i++){
	  for(j=i+1;j<n;j++){
                 if (a[j]<a[i]){
                      temp=a[i];
		      a[i]=a[j];
		      a[j]=temp;}
}
}
for(i=0;i<n;i++){
    	printf("%d,",a[i]);
}
comp=n*(n-1)/2;
printf("\nNo. of comparison is %d",comp);
break;
case 2:
	for(i=0;i<n-1;i++){
              for(j=0;j<n-i-1;j++){
			if (a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;}
}
}
for(i=0;i<n;i++){
        printf("%d",a[i]);} 
printf("No. of exchange is %d",comp);
break;
case 3:
    for(i=0;i<n;i++){
	j=i;
        while(j>0 && a[j]<a[j-1]){
           if (a[j]<a[j-1]){
            temp=a[j-1];
	    a[j-1]=a[j];
	    a[j]=temp;
	    j--;}}
}
 for(i=0;i<n;i++){
	printf("%d",a[i]);}
printf("No. of exchange is %d",comp);
break;
}}
