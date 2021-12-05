# Deadlock Train Project

Trabalho da disciplina _Sistemas Operacionais_ do Bacharelado em TI no IMD - UFRN.

## Objetivo
Desenvolver um sistema com controle de *regiões críticas* e prevenção de *Deadlocks* em C++ utilizando como exemplo o controle de tráfego de trens em uma malha ferroviária.
Neste proejeto, cada trem pode ser entendido como um "processo" e os trilho como "recursos" necessários para sua execução.

## Dependências
- Ambiente Linux
- Qt Creator v. 5

## Implementação

Cada Trem do projeto é executado por uma thread. 
As regiões críticas são representadas pelos trilhos, e o objetivo é permitir que cada trem execute seu trajeto eviitando colisões entre os trens.

Para lidar com a *condição de corrida*, cada trilho possui um Mutex, que é travado enquanto um trem o utiliza, e destravado quando o trem o deixa.

Para evitar *Deadlocks*, um trem só é capaz de realizar uma volta se conseguir, com sucesso, travar todos os trilhos necessários. 
Ou seja, antes de cada volta, o trem tentará travar todos os trilhos que necessita, de forma a garantir que *sua volta será concluída*, caso não consiga, o trem abdica
da volta e libera qualquer trilho que tenha ocasionalmente conseguido travar.
