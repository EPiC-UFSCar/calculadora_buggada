
# Calculadora Buggada

## Sobre

## Instruções para o curso de Git

### Objetivo

Esse repositório faz parte do desafio proposto como última etapa do curso de Git/GitHub ministrado pela EPiC - DC@UFSCar, São Carlos. A ideia é simular um *workflow* de trabalho parecido com uma situação real.

Normalmente, temos um projeto que deve ser desenvolvido por várias pessoas. É necessário uma forma de gerenciar versões do código, incluindo informações sobre quem foi o responsável por realizar determinada operação ou quais tarefas ainda precisam ser realizadas.

Executar o desafio proposto é equivalente a realizar os seguintes passos:

- Criar um projeto base inicial
- Listar as tarefas que devem ser realizadas
- Selecionar uma tarefa a ser desenvolvida
- Realizar as modificações necessárias para a tarefa
- Juntar as modificações realizadas com o código principal
- Marcar a tarefa como resolvida

### Etapas

- TODO: Fork ou git init + cria arquivos

- Baixar o repositório com clone
- Deletar pasta .git -> TODO pq?
- Criar repo no GitHub
- Dar add remote
- Dar first commit
- Criar Issues no GitHub
- Pegar uma issue
- Criar branch
- Resolver problema da issue
- Commit, push branch
- Pull request
- Merge
- Solve issue


### Como ler o código

O código é proposto implementa uma calculadora bem primitiva. Primeiramente, execute o código e faça alguns testes para entender como a calculadora funciona. Por enquanto, a calculadora fecha quando digitamos alguma operação cujo resultado é 41 (você já vai entender por que).

Todas as funções possuem alguma documentação, descrevendo o que ela faz.

Comece a ler o código a partir da função main(), que está no final do arquivo. Daí em diante, siga o fluxo de execução. Por exemplo, a função main() simplesmente chama a função responsável por simular uma calculadora, rodar\_calc(). Dentro dela, temos algumas funções auxiliares. Entenda primeiro como rodar\_calc() funciona, e depois, se necessário, veja o código das funções utilizadas dentro de rodar\_calc().

#### Como adicionar novas operações?

Veja:
- calcular()
- operacao_valida()
- a seção >>>>>Operações<<<<<<<
- [ ] instruções de como adicionar nova operação
		- imprimir_cabecalho()
		- validar_operacao()
		- calcular()

### Resultado esperado

- Um repositório na sua conta contendo um protótipo de calculadora, mas sem os bugs e fixme's desse projeto.
- Um entendimento de como e por que usar o git (aliado a outras ferramentas, como o GitHub)
- Vários problemas ao longo do caminho, como não saber qual comando usar, ou quando, comandos com erros, etc. Tudo isso também faz parte de um workflow real, e estamos aqui para ajudar nesse caminho

## Links úteis para aprendizado posterior

### Git
- [Cheat sheet](https://education.github.com/git-cheat-sheet-education.pdf)

### Markdown
- [Wikipedia](https://en.wikipedia.org/wiki/Markdown)
- [Tutorial](http://www.markdowntutorial.com/)
- [GitHub tutorial](https://guides.github.com/features/mastering-markdown/)


