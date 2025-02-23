#include <stdio.h>

int main() {

    // Variáveis 
    int pontos_turisticos1, pontos_turisticos2, escolhaAtributo;
    unsigned long int populacao1, populacao2;
    char estado1, estado2, codigo1[4],codigo2[4], nome1[30], nome2[30];
    float pib1, pib2, area1, area2, pib_per_capita1, pib_per_capita2, densidade1, densidade2; 
    double Super1, Super2;

    /*
    Interface inicial criada para obter as caracteristicas das cidades.
    */
    printf("\n<- - Bem vindo ao Super Trunfo - -> \n");
    printf("\n -> Tema: Cidades <- \n");
    printf("\nAntes de inciar o jogo, por favor cadastre as cartas abaixo.\n");
    printf("\nDigite nos campos abaixo as caracteristicas da primeira cidade cidade.\n");

    //Solicitção dos dados da Primeira Cidade:
    printf("- Estado (Ex: A,B,C...): ");
    scanf("%c", &estado1);
    printf("- Código da Carta (Ex: A01,B02,C01...): ");
    scanf("%s", &codigo1);
    printf("- Nome da Cidade: ");
    scanf(" %[^\n]", nome1); // %[^\n] é utilizado para ser lido indenpendente do que for escrito com exceção do \n
    printf("- População: ");
    scanf("%d", &populacao1);
    printf("- Área: ");
    scanf("%f", &area1);
    printf("- PIB: ");
    scanf("%f", &pib1); 
    printf("- Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Solicitação de dados da Segunda Cidade:
    printf("\nAgora insira as caracteristicas da segunda cidade.\n");
    printf("- Estado (Ex: A,B,C...): ");
    scanf(" %c", &estado2);
    printf("- Código da Carta (Ex: A01,B02,C01...): ");
    scanf("%s", &codigo2);
    printf("- Nome da Cidade: ");
    scanf(" %[^\n]", nome2); // %[^\n] é utilizado para ser lido idenpendente do que for escrito com exceção do \n
    printf("- População: ");
    scanf("%d", &populacao2);
    printf("- Área: ");                  
    scanf("%f", &area2);
    printf("- PIB: ");
    scanf("%f", &pib2);
    printf("- Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo do PIB, Densidade Populacional e Super Poder de ambas as cidades:
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    Super1 = (float) ( populacao1 + area1 + pib1 + pontos_turisticos1 + densidade1+ pib_per_capita1 );

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    Super2 = (float) ( populacao2 + area2 + pib2 + pontos_turisticos2 + densidade2 + pib_per_capita2 );

    // Confirmação e exibição dos dados das duas cidades:
    printf("\n-> Aqui estão as características cadastradas da cidades:\n");

    printf("\n<--- Cidade 1 --->\n");
    printf("> Estado: %c\n", estado1);
    printf("> Código da Carta: %s\n", codigo1);
    printf("> Nome da Cidade: %s\n", nome1);
    printf("> População: %d pessoas\n", populacao1);
    printf("> Área: %.2f km²\n", area1);
    printf("> PIB: %.2f reais\n", pib1);
    printf("> PIB Per Capita: %.2f reais\n", pib_per_capita1);
    printf("> Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("> Densidade Populacional: %.2f pessoas/km²\n", densidade1);
    printf("> SUPER PODER: %.2f\n", Super1);

    printf("\n<--- Cidade 2 --->\n");
    printf("> Estado: %c\n", estado2);
    printf("> Código da Carta: %s\n", codigo2);
    printf("> Nome da Cidade: %s\n", nome2);
    printf("> População: %d pessoas\n", populacao2);
    printf("> Área: %.2f km²\n", area2);
    printf("> PIB: %.2f reais\n", pib2);
    printf("> PIB Per Capita: %.2f reais\n", pib_per_capita2);
    printf("> Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("> Densidade Populacional: %.2f pessoas/km²\n", densidade2);
    printf("> SUPER PODER: %.2f\n", Super2);

    // Menu de escolha da comparação das carta:
    printf("\n<-- Menu de Escolha -->\n");
    printf("Agora escolha abaixo o atributo que você deseja comparar:\n");
    printf("1. Nome da Cidade.\n");
    printf("2. População.\n");
    printf("3. Área.\n");
    printf("4. PIB.\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográica.\n");
    printf("- Digite o atributo escolhido: ");
    scanf("%d", &escolhaAtributo);

    switch (escolhaAtributo) {
    case 1:
        printf("\n- Este atributo é utilizado apenas para exibir informações das cartas.\n");
        printf("\n--- Cidade 1 ---\n");
        printf("> Nome da Cidade: %s\n", nome1);
        printf("\n--- Cidade 2 ---\n");
        printf("> Nome da Cidade: %s\n", nome2);
        break;
    case 2:
        printf("\n- Você escolheu o Atributo População!\n");
        printf("- Informações das cartas:\n");
        printf("\n<--- Cidade 1 --->\n");
        printf("> Nome da Cidade: %s\n", nome1);
        printf("> População: %d pessoas\n", populacao1);
        printf("<--- Cidade 2 --->\n");
        printf("> Nome da Cidade: %s\n", nome2);
        printf("> População: %d pessoas\n", populacao2);

        if (populacao1 > populacao2) {
            printf("==> A CIDADE 1 VENCEU <==\n");
        } else if (populacao2 > populacao1){
            printf("==> A CIDADE 2 VENCEU <==\n");
        } else {
            printf("==> EMPATE <==\n");
        }   
        break;
    case 3:
        printf("\n- Você escolheu o Atributo Área!\n");
        printf("- Informações das cartas:\n");
        printf("\n<--- Cidade 1 --->\n");
        printf("> Nome da Cidade: %s\n", nome1);
        printf("> Área: %.2f km²\n", area1);
        printf("<--- Cidade 2 --->\n");
        printf("> Nome da Cidade: %s\n", nome2);
        printf("> População: %.2f km²\n", area2);
        
        if (area1 > area2) {
            printf("==> A CIDADE 1 VENCEU <==\n");
        } else if (area2 > area1){
            printf("==> A CIDADE 2 VENCEU <==\n");
        } else {
            printf("==> EMPATE <==\n");
        }  
        break;
    case 4:
        printf("\n- Você escolheu o Atributo PIB!\n");
        printf("- Informações das cartas:\n");
        printf("\n<--- Cidade 1 --->\n");
        printf("> Nome da Cidade: %s\n", nome1);
        printf("> PIB: %.2f reais\n", pib1);
        printf("<--- Cidade 2 --->\n");
        printf("> Nome da Cidade: %s\n", nome2);
        printf("> PIB: %.2f reais\n", pib2);
        
        if (pib1 > pib2) {
            printf("==> A CIDADE 1 VENCEU <==\n");
        } else if (pib2 > pib1){
            printf("==> A CIDADE 2 VENCEU <==\n");
        } else {
            printf("==> EMPATE <==\n");
        }
        break;
    case 5:
        printf("\n- Você escolheu o Atributo Pontos Turísticos!\n");
        printf("- Informações das cartas:\n");
        printf("\n<--- Cidade 1 --->\n");
        printf("> Nome da Cidade: %s\n", nome1);
        printf("> Pontos Turisticos: %d\n", pontos_turisticos1);
        printf("<--- Cidade 2 --->\n");
        printf("> Nome da Cidade: %s\n", nome2);
        printf("> Pontos Turisticos: %d\n", pontos_turisticos2);
        
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("==> A CIDADE 1 VENCEU <==\n");
        } else if (pontos_turisticos2 > pontos_turisticos1){
            printf("==> A CIDADE 2 VENCEU <==\n");
        } else {
            printf("==> EMPATE <==\n");
        }
        break;
    case 6:
        printf("\n- Você escolheu o Atributo Densidade Demográfica!\n");
        printf("- Neste atibuto vence a carta com o menor valor.\n");
        printf("- Informações das cartas:\n");
        printf("\n<--- Cidade 1 --->\n");
        printf("> Nome da Cidade: %s\n", nome1);
        printf("> Densidade Populacional: %.2f pessoas/km²\n", densidade1);
        printf("<--- Cidade 2 --->\n");
        printf("> Nome da Cidade: %s\n", nome2);
        printf("> Densidade Populacional: %.2f pessoas/km²\n", densidade2);
        
        if (densidade1 > densidade2) {
            printf("==> A CIDADE 2 VENCEU <==\n");
        } else if (densidade2 > densidade1){
            printf("==> A CIDADE 1 VENCEU <==\n");
        } else {
            printf("==> EMPATE <==\n");
        }
        break;
    default:
        printf("> Atenção!! Você digitou uma opção inválida!!\n");
        break;
    }

    return 0;
}

