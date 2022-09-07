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
            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% rtP.R
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.b
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Integrator_IC
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Integrator1_IC
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Constant_Value
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Constant_Value_bbzhu1cqle
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Constant1_Value
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

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
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 24;
            section.data(24)  = dumData; %prealloc

                    ;% rtB.ksfafj13mt
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.c5pepvzfj4
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.iac3y10qzs
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 5;

                    ;% rtB.aksfqyz32i
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 9;

                    ;% rtB.onco1xgcib
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 10;

                    ;% rtB.nuzsotb4ib
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 14;

                    ;% rtB.jr4q3pg0aq
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 18;

                    ;% rtB.o0vqxz2tcj
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 31;

                    ;% rtB.oy4oo2klou
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 32;

                    ;% rtB.j01xkpuvzm
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 33;

                    ;% rtB.lergc33bnh
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 34;

                    ;% rtB.dx10off45v
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 35;

                    ;% rtB.olhvnbqglz
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 36;

                    ;% rtB.divivoibxh
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 37;

                    ;% rtB.iyju2nutwb
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 38;

                    ;% rtB.j0lllcnryq
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 39;

                    ;% rtB.lbidkltark
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 40;

                    ;% rtB.i2d3plpei2
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 41;

                    ;% rtB.kmewq5ke3l
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 42;

                    ;% rtB.knqf5e30e5
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 43;

                    ;% rtB.cidkh4nob2
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 45;

                    ;% rtB.kq2r1vyna5
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 46;

                    ;% rtB.clrf4lofft
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 47;

                    ;% rtB.oxlvnfuzyk
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 48;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
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
        nTotSects     = 4;
        sectIdxOffset = 1;

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
            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtDW.pjdconnqvm
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.fiwdzkchpx
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.hndb4x0ghg
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.me5ominovk
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.as4qahfhif
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.n0o33n3yyv
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.pka1ubyjzx
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.jt1lrvtfij
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.fhxznkufax
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.mwa4o4jdno
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 19;
            section.data(19)  = dumData; %prealloc

                    ;% rtDW.gk3dbr3n2o
                    section.data(1).logicalSrcIdx = 10;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.nxm0q2xh1b
                    section.data(2).logicalSrcIdx = 11;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.jszlu0gruu
                    section.data(3).logicalSrcIdx = 12;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.mlbeu1lvta
                    section.data(4).logicalSrcIdx = 13;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.nftj3j1dob
                    section.data(5).logicalSrcIdx = 14;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.djzm003fix
                    section.data(6).logicalSrcIdx = 15;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.dsyf2uad12
                    section.data(7).logicalSrcIdx = 16;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.fbvz2vnuy2
                    section.data(8).logicalSrcIdx = 17;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.ergn1nqgp2
                    section.data(9).logicalSrcIdx = 18;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.b0hbltyvr0
                    section.data(10).logicalSrcIdx = 19;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.kimpigczyd.LoggedData
                    section.data(11).logicalSrcIdx = 20;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.i4xxfiquan.LoggedData
                    section.data(12).logicalSrcIdx = 21;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.d4ltmnn34c.AQHandles
                    section.data(13).logicalSrcIdx = 22;
                    section.data(13).dtTransOffset = 15;

                    ;% rtDW.bkjuqkykdd.LoggedData
                    section.data(14).logicalSrcIdx = 23;
                    section.data(14).dtTransOffset = 16;

                    ;% rtDW.jdlmr21ktv.LoggedData
                    section.data(15).logicalSrcIdx = 24;
                    section.data(15).dtTransOffset = 17;

                    ;% rtDW.g1z0etuw1l
                    section.data(16).logicalSrcIdx = 25;
                    section.data(16).dtTransOffset = 18;

                    ;% rtDW.jtcjvnfzea
                    section.data(17).logicalSrcIdx = 26;
                    section.data(17).dtTransOffset = 19;

                    ;% rtDW.huk2t00hf4
                    section.data(18).logicalSrcIdx = 27;
                    section.data(18).dtTransOffset = 20;

                    ;% rtDW.nazofhp4nz.LoggedData
                    section.data(19).logicalSrcIdx = 28;
                    section.data(19).dtTransOffset = 21;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.lqptaqynx5
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lso4t1iv02
                    section.data(2).logicalSrcIdx = 30;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.oey1b4fjv1
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lszkdt1jfp
                    section.data(2).logicalSrcIdx = 32;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
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


    targMap.checksum0 = 1723281642;
    targMap.checksum1 = 4049272105;
    targMap.checksum2 = 61010799;
    targMap.checksum3 = 3220399906;

