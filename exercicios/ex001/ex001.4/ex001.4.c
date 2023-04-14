#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("Preencha com as seguintes informacoes sobre a dengue em Brasilia: \n");
    
    int sus, conf, mort, total;

    printf("Casos suspeitos: ");
    scanf("%d", &sus);
    printf("Casos confirmados: ");
    scanf("%d", &conf);
    printf("Quantidade de Mortes: ");
    scanf("%d", &mort);
    printf("Informacoes sobre a dengue em Brasilia:\n");
    printf("Casos Suspeitos: %d\n", sus);
    printf("Casos Confirmados: %d\n", conf);
    printf("Quantidade de mortes: %d\n\n", mort);
    
    total= sus+conf+mort;
    printf("Total de dados: %d", total);

    printf("\n");
    system("pause");
    return 0;


}