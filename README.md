# Atividades Práticas: Ponteiros e Alocação Dinâmica em C

Este repositório foi criado para apresentar a resolução de uma série de atividades práticas e evolutivas sobre conceitos fundamentais da linguagem C, englobando desde a manipulação direta de memória com ponteiros até o gerenciamento dinâmico de estruturas.

O projeto está dividido em 5 arquivos independentes para demonstrar o progresso do aprendizado passo a passo.

---

## Evolução das Atividades

### 🔹 [Atividade 1](atvd1.c) - Fundamentos de Ponteiros e Modificação Direta
* **Objetivo:** Compreender a sintaxe básica de ponteiros e o operador de endereço (`&`).
* **Implementação:** Declaração de uma variável primitiva do tipo `float` para armazenar o preço de um produto e alteração direta do seu valor na memória através de um ponteiro (`*ptr`), aplicando um aumento de 10%.

### 🔹 [Atividade 2](atvd2.c) - Passagem por Referência
* **Objetivo:** Entender como funções podem modificar variáveis do escopo principal utilizando ponteiros.
* **Implementação:** Criação da função `aplicar_desconto` que recebe o endereço de memória de uma variável `float` e um percentual. A alteração passa a ser feita de forma encapsulada dentro da função.

### 🔹 [Atividade 3](atvd3.c) - Ponteiros para Estruturas (Structs)
* **Objetivo:** Manipular tipos de dados customizados e aprender a sintaxe do operador seta (`->`).
* **Implementação:** Agrupamento dos dados do produto em uma `struct Produto` (contendo ID e Preço). A função `aplicar_desconto` foi atualizada para receber o ponteiro da estrutura e modificar o campo interno diretamente.

### 🔹 [Atividade 4](atvd4.c) - Aritmética de Ponteiros em Arrays
* **Objetivo:** Manipular múltiplos elementos em memória sem utilizar a indexação tradicional por colchetes `[i]`.
* **Implementação:** Criação de uma listagem que percorre um array estático de estruturas utilizando estritamente aritmética de ponteiros, como `(ptr + i)->preco`.

### 🔹 [Atividade 5](atvd5.c) - Alocação Dinâmica de Memória (`malloc` e `free`) *(Integração Final)*
* **Objetivo:** Tornar o sistema flexível removendo limites rígidos de tamanho e gerenciando a memória manualmente.
* **Implementação:** O programa pergunta ao usuário quantos produtos deseja cadastrar, aloca o tamanho exato usando `malloc()`, realiza o cadastro utilizando aritmética de ponteiros, exibe a listagem e libera os recursos com `free()`.

---

## Como Compilar e Executar

Para rodar qualquer uma das atividades localmente, utilize um compilador GCC através do terminal:

1. **Clone o repositório:**
```bash
  git clone https://github.com/Yasmink-godinho/atividades-ponteiros-c.git
```


2. **Entre na pasta do projeto:**
```bash
cd atividades-ponteiros-c

```


3. **Compile a atividade desejada (Exemplo com a Atividade 1):**
```bash
gcc atvd1.c -o atvd1

```


4. **Execute o binário gerado:**
```bash
./atvd1

```

