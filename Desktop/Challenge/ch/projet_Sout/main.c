#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    char Nom[100][50];
    char Prenom[100][50];
    char Telephone[100][40];
    int Age[100];
    char statut[100][30];
    int Reference[100];
    char Date[100][50];
    int choix;
    int x=0;
    int Refe;
    int i=0;
    int modification;
    char nom_cherch[50];
    float somme = 0;
    int totale=0;
    int count1 = 0; // 0-18 ans
    int count2 = 0; // 19-35 ans
    int count3 = 0;
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Choix_Menu(){
        printf("1.Ajouter une reservation. \n");
        printf("2.Modifier un reservation. \n");
        printf("3.Supprimmer un reservation .\n");
        printf("4.Afficher par reference.\n");
        printf("5.Afficher les detials d'une reservation. \n");
        printf("6.Tri de reservation. \n");
        printf("7.Recherche des reservation. \n");
        printf("8.Calculer la moyenne d'age des patients ayant reserve. \n");
        printf("9.Afficher le nombre de patients par tranche d'age.\n");
        printf("10.Quitter le programme. \n");
        printf("Entrer votre choix: \n");
        scanf("%d",&choix);
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void les_statut(){
    int choix_statut;
    printf("Entrez le statut\n");
    printf("1.valide:\n");
    printf("2.reporte:\n");
    printf("3.annule:\n");
    printf("4.traite:\n");
    scanf("%d",&choix_statut);
   switch(choix_statut){
    case 1:
        strcpy(statut[x], "valide");
        printf("Statut est valide\n");
            break;
    case 2:
        strcpy(statut[x], "reporte");
        printf("Statut est reporte\n");
            break;
    case 3:
        strcpy(statut[x], "annule");
        printf("Statut est annule\n");
            break;
    case 4:
        strcpy(statut[x], "traite");
        printf("Statut est traite\n");
            break;
    default:
        printf("Le statut est incorrect\n");
            break;
    }
    return 0;
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Ajouter(){
    if(x<100){
            printf("Entrer s'il vous plait votre nom: \n");
            scanf("%s",&Nom[x]);
            printf("Entrer s'il vous plait votre prenom: \n");
            scanf("%s",&Prenom[x]);
            printf("Entrer s'il vous plait le telephon: \n");
            scanf("%s",&Telephone[x]);
            printf("Entrer s'il vous plait ton age: \n");
            scanf("%d",&Age[x]);
            les_statut(x);
            printf("Entrer s'il vous plait la date de reservation en format AAAA/MM/JJ: \n");
            scanf("%s",&Date[x]);
            Reference[x]=x+1;
            printf("Reference de reservation est %d \n",Reference[x]);
            x=x+1;
}
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Modification(){
    printf("Entrez la reference de la reservation a modifier: ");
    scanf("%d", &Refe);
    for(i=0;i<=x;i++){
if(Reference[i]==Refe){
        printf("1. Modifier le nom\n");
        printf("2. Modifier le prenom\n");
        printf("3. Modifier le telephone\n");
        printf("4. Modifier l'age\n");
        printf("5. Modifier le statut\n");
        printf("6. Modifier la date\n");
        printf("7. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &modification);
            switch(modification){
            case 1:
                printf("Entrer le nouveau nom :\n");
                scanf("%s",&Nom[i]);
                break;
            case 2:
                printf("Entrer le nouveau Prenom :\n");
                scanf("%s",&Prenom[i]);
                break;
            case 3:
                printf("Entrer le nouveau Telephone :\n");
                scanf("%s",&Telephone[i]);
                break;
            case 4:
                printf("Entrer le nouveau age :\n");
                scanf("%s",&Age[i]);
            case 5:
                printf("Entrer le nouveau statut :\n");
                les_statut();
                break;
            case 6:
                printf("Entrer le nouveau date :\n");
                scanf("%s",&Date[i]);
                break;
            case 7:
                printf("Vous avez quittez\n");
                break;
            default:
                printf("Non valide\n");
                break;
                }return;
            }
        }
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void  Supprimer(){
    int ref;
    printf("Entrez la reference de la reservation a supprimer: ");
    scanf("%d", &ref);
    for (int i = 0; i < x; i++) {
        if (Reference[i] == ref) {
            for (int j = i; j < x- 1; j++) {
                strcpy(Nom[j], Nom[j + 1]);
                strcpy(Prenom[j], Prenom[j + 1]);
                strcpy(Telephone[j], Telephone[j + 1]);
                Age[j] = Age[j + 1];
                strcpy(statut[j], statut[j + 1]);
                Reference[j] = Reference[j + 1];
                strcpy(Date[j], Date[j + 1]);
            }
            x--;
            printf("Reservation supprimee bien.\n");
            break;
        }
    }
   if(x==0) printf("Reference non trouvee.\n");

}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Affiche_refe(){
   int refe;
    printf("Entrez la reference : ");
    scanf("%d",&refe);
    int nomb=0;
    for (int i = 0; i < x; i++) {
        if (Reference[i]==refe) {
            printf("\nDetails de la reservation %d :\n", refe);
            printf("Nom : %s\n", Nom[i]);
            printf("Prenom : %s\n", Prenom[i]);
            printf("Telephone : %s\n", Telephone[i]);
            printf("Age : %d\n", Age[i]);
            printf("Statut : %s\n", statut[i]);
            printf("Date : %s\n", Date[i]);
            nomb++;
            break;
        }
    }
    if(nomb==0)
        printf("Reference non trouver!");
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Afficher_toutes(){
    for(int i=0;i<x;i++){
    printf("\n*******************************************************************************\n");
    printf("Referenc %dNom:%s Prenom:%s Tel:%s Age:%d Statut:%s Date:%s\n",
    Reference[i],Nom[i],Prenom[i],Telephone[i],Age[i],statut[i],Date[i]);
    }
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void Trii(){
    printf("1.trii par nom\n");
    printf("2.trii par statut\n");
    int tri;
    scanf("%d",&tri);
    switch(tri){
    case 1:
    for (int i = 0; i < x-1 ; i++) {
        for (int j = i+1 ; j < x ; j++) {
            // إذا كان الاسم الحالي أكبر من الاسم التالي، نقوم بالتبديل
            if (strcmp(Nom[i], Nom[j]) > 0) {
                char nom1[30];
                strcpy(nom1,Nom[i]);
                strcpy(Nom[i],Nom[j]);
                strcpy(Nom[j],nom1);
            }
        }
    }
      break;
    case 2 :
        for (int i = 0; i < x ; i++) {
        for (int j = i+1 ; j < x ; j++) {
            // إذا كان الاسم الحالي أكبر من الاسم التالي، نقوم بالتبديل
            if (strcmp(statut[i], statut[j + 1]) > 0) {
                 char Sta1[30];
                strcpy(Sta1,statut[i]);
                strcpy(statut[i],statut[j]);
                strcpy(statut[j],Sta1);
            }
        }
        }
           break;
}

}
void Recherche(){
    printf("1.Recherche d'une reservation par reference unique.\n");
    printf("2.Recherche d'une reservation par nom.\n");
    int Rech;
    scanf("%d",&Rech);
    switch(Rech){
    case 1:
      Affiche_refe();
      break;
    case 2:
    printf("entrez le nom a reherchez :");
    scanf("%s",nom_cherch);
    int A=0;
    for(int i=0;i<x;i++){

        if (strcmp(nom_cherch,Nom[i])==0){
            printf("les information sur le nom que vous recherchez sont :");
            printf("Nom : %s\n", Nom[i]);
            printf("Prenom : %s\n", Prenom[i]);
            printf("Telephone : %s\n", Telephone[i]);
            printf("Age : %d\n", Age[i]);
            printf("Statut : %s\n", statut[i]);
            printf("Date : %s\n", Date[i]);
            printf("referenc : %d\n",Reference[i]);
            A++;
        }
    }
    break;
    if (A==0)printf("le nom que vouz entre n'existe pas");
     break;
    }

}
float Calculer_age(){
// float moyenn;
    if (x == 0) return 0; // Évite la division par zéro
    for (int i = 0; i < x; i++) {
        somme += Age[i]; // Ajoute l'âge de chaque patient à la somme
    }
    float moyenne = somme / x; // Calcule la moyenne
    printf("La moyenne d'age des patients ayant reserve est : %.2f\n", moyenne);
    return moyenne;
}// Retourne la moyenne
void Nombre_patients(){
    for (int i = 0; i < x; i++) {
             totale+=Age[i];
        if (Age[i] >= 0 && Age[i] <= 18) {
            count1++;}
         else if (Age[i] >= 19 && Age[i] <= 35) {
            count2 ++;}
         else if (Age[i] >= 36) {
            count3++;}
    }
    printf("Nombre de patients par age est :\n");
    printf("0-18 ans : %d\n", count1);
    printf("19-35 ans : %d\n", count2);
    printf("36 ans et plus : %d\n", count3);
}
int fake_data(){
    char nom[10][40]={"Mouna","Amine","Tifoute","Ismail","Younese","Anir","Latifa","Douha","Imane","Salma"};
    char pre_nom[10][40]={"Qoula","Brada","Maach","Elbakhti","Zohir","Chahin","Essahel","Daouidi","Bnsimimou","Zyane"};
    char tele_phon[10][40]={"123456","567899","67890456","567890356","2345678","3456789","2345678","2345678","2345678","123456789"};
    int A_ge[10][40]={18,50,43,39,20,16,66,33,59,10};
    char Sta_tut[10][40]={"Valide","Annule","Reporte","Traite","Valide","Report","Annule","Report","Valide","Traite"};
    char R_date[10][40]={"2010/10/02","2020/12/12","2024/03/09","2023/07/30","2022/08/05","2023/06/13","2018/05/20","2016/04/15","2022/05/24","2023/07/08"};
    for (int i=0 ; i<10 ;i++){
        strcpy(Nom[x],nom[i]);
        strcpy(Prenom[x],pre_nom[i]);
        strcpy(Telephone[x],tele_phon[i]);
        Age[x],A_ge[i];
        strcpy(statut[x],Sta_tut[i]);
        strcpy(Date[x],R_date[i]);
        Reference[x]=x+1;
        x++;
    }
    return 10;
}


int main()
{
    fake_data();
    do{
        Choix_Menu();
        switch(choix){
        case 1:
            Ajouter();
            break;
        case 2:
           Modification();
        break;
        case 3:
            Supprimer();
        break;
        case 4:
            Affiche_refe();
            break;
        case 5:
            Afficher_toutes();
            break;
        case 6:
            Trii();
            break;
        case 7:
            Recherche();
            break;
        case 8:
         Calculer_age();
            break;
        case 9:
            Nombre_patients();
        case 10:
           printf("Au revoir!");
           break;
        default:
            printf("Choix invalide.\n");
            break;
            }
        }while(choix!=10);
    return 0;
}

