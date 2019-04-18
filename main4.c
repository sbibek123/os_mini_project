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

    int f[r], ans[r], ind = 0; 
    for (k = 0; k < r; k++) { 
        f[k] = 0; 
    } 
    int need[r][m]; 
    for (i = 0; i < r; i++) { 
        for (j = 0; j < m; j++) 
            need[i][j] = max[i][j] - alloc[i][j]; 
    } 
 int y = 0; 
    for (k = 0; k < 5; k++) { 
        for (i = 0; i< r; i++) { 
            if (f[i] == 0) { 
  
                int flag = 0; 
                for (j = 0; j < m; j++) { 
                    if (need[i][j] > avail[j]) 
                        flag = 1; 
                    break; 
                } 
  
                if (flag == 0) { 
                    ans[ind++] = i; 
                    for (y = 0; y < m; y++) 
                        avail[y] += alloc[i][y]; 
                    f[i] = 1; 
                } 
            } 
        } 
    } 
//remaining 
}



