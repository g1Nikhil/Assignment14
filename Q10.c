#include<stdio.h>

int main()
{
    int a[5],b[5];
    int i;

    printf("enter 5 value");

    for ( i = 0; i <= 4; i++)
    {
        scanf("%d",&a[i]);
         
         b[i] = a[i];
    }

    for ( i = 0; i <= 4; i++)
    {
        printf("%d",b[i]);
    }
    return 0;
    
}