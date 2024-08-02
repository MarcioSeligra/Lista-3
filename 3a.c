#include<stdio.h>

int main()
{
    int a,b,c;

    printf("insira o valor de a: ");
    scanf("%d",&a);

    printf("insira o valor de b: ");
    scanf("%d",&b);

    if (a>b)
    {
    c=a-b;
    printf("o valor de a-b e:%d",c);
    }

    else
    {
    c=b-a;
    printf("o valor de b-a e:%d",c);
}
}
