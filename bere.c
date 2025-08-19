#include <stdio.h>// Biblioteca padrão de entrada e saída (printf, scanf, getchar)
#include <stdlib.h>// Biblioteca padrão (system, funções de controle de memória e conversão)

int main(){
    int opcao=0, codigo=0, quantidade=0, pagamento=0, vendas=0, escolha_pagamento=0, pagamento_concluido=0, opcao_pagamento=0; // Variáveis de controle de opções e entradas do usuário


    float total_limpeza=0, total_alimento=0, total_padaria=0, total_compra=0, desconto=0, valor_pago=0, valor_com_desconto=0, troco=0, valor_devendo=0, fechamento=0;  // Variáveis para valores monetários


    do { // Estrutura principal: "do ... while" para manter o menu ativo até o usuário escolher sair.
    system("cls"); // limpa a tela (Windows)
    printf("===================================================\n");
    printf("|          Bem-vindo(a) a Mercearia da Bere!      |\n");
    printf("===================================================\n");
    printf("| 1. Venda de material de limpeza                 |\n");
    printf("| 2. Venda de alimentos                           |\n");
    printf("| 3. Padaria                                      |\n");
    printf("| 4. Pagamento                                    |\n");
    printf("| 5. Sair                                         |\n");
    printf("===================================================\n");
    printf("|Digite uma opcao para seguir:\n");  
    scanf("%d", &opcao); // Lê a opção do usuário
    getchar(); // Limpa o buffer do teclado

        switch (opcao) {  // Estrutura de decisão principal

        default: // Caso de opção inválida
            printf("Opcao invalida, tecle ENTER para voltar ao menu...\n");
            getchar();        
            break;

// ----------------------------- CASE 1: Material de Limpeza -----------------------------
         case 1:
         do{
            system("cls");// Limpa a tela para exibir o submenu
            printf("---------------------------------------------------\n");
            printf("  Venda de Material de Limpeza\n");
            printf("---------------------------------------------------\n");
            printf("11. Detergente .............. R$  1.99\n");
            printf("12. Sabao em po ............. R$  8.99\n");
            printf("13. Esponja ................. R$  1.50\n");
            printf("14. Amaciante ............... R$ 15.00\n");
            printf("15. Voltar ao menu principal\n");
            printf("---------------------------------------------------\n");
            printf("Escolha o produto: ");
            scanf("%d", &codigo);
            getchar();

            if (codigo == 15) { // Volta ao menu principal
            break;
            }

            switch (codigo) { // Escolha do produto e cálculo do subtotal

                case 11:
                    printf("Voce escolheu detergente. O preco e R$1.99\n");
                    printf("Quantas unidades voce deseja comprar?\n");
                    scanf("%d", &quantidade);
                    getchar();
                    total_limpeza = quantidade * 1.99;
                    printf("O total para a quantidade %d eh R$%.2f\n", quantidade, total_limpeza);
                    getchar();
                break; 

                case 12:
                    printf("Voce escolheu sabao em po. O preco e R$8.99\n");
                    printf("Quantas unidades voce deseja comprar?\n");
                    scanf("%d", &quantidade);
                    getchar();
                    total_limpeza = quantidade * 8.99;
                    printf("O total para a quantidade %d eh R$%.2f\n", quantidade, total_limpeza);
                    getchar();
                break; 

                case 13:
                    printf("Voce escolheu esponja. O preco e R$1.50\n");
                    printf("Quantas unidades voce deseja comprar?\n");
                    scanf("%d", &quantidade);
                    getchar();
                    total_limpeza = quantidade * 1.50;
                    printf("O total para a quantidade %d eh R$%.2f\n", quantidade, total_limpeza);
                    getchar();
                break; 

                case 14:
                    printf("Voce escolheu amaciante. O preco e R$15.00\n");
                    printf("Quantas unidades voce deseja comprar?\n");
                    scanf("%d", &quantidade);
                    getchar();
                    total_limpeza = quantidade * 15.00;
                    printf("O total para a quantidade %d eh R$%.2f\n", quantidade, total_limpeza);
                    getchar();
                break;
                
                default:
                    printf("Opcao invalida, tente novamente! \n"); getchar();
                break;
            }
            }while (codigo !=15);
            break;

            // ----------------------------- CASE 2: Alimentos -----------------------------
         case 2: 

         do{
            system("cls");
             printf("---------------------------------------------------\n");
            printf("  Venda de Alimentos\n");
            printf("---------------------------------------------------\n");
            printf("21. Cafe ............. R$ 19.99\n");
            printf("22. Leite (cx) ....... R$  5.90\n");
            printf("23. Arroz (1Kg) ...... R$  4.50\n");
            printf("24. Feijao Preto ..... R$  8.00\n");
            printf("25. Acucar (1Kg) ..... R$  5.00\n");
            printf("26. Voltar ao menu principal\n");
            printf("---------------------------------------------------\n");
            printf("Escolha o produto: ");

            scanf("%d", &codigo);
            getchar();

            if (codigo == 26) { // Volta ao menu
            break;
            }

            switch(codigo) { // Cálculo do subtotal de alimentos
                case 21:
                    printf("Voce escolheu o cafe. O preco eh R$19.99\n");
                    printf("Quantas unidade voce deseja comprar?\n");
                    scanf("%d", &quantidade);
                    getchar();
                    total_alimento = quantidade * 19.99;
                    printf("O total para a quantidade %d eh R$%.2f\n", quantidade, total_alimento);
                    getchar();
                break;

                case 22:
                    printf("Voce escolheu o leite(cx). O preco eh R$5.90\n");
                    printf("Quantas unidade voce deseja comprar?\n");
                    scanf("%d", &quantidade);
                    getchar();
                    total_alimento = quantidade * 5.90;
                    printf("O total para a quantidade %d eh R$%.2f\n", quantidade, total_alimento);
                    getchar();
                break;

                case 23:
                    printf("Voce escolheu o ArroZ(1Kg). O preco eh R$4.50\n");
                    printf("Quantas unidade voce deseja comprar?\n");
                    scanf("%d", &quantidade);
                    getchar();
                    total_alimento = quantidade * 4.50;
                    printf("O total para a quantidade %d eh R$%.2f\n", quantidade, total_alimento);
                    getchar();
                break;

                case 24:
                    printf("Voce escolheu o Feijao Preto (1Kg). O preco eh R$8.00\n");
                    printf("Quantas unidade voce deseja comprar?\n");
                    scanf("%d", &quantidade);
                    getchar();
                    total_alimento = quantidade * 8.00;
                    printf("O total para a quantidade %d eh R$%.2f\n", quantidade, total_alimento);
                    getchar();
                break;

                case 25:
                    printf("Voce escolheu o Acucar (1Kg). O preco eh R$5.00\n");
                    printf("Quantas unidade voce deseja comprar?\n");
                    scanf("%d", &quantidade);
                    getchar();
                    total_alimento = quantidade * 5.00;
                    printf("O total para a quantidade %d eh R$%.2f\n", quantidade, total_alimento);
                    getchar();
                break;

                default:
                    printf("Opcao invalida, tente novamente!\n");getchar();
                break;
            }

         }while (codigo !=26);
         break;

            // ----------------------------- CASE 3: Padaria -----------------------------
         case 3:
         do{
            system("cls");
            printf("---------------------------------------------------\n");
            printf(" Padaria\n");
            printf("---------------------------------------------------\n");
            printf("31. Pao de forma ......... R$  9.50\n");
            printf("32. Pao integral ......... R$ 12.50\n");
            printf("33. Pao frances (unid) ... R$  1.90\n");
            printf("34. Sonho ................ R$  8.50\n");
            printf("35. Voltar ao menu principal\n");
            printf("---------------------------------------------------\n");
            printf("Escolha o produto: ");
            scanf("%d", &codigo);
            getchar();

            if (codigo == 35) { 
            break;
            }

            switch(codigo){// Cálculo do subtotal da padaria
                case 31:
                    printf("Voce escolheu o Pao de forma. O preco eh R$9.50\n");
                    printf("Quantas unidade voce deseja comprar?\n");
                    scanf("%d", &quantidade);
                    getchar();
                    total_padaria = quantidade * 9.50;
                    printf("O total para a quantidade %d eh R$%.2f\n", quantidade, total_padaria);
                    getchar();
                break;

                case 32:
                    printf("Voce escolheu o Pao integral. O preco eh R$12.50\n");
                    printf("Quantas unidade voce deseja comprar?\n");
                    scanf("%d", &quantidade);
                    getchar();
                    total_padaria = quantidade * 12.50;
                    printf("O total para a quantidade %d eh R$%.2f\n", quantidade, total_padaria);
                    getchar();
                break;

                case 33:
                    printf("Voce escolheu o Pao frances(und). O preco eh R$1.90\n");
                    printf("Quantas unidade voce deseja comprar?\n");
                    scanf("%d", &quantidade);
                    getchar();
                    total_padaria = quantidade * 1.90;
                    printf("O total para a quantidade %d eh R$%.2f\n", quantidade, total_padaria);
                    getchar();
                break;

                case 34:
                    printf("Voce escolheu o Sonho. O preco eh R$8.50\n");
                    printf("Quantas unidade voce deseja comprar?\n");
                    scanf("%d", &quantidade);
                    getchar();
                    total_padaria = quantidade * 8.50;
                    printf("O total para a quantidade %d eh R$%.2f\n", quantidade, total_padaria);
                    getchar();
                break;

                default:
                    printf("Opcao invalida, tente novamente!\n");getchar();
                break;
            }

         }while(codigo !=35);
         break;

// ----------------------------- CASE 4: Pagamento ----------------------------
            case 4:
            do {
                system("cls");
                printf("\n-------------- PAGAMENTO --------------\n");
                printf("10 \t Dinheiro \t\t \n");
                printf("11 \t Cartao \t\t \n");
                printf("\n---------------------------------------\n");

                printf("Escolha a forma de pagamento:  ");
                scanf("%d", &opcao_pagamento);
                getchar();

                total_compra = total_alimento + total_limpeza + total_padaria;// Calcula o total da compra somando todos os setores
                // Mostra resumo da compra
                printf("---------------------------------------------\n");
                printf("\n Material de limpeza R$%.2f  \n", total_limpeza);
                printf("\n Alimentos R$%.2f \n", total_alimento);
                printf("\n Padaria R$%.2f \n", total_padaria);
                printf("\n O total da sua compra eh R$%.2f \n", total_compra);
                printf("---------------------------------------------\n");


                switch (opcao_pagamento) { // Escolha do pagamento
                    case 10:// Dinheiro
                        if (total_compra <= 50) {
                            desconto = total_compra * 0.05;
                        }
                        else if (total_compra > 50 && total_compra < 100) {
                            desconto = total_compra * 0.10;
                        }
                        else {
                            desconto = total_compra * 0.18;
                        }

                        valor_com_desconto = total_compra - desconto; //Calcula o valor com desconto

                        printf("Voce ganhou um desconto de R$%.2f\n", desconto); 
                        printf("Sua compra com desconto R$%.2f \n", valor_com_desconto);
                        printf("Digite o valor pago: R$ ");
                        scanf("%f", &valor_pago);
                        getchar();// Limpa o buffer do teclado

                        if (valor_pago > valor_com_desconto) {// Se o valor pago for maior que o valor com desconto
                        troco = valor_pago - valor_com_desconto;  
                        printf("Troco ficou: R$%.2f \n", troco);
                        getchar();
                        pagamento_concluido = 1;
                        }

                        else if (valor_pago < valor_com_desconto) {// Se o valor pago for menor que o valor com desconto
                        valor_devendo = valor_com_desconto - valor_pago;  
                        printf("Esta faltando R$%.2f da sua compra \n", valor_devendo);
                        getchar();
                        continue; // Continua o loop para tentar novamente o pagamento

                        }
                        else {// Se o valor pago for igual ao valor com desconto
                            printf("Pagamento no dinheiro aprovado \n");
                            getchar();
                            pagamento_concluido = 1;
                        }
                        
                        break;


                    case 11:
                        printf("\n 1 - Pagamento na maquina OK \n");
                        printf("\n 2- Pagamento na maquina NAO OK \n");

                        printf("Digite a opcao: \n");
                        scanf("%d", &escolha_pagamento);
                        getchar();

                        if (escolha_pagamento == 1) {
                            printf("Pagamento no cartao aprovado");
                            getchar();
                            pagamento_concluido = 1;
                        }
                        else if (escolha_pagamento == 2) {
                            printf("Pagamento nao foi aprovado, tente de novo");
                            getchar();
                            continue; // Continua o loop para tentar novamente o pagamento
                        }
                        else {
                            printf("Opcao invalida");
                        }

                        break;

                    default:
                        printf("Opcao invalida de pagamento");
                        getchar();
                        break;

                }

            } while (pagamento_concluido != 1);
            

            vendas = vendas + 1;  // Contabiliza venda
            fechamento = fechamento + total_compra; // Soma valor no fechamento do caixa
            total_compra = total_padaria = total_limpeza = total_alimento = valor_pago = desconto = valor_com_desconto = troco = valor_devendo = 0;// Reseta valores para nova compra
            break;

            // -------------------- CASE 5: Sair --------------------
        case 5:
            printf("Obrigado por comprar com a Bere, volte sempre! \n");
            printf("Total de vendas: %d \n", vendas);
            printf("Fechamento de caixa: R$%.2f \n", fechamento);
            break;

        }

    } while (opcao != 5);// Continua no menu até o usuário escolher "5 - Sair"

    return 0; // Fim do programa
}
