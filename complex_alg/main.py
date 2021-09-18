from time import time
from shutil import rmtree
from os import system, makedirs
from random import randrange, choice

dir = "c:/gnuplot/teste"

def trocar(vetor, i, j):
    temp = vetor[j]
    vetor[j] = vetor[i]
    vetor[i] = temp


def ordenarBubble(vetor):
    n = len(vetor)
    for i in range(0,n):
        for j in range(i, n):
            if vetor[j] < vetor[i]:
                trocar(vetor, i, j)
    return vetor


def ordenarSelect(vetor):
    for i in range(0, len(vetor)-1):
        posMin = i
        for j in range(i+1, len(vetor)):
            if vetor[j] < vetor[posMin]:
                posMin = j
            if i!= posMin:
                trocar(vetor, i, j)
    return vetor


def intercalar(vet1, vet2):
    n = len(vet1)
    vet3 = []
    for i in range(0,2*n):
        if (i%2==0):
            if len(vet1)!=0:
                vet3.append(vet1[0])
                del vet1[0]
        else:
            if len(vet2)!=0:
                vet3.append(vet2[0])
                del vet2[0]
       
    return vet3


def criarVetor(n, algoritmo):
    vetor = []
    for j in range(0,n):
        vetor.append(randrange(0,100))
    
    if algoritmo == "bubble":
        vetor = ordenarBubble(vetor)
    if algoritmo == "select":
        vetor = ordenarSelect(vetor)
    
    return vetor


def programa(n, algoritmo):
    start = time()
    vet1 = criarVetor(n,algoritmo)
    vet2 = criarVetor(n,algoritmo)
    vet3 = intercalar(vet1, vet2)
    end = time()
    tempo = end-start
    return str(tempo)


def criarGnufile(n, algoritmos):
    gnuplot = open(dir+'/grafico.gnu', 'w')
    gnuplot.write('set title "Grafico para Tarefa 01"\n')
    gnuplot.write('set autoscale \nset xlabel "Numero de Entradas" \nset ylabel "Tempo de Execucao"\n')
    gnuplot.write('set grid\n')
    gnuplot.write('plot \\\n    ')
    for i in range(1,n+1):
        algoritmo = str(i)+ algoritmos[i-1]
        gnuplot.write('"{}/entrada{}.dat" title "Entrada{}" w linespoints,'.format(dir,algoritmo,algoritmo))
    gnuplot.write('\npause -1 "Pressione enter para sair e terminar as aplicacoes..."')
    gnuplot.close()


def criarEntradas(n):
    lista = ["bubble", "select"]
    algo = []
    for i in range(1,n+1):
        algoritmo = choice(lista)
        nom = str(i)+algoritmo
        arquivo = open(dir+'/entrada{}.dat'.format(nom), 'a')
        arquivo.write('#Tam      Tempo')
        arquivo.write('\n100      '+programa(100, algoritmo) )
        arquivo.write('\n1000      '+programa(1000, algoritmo) )
        arquivo.write('\n3000     '+programa(3000, algoritmo) )
        arquivo.write('\n5500     '+programa(5500, algoritmo) )
        arquivo.write('\n8000     '+programa(8000, algoritmo) )
        arquivo.close()
        algo.append(algoritmo)
    return algo


def gnuplot(n):
    rmtree(dir) 
    makedirs(dir)
    algoritmos = criarEntradas(n)
    criarGnufile(n, algoritmos)
    system("gnuplot {}/grafico.gnu".format(dir))


gnuplot(5)

# gnuplot c:/gnuplot/teste/grafico.gnu