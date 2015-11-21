#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define N 1000
int N=1000;


void init_matrix(int (*a)[N], int init_value)
{
int i,j;
  for (i=0;i<N;i++)
    for (j=0;j<N;j++)
      a[i][j] = 1;
}

void dot_product(int (*a)[N], int (*b)[N], int (*c)[N], int fixi, int fixj)
{
   int i,j,k;
   i=fixi;
   j=fixj;
   for (k=0;k<N;k++)
      c[i][j] += a[i][k] * b[k][j] ;
}

void mul_matrix(int (*a)[N], int (*b)[N], int (*c)[N]) {
  int i,j,k;
  for (i=0;i<N;i++) 
    for (j-0;j<N;j++)
      for (k=0;k<N;k++)
        c[i][j] += a[i][k] * b[k][j];
}

int main(int argc, char* argv[])
{
    int i,j,k;
    int res = 0;

    printf("argc = %d\n", argc);
    if(argc==2)
      N = atoi(argv[1]);
    printf("N = %d\n", N);

    int (*a)[N] = (int (*)[N]) calloc(N*N, sizeof(int));
    int (*b)[N] = (int (*)[N]) calloc(N*N, sizeof(int));
    int (*c)[N] = (int (*)[N]) calloc(N*N, sizeof(int));

    clock_t startClock = clock();
    init_matrix(a,1) ; init_matrix(b,2) ; init_matrix(c,0);
    clock_t endClock = clock();
    mul_matrix(a,b,c);
    printf("%ld\n",(endClock-startClock));


    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            res+=c[i][j] % 2;
    return res;
}
