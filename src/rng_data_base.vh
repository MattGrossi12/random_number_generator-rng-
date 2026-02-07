
/*

Os 2 primeiros bits serão reservados para indentificação da seed:

seed1 -> 2'b00;
seed2 -> 2'b01;
seed3 -> 2'b10;
seed4 -> 2'b11;

*/
//---------------------------------------------
//Seed1-number:
//---------------------------------------------
localparam seed1_01 = 8'b00000001;
localparam seed1_02 = 8'b00000010; 
localparam seed1_03 = 8'b00000011; 
localparam seed1_04 = 8'b00000100; 
localparam seed1_05 = 8'b00000101;  
localparam seed1_06 = 8'b00000110; 
localparam seed1_07 = 8'b00000111; 
localparam seed1_08 = 8'b00001000; 
localparam seed1_09 = 8'b00001001; 
localparam seed1_10 = 8'b00001010; 
localparam seed1_11 = 8'b00001011; 
localparam seed1_12 = 8'b00001100; 
localparam seed1_13 = 8'b00001101;
localparam seed1_14 = 8'b00010001;
localparam seed1_15 = 8'b00010010; 
localparam seed1_16 = 8'b00010011; 

//---------------------------------------------
//Seed2-number:
//---------------------------------------------
localparam seed2_01 = 8'b00000001;
localparam seed2_02 = 8'b00000010; 
localparam seed2_03 = 8'b00000011; 
localparam seed2_04 = 8'b00000100; 
localparam seed2_05 = 8'b00000101;  
localparam seed2_06 = 8'b00000110; 
localparam seed2_07 = 8'b00000111; 
localparam seed2_08 = 8'b00001000; 
localparam seed2_09 = 8'b00001001; 
localparam seed2_10 = 8'b00001010; 
localparam seed2_11 = 8'b00001011;
localparam seed2_12 = 8'b00001100;
localparam seed2_13 = 8'b00001101;
localparam seed2_14 = 8'b00010001;
localparam seed2_15 = 8'b00010010; 
localparam seed2_16 = 8'b00010011; 

//---------------------------------------------
//Seed3-number:
//---------------------------------------------
localparam seed3_01 = 8'b00000001;
localparam seed3_02 = 8'b00000010; 
localparam seed3_03 = 8'b00000011; 
localparam seed3_04 = 8'b00000100; 
localparam seed3_05 = 8'b00000101;  
localparam seed3_06 = 8'b00000110; 
localparam seed3_07 = 8'b00000111; 
localparam seed3_08 = 8'b00001000; 
localparam seed3_09 = 8'b00001001; 
localparam seed3_10 = 8'b00001010; 
localparam seed3_11 = 8'b00001011; 
localparam seed3_12 = 8'b00001100; 
localparam seed3_13 = 8'b00001101;
localparam seed3_14 = 8'b00010001;
localparam seed3_15 = 8'b00010010; 
localparam seed3_16 = 8'b00010011; 

//---------------------------------------------
//Seed4-number:
//---------------------------------------------
localparam seed4_01 = 8'b00000001;
localparam seed4_02 = 8'b00000010; 
localparam seed4_03 = 8'b00000011; 
localparam seed4_04 = 8'b00000100; 
localparam seed4_05 = 8'b00000101;  
localparam seed4_06 = 8'b00000110; 
localparam seed4_07 = 8'b00000111; 
localparam seed4_08 = 8'b00001000; 
localparam seed4_09 = 8'b00001001; 
localparam seed4_10 = 8'b00001010; 
localparam seed4_11 = 8'b00001011; 
localparam seed4_12 = 8'b00001100; 
localparam seed4_13 = 8'b00001101;
localparam seed4_14 = 8'b00010001;
localparam seed4_15 = 8'b00010010; 
localparam seed4_16 = 8'b00010011; 

//--------------------------------------------------------------
//          Positions
//--------------------------------------------------------------
//Seed1
localparam position_s1_01 = seed1_51;
localparam position_s1_02 = seed1_16;
localparam position_s1_03 = seed1_35;
localparam position_s1_04 = seed1_08;
localparam position_s1_05 = seed1_34;
localparam position_s1_06 = seed1_36;
localparam position_s1_07 = seed1_12;
localparam position_s1_08 = seed1_44;
localparam position_s1_09 = seed1_31;
localparam position_s1_10 = seed1_03;
localparam position_s1_11 = seed1_32;
localparam position_s1_12 = seed1_01;
localparam position_s1_13 = seed1_49;
localparam position_s1_14 = seed1_07;
localparam position_s1_15 = seed1_20;
localparam position_s1_16 = seed1_42;

//--------------------------------------------------------------
//          Positions
//--------------------------------------------------------------
//Seed2:
localparam position_s2_01 = seed2_49;
localparam position_s2_02 = seed2_05;
localparam position_s2_03 = seed2_08;
localparam position_s2_04 = seed2_26;
localparam position_s2_05 = seed2_34;
localparam position_s2_06 = seed2_27;
localparam position_s2_07 = seed2_50;
localparam position_s2_08 = seed2_31;
localparam position_s2_09 = seed2_14;
localparam position_s2_10 = seed2_04;
localparam position_s2_11 = seed2_10;
localparam position_s2_12 = seed2_11;
localparam position_s2_13 = seed2_07;
localparam position_s2_14 = seed2_52;
localparam position_s2_15 = seed2_45;
localparam position_s2_16 = seed2_33;
localparam position_s2_17 = seed2_12;

//--------------------------------------------------------------
//          Positions
//--------------------------------------------------------------
//Seed3:
localparam position_s3_01 = seed3_42;
localparam position_s3_02 = seed3_12;
localparam position_s3_03 = seed3_40;
localparam position_s3_04 = seed3_11;
localparam position_s3_05 = seed3_23;
localparam position_s3_06 = seed3_29;
localparam position_s3_07 = seed3_35;
localparam position_s3_08 = seed3_16;
localparam position_s3_09 = seed3_02;
localparam position_s3_10 = seed3_43;
localparam position_s3_11 = seed3_36;
localparam position_s3_12 = seed3_37;
localparam position_s3_13 = seed3_10;
localparam position_s3_14 = seed3_15;
localparam position_s3_15 = seed3_47;
localparam position_s3_16 = seed3_46;

//--------------------------------------------------------------
//          Positions
//--------------------------------------------------------------
//Seed4:
localparam position_s4_01 = seed4_35;
localparam position_s4_02 = seed4_40;
localparam position_s4_03 = seed4_33;
localparam position_s4_04 = seed4_06;
localparam position_s4_05 = seed4_49;
localparam position_s4_06 = seed4_13;
localparam position_s4_07 = seed4_18;
localparam position_s4_08 = seed4_27;
localparam position_s4_09 = seed4_48;
localparam position_s4_10 = seed4_08;
localparam position_s4_11 = seed4_29;
localparam position_s4_12 = seed4_43;
localparam position_s4_13 = seed4_39;
localparam position_s4_14 = seed4_02;
localparam position_s4_15 = seed4_45;
localparam position_s4_16 = seed4_01;