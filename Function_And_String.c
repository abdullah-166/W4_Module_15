#include<stdio.h>
#include<string.h>
void nothing(char n[])
{
    printf("%d",strlen(n));
}
int main()
{
    char name[6]="Hello";
    nothing(name);
}