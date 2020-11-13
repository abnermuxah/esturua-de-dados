/*

Um cliente solicitou que desenvolvesse um programa onde deve ter as seguintes
características:
- O usuário deve fornecer o tipo de veículo que gostaria de adquirir,
carro, moto ou caminhonete.
- Quando o usuário informar que deseja carro, deve verificar se o usuário
deseja um carro a combustível ou elétrico.
- Para o caso de moto, deve apenas mostrar um texto explicativo da moto.
- No caso de uma caminhonete, deve perguntar para o usuário qual a capacidade
de carga do veículo, caso seja menor que 1 tonelada, informar que o
desconto será de 10%, se for entre 1 e 3 toneladas 15%, maior que 3 toneladas
informar que não há esse tipo de veículo.
- Ao final o programa deve solicitar novamente se o cliente quer informar outro veículo, caso sim, deve ser solicitada todas as informações novamente.

*/

#include<stdio.h>
int main (){

    typedef struct {
        int tipo_veiculo;
        char combustivel;
        float capacidade; // em toneladas
    } Veiculo ;

    Veiculo veiculo[2];

    /*Temos 3 veiculos disponiveis*/
    veiculo[1].tipo_veiculo = 1 ; // carro
    veiculo[1].combustivel = 'e'; // eletrico
    veiculo[1].capacidade = 1; // toneladas

    veiculo[2].tipo_veiculo = 2 ; // moto
    veiculo[2].combustivel = 'c'; // combustivel
    veiculo[2].capacidade = 0.15; // toneladas

    veiculo[3].tipo_veiculo = 3 ; // caminhonete
    veiculo[3].combustivel = 'c'; // combustivel
    veiculo[3].capacidade = 3; // toneladas

    /*poderia fazer um for p cadastrar varios veiculos, mas esses 3  é para casos de teste*/
    int v;
    v = 1;

    while (v!=0)
    {
        int tipo;
        printf("Qual veiculo gostaria de adquirir: \n1 - Carrro\n2 - Moto\n3 - Caminhonete\n");
        scanf("%d", &tipo);
        switch (tipo)
        {
        case 1: // caso seja CARRO
            printf("Escolha: ( c : combustivel)  ou ( e : eletrico: ) ");
            char tipo;
            scanf("%c", tipo);
            if (veiculo[1].combustivel == tipo) {
                printf("Temos este veiculo disponivel");
                printf("FIAT Cronos, Motor 1.3 cambio manual");
            }
            break;
         case 2: // caso seja MOTO
            printf("Temos esta moto com as seguintes configuracoes");
            printf("150 cilindradas, combustivel gasolina, e tem capacidade de 150kg");
            break;
        case 3: // caso seja CAMINHONETE
            printf("Informe a capacidade desejada da caminhonete: ");
            float cap;
            cap = 0;
            scanf("%.2f", &cap);
            if (veiculo[1].capacidade <= 0){
                printf("DESCONTO : 10 por cento ");
            }
            else if (1 <= veiculo[1].capacidade <= 3){
                printf("DESCONTO : 15 por cento ");
            }
            else if ( veiculo[1].capacidade > 3){
                printf("Nao existe veiculo com essa capacidade ");
            }
            break;
        default:
            break;
        }
        printf("\n\nPrecione 0 para finalizar a consulta, ou qualquer numero para continuar");
        scanf("%d", &v);
    }
    return 0;
}