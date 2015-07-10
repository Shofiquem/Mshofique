#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int a;
printf("enter 1 or 2");
scanf("%d", &a);

if(a==1)
{
printf("you have entered 1!");
}
else
{
    if(a==2)
    {
        printf("you entered 2!");
    }
    else
    {
        printf("whats wrong with you!!");
    }
}
}
