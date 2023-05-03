#include<stdio.h>
void nothing(int *B, int m)
{
    int i;
    
    for(i=0;i<m;i++)
    {
        printf("%d ",B[i]);
    }
    printf("\n");
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
     nothing(A,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
