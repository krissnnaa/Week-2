#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void read(int**, int, int);
void write(int**, int, int);
void main()
{
    int **a;
    int **b;
    int **s;
    int r,c,i,j;
    printf("Enter number of rows and columns of a matrix\n");
    scanf("%d%d",&r,&c);

for(i=0;i<r;i++)
{
    *(a+i)=(int *)malloc(sizeof(int)*c);
    *(b+i)=(int *)malloc(sizeof(int)*c);
    *(s+i)=(int *)malloc(sizeof(int)*c);
}

printf("Enter elements of first matrix");
read(a,r,c);
printf("Enter elements of Second matrix");
read(b,r,c);

for(i=0;i<r;i++)
{
   for(j=0;j<c;j++)
   {
    *(*(s+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
   }
}

printf("Matrix A is:\n\n");
write(a,r,c);
free(a);
printf("Matrix B is:\n\n");
write(b,r,c);
free(b);
printf("Sum of matrix A and B is:\n\n");
write(s,r,c);
free(s);
getch();

}

void read(int **x, int r, int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",*(x+i)+j);
        }
    }
}
void write(int **y, int r, int c)
{

    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",*(*(y+i)+j));
        }
    printf("\n");
    }

}
