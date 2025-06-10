#include <stdio.h>
int main() {
    char estado [20];
    char codigo [20];
    char cidade [20];
    int populacao, pontos;
    float km, pib, densidade, capta;

    printf("Vamos começar os cadastros de suas cartas! Vamos começar com a primeira...\n");


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

    densidade = (float) populacao / km;
    capta = (float) pib / populacao;

    printf("Aqui está a primeira carta!\n");

    printf("Código da carta: %s\n", codigo);
    printf("Estado: %s - cidade: %s\n", estado, cidade);
    printf("População: %d\n", populacao);
    printf("PIB: %.3f bilhões.\n", pib);
    printf("Área: %.3f km²\n", km);
    printf("Pontos turísticos:%d\n", pontos);
    printf("Densidade populacional: %f\n", densidade);
    printf("PIB per capta igual a: %f\n", capta);

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
    printf("PIB: %f bilhões\n", pib);
    printf("Área: %f km²\n", km);
    printf("Pontos turísticos:%d\n", pontos);
    printf("Densidade populacional: %f\n", densidade);
    printf("PIB per capta igual a: %f\n", capta);

}