#include<stdio.h>
void nothing(int y)
{
     printf("Nothing function - %p\n",&y);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Main function - %p\n",&n);
    nothing(n);
    
}