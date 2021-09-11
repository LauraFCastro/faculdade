/*
Detalhamento da tarefa: A atividade envolve a construcao de um algoritmo de ordenacao que permita classificar 
elementos gerados de forma aleatoria em um vetor com 50.000 posicoes. Ao final o algoritmo deve apresentar o 
tempo de execucao para classificacao, em ordem crescente, dos elementos gerados de forma aleatoria. 
Tambem, repetir o algoritmo implementado para apresentar o tempo de execução para o mesmo tipo de classificacao 
com o  vetor ja ordenado.

Laura de Faria e Castro
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

FILE *gnuplot;

// Metodo para ordenacao de um vetor de tamanho N
void insertionSort(int vetor[], int N)
{
    int i, chave, j;
    for(i=1; i < N; i++){
        chave = vetor[i];
        j = i-1;

        while(j >= 0 && vetor[j] > chave){
            vetor[j+1] = vetor[j];
            j = j - 1;
        }
        vetor[j + 1] = chave;
    }
}

// Metodo para preenhcher um vetor de tamanho N
void fillVetor(int vetor[], int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        vetor[i] = rand() % 100;
    }
}

// Metodo para preencher e ordenar um vetor de tamanho N
void fillAndOrder(int vetor[], int N)
{
    fillVetor(vetor, N);
    insertionSort(vetor, N);
}

// Metodo para ordenar vetor aleatorio
void semOrdenar(int N)
{
    float tempoExecucao;
    int temp;

    int vet1[N];

    printf("%d\t\t", N);
    fprintf(gnuplot, "%d\t\t", N);

    clock_t tempoInicial;
    srand(time(NULL));

    fillVetor(vet1, N);

    /*-------------------*/
    tempoInicial = clock();

    insertionSort(vet1, N);

    tempoExecucao = clock() - tempoInicial;
    /*-------------------*/

    printf(" %f \n", tempoExecucao);
}

// Metodo para ordenar vetor ja ordenado
void jaOrdenado(int N)
{
    float tempoExecucao;
    int temp;

    int vet1[N];

    printf("%d\t\t", N);
    fprintf(gnuplot, "%d\t\t", N);

    clock_t tempoInicial;
    srand(time(NULL));

    fillAndOrder(vet1, N);

    /*-------------------*/
    tempoInicial = clock();

    insertionSort(vet1, N);

    tempoExecucao = clock() - tempoInicial;
    /*-------------------*/

    printf(" %f \n", tempoExecucao);
}


int main()
{
    system("cls");
    printf("\nPreviamente ordenado \nTamanho \t Tempo de Exec.\n");
    jaOrdenado(50000);

    printf("\nSem ordenacao previa \nTamanho \t Tempo de Exec.\n");
    semOrdenar(50000);

    return 0;
}
