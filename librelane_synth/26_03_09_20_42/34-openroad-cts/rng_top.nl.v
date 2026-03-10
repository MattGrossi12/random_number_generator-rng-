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
 wire \num_i_bar[0] ;
 wire \num_i_bar[1] ;
 wire \num_i_bar[2] ;
 wire req_num;
 wire \rng_rd.cache[0] ;
 wire \rng_rd.cache[1] ;
 wire \rng_rd.cache[2] ;
 wire \rng_rd.ram_1[0] ;
 wire \rng_rd.ram_1[1] ;
 wire \rng_rd.ram_1[2] ;
 wire \rng_rd.ram_2[0] ;
 wire \rng_rd.ram_2[1] ;
 wire \rng_rd.ram_2[2] ;
 wire \rng_rd.ram_3[0] ;
 wire \rng_rd.ram_3[1] ;
 wire \rng_rd.ram_3[2] ;
 wire \rng_rd.ram_4[0] ;
 wire \rng_rd.ram_4[1] ;
 wire \rng_rd.ram_4[2] ;
 wire \rng_rd.ram_5[0] ;
 wire \rng_rd.ram_5[1] ;
 wire \rng_rd.ram_5[2] ;
 wire \rng_rd.ram_6[0] ;
 wire \rng_rd.ram_6[1] ;
 wire \rng_rd.ram_6[2] ;
 wire \rng_rd.ram_7[0] ;
 wire \rng_rd.ram_7[1] ;
 wire \rng_rd.ram_7[2] ;
 wire \rng_rd.req_num ;
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
 wire clknet_0_clk_i;
 wire clknet_2_0__leaf_clk_i;
 wire clknet_2_1__leaf_clk_i;
 wire clknet_2_2__leaf_clk_i;
 wire clknet_2_3__leaf_clk_i;

 sky130_fd_sc_hd__inv_2 _079_ (.A(net12),
    .Y(_051_));
 sky130_fd_sc_hd__inv_2 _080_ (.A(net11),
    .Y(_052_));
 sky130_fd_sc_hd__or3_1 _081_ (.A(net1),
    .B(\rng_rd.req_num ),
    .C(req_num),
    .X(req_num));
 sky130_fd_sc_hd__or2_1 _082_ (.A(net13),
    .B(\rng_rd.ram_5[0] ),
    .X(_053_));
 sky130_fd_sc_hd__nand2_1 _083_ (.A(net13),
    .B(\rng_rd.ram_5[0] ),
    .Y(_054_));
 sky130_fd_sc_hd__or2_1 _084_ (.A(net10),
    .B(\rng_rd.ram_5[2] ),
    .X(_055_));
 sky130_fd_sc_hd__nand2_1 _085_ (.A(net10),
    .B(\rng_rd.ram_5[2] ),
    .Y(_056_));
 sky130_fd_sc_hd__xor2_1 _086_ (.A(net12),
    .B(\rng_rd.ram_5[1] ),
    .X(_057_));
 sky130_fd_sc_hd__a221o_1 _087_ (.A1(_053_),
    .A2(_054_),
    .B1(_055_),
    .B2(_056_),
    .C1(_057_),
    .X(_058_));
 sky130_fd_sc_hd__xor2_1 _088_ (.A(net10),
    .B(\rng_rd.ram_3[2] ),
    .X(_059_));
 sky130_fd_sc_hd__xor2_1 _089_ (.A(net13),
    .B(\rng_rd.ram_3[0] ),
    .X(_060_));
 sky130_fd_sc_hd__xor2_1 _090_ (.A(net12),
    .B(\rng_rd.ram_3[1] ),
    .X(_061_));
 sky130_fd_sc_hd__or2_1 _091_ (.A(net10),
    .B(\rng_rd.ram_6[2] ),
    .X(_062_));
 sky130_fd_sc_hd__nand2_1 _092_ (.A(net10),
    .B(\rng_rd.ram_6[2] ),
    .Y(_063_));
 sky130_fd_sc_hd__xor2_1 _093_ (.A(net12),
    .B(\rng_rd.ram_6[1] ),
    .X(_064_));
 sky130_fd_sc_hd__or2_1 _094_ (.A(net13),
    .B(\rng_rd.ram_6[0] ),
    .X(_065_));
 sky130_fd_sc_hd__nand2_1 _095_ (.A(net13),
    .B(\rng_rd.ram_6[0] ),
    .Y(_066_));
 sky130_fd_sc_hd__a221o_1 _096_ (.A1(_062_),
    .A2(_063_),
    .B1(_065_),
    .B2(_066_),
    .C1(_064_),
    .X(_067_));
 sky130_fd_sc_hd__o311a_1 _097_ (.A1(_059_),
    .A2(_060_),
    .A3(_061_),
    .B1(_067_),
    .C1(_058_),
    .X(_068_));
 sky130_fd_sc_hd__xor2_1 _098_ (.A(net4),
    .B(net13),
    .X(_069_));
 sky130_fd_sc_hd__a221oi_1 _099_ (.A1(net5),
    .A2(_051_),
    .B1(net6),
    .B2(_052_),
    .C1(_069_),
    .Y(_070_));
 sky130_fd_sc_hd__o221a_1 _100_ (.A1(net5),
    .A2(_051_),
    .B1(net6),
    .B2(_052_),
    .C1(_070_),
    .X(_071_));
 sky130_fd_sc_hd__xor2_1 _101_ (.A(net12),
    .B(\rng_rd.ram_2[1] ),
    .X(_072_));
 sky130_fd_sc_hd__xor2_1 _102_ (.A(net13),
    .B(\rng_rd.ram_2[0] ),
    .X(_073_));
 sky130_fd_sc_hd__or2_1 _103_ (.A(net10),
    .B(\rng_rd.ram_2[2] ),
    .X(_074_));
 sky130_fd_sc_hd__nand2_1 _104_ (.A(net10),
    .B(\rng_rd.ram_2[2] ),
    .Y(_075_));
 sky130_fd_sc_hd__a211o_1 _105_ (.A1(_074_),
    .A2(_075_),
    .B1(_072_),
    .C1(_073_),
    .X(_076_));
 sky130_fd_sc_hd__xor2_1 _106_ (.A(\rng_rd.cache[0] ),
    .B(\rng_rd.ram_7[0] ),
    .X(_077_));
 sky130_fd_sc_hd__or2_1 _107_ (.A(net10),
    .B(\rng_rd.ram_7[2] ),
    .X(_078_));
 sky130_fd_sc_hd__nand2_1 _108_ (.A(net10),
    .B(\rng_rd.ram_7[2] ),
    .Y(_032_));
 sky130_fd_sc_hd__nand2_1 _109_ (.A(net12),
    .B(\rng_rd.ram_7[1] ),
    .Y(_033_));
 sky130_fd_sc_hd__or2_1 _110_ (.A(net12),
    .B(\rng_rd.ram_7[1] ),
    .X(_034_));
 sky130_fd_sc_hd__a221o_1 _111_ (.A1(_078_),
    .A2(_032_),
    .B1(_033_),
    .B2(_034_),
    .C1(_077_),
    .X(_035_));
 sky130_fd_sc_hd__xor2_1 _112_ (.A(\rng_rd.cache[0] ),
    .B(\rng_rd.ram_4[0] ),
    .X(_036_));
 sky130_fd_sc_hd__nand2_1 _113_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_4[1] ),
    .Y(_037_));
 sky130_fd_sc_hd__or2_1 _114_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_4[1] ),
    .X(_038_));
 sky130_fd_sc_hd__or2_1 _115_ (.A(net10),
    .B(\rng_rd.ram_4[2] ),
    .X(_039_));
 sky130_fd_sc_hd__nand2_1 _116_ (.A(net11),
    .B(\rng_rd.ram_4[2] ),
    .Y(_040_));
 sky130_fd_sc_hd__a221o_1 _117_ (.A1(_037_),
    .A2(_038_),
    .B1(_039_),
    .B2(_040_),
    .C1(_036_),
    .X(_041_));
 sky130_fd_sc_hd__xor2_1 _118_ (.A(net13),
    .B(\rng_rd.ram_1[0] ),
    .X(_042_));
 sky130_fd_sc_hd__nand2_1 _119_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_1[1] ),
    .Y(_043_));
 sky130_fd_sc_hd__or2_1 _120_ (.A(net12),
    .B(\rng_rd.ram_1[1] ),
    .X(_044_));
 sky130_fd_sc_hd__xor2_1 _121_ (.A(net11),
    .B(\rng_rd.ram_1[2] ),
    .X(_045_));
 sky130_fd_sc_hd__a211o_1 _122_ (.A1(_043_),
    .A2(_044_),
    .B1(_045_),
    .C1(_042_),
    .X(_046_));
 sky130_fd_sc_hd__and4_1 _123_ (.A(_076_),
    .B(_035_),
    .C(_041_),
    .D(_046_),
    .X(_047_));
 sky130_fd_sc_hd__and4b_1 _124_ (.A_N(_071_),
    .B(_047_),
    .C(\rng_rd.wr_pulse ),
    .D(_068_),
    .X(_048_));
 sky130_fd_sc_hd__inv_2 _125_ (.A(net7),
    .Y(_000_));
 sky130_fd_sc_hd__and2b_1 _126_ (.A_N(\rng_rd.wr_ff2_d ),
    .B(\rng_rd.wr_ff2 ),
    .X(_001_));
 sky130_fd_sc_hd__mux2_1 _127_ (.A0(net13),
    .A1(\num_i_bar[0] ),
    .S(net3),
    .X(_002_));
 sky130_fd_sc_hd__mux2_1 _128_ (.A0(net12),
    .A1(\num_i_bar[1] ),
    .S(net3),
    .X(_003_));
 sky130_fd_sc_hd__mux2_1 _129_ (.A0(net11),
    .A1(\num_i_bar[2] ),
    .S(net3),
    .X(_004_));
 sky130_fd_sc_hd__mux2_1 _130_ (.A0(\rng_rd.ram_7[0] ),
    .A1(\rng_rd.ram_6[0] ),
    .S(net8),
    .X(_005_));
 sky130_fd_sc_hd__mux2_1 _131_ (.A0(\rng_rd.ram_7[1] ),
    .A1(\rng_rd.ram_6[1] ),
    .S(net8),
    .X(_006_));
 sky130_fd_sc_hd__mux2_1 _132_ (.A0(\rng_rd.ram_7[2] ),
    .A1(\rng_rd.ram_6[2] ),
    .S(net8),
    .X(_007_));
 sky130_fd_sc_hd__mux2_1 _133_ (.A0(\rng_rd.ram_5[0] ),
    .A1(\rng_rd.ram_4[0] ),
    .S(net8),
    .X(_008_));
 sky130_fd_sc_hd__mux2_1 _134_ (.A0(\rng_rd.ram_5[1] ),
    .A1(\rng_rd.ram_4[1] ),
    .S(net9),
    .X(_009_));
 sky130_fd_sc_hd__mux2_1 _135_ (.A0(\rng_rd.ram_5[2] ),
    .A1(\rng_rd.ram_4[2] ),
    .S(net9),
    .X(_010_));
 sky130_fd_sc_hd__mux2_1 _136_ (.A0(\rng_rd.ram_4[0] ),
    .A1(\rng_rd.ram_3[0] ),
    .S(net8),
    .X(_011_));
 sky130_fd_sc_hd__mux2_1 _137_ (.A0(\rng_rd.ram_4[1] ),
    .A1(\rng_rd.ram_3[1] ),
    .S(net8),
    .X(_012_));
 sky130_fd_sc_hd__mux2_1 _138_ (.A0(\rng_rd.ram_4[2] ),
    .A1(\rng_rd.ram_3[2] ),
    .S(net9),
    .X(_013_));
 sky130_fd_sc_hd__mux2_1 _139_ (.A0(\rng_rd.ram_3[0] ),
    .A1(\rng_rd.ram_2[0] ),
    .S(net7),
    .X(_014_));
 sky130_fd_sc_hd__mux2_1 _140_ (.A0(\rng_rd.ram_3[1] ),
    .A1(\rng_rd.ram_2[1] ),
    .S(net8),
    .X(_015_));
 sky130_fd_sc_hd__mux2_1 _141_ (.A0(\rng_rd.ram_3[2] ),
    .A1(\rng_rd.ram_2[2] ),
    .S(net9),
    .X(_016_));
 sky130_fd_sc_hd__mux2_1 _142_ (.A0(\rng_rd.ram_2[0] ),
    .A1(\rng_rd.ram_1[0] ),
    .S(net7),
    .X(_017_));
 sky130_fd_sc_hd__mux2_1 _143_ (.A0(\rng_rd.ram_2[1] ),
    .A1(\rng_rd.ram_1[1] ),
    .S(net9),
    .X(_018_));
 sky130_fd_sc_hd__mux2_1 _144_ (.A0(\rng_rd.ram_2[2] ),
    .A1(\rng_rd.ram_1[2] ),
    .S(net7),
    .X(_019_));
 sky130_fd_sc_hd__mux2_1 _145_ (.A0(\rng_rd.ram_1[0] ),
    .A1(net4),
    .S(net7),
    .X(_020_));
 sky130_fd_sc_hd__mux2_1 _146_ (.A0(\rng_rd.ram_1[1] ),
    .A1(net5),
    .S(net7),
    .X(_021_));
 sky130_fd_sc_hd__mux2_1 _147_ (.A0(\rng_rd.ram_1[2] ),
    .A1(net6),
    .S(net7),
    .X(_022_));
 sky130_fd_sc_hd__mux2_1 _148_ (.A0(net4),
    .A1(net13),
    .S(net7),
    .X(_023_));
 sky130_fd_sc_hd__mux2_1 _149_ (.A0(net5),
    .A1(net12),
    .S(net7),
    .X(_024_));
 sky130_fd_sc_hd__mux2_1 _150_ (.A0(net6),
    .A1(net11),
    .S(net7),
    .X(_025_));
 sky130_fd_sc_hd__xor2_1 _151_ (.A(\num_i_bar[0] ),
    .B(req_num),
    .X(_026_));
 sky130_fd_sc_hd__a21oi_1 _152_ (.A1(\num_i_bar[0] ),
    .A2(req_num),
    .B1(\num_i_bar[1] ),
    .Y(_049_));
 sky130_fd_sc_hd__and3_1 _153_ (.A(\num_i_bar[1] ),
    .B(\num_i_bar[0] ),
    .C(req_num),
    .X(_050_));
 sky130_fd_sc_hd__nor2_1 _154_ (.A(_049_),
    .B(_050_),
    .Y(_027_));
 sky130_fd_sc_hd__xor2_1 _155_ (.A(\num_i_bar[2] ),
    .B(_050_),
    .X(_028_));
 sky130_fd_sc_hd__mux2_1 _156_ (.A0(\rng_rd.ram_6[0] ),
    .A1(\rng_rd.ram_5[0] ),
    .S(net8),
    .X(_029_));
 sky130_fd_sc_hd__mux2_1 _157_ (.A0(\rng_rd.ram_6[1] ),
    .A1(\rng_rd.ram_5[1] ),
    .S(net8),
    .X(_030_));
 sky130_fd_sc_hd__mux2_1 _158_ (.A0(\rng_rd.ram_6[2] ),
    .A1(\rng_rd.ram_5[2] ),
    .S(net8),
    .X(_031_));
 sky130_fd_sc_hd__dfrtp_1 _159_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_002_),
    .RESET_B(net14),
    .Q(\rng_rd.cache[0] ));
 sky130_fd_sc_hd__dfrtp_1 _160_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_003_),
    .RESET_B(net14),
    .Q(\rng_rd.cache[1] ));
 sky130_fd_sc_hd__dfrtp_1 _161_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_004_),
    .RESET_B(net14),
    .Q(\rng_rd.cache[2] ));
 sky130_fd_sc_hd__dfrtp_1 _162_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_005_),
    .RESET_B(net15),
    .Q(\rng_rd.ram_7[0] ));
 sky130_fd_sc_hd__dfrtp_1 _163_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_006_),
    .RESET_B(net15),
    .Q(\rng_rd.ram_7[1] ));
 sky130_fd_sc_hd__dfrtp_1 _164_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_007_),
    .RESET_B(net15),
    .Q(\rng_rd.ram_7[2] ));
 sky130_fd_sc_hd__dfrtp_1 _165_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_008_),
    .RESET_B(net15),
    .Q(\rng_rd.ram_5[0] ));
 sky130_fd_sc_hd__dfrtp_1 _166_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_009_),
    .RESET_B(net17),
    .Q(\rng_rd.ram_5[1] ));
 sky130_fd_sc_hd__dfrtp_1 _167_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_010_),
    .RESET_B(net17),
    .Q(\rng_rd.ram_5[2] ));
 sky130_fd_sc_hd__dfrtp_1 _168_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(net3),
    .RESET_B(net14),
    .Q(\rng_rd.wr_ff1 ));
 sky130_fd_sc_hd__dfrtp_1 _169_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_011_),
    .RESET_B(net17),
    .Q(\rng_rd.ram_4[0] ));
 sky130_fd_sc_hd__dfrtp_1 _170_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_012_),
    .RESET_B(net17),
    .Q(\rng_rd.ram_4[1] ));
 sky130_fd_sc_hd__dfrtp_1 _171_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_013_),
    .RESET_B(net17),
    .Q(\rng_rd.ram_4[2] ));
 sky130_fd_sc_hd__dfrtp_1 _172_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_014_),
    .RESET_B(net16),
    .Q(\rng_rd.ram_3[0] ));
 sky130_fd_sc_hd__dfrtp_1 _173_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_015_),
    .RESET_B(net17),
    .Q(\rng_rd.ram_3[1] ));
 sky130_fd_sc_hd__dfrtp_1 _174_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_016_),
    .RESET_B(net17),
    .Q(\rng_rd.ram_3[2] ));
 sky130_fd_sc_hd__dfrtp_1 _175_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_017_),
    .RESET_B(net16),
    .Q(\rng_rd.ram_2[0] ));
 sky130_fd_sc_hd__dfrtp_1 _176_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_018_),
    .RESET_B(net16),
    .Q(\rng_rd.ram_2[1] ));
 sky130_fd_sc_hd__dfrtp_1 _177_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_019_),
    .RESET_B(net16),
    .Q(\rng_rd.ram_2[2] ));
 sky130_fd_sc_hd__dfrtp_1 _178_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(\rng_rd.wr_ff1 ),
    .RESET_B(net14),
    .Q(\rng_rd.wr_ff2 ));
 sky130_fd_sc_hd__dfrtp_1 _179_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_020_),
    .RESET_B(net16),
    .Q(\rng_rd.ram_1[0] ));
 sky130_fd_sc_hd__dfrtp_1 _180_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_021_),
    .RESET_B(net16),
    .Q(\rng_rd.ram_1[1] ));
 sky130_fd_sc_hd__dfrtp_1 _181_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_022_),
    .RESET_B(net16),
    .Q(\rng_rd.ram_1[2] ));
 sky130_fd_sc_hd__dfrtp_1 _182_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_023_),
    .RESET_B(net16),
    .Q(net4));
 sky130_fd_sc_hd__dfrtp_1 _183_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_024_),
    .RESET_B(net16),
    .Q(net5));
 sky130_fd_sc_hd__dfrtp_1 _184_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_025_),
    .RESET_B(net16),
    .Q(net6));
 sky130_fd_sc_hd__dfrtp_1 _185_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(\rng_rd.wr_ff2 ),
    .RESET_B(net14),
    .Q(\rng_rd.wr_ff2_d ));
 sky130_fd_sc_hd__dfrtp_1 _186_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_026_),
    .RESET_B(net14),
    .Q(\num_i_bar[0] ));
 sky130_fd_sc_hd__dfrtp_1 _187_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_027_),
    .RESET_B(net14),
    .Q(\num_i_bar[1] ));
 sky130_fd_sc_hd__dfrtp_1 _188_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_028_),
    .RESET_B(net14),
    .Q(\num_i_bar[2] ));
 sky130_fd_sc_hd__dfrtp_1 _189_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_000_),
    .RESET_B(net14),
    .Q(\rng_rd.req_num ));
 sky130_fd_sc_hd__dfrtp_1 _190_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_029_),
    .RESET_B(net15),
    .Q(\rng_rd.ram_6[0] ));
 sky130_fd_sc_hd__dfrtp_1 _191_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_030_),
    .RESET_B(net15),
    .Q(\rng_rd.ram_6[1] ));
 sky130_fd_sc_hd__dfrtp_1 _192_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_031_),
    .RESET_B(net15),
    .Q(\rng_rd.ram_6[2] ));
 sky130_fd_sc_hd__dfrtp_1 _193_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_001_),
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
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_1_50 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_1_51 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_2_52 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_2_53 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_3_54 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_3_55 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_4_56 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_4_57 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_5_58 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_5_59 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_6_60 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_6_61 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_7_62 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_7_63 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_8_64 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_8_65 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_9_66 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_9_67 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_10_68 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_10_69 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_11_70 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_11_71 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_12_72 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_12_73 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_13_74 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_13_75 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_14_76 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_14_77 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_15_78 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_15_79 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_16_80 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_16_81 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_17_82 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_17_83 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_18_84 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_18_85 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_19_86 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_19_87 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_20_88 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_20_89 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_21_90 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_21_91 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_22_92 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_22_93 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_22_94 ();
 sky130_fd_sc_hd__tapvpwrvgnd_1 TAP_TAPCELL_ROW_22_95 ();
 sky130_fd_sc_hd__clkbuf_1 input1 (.A(req_num_i),
    .X(net1));
 sky130_fd_sc_hd__buf_1 input2 (.A(rst_i),
    .X(net2));
 sky130_fd_sc_hd__buf_1 input3 (.A(wr_i),
    .X(net3));
 sky130_fd_sc_hd__buf_2 output4 (.A(net4),
    .X(num_to_send_o[0]));
 sky130_fd_sc_hd__buf_2 output5 (.A(net5),
    .X(num_to_send_o[1]));
 sky130_fd_sc_hd__buf_2 output6 (.A(net6),
    .X(num_to_send_o[2]));
 sky130_fd_sc_hd__clkbuf_4 fanout7 (.A(net9),
    .X(net7));
 sky130_fd_sc_hd__clkbuf_4 fanout8 (.A(net9),
    .X(net8));
 sky130_fd_sc_hd__buf_2 fanout9 (.A(_048_),
    .X(net9));
 sky130_fd_sc_hd__clkbuf_2 fanout10 (.A(net11),
    .X(net10));
 sky130_fd_sc_hd__clkbuf_2 fanout11 (.A(\rng_rd.cache[2] ),
    .X(net11));
 sky130_fd_sc_hd__clkbuf_4 fanout12 (.A(\rng_rd.cache[1] ),
    .X(net12));
 sky130_fd_sc_hd__clkbuf_4 fanout13 (.A(\rng_rd.cache[0] ),
    .X(net13));
 sky130_fd_sc_hd__clkbuf_4 fanout14 (.A(net15),
    .X(net14));
 sky130_fd_sc_hd__buf_2 fanout15 (.A(net2),
    .X(net15));
 sky130_fd_sc_hd__clkbuf_4 fanout16 (.A(net2),
    .X(net16));
 sky130_fd_sc_hd__buf_2 fanout17 (.A(net2),
    .X(net17));
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
 sky130_fd_sc_hd__clkbuf_8 clkload0 (.A(clknet_2_1__leaf_clk_i));
 sky130_fd_sc_hd__clkinv_2 clkload1 (.A(clknet_2_3__leaf_clk_i));
endmodule
