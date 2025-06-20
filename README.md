# 🧠 Sistema Inteligente de Agendamento de Reuniões

Este projeto tem como objetivo desenvolver um sistema simples e eficiente, em linguagem C, para auxiliar no agendamento de reuniões, considerando a disponibilidade dos participantes.

---

## 📋 Descrição do Projeto

Agendar uma reunião entre várias pessoas pode ser complicado, especialmente quando cada uma tem uma agenda diferente. Este sistema resolve esse problema, permitindo que:

- Participantes sejam cadastrados
- Horários possíveis sejam definidos
- Cada participante registre sua disponibilidade
- O sistema aponte os melhores horários (com maior número de participantes disponíveis)
- Um relatório completo seja exibido, com todas as informações processadas

---

## 🚀 Funcionalidades

✅ Cadastro de participantes (aceita nomes compostos)  
✅ Cadastro de horários possíveis (entre 8h e 18h, sem repetição)  
✅ Registro de disponibilidade de cada participante por horário  
✅ Processamento para identificar os melhores horários  
✅ Relatório completo com todos os horários e respectivos participantes disponíveis  
✅ Estrutura modular com funções específicas para cada etapa

---

## 📁 Estrutura do Projeto

```
.
├── src.c             # Código-fonte principal
├── Trabalho_final.pdf # Descrição oficial do trabalho
├── README.md         # Este arquivo
```

---

## 🛠️ Tecnologias Utilizadas

- Linguagem C
- Dev cpp IDE
- Terminal/Console para interação com o usuário

---

## 🧱 Estrutura de Dados

- `struct DadosReuniao`
  - `char pessoas[][TAM_NOME]` – vetor de nomes
  - `int horarios[]` – vetor de horários válidos
  - `int quantidade_pessoas` e `quantidade_horarios`
- `int disponibilidade[][MAX_HORARIOS]` – matriz de disponibilidade
- Vetor auxiliar para contagem de participantes por horário

---

## 👨‍💻 Exemplo de Uso

```
Informe quantas pessoas irão participar da reunião: 3
Informe o nome da pessoa 1: Ana Paula
Informe o nome da pessoa 2: João Silva
Informe o nome da pessoa 3: Carlos

Quantos horários deseja adicionar? 3
Digite horários entre 8 e 18 (0 encerra): 9
Digite horários entre 8 e 18 (0 encerra): 10
Digite horários entre 8 e 18 (0 encerra): 11

Registro de disponibilidade:
Ana Paula, está disponível às 9h? 1
Ana Paula, está disponível às 10h? 0
Ana Paula, está disponível às 11h? 1
...

Melhores horários (com 2 participantes):
- 9h
- 11h

Relatório completo:
Horário 9h – disponíveis: Ana Paula, João Silva
Horário 10h – disponíveis: Carlos
...
```

---

## 🎓 Projeto Acadêmico

Trabalho final da disciplina **Fundamentos de Algoritmos e Programação**  
Curso: Ciência da Computação / Sistemas de Informação  
Universidade: UNO - Universidade Comunitária da Região de Chapecó  
Professor: Wagner Titon

---

## 📄 Licença

Este projeto é de uso acadêmico e está disponível apenas para fins educacionais.
