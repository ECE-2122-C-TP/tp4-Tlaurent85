//
// Created by Sebastien LAURENT on 29/09/2021.
//
#include "stdio.h"
#include "fonction.h"
int getmax(int n2, int n1) {
    if (n1<n2){
        return n2;
    }
    else{
        return n1;
    }

}
int saisirentier(){
    int n=0;
    printf("saisir un entier");
    scanf("%d",&n);
    return n;
}
int calculaire(int longu,int larg){
    return longu*larg;
}
int calculperi(int lo,int la){
    return 2*lo+2*la;
}
int premeirmultipledudeuxieme(int n,int m){//cette fonction longue indique si le premier entier est un multiple du deuxieme ou pas
    return (n % m ==0)? 1 : 0;


}
