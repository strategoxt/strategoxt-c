#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Hashtable_1;
Symbol sym_ErrorNumber_1;
Symbol sym_Path_1;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_FILE_1;
Symbol sym_TempFiles_0;
Symbol sym_Strategies_1;
Symbol sym_Rules_1;
Symbol sym_Specification_1;
Symbol sym_SVar_1;
Symbol sym_Path_2;
Symbol sym_Call_2;
Symbol sym_SDef_3;
Symbol sym_RDef_3;
static void init_module_constructors (void)
{
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_ErrorNumber_1 = ATmakeSymbol("ErrorNumber", 1, ATfalse);
  ATprotectSymbol(sym_ErrorNumber_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
}
ATerm term_t_96;
ATerm term_f_96;
ATerm term_e_96;
ATerm term_z_95;
ATerm term_y_95;
ATerm term_v_95;
ATerm term_p_95;
ATerm term_l_95;
ATerm term_c_95;
ATerm term_y_94;
ATerm term_v_94;
ATerm term_u_94;
ATerm term_t_94;
ATerm term_p_94;
ATerm term_o_94;
ATerm term_m_94;
ATerm term_l_94;
ATerm term_k_94;
ATerm term_j_94;
ATerm term_i_94;
ATerm term_h_94;
ATerm term_g_94;
ATerm term_f_94;
ATerm term_e_94;
ATerm term_d_94;
ATerm term_c_94;
ATerm term_b_94;
ATerm term_a_94;
ATerm term_z_93;
ATerm term_y_93;
ATerm term_x_93;
ATerm term_q_93;
ATerm term_p_93;
ATerm term_o_93;
ATerm term_i_93;
ATerm term_g_93;
ATerm term_n_92;
ATerm term_m_92;
ATerm term_l_92;
ATerm term_z_91;
ATerm term_l_91;
ATerm term_j_91;
ATerm term_i_91;
ATerm term_h_91;
ATerm term_d_91;
ATerm term_j_86;
ATerm term_i_86;
ATerm term_b_86;
ATerm term_a_86;
ATerm term_x_85;
ATerm term_w_85;
ATerm term_v_85;
ATerm term_u_85;
ATerm term_t_85;
ATerm term_n_85;
ATerm term_k_85;
ATerm term_j_85;
ATerm term_h_85;
ATerm term_g_85;
ATerm term_f_85;
ATerm term_e_85;
ATerm term_d_85;
ATerm term_c_85;
ATerm term_b_85;
ATerm term_y_84;
ATerm term_v_84;
ATerm term_s_84;
ATerm term_p_84;
ATerm term_o_84;
ATerm term_n_84;
ATerm term_m_84;
ATerm term_l_84;
ATerm term_k_84;
ATerm term_j_84;
ATerm term_i_84;
ATerm term_h_84;
ATerm term_e_84;
ATerm term_d_84;
ATerm term_z_83;
ATerm term_y_83;
ATerm term_x_83;
ATerm term_w_83;
ATerm term_v_83;
ATerm term_u_83;
ATerm term_t_83;
ATerm term_s_83;
ATerm term_r_83;
ATerm term_n_83;
ATerm term_l_83;
ATerm term_k_83;
ATerm term_i_83;
ATerm term_h_83;
ATerm term_p_82;
ATerm term_m_82;
ATerm term_g_82;
ATerm term_f_82;
ATerm term_d_82;
ATerm term_c_82;
ATerm term_w_81;
ATerm term_v_81;
ATerm term_o_81;
ATerm term_m_81;
ATerm term_l_81;
ATerm term_k_81;
ATerm term_g_81;
ATerm term_b_81;
ATerm term_u_80;
ATerm term_t_80;
ATerm term_s_80;
ATerm term_r_80;
ATerm term_k_78;
ATerm term_j_78;
ATerm term_i_78;
ATerm term_f_78;
ATerm term_b_78;
ATerm term_z_77;
ATerm term_w_77;
ATerm term_r_77;
ATerm term_q_77;
ATerm term_n_77;
ATerm term_c_76;
ATerm term_b_76;
ATerm term_z_75;
ATerm term_x_75;
ATerm term_w_75;
ATerm term_o_75;
ATerm term_n_75;
ATerm term_m_75;
ATerm term_i_75;
ATerm term_b_75;
ATerm term_w_74;
ATerm term_v_74;
ATerm term_r_74;
ATerm term_q_74;
ATerm term_p_74;
ATerm term_o_74;
ATerm term_j_74;
ATerm term_h_74;
ATerm term_g_74;
ATerm term_f_74;
ATerm term_d_74;
ATerm term_b_74;
ATerm term_a_74;
ATerm term_z_73;
ATerm term_y_73;
ATerm term_x_73;
ATerm term_w_73;
ATerm term_v_73;
ATerm term_u_73;
ATerm term_t_73;
ATerm term_q_73;
ATerm term_p_73;
ATerm term_l_73;
ATerm term_z_72;
ATerm term_v_72;
ATerm term_u_72;
ATerm term_t_72;
ATerm term_s_72;
ATerm term_p_72;
ATerm term_y_71;
ATerm term_x_71;
ATerm term_w_71;
ATerm term_v_71;
ATerm term_u_71;
ATerm term_t_71;
ATerm term_s_71;
ATerm term_r_71;
ATerm term_q_71;
ATerm term_p_71;
ATerm term_o_71;
ATerm term_n_71;
ATerm term_h_69;
ATerm term_g_69;
ATerm term_f_69;
ATerm term_e_69;
ATerm term_b_69;
ATerm term_a_69;
ATerm term_z_68;
ATerm term_r_68;
ATerm term_q_68;
ATerm term_m_68;
ATerm term_l_68;
ATerm term_j_68;
ATerm term_i_68;
ATerm term_h_68;
ATerm term_f_68;
ATerm term_e_68;
ATerm term_c_68;
ATerm term_a_68;
ATerm term_z_67;
ATerm term_k_67;
ATerm term_c_66;
ATerm term_q_65;
ATerm term_m_65;
ATerm term_k_65;
ATerm term_v_64;
ATerm term_t_64;
ATerm term_a_64;
ATerm term_w_63;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_q_63;
ATerm term_o_63;
ATerm term_n_63;
ATerm term_k_63;
ATerm term_j_63;
ATerm term_i_63;
ATerm term_f_63;
ATerm term_q_62;
ATerm term_g_62;
ATerm term_f_62;
ATerm term_a_62;
ATerm term_z_61;
ATerm term_w_61;
ATerm term_v_61;
ATerm term_j_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_a_61;
ATerm term_z_60;
ATerm term_u_60;
ATerm term_l_60;
ATerm term_k_60;
ATerm term_d_60;
ATerm term_l_59;
ATerm term_j_59;
ATerm term_h_59;
ATerm term_g_59;
ATerm term_f_59;
ATerm term_e_59;
ATerm term_o_58;
ATerm term_n_58;
ATerm term_a_58;
ATerm term_z_57;
ATerm term_q_57;
ATerm term_m_57;
ATerm term_l_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_b_57;
ATerm term_x_56;
ATerm term_w_56;
ATerm term_v_56;
ATerm term_u_56;
ATerm term_t_56;
ATerm term_l_56;
ATerm term_f_56;
ATerm term_x_55;
ATerm term_u_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_g_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_a_55;
ATerm term_z_54;
ATerm term_y_54;
ATerm term_x_54;
ATerm term_u_54;
ATerm term_t_54;
ATerm term_r_54;
ATerm term_q_54;
ATerm term_p_54;
ATerm term_o_54;
ATerm term_n_54;
ATerm term_m_54;
ATerm term_l_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_f_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_w_53;
ATerm term_v_53;
ATerm term_u_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_h_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_c_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_s_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_n_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_v_49;
ATerm term_t_49;
ATerm term_r_49;
ATerm term_n_49;
ATerm term_b_49;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_c_48;
ATerm term_b_48;
ATerm term_s_47;
ATerm term_r_47;
ATerm term_o_47;
ATerm term_n_47;
ATerm term_m_47;
ATerm term_k_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_z_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_q_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_z_45;
ATerm term_x_45;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_o_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_y_44;
ATerm term_t_44;
ATerm term_j_44;
ATerm term_g_44;
ATerm term_f_44;
ATerm term_c_44;
ATerm term_b_44;
ATerm term_y_43;
ATerm term_w_43;
ATerm term_r_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_i_43;
ATerm term_e_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_q_42;
ATerm term_n_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_x_41;
ATerm term_q_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_o_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_d_40;
ATerm term_a_40;
ATerm term_x_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_t_38;
ATerm term_p_38;
ATerm term_n_38;
ATerm term_l_38;
ATerm term_f_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_v_37;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_c_38);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("linking object code", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_x_38);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("libtool", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_a_39);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--mode=link", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("gcc", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling C code", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".o", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_k_39);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_o_39);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("C compilation succeeded: ", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_t_39);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("C-pretty.pp", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("s2c", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--library", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_o_40);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_k_40);
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("back-end succeeded:      ", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("canonicalize", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".can", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("lift-definitions", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt15", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify1", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt16", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt17", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Canonical-Format", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".c", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("export-external-defs succeeded:      ", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("name for library same as name for base file: ", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol(".rtree", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-stratego", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol(".str", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("defs-to-external-defs", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_n_43);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("basein", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_p_43);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" concrete syntax in ", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_b_44);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-O", 0, ATtrue));
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_f_44);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("bound-unbound-vars", 0, ATtrue));
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-def-elim", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--only-local", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization succeeded:  ", 0, ATtrue));
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("optimization level: ", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt1", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_t_45);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt2", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("worker-wrapper", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3a", 0, ATtrue));
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("inline", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt3", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("define-congruences", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("const-prop", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("dead-var-elim", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify3", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt4", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("compile-match", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar-case", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt5", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt7", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt8", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("simplify2", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt9", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt10", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt11", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt12", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt13", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Optimized-Format", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".opt14", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".sci", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(ATmakeSymbol(".txt", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax in `", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("', concrete syntax in `", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("'", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_50, term_f_39, term_j_50);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_50, term_l_38, term_n_50);
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_50, term_b_42, term_s_50);
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_50, term_a_51, term_b_51);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_51, term_e_51, term_k_51);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_51, term_o_51, term_p_51);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_51, term_x_51, term_y_51);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_52));
  term_c_52 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_52, term_c_52, term_d_52);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_52, term_j_52, term_k_52);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_52, term_n_52, term_o_52);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_52, term_r_52, term_s_52);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_52, term_e_45, term_v_52);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_52, term_y_52, term_z_52);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_53, term_c_53, term_f_53);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_53, term_i_53, term_j_53);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_53, term_m_53, term_n_53);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_53, term_q_53, term_r_53);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_53, term_u_53, term_v_53);
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_53, term_y_53, term_z_53);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_54, term_c_54, term_d_54);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_54, term_g_54, term_h_54);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_54, term_k_54, term_l_54);
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_54, term_o_54, term_p_54);
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_54, term_t_54, term_u_54);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_54, term_o_47, term_z_54);
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_55, term_d_55, term_e_55);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_55, term_k_55, term_l_55);
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_55, term_t_55, term_u_55);
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_56));
  term_t_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_u_56));
  term_u_56 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_t_56);
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("        missing build operator", 0, ATtrue));
  ATprotect(&(term_x_56));
  term_x_56 = (ATerm) ATmakeAppl(sym__2, term_v_56, term_w_56);
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete strategies", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(sym__2, term_b_57, term_c_57);
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol("maybe-unbound-variables", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound variables", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(sym__2, term_g_57, term_h_57);
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case-constructors", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case constructors", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(sym__2, term_j_57, term_k_57);
  ATprotect(&(term_m_57));
  term_m_57 = (ATerm) ATmakeAppl(ATmakeSymbol("extract-all", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol(".tree", 0, ATtrue));
  ATprotect(&(term_z_57));
  term_z_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-F", 0, ATtrue));
  ATprotect(&(term_a_58));
  term_a_58 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_z_57);
  ATprotect(&(term_n_58));
  term_n_58 = (ATerm) ATmakeAppl(ATmakeSymbol("extracting all definitions failed", 0, ATtrue));
  ATprotect(&(term_o_58));
  term_o_58 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after frontend) written to file", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_e_59);
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue));
  ATprotect(&(term_h_59));
  term_h_59 = (ATerm) ATmakeAppl(ATmakeSymbol("normalize-spec", 0, ATtrue));
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_l_59));
  term_l_59 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_j_59);
  ATprotect(&(term_d_60));
  term_d_60 = (ATerm) ATmakeAppl(ATmakeSymbol("Adding main strategy even though one is already present!", 0, ATtrue));
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("main", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("TMPDIR", 0, ATtrue));
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(ATmakeSymbol("main strategy is: ", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(ATmakeSymbol(".with-main", 0, ATtrue));
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_g_62));
  term_g_62 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_f_62);
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(sym__2, term_i_61, term_u_60);
  ATprotect(&(term_f_63));
  term_f_63 = (ATerm) ATmakeAppl(ATmakeSymbol(".ast", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast", 0, ATtrue));
  ATprotect(&(term_j_63));
  term_j_63 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_i_63);
  ATprotect(&(term_k_63));
  term_k_63 = (ATerm) ATmakeAppl(ATmakeSymbol("abstract syntax (after parsing) written to file", 0, ATtrue));
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_n_63);
  ATprotect(&(term_q_63));
  term_q_63 = (ATerm) ATmakeAppl(ATmakeSymbol("lib.rtree", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego.rtree", 0, ATtrue));
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_a_64));
  term_a_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix", 0, ATtrue));
  ATprotect(&(term_t_64));
  term_t_64 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_a_64);
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(ATmakeSymbol("--dep", 0, ATtrue));
  ATprotect(&(term_k_65));
  term_k_65 = (ATerm) ATmakeAppl(ATmakeSymbol("basein: ", 0, ATtrue));
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(ATmakeSymbol("baseout: ", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end: ", 0, ATtrue));
  ATprotect(&(term_c_66));
  term_c_66 = (ATerm) ATmakeAppl(ATmakeSymbol("use-def", 0, ATtrue));
  ATprotect(&(term_k_67));
  term_k_67 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-warnings", 0, ATtrue));
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(ATmakeSymbol("front-end succeeded:     ", 0, ATtrue));
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(ATmakeSymbol("repair-types", 0, ATtrue));
  ATprotect(&(term_c_68));
  term_c_68 = (ATerm) ATmakeAppl(ATmakeSymbol("pre-desugar", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".pre-desugar", 0, ATtrue));
  ATprotect(&(term_f_68));
  term_f_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".normalize-spec", 0, ATtrue));
  ATprotect(&(term_h_68));
  term_h_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".use-def", 0, ATtrue));
  ATprotect(&(term_i_68));
  term_i_68 = (ATerm) ATmakeAppl(ATmakeSymbol("check-constructors", 0, ATtrue));
  ATprotect(&(term_j_68));
  term_j_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".check-constructors", 0, ATtrue));
  ATprotect(&(term_l_68));
  term_l_68 = (ATerm) ATmakeAppl(ATmakeSymbol("spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_m_68));
  term_m_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".spec-to-sdefs", 0, ATtrue));
  ATprotect(&(term_q_68));
  term_q_68 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-vars", 0, ATtrue));
  ATprotect(&(term_r_68));
  term_r_68 = (ATerm) ATmakeAppl(ATmakeSymbol(".renamed", 0, ATtrue));
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(ATmakeSymbol("desugar", 0, ATtrue));
  ATprotect(&(term_a_69));
  term_a_69 = (ATerm) ATmakeAppl(ATmakeSymbol(".desugared", 0, ATtrue));
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(ATmakeSymbol("extract", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol(".ext", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-Normal-Format", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("rename-defs", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(ATmakeSymbol(".rn", 0, ATtrue));
  ATprotect(&(term_n_71));
  term_n_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" user ", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(ATmakeSymbol(" system ", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(ATmakeSymbol("VERSION", 0, ATtrue));
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_p_71);
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC ", 0, ATtrue));
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("\n\n", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(ATmakeSymbol("Copyright (C) 1998-2003 Eelco Visser <visser@acm.org>\n", 0, ATtrue));
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(ATmakeSymbol("This library is free software; you can redistribute it and/or\n", 0, ATtrue));
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(ATmakeSymbol("modify it under the terms of the GNU Lesser General Public\n", 0, ATtrue));
  ATprotect(&(term_x_71));
  term_x_71 = (ATerm) ATmakeAppl(ATmakeSymbol("License as published by the Free Software Foundation; either\n", 0, ATtrue));
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(ATmakeSymbol("version 2 of the License, or (at your option) any later version.\n", 0, ATtrue));
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_t_72));
  term_t_72 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_u_72));
  term_u_72 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_z_72));
  term_z_72 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_73));
  term_q_73 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_q_73);
  ATprotect(&(term_u_73));
  term_u_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Examples:\n", 0, ATtrue));
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to an executable\n", 0, ATtrue));
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M\n", 0, ATtrue));
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Use strategy foo as main strategy instead of main\n", 0, ATtrue));
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M --main foo\n", 0, ATtrue));
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(ATmakeSymbol("Compile module M.str to C code in file M.c\n", 0, ATtrue));
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -c\n", 0, ATtrue));
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Include modules from directory ../sig\n", 0, ATtrue));
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("  strc -i M -I ../sig\n", 0, ATtrue));
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Note that strc is a whole program compiler, i.e, it\n", 0, ATtrue));
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("compiles all (recursively) imported modules into\n", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(ATmakeSymbol("a single C source file.\n", 0, ATtrue));
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Report bugs to <stratego-bugs@cs.uu.nl>\n", 0, ATtrue));
  ATprotect(&(term_o_74));
  term_o_74 = (ATerm) ATmakeAppl(ATmakeSymbol("STRC compiles Stratego programs to C or executable code.\n", 0, ATtrue));
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego is a language for program transformation based on the\n", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(ATmakeSymbol("paradigm of rewriting strategies.\n", 0, ATtrue));
  ATprotect(&(term_r_74));
  term_r_74 = (ATerm) ATmakeAppl(ATmakeSymbol("For documentation see http://www.stratego-language.org\n", 0, ATtrue));
  ATprotect(&(term_v_74));
  term_v_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(ATmakeSymbol(" -i file [options]", 0, ATtrue));
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_75));
  term_i_75 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_75));
  term_m_75 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_75));
  term_n_75 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_75));
  term_o_75 = (ATerm) ATmakeAppl(sym__2, term_m_75, term_n_75);
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("                      ", 0, ATtrue));
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-W,--warning C   Report warnings falling in category C. Categories:\n", 0, ATtrue));
  ATprotect(&(term_b_76));
  term_b_76 = (ATerm) ATmakeAppl(ATmakeSymbol("                      all                      all categories (default) \n", 0, ATtrue));
  ATprotect(&(term_c_76));
  term_c_76 = (ATerm) ATmakeAppl(ATmakeSymbol("                      no-C                     no warnings in category C\n", 0, ATtrue));
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(ATmakeSymbol(": no such warning", 0, ATtrue));
  ATprotect(&(term_r_77));
  term_r_77 = (ATerm) ATmakeAppl(sym__2, term_c_38, term_v_37);
  ATprotect(&(term_w_77));
  term_w_77 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_37);
  ATprotect(&(term_z_77));
  term_z_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_78));
  term_b_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_78));
  term_i_78 = (ATerm) ATmakeAppl(sym__2, term_f_78, term_a_40);
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_78));
  term_k_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_80));
  term_r_80 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_80));
  term_s_80 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_80));
  term_t_80 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_u_80));
  term_u_80 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_b_81));
  term_b_81 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_g_81));
  term_g_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_81));
  term_k_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_81));
  term_l_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_81));
  term_m_81 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_81));
  term_o_81 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_v_81));
  term_v_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_81));
  term_w_81 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_v_81);
  ATprotect(&(term_c_82));
  term_c_82 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_82));
  term_d_82 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_82));
  term_f_82 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_82));
  term_g_82 = (ATerm) ATmakeAppl(sym__2, term_v_72, term_f_82);
  ATprotect(&(term_m_82));
  term_m_82 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(sym__2, term_v_72, term_o_81);
  ATprotect(&(term_h_83));
  term_h_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_83));
  term_i_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_83));
  term_k_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-I d | --Include d Include modules from directory d", 0, ATtrue));
  ATprotect(&(term_l_83));
  term_l_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--main f | -m f    Main strategy to compile (default: main)\n", 0, ATtrue));
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(sym__2, term_o_40, term_a_40);
  ATprotect(&(term_r_83));
  term_r_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--library | --lib  Build a library instead of an application\n", 0, ATtrue));
  ATprotect(&(term_s_83));
  term_s_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--C-include h      Include header file h (\"file.h\" or <file.h>)", 0, ATtrue));
  ATprotect(&(term_t_83));
  term_t_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-CI d              Include C headers from directory d", 0, ATtrue));
  ATprotect(&(term_u_83));
  term_u_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-D", 0, ATtrue));
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-CD name=def       Predefine name as a macro, with definition def.", 0, ATtrue));
  ATprotect(&(term_w_83));
  term_w_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-L", 0, ATtrue));
  ATprotect(&(term_x_83));
  term_x_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-CL d              Include binary libraries from directory d", 0, ATtrue));
  ATprotect(&(term_y_83));
  term_y_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-l", 0, ATtrue));
  ATprotect(&(term_z_83));
  term_z_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-Cl lib            Search the library named lib when linking.", 0, ATtrue));
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(ATmakeSymbol("lib", 0, ATtrue));
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol(".la", 0, ATtrue));
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-la lib            Search the libtool library liblib.la when linking.\n", 0, ATtrue));
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-DXTC_REPOSITORY()=ATmakeString(\"", 0, ATtrue));
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(ATmakeSymbol("\")", 0, ATtrue));
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--xtc-repo file    Set default XTC repository in output program to file (default: none).", 0, ATtrue));
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeAppl(sym__2, term_t_39, term_a_40);
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-c                 Produce C code only (don't compile)", 0, ATtrue));
  ATprotect(&(term_n_84));
  term_n_84 = (ATerm) ATmakeAppl(sym__2, term_i_63, term_a_40);
  ATprotect(&(term_o_84));
  term_o_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--ast              Produce abstract syntax tree", 0, ATtrue));
  ATprotect(&(term_p_84));
  term_p_84 = (ATerm) ATmakeAppl(sym__2, term_z_57, term_a_40);
  ATprotect(&(term_s_84));
  term_s_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-F                 Produce normalized specification", 0, ATtrue));
  ATprotect(&(term_v_84));
  term_v_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep n           Keep intermediate results (0 = keep nothing)", 0, ATtrue));
  ATprotect(&(term_y_84));
  term_y_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-O n               Optimization level (0 = no optimization)", 0, ATtrue));
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(sym__2, term_t_45, term_a_40);
  ATprotect(&(term_c_85));
  term_c_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--fusion           Toggle specialize applications of innermost (default: on)", 0, ATtrue));
  ATprotect(&(term_d_85));
  term_d_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)     Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--choice-lib file  Link with specified choice point library (e.g. /usr/lib/foo.a)", 0, ATtrue));
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeAppl(ATmakeSymbol("libcpl-stratego.la", 0, ATtrue));
  ATprotect(&(term_g_85));
  term_g_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--cpl              Use the Nancy Choice Point Library", 0, ATtrue));
  ATprotect(&(term_h_85));
  term_h_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_85));
  term_j_85 = (ATerm) ATmakeAppl(sym__2, term_h_85, term_a_40);
  ATprotect(&(term_k_85));
  term_k_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-h | --help        Show help", 0, ATtrue));
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--man", 0, ATtrue));
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(sym__2, term_n_85, term_a_40);
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--man              Show manual page", 0, ATtrue));
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_85));
  term_w_85 = (ATerm) ATmakeAppl(sym__2, term_v_85, term_a_40);
  ATprotect(&(term_x_85));
  term_x_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-v | --version     Display program's version", 0, ATtrue));
  ATprotect(&(term_a_86));
  term_a_86 = (ATerm) ATmakeAppl(sym__2, term_e_59, term_f_39);
  ATprotect(&(term_b_86));
  term_b_86 = (ATerm) ATmakeAppl(sym__2, term_g_59, term_v_37);
  ATprotect(&(term_i_86));
  term_i_86 = (ATerm) ATmakeAppl(sym__2, term_a_64, term_a_40);
  ATprotect(&(term_j_86));
  term_j_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--asfix            Concrete syntax parts are not imploded", 0, ATtrue));
  ATprotect(&(term_d_91));
  term_d_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_91));
  term_h_91 = (ATerm) ATmakeAppl(sym__2, term_d_91, term_a_40);
  ATprotect(&(term_i_91));
  term_i_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_91));
  term_j_91 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_91));
  term_l_91 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_91));
  term_z_91 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_92));
  term_l_92 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_92));
  term_m_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_92));
  term_n_92 = (ATerm) ATmakeAppl(sym__3, term_m_75, term_n_75, (ATerm) ATempty);
  ATprotect(&(term_g_93));
  term_g_93 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_h_85);
  ATprotect(&(term_i_93));
  term_i_93 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_d_91);
  ATprotect(&(term_o_93));
  term_o_93 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_93));
  term_p_93 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_93));
  term_q_93 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_x_93));
  term_x_93 = (ATerm) ATmakeAppl(ATmakeSymbol("0.12pre", 0, ATtrue));
  ATprotect(&(term_y_93));
  term_y_93 = (ATerm) ATmakeAppl(sym__2, term_p_71, term_x_93);
  ATprotect(&(term_z_93));
  term_z_93 = (ATerm) ATmakeAppl(sym__2, term_c_38, term_f_39);
  ATprotect(&(term_a_94));
  term_a_94 = (ATerm) ATmakeAppl(sym__2, term_b_44, term_v_37);
  ATprotect(&(term_b_94));
  term_b_94 = (ATerm) ATmakeAppl(sym__2, term_f_44, term_a_51);
  ATprotect(&(term_c_94));
  term_c_94 = (ATerm) ATmakeAppl(sym__2, term_n_63, (ATerm) ATempty);
  ATprotect(&(term_d_94));
  term_d_94 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego.h>", 0, ATtrue));
  ATprotect(&(term_e_94));
  term_e_94 = (ATerm) ATmakeAppl(ATmakeSymbol("<srts/stratego-lib.h>", 0, ATtrue));
  ATprotect(&(term_f_94));
  term_f_94 = (ATerm) ATmakeAppl(ATmakeSymbol("SRTS", 0, ATtrue));
  ATprotect(&(term_g_94));
  term_g_94 = (ATerm) ATmakeAppl(ATmakeSymbol("/include", 0, ATtrue));
  ATprotect(&(term_h_94));
  term_h_94 = (ATerm) ATmakeAppl(ATmakeSymbol("ATERM", 0, ATtrue));
  ATprotect(&(term_i_94));
  term_i_94 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib/srts", 0, ATtrue));
  ATprotect(&(term_j_94));
  term_j_94 = (ATerm) ATmakeAppl(ATmakeSymbol("/lib", 0, ATtrue));
  ATprotect(&(term_k_94));
  term_k_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-lib_opt", 0, ATtrue));
  ATprotect(&(term_l_94));
  term_l_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego-choice", 0, ATtrue));
  ATprotect(&(term_m_94));
  term_m_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lstratego_opt", 0, ATtrue));
  ATprotect(&(term_o_94));
  term_o_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lATerm-gcc", 0, ATtrue));
  ATprotect(&(term_p_94));
  term_p_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-lm", 0, ATtrue));
  ATprotect(&(term_t_94));
  term_t_94 = (ATerm) ATmakeAppl(sym__2, term_o_39, (ATerm) ATempty);
  ATprotect(&(term_u_94));
  term_u_94 = (ATerm) ATmakeAppl(ATmakeSymbol("old", 0, ATtrue));
  ATprotect(&(term_v_94));
  term_v_94 = (ATerm) ATmakeAppl(sym__2, term_j_59, term_u_94);
  ATprotect(&(term_y_94));
  term_y_94 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_l_56);
  ATprotect(&(term_c_95));
  term_c_95 = (ATerm) ATmakeAppl(ATmakeSymbol("compiling ", 0, ATtrue));
  ATprotect(&(term_l_95));
  term_l_95 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_n_85);
  ATprotect(&(term_p_95));
  term_p_95 = (ATerm) ATmakeAppl(ATmakeSymbol("strc-manual.txt", 0, ATtrue));
  ATprotect(&(term_v_95));
  term_v_95 = (ATerm) ATmakeAppl(sym__2, term_b_38, term_v_85);
  ATprotect(&(term_y_95));
  term_y_95 = (ATerm) ATmakeAppl(ATmakeSymbol("no main module specified", 0, ATtrue));
  ATprotect(&(term_z_95));
  term_z_95 = (ATerm) ATmakeAppl(ATmakeSymbol("-----\ncompilation succeeded:   ", 0, ATtrue));
  ATprotect(&(term_e_96));
  term_e_96 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation succeeded (", 0, ATtrue));
  ATprotect(&(term_f_96));
  term_f_96 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_96));
  term_t_96 = (ATerm) ATmakeAppl(ATmakeSymbol("compilation failed (", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm foldr_2_0 (ATerm b_121 (ATerm), ATerm c_121 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm q_130 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm s_14 (ATerm p_23, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm t_14 (ATerm n_23, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm c_compile_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm u_14 (ATerm k_66, ATerm j_66, ATerm t);
ATerm rename_to_1_0 (ATerm u_0 (ATerm), ATerm t);
ATerm ac2abox_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm s2c_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm back_end_0_0 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm export_external_defs_0_0 (ATerm t);
ATerm if_keep1_1_0 (ATerm r_131 (ATerm), ATerm t);
ATerm olevel_2_0 (ATerm l_142 (ATerm), ATerm m_142 (ATerm), ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm bound_unbound_vars_0_0 (ATerm t);
ATerm dead_def_elim_0_0 (ATerm t);
ATerm if_keep4_1_0 (ATerm u_131 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm v_18 (ATerm t);
ATerm optimize_0_0 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm i_19 (ATerm t);
ATerm save_as_1_0 (ATerm d_103 (ATerm), ATerm t);
ATerm if_keep2_1_0 (ATerm s_131 (ATerm), ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm m_19 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm y_140 (ATerm), ATerm z_140 (ATerm), ATerm t);
static ATerm y_14 (ATerm g_71, ATerm h_71, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm c_132 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm h_142 (ATerm), ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm comp_0_2 (ATerm b_23, ATerm c_23, ATerm t);
ATerm foldr_3_0 (ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm t);
static ATerm i_20 (ATerm t);
ATerm get_warnings_0_0 (ATerm t);
static ATerm j_20 (ATerm t);
static ATerm m_20 (ATerm t);
ATerm pass_warnings_0_0 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm z_20 (ATerm t);
static ATerm a_21 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm h_21 (ATerm t);
ATerm output_frontend_0_0 (ATerm t);
ATerm if_keep5_1_0 (ATerm v_131 (ATerm), ATerm t);
ATerm if_keep6_1_0 (ATerm w_131 (ATerm), ATerm t);
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
ATerm if_keep3_1_0 (ATerm t_131 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm o_114 (ATerm), ATerm t);
static ATerm j_21 (ATerm t);
static ATerm k_21 (ATerm t);
static ATerm l_21 (ATerm t);
ATerm check_other_main_0_0 (ATerm t);
static ATerm v_14 (ATerm h_23, ATerm i_23, ATerm t);
static ATerm w_14 (ATerm t_35, ATerm u_35, ATerm t);
static ATerm x_14 (ATerm u_113 (ATerm), ATerm v_292, ATerm d_36, ATerm t);
static ATerm a_15 (ATerm w_103 (ATerm), ATerm a_24, ATerm y_23, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
ATerm temp_dir_0_0 (ATerm t);
static ATerm n_21 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm q_21 (ATerm t);
ATerm xtc_io_transform_1_0 (ATerm a_141 (ATerm), ATerm t);
static ATerm t_21 (ATerm t);
static ATerm w_21 (ATerm t);
static ATerm y_21 (ATerm t);
static ATerm z_21 (ATerm t);
ATerm add_main_0_0 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm d_22 (ATerm t);
ATerm xtc_exit_0_0 (ATerm t);
static ATerm f_22 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm xtc_io_exit_0_0 (ATerm t);
ATerm get_outfile_1_0 (ATerm c_103 (ATerm), ATerm t);
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm j_22 (ATerm t);
static ATerm k_22 (ATerm t);
ATerm output_ast_0_0 (ATerm t);
ATerm pass_keep_0_0 (ATerm t);
ATerm get_include_dirs_0_0 (ATerm t);
ATerm pack_stratego_0_0 (ATerm t);
ATerm if_verbose3_1_0 (ATerm r_130 (ATerm), ATerm t);
ATerm basename_1_0 (ATerm e_125 (ATerm), ATerm t);
static ATerm l_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm q_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm b_15 (ATerm d_23, ATerm t);
static ATerm v_22 (ATerm t);
static ATerm w_22 (ATerm t);
static ATerm x_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm f_23 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm o_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm v_23 (ATerm t);
static ATerm w_23 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm z_23 (ATerm t);
static ATerm b_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm f_24 (ATerm t);
static ATerm g_24 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm k_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm p_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm w_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm b_25 (ATerm t);
static ATerm c_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm g_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm q_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm g_26 (ATerm t);
static ATerm i_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm k_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm u_26 (ATerm t);
static ATerm v_26 (ATerm t);
static ATerm w_26 (ATerm t);
static ATerm x_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm z_26 (ATerm t);
static ATerm b_27 (ATerm t);
static ATerm c_27 (ATerm t);
static ATerm f_27 (ATerm t);
ATerm front_end_0_0 (ATerm t);
static ATerm d_16 (ATerm s_58, ATerm t_58, ATerm t);
static ATerm c_15 (ATerm e_57, ATerm f_57, ATerm t);
ATerm end_scope_1_0 (ATerm t_103 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm s_103 (ATerm), ATerm t);
static ATerm h_27 (ATerm t);
static ATerm k_27 (ATerm t);
static ATerm q_27 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm l_141 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm p_130 (ATerm), ATerm t);
static ATerm e_15 (ATerm i_55, ATerm j_55, ATerm t);
static ATerm g_15 (ATerm o_55, ATerm p_55, ATerm t);
static ATerm h_15 (ATerm b_64, ATerm d_64, ATerm f_64, ATerm h_64, ATerm c_64, ATerm e_64, ATerm g_64, ATerm i_64, ATerm t);
ATerm diff_times_0_0 (ATerm t);
ATerm times_0_0 (ATerm t);
ATerm profile_p__2_0 (ATerm m_128 (ATerm), ATerm n_128 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm s_113 (ATerm), ATerm t);
ATerm strc_version_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm x_114 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm p_114 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm a_124 (ATerm), ATerm t);
static ATerm v_27 (ATerm t);
static ATerm k_15 (ATerm i_48, ATerm a_442, ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm l_15 (ATerm m_66, ATerm l_66, ATerm t);
static ATerm m_15 (ATerm r_61, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
static ATerm f_75 (ATerm c_74, ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm short_description_1_0 (ATerm j_0 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
static ATerm h_28 (ATerm t);
ATerm default_system_usage_2_0 (ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm q_28 (ATerm t);
ATerm Display_possible_warnings_0_0 (ATerm t);
static ATerm n_15 (ATerm t_36, ATerm j_304, ATerm t);
static ATerm v_28 (ATerm t);
static ATerm x_28 (ATerm t);
static ATerm y_28 (ATerm t);
static ATerm e_29 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
static ATerm h_29 (ATerm t);
static ATerm i_29 (ATerm t);
static ATerm j_29 (ATerm t);
static ATerm k_29 (ATerm t);
static ATerm o_29 (ATerm t);
static ATerm p_29 (ATerm t);
static ATerm s_29 (ATerm t);
static ATerm t_29 (ATerm t);
static ATerm x_29 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
ATerm set_choice_point_lib_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm t_130 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm s_130 (ATerm), ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose6_1_0 (ATerm u_130 (ATerm), ATerm t);
static ATerm q_15 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm e_42, ATerm d_42, ATerm t);
static ATerm r_15 (ATerm n_118 (ATerm), ATerm a_42, ATerm z_41, ATerm t);
static ATerm l_30 (ATerm t);
static ATerm s_15 (ATerm w_57, ATerm x_57, ATerm y_57, ATerm t);
ATerm map_1_0 (ATerm c_114 (ATerm), ATerm t);
static ATerm t_15 (ATerm r_127 (ATerm), ATerm g_58, ATerm f_58, ATerm t);
static ATerm o_85 (ATerm i_85, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_15 (ATerm z_35, ATerm t);
static ATerm v_15 (ATerm s_51, ATerm t_51, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_87 (ATerm y_85, ATerm t);
static ATerm k_87 (ATerm c_86, ATerm d_86, ATerm e_86, ATerm t);
static ATerm l_87 (ATerm r_86, ATerm s_86, ATerm t_86, ATerm t);
static ATerm w_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm r_30 (ATerm t);
static ATerm u_30 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm w_30 (ATerm t);
static ATerm x_30 (ATerm t);
static ATerm y_30 (ATerm t);
static ATerm z_30 (ATerm t);
static ATerm a_31 (ATerm t);
static ATerm b_31 (ATerm t);
static ATerm d_31 (ATerm t);
static ATerm e_31 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm f_122 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm f_31 (ATerm t);
static ATerm g_31 (ATerm t);
static ATerm h_31 (ATerm t);
static ATerm i_31 (ATerm t);
static ATerm j_31 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm w_91 (ATerm y_90, ATerm t);
static ATerm l_31 (ATerm t);
static ATerm n_31 (ATerm t);
ATerm xtc_find_silent_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm x_15 (ATerm m_70, ATerm n_70, ATerm t);
static ATerm y_15 (ATerm p_70, ATerm o_70, ATerm t);
static ATerm z_15 (ATerm g_51, ATerm h_51, ATerm t);
ATerm at_end_1_0 (ATerm t_114 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm e_95 (ATerm w_94, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_16 (ATerm q_70, ATerm r_70, ATerm t);
static ATerm q_31 (ATerm t);
static ATerm r_31 (ATerm t);
static ATerm s_31 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_31 (ATerm t);
static ATerm y_31 (ATerm t);
static ATerm a_32 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm b_32 (ATerm t);
static ATerm c_32 (ATerm t);
static ATerm e_32 (ATerm t);
static ATerm f_32 (ATerm t);
static ATerm g_32 (ATerm t);
static ATerm h_32 (ATerm t);
static ATerm i_32 (ATerm t);
static ATerm j_32 (ATerm t);
static ATerm k_32 (ATerm t);
static ATerm l_32 (ATerm t);
static ATerm m_32 (ATerm t);
static ATerm o_32 (ATerm t);
static ATerm p_32 (ATerm t);
static ATerm r_32 (ATerm t);
static ATerm s_32 (ATerm t);
static ATerm t_32 (ATerm t);
static ATerm u_32 (ATerm t);
static ATerm v_32 (ATerm t);
static ATerm y_32 (ATerm t);
static ATerm z_32 (ATerm t);
static ATerm a_33 (ATerm t);
static ATerm b_33 (ATerm t);
static ATerm d_33 (ATerm t);
static ATerm f_33 (ATerm t);
static ATerm h_33 (ATerm t);
static ATerm i_33 (ATerm t);
static ATerm l_33 (ATerm t);
static ATerm m_33 (ATerm t);
static ATerm q_33 (ATerm t);
static ATerm r_33 (ATerm t);
static ATerm t_33 (ATerm t);
static ATerm w_33 (ATerm t);
static ATerm a_34 (ATerm t);
static ATerm b_34 (ATerm t);
static ATerm c_34 (ATerm t);
static ATerm e_34 (ATerm t);
static ATerm h_34 (ATerm t);
static ATerm i_34 (ATerm t);
static ATerm j_34 (ATerm t);
static ATerm m_34 (ATerm t);
static ATerm r_34 (ATerm t);
static ATerm s_34 (ATerm t);
static ATerm t_34 (ATerm t);
static ATerm v_34 (ATerm t);
static ATerm y_34 (ATerm t);
static ATerm a_35 (ATerm t);
static ATerm b_35 (ATerm t);
static ATerm c_35 (ATerm t);
static ATerm e_35 (ATerm t);
static ATerm f_35 (ATerm t);
static ATerm g_35 (ATerm t);
static ATerm i_35 (ATerm t);
static ATerm j_35 (ATerm t);
static ATerm k_35 (ATerm t);
static ATerm l_35 (ATerm t);
static ATerm m_35 (ATerm t);
static ATerm n_35 (ATerm t);
static ATerm o_35 (ATerm t);
static ATerm p_35 (ATerm t);
static ATerm q_35 (ATerm t);
static ATerm r_35 (ATerm t);
static ATerm s_35 (ATerm t);
static ATerm v_35 (ATerm t);
static ATerm w_35 (ATerm t);
static ATerm x_35 (ATerm t);
static ATerm y_35 (ATerm t);
static ATerm a_36 (ATerm t);
static ATerm b_36 (ATerm t);
static ATerm e_36 (ATerm t);
static ATerm f_36 (ATerm t);
static ATerm g_36 (ATerm t);
static ATerm h_36 (ATerm t);
static ATerm i_36 (ATerm t);
static ATerm j_36 (ATerm t);
static ATerm l_36 (ATerm t);
ATerm strc_options_0_0 (ATerm t);
static ATerm b_16 (ATerm p_61, ATerm q_61, ATerm t);
static ATerm c_16 (ATerm u_61, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_114 (ATerm), ATerm t);
static ATerm m_36 (ATerm t);
static ATerm n_36 (ATerm t);
static ATerm q_36 (ATerm t);
static ATerm r_36 (ATerm t);
static ATerm s_36 (ATerm t);
static ATerm u_36 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm e_16 (ATerm z_56, ATerm a_57, ATerm y_56, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_135 (ATerm), ATerm t);
static ATerm z_36 (ATerm t);
static ATerm b_37 (ATerm t);
static ATerm c_37 (ATerm t);
static ATerm e_37 (ATerm t);
ATerm parse_options_3_0 (ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm m_135 (ATerm), ATerm t);
static ATerm g_16 (ATerm k_61, ATerm l_61, ATerm m_61, ATerm t);
static ATerm h_16 (ATerm n_61, ATerm o_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm s_61, ATerm t_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm l_58, ATerm t);
static ATerm i_16 (ATerm j_70, ATerm k_70, ATerm t);
ATerm get_path_0_0 (ATerm t);
ATerm xtc_find_path_0_0 (ATerm t);
static ATerm j_16 (ATerm w_49, ATerm x_49, ATerm t);
ATerm init_strc_config_0_0 (ATerm t);
static ATerm k_37 (ATerm t);
static ATerm l_37 (ATerm t);
ATerm command_line_options_0_0 (ATerm t);
static ATerm m_37 (ATerm t);
static ATerm n_37 (ATerm t);
static ATerm p_37 (ATerm t);
static ATerm q_37 (ATerm t);
static ATerm r_37 (ATerm t);
ATerm strc_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm b_121 (ATerm), ATerm c_121 (ATerm), ATerm t)
{
  ATerm d_0 = NULL,g_0 = NULL,i_0 = NULL;
  d_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_0;
      t = b_121(t);
    }
  else
    {
      ATerm s_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_0 = ATgetFirst((ATermList) t);
          i_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_0;
      t = foldr_2_0(b_121, c_121, t);
      s_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_0, s_0);
      t = c_121(t);
    }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_v_37;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm e_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15(e_1, i_1, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_0 = NULL,a_0 = NULL,a_1 = NULL;
  t = times_0_0(t);
  a_1 = t;
  t = SSL_explode_term(a_1);
  if(match_cons(t, sym__2))
    {
      ATerm x_37 = ATgetArgument(t, 0);
      a_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_0;
  t = foldr_2_0(k_0, n_0, t);
  x_0 = t;
  t = SSL_TicksToSeconds(x_0);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_130 (ATerm), ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  {
    ATerm y_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_1 = NULL,h_1 = NULL,k_1 = NULL;
        t = term_b_38;
        h_1 = t;
        t = term_c_38;
        k_1 = t;
        t = term_f_38;
        t = d_16(h_1, k_1, t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_l_38);
        t = geq_0_0(t);
        t = b_1;
        t = q_130(t);
        LocalPopChoice(a_38);
      }
    else
      {
        t = y_37;
        t = b_1;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm u_1 = NULL,x_1 = NULL,y_1 = NULL;
  u_1 = t;
  t = term_n_38;
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, term_p_38);
  y_1 = t;
  t = SSL_printnl(x_1, y_1);
  t = u_1;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_t_38;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL;
  d_2 = t;
  t = term_n_38;
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, d_2);
  f_2 = t;
  t = SSL_printnl(e_2, f_2);
  t = d_2;
  return(t);
}
static ATerm s_14 (ATerm p_23, ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  t = if_verbose2_1_0(d_1, t);
  {
    ATerm v_38 = t;
    int w_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,c_2 = NULL;
        t = term_b_38;
        z_1 = t;
        t = term_x_38;
        c_2 = t;
        t = term_y_38;
        t = d_16(z_1, c_2, t);
        LocalPopChoice(w_38);
      }
    else
      {
        t = v_38;
        t = get_outfile_1_0(f_1, t);
      }
  }
  n_1 = t;
  t = term_z_38;
  t = xtc_find_0_0(t);
  o_1 = t;
  t = term_b_38;
  s_1 = t;
  t = term_a_39;
  t_1 = t;
  t = term_c_39;
  t = d_16(s_1, t_1, t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(p_1), n_1), term_x_38), p_23), term_e_39), term_d_39));
  t = if_verbose3_1_0(j_1, t);
  if(match_cons(t, sym__2))
    {
      q_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_1, r_1);
  {
    static ATerm l_1 (ATerm t);
    static ATerm l_1 (ATerm t)
    {
      ATerm g_2 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_1, r_1);
      t = y_14(q_1, r_1, t);
      t = term_f_39;
      g_2 = t;
      t = SSL_exit(g_2);
      return(t);
    }
    t = fork_and_wait_1_0(l_1, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  t = term_n_38;
  z_2 = t;
  t = (ATerm) ATinsert(ATempty, term_i_39);
  a_3 = t;
  t = SSL_printnl(z_2, a_3);
  t = y_2;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_j_39;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm b_3 = NULL,e_3 = NULL,h_3 = NULL;
  b_3 = t;
  t = term_n_38;
  e_3 = t;
  t = (ATerm) ATinsert(ATempty, b_3);
  h_3 = t;
  t = SSL_printnl(e_3, h_3);
  t = b_3;
  return(t);
}
static ATerm t_14 (ATerm n_23, ATerm t)
{
  ATerm h_2 = NULL,m_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,x_2 = NULL;
  t = if_verbose2_1_0(m_1, t);
  t = get_outfile_1_0(v_1, t);
  h_2 = t;
  t = term_b_38;
  u_2 = t;
  t = term_k_39;
  x_2 = t;
  t = term_n_39;
  t = d_16(u_2, x_2, t);
  o_2 = t;
  t = term_b_38;
  s_2 = t;
  t = term_o_39;
  t_2 = t;
  t = term_s_39;
  t = d_16(s_2, t_2, t);
  p_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_2), term_x_38), n_23), term_t_39)), p_2), o_2);
  t = concat_0_0(t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_39, m_2);
  t = if_verbose3_1_0(a_2, t);
  if(match_cons(t, sym__2))
    {
      q_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_2, r_2);
  {
    static ATerm b_2 (ATerm t);
    static ATerm b_2 (ATerm t)
    {
      ATerm i_3 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_2, r_2);
      t = y_14(q_2, r_2, t);
      t = term_f_39;
      i_3 = t;
      t = SSL_exit(i_3);
      return(t);
    }
    t = fork_and_wait_1_0(b_2, t);
  }
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_2);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = if_verbose1_1_0(k_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      s_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_14(s_3, t);
  if(match_cons(t, sym_FILE_1))
    {
      r_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_14(r_3, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
  o_3 = t;
  t = term_n_38;
  p_3 = t;
  t = (ATerm) ATinsert(CheckATermList(o_3), term_u_39);
  q_3 = t;
  t = SSL_printnl(p_3, q_3);
  t = (ATerm) ATmakeAppl(sym__2, term_n_38, (ATerm) ATinsert(CheckATermList(o_3), term_u_39));
  return(t);
}
ATerm c_compile_0_0 (ATerm t)
{
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_3 = NULL,m_3 = NULL,n_3 = NULL;
      j_3 = t;
      t = term_b_38;
      m_3 = t;
      t = term_t_39;
      n_3 = t;
      t = term_x_39;
      t = d_16(m_3, n_3, t);
      t = j_3;
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
      t = profile_p__2_0(i_2, j_2, t);
    }
  return(t);
}
ATerm EXDEV_0_0 (ATerm t)
{
  t = SSL_EXDEV();
  return(t);
}
ATerm get_errno_0_0 (ATerm t)
{
  t = SSL_get_errno();
  return(t);
}
static ATerm u_14 (ATerm k_66, ATerm j_66, ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(k_66, j_66);
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      t = get_errno_0_0(t);
      t = term_a_40;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, k_66, j_66);
      t = l_15(k_66, j_66, t);
      t = SSL_remove(k_66);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,l_4 = NULL;
  i_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL;
        t = i_4;
        t = u_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_d_40;
        w_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, term_d_40);
        t = l_15(l_4, w_1, t);
        t = SSL_remove(l_4);
        t = term_d_40;
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        {
          ATerm e_40 = t;
          int f_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL;
              t = i_4;
              t = u_0(t);
              l_2 = t;
              {
                ATerm g_40 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_2 = NULL;
                    n_2 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = n_2;
                      }
                    else
                      {
                        t = n_2;
                        if((l_4 != t))
                          {
                            _fail(t);
                          }
                        t = n_2;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_40;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_4, l_2);
              t = u_14(l_4, l_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_2);
              LocalPopChoice(f_40);
            }
          else
            {
              t = e_40;
              t = i_4;
              t = u_0(t);
              if((l_4 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_4);
            }
        }
      }
  }
  return(t);
}
ATerm ac2abox_0_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
  u_4 = t;
  t = term_h_40;
  r_4 = t;
  t = term_i_40;
  t = xtc_find_0_0(t);
  t_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_4), term_j_40);
  s_4 = t;
  t = u_4;
  t = comp_0_2(r_4, s_4, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm g_5 = NULL;
  g_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_5), term_k_40);
  return(t);
}
ATerm s2c_0_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  t = term_l_40;
  w_4 = t;
  t = a_5;
  {
    ATerm m_40 = t;
    int n_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_5 = NULL,e_5 = NULL;
        t = term_b_38;
        d_5 = t;
        t = term_o_40;
        e_5 = t;
        t = term_p_40;
        t = d_16(d_5, e_5, t);
        t = a_5;
        LocalPopChoice(n_40);
        t = (ATerm) ATinsert(ATempty, term_o_40);
      }
    else
      {
        t = m_40;
        t = (ATerm) ATempty;
      }
  }
  y_4 = t;
  t = term_b_38;
  b_5 = t;
  t = term_k_40;
  c_5 = t;
  t = term_q_40;
  t = d_16(b_5, c_5, t);
  t = foldr_3_0(v_2, conc_0_0, w_2, t);
  z_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_4), z_4);
  t = concat_0_0(t);
  x_4 = t;
  t = a_5;
  t = comp_0_2(w_4, x_4, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  t = term_n_38;
  z_5 = t;
  t = (ATerm) ATinsert(ATempty, term_r_40);
  a_6 = t;
  t = SSL_printnl(z_5, a_6);
  t = y_5;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = if_verbose1_1_0(k_3, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL;
  h_6 = t;
  {
    ATerm s_40 = t;
    int t_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_6 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_6 = ATgetArgument(t, 0);
            {
              ATerm d_3 = NULL,v_0 = NULL;
              t = SSLgetAnnotations(h_6);
              d_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_6);
              v_0 = t;
              t = SSLsetAnnotations(v_0, d_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_6;
          }
        LocalPopChoice(t_40);
        t = xtc_transform_file_2_0(l_3, u_3, t);
      }
    else
      {
        t = s_40;
        t = xtc_transform_term_2_0(v_3, w_3, t);
      }
  }
  t = if_keep1_1_0(x_3, t);
  t = olevel_2_0(z_3, a_4, t);
  t = olevel_2_0(n_5, o_5, t);
  g_6 = t;
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_7 = ATgetArgument(t, 0);
            {
              ATerm n_4 = NULL,z_0 = NULL;
              t = SSLgetAnnotations(g_6);
              n_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_7);
              z_0 = t;
              t = SSLsetAnnotations(z_0, n_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_6;
          }
        LocalPopChoice(v_40);
        t = xtc_transform_file_2_0(s_5, t_5, t);
      }
    else
      {
        t = u_40;
        t = xtc_transform_term_2_0(n_6, v_6, t);
      }
  }
  t = s2c_0_0(t);
  t = ac2abox_0_0(t);
  f_6 = t;
  {
    ATerm y_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_8 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_8 = ATgetArgument(t, 0);
            {
              ATerm h_5 = NULL,c_1 = NULL;
              t = SSLgetAnnotations(f_6);
              h_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_8);
              c_1 = t;
              t = SSLsetAnnotations(c_1, h_5);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = f_6;
          }
        LocalPopChoice(a_41);
        t = xtc_transform_file_2_0(x_6, pass_verbose_0_0, t);
      }
    else
      {
        t = y_40;
        t = xtc_transform_term_2_0(c_7, pass_verbose_0_0, t);
      }
  }
  t = rename_to_1_0(d_7, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,e_6 = NULL;
  b_6 = t;
  t = term_n_38;
  c_6 = t;
  t = (ATerm) ATinsert(CheckATermList(b_6), term_b_41);
  e_6 = t;
  t = SSL_printnl(c_6, e_6);
  t = (ATerm) ATmakeAppl(sym__2, term_n_38, (ATerm) ATinsert(CheckATermList(b_6), term_b_41));
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_c_41;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_6 = NULL;
  t = pass_verbose_0_0(t);
  o_6 = t;
  t = (ATerm) ATinsert(CheckATermList(o_6), term_d_41);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_c_41;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm p_6 = NULL;
  t = pass_verbose_0_0(t);
  p_6 = t;
  t = (ATerm) ATinsert(CheckATermList(p_6), term_d_41);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = save_as_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_e_41;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  r_6 = t;
  {
    ATerm f_41 = t;
    int h_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_7 = ATgetArgument(t, 0);
            {
              ATerm t_3 = NULL,w_0 = NULL;
              t = SSLgetAnnotations(r_6);
              t_3 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_7);
              w_0 = t;
              t = SSLsetAnnotations(w_0, t_3);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_6;
          }
        LocalPopChoice(h_41);
        t = xtc_transform_file_2_0(d_4, g_4, t);
      }
    else
      {
        t = f_41;
        t = xtc_transform_term_2_0(h_4, j_4, t);
      }
  }
  t = if_keep1_1_0(k_4, t);
  q_6 = t;
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_7 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_7 = ATgetArgument(t, 0);
            {
              ATerm c_4 = NULL,y_0 = NULL;
              t = SSLgetAnnotations(q_6);
              c_4 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_7);
              y_0 = t;
              t = SSLsetAnnotations(y_0, c_4);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_6;
          }
        LocalPopChoice(j_41);
        t = xtc_transform_file_2_0(o_4, p_4, t);
      }
    else
      {
        t = i_41;
        t = xtc_transform_term_2_0(v_4, f_5, t);
      }
  }
  t = if_keep1_1_0(i_5, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_k_41;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm f_7 = NULL;
  t = pass_verbose_0_0(t);
  f_7 = t;
  t = (ATerm) ATinsert(CheckATermList(f_7), term_d_41);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_k_41;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm g_7 = NULL;
  t = pass_verbose_0_0(t);
  g_7 = t;
  t = (ATerm) ATinsert(CheckATermList(g_7), term_d_41);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = save_as_1_0(m_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_l_41;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm q_7 = NULL;
  t = pass_verbose_0_0(t);
  q_7 = t;
  t = (ATerm) ATinsert(CheckATermList(q_7), term_d_41);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm r_7 = NULL;
  t = pass_verbose_0_0(t);
  r_7 = t;
  t = (ATerm) ATinsert(CheckATermList(r_7), term_d_41);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = save_as_1_0(j_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_x_41;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_b_42;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(q_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = save_as_1_0(r_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_c_42;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_h_42;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm b_8 = NULL;
  t = pass_verbose_0_0(t);
  b_8 = t;
  t = (ATerm) ATinsert(CheckATermList(b_8), term_d_41);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_h_42;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm d_8 = NULL;
  t = pass_verbose_0_0(t);
  d_8 = t;
  t = (ATerm) ATinsert(CheckATermList(d_8), term_d_41);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_i_42;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_i_42;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = get_outfile_1_0(h_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_j_42;
  return(t);
}
ATerm back_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(c_3, t);
  t = profile_p__2_0(f_3, g_3, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
  g_9 = t;
  t = term_n_38;
  h_9 = t;
  t = (ATerm) ATinsert(ATempty, term_k_42);
  i_9 = t;
  t = SSL_printnl(h_9, i_9);
  t = g_9;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = if_verbose1_1_0(o_7, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,m_9 = NULL;
  j_9 = t;
  t = term_n_38;
  k_9 = t;
  t = (ATerm) ATinsert(CheckATermList(j_9), term_n_42);
  m_9 = t;
  t = SSL_printnl(k_9, m_9);
  t = (ATerm) ATmakeAppl(sym__2, term_n_38, (ATerm) ATinsert(CheckATermList(j_9), term_n_42));
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_q_42;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_x_42;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_y_42;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm v_10 = NULL;
  t = pass_verbose_0_0(t);
  v_10 = t;
  t = (ATerm) ATinsert(CheckATermList(v_10), term_a_43);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_y_42;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm w_10 = NULL;
  t = pass_verbose_0_0(t);
  w_10 = t;
  t = (ATerm) ATinsert(CheckATermList(w_10), term_a_43);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_b_43;
  return(t);
}
ATerm export_external_defs_0_0 (ATerm t)
{
  ATerm x_8 = NULL,z_8 = NULL;
  ATerm c_43 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
      a_9 = t;
      t = term_b_38;
      b_9 = t;
      t = term_o_40;
      c_9 = t;
      t = term_p_40;
      t = d_16(b_9, c_9, t);
      t = a_9;
      LocalPopChoice(d_43);
      {
        ATerm f_9 = NULL;
        f_9 = t;
        t = if_verbose2_1_0(i_7, t);
        {
          static ATerm l_7 (ATerm t);
          static ATerm l_7 (ATerm t)
          {
            ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
            m_5 = t;
            t = term_e_43;
            k_5 = t;
            t = (ATerm) ATinsert(ATempty, term_i_43);
            l_5 = t;
            t = m_5;
            t = comp_0_2(k_5, l_5, t);
            n_9 = t;
            {
              ATerm k_43 = t;
              int m_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL;
                  t = term_b_38;
                  h_10 = t;
                  t = term_n_43;
                  i_10 = t;
                  t = term_o_43;
                  t = d_16(h_10, i_10, t);
                  a_10 = t;
                  t = term_b_38;
                  f_10 = t;
                  t = term_p_43;
                  g_10 = t;
                  t = term_r_43;
                  t = d_16(f_10, g_10, t);
                  e_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_10, e_10);
                  {
                    ATerm s_43 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm j_10 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            j_10 = ATgetArgument(t, 0);
                            if((j_10 != ATgetArgument(t, 1)))
                              {
                                _fail(ATgetArgument(t, 1));
                              }
                          }
                        else
                          _fail(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = s_43;
                      }
                  }
                  LocalPopChoice(m_43);
                }
              else
                {
                  t = k_43;
                  {
                    ATerm k_10 = NULL,l_10 = NULL;
                    t = term_b_38;
                    k_10 = t;
                    t = term_n_43;
                    l_10 = t;
                    t = term_o_43;
                    t = d_16(k_10, l_10, t);
                    t = debug_1_0(p_7, t);
                    _fail(t);
                  }
                }
            }
            t = n_9;
            {
              static ATerm s_7 (ATerm t);
              static ATerm s_7 (ATerm t)
              {
                t = get_outfile_1_0(t_7, t);
                if(((x_8 != NULL) && (x_8 != t)))
                  _fail(t);
                else
                  x_8 = t;
                return(t);
              }
              t = copy_to_1_0(s_7, t);
            }
            {
              ATerm t_43 = t;
              int u_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_10 = NULL,t_10 = NULL;
                  t_10 = t;
                  if(match_cons(t, sym_FILE_1))
                    {
                      s_10 = ATgetArgument(t, 0);
                      {
                        ATerm p_5 = NULL,b_4 = NULL;
                        t = SSLgetAnnotations(t_10);
                        p_5 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, s_10);
                        b_4 = t;
                        t = SSLsetAnnotations(b_4, p_5);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = t_10;
                    }
                  LocalPopChoice(u_43);
                  t = xtc_transform_file_2_0(u_7, w_7, t);
                }
              else
                {
                  t = t_43;
                  t = xtc_transform_term_2_0(x_7, z_7, t);
                }
            }
            {
              static ATerm a_8 (ATerm t);
              static ATerm a_8 (ATerm t)
              {
                t = get_outfile_1_0(c_8, t);
                if(((z_8 != NULL) && (z_8 != t)))
                  _fail(t);
                else
                  z_8 = t;
                return(t);
              }
              t = copy_to_1_0(a_8, t);
            }
            o_9 = t;
            t = term_n_38;
            p_9 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(z_8)), term_y_43), not_null(x_8)), term_w_43));
            q_9 = t;
            t = SSL_printnl(p_9, q_9);
            t = o_9;
            return(t);
          }
          t = profile_p__2_0(j_7, l_7, t);
        }
        t = f_9;
      }
    }
  else
    {
      t = c_43;
    }
  return(t);
}
ATerm if_keep1_1_0 (ATerm r_131 (ATerm), ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  {
    ATerm z_43 = t;
    int a_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_11 = NULL,i_11 = NULL,j_11 = NULL;
        t = term_b_38;
        i_11 = t;
        t = term_b_44;
        j_11 = t;
        t = term_c_44;
        t = d_16(i_11, j_11, t);
        g_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, term_f_39);
        t = geq_0_0(t);
        t = d_11;
        t = r_131(t);
        LocalPopChoice(a_44);
      }
    else
      {
        t = z_43;
        t = d_11;
      }
  }
  return(t);
}
ATerm olevel_2_0 (ATerm l_142 (ATerm), ATerm m_142 (ATerm), ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  {
    ATerm d_44 = t;
    int e_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL,s_11 = NULL,u_11 = NULL,v_11 = NULL;
        t = o_11;
        t = l_142(t);
        r_11 = t;
        t = term_b_38;
        u_11 = t;
        t = term_f_44;
        v_11 = t;
        t = term_g_44;
        t = d_16(u_11, v_11, t);
        s_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_11, r_11);
        t = geq_0_0(t);
        t = o_11;
        t = m_142(t);
        LocalPopChoice(e_44);
      }
    else
      {
        t = d_44;
        t = o_11;
      }
  }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_j_44;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_7 = NULL;
  t = pass_verbose_0_0(t);
  k_7 = t;
  t = (ATerm) ATinsert(CheckATermList(k_7), term_d_41);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_j_44;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm m_7 = NULL;
  t = pass_verbose_0_0(t);
  m_7 = t;
  t = (ATerm) ATinsert(CheckATermList(m_7), term_d_41);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_j_44;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm d_9 = NULL;
  t = pass_verbose_0_0(t);
  d_9 = t;
  t = (ATerm) ATinsert(CheckATermList(d_9), term_d_41);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_j_44;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm e_9 = NULL;
  t = pass_verbose_0_0(t);
  e_9 = t;
  t = (ATerm) ATinsert(CheckATermList(e_9), term_d_41);
  return(t);
}
ATerm bound_unbound_vars_0_0 (ATerm t)
{
  ATerm i_13 = NULL;
  i_13 = t;
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_13;
        {
          ATerm m_44 = t;
          int p_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_7 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  e_7 = ATgetArgument(t, 0);
                  {
                    ATerm v_7 = NULL,e_4 = NULL;
                    t = SSLgetAnnotations(i_13);
                    v_7 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, e_7);
                    e_4 = t;
                    t = SSLsetAnnotations(e_4, v_7);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = i_13;
                }
              LocalPopChoice(p_44);
              t = xtc_transform_file_2_0(e_8, f_8, t);
            }
          else
            {
              t = m_44;
              t = xtc_transform_term_2_0(g_8, h_8, t);
            }
        }
        LocalPopChoice(l_44);
      }
    else
      {
        t = k_44;
        t = i_13;
        {
          ATerm q_44 = t;
          int s_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  w_8 = ATgetArgument(t, 0);
                  {
                    ATerm t_9 = NULL,f_4 = NULL;
                    t = SSLgetAnnotations(i_13);
                    t_9 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, w_8);
                    f_4 = t;
                    t = SSLsetAnnotations(f_4, t_9);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = i_13;
                }
              LocalPopChoice(s_44);
              t = xtc_transform_file_2_0(j_8, k_8, t);
            }
          else
            {
              t = q_44;
              t = xtc_transform_term_2_0(l_8, m_8, t);
            }
        }
      }
  }
  return(t);
}
ATerm dead_def_elim_0_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  w_13 = t;
  t = term_t_44;
  u_13 = t;
  t = w_13;
  {
    ATerm u_44 = t;
    int w_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL,a_14 = NULL;
        t = term_b_38;
        z_13 = t;
        t = term_o_40;
        a_14 = t;
        t = term_p_40;
        t = d_16(z_13, a_14, t);
        t = w_13;
        LocalPopChoice(w_44);
        t = (ATerm) ATinsert(ATempty, term_y_44);
      }
    else
      {
        t = u_44;
        t = (ATerm) ATempty;
      }
  }
  v_13 = t;
  t = w_13;
  t = comp_0_2(u_13, v_13, t);
  return(t);
}
ATerm if_keep4_1_0 (ATerm u_131 (ATerm), ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  {
    ATerm c_45 = t;
    int d_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 = NULL,g_14 = NULL,i_14 = NULL;
        t = term_b_38;
        g_14 = t;
        t = term_b_44;
        i_14 = t;
        t = term_c_44;
        t = d_16(g_14, i_14, t);
        f_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_14, term_e_45);
        t = geq_0_0(t);
        t = d_14;
        t = u_131(t);
        LocalPopChoice(d_45);
      }
    else
      {
        t = c_45;
        t = d_14;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm d_18 = NULL,h_18 = NULL,i_18 = NULL;
  d_18 = t;
  t = term_n_38;
  h_18 = t;
  t = (ATerm) ATinsert(ATempty, term_f_45);
  i_18 = t;
  t = SSL_printnl(h_18, i_18);
  t = d_18;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = if_verbose1_1_0(q_8, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm n_18 = NULL;
  t = if_verbose3_1_0(s_8, t);
  t = olevel_2_0(y_8, l_9, t);
  t = olevel_2_0(z_9, d_10, t);
  t = olevel_2_0(a_11, f_11, t);
  n_18 = t;
  {
    ATerm i_45 = t;
    int j_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_21 = ATgetArgument(t, 0);
            {
              ATerm f_13 = NULL,d_6 = NULL;
              t = SSLgetAnnotations(n_18);
              f_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_21);
              d_6 = t;
              t = SSLsetAnnotations(d_6, f_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_18;
          }
        LocalPopChoice(j_45);
        t = xtc_transform_file_2_0(s_12, t_12, t);
      }
    else
      {
        t = i_45;
        t = xtc_transform_term_2_0(u_12, v_12, t);
      }
  }
  t = olevel_2_0(w_12, x_12, t);
  t = olevel_2_0(t_13, y_13, t);
  t = olevel_2_0(z_14, d_15, t);
  t = olevel_2_0(p_16, q_16, t);
  t = olevel_2_0(r_17, s_17, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  t = term_n_38;
  l_18 = t;
  t = (ATerm) ATinsert(CheckATermList(k_18), term_k_45);
  m_18 = t;
  t = SSL_printnl(l_18, m_18);
  t = (ATerm) ATmakeAppl(sym__2, term_n_38, (ATerm) ATinsert(CheckATermList(k_18), term_k_45));
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  t = term_b_38;
  r_18 = t;
  t = term_f_44;
  s_18 = t;
  t = term_g_44;
  t = d_16(r_18, s_18, t);
  t = debug_1_0(u_8, t);
  t = q_18;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_l_45;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  {
    ATerm m_45 = t;
    int n_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_18 = ATgetArgument(t, 0);
            {
              ATerm x_9 = NULL,q_4 = NULL;
              t = SSLgetAnnotations(t_18);
              x_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_18);
              q_4 = t;
              t = SSLsetAnnotations(q_4, x_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_18;
          }
        LocalPopChoice(n_45);
        t = xtc_transform_file_2_0(r_9, s_9, t);
      }
    else
      {
        t = m_45;
        t = xtc_transform_term_2_0(u_9, v_9, t);
      }
  }
  t = if_keep1_1_0(w_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm b_19 = NULL;
  t = pass_verbose_0_0(t);
  b_19 = t;
  t = (ATerm) ATinsert(CheckATermList(b_19), term_d_41);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm c_19 = NULL;
  t = pass_verbose_0_0(t);
  c_19 = t;
  t = (ATerm) ATinsert(CheckATermList(c_19), term_d_41);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = save_as_1_0(y_9, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_o_45;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_l_38;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  {
    ATerm p_45 = t;
    int r_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_19;
        {
          ATerm s_45 = t;
          if((PushChoice() == 0))
            {
              ATerm z_10 = NULL,b_11 = NULL;
              t = term_b_38;
              z_10 = t;
              t = term_t_45;
              b_11 = t;
              t = term_u_45;
              t = d_16(z_10, b_11, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_45;
            }
        }
        t = x_19;
        {
          ATerm v_45 = t;
          int w_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_11 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  k_11 = ATgetArgument(t, 0);
                  {
                    ATerm z_11 = NULL,u_5 = NULL;
                    t = SSLgetAnnotations(x_19);
                    z_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, k_11);
                    u_5 = t;
                    t = SSLsetAnnotations(u_5, z_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = x_19;
                }
              LocalPopChoice(w_45);
              t = xtc_transform_file_2_0(m_10, q_10, t);
            }
          else
            {
              t = v_45;
              t = xtc_transform_term_2_0(r_10, u_10, t);
            }
        }
        t = if_keep2_1_0(x_10, t);
        LocalPopChoice(r_45);
      }
    else
      {
        t = p_45;
        t = x_19;
      }
  }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_x_45;
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm n_11 = NULL;
  t = pass_verbose_0_0(t);
  n_11 = t;
  t = (ATerm) ATinsert(CheckATermList(n_11), term_d_41);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_x_45;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm q_11 = NULL;
  t = pass_verbose_0_0(t);
  q_11 = t;
  t = (ATerm) ATinsert(CheckATermList(q_11), term_d_41);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = save_as_1_0(y_10, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_z_45;
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_e_45;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  b_20 = t;
  {
    ATerm a_46 = t;
    int c_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_20 = ATgetArgument(t, 0);
            {
              ATerm d_12 = NULL,v_5 = NULL;
              t = SSLgetAnnotations(b_20);
              d_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_20);
              v_5 = t;
              t = SSLsetAnnotations(v_5, d_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_20;
          }
        LocalPopChoice(c_46);
        t = xtc_transform_file_2_0(l_11, m_11, t);
      }
    else
      {
        t = a_46;
        t = xtc_transform_term_2_0(p_11, w_11, t);
      }
  }
  t = if_keep6_1_0(x_11, t);
  a_20 = t;
  {
    ATerm e_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            t_20 = ATgetArgument(t, 0);
            {
              ATerm k_12 = NULL,w_5 = NULL;
              t = SSLgetAnnotations(a_20);
              k_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_20);
              w_5 = t;
              t = SSLsetAnnotations(w_5, k_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_20;
          }
        LocalPopChoice(i_46);
        t = xtc_transform_file_2_0(a_12, b_12, t);
      }
    else
      {
        t = e_46;
        t = xtc_transform_term_2_0(c_12, e_12, t);
      }
  }
  t = dead_def_elim_0_0(t);
  t = if_keep4_1_0(f_12, t);
  z_19 = t;
  {
    ATerm l_46 = t;
    int m_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_21 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_21 = ATgetArgument(t, 0);
            {
              ATerm y_12 = NULL,x_5 = NULL;
              t = SSLgetAnnotations(z_19);
              y_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_21);
              x_5 = t;
              t = SSLsetAnnotations(x_5, y_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_19;
          }
        LocalPopChoice(m_46);
        t = xtc_transform_file_2_0(l_12, p_12, t);
      }
    else
      {
        t = l_46;
        t = xtc_transform_term_2_0(q_12, r_12, t);
      }
  }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm k_20 = NULL;
  t = pass_verbose_0_0(t);
  k_20 = t;
  t = (ATerm) ATinsert(CheckATermList(k_20), term_d_41);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_o_46;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm n_20 = NULL;
  t = pass_verbose_0_0(t);
  n_20 = t;
  t = (ATerm) ATinsert(CheckATermList(n_20), term_d_41);
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = save_as_1_0(y_11, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_p_46;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm v_20 = NULL;
  t = pass_verbose_0_0(t);
  v_20 = t;
  t = (ATerm) ATinsert(CheckATermList(v_20), term_d_41);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm w_20 = NULL;
  t = pass_verbose_0_0(t);
  w_20 = t;
  t = (ATerm) ATinsert(CheckATermList(w_20), term_d_41);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = save_as_1_0(g_12, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_r_46;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm e_21 = NULL;
  t = pass_verbose_0_0(t);
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), term_d_41);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_q_41;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm f_21 = NULL;
  t = pass_verbose_0_0(t);
  f_21 = t;
  t = (ATerm) ATinsert(CheckATermList(f_21), term_d_41);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm o_21 = NULL;
  t = pass_verbose_0_0(t);
  o_21 = t;
  t = (ATerm) ATinsert(CheckATermList(o_21), term_d_41);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_s_46;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm p_21 = NULL;
  t = pass_verbose_0_0(t);
  p_21 = t;
  t = (ATerm) ATinsert(CheckATermList(p_21), term_d_41);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_e_45;
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm s_21 = NULL,u_21 = NULL,v_21 = NULL;
  v_21 = t;
  {
    ATerm t_46 = t;
    int u_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            c_22 = ATgetArgument(t, 0);
            {
              ATerm n_13 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(v_21);
              n_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_22);
              i_6 = t;
              t = SSLsetAnnotations(i_6, n_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_21;
          }
        LocalPopChoice(u_46);
        t = xtc_transform_file_2_0(z_12, a_13, t);
      }
    else
      {
        t = t_46;
        t = xtc_transform_term_2_0(b_13, c_13, t);
      }
  }
  t = bound_unbound_vars_0_0(t);
  u_21 = t;
  {
    ATerm v_46 = t;
    int w_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            p_22 = ATgetArgument(t, 0);
            {
              ATerm x_13 = NULL,j_6 = NULL;
              t = SSLgetAnnotations(u_21);
              x_13 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_22);
              j_6 = t;
              t = SSLsetAnnotations(j_6, x_13);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_21;
          }
        LocalPopChoice(w_46);
        t = xtc_transform_file_2_0(d_13, e_13, t);
      }
    else
      {
        t = v_46;
        t = xtc_transform_term_2_0(h_13, j_13, t);
      }
  }
  s_21 = t;
  {
    ATerm x_46 = t;
    int y_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_22 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            y_22 = ATgetArgument(t, 0);
            {
              ATerm h_14 = NULL,k_6 = NULL;
              t = SSLgetAnnotations(s_21);
              h_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_22);
              k_6 = t;
              t = SSLsetAnnotations(k_6, h_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_21;
          }
        LocalPopChoice(y_46);
        t = xtc_transform_file_2_0(l_13, m_13, t);
      }
    else
      {
        t = x_46;
        t = xtc_transform_term_2_0(p_13, q_13, t);
      }
  }
  t = if_keep4_1_0(r_13, t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm g_22 = NULL;
  t = pass_verbose_0_0(t);
  g_22 = t;
  t = (ATerm) ATinsert(CheckATermList(g_22), term_d_41);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm h_22 = NULL;
  t = pass_verbose_0_0(t);
  h_22 = t;
  t = (ATerm) ATinsert(CheckATermList(h_22), term_d_41);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm r_22 = NULL;
  t = pass_verbose_0_0(t);
  r_22 = t;
  t = (ATerm) ATinsert(CheckATermList(r_22), term_d_41);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm s_22 = NULL;
  t = pass_verbose_0_0(t);
  s_22 = t;
  t = (ATerm) ATinsert(CheckATermList(s_22), term_d_41);
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_c_47;
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm a_23 = NULL;
  t = pass_verbose_0_0(t);
  a_23 = t;
  t = (ATerm) ATinsert(CheckATermList(a_23), term_d_41);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = term_c_47;
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm l_23 = NULL;
  t = pass_verbose_0_0(t);
  l_23 = t;
  t = (ATerm) ATinsert(CheckATermList(l_23), term_d_41);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = save_as_1_0(s_13, t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  t = term_d_47;
  return(t);
}
static ATerm t_13 (ATerm t)
{
  t = term_l_38;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm m_23 = NULL,d_24 = NULL;
  d_24 = t;
  {
    ATerm e_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_24 = ATgetArgument(t, 0);
            {
              ATerm n_14 = NULL,l_6 = NULL;
              t = SSLgetAnnotations(d_24);
              n_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_24);
              l_6 = t;
              t = SSLsetAnnotations(l_6, n_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_24;
          }
        LocalPopChoice(f_47);
        t = xtc_transform_file_2_0(b_14, c_14, t);
      }
    else
      {
        t = e_47;
        t = xtc_transform_term_2_0(e_14, j_14, t);
      }
  }
  m_23 = t;
  {
    ATerm g_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_24 = ATgetArgument(t, 0);
            {
              ATerm r_14 = NULL,s_6 = NULL;
              t = SSLgetAnnotations(m_23);
              r_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_24);
              s_6 = t;
              t = SSLsetAnnotations(s_6, r_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_23;
          }
        LocalPopChoice(h_47);
        t = xtc_transform_file_2_0(k_14, l_14, t);
      }
    else
      {
        t = g_47;
        t = xtc_transform_term_2_0(m_14, o_14, t);
      }
  }
  t = if_keep2_1_0(p_14, t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_k_47;
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm l_24 = NULL;
  t = pass_verbose_0_0(t);
  l_24 = t;
  t = (ATerm) ATinsert(CheckATermList(l_24), term_d_41);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  t = term_k_47;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm o_24 = NULL;
  t = pass_verbose_0_0(t);
  o_24 = t;
  t = (ATerm) ATinsert(CheckATermList(o_24), term_d_41);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_m_47;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm x_24 = NULL;
  t = pass_verbose_0_0(t);
  x_24 = t;
  t = (ATerm) ATinsert(CheckATermList(x_24), term_d_41);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_m_47;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm y_24 = NULL;
  t = pass_verbose_0_0(t);
  y_24 = t;
  t = (ATerm) ATinsert(CheckATermList(y_24), term_d_41);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = save_as_1_0(q_14, t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_n_47;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_o_47;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  {
    ATerm p_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            f_25 = ATgetArgument(t, 0);
            {
              ATerm i_15 = NULL,t_6 = NULL;
              t = SSLgetAnnotations(z_24);
              i_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_25);
              t_6 = t;
              t = SSLsetAnnotations(t_6, i_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_24;
          }
        LocalPopChoice(q_47);
        t = xtc_transform_file_2_0(f_15, j_15, t);
      }
    else
      {
        t = p_47;
        t = xtc_transform_term_2_0(o_15, p_15, t);
      }
  }
  t = if_keep5_1_0(k_16, t);
  t = dead_def_elim_0_0(t);
  t = if_keep5_1_0(m_16, t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm h_25 = NULL;
  t = pass_verbose_0_0(t);
  h_25 = t;
  t = (ATerm) ATinsert(CheckATermList(h_25), term_d_41);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_q_46;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm i_25 = NULL;
  t = pass_verbose_0_0(t);
  i_25 = t;
  t = (ATerm) ATinsert(CheckATermList(i_25), term_d_41);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = save_as_1_0(l_16, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_r_47;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  t = save_as_1_0(o_16, t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_s_47;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = term_b_42;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  n_25 = t;
  {
    ATerm t_47 = t;
    int u_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_25 = ATgetArgument(t, 0);
            {
              ATerm f_16 = NULL,u_6 = NULL;
              t = SSLgetAnnotations(n_25);
              f_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_25);
              u_6 = t;
              t = SSLsetAnnotations(u_6, f_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = n_25;
          }
        LocalPopChoice(u_47);
        t = xtc_transform_file_2_0(s_16, t_16, t);
      }
    else
      {
        t = t_47;
        t = xtc_transform_term_2_0(u_16, w_16, t);
      }
  }
  t = if_keep3_1_0(x_16, t);
  m_25 = t;
  {
    ATerm v_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            b_26 = ATgetArgument(t, 0);
            {
              ATerm n_16 = NULL,w_6 = NULL;
              t = SSLgetAnnotations(m_25);
              n_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_26);
              w_6 = t;
              t = SSLsetAnnotations(w_6, n_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_25;
          }
        LocalPopChoice(x_47);
        t = xtc_transform_file_2_0(a_17, b_17, t);
      }
    else
      {
        t = v_47;
        t = xtc_transform_term_2_0(c_17, d_17, t);
      }
  }
  t = if_keep3_1_0(f_17, t);
  t = bound_unbound_vars_0_0(t);
  t = if_keep3_1_0(h_17, t);
  l_25 = t;
  {
    ATerm y_47 = t;
    int a_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_26 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            m_26 = ATgetArgument(t, 0);
            {
              ATerm r_16 = NULL,y_6 = NULL;
              t = SSLgetAnnotations(l_25);
              r_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_26);
              y_6 = t;
              t = SSLsetAnnotations(y_6, r_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_25;
          }
        LocalPopChoice(a_48);
        t = xtc_transform_file_2_0(j_17, k_17, t);
      }
    else
      {
        t = y_47;
        t = xtc_transform_term_2_0(l_17, o_17, t);
      }
  }
  t = if_keep3_1_0(p_17, t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_b_48;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm u_25 = NULL;
  t = pass_verbose_0_0(t);
  u_25 = t;
  t = (ATerm) ATinsert(CheckATermList(u_25), term_d_41);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  t = term_b_48;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm v_25 = NULL;
  t = pass_verbose_0_0(t);
  v_25 = t;
  t = (ATerm) ATinsert(CheckATermList(v_25), term_d_41);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = save_as_1_0(y_16, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_c_48;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm f_26 = NULL;
  t = pass_verbose_0_0(t);
  f_26 = t;
  t = (ATerm) ATinsert(CheckATermList(f_26), term_d_41);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm h_26 = NULL;
  t = pass_verbose_0_0(t);
  h_26 = t;
  t = (ATerm) ATinsert(CheckATermList(h_26), term_d_41);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = save_as_1_0(g_17, t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = term_f_48;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = save_as_1_0(i_17, t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_g_48;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm p_26 = NULL;
  t = pass_verbose_0_0(t);
  p_26 = t;
  t = (ATerm) ATinsert(CheckATermList(p_26), term_d_41);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_b_47;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm q_26 = NULL;
  t = pass_verbose_0_0(t);
  q_26 = t;
  t = (ATerm) ATinsert(CheckATermList(q_26), term_d_41);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = save_as_1_0(q_17, t);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_h_48;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm r_26 = NULL,t_26 = NULL;
  t_26 = t;
  {
    ATerm j_48 = t;
    int n_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            a_27 = ATgetArgument(t, 0);
            {
              ATerm v_16 = NULL,z_6 = NULL;
              t = SSLgetAnnotations(t_26);
              v_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_27);
              z_6 = t;
              t = SSLsetAnnotations(z_6, v_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_26;
          }
        LocalPopChoice(n_48);
        t = xtc_transform_file_2_0(t_17, u_17, t);
      }
    else
      {
        t = j_48;
        t = xtc_transform_term_2_0(v_17, w_17, t);
      }
  }
  t = if_keep1_1_0(z_17, t);
  r_26 = t;
  {
    ATerm o_48 = t;
    int p_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_27 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            j_27 = ATgetArgument(t, 0);
            {
              ATerm z_16 = NULL,b_7 = NULL;
              t = SSLgetAnnotations(r_26);
              z_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_27);
              b_7 = t;
              t = SSLsetAnnotations(b_7, z_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = r_26;
          }
        LocalPopChoice(p_48);
        t = xtc_transform_file_2_0(b_18, c_18, t);
      }
    else
      {
        t = o_48;
        t = xtc_transform_term_2_0(e_18, g_18, t);
      }
  }
  t = if_keep1_1_0(p_18, t);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_c_47;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm d_27 = NULL;
  t = pass_verbose_0_0(t);
  d_27 = t;
  t = (ATerm) ATinsert(CheckATermList(d_27), term_d_41);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_c_47;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm e_27 = NULL;
  t = pass_verbose_0_0(t);
  e_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), term_d_41);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = save_as_1_0(a_18, t);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_r_48;
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_s_48;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm m_27 = NULL;
  t = pass_verbose_0_0(t);
  m_27 = t;
  t = (ATerm) ATinsert(CheckATermList(m_27), term_d_41);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = term_s_48;
  return(t);
}
static ATerm g_18 (ATerm t)
{
  ATerm o_27 = NULL;
  t = pass_verbose_0_0(t);
  o_27 = t;
  t = (ATerm) ATinsert(CheckATermList(o_27), term_d_41);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  t = save_as_1_0(v_18, t);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  t = term_t_48;
  return(t);
}
ATerm optimize_0_0 (ATerm t)
{
  t = if_verbose2_1_0(n_8, t);
  t = profile_p__2_0(o_8, p_8, t);
  return(t);
}
static ATerm d_19 (ATerm t)
{
  t = term_y_42;
  return(t);
}
static ATerm f_19 (ATerm t)
{
  ATerm n_29 = NULL;
  t = pass_verbose_0_0(t);
  n_29 = t;
  t = (ATerm) ATinsert(CheckATermList(n_29), term_a_43);
  return(t);
}
static ATerm h_19 (ATerm t)
{
  t = term_y_42;
  return(t);
}
static ATerm i_19 (ATerm t)
{
  ATerm q_29 = NULL;
  t = pass_verbose_0_0(t);
  q_29 = t;
  t = (ATerm) ATinsert(CheckATermList(q_29), term_a_43);
  return(t);
}
ATerm save_as_1_0 (ATerm d_103 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,r_28 = NULL,s_28 = NULL,u_28 = NULL,z_28 = NULL,a_29 = NULL;
  r_28 = t;
  {
    static ATerm x_18 (ATerm t);
    static ATerm x_18 (ATerm t)
    {
      static ATerm a_19 (ATerm t);
      static ATerm a_19 (ATerm t)
      {
        ATerm b_29 = NULL,c_29 = NULL;
        t = d_103(t);
        b_29 = t;
        t = term_u_48;
        c_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_48, b_29);
        t = j_16(c_29, b_29, t);
        return(t);
      }
      t = get_outfile_1_0(a_19, t);
      if(((o_28 != NULL) && (o_28 != t)))
        _fail(t);
      else
        o_28 = t;
      return(t);
    }
    t = copy_to_1_0(x_18, t);
  }
  {
    ATerm v_48 = t;
    int w_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_29 = NULL,m_29 = NULL;
        m_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            l_29 = ATgetArgument(t, 0);
            {
              ATerm e_17 = NULL,r_8 = NULL;
              t = SSLgetAnnotations(m_29);
              e_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_29);
              r_8 = t;
              t = SSLsetAnnotations(r_8, e_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_29;
          }
        LocalPopChoice(w_48);
        t = xtc_transform_file_2_0(d_19, f_19, t);
      }
    else
      {
        t = v_48;
        t = xtc_transform_term_2_0(h_19, i_19, t);
      }
  }
  {
    static ATerm l_19 (ATerm t);
    static ATerm l_19 (ATerm t)
    {
      ATerm r_29 = NULL;
      t = term_x_48;
      r_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), term_x_48);
      t = j_16(not_null(o_28), r_29, t);
      if(((p_28 != NULL) && (p_28 != t)))
        _fail(t);
      else
        p_28 = t;
      return(t);
    }
    t = copy_to_1_0(l_19, t);
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_49), not_null(p_28)), term_z_48), not_null(o_28)), term_y_48);
  a_29 = t;
  t = SSL_concat_strings(a_29);
  s_28 = t;
  t = term_n_38;
  u_28 = t;
  t = (ATerm) ATinsert(ATempty, s_28);
  z_28 = t;
  t = SSL_printnl(u_28, z_28);
  t = r_28;
  return(t);
}
ATerm if_keep2_1_0 (ATerm s_131 (ATerm), ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  {
    ATerm c_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
        t = term_b_38;
        z_29 = t;
        t = term_b_44;
        a_30 = t;
        t = term_c_44;
        t = d_16(z_29, a_30, t);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_29, term_l_38);
        t = geq_0_0(t);
        t = u_29;
        t = s_131(t);
        LocalPopChoice(e_49);
      }
    else
      {
        t = c_49;
        t = u_29;
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,j_30 = NULL,k_30 = NULL;
  t = term_c_38;
  {
    ATerm g_49 = t;
    int i_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_30 = NULL,o_30 = NULL;
        t = term_b_38;
        n_30 = t;
        t = term_c_38;
        o_30 = t;
        t = term_f_38;
        t = d_16(n_30, o_30, t);
        LocalPopChoice(i_49);
      }
    else
      {
        t = g_49;
        t = term_f_39;
      }
  }
  f_30 = t;
  t = term_f_39;
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_30, term_f_39);
  t = g_15(f_30, k_30, t);
  j_30 = t;
  t = SSL_int_to_string(j_30);
  e_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_30), term_c_38);
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm t_30 = NULL,v_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_49 = ATgetArgument(t, 0);
      if(match_cons(k_49, sym_Stream_1))
        {
          t_30 = ATgetArgument(k_49, 0);
        }
      else
        _fail(t);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14(t_30, v_30, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_140 (ATerm), ATerm z_140 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,s_30 = NULL;
  s_30 = t;
  t = xtc_new_file_0_0(t);
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_30, s_30);
  t = x_14(m_19, q_30, s_30, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_30);
  t = xtc_transform_file_2_0(y_140, z_140, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm y_14 (ATerm g_71, ATerm h_71, ATerm t)
{
  t = SSL_execvp(g_71, h_71);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
  t_31 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_31 = ATgetArgument(t, 0);
      {
        ATerm m_17 = NULL,n_17 = NULL;
        t = SSL_int_to_string(u_31);
        m_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_49), m_17), term_n_49);
        n_17 = t;
        t = SSL_concat_strings(n_17);
      }
    }
  else
    {
      ATerm x_17 = NULL,y_17 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_31 = ATgetArgument(t, 0);
          v_31 = ATgetArgument(t, 1);
          w_31 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_31);
      x_17 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_31), term_v_49), x_17), term_t_49), u_31);
      y_17 = t;
      t = SSL_concat_strings(y_17);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm z_31 = NULL;
  z_31 = t;
  {
    ATerm y_49 = t;
    int z_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_19 (ATerm t);
        static ATerm q_19 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm c_50 = ATgetArgument(t, 0);
              if((z_31 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm h_50 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_55), term_r_55), term_f_55), term_a_55), term_x_54), term_q_54), term_m_54), term_i_54), term_e_54), term_a_54), term_w_53), term_s_53), term_o_53), term_k_53), term_g_53), term_a_53), term_w_52), term_t_52), term_p_52), term_l_52), term_e_52), term_a_52), term_u_51), term_l_51), term_c_51), term_y_50), term_p_50), term_k_50);
        t = fetch_elem_1_0(q_19, t);
        LocalPopChoice(z_49);
      }
    else
      {
        t = y_49;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, z_31);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_32 = NULL,n_32 = NULL;
  d_32 = t;
  {
    ATerm y_55 = t;
    int z_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_56 = ATgetArgument(t, 0);
            n_32 = ATgetArgument(t, 1);
            {
              ATerm b_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_55);
        {
          ATerm c_56 = t;
          int d_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_18 = NULL,j_18 = NULL,o_18 = NULL;
              t = n_32;
              {
                ATerm e_56 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_56;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              f_18 = t;
              t = term_n_38;
              j_18 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_18), term_f_56);
              o_18 = t;
              t = SSL_printnl(j_18, o_18);
              t = (ATerm) ATmakeAppl(sym__2, term_n_38, (ATerm) ATinsert(ATinsert(ATempty, f_18), term_f_56));
              LocalPopChoice(d_56);
            }
          else
            {
              t = c_56;
              t = d_32;
            }
        }
      }
    else
      {
        t = y_55;
        t = d_32;
      }
  }
  t = d_32;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm c_132 (ATerm), ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL;
  x_32 = t;
  t = fork_0_0(t);
  w_32 = t;
  {
    ATerm g_56 = t;
    int h_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_32;
        t = c_132(t);
        LocalPopChoice(h_56);
      }
    else
      {
        t = g_56;
        t = SSL_waitpid(w_32);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_56 = ATgetArgument(t, 0);
            if(((ATgetType(i_56) != AT_INT) || (ATgetInt((ATermInt) i_56) != 0)))
              _fail(t);
            {
              ATerm j_56 = ATgetArgument(t, 1);
            }
            {
              ATerm k_56 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_32;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm h_142 (ATerm), ATerm t)
{
  ATerm c_33 = NULL,e_33 = NULL;
  e_33 = t;
  t = h_142(t);
  t = xtc_find_0_0(t);
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_33, e_33);
  {
    static ATerm s_19 (ATerm t);
    static ATerm s_19 (ATerm t)
    {
      ATerm g_33 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, c_33, e_33);
      t = y_14(c_33, e_33, t);
      t = term_f_39;
      g_33 = t;
      t = SSL_exit(g_33);
      return(t);
    }
    t = fork_and_wait_1_0(s_19, t);
  }
  t = e_33;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm j_33 = NULL,n_33 = NULL;
  j_33 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_33 = NULL,s_33 = NULL;
      t = j_33;
      t = xtc_new_file_0_0(t);
      p_33 = t;
      t = r_0(t);
      s_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_33, (ATerm) ATinsert(ATinsert(ATempty, p_33), term_x_38));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_33);
    }
  else
    {
      ATerm u_33 = NULL,v_33 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_33;
      t = xtc_new_file_0_0(t);
      u_33 = t;
      t = r_0(t);
      v_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_33, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_33), term_x_38), n_33), term_l_56));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_33);
    }
  return(t);
}
ATerm comp_0_2 (ATerm b_23, ATerm c_23, ATerm t)
{
  ATerm m_56 = t;
  int n_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_49 = NULL,f_49 = NULL;
      f_49 = t;
      if(match_cons(t, sym_FILE_1))
        {
          d_49 = ATgetArgument(t, 0);
          {
            ATerm m_30 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(f_49);
            m_30 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, d_49);
            t_8 = t;
            t = SSLsetAnnotations(t_8, m_30);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_49;
        }
      LocalPopChoice(n_56);
      {
        static ATerm y_19 (ATerm t);
        static ATerm c_20 (ATerm t);
        static ATerm y_19 (ATerm t)
        {
          t = b_23;
          return(t);
        }
        static ATerm c_20 (ATerm t)
        {
          ATerm j_49 = NULL;
          t = pass_verbose_0_0(t);
          j_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_23), j_49), (ATerm) ATinsert(ATempty, term_d_41));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(y_19, c_20, t);
      }
    }
  else
    {
      t = m_56;
      {
        static ATerm d_20 (ATerm t);
        static ATerm f_20 (ATerm t);
        static ATerm d_20 (ATerm t)
        {
          t = b_23;
          return(t);
        }
        static ATerm f_20 (ATerm t)
        {
          ATerm l_49 = NULL;
          t = pass_verbose_0_0(t);
          l_49 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_23), l_49), (ATerm) ATinsert(ATempty, term_d_41));
          t = concat_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(d_20, f_20, t);
      }
    }
  return(t);
}
ATerm foldr_3_0 (ATerm d_121 (ATerm), ATerm e_121 (ATerm), ATerm f_121 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_33;
      t = d_121(t);
    }
  else
    {
      ATerm f_34 = NULL,g_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_33 = ATgetFirst((ATermList) t);
          z_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_33;
      t = f_121(t);
      f_34 = t;
      t = z_33;
      t = foldr_3_0(d_121, e_121, f_121, t);
      g_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_34, g_34);
      t = e_121(t);
    }
  return(t);
}
static ATerm i_20 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  p_34 = t;
  t = SSL_explode_term(p_34);
  if(match_cons(t, sym__2))
    {
      ATerm o_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_56) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_56 = ATgetArgument(t, 1);
        if(((ATgetType(p_56) == AT_LIST) && !(ATisEmpty(p_56))))
          {
            o_34 = ATgetFirst((ATermList) p_56);
            {
              ATerm q_56 = (ATerm) ATgetNext((ATermList) p_56);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_34;
  return(t);
}
ATerm get_warnings_0_0 (ATerm t)
{
  ATerm r_56 = t;
  int s_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_34 = NULL,n_34 = NULL;
      t = term_b_38;
      k_34 = t;
      t = term_t_56;
      n_34 = t;
      t = term_u_56;
      t = d_16(k_34, n_34, t);
      LocalPopChoice(s_56);
    }
  else
    {
      t = r_56;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_57), term_i_57), term_d_57), term_x_56);
      t = map_1_0(i_20, t);
    }
  return(t);
}
static ATerm j_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm m_20 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_34), term_t_56);
  return(t);
}
ATerm pass_warnings_0_0 (ATerm t)
{
  t = get_warnings_0_0(t);
  t = foldr_3_0(j_20, conc_0_0, m_20, t);
  return(t);
}
static ATerm p_20 (ATerm t)
{
  t = term_m_57;
  return(t);
}
static ATerm u_20 (ATerm t)
{
  ATerm r_20 = NULL;
  t = pass_verbose_0_0(t);
  r_20 = t;
  t = (ATerm) ATinsert(CheckATermList(r_20), term_d_41);
  return(t);
}
static ATerm z_20 (ATerm t)
{
  t = term_m_57;
  return(t);
}
static ATerm a_21 (ATerm t)
{
  ATerm s_20 = NULL;
  t = pass_verbose_0_0(t);
  s_20 = t;
  t = (ATerm) ATinsert(CheckATermList(s_20), term_d_41);
  return(t);
}
static ATerm d_21 (ATerm t)
{
  t = get_outfile_1_0(h_21, t);
  return(t);
}
static ATerm h_21 (ATerm t)
{
  t = term_q_57;
  return(t);
}
ATerm output_frontend_0_0 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  {
    ATerm r_57 = t;
    int v_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_19 = NULL,o_19 = NULL,p_19 = NULL,t_19 = NULL,u_19 = NULL;
        t = term_b_38;
        t_19 = t;
        t = term_z_57;
        u_19 = t;
        t = term_a_58;
        t = d_16(t_19, u_19, t);
        t = o_36;
        {
          ATerm b_58 = t;
          int h_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_36;
              {
                ATerm i_58 = t;
                int m_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_20 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        l_20 = ATgetArgument(t, 0);
                        {
                          ATerm r_21 = NULL,v_8 = NULL;
                          t = SSLgetAnnotations(o_36);
                          r_21 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, l_20);
                          v_8 = t;
                          t = SSLsetAnnotations(v_8, r_21);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = o_36;
                      }
                    LocalPopChoice(m_58);
                    t = xtc_transform_file_2_0(p_20, u_20, t);
                  }
                else
                  {
                    t = i_58;
                    t = xtc_transform_term_2_0(z_20, a_21, t);
                  }
              }
              LocalPopChoice(h_58);
            }
          else
            {
              t = b_58;
              {
                ATerm x_20 = NULL,b_21 = NULL,g_21 = NULL;
                t = term_n_38;
                b_21 = t;
                t = (ATerm) ATinsert(ATempty, term_n_58);
                g_21 = t;
                t = SSL_printnl(b_21, g_21);
                t = term_f_39;
                x_20 = t;
                t = SSL_exit(x_20);
                t = (ATerm) ATinsert(ATempty, term_n_58);
              }
            }
        }
        t = copy_to_1_0(d_21, t);
        j_19 = t;
        t = term_n_38;
        o_19 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_58));
        p_19 = t;
        t = SSL_printnl(o_19, p_19);
        t = j_19;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(v_57);
      }
    else
      {
        t = r_57;
        t = o_36;
      }
  }
  return(t);
}
ATerm if_keep5_1_0 (ATerm v_131 (ATerm), ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  {
    ATerm v_58 = t;
    int w_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
        t = term_b_38;
        i_37 = t;
        t = term_b_44;
        j_37 = t;
        t = term_c_44;
        t = d_16(i_37, j_37, t);
        h_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_37, term_o_47);
        t = geq_0_0(t);
        t = d_37;
        t = v_131(t);
        LocalPopChoice(w_58);
      }
    else
      {
        t = v_58;
        t = d_37;
      }
  }
  return(t);
}
ATerm if_keep6_1_0 (ATerm w_131 (ATerm), ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  {
    ATerm x_58 = t;
    int y_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
        t = term_b_38;
        t_37 = t;
        t = term_b_44;
        u_37 = t;
        t = term_c_44;
        t = d_16(t_37, u_37, t);
        s_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_37, term_a_51);
        t = geq_0_0(t);
        t = o_37;
        t = w_131(t);
        LocalPopChoice(y_58);
      }
    else
      {
        t = x_58;
        t = o_37;
      }
  }
  return(t);
}
ATerm pass_maybe_unbound_warnings_0_0 (ATerm t)
{
  ATerm a_59 = t;
  int d_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_37 = NULL,z_37 = NULL;
      t = term_b_38;
      w_37 = t;
      t = term_e_59;
      z_37 = t;
      t = term_f_59;
      t = d_16(w_37, z_37, t);
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 1)))
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_59);
      LocalPopChoice(d_59);
    }
  else
    {
      t = a_59;
      t = (ATerm) ATinsert(ATempty, term_g_59);
    }
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  h_38 = t;
  t = term_h_59;
  d_38 = t;
  t = term_b_38;
  j_38 = t;
  t = term_j_59;
  k_38 = t;
  t = term_l_59;
  t = d_16(j_38, k_38, t);
  i_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_38), term_j_59);
  e_38 = t;
  t = h_38;
  t = comp_0_2(d_38, e_38, t);
  return(t);
}
ATerm if_keep3_1_0 (ATerm t_131 (ATerm), ATerm t)
{
  ATerm m_38 = NULL;
  m_38 = t;
  {
    ATerm n_59 = t;
    int o_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
        t = term_b_38;
        r_38 = t;
        t = term_b_44;
        s_38 = t;
        t = term_c_44;
        t = d_16(r_38, s_38, t);
        q_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_38, term_b_42);
        t = geq_0_0(t);
        t = m_38;
        t = t_131(t);
        LocalPopChoice(o_59);
      }
    else
      {
        t = n_59;
        t = m_38;
      }
  }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  ATerm u_38 = NULL;
  static ATerm i_21 (ATerm t);
  static ATerm i_21 (ATerm t)
  {
    t = o_114(t);
    if(((u_38 != NULL) && (u_38 != t)))
      _fail(t);
    else
      u_38 = t;
    return(t);
  }
  t = fetch_1_0(i_21, t);
  t = not_null(u_38);
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL;
  w_40 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_40 = ATgetArgument(t, 0);
      {
        ATerm e_22 = NULL,i_22 = NULL,b_10 = NULL;
        t = SSLgetAnnotations(w_40);
        e_22 = t;
        t = x_40;
        t = fetch_elem_1_0(k_21, t);
        i_22 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, i_22);
        b_10 = t;
        t = SSLsetAnnotations(b_10, e_22);
      }
    }
  else
    {
      ATerm k_23 = NULL,q_23 = NULL,c_10 = NULL;
      if(match_cons(t, sym_Rules_1))
        {
          x_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_40);
      k_23 = t;
      t = x_40;
      t = fetch_elem_1_0(l_21, t);
      q_23 = t;
      t = (ATerm) ATmakeAppl(sym_Rules_1, q_23);
      c_10 = t;
      t = SSLsetAnnotations(c_10, k_23);
    }
  return(t);
}
static ATerm k_21 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,u_22 = NULL;
  m_22 = t;
  {
    ATerm p_59 = t;
    int q_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            n_22 = ATgetArgument(t, 0);
            u_22 = ATgetArgument(t, 1);
            {
              ATerm r_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_59);
        t = n_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = u_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_22;
      }
    else
      {
        t = p_59;
        if(match_cons(t, sym_RDef_3))
          {
            n_22 = ATgetArgument(t, 0);
            u_22 = ATgetArgument(t, 1);
            {
              ATerm t_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_22;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = u_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_22;
      }
  }
  return(t);
}
static ATerm l_21 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  s_23 = t;
  {
    ATerm w_59 = t;
    int x_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            t_23 = ATgetArgument(t, 0);
            u_23 = ATgetArgument(t, 1);
            {
              ATerm y_59 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_59);
        t = t_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = u_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_23;
      }
    else
      {
        t = w_59;
        if(match_cons(t, sym_RDef_3))
          {
            t_23 = ATgetArgument(t, 0);
            u_23 = ATgetArgument(t, 1);
            {
              ATerm a_60 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_23;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        t = u_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_23;
      }
  }
  return(t);
}
ATerm check_other_main_0_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
  t = fetch_elem_1_0(j_21, t);
  p_39 = t;
  t = term_n_38;
  q_39 = t;
  t = (ATerm) ATinsert(ATempty, term_d_60);
  r_39 = t;
  t = SSL_printnl(q_39, r_39);
  t = p_39;
  return(t);
}
static ATerm v_14 (ATerm h_23, ATerm i_23, ATerm t)
{
  t = h_23;
  {
    ATerm e_60 = t;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main", 0, ATtrue)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_60;
      }
  }
  t = i_23;
  {
    ATerm f_60 = t;
    int h_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = check_other_main_0_0(t);
        LocalPopChoice(h_60);
      }
    else
      {
        t = f_60;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(CheckATermList(i_23), (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, term_k_60, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_23), (ATerm) ATempty))))));
  return(t);
}
static ATerm w_14 (ATerm t_35, ATerm u_35, ATerm t)
{
  ATerm m_41 = NULL;
  t = SSL_write_term_to_stream_baf(t_35, u_35);
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_41);
  return(t);
}
static ATerm x_14 (ATerm u_113 (ATerm), ATerm v_292, ATerm d_36, ATerm t)
{
  ATerm n_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_292, term_l_60);
  t = w_15(t);
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_41, d_36);
  t = u_113(t);
  t = fclose_0_0(t);
  t = d_36;
  return(t);
}
static ATerm a_15 (ATerm w_103 (ATerm), ATerm a_24, ATerm y_23, ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL;
  s_41 = t;
  t = w_103(t);
  o_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_41, a_24, y_23);
  t = e_16(o_41, a_24, y_23, t);
  {
    ATerm m_60 = t;
    int o_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_41 = NULL;
        t = term_u_60;
        y_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_41, term_u_60);
        t = d_16(o_41, y_41, t);
        {
          ATerm w_60 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_60;
            }
        }
        LocalPopChoice(o_60);
      }
    else
      {
        t = m_60;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_41 = ATgetFirst((ATermList) t);
      r_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_41, term_u_60, (ATerm) ATinsert(CheckATermList(r_41), (ATerm) ATinsert(CheckATermList(p_41), a_24)));
  t = lookup_table_0_1(o_41, t);
  w_41 = t;
  t = term_u_60;
  t_41 = t;
  t = (ATerm) ATinsert(CheckATermList(r_41), (ATerm) ATinsert(CheckATermList(p_41), a_24));
  u_41 = t;
  t = w_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(t_41, u_41, v_41, t);
  t = s_41;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_42 = NULL;
  ATerm x_60 = t;
  int y_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_42 = NULL,c_24 = NULL;
      l_42 = t;
      t = term_z_60;
      c_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_42, term_z_60);
      t = j_16(l_42, c_24, t);
      g_42 = t;
      t = SSL_mkstemp(g_42);
      LocalPopChoice(y_60);
    }
  else
    {
      t = x_60;
      {
        ATerm m_42 = NULL;
        t = term_a_61;
        m_42 = t;
        t = SSL_perror(m_42);
        _fail(t);
      }
    }
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
ATerm temp_dir_0_0 (ATerm t)
{
  ATerm c_61 = t;
  int e_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_42 = NULL;
      t = term_h_61;
      o_42 = t;
      t = SSL_getenv(o_42);
      LocalPopChoice(e_61);
    }
  else
    {
      t = c_61;
      t = P__tmpdir_0_0(t);
    }
  return(t);
}
static ATerm n_21 (ATerm t)
{
  t = term_i_61;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_42 = NULL,r_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
  t = temp_dir_0_0(t);
  u_42 = t;
  t = term_j_61;
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_42, term_j_61);
  t = j_16(u_42, v_42, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      r_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_40;
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_42, term_a_40);
  t = a_15(n_21, r_42, t_42, t);
  t = SSL_close(p_42);
  t = r_42;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm z_42 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_v_61;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm f_43 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_w_61);
      f_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_42, (ATerm) ATinsert(ATempty, term_w_61));
      t = z_15(z_42, f_43, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm q_21 (ATerm t)
{
  ATerm j_43 = NULL,l_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_61 = ATgetArgument(t, 0);
      if(match_cons(y_61, sym_Stream_1))
        {
          j_43 = ATgetArgument(y_61, 0);
        }
      else
        _fail(t);
      l_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14(j_43, l_43, t);
  return(t);
}
ATerm xtc_io_transform_1_0 (ATerm a_141 (ATerm), ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL;
  t = read_from_0_0(t);
  t = a_141(t);
  h_43 = t;
  t = xtc_new_file_0_0(t);
  g_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_43, h_43);
  t = x_14(q_21, g_43, h_43, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_43);
  return(t);
}
static ATerm t_21 (ATerm t)
{
  t = debug_1_0(w_21, t);
  return(t);
}
static ATerm w_21 (ATerm t)
{
  t = term_z_61;
  return(t);
}
static ATerm y_21 (ATerm t)
{
  t = save_as_1_0(z_21, t);
  return(t);
}
static ATerm z_21 (ATerm t)
{
  t = term_a_62;
  return(t);
}
ATerm add_main_0_0 (ATerm t)
{
  ATerm q_43 = NULL,i_44 = NULL;
  i_44 = t;
  {
    ATerm d_62 = t;
    int e_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL,j_25 = NULL;
        t = term_b_38;
        d_25 = t;
        t = term_f_62;
        j_25 = t;
        t = term_g_62;
        t = d_16(d_25, j_25, t);
        q_43 = t;
        t = if_verbose2_1_0(t_21, t);
        t = i_44;
        {
          ATerm h_62 = t;
          int j_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_25 = NULL,p_25 = NULL;
              t = term_b_38;
              k_25 = t;
              t = term_o_40;
              p_25 = t;
              t = term_p_40;
              t = d_16(k_25, p_25, t);
              t = i_44;
              LocalPopChoice(j_62);
            }
          else
            {
              t = h_62;
              {
                static ATerm x_21 (ATerm t);
                static ATerm x_21 (ATerm t)
                {
                  ATerm k_62 = t;
                  int l_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_26 = NULL;
                      if(match_cons(t, sym_Specification_1))
                        {
                          s_26 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = v_14(q_43, s_26, t);
                      LocalPopChoice(l_62);
                    }
                  else
                    {
                      t = k_62;
                    }
                  return(t);
                }
                t = xtc_io_transform_1_0(x_21, t);
              }
            }
        }
        LocalPopChoice(e_62);
      }
    else
      {
        t = d_62;
        t = i_44;
      }
  }
  t = if_keep3_1_0(y_21, t);
  return(t);
}
static ATerm b_22 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  {
    ATerm n_62 = t;
    int p_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(h_45);
        LocalPopChoice(p_62);
      }
    else
      {
        t = n_62;
        t = h_45;
      }
  }
  return(t);
}
static ATerm d_22 (ATerm t)
{
  t = term_i_61;
  return(t);
}
ATerm xtc_exit_0_0 (ATerm t)
{
  ATerm r_44 = NULL,v_44 = NULL;
  static ATerm a_22 (ATerm t);
  static ATerm a_22 (ATerm t)
  {
    ATerm x_44 = NULL,z_44 = NULL,b_45 = NULL;
    x_44 = t;
    t = term_i_61;
    z_44 = t;
    t = term_u_60;
    b_45 = t;
    t = term_q_62;
    t = d_16(z_44, b_45, t);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((r_44 != NULL) && (r_44 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          r_44 = ATgetFirst((ATermList) t);
        {
          ATerm r_62 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = r_44;
    t = map_1_0(b_22, t);
    t = x_44;
    t = end_scope_1_0(d_22, t);
    return(t);
  }
  t = repeat_2_0(a_22, _id, t);
  v_44 = t;
  t = SSL_exit(v_44);
  return(t);
}
static ATerm f_22 (ATerm t)
{
  ATerm t_62 = t;
  int u_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_46 = NULL,d_46 = NULL;
      t = term_b_38;
      b_46 = t;
      t = term_x_38;
      d_46 = t;
      t = term_y_38;
      t = d_16(b_46, d_46, t);
      LocalPopChoice(u_62);
    }
  else
    {
      t = t_62;
      t = term_d_40;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm y_45 = NULL;
  y_45 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_27 = NULL,n_27 = NULL;
      t = term_x_38;
      {
        ATerm v_62 = t;
        int y_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_27 = NULL,r_27 = NULL;
            t = term_b_38;
            p_27 = t;
            t = term_x_38;
            r_27 = t;
            t = term_y_38;
            t = d_16(p_27, r_27, t);
            LocalPopChoice(y_62);
          }
        else
          {
            t = v_62;
            t = term_d_40;
          }
      }
      l_27 = t;
      t = term_v_61;
      n_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_61, l_27);
      t = l_15(n_27, l_27, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm z_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_45;
      t = copy_to_1_0(f_22, t);
    }
  return(t);
}
ATerm xtc_io_exit_0_0 (ATerm t)
{
  t = xtc_write_output_0_0(t);
  t = term_v_37;
  t = xtc_exit_0_0(t);
  return(t);
}
ATerm get_outfile_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,h_46 = NULL,j_46 = NULL,k_46 = NULL;
  t = c_103(t);
  f_46 = t;
  t = term_b_38;
  j_46 = t;
  t = term_n_43;
  k_46 = t;
  t = term_o_43;
  t = d_16(j_46, k_46, t);
  h_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_46, f_46);
  t = j_16(h_46, f_46, t);
  return(t);
}
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL;
  i_47 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_63 = t;
    int b_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_28 = NULL;
        t = i_47;
        t = t_0(t);
        n_28 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = n_28;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = n_28;
          }
        t = (ATerm) ATmakeAppl(sym__2, j_47, n_28);
        t = l_15(j_47, n_28, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_47);
        LocalPopChoice(b_63);
      }
    else
      {
        t = a_63;
        {
          ATerm c_63 = t;
          int d_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_29 = NULL;
              t = i_47;
              t = t_0(t);
              f_29 = t;
              {
                ATerm e_63 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_29 = NULL;
                    g_29 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_29;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = g_29;
                          }
                        else
                          {
                            t = g_29;
                            if((j_47 != t))
                              {
                                _fail(t);
                              }
                            t = g_29;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_63;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, j_47, f_29);
              t = l_15(j_47, f_29, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_47);
              LocalPopChoice(d_63);
            }
          else
            {
              t = c_63;
              t = i_47;
              t = t_0(t);
              if((j_47 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_47);
            }
        }
      }
  }
  return(t);
}
static ATerm j_22 (ATerm t)
{
  t = get_outfile_1_0(k_22, t);
  return(t);
}
static ATerm k_22 (ATerm t)
{
  t = term_f_63;
  return(t);
}
ATerm output_ast_0_0 (ATerm t)
{
  ATerm d_48 = NULL;
  d_48 = t;
  {
    ATerm g_63 = t;
    int h_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_29 = NULL,w_29 = NULL,c_30 = NULL,d_30 = NULL,g_30 = NULL;
        t = term_b_38;
        d_30 = t;
        t = term_i_63;
        g_30 = t;
        t = term_j_63;
        t = d_16(d_30, g_30, t);
        t = d_48;
        t = copy_to_1_0(j_22, t);
        v_29 = t;
        t = term_n_38;
        w_29 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_63));
        c_30 = t;
        t = SSL_printnl(w_29, c_30);
        t = v_29;
        t = xtc_io_exit_0_0(t);
        LocalPopChoice(h_63);
      }
    else
      {
        t = g_63;
        t = d_48;
      }
  }
  return(t);
}
ATerm pass_keep_0_0 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,s_49 = NULL;
  t = term_b_44;
  {
    ATerm l_63 = t;
    int m_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_49 = NULL,a_50 = NULL;
        t = term_b_38;
        u_49 = t;
        t = term_b_44;
        a_50 = t;
        t = term_c_44;
        t = d_16(u_49, a_50, t);
        LocalPopChoice(m_63);
      }
    else
      {
        t = l_63;
        t = term_f_39;
      }
  }
  p_49 = t;
  t = term_f_39;
  s_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_49, term_f_39);
  t = g_15(p_49, s_49, t);
  q_49 = t;
  t = SSL_int_to_string(q_49);
  o_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_49), term_b_44);
  return(t);
}
ATerm get_include_dirs_0_0 (ATerm t)
{
  ATerm b_50 = NULL,d_50 = NULL,f_50 = NULL,g_50 = NULL,m_50 = NULL,o_50 = NULL;
  t = term_b_38;
  m_50 = t;
  t = term_n_63;
  o_50 = t;
  t = term_o_63;
  t = d_16(m_50, o_50, t);
  b_50 = t;
  t = term_q_63;
  t = xtc_find_path_0_0(t);
  d_50 = t;
  t = term_u_63;
  t = xtc_find_path_0_0(t);
  f_50 = t;
  t = term_v_63;
  t = xtc_find_path_0_0(t);
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_50, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_50), term_n_63), f_50), term_n_63), d_50), term_n_63));
  t = conc_0_0(t);
  return(t);
}
ATerm pack_stratego_0_0 (ATerm t)
{
  ATerm r_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,f_51 = NULL;
  x_50 = t;
  t = term_w_63;
  r_50 = t;
  t = x_50;
  {
    ATerm x_63 = t;
    int y_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_51 = NULL,j_51 = NULL;
        t = term_b_38;
        i_51 = t;
        t = term_x_38;
        j_51 = t;
        t = term_y_38;
        t = d_16(i_51, j_51, t);
        LocalPopChoice(y_63);
      }
    else
      {
        t = x_63;
        {
          ATerm n_51 = NULL,q_51 = NULL;
          t = term_b_38;
          n_51 = t;
          t = term_n_43;
          q_51 = t;
          t = term_o_43;
          t = d_16(n_51, q_51, t);
        }
      }
  }
  f_51 = t;
  t = x_50;
  t = get_include_dirs_0_0(t);
  u_50 = t;
  t = x_50;
  t = pass_keep_0_0(t);
  v_50 = t;
  t = term_a_64;
  {
    ATerm r_64 = t;
    int s_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_51 = NULL,w_51 = NULL;
        t = term_b_38;
        r_51 = t;
        t = term_a_64;
        w_51 = t;
        t = term_t_64;
        t = d_16(r_51, w_51, t);
        LocalPopChoice(s_64);
        t = (ATerm) ATinsert(ATempty, term_a_64);
      }
    else
      {
        t = r_64;
        t = (ATerm) ATempty;
      }
  }
  w_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_50), v_50), u_50), (ATerm) ATinsert(ATinsert(ATempty, f_51), term_v_64));
  t = concat_0_0(t);
  t_50 = t;
  t = x_50;
  t = comp_0_2(r_50, t_50, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm r_130 (ATerm), ATerm t)
{
  ATerm z_51 = NULL;
  z_51 = t;
  {
    ATerm w_64 = t;
    int x_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_52 = NULL,g_52 = NULL,i_52 = NULL;
        t = term_b_38;
        g_52 = t;
        t = term_c_38;
        i_52 = t;
        t = term_f_38;
        t = d_16(g_52, i_52, t);
        f_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_52, term_b_42);
        t = geq_0_0(t);
        t = z_51;
        t = r_130(t);
        LocalPopChoice(x_64);
      }
    else
      {
        t = w_64;
        t = z_51;
      }
  }
  return(t);
}
ATerm basename_1_0 (ATerm e_125 (ATerm), ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL;
  e_53 = t;
  t = SSL_explode_string(e_53);
  {
    ATerm z_64 = t;
    int a_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_55 (ATerm t);
        static ATerm b_55 (ATerm t)
        {
          ATerm s_54 = NULL,v_54 = NULL,w_54 = NULL;
          s_54 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_54 = ATgetFirst((ATermList) t);
              w_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm b_65 = t;
            int f_65 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_31 = NULL,m_31 = NULL,n_10 = NULL;
                t = SSLgetAnnotations(s_54);
                c_31 = t;
                t = w_54;
                t = b_55(t);
                m_31 = t;
                t = (ATerm) ATinsert(CheckATermList(m_31), v_54);
                n_10 = t;
                t = SSLsetAnnotations(n_10, c_31);
                LocalPopChoice(f_65);
              }
            else
              {
                t = b_65;
                {
                  ATerm g_65 = t;
                  int j_65 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_32 = NULL,o_10 = NULL;
                      t = SSLgetAnnotations(s_54);
                      q_32 = t;
                      t = v_54;
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      t = (ATerm) ATinsert(CheckATermList(w_54), v_54);
                      o_10 = t;
                      t = SSLsetAnnotations(o_10, q_32);
                      LocalPopChoice(j_65);
                    }
                  else
                    {
                      t = g_65;
                      {
                        ATerm k_33 = NULL,o_33 = NULL,p_10 = NULL;
                        t = SSLgetAnnotations(s_54);
                        k_33 = t;
                        t = v_54;
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        t = w_54;
                        t = e_125(t);
                        o_33 = t;
                        t = (ATerm) ATinsert(CheckATermList(o_33), v_54);
                        p_10 = t;
                        t = SSLsetAnnotations(p_10, k_33);
                        t = (ATerm) ATempty;
                      }
                    }
                }
              }
          }
          return(t);
        }
        t = b_55(t);
        LocalPopChoice(a_65);
      }
    else
      {
        t = z_64;
      }
  }
  d_53 = t;
  t = SSL_implode_string(d_53);
  return(t);
}
static ATerm l_22 (ATerm t)
{
  t = debug_1_0(o_22, t);
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = term_k_65;
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = debug_1_0(t_22, t);
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = term_m_65;
  return(t);
}
static ATerm b_15 (ATerm d_23, ATerm t)
{
  ATerm h_55 = NULL,m_55 = NULL,n_55 = NULL,q_55 = NULL;
  t = d_23;
  t = basename_1_0(_id, t);
  h_55 = t;
  t = if_verbose3_1_0(l_22, t);
  t = term_p_43;
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_43, h_55);
  t = i_16(q_55, h_55, t);
  {
    ATerm n_65 = t;
    int o_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_55 = NULL,w_55 = NULL;
        t = term_b_38;
        v_55 = t;
        t = term_x_38;
        w_55 = t;
        t = term_y_38;
        t = d_16(v_55, w_55, t);
        t = basename_1_0(_id, t);
        LocalPopChoice(o_65);
      }
    else
      {
        t = n_65;
        t = h_55;
      }
  }
  m_55 = t;
  t = if_verbose3_1_0(q_22, t);
  t = term_n_43;
  n_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_43, m_55);
  t = i_16(n_55, m_55, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_55);
  return(t);
}
static ATerm v_22 (ATerm t)
{
  t = debug_1_0(w_22, t);
  return(t);
}
static ATerm w_22 (ATerm t)
{
  t = term_q_65;
  return(t);
}
static ATerm x_22 (ATerm t)
{
  t = if_verbose1_1_0(e_23, t);
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,j_58 = NULL,k_58 = NULL,p_58 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,u_34 = NULL,w_34 = NULL,x_34 = NULL;
  if(match_cons(t, sym_FILE_1))
    {
      p_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_15(p_58, t);
  t = pack_stratego_0_0(t);
  t = output_ast_0_0(t);
  {
    ATerm r_65 = t;
    int v_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_58 = NULL,r_58 = NULL,u_58 = NULL;
        q_58 = t;
        t = term_b_38;
        r_58 = t;
        t = term_o_40;
        u_58 = t;
        t = term_p_40;
        t = d_16(r_58, u_58, t);
        t = q_58;
        LocalPopChoice(v_65);
      }
    else
      {
        t = r_65;
        t = add_main_0_0(t);
      }
  }
  k_58 = t;
  {
    ATerm x_65 = t;
    int y_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_58 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_58 = ATgetArgument(t, 0);
            {
              ATerm d_34 = NULL,c_11 = NULL;
              t = SSLgetAnnotations(k_58);
              d_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_58);
              c_11 = t;
              t = SSLsetAnnotations(c_11, d_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_58;
          }
        LocalPopChoice(y_65);
        t = xtc_transform_file_2_0(f_23, g_23, t);
      }
    else
      {
        t = x_65;
        t = xtc_transform_term_2_0(j_23, o_23, t);
      }
  }
  j_58 = t;
  {
    ATerm a_66 = t;
    int b_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_59 = ATgetArgument(t, 0);
            {
              ATerm l_34 = NULL,e_11 = NULL;
              t = SSLgetAnnotations(j_58);
              l_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_59);
              e_11 = t;
              t = SSLsetAnnotations(e_11, l_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_58;
          }
        LocalPopChoice(b_66);
        t = xtc_transform_file_2_0(r_23, v_23, t);
      }
    else
      {
        t = a_66;
        t = xtc_transform_term_2_0(w_23, x_23, t);
      }
  }
  t = if_keep5_1_0(z_23, t);
  t = normalize_spec_0_0(t);
  t = if_keep5_1_0(e_24, t);
  x_34 = t;
  t = term_c_66;
  u_34 = t;
  t = x_34;
  t = pass_maybe_unbound_warnings_0_0(t);
  w_34 = t;
  t = x_34;
  t = comp_0_2(u_34, w_34, t);
  t = if_keep6_1_0(g_24, t);
  e_58 = t;
  {
    ATerm d_66 = t;
    int e_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_59 = ATgetArgument(t, 0);
            {
              ATerm z_34 = NULL,h_11 = NULL;
              t = SSLgetAnnotations(e_58);
              z_34 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_59);
              h_11 = t;
              t = SSLsetAnnotations(h_11, z_34);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = e_58;
          }
        LocalPopChoice(e_66);
        t = xtc_transform_file_2_0(i_24, k_24, t);
      }
    else
      {
        t = d_66;
        t = xtc_transform_term_2_0(m_24, n_24, t);
      }
  }
  t = if_keep6_1_0(p_24, t);
  d_58 = t;
  {
    ATerm f_66 = t;
    int g_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_59 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            z_59 = ATgetArgument(t, 0);
            {
              ATerm d_35 = NULL,t_11 = NULL;
              t = SSLgetAnnotations(d_58);
              d_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_59);
              t_11 = t;
              t = SSLsetAnnotations(t_11, d_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = d_58;
          }
        LocalPopChoice(g_66);
        t = xtc_transform_file_2_0(r_24, t_24, t);
      }
    else
      {
        t = f_66;
        t = xtc_transform_term_2_0(u_24, v_24, t);
      }
  }
  t = if_keep5_1_0(w_24, t);
  c_58 = t;
  {
    ATerm i_66 = t;
    int n_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            g_60 = ATgetArgument(t, 0);
            {
              ATerm h_35 = NULL,h_12 = NULL;
              t = SSLgetAnnotations(c_58);
              h_35 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_60);
              h_12 = t;
              t = SSLsetAnnotations(h_12, h_35);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_58;
          }
        LocalPopChoice(n_66);
        t = xtc_transform_file_2_0(b_25, c_25, t);
      }
    else
      {
        t = i_66;
        t = xtc_transform_term_2_0(e_25, g_25, t);
      }
  }
  t = if_keep5_1_0(o_25, t);
  u_57 = t;
  {
    ATerm r_66 = t;
    int u_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_60 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            n_60 = ATgetArgument(t, 0);
            {
              ATerm c_36 = NULL,i_12 = NULL;
              t = SSLgetAnnotations(u_57);
              c_36 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_60);
              i_12 = t;
              t = SSLsetAnnotations(i_12, c_36);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_57;
          }
        LocalPopChoice(u_66);
        t = xtc_transform_file_2_0(r_25, t_25, t);
      }
    else
      {
        t = r_66;
        t = xtc_transform_term_2_0(w_25, x_25, t);
      }
  }
  t = if_keep5_1_0(y_25, t);
  t = output_frontend_0_0(t);
  {
    ATerm v_66 = t;
    int y_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL;
        r_60 = t;
        t = term_b_38;
        s_60 = t;
        t = term_o_40;
        t_60 = t;
        t = term_p_40;
        t = d_16(s_60, t_60, t);
        t = r_60;
        LocalPopChoice(y_66);
        {
          ATerm v_60 = NULL;
          v_60 = t;
          {
            ATerm c_67 = t;
            int d_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    b_61 = ATgetArgument(t, 0);
                    {
                      ATerm k_36 = NULL,j_12 = NULL;
                      t = SSLgetAnnotations(v_60);
                      k_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, b_61);
                      j_12 = t;
                      t = SSLsetAnnotations(j_12, k_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = v_60;
                  }
                LocalPopChoice(d_67);
                t = xtc_transform_file_2_0(a_26, c_26, t);
              }
            else
              {
                t = c_67;
                t = xtc_transform_term_2_0(d_26, e_26, t);
              }
          }
        }
      }
    else
      {
        t = v_66;
        {
          ATerm g_61 = NULL;
          g_61 = t;
          {
            ATerm f_67 = t;
            int g_67 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_61 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    x_61 = ATgetArgument(t, 0);
                    {
                      ATerm p_36 = NULL,m_12 = NULL;
                      t = SSLgetAnnotations(g_61);
                      p_36 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, x_61);
                      m_12 = t;
                      t = SSLsetAnnotations(m_12, p_36);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = g_61;
                  }
                LocalPopChoice(g_67);
                t = xtc_transform_file_2_0(g_26, i_26, t);
              }
            else
              {
                t = f_67;
                t = xtc_transform_term_2_0(j_26, k_26, t);
              }
          }
          t = if_keep2_1_0(l_26, t);
        }
      }
  }
  y_36 = t;
  t = term_k_67;
  w_36 = t;
  t = y_36;
  t = pass_warnings_0_0(t);
  x_36 = t;
  t = y_36;
  t = comp_0_2(w_36, x_36, t);
  t_57 = t;
  {
    ATerm t_67 = t;
    int u_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            i_62 = ATgetArgument(t, 0);
            {
              ATerm a_37 = NULL,n_12 = NULL;
              t = SSLgetAnnotations(t_57);
              a_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_62);
              n_12 = t;
              t = SSLsetAnnotations(n_12, a_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_57;
          }
        LocalPopChoice(u_67);
        t = xtc_transform_file_2_0(o_26, u_26, t);
      }
    else
      {
        t = t_67;
        t = xtc_transform_term_2_0(v_26, w_26, t);
      }
  }
  s_57 = t;
  {
    ATerm v_67 = t;
    int x_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_62 = NULL;
        if(match_cons(t, sym_FILE_1))
          {
            s_62 = ATgetArgument(t, 0);
            {
              ATerm g_37 = NULL,o_12 = NULL;
              t = SSLgetAnnotations(s_57);
              g_37 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_62);
              o_12 = t;
              t = SSLsetAnnotations(o_12, g_37);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_57;
          }
        LocalPopChoice(x_67);
        t = xtc_transform_file_2_0(x_26, y_26, t);
      }
    else
      {
        t = v_67;
        t = xtc_transform_term_2_0(z_26, b_27, t);
      }
  }
  t = if_keep2_1_0(c_27, t);
  return(t);
}
static ATerm e_23 (ATerm t)
{
  ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
  n_57 = t;
  t = term_n_38;
  o_57 = t;
  t = (ATerm) ATinsert(CheckATermList(n_57), term_z_67);
  p_57 = t;
  t = SSL_printnl(o_57, p_57);
  t = (ATerm) ATmakeAppl(sym__2, term_n_38, (ATerm) ATinsert(CheckATermList(n_57), term_z_67));
  return(t);
}
static ATerm f_23 (ATerm t)
{
  t = term_a_68;
  return(t);
}
static ATerm g_23 (ATerm t)
{
  ATerm b_59 = NULL;
  t = pass_verbose_0_0(t);
  b_59 = t;
  t = (ATerm) ATinsert(CheckATermList(b_59), term_d_41);
  return(t);
}
static ATerm j_23 (ATerm t)
{
  t = term_a_68;
  return(t);
}
static ATerm o_23 (ATerm t)
{
  ATerm c_59 = NULL;
  t = pass_verbose_0_0(t);
  c_59 = t;
  t = (ATerm) ATinsert(CheckATermList(c_59), term_d_41);
  return(t);
}
static ATerm r_23 (ATerm t)
{
  t = term_c_68;
  return(t);
}
static ATerm v_23 (ATerm t)
{
  ATerm k_59 = NULL;
  t = pass_verbose_0_0(t);
  k_59 = t;
  t = (ATerm) ATinsert(CheckATermList(k_59), term_d_41);
  return(t);
}
static ATerm w_23 (ATerm t)
{
  t = term_c_68;
  return(t);
}
static ATerm x_23 (ATerm t)
{
  ATerm m_59 = NULL;
  t = pass_verbose_0_0(t);
  m_59 = t;
  t = (ATerm) ATinsert(CheckATermList(m_59), term_d_41);
  return(t);
}
static ATerm z_23 (ATerm t)
{
  t = save_as_1_0(b_24, t);
  return(t);
}
static ATerm b_24 (ATerm t)
{
  t = term_e_68;
  return(t);
}
static ATerm e_24 (ATerm t)
{
  t = save_as_1_0(f_24, t);
  return(t);
}
static ATerm f_24 (ATerm t)
{
  t = term_f_68;
  return(t);
}
static ATerm g_24 (ATerm t)
{
  t = save_as_1_0(h_24, t);
  return(t);
}
static ATerm h_24 (ATerm t)
{
  t = term_h_68;
  return(t);
}
static ATerm i_24 (ATerm t)
{
  t = term_i_68;
  return(t);
}
static ATerm k_24 (ATerm t)
{
  ATerm u_59 = NULL;
  t = pass_verbose_0_0(t);
  u_59 = t;
  t = (ATerm) ATinsert(CheckATermList(u_59), term_d_41);
  return(t);
}
static ATerm m_24 (ATerm t)
{
  t = term_i_68;
  return(t);
}
static ATerm n_24 (ATerm t)
{
  ATerm v_59 = NULL;
  t = pass_verbose_0_0(t);
  v_59 = t;
  t = (ATerm) ATinsert(CheckATermList(v_59), term_d_41);
  return(t);
}
static ATerm p_24 (ATerm t)
{
  t = save_as_1_0(q_24, t);
  return(t);
}
static ATerm q_24 (ATerm t)
{
  t = term_j_68;
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = term_l_68;
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm b_60 = NULL;
  t = pass_verbose_0_0(t);
  b_60 = t;
  t = (ATerm) ATinsert(CheckATermList(b_60), term_d_41);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  t = term_l_68;
  return(t);
}
static ATerm v_24 (ATerm t)
{
  ATerm c_60 = NULL;
  t = pass_verbose_0_0(t);
  c_60 = t;
  t = (ATerm) ATinsert(CheckATermList(c_60), term_d_41);
  return(t);
}
static ATerm w_24 (ATerm t)
{
  t = save_as_1_0(a_25, t);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = term_m_68;
  return(t);
}
static ATerm b_25 (ATerm t)
{
  t = term_q_68;
  return(t);
}
static ATerm c_25 (ATerm t)
{
  ATerm i_60 = NULL;
  t = pass_verbose_0_0(t);
  i_60 = t;
  t = (ATerm) ATinsert(CheckATermList(i_60), term_d_41);
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_q_68;
  return(t);
}
static ATerm g_25 (ATerm t)
{
  ATerm j_60 = NULL;
  t = pass_verbose_0_0(t);
  j_60 = t;
  t = (ATerm) ATinsert(CheckATermList(j_60), term_d_41);
  return(t);
}
static ATerm o_25 (ATerm t)
{
  t = save_as_1_0(q_25, t);
  return(t);
}
static ATerm q_25 (ATerm t)
{
  t = term_r_68;
  return(t);
}
static ATerm r_25 (ATerm t)
{
  t = term_z_68;
  return(t);
}
static ATerm t_25 (ATerm t)
{
  ATerm p_60 = NULL;
  t = pass_verbose_0_0(t);
  p_60 = t;
  t = (ATerm) ATinsert(CheckATermList(p_60), term_d_41);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = term_z_68;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm q_60 = NULL;
  t = pass_verbose_0_0(t);
  q_60 = t;
  t = (ATerm) ATinsert(CheckATermList(q_60), term_d_41);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  t = save_as_1_0(z_25, t);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = term_a_69;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  t = term_m_57;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  ATerm d_61 = NULL;
  t = pass_verbose_0_0(t);
  d_61 = t;
  t = (ATerm) ATinsert(CheckATermList(d_61), term_d_41);
  return(t);
}
static ATerm d_26 (ATerm t)
{
  t = term_m_57;
  return(t);
}
static ATerm e_26 (ATerm t)
{
  ATerm f_61 = NULL;
  t = pass_verbose_0_0(t);
  f_61 = t;
  t = (ATerm) ATinsert(CheckATermList(f_61), term_d_41);
  return(t);
}
static ATerm g_26 (ATerm t)
{
  t = term_b_69;
  return(t);
}
static ATerm i_26 (ATerm t)
{
  ATerm b_62 = NULL;
  t = pass_verbose_0_0(t);
  b_62 = t;
  t = (ATerm) ATinsert(CheckATermList(b_62), term_d_41);
  return(t);
}
static ATerm j_26 (ATerm t)
{
  t = term_b_69;
  return(t);
}
static ATerm k_26 (ATerm t)
{
  ATerm c_62 = NULL;
  t = pass_verbose_0_0(t);
  c_62 = t;
  t = (ATerm) ATinsert(CheckATermList(c_62), term_d_41);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = save_as_1_0(n_26, t);
  return(t);
}
static ATerm n_26 (ATerm t)
{
  t = term_e_69;
  return(t);
}
static ATerm o_26 (ATerm t)
{
  t = term_f_69;
  return(t);
}
static ATerm u_26 (ATerm t)
{
  ATerm m_62 = NULL;
  t = pass_verbose_0_0(t);
  m_62 = t;
  t = (ATerm) ATinsert(CheckATermList(m_62), term_d_41);
  return(t);
}
static ATerm v_26 (ATerm t)
{
  t = term_f_69;
  return(t);
}
static ATerm w_26 (ATerm t)
{
  ATerm o_62 = NULL;
  t = pass_verbose_0_0(t);
  o_62 = t;
  t = (ATerm) ATinsert(CheckATermList(o_62), term_d_41);
  return(t);
}
static ATerm x_26 (ATerm t)
{
  t = term_g_69;
  return(t);
}
static ATerm y_26 (ATerm t)
{
  ATerm w_62 = NULL;
  t = pass_verbose_0_0(t);
  w_62 = t;
  t = (ATerm) ATinsert(CheckATermList(w_62), term_d_41);
  return(t);
}
static ATerm z_26 (ATerm t)
{
  t = term_g_69;
  return(t);
}
static ATerm b_27 (ATerm t)
{
  ATerm x_62 = NULL;
  t = pass_verbose_0_0(t);
  x_62 = t;
  t = (ATerm) ATinsert(CheckATermList(x_62), term_d_41);
  return(t);
}
static ATerm c_27 (ATerm t)
{
  t = save_as_1_0(f_27, t);
  return(t);
}
static ATerm f_27 (ATerm t)
{
  t = term_h_69;
  return(t);
}
ATerm front_end_0_0 (ATerm t)
{
  t = if_verbose2_1_0(v_22, t);
  t = profile_p__2_0(x_22, z_22, t);
  return(t);
}
static ATerm d_16 (ATerm s_58, ATerm t_58, ATerm t)
{
  ATerm p_63 = NULL;
  t = lookup_table_0_1(s_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_16(t_58, p_63, t);
  return(t);
}
static ATerm c_15 (ATerm e_57, ATerm f_57, ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL;
  s_63 = t;
  {
    ATerm i_69 = t;
    int j_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_57, f_57);
        t = d_16(e_57, f_57, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_69 = ATgetFirst((ATermList) t);
            r_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_69);
        {
          ATerm t_63 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, e_57, f_57, r_63);
          t = lookup_table_0_1(e_57, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_16(f_57, r_63, t_63, t);
          t = (ATerm) ATmakeAppl(sym__3, e_57, f_57, r_63);
        }
      }
    else
      {
        t = i_69;
        {
          ATerm z_63 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, e_57, f_57);
          t = lookup_table_0_1(e_57, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              z_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_16(f_57, z_63, t);
          t = (ATerm) ATmakeAppl(sym__2, e_57, f_57);
        }
      }
  }
  t = s_63;
  return(t);
}
ATerm end_scope_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL;
  m_64 = t;
  t = t_103(t);
  l_64 = t;
  {
    ATerm l_69 = t;
    int m_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_64 = NULL;
        t = term_u_60;
        q_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_64, term_u_60);
        t = d_16(l_64, q_64, t);
        {
          ATerm n_69 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_69;
            }
        }
        LocalPopChoice(m_69);
      }
    else
      {
        t = l_69;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_64 = ATgetFirst((ATermList) t);
      j_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_64, term_u_60, j_64);
  t = lookup_table_0_1(l_64, t);
  p_64 = t;
  t = term_u_60;
  n_64 = t;
  t = p_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(n_64, j_64, o_64, t);
  t = k_64;
  {
    static ATerm g_27 (ATerm t);
    static ATerm g_27 (ATerm t)
    {
      ATerm u_64 = NULL;
      u_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_64, u_64);
      t = c_15(l_64, u_64, t);
      return(t);
    }
    t = map_1_0(g_27, t);
  }
  t = m_64;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm t)
{
  ATerm o_69 = t;
  int p_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_106(t);
      t = o_106(t);
      LocalPopChoice(p_69);
    }
  else
    {
      t = o_69;
      t = o_106(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm y_64 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,h_65 = NULL,i_65 = NULL,l_65 = NULL;
  c_65 = t;
  t = s_103(t);
  y_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_64, term_u_60);
  {
    ATerm q_69 = t;
    int r_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_65 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_69 = ATgetArgument(t, 0);
            ATerm c_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_60;
        p_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_64, term_u_60);
        t = d_16(y_64, p_65, t);
        LocalPopChoice(r_69);
      }
    else
      {
        t = q_69;
        t = (ATerm) ATempty;
      }
  }
  d_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_64, term_u_60, (ATerm) ATinsert(CheckATermList(d_65), (ATerm) ATempty));
  t = lookup_table_0_1(y_64, t);
  l_65 = t;
  t = term_u_60;
  e_65 = t;
  t = (ATerm) ATinsert(CheckATermList(d_65), (ATerm) ATempty);
  h_65 = t;
  t = l_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(e_65, h_65, i_65, t);
  t = c_65;
  return(t);
}
static ATerm h_27 (ATerm t)
{
  t = term_i_61;
  return(t);
}
static ATerm k_27 (ATerm t)
{
  ATerm z_65 = NULL;
  z_65 = t;
  {
    ATerm h_70 = t;
    int s_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_65);
        LocalPopChoice(s_70);
      }
    else
      {
        t = h_70;
        t = z_65;
      }
  }
  return(t);
}
static ATerm q_27 (ATerm t)
{
  t = term_i_61;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_141 (ATerm), ATerm t)
{
  ATerm s_65 = NULL;
  static ATerm i_27 (ATerm t);
  static ATerm i_27 (ATerm t)
  {
    ATerm t_65 = NULL;
    t_65 = t;
    {
      ATerm t_70 = t;
      int u_70 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_65 = NULL,w_65 = NULL;
          t = term_i_61;
          u_65 = t;
          t = term_u_60;
          w_65 = t;
          t = term_q_62;
          t = d_16(u_65, w_65, t);
          LocalPopChoice(u_70);
        }
      else
        {
          t = t_70;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_65 != NULL) && (s_65 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_65 = ATgetFirst((ATermList) t);
        {
          ATerm v_70 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = s_65;
    t = map_1_0(k_27, t);
    t = t_65;
    t = end_scope_1_0(q_27, t);
    return(t);
  }
  t = begin_scope_1_0(h_27, t);
  t = restore_always_2_0(l_141, i_27, t);
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_130 (ATerm), ATerm t)
{
  ATerm h_66 = NULL;
  h_66 = t;
  {
    ATerm w_70 = t;
    int x_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_66 = NULL,p_66 = NULL,q_66 = NULL;
        t = term_b_38;
        p_66 = t;
        t = term_c_38;
        q_66 = t;
        t = term_f_38;
        t = d_16(p_66, q_66, t);
        o_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_66, term_f_39);
        t = geq_0_0(t);
        t = h_66;
        t = p_130(t);
        LocalPopChoice(x_70);
      }
    else
      {
        t = w_70;
        t = h_66;
      }
  }
  return(t);
}
static ATerm e_15 (ATerm i_55, ATerm j_55, ATerm t)
{
  ATerm y_70 = t;
  int a_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_55, j_55);
      LocalPopChoice(a_71);
    }
  else
    {
      t = y_70;
      t = SSL_addr(i_55, j_55);
    }
  return(t);
}
static ATerm g_15 (ATerm o_55, ATerm p_55, ATerm t)
{
  ATerm b_71 = t;
  int c_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_55, p_55);
      LocalPopChoice(c_71);
    }
  else
    {
      t = b_71;
      t = SSL_subtr(o_55, p_55);
    }
  return(t);
}
static ATerm h_15 (ATerm b_64, ATerm d_64, ATerm f_64, ATerm h_64, ATerm c_64, ATerm e_64, ATerm g_64, ATerm i_64, ATerm t)
{
  ATerm s_66 = NULL,t_66 = NULL,w_66 = NULL,x_66 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
  t = g_15(b_64, c_64, t);
  s_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_64, e_64);
  t = g_15(d_64, e_64, t);
  t_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_64, g_64);
  t = g_15(f_64, g_64, t);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_64, i_64);
  t = g_15(h_64, i_64, t);
  x_66 = t;
  t = (ATerm) ATmakeAppl(sym__4, s_66, t_66, w_66, x_66);
  return(t);
}
ATerm diff_times_0_0 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,b_67 = NULL,e_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,l_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_71 = ATgetArgument(t, 0);
      if(match_cons(e_71, sym__4))
        {
          z_66 = ATgetArgument(e_71, 0);
          a_67 = ATgetArgument(e_71, 1);
          b_67 = ATgetArgument(e_71, 2);
          e_67 = ATgetArgument(e_71, 3);
        }
      else
        _fail(t);
      {
        ATerm f_71 = ATgetArgument(t, 1);
        if(match_cons(f_71, sym__4))
          {
            h_67 = ATgetArgument(f_71, 0);
            i_67 = ATgetArgument(f_71, 1);
            j_67 = ATgetArgument(f_71, 2);
            l_67 = ATgetArgument(f_71, 3);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_15(z_66, a_67, b_67, e_67, h_67, i_67, j_67, l_67, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm profile_p__2_0 (ATerm m_128 (ATerm), ATerm n_128 (ATerm), ATerm t)
{
  ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,w_67 = NULL,y_67 = NULL,b_68 = NULL,d_68 = NULL,g_68 = NULL,k_68 = NULL;
  s_67 = t;
  t = times_0_0(t);
  m_67 = t;
  t = s_67;
  t = n_128(t);
  n_67 = t;
  t = times_0_0(t);
  r_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_67, m_67);
  t = diff_times_0_0(t);
  q_67 = t;
  if(match_cons(t, sym__4))
    {
      d_68 = ATgetArgument(t, 0);
      {
        ATerm j_71 = ATgetArgument(t, 1);
      }
      g_68 = ATgetArgument(t, 2);
      {
        ATerm k_71 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_68, g_68);
  t = e_15(d_68, g_68, t);
  k_68 = t;
  t = SSL_TicksToSeconds(k_68);
  o_67 = t;
  t = q_67;
  if(match_cons(t, sym__4))
    {
      ATerm l_71 = ATgetArgument(t, 0);
      w_67 = ATgetArgument(t, 1);
      {
        ATerm m_71 = ATgetArgument(t, 2);
      }
      y_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_67, y_67);
  t = e_15(w_67, y_67, t);
  b_68 = t;
  t = SSL_TicksToSeconds(b_68);
  p_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_67), term_o_71), o_67), term_n_71);
  t = m_128(t);
  t = n_67;
  return(t);
}
ATerm debug_1_0 (ATerm s_113 (ATerm), ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,s_68 = NULL;
  n_68 = t;
  t = s_113(t);
  o_68 = t;
  t = term_n_38;
  p_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_68), o_68);
  s_68 = t;
  t = SSL_printnl(p_68, s_68);
  t = n_68;
  return(t);
}
ATerm strc_version_0_0 (ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL;
  t_68 = t;
  t = term_b_38;
  x_68 = t;
  t = term_p_71;
  y_68 = t;
  t = term_q_71;
  t = d_16(x_68, y_68, t);
  u_68 = t;
  t = term_d_40;
  v_68 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_71), term_x_71), term_w_71), term_v_71), term_u_71), term_t_71), term_s_71), u_68), term_r_71);
  w_68 = t;
  t = SSL_printnl(v_68, w_68);
  t = t_68;
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm c_69 = NULL,d_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_69 = ATgetFirst((ATermList) t);
      d_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_69;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_69;
    }
  else
    {
      t = d_69;
      t = last_0_0(t);
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm x_114 (ATerm), ATerm t)
{
  static ATerm v_69 (ATerm t);
  static ATerm v_69 (ATerm t)
  {
    ATerm z_71 = t;
    int d_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_114(t);
        LocalPopChoice(d_72);
      }
    else
      {
        t = z_71;
        {
          ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL,g_38 = NULL,o_38 = NULL,g_13 = NULL;
          s_69 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_69 = ATgetFirst((ATermList) t);
              u_69 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_69);
          g_38 = t;
          t = u_69;
          t = v_69(t);
          o_38 = t;
          t = (ATerm) ATinsert(CheckATermList(o_38), t_69);
          g_13 = t;
          t = SSLsetAnnotations(g_13, g_38);
        }
      }
    return(t);
  }
  t = v_69(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm p_114 (ATerm), ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL;
  static ATerm s_27 (ATerm t);
  static ATerm s_27 (ATerm t)
  {
    ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,i_70 = NULL,l_70 = NULL,o_13 = NULL,k_13 = NULL;
    l_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_70 = ATgetFirst((ATermList) t);
        f_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_70);
    d_70 = t;
    t = e_70;
    t = p_114(t);
    g_70 = t;
    t = (ATerm) ATinsert(CheckATermList(f_70), g_70);
    k_13 = t;
    t = SSLsetAnnotations(k_13, d_70);
    i_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_70 = ATgetFirst((ATermList) t);
        b_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_70);
    z_69 = t;
    t = b_70;
    if(((x_69 != NULL) && (x_69 != t)))
      _fail(t);
    else
      x_69 = t;
    t = (ATerm) ATinsert(CheckATermList(b_70), a_70);
    o_13 = t;
    t = SSLsetAnnotations(o_13, z_69);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(s_27, t);
  y_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_69, not_null(x_69));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm a_124 (ATerm), ATerm t)
{
  ATerm d_71 = NULL,i_71 = NULL;
  ATerm e_72 = t;
  int f_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(a_124, t);
      LocalPopChoice(f_72);
    }
  else
    {
      t = e_72;
      {
        ATerm z_70 = NULL;
        z_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_70, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      d_71 = ATgetArgument(t, 0);
      i_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_71;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm g_72 = ATgetFirst((ATermList) t);
              ATerm h_72 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_71;
          t = list_tokenize_1_0(a_124, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm i_72 = ATgetFirst((ATermList) t);
          ATerm j_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_71;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, d_71);
        }
      else
        {
          ATerm a_72 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm k_72 = ATgetFirst((ATermList) t);
              ATerm l_72 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_71;
          t = list_tokenize_1_0(a_124, t);
          a_72 = t;
          t = (ATerm) ATinsert(CheckATermList(a_72), d_71);
        }
    }
  return(t);
}
static ATerm v_27 (ATerm t)
{
  ATerm c_72 = NULL;
  c_72 = t;
  t = SSL_implode_string(c_72);
  return(t);
}
static ATerm k_15 (ATerm i_48, ATerm a_442, ATerm t)
{
  t = SSL_explode_string(a_442);
  {
    static ATerm t_27 (ATerm t);
    static ATerm t_27 (ATerm t)
    {
      ATerm b_72 = NULL;
      static ATerm u_27 (ATerm t);
      static ATerm u_27 (ATerm t)
      {
        if(((b_72 != NULL) && (b_72 != t)))
          _fail(t);
        else
          b_72 = t;
        return(t);
      }
      if(((b_72 != NULL) && (b_72 != t)))
        _fail(t);
      else
        b_72 = t;
      t = i_48;
      t = fetch_1_0(u_27, t);
      return(t);
    }
    t = list_tokenize_1_0(t_27, t);
  }
  t = map_1_0(v_27, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm a_73 = NULL;
  a_73 = t;
  {
    ATerm m_72 = t;
    int n_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_39 = NULL;
        t = SSL_filemode(a_73);
        if(match_cons(t, sym__2))
          {
            b_39 = ATgetArgument(t, 0);
            {
              ATerm o_72 = ATgetArgument(t, 1);
              if(((ATgetType(o_72) != AT_INT) || (ATgetInt((ATermInt) o_72) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_39;
        LocalPopChoice(n_72);
      }
    else
      {
        t = m_72;
        {
          ATerm g_39 = NULL,h_39 = NULL;
          t = term_p_72;
          h_39 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_72, a_73);
          t = j_16(h_39, a_73, t);
          g_39 = t;
          t = SSL_perror(g_39);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm l_15 (ATerm m_66, ATerm l_66, ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  g_73 = t;
  {
    ATerm q_72 = t;
    int r_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_73 = NULL,i_73 = NULL;
        t = (ATerm) ATinsert(ATempty, term_w_61);
        i_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_66, (ATerm) ATinsert(ATempty, term_w_61));
        t = z_15(l_66, i_73, t);
        t = filemode_0_0(t);
        h_73 = t;
        t = SSL_S_ISDIR(h_73);
        t = g_73;
        LocalPopChoice(r_72);
        {
          ATerm j_73 = NULL,k_73 = NULL,m_73 = NULL;
          t = (ATerm) ATinsert(ATempty, term_s_72);
          m_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_s_72), m_66);
          t = k_15(m_73, m_66, t);
          t = last_0_0(t);
          j_73 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_73), term_t_72), l_66);
          k_73 = t;
          t = SSL_concat_strings(k_73);
        }
      }
    else
      {
        t = q_72;
        t = l_66;
      }
  }
  f_73 = t;
  t = SSL_copy(m_66, f_73);
  return(t);
}
static ATerm m_15 (ATerm r_61, ATerm t)
{
  t = SSL_hashtable_keys(r_61);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL;
  static ATerm w_27 (ATerm t);
  static ATerm w_27 (ATerm t)
  {
    ATerm r_73 = NULL,s_73 = NULL;
    r_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_73), r_73);
    t = d_16(not_null(n_73), r_73, t);
    s_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_73, s_73);
    return(t);
  }
  if(((n_73 != NULL) && (n_73 != t)))
    _fail(t);
  else
    n_73 = t;
  t = lookup_table_0_1(n_73, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(o_73, t);
  t = map_1_0(w_27, t);
  return(t);
}
static ATerm x_27 (ATerm t)
{
  t = debug_1_0(y_27, t);
  return(t);
}
static ATerm y_27 (ATerm t)
{
  t = term_u_72;
  return(t);
}
static ATerm f_75 (ATerm c_74, ATerm t)
{
  ATerm e_74 = NULL,i_74 = NULL,k_74 = NULL;
  t = term_v_72;
  i_74 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, c_74);
  k_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_72, (ATerm) ATmakeAppl(sym_Tool_1, c_74));
  t = d_16(i_74, k_74, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_72 = ATgetFirst((ATermList) t);
      if(match_cons(w_72, sym__2))
        {
          ATerm y_72 = ATgetArgument(w_72, 0);
          e_74 = ATgetArgument(w_72, 1);
        }
      else
        _fail(t);
      {
        ATerm x_72 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_74;
  return(t);
}
static ATerm a_28 (ATerm t)
{
  t = debug_1_0(b_28, t);
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_u_72;
  return(t);
}
static ATerm c_28 (ATerm t)
{
  t = term_v_72;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_28, t);
  return(t);
}
static ATerm d_28 (ATerm t)
{
  t = term_z_72;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm b_73 = t;
  int c_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL;
      t = if_verbose5_1_0(x_27, t);
      t = xtc_load_0_0(t);
      n_74 = t;
      if(match_cons(t, sym__2))
        {
          l_74 = ATgetArgument(t, 0);
          m_74 = ATgetArgument(t, 1);
          {
            ATerm d_73 = t;
            int e_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL;
                t = term_v_72;
                t_74 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, l_74);
                u_74 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_v_72, (ATerm) ATmakeAppl(sym_Tool_1, l_74));
                t = d_16(t_74, u_74, t);
                {
                  static ATerm z_27 (ATerm t);
                  static ATerm z_27 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((m_74 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((s_74 != NULL) && (s_74 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_74 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(z_27, t);
                }
                t = not_null(s_74);
                LocalPopChoice(e_73);
              }
            else
              {
                t = d_73;
                t = f_75(n_74, t);
              }
          }
        }
      else
        {
          t = f_75(n_74, t);
        }
      t = if_verbose5_1_0(a_28, t);
      LocalPopChoice(c_73);
    }
  else
    {
      t = b_73;
      {
        ATerm e_75 = NULL,l_39 = NULL,m_39 = NULL;
        e_75 = t;
        t = term_n_38;
        l_39 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_73), e_75), term_l_73);
        m_39 = t;
        t = SSL_printnl(l_39, m_39);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_73), e_75), term_l_73);
        t = if_verbose5_1_0(c_28, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL;
  t = term_b_38;
  j_75 = t;
  t = term_q_73;
  k_75 = t;
  t = term_t_73;
  t = d_16(j_75, k_75, t);
  t = echo_0_0(t);
  return(t);
}
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_74), term_u_71), term_h_74), term_g_74), term_f_74), term_u_71), term_d_74), term_b_74), term_a_74), term_z_73), term_y_73), term_x_73), term_w_73), term_v_73), term_u_73);
  return(t);
}
ATerm short_description_1_0 (ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_75 = NULL;
  t = term_a_40;
  t = j_0(t);
  l_75 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_74), l_75), term_v_74), term_u_71), term_r_74), term_u_71), term_q_74), term_p_74), term_u_71), term_o_74);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_75 = NULL,r_75 = NULL,s_75 = NULL;
  p_75 = t;
  {
    ATerm x_74 = t;
    int y_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_75;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_74 = ATgetFirst((ATermList) t);
                ATerm a_75 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_75;
          }
        LocalPopChoice(y_74);
      }
    else
      {
        t = x_74;
        t = (ATerm) ATinsert(ATempty, p_75);
      }
  }
  r_75 = t;
  t = term_d_40;
  s_75 = t;
  t = SSL_printnl(s_75, r_75);
  t = p_75;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm y_75 = NULL,a_76 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_75 = ATgetFirst((ATermList) t);
      a_76 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_76 = NULL,g_76 = NULL;
        static ATerm e_28 (ATerm t);
        static ATerm e_28 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_76)), not_null(g_76));
          return(t);
        }
        t = a_76;
        t = h_0(t);
        if(((f_76 != NULL) && (f_76 != t)))
          _fail(t);
        else
          f_76 = t;
        t = y_75;
        t = f_0(t);
        if(((g_76 != NULL) && (g_76 != t)))
          _fail(t);
        else
          g_76 = t;
        t = a_76;
        t = reverse_acc_2_0(f_0, e_28, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_40;
      t = h_0(t);
    }
  return(t);
}
static ATerm f_28 (ATerm t)
{
  ATerm q_76 = NULL,s_76 = NULL,t_76 = NULL,u_18 = NULL;
  t_76 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_76);
  q_76 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_76);
  u_18 = t;
  t = SSLsetAnnotations(u_18, q_76);
  return(t);
}
static ATerm g_28 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  ATerm x_76 = NULL;
  x_76 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_76), term_b_75);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL;
  ATerm c_75 = t;
  int d_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_76 = NULL,p_76 = NULL;
      t = term_b_38;
      o_76 = t;
      t = term_q_73;
      p_76 = t;
      t = term_t_73;
      t = d_16(o_76, p_76, t);
      LocalPopChoice(d_75);
    }
  else
    {
      t = c_75;
      t = fetch_1_0(f_28, t);
    }
  {
    ATerm g_75 = t;
    int h_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_135(t);
        t = echo_0_0(t);
        LocalPopChoice(h_75);
      }
    else
      {
        t = g_75;
      }
  }
  t = term_i_75;
  t = echo_0_0(t);
  t = term_m_75;
  m_76 = t;
  t = term_n_75;
  n_76 = t;
  t = term_o_75;
  t = d_16(m_76, n_76, t);
  t = reverse_acc_2_0(_id, g_28, t);
  t = map_1_0(h_28, t);
  {
    ATerm q_75 = t;
    int t_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_76 = NULL;
        t = t_135(t);
        z_76 = t;
        t = (ATerm) ATinsert(CheckATermList(z_76), term_u_71);
        t = echo_0_0(t);
        LocalPopChoice(t_75);
      }
    else
      {
        t = q_75;
      }
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_77 = NULL,f_77 = NULL;
  static ATerm j_28 (ATerm t);
  static ATerm k_28 (ATerm t);
  static ATerm j_28 (ATerm t)
  {
    static ATerm l_28 (ATerm t);
    static ATerm l_28 (ATerm t)
    {
      t = not_null(d_77);
      return(t);
    }
    t = short_description_1_0(l_28, t);
    return(t);
  }
  static ATerm k_28 (ATerm t)
  {
    static ATerm m_28 (ATerm t);
    static ATerm m_28 (ATerm t)
    {
      t = not_null(d_77);
      return(t);
    }
    t = long_description_1_0(m_28, t);
    return(t);
  }
  f_77 = t;
  {
    ATerm u_75 = t;
    int v_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_77 = NULL,h_77 = NULL;
        t = term_b_38;
        g_77 = t;
        t = term_q_73;
        h_77 = t;
        t = term_t_73;
        t = d_16(g_77, h_77, t);
        if(((d_77 != NULL) && (d_77 != t)))
          _fail(t);
        else
          d_77 = t;
        LocalPopChoice(v_75);
      }
    else
      {
        t = u_75;
        {
          static ATerm i_28 (ATerm t);
          static ATerm i_28 (ATerm t)
          {
            ATerm i_77 = NULL,j_77 = NULL,k_77 = NULL,w_18 = NULL;
            k_77 = t;
            if(match_cons(t, sym_Program_1))
              {
                j_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_77);
            i_77 = t;
            t = j_77;
            if(((d_77 != NULL) && (d_77 != t)))
              _fail(t);
            else
              d_77 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, j_77);
            w_18 = t;
            t = SSLsetAnnotations(w_18, i_77);
            return(t);
          }
          t = fetch_1_0(i_28, t);
        }
      }
  }
  t = f_77;
  t = default_system_usage_2_0(j_28, k_28, t);
  return(t);
}
static ATerm q_28 (ATerm t)
{
  ATerm m_77 = NULL,o_77 = NULL,p_77 = NULL;
  if(match_cons(t, sym__2))
    {
      m_77 = ATgetArgument(t, 0);
      o_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_71), o_77), term_x_75), m_77), term_w_75);
  p_77 = t;
  t = SSL_concat_strings(p_77);
  return(t);
}
ATerm Display_possible_warnings_0_0 (ATerm t)
{
  t = map_1_0(q_28, t);
  return(t);
}
static ATerm n_15 (ATerm t_36, ATerm j_304, ATerm t)
{
  static ATerm t_28 (ATerm t);
  static ATerm t_28 (ATerm t)
  {
    if((t_36 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = j_304;
  t = fetch_1_0(t_28, t);
  return(t);
}
static ATerm v_28 (ATerm t)
{
  ATerm v_77 = NULL;
  v_77 = t;
  if(match_string(t, "--warning"))
    {
      t = v_77;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = v_77;
    }
  return(t);
}
static ATerm x_28 (ATerm t)
{
  ATerm k_79 = NULL,o_79 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_57), term_i_57), term_d_57), term_x_56);
  t = Display_possible_warnings_0_0(t);
  k_79 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_79), term_c_76), term_b_76), term_z_75);
  o_79 = t;
  t = SSL_concat_strings(o_79);
  return(t);
}
static ATerm y_28 (ATerm t)
{
  ATerm a_78 = NULL,c_78 = NULL;
  c_78 = t;
  t = SSL_explode_term(c_78);
  if(match_cons(t, sym__2))
    {
      ATerm d_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_76) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_76 = ATgetArgument(t, 1);
        if(((ATgetType(e_76) == AT_LIST) && !(ATisEmpty(e_76))))
          {
            a_78 = ATgetFirst((ATermList) e_76);
            {
              ATerm h_76 = (ATerm) ATgetNext((ATermList) e_76);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_78;
  return(t);
}
static ATerm e_29 (ATerm t)
{
  ATerm w_78 = NULL,x_78 = NULL;
  x_78 = t;
  t = SSL_explode_term(x_78);
  if(match_cons(t, sym__2))
    {
      ATerm i_76 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_76) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_76 = ATgetArgument(t, 1);
        if(((ATgetType(j_76) == AT_LIST) && !(ATisEmpty(j_76))))
          {
            w_78 = ATgetFirst((ATermList) j_76);
            {
              ATerm k_76 = (ATerm) ATgetNext((ATermList) j_76);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_78;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL,u_77 = NULL;
  static ATerm w_28 (ATerm t);
  static ATerm w_28 (ATerm t)
  {
    if(((u_77 != NULL) && (u_77 != t)))
      _fail(t);
    else
      u_77 = t;
    {
      ATerm l_76 = t;
      int r_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_77;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
            _fail(t);
          t = u_77;
          LocalPopChoice(r_76);
          {
            ATerm x_77 = NULL,y_77 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_57), term_i_57), term_d_57), term_x_56);
            t = map_1_0(y_28, t);
            x_77 = t;
            t = term_t_56;
            y_77 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_t_56, x_77);
            t = i_16(y_77, x_77, t);
          }
        }
      else
        {
          t = l_76;
          t = u_77;
          {
            ATerm u_76 = t;
            int v_76 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_explode_string(u_77);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm w_76 = ATgetFirst((ATermList) t);
                    if(((ATgetType(w_76) != AT_INT) || (ATgetInt((ATermInt) w_76) != 110)))
                      _fail(t);
                    {
                      ATerm y_76 = (ATerm) ATgetNext((ATermList) t);
                      if(((ATgetType(y_76) == AT_LIST) && !(ATisEmpty(y_76))))
                        {
                          ATerm a_77 = ATgetFirst((ATermList) y_76);
                          if(((ATgetType(a_77) != AT_INT) || (ATgetInt((ATermInt) a_77) != 111)))
                            _fail(t);
                          {
                            ATerm b_77 = (ATerm) ATgetNext((ATermList) y_76);
                            if(((ATgetType(b_77) == AT_LIST) && !(ATisEmpty(b_77))))
                              {
                                ATerm c_77 = ATgetFirst((ATermList) b_77);
                                if(((ATgetType(c_77) != AT_INT) || (ATgetInt((ATermInt) c_77) != 45)))
                                  _fail(t);
                                if(((s_77 != NULL) && (s_77 != (ATerm) ATgetNext((ATermList) b_77))))
                                  _fail((ATerm) ATgetNext((ATermList) b_77));
                                else
                                  s_77 = (ATerm) ATgetNext((ATermList) b_77);
                              }
                            else
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = u_77;
                LocalPopChoice(v_76);
                {
                  ATerm d_78 = NULL,e_78 = NULL,g_78 = NULL,h_78 = NULL;
                  t = SSL_implode_string(s_77);
                  if(((t_77 != NULL) && (t_77 != t)))
                    _fail(t);
                  else
                    t_77 = t;
                  t = term_b_38;
                  g_78 = t;
                  t = term_t_56;
                  h_78 = t;
                  t = term_u_56;
                  t = d_16(g_78, h_78, t);
                  {
                    static ATerm d_29 (ATerm t);
                    static ATerm d_29 (ATerm t)
                    {
                      if((t_77 != t))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = filter_1_0(d_29, t);
                  }
                  d_78 = t;
                  t = term_t_56;
                  e_78 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_t_56, d_78);
                  t = i_16(e_78, d_78, t);
                }
              }
            else
              {
                t = u_76;
                t = u_77;
                {
                  ATerm e_77 = t;
                  int l_77 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_78 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_57), term_i_57), term_d_57), term_x_56);
                      t = map_1_0(e_29, t);
                      l_78 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_77, l_78);
                      t = n_15(u_77, l_78, t);
                      t = u_77;
                      LocalPopChoice(l_77);
                      {
                        ATerm y_78 = NULL,z_78 = NULL;
                        t = term_t_56;
                        y_78 = t;
                        t = (ATerm) ATinsert(ATempty, u_77);
                        z_78 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_t_56, (ATerm) ATinsert(ATempty, u_77));
                        t = y_15(y_78, z_78, t);
                      }
                    }
                  else
                    {
                      t = e_77;
                      {
                        ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL,g_79 = NULL,h_79 = NULL,j_79 = NULL;
                        t = term_b_38;
                        h_79 = t;
                        t = term_q_73;
                        j_79 = t;
                        t = term_t_73;
                        t = d_16(h_79, j_79, t);
                        a_79 = t;
                        t = term_n_38;
                        c_79 = t;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_77), u_77), term_n_77), a_79);
                        g_79 = t;
                        t = SSL_printnl(c_79, g_79);
                        t = term_f_39;
                        b_79 = t;
                        t = SSL_exit(b_79);
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_77), u_77), term_n_77), a_79);
                      }
                    }
                }
              }
          }
        }
    }
    return(t);
  }
  t = ArgOption_3_0(v_28, w_28, x_28, t);
  return(t);
}
static ATerm h_29 (ATerm t)
{
  ATerm q_79 = NULL;
  q_79 = t;
  if(match_string(t, "-S"))
    {
      t = q_79;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_79;
    }
  return(t);
}
static ATerm i_29 (ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL;
  t = term_c_38;
  r_79 = t;
  t = term_v_37;
  s_79 = t;
  t = term_r_77;
  t = i_16(r_79, s_79, t);
  t = term_w_77;
  return(t);
}
static ATerm j_29 (ATerm t)
{
  t = term_z_77;
  return(t);
}
static ATerm k_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_29 (ATerm t)
{
  ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL;
  t_79 = t;
  t = SSL_string_to_int(t_79);
  u_79 = t;
  t = term_c_38;
  v_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_38, u_79);
  t = i_16(v_79, u_79, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_79);
  return(t);
}
static ATerm p_29 (ATerm t)
{
  t = term_b_78;
  return(t);
}
static ATerm s_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_29 (ATerm t)
{
  ATerm x_79 = NULL,y_79 = NULL;
  t = term_f_78;
  x_79 = t;
  t = term_a_40;
  y_79 = t;
  t = term_i_78;
  t = i_16(x_79, y_79, t);
  t = term_j_78;
  return(t);
}
static ATerm x_29 (ATerm t)
{
  t = term_k_78;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_78 = t;
  int n_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_29, i_29, j_29, t);
      LocalPopChoice(n_78);
    }
  else
    {
      t = m_78;
      {
        ATerm o_78 = t;
        int p_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_29, o_29, p_29, t);
            LocalPopChoice(p_78);
          }
        else
          {
            t = o_78;
            t = Option_3_0(s_29, t_29, x_29, t);
          }
      }
    }
  return(t);
}
ATerm set_choice_point_lib_0_0 (ATerm t)
{
  ATerm f_80 = NULL,k_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL;
  f_80 = t;
  t = term_b_38;
  n_80 = t;
  t = term_a_39;
  o_80 = t;
  t = term_c_39;
  t = d_16(n_80, o_80, t);
  {
    static ATerm b_30 (ATerm t);
    static ATerm b_30 (ATerm t)
    {
      ATerm p_80 = NULL;
      p_80 = t;
      if(match_string(t, "-lstratego-choice"))
        {
          t = f_80;
        }
      else
        {
          t = p_80;
        }
      return(t);
    }
    t = map_1_0(b_30, t);
  }
  k_80 = t;
  t = term_a_39;
  m_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, k_80);
  t = i_16(m_80, k_80, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm t_130 (ATerm), ATerm t)
{
  ATerm v_80 = NULL;
  v_80 = t;
  {
    ATerm q_78 = t;
    int r_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL;
        t = term_b_38;
        z_80 = t;
        t = term_c_38;
        a_81 = t;
        t = term_f_38;
        t = d_16(z_80, a_81, t);
        y_80 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_80, term_o_47);
        t = geq_0_0(t);
        t = v_80;
        t = t_130(t);
        LocalPopChoice(r_78);
      }
    else
      {
        t = q_78;
        t = v_80;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm s_130 (ATerm), ATerm t)
{
  ATerm d_81 = NULL;
  d_81 = t;
  {
    ATerm s_78 = t;
    int t_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_81 = NULL,i_81 = NULL,j_81 = NULL;
        t = term_b_38;
        i_81 = t;
        t = term_c_38;
        j_81 = t;
        t = term_f_38;
        t = d_16(i_81, j_81, t);
        h_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_81, term_e_45);
        t = geq_0_0(t);
        t = d_81;
        t = s_130(t);
        LocalPopChoice(t_78);
      }
    else
      {
        t = s_78;
        t = d_81;
      }
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL;
  x_81 = t;
  if(match_cons(t, sym__2))
    {
      y_81 = ATgetArgument(t, 0);
      z_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_78 = t;
    int v_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_81;
        if((y_81 != t))
          {
            _fail(t);
          }
        t = x_81;
        LocalPopChoice(v_78);
      }
    else
      {
        t = u_78;
        t = (ATerm) ATmakeAppl(sym__2, y_81, z_81);
        {
          ATerm d_79 = t;
          int e_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_81, z_81);
              LocalPopChoice(e_79);
            }
          else
            {
              t = d_79;
              t = SSL_gtr(y_81, z_81);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_81, z_81);
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm u_130 (ATerm), ATerm t)
{
  ATerm e_82 = NULL;
  e_82 = t;
  {
    ATerm f_79 = t;
    int i_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL;
        t = term_b_38;
        i_82 = t;
        t = term_c_38;
        j_82 = t;
        t = term_f_38;
        t = d_16(i_82, j_82, t);
        h_82 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_82, term_a_51);
        t = geq_0_0(t);
        t = e_82;
        t = u_130(t);
        LocalPopChoice(i_79);
      }
    else
      {
        t = f_79;
        t = e_82;
      }
  }
  return(t);
}
static ATerm q_15 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm e_42, ATerm d_42, ATerm t)
{
  t = r_118(t);
  {
    static ATerm h_30 (ATerm t);
    static ATerm h_30 (ATerm t)
    {
      ATerm l_82 = NULL;
      l_82 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_42, l_82);
      t = q_118(t);
      return(t);
    }
    t = fetch_1_0(h_30, t);
  }
  t = d_42;
  return(t);
}
static ATerm r_15 (ATerm n_118 (ATerm), ATerm a_42, ATerm z_41, ATerm t)
{
  static ATerm j_83 (ATerm t);
  static ATerm j_83 (ATerm t)
  {
    ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL;
    b_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_41;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_83 = ATgetFirst((ATermList) t);
            d_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_79 = t;
          int m_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_83;
              {
                static ATerm i_30 (ATerm t);
                static ATerm i_30 (ATerm t)
                {
                  t = z_41;
                  return(t);
                }
                t = q_15(n_118, i_30, c_83, d_83, t);
              }
              t = j_83(t);
              LocalPopChoice(m_79);
            }
          else
            {
              t = l_79;
              {
                ATerm z_40 = NULL,g_41 = NULL,y_18 = NULL;
                t = SSLgetAnnotations(b_83);
                z_40 = t;
                t = d_83;
                t = j_83(t);
                g_41 = t;
                t = (ATerm) ATinsert(CheckATermList(g_41), c_83);
                y_18 = t;
                t = SSLsetAnnotations(y_18, z_40);
              }
            }
        }
      }
    return(t);
  }
  t = a_42;
  t = j_83(t);
  return(t);
}
static ATerm l_30 (ATerm t)
{
  ATerm c_84 = NULL;
  if(match_cons(t, sym__2))
    {
      c_84 = ATgetArgument(t, 0);
      if((c_84 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_15 (ATerm w_57, ATerm x_57, ATerm y_57, ATerm t)
{
  ATerm m_83 = NULL,o_83 = NULL,p_83 = NULL,q_83 = NULL;
  m_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_57, x_57);
  {
    ATerm n_79 = t;
    int p_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_79 = ATgetArgument(t, 0);
            ATerm z_79 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_57, x_57);
        t = d_16(w_57, x_57, t);
        LocalPopChoice(p_79);
      }
    else
      {
        t = n_79;
        t = (ATerm) ATempty;
      }
  }
  p_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_83, y_57);
  t = r_15(l_30, p_83, y_57, t);
  o_83 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_57, x_57, o_83);
  t = lookup_table_0_1(w_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(x_57, o_83, q_83, t);
  t = m_83;
  return(t);
}
ATerm map_1_0 (ATerm c_114 (ATerm), ATerm t)
{
  static ATerm x_84 (ATerm t);
  static ATerm x_84 (ATerm t)
  {
    ATerm q_84 = NULL,r_84 = NULL,w_84 = NULL;
    q_84 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_84;
      }
    else
      {
        ATerm f_42 = NULL,s_42 = NULL,w_42 = NULL,e_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_84 = ATgetFirst((ATermList) t);
            w_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_84);
        f_42 = t;
        t = r_84;
        t = c_114(t);
        s_42 = t;
        t = w_84;
        t = x_84(t);
        w_42 = t;
        t = (ATerm) ATinsert(CheckATermList(w_42), s_42);
        e_19 = t;
        t = SSLsetAnnotations(e_19, f_42);
      }
    return(t);
  }
  t = x_84(t);
  return(t);
}
static ATerm t_15 (ATerm r_127 (ATerm), ATerm g_58, ATerm f_58, ATerm t)
{
  static ATerm p_30 (ATerm t);
  static ATerm p_30 (ATerm t)
  {
    ATerm z_84 = NULL,a_85 = NULL;
    if(match_cons(t, sym__2))
      {
        z_84 = ATgetArgument(t, 0);
        a_85 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, g_58, z_84, a_85);
    t = r_127(t);
    return(t);
  }
  t = f_58;
  t = map_1_0(p_30, t);
  return(t);
}
static ATerm o_85 (ATerm i_85, ATerm t)
{
  t = SSL_fclose(i_85);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_85 = NULL,m_85 = NULL;
  m_85 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_85 = ATgetArgument(t, 0);
      {
        ATerm a_80 = t;
        int b_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_85);
            LocalPopChoice(b_80);
          }
        else
          {
            t = a_80;
            t = o_85(m_85, t);
          }
      }
    }
  else
    {
      t = o_85(m_85, t);
    }
  return(t);
}
static ATerm u_15 (ATerm z_35, ATerm t)
{
  t = SSL_read_term_from_stream(z_35);
  return(t);
}
static ATerm v_15 (ATerm s_51, ATerm t_51, ATerm t)
{
  ATerm p_85 = NULL;
  t = SSL_fopen(s_51, t_51);
  p_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_85);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_85 = NULL;
  t = SSL_stdin_stream();
  q_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_85);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_85 = NULL;
  t = SSL_stdout_stream();
  r_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_85);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_85 = NULL;
  t = SSL_stderr_stream();
  s_85 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_85);
  return(t);
}
static ATerm j_87 (ATerm y_85, ATerm t)
{
  ATerm z_85 = NULL;
  t = SSL_explode_term(y_85);
  if(match_cons(t, sym__2))
    {
      ATerm c_80 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_80) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_80 = ATgetArgument(t, 1);
        if(((ATgetType(d_80) == AT_LIST) && !(ATisEmpty(d_80))))
          {
            z_85 = ATgetFirst((ATermList) d_80);
            {
              ATerm e_80 = (ATerm) ATgetNext((ATermList) d_80);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_85;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_85;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_85;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_85;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_87 (ATerm c_86, ATerm d_86, ATerm e_86, ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL,h_86 = NULL,o_86 = NULL,g_19 = NULL;
  t = SSLgetAnnotations(e_86);
  h_86 = t;
  t = c_86;
  if(match_cons(t, sym_Path_1))
    {
      o_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_86, d_86);
  g_19 = t;
  t = SSLsetAnnotations(g_19, h_86);
  if(match_cons(t, sym__2))
    {
      f_86 = ATgetArgument(t, 0);
      g_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15(f_86, g_86, t);
  return(t);
}
static ATerm l_87 (ATerm r_86, ATerm s_86, ATerm t_86, ATerm t)
{
  ATerm u_86 = NULL,v_86 = NULL,w_86 = NULL,d_87 = NULL,k_19 = NULL;
  t = SSLgetAnnotations(t_86);
  w_86 = t;
  t = SSL_is_string(r_86);
  d_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_87, s_86);
  k_19 = t;
  t = SSLsetAnnotations(k_19, w_86);
  if(match_cons(t, sym__2))
    {
      u_86 = ATgetArgument(t, 0);
      v_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15(u_86, v_86, t);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL,i_87 = NULL;
  f_87 = t;
  if(match_cons(t, sym__2))
    {
      g_87 = ATgetArgument(t, 0);
      i_87 = ATgetArgument(t, 1);
      {
        ATerm g_80 = t;
        int h_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_87(f_87, t);
            LocalPopChoice(h_80);
          }
        else
          {
            t = g_80;
            {
              ATerm i_80 = t;
              int j_80 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_87(g_87, i_87, f_87, t);
                  LocalPopChoice(j_80);
                }
              else
                {
                  t = i_80;
                  t = l_87(g_87, i_87, f_87, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_87(f_87, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_87 = NULL,o_87 = NULL,p_87 = NULL,w_87 = NULL;
  w_87 = t;
  {
    ATerm l_80 = t;
    int q_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_87, term_r_80);
        t = w_15(t);
        LocalPopChoice(q_80);
      }
    else
      {
        t = l_80;
        {
          ATerm v_43 = NULL,x_43 = NULL;
          t = term_s_80;
          x_43 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_80, w_87);
          t = j_16(x_43, w_87, t);
          v_43 = t;
          t = SSL_perror(v_43);
          _fail(t);
        }
      }
  }
  o_87 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_15(p_87, t);
  n_87 = t;
  t = o_87;
  t = fclose_0_0(t);
  t = n_87;
  return(t);
}
static ATerm r_30 (ATerm t)
{
  t = term_t_80;
  return(t);
}
static ATerm u_30 (ATerm t)
{
  t = term_u_80;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm w_80 = t;
  int x_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_87 = NULL,a_88 = NULL;
      z_87 = t;
      t = (ATerm) ATinsert(ATempty, term_b_81);
      a_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_87, (ATerm) ATinsert(ATempty, term_b_81));
      t = z_15(z_87, a_88, t);
      LocalPopChoice(x_80);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = w_80;
      {
        ATerm c_81 = t;
        int e_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_81 = t;
            if((PushChoice() == 0))
              {
                ATerm b_88 = NULL,c_88 = NULL;
                b_88 = t;
                t = (ATerm) ATinsert(ATempty, term_w_61);
                c_88 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_88, (ATerm) ATinsert(ATempty, term_w_61));
                t = z_15(b_88, c_88, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_81;
              }
            t = debug_1_0(r_30, t);
            LocalPopChoice(e_81);
          }
        else
          {
            t = c_81;
            t = debug_1_0(u_30, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm w_30 (ATerm t)
{
  t = debug_1_0(x_30, t);
  return(t);
}
static ATerm x_30 (ATerm t)
{
  t = term_g_81;
  return(t);
}
static ATerm y_30 (ATerm t)
{
  t = debug_1_0(z_30, t);
  return(t);
}
static ATerm z_30 (ATerm t)
{
  t = term_k_81;
  return(t);
}
static ATerm a_31 (ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,a_89 = NULL;
  x_88 = t;
  t = term_n_38;
  y_88 = t;
  t = (ATerm) ATinsert(ATempty, term_l_81);
  a_89 = t;
  t = SSL_printnl(y_88, a_89);
  t = x_88;
  return(t);
}
static ATerm b_31 (ATerm t)
{
  ATerm b_89 = NULL,d_89 = NULL,e_89 = NULL;
  if(match_cons(t, sym__3))
    {
      b_89 = ATgetArgument(t, 0);
      d_89 = ATgetArgument(t, 1);
      e_89 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_15(b_89, d_89, e_89, t);
  return(t);
}
static ATerm d_31 (ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL;
  f_89 = t;
  t = term_n_38;
  g_89 = t;
  t = (ATerm) ATinsert(ATempty, term_m_81);
  h_89 = t;
  t = SSL_printnl(g_89, h_89);
  t = f_89;
  return(t);
}
static ATerm e_31 (ATerm t)
{
  ATerm i_89 = NULL,j_89 = NULL,k_89 = NULL;
  i_89 = t;
  t = term_n_38;
  j_89 = t;
  t = (ATerm) ATinsert(ATempty, term_l_81);
  k_89 = t;
  t = SSL_printnl(j_89, k_89);
  t = i_89;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,o_88 = NULL,p_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL;
  d_88 = t;
  t = if_verbose5_1_0(w_30, t);
  {
    ATerm n_81 = t;
    if((PushChoice() == 0))
      {
        ATerm v_88 = NULL,w_88 = NULL;
        t = term_v_72;
        v_88 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_88);
        w_88 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_72, (ATerm) ATmakeAppl(sym_Imported_1, d_88));
        t = d_16(v_88, w_88, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_81;
      }
  }
  f_88 = t;
  t = term_v_72;
  o_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_72, term_o_81, (ATerm) ATinsert(ATempty, d_88));
  t = lookup_table_0_1(o_88, t);
  u_88 = t;
  t = term_o_81;
  p_88 = t;
  t = (ATerm) ATinsert(ATempty, d_88);
  s_88 = t;
  t = u_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(p_88, s_88, t_88, t);
  t = f_88;
  t = if_verbose4_1_0(y_30, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(a_31, t);
  e_88 = t;
  t = term_v_72;
  l_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_72, e_88);
  t = t_15(b_31, l_88, e_88, t);
  t = if_verbose6_1_0(d_31, t);
  t = term_v_72;
  g_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_72, (ATerm)ATmakeAppl(sym_Imported_1, d_88), (ATerm) ATempty);
  t = lookup_table_0_1(g_88, t);
  k_88 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, d_88);
  h_88 = t;
  t = (ATerm) ATempty;
  i_88 = t;
  t = k_88;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(h_88, i_88, j_88, t);
  t = (ATerm) ATmakeAppl(sym__3, term_v_72, (ATerm)ATmakeAppl(sym_Imported_1, d_88), (ATerm) ATempty);
  t = if_verbose4_1_0(e_31, t);
  return(t);
}
ATerm filter_1_0 (ATerm f_122 (ATerm), ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL,b_90 = NULL;
  y_89 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_89;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_89 = ATgetFirst((ATermList) t);
          b_90 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_81 = t;
        int q_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_44 = NULL,n_44 = NULL,o_44 = NULL,n_19 = NULL;
            t = SSLgetAnnotations(y_89);
            h_44 = t;
            t = z_89;
            t = f_122(t);
            n_44 = t;
            t = b_90;
            t = filter_1_0(f_122, t);
            o_44 = t;
            t = (ATerm) ATinsert(CheckATermList(o_44), n_44);
            n_19 = t;
            t = SSLsetAnnotations(n_19, h_44);
            LocalPopChoice(q_81);
          }
        else
          {
            t = p_81;
            t = b_90;
            t = filter_1_0(f_122, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t)
{
  static ATerm f_90 (ATerm t);
  static ATerm f_90 (ATerm t)
  {
    ATerm r_81 = t;
    int s_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_106(t);
        t = f_90(t);
        LocalPopChoice(s_81);
      }
    else
      {
        t = r_81;
        t = s_106(t);
      }
    return(t);
  }
  t = f_90(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_81 = t;
  int u_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_90 = NULL,j_90 = NULL;
      t = term_b_38;
      i_90 = t;
      t = term_v_81;
      j_90 = t;
      t = term_w_81;
      t = d_16(i_90, j_90, t);
      LocalPopChoice(u_81);
    }
  else
    {
      t = t_81;
      {
        ATerm a_82 = t;
        int b_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_90 = NULL;
            t = term_c_82;
            l_90 = t;
            t = SSL_getenv(l_90);
            LocalPopChoice(b_82);
          }
        else
          {
            t = a_82;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm f_31 (ATerm t)
{
  t = debug_1_0(g_31, t);
  return(t);
}
static ATerm g_31 (ATerm t)
{
  t = term_d_82;
  return(t);
}
static ATerm h_31 (ATerm t)
{
  ATerm t_90 = NULL,u_90 = NULL;
  t = term_v_72;
  t_90 = t;
  t = term_f_82;
  u_90 = t;
  t = term_g_82;
  t = d_16(t_90, u_90, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_82 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_82;
      }
  }
  return(t);
}
static ATerm i_31 (ATerm t)
{
  t = debug_1_0(j_31, t);
  return(t);
}
static ATerm j_31 (ATerm t)
{
  t = term_m_82;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_90 = NULL;
  t = if_verbose5_1_0(f_31, t);
  o_90 = t;
  {
    ATerm n_82 = t;
    int o_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_90 = NULL,r_90 = NULL;
        t = term_v_72;
        q_90 = t;
        t = term_o_81;
        r_90 = t;
        t = term_p_82;
        t = d_16(q_90, r_90, t);
        LocalPopChoice(o_82);
      }
    else
      {
        t = n_82;
        {
          ATerm s_90 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          s_90 = t;
          t = repeat_2_0(h_31, _id, t);
          t = s_90;
        }
      }
  }
  t = o_90;
  t = if_verbose5_1_0(i_31, t);
  return(t);
}
static ATerm w_91 (ATerm y_90, ATerm t)
{
  ATerm c_91 = NULL,e_91 = NULL,f_91 = NULL;
  t = term_v_72;
  e_91 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_90);
  f_91 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_72, (ATerm) ATmakeAppl(sym_Tool_1, y_90));
  t = d_16(e_91, f_91, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_82 = ATgetFirst((ATermList) t);
      if(match_cons(q_82, sym__2))
        {
          ATerm s_82 = ATgetArgument(q_82, 0);
          c_91 = ATgetArgument(q_82, 1);
        }
      else
        _fail(t);
      {
        ATerm r_82 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_91;
  return(t);
}
static ATerm l_31 (ATerm t)
{
  t = debug_1_0(n_31, t);
  return(t);
}
static ATerm n_31 (ATerm t)
{
  t = term_u_72;
  return(t);
}
ATerm xtc_find_silent_0_0 (ATerm t)
{
  ATerm g_91 = NULL,k_91 = NULL,m_91 = NULL;
  t = xtc_load_0_0(t);
  m_91 = t;
  if(match_cons(t, sym__2))
    {
      g_91 = ATgetArgument(t, 0);
      k_91 = ATgetArgument(t, 1);
      {
        ATerm t_82 = t;
        int u_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL;
            t = term_v_72;
            s_91 = t;
            t = (ATerm) ATmakeAppl(sym_Tool_1, g_91);
            t_91 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_v_72, (ATerm) ATmakeAppl(sym_Tool_1, g_91));
            t = d_16(s_91, t_91, t);
            {
              static ATerm k_31 (ATerm t);
              static ATerm k_31 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((k_91 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((r_91 != NULL) && (r_91 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      r_91 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(k_31, t);
            }
            t = not_null(r_91);
            LocalPopChoice(u_82);
          }
        else
          {
            t = t_82;
            t = w_91(m_91, t);
          }
      }
    }
  else
    {
      t = w_91(m_91, t);
    }
  t = if_verbose5_1_0(l_31, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm d_92 = NULL,e_92 = NULL,g_92 = NULL,h_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_92 = NULL,j_92 = NULL,k_92 = NULL;
      t = term_a_40;
      t = p_0(t);
      i_92 = t;
      t = term_m_75;
      j_92 = t;
      t = term_n_75;
      k_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_75, term_n_75, i_92);
      t = e_16(j_92, k_92, i_92, t);
      _fail(t);
    }
  else
    {
      ATerm t_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_92 = ATgetFirst((ATermList) t);
          e_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_92;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_92 = ATgetFirst((ATermList) t);
          h_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_92;
      t = m_0(t);
      t = g_92;
      t = o_0(t);
      t_92 = t;
      t = (ATerm) ATinsert(CheckATermList(h_92), t_92);
    }
  return(t);
}
static ATerm x_15 (ATerm m_70, ATerm n_70, ATerm t)
{
  ATerm v_82 = t;
  int w_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_92 = NULL,v_92 = NULL,y_92 = NULL;
      t = term_b_38;
      y_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_b_38, m_70);
      t = d_16(y_92, m_70, t);
      t = term_b_38;
      u_92 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_b_38, m_70);
      t = lookup_table_0_1(u_92, t);
      if(match_cons(t, sym_Hashtable_1))
        {
          v_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_16(m_70, v_92, t);
      t = (ATerm) ATmakeAppl(sym__2, term_b_38, m_70);
      LocalPopChoice(w_82);
    }
  else
    {
      t = v_82;
      t = (ATerm) ATmakeAppl(sym__2, m_70, n_70);
      t = i_16(m_70, n_70, t);
    }
  return(t);
}
static ATerm y_15 (ATerm p_70, ATerm o_70, ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL,f_93 = NULL;
  t = p_70;
  {
    ATerm x_82 = t;
    int y_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_93 = NULL;
        t = term_b_38;
        h_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_38, p_70);
        t = d_16(h_93, p_70, t);
        LocalPopChoice(y_82);
      }
    else
      {
        t = x_82;
        t = (ATerm) ATempty;
      }
  }
  b_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_70, b_93);
  t = conc_0_0(t);
  a_93 = t;
  t = term_b_38;
  c_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_38, p_70, a_93);
  t = lookup_table_0_1(c_93, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(p_70, a_93, f_93, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_38, p_70, a_93);
  return(t);
}
static ATerm z_15 (ATerm g_51, ATerm h_51, ATerm t)
{
  t = SSL_access(g_51, h_51);
  return(t);
}
ATerm at_end_1_0 (ATerm t_114 (ATerm), ATerm t)
{
  static ATerm s_94 (ATerm t);
  static ATerm s_94 (ATerm t)
  {
    ATerm n_94 = NULL,q_94 = NULL,r_94 = NULL;
    r_94 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_94 = ATgetFirst((ATermList) t);
        q_94 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_45 = NULL,g_45 = NULL,r_19 = NULL;
          t = SSLgetAnnotations(r_94);
          a_45 = t;
          t = q_94;
          t = s_94(t);
          g_45 = t;
          t = (ATerm) ATinsert(CheckATermList(g_45), n_94);
          r_19 = t;
          t = SSLsetAnnotations(r_19, a_45);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_94;
        t = t_114(t);
      }
    return(t);
  }
  t = s_94(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_93 = NULL,k_93 = NULL,n_93 = NULL;
  j_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_93;
    }
  else
    {
      static ATerm o_31 (ATerm t);
      static ATerm o_31 (ATerm t)
      {
        t = not_null(n_93);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_93 = ATgetFirst((ATermList) t);
          if(((n_93 != NULL) && (n_93 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_93;
      t = at_end_1_0(o_31, t);
    }
  return(t);
}
static ATerm e_95 (ATerm w_94, ATerm t)
{
  ATerm x_94 = NULL;
  t = SSL_explode_term(w_94);
  if(match_cons(t, sym__2))
    {
      ATerm z_82 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_82) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_94;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL;
  b_95 = t;
  if(match_cons(t, sym__2))
    {
      z_94 = ATgetArgument(t, 0);
      a_95 = ATgetArgument(t, 1);
      {
        ATerm a_83 = t;
        int e_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_31 (ATerm t);
            static ATerm p_31 (ATerm t)
            {
              t = a_95;
              return(t);
            }
            t = z_94;
            t = at_end_1_0(p_31, t);
            LocalPopChoice(e_83);
          }
        else
          {
            t = a_83;
            t = e_95(b_95, t);
          }
      }
    }
  else
    {
      t = e_95(b_95, t);
    }
  return(t);
}
static ATerm a_16 (ATerm q_70, ATerm r_70, ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL;
  t = q_70;
  {
    ATerm f_83 = t;
    int g_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_95 = NULL;
        t = term_b_38;
        k_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_38, q_70);
        t = d_16(k_95, q_70, t);
        LocalPopChoice(g_83);
      }
    else
      {
        t = f_83;
        t = (ATerm) ATempty;
      }
  }
  g_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_95, r_70);
  t = conc_0_0(t);
  f_95 = t;
  t = term_b_38;
  h_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_38, q_70, f_95);
  t = lookup_table_0_1(h_95, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(q_70, f_95, i_95, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_38, q_70, f_95);
  return(t);
}
static ATerm q_31 (ATerm t)
{
  ATerm m_95 = NULL;
  m_95 = t;
  if(match_string(t, "-o"))
    {
      t = m_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_95;
    }
  return(t);
}
static ATerm r_31 (ATerm t)
{
  ATerm n_95 = NULL,o_95 = NULL;
  n_95 = t;
  t = term_x_38;
  o_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_38, n_95);
  t = i_16(o_95, n_95, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_95);
  return(t);
}
static ATerm s_31 (ATerm t)
{
  t = term_h_83;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_31, r_31, s_31, t);
  return(t);
}
static ATerm x_31 (ATerm t)
{
  ATerm q_95 = NULL;
  q_95 = t;
  if(match_string(t, "-i"))
    {
      t = q_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_95;
    }
  return(t);
}
static ATerm y_31 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL;
  r_95 = t;
  t = term_l_56;
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_56, r_95);
  t = i_16(s_95, r_95, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_95);
  return(t);
}
static ATerm a_32 (ATerm t)
{
  t = term_i_83;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_31, y_31, a_32, t);
  return(t);
}
static ATerm b_32 (ATerm t)
{
  ATerm c_96 = NULL;
  c_96 = t;
  if(match_string(t, "-I"))
    {
      t = c_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = c_96;
    }
  return(t);
}
static ATerm c_32 (ATerm t)
{
  ATerm d_96 = NULL,g_96 = NULL,h_96 = NULL;
  d_96 = t;
  t = term_n_63;
  g_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_96), term_n_63);
  h_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_63, (ATerm) ATinsert(ATinsert(ATempty, d_96), term_n_63));
  t = a_16(g_96, h_96, t);
  t = term_a_40;
  return(t);
}
static ATerm e_32 (ATerm t)
{
  t = term_k_83;
  return(t);
}
static ATerm f_32 (ATerm t)
{
  ATerm i_96 = NULL;
  i_96 = t;
  if(match_string(t, "--main"))
    {
      t = i_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-m", 0, ATtrue)))
        _fail(t);
      t = i_96;
    }
  return(t);
}
static ATerm g_32 (ATerm t)
{
  ATerm j_96 = NULL,k_96 = NULL;
  j_96 = t;
  t = term_f_62;
  k_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_62, j_96);
  t = i_16(k_96, j_96, t);
  t = term_a_40;
  return(t);
}
static ATerm h_32 (ATerm t)
{
  t = term_l_83;
  return(t);
}
static ATerm i_32 (ATerm t)
{
  ATerm n_96 = NULL;
  n_96 = t;
  if(match_string(t, "--library"))
    {
      t = n_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--lib", 0, ATtrue)))
        _fail(t);
      t = n_96;
    }
  return(t);
}
static ATerm j_32 (ATerm t)
{
  ATerm o_96 = NULL,p_96 = NULL;
  t = term_o_40;
  o_96 = t;
  t = term_a_40;
  p_96 = t;
  t = term_n_83;
  t = i_16(o_96, p_96, t);
  t = term_a_40;
  return(t);
}
static ATerm k_32 (ATerm t)
{
  t = term_r_83;
  return(t);
}
static ATerm l_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--C-include", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_32 (ATerm t)
{
  ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL;
  q_96 = t;
  t = term_k_40;
  r_96 = t;
  t = (ATerm) ATinsert(ATempty, q_96);
  s_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_40, (ATerm) ATinsert(ATempty, q_96));
  t = a_16(r_96, s_96, t);
  t = term_a_40;
  return(t);
}
static ATerm o_32 (ATerm t)
{
  t = term_s_83;
  return(t);
}
static ATerm p_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CI", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_32 (ATerm t)
{
  ATerm v_96 = NULL,w_96 = NULL,x_96 = NULL;
  v_96 = t;
  t = term_k_39;
  w_96 = t;
  t = (ATerm) ATinsert(ATempty, v_96);
  x_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_39, (ATerm) ATinsert(ATempty, v_96));
  t = y_15(w_96, x_96, t);
  t = term_a_40;
  return(t);
}
static ATerm s_32 (ATerm t)
{
  t = term_t_83;
  return(t);
}
static ATerm t_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CD", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_32 (ATerm t)
{
  ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL;
  a_97 = t;
  t = term_u_83;
  e_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_83, a_97);
  t = j_16(e_97, a_97, t);
  b_97 = t;
  t = term_o_39;
  c_97 = t;
  t = (ATerm) ATinsert(ATempty, b_97);
  d_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_39, (ATerm) ATinsert(ATempty, b_97));
  t = y_15(c_97, d_97, t);
  t = term_a_40;
  return(t);
}
static ATerm v_32 (ATerm t)
{
  t = term_v_83;
  return(t);
}
static ATerm y_32 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-CL", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_32 (ATerm t)
{
  ATerm f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL,l_97 = NULL;
  f_97 = t;
  t = term_w_83;
  l_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_83, f_97);
  t = j_16(l_97, f_97, t);
  g_97 = t;
  t = term_a_39;
  h_97 = t;
  t = (ATerm) ATinsert(ATempty, g_97);
  i_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, (ATerm) ATinsert(ATempty, g_97));
  t = y_15(h_97, i_97, t);
  t = term_a_40;
  return(t);
}
static ATerm a_33 (ATerm t)
{
  t = term_x_83;
  return(t);
}
static ATerm b_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-Cl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_33 (ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL;
  m_97 = t;
  t = term_y_83;
  q_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_83, m_97);
  t = j_16(q_97, m_97, t);
  n_97 = t;
  t = term_a_39;
  o_97 = t;
  t = (ATerm) ATinsert(ATempty, n_97);
  p_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, (ATerm) ATinsert(ATempty, n_97));
  t = y_15(o_97, p_97, t);
  t = term_a_40;
  return(t);
}
static ATerm f_33 (ATerm t)
{
  t = term_z_83;
  return(t);
}
static ATerm h_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-la", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_33 (ATerm t)
{
  ATerm r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL;
  r_97 = t;
  {
    ATerm a_84 = t;
    int b_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_97 = NULL;
        t = (ATerm) ATinsert(ATempty, term_w_61);
        v_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_97, (ATerm) ATinsert(ATempty, term_w_61));
        t = z_15(r_97, v_97, t);
        LocalPopChoice(b_84);
      }
    else
      {
        t = a_84;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_84), r_97), term_d_84);
        {
          ATerm f_84 = t;
          int g_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_45 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_84), r_97), term_d_84);
              q_45 = t;
              t = SSL_concat_strings(q_45);
              t = xtc_find_0_0(t);
              LocalPopChoice(g_84);
            }
          else
            {
              t = f_84;
              {
                ATerm a_98 = NULL;
                t = term_f_39;
                a_98 = t;
                t = SSL_exit(a_98);
              }
            }
        }
      }
  }
  s_97 = t;
  t = term_a_39;
  t_97 = t;
  t = (ATerm) ATinsert(ATempty, s_97);
  u_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, (ATerm) ATinsert(ATempty, s_97));
  t = y_15(t_97, u_97, t);
  t = term_a_40;
  return(t);
}
static ATerm l_33 (ATerm t)
{
  t = term_h_84;
  return(t);
}
static ATerm m_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--xtc-repo", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_33 (ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL;
  b_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_84), b_98), term_i_84);
  f_98 = t;
  t = SSL_concat_strings(f_98);
  c_98 = t;
  t = term_o_39;
  d_98 = t;
  t = (ATerm) ATinsert(ATempty, c_98);
  e_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_39, (ATerm) ATinsert(ATempty, c_98));
  t = y_15(d_98, e_98, t);
  t = term_a_40;
  return(t);
}
static ATerm r_33 (ATerm t)
{
  t = term_k_84;
  return(t);
}
static ATerm t_33 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_33 (ATerm t)
{
  ATerm i_98 = NULL,j_98 = NULL;
  t = term_t_39;
  i_98 = t;
  t = term_a_40;
  j_98 = t;
  t = term_l_84;
  t = i_16(i_98, j_98, t);
  t = term_a_40;
  return(t);
}
static ATerm a_34 (ATerm t)
{
  t = term_m_84;
  return(t);
}
static ATerm b_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--ast", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_34 (ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL;
  t = term_i_63;
  m_98 = t;
  t = term_a_40;
  n_98 = t;
  t = term_n_84;
  t = i_16(m_98, n_98, t);
  t = term_a_40;
  return(t);
}
static ATerm e_34 (ATerm t)
{
  t = term_o_84;
  return(t);
}
static ATerm h_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-F", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_34 (ATerm t)
{
  ATerm o_98 = NULL,p_98 = NULL;
  t = term_z_57;
  o_98 = t;
  t = term_a_40;
  p_98 = t;
  t = term_p_84;
  t = i_16(o_98, p_98, t);
  t = term_a_40;
  return(t);
}
static ATerm j_34 (ATerm t)
{
  t = term_s_84;
  return(t);
}
static ATerm m_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_34 (ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL,v_98 = NULL;
  t_98 = t;
  t = SSL_string_to_int(t_98);
  u_98 = t;
  t = term_b_44;
  v_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_44, u_98);
  t = i_16(v_98, u_98, t);
  t = term_a_40;
  return(t);
}
static ATerm s_34 (ATerm t)
{
  t = term_v_84;
  return(t);
}
static ATerm t_34 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-O", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_34 (ATerm t)
{
  ATerm z_98 = NULL,c_99 = NULL,d_99 = NULL;
  z_98 = t;
  t = SSL_string_to_int(z_98);
  c_99 = t;
  t = term_f_44;
  d_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_44, c_99);
  t = i_16(d_99, c_99, t);
  t = term_a_40;
  return(t);
}
static ATerm y_34 (ATerm t)
{
  t = term_y_84;
  return(t);
}
static ATerm a_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--fusion", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_35 (ATerm t)
{
  ATerm e_99 = NULL,g_99 = NULL;
  t = term_t_45;
  e_99 = t;
  t = term_a_40;
  g_99 = t;
  t = term_b_85;
  t = x_15(e_99, g_99, t);
  t = term_a_40;
  return(t);
}
static ATerm c_35 (ATerm t)
{
  t = term_c_85;
  return(t);
}
static ATerm e_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_35 (ATerm t)
{
  ATerm i_99 = NULL,k_99 = NULL;
  i_99 = t;
  if(match_string(t, "old"))
    {
      t = i_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = i_99;
    }
  t = term_j_59;
  k_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_59, i_99);
  t = i_16(k_99, i_99, t);
  t = term_a_40;
  return(t);
}
static ATerm g_35 (ATerm t)
{
  t = term_d_85;
  return(t);
}
static ATerm i_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--choice-lib", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_35 (ATerm t)
{
  t = set_choice_point_lib_0_0(t);
  t = term_a_40;
  return(t);
}
static ATerm k_35 (ATerm t)
{
  t = term_e_85;
  return(t);
}
static ATerm l_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--cpl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_35 (ATerm t)
{
  t = term_f_85;
  t = xtc_find_0_0(t);
  t = set_choice_point_lib_0_0(t);
  t = term_a_40;
  return(t);
}
static ATerm n_35 (ATerm t)
{
  t = term_g_85;
  return(t);
}
static ATerm o_35 (ATerm t)
{
  ATerm w_99 = NULL;
  w_99 = t;
  if(match_string(t, "-h"))
    {
      t = w_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      t = w_99;
    }
  return(t);
}
static ATerm p_35 (ATerm t)
{
  ATerm y_99 = NULL,z_99 = NULL;
  t = term_h_85;
  y_99 = t;
  t = term_a_40;
  z_99 = t;
  t = term_j_85;
  t = i_16(y_99, z_99, t);
  t = term_a_40;
  return(t);
}
static ATerm q_35 (ATerm t)
{
  t = term_k_85;
  return(t);
}
static ATerm r_35 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--man", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_35 (ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL;
  t = term_n_85;
  a_100 = t;
  t = term_a_40;
  b_100 = t;
  t = term_t_85;
  t = i_16(a_100, b_100, t);
  t = term_a_40;
  return(t);
}
static ATerm v_35 (ATerm t)
{
  t = term_u_85;
  return(t);
}
static ATerm w_35 (ATerm t)
{
  ATerm c_100 = NULL;
  c_100 = t;
  if(match_string(t, "-v"))
    {
      t = c_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
        _fail(t);
      t = c_100;
    }
  return(t);
}
static ATerm x_35 (ATerm t)
{
  ATerm d_100 = NULL,g_100 = NULL;
  t = term_v_85;
  d_100 = t;
  t = term_a_40;
  g_100 = t;
  t = term_w_85;
  t = i_16(d_100, g_100, t);
  t = term_a_40;
  return(t);
}
static ATerm y_35 (ATerm t)
{
  t = term_x_85;
  return(t);
}
static ATerm a_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_36 (ATerm t)
{
  ATerm h_100 = NULL,i_100 = NULL,k_100 = NULL;
  h_100 = t;
  t = term_e_59;
  i_100 = t;
  t = term_f_39;
  k_100 = t;
  t = term_a_86;
  t = i_16(i_100, k_100, t);
  t = h_100;
  return(t);
}
static ATerm e_36 (ATerm t)
{
  t = term_e_59;
  return(t);
}
static ATerm f_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-maybe-unbound-warnings", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_36 (ATerm t)
{
  ATerm l_100 = NULL,q_100 = NULL,r_100 = NULL;
  l_100 = t;
  t = term_g_59;
  q_100 = t;
  t = term_v_37;
  r_100 = t;
  t = term_b_86;
  t = i_16(q_100, r_100, t);
  t = l_100;
  return(t);
}
static ATerm h_36 (ATerm t)
{
  t = term_g_59;
  return(t);
}
static ATerm i_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--asfix", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_36 (ATerm t)
{
  ATerm s_100 = NULL,t_100 = NULL;
  t = term_a_64;
  s_100 = t;
  t = term_a_40;
  t_100 = t;
  t = term_i_86;
  t = i_16(s_100, t_100, t);
  t = term_a_40;
  return(t);
}
static ATerm l_36 (ATerm t)
{
  t = term_j_86;
  return(t);
}
ATerm strc_options_0_0 (ATerm t)
{
  ATerm k_86 = t;
  int l_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(l_86);
    }
  else
    {
      t = k_86;
      {
        ATerm m_86 = t;
        int n_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(n_86);
          }
        else
          {
            t = m_86;
            {
              ATerm p_86 = t;
              int q_86 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(b_32, c_32, e_32, t);
                  LocalPopChoice(q_86);
                }
              else
                {
                  t = p_86;
                  {
                    ATerm x_86 = t;
                    int y_86 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(f_32, g_32, h_32, t);
                        LocalPopChoice(y_86);
                      }
                    else
                      {
                        t = x_86;
                        {
                          ATerm z_86 = t;
                          int a_87 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Option_3_0(i_32, j_32, k_32, t);
                              LocalPopChoice(a_87);
                            }
                          else
                            {
                              t = z_86;
                              {
                                ATerm b_87 = t;
                                int c_87 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = ArgOption_3_0(l_32, m_32, o_32, t);
                                    LocalPopChoice(c_87);
                                  }
                                else
                                  {
                                    t = b_87;
                                    {
                                      ATerm e_87 = t;
                                      int h_87 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = ArgOption_3_0(p_32, r_32, s_32, t);
                                          LocalPopChoice(h_87);
                                        }
                                      else
                                        {
                                          t = e_87;
                                          {
                                            ATerm m_87 = t;
                                            int q_87 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = ArgOption_3_0(t_32, u_32, v_32, t);
                                                LocalPopChoice(q_87);
                                              }
                                            else
                                              {
                                                t = m_87;
                                                {
                                                  ATerm r_87 = t;
                                                  int s_87 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = ArgOption_3_0(y_32, z_32, a_33, t);
                                                      LocalPopChoice(s_87);
                                                    }
                                                  else
                                                    {
                                                      t = r_87;
                                                      {
                                                        ATerm t_87 = t;
                                                        int u_87 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = ArgOption_3_0(b_33, d_33, f_33, t);
                                                            LocalPopChoice(u_87);
                                                          }
                                                        else
                                                          {
                                                            t = t_87;
                                                            {
                                                              ATerm v_87 = t;
                                                              int x_87 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = ArgOption_3_0(h_33, i_33, l_33, t);
                                                                  LocalPopChoice(x_87);
                                                                }
                                                              else
                                                                {
                                                                  t = v_87;
                                                                  {
                                                                    ATerm y_87 = t;
                                                                    int m_88 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = ArgOption_3_0(m_33, q_33, r_33, t);
                                                                        LocalPopChoice(m_88);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_87;
                                                                        {
                                                                          ATerm n_88 = t;
                                                                          int q_88 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Option_3_0(t_33, w_33, a_34, t);
                                                                              LocalPopChoice(q_88);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_88;
                                                                              {
                                                                                ATerm r_88 = t;
                                                                                int z_88 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Option_3_0(b_34, c_34, e_34, t);
                                                                                    LocalPopChoice(z_88);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = r_88;
                                                                                    {
                                                                                      ATerm c_89 = t;
                                                                                      int l_89 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Option_3_0(h_34, i_34, j_34, t);
                                                                                          LocalPopChoice(l_89);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = c_89;
                                                                                          {
                                                                                            ATerm m_89 = t;
                                                                                            int n_89 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = ArgOption_3_0(m_34, r_34, s_34, t);
                                                                                                LocalPopChoice(n_89);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = m_89;
                                                                                                {
                                                                                                  ATerm o_89 = t;
                                                                                                  int p_89 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = ArgOption_3_0(t_34, v_34, y_34, t);
                                                                                                      LocalPopChoice(p_89);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = o_89;
                                                                                                      {
                                                                                                        ATerm q_89 = t;
                                                                                                        int r_89 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Option_3_0(a_35, b_35, c_35, t);
                                                                                                            LocalPopChoice(r_89);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = q_89;
                                                                                                            {
                                                                                                              ATerm s_89 = t;
                                                                                                              int t_89 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = ArgOption_3_0(e_35, f_35, g_35, t);
                                                                                                                  LocalPopChoice(t_89);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = s_89;
                                                                                                                  {
                                                                                                                    ATerm u_89 = t;
                                                                                                                    int v_89 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = ArgOption_3_0(i_35, j_35, k_35, t);
                                                                                                                        LocalPopChoice(v_89);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = u_89;
                                                                                                                        {
                                                                                                                          ATerm w_89 = t;
                                                                                                                          int x_89 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm q_99 = NULL;
                                                                                                                              q_99 = t;
                                                                                                                              t = term_f_85;
                                                                                                                              t = xtc_find_silent_0_0(t);
                                                                                                                              t = q_99;
                                                                                                                              t = Option_3_0(l_35, m_35, n_35, t);
                                                                                                                              LocalPopChoice(x_89);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = w_89;
                                                                                                                              {
                                                                                                                                ATerm a_90 = t;
                                                                                                                                int c_90 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = verbose_option_0_0(t);
                                                                                                                                    LocalPopChoice(c_90);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = a_90;
                                                                                                                                    {
                                                                                                                                      ATerm d_90 = t;
                                                                                                                                      int e_90 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = Option_3_0(o_35, p_35, q_35, t);
                                                                                                                                          LocalPopChoice(e_90);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = d_90;
                                                                                                                                          {
                                                                                                                                            ATerm g_90 = t;
                                                                                                                                            int h_90 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Option_3_0(r_35, s_35, v_35, t);
                                                                                                                                                LocalPopChoice(h_90);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = g_90;
                                                                                                                                                {
                                                                                                                                                  ATerm k_90 = t;
                                                                                                                                                  int m_90 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = Option_3_0(w_35, x_35, y_35, t);
                                                                                                                                                      LocalPopChoice(m_90);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = k_90;
                                                                                                                                                      {
                                                                                                                                                        ATerm n_90 = t;
                                                                                                                                                        int p_90 = stack_ptr;
                                                                                                                                                        if((PushChoice() == 0))
                                                                                                                                                          {
                                                                                                                                                            t = stratego_warnings_options_0_0(t);
                                                                                                                                                            LocalPopChoice(p_90);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            t = n_90;
                                                                                                                                                            {
                                                                                                                                                              ATerm v_90 = t;
                                                                                                                                                              int w_90 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = Option_3_0(a_36, b_36, e_36, t);
                                                                                                                                                                  LocalPopChoice(w_90);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = v_90;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm x_90 = t;
                                                                                                                                                                    int z_90 = stack_ptr;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        t = Option_3_0(f_36, g_36, h_36, t);
                                                                                                                                                                        LocalPopChoice(z_90);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = x_90;
                                                                                                                                                                        t = Option_3_0(i_36, j_36, l_36, t);
                                                                                                                                                                      }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_16 (ATerm p_61, ATerm q_61, ATerm t)
{
  ATerm v_100 = NULL;
  t = SSL_hashtable_remove(q_61, p_61);
  v_100 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_100);
  return(t);
}
static ATerm c_16 (ATerm u_61, ATerm t)
{
  ATerm y_100 = NULL;
  t = SSL_hashtable_destroy(u_61);
  y_100 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_100);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm z_100 = NULL,a_101 = NULL,c_101 = NULL,d_101 = NULL;
  z_100 = t;
  t = table_hashtable_0_0(t);
  a_101 = t;
  t = lookup_table_0_1(z_100, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_16(d_101, t);
  t = a_101;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_16(z_100, c_101, t);
  t = z_100;
  return(t);
}
ATerm fetch_1_0 (ATerm m_114 (ATerm), ATerm t)
{
  static ATerm z_102 (ATerm t);
  static ATerm z_102 (ATerm t)
  {
    ATerm s_102 = NULL,u_102 = NULL,y_102 = NULL;
    s_102 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_102 = ATgetFirst((ATermList) t);
        y_102 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_91 = t;
      int b_91 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_46 = NULL,n_46 = NULL,v_19 = NULL;
          t = SSLgetAnnotations(s_102);
          g_46 = t;
          t = u_102;
          t = m_114(t);
          n_46 = t;
          t = (ATerm) ATinsert(CheckATermList(y_102), n_46);
          v_19 = t;
          t = SSLsetAnnotations(v_19, g_46);
          LocalPopChoice(b_91);
        }
      else
        {
          t = a_91;
          {
            ATerm a_47 = NULL,l_47 = NULL,w_19 = NULL;
            t = SSLgetAnnotations(s_102);
            a_47 = t;
            t = y_102;
            t = z_102(t);
            l_47 = t;
            t = (ATerm) ATinsert(CheckATermList(l_47), u_102);
            w_19 = t;
            t = SSLsetAnnotations(w_19, a_47);
          }
        }
    }
    return(t);
  }
  t = z_102(t);
  return(t);
}
static ATerm m_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_36 (ATerm t)
{
  ATerm g_103 = NULL,h_103 = NULL;
  t = term_d_91;
  g_103 = t;
  t = term_a_40;
  h_103 = t;
  t = term_h_91;
  t = i_16(g_103, h_103, t);
  return(t);
}
static ATerm q_36 (ATerm t)
{
  t = term_i_91;
  return(t);
}
static ATerm r_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_36 (ATerm t)
{
  ATerm i_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL;
  t = term_d_91;
  k_103 = t;
  t = term_a_40;
  l_103 = t;
  t = term_h_91;
  t = i_16(k_103, l_103, t);
  t = term_v_85;
  i_103 = t;
  t = term_a_40;
  j_103 = t;
  t = term_w_85;
  t = i_16(i_103, j_103, t);
  t = term_j_91;
  return(t);
}
static ATerm u_36 (ATerm t)
{
  t = term_l_91;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_91 = t;
  int o_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_36, n_36, q_36, t);
      LocalPopChoice(o_91);
    }
  else
    {
      t = n_91;
      t = Option_3_0(r_36, s_36, u_36, t);
    }
  return(t);
}
static ATerm e_16 (ATerm z_56, ATerm a_57, ATerm y_56, ATerm t)
{
  ATerm n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL;
  n_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_56, a_57);
  {
    ATerm p_91 = t;
    int q_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_91 = ATgetArgument(t, 0);
            ATerm v_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_56, a_57);
        t = d_16(z_56, a_57, t);
        LocalPopChoice(q_91);
      }
    else
      {
        t = p_91;
        t = (ATerm) ATempty;
      }
  }
  o_103 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_56, a_57, (ATerm) ATinsert(CheckATermList(o_103), y_56));
  t = lookup_table_0_1(z_56, t);
  r_103 = t;
  t = (ATerm) ATinsert(CheckATermList(o_103), y_56);
  p_103 = t;
  t = r_103;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(a_57, p_103, q_103, t);
  t = n_103;
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_104 = NULL,f_104 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL;
      t = term_a_40;
      t = e_0(t);
      g_104 = t;
      t = term_m_75;
      h_104 = t;
      t = term_n_75;
      i_104 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_75, term_n_75, g_104);
      t = e_16(h_104, i_104, g_104, t);
      _fail(t);
    }
  else
    {
      ATerm n_104 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_104 = ATgetFirst((ATermList) t);
          f_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_104;
      t = b_0(t);
      t = term_a_40;
      t = c_0(t);
      n_104 = t;
      t = (ATerm) ATinsert(CheckATermList(f_104), n_104);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t)
{
  ATerm o_104 = NULL,p_104 = NULL,q_104 = NULL,t_104 = NULL,u_104 = NULL,v_104 = NULL,e_20 = NULL;
  v_104 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_104 = ATgetFirst((ATermList) t);
      q_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_104);
  o_104 = t;
  t = p_104;
  t = t_84(t);
  t_104 = t;
  t = q_104;
  t = u_84(t);
  u_104 = t;
  t = (ATerm) ATinsert(CheckATermList(u_104), t_104);
  e_20 = t;
  t = SSLsetAnnotations(e_20, o_104);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_135 (ATerm), ATerm t)
{
  ATerm b_105 = NULL,d_105 = NULL,e_105 = NULL,f_105 = NULL,h_105 = NULL,k_105 = NULL,h_20 = NULL;
  b_105 = t;
  {
    ATerm x_91 = t;
    int y_91 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_91;
        t = n_135(t);
        LocalPopChoice(y_91);
      }
    else
      {
        t = x_91;
      }
  }
  t = b_105;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_105 = ATgetFirst((ATermList) t);
      f_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_105);
  d_105 = t;
  t = term_q_73;
  k_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_73, e_105);
  t = i_16(k_105, e_105, t);
  t = f_105;
  {
    static ATerm u_106 (ATerm t);
    static ATerm u_106 (ATerm t)
    {
      ATerm a_92 = t;
      int b_92 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_92 = t;
          int f_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_105 = NULL;
              s_105 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_105;
              LocalPopChoice(f_92);
            }
          else
            {
              t = c_92;
              t = n_135(t);
              t = Cons_2_0(_id, u_106, t);
            }
          LocalPopChoice(b_92);
        }
      else
        {
          t = a_92;
          {
            ATerm j_106 = NULL,m_106 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_106 = ATgetFirst((ATermList) t);
                m_106 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_106), (ATerm) ATmakeAppl(sym_Undefined_1, j_106));
          }
        }
      return(t);
    }
    t = u_106(t);
  }
  h_105 = t;
  t = (ATerm) ATinsert(CheckATermList(h_105), (ATerm) ATmakeAppl(sym_Program_1, e_105));
  h_20 = t;
  t = SSLsetAnnotations(h_20, d_105);
  return(t);
}
static ATerm z_36 (ATerm t)
{
  ATerm p_108 = NULL;
  p_108 = t;
  if(match_string(t, "--help"))
    {
      t = p_108;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_108;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_108;
        }
    }
  return(t);
}
static ATerm b_37 (ATerm t)
{
  ATerm q_108 = NULL,r_108 = NULL;
  t = term_h_85;
  q_108 = t;
  t = term_a_40;
  r_108 = t;
  t = term_j_85;
  t = i_16(q_108, r_108, t);
  t = term_l_92;
  return(t);
}
static ATerm c_37 (ATerm t)
{
  t = term_m_92;
  return(t);
}
static ATerm e_37 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm k_135 (ATerm), ATerm l_135 (ATerm), ATerm m_135 (ATerm), ATerm t)
{
  ATerm s_107 = NULL,f_108 = NULL,g_108 = NULL,j_108 = NULL,k_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL;
  g_108 = t;
  t = term_m_75;
  j_108 = t;
  t = term_n_92;
  t = lookup_table_0_1(j_108, t);
  o_108 = t;
  t = term_n_75;
  k_108 = t;
  t = (ATerm) ATempty;
  m_108 = t;
  t = o_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(k_108, m_108, n_108, t);
  t = g_108;
  {
    static ATerm v_36 (ATerm t);
    static ATerm v_36 (ATerm t)
    {
      ATerm o_92 = t;
      int p_92 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_135(t);
          LocalPopChoice(p_92);
        }
      else
        {
          t = o_92;
          {
            ATerm q_92 = t;
            int r_92 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_36, b_37, c_37, t);
                LocalPopChoice(r_92);
              }
            else
              {
                t = q_92;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_36, t);
  }
  {
    ATerm s_92 = t;
    int w_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_109 = NULL;
        j_109 = t;
        {
          ATerm x_92 = t;
          int z_92 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_47 = NULL;
              t = j_109;
              {
                ATerm d_93 = t;
                int e_93 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_47 = NULL,e_48 = NULL;
                    t = term_b_38;
                    z_47 = t;
                    t = term_h_85;
                    e_48 = t;
                    t = term_g_93;
                    t = d_16(z_47, e_48, t);
                    LocalPopChoice(e_93);
                  }
                else
                  {
                    t = d_93;
                    t = fetch_1_0(e_37, t);
                  }
              }
              t = j_109;
              t = l_135(t);
              t = term_v_37;
              w_47 = t;
              t = SSL_exit(w_47);
              LocalPopChoice(z_92);
            }
          else
            {
              t = x_92;
              {
                ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
                t = term_b_38;
                l_48 = t;
                t = term_d_91;
                m_48 = t;
                t = term_i_93;
                t = d_16(l_48, m_48, t);
                t = j_109;
                t = m_135(t);
                t = term_v_37;
                k_48 = t;
                t = SSL_exit(k_48);
              }
            }
        }
        LocalPopChoice(w_92);
      }
    else
      {
        t = s_92;
        {
          ATerm l_93 = t;
          int m_93 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_109 = NULL,n_109 = NULL,o_109 = NULL;
              static ATerm f_37 (ATerm t);
              static ATerm f_37 (ATerm t)
              {
                ATerm p_109 = NULL,q_109 = NULL,r_109 = NULL,o_20 = NULL;
                r_109 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_109 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_109);
                p_109 = t;
                t = q_109;
                if(((s_107 != NULL) && (s_107 != t)))
                  _fail(t);
                else
                  s_107 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_109);
                o_20 = t;
                t = SSLsetAnnotations(o_20, p_109);
                return(t);
              }
              t = fetch_1_0(f_37, t);
              t = term_n_38;
              n_109 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_107)), term_o_93);
              o_109 = t;
              t = SSL_printnl(n_109, o_109);
              t = (ATerm) ATmakeAppl(sym__2, term_n_38, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_107)), term_o_93));
              t = l_135(t);
              t = term_f_39;
              l_109 = t;
              t = SSL_exit(l_109);
              LocalPopChoice(m_93);
            }
          else
            {
              t = l_93;
            }
        }
      }
  }
  f_108 = t;
  t = term_m_75;
  t = table_destroy_0_0(t);
  t = f_108;
  return(t);
}
static ATerm g_16 (ATerm k_61, ATerm l_61, ATerm m_61, ATerm t)
{
  ATerm e_110 = NULL;
  t = SSL_hashtable_put(m_61, k_61, l_61);
  e_110 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_110);
  return(t);
}
static ATerm h_16 (ATerm n_61, ATerm o_61, ATerm t)
{
  t = SSL_hashtable_get(o_61, n_61);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_61, ATerm t_61, ATerm t)
{
  ATerm f_110 = NULL;
  t = SSL_hashtable_create(s_61, t_61);
  f_110 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_110);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_110 = NULL,h_110 = NULL,l_110 = NULL,n_110 = NULL,o_110 = NULL;
  g_110 = t;
  t = term_p_93;
  n_110 = t;
  t = term_q_93;
  o_110 = t;
  t = g_110;
  t = new_hashtable_0_2(n_110, o_110, t);
  h_110 = t;
  t = g_110;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(g_110, h_110, l_110, t);
  t = g_110;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm q_110 = NULL;
  t = SSL_table_hashtable();
  q_110 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_110);
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_58, ATerm t)
{
  ATerm b_111 = NULL;
  t = table_hashtable_0_0(t);
  b_111 = t;
  {
    ATerm r_93 = t;
    int s_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_48 = NULL;
        t = b_111;
        if(match_cons(t, sym_Hashtable_1))
          {
            q_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_16(l_58, q_48, t);
        LocalPopChoice(s_93);
      }
    else
      {
        t = r_93;
        {
          ATerm a_49 = NULL;
          t = l_58;
          t = table_create_0_0(t);
          t = b_111;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_16(l_58, a_49, t);
        }
      }
  }
  return(t);
}
static ATerm i_16 (ATerm j_70, ATerm k_70, ATerm t)
{
  ATerm e_111 = NULL,f_111 = NULL;
  t = term_b_38;
  e_111 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_38, j_70, k_70);
  t = lookup_table_0_1(e_111, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_16(j_70, k_70, f_111, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_38, j_70, k_70);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm o_111 = NULL,p_111 = NULL;
  p_111 = t;
  t = SSL_explode_string(p_111);
  {
    ATerm t_93 = t;
    int u_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_112 (ATerm t);
        static ATerm y_112 (ATerm t)
        {
          ATerm t_112 = NULL,u_112 = NULL,x_112 = NULL;
          t_112 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_112 = ATgetFirst((ATermList) t);
              x_112 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm v_93 = t;
            int w_93 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_49 = NULL,m_49 = NULL,q_20 = NULL;
                t = SSLgetAnnotations(t_112);
                h_49 = t;
                t = x_112;
                t = y_112(t);
                m_49 = t;
                t = (ATerm) ATinsert(CheckATermList(m_49), u_112);
                q_20 = t;
                t = SSLsetAnnotations(q_20, h_49);
                LocalPopChoice(w_93);
              }
            else
              {
                t = v_93;
                {
                  ATerm e_50 = NULL,y_20 = NULL;
                  t = SSLgetAnnotations(t_112);
                  e_50 = t;
                  t = u_112;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, u_112);
                  y_20 = t;
                  t = SSLsetAnnotations(y_20, e_50);
                }
              }
          }
          return(t);
        }
        t = y_112(t);
        LocalPopChoice(u_93);
      }
    else
      {
        t = t_93;
        t = (ATerm) ATempty;
      }
  }
  o_111 = t;
  t = SSL_implode_string(o_111);
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
static ATerm j_16 (ATerm w_49, ATerm x_49, ATerm t)
{
  t = SSL_strcat(w_49, x_49);
  return(t);
}
ATerm init_strc_config_0_0 (ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL,h_113 = NULL,l_113 = NULL,o_113 = NULL,q_113 = NULL,r_113 = NULL,t_113 = NULL,v_113 = NULL,x_113 = NULL,z_113 = NULL,b_114 = NULL,e_114 = NULL,f_114 = NULL,g_114 = NULL,j_114 = NULL,l_114 = NULL,q_114 = NULL,r_114 = NULL,s_114 = NULL,w_114 = NULL,z_114 = NULL,m_115 = NULL,o_115 = NULL,q_115 = NULL,c_116 = NULL,d_116 = NULL,f_116 = NULL,g_116 = NULL,h_116 = NULL,k_116 = NULL,n_116 = NULL,o_116 = NULL,p_116 = NULL,t_116 = NULL;
  e_113 = t;
  t = term_p_71;
  p_116 = t;
  t = term_x_93;
  t_116 = t;
  t = term_y_93;
  t = i_16(p_116, t_116, t);
  t = term_c_38;
  n_116 = t;
  t = term_f_39;
  o_116 = t;
  t = term_z_93;
  t = i_16(n_116, o_116, t);
  t = term_b_44;
  h_116 = t;
  t = term_v_37;
  k_116 = t;
  t = term_a_94;
  t = i_16(h_116, k_116, t);
  t = term_f_44;
  f_116 = t;
  t = term_a_51;
  g_116 = t;
  t = term_b_94;
  t = i_16(f_116, g_116, t);
  t = term_n_63;
  c_116 = t;
  t = (ATerm) ATempty;
  d_116 = t;
  t = term_c_94;
  t = i_16(c_116, d_116, t);
  t = term_k_40;
  o_115 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_94), term_d_94);
  q_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_40, (ATerm) ATinsert(ATinsert(ATempty, term_e_94), term_d_94));
  t = i_16(o_115, q_115, t);
  t = term_f_94;
  t = xtc_find_path_0_0(t);
  x_113 = t;
  t = term_g_94;
  m_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_113, term_g_94);
  t = j_16(x_113, m_115, t);
  o_113 = t;
  t = term_f_94;
  t = xtc_find_path_0_0(t);
  v_113 = t;
  t = term_g_94;
  z_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_113, term_g_94);
  t = j_16(v_113, z_114, t);
  q_113 = t;
  t = term_h_94;
  t = xtc_find_path_0_0(t);
  t_113 = t;
  t = term_g_94;
  w_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_113, term_g_94);
  t = j_16(t_113, w_114, t);
  r_113 = t;
  t = term_k_39;
  r_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_113), term_n_63), q_113), term_n_63), o_113), term_n_63);
  s_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_113), term_n_63), q_113), term_n_63), o_113), term_n_63));
  t = i_16(r_114, s_114, t);
  t = term_f_94;
  t = xtc_find_path_0_0(t);
  l_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_94), l_113), term_w_83);
  q_114 = t;
  t = SSL_concat_strings(q_114);
  f_113 = t;
  t = term_h_94;
  t = xtc_find_path_0_0(t);
  h_113 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_94), h_113), term_w_83);
  l_114 = t;
  t = SSL_concat_strings(l_114);
  g_113 = t;
  t = term_a_39;
  g_114 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_94), term_o_94), g_113), term_m_94), term_l_94), term_k_94), f_113);
  j_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_94), term_o_94), g_113), term_m_94), term_l_94), term_k_94), f_113));
  t = i_16(g_114, j_114, t);
  t = term_o_39;
  e_114 = t;
  t = (ATerm) ATempty;
  f_114 = t;
  t = term_t_94;
  t = i_16(e_114, f_114, t);
  t = term_j_59;
  z_113 = t;
  t = term_u_94;
  b_114 = t;
  t = term_v_94;
  t = i_16(z_113, b_114, t);
  t = e_113;
  return(t);
}
static ATerm k_37 (ATerm t)
{
  ATerm b_118 = NULL,c_118 = NULL,f_118 = NULL;
  b_118 = t;
  t = term_b_38;
  c_118 = t;
  t = term_l_56;
  f_118 = t;
  t = term_y_94;
  t = d_16(c_118, f_118, t);
  t = debug_1_0(l_37, t);
  t = b_118;
  return(t);
}
static ATerm l_37 (ATerm t)
{
  t = term_c_95;
  return(t);
}
ATerm command_line_options_0_0 (ATerm t)
{
  t = init_strc_config_0_0(t);
  t = parse_options_3_0(strc_options_0_0, default_system_usage_0_0, default_system_about_0_0, t);
  {
    ATerm d_95 = t;
    int j_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_116 = NULL,z_116 = NULL,a_117 = NULL,b_117 = NULL,c_117 = NULL;
        t = term_b_38;
        b_117 = t;
        t = term_n_85;
        c_117 = t;
        t = term_l_95;
        t = d_16(b_117, c_117, t);
        t = term_p_95;
        t = xtc_find_0_0(t);
        y_116 = t;
        t = term_d_40;
        a_117 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_116, term_d_40);
        t = l_15(y_116, a_117, t);
        t = term_v_37;
        z_116 = t;
        t = SSL_exit(z_116);
        LocalPopChoice(j_95);
      }
    else
      {
        t = d_95;
      }
  }
  {
    ATerm t_95 = t;
    int u_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_117 = NULL,j_117 = NULL,k_117 = NULL;
        t = term_b_38;
        j_117 = t;
        t = term_v_85;
        k_117 = t;
        t = term_v_95;
        t = d_16(j_117, k_117, t);
        t = strc_version_0_0(t);
        t = term_v_37;
        h_117 = t;
        t = SSL_exit(h_117);
        LocalPopChoice(u_95);
      }
    else
      {
        t = t_95;
      }
  }
  {
    ATerm w_95 = t;
    int x_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_117 = NULL,t_117 = NULL,v_117 = NULL;
        r_117 = t;
        t = term_b_38;
        t_117 = t;
        t = term_l_56;
        v_117 = t;
        t = term_y_94;
        t = d_16(t_117, v_117, t);
        t = r_117;
        LocalPopChoice(x_95);
      }
    else
      {
        t = w_95;
        {
          ATerm w_117 = NULL,x_117 = NULL,y_117 = NULL;
          t = term_n_38;
          x_117 = t;
          t = (ATerm) ATinsert(ATempty, term_y_95);
          y_117 = t;
          t = SSL_printnl(x_117, y_117);
          t = term_f_39;
          w_117 = t;
          t = SSL_exit(w_117);
          t = (ATerm) ATinsert(ATempty, term_y_95);
        }
      }
  }
  t = if_verbose2_1_0(strc_version_0_0, t);
  t = if_verbose1_1_0(k_37, t);
  return(t);
}
static ATerm m_37 (ATerm t)
{
  t = if_verbose1_1_0(p_37, t);
  return(t);
}
static ATerm n_37 (ATerm t)
{
  t = xtc_temp_files_1_0(q_37, t);
  return(t);
}
static ATerm p_37 (ATerm t)
{
  ATerm h_118 = NULL,j_118 = NULL,k_118 = NULL;
  h_118 = t;
  t = term_n_38;
  j_118 = t;
  t = (ATerm) ATinsert(CheckATermList(h_118), term_z_95);
  k_118 = t;
  t = SSL_printnl(j_118, k_118);
  t = (ATerm) ATmakeAppl(sym__2, term_n_38, (ATerm) ATinsert(CheckATermList(h_118), term_z_95));
  return(t);
}
static ATerm q_37 (ATerm t)
{
  ATerm a_96 = t;
  int b_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_118 = NULL,s_118 = NULL,t_118 = NULL;
      t = term_b_38;
      s_118 = t;
      t = term_l_56;
      t_118 = t;
      t = term_y_94;
      t = d_16(s_118, t_118, t);
      p_118 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_118);
      LocalPopChoice(b_96);
    }
  else
    {
      t = a_96;
      t = term_v_61;
    }
  t = front_end_0_0(t);
  t = optimize_0_0(t);
  t = export_external_defs_0_0(t);
  t = back_end_0_0(t);
  t = c_compile_0_0(t);
  return(t);
}
static ATerm r_37 (ATerm t)
{
  ATerm v_118 = NULL,w_118 = NULL,x_118 = NULL;
  t = run_time_0_0(t);
  v_118 = t;
  t = term_n_38;
  w_118 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_96), v_118), term_e_96);
  x_118 = t;
  t = SSL_printnl(w_118, x_118);
  t = (ATerm) ATmakeAppl(sym__2, term_n_38, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_96), v_118), term_e_96));
  return(t);
}
ATerm strc_0_0 (ATerm t)
{
  ATerm l_96 = t;
  int m_96 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_118 = NULL;
      t = command_line_options_0_0(t);
      t = profile_p__2_0(m_37, n_37, t);
      t = if_verbose2_1_0(r_37, t);
      t = term_v_37;
      g_118 = t;
      t = SSL_exit(g_118);
      LocalPopChoice(m_96);
    }
  else
    {
      t = l_96;
      {
        ATerm y_118 = NULL,z_118 = NULL,a_119 = NULL,b_119 = NULL;
        t = run_time_0_0(t);
        y_118 = t;
        t = term_n_38;
        a_119 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_96), y_118), term_t_96);
        b_119 = t;
        t = SSL_printnl(a_119, b_119);
        t = term_f_39;
        z_118 = t;
        t = SSL_exit(z_118);
      }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = strc_0_0(t);
  return(t);
}
