#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

        int populacao, populacao2, pontosturisticos, pontosturisticos2;
        float area, area2; 
        float PIB, PIB2;
        char nome [50], nome2[50];
    
        printf("Digite os dados da primeira carta\n");
        
        printf("Nome:\n");
        scanf("%s", &nome);

        printf("População: \n");
        scanf("%d", &populacao);
    
        printf("Área: \n");
        scanf("%f", &area);
    
        printf("PIB:  \n");
        scanf("%f", &PIB);
    
        printf("Número de Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos);
    
        //SEGUNDA CARTA COMEÇA A PARTIR DAQUI

        printf("Digite os dados da Segunda carta\n");
        
        printf("Nome:\n");
        scanf("%s", &nome2);

        printf("População: \n");
        scanf("%d", &populacao2);
    
        printf("Área: \n");
        scanf("%f", &area2);
    
        printf("PIB:  \n");
        scanf("%f", &PIB2);
    
        printf("Número de Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos2);
    
        //ESTATISTICAS APRESENTADAS
        printf("Estatísticas da primeira carta:\n");
        printf("Nome: %s \n", nome);
        printf("População: %d \n", populacao);
        printf("Pontos Turísticos: %d\n",pontosturisticos);
        printf("Área: %.3f\n", area);
        printf("Pib: %.3f \n", PIB);

        printf("Estatísticas da Segunda Carta: \n");
        printf("Nome: %s\n", &nome2);
        printf("População: %d \n", populacao2);
        printf("Pontos Turísticos: %d\n", pontosturisticos2);
        printf("Área: %.3f \n", area2);
        printf("Pib: %.3f\n", PIB2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
