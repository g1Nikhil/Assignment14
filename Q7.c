#include<stdio.h>

int main()
{
    int a[10];
    int i,j,temp;

    printf("enter 10 numbers");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < 9; i++)
    {
        for ( j = i+1; j <= 9; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    
    printf("%d",a[1]);
    return 0;
}