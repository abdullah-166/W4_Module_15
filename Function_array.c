#include<stdio.h>
void nothing(int *B[], int m)
{
    int i;
    for( i=0;i<m;i++)
    {
         printf("%d\n",&B[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
         printf("%d\n",&A[i]);
    }
    printf("Now from nothing function: \n");
     nothing(&A,n);
}