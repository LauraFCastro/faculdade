# Desenvolvimento Distribuído e Cooperativo

Notas em *Processo de Desenvolvimento de Software*

Software => Início - Meio - Fim  
Etapas: Especificação - Implementado - Testado  
Fases do Software: Uso - Manutenção - Legado - Morre  
Etapas: Analise - Implementação - Desenvolvimento - Teste

**Software distribuido:** dividido em varios componentes, interconectados, e esses componentes estão em lugares diferentes.  
**Desenvolvimento distribuido:** cada pessoa/equipe faz uma parte, elas estão distribuidas  
*Cooperativo:* pessoas/equipe colaboram

Gerenciamento de processos não é simples - principalmente considerando vários computadores (estudo em SO gerenciamento em um computador).  
Sincronização e Controle de concorrência: coordenar (gerenciar) uso de recursos

1. Desenvolvimento distribuido  
Ementa até "Tolerância a falhas"
2. Sistemas cooperativos  
Ementa em diante;  
Sistema que viabiliza a colaboração de pessoas, na natureza da tarefa (trabalho cooperativo;  
Não necessariamente precisa ter visão em tempo real

## Suportes para o trabalho coopeativo

*CSEW* - Trabalho Cooperativo Suportado pelo Computador  
(Computer Supported Cooperative Work)  
Estudo de conceitos que embasam o trabalho cooperativo, apoiado por sistemas computacionais, **incluindo aplicações sociais.**  
Multidisciplinar

*Groupware* - Software que apoia o trabalho em grupo - cooperação (em sua natureza - ex: Skype)  
Aglutinação de diferentes tecnologias em sistemas que objetivam apoiar a comunicação, cooperção, coordenação, negociação ou esolução de problemas.  
Exige maior preparação para ter mais aceitação das pessoas.
> Ferramentas de trabalho cooperativo devem prover formas de comunicação.

Trabalho Cooperativo X Trabalho Paralelo  
Trabalho paralelo não necessariamente precisa de cooperação (cada um faz uma parte individual no mesmo momento).

Trabalho Humano X Trabalho de Agente  
Agente não necessariamente é humano - máquina/serviço para evitar que humano tenha que fazer alguma coisa.  

Peopleware: caráter pessoal/individual  
Barreiras da tecnologia: contato humano, visual; diferença entre real e virtual (atitudes, forma da fala, compreensão das conversas)

Equipes multidisciplinares: permitem que sejam considerados diferentes pontos de vista, **para que se formule uma solução que seja aderente a todos;**

Sucesso da equipe depende não só do individual, mas também do nivel de cooperação.

*CSEW*:

- Eficiencia - Tempo, Custo e Qualidade
- Desafios: Jeitinho brasileiro, distribuição de tarefas, resistencia a mudança;

Sistema: conjunto de componentes (nós) interconectadors (ligações)

Falta de um relógio global  
A coisa mais difícil num sistema distribuido é configurar tempo!  
Sistema distribuido trabalha num nivel de concorrencia muito alto

Heterogeneidade - componentes tecnologicamente diferentes, desenolvidos em tecnologias diferentes que trabalham entre si

Deve ser aberto para que componentes sejam adicionados ou substituidos

Transparência: usuário não saber que está acessando um sisema distribuido
