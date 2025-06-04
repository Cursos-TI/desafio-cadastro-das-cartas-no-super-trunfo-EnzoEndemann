#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado [20];
    char codigo [20];
    char cidade [20];
    int populacao;
    float km;
    float pib;
    int pontos;


    printf("Insira o código da carta: \n");
    scanf("%s", codigo);
    printf("Insira o estado: \n");
    scanf ("%s", &estado);
    printf("Insira a cidade: \n");
    scanf("%s", &cidade);
    printf("Insira a população: \n");
    scanf("%d", &populacao);
    printf("Insira o PIB: \n");
    scanf("%f", &pib);
    printf("Insira a área: \n");
    scanf("%f", &km);
    printf("Insira o número de pontos turísticos\n");
    scanf("%d", &pontos);

    printf("Vamos cadastrar sua primeira carta\n");
    printf("Código da carta: %s\n", codigo);
    printf("Estado: %s - cidade: %s\n", estado, cidade);
    printf("População: %d\n", populacao);
    printf("PIB: %f\n", pib);
    printf("Área: %f\n", km);
    printf("Pontos turísticos:%d\n", pontos);


    printf("Certo! Vamos para a segunda carta...\n");

    printf("Insira o código da carta: \n");
    scanf("%s", codigo);
    printf("Insira o estado: \n");
    scanf ("%s", &estado);
    printf("Insira a cidade: \n");
    scanf("%s", &cidade);
    printf("Insira a população: \n");
    scanf("%d", &populacao);
    printf("Insira o PIB: \n");
    scanf("%f", &pib);
    printf("Insira a área: \n");
    scanf("%f", &km);
    printf("Insira o número de pontos turísticos\n");
    scanf("%d", &pontos);

    printf("Certo! Aqui está sua segunda carta: \n");
    printf("Código da carta: %s\n", codigo);
    printf("Estado: %s - cidade: %s\n", estado, cidade);
    printf("População: %d\n", populacao);
    printf("PIB: %f\n", pib);
    printf("Área: %f\n", km);
    printf("Pontos turísticos:%d\n", pontos);


    return 0;
}
