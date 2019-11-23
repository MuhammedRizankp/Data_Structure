#include<stdio.h>
main(){
int m[10][10],t[10][3],tr[10][3],a[20][20],b[20][20],c[10][10],i,j,k=1,count=0,r,col,opt,r1,r2,c1,c2,nz,nz2;

printf("1.Sparse to three coloumn representation \n");
printf("2.Transpose from three coloumn matrix \n");
printf("3.Sum of two sparse from three coloumn matrix \n");
printf("Enter the option:");
scanf("%d",&opt);
switch(opt){       
         case 1:
             printf("Enter the no. of rows:");
             scanf("%d",&r);
             printf("Enter the no. of coloumns:");
             scanf("%d",&col);
       for(i=0;i<r;i++){
           for (j=0;j<col;j++){
                printf("Enter the element:");
                scanf("%d",&m[i][j]);}}
       for (i=0;i<r;i++){
           for(j=0;j<col;j++){
                     if (m[i][j]!=0){
                            t[k][0]=i;
			    t[k][1]=j;
		            t[k][2]=m[i][j];
			    k=k+1;
                            count=count+1;}
           }}
           t[0][0]=r;
           t[0][1]=col;
           t[0][2]=count;
              for(i=0;i<k;i++){
                for (j=0;j<3;j++){
                  printf("%d",t[i][j]);}}
              break;
         case 2:
             printf("Enter the no. of rows:");
             scanf("%d",&r);
             printf("Enter the no. of coloumns:");
             scanf("%d",&col);
       for(i=0;i<r;i++){
           for (j=0;j<col;j++){
                printf("Enter the element:");
                scanf("%d",&m[i][j]);}}
       for (i=0;i<r;i++){
           for(j=0;j<col;j++){
                     if (m[i][j]!=0){
                            t[k][0]=i;
			    t[k][1]=j;
		            t[k][2]=m[i][j];
			    k=k+1;
                            count=count+1;}
           }}
           t[0][0]=r;
           t[0][1]=col;
           t[0][2]=count;
            k=1;
            tr[0][0]=t[0][1];
            tr[0][1]=t[0][0];
            tr[0][2]=t[0][2];
            for(i=0;i<k;i++){
                for(j=0;j<3;j++){
                       if(i==t[j][1]){
                              tr[k][0]=t[j][1];
                              tr[k][1]=t[j][0];
			      tr[k][2]=t[j][2];
                              k=k+1;  }}} 
                  
              
            for(i=0;i<t[0][2]+1;i++){
                for(j=0;j<3;j++){
                   printf("%d",tr[i][j]);
}} 
	break;
        case 3:
          k=1;
          printf("Enter number of rows in first three coloumn:");
          scanf("%d",&r1);
          printf("Enter no. of non-zeroes in second three coloumn:");
          scanf("%d",&r2);
         
          printf("for first three coloumn \n");
          for(i=0;i<r1;i++){
              for(j=0;j<3;j++){
                  printf("Enter the element:");
                  scanf("%d",&a[i][j]);}}
	  printf("for second three coloumn \n");
          for(i=0;i<r2;i++){
              for(j=0;j<3;j++){
                  printf("Enter the element:");
                  scanf("%d",&b[i][j]);}}
          while(i<r1 && j<r2){
                        if (a[i][0]<b[j][0]){
                                      c[k][0]=a[i][0];
				      c[k][1]=a[j][1];
                                      c[k][2]=a[i][2];
                                      k=k+1;}
                        else if (a[i][0]>b[j][0]) {
                  		      c[k][0]=b[j][0];
				      c[k][1]=b[j][1];
				      c[k][2]=b[j][2];
				      j=j+1;
				      k=k+1;
			                                      	     
                             }
			else{
                              if(a[i][1]<b[i][1]){
                                    c[k][1]=a[i][1];
                                    i=i+1;
                                    k=k+1;}
                              else if(a[i][1]>b[i][1]){
                                         c[k][1]=b[i][1];
 					 j=j+1;
					 k=k+1;}
                              else{
                                 c[k][0]=a[i][0];
         			 c[k][1]=a[i][1];
                                 c[k][2]=a[i][2]+b[j][2];
                                 j=j+1;
                                 i=i+1;
nz=a[0][2]+b[0][2];                         	 k=k+1;}}}
for(i=0;i<nz;i++){
    for(j=0;j<3;j++){
          printf("%d",c[i][j]);}}



}
}
