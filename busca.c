#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//algoritmo de busca sequencial em vetores

int main()
{
    int vetor[15], i, busca;  //criação do vetor e variável para receber a busca do usuário
    
    srand(time(NULL)); //função 'srand' recebendo o parâmetro 'time' para que os valores "aleatórios" sejam baseados no tempo do computador e sempre se alterem
    
    for(i = 0; i < 15; i++){    //estrutura para gerar 15 valores distintos e inserir no vetor
        vetor[i] = rand() % 101;  //função 'rand' gerando os valores aleatórios até 100 (% == resto de divisão)
    }
    
    printf("Resultado do vetor: \n");
    
    for(i = 0; i < 15; i++){    //estrutura de repetição para escrever todos os números gerados para o vetor
        printf("[ %d ]", vetor[i]);
    }

    printf("\n \n Qual valor deseja buscar: ");
    scanf("%d", &busca); //exigindo para o usuário um valor a ser encontrado no vetor já gerado
    
    for(i = 0; i < 15; i++){    //estrutura de repetição que percorre o vetor procurando o valor inserido pelo usuário
        if(vetor[i] == busca){      //caso o valor seja encontrado, o mesmo será printado na tela juntamente com sua posição
            printf("\nO valor %d se encontra na posição %d do vetor!", busca, i);
        }
    }
    return 0;
}
