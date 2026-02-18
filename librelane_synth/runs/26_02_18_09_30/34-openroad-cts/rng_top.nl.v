module rng_top (clk_i,
    req_num_i,
    rst_i,
    wr_i,
    num_to_send_o);
 input clk_i;
 input req_num_i;
 input rst_i;
 input wr_i;
 output [2:0] num_to_send_o;

 wire _000_;
 wire _001_;
 wire _002_;
 wire _003_;
 wire _004_;
 wire _005_;
 wire _006_;
 wire _007_;
 wire _008_;
 wire _009_;
 wire _010_;
 wire _011_;
 wire _012_;
 wire _013_;
 wire _014_;
 wire _015_;
 wire _016_;
 wire _017_;
 wire _018_;
 wire _019_;
 wire _020_;
 wire _021_;
 wire _022_;
 wire _023_;
 wire _024_;
 wire _025_;
 wire _026_;
 wire _027_;
 wire _028_;
 wire _029_;
 wire _030_;
 wire _031_;
 wire _032_;
 wire _033_;
 wire _034_;
 wire _035_;
 wire _036_;
 wire _037_;
 wire _038_;
 wire _039_;
 wire _040_;
 wire _041_;
 wire _042_;
 wire _043_;
 wire _044_;
 wire _045_;
 wire _046_;
 wire _047_;
 wire _048_;
 wire _049_;
 wire _050_;
 wire _051_;
 wire _052_;
 wire _053_;
 wire _054_;
 wire _055_;
 wire _056_;
 wire _057_;
 wire _058_;
 wire _059_;
 wire _060_;
 wire _061_;
 wire _062_;
 wire _063_;
 wire _064_;
 wire _065_;
 wire _066_;
 wire _067_;
 wire _068_;
 wire _069_;
 wire _070_;
 wire _071_;
 wire _072_;
 wire _073_;
 wire _074_;
 wire _075_;
 wire _076_;
 wire _077_;
 wire _078_;
 wire _079_;
 wire _080_;
 wire _081_;
 wire _082_;
 wire _083_;
 wire _084_;
 wire _085_;
 wire _086_;
 wire _087_;
 wire _088_;
 wire _089_;
 wire _090_;
 wire _091_;
 wire _092_;
 wire _093_;
 wire _094_;
 wire _095_;
 wire _096_;
 wire _097_;
 wire _098_;
 wire _099_;
 wire _100_;
 wire _101_;
 wire _102_;
 wire _103_;
 wire _104_;
 wire _105_;
 wire _106_;
 wire _107_;
 wire _108_;
 wire _109_;
 wire _110_;
 wire _111_;
 wire _112_;
 wire \num_i_bar[0] ;
 wire \num_i_bar[1] ;
 wire \num_i_bar[2] ;
 wire req_num_again;
 wire \rng_dp.inst.next_num_o[0] ;
 wire \rng_dp.inst.next_num_o[1] ;
 wire \rng_dp.inst.next_num_o[2] ;
 wire \rng_dp.seed_sel_i[0] ;
 wire \rng_dp.seed_sel_i[1] ;
 wire \rng_rd.mem[1][0] ;
 wire \rng_rd.mem[1][1] ;
 wire \rng_rd.mem[1][2] ;
 wire \rng_rd.mem[2][0] ;
 wire \rng_rd.mem[2][1] ;
 wire \rng_rd.mem[2][2] ;
 wire \rng_rd.mem[3][0] ;
 wire \rng_rd.mem[3][1] ;
 wire \rng_rd.mem[3][2] ;
 wire \rng_rd.mem[4][0] ;
 wire \rng_rd.mem[4][1] ;
 wire \rng_rd.mem[4][2] ;
 wire \rng_rd.mem[5][0] ;
 wire \rng_rd.mem[5][1] ;
 wire \rng_rd.mem[5][2] ;
 wire \rng_rd.mem[6][0] ;
 wire \rng_rd.mem[6][1] ;
 wire \rng_rd.mem[6][2] ;
 wire \rng_rd.mem[7][0] ;
 wire \rng_rd.mem[7][1] ;
 wire \rng_rd.mem[7][2] ;
 wire \rng_rd.vld[0] ;
 wire \rng_rd.vld[1] ;
 wire \rng_rd.vld[2] ;
 wire \rng_rd.vld[3] ;
 wire \rng_rd.vld[4] ;
 wire \rng_rd.vld[5] ;
 wire \rng_rd.vld[6] ;
 wire \rng_rd.vld[7] ;
 wire \rng_rd.wr_ff1 ;
 wire \rng_rd.wr_ff2 ;
 wire \rng_rd.wr_ff2_d ;
 wire \rng_rd.wr_pulse ;
 wire net1;
 wire net2;
 wire net3;
 wire net4;
 wire net5;
 wire net6;
 wire net7;
 wire net8;
 wire net9;
 wire net10;
 wire net11;
 wire net12;
 wire net13;
 wire net14;
 wire net15;
 wire net16;
 wire net17;
 wire net18;
 wire net19;
 wire clknet_0_clk_i;
 wire clknet_2_0__leaf_clk_i;
 wire clknet_2_1__leaf_clk_i;
 wire clknet_2_2__leaf_clk_i;
 wire clknet_2_3__leaf_clk_i;

 sky130_fd_sc_hd__inv_2 _113_ (.A(\rng_dp.inst.next_num_o[2] ),
    .Y(_102_));
 sky130_fd_sc_hd__inv_2 _114_ (.A(\rng_dp.inst.next_num_o[0] ),
    .Y(_103_));
 sky130_fd_sc_hd__inv_2 _115_ (.A(\rng_dp.seed_sel_i[0] ),
    .Y(_001_));
 sky130_fd_sc_hd__inv_2 _116_ (.A(\num_i_bar[0] ),
    .Y(_104_));
 sky130_fd_sc_hd__inv_2 _117_ (.A(\num_i_bar[1] ),
    .Y(_105_));
 sky130_fd_sc_hd__inv_2 _118_ (.A(\rng_rd.vld[0] ),
    .Y(_106_));
 sky130_fd_sc_hd__or2_2 _119_ (.A(net1),
    .B(req_num_again),
    .X(_107_));
 sky130_fd_sc_hd__inv_2 _120_ (.A(_107_),
    .Y(_108_));
 sky130_fd_sc_hd__xnor2_1 _121_ (.A(net13),
    .B(\rng_rd.mem[4][2] ),
    .Y(_109_));
 sky130_fd_sc_hd__a2bb2o_1 _122_ (.A1_N(net11),
    .A2_N(\rng_rd.mem[4][0] ),
    .B1(\rng_rd.mem[4][1] ),
    .B2(_105_),
    .X(_110_));
 sky130_fd_sc_hd__o211ai_1 _123_ (.A1(_105_),
    .A2(\rng_rd.mem[4][1] ),
    .B1(\rng_rd.vld[4] ),
    .C1(_109_),
    .Y(_111_));
 sky130_fd_sc_hd__a211o_1 _124_ (.A1(net11),
    .A2(\rng_rd.mem[4][0] ),
    .B1(_110_),
    .C1(_111_),
    .X(_112_));
 sky130_fd_sc_hd__xnor2_1 _125_ (.A(net13),
    .B(\rng_rd.mem[2][2] ),
    .Y(_041_));
 sky130_fd_sc_hd__a2bb2o_1 _126_ (.A1_N(net11),
    .A2_N(\rng_rd.mem[2][0] ),
    .B1(\rng_rd.mem[2][1] ),
    .B2(_105_),
    .X(_042_));
 sky130_fd_sc_hd__o211ai_1 _127_ (.A1(_105_),
    .A2(\rng_rd.mem[2][1] ),
    .B1(\rng_rd.vld[2] ),
    .C1(_041_),
    .Y(_043_));
 sky130_fd_sc_hd__a211o_1 _128_ (.A1(net11),
    .A2(\rng_rd.mem[2][0] ),
    .B1(_042_),
    .C1(_043_),
    .X(_044_));
 sky130_fd_sc_hd__xor2_1 _129_ (.A(net13),
    .B(\rng_rd.mem[5][2] ),
    .X(_045_));
 sky130_fd_sc_hd__xnor2_1 _130_ (.A(\num_i_bar[1] ),
    .B(\rng_rd.mem[5][1] ),
    .Y(_046_));
 sky130_fd_sc_hd__o211ai_1 _131_ (.A1(net11),
    .A2(\rng_rd.mem[5][0] ),
    .B1(\rng_rd.vld[5] ),
    .C1(_046_),
    .Y(_047_));
 sky130_fd_sc_hd__a211o_1 _132_ (.A1(net11),
    .A2(\rng_rd.mem[5][0] ),
    .B1(_045_),
    .C1(_047_),
    .X(_048_));
 sky130_fd_sc_hd__xor2_1 _133_ (.A(net13),
    .B(\rng_rd.mem[3][2] ),
    .X(_049_));
 sky130_fd_sc_hd__xnor2_1 _134_ (.A(\num_i_bar[1] ),
    .B(\rng_rd.mem[3][1] ),
    .Y(_050_));
 sky130_fd_sc_hd__o211ai_1 _135_ (.A1(net12),
    .A2(\rng_rd.mem[3][0] ),
    .B1(\rng_rd.vld[3] ),
    .C1(_050_),
    .Y(_051_));
 sky130_fd_sc_hd__a211o_1 _136_ (.A1(net12),
    .A2(\rng_rd.mem[3][0] ),
    .B1(_049_),
    .C1(_051_),
    .X(_052_));
 sky130_fd_sc_hd__xnor2_1 _137_ (.A(net13),
    .B(\rng_rd.mem[6][2] ),
    .Y(_053_));
 sky130_fd_sc_hd__a2bb2o_1 _138_ (.A1_N(net12),
    .A2_N(\rng_rd.mem[6][0] ),
    .B1(\rng_rd.mem[6][1] ),
    .B2(_105_),
    .X(_054_));
 sky130_fd_sc_hd__o211ai_1 _139_ (.A1(_105_),
    .A2(\rng_rd.mem[6][1] ),
    .B1(\rng_rd.vld[6] ),
    .C1(_053_),
    .Y(_055_));
 sky130_fd_sc_hd__a211o_1 _140_ (.A1(net12),
    .A2(\rng_rd.mem[6][0] ),
    .B1(_054_),
    .C1(_055_),
    .X(_056_));
 sky130_fd_sc_hd__nand2_1 _141_ (.A(net6),
    .B(net13),
    .Y(_057_));
 sky130_fd_sc_hd__or2_1 _142_ (.A(net6),
    .B(net13),
    .X(_058_));
 sky130_fd_sc_hd__o22ai_1 _143_ (.A1(net4),
    .A2(net11),
    .B1(net5),
    .B2(_105_),
    .Y(_059_));
 sky130_fd_sc_hd__a221o_1 _144_ (.A1(net5),
    .A2(_105_),
    .B1(_057_),
    .B2(_058_),
    .C1(_106_),
    .X(_060_));
 sky130_fd_sc_hd__a211o_1 _145_ (.A1(net4),
    .A2(net11),
    .B1(_059_),
    .C1(_060_),
    .X(_061_));
 sky130_fd_sc_hd__xor2_1 _146_ (.A(net13),
    .B(\rng_rd.mem[7][2] ),
    .X(_062_));
 sky130_fd_sc_hd__xnor2_1 _147_ (.A(\num_i_bar[1] ),
    .B(\rng_rd.mem[7][1] ),
    .Y(_063_));
 sky130_fd_sc_hd__o211ai_1 _148_ (.A1(net12),
    .A2(\rng_rd.mem[7][0] ),
    .B1(\rng_rd.vld[7] ),
    .C1(_063_),
    .Y(_064_));
 sky130_fd_sc_hd__a211o_1 _149_ (.A1(net12),
    .A2(\rng_rd.mem[7][0] ),
    .B1(_062_),
    .C1(_064_),
    .X(_065_));
 sky130_fd_sc_hd__xor2_1 _150_ (.A(net13),
    .B(\rng_rd.mem[1][2] ),
    .X(_066_));
 sky130_fd_sc_hd__xnor2_1 _151_ (.A(\num_i_bar[1] ),
    .B(\rng_rd.mem[1][1] ),
    .Y(_067_));
 sky130_fd_sc_hd__o211ai_1 _152_ (.A1(net11),
    .A2(\rng_rd.mem[1][0] ),
    .B1(\rng_rd.vld[1] ),
    .C1(_067_),
    .Y(_068_));
 sky130_fd_sc_hd__a211o_1 _153_ (.A1(net11),
    .A2(\rng_rd.mem[1][0] ),
    .B1(_066_),
    .C1(_068_),
    .X(_069_));
 sky130_fd_sc_hd__and4_1 _154_ (.A(_044_),
    .B(_048_),
    .C(_056_),
    .D(_069_),
    .X(_070_));
 sky130_fd_sc_hd__and4_1 _155_ (.A(_112_),
    .B(_052_),
    .C(_061_),
    .D(_065_),
    .X(_071_));
 sky130_fd_sc_hd__a21oi_1 _156_ (.A1(_070_),
    .A2(_071_),
    .B1(_108_),
    .Y(req_num_again));
 sky130_fd_sc_hd__and2b_1 _157_ (.A_N(\rng_rd.wr_ff2_d ),
    .B(\rng_rd.wr_ff2 ),
    .X(_000_));
 sky130_fd_sc_hd__xor2_1 _158_ (.A(\rng_dp.seed_sel_i[1] ),
    .B(\rng_dp.seed_sel_i[0] ),
    .X(_002_));
 sky130_fd_sc_hd__and3_1 _159_ (.A(\rng_rd.wr_pulse ),
    .B(_070_),
    .C(_071_),
    .X(_072_));
 sky130_fd_sc_hd__mux2_1 _160_ (.A0(\rng_rd.mem[7][0] ),
    .A1(\rng_rd.mem[6][0] ),
    .S(net9),
    .X(_003_));
 sky130_fd_sc_hd__mux2_1 _161_ (.A0(\rng_rd.mem[7][1] ),
    .A1(\rng_rd.mem[6][1] ),
    .S(net9),
    .X(_004_));
 sky130_fd_sc_hd__mux2_1 _162_ (.A0(\rng_rd.mem[7][2] ),
    .A1(\rng_rd.mem[6][2] ),
    .S(net10),
    .X(_005_));
 sky130_fd_sc_hd__nor2_1 _163_ (.A(_103_),
    .B(\rng_dp.inst.next_num_o[1] ),
    .Y(_073_));
 sky130_fd_sc_hd__a211o_1 _164_ (.A1(\rng_dp.inst.next_num_o[2] ),
    .A2(_103_),
    .B1(\rng_dp.seed_sel_i[1] ),
    .C1(\rng_dp.seed_sel_i[0] ),
    .X(_074_));
 sky130_fd_sc_hd__a211o_1 _165_ (.A1(\rng_dp.inst.next_num_o[2] ),
    .A2(\rng_dp.inst.next_num_o[1] ),
    .B1(_001_),
    .C1(\rng_dp.seed_sel_i[1] ),
    .X(_075_));
 sky130_fd_sc_hd__a21oi_1 _166_ (.A1(_074_),
    .A2(_075_),
    .B1(_073_),
    .Y(_076_));
 sky130_fd_sc_hd__nand2_1 _167_ (.A(_103_),
    .B(\rng_dp.inst.next_num_o[1] ),
    .Y(_077_));
 sky130_fd_sc_hd__or2_1 _168_ (.A(\rng_dp.inst.next_num_o[2] ),
    .B(\rng_dp.inst.next_num_o[0] ),
    .X(_078_));
 sky130_fd_sc_hd__and3_1 _169_ (.A(\rng_dp.seed_sel_i[1] ),
    .B(_077_),
    .C(_078_),
    .X(_079_));
 sky130_fd_sc_hd__nand2_1 _170_ (.A(\rng_dp.seed_sel_i[1] ),
    .B(\rng_dp.seed_sel_i[0] ),
    .Y(_080_));
 sky130_fd_sc_hd__nand2_1 _171_ (.A(\rng_dp.inst.next_num_o[2] ),
    .B(\rng_dp.inst.next_num_o[0] ),
    .Y(_081_));
 sky130_fd_sc_hd__nor2_1 _172_ (.A(_102_),
    .B(\rng_dp.inst.next_num_o[1] ),
    .Y(_082_));
 sky130_fd_sc_hd__or2_1 _173_ (.A(_102_),
    .B(\rng_dp.inst.next_num_o[1] ),
    .X(_083_));
 sky130_fd_sc_hd__o221a_1 _174_ (.A1(_076_),
    .A2(_079_),
    .B1(_083_),
    .B2(_103_),
    .C1(_080_),
    .X(_084_));
 sky130_fd_sc_hd__nand2_1 _175_ (.A(_078_),
    .B(_081_),
    .Y(_085_));
 sky130_fd_sc_hd__a31o_1 _176_ (.A1(\rng_dp.seed_sel_i[1] ),
    .A2(\rng_dp.seed_sel_i[0] ),
    .A3(_085_),
    .B1(_108_),
    .X(_086_));
 sky130_fd_sc_hd__o22a_1 _177_ (.A1(\num_i_bar[0] ),
    .A2(_107_),
    .B1(_084_),
    .B2(_086_),
    .X(_006_));
 sky130_fd_sc_hd__and2_1 _178_ (.A(_102_),
    .B(\rng_dp.inst.next_num_o[1] ),
    .X(_087_));
 sky130_fd_sc_hd__or3b_1 _179_ (.A(\rng_dp.seed_sel_i[0] ),
    .B(_082_),
    .C_N(\rng_dp.seed_sel_i[1] ),
    .X(_088_));
 sky130_fd_sc_hd__a21o_1 _180_ (.A1(_074_),
    .A2(_088_),
    .B1(_087_),
    .X(_089_));
 sky130_fd_sc_hd__a211o_1 _181_ (.A1(_102_),
    .A2(_077_),
    .B1(_073_),
    .C1(_001_),
    .X(_090_));
 sky130_fd_sc_hd__a21oi_1 _182_ (.A1(_077_),
    .A2(_083_),
    .B1(_080_),
    .Y(_091_));
 sky130_fd_sc_hd__a311o_1 _183_ (.A1(_080_),
    .A2(_089_),
    .A3(_090_),
    .B1(_091_),
    .C1(_108_),
    .X(_092_));
 sky130_fd_sc_hd__o21ai_1 _184_ (.A1(_105_),
    .A2(_107_),
    .B1(_092_),
    .Y(_007_));
 sky130_fd_sc_hd__a2111oi_1 _185_ (.A1(\rng_dp.inst.next_num_o[1] ),
    .A2(_085_),
    .B1(_082_),
    .C1(\rng_dp.seed_sel_i[1] ),
    .D1(\rng_dp.seed_sel_i[0] ),
    .Y(_093_));
 sky130_fd_sc_hd__and3_1 _186_ (.A(\rng_dp.inst.next_num_o[2] ),
    .B(\rng_dp.seed_sel_i[1] ),
    .C(_001_),
    .X(_094_));
 sky130_fd_sc_hd__a211o_1 _187_ (.A1(\rng_dp.seed_sel_i[0] ),
    .A2(_085_),
    .B1(_093_),
    .C1(_094_),
    .X(_095_));
 sky130_fd_sc_hd__a21o_1 _188_ (.A1(\rng_dp.inst.next_num_o[2] ),
    .A2(\rng_dp.inst.next_num_o[0] ),
    .B1(\rng_dp.inst.next_num_o[1] ),
    .X(_096_));
 sky130_fd_sc_hd__and3_1 _189_ (.A(\rng_dp.seed_sel_i[1] ),
    .B(\rng_dp.seed_sel_i[0] ),
    .C(_078_),
    .X(_097_));
 sky130_fd_sc_hd__a221o_1 _190_ (.A1(_080_),
    .A2(_095_),
    .B1(_096_),
    .B2(_097_),
    .C1(_108_),
    .X(_098_));
 sky130_fd_sc_hd__o21a_1 _191_ (.A1(\num_i_bar[2] ),
    .A2(_107_),
    .B1(_098_),
    .X(_008_));
 sky130_fd_sc_hd__mux2_1 _192_ (.A0(\rng_rd.mem[6][0] ),
    .A1(\rng_rd.mem[5][0] ),
    .S(net9),
    .X(_009_));
 sky130_fd_sc_hd__mux2_1 _193_ (.A0(\rng_rd.mem[6][1] ),
    .A1(\rng_rd.mem[5][1] ),
    .S(net9),
    .X(_010_));
 sky130_fd_sc_hd__mux2_1 _194_ (.A0(\rng_rd.mem[6][2] ),
    .A1(\rng_rd.mem[5][2] ),
    .S(net9),
    .X(_011_));
 sky130_fd_sc_hd__mux2_1 _195_ (.A0(\rng_rd.mem[5][0] ),
    .A1(\rng_rd.mem[4][0] ),
    .S(net9),
    .X(_012_));
 sky130_fd_sc_hd__mux2_1 _196_ (.A0(\rng_rd.mem[5][1] ),
    .A1(\rng_rd.mem[4][1] ),
    .S(net9),
    .X(_013_));
 sky130_fd_sc_hd__mux2_1 _197_ (.A0(\rng_rd.mem[5][2] ),
    .A1(\rng_rd.mem[4][2] ),
    .S(net8),
    .X(_014_));
 sky130_fd_sc_hd__mux2_1 _198_ (.A0(\rng_rd.mem[4][0] ),
    .A1(\rng_rd.mem[3][0] ),
    .S(net9),
    .X(_015_));
 sky130_fd_sc_hd__mux2_1 _199_ (.A0(\rng_rd.mem[4][1] ),
    .A1(\rng_rd.mem[3][1] ),
    .S(net8),
    .X(_016_));
 sky130_fd_sc_hd__mux2_1 _200_ (.A0(\rng_rd.mem[4][2] ),
    .A1(\rng_rd.mem[3][2] ),
    .S(net8),
    .X(_017_));
 sky130_fd_sc_hd__mux2_1 _201_ (.A0(\rng_rd.mem[3][0] ),
    .A1(\rng_rd.mem[2][0] ),
    .S(net10),
    .X(_018_));
 sky130_fd_sc_hd__mux2_1 _202_ (.A0(\rng_rd.mem[3][1] ),
    .A1(\rng_rd.mem[2][1] ),
    .S(net8),
    .X(_019_));
 sky130_fd_sc_hd__mux2_1 _203_ (.A0(\rng_rd.mem[3][2] ),
    .A1(\rng_rd.mem[2][2] ),
    .S(net8),
    .X(_020_));
 sky130_fd_sc_hd__mux2_1 _204_ (.A0(\rng_rd.mem[2][0] ),
    .A1(\rng_rd.mem[1][0] ),
    .S(net10),
    .X(_021_));
 sky130_fd_sc_hd__mux2_1 _205_ (.A0(\rng_rd.mem[2][1] ),
    .A1(\rng_rd.mem[1][1] ),
    .S(net7),
    .X(_022_));
 sky130_fd_sc_hd__mux2_1 _206_ (.A0(\rng_rd.mem[2][2] ),
    .A1(\rng_rd.mem[1][2] ),
    .S(net8),
    .X(_023_));
 sky130_fd_sc_hd__mux2_1 _207_ (.A0(\rng_rd.mem[1][0] ),
    .A1(net4),
    .S(net7),
    .X(_024_));
 sky130_fd_sc_hd__mux2_1 _208_ (.A0(\rng_rd.mem[1][1] ),
    .A1(net5),
    .S(net7),
    .X(_025_));
 sky130_fd_sc_hd__mux2_1 _209_ (.A0(\rng_rd.mem[1][2] ),
    .A1(net6),
    .S(net7),
    .X(_026_));
 sky130_fd_sc_hd__mux2_1 _210_ (.A0(net4),
    .A1(\num_i_bar[0] ),
    .S(net7),
    .X(_027_));
 sky130_fd_sc_hd__mux2_1 _211_ (.A0(net5),
    .A1(\num_i_bar[1] ),
    .S(net7),
    .X(_028_));
 sky130_fd_sc_hd__mux2_1 _212_ (.A0(net6),
    .A1(net13),
    .S(net7),
    .X(_029_));
 sky130_fd_sc_hd__or2_1 _213_ (.A(\rng_rd.vld[0] ),
    .B(net7),
    .X(_030_));
 sky130_fd_sc_hd__mux2_1 _214_ (.A0(\rng_rd.vld[1] ),
    .A1(\rng_rd.vld[0] ),
    .S(net7),
    .X(_031_));
 sky130_fd_sc_hd__mux2_1 _215_ (.A0(\rng_rd.vld[2] ),
    .A1(\rng_rd.vld[1] ),
    .S(net7),
    .X(_032_));
 sky130_fd_sc_hd__mux2_1 _216_ (.A0(\rng_rd.vld[3] ),
    .A1(\rng_rd.vld[2] ),
    .S(net8),
    .X(_033_));
 sky130_fd_sc_hd__mux2_1 _217_ (.A0(\rng_rd.vld[4] ),
    .A1(\rng_rd.vld[3] ),
    .S(net8),
    .X(_034_));
 sky130_fd_sc_hd__mux2_1 _218_ (.A0(\rng_rd.vld[5] ),
    .A1(\rng_rd.vld[4] ),
    .S(net8),
    .X(_035_));
 sky130_fd_sc_hd__mux2_1 _219_ (.A0(\rng_rd.vld[6] ),
    .A1(\rng_rd.vld[5] ),
    .S(net9),
    .X(_036_));
 sky130_fd_sc_hd__mux2_1 _220_ (.A0(\rng_rd.vld[7] ),
    .A1(\rng_rd.vld[6] ),
    .S(net9),
    .X(_037_));
 sky130_fd_sc_hd__nand2_1 _221_ (.A(\rng_dp.inst.next_num_o[0] ),
    .B(_107_),
    .Y(_099_));
 sky130_fd_sc_hd__or2_1 _222_ (.A(\rng_dp.inst.next_num_o[0] ),
    .B(_107_),
    .X(_100_));
 sky130_fd_sc_hd__and2_1 _223_ (.A(_099_),
    .B(_100_),
    .X(_038_));
 sky130_fd_sc_hd__xnor2_1 _224_ (.A(\rng_dp.inst.next_num_o[1] ),
    .B(_099_),
    .Y(_039_));
 sky130_fd_sc_hd__a31oi_1 _225_ (.A1(\rng_dp.inst.next_num_o[0] ),
    .A2(\rng_dp.inst.next_num_o[1] ),
    .A3(_107_),
    .B1(_102_),
    .Y(_101_));
 sky130_fd_sc_hd__a31o_1 _226_ (.A1(\rng_dp.inst.next_num_o[0] ),
    .A2(_107_),
    .A3(_087_),
    .B1(_101_),
    .X(_040_));
 sky130_fd_sc_hd__dfrtp_1 _227_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_003_),
    .RESET_B(net17),
    .Q(\rng_rd.mem[7][0] ));
 sky130_fd_sc_hd__dfrtp_1 _228_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_004_),
    .RESET_B(net17),
    .Q(\rng_rd.mem[7][1] ));
 sky130_fd_sc_hd__dfrtp_1 _229_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_005_),
    .RESET_B(net18),
    .Q(\rng_rd.mem[7][2] ));
 sky130_fd_sc_hd__dfrtp_1 _230_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_006_),
    .RESET_B(net17),
    .Q(\num_i_bar[0] ));
 sky130_fd_sc_hd__dfrtp_4 _231_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_007_),
    .RESET_B(net17),
    .Q(\num_i_bar[1] ));
 sky130_fd_sc_hd__dfrtp_1 _232_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_008_),
    .RESET_B(net17),
    .Q(\num_i_bar[2] ));
 sky130_fd_sc_hd__dfrtp_4 _233_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_001_),
    .RESET_B(net17),
    .Q(\rng_dp.seed_sel_i[0] ));
 sky130_fd_sc_hd__dfrtp_4 _234_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_002_),
    .RESET_B(net17),
    .Q(\rng_dp.seed_sel_i[1] ));
 sky130_fd_sc_hd__dfrtp_1 _235_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_009_),
    .RESET_B(net18),
    .Q(\rng_rd.mem[6][0] ));
 sky130_fd_sc_hd__dfrtp_1 _236_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_010_),
    .RESET_B(net18),
    .Q(\rng_rd.mem[6][1] ));
 sky130_fd_sc_hd__dfrtp_1 _237_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_011_),
    .RESET_B(net18),
    .Q(\rng_rd.mem[6][2] ));
 sky130_fd_sc_hd__dfrtp_1 _238_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_012_),
    .RESET_B(net18),
    .Q(\rng_rd.mem[5][0] ));
 sky130_fd_sc_hd__dfrtp_1 _239_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_013_),
    .RESET_B(net16),
    .Q(\rng_rd.mem[5][1] ));
 sky130_fd_sc_hd__dfrtp_1 _240_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_014_),
    .RESET_B(net16),
    .Q(\rng_rd.mem[5][2] ));
 sky130_fd_sc_hd__dfrtp_1 _241_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_015_),
    .RESET_B(net16),
    .Q(\rng_rd.mem[4][0] ));
 sky130_fd_sc_hd__dfrtp_1 _242_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_016_),
    .RESET_B(net16),
    .Q(\rng_rd.mem[4][1] ));
 sky130_fd_sc_hd__dfrtp_1 _243_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_017_),
    .RESET_B(net16),
    .Q(\rng_rd.mem[4][2] ));
 sky130_fd_sc_hd__dfrtp_1 _244_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(net3),
    .RESET_B(net14),
    .Q(\rng_rd.wr_ff1 ));
 sky130_fd_sc_hd__dfrtp_1 _245_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_018_),
    .RESET_B(net14),
    .Q(\rng_rd.mem[3][0] ));
 sky130_fd_sc_hd__dfrtp_1 _246_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_019_),
    .RESET_B(net16),
    .Q(\rng_rd.mem[3][1] ));
 sky130_fd_sc_hd__dfrtp_1 _247_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_020_),
    .RESET_B(net16),
    .Q(\rng_rd.mem[3][2] ));
 sky130_fd_sc_hd__dfrtp_1 _248_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_021_),
    .RESET_B(net15),
    .Q(\rng_rd.mem[2][0] ));
 sky130_fd_sc_hd__dfrtp_1 _249_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_022_),
    .RESET_B(net15),
    .Q(\rng_rd.mem[2][1] ));
 sky130_fd_sc_hd__dfrtp_1 _250_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_023_),
    .RESET_B(net16),
    .Q(\rng_rd.mem[2][2] ));
 sky130_fd_sc_hd__dfrtp_1 _251_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_024_),
    .RESET_B(net15),
    .Q(\rng_rd.mem[1][0] ));
 sky130_fd_sc_hd__dfrtp_1 _252_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_025_),
    .RESET_B(net14),
    .Q(\rng_rd.mem[1][1] ));
 sky130_fd_sc_hd__dfrtp_1 _253_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_026_),
    .RESET_B(net14),
    .Q(\rng_rd.mem[1][2] ));
 sky130_fd_sc_hd__dfrtp_1 _254_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(\rng_rd.wr_ff1 ),
    .RESET_B(net14),
    .Q(\rng_rd.wr_ff2 ));
 sky130_fd_sc_hd__dfrtp_1 _255_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_027_),
    .RESET_B(net15),
    .Q(net4));
 sky130_fd_sc_hd__dfrtp_1 _256_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_028_),
    .RESET_B(net14),
    .Q(net5));
 sky130_fd_sc_hd__dfrtp_1 _257_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_029_),
    .RESET_B(net14),
    .Q(net6));
 sky130_fd_sc_hd__dfrtp_1 _258_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_030_),
    .RESET_B(net14),
    .Q(\rng_rd.vld[0] ));
 sky130_fd_sc_hd__dfrtp_1 _259_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_031_),
    .RESET_B(net14),
    .Q(\rng_rd.vld[1] ));
 sky130_fd_sc_hd__dfrtp_1 _260_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_032_),
    .RESET_B(net14),
    .Q(\rng_rd.vld[2] ));
 sky130_fd_sc_hd__dfrtp_1 _261_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_033_),
    .RESET_B(net16),
    .Q(\rng_rd.vld[3] ));
 sky130_fd_sc_hd__dfrtp_1 _262_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_034_),
    .RESET_B(net16),
    .Q(\rng_rd.vld[4] ));
 sky130_fd_sc_hd__dfrtp_1 _263_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_035_),
    .RESET_B(net19),
    .Q(\rng_rd.vld[5] ));
 sky130_fd_sc_hd__dfrtp_1 _264_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_036_),
    .RESET_B(net18),
    .Q(\rng_rd.vld[6] ));
 sky130_fd_sc_hd__dfrtp_1 _265_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_037_),
    .RESET_B(net18),
    .Q(\rng_rd.vld[7] ));
 sky130_fd_sc_hd__dfrtp_1 _266_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(\rng_rd.wr_ff2 ),
    .RESET_B(net15),
    .Q(\rng_rd.wr_ff2_d ));
 sky130_fd_sc_hd__dfrtp_2 _267_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_038_),
    .RESET_B(net17),
    .Q(\rng_dp.inst.next_num_o[0] ));
 sky130_fd_sc_hd__dfrtp_4 _268_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_039_),
    .RESET_B(net17),
    .Q(\rng_dp.inst.next_num_o[1] ));
 sky130_fd_sc_hd__dfrtp_2 _269_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_040_),
    .RESET_B(net17),
    .Q(\rng_dp.inst.next_num_o[2] ));
 sky130_fd_sc_hd__dfrtp_1 _270_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_000_),
    .RESET_B(net15),
    .Q(\rng_rd.wr_pulse ));
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_0_Right_0 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_1_Right_1 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_2_Right_2 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_3_Right_3 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_4_Right_4 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_5_Right_5 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_6_Right_6 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_7_Right_7 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_8_Right_8 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_9_Right_9 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_10_Right_10 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_11_Right_11 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_12_Right_12 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_13_Right_13 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_14_Right_14 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_15_Right_15 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_16_Right_16 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_17_Right_17 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_18_Right_18 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_19_Right_19 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_20_Right_20 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_21_Right_21 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_22_Right_22 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_0_Left_23 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_1_Left_24 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_2_Left_25 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_3_Left_26 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_4_Left_27 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_5_Left_28 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_6_Left_29 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_7_Left_30 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_8_Left_31 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_9_Left_32 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_10_Left_33 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_11_Left_34 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_12_Left_35 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_13_Left_36 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_14_Left_37 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_15_Left_38 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_16_Left_39 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_17_Left_40 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_18_Left_41 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_19_Left_42 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_20_Left_43 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_21_Left_44 ();
 sky130_fd_sc_hd__decap_3 PHY_EDGE_ROW_22_Left_45 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_0_46 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_0_47 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_0_48 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_0_49 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_0_50 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_1_51 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_1_52 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_2_53 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_2_54 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_2_55 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_3_56 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_3_57 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_4_58 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_4_59 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_4_60 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_5_61 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_5_62 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_6_63 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_6_64 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_6_65 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_7_66 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_7_67 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_8_68 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_8_69 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_8_70 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_9_71 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_9_72 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_10_73 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_10_74 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_10_75 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_11_76 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_11_77 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_12_78 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_12_79 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_12_80 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_13_81 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_13_82 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_14_83 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_14_84 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_14_85 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_15_86 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_15_87 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_16_88 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_16_89 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_16_90 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_17_91 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_17_92 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_18_93 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_18_94 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_18_95 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_19_96 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_19_97 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_20_98 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_20_99 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_20_100 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_21_101 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_21_102 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_22_103 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_22_104 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_22_105 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_22_106 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_22_107 ();
 sky130_fd_sc_hd__clkbuf_1 input1 (.A(req_num_i),
    .X(net1));
 sky130_fd_sc_hd__clkbuf_1 input2 (.A(rst_i),
    .X(net2));
 sky130_fd_sc_hd__clkbuf_1 input3 (.A(wr_i),
    .X(net3));
 sky130_fd_sc_hd__buf_2 output4 (.A(net4),
    .X(num_to_send_o[0]));
 sky130_fd_sc_hd__buf_2 output5 (.A(net5),
    .X(num_to_send_o[1]));
 sky130_fd_sc_hd__buf_2 output6 (.A(net6),
    .X(num_to_send_o[2]));
 sky130_fd_sc_hd__clkbuf_4 fanout7 (.A(net10),
    .X(net7));
 sky130_fd_sc_hd__clkbuf_4 fanout8 (.A(net10),
    .X(net8));
 sky130_fd_sc_hd__clkbuf_4 fanout9 (.A(net10),
    .X(net9));
 sky130_fd_sc_hd__clkbuf_2 fanout10 (.A(_072_),
    .X(net10));
 sky130_fd_sc_hd__buf_2 fanout11 (.A(net12),
    .X(net11));
 sky130_fd_sc_hd__clkbuf_2 fanout12 (.A(_104_),
    .X(net12));
 sky130_fd_sc_hd__clkbuf_4 fanout13 (.A(\num_i_bar[2] ),
    .X(net13));
 sky130_fd_sc_hd__clkbuf_4 fanout14 (.A(net19),
    .X(net14));
 sky130_fd_sc_hd__clkbuf_2 fanout15 (.A(net19),
    .X(net15));
 sky130_fd_sc_hd__clkbuf_4 fanout16 (.A(net19),
    .X(net16));
 sky130_fd_sc_hd__clkbuf_4 fanout17 (.A(net19),
    .X(net17));
 sky130_fd_sc_hd__buf_2 fanout18 (.A(net19),
    .X(net18));
 sky130_fd_sc_hd__clkbuf_2 fanout19 (.A(net2),
    .X(net19));
 sky130_fd_sc_hd__clkbuf_16 clkbuf_0_clk_i (.A(clk_i),
    .X(clknet_0_clk_i));
 sky130_fd_sc_hd__clkbuf_16 clkbuf_2_0__f_clk_i (.A(clknet_0_clk_i),
    .X(clknet_2_0__leaf_clk_i));
 sky130_fd_sc_hd__clkbuf_16 clkbuf_2_1__f_clk_i (.A(clknet_0_clk_i),
    .X(clknet_2_1__leaf_clk_i));
 sky130_fd_sc_hd__clkbuf_16 clkbuf_2_2__f_clk_i (.A(clknet_0_clk_i),
    .X(clknet_2_2__leaf_clk_i));
 sky130_fd_sc_hd__clkbuf_16 clkbuf_2_3__f_clk_i (.A(clknet_0_clk_i),
    .X(clknet_2_3__leaf_clk_i));
 sky130_fd_sc_hd__clkbuf_4 clkload0 (.A(clknet_2_1__leaf_clk_i));
 sky130_fd_sc_hd__bufinv_16 clkload1 (.A(clknet_2_2__leaf_clk_i));
 sky130_fd_sc_hd__clkinv_2 clkload2 (.A(clknet_2_3__leaf_clk_i));
endmodule
