#include<stdio.h>
#include<stdlib.h>

struct  life{
    double vita;
};

typedef struct life l;

l set(l set);
int scelta1();
void life(l*eroe);
void attaccoEroe(l*eroe, l*mostro, int a);
void attaccoMostro(l*eroe);

int main(){
    l eroe;
    l mostro;
    int scelta;
eroe=set(eroe);
mostro=set(mostro);
printf("VitaEroe=%lf\n",eroe.vita);
printf("VitaMostro=%lf\n",mostro.vita);
while(eroe.vita&&mostro.vita>0){
scelta=scelta1();
attaccoEroe(&eroe, &mostro, scelta);
attaccoMostro(&eroe);
    }
    printf("The End");
}

l set(l set){
    set.vita=100;
    return set;
}

int scelta1(){
    int a;
    printf("\nScegli azione eroe:\n");
    printf("1=Tlc\n");
    printf("2=DannoDoppio\n");
    printf("3=Life+\n");
    scanf("%d",&a);
    return a;
}

void life(l*eroe){
if(eroe->vita<=90){
    eroe->vita +=10;
}else{
    printf("Vita massima");
    }
}

void attaccoEroe(l*eroe, l*mostro, int a){
switch(a){
    case(1):
        mostro->vita -=10;
        printf("VitaMostro=%lf",mostro->vita);
        break;
    case(2):
        mostro->vita -=20;
        printf("VitaMostro=%lf",mostro->vita);
        break;
    case(3):
        life(eroe);
        printf("VitaMostro=%lf",mostro->vita);
        printf("VitaEroe=%lf",eroe->vita);

    }
}

void attaccoMostro(l*eroe){
    eroe->vita -=15;
    printf("\nVitaEroe=%lf",eroe->vita);
}

