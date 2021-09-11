// -------------------------------------------------------------------------------------------------------
// Este programa em C executa o algortimo BubbleSort para ordenar dados em um array com os respectivos
// tamanhos de entrada: 10, 50, 100, 500, 1000, 2000, 5000, 10000. Ao final da execução de cada tipo de
// ordenação, o programa calcula o tempo de execução e faz a chamada ao um programa escrito em GnuPlot.
//
// Autor		: Evaldo de Oliveira
// Ano		    : 2019
// Semestre	    : 1
// Disciplina   : Análise e Complexidade de Algortimos
//
// -------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

FILE *gnuplot;

void bolha(int a[], int N)
{
  int i, j, temp;
  for (i=1; i <= N; i++){
    for (j = 1; j <= N; j++){
      if (a[j-1] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

}

void processa( int t, char tipo_ordenacao[])
{

  int a[t];
  float tempoExecucao;
  int i, j, temp;

  printf("%d\t\t", t);
  fprintf( gnuplot, "%d\t\t", t);

  clock_t tempoInicial;
  srand(time(NULL));

  switch (tipo_ordenacao[0])
  {
      case 'R':
          for (i=1; i <= t; i++)
            {
              a[i]= rand() % 100;
            }
         break;
      case 'O':
          for (i=1; i <= t; i++)
            {
              a[i]= i;
            }
          break;
       case 'I':
          for (i=1; i <= t; i++)
            {
              a[i]= i;
            }
          //Inverter
          for (i=1; i<=t; i++){
            for (j = 1; j <= t; j++){
              if (a[j-1] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
              }
            }
          }
          break;
        case 'P':
          for (i=1; i <= t; i++)
            {
              a[i]= i;
            }
            //Inverter Parcialmente
            for (i=1; i <= t/2; i++){
                for (j = 1; j <=t/2 ; j++){
                  if (a[j-1] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                  }
                }
              }
          break;
        case 'V':
          for (i=1; i <= t; i++)
            {
              a[i]= i;
            }
          //Ordenar
          for (i=1; i <= t; i++){
                for (j = 1; j <= t; j++){
                  if (a[j-1] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                  }
                }
              }
          //Inverter Parcialmente Ordenado
          for (i=1; i<= t/2; i++){
            for (j = 1; j <= t/2; j++){
              if (a[j-1] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
              }
            }
          }
          break;
  }
  /*-------------------*/
  tempoInicial=clock();
  //Sleep(200);
  bolha( a, t - 1);
  tempoExecucao = clock()-tempoInicial;
  /*-------------------*/
  fprintf( gnuplot," %f \n", tempoExecucao );
  printf(" %f \n", tempoExecucao );

}

int main()
{
  system("cls");

  gnuplot = fopen("C:/gnuplot/dados_gnuplot/bubb-rnd.dat", "w");  //variavel
  printf("Randomicos\nTamanho \t Tempo de Exec.\n");
  fprintf(gnuplot, "#Randomicos\n#Tamanho \t Tempo\n");
  processa (10, "R");
  processa (50, "R");
  processa (100, "R");
  processa (500, "R");
  processa (1000, "R");
  processa (2000, "R");
  processa (5000, "R");
  processa (10000, "R");
  fclose(gnuplot);

  gnuplot = fopen("C:/gnuplot/dados_gnuplot/bubb-ord.dat", "w");
  printf("\nOrdenados\nTamanho \t Tempo de Exec.\n");
  fprintf(gnuplot, "#Ordenados\n#Tamanho \t Tempo\n");
  processa (10, "O");
  processa (50, "O");
  processa (100, "O");
  processa (500, "O");
  processa (1000, "O");
  processa (2000, "O");
  processa (5000, "O");
  processa (10000, "O");
  fclose(gnuplot);

  gnuplot = fopen("C:/gnuplot/dados_gnuplot/bubb-inv.dat", "w");
  printf("\nOrdenados Inversamente\nTamanho \t Tempo de Exec.\n");
  fprintf(gnuplot, "#Ordenados Inversamente\n#Tamanho \t Tempo\n");
  processa (10, "I");
  processa (50, "I");
  processa (100, "I");
  processa (500, "I");
  processa (1000, "I");
  processa (2000, "I");
  processa (5000, "I");
  processa (10000, "I");
  fclose(gnuplot);

  gnuplot = fopen("C:/gnuplot/dados_gnuplot/bubb-prc.dat", "w");
  printf("\nParcialmente Ordenados\nTamanho \t Tempo de Exec.\n");
  fprintf(gnuplot, "#Parcialmente Ordenados\n#Tamanho \t Tempo\n");
  processa (10, "P");
  processa (50, "P");
  processa (100, "P");
  processa (500, "P");
  processa (1000, "P");
  processa (2000, "P");
  processa (5000, "P");
  processa (10000, "P");
  fclose(gnuplot);

  gnuplot = fopen("C:/gnuplot/dados_gnuplot/bubb-piv.dat", "w");
  printf("\nParcialmente Inver. Ordenados\nTamanho \t Tempo de Exec.\n");
  fprintf(gnuplot, "#Parcialmente Inver. Ordenados\n#Tamanho \t Tempo\n");
  processa (10, "V");
  processa (50, "V");
  processa (100, "V");
  processa (500, "V");
  processa (1000, "V");
  processa (2000, "V");
  processa (5000, "V");
  processa (10000, "V");
  fclose(gnuplot);

  system("gnuplot c:/gnuplot/dados_gnuplot/plota.gnu");

  return 0;

}
