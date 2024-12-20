#include<stdio.h>
#include<string.h>
//Declaration des variables 
float x, y;

//Fonction addition (Prodige)
 int somme(int n1, int n2){
    int s=n1+n2;
    return s;
}

//Fonction multiplication (Fanta)
int multiplication  (int x ,int y) {
    int multi =x*y;
    return multi;
}

//Fonction soustraction (Maeva)
float soustraction  (float l ,float m) {
    float soustr =l-m;
    return soustr;
}

//Fonction Divition (Sobour)

main(){
    x=20;
    y=3;
    float r;
    r= somme (x,y);

    printf("La somme est %f", r);

    r= soustraction (x,y);
    printf("La soustraction est %f", r);
}