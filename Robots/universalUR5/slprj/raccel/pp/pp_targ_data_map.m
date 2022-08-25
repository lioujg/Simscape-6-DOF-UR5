  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 101;
      section.data(101)  = dumData; %prealloc
      
	  ;% rtP.FromWs_Time0
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.FromWs_Data0
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 240;
	
	  ;% rtP.FromWs_Time0_mwegrphi2o
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 1680;
	
	  ;% rtP.FromWs_Data0_bwp1rplazj
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 1840;
	
	  ;% rtP.DiscreteTimeIntegrator1_gainval
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 2800;
	
	  ;% rtP.DiscreteTimeIntegrator1_IC
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 2801;
	
	  ;% rtP.DiscreteTimeIntegrator3_gainval
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 2802;
	
	  ;% rtP.DiscreteTimeIntegrator3_IC
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 2803;
	
	  ;% rtP.DiscreteTimeIntegrator5_gainval
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 2804;
	
	  ;% rtP.DiscreteTimeIntegrator5_IC
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 2805;
	
	  ;% rtP.DiscreteTimeIntegrator_gainval
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 2806;
	
	  ;% rtP.DiscreteTimeIntegrator_IC
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 2807;
	
	  ;% rtP.DiscreteTimeIntegrator2_gainval
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 2808;
	
	  ;% rtP.DiscreteTimeIntegrator2_IC
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 2809;
	
	  ;% rtP.DiscreteTimeIntegrator4_gainval
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 2810;
	
	  ;% rtP.DiscreteTimeIntegrator4_IC
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 2811;
	
	  ;% rtP.Delay_InitialCondition
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 2812;
	
	  ;% rtP.DiscreteTimeIntegrator1_gainval_oqjikpnyqd
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 2813;
	
	  ;% rtP.DiscreteTimeIntegrator1_IC_cgmsovkfs2
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 2814;
	
	  ;% rtP.DiscreteTimeIntegrator3_gainval_jbyzgv51qt
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 2815;
	
	  ;% rtP.DiscreteTimeIntegrator3_IC_iotuu4egg5
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 2816;
	
	  ;% rtP.DiscreteTimeIntegrator5_gainval_mzosb4boys
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 2817;
	
	  ;% rtP.DiscreteTimeIntegrator5_IC_ndnh2qpnoo
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 2818;
	
	  ;% rtP.DiscreteTimeIntegrator_gainval_f1m0x5aaah
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 2819;
	
	  ;% rtP.DiscreteTimeIntegrator_IC_bany3i5ckr
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 2820;
	
	  ;% rtP.DiscreteTimeIntegrator2_gainval_m5icpofl44
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 2821;
	
	  ;% rtP.DiscreteTimeIntegrator2_IC_aj2g4mbo2m
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 2822;
	
	  ;% rtP.DiscreteTimeIntegrator4_gainval_gg2tu1ivfs
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 2823;
	
	  ;% rtP.DiscreteTimeIntegrator4_IC_dzcpbao03e
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 2824;
	
	  ;% rtP.Delay_InitialCondition_h32mlgftaf
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 2825;
	
	  ;% rtP.DiscreteTimeIntegrator_gainval_bqrugbnomn
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 2826;
	
	  ;% rtP.DiscreteTimeIntegrator_IC_aorocmjnnc
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 2827;
	
	  ;% rtP.Bx_Gain
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 2828;
	
	  ;% rtP.DiscreteTimeIntegrator2_gainval_pc04oat5qt
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 2829;
	
	  ;% rtP.DiscreteTimeIntegrator2_IC_h4ggyv4v21
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 2830;
	
	  ;% rtP.By_Gain
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 2831;
	
	  ;% rtP.DiscreteTimeIntegrator4_gainval_evjywzf5xi
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 2832;
	
	  ;% rtP.DiscreteTimeIntegrator4_IC_bu1dngwxgl
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 2833;
	
	  ;% rtP.Bz_Gain
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 2834;
	
	  ;% rtP.Kx_Gain
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 2835;
	
	  ;% rtP.Ky_Gain
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 2836;
	
	  ;% rtP.Kz_Gain
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 2837;
	
	  ;% rtP.Mx_Gain
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 2838;
	
	  ;% rtP.My_Gain
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 2839;
	
	  ;% rtP.Mz_Gain
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 2840;
	
	  ;% rtP.Bx_Gain_dheugbfk0n
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 2841;
	
	  ;% rtP.By_Gain_cppco4mjvy
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 2842;
	
	  ;% rtP.Bz_Gain_oi02ukprz0
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 2843;
	
	  ;% rtP.DiscreteTimeIntegrator1_gainval_ewt1b41uct
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 2844;
	
	  ;% rtP.DiscreteTimeIntegrator1_IC_mmztbewik4
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 2845;
	
	  ;% rtP.DiscreteTimeIntegrator3_gainval_enrtoduzvs
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 2846;
	
	  ;% rtP.DiscreteTimeIntegrator3_IC_bfgbvvrang
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 2847;
	
	  ;% rtP.DiscreteTimeIntegrator5_gainval_hcdzw0pxjl
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 2848;
	
	  ;% rtP.DiscreteTimeIntegrator5_IC_dwq35bos2m
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 2849;
	
	  ;% rtP.Kx_Gain_oord1bn5tk
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 2850;
	
	  ;% rtP.Ky_Gain_mrgiolqcuy
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 2851;
	
	  ;% rtP.Kz_Gain_k51k0wreuu
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 2852;
	
	  ;% rtP.Mx_Gain_lkbxzy4zcx
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 2853;
	
	  ;% rtP.My_Gain_hrp3lvoreh
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 2854;
	
	  ;% rtP.Mz_Gain_mdbt5ypr1k
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 2855;
	
	  ;% rtP.DiscreteTimeIntegrator_gainval_arhh4ywx41
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 2856;
	
	  ;% rtP.DiscreteTimeIntegrator_IC_ho0ck4cozt
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 2857;
	
	  ;% rtP.Bx_Gain_nwa0gs3mlk
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 2858;
	
	  ;% rtP.DiscreteTimeIntegrator2_gainval_mru0uvxpda
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 2859;
	
	  ;% rtP.DiscreteTimeIntegrator2_IC_ly22xqd5qq
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 2860;
	
	  ;% rtP.By_Gain_khzacun3xg
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 2861;
	
	  ;% rtP.DiscreteTimeIntegrator4_gainval_ka5z4lhm2t
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 2862;
	
	  ;% rtP.DiscreteTimeIntegrator4_IC_ghkub0qpne
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 2863;
	
	  ;% rtP.Bz_Gain_h3x1lv12d0
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 2864;
	
	  ;% rtP.Kx_Gain_jnwygpt15o
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 2865;
	
	  ;% rtP.Ky_Gain_oq5c1cqtk1
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 2866;
	
	  ;% rtP.Kz_Gain_p2xgpr45i5
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 2867;
	
	  ;% rtP.Mx_Gain_js3woskvp0
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 2868;
	
	  ;% rtP.My_Gain_hdpbuksf2w
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 2869;
	
	  ;% rtP.Mz_Gain_hxseeguaop
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 2870;
	
	  ;% rtP.Bx_Gain_n2c2zc5fut
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 2871;
	
	  ;% rtP.By_Gain_gzq4wqubv2
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 2872;
	
	  ;% rtP.Bz_Gain_e0agfihwsa
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 2873;
	
	  ;% rtP.DiscreteTimeIntegrator1_gainval_k0tywldiut
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 2874;
	
	  ;% rtP.DiscreteTimeIntegrator1_IC_lfcgd1m32e
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 2875;
	
	  ;% rtP.DiscreteTimeIntegrator3_gainval_e0sgkyvmac
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 2876;
	
	  ;% rtP.DiscreteTimeIntegrator3_IC_mepeuuspom
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 2877;
	
	  ;% rtP.DiscreteTimeIntegrator5_gainval_gpu3xgwyyp
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 2878;
	
	  ;% rtP.DiscreteTimeIntegrator5_IC_jzt432kxca
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 2879;
	
	  ;% rtP.Kx_Gain_cmgxch1a1l
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 2880;
	
	  ;% rtP.Ky_Gain_mqjlhklks4
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 2881;
	
	  ;% rtP.Kz_Gain_asqeevkcou
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 2882;
	
	  ;% rtP.Mx_Gain_awidn5sofk
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 2883;
	
	  ;% rtP.My_Gain_pjfuxtoldg
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 2884;
	
	  ;% rtP.Mz_Gain_cvkeec532r
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 2885;
	
	  ;% rtP.FromWs_Time0_dgntxkplur
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 2886;
	
	  ;% rtP.FromWs_Data0_n4fvl010iy
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 2894;
	
	  ;% rtP.FromWs_Time0_dzcgme01l0
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 2918;
	
	  ;% rtP.FromWs_Data0_gnhlpqyxpe
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 2928;
	
	  ;% rtP.FromWs_Time0_fpralrmcvh
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 2988;
	
	  ;% rtP.FromWs_Data0_bqye40vj0v
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 3006;
	
	  ;% rtP.Constant_Value
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 3114;
	
	  ;% rtP.Bias_Value
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 3117;
	
	  ;% rtP.Constant_Value_gzdzpzihxe
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 3120;
	
	  ;% rtP.Bias_Value_faygct0s2b
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 3126;
	
	  ;% rtP.Constant_Value_f1t4kl0x5v
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 3129;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 71;
      section.data(71)  = dumData; %prealloc
      
	  ;% rtB.e5ryewx4xp
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.ocwp35u3pk
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 6;
	
	  ;% rtB.jodlsffaav
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 12;
	
	  ;% rtB.cjjpsdh0ci
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 15;
	
	  ;% rtB.e1iv3qcjfw
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 16;
	
	  ;% rtB.f21sygsmjw
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 17;
	
	  ;% rtB.itk1tzd05y
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 18;
	
	  ;% rtB.cgdw5usgs2
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 22;
	
	  ;% rtB.fodbt3qoit
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 26;
	
	  ;% rtB.arfjjmxolk
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 30;
	
	  ;% rtB.hnth4pq521
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 34;
	
	  ;% rtB.lktiyc0abo
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 38;
	
	  ;% rtB.lqhmzc4iyx
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 42;
	
	  ;% rtB.gms5jrejo1
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 45;
	
	  ;% rtB.o3esw0pawl
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 46;
	
	  ;% rtB.g1ivuzn5or
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 47;
	
	  ;% rtB.ar4x41ndqa
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 48;
	
	  ;% rtB.golkvscg5k
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 49;
	
	  ;% rtB.gge2baxpst
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 50;
	
	  ;% rtB.pyqiljkwsr
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 54;
	
	  ;% rtB.hwb0fhnhyj
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 58;
	
	  ;% rtB.kay4eihbv3
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 62;
	
	  ;% rtB.n12tcfek0v
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 66;
	
	  ;% rtB.j3iozjgadg
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 70;
	
	  ;% rtB.pcwdl5jswd
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 74;
	
	  ;% rtB.kxvph4adkr
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 92;
	
	  ;% rtB.mz0hxgwqhl
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 132;
	
	  ;% rtB.f1wefakszv
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 133;
	
	  ;% rtB.l5krbabg4d
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 134;
	
	  ;% rtB.dgxu5zatl2
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 135;
	
	  ;% rtB.mbaykyotfu
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 136;
	
	  ;% rtB.etinqsqgwm
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 142;
	
	  ;% rtB.oybfikvjov
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 143;
	
	  ;% rtB.ezct1usiup
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 144;
	
	  ;% rtB.aqna2gz1ds
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 145;
	
	  ;% rtB.at5fedp10d
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 146;
	
	  ;% rtB.leiklejyk1
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 147;
	
	  ;% rtB.l5ehte0yu5
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 148;
	
	  ;% rtB.komus0gcso
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 149;
	
	  ;% rtB.axvx5onbcx
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 150;
	
	  ;% rtB.kayk4zho1z
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 151;
	
	  ;% rtB.o34qpbtn0y
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 152;
	
	  ;% rtB.fhugj1l3qe
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 153;
	
	  ;% rtB.cxs1ehjvbx
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 154;
	
	  ;% rtB.enhmwan3ns
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 155;
	
	  ;% rtB.moduzw1lx4
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 156;
	
	  ;% rtB.n44n3mb43k
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 157;
	
	  ;% rtB.kdz4sa51a2
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 158;
	
	  ;% rtB.fuszcwwkvv
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 159;
	
	  ;% rtB.ijkfpvfmzk
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 160;
	
	  ;% rtB.jddyf4dq55
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 161;
	
	  ;% rtB.g5i5pwgazj
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 162;
	
	  ;% rtB.ad2m20gzqt
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 163;
	
	  ;% rtB.ky052i5er3
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 164;
	
	  ;% rtB.flst3qrajz
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 165;
	
	  ;% rtB.en5e3b0kmw
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 166;
	
	  ;% rtB.ajdgrxcuuj
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 167;
	
	  ;% rtB.lc0n30aw03
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 168;
	
	  ;% rtB.nlljfedtl4
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 169;
	
	  ;% rtB.ha4lwepn1f
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 175;
	
	  ;% rtB.a53vj1gwki
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 181;
	
	  ;% rtB.n5plh5my25
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 187;
	
	  ;% rtB.ka2qvllgio
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 193;
	
	  ;% rtB.emkev14wx5
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 202;
	
	  ;% rtB.dnumjapkrr
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 208;
	
	  ;% rtB.n1x3q5r3km
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 224;
	
	  ;% rtB.bqwy3enhc1
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 240;
	
	  ;% rtB.d2gmderclu
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 256;
	
	  ;% rtB.anfyf3f0se
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 262;
	
	  ;% rtB.oqf350egiy
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 358;
	
	  ;% rtB.lw2nui0kqj
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 367;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.fcodrholju.jeolgcmssj
	  section.data(1).logicalSrcIdx = 71;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.g25aonyhee.alhmufu0yv
	  section.data(1).logicalSrcIdx = 72;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.flhn5odxwk.jeolgcmssj
	  section.data(1).logicalSrcIdx = 73;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.e12xzvaqlra.alhmufu0yv
	  section.data(1).logicalSrcIdx = 74;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 14;
    sectIdxOffset = 5;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 62;
      section.data(62)  = dumData; %prealloc
      
	  ;% rtDW.meaqqr1ua3
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.ieis3wdkcc
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.nsbswzebrn
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.ftmzzvbzax
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.lajwkf5yel
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.kf54lrgsgh
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.jb4linf121
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.jwb0edvt43
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 12;
	
	  ;% rtDW.j4ijkjeaiu
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 13;
	
	  ;% rtDW.ipny03bssk
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 14;
	
	  ;% rtDW.lcdwdtjwnt
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 15;
	
	  ;% rtDW.c1tuvnswoj
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 16;
	
	  ;% rtDW.bmfwcfe3zy
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 17;
	
	  ;% rtDW.lccx42ungl
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 18;
	
	  ;% rtDW.csttssg2jj
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 19;
	
	  ;% rtDW.bafnhq4yd3
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 20;
	
	  ;% rtDW.ls50tk5yor
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 21;
	
	  ;% rtDW.l4isjnnapb
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 22;
	
	  ;% rtDW.cm2ish3fp4
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 23;
	
	  ;% rtDW.lwjbyb5hax
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 24;
	
	  ;% rtDW.iyyt53kmyv
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 25;
	
	  ;% rtDW.domwprwtea
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 26;
	
	  ;% rtDW.hw4jmko5ut
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 27;
	
	  ;% rtDW.dlylyzqh44
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 28;
	
	  ;% rtDW.d1vruvafzv
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 29;
	
	  ;% rtDW.g2tsjufkz5
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 30;
	
	  ;% rtDW.p4axc0cn0o
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 36;
	
	  ;% rtDW.jwqmhs0s0n
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 37;
	
	  ;% rtDW.pabqpgk5jq
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 38;
	
	  ;% rtDW.enkp2q4jgz
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 39;
	
	  ;% rtDW.ondxfnv25y
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 40;
	
	  ;% rtDW.mcdurxpqfs
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 41;
	
	  ;% rtDW.dnzas3pxcw
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 42;
	
	  ;% rtDW.oghejnwob3
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 43;
	
	  ;% rtDW.l1vruekg2n
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 44;
	
	  ;% rtDW.la42o3xgh0
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 45;
	
	  ;% rtDW.mbg4rkv5jx
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 46;
	
	  ;% rtDW.cvogulxpog
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 47;
	
	  ;% rtDW.jxqq0kd055
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 48;
	
	  ;% rtDW.d1ymyg1puf
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 49;
	
	  ;% rtDW.pniui21m2m
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 50;
	
	  ;% rtDW.hom4bzatts
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 51;
	
	  ;% rtDW.jx1pyei5iz
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 52;
	
	  ;% rtDW.goe0ybllxx
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 53;
	
	  ;% rtDW.f32pecj5j3
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 54;
	
	  ;% rtDW.fbdsqnrbvi
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 55;
	
	  ;% rtDW.gqp5ng5ipd
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 56;
	
	  ;% rtDW.ikqao11oir
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 57;
	
	  ;% rtDW.mhqnkldn3f
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 58;
	
	  ;% rtDW.d0njjfa3vf
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 59;
	
	  ;% rtDW.hocn5gpqnf
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 60;
	
	  ;% rtDW.lpz0yfj0uv
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 61;
	
	  ;% rtDW.obx514d20e
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 62;
	
	  ;% rtDW.fjgxwmabrc
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 68;
	
	  ;% rtDW.oc1xjxz5rw
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 71;
	
	  ;% rtDW.enz403h0md
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 72;
	
	  ;% rtDW.lvvl3bpreb
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 232;
	
	  ;% rtDW.ocqk3jofvr
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 248;
	
	  ;% rtDW.kso5hmoa3x
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 264;
	
	  ;% rtDW.pvpfr5em5t
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 273;
	
	  ;% rtDW.of0mgcawwf
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 276;
	
	  ;% rtDW.bth2mqorax
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 277;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 37;
      section.data(37)  = dumData; %prealloc
      
	  ;% rtDW.factggsf10.TimePtr
	  section.data(1).logicalSrcIdx = 62;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.hir5izsswk.TimePtr
	  section.data(2).logicalSrcIdx = 63;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.ppxvh3soys
	  section.data(3).logicalSrcIdx = 64;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.pwa0n2fnbt
	  section.data(4).logicalSrcIdx = 65;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.a5nq0aeena
	  section.data(5).logicalSrcIdx = 66;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.f3zl1211hn
	  section.data(6).logicalSrcIdx = 67;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.npaociskuu
	  section.data(7).logicalSrcIdx = 68;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.jp125spiju
	  section.data(8).logicalSrcIdx = 69;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.lcth0eskrc
	  section.data(9).logicalSrcIdx = 70;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.f4dhncxa4g
	  section.data(10).logicalSrcIdx = 71;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.oabwfal33d
	  section.data(11).logicalSrcIdx = 72;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.lpdqo4n2bg
	  section.data(12).logicalSrcIdx = 73;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.odp05jnrxo.LoggedData
	  section.data(13).logicalSrcIdx = 74;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.lqcwuodejz.LoggedData
	  section.data(14).logicalSrcIdx = 75;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.izvboaabvt.LoggedData
	  section.data(15).logicalSrcIdx = 76;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.ckhvlill0z.LoggedData
	  section.data(16).logicalSrcIdx = 77;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.d1vdfetdkf.LoggedData
	  section.data(17).logicalSrcIdx = 78;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.idvsek3cff.LoggedData
	  section.data(18).logicalSrcIdx = 79;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.ovuzirfyo4.LoggedData
	  section.data(19).logicalSrcIdx = 80;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtDW.hydekeb4jx.LoggedData
	  section.data(20).logicalSrcIdx = 81;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtDW.etxlw4dum2.LoggedData
	  section.data(21).logicalSrcIdx = 82;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtDW.flmct1jknr.LoggedData
	  section.data(22).logicalSrcIdx = 83;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtDW.c1rfz10d3e.LoggedData
	  section.data(23).logicalSrcIdx = 84;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtDW.b0hh4aryn5.LoggedData
	  section.data(24).logicalSrcIdx = 85;
	  section.data(24).dtTransOffset = 25;
	
	  ;% rtDW.gkzxlfkqk2.LoggedData
	  section.data(25).logicalSrcIdx = 86;
	  section.data(25).dtTransOffset = 27;
	
	  ;% rtDW.duq1e514gn.LoggedData
	  section.data(26).logicalSrcIdx = 87;
	  section.data(26).dtTransOffset = 29;
	
	  ;% rtDW.mwua52dad4.LoggedData
	  section.data(27).logicalSrcIdx = 88;
	  section.data(27).dtTransOffset = 31;
	
	  ;% rtDW.myyziyxqcr.LoggedData
	  section.data(28).logicalSrcIdx = 89;
	  section.data(28).dtTransOffset = 33;
	
	  ;% rtDW.db43vuu0b2.LoggedData
	  section.data(29).logicalSrcIdx = 90;
	  section.data(29).dtTransOffset = 34;
	
	  ;% rtDW.ctiklbjevu.LoggedData
	  section.data(30).logicalSrcIdx = 91;
	  section.data(30).dtTransOffset = 35;
	
	  ;% rtDW.myntgnrjzd.LoggedData
	  section.data(31).logicalSrcIdx = 92;
	  section.data(31).dtTransOffset = 36;
	
	  ;% rtDW.nwspghshwe.LoggedData
	  section.data(32).logicalSrcIdx = 93;
	  section.data(32).dtTransOffset = 37;
	
	  ;% rtDW.krkz03kcrk.LoggedData
	  section.data(33).logicalSrcIdx = 94;
	  section.data(33).dtTransOffset = 38;
	
	  ;% rtDW.gjmmdatpmk.TimePtr
	  section.data(34).logicalSrcIdx = 95;
	  section.data(34).dtTransOffset = 39;
	
	  ;% rtDW.j2ilej2aih.TimePtr
	  section.data(35).logicalSrcIdx = 96;
	  section.data(35).dtTransOffset = 40;
	
	  ;% rtDW.mx04nd152z.TimePtr
	  section.data(36).logicalSrcIdx = 97;
	  section.data(36).dtTransOffset = 41;
	
	  ;% rtDW.p0uyfooi5b.LoggedData
	  section.data(37).logicalSrcIdx = 98;
	  section.data(37).dtTransOffset = 42;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 17;
      section.data(17)  = dumData; %prealloc
      
	  ;% rtDW.cbdib2svjf
	  section.data(1).logicalSrcIdx = 99;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.isi3qqu4qf
	  section.data(2).logicalSrcIdx = 100;
	  section.data(2).dtTransOffset = 119;
	
	  ;% rtDW.gfnv1aupmz.PrevIndex
	  section.data(3).logicalSrcIdx = 101;
	  section.data(3).dtTransOffset = 120;
	
	  ;% rtDW.d0jyhdhshq
	  section.data(4).logicalSrcIdx = 102;
	  section.data(4).dtTransOffset = 121;
	
	  ;% rtDW.g50wjgttgc
	  section.data(5).logicalSrcIdx = 103;
	  section.data(5).dtTransOffset = 200;
	
	  ;% rtDW.fq2wjlgbnm.PrevIndex
	  section.data(6).logicalSrcIdx = 104;
	  section.data(6).dtTransOffset = 201;
	
	  ;% rtDW.fkrpan2ou1
	  section.data(7).logicalSrcIdx = 105;
	  section.data(7).dtTransOffset = 202;
	
	  ;% rtDW.ce5lqmurvv
	  section.data(8).logicalSrcIdx = 106;
	  section.data(8).dtTransOffset = 203;
	
	  ;% rtDW.hk4x31s2wo
	  section.data(9).logicalSrcIdx = 107;
	  section.data(9).dtTransOffset = 204;
	
	  ;% rtDW.pgqbeye23i
	  section.data(10).logicalSrcIdx = 108;
	  section.data(10).dtTransOffset = 207;
	
	  ;% rtDW.hdj2esbagy.PrevIndex
	  section.data(11).logicalSrcIdx = 109;
	  section.data(11).dtTransOffset = 208;
	
	  ;% rtDW.iwgjwpwckw
	  section.data(12).logicalSrcIdx = 110;
	  section.data(12).dtTransOffset = 209;
	
	  ;% rtDW.apqtcucrxr
	  section.data(13).logicalSrcIdx = 111;
	  section.data(13).dtTransOffset = 213;
	
	  ;% rtDW.cg2bvqjvra.PrevIndex
	  section.data(14).logicalSrcIdx = 112;
	  section.data(14).dtTransOffset = 214;
	
	  ;% rtDW.nwblnammfm
	  section.data(15).logicalSrcIdx = 113;
	  section.data(15).dtTransOffset = 215;
	
	  ;% rtDW.ed5n0ctaot
	  section.data(16).logicalSrcIdx = 114;
	  section.data(16).dtTransOffset = 223;
	
	  ;% rtDW.pxh3rjh5u4.PrevIndex
	  section.data(17).logicalSrcIdx = 115;
	  section.data(17).dtTransOffset = 224;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.nkznjpj2u5
	  section.data(1).logicalSrcIdx = 116;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.aza3hrpxtf
	  section.data(2).logicalSrcIdx = 117;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.afqg540hpl
	  section.data(3).logicalSrcIdx = 118;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.poimg20uht
	  section.data(4).logicalSrcIdx = 119;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.fcodrholju.eyc0ugbpip
	  section.data(1).logicalSrcIdx = 120;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.g25aonyhee.ajal1iwi1z
	  section.data(1).logicalSrcIdx = 121;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.g25aonyhee.aqlkdng0y4
	  section.data(1).logicalSrcIdx = 122;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.g25aonyhee.lhjucr5zrp
	  section.data(1).logicalSrcIdx = 123;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.g25aonyhee.kuoviqlwy5
	  section.data(2).logicalSrcIdx = 124;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.g25aonyhee.h2pnsauhxt
	  section.data(3).logicalSrcIdx = 125;
	  section.data(3).dtTransOffset = 3;
	
	  ;% rtDW.g25aonyhee.h04ewpy4nc
	  section.data(4).logicalSrcIdx = 126;
	  section.data(4).dtTransOffset = 628;
	
	  ;% rtDW.g25aonyhee.mjpcafci0c
	  section.data(5).logicalSrcIdx = 127;
	  section.data(5).dtTransOffset = 629;
	
	  ;% rtDW.g25aonyhee.j1qqjbtj53
	  section.data(6).logicalSrcIdx = 128;
	  section.data(6).dtTransOffset = 630;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% rtDW.g25aonyhee.kikz1keduf
	  section.data(1).logicalSrcIdx = 129;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.g25aonyhee.ixcfunz3ep
	  section.data(2).logicalSrcIdx = 130;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.g25aonyhee.an5olz5vaz
	  section.data(3).logicalSrcIdx = 131;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.g25aonyhee.gc2t2mxxcd
	  section.data(4).logicalSrcIdx = 132;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.g25aonyhee.cbi103hnwr
	  section.data(5).logicalSrcIdx = 133;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.g25aonyhee.jfjlhhuyaj
	  section.data(6).logicalSrcIdx = 134;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.g25aonyhee.ag2pn0fjxu
	  section.data(7).logicalSrcIdx = 135;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.g25aonyhee.ksjivjyfnw
	  section.data(8).logicalSrcIdx = 136;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.flhn5odxwk.eyc0ugbpip
	  section.data(1).logicalSrcIdx = 137;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.e12xzvaqlra.ajal1iwi1z
	  section.data(1).logicalSrcIdx = 138;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.e12xzvaqlra.aqlkdng0y4
	  section.data(1).logicalSrcIdx = 139;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtDW.e12xzvaqlra.lhjucr5zrp
	  section.data(1).logicalSrcIdx = 140;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.e12xzvaqlra.kuoviqlwy5
	  section.data(2).logicalSrcIdx = 141;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.e12xzvaqlra.h2pnsauhxt
	  section.data(3).logicalSrcIdx = 142;
	  section.data(3).dtTransOffset = 3;
	
	  ;% rtDW.e12xzvaqlra.h04ewpy4nc
	  section.data(4).logicalSrcIdx = 143;
	  section.data(4).dtTransOffset = 628;
	
	  ;% rtDW.e12xzvaqlra.mjpcafci0c
	  section.data(5).logicalSrcIdx = 144;
	  section.data(5).dtTransOffset = 629;
	
	  ;% rtDW.e12xzvaqlra.j1qqjbtj53
	  section.data(6).logicalSrcIdx = 145;
	  section.data(6).dtTransOffset = 630;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% rtDW.e12xzvaqlra.kikz1keduf
	  section.data(1).logicalSrcIdx = 146;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.e12xzvaqlra.ixcfunz3ep
	  section.data(2).logicalSrcIdx = 147;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.e12xzvaqlra.an5olz5vaz
	  section.data(3).logicalSrcIdx = 148;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.e12xzvaqlra.gc2t2mxxcd
	  section.data(4).logicalSrcIdx = 149;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.e12xzvaqlra.cbi103hnwr
	  section.data(5).logicalSrcIdx = 150;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.e12xzvaqlra.jfjlhhuyaj
	  section.data(6).logicalSrcIdx = 151;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.e12xzvaqlra.ag2pn0fjxu
	  section.data(7).logicalSrcIdx = 152;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.e12xzvaqlra.ksjivjyfnw
	  section.data(8).logicalSrcIdx = 153;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3922201157;
  targMap.checksum1 = 2136595032;
  targMap.checksum2 = 2309620053;
  targMap.checksum3 = 746144858;

