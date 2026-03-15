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
 wire \num_i_bar[0] ;
 wire \num_i_bar[1] ;
 wire \num_i_bar[2] ;
 wire req_num_again;
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
 wire clknet_0_clk_i;
 wire clknet_2_0__leaf_clk_i;
 wire clknet_2_1__leaf_clk_i;
 wire clknet_2_2__leaf_clk_i;
 wire clknet_2_3__leaf_clk_i;
 wire net17;
 wire net18;
 wire net19;
 wire net20;
 wire net21;
 wire net22;
 wire net23;
 wire net24;
 wire net25;
 wire net26;
 wire net27;
 wire net28;
 wire net29;
 wire net30;
 wire net31;
 wire net32;
 wire net33;
 wire net34;
 wire net35;
 wire net36;
 wire net37;
 wire net38;
 wire net39;
 wire net40;
 wire net41;
 wire net42;
 wire net43;
 wire net44;
 wire net45;
 wire net46;
 wire net47;
 wire net48;
 wire net49;
 wire net50;
 wire net51;
 wire net52;
 wire net53;
 wire net54;
 wire net55;

 sky130_fd_sc_hd__inv_2 _081_ (.A(net11),
    .Y(_050_));
 sky130_fd_sc_hd__inv_2 _082_ (.A(net10),
    .Y(_051_));
 sky130_fd_sc_hd__xor2_1 _083_ (.A(net12),
    .B(\rng_rd.ram_6[0] ),
    .X(_052_));
 sky130_fd_sc_hd__xor2_1 _084_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_6[2] ),
    .X(_053_));
 sky130_fd_sc_hd__xor2_1 _085_ (.A(net11),
    .B(\rng_rd.ram_6[1] ),
    .X(_054_));
 sky130_fd_sc_hd__or2_1 _086_ (.A(net11),
    .B(\rng_rd.ram_7[1] ),
    .X(_055_));
 sky130_fd_sc_hd__nand2_1 _087_ (.A(net11),
    .B(\rng_rd.ram_7[1] ),
    .Y(_056_));
 sky130_fd_sc_hd__xor2_1 _088_ (.A(net12),
    .B(\rng_rd.ram_7[0] ),
    .X(_057_));
 sky130_fd_sc_hd__nand2_1 _089_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_7[2] ),
    .Y(_058_));
 sky130_fd_sc_hd__or2_1 _090_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_7[2] ),
    .X(_059_));
 sky130_fd_sc_hd__a22o_1 _091_ (.A1(_055_),
    .A2(_056_),
    .B1(_058_),
    .B2(_059_),
    .X(_060_));
 sky130_fd_sc_hd__xor2_1 _092_ (.A(net10),
    .B(\rng_rd.ram_5[2] ),
    .X(_061_));
 sky130_fd_sc_hd__xor2_1 _093_ (.A(net12),
    .B(\rng_rd.ram_5[0] ),
    .X(_062_));
 sky130_fd_sc_hd__nand2_1 _094_ (.A(net11),
    .B(\rng_rd.ram_5[1] ),
    .Y(_063_));
 sky130_fd_sc_hd__or2_1 _095_ (.A(net11),
    .B(\rng_rd.ram_5[1] ),
    .X(_064_));
 sky130_fd_sc_hd__a211o_1 _096_ (.A1(_063_),
    .A2(_064_),
    .B1(_061_),
    .C1(_062_),
    .X(_065_));
 sky130_fd_sc_hd__or2_1 _097_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_4[1] ),
    .X(_066_));
 sky130_fd_sc_hd__nand2_1 _098_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_4[1] ),
    .Y(_067_));
 sky130_fd_sc_hd__xor2_1 _099_ (.A(net12),
    .B(\rng_rd.ram_4[0] ),
    .X(_068_));
 sky130_fd_sc_hd__or2_1 _100_ (.A(net10),
    .B(\rng_rd.ram_4[2] ),
    .X(_069_));
 sky130_fd_sc_hd__nand2_1 _101_ (.A(net10),
    .B(\rng_rd.ram_4[2] ),
    .Y(_070_));
 sky130_fd_sc_hd__a221o_1 _102_ (.A1(_066_),
    .A2(_067_),
    .B1(_069_),
    .B2(_070_),
    .C1(_068_),
    .X(_071_));
 sky130_fd_sc_hd__xor2_1 _103_ (.A(net11),
    .B(\rng_rd.ram_1[1] ),
    .X(_072_));
 sky130_fd_sc_hd__or2_1 _104_ (.A(net12),
    .B(\rng_rd.ram_1[0] ),
    .X(_073_));
 sky130_fd_sc_hd__nand2_1 _105_ (.A(net12),
    .B(\rng_rd.ram_1[0] ),
    .Y(_074_));
 sky130_fd_sc_hd__or2_1 _106_ (.A(net10),
    .B(\rng_rd.ram_1[2] ),
    .X(_075_));
 sky130_fd_sc_hd__nand2_1 _107_ (.A(net10),
    .B(\rng_rd.ram_1[2] ),
    .Y(_076_));
 sky130_fd_sc_hd__a221o_1 _108_ (.A1(_073_),
    .A2(_074_),
    .B1(_075_),
    .B2(_076_),
    .C1(_072_),
    .X(_077_));
 sky130_fd_sc_hd__or2_1 _109_ (.A(net10),
    .B(\rng_rd.ram_2[2] ),
    .X(_078_));
 sky130_fd_sc_hd__nand2_1 _110_ (.A(net10),
    .B(\rng_rd.ram_2[2] ),
    .Y(_079_));
 sky130_fd_sc_hd__xor2_1 _111_ (.A(net11),
    .B(\rng_rd.ram_2[1] ),
    .X(_080_));
 sky130_fd_sc_hd__nand2_1 _112_ (.A(net12),
    .B(\rng_rd.ram_2[0] ),
    .Y(_032_));
 sky130_fd_sc_hd__or2_1 _113_ (.A(\rng_rd.cache[0] ),
    .B(\rng_rd.ram_2[0] ),
    .X(_033_));
 sky130_fd_sc_hd__a221o_1 _114_ (.A1(_078_),
    .A2(_079_),
    .B1(_032_),
    .B2(_033_),
    .C1(_080_),
    .X(_034_));
 sky130_fd_sc_hd__xor2_1 _115_ (.A(net4),
    .B(net12),
    .X(_035_));
 sky130_fd_sc_hd__a221oi_1 _116_ (.A1(net5),
    .A2(_050_),
    .B1(net6),
    .B2(_051_),
    .C1(_035_),
    .Y(_036_));
 sky130_fd_sc_hd__o221a_1 _117_ (.A1(net5),
    .A2(_050_),
    .B1(net6),
    .B2(_051_),
    .C1(_036_),
    .X(_037_));
 sky130_fd_sc_hd__xor2_1 _118_ (.A(\rng_rd.cache[0] ),
    .B(\rng_rd.ram_3[0] ),
    .X(_038_));
 sky130_fd_sc_hd__nand2_1 _119_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_3[1] ),
    .Y(_039_));
 sky130_fd_sc_hd__or2_1 _120_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_3[1] ),
    .X(_040_));
 sky130_fd_sc_hd__xor2_1 _121_ (.A(net10),
    .B(\rng_rd.ram_3[2] ),
    .X(_041_));
 sky130_fd_sc_hd__a211o_1 _122_ (.A1(_039_),
    .A2(_040_),
    .B1(_041_),
    .C1(_038_),
    .X(_042_));
 sky130_fd_sc_hd__o311a_1 _123_ (.A1(_052_),
    .A2(_053_),
    .A3(_054_),
    .B1(_071_),
    .C1(_077_),
    .X(_043_));
 sky130_fd_sc_hd__o2111a_1 _124_ (.A1(_057_),
    .A2(_060_),
    .B1(_065_),
    .C1(_034_),
    .D1(_042_),
    .X(_044_));
 sky130_fd_sc_hd__and4b_1 _125_ (.A_N(_037_),
    .B(_043_),
    .C(_044_),
    .D(\rng_rd.wr_pulse ),
    .X(_045_));
 sky130_fd_sc_hd__inv_2 _126_ (.A(net7),
    .Y(_000_));
 sky130_fd_sc_hd__and2b_1 _127_ (.A_N(net20),
    .B(net18),
    .X(_001_));
 sky130_fd_sc_hd__mux2_1 _128_ (.A0(net12),
    .A1(net52),
    .S(net3),
    .X(_002_));
 sky130_fd_sc_hd__mux2_1 _129_ (.A0(net11),
    .A1(net27),
    .S(net3),
    .X(_003_));
 sky130_fd_sc_hd__mux2_1 _130_ (.A0(\rng_rd.cache[2] ),
    .A1(net19),
    .S(net3),
    .X(_004_));
 sky130_fd_sc_hd__mux2_1 _131_ (.A0(net25),
    .A1(\rng_rd.ram_6[0] ),
    .S(net8),
    .X(_005_));
 sky130_fd_sc_hd__mux2_1 _132_ (.A0(net21),
    .A1(\rng_rd.ram_6[1] ),
    .S(net8),
    .X(_006_));
 sky130_fd_sc_hd__mux2_1 _133_ (.A0(net23),
    .A1(\rng_rd.ram_6[2] ),
    .S(net9),
    .X(_007_));
 sky130_fd_sc_hd__mux2_1 _134_ (.A0(net43),
    .A1(net39),
    .S(net9),
    .X(_008_));
 sky130_fd_sc_hd__mux2_1 _135_ (.A0(net44),
    .A1(\rng_rd.ram_4[1] ),
    .S(net8),
    .X(_009_));
 sky130_fd_sc_hd__mux2_1 _136_ (.A0(net46),
    .A1(net40),
    .S(net8),
    .X(_010_));
 sky130_fd_sc_hd__mux2_1 _137_ (.A0(net39),
    .A1(net35),
    .S(net7),
    .X(_011_));
 sky130_fd_sc_hd__mux2_1 _138_ (.A0(net49),
    .A1(net48),
    .S(net8),
    .X(_012_));
 sky130_fd_sc_hd__mux2_1 _139_ (.A0(net40),
    .A1(net33),
    .S(net8),
    .X(_013_));
 sky130_fd_sc_hd__mux2_1 _140_ (.A0(net35),
    .A1(net30),
    .S(net7),
    .X(_014_));
 sky130_fd_sc_hd__mux2_1 _141_ (.A0(net48),
    .A1(net38),
    .S(net8),
    .X(_015_));
 sky130_fd_sc_hd__mux2_1 _142_ (.A0(net33),
    .A1(\rng_rd.ram_2[2] ),
    .S(net8),
    .X(_016_));
 sky130_fd_sc_hd__mux2_1 _143_ (.A0(net30),
    .A1(\rng_rd.ram_1[0] ),
    .S(net9),
    .X(_017_));
 sky130_fd_sc_hd__mux2_1 _144_ (.A0(net38),
    .A1(net32),
    .S(net7),
    .X(_018_));
 sky130_fd_sc_hd__mux2_1 _145_ (.A0(net50),
    .A1(\rng_rd.ram_1[2] ),
    .S(net7),
    .X(_019_));
 sky130_fd_sc_hd__mux2_1 _146_ (.A0(net41),
    .A1(net4),
    .S(net7),
    .X(_020_));
 sky130_fd_sc_hd__mux2_1 _147_ (.A0(net32),
    .A1(net5),
    .S(net7),
    .X(_021_));
 sky130_fd_sc_hd__mux2_1 _148_ (.A0(net53),
    .A1(net6),
    .S(net7),
    .X(_022_));
 sky130_fd_sc_hd__mux2_1 _149_ (.A0(net54),
    .A1(net12),
    .S(net9),
    .X(_023_));
 sky130_fd_sc_hd__mux2_1 _150_ (.A0(net55),
    .A1(net11),
    .S(net7),
    .X(_024_));
 sky130_fd_sc_hd__mux2_1 _151_ (.A0(net6),
    .A1(net10),
    .S(net7),
    .X(_025_));
 sky130_fd_sc_hd__o21ai_1 _152_ (.A1(req_num_again),
    .A2(net1),
    .B1(\num_i_bar[0] ),
    .Y(_046_));
 sky130_fd_sc_hd__or3_1 _153_ (.A(\num_i_bar[0] ),
    .B(req_num_again),
    .C(net1),
    .X(_047_));
 sky130_fd_sc_hd__and2_1 _154_ (.A(_046_),
    .B(_047_),
    .X(_026_));
 sky130_fd_sc_hd__o211a_1 _155_ (.A1(req_num_again),
    .A2(net1),
    .B1(\num_i_bar[1] ),
    .C1(\num_i_bar[0] ),
    .X(_048_));
 sky130_fd_sc_hd__and2b_1 _156_ (.A_N(\num_i_bar[1] ),
    .B(_046_),
    .X(_049_));
 sky130_fd_sc_hd__nor2_1 _157_ (.A(_048_),
    .B(_049_),
    .Y(_027_));
 sky130_fd_sc_hd__xor2_1 _158_ (.A(net19),
    .B(_048_),
    .X(_028_));
 sky130_fd_sc_hd__mux2_1 _159_ (.A0(net47),
    .A1(net43),
    .S(net9),
    .X(_029_));
 sky130_fd_sc_hd__mux2_1 _160_ (.A0(net28),
    .A1(\rng_rd.ram_5[1] ),
    .S(net8),
    .X(_030_));
 sky130_fd_sc_hd__mux2_1 _161_ (.A0(net36),
    .A1(\rng_rd.ram_5[2] ),
    .S(net8),
    .X(_031_));
 sky130_fd_sc_hd__dfrtp_1 _162_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_002_),
    .RESET_B(net15),
    .Q(\rng_rd.cache[0] ));
 sky130_fd_sc_hd__dfrtp_1 _163_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_003_),
    .RESET_B(net15),
    .Q(\rng_rd.cache[1] ));
 sky130_fd_sc_hd__dfrtp_2 _164_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_004_),
    .RESET_B(net15),
    .Q(\rng_rd.cache[2] ));
 sky130_fd_sc_hd__dfrtp_1 _165_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(net26),
    .RESET_B(net15),
    .Q(\rng_rd.ram_7[0] ));
 sky130_fd_sc_hd__dfrtp_1 _166_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(net22),
    .RESET_B(net16),
    .Q(\rng_rd.ram_7[1] ));
 sky130_fd_sc_hd__dfrtp_1 _167_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(net24),
    .RESET_B(net16),
    .Q(\rng_rd.ram_7[2] ));
 sky130_fd_sc_hd__dfrtp_1 _168_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_008_),
    .RESET_B(net15),
    .Q(\rng_rd.ram_5[0] ));
 sky130_fd_sc_hd__dfrtp_1 _169_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(net45),
    .RESET_B(net14),
    .Q(\rng_rd.ram_5[1] ));
 sky130_fd_sc_hd__dfrtp_1 _170_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_010_),
    .RESET_B(net14),
    .Q(\rng_rd.ram_5[2] ));
 sky130_fd_sc_hd__dfrtp_1 _171_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(net3),
    .RESET_B(net15),
    .Q(\rng_rd.wr_ff1 ));
 sky130_fd_sc_hd__dfrtp_1 _172_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_011_),
    .RESET_B(net13),
    .Q(\rng_rd.ram_4[0] ));
 sky130_fd_sc_hd__dfrtp_1 _173_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_012_),
    .RESET_B(net14),
    .Q(\rng_rd.ram_4[1] ));
 sky130_fd_sc_hd__dfrtp_1 _174_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_013_),
    .RESET_B(net14),
    .Q(\rng_rd.ram_4[2] ));
 sky130_fd_sc_hd__dfrtp_1 _175_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_014_),
    .RESET_B(net13),
    .Q(\rng_rd.ram_3[0] ));
 sky130_fd_sc_hd__dfrtp_1 _176_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(_015_),
    .RESET_B(net14),
    .Q(\rng_rd.ram_3[1] ));
 sky130_fd_sc_hd__dfrtp_1 _177_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(net34),
    .RESET_B(net14),
    .Q(\rng_rd.ram_3[2] ));
 sky130_fd_sc_hd__dfrtp_1 _178_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(net31),
    .RESET_B(net13),
    .Q(\rng_rd.ram_2[0] ));
 sky130_fd_sc_hd__dfrtp_1 _179_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_018_),
    .RESET_B(net13),
    .Q(\rng_rd.ram_2[1] ));
 sky130_fd_sc_hd__dfrtp_1 _180_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(net51),
    .RESET_B(net13),
    .Q(\rng_rd.ram_2[2] ));
 sky130_fd_sc_hd__dfrtp_1 _181_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(net17),
    .RESET_B(net15),
    .Q(\rng_rd.wr_ff2 ));
 sky130_fd_sc_hd__dfrtp_1 _182_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(net42),
    .RESET_B(net13),
    .Q(\rng_rd.ram_1[0] ));
 sky130_fd_sc_hd__dfrtp_1 _183_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_021_),
    .RESET_B(net13),
    .Q(\rng_rd.ram_1[1] ));
 sky130_fd_sc_hd__dfrtp_1 _184_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_022_),
    .RESET_B(net13),
    .Q(\rng_rd.ram_1[2] ));
 sky130_fd_sc_hd__dfrtp_1 _185_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_023_),
    .RESET_B(net14),
    .Q(net4));
 sky130_fd_sc_hd__dfrtp_1 _186_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_024_),
    .RESET_B(net13),
    .Q(net5));
 sky130_fd_sc_hd__dfrtp_1 _187_ (.CLK(clknet_2_0__leaf_clk_i),
    .D(_025_),
    .RESET_B(net13),
    .Q(net6));
 sky130_fd_sc_hd__dfrtp_1 _188_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(net18),
    .RESET_B(net15),
    .Q(\rng_rd.wr_ff2_d ));
 sky130_fd_sc_hd__dfrtp_1 _189_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_026_),
    .RESET_B(net16),
    .Q(\num_i_bar[0] ));
 sky130_fd_sc_hd__dfrtp_1 _190_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_027_),
    .RESET_B(net16),
    .Q(\num_i_bar[1] ));
 sky130_fd_sc_hd__dfrtp_1 _191_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_028_),
    .RESET_B(net16),
    .Q(\num_i_bar[2] ));
 sky130_fd_sc_hd__dfrtp_1 _192_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_000_),
    .RESET_B(net15),
    .Q(req_num_again));
 sky130_fd_sc_hd__dfrtp_1 _193_ (.CLK(clknet_2_2__leaf_clk_i),
    .D(_029_),
    .RESET_B(net15),
    .Q(\rng_rd.ram_6[0] ));
 sky130_fd_sc_hd__dfrtp_1 _194_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(net29),
    .RESET_B(net16),
    .Q(\rng_rd.ram_6[1] ));
 sky130_fd_sc_hd__dfrtp_1 _195_ (.CLK(clknet_2_1__leaf_clk_i),
    .D(net37),
    .RESET_B(net14),
    .Q(\rng_rd.ram_6[2] ));
 sky130_fd_sc_hd__dfrtp_1 _196_ (.CLK(clknet_2_3__leaf_clk_i),
    .D(_001_),
    .RESET_B(net16),
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
 sky130_fd_sc_hd__buf_1 input1 (.A(req_num_i),
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
 sky130_fd_sc_hd__buf_2 fanout9 (.A(_045_),
    .X(net9));
 sky130_fd_sc_hd__buf_2 fanout10 (.A(\rng_rd.cache[2] ),
    .X(net10));
 sky130_fd_sc_hd__clkbuf_4 fanout11 (.A(\rng_rd.cache[1] ),
    .X(net11));
 sky130_fd_sc_hd__clkbuf_4 fanout12 (.A(\rng_rd.cache[0] ),
    .X(net12));
 sky130_fd_sc_hd__clkbuf_4 fanout13 (.A(net14),
    .X(net13));
 sky130_fd_sc_hd__clkbuf_4 fanout14 (.A(net2),
    .X(net14));
 sky130_fd_sc_hd__clkbuf_4 fanout15 (.A(net16),
    .X(net15));
 sky130_fd_sc_hd__buf_2 fanout16 (.A(net2),
    .X(net16));
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
 sky130_fd_sc_hd__clkbuf_4 clkload0 (.A(clknet_2_0__leaf_clk_i));
 sky130_fd_sc_hd__clkinv_2 clkload1 (.A(clknet_2_1__leaf_clk_i));
 sky130_fd_sc_hd__clkinvlp_4 clkload2 (.A(clknet_2_3__leaf_clk_i));
 sky130_fd_sc_hd__dlygate4sd3_1 hold1 (.A(\rng_rd.wr_ff1 ),
    .X(net17));
 sky130_fd_sc_hd__dlygate4sd3_1 hold2 (.A(\rng_rd.wr_ff2 ),
    .X(net18));
 sky130_fd_sc_hd__dlygate4sd3_1 hold3 (.A(\num_i_bar[2] ),
    .X(net19));
 sky130_fd_sc_hd__dlygate4sd3_1 hold4 (.A(\rng_rd.wr_ff2_d ),
    .X(net20));
 sky130_fd_sc_hd__dlygate4sd3_1 hold5 (.A(\rng_rd.ram_7[1] ),
    .X(net21));
 sky130_fd_sc_hd__dlygate4sd3_1 hold6 (.A(_006_),
    .X(net22));
 sky130_fd_sc_hd__dlygate4sd3_1 hold7 (.A(\rng_rd.ram_7[2] ),
    .X(net23));
 sky130_fd_sc_hd__dlygate4sd3_1 hold8 (.A(_007_),
    .X(net24));
 sky130_fd_sc_hd__dlygate4sd3_1 hold9 (.A(\rng_rd.ram_7[0] ),
    .X(net25));
 sky130_fd_sc_hd__dlygate4sd3_1 hold10 (.A(_005_),
    .X(net26));
 sky130_fd_sc_hd__dlygate4sd3_1 hold11 (.A(\num_i_bar[1] ),
    .X(net27));
 sky130_fd_sc_hd__dlygate4sd3_1 hold12 (.A(\rng_rd.ram_6[1] ),
    .X(net28));
 sky130_fd_sc_hd__dlygate4sd3_1 hold13 (.A(_030_),
    .X(net29));
 sky130_fd_sc_hd__dlygate4sd3_1 hold14 (.A(\rng_rd.ram_2[0] ),
    .X(net30));
 sky130_fd_sc_hd__dlygate4sd3_1 hold15 (.A(_017_),
    .X(net31));
 sky130_fd_sc_hd__dlygate4sd3_1 hold16 (.A(\rng_rd.ram_1[1] ),
    .X(net32));
 sky130_fd_sc_hd__dlygate4sd3_1 hold17 (.A(\rng_rd.ram_3[2] ),
    .X(net33));
 sky130_fd_sc_hd__dlygate4sd3_1 hold18 (.A(_016_),
    .X(net34));
 sky130_fd_sc_hd__dlygate4sd3_1 hold19 (.A(\rng_rd.ram_3[0] ),
    .X(net35));
 sky130_fd_sc_hd__dlygate4sd3_1 hold20 (.A(\rng_rd.ram_6[2] ),
    .X(net36));
 sky130_fd_sc_hd__dlygate4sd3_1 hold21 (.A(_031_),
    .X(net37));
 sky130_fd_sc_hd__dlygate4sd3_1 hold22 (.A(\rng_rd.ram_2[1] ),
    .X(net38));
 sky130_fd_sc_hd__dlygate4sd3_1 hold23 (.A(\rng_rd.ram_4[0] ),
    .X(net39));
 sky130_fd_sc_hd__dlygate4sd3_1 hold24 (.A(\rng_rd.ram_4[2] ),
    .X(net40));
 sky130_fd_sc_hd__dlygate4sd3_1 hold25 (.A(\rng_rd.ram_1[0] ),
    .X(net41));
 sky130_fd_sc_hd__dlygate4sd3_1 hold26 (.A(_020_),
    .X(net42));
 sky130_fd_sc_hd__dlygate4sd3_1 hold27 (.A(\rng_rd.ram_5[0] ),
    .X(net43));
 sky130_fd_sc_hd__dlygate4sd3_1 hold28 (.A(\rng_rd.ram_5[1] ),
    .X(net44));
 sky130_fd_sc_hd__dlygate4sd3_1 hold29 (.A(_009_),
    .X(net45));
 sky130_fd_sc_hd__dlygate4sd3_1 hold30 (.A(\rng_rd.ram_5[2] ),
    .X(net46));
 sky130_fd_sc_hd__dlygate4sd3_1 hold31 (.A(\rng_rd.ram_6[0] ),
    .X(net47));
 sky130_fd_sc_hd__dlygate4sd3_1 hold32 (.A(\rng_rd.ram_3[1] ),
    .X(net48));
 sky130_fd_sc_hd__dlygate4sd3_1 hold33 (.A(\rng_rd.ram_4[1] ),
    .X(net49));
 sky130_fd_sc_hd__dlygate4sd3_1 hold34 (.A(\rng_rd.ram_2[2] ),
    .X(net50));
 sky130_fd_sc_hd__dlygate4sd3_1 hold35 (.A(_019_),
    .X(net51));
 sky130_fd_sc_hd__dlygate4sd3_1 hold36 (.A(\num_i_bar[0] ),
    .X(net52));
 sky130_fd_sc_hd__dlygate4sd3_1 hold37 (.A(\rng_rd.ram_1[2] ),
    .X(net53));
 sky130_fd_sc_hd__dlygate4sd3_1 hold38 (.A(net4),
    .X(net54));
 sky130_fd_sc_hd__dlygate4sd3_1 hold39 (.A(net5),
    .X(net55));
endmodule
