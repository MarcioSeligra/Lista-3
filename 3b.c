#include<stdio.h>

int main()
{
    int N,a;

    printf("insira o valor de N: ");
    scanf("%d",&N);

    if (N>0)
    {
    printf("%d",N);
    }
    else
    {
    a=N*-1;
    printf("%d",a);
    }
}
