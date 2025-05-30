#include <stdio.h>
#include <string.h>

int main() {
    unsigned long int populacao;
    int pontos_turisticos;
    char estado[30], cidade[30], carta[10];
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

    float superpoder1 = (float)populacao + area + pib + (float)pontos_turisticos + divisaoPIB + (1.0 / divisaoDENS);
    float superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + divisao2PIB + (1.0 / divisao2DENS);

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

    printf(".\n");

    printf("comparação de cartas (atributo : populacao)\n");
    printf("a população da carta 1 :%lu \n", populacao);
    printf("a população da carta 2 :%lu \n", populacao2);

    if (populacao > populacao2) {
        printf("a carta 1 venceu com a maior população \n");
    } else {
        printf("a carta 2 ganhou com a maior população \n");
    }

    int opcao;
    printf("\n          MENU DE COMPARAÇÃO\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf(".\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("       \nRESULTADO DA COMPARAÇÃO   \n");

    switch (opcao) {
        case 1:
            printf("Comparando População:\n");
            printf("%s: %lu\n", cidade, populacao);
            printf("%s: %lu\n", cidade2, populacao2);
            if (populacao > populacao2)
                printf("%s venceu!\n", cidade);
            else if (populacao2 > populacao)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Área:\n");
            printf("%s: %.2f\n", cidade, area);
            printf("%s: %.2f\n", cidade2, area2);
            if (area > area2)
                printf("%s venceu!\n", cidade);
            else if (area2 > area)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f\n", cidade, pib);
            printf("%s: %.2f\n", cidade2, pib2);
            if (pib > pib2)
                printf("%s venceu!\n", cidade);
            else if (pib2 > pib)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d\n", cidade, pontos_turisticos);
            printf("%s: %d\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos > pontos_turisticos2)
                printf("%s venceu!\n", cidade);
            else if (pontos_turisticos2 > pontos_turisticos)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparando Densidade Demográfica (MENOR vence):\n");
            printf("%s: %.2f\n", cidade, divisaoDENS);
            printf("%s: %.2f\n", cidade2, divisao2DENS);
            if (divisaoDENS < divisao2DENS)
                printf("%s venceu!\n", cidade);
            else if (divisao2DENS < divisaoDENS)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Comparando PIB per Capita:\n");
            printf("%s: %.2f\n", cidade, divisaoPIB);
            printf("%s: %.2f\n", cidade2, divisao2PIB);
            if (divisaoPIB > divisao2PIB)
                printf("%s venceu!\n", cidade);
            else if (divisao2PIB > divisaoPIB)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Comparando Super Poder:\n");
            printf("%s: %.2f\n", cidade, superpoder1);
            printf("%s: %.2f\n", cidade2, superpoder2);
            if (superpoder1 > superpoder2)
                printf("%s venceu!\n", cidade);
            else if (superpoder2 > superpoder1)
                printf("%s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Por favor, selecione uma opção correta.\n");
            break;
    }

    int atributo1, atributo2;
    float valor1_carta1 = 0, valor2_carta1 = 0;
    float valor1_carta2 = 0, valor2_carta2 = 0;
    float soma_carta1 = 0, soma_carta2 = 0;

    printf("       COMPARAÇÃO COM DOIS ATRIBUTOS        \n");
    
    
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (MENOR VENCE)\n");
    printf("6 - PIB per Capita\n");
    printf("Digite a opção: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i == atributo1) continue;
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica (MENOR VENCE)\n"); break;
            case 6: printf("6 - PIB per Capita\n"); break;
        }
    }
    printf("Digite a opção: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Erro! Você escolheu o mesmo atributo duas vezes. Reinicie a comparação.\n");
    } else {
      
        switch (atributo1) {
            case 1:
                valor1_carta1 = populacao;
                valor1_carta2 = populacao2;
                break;
            case 2:
                valor1_carta1 = area;
                valor1_carta2 = area2;
                break;
            case 3:
                valor1_carta1 = pib;
                valor1_carta2 = pib2;
                break;
            case 4:
                valor1_carta1 = pontos_turisticos;
                valor1_carta2 = pontos_turisticos2;
                break;
            case 5:
                valor1_carta1 = divisaoDENS;
                valor1_carta2 = divisao2DENS;
                break;
            case 6:
                valor1_carta1 = divisaoPIB;
                valor1_carta2 = divisao2PIB;
                break;
            default:
                printf("Atributo inválido.\n");
                break;
        }

        switch (atributo2) {
            case 1:
                valor2_carta1 = populacao;
                valor2_carta2 = populacao2;
                break;
            case 2:
                valor2_carta1 = area;
                valor2_carta2 = area2;
                break;
            case 3:
                valor2_carta1 = pib;
                valor2_carta2 = pib2;
                break;
            case 4:
                valor2_carta1 = pontos_turisticos;
                valor2_carta2 = pontos_turisticos2;
                break;
            case 5:
                valor2_carta1 = divisaoDENS;
                valor2_carta2 = divisao2DENS;
                break;
            case 6:
                valor2_carta1 = divisaoPIB;
                valor2_carta2 = divisao2PIB;
                break;
            default:
                printf("Atributo inválido.\n");
                break;
        }

        printf("     VALORES DOS ATRIBUTOS ESCOLHIDOS     \n");
        printf("%s:\n", cidade);
        printf("Atributo 1: %.2f\n", valor1_carta1);
        printf("Atributo 2: %.2f\n", valor2_carta1);
        printf("\n%s:\n", cidade2);
        printf("Atributo 1: %.2f\n", valor1_carta2);
        printf("Atributo 2: %.2f\n", valor2_carta2);

        int vitoria_attr1 = 0, vitoria_attr2 = 0;

        vitoria_attr1 = (atributo1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
        vitoria_attr2 = (atributo2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);

        printf("      RESULTADO POR ATRIBUTO       \n");
        printf("Atributo 1: %s venceu\n", (vitoria_attr1) ? cidade : (valor1_carta1 == valor1_carta2) ? "Empate" : cidade2);
        printf("Atributo 2: %s venceu\n", (vitoria_attr2) ? cidade : (valor2_carta1 == valor2_carta2) ? "Empate" : cidade2);

        soma_carta1 = valor1_carta1 + valor2_carta1;
        soma_carta2 = valor1_carta2 + valor2_carta2;

        printf("       SOMA DOS ATRIBUTOS       \n");
        printf("%s: %.2f\n", cidade, soma_carta1);
        printf("%s: %.2f\n", cidade2, soma_carta2);

        printf("     RESULTADO FINAL    ");
        if (soma_carta1 > soma_carta2) {
            printf("%s venceu a rodada!\n", cidade);
        } else if (soma_carta2 > soma_carta1) {
            printf("%s venceu a rodada!\n", cidade2);
        } else {
            printf("Empate!\n");
        }
    }

 

    return 0;
}
