#include <stdio.h>

int main() {
    // Variáveis 
    int pontos_turisticos1, pontos_turisticos2, escolhaAtributo1, escolhaAtributo2;
    int resultado1 = 0, resultado2 = 0;
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

    // Menu de escolha do Primeiro Atributo:
    printf("\n<-- Menu de Escolha (Primeiro Atributo)-->\n");
    printf("Agora escolha abaixo o primeiro atributo que você deseja comparar:\n");
    printf("1. Nome da Cidade.\n");
    printf("2. População.\n");
    printf("3. Área.\n");
    printf("4. PIB.\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográica.\n");
    printf("- Digite o atributo escolhido: ");
    scanf("%d", &escolhaAtributo1);

    // Comparação do Primeiro Atributo escolhido:
    switch (escolhaAtributo1) {
    case 1:
    // Nome:
        printf("\n- Este atributo é utilizado apenas para exibir informações das cartas.\n");
        printf("\n--- Cidade 1 ---\n");
        printf("> Nome da Cidade: %s\n", nome1);
        printf("\n--- Cidade 2 ---\n");
        printf("> Nome da Cidade: %s\n", nome2);
        break;
    case 2:
    //População:
        printf("\n- Você escolheu o Atributo População!\n");
        printf("- Informações das cartas:\n");
        printf("\n<--- Cidade 1 --->\n");
        printf("> Nome da Cidade: %s\n", nome1);
        printf("> População: %d pessoas\n", populacao1);
        printf("<--- Cidade 2 --->\n");
        printf("> Nome da Cidade: %s\n", nome2);
        printf("> População: %d pessoas\n", populacao2);

        // Incrementa 1 ao valor do resultado 1 ou 2.
        if (populacao1 > populacao2) {
            resultado1 ++;
        } else {
            resultado2 ++;
        } 
        break;
    case 3:
    // Área:
        printf("\n- Você escolheu o Atributo Área!\n");
        printf("- Informações das cartas:\n");
        printf("\n<--- Cidade 1 --->\n");
        printf("> Nome da Cidade: %s\n", nome1);
        printf("> Área: %.2f km²\n", area1);
        printf("<--- Cidade 2 --->\n");
        printf("> Nome da Cidade: %s\n", nome2);
        printf("> População: %.2f km²\n", area2);
        
        // Incrementa 1 ao valor do resultado 1 ou 2.
        if (area1 > area2) {
            resultado1 ++;
        } else {
            resultado2 ++;
        } 
        break;
    case 4:
    // PIB:
        printf("\n- Você escolheu o Atributo PIB!\n");
        printf("- Informações das cartas:\n");
        printf("\n<--- Cidade 1 --->\n");
        printf("> Nome da Cidade: %s\n", nome1);
        printf("> PIB: %.2f reais\n", pib1);
        printf("<--- Cidade 2 --->\n");
        printf("> Nome da Cidade: %s\n", nome2);
        printf("> PIB: %.2f reais\n", pib2);
        
        // Incrementa 1 ao valor do resultado 1 ou 2.
        if (pib1 > pib2) {
            resultado1 ++;
        } else {
            resultado2 ++;
        } 
        break;
    case 5:
    // Pontos Turísticos:
        printf("\n- Você escolheu o Atributo Pontos Turísticos!\n");
        printf("- Informações das cartas:\n");
        printf("\n<--- Cidade 1 --->\n");
        printf("> Nome da Cidade: %s\n", nome1);
        printf("> Pontos Turisticos: %d\n", pontos_turisticos1);
        printf("<--- Cidade 2 --->\n");
        printf("> Nome da Cidade: %s\n", nome2);
        printf("> Pontos Turisticos: %d\n", pontos_turisticos2);
        
        // Incrementa 1 ao valor do resultado 1 ou 2.
        if (pontos_turisticos1 > pontos_turisticos2) {
            resultado1 ++;
        } else {
            resultado2 ++;
        } 
        break;
    case 6:
    // Densidade Demográfica:
        printf("\n- Você escolheu o Atributo Densidade Demográfica!\n");
        printf("- Neste atibuto vence a carta com o menor valor.\n");
        printf("- Informações das cartas:\n");
        printf("\n<--- Cidade 1 --->\n");
        printf("> Nome da Cidade: %s\n", nome1);
        printf("> Densidade Populacional: %.2f pessoas/km²\n", densidade1);
        printf("<--- Cidade 2 --->\n");
        printf("> Nome da Cidade: %s\n", nome2);
        printf("> Densidade Populacional: %.2f pessoas/km²\n", densidade2);

        // Incrementa 1 ao valor do resultado 1 ou 2.
        if (densidade1 > densidade2) {
            resultado2 ++;
        } else {
            resultado1 ++;
        } 
        break;
    default:
    // Opção Inválida:
        printf("> Atenção!! Você digitou uma opção inválida!!\n");
        break;
    }

    // Menu de escolha do Segundo Atributo:
    printf("\n<-- Menu de Escolha (Segundo Atributo) -->\n");
    printf("Agora escolha abaixo o segundo e ultimo atributo que você deseja comparar:\n");
    printf("OBS: Selecione um atributo diferente do anterior!!!\n");
    printf("1. Nome da Cidade.\n");
    printf("2. População.\n");
    printf("3. Área.\n");
    printf("4. PIB.\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográica.\n");
    printf("- Digite o atributo escolhido: ");
    scanf("%d", &escolhaAtributo2);


    if (escolhaAtributo2 == escolhaAtributo1) {
        printf("!!! Você ja escolheu esta opção !!!\n");
    } else {
    // Comparação do segundo e ultimo atributo escolhido:
        switch (escolhaAtributo2){
        case 1: 
    // Nome:
            printf("\n- Este atributo é utilizado apenas para exibir informações das cartas.\n");
            printf("\n--- Cidade 1 ---\n");
            printf("> Nome da Cidade: %s\n", nome1);
            printf("\n--- Cidade 2 ---\n");
            printf("> Nome da Cidade: %s\n", nome2);
            break;
        case 2:
    //População:
            printf("\n- Você escolheu o Atributo População!\n");
            printf("- Informações das cartas:\n");
            printf("\n<--- Cidade 1 --->\n");
            printf("> Nome da Cidade: %s\n", nome1);
            printf("> População: %d pessoas\n", populacao1);
            printf("<--- Cidade 2 --->\n");
            printf("> Nome da Cidade: %s\n", nome2);
            printf("> População: %d pessoas\n", populacao2);

    // Incrementa 1 ao valor do resultado 1 ou 2.
            if (populacao1 > populacao2) {
                resultado1 ++;
            } else {
                resultado2 ++;
            }
            break;
        case 3:
    // Área:
            printf("\n- Você escolheu o Atributo Área!\n");
            printf("- Informações das cartas:\n");
            printf("\n<--- Cidade 1 --->\n");
            printf("> Nome da Cidade: %s\n", nome1);
            printf("> Área: %.2f km²\n", area1);
            printf("<--- Cidade 2 --->\n");
            printf("> Nome da Cidade: %s\n", nome2);
            printf("> População: %.2f km²\n", area2);
            
    // Incrementa 1 ao valor do resultado 1 ou 2.
            if (area1 > area2) {
                resultado1 ++;
            } else {
                resultado2 ++;
            } 
            break;
        case 4:
    // PIB:
            printf("\n- Você escolheu o Atributo PIB!\n");
            printf("- Informações das cartas:\n");
            printf("\n<--- Cidade 1 --->\n");
            printf("> Nome da Cidade: %s\n", nome1);
            printf("> PIB: %.2f reais\n", pib1);
            printf("<--- Cidade 2 --->\n");
            printf("> Nome da Cidade: %s\n", nome2);
            printf("> PIB: %.2f reais\n", pib2);
            
    // Incrementa 1 ao valor do resultado 1 ou 2.
            if (pib1 > pib2) {
                resultado1 ++;
            } else {
                resultado2 ++;
            } 
            break;
        case 5:
    // Pontos Turísticos:
            printf("\n- Você escolheu o Atributo Pontos Turísticos!\n");
            printf("- Informações das cartas:\n");
            printf("\n<--- Cidade 1 --->\n");
            printf("> Nome da Cidade: %s\n", nome1);
            printf("> Pontos Turisticos: %d\n", pontos_turisticos1);
            printf("<--- Cidade 2 --->\n");
            printf("> Nome da Cidade: %s\n", nome2);
            printf("> Pontos Turisticos: %d\n", pontos_turisticos2);
            
    // Incrementa 1 ao valor do resultado 1 ou 2.
            if (pontos_turisticos1 > pontos_turisticos2) {
                resultado1 ++;
            } else {
                resultado2 ++;
            } 
            break;
        case 6:
    // Densidade Demográfica:
            printf("\n- Você escolheu o Atributo Densidade Demográfica!\n");
            printf("- Neste atibuto vence a carta com o menor valor.\n");
            printf("- Informações das cartas:\n");
            printf("\n<--- Cidade 1 --->\n");
            printf("> Nome da Cidade: %s\n", nome1);
            printf("> Densidade Populacional: %.2f pessoas/km²\n", densidade1);
            printf("<--- Cidade 2 --->\n");
            printf("> Nome da Cidade: %s\n", nome2);
            printf("> Densidade Populacional: %.2f pessoas/km²\n", densidade2);

    // Incrementa 1 ao valor do resultado 1 ou 2.
            if (densidade1 > densidade2) {
                resultado2 ++;
            } else {
                resultado1 ++;
            } 
            break;       
        default:
            printf("> Atenção!! Você digitou uma opção inválida!!\n");
            break;
        }
    }    

    if (resultado1 == resultado2) {
        printf("\n!!! EMPATE!!!\n");
        printf("Ambas as cartas venceram em pelo menos um atributo!!!\n");
    } else if (resultado1 > resultado2){
        printf("\n!!! CARTA 1 VENCEU !!!\n");
        printf("A carta tem pelo menos 1 atributo a mais que a carta 2!!!\n");
    } else {
        printf("\n!!! CARTA 2 VENCEU !!!!\n");
        printf("A carta tem pelo menos 1 atributo a mais que a carta 1!!!\n");
    }
    return 0;
}

/*
Considerações finais:

Foi possível concluir a atividade utilizando todo o conteúdo mostrado durante as aulas, ainda sim eu tenho ciência que o código poderia
ter sido mais bem estruturado utilizando funções e programa mais dinâmico utilizando os laços de repetição que permitiriam jogar mais
de uma vez e junto com as funções, tornar o código mais simples.

Espero ter conseguido entregar e executar a atividade de maneira correta, dês de já agradeço pela correção da atividade.

*/