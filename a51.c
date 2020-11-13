/*
(1.0) Tendo um registro contendo Matrícula do Aluno (MA) do aluno,
tipo de participação (A, B, C ou D) e Sócio da SBC (S - sim ou N - não),
desenvolver um algoritmo para calcular o valor que cada aluno vai pagar
para participar da semana de informática, sabendo-se que:

Tipo de Participação:           Valor a Pagar:
A - 1 curso                          R$ 30,00
B - 2 cursos                         R$ 60,00
C - 3 cursos                         R$ 90,00
D - outros                            R$100,00

Para os sócios da SBC o valor a pagar terá um desconto de 50%.
O algoritmo deverá permitir a entrada de vários registros (no máximo 1000)
até que uma condição de finalização seja satisfeita.

Calcular e exibir também o total geral arrecadado com o evento
e quantos alunos se matricularam em cada um dos tipos de participação.
Utilizar funções para cada uma das funcionalidades necessárias.
*/


#include<stdio.h>

int main (){
      typedef struct {
        int MA;
        char tipo_part;
        char socio;
    } Aluno ;

    void total_arrecadado(Aluno *aluno, int tam){
        float total;
        total = 0;
        for (int i =0 ; i < tam ; i++){
            if (aluno[i].tipo_part == 'A'){
                if (aluno[i].socio == 'S'){
                    total = total + 0.5*30;
                }
                if (aluno[i].socio == 'N'){
                    total = total + 30;
                }
            }
            if (aluno[i].tipo_part == 'B'){
                if (aluno[i].socio == 'S'){
                    total = total + 0.5*60;
                }
                if (aluno[i].socio == 'N'){
                    total = total + 60;
                }
            }
            if (aluno[i].tipo_part == 'C'){
                if (aluno[i].socio == 'S'){
                    total = total + 0.5*90;
                }
                if (aluno[i].socio == 'N'){
                    total = total + 90;
                }
            }
            if (aluno[i].tipo_part == 'D'){
                if (aluno[i].socio == 'S'){
                    total = total + 0.5*100;
                }
                if (aluno[i].socio == 'N'){
                    total = total + 100;
                }
            }
        }
        printf("\n\n **** Total arrecadado : %.2f ***** \n\n", total);
    };


void tipo_part(Aluno *aluno, int tam){
    int tipo[3] = {0,0,0,0};
    for (int i =0 ; i < tam ; i++){
        if (aluno[i].tipo_part == 'A'){
            tipo[0] = tipo[0] + 1;
        }
        else if (aluno[i].tipo_part == 'B'){
            tipo[1] = tipo[1] + 1;
        }
        else if (aluno[i].tipo_part == 'C'){
            tipo[2] = tipo[2] + 1;
        }
        else if (aluno[i].tipo_part == 'D'){
            tipo[3] = tipo[3] + 1;
        }
    }

    printf("Alunos do Tipo (A) : %d\n", tipo[0]);
    printf("Alunos do Tipo (B) : %d\n", tipo[1]);
    printf("Alunos do Tipo (C) : %d\n", tipo[2]);
    printf("Alunos do Tipo (D) : %d\n", tipo[3]);
}

    
int tam;
tam = 4;
printf("informe a qtd de alunos a serem cadastrados: ");
scanf("%d", &tam);
if (tam > 1000){
    tam = 1000;
}
Aluno aluno[tam];
/*Preenchendo os alunos*/
/*Considerando que a matricula do aluno representa a ordem i que foi cadastrado*/
/* 1 - leitura da struct e exibir pro usuario*/
    for (int i = 0 ; i <  tam  ; i++)
    {
        aluno[i].MA = i+1;
        printf("Matricula Aluno[%d] \n", aluno[i].MA);
        printf("Tipo de Participacao: (A,B,C ou D) \n");
        scanf("%s", &aluno[i].tipo_part);
    
        printf("Eh Socio: ( S = SIM    //    N = NAO ) \n");
        scanf("%s", &aluno[i].socio);
        
    }

    total_arrecadado(aluno, tam);
    tipo_part(aluno, tam);

    return 0;
}


