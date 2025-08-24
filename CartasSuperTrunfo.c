#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


char estado1[2];
char cod_carta1[4];
char cidade1[30];
int populacao1;
float area1;
float pib1;
int pontos_turisticos1;

char estado2[2];
char cod_carta2[4];
char cidade2[30];
int populacao2;
float area2;
float pib2;
int pontos_turisticos2;

printf("DESAFIO SUPER TRUNFO - NIVEL NOVATO\n");
printf("\n");

printf("ENTRADA DE DADOS DA CARTA NR. 1 \n");
printf("\n");
printf("Entre com o Estado: ");
scanf("%s", estado1 );

printf("Entre com o Codigo da Carta: ");
scanf("%s", cod_carta1 );

printf("Entre com a Cidade: ");
scanf("%s", cidade1 );

printf("Entre com a Populacao: ");
scanf("%i", &populacao1);

printf("Entre com a area em m2: ");
scanf("%f", &area1 );

printf("Entre com o PIB: ");
scanf("%f", &pib1 );

printf("Entre com o nr. de pontos turísticos: ");
scanf("%i", &pontos_turisticos1 );

printf("\n");
printf("ENTRADA DE DADOS DA CARTA NR 2 \n");
printf("\n");

printf("Entre com o Estado: ");
scanf("%s", estado2 );

printf("Entre com o Codigo da Carta: ");
scanf("%s", cod_carta2 );

printf("Entre com a Cidade: ");
scanf("%s", cidade2 );

printf("Entre com a Populacao: ");
scanf("%i", &populacao2);

printf("Entre com a area em m2: ");
scanf("%f", &area2);

printf("Entre com o PIB: ");
scanf("%f", &pib2);

printf("Entre com o nr. de pontos turísticos: ");
scanf("%i", &pontos_turisticos2);
printf("\n");
printf("\n Dados da carta 1: \n");

printf("Estado: %s | Cod da Carta: %s | Cidade: %s\n", estado1, cod_carta1, cidade1);
printf("População: %i | Área: %.2f | PIB: %.2f | Nr. Pontos Turisticos: %i \n", populacao1, area1, pib1, pontos_turisticos1);
printf("\n");

printf("\n Dados da carta 2: \n");
printf("Estado: %s | Cod da Carta: %s | Cidade: %s\n", estado2, cod_carta2, cidade2);
printf("População: %i | Área: %.2f | PIB: %.2f | Nr. Pontos Turisticos: %i \n", populacao2, area2, pib2, pontos_turisticos2);
printf("\n");



    return 0;
}
