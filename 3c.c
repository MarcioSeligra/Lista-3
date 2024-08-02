#include<stdio.h>

void main()
{
float N1,N2,N3,N4,MD;

printf("insira o valor de N1: ");
scanf("%f",&N1);

printf("insira o valor de N2: ");
scanf("%f",&N2);

printf("insira o valor de N3: ");
scanf("%f",&N3);

printf("insira o valor de N4: ");
scanf("%f",&N4);

MD=(N1+N2+N3+N4)/4;

if (MD>5)
{
    printf("aprovado, valor da media:%f ", MD);
}
else
{
    printf("reprovado, valor da media:%f ", MD);
}
}
