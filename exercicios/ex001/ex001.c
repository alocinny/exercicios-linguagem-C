#include <stdio.h> // BIBLIOTECA DE ENTRADA E SAÍDA DE PERIFÉRICOS PADRÃO
#include <stdlib.h> //BIBLIOTECA PADRÃO PARA USO DE FUNÇÕES DO SISTEMA
#include <conio.h> //BIBLIOTECA PARA MANIPULAÇÃO DE CARACTERES

int main () { //PROGRAMA PRINCIPAL
    //DECLARAÇÃO DE VARIÁVEIS
    int num_alunos, num_alunas;

    //CABEÇALHO
    printf("Universidade de pernambuco\n", 161);
    printf("Disciplina: 113913 - ICC\n");
    printf("Aluno(a):\n\n\n");

    //INÍCIO DA LÓGICA DE PROGRAMAÇÃO
    printf("Digite o numero de alunos: "); //INÍCIO DA INTERAÇÃO
    scanf("%d", &num_alunos); /*RECEBE O DADO COM A FUNÇÃO SCANF DO TIPO INT IDENTIFIADO POR %d QUE SERÁ ARMAZENADO NO ESPAÇÇO RESERVADO PARA NUM_ALUNOS, &NUM_ALUNOS*/
    printf("Digite o numero de alunas: "); //SEGUNDA IMPRESSÃO
    scanf("%d", &num_alunas); /*RECEBER O DADO DO TIPO INT IDENTIFICADO POR %d QUE SE´RA ARMAZENADO NO ESPALO RESERVADO PARA NUM_ALUNAS, &NUM_ALUNAS*/
    printf("\nO numero de alunas:%d\n", num_alunas); /*APRESENTAÇÃO DE RESULTADOS NA TELA COM A FUNÇÃO PRINTF. ONDE ESTÁ %d, SERÁ APRESENTRADO UMA VAIÁVEL DO TIPO INT, QUE POR SUA VEZ É IDENTIFICADA POSTERIORMENTE, NUM_ALUNOS*/
    printf("O numero de alunos: %d", num_alunos);
    getch(); //FUNÇÃO QUE GUARDA O RECEBIMENTO DE UM CARACTERE VIA TECLADO
}