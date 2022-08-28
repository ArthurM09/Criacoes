/*Algoritmo computacional para calcular o valor financeiro total do IPTU (Imposto Predial Territorial Urbano) 
de um imóvel e os valores das parcelas que o proprietário do imóvel deve pagar. O usuário informa o comprimento 
e a largura do terreno, a área construída, o tipo do imóvel e o número de parcelas.*/
#include<stdio.h>
#include<locale.h>

/*Programa principal*/
int main()
{
    setlocale(LC_ALL,"Portuguese");

    /*Declarção das variáveis*/
    float IPTU, valor_venal, valor_parcela, comprimento_terreno, largura_terreno;
    float numero_parcela, area_terreno, area_construida, valor_terreno, valor_area_construida;
    char opcao;

    /*Menu para informar o tipo do terreno*/
    printf("\n**MENU DE DEFINIÇÃO** \n");
    printf("\n  | [1] Precário  |");
    printf("\n  | [2] Médio     |");
    printf("\n  | [3] Bom        |");
    printf("\n  | [4] Luxo       |\n");
        printf("Escolha: ");
        scanf("%c", &opcao);

    /*Usuário informa o número de parcelas*/
    printf("\nEntre com o número de parcelas: ");
        scanf("%f", &numero_parcela);

    /*Cálculo da área do terreno*/
    printf("\nEntre com o comprimento do terreno: ");
        scanf("%f", &comprimento_terreno);
    printf("Entre com a largura do terreno: ");
        scanf("%f", &largura_terreno);
    /*Exibição do valor da área do terreno*/
    area_terreno = comprimento_terreno * largura_terreno;
    printf("\nA área do terreno é: %.2f", area_terreno);

    /*Cálculo do valor do terreno*/
    valor_terreno = area_terreno * 340.80;
    printf("\nO valor do terreno é: %.2f \n", valor_terreno);

    /*Estrutura de decisão*/
    if (opcao == '1' || opcao == '2' || opcao == '3' || opcao == '4'){
        printf("\nEntre com a área construída: ");
            scanf("%f", &area_construida);

        /*Cálculo do valor da área construída*/
        if (opcao == '1'){
            valor_area_construida = area_construida * 112.20;
            printf("O valor da área construída é: %.2f \n", valor_area_construida);
        }
        else if (opcao == '2'){
                 valor_area_construida = area_construida * 350.72;
                 printf("O valor da área construída é: %.2f \n", valor_area_construida);
        }
        else if (opcao == '3'){
                 valor_area_construida = area_construida * 692.32;
                 printf("O valor da área construída é: %.2f \n", valor_area_construida);
        }
        else if (opcao == '4'){
                 valor_area_construida = area_construida * 1150.55;
                 printf("O valor da área construída é: %.2f \n", valor_area_construida);
        }

        /*Cálculo do valor venal*/
        valor_venal = valor_terreno + valor_area_construida;
        printf("\nO valor venal do terreno é: %.2f \n", valor_venal);

        /*Cálculo do IPTU*/
        IPTU = valor_venal * 0.01;
        if (numero_parcela == 1){
                printf("\nO IPTU recebe desconto");
                IPTU = IPTU * 0.85;
        }
        printf("\nO IPTU é: %.2f \n", IPTU);

        /*Cálculo do valor das parcelas*/
        if (numero_parcela >= 1 || numero_parcela <= 10){
            valor_parcela = IPTU / numero_parcela;
            printf("\nO valor da(s) parcela(s) é: %.2f \n", valor_parcela);
        }
        else{
            numero_parcela = 1;
        }
    }
    return 0;
}

