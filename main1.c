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
 //remaining 

}
