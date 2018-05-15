#include<stdio.h>
#include<stdlib.h>

int multiplicacao(int x,int y);

int main(){
    int x,y;
    printf("Digite o valor de x: ");
    scanf("%d",&x);
    printf("Digite o valor de y: ");
    scanf("%d",&y);
    printf("O resultado da multiplicacao de x por y e: %d",multiplicacao(x,y));
    return 0;
}

int multiplicacao(int x,int y){
    int i,soma=0;
    if(x>=0 && y>=0){
        if(x>y){
            for(i=0;i<y;i++){
                soma=x+soma;
            }
        }
        else{
            for(i=0;i<x;i++){
                soma=soma+y;
            }
        }
        return soma;
    }
    else if(x>=0 && y<0){
        for(i=0;i<x;i++){
            soma=y+soma;
        }
        return soma;
    }
    else if(x<0 && y>=0){
        for(i=0;i<y;i++){
            soma=x+soma;
        }
        return soma;
    }
    else{
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
        if(x%2==0 && y%2==0 || x%2==1 && y%2==1){
            return soma;
        }
        else{
            return -soma;
        }
    }
}
