#include <stdio.h>


int main() {
    //Exercice 1
    /*int a, b;
    printf("saisissez deux entier \n");
    scanf("%d %d", &a, &b);
    if (a>b){
        printf("%d",a);
    }
    else{
        printf("%d", b);
    }*/

    //Exercice 2
    /*int longueur, largeur, perimetre, aire;
    printf("saisissez la longueur du rectangle :\n");
    scanf("%d", &longueur);
    printf("saisissez la largeur du rectangle :\n");
    scanf("%d", &largeur);
    perimetre = (longueur + largeur)*2;
    aire = longueur*largeur;
    printf("le perimetre de ce rectangle vaut : %d et son aire vaut : %d", perimetre, aire);
    */

    //Exercice 3
    /*int a;
    int c=3;
    printf("saisissez un entier :\n");
    scanf("%d", &a);
    if(a%c == 0){
        printf("%d est divisible par 3\n", a);
    }
    else{
        printf("%d n'est pas divisible par 3\n",a);
    }
    if(a>10){
        printf("%d est superieur a 10\n", a);
    }
    else{
        printf("%d n'est pas superieur a 10\n", a);
    }*/


    //Exercice 4
    /*int age;
    printf("saisissez votre age\n");
    scanf("%d", &age);

    //Fonction étudiant
    /*int e;
    printf("taper 1 si vous etes etudiant, tapez 0 si non\n");
    scanf("%d", &e);
    if (age<12){
        printf("tafif enfant : 4$\n");
    }
    else if(12<=age<=17){
        printf("tarif jeune : 6$\n");
    }
    else if(e==1 && age<27){
        printf("tarif jeune : 6$\n");
    }
    else if (age>65){
        printf("tarif senior : 6$\n");
    }
    else{
        printf("plein tarif : 9$\n");
    }*/

    // Exercice 5
    /*int b;
    printf("selectionnez une boisson : \n");
    scanf("%d", &b );
    if(b!= 1 && b!= 2 && b!=3 && b!=10 && b!=11){
        printf("erreur ");
    }
    switch(b){
        case 1:
            printf("coca");
            break;
        case 2:
            printf("oasis");
            break;
        case 3:
            printf("caprisun");
            break;
        case 10:
            printf("cafe");
            break;
        case 11:
            printf("the");
            break;



    }*/
    //Exercice 6
    /*float n1, n2, n3;
    float moyenne;
    printf("saisissez 3 notes svp\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    if(n1 == 0 && n2 == 0 && n3 == 0){
        printf("erreur");
        return 0;
    }

    //Calcul de la moyenne :
    moyenne = ((n1 + n2+ n3)/3);
    printf ("la moyenne de ces notes est : %f\n", moyenne);
    */

    //Exercice 7
    /*int nb_classe, nb_eleve, tot_eleve;
    printf("entrez  le nombre de classe ouverte\n");
    scanf("%d", &nb_classe);

    for(int i = 1; i<=nb_classe; ++i){
        printf("entrez le nombre d'eleves par classe\n");
        scanf("%d", &nb_eleve);

        tot_eleve =nb_eleve;
    }
    printf("le nombre total d'eleve dans l'ecole est %d", tot_eleve);

    */
    //Exercice 8
    /*int n;
    printf("saisissez un nombre nous vérifierons si il est multiple de 2 et de 7\n");
    scanf("%d", &n);
    while(!(n % 2 ==0 && n % 7 ==0)){
        printf("Ce nombre n'est pas multiple de 2 ou de 7. Ressaisissez un nombre nous vérifierons si il est multiple de 2 et de 7\n");
        scanf("%d",&n);
    }
    printf("Ce nombre est multiple de deux ou de 7\n");
    */

    //Exercice 9
    /*int nombreDeBlockInitial;
    int nombreDeBlockRestant;
    int nb_etage=0;
    int i=1;
    printf("entrez votre nombre de blocks\n");
    scanf("%d", &nombreDeBlockInitial);
    nombreDeBlockRestant=nombreDeBlockInitial;
    while(nombreDeBlockRestant - i*i >=0){
        nombreDeBlockRestant = nombreDeBlockRestant - (i*i);
        nb_etage++;
        i++;
    }
    printf("vous pouvez construire %d etages, il vous reste %d blocks\n", nb_etage, nombreDeBlockRestant);
    */


    //Exercice 10
    int note, nb_note = 0, moyenne, ancienne_note = 0, somme = 0;

    while(!(note < 0)){
        printf("veuillez rentrez les notes dont vous voulez calculez la moyenne\n");
        scanf("%d", &note);
        if (note<0){
            moyenne = somme/nb_note;
            printf("la moyenne de vos notes est :%d\n", moyenne);
            return 0;
        }
        somme = somme + note;
        //ancienne_note = note;
        nb_note++;
        printf("la somme est de %d\n", somme);
        printf("le nombre de note est de %d\n", nb_note);
    }
    //moyenne = somme/nb_note;
    //printf("la moyenne de vos notes est :%d\n", moyenne);


     return 0;
}
