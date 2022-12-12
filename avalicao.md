
# Identificação

* Nome: Jady Lima da Silva

* Matrícula: 20210054147
  
# Compilação  

* a descrição de como compilar e rodar o programa, incluindo um roteiro de entradas e comandos que destaquem as funcionalidades 

A execução é realizada seguindo os seguintes passos:
- No terminal executar o comando "make" 
- Ainda no terminal, após compilar o arquivo, executar "./bin/concessionaria" para iniciar o programa
- Após iniciar o programa insira os comandos de inserir uma nova concessionaria seguindo o exemplo abaixo:
  ```
  $ create-concessionaria <nome-concessionaria> <CNPJ> <estoque>
  $ create-concessionaria IMD_SA 11.111.111/0001-11 0
  ```
- Em seguida, insira os automoveis que podem ser carro, moto ou caminhão seguindo os exemplos abaixo
  - Para adicionar um novo carro
    ```
    $ add-car <nome-concessionaria> <marca> <preço> <chassi> <ano_de_fabricação> <tipo_de_motor>
    $ add-car IMD_SA Toyota 100000 9BRBLWHEXG0107721 2019 gasolina
    ```
  - Para adicionar um novo caminhão
    ```
    $ add-truck <nome-concessionaria> <marca> <preço> <chassi> <ano_de_fabricação> <tipo_de_carga>
    $ add-truck IMD_SA Scania 700000 7BRBLQHEXG0208811 2010 perigosa
    ```
  - Para adicionar uma nova moto
    ```
    $ add-bike <nome-concessionaria> <marca> <preço> <chassi> <ano_de_fabricação> <modelo>
    $ add-bike IMD_SA Honda 50000 9BRBLQHEXH4208811 2012 esportiva
    ```
    Se houver tentativa de inserir um veiculo em uma concessionaria não existente o programa irá retornar uma mensagem de erro.
    Se houver tentativa de inserir um veiculo com o mesmo chassi de um veiculo já existente o programa irá retornar uma mensagem de erro.

- Após inserir os veiculos nas concessionarias, é possivel realizar a remoção de veiculo apenas com o número do chassi, seguindo o exemplo abaixo:
  ```
  $ remove-vehicle <chassi>
  $ remove-vehicle 7BRBLQHEXG0208811
  ```
  O comando pode ser usado qualquer momento, mas se não houver nenhuma correspondência ao chassi ele irá retornar uma mensagem de erro.

- Para pesquisar se algum veiculo encontra-se registrado ou não nas concessionaria basta seguir o exemplo abaixo:
  ```
  $ search-vehicle <chassi>
  $ search-vehicle 7BRBLQHEXG0208811
  ```
- Também é possível listar a frota registrada em uma determinada concessionaria, basta saber o no qual a concessionaria está registrada, siga o exemplo:
  ```
  $ list-concessionaria <nome-concessionaria>
  $ list-concessionaria IMD_SA
  ```
- Para parar a execução do programa basta digitar a qualquer momento o comando:
  ```
  $ quit
  ```
  O programa será encerrado apresentando um relatório de todas as concessionarias registradas com os dados dela.

Junto aos arquivos há um arquivo de entrada onde encontra-se algumas possiveis entradas e uma possivel ordem para testagem das funcionalidade do programa. Para testar, você pode copiar as linhas de comando e colar no terminal ou executar:
   ```
  $ ./bin/concessionaria < entrada
  ```

# Limitações

* a descrição das limitações (caso existam) do programa e quaisquer dificuldades encontradas
- Práticas de bom uso de recursos computacionais, conseguir organizar o código sem repetir os mesmos comandos
- Função de adicionar, tive dificuldade para receber os valores para inserir nos vetores dos veiculos
- Função de atualizar os preços, apesar de compreender o que deveria ser feito, tive dificuldades na implementação pois o setPreco recebia o valor, mas o getPreco não atualizava

# Autoavaliação

- Modelagem e implementação das classes Concessionária, Veículo, Automóvel, Moto, Caminhão | **10 / 10**
  - 0: sem modelagem e implementação de classes
  - 5: apenas algumas classes modeladas e implementadas; ausência de herança
  - 10: modelagem e implementação completa com uso de herança
  
- Implementação e uso do comando `create-concessionaria` | **10 / 10**
  - 0: não cria concessionária via linha de comando 
  - 5: permite criar apenas uma concessionária
  - 10: permite criar mais do que uma concessionária
  
- Implementação e uso dos comandos para adicionar veículos `add-car/add-bike/add-truck` | **10 / 10**
  - 0: não permite criar veículos via linha de comando
  - 5: permite criar apenas um ou outro veículo em uma única concessionária
  - 10: permite criar qualquer tipo de veículo em qualquer uma das concessionárias disponíveis

- Não permitir adicionar um veículo que já tenha sido anteriormente adicionado | **10 / 10**
  - 0: não realiza o teste
  - 10: realiza o teste e indica o erro  

- Implementação e uso do comando para remover veículos `remove-vehicle` | **10 / 10**
  - 0: comando não implementado
  - 10: comando implementado e funcional

- Implementação e uso do comando para busca de veículos `search-vehicle` | **15 / 15 - Bônus: ...**
  - 0: não implementado
  - 15: implementado e funcional
  - bonus +10: implementado com estratégia de busca diferente da busca exaustiva
  - bonus +10: uso de métodos virtuais para impressão na tela
  - bonus +10: uso de sobrecarga de operadores para impressão na tela

- Implementação e uso do comando `list-concessionaria` | **10 / 10 - Bônus: ...**
  - 0: não implementado
  - 10: implementado e funcional   
  - bonus +10: uso de sobrecarga de operadores para impressão na tela

- Implementação e uso do comando `raise-price` | **10 / 10 - Bônus: ...**
  - 0: não implementado
  - 10: implementado e funcional 
  - bonus +10: implementado com uso de método virtual

- Implementação e uso do comando `save-concessionaria` e `load-concessionaria` | **... / 30**
  - 0: não implementado
  - 15: ambos os comandos implementados e funcionais
  
- Implementação eficiente através do uso de referencias e contêineres da STL | **5 / 10**
  - 0: não usou contêiner da STL nem fez uso eficiente dos recursos computacionais
  - 5: usou contêiner da STL mas não otimizou uso dos recursos computacionais
  - 10: usou contêiner da STL junto a algoritmos e práticas de bom uso de recursos computacionais
  
- Organização do código em src, include, data | **5 / 5**
  - 0: não organizou o código
  - 5: organizou o código 
  
- Documentação do código | **... / 5**
  - 0: não documentou o código
  - 5: documentou o código 
  
- Implementação e documentação de arquivos e procedimentos de compilação e teste | **5 / 15**
  - 0: não implementou arquivos e procedimentos de compilação e teste
  - 5: implementou alguns arquivos e procedimentos de compilação e teste (com alguma documentação) 
  - 15: Ampla implementação e documentação de arquivos e procedimentos de compilação e teste (com exemplos)
 
 # Total
 
 **100 / 150 ** pontos (sem bônus)
 
 **... / 200 ** pontos (com bônus)
