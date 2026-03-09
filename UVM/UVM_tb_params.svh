//============================================================
// rng_tb_params.svh
// Parametros gerais da bancada
//============================================================
`ifndef RNG_TB_PARAMS_SVH
`define RNG_TB_PARAMS_SVH

localparam int RNG_WIDTH = 3;

// Interpretação do requisito de clock:
// "periodo de clk = 3/7/10" foi implementado como TOGGLE a cada 3/7/10 TU.
// => periodo completo = 2*CLK_TOGGLE_TU.
typedef int unsigned rng_round_t;

`endif
