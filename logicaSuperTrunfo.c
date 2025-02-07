#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    //declaração das variáveis
    float codecidade1;
    char nomecidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int numpontosturisticos1;
    float densidade1; // Variável que vai calcular a densidade populacional
    float PIBcapita1; // Variável que vai calcular PIB per Capita
    float Superpoder1; // Variável que vai calcular o super poder dessa cidade 1

    // Variáveis responsáveis pela segunda cidade
    float codecidade2;
    char nomecidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int numpontosturisticos2;
    float densidade2;
    float PIBcapita2;
    float Superpoder2; // Variável que vai calcular o super poder dessa cidade 2
    
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // solicitação de entrada de dados pelo usuário
    printf("Digite o código da cidade: ");
    scanf("%f", &codecidade1);
    getchar();  

    printf("Digite o nome da cidade: ");
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    nomecidade1[strcspn(nomecidade1, "\n")] = '\0';  

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numpontosturisticos1);

    densidade1 = (float) populacao1 / area1;
    PIBcapita1 = (float) PIB1 / populacao1;
    Superpoder1 = (float) populacao1 + area1 + PIB1 + numpontosturisticos1;

    // Saida de dados da primeira cidade cadastrada

    printf("\nCarta cadastrada:\n");
    printf("Código da cidade: %.2f\n", codecidade1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População da cidade: %d\n", populacao1);
    printf("Área da cidade: %.2f\n", area1);
    printf("PIB da cidade: %.2f\n", PIB1);
    printf("Número de pontos turísticos da cidade: %d\n", numpontosturisticos1);
    printf("A densidade populacional da cidade %s é de %.2f\n", nomecidade1, densidade1);
    printf("A PIB per Capita da cidade %s é de %.2f\n", nomecidade1, PIBcapita1);
    printf("O super poder da cidade %s é de %.2f\n", nomecidade1, Superpoder1);

    // Printsf e Scansf para o cadastro da segunda cidade

    printf("\nDigite o código da segunda cidade: ");
    scanf("%f", &codecidade2);
    getchar();  // Limpa o buffer de entrada

    printf("Digite o nome da segunda cidade: ");
    fgets(nomecidade2, sizeof(nomecidade2), stdin);
    nomecidade2[strcspn(nomecidade2, "\n")] = '\0'; 

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &numpontosturisticos2);

    densidade2 = (float) populacao2 / area2;
    PIBcapita2 = (float) PIB2 / populacao2;
    Superpoder2 = (float) populacao2 + area2 + PIB2 + numpontosturisticos2;

    // Exibição dos Dados das Cartas:
    // Saída de dados da segunda cidade cadastrada

    printf("\nSegunda carta cadastrada:\n");
    printf("Código da segunda cidade: %.2f\n", codecidade2);
    printf("Nome da segunda cidade: %s\n", nomecidade2);
    printf("População da segunda cidade: %d\n", populacao2);
    printf("Área da segunda cidade: %.2f\n", area2);
    printf("PIB da segunda cidade: %.2f\n", PIB2);
    printf("Número de pontos turísticos da segunda cidade: %d\n", numpontosturisticos2);
    printf("A densidade populacional da segunda cidade %s é de %.2f\n", nomecidade2, densidade2);
    printf("A PIB per Capita da segunda cidade %s é de %.2f\n", nomecidade2, PIBcapita2);
    printf("O super poder da segunda cidade %s é de %.2f\n", nomecidade2, Superpoder2);


    // Comparação de Cartas:
   
   if(densidade1 < densidade2) {
    printf("A cidade vencedora é %s, pois tem densidade populacional menor", nomecidade1);
   }else if(densidade1 == densidade2) {
        if(Superpoder1 > Superpoder2) {
            printf("A cidade vencedora é %s, pois seu super poder é maior", nomecidade1);
        }else if(Superpoder1 < Superpoder2) {
            printf("A cidade vencedora é %s, pois seu super poder é maior", nomecidade2);
        } else{
    printf("A cidade vencedora é %s, pois tem densidade populacional menor", nomecidade2);
   }
    }
   
   


    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
