#include <stdio.h>
int main(){

    float a,b,m;
    char nom[20];

    printf("veiller saisir le nom de l'apprenant:\n");
    scanf("%s",nom);

    printf("entrer la 1er note:\n");
    scanf("%f", &a);

    printf("entrer la 2ème note:\n");
    scanf("%f", &b);
    m=(a+b)/2;
    printf("%s la moyonne est de %2.f:\n",m,nom);
    return 0;

}