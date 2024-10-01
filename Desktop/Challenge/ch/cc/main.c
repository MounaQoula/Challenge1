#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int age ;
    char Nom , Prenom , Sexe , Email;
    printf("Veuiller entrer l'age: \n");
    scanf("%d",&age);
    printf("veuiller entrer le nom et le prénomé: \n");
    scanf("%c%c",&Prenom,&Nom);
    printf("entrer Sexe: \n");
    scanf("%c",&Sexe);
    printf("entrer votre email: \n");
    scanf("%s",&Email);
    return 0;
}
int mainc(){
int n,i,A;
    printf("entrer svp le nombre: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        A=A+1;
    }
    printf("la somme est %d+%d=%d",n,i,A);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float K,C;
    printf("la température en Celsius  est: \n");
    scanf("%f",&C);
    K = C + 273.15;
    printf(" la transforme en Kelvin est :%2f",K);
    return 0;
}
int i,A;
    for(i=10;i>=1;i--){
        A=4*i;
        printf("4 x %d = %d \n",i,A);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float Km,Yards;
    printf(" la distance en kilomètres  est: \n");
    scanf("%f",&Km);
    Yards = Km * 1093.15;
    printf(" la transforme en yards est :%2f",Yards);
    return 0;
}
int main()
{
    float Km_h,m_s;
    printf(" la vitesse en kilomètres par heure (km/h) est: \n");
    scanf("%f",&Km_h);
    m_s = Km_h * 0.27778;
    printf(" la transforme en mètres par seconde (m/s) est :%2f",m_s);
    return 0;
}

 int i,j,N;
    printf("donner  un entier : ");
    scanf("%d",&N);
    for(i=0;i<N;i++){
    for(j=1;j<=(N*2)-1;j++){
    if (j>=N-i && j<= N+i )
        printf("*");
      else
        printf(" ");
  }
  printf("\n");
  }
return 0 ;
}

 #include <stdio.h>
#include <stdlib.h>
int main()
{
    float C;
    printf("Veuillez entrer la température en Celsius : \n");
    scanf("%f",&C);
    if(C<0)
        printf("la température est solide");
    else if(C>100)
        printf("la temperature est Gaz");
    else
        printf("la temperature est liquide");
    return 0;
}
int main() {
    int n, reversedNumber = 0;
    printf("Entrez un entier: ");
    scanf("%d", &n);
    while (n != 0) {
        int remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    printf("L'entier inversé est: %d\n", reversedNumber);

    return 0;
}

 #include <stdlib.h>
#include <math.h>
int main()
{
    float a,b;
    float Somme,Division,mul,ad;
    printf("Veuillez entrer a : \n");
    scanf("%f",&a);
    printf("entrer valeur b : \n");
    scanf("%f",&b);
    Division = a/b;
    printf("la valeur Division est :%.f \n",Division);
    Somme = a+b;
    printf("la valeur Somme est :%.f \n",Somme);
    mul = a*b;
    printf("la valeur mul est :%.f \n",mul);
    ad = a-b;
    printf("la valeur ad est :%.f \n",ad);
    return 0;}

 #include <stdlib.h>
#include <math.h>
int main(){
float longueur,largeur,aire,permetre;
    printf("entrer la valeur de longueur: ");
    scanf("%f",&longueur);
    printf("Entrer la valeur de largeur: ");
    scanf("%f",&largeur);
    aire=longueur*largeur;
    permetre=2*(longueur+largeur);
    printf("la valeur de l'aire est : %.f\n",aire);
    printf("la valeur de permetre est : %.f\n",permetre);
    return 0;
}
#include <math.h>
int main()
{
    float a,b,c,x,x1,x2,delta;
    printf("veuillez entrer a : \n");
    scanf("%f",&a);
    printf("veuillez entrer b : \n");
    scanf("%f",&b);
    printf("veuillez entrer c : \n");
    scanf("%f",&c);
    if(a==0)
    {
        if(b!=0)
            printf("erreur");
    else{
        x=-c/b;
        printf("x=-c/b=%.2f",x)}};
     else{
        delta = pow(b,2)-(4*a*c);
        if(delta==0)
        {   x=-b/(2*a);
            printf("x=-b/2a=%f",x);}
        }
    else if(delta>0)
    {
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("x1=%f\nx2=%f",x1,x2);}
        else
        printf("pas de solution");
    return 0;}
    int main(){
int age;
    printf("Entrer son age : ");
    scanf("%d",&age);
    if (age>=18){
        printf("Vous etre éligible pour voter ");
    }
    else{
     printf("Vous n'etes pas éligible pour voter");
    }
    return 0;}
 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float A;
    printf("Entrer la valeyr de A :");
    scanf("%f",&A);
    if(A>0){
        printf("le nombre est positif");
    }
    else if(A<0){
        printf("le nombre est negative"); }
     else
        printf("le nombre est nulle");
        return 0;}
