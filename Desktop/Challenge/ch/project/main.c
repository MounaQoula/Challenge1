#include <stdio.h>
#include <stdlib.h>

int main()
{
    int table_1[]={1,44,35,4,5};
    int i;
    for(i=0;i<table_1[4];i++)
    printf("%d\n",table_1[i]);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A,B;
    printf("le nombre d elements\n");
    scanf("%d",&A);
    float table[A];

    for(B=0;B<A;B++){
        printf("enter elements\n");
        scanf("%f",&table[B]);
    }
    for(B=0;B<A;B++){
        printf("element %d in table is %.f\n",B,table[B]);

    }


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A,B,I;

    printf("le nombre d elements\n");
    scanf("%d",&A);
    int table[A];

    for(I=0;I<A;I++){
        printf("enter elements\n");
        scanf("%d",&table[I]);
    }
    printf("le facteur de multiplication\n",B);
    scanf("%d",&B);
    for(I=0;I<A;I++){
        table[I] = B * table[I];
        printf("le facteur %d\n",table[I]);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A,I,mini;

    printf("le nombre d elements\n");
    scanf("%d",&A);
    int table[A];

    for(I=0;I<A;I++){
        printf("enter elements\n");
        scanf("%d",&table[I]);
    }
    mini = table[0];
    for(I=1;I<A;I++){
       if(mini>table[I])
        mini = table[I];
    }
    printf("le Minimum is %d",mini);


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A,I,max;

    printf("le nombre d elements\n");
    scanf("%d",&A);
    int table[A];

    for(I=0;I<A;I++){
        printf("enter elements\n");
        scanf("%d",&table[I]);
    }
    max = table[0];
    for(I=1;I<A;I++){
       if(max<table[I])
        max = table[I];
    }
    printf("le Maximum is %d",max);


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int somme(int N, int A){
    int P;
    P = N + A;
    return P;

}

int main()
{
    int N,A,P;
    printf("Enter first number\n");
    scanf("%d",&N);
    printf("Enter second number\n");
    scanf("%d",&A);
    P = somme(N,A);
    printf("somme est %d\n",P);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int Multiplication(int N, int A){
    int P;
    P = N * A;
    return P;

}

int main()
{
    int N,A,P;
    printf("Enter first number\n");
    scanf("%d",&N);
    printf("Enter second number\n");
    scanf("%d",&A);
    P = Multiplication(N,A);
    printf("Multiplication est %d\n",P);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
 int max;
 int A,B;
int maxim(A,B){
    if(A>B)
    max = A;
    else
    max = B;
    return max;

}

int main()
{
    printf("Enter first number\n");
    scanf("%d",&A);
    printf("Enter second number\n");
    scanf("%d",&B);
    max = maxim(A,B);
    printf("Maximum est %d\n",max);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
    int min;
    int A,B;
int minim( A, B){
    if(A>B)
    min = B;
    else
    min = A;
    return min;

}

int main()
{
    printf("Enter first number\n");
    scanf("%d",&A);
    printf("Enter second number\n");
    scanf("%d",&B);
    min = minim(A,B);
    printf("Minimum est %d\n",min);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int Factorielle(int A, int B){
    int P;
    P = A * B;
    return P;

}

int main()
{
    int A,B,P;
    printf("Enter number\n");
    scanf("%d",&A);
    printf("Enter Factorielle\n");
    scanf("%d",&B);
    P = Factorielle(A,B);
    printf("Factorielle est %d\n",P);
    return 0;
}

