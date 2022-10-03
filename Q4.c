#include<stdio.h>

int main()
{
    int a[10];
    int i,max = -1;

    printf("enter 10 numbers = ");
    for ( i = 0; i < 9; i++)
    {
        scanf("%d ",&a[i]);
    }
    
    for ( i = 0; i < 9; i++)
    {
        if(a[i] > max)
        max = a[i];
    }
    printf("max = %d",max);

    return 0;
}