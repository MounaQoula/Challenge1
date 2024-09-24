#include <stdio.h>
#include <stdlib.h>
int Untitled()
{
    float Km_h,m_s;
    printf("la distance en kilomètres est: \n");
    scanf("%f",&Km_h);
    m_s = Km_h * 0.27778;
    printf("la transforme en yards est :%2f",m_s);
    return 0;
}
