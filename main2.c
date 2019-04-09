// Banker's Algorithm 
#include <stdio.h> 
int main() 
{ 
   int i,j;
   int r,x=0,m,k;
    m = 3; // Number of resources 
    printf(" \n\n\n\n\n\n\t\t\t*******Welcome to bankers algorithm******* \n");
    printf("\n Enter no. of process you want to enter:\n");
    scanf("%d",&r);
    int alloc[r][3];
    int u,v;
    printf("Note Each Process Have Three Instances\n");
    for(u=0; u<r;u++) 
    {
	printf("Enter instances for process P%d=\n",x);
	x=x+1;
      for(v=0;v<3;v++) 
        {
           scanf("%d", &alloc[u][v]);
        }
    }

 //taking max. need i.e A, B, C of corresponding process
int max[r][3];
int y=0;
   for(u=0; u<r;u++) {
     printf("Enter A B C values for process %d \n",y);
     y=y+1;
      for(v=0;v<3;v++) {
         scanf("%d", &max[u][v]);
      }
   }


//resource availability for process po
int avail[3] ;
printf("ENTER available resources for process po");
for (u=0;u<3;u++)
{
scanf("%d",&avail[u]);
}
 //remaining 
}
