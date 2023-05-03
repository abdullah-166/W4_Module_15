#include<stdio.h>
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
    printf("%d ",*(A+2));
    printf("%d ",*(A+1));
    printf("%d ",*(A+0));
}