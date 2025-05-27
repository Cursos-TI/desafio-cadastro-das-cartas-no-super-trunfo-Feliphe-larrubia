#include <stdio.h>

int main() {

    unsigned long int populacao; 
    int pontos_turisticos;
    char estado [30], cidade [30], carta [10];
    float area, pib, divisaoDENS, divisaoPIB;

    printf("   carta 01\n");

    printf(".\n");

    printf("qual o codigo da carta: \n");
    scanf("%s", carta); 

    printf("qual o nome da cidade? \n");
    scanf("%s", cidade);

    printf("qual o estado? \n");
    scanf("%s", estado);

    printf("qual a população: \n");
    scanf("%lu", &populacao);

    printf("qual o pib? \n");
    scanf("%f", &pib);

    printf("quantos pontos turisticos? \n");
    scanf("%d", &pontos_turisticos);

    printf("qual a area? \n");
    scanf("%f", &area);
     
    printf(".\n");

    unsigned long int populacao2; 
    int pontos_turisticos2;
    char estado2[30], cidade2[30], carta2[10];
    float area2, pib2, divisao2DENS, divisao2PIB;

    printf("   carta: 02\n");

    printf(".\n");

    printf("qual o codigo da carta: \n");
    scanf("%s", carta2);

    printf("qual o nome da cidade? \n");
    scanf("%s", cidade2);

    printf("qual o estado? \n");
    scanf("%s", estado2);

    printf("qual a população: \n");
    scanf("%lu", &populacao2);

    printf("qual o pib? \n");
    scanf("%f", &pib2);

    printf("quantos pontos turisticos? \n");
    scanf("%d", &pontos_turisticos2);

    printf("qual a area? \n");
    scanf("%f", &area2);
 
divisaoDENS = (float)populacao / area;
divisaoPIB = pib / (float)populacao;

divisao2DENS = (float)populacao2 / area2;
divisao2PIB = pib2 / (float)populacao2;

float superpoder1 = (float) populacao + area + pib + (float) pontos_turisticos + divisaoPIB + (1.0 / divisaoDENS);
float superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + divisao2PIB + ( 1.0 / divisao2DENS );

    int vitoria_populacao = (populacao > populacao2);
    int vitoria_area = (area > area2);
    int vitoria_pib = (pib > pib2);
    int vitoria_pontos = (pontos_turisticos > pontos_turisticos2);
    int vitoria_dens = (divisaoDENS < divisao2DENS);  
    int vitoria_pontos_per_capita = (divisaoPIB > divisao2PIB);
    int vitoria_super = (superpoder1 > superpoder2);


    printf(".\n");

    printf("  carta 01  \n");
    printf("carta: %s\n", carta);
    printf("populacao: %lu\n", populacao);
    printf("cidade: %s\n", cidade);
    printf("pib: %.2f\n", pib); 
    printf("pontos turisticos: %d\n", pontos_turisticos);
    printf("area: %.2f\n", area);
    printf("estado: %s\n", estado);
    printf("densidade populacional: %.2f \n", divisaoDENS);
    printf("pib per capita: %.2f\n", divisaoPIB);

    printf(".\n");

    printf("   carta 02  \n");
    printf("carta: %s\n", carta2);
    printf("populacao: %lu\n", populacao2);
    printf("cidade: %s\n", cidade2);
    printf("pib: %.2f\n", pib2);
    printf("pontos turisticos: %d\n", pontos_turisticos2);
    printf("area: %.2f\n", area2);
    printf("estado: %s\n", estado2);
    printf("densidade populacional: %.2f\n", divisao2DENS);
    printf("pib per capita: %.2f \n", divisao2PIB);

    printf(".\n");

    printf("   Comparação de Cartas   \n");
    printf("População: Carta %d venceu (%d)\n", vitoria_populacao ? 1 : 2, vitoria_populacao);
    printf("Área: Carta %d venceu (%d)\n", vitoria_area ? 1 : 2, vitoria_area);
    printf("PIB: Carta %d venceu (%d)\n", vitoria_pib ? 1 : 2, vitoria_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vitoria_pontos ? 1 : 2, vitoria_pontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vitoria_dens ? 1 : 2, vitoria_dens);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vitoria_pontos_per_capita ? 1 : 2, vitoria_pontos_per_capita);
    printf("Super Poder: Carta %d venceu (%d)\n", vitoria_super ? 1 : 2, vitoria_super);


    return 0;
}
