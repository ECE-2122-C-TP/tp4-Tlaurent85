#include "exo1.h"
#include "fonction.h"
#include "stdio.h"

//
// Created by Sebastien LAURENT on 28/09/2021.
//
#define VAL 10
void exo1() {
    int n1 = 0;
    int n2 = 0;
    printf("saisir un entier");
    scanf("%d", &n1);
    printf("saisir un auuuuuuuuuuuutre entier");
    scanf("%d", &n2);
    getmax(n1, n2);
    return;
}
void exo2(){
    int n=0;
    saisirentier(n);
    return;
}
void exo3(){
    int longueur= saisirentier(longueur);
    int largeur= saisirentier(largeur);
    calculaire(longueur, largeur);
    calculperi(longueur, largeur);
    return;
}

void exo4(){
    int n=0;
    int m=0;
    n = saisirentier(n);
    premeirmultipledudeuxieme(n, 3);
    (n>=VAL)? printf("vréééééééééééééé") :printf("fooooooooooooo");
    return;
}