#include <stdio.h>
#include <windows.h>

int main(){
    // IDIOMA DO SISTEMA EM UTF-8.
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //VARIÁVEIS.
    int itens = 0, qtd = 0, totalItens = 0, qtdCeu = 0, qtdFlocos = 0, qtdBrig = 0, qtdTrad = 0;
    float totalConta = 0.0;

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

        

    return 0;
}