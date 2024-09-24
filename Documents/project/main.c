#include <stdio.h>
#include <stdlib.h>
int main()
{
    float K,C;
    printf("la température en Celsius est: \n");
    scanf("%f",&C);
    K = C + 273.15;
    printf("la transforme en Kelvin est :%2f",K);
    return 0;
}



