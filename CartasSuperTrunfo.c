#include <stdio.h>

int main() {
    // Variaveis da Carta 1
    char estado1;                                
    char codigo1[50];                         
    char cidade1[50];                        
    int população1;                          
    float area1;                            
    float pib1;                           
    int pontosTuristicos1;                

    // Variaveis da Carta 2
    char estado2;                         
    char codigo2[50];                   
    char cidade2[50];                   
    int população2;                   
    float area2;                      
    float pib2;                    
    int pontosTuristicos2;           

    //Cadastro da carta 1
    printf(" - Cadastro da carta 1 -\n");

    printf("Digite o Estado (letra de A a H): \n");
    scanf("%c", &estado1)

    printf("Digite o Código da Carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade:  \n");
    scanf("%s", cidade1);

    printf("Digite a População:  \n");
    scanf("%d", &população1);

    printf("Digite a Área (em km²):  \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    //Cadastro da Carta 2
    printf("\n- Cadastro da Carta 2 -\n");

    printf("Digite o Estado (letra de A a H): \n");
    scanf(" %c", &estado2);           

    printf("Digite o Código da Carta (ex: B02): \n");
    scanf("%s", codigo2);  

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", cidade2); 

    printf("Digite a População: \n");
    scanf("%d", &populacao2);  

    printf("Digite a Área (em km²): \n");
    scanf("%f", &area2);  

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);  

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2); 

    // Exibe os Dados da Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    //Exibe os Dados da Carta 2
    print("\nCarta 2\n");
    printf("Estado %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2); 
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos2);









    return 0;
}
