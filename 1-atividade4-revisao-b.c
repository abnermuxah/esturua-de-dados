/*2) Faça um programa que leia um vetor de valores numéricos de 10 posições e que retorne:
a) a média dos valores do vetor;
b) o valor mais próximo da média;
c) o valor mais distante da média;
Exemplo de entrada e saída:
Entrada: [5; -1; 2.5; 3; 8; 2; 9; 4; 2; 5]
Saída: média:3.95; valor mais próximo:4; valor mais distante: 9;*/

#include<stdio.h>
int main (){
    float vet[10] = {5, -1, 2.5, 3, 8, 2, 9, 4, 2, 5}; // entrada
    float media = 0, sum = 0, aux = 0;
    float mais_prox = 0, mais_dis = 0;
    int i = 0, j = 0;
    for(i = 0 ; i<10 ; i++){
        sum = sum + vet[i];
        media = sum/10;
    }
    /*ordenar o vetor e mais facil analisar o mais proximo e o mais distante da media*/
    for (i=0 ; i < 10 ; i++) {
        for (j=i ; j<10 ;j++){
            if (vet[j] > vet[i]){
                aux = vet[i];
                vet[i]=vet[j];
                vet[j] = aux;
            }
        }
    }
    for(i = 0 ; i<10 ; i++){
        printf(" %.2f ", vet[i]);
    }
    /*o mais proximo é o elemento do vetor maior ou igual a media*/
    for(i = 0 ; i<10 ; i++){
        if (vet[i] >= media){
            mais_prox = vet[i];
        }
    }
    /*o mais distante da media é primeiro elemento do vetor ordenado do maior para o menor*/
    mais_dis = vet[0];
    printf("\n1 - Media: %.2f \n", media);
    printf("2 - Mais Proximo:  %.2f \n", mais_prox);
    printf("2 - Mais Distante: %.2f ", mais_dis);
}
