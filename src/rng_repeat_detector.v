//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:59:15 02/05/2026 
// Design Name: 
// Module Name:    rng_repeat_detector 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module rng_repeat_detector(
    input clk_i,
    input start_i,
    input req_num_i,
    input rst_i,

    input       [7:0] num_i,
    output reg  [7:0] num_o,
    output write_again
);

    localparam APPROVE = 1'b1;
    localparam DECLINE = 1'b0;

    reg situation_state;
    reg request_another_num;
    reg temp_write;

    wire num_req;

    //Dados de números já entregues
    wire [7:0] pos_00;
    wire [7:0] pos_01;
    wire [7:0] pos_02;
    wire [7:0] pos_03;
    wire [7:0] pos_04;
    wire [7:0] pos_05;
    wire [7:0] pos_06;
    wire [7:0] pos_07;
    wire [7:0] pos_08;
    wire [7:0] pos_09;
    wire [7:0] pos_10;
    wire [7:0] pos_11;
    wire [7:0] pos_12;
    wire [7:0] pos_13;
    wire [7:0] pos_14;
    wire [7:0] pos_15;
    wire [7:0] pos_16;
    wire [7:0] pos_17;
    wire [7:0] pos_18;
    wire [7:0] pos_19;
    wire [7:0] pos_20;
    wire [7:0] pos_21;
    wire [7:0] pos_22;
    wire [7:0] pos_23;
    wire [7:0] pos_24;
    wire [7:0] pos_25;
    wire [7:0] pos_26;
    wire [7:0] pos_27;
    wire [7:0] pos_28;
    wire [7:0] pos_29;
    wire [7:0] pos_30;
    wire [7:0] pos_31;
    wire [7:0] pos_32;
    wire [7:0] pos_33;
    wire [7:0] pos_34;
    wire [7:0] pos_35;
    wire [7:0] pos_36;
    wire [7:0] pos_37;
    wire [7:0] pos_38;
    wire [7:0] pos_39;
    wire [7:0] pos_40;
    wire [7:0] pos_41;
    wire [7:0] pos_42;
    wire [7:0] pos_43;
    wire [7:0] pos_44;
    wire [7:0] pos_45;
    wire [7:0] pos_46;
    wire [7:0] pos_47;
    wire [7:0] pos_48;
    wire [7:0] pos_49;
    wire [7:0] pos_50;
    wire [7:0] pos_51;
    wire [7:0] pos_52;
    wire [7:0] pos_53;
    wire [7:0] pos_54;
    wire [7:0] pos_55;
    wire [7:0] pos_56;
    wire [7:0] pos_57;
    wire [7:0] pos_58;
    wire [7:0] pos_59;
    wire [7:0] pos_60;
    wire [7:0] pos_61;
    wire [7:0] pos_62;
    wire [7:0] pos_63;

    rng_fifo fifo(
                    .clk_i(clk_i),
                    .write(write_again),
                    .rst_i(rst_i),
                    .data_in(num_o),
                    .data_out_00(pos_00),
                    .data_out_01(pos_01),
                    .data_out_02(pos_02),
                    .data_out_03(pos_03),
                    .data_out_04(pos_04),
                    .data_out_05(pos_05),
                    .data_out_06(pos_06),
                    .data_out_07(pos_07),
                    .data_out_08(pos_08),
                    .data_out_09(pos_09),
                    .data_out_10(pos_10),
                    .data_out_11(pos_11),
                    .data_out_12(pos_12),
                    .data_out_13(pos_13),
                    .data_out_14(pos_14),
                    .data_out_15(pos_15),
                    .data_out_16(pos_16),
                    .data_out_17(pos_17),
                    .data_out_18(pos_18),
                    .data_out_19(pos_19),
                    .data_out_20(pos_20),
                    .data_out_21(pos_21),
                    .data_out_22(pos_22),
                    .data_out_23(pos_23),
                    .data_out_24(pos_24),
                    .data_out_25(pos_25),
                    .data_out_26(pos_26),
                    .data_out_27(pos_27),
                    .data_out_28(pos_28),
                    .data_out_29(pos_29),
                    .data_out_30(pos_30),
                    .data_out_31(pos_31),
                    .data_out_32(pos_32),
                    .data_out_33(pos_33),
                    .data_out_34(pos_34),
                    .data_out_35(pos_35),
                    .data_out_36(pos_36),
                    .data_out_37(pos_37),
                    .data_out_38(pos_38),
                    .data_out_39(pos_39),
                    .data_out_40(pos_40),
                    .data_out_41(pos_41),
                    .data_out_42(pos_42),
                    .data_out_43(pos_43),
                    .data_out_44(pos_44),
                    .data_out_45(pos_45),
                    .data_out_46(pos_46),
                    .data_out_47(pos_47),
                    .data_out_48(pos_48),
                    .data_out_49(pos_49),
                    .data_out_50(pos_50),
                    .data_out_51(pos_51),
                    .data_out_52(pos_52),
                    .data_out_53(pos_53),
                    .data_out_54(pos_54),
                    .data_out_55(pos_55),
                    .data_out_56(pos_56),
                    .data_out_57(pos_57),
                    .data_out_58(pos_58),
                    .data_out_59(pos_59),
                    .data_out_60(pos_60),
                    .data_out_61(pos_61),
                    .data_out_62(pos_62),
                    .data_out_63(pos_63)
                    );

always @(posedge clk_i)
begin
    case (num_i)
        pos_00, pos_01, pos_02, pos_03, pos_04, pos_05, pos_06, pos_07,
        pos_08, pos_09, pos_10, pos_11, pos_12, pos_13, pos_14, pos_15,
        pos_16, pos_17, pos_18, pos_19, pos_20, pos_21, pos_22, pos_23,
        pos_24, pos_25, pos_26, pos_27, pos_28, pos_29, pos_30, pos_31,
        pos_32, pos_33, pos_34, pos_35, pos_36, pos_37, pos_38, pos_39,
        pos_40, pos_41, pos_42, pos_43, pos_44, pos_45, pos_46, pos_47,
        pos_48, pos_49, pos_50, pos_51, pos_52, pos_53, pos_54, pos_55,
        pos_56, pos_57, pos_58, pos_59, pos_60, pos_61, pos_62, pos_63:
        situation_state <= DECLINE;
    default:
        situation_state <= APPROVE;
    endcase
end

always@(posedge clk_i)
    begin
        if(situation_state == APPROVE)
            begin
                num_o <= num_i;
                temp_write <= 1'b1;
            end
        else
            begin
                request_another_num <= 1'b1;
                num_o <= num_i;
                temp_write <= 1'b0;
            end
    end

assign num_req = request_another_num | req_num_i;
assign write_again = temp_write;

endmodule