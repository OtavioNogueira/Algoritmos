#include <stdio.h>
#include <stdlib.h>

//algoritmo de ordenação do tipo Bubble Sort

int main()
{
    int num[10];        //vetor para inserir os valores
    int aux, i, cont;   //variáveis de controle
    
    printf("Insira 10 números\n \n");
    
    for(i = 0; i < 10; i++){        //estrutura de repetição para coletar os valores do usuário e inserí-los no vetor
        printf("\nValor %d: ", i);  //printa a posição referente do vetor
        scanf("%d", &num[i]);
    }
  
    
    printf("\nNúmeros inseridos: \n");
    
    for(i = 0; i < 10; i++){        //estrutura de repetição para printar os valores na mesma ordem que foram inseridos
        printf("[ %d ]", num[i]);
    }
    printf("\n");
    
    for(cont = 1; cont < 10; cont++){   //estrutura que realiza a ordenação
        for(i = 0; i < 10 - 1; i++){    //durante a passagem pelo vetor, é reduzido 1 pois na primeira passagem já é ordenado o maior valor na posição final
            if(num[i] > num[i + 1]){    //caso o valor seja maior que seu consecutivo, realize a troca dos valores
                aux = num[i];
                num[i] = num[i + 1];    //substituição dos valores para posicionar de forma crescente
                num[i + 1] = aux;
            }
        }
    }
    
    printf("\nNúmeros inseridos, porém em ordem crescente: \n");
    
    for(i = 0; i < 10; i++){        //estrutura de repetição para escrever os valores, desta vez em ordem crescente
       printf("[ %d ]", num[i]);
    }
    return 0;
}
