# Especificação Formal de Software

Método de especificação formal  
Representar o conhecimento com base em notações e padronização  
Especificação Z = padronização  
Expressar conhecimento com base na logica por meio de notações  
Linguagem de especificação permite definir com rigor matematico (base na lógica) os problemas que para os quais se quer que o software responda e permite criar um software par a especificação que se quer;

Computabilidade: Habilidade de resolver problemas de forma efetiva (tudo que a gente quer resolver por meio de algoritmos)

Especificação formal permite ao projetista compreender melhor os requisitos do sistema. (precisa e não ambigua)  
Expressões não geram ambiguidade - formalizam informações (por meio de conectores, provas lógicas)

range = item de pedido (para emissão de nota fiscal)

3 frentes - testes, algoritmo + portugues

Domínio da aplicação - todas as entidades e objetos que permeiam o escopo/tema do software a ser construído, a serem modeladas, especificadas e entendidas para entender o software
Como delimitar o domínio de uma app: trduzo mini mundo em termos
Qubra cada sentença (frase) descobrindo substantivos e verbos (podem se repetir)

1. Listo substantivos (termos) no singular
2. Depois listo verbos que permitam conectar os substantivos
3. Por fim formulo as expressões, o que permite encontrar todos os objetos e como eles se relacionam - consigo delimitar o dominio

LER - Escopo de delimitação de domínio  
[Introdução a Ontologias e à Web Semântica](https://www.youtube.com/watch?v=K0TNLEU8qag)  
[OWL 2 Web Ontology Language](https://www.w3.org/2007/OWL/wiki/Syntax)

Objetivo é **reduzir as falhas**;  
Textos podem gerar ambiguidades;  
Mais caro refazer software do que fazer direito de primeira

## Conceitos introdutórios de Especificação Formal de Software

**1) O que é Especificação Formal de Software?**  
Etapa do desenvolvimento de software, onde é feita a definição dos requisitos, refinamento, síntese e prototipagem. Uma forma de representar o conhecimento com base em notações e padronizações, para que não sejam geradas ambiguidades.

**2) Descreva como a Especificação Formal de Software pode contribuir para a definição do domínio da aplicação.**  
Definindo as entidades do sistema, é possível delimitar o domínio. Primeiramente deve listar os substantivos no singular, em seguida listar os verbos que permitam conectar os substantivos e por fim formular as expressões que permitem encontrar todos os objetos e como eles se relacionam, delimitando o domínio.

**3) Quais as vantagens e desvantagens da Especificação Formal de Software?**  
*Vantagens*:

- Descobre ambiguidade, incompletude e inconsistência no software.
- Oferece software livre de defeitos.
- Cresce gradualmente em solução eficaz após cada iteração.
- Este modelo não envolve alta taxa de complexidade.
- A semântica da linguagem de especificação formal verifica a auto-consistência.

*Desvantagens*:

- Demorado e caro.
- Difícil usar esse modelo como mecanismo de comunicação para pessoas não técnicas.
- É necessário um treinamento extensivo, pois poucos desenvolvedores têm o conhecimento essencial para implementar esse modelo.

**4) De acordo com as definições tratadas até o momento, quais etapas do desenvolvimento de software poderiam utilizar a Especificação Formal de Software?**  
Os métodos formais são desenvolvidos com a finalidade de auxiliar em todas as etapas de elaboração de um software, desde a especificação e refinamento até a codificação e prototipagem.

**5) Quais linguagens são utilizadas na Especificação Formal de Software?**  
As linguagens utilizadas do tipo Orientadas ao Modelo, que são:

- *VDM* (The Vienna Development Method): Desenvolvida pela IBM em Viena , nos meados da década de 1970 , teve objetivo de ajudar o desenvolvimento de Sistemas de Informação. Atualmente esta linguagem encontra-se padronizada pelo ISO,como nome VDM-SL.
- *Z* (Zed): Esta linguagem foi estruturada como um conjunto de esquemas. O esquema é uma representação de estados que é usada para estruturar uma especificação formal. E nesse esquema, são introduzidas diversas variáveis e são especificadas todas as relações entre essas variáveis.

As linguagem do tipo axiomáticas são:

- *OBJ*: Pioneira nas linguagens de especificação, é vista como uma família contendo OBJ3, CafeOBJ e BOBJ. Utilizam conceitos de lógica e disponibilizam um poderoso método de especificação.
- *Anna* (Annotated Ada): Extensão da linguagem ADA, tendo, principalmente, suporte a grande diversidade de dados e tratamento de exceções. Se baseia na especificação “comentários formais” que podem ser Anotações ou Texto Ada (texto específico da linguagem). Um exemplo de anotações é a especificação de objetos.
