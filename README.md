🎲 Jogo de Adivinhação de Dado em C

Este projeto é um jogo simples de adivinhação desenvolvido em linguagem C, com o objetivo de praticar lógica de programação, geração de números aleatórios e validação robusta de entrada do usuário.

O programa roda no terminal e simula o lançamento de um dado de 6 faces. O jogador deve tentar adivinhar o número sorteado, com tratamento adequado para entradas inválidas.

✔️ Funcionalidades

Geração de número aleatório

Utiliza rand() com seed baseada no tempo (srand(time(NULL)))

Número entre 1 e 6 (simulação de um dado real)

Entrada do usuário com validação rigorosa

Aceita apenas números inteiros

Restringe valores ao intervalo válido (1 a 6)

Rejeita letras, palavras ou números fora do intervalo

Limpeza de buffer

Evita loops infinitos causados por entradas inválidas

Garante estabilidade da leitura com scanf

Resultado imediato

Informa se o jogador acertou ou errou

Revela o número correto em caso de erro

✔️ Tecnologias utilizadas

Linguagem C

Bibliotecas padrão:

stdio.h

stdlib.h

time.h

✔️ Estrutura do código

Inicialização do gerador de números aleatórios

Sorteio do número do dado

Loop de entrada com validação:

Verificação de tipo

Verificação de intervalo

Limpeza obrigatória do buffer

Comparação do palpite com o valor sorteado

Exibição do resultado final

✔️ Como executar

Compile o código:

gcc dado.c -o dado


Execute:

./dado

✔️ Objetivo do projeto

Este projeto foi criado para praticar:

Uso de números aleatórios em C

Estruturas de repetição (while)

Validação de entrada do usuário

Limpeza de buffer do stdin

Controle básico de fluxo

✔️ Status do projeto

📌 Versão inicial concluída
Possíveis melhorias futuras:

Sistema de tentativas

Pontuação

Loop para jogar novamente

Separação em funções
