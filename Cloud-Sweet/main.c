// Esse código foi desenvolvido 100% sem o uso de IA, apenas para teste de aprendizado.
// Estou aprendendo programar em C devido a matéria atual da faculdade.
// Como estou ainda cursando estou aprendendo apenas C para não confundir sintaxe com outras linguagens.
// Após terminar os trabalhos/provas pretendo migrar esse conhecimento adquirido para linguagem python.
// Até o presente momento só aprendi o básico por isso está sem funções mais complexas.

// A ideia foi criar um sistema onde clientes possam comprar algodão doce de uma loja fictícia (Cloud-Sweet).

#include <stdio.h>
#include <windows.h>

int main(){
    // IDIOMA DO SISTEMA EM UTF-8.
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //VARIÁVEIS.
    int itens = 0, qtd = 0, totalItens = 0, qtdCeu = 0, qtdFlocos = 0, qtdBrig = 0, qtdTrad = 0, pagamento = 0, parcelas = 0, qtdParcelas = 0;
    float totalConta = 0.0, totalComDesconto = 0.0;

    // HOME BOAS VINDAS.
    printf("\n\nBem-vindo ao Cloud-Sweet!\n\n");
    printf("Temos o melhor algodão doce da região!\n");
    printf("Venha experimentar um pedacinho das nuvens!\n\n");
    
    do
    {
        // ESCOLHA SEUS PRODUTOS E CARDÁPIO DIGITAL.
        
        if(totalItens > 0)
        {
            printf("--- SEU CARRINHO: %d %s | Total parcial: R$ %.2f ---\n\n",
                 totalItens,
                 (totalItens > 1 ? "nuvens" : "nuvem"),    
                 totalConta);
            printf("Quais itens deseja acrescentar ao carrinho?\n");
        }

        printf("Cardápio Digital\n\n 1 - Céu Azul : R$ 10.00\n 2 - Flocos (com Oreo) : R$ 12,00\n 3 - Brigadeiro com nutella : R$ 15.00\n 4 - Tradicional (TheCloud) : R$ 10.00\n 0 - Finalizar seu Carrinho!\n\n");

        //SOLICITA AO CLIENTE O CÓDIGO DO ITEM.
        printf("Digite o código do item que deseja adicionar ao carrinho.\n");
        scanf("%d" , &itens);

        switch (itens)
        {
            case 1:
                printf("Item selecionado: Algodão Doce Céu Azul. Quantas unidades você deseja adicionar ao carrinho?\n");
                scanf("%d" , &qtd);

                totalConta += qtd * 10.00;
                totalItens += qtd;
                qtdCeu += qtd;
                if (qtd > 1)
                {
                    printf("Você adicionou %d nuvens ao carrinho, parabéns!" , qtd);
                } else {
                    printf("Você adicionou %d nuvem ao carrinho, parabéns!" , qtd);
                }
            break;

            case 2: 
                printf("Item selecionado: Algodão Doce Flocos com Oreo. Quantas unidades você deseja adicionar ao carrinho?\n");
                scanf("%d" , &qtd);

                totalConta += qtd * 12.00;
                totalItens += qtd;
                qtdFlocos += qtd;
                if (qtd > 1)
                {
                    printf("Você adicionou %d nuvens ao carrinho, parabéns!" , qtd);
                } else {
                    printf("Você adicionou %d nuvem ao carrinho, parabéns!" , qtd);
                }
            break;

            case 3: 
                printf("Item selecionado: Algodão Doce Brigadeiro com Nutella. Quantas unidades você deseja adicionar ao carrinho?\n");
                scanf("%d" , &qtd);

                totalConta += qtd * 15.00;
                totalItens += qtd;
                qtdBrig += qtd;
                if (qtd > 1)
                {
                    printf("Você adicionou %d nuvens ao carrinho, parabéns!" , qtd);
                } else {
                    printf("Você adicionou %d nuvem ao carrinho, parabéns!" , qtd);
                }
            break;

            case 4: 
                printf("Item selecionado: Algodão Doce Tradicional (TheCloud). Quantas unidades você deseja adicionar ao carrinho?\n");
                scanf("%d" , &qtd);

                totalConta += qtd * 10.00;
                totalItens += qtd;
                qtdTrad += qtd;

                if (qtd > 1)
                {
                    printf("Você adicionou %d nuvens ao carrinho, parabéns!" , qtd);
                } else {
                    printf("Você adicionou %d nuvem ao carrinho, parabéns!" , qtd);
                }
            break;

            case 0:
            break;
            
            default:
                printf("Código do item inválido, por gentileza confirme o código no cardápio digital.\n");
                break;
        } 
    }
    while (itens != 0);
    
    if(itens == 0)
    {
        printf("Você optou por finalizar o seu carrinho!\n");
    }
    if (qtdCeu > 0) {
        printf("- %dx Algodão Doce Céu Azul: R$ %.2f\n", qtdCeu, qtdCeu * 10.00);
    }
    if (qtdFlocos > 0) {
        printf("- %dx Algodão Doce Flocos com Oreo: R$ %.2f\n", qtdFlocos, qtdFlocos * 12.00);
    }
    if (qtdBrig > 0) {
        printf("- %dx Algodão Doce Brigadeiro com Nutella: R$ %.2f\n", qtdBrig, qtdBrig * 15.00);
    }
    if (qtdTrad > 0) {
        printf("- %dx Algodão Doce Tradicional (TheCloud): R$ %.2f\n", qtdTrad, qtdTrad * 10.00);
    }

   
if (totalItens > 0) {
    printf("\nTotal a pagar: R$ %.2f\n\n", totalConta);
    printf("Digite o código da forma de pagamento que deseja realizar:\n");
    printf("1 - PIX (5%% de desconto)\n");
    printf("2 - Cartão de Crédito\n");
    scanf("%d", &pagamento);

    switch(pagamento) {
        case 1:
            totalComDesconto = totalConta * 0.95; // Aplica 5% de desconto
            printf("\nVocê selecionou PIX!\n");
            printf("Desconto aplicado: R$ %.2f\n", totalConta - totalComDesconto);
            printf("Total final a pagar: R$ %.2f\n", totalComDesconto);
            break;

        case 2:
            printf("\nVocê selecionou Cartão de Crédito. Escolha uma das opções abaixo:\n");
            printf("1 - À vista no total de R$ %.2f sem juros.\n", totalConta);
            printf("2 - Parcelado em até 3x sem juros.\n");
            scanf("%d", &parcelas);

            switch(parcelas) {
                case 1:
                    printf("\nPagamento à vista selecionado. Total: R$ %.2f\n", totalConta);
                    break;

                case 2:
                    printf("\nEm quantas vezes deseja parcelar? (Digite 2 ou 3): ");
                    scanf("%d", &qtdParcelas);

                    if (qtdParcelas == 2 || qtdParcelas == 3) {
                        printf("Pagamento aprovado: %dx de R$ %.2f sem juros (Total: R$ %.2f).\n", 
                               qtdParcelas, totalConta / qtdParcelas, totalConta);
                    } else {
                        printf("Quantidade de parcelas inválida! Permitido apenas 2x ou 3x.\n");
                    }
                    break;

                default:
                    printf("Modelo de pagamento inválido, selecione entre 1 - À vista e 2 - Parcelado.\n");
                    break;
            }
            break;

        default:
            printf("Método de pagamento inválido, por gentileza selecione entre as opções disponíveis.\n");
            break;
    }
} else {
    printf("\nCarrinho vazio. Obrigado pela visita!\n");
}

    return 0;
}