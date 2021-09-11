# -*- coding: utf-8 -*-
"""
@author: Laura
"""

import numpy as np 
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans

#LENDO O DATASET
"""
A leitura dos dados e feita a partir da biblioteca Pandas e os dados estao 
organizados no formato csv (comma-separated values) apesar da extensao ‘.data’
Chamaremos o dataset completo de dataset. Os atributos têm seus nomes indicados
nos dados, utilizaremos o array ‘headers’ para nomea-las de acordo com a 
documentacao do conjunto de dados.
"""

headers = ['sepal length', 'sepal width', 'petal length', 'petal width', 'class']
dataset = pd.read_csv("./iris.data", encoding = "ISO-8859-1", decimal=",", header=None, names=headers)

"""
A variavel ‘dataset’ recebe os dados lidos, ‘header=None’ indica que os dados
no têm cabecalho e ‘names=headers’ faz com que os cabecalhos deste dataset
sejam os definidos na variavel ‘headers’
"""

#PRE PROCESSAMENTO DOS DADOS
"""
Para garantirmos dados numericos, vamos garantir que as colunas sejam do tipo float:
"""
for col in  dataset.columns[0:4]:
    dataset[col] = dataset[col].astype(float)
#Podemos confirmar os tipos de cada coluna do dataset com o ‘dtypes’
dataset.dtypes

#Agora deve ser realizada a divisao dos dados entre variaveis dependentes (X) e independente (y)
X = dataset.iloc[:, 0:4]
y = dataset.iloc[:, 4]


kmeans = KMeans(n_clusters=3, random_state=0).fit(X)
X_clustered = kmeans.fit_predict(X)