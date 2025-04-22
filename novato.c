#include <stdio.h>

int main(){
    printf("Desafio Super_Trunfo:\n");
    char estado1, estado2 [50];
    char codigo1, codigo2 [50];
    char cidade1, cidade2 [50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    //Carta 1
    printf("Digite o estado: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo: \n");
    scanf("%s", &codigo1);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1);

    //Carta 2
    printf("Digite o estado: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo: \n");
    scanf("%s", &codigo2);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);

    
    return 0;
}