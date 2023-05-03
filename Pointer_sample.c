#include<stdio.h>
int main()
{
    int p;
    scanf("%d",&p);
    int *ptr=&p;
    printf("%p\n",&p);
    printf("%p",ptr);
    return 0;
}