int main(){
int n;
    printf(" entrer le nombre : ");
    scanf("%d",&n);
    do{
        if(n%2==0){
            printf("c'est n'est pas un nombre premier ");
        }
        else {
            printf("c'est un nombre premier ");
        }
    }while(n%n-1==0);
    return 0;}

 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int Semaine;
    printf("Ecrire un nombre :");
    scanf("%d",&Semaine);
    switch(Semaine){
     case 1 :printf("Lundi");
        break;
     case 2 :printf("Mardi");
            break;
     case 3 :printf("Merc");
          break;
     case 4 :printf("Jeudi");
       break;
     case 5 :printf("Vendredi");
        break;
      case 6 : printf("Semdi");
          break;
       case 7 :printf("Dimench");
            break;
     }
     return 0;}
int main(){
int N;
    printf("Entrer le nombre :");
    scanf("%d",&N);
    for(int i=N+1;i<=N+10;i++)
        printf("resulta est:%d\n",i);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float Moyenne;
    printf("Entrer la note : \n");
    scanf("%f",&Moyenne);
    if(Moyenne<10)
        printf("La moyenne il est recalé");
    else if(Moyenne<=10 &&Moyenne<12){
        printf("la mention passable ");
    }
    else if(Moyenne<=12 &&Moyenne<14){
        printf("la mention assez bien");}
     else if(Moyenne<=14 &&Moyenne<16){
        printf("la mention bien");
    }
    else
        printf("la mention très bien");
    return 0;}
    int main(){
int N,i;
    printf("entrer le nombre n :");
    scanf("%d",&N);
    i=N+1;
    do{
        printf("%d",i);
        i++;}while(i<=N+10);
    return 0;}
#include <math.h>
int main()
{
    int A;
    printf("saisir le nombre :");
    scanf("%d",&A);
    if(A%2==0){
        printf("pair");
    }
    else{
        printf("impair");}
    return 0;}
int main(){
int N;
    float i,S;
    printf("entrer le nombre n :");
    scanf("%d",&N);
    S=0;
    while(i<=N){
        S=S+(1/i);
        i++;
    }
    printf("%f",S);
    return 0;}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,a,b,c,d;
    printf("entrer les chiffre :");
    scanf("%d",&n);
    a = n/1000;
    b = n/100-(a*10);
    c = n/10-(a*100)-(b*10);
    d = n%10;
    printf("%d%d%d%d",d,c,b,a);
    return 0;}
int main(){
 int tabl[5] ;
    int i;
    for(i=0;i<5;i++){
        printf("les valeur de tableau %d : \n",i+1);
        scanf("%d",&tabl[i]);
    }
    printf(" tableau:");
    for (i=0;i<5;i++)
        printf("tabl[%d]=%d \n",i,tabl[i]);
    return 0;
}
 #include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int annee,mois,jour,h,M,S,choix;
    printf("menu de convention: \n");
    printf("1.mois \n");
    printf("2.jour \n");
    printf("3.h \n");
    printf("4.M \n");
    printf("5.S \n");
    scanf("%d",&choix);
    printf("entrer annee: \n");
    scanf("%d",&annee);
    switch(choix){
        case 1:
            mois = 12*annee;
            printf("le nombre d'annee : %d\n",mois);
            break;
        case 2:
            jour = 365*annee;
            printf("le nombre d'annee :%d\n",jour);
            break;
        case 3:
            h = 24*365*annee;
            printf("le nombre d'annee :%d\n",h);
            break;
        case 4:
            M = 24*60*365*annee;
            printf("le nombre d'annee :%d\n",M);
         break;
        case 5:
            S = 24*60*60*365*annee;
            printf("le nombre d'annee:%d\n",S);
        break;
        default:
            printf("invalide")}
            return 0;}
