# Gerador de Números Pseudoaleatórios (RNG) Não Repetitivos

Este projeto consiste na implementação em Verilog de um Gerador de Números Pseudoaleatórios (PRNG). O sistema foi projetado para gerar números de 3 bits (faixa de 0 a 7) utilizando 4 sementes (seeds) distintas baseadas em tabelas de permutação.

A principal característica deste projeto é o mecanismo de detecção de duplicatas, que assegura que os números gerados não se repitam dentro de um ciclo de operação, garantindo a unicidade da saída até que a sequência seja reiniciada ou o buffer seja limpo.

## Características do Sistema

* **Largura de Dados:** 3 bits (gera valores inteiros de 0 a 7).
* **Múltiplas Sementes:** Conta com 4 seeds pré-definidas para variação da sequência.
* **Detecção de Duplicatas:** Módulo de hardware dedicado (`rng_hs_dup_detector`) que compara o valor atual com um histórico de valores gerados.
* **Interface de Handshake:** O sistema utiliza sinais de requisição e escrita para garantir que apenas números válidos e não repetidos sejam enviados para a saída.
* **Automação:** Scripts de compilação e simulação incluídos para facilitar o fluxo de desenvolvimento.

## Parâmetros de Configuração

O sistema utiliza um conjunto extenso de parâmetros para garantir que as larguras de barramento e profundidades de memória sejam calculadas automaticamente. Abaixo está a lista completa dos parâmetros presentes nos módulos.

| Parâmetro | Valor Padrão | Descrição |
| :--- | :--- | :--- |
| `DEPTH` | 72 | Profundidade base utilizada para cálculos de dimensão. |
| `T_DEPTH` | `DEPTH-1` | Profundidade real ajustada para indexação zero-based (71). |
| `WIDTH` | 3 | Largura do barramento do número gerado. Define o intervalo de 0 a 7. |
| `T_WIDTH` | `WIDTH-1` | Largura real do vetor de dados para declaração `[T_WIDTH:0]` (2). |
| `SEED_TOT_NUMB` | 12 | Total de números agrupados nas sementes/histórico. |
| `SD_T_TOT_NUMB` | `SEED_TOT_NUMB-1` | Total real para indexação de vetores de sementes (11). |
| `COUNT_WIDTH` | `$clog2(SEED_TOT_NUMB)` | Largura em bits necessária para o contador de ciclos (4 bits). |
| `T_COUNT_WID` | `COUNT_WIDTH-1` | Largura real do vetor do contador para declaração `[T_COUNT_WID:0]` (3). |

## Árvore da paste de Projeto

Abaixo está detalhada a organização dos diretórios e arquivos do repositório.

```text
.
├── doc
├── makefiles_and_scripts
│   ├── control_path.sh
│   ├── data_path_counter.sh
│   ├── data_path.sh
│   ├── fifo.sh
│   ├── hs.sh
│   ├── Makefile_control_path
│   ├── Makefile_data_path
│   ├── Makefile_data_path_counter
│   ├── Makefile_fifo
│   ├── Makefile_hs
│   ├── Makefile_rd
│   ├── Makefile_sel
│   ├── Makefile_top
│   ├── sel.sh
│   ├── top.sh
│   └── verilog.log
├── README.md
├── src
│   ├── rng_control_path.v
│   ├── rng_data_base.vh
│   ├── rng_data_path_counter.v
│   ├── rng_data_path.v
│   ├── rng_hs_dup_detector.v
│   ├── rng_selector.v
│   └── rng_top.v
├── testbenchs
│   ├── testbench_control_path.v
│   ├── testbench_data_path_counter.v
│   ├── testbench_data_path.v
│   ├── testbench_hs.v
│   ├── testbench_sel.sv
│   └── testbench.v
└── waveforms
    ├── control_path.vcd
    ├── data_path_counter.vcd
    ├── data_path.vcd
    ├── hs.vcd
    ├── sel.vcd
    └── top.vcd
```

## Estrutura do Projeto

