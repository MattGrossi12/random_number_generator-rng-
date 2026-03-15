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
 wire VPWR;
 wire VGND;

 sky130_fd_sc_hd__inv_2 _079_ (.A(\rng_rd.cache[1] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_051_));
 sky130_fd_sc_hd__inv_2 _080_ (.A(\rng_rd.cache[2] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_052_));
 sky130_fd_sc_hd__or3_2 _081_ (.A(req_num_i),
    .B(\rng_rd.req_num ),
    .C(req_num),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(req_num));
 sky130_fd_sc_hd__or2_2 _082_ (.A(\rng_rd.cache[0] ),
    .B(\rng_rd.ram_5[0] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_053_));
 sky130_fd_sc_hd__nand2_2 _083_ (.A(\rng_rd.cache[0] ),
    .B(\rng_rd.ram_5[0] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_054_));
 sky130_fd_sc_hd__or2_2 _084_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_5[2] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_055_));
 sky130_fd_sc_hd__nand2_2 _085_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_5[2] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_056_));
 sky130_fd_sc_hd__xor2_2 _086_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_5[1] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_057_));
 sky130_fd_sc_hd__a221o_2 _087_ (.A1(_053_),
    .A2(_054_),
    .B1(_055_),
    .B2(_056_),
    .C1(_057_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_058_));
 sky130_fd_sc_hd__xor2_2 _088_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_3[2] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_059_));
 sky130_fd_sc_hd__xor2_2 _089_ (.A(\rng_rd.cache[0] ),
    .B(\rng_rd.ram_3[0] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_060_));
 sky130_fd_sc_hd__xor2_2 _090_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_3[1] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_061_));
 sky130_fd_sc_hd__or2_2 _091_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_6[2] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_062_));
 sky130_fd_sc_hd__nand2_2 _092_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_6[2] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_063_));
 sky130_fd_sc_hd__xor2_2 _093_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_6[1] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_064_));
 sky130_fd_sc_hd__or2_2 _094_ (.A(\rng_rd.cache[0] ),
    .B(\rng_rd.ram_6[0] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_065_));
 sky130_fd_sc_hd__nand2_2 _095_ (.A(\rng_rd.cache[0] ),
    .B(\rng_rd.ram_6[0] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_066_));
 sky130_fd_sc_hd__a221o_2 _096_ (.A1(_062_),
    .A2(_063_),
    .B1(_065_),
    .B2(_066_),
    .C1(_064_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_067_));
 sky130_fd_sc_hd__o311a_2 _097_ (.A1(_059_),
    .A2(_060_),
    .A3(_061_),
    .B1(_067_),
    .C1(_058_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_068_));
 sky130_fd_sc_hd__xor2_2 _098_ (.A(num_to_send_o[0]),
    .B(\rng_rd.cache[0] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_069_));
 sky130_fd_sc_hd__a221oi_2 _099_ (.A1(num_to_send_o[1]),
    .A2(_051_),
    .B1(num_to_send_o[2]),
    .B2(_052_),
    .C1(_069_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_070_));
 sky130_fd_sc_hd__o221a_2 _100_ (.A1(num_to_send_o[1]),
    .A2(_051_),
    .B1(num_to_send_o[2]),
    .B2(_052_),
    .C1(_070_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_071_));
 sky130_fd_sc_hd__xor2_2 _101_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_2[1] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_072_));
 sky130_fd_sc_hd__xor2_2 _102_ (.A(\rng_rd.cache[0] ),
    .B(\rng_rd.ram_2[0] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_073_));
 sky130_fd_sc_hd__or2_2 _103_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_2[2] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_074_));
 sky130_fd_sc_hd__nand2_2 _104_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_2[2] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_075_));
 sky130_fd_sc_hd__a211o_2 _105_ (.A1(_074_),
    .A2(_075_),
    .B1(_072_),
    .C1(_073_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_076_));
 sky130_fd_sc_hd__xor2_2 _106_ (.A(\rng_rd.cache[0] ),
    .B(\rng_rd.ram_7[0] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_077_));
 sky130_fd_sc_hd__or2_2 _107_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_7[2] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_078_));
 sky130_fd_sc_hd__nand2_2 _108_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_7[2] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_032_));
 sky130_fd_sc_hd__nand2_2 _109_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_7[1] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_033_));
 sky130_fd_sc_hd__or2_2 _110_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_7[1] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_034_));
 sky130_fd_sc_hd__a221o_2 _111_ (.A1(_078_),
    .A2(_032_),
    .B1(_033_),
    .B2(_034_),
    .C1(_077_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_035_));
 sky130_fd_sc_hd__xor2_2 _112_ (.A(\rng_rd.cache[0] ),
    .B(\rng_rd.ram_4[0] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_036_));
 sky130_fd_sc_hd__nand2_2 _113_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_4[1] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_037_));
 sky130_fd_sc_hd__or2_2 _114_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_4[1] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_038_));
 sky130_fd_sc_hd__or2_2 _115_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_4[2] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_039_));
 sky130_fd_sc_hd__nand2_2 _116_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_4[2] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_040_));
 sky130_fd_sc_hd__a221o_2 _117_ (.A1(_037_),
    .A2(_038_),
    .B1(_039_),
    .B2(_040_),
    .C1(_036_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_041_));
 sky130_fd_sc_hd__xor2_2 _118_ (.A(\rng_rd.cache[0] ),
    .B(\rng_rd.ram_1[0] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_042_));
 sky130_fd_sc_hd__nand2_2 _119_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_1[1] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_043_));
 sky130_fd_sc_hd__or2_2 _120_ (.A(\rng_rd.cache[1] ),
    .B(\rng_rd.ram_1[1] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_044_));
 sky130_fd_sc_hd__xor2_2 _121_ (.A(\rng_rd.cache[2] ),
    .B(\rng_rd.ram_1[2] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_045_));
 sky130_fd_sc_hd__a211o_2 _122_ (.A1(_043_),
    .A2(_044_),
    .B1(_045_),
    .C1(_042_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_046_));
 sky130_fd_sc_hd__and4_2 _123_ (.A(_076_),
    .B(_035_),
    .C(_041_),
    .D(_046_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_047_));
 sky130_fd_sc_hd__and4b_2 _124_ (.A_N(_071_),
    .B(_047_),
    .C(\rng_rd.wr_pulse ),
    .D(_068_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_048_));
 sky130_fd_sc_hd__inv_2 _125_ (.A(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_000_));
 sky130_fd_sc_hd__and2b_2 _126_ (.A_N(\rng_rd.wr_ff2_d ),
    .B(\rng_rd.wr_ff2 ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_001_));
 sky130_fd_sc_hd__mux2_1 _127_ (.A0(\rng_rd.cache[0] ),
    .A1(\num_i_bar[0] ),
    .S(wr_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_002_));
 sky130_fd_sc_hd__mux2_1 _128_ (.A0(\rng_rd.cache[1] ),
    .A1(\num_i_bar[1] ),
    .S(wr_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_003_));
 sky130_fd_sc_hd__mux2_1 _129_ (.A0(\rng_rd.cache[2] ),
    .A1(\num_i_bar[2] ),
    .S(wr_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_004_));
 sky130_fd_sc_hd__mux2_1 _130_ (.A0(\rng_rd.ram_7[0] ),
    .A1(\rng_rd.ram_6[0] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_005_));
 sky130_fd_sc_hd__mux2_1 _131_ (.A0(\rng_rd.ram_7[1] ),
    .A1(\rng_rd.ram_6[1] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_006_));
 sky130_fd_sc_hd__mux2_1 _132_ (.A0(\rng_rd.ram_7[2] ),
    .A1(\rng_rd.ram_6[2] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_007_));
 sky130_fd_sc_hd__mux2_1 _133_ (.A0(\rng_rd.ram_5[0] ),
    .A1(\rng_rd.ram_4[0] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_008_));
 sky130_fd_sc_hd__mux2_1 _134_ (.A0(\rng_rd.ram_5[1] ),
    .A1(\rng_rd.ram_4[1] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_009_));
 sky130_fd_sc_hd__mux2_1 _135_ (.A0(\rng_rd.ram_5[2] ),
    .A1(\rng_rd.ram_4[2] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_010_));
 sky130_fd_sc_hd__mux2_1 _136_ (.A0(\rng_rd.ram_4[0] ),
    .A1(\rng_rd.ram_3[0] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_011_));
 sky130_fd_sc_hd__mux2_1 _137_ (.A0(\rng_rd.ram_4[1] ),
    .A1(\rng_rd.ram_3[1] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_012_));
 sky130_fd_sc_hd__mux2_1 _138_ (.A0(\rng_rd.ram_4[2] ),
    .A1(\rng_rd.ram_3[2] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_013_));
 sky130_fd_sc_hd__mux2_1 _139_ (.A0(\rng_rd.ram_3[0] ),
    .A1(\rng_rd.ram_2[0] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_014_));
 sky130_fd_sc_hd__mux2_1 _140_ (.A0(\rng_rd.ram_3[1] ),
    .A1(\rng_rd.ram_2[1] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_015_));
 sky130_fd_sc_hd__mux2_1 _141_ (.A0(\rng_rd.ram_3[2] ),
    .A1(\rng_rd.ram_2[2] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_016_));
 sky130_fd_sc_hd__mux2_1 _142_ (.A0(\rng_rd.ram_2[0] ),
    .A1(\rng_rd.ram_1[0] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_017_));
 sky130_fd_sc_hd__mux2_1 _143_ (.A0(\rng_rd.ram_2[1] ),
    .A1(\rng_rd.ram_1[1] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_018_));
 sky130_fd_sc_hd__mux2_1 _144_ (.A0(\rng_rd.ram_2[2] ),
    .A1(\rng_rd.ram_1[2] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_019_));
 sky130_fd_sc_hd__mux2_1 _145_ (.A0(\rng_rd.ram_1[0] ),
    .A1(num_to_send_o[0]),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_020_));
 sky130_fd_sc_hd__mux2_1 _146_ (.A0(\rng_rd.ram_1[1] ),
    .A1(num_to_send_o[1]),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_021_));
 sky130_fd_sc_hd__mux2_1 _147_ (.A0(\rng_rd.ram_1[2] ),
    .A1(num_to_send_o[2]),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_022_));
 sky130_fd_sc_hd__mux2_1 _148_ (.A0(num_to_send_o[0]),
    .A1(\rng_rd.cache[0] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_023_));
 sky130_fd_sc_hd__mux2_1 _149_ (.A0(num_to_send_o[1]),
    .A1(\rng_rd.cache[1] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_024_));
 sky130_fd_sc_hd__mux2_1 _150_ (.A0(num_to_send_o[2]),
    .A1(\rng_rd.cache[2] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_025_));
 sky130_fd_sc_hd__xor2_2 _151_ (.A(\num_i_bar[0] ),
    .B(req_num),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_026_));
 sky130_fd_sc_hd__a21oi_2 _152_ (.A1(\num_i_bar[0] ),
    .A2(req_num),
    .B1(\num_i_bar[1] ),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_049_));
 sky130_fd_sc_hd__and3_2 _153_ (.A(\num_i_bar[1] ),
    .B(\num_i_bar[0] ),
    .C(req_num),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_050_));
 sky130_fd_sc_hd__nor2_2 _154_ (.A(_049_),
    .B(_050_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Y(_027_));
 sky130_fd_sc_hd__xor2_2 _155_ (.A(\num_i_bar[2] ),
    .B(_050_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_028_));
 sky130_fd_sc_hd__mux2_1 _156_ (.A0(\rng_rd.ram_6[0] ),
    .A1(\rng_rd.ram_5[0] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_029_));
 sky130_fd_sc_hd__mux2_1 _157_ (.A0(\rng_rd.ram_6[1] ),
    .A1(\rng_rd.ram_5[1] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_030_));
 sky130_fd_sc_hd__mux2_1 _158_ (.A0(\rng_rd.ram_6[2] ),
    .A1(\rng_rd.ram_5[2] ),
    .S(_048_),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .X(_031_));
 sky130_fd_sc_hd__dfrtp_2 _159_ (.CLK(clk_i),
    .D(_002_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.cache[0] ));
 sky130_fd_sc_hd__dfrtp_2 _160_ (.CLK(clk_i),
    .D(_003_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.cache[1] ));
 sky130_fd_sc_hd__dfrtp_2 _161_ (.CLK(clk_i),
    .D(_004_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.cache[2] ));
 sky130_fd_sc_hd__dfrtp_2 _162_ (.CLK(clk_i),
    .D(_005_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_7[0] ));
 sky130_fd_sc_hd__dfrtp_2 _163_ (.CLK(clk_i),
    .D(_006_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_7[1] ));
 sky130_fd_sc_hd__dfrtp_2 _164_ (.CLK(clk_i),
    .D(_007_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_7[2] ));
 sky130_fd_sc_hd__dfrtp_2 _165_ (.CLK(clk_i),
    .D(_008_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_5[0] ));
 sky130_fd_sc_hd__dfrtp_2 _166_ (.CLK(clk_i),
    .D(_009_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_5[1] ));
 sky130_fd_sc_hd__dfrtp_2 _167_ (.CLK(clk_i),
    .D(_010_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_5[2] ));
 sky130_fd_sc_hd__dfrtp_2 _168_ (.CLK(clk_i),
    .D(wr_i),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.wr_ff1 ));
 sky130_fd_sc_hd__dfrtp_2 _169_ (.CLK(clk_i),
    .D(_011_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_4[0] ));
 sky130_fd_sc_hd__dfrtp_2 _170_ (.CLK(clk_i),
    .D(_012_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_4[1] ));
 sky130_fd_sc_hd__dfrtp_2 _171_ (.CLK(clk_i),
    .D(_013_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_4[2] ));
 sky130_fd_sc_hd__dfrtp_2 _172_ (.CLK(clk_i),
    .D(_014_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_3[0] ));
 sky130_fd_sc_hd__dfrtp_2 _173_ (.CLK(clk_i),
    .D(_015_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_3[1] ));
 sky130_fd_sc_hd__dfrtp_2 _174_ (.CLK(clk_i),
    .D(_016_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_3[2] ));
 sky130_fd_sc_hd__dfrtp_2 _175_ (.CLK(clk_i),
    .D(_017_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_2[0] ));
 sky130_fd_sc_hd__dfrtp_2 _176_ (.CLK(clk_i),
    .D(_018_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_2[1] ));
 sky130_fd_sc_hd__dfrtp_2 _177_ (.CLK(clk_i),
    .D(_019_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_2[2] ));
 sky130_fd_sc_hd__dfrtp_2 _178_ (.CLK(clk_i),
    .D(\rng_rd.wr_ff1 ),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.wr_ff2 ));
 sky130_fd_sc_hd__dfrtp_2 _179_ (.CLK(clk_i),
    .D(_020_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_1[0] ));
 sky130_fd_sc_hd__dfrtp_2 _180_ (.CLK(clk_i),
    .D(_021_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_1[1] ));
 sky130_fd_sc_hd__dfrtp_2 _181_ (.CLK(clk_i),
    .D(_022_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_1[2] ));
 sky130_fd_sc_hd__dfrtp_2 _182_ (.CLK(clk_i),
    .D(_023_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(num_to_send_o[0]));
 sky130_fd_sc_hd__dfrtp_2 _183_ (.CLK(clk_i),
    .D(_024_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(num_to_send_o[1]));
 sky130_fd_sc_hd__dfrtp_2 _184_ (.CLK(clk_i),
    .D(_025_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(num_to_send_o[2]));
 sky130_fd_sc_hd__dfrtp_2 _185_ (.CLK(clk_i),
    .D(\rng_rd.wr_ff2 ),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.wr_ff2_d ));
 sky130_fd_sc_hd__dfrtp_2 _186_ (.CLK(clk_i),
    .D(_026_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\num_i_bar[0] ));
 sky130_fd_sc_hd__dfrtp_2 _187_ (.CLK(clk_i),
    .D(_027_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\num_i_bar[1] ));
 sky130_fd_sc_hd__dfrtp_2 _188_ (.CLK(clk_i),
    .D(_028_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\num_i_bar[2] ));
 sky130_fd_sc_hd__dfrtp_2 _189_ (.CLK(clk_i),
    .D(_000_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.req_num ));
 sky130_fd_sc_hd__dfrtp_2 _190_ (.CLK(clk_i),
    .D(_029_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_6[0] ));
 sky130_fd_sc_hd__dfrtp_2 _191_ (.CLK(clk_i),
    .D(_030_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_6[1] ));
 sky130_fd_sc_hd__dfrtp_2 _192_ (.CLK(clk_i),
    .D(_031_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.ram_6[2] ));
 sky130_fd_sc_hd__dfrtp_2 _193_ (.CLK(clk_i),
    .D(_001_),
    .RESET_B(rst_i),
    .VGND(VGND),
    .VNB(VGND),
    .VPB(VPWR),
    .VPWR(VPWR),
    .Q(\rng_rd.wr_pulse ));
endmodule
