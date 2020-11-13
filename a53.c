#include<stdio.h>

int main (){
    typedef struct {
        char nome[80];
        char matricula[8];
        char turma[10];
        float nota1;
        float nota2;
        float nota3;
    } Aluno ;


    int qtd;
    int i;
    qtd = 1;
    Aluno aluno[qtd];
    printf("Digite a quantidade de alunos: \n");
    scanf("%d", &qtd);
   
    for (i = 0 ; i < qtd ; i++){
        printf("Aluno[%d] : NOME: ", i);
        scanf("%s", aluno[i].nome);
        printf("Aluno[%d] : MATRICULA[8]: ", i);
        scanf("%s", aluno[i].matricula);
        printf("Aluno[%d] : TURMA: ", i);
        scanf("%s", aluno[i].turma);
        printf("Aluno[%d] : NOTA 1: ", i);
        scanf("%f", &aluno[i].nota1);
        printf("Aluno[%d] : NOTA 2: ", i);
        scanf("%f", &aluno[i].nota2);
        printf("Aluno[%d] : NOTA 3: ", i);
        scanf("%f", &aluno[i].nota3);
    
    }
    for (i = 0 ; i < qtd ; i++){
        float media;
        media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/(3);
        if ((media < 4 )){
            printf("Nome: [%s]\n", aluno[i].nome);
            printf("Matricula: [%s]\n", aluno[i].matricula);
            printf("Turma: [%s]\n", aluno[i].turma);
            printf("--- STATUS --- : REPROVADO - MEDIA [%.2f]", media);
        }
        else if (media >= 4 && media < 7){
            printf("Nome: [%s]\n", aluno[i].nome);
            printf("Matricula: [%s]\n", aluno[i].matricula);
            printf("Turma: [%s]\n", aluno[i].turma);
            printf("--- STATUS --- : RECUPERACAO - MEDIA [%.2f]", media);
        }
         else if (media >= 7){
            printf("Nome: [%s]\n", aluno[i].nome);
            printf("Matricula: [%s]\n", aluno[i].matricula);
            printf("Turma: [%s]\n", aluno[i].turma);
            printf("APROVADO - MEDIA [%.2f] \n\n", media);
        }
    }
    return 0;
}
