#include<stdio.h>

int caso1(int x,int y);
int caso2(int x,int y);
int caso3(int x,int y);
int caso4(int x,int y);
int multiplicacao(int x,int y);

int main(){
    int x,y;
    printf("Digite o valor de x: ");
    scanf("%d",&x);
    printf("Digite o valor de y: ");
    scanf("%d",&y);
    printf("O resultado da multiplicacao de %d por %d e: %d",x,y,multiplicacao(x,y));
    return 0;
}

int caso1(int x,int y){
    int i,soma=0;
    if(x>y){
        for(i=0;i<y;i++){
            soma=x+soma;
        }
    }
    else{
        for(i=0;i<x;i++){
            soma=y+soma;
        }
    }
    return soma;
}

int caso2(int x,int y){
    int i,soma=0;
    for(i=0;i<x;i++){
        soma=y+soma;
    }
    return soma;
}

int caso3(int x,int y){
    int i,soma=0;
    for(i=0;i<y;i++){
        soma=x+soma;
    }
    return soma;
}

int caso4(int x,int y){
    int i,soma=0;
    if(x>y){
        for(i=x;i<0;i++){
            soma=y+soma;
        }
    }
    else{
        for(i=y;i<0;i++){
            soma=soma+x;
        }
    }
    return -soma;
}

int multiplicacao(int x,int y){
    if(x>=0 && y>=0){
        return caso1(x,y);
    }
    else if(x>=0 && y<0){
        return caso2(x,y);
    }
    else if(x<0 && y>=0){
        return caso3(x,y);
    }
    else{
        return caso4(x,y);
    }
}
