#include<stdio.h>
int main (){
    int a[5] = {1,2,-1,7,0};
    int b[5] = {2,3,8,-10,2};
    char op[4] = {'+','-','/','*'};
    float out[5] = {0,0,0,0,0};
    int i = 0;
    char input;
    for (i=0 ; i < 5 ; i++ ) {
        printf("%d ", a[i]);
    };
    printf("\n");
    for (i=0 ; i < 5 ; i++ ) {
        printf("%d ", b[i]);
    };
    printf("Escolha uma operacao: + - * / \n");
    scanf("%c", &input);
    printf("\n");
    switch (input)
    {
    case '+':
        for (i=0 ; i<5 ; i++){
        out[i] = a[i]+b[i];
        printf("%d %c %d = %.2f\n",a[i] , op[0] , b[i] , out[i]);
    } break;
    case '-':
        for (i=0 ; i<5 ; i++){
        out[i] = a[i]-b[i];
        printf("%d %c %d = %.2f\n",a[i] , op[0] , b[i] , out[i]);
    } break;
    case '/':
        for (i=0 ; i<5 ; i++){
        out[i] = a[i]/b[i];
        printf("%d %c %d = %.2f\n",a[i] , op[0] , b[i] , out[i]);
    } break;
    case '*':
        for (i=0 ; i<5 ; i++){
        out[i] = a[i]*b[i];
        printf("%d %c %d = %.2f\n",a[i] , op[0] , b[i] , out[i]);
    } break;
    default:
        break;
    }        
}