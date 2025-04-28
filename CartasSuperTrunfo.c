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
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade:  \n");
    scanf("%s", &cidade1);

    printf("Digite a População:  \n");
    scanf("%d", &população1);

    printf("Digite a Área (em km²):  \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    


    return 0;
}
