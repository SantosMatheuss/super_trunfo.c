#include <stdio.h>

int main() {
    //Carta 01
    char estado1;
    char codigo1[5];
    char cidade1[20];
    float area1;
    float PIB1;
    int populacao1;
    int turismo1;


    //Carta 02
    char estado2;
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int turismo2;


    //Entrada de Dados Carta 01

    printf("Cadastro da Carta 01\n");

    printf("Digite o Estado: \n");
    scanf("%c" , &estado1);

    printf("Digite o Código: \n");
    scanf("%s" , &codigo1);

    printf("Digite o cidade: \n");
    scanf("%s" , &cidade1);

    printf("Informe a população: \n");
    scanf("%d" , &populacao1);

    printf("Informe a área (Km²): \n");
    scanf("%f" , &area1);

    printf("Informe o PIB: \n");
    scanf("%f" , &PIB1);

    printf("Qual o total de pontos turísticos? \n");
    scanf("%d" , &turismo1);

    //Entrada de Dados Carta 02

    printf("Cadastro da Carta 02\n");
    
    printf("Digite o Estado: \n");
    scanf(" %c" , &estado2);

    printf("Digite o Código: \n");
    scanf("%s" , &codigo2);

    printf("Digite o cidade: \n");
    scanf("%s" , &cidade2);

    printf("Informe a população: \n");
    scanf("%d" , &populacao2);

    printf("Informe a área (Km²): \n");
    scanf("%f" , &area2);

    printf("Informe o PIB: \n");
    scanf("%f" , &PIB2);

    printf("Qual o total de pontos turísticos? \n");
    scanf("%d" , &turismo2);


    //Saída de Dados
    printf("Carta 01\n");

    printf("Estado: %c \n" , estado1);
    printf("Código da Carta: %s \n" , codigo1);
    printf("Cidade: %s \n" , cidade1);
    printf("População: %d habitantes \n" , populacao1);
    printf("Área: %.1f KM² \n" , area1);
    printf("PIB: R$ %.2f \n" , PIB1);
    printf("Pontos turísticos: %d \n" , turismo1);
    
    printf("Carta 02\n");
    
    printf("Estado: %c \n" , estado2);
    printf("Código da Carta: %s \n" , codigo2);
    printf("Cidade: %s \n" , cidade2);
    printf("População: %d habitantes \n" , populacao2);
    printf("Área: %.1f KM² \n" , area2);
    printf("PIB: R$ %.2f \n" , PIB2);
    printf("Pontos turísticos: %d \n" , turismo2);   

    return 0;
}
