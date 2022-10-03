#include<stdio.h>

int main()
{
    int a[10];
    int i,smallest = 100;
    
    printf("enter 10 numbers");
    for ( i = 0; i <= 9; i++)
    {
      scanf("%d",&a[i]);

      if (a[i] < smallest)
      {
        smallest = a[i];
      }
    }
    printf("smallest = %d",smallest);
    return 0;
}