| Arquivo | Tipo | Descrição Funcional |
| :--- | :--- | :--- |
| `rng_top.v` | Módulo Topo | Integra todos os sub-módulos, gerencia as interconexões entre controle, dados e detector de duplicatas, e instancia os parâmetros globais. |
| `rng_control_path.v` | Controle | Máquina de estados finitos (FSM) que gerencia os estados `IDLE` e `SEND`, controlando o fluxo de resposta às requisições. |
| `rng_data_path.v` | Caminho de Dados | Seleciona o valor numérico atual através de multiplexação baseada na `seed_sel_i` e no índice do contador. Inclui o arquivo de definições `rng_data_base.vh`. |
| `rng_data_path_counter.v` | Contador | Implementa um contador cíclico de 3 bits (0 a 7) que percorre as posições das tabelas de sementes para indexar o Data Path. |
| `rng_selector.v` | Seletor | Gera o sinal de seleção de *seed* (2 bits, 4 opções) de forma pseudoaleatória, utilizando um contador contínuo (*free-running*) ativado pelo clock. |
| `rng_hs_dup_detector.v` | Lógica/Memória | Contém a memória de histórico e a lógica de comparação. Rejeita números repetidos ativando `req_new_num_o` e armazena novos números válidos quando `wr_i` é acionado. |
| `rng_data_base.vh` | Header | Arquivo de cabeçalho que define as constantes das 4 sementes (`seed1` a `seed4`) e o mapeamento de suas posições para uso no Data Path. |


## Scripts e Automação (makefiles_and_scripts)

A pasta `makefiles_and_scripts` contém as ferramentas necessárias para compilar e simular o projeto.

| Arquivo | Função |
| :--- | :--- |
| `*.sh` | Scripts de shell (Bash) para automação da execução das simulações, compilação via Icarus Verilog e geração de ondas. |
| `Makefile_*` | Arquivos de configuração do *make* específicos para cada módulo, permitindo a execução modular de testes (ex: `make -f Makefile_hs`). |

## Simulação e Verificação

Os ambientes de teste estão localizados em `testbenchs` e os resultados das simulações (arquivos de onda) são gerados na pasta `waveforms`.

| Diretório | Conteúdo |
| :--- | :--- |
| `testbenchs/` | Contém os arquivos `.v` e `.sv` (SystemVerilog) que estimulam os módulos para verificação funcional. |
| `waveforms/` | Contém os arquivos `.vcd` (Value Change Dump) gerados após a execução dos scripts, visualizáveis em ferramentas como GTKWave. |

## Interface de Entradas e Saídas

Descrição dos sinais do módulo principal `rng_top`.

| Sinal | Direção | Largura | Descrição |
| :--- | :--- | :--- | :--- |
| `clk_i` | Entrada | 1 bit | Clock do sistema. |
| `rst_i` | Entrada | 1 bit | Reset do sistema (ativo baixo). |
| `start_i` | Entrada | 1 bit | Sinal utilizado pelo seletor para iniciar/alterar a base de tempo da semente. |
| `req_num_i` | Entrada | 1 bit | Sinal de requisição de um novo número aleatório. |
| `wr_i` | Entrada | 1 bit | Sinal de escrita/confirmação. Deve ser pulsado para confirmar que o número na saída foi lido e deve ser salvo no histórico de não-repetição. |
| `num_to_send_o` | Saída | 3 bits | O número pseudoaleatório válido gerado (`[T_WIDTH:0]`). |

## Funcionamento Detalhado

1.  **Reset:** Ao iniciar, o sistema deve ser resetado (`rst_i`). Isso limpa a memória do detector de duplicatas, reinicia os contadores e define o estado inicial da FSM.
2.  **Seleção de Seed:** O módulo `rng_selector` utiliza o clock para incrementar um contador interno. O momento da ativação define qual das 4 tabelas de permutação será usada para a geração atual.
3.  **Geração e Validação (Loop Interno):**
    * O `rng_data_path` fornece um número candidato baseado na seed e no contador sequencial.
    * O `rng_hs_dup_detector` verifica se este número existe na memória interna (`mem`).
    * **Se existir (Duplicata):** O detector ativa o sinal interno `req_new_num_o`. Isso força o sistema a descartar o número atual e buscar o próximo imediatamente na tabela.
    * **Se não existir (Único):** O número é disponibilizado em `num_to_send_o`.
4.  **Confirmação de Leitura:** O usuário/sistema externo deve enviar o sinal `wr_i` para confirmar o uso do número. Isso instrui o detector a armazenar o valor atual na memória de histórico, impedindo que ele seja gerado novamente até que o buffer seja limpo ou reiniciado.