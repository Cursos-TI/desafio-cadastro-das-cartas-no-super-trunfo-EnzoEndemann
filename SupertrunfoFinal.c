#include <stdio.h>
int main() {
    char estado1 [20],estado2 [20];
    char codigo [20], codigo2 [20];
    char cidade1 [20], cidade2[20];
    int populacao1;
    int populacao2;
    float km1;
    float km2;
    float pib1;
    float pib2;
    int pontos1;
    int pontos2;
    float densidade1;
    float densidade2;
    float capta1;
    float capta2; 

    printf("Vamos começar os cadastros de suas cartas! Vamos começar com a primeira...\n");

    printf("Insira o código da carta: \n");
    scanf("%s", codigo);
    printf("Insira o estado: \n");
    scanf ("%s", &estado1);
    printf("Insira a cidade: \n");
    scanf("%s", &cidade1);
    printf("Insira a população: \n");
    scanf("%d", &populacao1);
    printf("Insira o PIB: \n");
    scanf("%f", &pib1);
    printf("Insira a área: \n");
    scanf("%f", &km1);
    printf("Insira o número de pontos turísticos\n");
    scanf("%d", &pontos1);
    //a01, Amazonas, Manaus
    //4281209, 
    //154140 bilhões
    //15707457 km² 
    //13 pontos

    densidade1 = (float) populacao1 / km1;
    capta1 = (float) pib1 / populacao1;
    
    printf("Código da carta: %s\n", codigo);
    printf("Estado: %s - cidade: %s\n", estado1, cidade1);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f bilhões.\n", pib1);
    printf("Área: %.2f milhões de km²\n", km1);
    printf("Pontos turísticos:%d\n", pontos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capta igual a: %.2f\n", capta1);
    printf("SUPER PODER: %.2ff\n", (populacao1 + pib1 + km1 + densidade1 + capta1 + pontos1));


    printf("Certo! Vamos para a segunda carta...\n");

    printf("Insira o código da carta: \n");
    scanf("%s", codigo2);
    printf("Insira o estado: \n");
    scanf ("%s", &estado2);
    printf("Insira a cidade: \n");
    scanf("%s", &cidade2);
    printf("Insira a população: \n");
    scanf("%d", &populacao2);
    printf("Insira o PIB: \n");
    scanf("%f", &pib2);
    printf("Insira a área: \n");
    scanf("%f", &km2);
    printf("Insira o número de pontos turísticos\n");
    scanf("%d", &pontos2);
    //b01, pará, belém
    //8664306
    //236142 bilhões
    //1247954 km²
    //13 pontos 

    densidade2 = (float) populacao2 / km2;
    capta2 = (float) pib2 / populacao2;


    printf("Certo! Aqui está sua segunda carta: \n");
    printf("Código da carta: %s\n", codigo2);
    printf("Estado: %s - cidade: %s\n", estado2, cidade2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Área: %.2f km²\n", km2);
    printf("Pontos turísticos:%d\n", pontos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capta igual a: %.2f\n", capta2);
    printf("SUPER PODER: %.2f\n", (populacao2 + pib2 + km2 + densidade2 + capta2 + pontos2));

    printf("Comparação entre as cartas!\n");
    printf("população: carta 01 (%d),\n", populacao1 > populacao2);
    printf("PIB: carta 01  (%d)\n", pib1 > pib2);
    printf ("área: carta 01 (%d)\n", km1 > km2);
    printf ("pontos turísticos: carta 01 (%d)\n", pontos1 > pontos2);
    printf("Menor densidade Poulacional: carta 01 (%d)\n", densidade1 < densidade2);
    printf("PIB per capta: carta 01 (%d)\n", capta1 > capta2);
    printf("Super Poder: carta 01 (%d)\n", (populacao1 + pib1 + km1 + densidade1 + capta1 + pontos1) > 
                                    (populacao2 + pib2 + km2  +densidade2 + capta2));

}