#include <stdio.h>

int main() {

    printf("Desafio Super Trunfo - Países\n");

    int população , pontos_turisticos;
    char estado [30] , cidade [30] , carta [10];
    float area , pib;

    printf("   carta 01\n");
    
    printf(".\n");

    printf("qual o codigo da carta: \n");
    scanf("%s", &carta);

    printf("qual a população: \n");
    scanf("%d" , &população);

    printf("qual o nome da cidade ? \n");
    scanf("%s", &cidade);

    printf("qual o pib ? \n");
    scanf("%f", &pib);

    printf("quntos pontos turisticos? \n");
    scanf("%d", &pontos_turisticos);

    printf("qual a area? \n");
    scanf("%f", &area);

    printf("qual o estado? \n");
    scanf("%s", &estado);

    printf(".\n");

    int população2 , pontos_turisticos2;
    char estado2 [30] , cidade2 [30] , carta2 [10];
    float area2 , pib2;

    printf("   carta: 02\n");

    printf(".\n");

    printf("qual o codigo da carta: \n");
    scanf("%s", &carta02);

    printf("qual a população: \n");
    scanf("%d" , &populacão02);

    printf("qual o nome da cidade? \n");
    scanf("%s", &cidade02);

    printf("qual o pib? \n");
    scanf("%f", &pib02);

    printf("quntos pontos turisticos? \n");
    scanf("%d", &pontos_turisticos02);

    printf("qual a area? \n");
    scanf("%f", &area02);

    printf("qual o estado? \n");
    scanf("%s", &estado02);
    
    printf(".\n");

    printf("  carta 01");
    printf("carta: %s\n", carta);
    printf("populacão: %d\n", população);
    printf("cidade: %s\n", cidade);
    printf("pib: %f\n",pib);
    printf("pontos turisticos: %d\n", pontos_turisticos);
    printf("area: %F\n", area);
    printf("estado: %s\n",estado);

    printf(".\n");

    printf("  carta 02");
    printf("  carta: %s\n", carta02);
    printf("populacão: %d\n", população02);
    printf("cidade: %s\n", cidade02);
    printf("pib: %f\n",pib02);
    printf("pontos turisticos: %d\n", pontos_turisticos02);
    printf("area: %F\n", area02);
    printf("estado: %s\n",estado02);

     return 0;

}