#include <stdio.h>
    printf("Desafio Super Trunfo - Países\n")

int main() {

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
    scanf("%s", &carta2);

    printf("qual a população: \n");
    scanf("%d" , &população2);

    printf("qual o nome da cidade? \n");
    scanf("%s", &cidade2);

    printf("qual o pib? \n");
    scanf("%f", &pib2);

    printf("quntos pontos turisticos? \n");
    scanf("%d", &pontos_turisticos2);

    printf("qual a area? \n");
    scanf("%f", &area2);

    printf("qual o estado? \n");
    scanf("%s", &estado2);
    
    printf(".\n");

    printf("  carta 01")
    printf("carta: %s\n", carta);
    printf("populacão: %d\n", população);
    printf("cidade: %s\n", cidade);
    printf("pib: %f\n",pib);
    printf("pontos turisticos: %d\n", pontos_turisticos);
    printf("area: %F\n", area);
    printf("estado: %s\n",estado);

    printf(".\n");

    printf("  carta 02")
    printf("  carta: %s\n", carta2);
    printf("populacão: %d\n", população2);
    printf("cidade: %s\n", cidade2);
    printf("pib: %f\n",pib2);
    printf("pontos turisticos: %d\n", pontos_turisticos2);
    printf("area: %F\n", area2);
    printf("estado: %s\n",estado2);

     return 0;

}