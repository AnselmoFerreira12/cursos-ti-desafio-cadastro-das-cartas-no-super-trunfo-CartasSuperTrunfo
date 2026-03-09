#include <stdio.h>

int main(){

    int escolha1, escolha2;
    float atributoA1, atributoA2;
    float atributoB1, atributoB2;
    float somaA, somaB;

    unsigned long int populacao1; 
    int npt1;
    float area1, pib1, densidade1, ppc1;
    char estado1;
    char nome1[30], codigo1[30];
    float SuperPoder1;

    unsigned long int populacao2;
    int npt2;
    float area2, pib2, densidade2, ppc2;
    char estado2;
    char nome2[30], codigo2[30];
    float SuperPoder2;

    //ppc = PIB per Capita
    //npt = número de pontos turísticos

    //variáveis separadas de acordo com a carta
    //ex: "populacao1" = carta 1, "populacao2" = carta 2


    //PREENCHIMENTO DE INFORMAÇÕES DA PRIMEIRA CARTA:

    printf("---BEM-VINDO AO SUPER TRUNFO C---\n\n");

    printf("Digite o estado da primeira carta:\n");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da primeira carta:\n");
    scanf("%s", nome1);

    printf("Digite a população da primeira carta:\n");
    scanf("%lu", &populacao1);

    printf("Digite a area da primeira carta:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da primeira carta:\n");
    scanf("%d", &npt1);

    printf("\n");


    //PREENCHIMENTO DE INFORMAÇÕES DA SEGUNDA CARTA:


    printf("Digite o estado da segunda carta:\n");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da segunda carta:\n");
    scanf("%s", nome2);

    printf("Digite a população da seguda carta:\n");
    scanf("%lu", &populacao2);

    printf("Digite a area da segunda carta:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda carta:\n");
    scanf("%d", &npt2);


    //OPERAÇÕES:


    densidade1 = populacao1 / area1;
    ppc1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    ppc2 = pib2 / populacao2;

    SuperPoder1 = populacao1 + area1 + pib1 + npt1 + ppc1 + (1/densidade1);
    SuperPoder2 = populacao2 + area2 + pib2 + npt2 + ppc2 + (1/densidade2);

    printf("\n");

    //INFORMAÇÕES DAS DUAS CARTAS:


    printf("INFORMAÇÕES DA CARTA 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número  de Pontos Turísticos: %d\n", npt1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", ppc1);
    printf("Super Poder: %.2f\n\n", SuperPoder1);

    printf("INFORMAÇÕES DA CARTA 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número  de Pontos Turísticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", ppc2);
    printf("Super Poder: %.2f\n\n", SuperPoder2);


    //COMPARAÇÃO DAS DUAS CARTAS:


    printf("COMPARAÇÃO DAS DUAS CARTAS:\n\n");
    
    printf("1 = Carta 1 venceu\n");
    printf("0 = Carta 2 venceu\n\n");

    printf("População: %d\n", populacao1 >populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Número  de Pontos Turísticos: %d\n", npt1 > npt2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", ppc1 > ppc2);
    printf("Super Poder: %d\n\n", SuperPoder1 > SuperPoder2);


    //COMPETIÇÃO DE ATRIBUTOS


    printf("DUELO DE ATRIBUTOS:\n\n");
    printf("Escolha dois atributos:\n\n");

    printf("1. POPULAÇÃO\n");
    printf("2. ÁREA\n");
    printf("3. PIB\n");
    printf("4. NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("5. DENSIDADE POPULACIONAL\n");
    printf("6. PIB PER CAPITA\n");
    printf("7. SUPER PODER\n\n");

    printf("Escolha o primeiro atributo: \n");
    scanf("%d", &escolha1);
    printf("\n");

    switch (escolha1)
    {
        case 1:
        printf("NOME DA CIDADE DA CARTA 1: %s - POPULAÇÃO 1: %lu\n", nome1, populacao1);
        printf("NOME DA CIDADE DA CARTA 2: %s - POPULAÇÃO 2: %lu\n\n", nome2, populacao2);
        if(populacao1 > populacao2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if (populacao1 < populacao2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else
        {
            printf("EMPATE!\n\n");
        }
        break;
        case 2:
        printf("NOME DA CIDADE DA CARTA 1: %s - ÁREA 1: %.2f\n", nome1, area1);
        printf("NOME DA CIDADE DA CARTA 2: %s - ÁREA 2: %.2f\n\n", nome2, area2);
        if(area1 > area2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if(area1 < area2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else
        {
            printf("EMPATE!\n\n");
        }
        break;
        case 3:
        printf("NOME DA CIDADE DA CARTA 1: %s - PIB 1: %.2f\n", nome1, pib1);
        printf("NOME DA CIDADE DA CARTA 2: %s - PIB 2: %.2f\n\n", nome2, pib2);
        if(pib1 > pib2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if(pib1 < pib2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else
        {
            printf("EMPATE!\n\n");
        }
        break;
        case 4:
        printf("NOME DA CIDADE DA CARTA 1: %s - NÚMERO DE PONTOS TURÍSTICOS 1: %d\n", nome1, npt1);
        printf("NOME DA CIDADE DA CARTA 2: %s - NÚMERO DE PONTOS TURÍSTICOS 2: %d\n\n", nome2, npt2);
        if(npt1 > npt2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if(npt1 < npt2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else
        {
            printf("EMPATE!\n\n");
        }
        break;
        case 5:
        printf("NOME DA CIDADE DA CARTA 1: %s - DENSIDADE POPULACIONAL 1: %.2f\n", nome1, densidade1);
        printf("NOME DA CIDADE DA CARTA 2: %s - DENSIDADE POPULACIONAL 2: %.2f\n\n", nome2, densidade2);
        if(densidade1 < densidade2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if(densidade1 > densidade2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else 
        {
            printf("EMPATE!\n\n");
        }
        break;
        case 6:
        printf("NOME DA CIDADE DA CARTA 1: %s - PIB PER CAPITA 1: %.2f\n", nome1, ppc1);
        printf("NOME DA CIDADE DA CARTA 2: %s - PIB PER CAPITA 2: %.2f\n\n", nome2, ppc2);
        if(ppc1 > ppc2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if(ppc1 < ppc2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else
        {
            printf("EMPATE!\n\n");
        }
        break;
        case 7:
        printf("NOME DA CIDADE DA CARTA 1: %s - SUPER PODER 1: %.2f\n", nome1, SuperPoder1);
        printf("NOME DA CIDADE DA CARTA 2: %s - SUPER PODER 2: %.2f\n\n", nome2, SuperPoder2);
        if(SuperPoder1 > SuperPoder2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if (SuperPoder1 < SuperPoder2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else
        {
            printf("EMPATE!\n\n");
        }
        break;
        default:
        printf("opção inválida");
        break;
    }

    printf("1. POPULAÇÃO\n");
    printf("2. ÁREA\n");
    printf("3. PIB\n");
    printf("4. NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("5. DENSIDADE POPULACIONAL\n");
    printf("6. PIB PER CAPITA\n");
    printf("7. SUPER PODER\n\n");

    printf("Escolha o segundo atributo: \n");
    scanf("%d", &escolha2);
    printf("\n");

    if(escolha1 == escolha2)
    {
        printf("Opção Inválida\n\n");

        return 0;
    }
    else
    {
        printf("\n\n");
    }

    switch (escolha2)
    {
        case 1:
        printf("NOME DA CIDADE DA CARTA 1: %s - POPULAÇÃO 1: %lu\n", nome1, populacao1);
        printf("NOME DA CIDADE DA CARTA 2: %s - POPULAÇÃO 2: %lu\n\n", nome2, populacao2);
        if(populacao1 > populacao2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if (populacao1 < populacao2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else
        {
            printf("EMPATE!\n\n");
        }
        break;
        case 2:
        printf("NOME DA CIDADE DA CARTA 1: %s - ÁREA 1: %.2f\n", nome1, area1);
        printf("NOME DA CIDADE DA CARTA 2: %s - ÁREA 2: %.2f\n\n", nome2, area2);
        if(area1 > area2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if(area1 < area2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else
        {
            printf("EMPATE!\n\n");
        }
        break;
        case 3:
        printf("NOME DA CIDADE DA CARTA 1: %s - PIB 1: %.2f\n", nome1, pib1);
        printf("NOME DA CIDADE DA CARTA 2: %s - PIB 2: %.2f\n\n", nome2, pib2);
        if(pib1 > pib2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if(pib1 < pib2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else
        {
            printf("EMPATE!\n\n");
        }
        break;
        case 4:
        printf("NOME DA CIDADE DA CARTA 1: %s - NÚMERO DE PONTOS TURÍSTICOS 1: %d\n", nome1, npt1);
        printf("NOME DA CIDADE DA CARTA 2: %s - NÚMERO DE PONTOS TURÍSTICOS 2: %d\n\n", nome2, npt2);
        if(npt1 > npt2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if(npt1 < npt2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else
        {
            printf("EMPATE!\n\n");
        }
        break;
        case 5:
        printf("NOME DA CIDADE DA CARTA 1: %s - DENSIDADE POPULACIONAL 1: %.2f\n", nome1, densidade1);
        printf("NOME DA CIDADE DA CARTA 2: %s - DENSIDADE POPULACIONAL 2: %.2f\n\n", nome2, densidade2);
        if(densidade1 < densidade2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if(densidade1 > densidade2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else 
        {
            printf("EMPATE!\n\n");
        }
        break;
        case 6:
        printf("NOME DA CIDADE DA CARTA 1: %s - PIB PER CAPITA 1: %.2f\n", nome1, ppc1);
        printf("NOME DA CIDADE DA CARTA 2: %s - PIB PER CAPITA 2: %.2f\n\n", nome2, ppc2);
        if(ppc1 > ppc2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if(ppc1 < ppc2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else
        {
            printf("EMPATE!\n\n");
        }
        break;
        case 7:
        printf("NOME DA CIDADE DA CARTA 1: %s - SUPER PODER 1: %.2f\n", nome1, SuperPoder1);
        printf("NOME DA CIDADE DA CARTA 2: %s - SUPER PODER 2: %.2f\n\n", nome2, SuperPoder2);
        if(SuperPoder1 > SuperPoder2)
        {
            printf("CARTA 1 VENCEU!!!\n\n");
        } else if (SuperPoder1 < SuperPoder2)
        {
            printf("CARTA 2 VENCEU!!!\n\n");
        } else
        {
            printf("EMPATE!\n\n");
        }
        break;
        default:
        printf("opção inválida");

    }

    if(escolha1 ==1)
    {
        atributoA1 = populacao1;
        atributoA2 = populacao2;
    }
    else if (escolha1 ==2)
    {
        atributoA1 = area1;
        atributoA2 = area2;
    }
    else if (escolha1 ==3)
    {
        atributoA1 = pib1;
        atributoA2 = pib2;
    }
    else if (escolha1 ==4)
    {
        atributoA1 = npt1;
        atributoA2 = npt2;
    }
    else if (escolha1 ==5)
    {
        atributoA1 = 1/densidade1;
        atributoA2 = 1/densidade2;
    }
    else if (escolha1 ==6)
    {
        atributoA1 = ppc1;
        atributoA2 = ppc2;
    }
    else if (escolha1 ==7)
    {
        atributoA1 = SuperPoder1;
        atributoA2 = SuperPoder2;
    }
    else
    {
        printf("Opção Inválida");

        return 0;
    }

    if(escolha2 ==1)
    {
        atributoB1 = populacao1;
        atributoB2 = populacao2;
    }
    else if (escolha2 ==2)
    {
        atributoB1 = area1;
        atributoB2 = area2;
    }
    else if (escolha2 ==3)
    {
        atributoB1 = pib1;
        atributoB2 = pib2;
    }
    else if (escolha2 ==4)
    {
        atributoB1 = npt1;
        atributoB2 = npt2;
    }
    else if (escolha2 ==5)
    {
        atributoB1 = 1/densidade1;
        atributoB2 = 1/densidade2;
    }
    else if (escolha2 ==6)
    {
        atributoB1 = ppc1;
        atributoB2 = ppc2;
    }
    else if (escolha2 ==7)
    {
        atributoB1 = SuperPoder1;
        atributoB2 = SuperPoder2;
    }
    else
    {
        printf("Opção Inválida");

        return 0;
    }

    somaA = atributoA1 + atributoB1;
    somaB = atributoA2 + atributoB2;

    if(somaA > somaB)
    {
        printf("A SOMA DOS ATRIBUTOS DA CARTA 1 É MAIOR QUE A SOMA DOS ATRIBUTOS DA CARTA 2\n\n");
    }
    else if(somaA < somaB)
    {
        printf("A SOMA DOS ATRIBUTOS DA CARTA 2 É MAIOR QUE A SOMA DOS ATRIBUTOS DA CARTA 1\n\n");
    }
    else if(somaA == somaB)
    {
        printf("AS SOMAS DOS ATRIBUTOS DAS CARTAS SÃO IGUAIS\n\n");
    }
    else
    {
        printf("Cálculo não definido\n\n");
    }

    return 0;
}