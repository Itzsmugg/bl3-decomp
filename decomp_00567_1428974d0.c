// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1428974d0 HeapSortInternal<FDelegateDispatchDetails,FIdentityFunctor,TDereferenceWrapper<FDelegateDispatchDetails,`UPlayerInput::ProcessInputStack'::`2'::FDelegateDispatchDetailsSorter>_> body=1766 status=ok
// SIG undefined HeapSortInternal<FDelegateDispatchDetails,FIdentityFunctor,TDereferenceWrapper<FDelegateDispatchDetails,`UPlayerInput::ProcessInputStack'::`2'::FDelegateDispatchDetailsSorter>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     HeapSortInternal<FDelegateDispatchDetails,FIdentityFunctor,TDereferenceWrapper<FDelegateDispatchDetails,_UPlayerInput::ProcessInputStack_::_2_::FDelegateDispatchDetailsSorter>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined8 *puVar32;
  uint *puVar33;
  uint *puVar34;
  bool bVar35;
  
  iVar28 = (param_2 + -2) / 2;
  if (-1 < iVar28) {
    iVar29 = iVar28 * 2 + 1;
    iVar2 = iVar29;
    iVar31 = iVar28;
joined_r0x000142897519:
    do {
      if (iVar29 < param_2) {
        iVar29 = iVar28 * 2;
        iVar30 = iVar29 + 1;
        if (iVar29 + 2 < param_2) {
          bVar35 = *(uint *)(param_1 + ((longlong)iVar29 + 2) * 0x19) <
                   *(uint *)(param_1 + (longlong)iVar30 * 0x19);
          if (*(uint *)(param_1 + ((longlong)iVar29 + 2) * 0x19) ==
              *(uint *)(param_1 + (longlong)iVar30 * 0x19)) {
            bVar35 = *(uint *)(((longlong)iVar29 + 2) * 200 + 4 + (longlong)param_1) <
                     *(uint *)((longlong)iVar30 * 200 + 4 + (longlong)param_1);
          }
          if (bVar35) {
            iVar30 = iVar29;
          }
          iVar30 = iVar30 + 1;
        }
        puVar34 = (uint *)(param_1 + (longlong)iVar28 * 0x19);
        puVar33 = (uint *)(param_1 + (longlong)iVar30 * 0x19);
        bVar35 = *puVar34 < *puVar33;
        if (*puVar34 == *puVar33) {
          bVar35 = puVar34[1] < puVar33[1];
        }
        if (bVar35) {
          if (puVar34 != puVar33) {
            uVar3 = *(undefined8 *)puVar34;
            uVar4 = *(undefined8 *)(puVar34 + 2);
            uVar1 = *(undefined8 *)(puVar34 + 0x30);
            uVar5 = *(undefined8 *)(puVar34 + 4);
            uVar6 = *(undefined8 *)(puVar34 + 6);
            uVar7 = *(undefined8 *)(puVar34 + 8);
            uVar8 = *(undefined8 *)(puVar34 + 10);
            uVar9 = *(undefined8 *)(puVar34 + 0xc);
            uVar10 = *(undefined8 *)(puVar34 + 0xe);
            uVar11 = *(undefined8 *)(puVar34 + 0x10);
            uVar12 = *(undefined8 *)(puVar34 + 0x12);
            uVar13 = *(undefined8 *)(puVar34 + 0x14);
            uVar14 = *(undefined8 *)(puVar34 + 0x16);
            uVar15 = *(undefined8 *)(puVar34 + 0x18);
            uVar16 = *(undefined8 *)(puVar34 + 0x1a);
            uVar17 = *(undefined8 *)(puVar34 + 0x1c);
            uVar18 = *(undefined8 *)(puVar34 + 0x1e);
            uVar19 = *(undefined8 *)(puVar34 + 0x20);
            uVar20 = *(undefined8 *)(puVar34 + 0x22);
            uVar21 = *(undefined8 *)(puVar34 + 0x24);
            uVar22 = *(undefined8 *)(puVar34 + 0x26);
            uVar23 = *(undefined8 *)(puVar34 + 0x28);
            uVar24 = *(undefined8 *)(puVar34 + 0x2a);
            uVar25 = *(undefined8 *)(puVar34 + 0x2c);
            uVar26 = *(undefined8 *)(puVar34 + 0x2e);
            uVar27 = *(undefined8 *)(puVar33 + 2);
            *(undefined8 *)puVar34 = *(undefined8 *)puVar33;
            *(undefined8 *)(puVar34 + 2) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 6);
            *(undefined8 *)(puVar34 + 4) = *(undefined8 *)(puVar33 + 4);
            *(undefined8 *)(puVar34 + 6) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 10);
            *(undefined8 *)(puVar34 + 8) = *(undefined8 *)(puVar33 + 8);
            *(undefined8 *)(puVar34 + 10) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0xe);
            *(undefined8 *)(puVar34 + 0xc) = *(undefined8 *)(puVar33 + 0xc);
            *(undefined8 *)(puVar34 + 0xe) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x12);
            *(undefined8 *)(puVar34 + 0x10) = *(undefined8 *)(puVar33 + 0x10);
            *(undefined8 *)(puVar34 + 0x12) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x16);
            *(undefined8 *)(puVar34 + 0x14) = *(undefined8 *)(puVar33 + 0x14);
            *(undefined8 *)(puVar34 + 0x16) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x1a);
            *(undefined8 *)(puVar34 + 0x18) = *(undefined8 *)(puVar33 + 0x18);
            *(undefined8 *)(puVar34 + 0x1a) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x1e);
            *(undefined8 *)(puVar34 + 0x1c) = *(undefined8 *)(puVar33 + 0x1c);
            *(undefined8 *)(puVar34 + 0x1e) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x22);
            *(undefined8 *)(puVar34 + 0x20) = *(undefined8 *)(puVar33 + 0x20);
            *(undefined8 *)(puVar34 + 0x22) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x26);
            *(undefined8 *)(puVar34 + 0x24) = *(undefined8 *)(puVar33 + 0x24);
            *(undefined8 *)(puVar34 + 0x26) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x2a);
            *(undefined8 *)(puVar34 + 0x28) = *(undefined8 *)(puVar33 + 0x28);
            *(undefined8 *)(puVar34 + 0x2a) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x2e);
            *(undefined8 *)(puVar34 + 0x2c) = *(undefined8 *)(puVar33 + 0x2c);
            *(undefined8 *)(puVar34 + 0x2e) = uVar27;
            *(undefined8 *)(puVar34 + 0x30) = *(undefined8 *)(puVar33 + 0x30);
            *(undefined8 *)puVar33 = uVar3;
            *(undefined8 *)(puVar33 + 2) = uVar4;
            *(undefined8 *)(puVar33 + 4) = uVar5;
            *(undefined8 *)(puVar33 + 6) = uVar6;
            *(undefined8 *)(puVar33 + 8) = uVar7;
            *(undefined8 *)(puVar33 + 10) = uVar8;
            *(undefined8 *)(puVar33 + 0xc) = uVar9;
            *(undefined8 *)(puVar33 + 0xe) = uVar10;
            *(undefined8 *)(puVar33 + 0x10) = uVar11;
            *(undefined8 *)(puVar33 + 0x12) = uVar12;
            *(undefined8 *)(puVar33 + 0x14) = uVar13;
            *(undefined8 *)(puVar33 + 0x16) = uVar14;
            *(undefined8 *)(puVar33 + 0x18) = uVar15;
            *(undefined8 *)(puVar33 + 0x1a) = uVar16;
            *(undefined8 *)(puVar33 + 0x1c) = uVar17;
            *(undefined8 *)(puVar33 + 0x1e) = uVar18;
            *(undefined8 *)(puVar33 + 0x20) = uVar19;
            *(undefined8 *)(puVar33 + 0x22) = uVar20;
            *(undefined8 *)(puVar33 + 0x24) = uVar21;
            *(undefined8 *)(puVar33 + 0x26) = uVar22;
            *(undefined8 *)(puVar33 + 0x28) = uVar23;
            *(undefined8 *)(puVar33 + 0x2a) = uVar24;
            *(undefined8 *)(puVar33 + 0x2c) = uVar25;
            *(undefined8 *)(puVar33 + 0x2e) = uVar26;
            *(undefined8 *)(puVar33 + 0x30) = uVar1;
          }
          iVar29 = iVar30 * 2 + 1;
          iVar28 = iVar30;
          goto joined_r0x000142897519;
        }
      }
      iVar29 = iVar2 + -2;
      iVar28 = iVar31 + -1;
      iVar2 = iVar29;
      iVar31 = iVar28;
    } while (-1 < iVar28);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar32 = param_1 + (longlong)param_2 * 0x19;
    do {
      if (param_1 != puVar32) {
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar1 = param_1[0x18];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        uVar11 = param_1[8];
        uVar12 = param_1[9];
        uVar13 = param_1[10];
        uVar14 = param_1[0xb];
        uVar15 = param_1[0xc];
        uVar16 = param_1[0xd];
        uVar17 = param_1[0xe];
        uVar18 = param_1[0xf];
        uVar19 = param_1[0x10];
        uVar20 = param_1[0x11];
        uVar21 = param_1[0x12];
        uVar22 = param_1[0x13];
        uVar23 = param_1[0x14];
        uVar24 = param_1[0x15];
        uVar25 = param_1[0x16];
        uVar26 = param_1[0x17];
        uVar27 = puVar32[1];
        *param_1 = *puVar32;
        param_1[1] = uVar27;
        uVar27 = puVar32[3];
        param_1[2] = puVar32[2];
        param_1[3] = uVar27;
        uVar27 = puVar32[5];
        param_1[4] = puVar32[4];
        param_1[5] = uVar27;
        uVar27 = puVar32[7];
        param_1[6] = puVar32[6];
        param_1[7] = uVar27;
        uVar27 = puVar32[9];
        param_1[8] = puVar32[8];
        param_1[9] = uVar27;
        uVar27 = puVar32[0xb];
        param_1[10] = puVar32[10];
        param_1[0xb] = uVar27;
        uVar27 = puVar32[0xd];
        param_1[0xc] = puVar32[0xc];
        param_1[0xd] = uVar27;
        uVar27 = puVar32[0xf];
        param_1[0xe] = puVar32[0xe];
        param_1[0xf] = uVar27;
        uVar27 = puVar32[0x11];
        param_1[0x10] = puVar32[0x10];
        param_1[0x11] = uVar27;
        uVar27 = puVar32[0x13];
        param_1[0x12] = puVar32[0x12];
        param_1[0x13] = uVar27;
        uVar27 = puVar32[0x15];
        param_1[0x14] = puVar32[0x14];
        param_1[0x15] = uVar27;
        uVar27 = puVar32[0x17];
        param_1[0x16] = puVar32[0x16];
        param_1[0x17] = uVar27;
        param_1[0x18] = puVar32[0x18];
        *puVar32 = uVar3;
        puVar32[1] = uVar4;
        puVar32[2] = uVar5;
        puVar32[3] = uVar6;
        puVar32[4] = uVar7;
        puVar32[5] = uVar8;
        puVar32[6] = uVar9;
        puVar32[7] = uVar10;
        puVar32[8] = uVar11;
        puVar32[9] = uVar12;
        puVar32[10] = uVar13;
        puVar32[0xb] = uVar14;
        puVar32[0xc] = uVar15;
        puVar32[0xd] = uVar16;
        puVar32[0xe] = uVar17;
        puVar32[0xf] = uVar18;
        puVar32[0x10] = uVar19;
        puVar32[0x11] = uVar20;
        puVar32[0x12] = uVar21;
        puVar32[0x13] = uVar22;
        puVar32[0x14] = uVar23;
        puVar32[0x15] = uVar24;
        puVar32[0x16] = uVar25;
        puVar32[0x17] = uVar26;
        puVar32[0x18] = uVar1;
      }
      iVar28 = 0;
      if (1 < param_2) {
        do {
          iVar2 = iVar28 * 2;
          iVar29 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            bVar35 = *(uint *)(param_1 + ((longlong)iVar2 + 2) * 0x19) <
                     *(uint *)(param_1 + (longlong)iVar29 * 0x19);
            if (*(uint *)(param_1 + ((longlong)iVar2 + 2) * 0x19) ==
                *(uint *)(param_1 + (longlong)iVar29 * 0x19)) {
              bVar35 = *(uint *)(((longlong)iVar2 + 2) * 200 + 4 + (longlong)param_1) <
                       *(uint *)((longlong)iVar29 * 200 + 4 + (longlong)param_1);
            }
            if (bVar35) {
              iVar29 = iVar2;
            }
            iVar29 = iVar29 + 1;
          }
          puVar34 = (uint *)(param_1 + (longlong)iVar28 * 0x19);
          puVar33 = (uint *)(param_1 + (longlong)iVar29 * 0x19);
          bVar35 = *puVar34 < *puVar33;
          if (*puVar34 == *puVar33) {
            bVar35 = puVar34[1] < puVar33[1];
          }
          if (!bVar35) break;
          if (puVar34 != puVar33) {
            uVar3 = *(undefined8 *)puVar34;
            uVar4 = *(undefined8 *)(puVar34 + 2);
            uVar1 = *(undefined8 *)(puVar34 + 0x30);
            uVar5 = *(undefined8 *)(puVar34 + 4);
            uVar6 = *(undefined8 *)(puVar34 + 6);
            uVar7 = *(undefined8 *)(puVar34 + 8);
            uVar8 = *(undefined8 *)(puVar34 + 10);
            uVar9 = *(undefined8 *)(puVar34 + 0xc);
            uVar10 = *(undefined8 *)(puVar34 + 0xe);
            uVar11 = *(undefined8 *)(puVar34 + 0x10);
            uVar12 = *(undefined8 *)(puVar34 + 0x12);
            uVar13 = *(undefined8 *)(puVar34 + 0x14);
            uVar14 = *(undefined8 *)(puVar34 + 0x16);
            uVar15 = *(undefined8 *)(puVar34 + 0x18);
            uVar16 = *(undefined8 *)(puVar34 + 0x1a);
            uVar17 = *(undefined8 *)(puVar34 + 0x1c);
            uVar18 = *(undefined8 *)(puVar34 + 0x1e);
            uVar19 = *(undefined8 *)(puVar34 + 0x20);
            uVar20 = *(undefined8 *)(puVar34 + 0x22);
            uVar21 = *(undefined8 *)(puVar34 + 0x24);
            uVar22 = *(undefined8 *)(puVar34 + 0x26);
            uVar23 = *(undefined8 *)(puVar34 + 0x28);
            uVar24 = *(undefined8 *)(puVar34 + 0x2a);
            uVar25 = *(undefined8 *)(puVar34 + 0x2c);
            uVar26 = *(undefined8 *)(puVar34 + 0x2e);
            uVar27 = *(undefined8 *)(puVar33 + 2);
            *(undefined8 *)puVar34 = *(undefined8 *)puVar33;
            *(undefined8 *)(puVar34 + 2) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 6);
            *(undefined8 *)(puVar34 + 4) = *(undefined8 *)(puVar33 + 4);
            *(undefined8 *)(puVar34 + 6) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 10);
            *(undefined8 *)(puVar34 + 8) = *(undefined8 *)(puVar33 + 8);
            *(undefined8 *)(puVar34 + 10) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0xe);
            *(undefined8 *)(puVar34 + 0xc) = *(undefined8 *)(puVar33 + 0xc);
            *(undefined8 *)(puVar34 + 0xe) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x12);
            *(undefined8 *)(puVar34 + 0x10) = *(undefined8 *)(puVar33 + 0x10);
            *(undefined8 *)(puVar34 + 0x12) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x16);
            *(undefined8 *)(puVar34 + 0x14) = *(undefined8 *)(puVar33 + 0x14);
            *(undefined8 *)(puVar34 + 0x16) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x1a);
            *(undefined8 *)(puVar34 + 0x18) = *(undefined8 *)(puVar33 + 0x18);
            *(undefined8 *)(puVar34 + 0x1a) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x1e);
            *(undefined8 *)(puVar34 + 0x1c) = *(undefined8 *)(puVar33 + 0x1c);
            *(undefined8 *)(puVar34 + 0x1e) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x22);
            *(undefined8 *)(puVar34 + 0x20) = *(undefined8 *)(puVar33 + 0x20);
            *(undefined8 *)(puVar34 + 0x22) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x26);
            *(undefined8 *)(puVar34 + 0x24) = *(undefined8 *)(puVar33 + 0x24);
            *(undefined8 *)(puVar34 + 0x26) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x2a);
            *(undefined8 *)(puVar34 + 0x28) = *(undefined8 *)(puVar33 + 0x28);
            *(undefined8 *)(puVar34 + 0x2a) = uVar27;
            uVar27 = *(undefined8 *)(puVar33 + 0x2e);
            *(undefined8 *)(puVar34 + 0x2c) = *(undefined8 *)(puVar33 + 0x2c);
            *(undefined8 *)(puVar34 + 0x2e) = uVar27;
            *(undefined8 *)(puVar34 + 0x30) = *(undefined8 *)(puVar33 + 0x30);
            *(undefined8 *)puVar33 = uVar3;
            *(undefined8 *)(puVar33 + 2) = uVar4;
            *(undefined8 *)(puVar33 + 4) = uVar5;
            *(undefined8 *)(puVar33 + 6) = uVar6;
            *(undefined8 *)(puVar33 + 8) = uVar7;
            *(undefined8 *)(puVar33 + 10) = uVar8;
            *(undefined8 *)(puVar33 + 0xc) = uVar9;
            *(undefined8 *)(puVar33 + 0xe) = uVar10;
            *(undefined8 *)(puVar33 + 0x10) = uVar11;
            *(undefined8 *)(puVar33 + 0x12) = uVar12;
            *(undefined8 *)(puVar33 + 0x14) = uVar13;
            *(undefined8 *)(puVar33 + 0x16) = uVar14;
            *(undefined8 *)(puVar33 + 0x18) = uVar15;
            *(undefined8 *)(puVar33 + 0x1a) = uVar16;
            *(undefined8 *)(puVar33 + 0x1c) = uVar17;
            *(undefined8 *)(puVar33 + 0x1e) = uVar18;
            *(undefined8 *)(puVar33 + 0x20) = uVar19;
            *(undefined8 *)(puVar33 + 0x22) = uVar20;
            *(undefined8 *)(puVar33 + 0x24) = uVar21;
            *(undefined8 *)(puVar33 + 0x26) = uVar22;
            *(undefined8 *)(puVar33 + 0x28) = uVar23;
            *(undefined8 *)(puVar33 + 0x2a) = uVar24;
            *(undefined8 *)(puVar33 + 0x2c) = uVar25;
            *(undefined8 *)(puVar33 + 0x2e) = uVar26;
            *(undefined8 *)(puVar33 + 0x30) = uVar1;
          }
          iVar28 = iVar29;
        } while (iVar29 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar32 = puVar32 + -0x19;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142897bc0 HeapSortInternal<FInputActionKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputActionKeyMapping,TLess<FInputActionKeyMapping>_>_> body=733 status=ok
// SIG undefined HeapSortInternal<FInputActionKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputActionKeyMapping,TLess<FInputActionKeyMapping>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FInputActionKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputActionKeyMapping,TLess<FInputActionKeyMapping>_>_>
               (undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  
  iVar15 = (param_2 + -2) / 2;
  if (-1 < iVar15) {
    iVar17 = iVar15 * 2 + 1;
    iVar21 = iVar17;
    iVar18 = iVar15;
joined_r0x000142897c06:
    do {
      if (iVar17 < param_2) {
        iVar17 = iVar15 * 2;
        iVar20 = iVar17 + 1;
        if (iVar17 + 2 < param_2) {
          bVar22 = false;
          plVar1 = param_1 + ((longlong)iVar17 + 2) * 5;
          plVar2 = param_1 + (longlong)iVar20 * 5;
          iVar16 = FName::Compare(plVar1,plVar2);
          if (iVar16 < 0) {
            bVar22 = true;
          }
          else if (*plVar1 == *plVar2) {
            iVar16 = FName::Compare(plVar1 + 2,plVar2 + 2);
            bVar22 = iVar16 < 0;
          }
          if (bVar22) {
            iVar20 = iVar17;
          }
          iVar20 = iVar20 + 1;
        }
        plVar1 = param_1 + (longlong)iVar15 * 5;
        plVar2 = param_1 + (longlong)iVar20 * 5;
        iVar15 = FName::Compare(plVar1,plVar2);
        if ((iVar15 < 0) ||
           ((*plVar1 == *plVar2 && (iVar15 = FName::Compare(plVar1 + 2,plVar2 + 2), iVar15 < 0)))) {
          if (plVar1 != plVar2) {
            lVar5 = plVar2[1];
            lVar6 = *plVar1;
            lVar7 = plVar1[1];
            lVar8 = plVar1[2];
            lVar9 = plVar1[3];
            lVar3 = plVar1[4];
            *plVar1 = *plVar2;
            plVar1[1] = lVar5;
            lVar5 = plVar2[3];
            plVar1[2] = plVar2[2];
            plVar1[3] = lVar5;
            plVar1[4] = plVar2[4];
            *plVar2 = lVar6;
            plVar2[1] = lVar7;
            plVar2[2] = lVar8;
            plVar2[3] = lVar9;
            plVar2[4] = lVar3;
          }
          iVar17 = iVar20 * 2 + 1;
          iVar15 = iVar20;
          goto joined_r0x000142897c06;
        }
      }
      iVar15 = iVar18 + -1;
      iVar17 = iVar21 + -2;
      iVar21 = iVar17;
      iVar18 = iVar15;
    } while (-1 < iVar15);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar19 = param_1 + (longlong)param_2 * 5;
    do {
      if (param_1 != puVar19) {
        uVar10 = puVar19[1];
        uVar11 = *param_1;
        uVar12 = param_1[1];
        uVar13 = param_1[2];
        uVar14 = param_1[3];
        uVar4 = param_1[4];
        *param_1 = *puVar19;
        param_1[1] = uVar10;
        uVar10 = puVar19[3];
        param_1[2] = puVar19[2];
        param_1[3] = uVar10;
        param_1[4] = puVar19[4];
        *puVar19 = uVar11;
        puVar19[1] = uVar12;
        puVar19[2] = uVar13;
        puVar19[3] = uVar14;
        puVar19[4] = uVar4;
      }
      iVar15 = 0;
      if (1 < param_2) {
        do {
          iVar17 = iVar15 * 2;
          iVar21 = iVar17 + 1;
          if (iVar17 + 2 < param_2) {
            bVar22 = false;
            plVar1 = param_1 + ((longlong)iVar17 + 2) * 5;
            plVar2 = param_1 + (longlong)iVar21 * 5;
            iVar18 = FName::Compare(plVar1,plVar2);
            if (iVar18 < 0) {
              bVar22 = true;
            }
            else if (*plVar1 == *plVar2) {
              iVar18 = FName::Compare(plVar1 + 2,plVar2 + 2);
              bVar22 = iVar18 < 0;
            }
            if (bVar22) {
              iVar21 = iVar17;
            }
            iVar21 = iVar21 + 1;
          }
          plVar1 = param_1 + (longlong)iVar15 * 5;
          plVar2 = param_1 + (longlong)iVar21 * 5;
          iVar15 = FName::Compare(plVar1,plVar2);
          if ((-1 < iVar15) &&
             ((*plVar1 != *plVar2 || (iVar15 = FName::Compare(plVar1 + 2,plVar2 + 2), -1 < iVar15)))
             ) break;
          if (plVar1 != plVar2) {
            lVar5 = plVar2[1];
            lVar6 = *plVar1;
            lVar7 = plVar1[1];
            lVar8 = plVar1[2];
            lVar9 = plVar1[3];
            lVar3 = plVar1[4];
            *plVar1 = *plVar2;
            plVar1[1] = lVar5;
            lVar5 = plVar2[3];
            plVar1[2] = plVar2[2];
            plVar1[3] = lVar5;
            plVar1[4] = plVar2[4];
            *plVar2 = lVar6;
            plVar2[1] = lVar7;
            plVar2[2] = lVar8;
            plVar2[3] = lVar9;
            plVar2[4] = lVar3;
          }
          iVar15 = iVar21;
        } while (iVar21 * 2 + 1 < param_2);
      }
      puVar19 = puVar19 + -5;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142897ea0 HeapSortInternal<FInputAxisKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputAxisKeyMapping,TLess<FInputAxisKeyMapping>_>_> body=544 status=ok
// SIG undefined HeapSortInternal<FInputAxisKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputAxisKeyMapping,TLess<FInputAxisKeyMapping>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FInputAxisKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputAxisKeyMapping,TLess<FInputAxisKeyMapping>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar11 = iVar10 * 2 + 1;
    iVar13 = iVar11;
    iVar14 = iVar10;
joined_r0x000142897ed9:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar10 * 2;
        iVar12 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          cVar9 = FInputAxisKeyMapping::operator<
                            (param_1 + (longlong)(iVar11 + 2) * 5,param_1 + (longlong)iVar12 * 5);
          if (cVar9 != '\0') {
            iVar12 = iVar11;
          }
          iVar12 = iVar12 + 1;
        }
        puVar15 = param_1 + (longlong)iVar12 * 5;
        puVar1 = param_1 + (longlong)iVar10 * 5;
        cVar9 = FInputAxisKeyMapping::operator<(puVar1,puVar15);
        if (cVar9 != '\0') {
          if (puVar1 != puVar15) {
            uVar4 = puVar15[1];
            uVar5 = *puVar1;
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            uVar3 = puVar1[4];
            *puVar1 = *puVar15;
            puVar1[1] = uVar4;
            uVar4 = puVar15[3];
            puVar1[2] = puVar15[2];
            puVar1[3] = uVar4;
            puVar1[4] = puVar15[4];
            *puVar15 = uVar5;
            puVar15[1] = uVar6;
            puVar15[2] = uVar7;
            puVar15[3] = uVar8;
            puVar15[4] = uVar3;
          }
          iVar11 = iVar12 * 2 + 1;
          iVar10 = iVar12;
          goto joined_r0x000142897ed9;
        }
      }
      iVar11 = iVar13 + -2;
      iVar10 = iVar14 + -1;
      iVar13 = iVar11;
      iVar14 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar15 = param_1 + (longlong)param_2 * 5;
    do {
      if (param_1 != puVar15) {
        uVar4 = puVar15[1];
        uVar5 = *param_1;
        uVar6 = param_1[1];
        uVar7 = param_1[2];
        uVar8 = param_1[3];
        uVar3 = param_1[4];
        *param_1 = *puVar15;
        param_1[1] = uVar4;
        uVar4 = puVar15[3];
        param_1[2] = puVar15[2];
        param_1[3] = uVar4;
        param_1[4] = puVar15[4];
        *puVar15 = uVar5;
        puVar15[1] = uVar6;
        puVar15[2] = uVar7;
        puVar15[3] = uVar8;
        puVar15[4] = uVar3;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar11 = iVar10 * 2;
          iVar13 = iVar11 + 1;
          if (iVar11 + 2 < param_2) {
            cVar9 = FInputAxisKeyMapping::operator<
                              (param_1 + (longlong)(iVar11 + 2) * 5,param_1 + (longlong)iVar13 * 5);
            if (cVar9 != '\0') {
              iVar13 = iVar11;
            }
            iVar13 = iVar13 + 1;
          }
          puVar1 = param_1 + (longlong)iVar13 * 5;
          puVar2 = param_1 + (longlong)iVar10 * 5;
          cVar9 = FInputAxisKeyMapping::operator<(puVar2,puVar1);
          if (cVar9 == '\0') break;
          if (puVar2 != puVar1) {
            uVar4 = puVar1[1];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            uVar3 = puVar2[4];
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            uVar4 = puVar1[3];
            puVar2[2] = puVar1[2];
            puVar2[3] = uVar4;
            puVar2[4] = puVar1[4];
            *puVar1 = uVar5;
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            puVar1[3] = uVar8;
            puVar1[4] = uVar3;
          }
          iVar10 = iVar13;
        } while (iVar13 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar15 = puVar15 + -5;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1428980c0 HeapSortInternal<FCanvas::FCanvasSortElement,FIdentityFunctor,TDereferenceWrapper<FCanvas::FCanvasSortElement,`FCanvas::Flush_GameThread'::`2'::FCompareFCanvasSortElement>_> body=448 status=ok
// SIG undefined HeapSortInternal<FCanvas::FCanvasSortElement,FIdentityFunctor,TDereferenceWrapper<FCanvas::FCanvasSortElement,`FCanvas::Flush_GameThread'::`2'::FCompareFCanvasSortElement>_>(void)

void AlgoImpl::
     HeapSortInternal<FCanvas::FCanvasSortElement,FIdentityFunctor,TDereferenceWrapper<FCanvas::FCanvasSortElement,_FCanvas::Flush_GameThread_::_2_::FCompareFCanvasSortElement>_>
               (undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    iVar9 = iVar8 * 2 + 1;
    iVar4 = iVar9;
    iVar10 = iVar8;
joined_r0x0001428980ea:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar8 * 2;
        iVar12 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar12 * 3) <
              *(int *)(param_1 + ((longlong)iVar9 + 2) * 3)) {
            iVar12 = iVar9;
          }
          iVar12 = iVar12 + 1;
        }
        piVar1 = (int *)(param_1 + (longlong)iVar12 * 3);
        piVar2 = (int *)(param_1 + (longlong)iVar8 * 3);
        if (*piVar1 < *(int *)(param_1 + (longlong)iVar8 * 3)) {
          if (piVar2 != piVar1) {
            uVar5 = *(undefined8 *)(piVar1 + 2);
            uVar6 = *(undefined8 *)piVar2;
            uVar7 = *(undefined8 *)(piVar2 + 2);
            uVar3 = *(undefined8 *)(piVar2 + 4);
            *(undefined8 *)piVar2 = *(undefined8 *)piVar1;
            *(undefined8 *)(piVar2 + 2) = uVar5;
            *(undefined8 *)(piVar2 + 4) = *(undefined8 *)(piVar1 + 4);
            *(undefined8 *)piVar1 = uVar6;
            *(undefined8 *)(piVar1 + 2) = uVar7;
            *(undefined8 *)(piVar1 + 4) = uVar3;
          }
          iVar9 = iVar12 * 2 + 1;
          iVar8 = iVar12;
          goto joined_r0x0001428980ea;
        }
      }
      iVar9 = iVar4 + -2;
      iVar8 = iVar10 + -1;
      iVar4 = iVar9;
      iVar10 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 3;
    do {
      if (param_1 != puVar11) {
        uVar5 = puVar11[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar3 = param_1[2];
        *param_1 = *puVar11;
        param_1[1] = uVar5;
        param_1[2] = puVar11[2];
        *puVar11 = uVar6;
        puVar11[1] = uVar7;
        puVar11[2] = uVar3;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar8 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar9 * 3) <
                *(int *)(param_1 + ((longlong)iVar4 + 2) * 3)) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          piVar1 = (int *)(param_1 + (longlong)iVar9 * 3);
          piVar2 = (int *)(param_1 + (longlong)iVar8 * 3);
          if (*(int *)(param_1 + (longlong)iVar8 * 3) <= *piVar1) break;
          if (piVar2 != piVar1) {
            uVar5 = *(undefined8 *)(piVar1 + 2);
            uVar6 = *(undefined8 *)piVar2;
            uVar7 = *(undefined8 *)(piVar2 + 2);
            uVar3 = *(undefined8 *)(piVar2 + 4);
            *(undefined8 *)piVar2 = *(undefined8 *)piVar1;
            *(undefined8 *)(piVar2 + 2) = uVar5;
            *(undefined8 *)(piVar2 + 4) = *(undefined8 *)(piVar1 + 4);
            *(undefined8 *)piVar1 = uVar6;
            *(undefined8 *)(piVar1 + 2) = uVar7;
            *(undefined8 *)(piVar1 + 4) = uVar3;
          }
          iVar8 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142898280 IntroSortInternal<FAutoCompleteCommand,FIdentityFunctor,TDereferenceWrapper<FAutoCompleteCommand,TLess<FAutoCompleteCommand>_>_> body=1058 status=ok
// SIG undefined IntroSortInternal<FAutoCompleteCommand,FIdentityFunctor,TDereferenceWrapper<FAutoCompleteCommand,TLess<FAutoCompleteCommand>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FAutoCompleteCommand,FIdentityFunctor,TDereferenceWrapper<FAutoCompleteCommand,TLess<FAutoCompleteCommand>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + param_2 * 0x28 + -0x28;
    fVar19 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar19 = fVar19 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar19 = ::_guard_xfg_dispatch_icall_nop(fVar19);
    local_338 = (undefined4)(longlong)(fVar19 + fVar19);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar15 = &local_348;
    do {
      puVar18 = (undefined8 *)*plVar15;
      puVar11 = (undefined8 *)plVar15[1];
      local_358 = plVar15[2];
      lVar9 = ((longlong)puVar11 - (longlong)puVar18) / 0x28 + 1;
      puVar17 = puVar18;
      iVar14 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142898380:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          puVar18 = puVar17 + (lVar9 >> 1) * 5;
          if (puVar18 != puVar17) {
            uVar2 = puVar17[1];
            uVar3 = *puVar18;
            uVar4 = puVar18[1];
            uVar5 = puVar18[2];
            uVar6 = puVar18[3];
            uVar1 = puVar18[4];
            *puVar18 = *puVar17;
            puVar18[1] = uVar2;
            uVar2 = puVar17[3];
            puVar18[2] = puVar17[2];
            puVar18[3] = uVar2;
            puVar18[4] = puVar17[4];
            *puVar17 = uVar3;
            puVar17[1] = uVar4;
            puVar17[2] = uVar5;
            puVar17[3] = uVar6;
            puVar17[4] = uVar1;
          }
          puVar12 = puVar11 + 5;
          puVar18 = puVar17;
LAB_1428983e0:
          puVar16 = puVar18;
          puVar18 = puVar16 + 5;
          if (puVar18 <= puVar11) goto code_r0x0001428983e9;
          goto LAB_142898420;
        }
        for (; puVar12 = puVar17, puVar18 = puVar17, puVar17 < puVar11; puVar11 = puVar11 + -5) {
          while (puVar18 = puVar18 + 5, puVar18 <= puVar11) {
            if (*(int *)(puVar18 + 1) == 0) {
              puVar10 = &DAT_143f3eda8;
            }
            else {
              puVar10 = (undefined2 *)*puVar18;
            }
            if (*(int *)(puVar12 + 1) == 0) {
              puVar8 = &DAT_143f3eda8;
            }
            else {
              puVar8 = (undefined2 *)*puVar12;
            }
            iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
            if (iVar14 < 0) {
              puVar12 = puVar18;
            }
          }
          if (puVar12 != puVar11) {
            uVar2 = puVar11[1];
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            uVar1 = puVar12[4];
            *puVar12 = *puVar11;
            puVar12[1] = uVar2;
            uVar2 = puVar11[3];
            puVar12[2] = puVar11[2];
            puVar12[3] = uVar2;
            puVar12[4] = puVar11[4];
            *puVar11 = uVar3;
            puVar11[1] = uVar4;
            puVar11[2] = uVar5;
            puVar11[3] = uVar6;
            puVar11[4] = uVar1;
          }
        }
        goto LAB_1428985a9;
      }
LAB_142898590:
      HeapSortInternal<FAutoCompleteCommand,FIdentityFunctor,TDereferenceWrapper<FAutoCompleteCommand,TLess<FAutoCompleteCommand>_>_>
                (puVar18,lVar9,param_3,param_4);
LAB_1428985a9:
      plVar15 = plVar15 + -3;
    } while (&local_348 <= plVar15);
  }
  return;
code_r0x0001428983e9:
  if (*(int *)(puVar16 + 6) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar18;
  }
  if (*(int *)(puVar17 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*puVar17;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
  if (-1 < iVar7) goto LAB_1428983e0;
LAB_142898420:
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -5;
    if (puVar12 <= puVar17) break;
    if (*(int *)(puVar17 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar17;
    }
    if (*(int *)(puVar13 + -4) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar12;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
  } while (-1 < iVar7);
  if (puVar18 <= puVar12) {
    if (puVar18 != puVar12) {
      uVar2 = puVar13[-4];
      uVar3 = *puVar18;
      uVar4 = puVar16[6];
      uVar5 = puVar16[7];
      uVar6 = puVar16[8];
      uVar1 = puVar16[9];
      *puVar18 = *puVar12;
      puVar16[6] = uVar2;
      uVar2 = puVar13[-2];
      puVar16[7] = puVar13[-3];
      puVar16[8] = uVar2;
      puVar16[9] = puVar13[-1];
      *puVar12 = uVar3;
      puVar13[-4] = uVar4;
      puVar13[-3] = uVar5;
      puVar13[-2] = uVar6;
      puVar13[-1] = uVar1;
    }
    goto LAB_1428983e0;
  }
  if (puVar17 != puVar12) {
    uVar2 = puVar13[-4];
    uVar3 = *puVar17;
    uVar4 = puVar17[1];
    uVar5 = puVar17[2];
    uVar6 = puVar17[3];
    uVar1 = puVar17[4];
    *puVar17 = *puVar12;
    puVar17[1] = uVar2;
    uVar2 = puVar13[-2];
    puVar17[2] = puVar13[-3];
    puVar17[3] = uVar2;
    puVar17[4] = puVar13[-1];
    *puVar12 = uVar3;
    puVar13[-4] = uVar4;
    puVar13[-3] = uVar5;
    puVar13[-2] = uVar6;
    puVar13[-1] = uVar1;
  }
  iVar14 = iVar14 + -1;
  if (((longlong)puVar12 + (-0x28 - (longlong)puVar17)) / 0x28 <
      ((longlong)puVar11 - (longlong)puVar18) / 0x28) {
    if (puVar18 < puVar11) {
      *plVar15 = (longlong)puVar18;
      plVar15[1] = (longlong)puVar11;
      *(int *)(plVar15 + 2) = iVar14;
      plVar15 = plVar15 + 3;
    }
    if (puVar12 <= puVar17 + 5) goto LAB_1428985a9;
    puVar11 = puVar13 + -10;
    puVar18 = puVar17;
  }
  else {
    if (puVar17 + 5 < puVar12) {
      *plVar15 = (longlong)puVar17;
      plVar15[1] = (longlong)(puVar13 + -10);
      *(int *)(plVar15 + 2) = iVar14;
      plVar15 = plVar15 + 3;
    }
    if (puVar11 <= puVar18) goto LAB_1428985a9;
  }
  lVar9 = ((longlong)puVar11 - (longlong)puVar18) / 0x28 + 1;
  puVar17 = puVar18;
  if (iVar14 == 0) goto LAB_142898590;
  goto LAB_142898380;
}



// FUNCTION 1428986b0 IntroSortInternal<FDelegateDispatchDetails,FIdentityFunctor,TDereferenceWrapper<FDelegateDispatchDetails,`UPlayerInput::ProcessInputStack'::`2'::FDelegateDispatchDetailsSorter>_> body=2444 status=ok
// SIG undefined IntroSortInternal<FDelegateDispatchDetails,FIdentityFunctor,TDereferenceWrapper<FDelegateDispatchDetails,`UPlayerInput::ProcessInputStack'::`2'::FDelegateDispatchDetailsSorter>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FDelegateDispatchDetails,FIdentityFunctor,TDereferenceWrapper<FDelegateDispatchDetails,_UPlayerInput::ProcessInputStack_::_2_::FDelegateDispatchDetailsSorter>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  longlong *plVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_698 [48];
  longlong local_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_698;
    fVar15 = (float)(longlong)param_2;
    lStack_330 = param_1 + -200 + param_2 * 200;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar15 = ::_guard_xfg_dispatch_icall_nop(fVar15);
    local_328 = (undefined4)(longlong)(fVar15 + fVar15);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar13 = &local_338;
    do {
      puVar12 = (uint *)*plVar13;
      puVar7 = (uint *)plVar13[1];
      lVar1 = plVar13[2];
      local_668._0_4_ = (int)lVar1;
      lVar5 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)puVar7 - (longlong)puVar12),8)
              + ((longlong)puVar7 - (longlong)puVar12);
      lVar5 = ((lVar5 >> 7) + 1) - (lVar5 >> 0x3f);
      puVar11 = puVar12;
      if ((int)local_668 != 0) {
LAB_1428987b0:
        if (8 < lVar5) {
          puVar12 = puVar11 + (lVar5 / 2) * 0x32;
          if (puVar12 != puVar11) {
            local_660 = *(undefined8 *)puVar12;
            uStack_658 = *(undefined8 *)(puVar12 + 2);
            local_5a0 = *(undefined8 *)(puVar12 + 0x30);
            local_650 = *(undefined8 *)(puVar12 + 4);
            uStack_648 = *(undefined8 *)(puVar12 + 6);
            local_640 = *(undefined8 *)(puVar12 + 8);
            uStack_638 = *(undefined8 *)(puVar12 + 10);
            local_630 = *(undefined8 *)(puVar12 + 0xc);
            uStack_628 = *(undefined8 *)(puVar12 + 0xe);
            local_620 = *(undefined8 *)(puVar12 + 0x10);
            uStack_618 = *(undefined8 *)(puVar12 + 0x12);
            local_610 = *(undefined8 *)(puVar12 + 0x14);
            uStack_608 = *(undefined8 *)(puVar12 + 0x16);
            local_600 = *(undefined8 *)(puVar12 + 0x18);
            uStack_5f8 = *(undefined8 *)(puVar12 + 0x1a);
            local_5f0 = *(undefined8 *)(puVar12 + 0x1c);
            uStack_5e8 = *(undefined8 *)(puVar12 + 0x1e);
            local_5e0 = *(undefined8 *)(puVar12 + 0x20);
            uStack_5d8 = *(undefined8 *)(puVar12 + 0x22);
            local_5d0 = *(undefined8 *)(puVar12 + 0x24);
            uStack_5c8 = *(undefined8 *)(puVar12 + 0x26);
            uVar2 = *(undefined8 *)(puVar12 + 0x28);
            uVar3 = *(undefined8 *)(puVar12 + 0x2a);
            local_5b0 = *(undefined8 *)(puVar12 + 0x2c);
            uStack_5a8 = *(undefined8 *)(puVar12 + 0x2e);
            uVar4 = *(undefined8 *)(puVar11 + 2);
            *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
            *(undefined8 *)(puVar12 + 2) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 6);
            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar11 + 4);
            *(undefined8 *)(puVar12 + 6) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 10);
            *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(puVar11 + 8);
            *(undefined8 *)(puVar12 + 10) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0xe);
            *(undefined8 *)(puVar12 + 0xc) = *(undefined8 *)(puVar11 + 0xc);
            *(undefined8 *)(puVar12 + 0xe) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x12);
            *(undefined8 *)(puVar12 + 0x10) = *(undefined8 *)(puVar11 + 0x10);
            *(undefined8 *)(puVar12 + 0x12) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x16);
            *(undefined8 *)(puVar12 + 0x14) = *(undefined8 *)(puVar11 + 0x14);
            *(undefined8 *)(puVar12 + 0x16) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x1a);
            *(undefined8 *)(puVar12 + 0x18) = *(undefined8 *)(puVar11 + 0x18);
            *(undefined8 *)(puVar12 + 0x1a) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x1e);
            *(undefined8 *)(puVar12 + 0x1c) = *(undefined8 *)(puVar11 + 0x1c);
            *(undefined8 *)(puVar12 + 0x1e) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x22);
            *(undefined8 *)(puVar12 + 0x20) = *(undefined8 *)(puVar11 + 0x20);
            *(undefined8 *)(puVar12 + 0x22) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x26);
            *(undefined8 *)(puVar12 + 0x24) = *(undefined8 *)(puVar11 + 0x24);
            *(undefined8 *)(puVar12 + 0x26) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x2a);
            *(undefined8 *)(puVar12 + 0x28) = *(undefined8 *)(puVar11 + 0x28);
            *(undefined8 *)(puVar12 + 0x2a) = uVar4;
            uVar4 = *(undefined8 *)(puVar11 + 0x2e);
            *(undefined8 *)(puVar12 + 0x2c) = *(undefined8 *)(puVar11 + 0x2c);
            *(undefined8 *)(puVar12 + 0x2e) = uVar4;
            *(undefined8 *)(puVar12 + 0x30) = *(undefined8 *)(puVar11 + 0x30);
            *(undefined8 *)puVar11 = local_660;
            *(undefined8 *)(puVar11 + 2) = uStack_658;
            *(undefined8 *)(puVar11 + 4) = local_650;
            *(undefined8 *)(puVar11 + 6) = uStack_648;
            *(undefined8 *)(puVar11 + 8) = local_640;
            *(undefined8 *)(puVar11 + 10) = uStack_638;
            *(undefined8 *)(puVar11 + 0xc) = local_630;
            *(undefined8 *)(puVar11 + 0xe) = uStack_628;
            *(undefined8 *)(puVar11 + 0x10) = local_620;
            *(undefined8 *)(puVar11 + 0x12) = uStack_618;
            *(undefined8 *)(puVar11 + 0x14) = local_610;
            *(undefined8 *)(puVar11 + 0x16) = uStack_608;
            *(undefined8 *)(puVar11 + 0x18) = local_600;
            *(undefined8 *)(puVar11 + 0x1a) = uStack_5f8;
            *(undefined8 *)(puVar11 + 0x1c) = local_5f0;
            *(undefined8 *)(puVar11 + 0x1e) = uStack_5e8;
            *(undefined8 *)(puVar11 + 0x20) = local_5e0;
            *(undefined8 *)(puVar11 + 0x22) = uStack_5d8;
            local_5c0._0_4_ = (uint)uVar2;
            local_5c0._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
            uStack_5b8._0_4_ = (uint)uVar3;
            uStack_5b8._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
            *(undefined8 *)(puVar11 + 0x24) = local_5d0;
            *(undefined8 *)(puVar11 + 0x26) = uStack_5c8;
            puVar11[0x28] = (uint)local_5c0;
            puVar11[0x29] = local_5c0._4_4_;
            puVar11[0x2a] = (uint)uStack_5b8;
            puVar11[0x2b] = uStack_5b8._4_4_;
            *(undefined8 *)(puVar11 + 0x2c) = local_5b0;
            *(undefined8 *)(puVar11 + 0x2e) = uStack_5a8;
            *(undefined8 *)(puVar11 + 0x30) = local_5a0;
            local_5c0 = uVar2;
            uStack_5b8 = uVar3;
          }
          puVar9 = puVar7 + 0x32;
          puVar12 = puVar11;
LAB_142898970:
          puVar8 = puVar12;
          puVar12 = puVar8 + 0x32;
          if (puVar12 <= puVar7) goto code_r0x00014289897c;
          goto LAB_1428989a0;
        }
        for (; puVar9 = puVar11, puVar12 = puVar11, puVar11 < puVar7; puVar7 = puVar7 + -0x32) {
          while (puVar8 = puVar9, puVar12 = puVar12 + 0x32, puVar12 <= puVar7) {
            bVar14 = *puVar8 < *puVar12;
            if (*puVar8 == *puVar12) {
              bVar14 = puVar8[1] < puVar12[1];
            }
            puVar9 = puVar12;
            if (!bVar14) {
              puVar9 = puVar8;
            }
          }
          if (puVar8 != puVar7) {
            local_408 = *(undefined8 *)puVar8;
            uStack_400 = *(undefined8 *)(puVar8 + 2);
            local_348 = *(undefined8 *)(puVar8 + 0x30);
            local_3f8 = *(undefined8 *)(puVar8 + 4);
            uStack_3f0 = *(undefined8 *)(puVar8 + 6);
            local_3e8 = *(undefined8 *)(puVar8 + 8);
            uStack_3e0 = *(undefined8 *)(puVar8 + 10);
            local_3d8 = *(undefined8 *)(puVar8 + 0xc);
            uStack_3d0 = *(undefined8 *)(puVar8 + 0xe);
            local_3c8 = *(undefined8 *)(puVar8 + 0x10);
            uStack_3c0 = *(undefined8 *)(puVar8 + 0x12);
            local_3b8 = *(undefined8 *)(puVar8 + 0x14);
            uStack_3b0 = *(undefined8 *)(puVar8 + 0x16);
            local_3a8 = *(undefined8 *)(puVar8 + 0x18);
            uStack_3a0 = *(undefined8 *)(puVar8 + 0x1a);
            local_398 = *(undefined8 *)(puVar8 + 0x1c);
            uStack_390 = *(undefined8 *)(puVar8 + 0x1e);
            local_388 = *(undefined8 *)(puVar8 + 0x20);
            uStack_380 = *(undefined8 *)(puVar8 + 0x22);
            local_378 = *(undefined8 *)(puVar8 + 0x24);
            uStack_370 = *(undefined8 *)(puVar8 + 0x26);
            local_368 = *(undefined8 *)(puVar8 + 0x28);
            uStack_360 = *(undefined8 *)(puVar8 + 0x2a);
            local_358 = *(undefined8 *)(puVar8 + 0x2c);
            uStack_350 = *(undefined8 *)(puVar8 + 0x2e);
            uVar2 = *(undefined8 *)(puVar7 + 2);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
            *(undefined8 *)(puVar8 + 2) = uVar2;
            uVar2 = *(undefined8 *)(puVar7 + 6);
            *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar7 + 4);
            *(undefined8 *)(puVar8 + 6) = uVar2;
            uVar2 = *(undefined8 *)(puVar7 + 10);
            *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar7 + 8);
            *(undefined8 *)(puVar8 + 10) = uVar2;
            uVar2 = *(undefined8 *)(puVar7 + 0xe);
            *(undefined8 *)(puVar8 + 0xc) = *(undefined8 *)(puVar7 + 0xc);
            *(undefined8 *)(puVar8 + 0xe) = uVar2;
            uVar2 = *(undefined8 *)(puVar7 + 0x12);
            *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
            *(undefined8 *)(puVar8 + 0x12) = uVar2;
            uVar2 = *(undefined8 *)(puVar7 + 0x16);
            *(undefined8 *)(puVar8 + 0x14) = *(undefined8 *)(puVar7 + 0x14);
            *(undefined8 *)(puVar8 + 0x16) = uVar2;
            uVar2 = *(undefined8 *)(puVar7 + 0x1a);
            *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(puVar7 + 0x18);
            *(undefined8 *)(puVar8 + 0x1a) = uVar2;
            uVar2 = *(undefined8 *)(puVar7 + 0x1e);
            *(undefined8 *)(puVar8 + 0x1c) = *(undefined8 *)(puVar7 + 0x1c);
            *(undefined8 *)(puVar8 + 0x1e) = uVar2;
            uVar2 = *(undefined8 *)(puVar7 + 0x22);
            *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)(puVar7 + 0x20);
            *(undefined8 *)(puVar8 + 0x22) = uVar2;
            uVar2 = *(undefined8 *)(puVar7 + 0x26);
            *(undefined8 *)(puVar8 + 0x24) = *(undefined8 *)(puVar7 + 0x24);
            *(undefined8 *)(puVar8 + 0x26) = uVar2;
            uVar2 = *(undefined8 *)(puVar7 + 0x2a);
            *(undefined8 *)(puVar8 + 0x28) = *(undefined8 *)(puVar7 + 0x28);
            *(undefined8 *)(puVar8 + 0x2a) = uVar2;
            uVar2 = *(undefined8 *)(puVar7 + 0x2e);
            *(undefined8 *)(puVar8 + 0x2c) = *(undefined8 *)(puVar7 + 0x2c);
            *(undefined8 *)(puVar8 + 0x2e) = uVar2;
            *(undefined8 *)(puVar8 + 0x30) = *(undefined8 *)(puVar7 + 0x30);
            *(undefined8 *)puVar7 = local_408;
            *(undefined8 *)(puVar7 + 2) = uStack_400;
            *(undefined8 *)(puVar7 + 4) = local_3f8;
            *(undefined8 *)(puVar7 + 6) = uStack_3f0;
            *(undefined8 *)(puVar7 + 8) = local_3e8;
            *(undefined8 *)(puVar7 + 10) = uStack_3e0;
            *(undefined8 *)(puVar7 + 0xc) = local_3d8;
            *(undefined8 *)(puVar7 + 0xe) = uStack_3d0;
            *(undefined8 *)(puVar7 + 0x10) = local_3c8;
            *(undefined8 *)(puVar7 + 0x12) = uStack_3c0;
            *(undefined8 *)(puVar7 + 0x14) = local_3b8;
            *(undefined8 *)(puVar7 + 0x16) = uStack_3b0;
            *(undefined8 *)(puVar7 + 0x18) = local_3a8;
            *(undefined8 *)(puVar7 + 0x1a) = uStack_3a0;
            *(undefined8 *)(puVar7 + 0x1c) = local_398;
            *(undefined8 *)(puVar7 + 0x1e) = uStack_390;
            *(undefined8 *)(puVar7 + 0x20) = local_388;
            *(undefined8 *)(puVar7 + 0x22) = uStack_380;
            *(undefined8 *)(puVar7 + 0x24) = local_378;
            *(undefined8 *)(puVar7 + 0x26) = uStack_370;
            *(undefined8 *)(puVar7 + 0x28) = local_368;
            *(undefined8 *)(puVar7 + 0x2a) = uStack_360;
            *(undefined8 *)(puVar7 + 0x2c) = local_358;
            *(undefined8 *)(puVar7 + 0x2e) = uStack_350;
            *(undefined8 *)(puVar7 + 0x30) = local_348;
          }
        }
        goto LAB_142898e01;
      }
LAB_142898df2:
      local_668 = lVar1;
      HeapSortInternal<FDelegateDispatchDetails,FIdentityFunctor,TDereferenceWrapper<FDelegateDispatchDetails,_UPlayerInput::ProcessInputStack_::_2_::FDelegateDispatchDetailsSorter>_>
                (puVar12,lVar5,param_3,param_4);
LAB_142898e01:
      plVar13 = plVar13 + -3;
    } while (&local_338 <= plVar13);
  }
  return;
code_r0x00014289897c:
  bVar14 = *puVar11 < *puVar12;
  if (*puVar11 == *puVar12) {
    bVar14 = puVar11[1] < puVar8[0x33];
  }
  if (!bVar14) goto LAB_142898970;
LAB_1428989a0:
  do {
    puVar10 = puVar9;
    puVar9 = puVar10 + -0x32;
    if (puVar9 <= puVar11) break;
    bVar14 = *puVar9 < *puVar11;
    if (*puVar9 == *puVar11) {
      bVar14 = puVar10[-0x31] < puVar11[1];
    }
  } while (!bVar14);
  if (puVar12 <= puVar9) {
    if (puVar12 != puVar9) {
      local_598 = *(undefined8 *)puVar12;
      uStack_590 = *(undefined8 *)(puVar8 + 0x34);
      local_4d8 = *(undefined8 *)(puVar8 + 0x62);
      local_588 = *(undefined8 *)(puVar8 + 0x36);
      uStack_580 = *(undefined8 *)(puVar8 + 0x38);
      local_578 = *(undefined8 *)(puVar8 + 0x3a);
      uStack_570 = *(undefined8 *)(puVar8 + 0x3c);
      local_568 = *(undefined8 *)(puVar8 + 0x3e);
      uStack_560 = *(undefined8 *)(puVar8 + 0x40);
      local_558 = *(undefined8 *)(puVar8 + 0x42);
      uStack_550 = *(undefined8 *)(puVar8 + 0x44);
      local_548 = *(undefined8 *)(puVar8 + 0x46);
      uStack_540 = *(undefined8 *)(puVar8 + 0x48);
      local_538 = *(undefined8 *)(puVar8 + 0x4a);
      uStack_530 = *(undefined8 *)(puVar8 + 0x4c);
      local_528 = *(undefined8 *)(puVar8 + 0x4e);
      uStack_520 = *(undefined8 *)(puVar8 + 0x50);
      local_518 = *(undefined8 *)(puVar8 + 0x52);
      uStack_510 = *(undefined8 *)(puVar8 + 0x54);
      local_508 = *(undefined8 *)(puVar8 + 0x56);
      uStack_500 = *(undefined8 *)(puVar8 + 0x58);
      uVar2 = *(undefined8 *)(puVar8 + 0x5a);
      uVar3 = *(undefined8 *)(puVar8 + 0x5c);
      local_4e8 = *(undefined8 *)(puVar8 + 0x5e);
      uStack_4e0 = *(undefined8 *)(puVar8 + 0x60);
      uVar4 = *(undefined8 *)(puVar10 + -0x30);
      *(undefined8 *)puVar12 = *(undefined8 *)puVar9;
      *(undefined8 *)(puVar8 + 0x34) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0x2c);
      *(undefined8 *)(puVar8 + 0x36) = *(undefined8 *)(puVar10 + -0x2e);
      *(undefined8 *)(puVar8 + 0x38) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0x28);
      *(undefined8 *)(puVar8 + 0x3a) = *(undefined8 *)(puVar10 + -0x2a);
      *(undefined8 *)(puVar8 + 0x3c) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0x24);
      *(undefined8 *)(puVar8 + 0x3e) = *(undefined8 *)(puVar10 + -0x26);
      *(undefined8 *)(puVar8 + 0x40) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0x20);
      *(undefined8 *)(puVar8 + 0x42) = *(undefined8 *)(puVar10 + -0x22);
      *(undefined8 *)(puVar8 + 0x44) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0x1c);
      *(undefined8 *)(puVar8 + 0x46) = *(undefined8 *)(puVar10 + -0x1e);
      *(undefined8 *)(puVar8 + 0x48) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0x18);
      *(undefined8 *)(puVar8 + 0x4a) = *(undefined8 *)(puVar10 + -0x1a);
      *(undefined8 *)(puVar8 + 0x4c) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0x14);
      *(undefined8 *)(puVar8 + 0x4e) = *(undefined8 *)(puVar10 + -0x16);
      *(undefined8 *)(puVar8 + 0x50) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0x10);
      *(undefined8 *)(puVar8 + 0x52) = *(undefined8 *)(puVar10 + -0x12);
      *(undefined8 *)(puVar8 + 0x54) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -0xc);
      *(undefined8 *)(puVar8 + 0x56) = *(undefined8 *)(puVar10 + -0xe);
      *(undefined8 *)(puVar8 + 0x58) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -8);
      *(undefined8 *)(puVar8 + 0x5a) = *(undefined8 *)(puVar10 + -10);
      *(undefined8 *)(puVar8 + 0x5c) = uVar4;
      uVar4 = *(undefined8 *)(puVar10 + -4);
      *(undefined8 *)(puVar8 + 0x5e) = *(undefined8 *)(puVar10 + -6);
      *(undefined8 *)(puVar8 + 0x60) = uVar4;
      *(undefined8 *)(puVar8 + 0x62) = *(undefined8 *)(puVar10 + -2);
      *(undefined8 *)puVar9 = local_598;
      *(undefined8 *)(puVar10 + -0x30) = uStack_590;
      *(undefined8 *)(puVar10 + -0x2e) = local_588;
      *(undefined8 *)(puVar10 + -0x2c) = uStack_580;
      *(undefined8 *)(puVar10 + -0x2a) = local_578;
      *(undefined8 *)(puVar10 + -0x28) = uStack_570;
      *(undefined8 *)(puVar10 + -0x26) = local_568;
      *(undefined8 *)(puVar10 + -0x24) = uStack_560;
      *(undefined8 *)(puVar10 + -0x22) = local_558;
      *(undefined8 *)(puVar10 + -0x20) = uStack_550;
      *(undefined8 *)(puVar10 + -0x1e) = local_548;
      *(undefined8 *)(puVar10 + -0x1c) = uStack_540;
      *(undefined8 *)(puVar10 + -0x1a) = local_538;
      *(undefined8 *)(puVar10 + -0x18) = uStack_530;
      *(undefined8 *)(puVar10 + -0x16) = local_528;
      *(undefined8 *)(puVar10 + -0x14) = uStack_520;
      *(undefined8 *)(puVar10 + -0x12) = local_518;
      *(undefined8 *)(puVar10 + -0x10) = uStack_510;
      local_4f8._0_4_ = (uint)uVar2;
      local_4f8._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
      uStack_4f0._0_4_ = (uint)uVar3;
      uStack_4f0._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
      *(undefined8 *)(puVar10 + -0xe) = local_508;
      *(undefined8 *)(puVar10 + -0xc) = uStack_500;
      puVar10[-10] = (uint)local_4f8;
      puVar10[-9] = local_4f8._4_4_;
      puVar10[-8] = (uint)uStack_4f0;
      puVar10[-7] = uStack_4f0._4_4_;
      *(undefined8 *)(puVar10 + -6) = local_4e8;
      *(undefined8 *)(puVar10 + -4) = uStack_4e0;
      *(undefined8 *)(puVar10 + -2) = local_4d8;
      local_4f8 = uVar2;
      uStack_4f0 = uVar3;
    }
    goto LAB_142898970;
  }
  if (puVar11 != puVar9) {
    local_4d0 = *(undefined8 *)puVar11;
    uStack_4c8 = *(undefined8 *)(puVar11 + 2);
    local_410 = *(undefined8 *)(puVar11 + 0x30);
    local_4c0 = *(undefined8 *)(puVar11 + 4);
    uStack_4b8 = *(undefined8 *)(puVar11 + 6);
    local_4b0 = *(undefined8 *)(puVar11 + 8);
    uStack_4a8 = *(undefined8 *)(puVar11 + 10);
    local_4a0 = *(undefined8 *)(puVar11 + 0xc);
    uStack_498 = *(undefined8 *)(puVar11 + 0xe);
    local_490 = *(undefined8 *)(puVar11 + 0x10);
    uStack_488 = *(undefined8 *)(puVar11 + 0x12);
    local_480 = *(undefined8 *)(puVar11 + 0x14);
    uStack_478 = *(undefined8 *)(puVar11 + 0x16);
    local_470 = *(undefined8 *)(puVar11 + 0x18);
    uStack_468 = *(undefined8 *)(puVar11 + 0x1a);
    local_460 = *(undefined8 *)(puVar11 + 0x1c);
    uStack_458 = *(undefined8 *)(puVar11 + 0x1e);
    local_450 = *(undefined8 *)(puVar11 + 0x20);
    uStack_448 = *(undefined8 *)(puVar11 + 0x22);
    local_440 = *(undefined8 *)(puVar11 + 0x24);
    uStack_438 = *(undefined8 *)(puVar11 + 0x26);
    uVar2 = *(undefined8 *)(puVar11 + 0x28);
    uVar3 = *(undefined8 *)(puVar11 + 0x2a);
    local_420 = *(undefined8 *)(puVar11 + 0x2c);
    uStack_418 = *(undefined8 *)(puVar11 + 0x2e);
    uVar4 = *(undefined8 *)(puVar10 + -0x30);
    *(undefined8 *)puVar11 = *(undefined8 *)puVar9;
    *(undefined8 *)(puVar11 + 2) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0x2c);
    *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar10 + -0x2e);
    *(undefined8 *)(puVar11 + 6) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0x28);
    *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar10 + -0x2a);
    *(undefined8 *)(puVar11 + 10) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0x24);
    *(undefined8 *)(puVar11 + 0xc) = *(undefined8 *)(puVar10 + -0x26);
    *(undefined8 *)(puVar11 + 0xe) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0x20);
    *(undefined8 *)(puVar11 + 0x10) = *(undefined8 *)(puVar10 + -0x22);
    *(undefined8 *)(puVar11 + 0x12) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0x1c);
    *(undefined8 *)(puVar11 + 0x14) = *(undefined8 *)(puVar10 + -0x1e);
    *(undefined8 *)(puVar11 + 0x16) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0x18);
    *(undefined8 *)(puVar11 + 0x18) = *(undefined8 *)(puVar10 + -0x1a);
    *(undefined8 *)(puVar11 + 0x1a) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0x14);
    *(undefined8 *)(puVar11 + 0x1c) = *(undefined8 *)(puVar10 + -0x16);
    *(undefined8 *)(puVar11 + 0x1e) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0x10);
    *(undefined8 *)(puVar11 + 0x20) = *(undefined8 *)(puVar10 + -0x12);
    *(undefined8 *)(puVar11 + 0x22) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -0xc);
    *(undefined8 *)(puVar11 + 0x24) = *(undefined8 *)(puVar10 + -0xe);
    *(undefined8 *)(puVar11 + 0x26) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -8);
    *(undefined8 *)(puVar11 + 0x28) = *(undefined8 *)(puVar10 + -10);
    *(undefined8 *)(puVar11 + 0x2a) = uVar4;
    uVar4 = *(undefined8 *)(puVar10 + -4);
    *(undefined8 *)(puVar11 + 0x2c) = *(undefined8 *)(puVar10 + -6);
    *(undefined8 *)(puVar11 + 0x2e) = uVar4;
    *(undefined8 *)(puVar11 + 0x30) = *(undefined8 *)(puVar10 + -2);
    *(undefined8 *)puVar9 = local_4d0;
    *(undefined8 *)(puVar10 + -0x30) = uStack_4c8;
    *(undefined8 *)(puVar10 + -0x2e) = local_4c0;
    *(undefined8 *)(puVar10 + -0x2c) = uStack_4b8;
    *(undefined8 *)(puVar10 + -0x2a) = local_4b0;
    *(undefined8 *)(puVar10 + -0x28) = uStack_4a8;
    *(undefined8 *)(puVar10 + -0x26) = local_4a0;
    *(undefined8 *)(puVar10 + -0x24) = uStack_498;
    *(undefined8 *)(puVar10 + -0x22) = local_490;
    *(undefined8 *)(puVar10 + -0x20) = uStack_488;
    *(undefined8 *)(puVar10 + -0x1e) = local_480;
    *(undefined8 *)(puVar10 + -0x1c) = uStack_478;
    *(undefined8 *)(puVar10 + -0x1a) = local_470;
    *(undefined8 *)(puVar10 + -0x18) = uStack_468;
    *(undefined8 *)(puVar10 + -0x16) = local_460;
    *(undefined8 *)(puVar10 + -0x14) = uStack_458;
    *(undefined8 *)(puVar10 + -0x12) = local_450;
    *(undefined8 *)(puVar10 + -0x10) = uStack_448;
    local_430._0_4_ = (uint)uVar2;
    local_430._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
    uStack_428._0_4_ = (uint)uVar3;
    uStack_428._4_4_ = (uint)((ulonglong)uVar3 >> 0x20);
    *(undefined8 *)(puVar10 + -0xe) = local_440;
    *(undefined8 *)(puVar10 + -0xc) = uStack_438;
    puVar10[-10] = (uint)local_430;
    puVar10[-9] = local_430._4_4_;
    puVar10[-8] = (uint)uStack_428;
    puVar10[-7] = uStack_428._4_4_;
    *(undefined8 *)(puVar10 + -6) = local_420;
    *(undefined8 *)(puVar10 + -4) = uStack_418;
    *(undefined8 *)(puVar10 + -2) = local_410;
    local_430 = uVar2;
    uStack_428 = uVar3;
  }
  local_668._0_4_ = (int)local_668 + -1;
  lVar5 = (longlong)puVar9 + (-200 - (longlong)puVar11);
  lVar5 = lVar5 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar5),8);
  lVar6 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)puVar7 - (longlong)puVar12),8) +
          ((longlong)puVar7 - (longlong)puVar12);
  if ((lVar5 >> 7) - (lVar5 >> 0x3f) < (lVar6 >> 7) - (lVar6 >> 0x3f)) {
    if (puVar12 < puVar7) {
      *plVar13 = (longlong)puVar12;
      plVar13[1] = (longlong)puVar7;
      *(int *)(plVar13 + 2) = (int)local_668;
      plVar13 = plVar13 + 3;
    }
    if (puVar9 <= puVar11 + 0x32) goto LAB_142898e01;
    puVar7 = puVar10 + -100;
    puVar12 = puVar11;
  }
  else {
    if (puVar11 + 0x32 < puVar9) {
      *plVar13 = (longlong)puVar11;
      plVar13[1] = (longlong)(puVar10 + -100);
      *(int *)(plVar13 + 2) = (int)local_668;
      plVar13 = plVar13 + 3;
    }
    if (puVar7 <= puVar12) goto LAB_142898e01;
  }
  lVar5 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)puVar7 - (longlong)puVar12),8) +
          ((longlong)puVar7 - (longlong)puVar12);
  lVar5 = ((lVar5 >> 7) + 1) - (lVar5 >> 0x3f);
  puVar11 = puVar12;
  if ((int)local_668 == 0) goto LAB_142898df2;
  goto LAB_1428987b0;
}



// FUNCTION 142899040 IntroSortInternal<FInputActionKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputActionKeyMapping,TLess<FInputActionKeyMapping>_>_> body=1085 status=ok
// SIG undefined IntroSortInternal<FInputActionKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputActionKeyMapping,TLess<FInputActionKeyMapping>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void AlgoImpl::
     IntroSortInternal<FInputActionKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputActionKeyMapping,TLess<FInputActionKeyMapping>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_388 [32];
  longlong *local_368;
  longlong local_350;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (param_2 < 2) {
    return;
  }
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  lStack_340 = param_1 + param_2 * 0x28 + -0x28;
  fVar17 = (float)(longlong)param_2;
  if ((longlong)param_2 < 0) {
    fVar17 = fVar17 + 1.8446744e+19;
  }
  local_348 = param_1;
  fVar17 = ::_guard_xfg_dispatch_icall_nop(fVar17);
  local_338 = (undefined4)(longlong)(fVar17 + fVar17);
  ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
  plVar12 = &local_348;
  do {
    plVar15 = (longlong *)plVar12[1];
    local_350 = plVar12[2];
    lVar7 = (longlong)plVar15 - *plVar12;
    local_368 = plVar12;
    plVar5 = (longlong *)*plVar12;
    iVar13 = (int)local_350;
joined_r0x00014289913a:
    lVar8 = lVar7 / 0x28 + 1;
    if (iVar13 == 0) {
      HeapSortInternal<FInputActionKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputActionKeyMapping,TLess<FInputActionKeyMapping>_>_>
                (plVar5,lVar8,param_3,param_4);
    }
    else {
      if (8 < lVar8) {
        if (lVar8 < 0) {
          lVar8 = lVar7 / 0x28 + 2;
        }
        plVar9 = plVar5 + (lVar8 >> 1) * 5;
        if (plVar9 != plVar5) {
          lVar8 = plVar5[1];
          lVar1 = *plVar9;
          lVar2 = plVar9[1];
          lVar3 = plVar9[2];
          lVar4 = plVar9[3];
          lVar7 = plVar9[4];
          *plVar9 = *plVar5;
          plVar9[1] = lVar8;
          lVar8 = plVar5[3];
          plVar9[2] = plVar5[2];
          plVar9[3] = lVar8;
          plVar9[4] = plVar5[4];
          *plVar5 = lVar1;
          plVar5[1] = lVar2;
          plVar5[2] = lVar3;
          plVar5[3] = lVar4;
          plVar5[4] = lVar7;
        }
        plVar9 = plVar15 + 5;
        plVar11 = plVar5;
LAB_1428991a0:
        plVar14 = plVar11;
        plVar11 = plVar14 + 5;
        if ((plVar11 <= plVar15) && (iVar6 = FName::Compare(plVar5,plVar11), -1 < iVar6)) break;
        goto LAB_1428991d1;
      }
      for (; plVar11 = plVar5, plVar9 = plVar5, plVar5 < plVar15; plVar15 = plVar15 + -5) {
        while (plVar12 = plVar11, plVar9 = plVar9 + 5, plVar9 <= plVar15) {
          bVar16 = false;
          iVar13 = FName::Compare(plVar12,plVar9);
          if (iVar13 < 0) {
            bVar16 = true;
          }
          else if (*plVar12 == *plVar9) {
            iVar13 = FName::Compare(plVar12 + 2,plVar9 + 2);
            bVar16 = iVar13 < 0;
          }
          plVar11 = plVar9;
          if (!bVar16) {
            plVar11 = plVar12;
          }
        }
        if (plVar12 != plVar15) {
          lVar8 = plVar15[1];
          lVar1 = *plVar12;
          lVar2 = plVar12[1];
          lVar3 = plVar12[2];
          lVar4 = plVar12[3];
          lVar7 = plVar12[4];
          *plVar12 = *plVar15;
          plVar12[1] = lVar8;
          lVar8 = plVar15[3];
          plVar12[2] = plVar15[2];
          plVar12[3] = lVar8;
          plVar12[4] = plVar15[4];
          *plVar15 = lVar1;
          plVar15[1] = lVar2;
          plVar15[2] = lVar3;
          plVar15[3] = lVar4;
          plVar15[4] = lVar7;
        }
        plVar12 = local_368;
      }
    }
LAB_142899361:
    plVar12 = plVar12 + -3;
    if (plVar12 < &local_348) {
      return;
    }
  } while( true );
  if ((*plVar5 != *plVar11) || (iVar6 = FName::Compare(plVar5 + 2,plVar14 + 7), -1 < iVar6))
  goto LAB_1428991a0;
LAB_1428991d1:
  do {
    plVar10 = plVar9;
    plVar9 = plVar10 + -5;
    if ((plVar9 <= plVar5) || (iVar6 = FName::Compare(plVar9,plVar5), iVar6 < 0)) break;
  } while ((*plVar9 != *plVar5) || (iVar6 = FName::Compare(plVar10 + -3,plVar5 + 2), -1 < iVar6));
  if (plVar11 <= plVar9) {
    if (plVar11 != plVar9) {
      lVar8 = plVar10[-4];
      lVar1 = *plVar11;
      lVar2 = plVar14[6];
      lVar3 = plVar14[7];
      lVar4 = plVar14[8];
      lVar7 = plVar14[9];
      *plVar11 = *plVar9;
      plVar14[6] = lVar8;
      lVar8 = plVar10[-2];
      plVar14[7] = plVar10[-3];
      plVar14[8] = lVar8;
      plVar14[9] = plVar10[-1];
      *plVar9 = lVar1;
      plVar10[-4] = lVar2;
      plVar10[-3] = lVar3;
      plVar10[-2] = lVar4;
      plVar10[-1] = lVar7;
    }
    goto LAB_1428991a0;
  }
  if (plVar5 != plVar9) {
    lVar8 = plVar10[-4];
    lVar1 = *plVar5;
    lVar2 = plVar5[1];
    lVar3 = plVar5[2];
    lVar4 = plVar5[3];
    lVar7 = plVar5[4];
    *plVar5 = *plVar9;
    plVar5[1] = lVar8;
    lVar8 = plVar10[-2];
    plVar5[2] = plVar10[-3];
    plVar5[3] = lVar8;
    plVar5[4] = plVar10[-1];
    *plVar9 = lVar1;
    plVar10[-4] = lVar2;
    plVar10[-3] = lVar3;
    plVar10[-2] = lVar4;
    plVar10[-1] = lVar7;
  }
  iVar13 = iVar13 + -1;
  if (((longlong)plVar9 + (-0x28 - (longlong)plVar5)) / 0x28 <
      ((longlong)plVar15 - (longlong)plVar11) / 0x28) {
    if (plVar11 < plVar15) {
      *plVar12 = (longlong)plVar11;
      plVar12[1] = (longlong)plVar15;
      *(int *)(plVar12 + 2) = iVar13;
      plVar12 = plVar12 + 3;
      local_368 = plVar12;
    }
    if (plVar9 <= plVar5 + 5) goto LAB_142899361;
    plVar15 = plVar10 + -10;
    plVar11 = plVar5;
  }
  else {
    if (plVar5 + 5 < plVar9) {
      *plVar12 = (longlong)plVar5;
      plVar12[1] = (longlong)(plVar10 + -10);
      *(int *)(plVar12 + 2) = iVar13;
      plVar12 = plVar12 + 3;
      local_368 = plVar12;
    }
    if (plVar15 <= plVar11) goto LAB_142899361;
  }
  lVar7 = (longlong)plVar15 - (longlong)plVar11;
  plVar5 = plVar11;
  goto joined_r0x00014289913a;
}



// FUNCTION 142899480 IntroSortInternal<FInputAxisKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputAxisKeyMapping,TLess<FInputAxisKeyMapping>_>_> body=963 status=ok
// SIG undefined IntroSortInternal<FInputAxisKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputAxisKeyMapping,TLess<FInputAxisKeyMapping>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FInputAxisKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputAxisKeyMapping,TLess<FInputAxisKeyMapping>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + param_2 * 0x28 + -0x28;
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar17 = ::_guard_xfg_dispatch_icall_nop(fVar17);
    local_338 = (undefined4)(longlong)(fVar17 + fVar17);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar12 = &local_348;
    do {
      puVar15 = (undefined8 *)*plVar12;
      puVar16 = (undefined8 *)plVar12[1];
      local_358 = plVar12[2];
      lVar8 = ((longlong)puVar16 - (longlong)puVar15) / 0x28 + 1;
      puVar14 = puVar15;
      iVar13 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142899580:
        if (8 < lVar8) {
          if (lVar8 < 0) {
            lVar8 = lVar8 + 1;
          }
          puVar15 = puVar14 + (lVar8 >> 1) * 5;
          if (puVar15 != puVar14) {
            uVar2 = puVar14[1];
            uVar3 = *puVar15;
            uVar4 = puVar15[1];
            uVar5 = puVar15[2];
            uVar6 = puVar15[3];
            uVar1 = puVar15[4];
            *puVar15 = *puVar14;
            puVar15[1] = uVar2;
            uVar2 = puVar14[3];
            puVar15[2] = puVar14[2];
            puVar15[3] = uVar2;
            puVar15[4] = puVar14[4];
            *puVar14 = uVar3;
            puVar14[1] = uVar4;
            puVar14[2] = uVar5;
            puVar14[3] = uVar6;
            puVar14[4] = uVar1;
          }
          puVar9 = puVar16 + 5;
          puVar15 = puVar14;
LAB_1428995e0:
          puVar11 = puVar15;
          puVar15 = puVar11 + 5;
          if (puVar15 <= puVar16) goto code_r0x0001428995e9;
          goto LAB_142899600;
        }
        for (; puVar9 = puVar14, puVar15 = puVar14, puVar14 < puVar16; puVar16 = puVar16 + -5) {
          while (puVar15 = puVar15 + 5, puVar15 <= puVar16) {
            cVar7 = FInputAxisKeyMapping::operator<(puVar9,puVar15);
            if (cVar7 != '\0') {
              puVar9 = puVar15;
            }
          }
          if (puVar9 != puVar16) {
            uVar2 = puVar16[1];
            uVar3 = *puVar9;
            uVar4 = puVar9[1];
            uVar5 = puVar9[2];
            uVar6 = puVar9[3];
            uVar1 = puVar9[4];
            *puVar9 = *puVar16;
            puVar9[1] = uVar2;
            uVar2 = puVar16[3];
            puVar9[2] = puVar16[2];
            puVar9[3] = uVar2;
            puVar9[4] = puVar16[4];
            *puVar16 = uVar3;
            puVar16[1] = uVar4;
            puVar16[2] = uVar5;
            puVar16[3] = uVar6;
            puVar16[4] = uVar1;
          }
        }
        goto LAB_142899769;
      }
LAB_142899750:
      HeapSortInternal<FInputAxisKeyMapping,FIdentityFunctor,TDereferenceWrapper<FInputAxisKeyMapping,TLess<FInputAxisKeyMapping>_>_>
                (puVar15,lVar8,param_3,param_4);
LAB_142899769:
      plVar12 = plVar12 + -3;
    } while (&local_348 <= plVar12);
  }
  return;
code_r0x0001428995e9:
  cVar7 = FInputAxisKeyMapping::operator<(puVar14,puVar15);
  if (cVar7 == '\0') goto LAB_1428995e0;
LAB_142899600:
  do {
    puVar10 = puVar9;
    puVar9 = puVar10 + -5;
    if (puVar9 <= puVar14) break;
    cVar7 = FInputAxisKeyMapping::operator<(puVar9,puVar14);
  } while (cVar7 == '\0');
  if (puVar15 <= puVar9) {
    if (puVar15 != puVar9) {
      uVar2 = puVar10[-4];
      uVar3 = *puVar15;
      uVar4 = puVar11[6];
      uVar5 = puVar11[7];
      uVar6 = puVar11[8];
      uVar1 = puVar11[9];
      *puVar15 = *puVar9;
      puVar11[6] = uVar2;
      uVar2 = puVar10[-2];
      puVar11[7] = puVar10[-3];
      puVar11[8] = uVar2;
      puVar11[9] = puVar10[-1];
      *puVar9 = uVar3;
      puVar10[-4] = uVar4;
      puVar10[-3] = uVar5;
      puVar10[-2] = uVar6;
      puVar10[-1] = uVar1;
    }
    goto LAB_1428995e0;
  }
  if (puVar14 != puVar9) {
    uVar2 = puVar10[-4];
    uVar3 = *puVar14;
    uVar4 = puVar14[1];
    uVar5 = puVar14[2];
    uVar6 = puVar14[3];
    uVar1 = puVar14[4];
    *puVar14 = *puVar9;
    puVar14[1] = uVar2;
    uVar2 = puVar10[-2];
    puVar14[2] = puVar10[-3];
    puVar14[3] = uVar2;
    puVar14[4] = puVar10[-1];
    *puVar9 = uVar3;
    puVar10[-4] = uVar4;
    puVar10[-3] = uVar5;
    puVar10[-2] = uVar6;
    puVar10[-1] = uVar1;
  }
  iVar13 = iVar13 + -1;
  if (((longlong)puVar9 + (-0x28 - (longlong)puVar14)) / 0x28 <
      ((longlong)puVar16 - (longlong)puVar15) / 0x28) {
    if (puVar15 < puVar16) {
      *plVar12 = (longlong)puVar15;
      plVar12[1] = (longlong)puVar16;
      *(int *)(plVar12 + 2) = iVar13;
      plVar12 = plVar12 + 3;
    }
    if (puVar9 <= puVar14 + 5) goto LAB_142899769;
    puVar16 = puVar10 + -10;
    puVar15 = puVar14;
  }
  else {
    if (puVar14 + 5 < puVar9) {
      *plVar12 = (longlong)puVar14;
      plVar12[1] = (longlong)(puVar10 + -10);
      *(int *)(plVar12 + 2) = iVar13;
      plVar12 = plVar12 + 3;
    }
    if (puVar16 <= puVar15) goto LAB_142899769;
  }
  lVar8 = ((longlong)puVar16 - (longlong)puVar15) / 0x28 + 1;
  puVar14 = puVar15;
  if (iVar13 == 0) goto LAB_142899750;
  goto LAB_142899580;
}



// FUNCTION 142899850 IntroSortInternal<FCanvas::FCanvasSortElement,FIdentityFunctor,TDereferenceWrapper<FCanvas::FCanvasSortElement,`FCanvas::Flush_GameThread'::`2'::FCompareFCanvasSortElement>_> body=815 status=ok
// SIG undefined IntroSortInternal<FCanvas::FCanvasSortElement,FIdentityFunctor,TDereferenceWrapper<FCanvas::FCanvasSortElement,`FCanvas::Flush_GameThread'::`2'::FCompareFCanvasSortElement>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FCanvas::FCanvasSortElement,FIdentityFunctor,TDereferenceWrapper<FCanvas::FCanvasSortElement,_FCanvas::Flush_GameThread_::_2_::FCompareFCanvasSortElement>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x18 + -0x18;
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar17 = ::_guard_xfg_dispatch_icall_nop(fVar17);
    local_328 = (undefined4)(longlong)(fVar17 + fVar17);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar16 = &local_338;
    do {
      piVar15 = (int *)*plVar16;
      piVar10 = (int *)plVar16[1];
      lVar1 = plVar16[2];
      local_348._0_4_ = (int)lVar1;
      lVar9 = ((longlong)piVar10 - (longlong)piVar15) / 0x18 + 1;
      piVar14 = piVar15;
      if ((int)local_348 != 0) {
LAB_142899940:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          piVar15 = piVar14 + (lVar9 >> 1) * 6;
          if (piVar15 != piVar14) {
            iVar3 = piVar14[1];
            iVar4 = piVar14[2];
            iVar5 = piVar14[3];
            uVar6 = *(undefined8 *)piVar15;
            uVar7 = *(undefined8 *)(piVar15 + 2);
            uVar2 = *(undefined8 *)(piVar15 + 4);
            *piVar15 = *piVar14;
            piVar15[1] = iVar3;
            piVar15[2] = iVar4;
            piVar15[3] = iVar5;
            *(undefined8 *)(piVar15 + 4) = *(undefined8 *)(piVar14 + 4);
            *(undefined8 *)piVar14 = uVar6;
            *(undefined8 *)(piVar14 + 2) = uVar7;
            *(undefined8 *)(piVar14 + 4) = uVar2;
          }
          piVar12 = piVar10 + 6;
          piVar15 = piVar14;
LAB_142899990:
          piVar11 = piVar15;
          piVar15 = piVar11 + 6;
          if (piVar15 <= piVar10) goto code_r0x000142899999;
          goto LAB_1428999a1;
        }
        for (; piVar12 = piVar14, piVar15 = piVar14, piVar14 < piVar10; piVar10 = piVar10 + -6) {
          while (piVar11 = piVar12, piVar15 = piVar15 + 6, piVar15 <= piVar10) {
            piVar12 = piVar15;
            if (*piVar11 <= *piVar15) {
              piVar12 = piVar11;
            }
          }
          if (piVar11 != piVar10) {
            uVar6 = *(undefined8 *)(piVar10 + 2);
            uVar7 = *(undefined8 *)piVar11;
            uVar8 = *(undefined8 *)(piVar11 + 2);
            uVar2 = *(undefined8 *)(piVar11 + 4);
            *(undefined8 *)piVar11 = *(undefined8 *)piVar10;
            *(undefined8 *)(piVar11 + 2) = uVar6;
            *(undefined8 *)(piVar11 + 4) = *(undefined8 *)(piVar10 + 4);
            *(undefined8 *)piVar10 = uVar7;
            *(undefined8 *)(piVar10 + 2) = uVar8;
            *(undefined8 *)(piVar10 + 4) = uVar2;
          }
        }
        goto LAB_142899acd;
      }
LAB_142899abe:
      local_348 = lVar1;
      HeapSortInternal<FCanvas::FCanvasSortElement,FIdentityFunctor,TDereferenceWrapper<FCanvas::FCanvasSortElement,_FCanvas::Flush_GameThread_::_2_::FCompareFCanvasSortElement>_>
                (piVar15,lVar9,param_3,param_4);
LAB_142899acd:
      plVar16 = plVar16 + -3;
    } while (&local_338 <= plVar16);
  }
  return;
code_r0x000142899999:
  if (*piVar14 <= *piVar15) goto LAB_142899990;
LAB_1428999a1:
  do {
    piVar13 = piVar12;
    piVar12 = piVar13 + -6;
    if (piVar12 <= piVar14) break;
  } while (*piVar12 <= *piVar14);
  if (piVar15 <= piVar12) {
    if (piVar15 != piVar12) {
      iVar3 = piVar13[-5];
      iVar4 = piVar13[-4];
      iVar5 = piVar13[-3];
      uVar6 = *(undefined8 *)piVar15;
      uVar7 = *(undefined8 *)(piVar11 + 8);
      uVar2 = *(undefined8 *)(piVar11 + 10);
      *piVar15 = *piVar12;
      piVar11[7] = iVar3;
      piVar11[8] = iVar4;
      piVar11[9] = iVar5;
      *(undefined8 *)(piVar11 + 10) = *(undefined8 *)(piVar13 + -2);
      *(undefined8 *)piVar12 = uVar6;
      *(undefined8 *)(piVar13 + -4) = uVar7;
      *(undefined8 *)(piVar13 + -2) = uVar2;
    }
    goto LAB_142899990;
  }
  if (piVar14 != piVar12) {
    iVar3 = piVar13[-5];
    iVar4 = piVar13[-4];
    iVar5 = piVar13[-3];
    uVar6 = *(undefined8 *)piVar14;
    uVar7 = *(undefined8 *)(piVar14 + 2);
    uVar2 = *(undefined8 *)(piVar14 + 4);
    *piVar14 = *piVar12;
    piVar14[1] = iVar3;
    piVar14[2] = iVar4;
    piVar14[3] = iVar5;
    *(undefined8 *)(piVar14 + 4) = *(undefined8 *)(piVar13 + -2);
    *(undefined8 *)piVar12 = uVar6;
    *(undefined8 *)(piVar13 + -4) = uVar7;
    *(undefined8 *)(piVar13 + -2) = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar9 = (longlong)piVar12 + (-0x18 - (longlong)piVar14);
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)piVar10 - (longlong)piVar15) / 0x18) {
    if (piVar15 < piVar10) {
      *plVar16 = (longlong)piVar15;
      plVar16[1] = (longlong)piVar10;
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (piVar12 <= piVar14 + 6) goto LAB_142899acd;
    piVar10 = piVar13 + -0xc;
    piVar15 = piVar14;
  }
  else {
    if (piVar14 + 6 < piVar12) {
      *plVar16 = (longlong)piVar14;
      plVar16[1] = (longlong)(piVar13 + -0xc);
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (piVar10 <= piVar15) goto LAB_142899acd;
  }
  lVar9 = ((longlong)piVar10 - (longlong)piVar15) / 0x18 + 1;
  piVar14 = piVar15;
  if ((int)local_348 == 0) goto LAB_142899abe;
  goto LAB_142899940;
}



// FUNCTION 142899b80 TryLoadClass<UDPICustomScalingRule> body=122 status=ok
// SIG undefined TryLoadClass<UDPICustomScalingRule>(void)

undefined8 FSoftClassPath::TryLoadClass<UDPICustomScalingRule>(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)FSoftObjectPath::ToString(param_1,local_18);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    uVar2 = UDPICustomScalingRule::GetPrivateStaticClass();
    uVar2 = FUN_141799830(uVar2,0,puVar3,0,0,0);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 142899c00 FUN_142899c00 body=411 status=ok
// SIG undefined FUN_142899c00(void)

longlong * FUN_142899c00(longlong *param_1,short *param_2)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  short *local_18;
  ulonglong local_10;
  
  FUN_141785db0(param_2);
  lVar6 = 0;
  local_10 = 0;
  local_18 = (short *)0x0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_10 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar4 * 2);
  }
  FUN_14179acf0(&local_18,1);
  for (psVar3 = local_18; iVar1 = (int)local_10, psVar3 != local_18 + (int)local_10;
      psVar3 = psVar3 + 1) {
    if (*psVar3 == 0x2e) {
      iVar7 = (int)((longlong)psVar3 - (longlong)local_18 >> 1);
      if (iVar7 != -1) {
        iVar1 = ((int)local_10 - iVar7) + -1;
        if (iVar1 != 0) {
          _guard_xfg_dispatch_icall_nop(local_18 + iVar7,local_18 + (iVar7 + 1),(longlong)iVar1 * 2)
          ;
        }
        iVar1 = (int)local_10 + -1;
        local_10 = CONCAT44(local_10._4_4_,iVar1);
      }
      break;
    }
  }
  psVar3 = &DAT_143f3eda8;
  if (iVar1 != 0) {
    psVar3 = local_18;
  }
  lVar5 = FUN_14178ae20(0,psVar3);
  if (lVar5 == 0) {
    psVar3 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      psVar3 = local_18;
    }
    lVar5 = LoadPackage(0,psVar3,0,0);
    if (lVar5 == 0) goto LAB_142899d63;
  }
  iVar1 = *(int *)(lVar5 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar2 = iVar1 >> 0x1f & 0xffff;
    uVar4 = iVar1 + uVar2;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar2) * 0x18;
  }
  *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
LAB_142899d63:
  *param_1 = lVar5;
  if (lVar5 == 0) {
    FUN_14178ab20(param_2);
  }
  if (local_18 != (short *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142899da0 FUN_142899da0 body=119 status=ok
// SIG undefined FUN_142899da0(void)

undefined8 * FUN_142899da0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VectorFieldComponent0",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a2a1b0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 142899e20 FCanvas body=247 status=ok
// SIG undefined FCanvas(void)

longlong FCanvas::FCanvas(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                         undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8
                         )

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x84) = param_5;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = param_8;
  *(undefined4 *)(param_1 + 0x80) = param_4;
  *(undefined4 *)(param_1 + 0x88) = param_6;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = param_7;
  *(undefined4 *)(param_1 + 0x98) = 0x96;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  FUN_1428a13e0(param_1);
  return param_1;
}



// FUNCTION 142899f20 FUN_142899f20 body=298 status=ok
// SIG undefined FUN_142899f20(void)

longlong FUN_142899f20(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x1b8);
  }
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = param_5;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined4 *)(param_1 + 0x134) = param_6;
  *(undefined4 *)(param_1 + 0x138) = param_7;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0x96;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  FUN_1428a13e0(param_1);
  if (param_4 != 0) {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_4 + 0x798);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_4 + 0x790);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_4 + 0x7b0);
  }
  return param_1;
}



// FUNCTION 14289a050 FCanvasTileItem body=148 status=ok
// SIG undefined FCanvasTileItem(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FCanvasTileItem::FCanvasTileItem
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_143f4c5f0;
  uVar1 = *param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[1] = uVar1;
  uVar2 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  *param_1 = &PTR_FUN_1451e2200;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = *param_3;
  param_1[8] = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xb] = DAT_146ac3d68;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d88._4_4_;
  uVar1 = param_4[1];
  param_1[5] = *param_4;
  param_1[6] = uVar1;
  return param_1;
}



// FUNCTION 14289a0f0 FCanvasTileItem body=143 status=ok
// SIG undefined FCanvasTileItem(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FCanvasTileItem::FCanvasTileItem
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_143f4c5f0;
  uVar1 = *param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[1] = uVar1;
  uVar2 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  *param_1 = &PTR_FUN_1451e2200;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = *param_4;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x44) = *param_5;
  *(undefined8 *)((longlong)param_1 + 0x4c) = *param_6;
  param_1[0xb] = 0;
  param_1[0xc] = param_3;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d88._4_4_;
  return param_1;
}



// FUNCTION 14289a180 FCanvasTileItem body=133 status=ok
// SIG undefined FCanvasTileItem(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FCanvasTileItem::FCanvasTileItem
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_143f4c5f0;
  uVar1 = *param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[1] = uVar1;
  uVar2 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  *param_1 = &PTR_FUN_1451e2200;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = *param_4;
  param_1[8] = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = param_3;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d88._4_4_;
  return param_1;
}



// FUNCTION 14289a210 FCanvasTileItem body=155 status=ok
// SIG undefined FCanvasTileItem(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FCanvasTileItem::FCanvasTileItem
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_143f4c5f0;
  uVar1 = *param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[1] = uVar1;
  uVar2 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  *param_1 = &PTR_FUN_1451e2200;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = *param_4;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x44) = *param_5;
  *(undefined8 *)((longlong)param_1 + 0x4c) = *param_6;
  param_1[0xb] = param_3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d88._4_4_;
  uVar1 = param_7[1];
  param_1[5] = *param_7;
  param_1[6] = uVar1;
  return param_1;
}



// FUNCTION 14289a2b0 FCanvasTileItem body=145 status=ok
// SIG undefined FCanvasTileItem(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FCanvasTileItem::FCanvasTileItem
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_143f4c5f0;
  uVar1 = *param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[1] = uVar1;
  uVar2 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  *param_1 = &PTR_FUN_1451e2200;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = *param_4;
  param_1[8] = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xb] = param_3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d88._4_4_;
  uVar1 = param_5[1];
  param_1[5] = *param_5;
  param_1[6] = uVar1;
  return param_1;
}



// FUNCTION 14289a350 FCanvasTileItem body=205 status=ok
// SIG undefined FCanvasTileItem(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FCanvasTileItem::FCanvasTileItem
          (undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  *param_1 = &PTR_FUN_143f4c5f0;
  param_1[1] = *param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  uVar5 = _DAT_1464aa6c8;
  uVar4 = _DAT_1464aa6c0;
  *param_1 = &PTR_FUN_1451e2200;
  param_1[8] = 0x3f800000;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xb] = param_3;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d88._4_4_;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 5) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  uVar6 = (**(code **)(*param_3 + 0x40))(param_3);
  *(float *)(param_1 + 7) = (float)uVar6;
  uVar6 = (**(code **)(*param_3 + 0x48))(param_3);
  *(float *)((longlong)param_1 + 0x3c) = (float)uVar6;
  return param_1;
}



// FUNCTION 14289a420 FUN_14289a420 body=108 status=ok
// SIG undefined FUN_14289a420(void)

undefined8 *
FUN_14289a420(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_1451ddc08;
  lVar1 = operator_new(0xad0);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_142860020(lVar1,param_2,param_3,param_4);
  }
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = param_5;
  return param_1;
}



// FUNCTION 14289a490 FCanvasTriangleItem body=284 status=ok
// SIG undefined FCanvasTriangleItem(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FCanvasTriangleItem::FCanvasTriangleItem
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *param_1 = &PTR_FUN_143f4c5f0;
  param_1[1] = *param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  uVar2 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  *param_1 = &PTR__scalar_deleting_destructor__1450861e0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = param_5;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar8 = DAT_1468b5d88._4_4_;
  uVar7 = (undefined4)DAT_1468b5d88;
  uVar6 = _DAT_1464aa6c8;
  uVar5 = _DAT_1464aa6c0;
  uVar1 = *param_2;
  uVar2 = *param_3;
  uVar3 = *param_4;
  *(undefined4 *)(param_1 + 0xb) = 1;
  TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 10,0);
  puVar4 = (undefined8 *)param_1[10];
  *puVar4 = uVar1;
  puVar4[1] = CONCAT44(uVar8,uVar7);
  puVar4[2] = uVar5;
  puVar4[3] = uVar6;
  puVar4[4] = uVar2;
  puVar4[5] = CONCAT44(uVar8,uVar7);
  puVar4[6] = uVar5;
  puVar4[7] = uVar6;
  puVar4[8] = uVar3;
  puVar4[9] = CONCAT44(uVar8,uVar7);
  puVar4[10] = uVar5;
  puVar4[0xb] = uVar6;
  return param_1;
}



// FUNCTION 14289a5b0 FUN_14289a5b0 body=254 status=ok
// SIG undefined FUN_14289a5b0(void)

undefined8 *
FUN_14289a5b0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_1451e21d0;
  puVar5 = (undefined8 *)operator_new(0xae0);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = param_3;
    uVar4 = param_4[1];
    puVar5[2] = *param_4;
    puVar5[3] = uVar4;
    uVar4 = param_4[3];
    puVar5[4] = param_4[2];
    puVar5[5] = uVar4;
    uVar4 = param_4[5];
    puVar5[6] = param_4[4];
    puVar5[7] = uVar4;
    uVar1 = *(undefined4 *)((longlong)param_4 + 0x34);
    uVar2 = *(undefined4 *)(param_4 + 7);
    uVar3 = *(undefined4 *)((longlong)param_4 + 0x3c);
    *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(param_4 + 6);
    *(undefined4 *)((longlong)puVar5 + 0x44) = uVar1;
    *(undefined4 *)(puVar5 + 9) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0x4c) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_4 + 0x44);
    uVar2 = *(undefined4 *)(param_4 + 9);
    uVar3 = *(undefined4 *)((longlong)param_4 + 0x4c);
    *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(param_4 + 8);
    *(undefined4 *)((longlong)puVar5 + 0x54) = uVar1;
    *(undefined4 *)(puVar5 + 0xb) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0x5c) = uVar3;
    FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(puVar5 + 0xc);
    FUN_1426f5920(puVar5 + 0x29);
    puVar5[0x4a] = 0;
    puVar5[0x4b] = 0;
    *(undefined2 *)(puVar5 + 0x4c) = 0;
    FUN_1428612b0(puVar5 + 0x4d,param_2);
    FUN_142861260(puVar5 + 0x13b,puVar5 + 0x4d);
    puVar5[0x159] = 0;
    puVar5[0x15a] = 0;
  }
  *(undefined1 *)(param_1 + 2) = param_5;
  param_1[1] = puVar5;
  return param_1;
}



// FUNCTION 14289a6b0 FUN_14289a6b0 body=369 status=ok
// SIG undefined FUN_14289a6b0(void)

undefined4 * FUN_14289a6b0(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FInputActionUnifiedDelegate::FInputActionUnifiedDelegate(param_1 + 2,param_2 + 2);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  lVar2 = *(longlong *)(param_2 + 0x16);
  *(longlong *)(param_1 + 0x16) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar1 = (longlong *)(param_1 + 0x1c);
  param_1[0x18] = param_1[0x18] ^ (param_1[0x18] ^ param_2[0x18]) & 1;
  uVar4 = (param_1[0x18] ^ param_2[0x18]) & 2 ^ param_1[0x18];
  param_1[0x18] = uVar4;
  uVar4 = (uVar4 ^ param_2[0x18]) & 4 ^ uVar4;
  param_1[0x18] = uVar4;
  param_1[0x18] = (uVar4 ^ param_2[0x18]) & 8 ^ uVar4;
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *plVar1 = 0;
  param_1[0x1e] = 0;
  if ((((longlong *)(param_2 + 0x1c) != plVar1) && (param_2[0x1e] != 0)) &&
     (plVar3 = *(longlong **)(param_2 + 0x1c), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
  }
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x28,param_2 + 0x28);
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  param_1[0x30] = param_2[0x30];
  return param_1;
}



// FUNCTION 14289a830 FUN_14289a830 body=226 status=ok
// SIG undefined FUN_14289a830(void)

undefined4 *
FUN_14289a830(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  longlong lVar1;
  uint uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  FInputActionUnifiedDelegate::FInputActionUnifiedDelegate(param_1 + 2,param_5);
  *(undefined8 *)(param_1 + 0x10) = param_7;
  *(undefined8 *)(param_1 + 0x12) = *param_4;
  *(undefined8 *)(param_1 + 0x14) = param_4[1];
  lVar1 = param_4[2];
  *(longlong *)(param_1 + 0x16) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x18] = param_1[0x18] ^ (param_1[0x18] ^ *(uint *)(param_4 + 3)) & 1;
  uVar2 = (*(uint *)(param_4 + 3) ^ param_1[0x18]) & 2 ^ param_1[0x18];
  param_1[0x18] = uVar2;
  uVar2 = (*(uint *)(param_4 + 3) ^ uVar2) & 4 ^ uVar2;
  param_1[0x18] = uVar2;
  param_1[0x18] = (*(uint *)(param_4 + 3) ^ uVar2) & 8 ^ uVar2;
  *(undefined1 *)(param_1 + 0x1a) = param_6;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x20,0);
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x2c,0);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  return param_1;
}



// FUNCTION 14289a920 FExportObjectInnerContext body=695 status=ok
// SIG undefined FExportObjectInnerContext(void)

longlong * FExportObjectInnerContext::FExportObjectInnerContext(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  int local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  longlong local_c8 [3];
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar5 = UObject::GetPrivateStaticClass();
  FObjectIterator::FObjectIterator(&local_78,uVar5,0,0x10,0x20000000);
  iVar10 = (int)uStack_70;
  local_c8[2] = local_78;
  uStack_b0 = uStack_70;
  local_90 = local_78;
  iVar1 = *(int *)(local_78 + 0x24);
  local_a8 = local_68;
  uStack_a4 = uStack_64;
  uStack_a0 = uStack_60;
  uStack_9c = uStack_5c;
  local_98 = local_58;
  uVar5 = local_98;
  if (iVar10 != iVar1) {
    puVar12 = (undefined8 *)CONCAT44(uStack_64,local_68);
    local_98._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    uVar2 = local_98._4_4_;
    local_98 = uVar5;
    do {
      plVar15 = (longlong *)0x0;
      plVar11 = plVar15;
      if (puVar12 != (undefined8 *)0x0) {
        plVar11 = (longlong *)*puVar12;
      }
      local_res20 = plVar11[4];
      if (local_res20 != 0) {
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(param_1,local_res10);
        plVar8 = plVar15;
        if (local_res10[0] != -1) {
          plVar8 = (longlong *)((longlong)local_res10[0] * 0x20 + *param_1);
        }
        plVar13 = plVar8 + 1;
        if (plVar8 == (longlong *)0x0) {
          plVar13 = plVar15;
        }
        if (plVar13 == (longlong *)0x0) {
          local_88 = &local_res20;
          local_c8[0] = 0;
          local_80 = local_c8;
          local_c8[1] = 0;
          FUN_141201240(param_1,local_res18,&local_88,0);
          lVar14 = (longlong)local_res18[0] * 0x20 + *param_1;
          if (local_c8[0] != 0) {
            FMemory::Free();
          }
          iVar3 = *(int *)(lVar14 + 0x10);
          *(int *)(lVar14 + 0x10) = iVar3 + 1;
          if (*(int *)(lVar14 + 0x14) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar14 + 8,iVar3);
          }
          lVar14 = *(longlong *)(lVar14 + 8);
        }
        else {
          iVar3 = (int)plVar13[1];
          *(int *)(plVar13 + 1) = iVar3 + 1;
          if (*(int *)((longlong)plVar13 + 0xc) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar13,iVar3);
          }
          lVar14 = *plVar13;
        }
        *(longlong **)(lVar14 + (longlong)iVar3 * 8) = plVar11;
      }
      do {
        do {
          iVar10 = iVar10 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar10);
          puVar12 = (undefined8 *)0x0;
          if (*(int *)(local_90 + 0x24) <= iVar10) goto LAB_14289ab96;
          while( true ) {
            uVar7 = (uint)(ushort)uStack_b0;
            iVar3 = iVar10;
            if (iVar10 < 0) {
              iVar3 = iVar10 + 0xffff;
              uVar7 = (ushort)uStack_b0 - 0x10000;
            }
            lVar14 = *(longlong *)(*(longlong *)(local_78 + 0x10) + (longlong)(iVar3 >> 0x10) * 8);
            lVar6 = *(longlong *)(lVar14 + (longlong)(int)uVar7 * 0x18);
            if (lVar6 != 0) break;
            iVar10 = iVar10 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar10);
            puVar12 = (undefined8 *)0x0;
            if (*(int *)(local_90 + 0x24) <= iVar10) goto LAB_14289ab96;
          }
        } while ((*(uint *)(lVar6 + 8) & (uint)local_98) != 0);
        uVar4 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar4 < (int)DAT_1469e91c4) {
          uVar9 = uVar4 & 0xffff;
          if ((int)uVar4 < 0) {
            uVar4 = uVar4 + 0xffff;
            uVar9 = uVar9 - 0x10000;
          }
          lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)uVar9 * 0x18;
        }
        else {
          lVar6 = 0;
        }
        puVar12 = (undefined8 *)(lVar14 + (longlong)(int)uVar7 * 0x18);
      } while ((*(uint *)(lVar6 + 8) & uVar2) != 0);
LAB_14289ab96:
    } while (iVar10 != iVar1);
  }
  return param_1;
}



// FUNCTION 14289abe0 FUN_14289abe0 body=110 status=ok
// SIG undefined FUN_14289abe0(void)

undefined8 * FUN_14289abe0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  *param_1 = *param_2;
  *(byte *)(param_1 + 1) =
       *(byte *)(param_1 + 1) ^ (*(byte *)(param_1 + 1) ^ *(byte *)(param_2 + 1)) & 1;
  bVar2 = (*(byte *)(param_2 + 1) ^ *(byte *)(param_1 + 1)) & 2 ^ *(byte *)(param_1 + 1);
  *(byte *)(param_1 + 1) = bVar2;
  bVar2 = (*(byte *)(param_2 + 1) ^ bVar2) & 4 ^ bVar2;
  *(byte *)(param_1 + 1) = bVar2;
  *(byte *)(param_1 + 1) = (*(byte *)(param_2 + 1) ^ bVar2) & 8 ^ bVar2;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  lVar1 = param_2[4];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14289ac50 FInputActionUnifiedDelegate body=71 status=ok
// SIG undefined FInputActionUnifiedDelegate(void)

undefined8 * FInputActionUnifiedDelegate::FInputActionUnifiedDelegate(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FWeakObjectPtr::operator=(param_1 + 4,0);
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 14289aca0 FUN_14289aca0 body=4732 status=ok
// SIG undefined FUN_14289aca0(void)

longlong * FUN_14289aca0(longlong *param_1,undefined8 *param_2,short *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  short sVar3;
  wchar_t wVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  void *pvVar7;
  ulonglong uVar8;
  char cVar9;
  wchar_t wVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong *plVar22;
  undefined2 *puVar23;
  undefined2 *puVar24;
  int iVar25;
  uint uVar26;
  undefined8 *puVar27;
  bool bVar28;
  wchar_t *pwVar29;
  longlong *plVar30;
  longlong *local_res8;
  longlong local_248;
  undefined8 local_240;
  longlong local_238;
  ulonglong local_230;
  longlong local_228;
  ulonglong local_220;
  longlong local_218;
  ulonglong local_210;
  longlong local_208;
  int local_200;
  undefined4 local_1fc;
  void *local_1f8;
  wchar_t *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1d8 [2];
  longlong local_1c8 [2];
  longlong local_1b8 [2];
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  longlong local_190 [2];
  longlong local_180;
  longlong local_168;
  longlong local_158;
  longlong *local_148;
  int local_140;
  longlong local_138;
  longlong local_120 [2];
  longlong local_110;
  longlong local_f8;
  longlong local_e8;
  longlong *local_d8;
  int local_d0;
  longlong local_c8;
  undefined1 local_b0 [120];
  
  *param_1 = 0;
  iVar11 = (int)DAT_146b188e8;
  puVar24 = DAT_146b188e0;
  *(int *)(param_1 + 1) = (int)DAT_146b188e8;
  local_res8 = param_1;
  if (iVar11 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar11,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,puVar24,(longlong)iVar11 * 2);
  }
  param_1[2] = 0;
  uVar8 = DAT_146b18908;
  pvVar7 = DAT_146b18900;
  iVar11 = (int)DAT_146b18908;
  *(int *)(param_1 + 3) = iVar11;
  if (iVar11 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 2,uVar8 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar7,(longlong)iVar11 * 2);
  }
  *(undefined4 *)(param_1 + 4) = DAT_146b18930;
  FUN_141e0eac0();
  plVar22 = param_1 + 9;
  param_1[7] = 0;
  param_1[8] = 0;
  *plVar22 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar8 = DAT_146b18918;
  pvVar7 = DAT_146b18910;
  iVar11 = (int)DAT_146b18918;
  *(int *)(param_1 + 0xc) = iVar11;
  if (iVar11 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 0xb,uVar8 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0xb],pvVar7,(longlong)iVar11 * 2);
  }
  *(undefined4 *)(param_1 + 0xd) = 1;
  if (DAT_146b184b2 == '\0') {
    FUN_14164fd40();
    iVar11 = (int)DAT_146b188e8;
    puVar24 = DAT_146b188e0;
    DAT_146b184b2 = '\x01';
    if ((undefined2 **)param_1 != &DAT_146b188e0) {
      *(int *)(param_1 + 1) = (int)DAT_146b188e8;
      if ((iVar11 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar11);
        _guard_xfg_dispatch_icall_nop((void *)*param_1,puVar24,(longlong)iVar11 * 2);
      }
    }
    uVar8 = DAT_146b18908;
    pvVar7 = DAT_146b18900;
    if ((void **)(param_1 + 2) != &DAT_146b18900) {
      iVar11 = (int)DAT_146b18908;
      *(int *)(param_1 + 3) = iVar11;
      if ((iVar11 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 2,uVar8 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar7,(longlong)iVar11 * 2);
      }
    }
    *(undefined4 *)(param_1 + 4) = DAT_146b18930;
    uVar8 = DAT_146b18918;
    pvVar7 = DAT_146b18910;
    if ((void **)(param_1 + 0xb) != &DAT_146b18910) {
      iVar11 = (int)DAT_146b18918;
      *(int *)(param_1 + 0xc) = iVar11;
      if ((iVar11 == 0) && (*(int *)((longlong)param_1 + 100) == 0)) {
        *(undefined4 *)((longlong)param_1 + 100) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 0xb,uVar8 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop((void *)param_1[0xb],pvVar7,(longlong)iVar11 * 2);
      }
    }
  }
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (param_3[lVar12] != 0);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)(int)lVar12 + 1;
  uVar13 = SUB168(ZEXT816(2) * auVar5,0);
  if (SUB168(ZEXT816(2) * auVar5,8) != 0) {
    uVar13 = 0xffffffffffffffff;
  }
  pwVar14 = (wchar_t *)operator_new(uVar13);
  lVar12 = (longlong)pwVar14 - (longlong)param_3;
  do {
    sVar3 = *param_3;
    *(short *)((longlong)param_3 + lVar12) = sVar3;
    param_3 = param_3 + 1;
  } while (sVar3 != 0);
  pwVar29 = pwVar14;
  plVar30 = param_1;
  local_1f0 = pwVar14;
  if (param_4 == 2) {
    puVar24 = &DAT_143f3eda8;
    if (DAT_146b18940 != 0) {
      puVar24 = DAT_146b18938;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar23 = &DAT_143f3eda8;
    }
    else {
      puVar23 = (undefined2 *)*param_2;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar23,puVar24);
    if (iVar11 != 0) {
      FString::operator=(param_1,param_2);
    }
    FString::operator=(param_1 + 2,param_2 + 2);
    FString::operator=(param_1 + 5,param_2 + 5);
    FString::operator=(param_1 + 0xb,param_2 + 0xb);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
LAB_14289afeb:
    iVar11 = 0;
    if (0 < *(int *)(param_2 + 10)) {
      lVar12 = 0;
      do {
        iVar25 = (int)param_1[10];
        *(int *)(param_1 + 10) = iVar25 + 1;
        if (*(int *)((longlong)param_1 + 0x54) < iVar25 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar22,iVar25);
        }
        puVar27 = (undefined8 *)((longlong)iVar25 * 0x10 + *plVar22);
        if (puVar27 != (undefined8 *)0x0) {
          lVar18 = param_2[9];
          *puVar27 = 0;
          iVar25 = *(int *)(lVar12 + 8 + lVar18);
          local_1f8 = *(void **)(lVar12 + lVar18);
          *(int *)(puVar27 + 1) = iVar25;
          if (iVar25 == 0) {
            *(undefined4 *)((longlong)puVar27 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar27,iVar25,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar27,local_1f8,(longlong)iVar25 * 2);
          }
        }
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 0x10;
        pwVar29 = local_1f0;
        plVar30 = local_res8;
      } while (iVar11 < *(int *)(param_2 + 10));
    }
  }
  else if (param_4 == 1) goto LAB_14289afeb;
  wVar4 = *pwVar14;
  while (wVar4 == L' ') {
    pwVar29 = pwVar29 + 1;
    wVar4 = *pwVar29;
  }
  pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar29,L'?');
  pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar29,L'#');
  if ((pwVar15 == (wchar_t *)0x0) || ((pwVar16 != (wchar_t *)0x0 && (pwVar16 <= pwVar15)))) {
    pwVar15 = pwVar16;
  }
  if (pwVar15 != (wchar_t *)0x0) {
    wVar4 = *pwVar15;
    wVar10 = L'\0';
    *pwVar15 = L'\0';
    pwVar15 = pwVar15 + 1;
LAB_14289b0f0:
    pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar15,L'?');
    pwVar17 = _guard_xfg_dispatch_icall_nop(pwVar15,L'#');
    if ((pwVar16 == (wchar_t *)0x0) || ((pwVar17 != (wchar_t *)0x0 && (pwVar17 <= pwVar16)))) {
      pwVar16 = pwVar17;
    }
    if (pwVar16 != (wchar_t *)0x0) {
      wVar10 = *pwVar16;
      *pwVar16 = L'\0';
      pwVar16 = pwVar16 + 1;
    }
    pwVar17 = _guard_xfg_dispatch_icall_nop(pwVar15,L'?');
    if ((pwVar17 == (wchar_t *)0x0) &&
       (pwVar17 = _guard_xfg_dispatch_icall_nop(pwVar15,L'#'), pwVar17 == (wchar_t *)0x0)) {
      bVar28 = true;
    }
    else {
      bVar28 = false;
    }
    if (bVar28) goto code_r0x00014289b162;
    uVar13 = FURL::FURL(local_190,0);
    FURL::operator=(plVar30,uVar13);
    plVar22 = local_148;
    iVar11 = local_140;
    if (local_138 != 0) {
      FMemory::Free();
      plVar22 = local_148;
      iVar11 = local_140;
    }
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar22 != 0) {
        FMemory::Free();
      }
      plVar22 = plVar22 + 2;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
    if (local_158 != 0) {
      FMemory::Free();
    }
    if (local_168 != 0) {
      FMemory::Free();
    }
    if (local_180 != 0) {
      FMemory::Free();
    }
    if (local_190[0] != 0) {
      FMemory::Free();
    }
    *(undefined4 *)(plVar30 + 0xd) = 0;
  }
LAB_14289b221:
  iVar11 = 0;
  lVar12 = -1;
  if ((int)plVar30[0xd] == 1) {
    lVar18 = -1;
    do {
      lVar18 = lVar18 + 1;
    } while (pwVar29[lVar18] != L'\0');
    if ((int)lVar18 < 3) {
LAB_14289b386:
      bVar28 = false;
LAB_14289b38c:
      bVar6 = false;
    }
    else {
      if ((*pwVar29 == L'[') || (pwVar29[1] != L':')) {
        if (*pwVar29 != L'/') goto LAB_14289b386;
        local_1fc = 0;
        local_208 = 0;
        lVar18 = -1;
        do {
          lVar18 = lVar18 + 1;
        } while (pwVar29[lVar18] != L'\0');
        iVar25 = (int)lVar18 + 1;
        local_200 = iVar25;
        if (0 < iVar25) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
        }
        FGenericPlatformString::Memcpy(local_208,pwVar29,(longlong)iVar25 * 2);
        bVar28 = true;
        bVar6 = true;
        cVar9 = FPackageName::IsValidLongPackageName(&local_208,1,0);
        if (cVar9 == '\0') goto LAB_14289b38e;
        goto LAB_14289b38c;
      }
      bVar28 = false;
      bVar6 = true;
    }
LAB_14289b38e:
    if ((bVar28) && (local_208 != 0)) {
      FMemory::Free();
    }
    iVar25 = (int)DAT_146b188e8;
    puVar24 = DAT_146b188e0;
    if (bVar6) {
      if ((undefined2 **)plVar30 != &DAT_146b188e0) {
        *(int *)(plVar30 + 1) = (int)DAT_146b188e8;
        if ((iVar25 == 0) && (*(int *)((longlong)plVar30 + 0xc) == 0)) {
          *(undefined4 *)((longlong)plVar30 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar30,iVar25);
          _guard_xfg_dispatch_icall_nop((void *)*plVar30,puVar24,(longlong)iVar25 * 2);
        }
      }
      plVar22 = plVar30 + 5;
      if ((wchar_t *)plVar30[5] != pwVar29) {
        iVar25 = iVar11;
        if (*pwVar29 != L'\0') {
          lVar18 = -1;
          do {
            lVar18 = lVar18 + 1;
          } while (pwVar29[lVar18] != L'\0');
          iVar25 = (int)lVar18 + 1;
        }
        *(undefined4 *)(plVar30 + 6) = 0;
        if (*(int *)((longlong)plVar30 + 0x34) != iVar25) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar22,iVar25);
          iVar11 = (int)plVar30[6];
        }
        *(int *)(plVar30 + 6) = iVar25 + iVar11;
        if (*(int *)((longlong)plVar30 + 0x34) < iVar25 + iVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar22);
        }
        if (iVar25 != 0) {
          _guard_xfg_dispatch_icall_nop((void *)*plVar22,pwVar29,(longlong)iVar25 * 2);
        }
      }
      uVar8 = DAT_146b18918;
      pvVar7 = DAT_146b18910;
      plVar22 = plVar30 + 0xb;
      if ((void **)plVar22 != &DAT_146b18910) {
        iVar11 = (int)DAT_146b18918;
        *(int *)(plVar30 + 0xc) = iVar11;
        if ((iVar11 == 0) && (*(int *)((longlong)plVar30 + 100) == 0)) {
          *(undefined4 *)((longlong)plVar30 + 100) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar22,uVar8 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop((void *)*plVar22,pvVar7,(longlong)iVar11 * 2);
        }
      }
      pwVar29 = (wchar_t *)0x0;
      if ((undefined *)plVar30[2] != &DAT_1451dfd74) {
        *(undefined4 *)(plVar30 + 3) = 0;
        pwVar15 = pwVar29;
        if (*(int *)((longlong)plVar30 + 0x1c) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar30 + 2,0);
          pwVar15 = (wchar_t *)(ulonglong)*(uint *)(plVar30 + 3);
        }
        *(int *)(plVar30 + 3) = (int)pwVar15;
        if (*(int *)((longlong)plVar30 + 0x1c) < (int)pwVar15) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar30 + 2);
          pwVar29 = (wchar_t *)0x0;
        }
      }
    }
    else {
      pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar29,L'[');
      pwVar17 = _guard_xfg_dispatch_icall_nop(pwVar29,L':');
      pwVar15 = pwVar29;
      if (((pwVar17 != (wchar_t *)0x0) &&
          (pwVar17 = _guard_xfg_dispatch_icall_nop(pwVar29,L':'), pwVar29 + 1 < pwVar17)) &&
         ((pwVar16 == (wchar_t *)0x0 ||
          (pwVar17 = _guard_xfg_dispatch_icall_nop(pwVar29,L':'), pwVar17 < pwVar16)))) {
        pwVar17 = _guard_xfg_dispatch_icall_nop(pwVar29,L'.');
        if (pwVar17 != (wchar_t *)0x0) {
          pwVar17 = _guard_xfg_dispatch_icall_nop(pwVar29,L':');
          pwVar19 = _guard_xfg_dispatch_icall_nop(pwVar29,L'.');
          if (pwVar19 <= pwVar17) goto LAB_14289b62c;
        }
        pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar29,L':');
        *pwVar15 = L'\0';
        pwVar15 = pwVar15 + 1;
        if ((wchar_t *)*plVar30 != pwVar29) {
          iVar25 = iVar11;
          if ((pwVar29 != (wchar_t *)0x0) && (*pwVar29 != L'\0')) {
            lVar18 = -1;
            do {
              lVar18 = lVar18 + 1;
            } while (pwVar29[lVar18] != L'\0');
            iVar25 = (int)lVar18 + 1;
          }
          *(undefined4 *)(plVar30 + 1) = 0;
          if (*(int *)((longlong)plVar30 + 0xc) != iVar25) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar30,iVar25);
            iVar11 = (int)plVar30[1];
          }
          *(int *)(plVar30 + 1) = iVar25 + iVar11;
          if (*(int *)((longlong)plVar30 + 0xc) < iVar25 + iVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar30);
          }
          if (iVar25 != 0) {
            _guard_xfg_dispatch_icall_nop((void *)*plVar30,pwVar29,(longlong)iVar25 * 2);
          }
        }
      }
LAB_14289b62c:
      iVar11 = 0;
      iVar25 = 0;
      plVar22 = plVar30 + 2;
      pwVar29 = pwVar15;
      if (((*pwVar15 == L'/') && (pwVar15[1] == L'/')) &&
         (pwVar29 = pwVar15 + 2, (undefined *)*plVar22 != &DAT_1451dfe44)) {
        *(undefined4 *)(plVar30 + 3) = 0;
        if (*(int *)((longlong)plVar30 + 0x1c) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar22);
          iVar11 = (int)plVar30[3];
        }
        *(int *)(plVar30 + 3) = iVar11;
        if (*(int *)((longlong)plVar30 + 0x1c) < iVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar22);
        }
      }
      pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar29,L'.');
      iVar11 = (int)DAT_1464b4440;
      if (iVar11 != 0) {
        iVar25 = iVar11 + -1;
      }
      if ((pwVar15 == (wchar_t *)0x0) ||
         ((longlong)((longlong)pwVar15 - (longlong)pwVar29 & 0xfffffffffffffffeU) < 1)) {
LAB_14289b764:
        if (pwVar16 == (wchar_t *)0x0) {
          puVar24 = &DAT_143f3eda8;
          if (DAT_146b18940 != 0) {
            puVar24 = DAT_146b18938;
          }
          if ((int)plVar30[1] == 0) {
            puVar23 = &DAT_143f3eda8;
          }
          else {
            puVar23 = (undefined2 *)*plVar30;
          }
          iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar23,puVar24);
          if (iVar11 != 0) goto LAB_14289b97d;
        }
      }
      else {
        if (iVar11 == 0) {
          iVar11 = 0;
          pwVar17 = L"";
        }
        else {
          iVar11 = iVar11 + -1;
          pwVar17 = DAT_1464b4438;
        }
        iVar11 = _wcsnicmp(pwVar15,pwVar17,(longlong)iVar11);
        if ((iVar11 == 0) && (iVar11 = iswalnum(pwVar15[iVar25]), iVar11 == 0)) goto LAB_14289b764;
        if (DAT_146b18928 == 0) {
          iVar11 = 0;
          pwVar17 = L"";
        }
        else {
          iVar11 = DAT_146b18928 + -1;
          pwVar17 = DAT_146b18920;
        }
        iVar11 = _wcsnicmp(pwVar15 + 1,pwVar17,(longlong)iVar11);
        if (iVar11 == 0) {
          if (DAT_146b18928 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = DAT_146b18928 + -1;
          }
          iVar11 = iswalnum(pwVar15[(longlong)iVar11 + 1]);
          if (iVar11 == 0) goto LAB_14289b764;
        }
        iVar11 = _wcsnicmp(pwVar15 + 1,L"demo",4);
        if ((iVar11 == 0) && (iVar11 = iswalnum(pwVar15[5]), iVar11 == 0)) goto LAB_14289b764;
      }
      pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar29,L'/');
      if (pwVar15 != (wchar_t *)0x0) {
        *pwVar15 = L'\0';
        pwVar15 = pwVar15 + 1;
      }
      pwVar19 = _guard_xfg_dispatch_icall_nop(pwVar29,L']');
      pwVar17 = pwVar29;
      if (pwVar19 != (wchar_t *)0x0) {
        pwVar17 = pwVar19;
      }
      pwVar17 = _guard_xfg_dispatch_icall_nop(pwVar17,L':');
      if (pwVar17 != (wchar_t *)0x0) {
        *pwVar17 = L'\0';
        iVar11 = _wtoi(pwVar17 + 1);
        *(int *)(plVar30 + 4) = iVar11;
      }
      if ((pwVar16 == (wchar_t *)0x0) || (pwVar19 == (wchar_t *)0x0)) {
        if ((wchar_t *)*plVar22 != pwVar29) {
          if ((pwVar29 == (wchar_t *)0x0) || (*pwVar29 == L'\0')) goto LAB_14289b862;
          lVar18 = -1;
          do {
            lVar18 = lVar18 + 1;
          } while (pwVar29[lVar18] != L'\0');
          iVar11 = (int)lVar18 + 1;
          goto LAB_14289b864;
        }
      }
      else {
        pwVar29 = pwVar29 + 1;
        *pwVar19 = L'\0';
        if ((wchar_t *)*plVar22 != pwVar29) {
          if ((pwVar29 == (wchar_t *)0x0) || (*pwVar29 == L'\0')) {
LAB_14289b862:
            iVar11 = 0;
          }
          else {
            lVar18 = -1;
            do {
              lVar18 = lVar18 + 1;
            } while (pwVar29[lVar18] != L'\0');
            iVar11 = (int)lVar18 + 1;
          }
LAB_14289b864:
          iVar25 = 0;
          *(undefined4 *)(plVar30 + 3) = 0;
          if (*(int *)((longlong)plVar30 + 0x1c) != iVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar22,iVar11);
            iVar25 = (int)plVar30[3];
          }
          *(int *)(plVar30 + 3) = iVar11 + iVar25;
          if (*(int *)((longlong)plVar30 + 0x1c) < iVar11 + iVar25) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar22);
          }
          if (iVar11 != 0) {
            _guard_xfg_dispatch_icall_nop((void *)*plVar22,pwVar29,(longlong)iVar11 * 2);
          }
        }
      }
      puVar24 = &DAT_143f3eda8;
      if ((int)DAT_146b188e8 != 0) {
        puVar24 = DAT_146b188e0;
      }
      if ((int)plVar30[1] == 0) {
        puVar23 = &DAT_143f3eda8;
      }
      else {
        puVar23 = (undefined2 *)*plVar30;
      }
      iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar23,puVar24);
      pwVar29 = pwVar15;
      if (iVar11 == 0) {
        plVar20 = (longlong *)FUN_141e0eac0(local_1d8);
        plVar22 = plVar30 + 5;
        if (plVar22 != plVar20) {
          if (*plVar22 != 0) {
            FMemory::Free();
          }
          *plVar22 = *plVar20;
          *plVar20 = 0;
          *(int *)(plVar30 + 6) = (int)plVar20[1];
          *(undefined4 *)((longlong)plVar30 + 0x34) = *(undefined4 *)((longlong)plVar20 + 0xc);
          plVar20[1] = 0;
        }
        if (local_1d8[0] != 0) {
          FMemory::Free();
        }
      }
      else {
        iVar11 = 0;
        if ((undefined *)plVar30[5] != &DAT_1451e0284) {
          *(undefined4 *)(plVar30 + 6) = 0;
          if (*(int *)((longlong)plVar30 + 0x34) != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar30 + 5);
            iVar11 = (int)plVar30[6];
          }
          *(int *)(plVar30 + 6) = iVar11;
          if (*(int *)((longlong)plVar30 + 0x34) < iVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar30 + 5);
          }
        }
      }
    }
  }
LAB_14289b97d:
  plVar22 = plVar30 + 5;
  iVar11 = 0;
  if ((int)plVar30[0xd] != 1) goto LAB_14289bef2;
  if ((pwVar29 != (wchar_t *)0x0) && (*pwVar29 != L'\0')) {
    if (*pwVar29 == L'/') {
      if ((wchar_t *)*plVar22 != pwVar29) {
        do {
          lVar12 = lVar12 + 1;
        } while (pwVar29[lVar12] != L'\0');
        iVar25 = (int)lVar12 + 1;
        *(undefined4 *)(plVar30 + 6) = 0;
        if (*(int *)((longlong)plVar30 + 0x34) != iVar25) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar22,iVar25);
          iVar11 = (int)plVar30[6];
        }
        *(int *)(plVar30 + 6) = iVar25 + iVar11;
        if (*(int *)((longlong)plVar30 + 0x34) < iVar25 + iVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar22);
        }
        if (iVar25 != 0) {
          _guard_xfg_dispatch_icall_nop((void *)*plVar22,pwVar29,(longlong)iVar25 * 2);
        }
      }
    }
    else {
      local_1e8 = 0;
      local_1e0 = 0;
      FText::FText(local_1a8);
      bVar28 = false;
      local_230 = 0;
      local_238 = 0;
      if (*pwVar29 != L'\0') {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (pwVar29[lVar12] != L'\0');
        uVar26 = (int)lVar12 + 1;
        local_230 = (ulonglong)uVar26;
        if (0 < (int)uVar26) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
        }
        FGenericPlatformString::Memcpy(local_238,pwVar29,(longlong)(int)uVar26 * 2);
      }
      cVar9 = FPaths::FileExists(&local_238);
      if (local_238 != 0) {
        FMemory::Free();
      }
      if (cVar9 == '\0') {
        local_218 = 0;
        local_210 = 0;
        if (*pwVar29 != L'\0') {
          lVar12 = -1;
          do {
            lVar12 = lVar12 + 1;
          } while (pwVar29[lVar12] != L'\0');
          uVar26 = (int)lVar12 + 1;
          local_210 = (ulonglong)uVar26;
          if (0 < (int)uVar26) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
          }
          FGenericPlatformString::Memcpy(local_218,pwVar29,(longlong)(int)uVar26 * 2);
        }
        cVar9 = FPackageName::DoesPackageNameContainInvalidCharacters(&local_218,local_1a8);
        if (local_218 != 0) {
          FMemory::Free();
        }
        if (cVar9 == '\0') {
          puVar27 = (undefined8 *)FName::FName(&local_1f0,"AssetRegistry",1);
          uVar13 = FUN_14168dc80();
          cVar9 = FModuleManager::IsModuleLoaded(uVar13,*puVar27);
          if (cVar9 != '\0') {
            FUN_14168dc80();
            puVar27 = (undefined8 *)FName::FName(&local_1f8,"AssetRegistry",1);
            uVar13 = *puVar27;
            uVar21 = FUN_14168dc80();
            plVar22 = (longlong *)FUN_141690010(uVar21,uVar13);
            plVar22 = (longlong *)(**(code **)(*plVar22 + 0x48))(plVar22);
            cVar9 = (**(code **)(*plVar22 + 0x188))(plVar22);
            if (cVar9 == '\0') {
              local_248 = 0;
              local_240 = 0;
              lVar12 = FUN_142a2f930();
              cVar9 = (**(code **)(*plVar22 + 0x28))
                                (plVar22,*(undefined8 *)(lVar12 + 0x18),&local_248,0);
              if (cVar9 != '\0') {
                FName::FName(&local_res8,pwVar29,1);
                for (lVar12 = local_248; bVar28 = false,
                    lVar12 != (longlong)(int)local_240 * 0x58 + local_248; lVar12 = lVar12 + 0x58) {
                  if (*(longlong **)(lVar12 + 0x18) == local_res8) {
                    uVar13 = FName::ToString(lVar12 + 8,local_1b8);
                    FString::operator=(plVar30 + 5,uVar13);
                    if (local_1b8[0] != 0) {
                      FMemory::Free();
                    }
                    bVar28 = true;
                    break;
                  }
                }
              }
              if ((int)local_240 != 0) {
                plVar22 = (longlong *)(local_248 + 0x30);
                iVar11 = (int)local_240;
                do {
                  if (plVar22[1] != 0) {
                    FMemory::Free();
                  }
                  plVar20 = (longlong *)*plVar22;
                  if (plVar20 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = plVar20 + 1;
                    lVar12 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar12 == 1) {
                      (**(code **)*plVar20)(plVar20);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar20 + 0xc);
                      iVar25 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar25 == 1) {
                        (**(code **)(*plVar20 + 8))(plVar20,1);
                      }
                    }
                  }
                  plVar22 = plVar22 + 0xb;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              if (local_248 != 0) {
                FMemory::Free(local_248);
              }
              if (bVar28) goto LAB_14289bd02;
            }
          }
        }
        uVar13 = FURL::FURL(local_b0,0);
        FURL::operator=(plVar30,uVar13);
        FURL::~FURL(local_b0);
        *(undefined4 *)(plVar30 + 0xd) = 0;
      }
      else {
        local_228 = 0;
        local_220 = 0;
        if (*pwVar29 != L'\0') {
          lVar12 = -1;
          do {
            lVar12 = lVar12 + 1;
          } while (pwVar29[lVar12] != L'\0');
          uVar26 = (int)lVar12 + 1;
          local_220 = (ulonglong)uVar26;
          if (0 < (int)uVar26) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
          }
          FGenericPlatformString::Memcpy(local_228,pwVar29,(longlong)(int)uVar26 * 2);
        }
        uVar13 = FUN_1416f4630(local_1c8,&local_228);
        FString::operator=(plVar30 + 5,uVar13);
        if (local_1c8[0] != 0) {
          FMemory::Free();
        }
        if (local_228 != 0) {
          FMemory::Free();
        }
      }
LAB_14289bd02:
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar22 = local_1a0 + 1;
        lVar12 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar2 = (int *)((longlong)local_1a0 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_1a0 + 8))(local_1a0,1);
          }
        }
      }
      if (local_1e8 != 0) {
        FMemory::Free();
      }
    }
  }
  if ((int)plVar30[0xd] == 1) {
    pwVar29 = L"";
    if ((int)plVar30[1] == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)*plVar30;
    }
    pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar15,L'?');
    if ((pwVar16 == (wchar_t *)0x0) &&
       (pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar15,L'#'), pwVar15 == (wchar_t *)0x0)) {
      if ((int)plVar30[3] == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)plVar30[2];
      }
      pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar15,L'?');
      if ((pwVar16 == (wchar_t *)0x0) &&
         (pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar15,L'#'), pwVar15 == (wchar_t *)0x0)) {
        if ((int)plVar30[0xc] != 0) {
          pwVar29 = (wchar_t *)plVar30[0xb];
        }
        pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar29,L'?');
        if ((pwVar15 == (wchar_t *)0x0) &&
           (pwVar29 = _guard_xfg_dispatch_icall_nop(pwVar29,L'#'), pwVar29 == (wchar_t *)0x0))
        goto LAB_14289bef2;
      }
    }
    uVar13 = FURL::FURL(local_120,0);
    FURL::operator=(plVar30,uVar13);
    plVar22 = local_d8;
    iVar11 = local_d0;
    if (local_c8 != 0) {
      FMemory::Free();
      plVar22 = local_d8;
      iVar11 = local_d0;
    }
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar22 != 0) {
        FMemory::Free();
      }
      plVar22 = plVar22 + 2;
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
    if (local_110 != 0) {
      FMemory::Free();
    }
    if (local_120[0] != 0) {
      FMemory::Free();
    }
    *(undefined4 *)(plVar30 + 0xd) = 0;
  }
LAB_14289bef2:
  FMemory::operator_delete(pwVar14);
  return plVar30;
code_r0x00014289b162:
  if (wVar4 == L'?') {
    if ((pwVar15 == (wchar_t *)0x0) || (*pwVar15 != L'-')) {
      FURL::AddOption(plVar30,pwVar15);
    }
    else {
      FUN_1428ba050(plVar30,pwVar15 + 1,0,&DAT_1468e2410);
    }
  }
  else if ((wchar_t *)plVar30[0xb] != pwVar15) {
    if ((pwVar15 == (wchar_t *)0x0) || (lVar12 = -1, *pwVar15 == L'\0')) {
      iVar11 = 0;
    }
    else {
      do {
        lVar12 = lVar12 + 1;
      } while (pwVar15[lVar12] != L'\0');
      iVar11 = (int)lVar12 + 1;
    }
    iVar25 = 0;
    *(undefined4 *)(plVar30 + 0xc) = 0;
    if (*(int *)((longlong)plVar30 + 100) != iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar30 + 0xb,iVar11);
      iVar25 = (int)plVar30[0xc];
    }
    *(int *)(plVar30 + 0xc) = iVar11 + iVar25;
    if (*(int *)((longlong)plVar30 + 100) < iVar11 + iVar25) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
    }
    if (iVar11 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)plVar30[0xb],pwVar15,(longlong)iVar11 * 2);
    }
  }
  pwVar15 = pwVar16;
  wVar4 = wVar10;
  if (pwVar16 == (wchar_t *)0x0) goto LAB_14289b221;
  goto LAB_14289b0f0;
}



// FUNCTION 14289bf20 FURL body=774 status=ok
// SIG undefined FURL(void)

undefined8 * FURL::FURL(undefined8 *param_1,short *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  longlong local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  iVar7 = 0;
  iVar9 = 0;
  *param_1 = 0;
  uVar3 = DAT_146b188e8;
  pvVar2 = DAT_146b188e0;
  iVar6 = (int)DAT_146b188e8;
  *(int *)(param_1 + 1) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,uVar3 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar6 * 2);
  }
  param_1[2] = 0;
  uVar3 = DAT_146b18908;
  pvVar2 = DAT_146b18900;
  iVar6 = (int)DAT_146b18908;
  *(int *)(param_1 + 3) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 2,uVar3 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar2,(longlong)iVar6 * 2);
  }
  plVar1 = param_1 + 5;
  *(undefined4 *)(param_1 + 4) = DAT_146b18930;
  *plVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar3 = DAT_146b18918;
  pvVar2 = DAT_146b18910;
  iVar6 = (int)DAT_146b18918;
  *(int *)(param_1 + 0xc) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1 + 0xb,uVar3 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0xb],pvVar2,(longlong)iVar6 * 2);
  }
  *(undefined4 *)(param_1 + 0xd) = 1;
  if (param_2 == (short *)0x0) {
    plVar5 = (longlong *)FUN_141e0eac0(local_28);
    if (plVar1 != plVar5) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar5;
      *plVar5 = 0;
      *(int *)(param_1 + 6) = (int)plVar5[1];
      *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)plVar5 + 0xc);
      plVar5[1] = 0;
    }
  }
  else {
    local_30 = 0;
    lVar8 = -1;
    local_38 = 0;
    if (*param_2 != 0) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (param_2[lVar11] != 0);
      uVar10 = (int)lVar11 + 1;
      local_30 = (ulonglong)uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar10 * 2);
    }
    cVar4 = FPackageName::IsValidLongPackageName(&local_38,0,0);
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      if ((short *)*plVar1 == param_2) {
        return param_1;
      }
      if (*param_2 != 0) {
        do {
          lVar8 = lVar8 + 1;
        } while (param_2[lVar8] != 0);
        iVar7 = (int)lVar8 + 1;
      }
      *(undefined4 *)(param_1 + 6) = 0;
      if (*(int *)((longlong)param_1 + 0x34) != iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,iVar7);
        iVar9 = *(int *)(param_1 + 6);
      }
      *(int *)(param_1 + 6) = iVar9 + iVar7;
      if (*(int *)((longlong)param_1 + 0x34) < iVar9 + iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar9);
      }
      if (iVar7 == 0) {
        return param_1;
      }
      ::_guard_xfg_dispatch_icall_nop((void *)*plVar1,param_2,(longlong)iVar7 * 2);
      return param_1;
    }
    local_30 = 0;
    local_38 = 0;
    if (*param_2 != 0) {
      do {
        lVar8 = lVar8 + 1;
      } while (param_2[lVar8] != 0);
      uVar10 = (int)lVar8 + 1;
      local_30 = (ulonglong)uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar10 * 2);
    }
    plVar5 = (longlong *)FUN_141671940(local_28,&local_38,1);
    if (plVar1 != plVar5) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar5;
      *plVar5 = 0;
      *(int *)(param_1 + 6) = (int)plVar5[1];
      *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)plVar5 + 0xc);
      plVar5[1] = 0;
    }
    bVar12 = local_28[0] != 0;
    local_28[0] = local_38;
    if (bVar12) {
      FMemory::Free();
      local_28[0] = local_38;
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14289c230 FUN_14289c230 body=699 status=ok
// SIG undefined FUN_14289c230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14289c230(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  
  FUN_141781840();
  local_res8 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1451e2b70;
  uVar7 = FUN_1404b03b0();
  FCanvasTextItem::FCanvasTextItem(param_1 + 0x13,&local_res8,uVar7,0,&DAT_1464aa6c0);
  pvVar6 = ThreadLocalStoragePointer;
  uVar11 = (ulonglong)_tls_index;
  *(undefined4 *)(param_1 + 0x48) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x244) = DAT_1468b5d88._4_4_;
  lVar9 = *(longlong *)((longlong)pvVar6 + uVar11 * 8);
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x254) = DAT_1468b5d88._4_4_;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x3f800000;
  uVar4 = DAT_1464aa6ec;
  uVar3 = DAT_1464aa6e8;
  uVar2 = DAT_1464aa6e4;
  uVar1 = DAT_1464aa6e0;
  *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) | 2;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar2;
  *(undefined4 *)(param_1 + 0x21) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar4;
  if ((*(int *)(lVar9 + 0x38) < DAT_146b191d0) &&
     (_Init_thread_header(&DAT_146b191d0), DAT_146b191d0 == -1)) {
    FUN_14255ad10(&DAT_146b191b0,L"/Engine/EngineResources/WhiteSquareTexture");
    FUN_142899c00(&DAT_146b191b8,L"/Engine/EngineResources/WhiteSquareTexture.");
    FUN_14255ad10(&DAT_146b191c0,L"/Engine/EngineResources/GradientTexture0");
    FUN_142899c00(&DAT_146b191c8,L"/Engine/EngineResources/GradientTexture0.");
    _Init_thread_footer(&DAT_146b191d0);
  }
  param_1[10] = 0x3f8000003f800000;
  param_1[0xb] = 0x3f8000003f800000;
  local_res8 = CONCAT44(local_res8._4_4_,0xff7f7f7f);
  *(undefined4 *)(param_1 + 7) = 0xff7f7f7f;
  param_1[0xc] = DAT_146b191b0;
  param_1[0xd] = DAT_146b191c0;
  uVar7 = _DAT_1464aa818;
  param_1[0x56] = _DAT_1464aa810;
  param_1[0x57] = uVar7;
  uVar7 = _DAT_1464aa7d8;
  param_1[0x4e] = _DAT_1464aa7d0;
  param_1[0x4f] = uVar7;
  uVar7 = _DAT_1464aa7e8;
  param_1[0x50] = _DAT_1464aa7e0;
  param_1[0x51] = uVar7;
  uVar3 = uRam00000001464aa7fc;
  uVar2 = DAT_1464aa7f8;
  uVar1 = DAT_1464aa7f4;
  *(undefined4 *)(param_1 + 0x52) = DAT_1464aa7f0;
  *(undefined4 *)((longlong)param_1 + 0x294) = uVar1;
  *(undefined4 *)(param_1 + 0x53) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x29c) = uVar3;
  uVar3 = _DAT_1464aa80c;
  uVar2 = uRam00000001464aa808;
  uVar1 = uRam00000001464aa804;
  *(undefined4 *)(param_1 + 0x54) = _DAT_1464aa800;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = uVar1;
  *(undefined4 *)(param_1 + 0x55) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = uVar3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_1428beee0(param_1);
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    plVar8[2] = (longlong)FUN_1428beee0;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar9;
    *plVar8 = (longlong)&PTR_FUN_143f4d1b8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464aef80,1);
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_res8);
    iVar5 = DAT_1464aef88;
    lVar9 = (longlong)DAT_1464aef88;
    DAT_1464aef88 = DAT_1464aef88 + 1;
    if (DAT_1464aef8c < DAT_1464aef88) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464aef80,iVar5);
    }
    puVar10 = (undefined8 *)(lVar9 * 0x10 + DAT_1464aef80);
    *puVar10 = plVar8;
    *(undefined4 *)(puVar10 + 1) = 3;
  }
  return param_1;
}



// FUNCTION 14289c4f0 FUN_14289c4f0 body=386 status=ok
// SIG undefined FUN_14289c4f0(void)

undefined8 * FUN_14289c4f0(undefined8 *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  *(undefined2 *)(param_1 + 6) = 0x100;
  *param_1 = &PTR_FUN_1451e2f78;
  param_1[5] = &PTR_LAB_1451e32c8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  plVar2 = (longlong *)UConsoleSettings::GetPrivateStaticClass();
  if (plVar2[0x1f] == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
  }
  uVar3 = (ulonglong)_tls_index;
  param_1[0x23] = plVar2[0x1f];
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar3 * 8) + 0x38) < DAT_146b19218) {
    _Init_thread_header(&DAT_146b19218);
    if (DAT_146b19218 == -1) {
      FUN_14255ad10(&DAT_146b19208,L"/Engine/EngineResources/Black");
      FUN_14255ad10(&DAT_146b19210,L"/Engine/EngineResources/WhiteSquareTexture");
      _Init_thread_footer(&DAT_146b19218);
    }
  }
  param_1[8] = DAT_146b19208;
  param_1[9] = DAT_146b19210;
  return param_1;
}



// FUNCTION 14289c680 UExporter body=227 status=ok
// SIG undefined UExporter(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * UExporter::UExporter(undefined8 *param_1)

{
  char cVar1;
  int *piVar2;
  int local_res8;
  int local_resc;
  undefined8 local_res18;
  undefined8 local_res20;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451e2278;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    FWeakObjectPtr::operator=(&local_res18,param_1);
    local_res20 = local_res18;
    TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1465354f0,&local_res8,&local_res20);
    if ((local_res8 != -1) &&
       (piVar2 = (int *)((longlong)local_res8 * 0x10 + _DAT_1465354f0), piVar2 != (int *)0x0)) {
      cVar1 = FWeakObjectPtr::IsValid(piVar2);
      if (cVar1 != '\0') goto LAB_14289c750;
      local_res8 = *piVar2;
      local_resc = piVar2[1];
      TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Remove(&DAT_1465354f0,&local_res8);
    }
    FUN_142400b00(&DAT_1465354f0,&local_res8,&local_res18,0);
  }
LAB_14289c750:
  *(undefined2 *)(param_1 + 0xe) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  return param_1;
}



// FUNCTION 14289c770 UInputSettings body=168 status=ok
// SIG undefined UInputSettings(void)

undefined8 * UInputSettings::UInputSettings(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1451e35a0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xbf | 0x20;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x102;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 14289c820 FUN_14289c820 body=531 status=ok
// SIG undefined FUN_14289c820(void)

undefined8 * FUN_14289c820(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__1451e3308;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 8;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x3c07fcb9;
  *(undefined4 *)(param_1 + 0x22) = 1;
  return param_1;
}



// FUNCTION 14289ca40 UTireType body=40 status=ok
// SIG undefined UTireType(void)

undefined8 * UTireType::UTireType(undefined8 *param_1)

{
  UDataAsset::UDataAsset();
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *param_1 = &PTR_FUN_143fcf3b0;
  return param_1;
}



// FUNCTION 14289ca70 UUserDefinedEnum body=86 status=ok
// SIG undefined UUserDefinedEnum(void)

undefined8 * UUserDefinedEnum::UUserDefinedEnum(undefined8 *param_1)

{
  UEnum::UEnum();
  *param_1 = &PTR__scalar_deleting_destructor__1451e2560;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return param_1;
}



// FUNCTION 14289cad0 UUserDefinedStruct body=121 status=ok
// SIG undefined UUserDefinedStruct(void)

undefined8 * UUserDefinedStruct::UUserDefinedStruct(undefined8 *param_1)

{
  undefined8 uVar1;
  
  UScriptStruct::UScriptStruct();
  *param_1 = &PTR__scalar_deleting_destructor__1451e2850;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x16] = &PTR_Initialize_1451e2808;
  uVar1 = UObjectBaseUtility::GetOutermost(param_1);
  FStructOnScope::SetPackage(param_1 + 0x16,uVar1);
  return param_1;
}



// FUNCTION 14289cb50 UUserInterfaceSettings body=392 status=ok
// SIG undefined UUserInterfaceSettings(void)

undefined8 * UUserInterfaceSettings::UUserInterfaceSettings(undefined8 *param_1)

{
  undefined8 local_res8;
  
  UDeveloperSettings::UDeveloperSettings();
  *(undefined1 *)(param_1 + 7) = 2;
  *param_1 = &PTR_FUN_1451e3888;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x35);
  *(undefined1 *)((longlong)param_1 + 0x221) = 1;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  FName::FName(&local_res8,&DAT_1451dfe20,1);
  param_1[6] = local_res8;
  return param_1;
}



// FUNCTION 14289cce0 UVectorField body=40 status=ok
// SIG undefined UVectorField(void)

undefined8 * UVectorField::UVectorField(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *param_1 = &PTR_FUN_1451e3b20;
  return param_1;
}



// FUNCTION 14289cd10 UVectorFieldAnimated body=129 status=ok
// SIG undefined UVectorFieldAnimated(void)

undefined8 * UVectorFieldAnimated::UVectorFieldAnimated(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1451e3da0;
  param_1[5] = 0xbf000000bf000000;
  *(undefined4 *)(param_1 + 6) = 0xbf000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0x3f0000003f000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x10;
  *(undefined4 *)(param_1 + 0xb) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x10;
  return param_1;
}



// FUNCTION 14289cda0 FUN_14289cda0 body=90 status=ok
// SIG undefined FUN_14289cda0(void)

undefined8 * FUN_14289cda0(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR__scalar_deleting_destructor__1451e42a0;
  param_1[5] = &PTR_LAB_1450491d8;
  param_1[0x5a] = &PTR_LAB_145051140;
  FUN_142717130(param_1,DAT_146aefc58);
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(undefined4 *)(param_1 + 0xdf) = 0x3f800000;
  return param_1;
}



// FUNCTION 14289ce00 UVectorFieldStatic body=69 status=ok
// SIG undefined UVectorFieldStatic(void)

undefined8 * UVectorFieldStatic::UVectorFieldStatic(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *param_1 = &PTR__scalar_deleting_destructor__1451e4020;
  FUntypedBulkData::FUntypedBulkData(param_1 + 0xc);
  param_1[0xc] = &PTR__scalar_deleting_destructor__143f48b90;
  return param_1;
}



// FUNCTION 14289ce50 FUN_14289ce50 body=205 status=ok
// SIG undefined FUN_14289ce50(void)

void FUN_14289ce50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    lVar7 = lVar7 + 0xa0;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + -0x30);
      plVar4 = *(longlong **)(lVar7 + -0x48);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + -0x88);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + -0x98);
      lVar7 = lVar7 + 200;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar7 = *param_1;
  }
  if (lVar7 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14289cf20 ~FActionKeyDetails body=96 status=ok
// SIG undefined ~FActionKeyDetails(void)

void UPlayerInput::FActionKeyDetails::~FActionKeyDetails(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
  ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>(param_1);
  return;
}



// FUNCTION 14289cf80 ~FAutoCompleteNode body=174 status=ok
// SIG undefined ~FAutoCompleteNode(void)

void FAutoCompleteNode::~FAutoCompleteNode(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x18));
      if (lVar1 != 0) {
        ~FAutoCompleteNode(lVar1);
        FMemory::operator_delete(lVar1,0x28);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14289d030 FUN_14289d030 body=312 status=ok
// SIG undefined FUN_14289d030(void)

void FUN_14289d030(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x148)) {
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x140);
      iVar6 = 0;
      if (0 < *(int *)(lVar3 + 0x10 + lVar9)) {
        lVar7 = 0;
        do {
          puVar4 = *(undefined8 **)(lVar7 + *(longlong *)(lVar3 + 8 + lVar9));
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
          }
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 8;
        } while (iVar6 < *(int *)(lVar3 + 0x10 + lVar9));
      }
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 0x18;
    } while (iVar8 < *(int *)(param_1 + 0x148));
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x150);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x140);
  puVar4 = *(undefined8 **)(param_1 + 0x68);
  if (puVar4 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014289d15d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 8))(plVar5,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14289d170 ~FKeyState body=127 status=ok
// SIG undefined ~FKeyState(void)

void FKeyState::~FKeyState(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = 5;
  lVar3 = param_1 + 0xc0;
  lVar4 = 5;
  do {
    plVar1 = (longlong *)(lVar3 + -0x10);
    lVar3 = lVar3 + -0x10;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  param_1 = param_1 + 0x70;
  do {
    plVar1 = (longlong *)(param_1 + -0x10);
    param_1 = param_1 + -0x10;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  return;
}



// FUNCTION 14289d1f0 ~FTextFilterExpressionContext body=115 status=ok
// SIG undefined ~FTextFilterExpressionContext(void)

void TTextFilter<FString_const_&>::FTextFilterExpressionContext::~FTextFilterExpressionContext
               (undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 7);
  plVar1 = (longlong *)param_1[6];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[6];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  *param_1 = &PTR__purecall_143f9a338;
  return;
}



// FUNCTION 14289d270 FUN_14289d270 body=542 status=ok
// SIG undefined FUN_14289d270(void)

void FUN_14289d270(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  
  if ((*param_1 != 0) && ((char)param_1[0x20] != '\0')) {
    plVar9 = (longlong *)0x0;
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      plVar9 = (longlong *)*param_1;
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      (**(code **)(*plVar9 + 0x30))(plVar9);
      (**(code **)*plVar9)(plVar9,1);
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
      *param_1 = 0;
      return;
    }
    pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar6 = TlsGetValue(*pDVar5);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = 0;
        plVar6[1] = 0;
        *(undefined4 *)(plVar6 + 2) = 0;
        plVar9 = plVar6;
      }
      TlsSetValue(*pDVar5,plVar9);
      plVar6 = plVar9;
    }
    plVar9 = (longlong *)plVar6[1];
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar6;
      if (plVar9 == (longlong *)0x0) {
        lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
        plVar6[1] = lVar7;
        if (lVar7 == 0) {
          puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar6[1] = (longlong)puVar8;
          lVar7 = 0x1f;
          do {
            puVar2 = puVar8 + 0x20;
            *puVar8 = puVar2;
            lVar7 = lVar7 + -1;
            puVar8 = puVar2;
          } while (lVar7 != 0);
          *puVar2 = 0;
        }
        plVar9 = (longlong *)plVar6[1];
        iVar10 = 0x20;
        *(undefined4 *)(plVar6 + 2) = 0x20;
      }
      else {
        iVar10 = 0x20;
        plVar6[1] = (longlong)plVar9;
        *(undefined4 *)(plVar6 + 2) = 0x20;
        *plVar6 = 0;
      }
    }
    else {
      iVar10 = (int)plVar6[2];
    }
    plVar6[1] = *plVar9;
    *(int *)(plVar6 + 2) = iVar10 + -1;
    *plVar9 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar9 + 1) = 0xff;
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144510a60;
    *(undefined1 *)(plVar9 + 3) = 0;
    plVar9[4] = 0;
    plVar9[2] = *param_1;
    lVar7 = plVar9[4];
    piVar1 = (int *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res10 = lVar7;
    FUN_140445100(plVar9,0,0xff,1,0);
    if (lVar7 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(local_res10);
      }
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14289d490 FUN_14289d490 body=320 status=ok
// SIG undefined FUN_14289d490(void)

void FUN_14289d490(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  
  *param_1 = &PTR_FUN_1451e2f78;
  param_1[5] = &PTR_LAB_1451e32c8;
  lVar2 = FUN_141672640();
  if (lVar2 != 0) {
    uVar3 = FUN_141672640();
    FOutputDeviceRedirector::RemoveOutputDevice(uVar3,param_1 + 5);
  }
  plVar4 = (longlong *)param_1[0x25];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_1416b5c20(param_1 + 0x21);
  FAutoCompleteNode::~FAutoCompleteNode(param_1 + 0x1c);
  FUN_1416b5c20(param_1 + 0x17);
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0xe);
  plVar4 = (longlong *)param_1[0xd];
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = (longlong *)param_1[0xd];
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  iVar5 = *(int *)(param_1 + 0xb);
  plVar4 = (longlong *)param_1[10];
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = (longlong *)param_1[10];
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14289d5d0 FUN_14289d5d0 body=320 status=ok
// SIG undefined FUN_14289d5d0(void)

void FUN_14289d5d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 0xd0);
  plVar4 = *(longlong **)(param_1 + 200);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
  ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>(param_1 + 0x90);
  TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
  ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>(param_1 + 0x80);
  iVar5 = *(int *)(param_1 + 0x68);
  plVar4 = *(longlong **)(param_1 + 0x60);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x60);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  iVar5 = *(int *)(param_1 + 0x58);
  plVar4 = *(longlong **)(param_1 + 0x50);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x50);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  iVar5 = *(int *)(param_1 + 0x48);
  plVar4 = *(longlong **)(param_1 + 0x40);
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14289d710 FUN_14289d710 body=278 status=ok
// SIG undefined FUN_14289d710(void)

undefined8 FUN_14289d710(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_14158ce90();
  uVar2 = FUN_14158ce90(uVar2,param_2 + 0x10);
  uVar2 = FUN_14158ce90(uVar2,param_2 + 0x28);
  uVar2 = FUN_14158ce90(uVar2,param_2 + 0x58);
  plVar3 = (longlong *)FUN_1415a1810(uVar2,param_2 + 0x48);
  puVar1 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 0x20,4);
    if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar3,param_2 + 0x20,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  puVar1 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar3 + 0x50))(plVar3,param_2 + 0x68,4);
    if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar3,param_2 + 0x68,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x68) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  return param_1;
}



// FUNCTION 14289d830 operator< body=137 status=ok
// SIG undefined operator<(void)

bool FInputAxisKeyMapping::operator<(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FName::Compare();
  if (iVar2 < 0) {
    return true;
  }
  if (*param_1 == *param_2) {
    iVar2 = FName::Compare(param_1 + 2,param_2 + 2);
    if (iVar2 < 0) {
      bVar1 = true;
    }
    else if (param_1[2] == param_2[2]) {
      bVar1 = *(float *)(param_1 + 1) < *(float *)(param_2 + 1);
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
  return false;
}



// FUNCTION 14289d8c0 FUN_14289d8c0 body=902 status=ok
// SIG undefined FUN_14289d8c0(void)

void FUN_14289d8c0(longlong *param_1,longlong param_2,int param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float local_res8 [2];
  float local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 local_c4 [4];
  undefined1 local_c0 [4];
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  undefined1 local_9c [20];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  
  iVar3 = *(int *)(*param_1 + 0xd0);
  if ((param_4 < 0x15) || (param_3 != param_4 - 1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  cVar5 = FAutoCompleteCommand::IsHistory(param_2);
  iVar9 = 0;
  local_res18[0] = *(undefined4 *)(param_2 + 0x20);
  local_res20[0] = *(undefined4 *)(*(longlong *)(*param_1 + 0x118) + 0x68);
  uVar7 = local_res18[0];
  if (param_3 == iVar3) {
    uVar7 = *(undefined4 *)param_1[3];
    lVar8 = param_1[1];
    *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)param_1[2];
    *(undefined4 *)(lVar8 + 0x3c) = uVar7;
    FLinearColor::FLinearColor(local_bc,&DAT_146535594);
    (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],local_bc);
    *(undefined4 *)(param_1[1] + 0x14) = 0;
    FCanvas::DrawItem(*(undefined8 *)(*(longlong *)param_1[4] + 0x260),param_1[1],
                      (float)*(int *)param_1[5] + *(float *)param_1[6],*(undefined4 *)param_1[7]);
    uVar7 = DAT_14653558c;
  }
  local_res18[0] = uVar7;
  if (cVar5 != '\0') {
    local_res18[0] = local_res20[0];
    local_res20[0] = uVar7;
  }
  FUN_1428bd2d0(*(undefined8 *)param_1[4],*(undefined8 *)param_1[8],param_2,local_res8,local_c4);
  if (bVar4) {
    fVar10 = *(float *)param_1[2] * 0.5 - local_res8[0] * 0.5;
    if (*(float *)param_1[9] + 6.0 <= fVar10) {
      fVar10 = *(float *)param_1[9] + 6.0;
    }
    iVar9 = (int)fVar10;
  }
  FLinearColor::FLinearColor(local_ac,local_res18);
  (**(code **)(*(longlong *)param_1[10] + 0x20))((longlong *)param_1[10],local_ac);
  cVar5 = FAutoCompleteCommand::IsHistory(param_2);
  lVar8 = param_2 + 0x10;
  if (cVar5 == '\0') {
    lVar8 = param_2;
  }
  uVar6 = FText::FromString(local_88,lVar8);
  FText::operator=(param_1[10] + 0x130,uVar6);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  FCanvas::DrawItem(*(undefined8 *)(*(longlong *)param_1[4] + 0x260),param_1[10],
                    (float)(*(int *)param_1[5] + iVar9) + *(float *)param_1[6],
                    *(undefined4 *)param_1[7]);
  cVar5 = FAutoCompleteCommand::IsHistory(param_2);
  lVar8 = param_2 + 0x10;
  if (cVar5 != '\0') {
    lVar8 = param_2;
  }
  FUN_1428bd2d0(*(undefined8 *)param_1[4],*(undefined8 *)param_1[8],lVar8,local_res10,local_c0);
  FLinearColor::FLinearColor(local_9c,local_res20);
  (**(code **)(*(longlong *)param_1[10] + 0x20))((longlong *)param_1[10],local_9c);
  cVar5 = FAutoCompleteCommand::IsHistory(param_2);
  lVar8 = param_2 + 0x10;
  if (cVar5 != '\0') {
    lVar8 = param_2;
  }
  uVar6 = FText::FromString(local_70,lVar8);
  FText::operator=(param_1[10] + 0x130,uVar6);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  FCanvas::DrawItem(*(undefined8 *)(*(longlong *)param_1[4] + 0x260),param_1[10]);
  *(float *)param_1[7] = *(float *)param_1[7] - *(float *)param_1[3];
  return;
}



// FUNCTION 14289dc50 FUN_14289dc50 body=388 status=ok
// SIG undefined FUN_14289dc50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14289dc50(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_1b68 [32];
  byte local_1b48;
  undefined1 *local_1b40;
  byte local_1b38;
  undefined4 local_1b30;
  undefined4 local_1b28;
  undefined8 local_1b18;
  undefined4 local_1b10;
  undefined4 local_1b0c;
  undefined8 local_1b08;
  undefined8 uStack_1b00;
  undefined4 local_1af8;
  longlong local_1af0 [2];
  undefined4 local_1ae0;
  uint local_1adc;
  undefined4 local_1ad8;
  undefined1 local_1ad4;
  undefined1 local_1ac8 [32];
  longlong local_1aa8;
  char local_914;
  char local_8c3;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14289dc6a;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1b68;
  local_1b10 = *(undefined4 *)((longlong)param_1 + 0xc);
  local_1b0c = (undefined4)param_1[2];
  local_1b18 = 0;
  FUN_1422e88a0(local_1ac8,*param_1 + 0x220,&local_1b18);
  local_1af8 = 0x11;
  local_1af0[0] = local_1aa8;
  local_1b08 = 0;
  uStack_1b00 = 0;
  if (local_1aa8 != 0) {
    LOCK();
    *(int *)(local_1aa8 + 8) = *(int *)(local_1aa8 + 8) + 1;
    UNLOCK();
  }
  local_1ad8 = 0;
  local_1af0[1] = 0;
  local_1ae0 = 0;
  local_1ad4 = 0;
  local_1adc = (uint)(local_8c3 != '\0') | -(uint)(local_914 != '\0') & 8;
  uStack_1b00 = FUN_1409853f0();
  local_1ae0 = 0;
  local_1b08 = FUN_1404a0ce0();
  local_1b30 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_1b28 = 3;
  local_1b38 = *(byte *)(param_1 + 1) & 1;
  local_1b40 = local_1ac8;
  local_1b48 = (byte)(*(uint *)(param_1 + 1) >> 1) & 1;
  FUN_1422e9400(*param_1,param_2,&local_1b08,*(undefined4 *)((longlong)param_1 + 0x1c));
  if (((*(byte *)(param_1 + 3) & 2) != 0) && (lVar2 = *param_1, lVar2 != 0)) {
    puVar3 = *(undefined8 **)(lVar2 + 0x208);
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    FUN_141d5b530(lVar2);
    FMemory::operator_delete(lVar2,0x2a0);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_1af0);
  FUN_142745bf0(local_1ac8);
  return;
}



// FUNCTION 14289dde0 FUN_14289dde0 body=579 status=ok
// SIG undefined FUN_14289dde0(void)

void FUN_14289dde0(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  uint in_stack_ffffffffffffff58;
  uint in_stack_ffffffffffffff60;
  
  if (*(longlong **)(param_1 + 4) != (longlong *)0x0) {
    plVar7 = (longlong *)(**(code **)(**(longlong **)(param_1 + 4) + 8))();
    if (*plVar7 != 0) {
      fVar1 = *param_1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      fVar4 = param_1[3];
      plVar7 = (longlong *)(**(code **)(**(longlong **)(param_1 + 4) + 8))();
      lVar9 = *plVar7;
      if ((((*(int *)(lVar9 + 0x20) == 1) && (*(float *)(lVar9 + 0x24) == fVar1)) &&
          (*(float *)(lVar9 + 0x28) == fVar2)) &&
         ((*(float *)(lVar9 + 0x2c) == fVar3 && (*(float *)(lVar9 + 0x30) == fVar4)))) {
        local_res8 = 0;
        puVar8 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 4) + 8))();
        FUN_141ad74f0(param_2,*puVar8,0,5,0x22,in_stack_ffffffffffffff60 & 0xffffff00);
        TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
        return;
      }
    }
    local_res8 = 0;
    puVar8 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 4) + 8))();
    FUN_141a19150(param_2,*puVar8,0,1);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
    lVar9 = (**(code **)(**(longlong **)(param_1 + 4) + 0x20))
                      (*(longlong **)(param_1 + 4),&local_res8);
    uVar5 = *(undefined4 *)(lVar9 + 4);
    puVar10 = (undefined4 *)
              (**(code **)(**(longlong **)(param_1 + 4) + 0x20))
                        (*(longlong **)(param_1 + 4),local_res18);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar6 = *puVar10;
    puVar8 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59420;
    puVar11[2] = 0;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar6;
    *(undefined4 *)(puVar11 + 4) = uVar5;
    *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
    DrawClearQuadMRT(param_2,1,1,param_1,in_stack_ffffffffffffff58 & 0xffffff00,0,0,0);
  }
  return;
}



// FUNCTION 14289e030 FUN_14289e030 body=426 status=ok
// SIG undefined FUN_14289e030(void)

void FUN_14289e030(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_res8;
  
  local_res8 = 0;
  puVar5 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 8))();
  FUN_141a19150(param_2,*puVar5,0,1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  uVar10 = *param_1;
  uVar9 = param_1[1];
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  iVar1 = param_1[4];
  iVar2 = param_1[5];
  iVar3 = param_1[6];
  iVar4 = param_1[7];
  if (*(char *)(param_1 + 10) == '\0') {
    if (0 < (iVar3 - iVar1) * (iVar4 - iVar2)) {
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_143f59430;
      *(undefined1 *)(puVar6 + 2) = 1;
      *(int *)((longlong)puVar6 + 0x14) = iVar1;
      *(int *)(puVar6 + 3) = iVar2;
      *(int *)((longlong)puVar6 + 0x1c) = iVar3;
      *(int *)(puVar6 + 4) = iVar4;
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),&local_res8);
    uVar7 = (undefined4)local_res8;
    uVar8 = local_res8._4_4_;
    uVar10 = 0;
    uVar9 = 0;
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar6;
  *(undefined8 **)(param_2 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar7;
  *puVar6 = &PTR_LAB_143f59420;
  *(undefined4 *)(puVar6 + 2) = uVar10;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uVar9;
  *(undefined4 *)(puVar6 + 3) = 0;
  *(undefined4 *)(puVar6 + 4) = uVar8;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 0x3f800000;
  return;
}



// FUNCTION 14289e1f0 FUN_14289e1f0 body=97 status=ok
// SIG undefined FUN_14289e1f0(void)

undefined8 * FUN_14289e1f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451e4e48;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14289e260 FUN_14289e260 body=97 status=ok
// SIG undefined FUN_14289e260(void)

undefined8 * FUN_14289e260(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451e4e58;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14289e2d0 FUN_14289e2d0 body=97 status=ok
// SIG undefined FUN_14289e2d0(void)

undefined8 * FUN_14289e2d0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451e4e68;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14289e340 FUN_14289e340 body=97 status=ok
// SIG undefined FUN_14289e340(void)

undefined8 * FUN_14289e340(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1451e4d60;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14289e3b0 FUN_14289e3b0 body=128 status=ok
// SIG undefined FUN_14289e3b0(void)

undefined8 * FUN_14289e3b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x6e);
  FTextFilterExpressionEvaluator::~FTextFilterExpressionEvaluator(param_1 + 0xb);
  TTextFilter<FString_const_&>::FTextFilterExpressionContext::~FTextFilterExpressionContext
            (param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = &PTR_FUN_143f4c8e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x388);
  }
  return param_1;
}



// FUNCTION 14289e430 FUN_14289e430 body=136 status=ok
// SIG undefined FUN_14289e430(void)

undefined8 * FUN_14289e430(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = param_1[1];
  *param_1 = &PTR_FUN_1451e21a0;
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x208);
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    FUN_141d5b530(lVar2);
    FMemory::operator_delete(lVar2,0x2a0);
  }
  *param_1 = &PTR_FUN_1451ddb98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14289e4c0 FUN_14289e4c0 body=43 status=ok
// SIG undefined FUN_14289e4c0(void)

undefined8 * FUN_14289e4c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f4c5f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14289e4f0 `scalar_deleting_destructor' body=101 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FCanvasNGonItem::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__1451e2250;
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f4c5f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14289e560 FUN_14289e560 body=43 status=ok
// SIG undefined FUN_14289e560(void)

undefined8 * FUN_14289e560(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f4c5f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14289e590 FUN_14289e590 body=254 status=ok
// SIG undefined FUN_14289e590(void)

undefined8 * FUN_14289e590(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_1451e21d0;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0xac8) != 0) {
      FMemory::Free();
    }
    FUN_1408bbda0(lVar1 + 0xa08);
    FUN_141edd2d0(lVar1 + 0x9d8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x9c0);
    if (*(longlong *)(lVar1 + 0x968) != 0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x8b8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x8b0);
    FUN_141edd2d0(lVar1 + 0x268);
    FUN_140944f50(lVar1 + 0x1a0);
    FPositionVertexBuffer::~FPositionVertexBuffer(lVar1 + 0x148);
    FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(lVar1 + 0x60);
    FMemory::operator_delete(lVar1,0xae0);
  }
  *param_1 = &PTR_FUN_1451ddb98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14289e690 `scalar_deleting_destructor' body=176 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FCanvasWordWrapper::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14289e740 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TTextFilter<FString_const_&>::FTextFilterExpressionContext::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~FTextFilterExpressionContext();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14289e780 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FVectorFieldAnimatedResource::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14289e7d0 FUN_14289e7d0 body=134 status=ok
// SIG undefined FUN_14289e7d0(void)

undefined8 * FUN_14289e7d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1451e4be0;
  (**(code **)(param_1[1] + 0x30))(param_1 + 1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xcc);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xcb);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xca);
  FUN_141edd2d0(param_1 + 1);
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x670);
  }
  return param_1;
}



// FUNCTION 14289e860 FUN_14289e860 body=136 status=ok
// SIG undefined FUN_14289e860(void)

undefined8 * FUN_14289e860(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 0x75;
  *param_1 = &PTR_FUN_1451e4be8;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x140);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x13f);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x13e);
  FUN_141edd2d0(plVar1);
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa10);
  }
  return param_1;
}



// FUNCTION 14289e8f0 `scalar_deleting_destructor' body=91 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVectorFieldStaticResource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1451e4b90;
  FMemory::Free(param_1[0xd]);
  param_1[0xd] = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14289e950 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCanvas::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_140c64b70(param_1 + 0x98);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2c0);
  }
  return param_1;
}



// FUNCTION 14289e9a0 FUN_14289e9a0 body=52 status=ok
// SIG undefined FUN_14289e9a0(void)

undefined8 FUN_14289e9a0(undefined8 param_1,ulonglong param_2)

{
  FUN_14289d490();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 14289e9e0 `scalar_deleting_destructor' body=176 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UExporter::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x50);
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x48);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x38);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14289ea90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFillTextureCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14289d5d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14289ead0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 AGameModeBase::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140681f60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3c8);
  }
  return param_1;
}



// FUNCTION 14289eb10 `scalar_deleting_destructor' body=163 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UUserDefinedEnum::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x60,0);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14289ebc0 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UUserDefinedStruct::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_141fd3110(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14289ec20 FUN_14289ec20 body=322 status=ok
// SIG undefined FUN_14289ec20(void)

longlong FUN_14289ec20(longlong param_1,ulonglong param_2)

{
  if (*(char *)(param_1 + 0x250) != '\0') {
    *(undefined1 *)(param_1 + 0x250) = 0;
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  FRichCurve::~FRichCurve(param_1 + 0x1a8);
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,600);
  }
  return param_1;
}



// FUNCTION 14289ed70 FUN_14289ed70 body=52 status=ok
// SIG undefined FUN_14289ed70(void)

undefined8 FUN_14289ed70(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 14289edb0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UVectorFieldStatic::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUntypedBulkData::~FUntypedBulkData(param_1 + 0x60);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14289edf0 AddActionMapping body=144 status=ok
// SIG undefined AddActionMapping(void)

void UInputSettings::AddActionMapping(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)(param_1 + 0x80);
  iVar2 = TArray<FInputActionKeyMapping,FDefaultAllocator>::Find(plVar1);
  if (iVar2 == -1) {
    iVar2 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar2 + 1;
    if (*(int *)(param_1 + 0x8c) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    FUN_14289abe0(*plVar1 + (longlong)iVar2 * 0x28,param_2);
  }
  if (param_3 != '\0') {
    ForceRebuildKeymaps(param_1);
    return;
  }
  return;
}



// FUNCTION 14289ee80 AddAxisMapping body=52 status=ok
// SIG undefined AddAxisMapping(void)

void UInputSettings::AddAxisMapping(longlong param_1,undefined8 param_2,char param_3)

{
  TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FInputAxisKeyMapping_const_&>(param_1 + 0x90);
  if (param_3 != '\0') {
    ForceRebuildKeymaps(param_1);
  }
  return;
}



// FUNCTION 14289eec0 AddEngineDefinedActionMapping body=322 status=ok
// SIG undefined AddEngineDefinedActionMapping(void)

void UPlayerInput::AddEngineDefinedActionMapping(undefined8 param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  iVar3 = TArray<FInputActionKeyMapping,FDefaultAllocator>::Find(&DAT_146b18a30,param_1);
  iVar2 = DAT_146b18a38;
  if (iVar3 == -1) {
    lVar5 = (longlong)DAT_146b18a38;
    DAT_146b18a38 = DAT_146b18a38 + 1;
    if (DAT_146b18a3c < DAT_146b18a38) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&DAT_146b18a30,iVar2);
    }
    FUN_14289abe0(DAT_146b18a30 + lVar5 * 0x28,param_1);
  }
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar4 = FUN_1429ecea0();
  FUN_1417a5560(uVar4,&local_28,1,0x10,0);
  uVar6 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar6 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      FUN_1428badb0(*(longlong *)(local_28 + (longlong)local_18 * 8) + 0x1c0);
      pbVar1 = (byte *)(*(longlong *)(local_28 + (longlong)local_18 * 8) + 0x2b4);
      *pbVar1 = *pbVar1 & 0xfe;
      uVar6 = local_20 & 0xffffffff;
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 14289f010 FUN_14289f010 body=434 status=ok
// SIG undefined FUN_14289f010(void)

void FUN_14289f010(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  iVar3 = DAT_146b18a48;
  lVar5 = (longlong)DAT_146b18a48;
  if (DAT_146b18a40 != DAT_146b18a40 + lVar5 * 5) {
    plVar6 = DAT_146b18a40;
    do {
      if (((*plVar6 == *param_1) && (plVar6[2] == param_1[2])) &&
         (*(float *)(param_1 + 1) == *(float *)(plVar6 + 1))) {
        if ((int)(((longlong)plVar6 - (longlong)DAT_146b18a40) / 0x28) != -1) goto LAB_14289f0e6;
        break;
      }
      plVar6 = plVar6 + 5;
    } while (plVar6 != DAT_146b18a40 + lVar5 * 5);
  }
  DAT_146b18a48 = DAT_146b18a48 + 1;
  if (DAT_146b18a4c < DAT_146b18a48) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&DAT_146b18a40,iVar3);
  }
  plVar6 = DAT_146b18a40;
  DAT_146b18a40[lVar5 * 5] = *param_1;
  *(int *)(plVar6 + lVar5 * 5 + 1) = (int)param_1[1];
  plVar6[lVar5 * 5 + 2] = param_1[2];
  plVar6[lVar5 * 5 + 3] = param_1[3];
  lVar2 = param_1[4];
  plVar6[lVar5 * 5 + 4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
LAB_14289f0e6:
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar4 = FUN_1429ecea0();
  FUN_1417a5560(uVar4,&local_28,1,0x10,0);
  uVar7 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar7 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      TSet<TTuple<FName,UPlayerInput::FAxisKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>,FDefaultSetAllocator>
      ::Reset(*(longlong *)(local_28 + (longlong)local_18 * 8) + 0x210);
      pbVar1 = (byte *)(*(longlong *)(local_28 + (longlong)local_18 * 8) + 0x2b4);
      *pbVar1 = *pbVar1 & 0xfe;
      uVar7 = local_20 & 0xffffffff;
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 14289f1d0 FUN_14289f1d0 body=970 status=ok
// SIG undefined FUN_14289f1d0(void)

void FUN_14289f1d0(undefined8 param_1,longlong *param_2,int param_3)

{
  wchar_t wVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res18 [2];
  float local_res20 [2];
  float local_108;
  float local_104;
  wchar_t *local_100;
  ulonglong local_f8;
  float local_f0;
  float local_ec;
  float local_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  
  lVar13 = param_2[3];
  param_3 = param_3 - (int)lVar13;
  lVar10 = param_2[2];
  uVar11 = param_3 + 1;
  if (param_3 == 0) {
    uVar11 = 0;
  }
  local_100 = (wchar_t *)0x0;
  local_f8 = (ulonglong)uVar11;
  local_c8 = *(undefined8 *)(lVar10 + 0x20);
  local_d8 = *(float *)(lVar10 + 0x10);
  fStack_d4 = *(float *)(lVar10 + 0x14);
  uStack_d0 = *(undefined4 *)(lVar10 + 0x18);
  uStack_cc = *(undefined4 *)(lVar10 + 0x1c);
  lVar10 = *param_2;
  pwVar14 = (wchar_t *)0x0;
  if (0 < (int)uVar11) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
    pwVar14 = local_100;
    uVar11 = (uint)local_f8;
    if (0 < (int)(uint)local_f8) {
      wcsncpy(local_100,(wchar_t *)(lVar10 + (longlong)(int)lVar13 * 2),(longlong)param_3);
      pwVar14[param_3] = L'\0';
    }
  }
  local_f8 = 0;
  pwVar15 = L"";
  if (uVar11 != 0) {
    pwVar15 = pwVar14;
  }
  local_100 = (wchar_t *)0x0;
  lVar10 = -1;
  if ((pwVar15 != (wchar_t *)0x0) && (*pwVar15 != L'\0')) {
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (pwVar15[lVar13] != L'\0');
    uVar12 = (int)lVar13 + 1;
    local_f8 = (ulonglong)uVar12;
    uVar11 = uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
      uVar11 = (uint)local_f8;
    }
    pwVar8 = local_100;
    FGenericPlatformString::Memcpy(local_100,pwVar15,(longlong)(int)uVar12 * 2);
    if (uVar11 != 0) goto LAB_14289f312;
  }
  pwVar8 = L"";
LAB_14289f312:
  do {
    lVar10 = lVar10 + 1;
  } while (pwVar8[lVar10] != L'\0');
  lVar13 = CONCAT44(uStack_cc,uStack_d0);
  fVar20 = 0.0;
  fVar18 = 0.0;
  if (lVar13 != 0) {
    FUN_14244e9c0(lVar13,0x30,&local_108,&local_104);
    if (local_108 == 0.0) {
      FUN_14244e9c0(lVar13,0x41,&local_108,&local_104);
    }
    fVar4 = fStack_d4;
    fVar3 = local_d8;
    fVar19 = (float)local_c8 * local_d8;
    if (*pwVar8 != L'\0') {
      fVar5 = local_c8._4_4_;
      pwVar15 = pwVar8;
      pwVar16 = (wchar_t *)0x0;
      do {
        pwVar9 = pwVar15;
        if (pwVar8 + (int)lVar10 <= pwVar9) break;
        wVar1 = *pwVar9;
        FUN_14244e9c0(lVar13,wVar1,local_res18,local_res20);
        if ((local_res20[0] == 0.0) && (wVar1 == L'\n')) {
          local_res20[0] = local_104;
        }
        fVar17 = fVar19;
        if (pwVar16 != (wchar_t *)0x0) {
          cVar6 = FUN_14244e820(lVar13,*pwVar16,wVar1);
          fVar17 = (float)(int)cVar6 * fVar3 + fVar19;
        }
        pwVar15 = pwVar9 + 1;
        local_res18[0] = local_res18[0] * fVar3;
        local_res20[0] = local_res20[0] * fVar4;
        iVar7 = iswspace(*pwVar15);
        if ((iVar7 == 0) && (*pwVar15 != L'\0')) {
          local_res18[0] = local_res18[0] + fVar17;
        }
        fVar20 = fVar20 + local_res18[0];
        fVar17 = fVar5 * fVar4 + local_res20[0];
        if (fVar18 < fVar17) {
          fVar18 = fVar17;
        }
        pwVar16 = pwVar9;
      } while (*pwVar15 != L'\0');
    }
  }
  plVar2 = (longlong *)param_2[4];
  iVar7 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar7 + 1;
  local_f0 = fVar20;
  local_ec = fVar18;
  if (*(int *)((longlong)plVar2 + 0xc) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar2,iVar7);
  }
  lVar10 = *plVar2 + (longlong)iVar7 * 0x18;
  FString::FString(lVar10,&local_100);
  *(float *)(lVar10 + 0x10) = local_f0;
  *(float *)(lVar10 + 0x14) = local_ec;
  if (local_100 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (pwVar14 != (wchar_t *)0x0) {
    FMemory::Free(pwVar14);
  }
  return;
}



// FUNCTION 14289f5a0 AddOption body=493 status=ok
// SIG undefined AddOption(void)

void FURL::AddOption(longlong param_1,wchar_t *param_2)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  size_t _MaxCount;
  
  pwVar3 = ::_guard_xfg_dispatch_icall_nop(param_2,L'=');
  lVar6 = -1;
  if (pwVar3 == (wchar_t *)0x0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != L'\0');
  }
  else {
    pwVar3 = ::_guard_xfg_dispatch_icall_nop(param_2,L'=');
    lVar4 = (longlong)pwVar3 - (longlong)param_2 >> 1;
  }
  uVar12 = 0;
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    _MaxCount = (size_t)(int)lVar4;
    uVar7 = uVar12;
    uVar9 = uVar12;
    do {
      uVar8 = (uint)uVar7;
      if (*(int *)(uVar9 + 8 + *(longlong *)(param_1 + 0x48)) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = *(wchar_t **)(uVar9 + *(longlong *)(param_1 + 0x48));
      }
      iVar1 = _wcsnicmp(pwVar3,param_2,_MaxCount);
      if (iVar1 == 0) {
        lVar4 = *(longlong *)(param_1 + 0x48);
        iVar1 = *(int *)(lVar4 + 8 + uVar9);
        if (iVar1 == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar4 + uVar9);
        }
        if (puVar5[_MaxCount] == 0x3d) break;
        if (iVar1 == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar4 + uVar9);
        }
        if (puVar5[_MaxCount] == 0) break;
      }
      uVar8 = uVar8 + 1;
      uVar7 = (ulonglong)uVar8;
      uVar9 = uVar9 + 0x10;
    } while ((int)uVar8 < *(int *)(param_1 + 0x50));
  }
  plVar11 = (longlong *)(param_1 + 0x48);
  if (uVar8 == *(uint *)(param_1 + 0x50)) {
    iVar1 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar1 + 1;
    if (*(int *)(param_1 + 0x54) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
    }
    puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar11);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
      puVar10[1] = 0;
      if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
        do {
          lVar6 = lVar6 + 1;
        } while (param_2[lVar6] != L'\0');
        iVar1 = (int)lVar6 + 1;
        *(int *)(puVar10 + 1) = iVar1;
        if (0 < iVar1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar10,0);
        }
        FGenericPlatformString::Memcpy(*puVar10,param_2,(longlong)iVar1 * 2);
      }
    }
  }
  else {
    plVar11 = (longlong *)((longlong)(int)uVar8 * 0x10 + *plVar11);
    if ((wchar_t *)*plVar11 != param_2) {
      uVar7 = uVar12;
      if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
        do {
          lVar6 = lVar6 + 1;
        } while (param_2[lVar6] != L'\0');
        uVar7 = (ulonglong)((int)lVar6 + 1);
      }
      *(undefined4 *)(plVar11 + 1) = 0;
      iVar1 = (int)uVar7;
      if (*(int *)((longlong)plVar11 + 0xc) != iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar11,uVar7);
        uVar12 = (ulonglong)*(uint *)(plVar11 + 1);
      }
      iVar2 = iVar1 + (int)uVar12;
      *(int *)(plVar11 + 1) = iVar2;
      if (*(int *)((longlong)plVar11 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar11,uVar12);
      }
      if (iVar1 != 0) {
        ::_guard_xfg_dispatch_icall_nop((void *)*plVar11,param_2,(longlong)iVar1 * 2);
      }
    }
  }
  return;
}



// FUNCTION 14289f790 FUN_14289f790 body=247 status=ok
// SIG undefined FUN_14289f790(void)

void FUN_14289f790(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = param_1 + 0x16;
  cVar6 = (**(code **)(*plVar1 + 0x30))(plVar1);
  if (cVar6 != '\0') {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  lVar7 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (lVar7 != 0) {
    lVar8 = *(longlong *)(param_2 + 8);
    if (lVar8 == 0) {
      FReferenceCollector::CreateVerySlowReferenceCollectorArchive(param_2);
      lVar8 = *(longlong *)(param_2 + 8);
    }
    uVar2 = *(undefined8 *)(lVar8 + 0x90);
    uVar3 = *(undefined8 *)(lVar8 + 0x78);
    uVar4 = *(undefined8 *)(lVar8 + 0x98);
    uVar5 = *(undefined8 *)(lVar8 + 0xa0);
    *(longlong **)(lVar8 + 0x90) = param_1;
    *(undefined8 *)(lVar8 + 0x78) = 0;
    *(undefined8 *)(lVar8 + 0x98) = 0;
    *(undefined8 *)(lVar8 + 0xa0) = 0;
    (**(code **)(*param_1 + 0x298))(param_1,lVar8,lVar7);
    *(undefined8 *)(lVar8 + 0x90) = uVar2;
    *(undefined8 *)(lVar8 + 0x78) = uVar3;
    *(undefined8 *)(lVar8 + 0x98) = uVar4;
    *(undefined8 *)(lVar8 + 0xa0) = uVar5;
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 14289f890 FUN_14289f890 body=1102 status=ok
// SIG undefined FUN_14289f890(void)

void FUN_14289f890(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  short *psVar2;
  wchar_t wVar3;
  int iVar4;
  void *_Src;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined2 *puVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  wchar_t local_res10 [4];
  wchar_t *local_res18;
  undefined2 *local_res20;
  wchar_t *local_88;
  ulonglong local_80;
  wchar_t *local_78;
  int local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  ulonglong local_60;
  wchar_t *local_58;
  uint local_50;
  undefined4 local_4c;
  longlong local_48 [2];
  
  _Src = (void *)*param_2;
  local_50 = *(uint *)(param_2 + 1);
  uVar17 = (ulonglong)(int)local_50;
  local_res18 = (wchar_t *)0x0;
  local_58 = (wchar_t *)0x0;
  if (local_50 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
    local_res18 = local_58;
    _guard_xfg_dispatch_icall_nop(local_58,_Src,uVar17 * 2);
    uVar17 = (ulonglong)local_50;
  }
  do {
    do {
      pwVar16 = (wchar_t *)0x0;
      if (((int)uVar17 == 0) || (uVar9 = (int)uVar17 - 1, (int)uVar9 < 1)) {
        (**(code **)(*param_1 + 0x2d0))(param_1);
        plVar1 = param_1 + 0x12;
        if ((int)param_1[0x22] < 1) {
          if (plVar1 != local_48) {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            *plVar1 = 0;
            param_1[0x13] = 0;
          }
        }
        else {
          iVar11 = (int)param_1[0x1a];
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          FString::operator=(plVar1,param_1[0x21] +
                                    (longlong)(iVar11 + *(int *)((longlong)param_1 + 0xcc)) * 0x28);
        }
        if (local_res18 != (wchar_t *)0x0) {
          FMemory::Free(local_res18);
        }
        return;
      }
      local_78 = (wchar_t *)0x0;
      local_6c = 0;
      uVar8 = uVar9;
      if (1 < (int)uVar9) {
        uVar8 = 1;
      }
      pwVar12 = (wchar_t *)(ulonglong)(uVar8 + 1);
      if (uVar8 == 0) {
        pwVar12 = pwVar16;
      }
      iVar11 = (int)pwVar12;
      local_70 = iVar11;
      if ((0 < iVar11) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0), iVar11 = local_70,
         pwVar16 = local_78, 0 < local_70)) {
        wcsncpy(local_78,local_res18,(longlong)(int)uVar8);
        pwVar16[(int)uVar8] = L'\0';
      }
      pwVar12 = L"";
      if (iVar11 != 0) {
        pwVar12 = pwVar16;
      }
      wVar3 = *pwVar12;
      if (pwVar16 != (wchar_t *)0x0) {
        FMemory::Free(pwVar16);
      }
      uVar8 = uVar9;
      if (1 < uVar9) {
        uVar8 = 1;
      }
      uVar10 = uVar8;
      if ((uVar8 < 0x80000001) && (uVar10 = uVar9, 0x80000000 < uVar9)) {
        uVar10 = 0x80000000;
      }
      iVar11 = uVar10 - uVar8;
      local_88 = (wchar_t *)0x0;
      pwVar16 = (wchar_t *)0x0;
      uVar9 = iVar11 + 1;
      if (iVar11 == 0) {
        uVar9 = 0;
      }
      uVar17 = (ulonglong)uVar9;
      local_80 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        pwVar16 = local_88;
        uVar17 = local_80 & 0xffffffff;
        if (0 < (int)local_80) {
          wcsncpy(local_88,local_res18 + (int)uVar8,(longlong)iVar11);
          pwVar16[iVar11] = L'\0';
        }
      }
      if (local_res18 != (wchar_t *)0x0) {
        FMemory::Free(local_res18);
      }
      puVar15 = (undefined2 *)0x0;
      local_88 = (wchar_t *)0x0;
      local_80 = 0;
      local_res18 = pwVar16;
    } while (0xdf < (ushort)wVar3 - 0x20);
    iVar4 = (int)param_1[0x10];
    local_res10[1] = 0;
    pwVar16 = L"";
    iVar14 = 0;
    iVar11 = iVar4 + -1;
    iVar7 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar11 = -1;
      iVar7 = iVar14;
    }
    iVar7 = iVar7 - (int)param_1[0x11];
    if (iVar4 == 0) {
      puVar13 = &DAT_143f3eda8;
      iVar11 = iVar14;
    }
    else {
      puVar13 = (undefined2 *)param_1[0xf];
    }
    if ((-1 < iVar7) && (iVar14 = iVar11, iVar7 < iVar11)) {
      iVar14 = iVar7;
    }
    local_68 = (undefined2 *)0x0;
    local_60 = 0;
    psVar2 = puVar13 + ((longlong)iVar11 - (longlong)iVar14);
    local_res10[0] = wVar3;
    if ((psVar2 == (short *)0x0) || (*psVar2 == 0)) {
LAB_14289fb23:
      local_res20 = &DAT_143f3eda8;
    }
    else {
      lVar6 = -1;
      do {
        lVar5 = lVar6 + 1;
        lVar6 = lVar6 + 1;
      } while (psVar2[lVar5] != 0);
      uVar8 = (int)lVar6 + 1;
      local_60 = (ulonglong)uVar8;
      uVar9 = uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        uVar9 = (uint)local_60;
      }
      puVar15 = local_68;
      FGenericPlatformString::Memcpy(local_68,psVar2,(longlong)(int)uVar8 * 2);
      local_res20 = puVar15;
      if (uVar9 == 0) goto LAB_14289fb23;
    }
    iVar4 = (int)param_1[0x11];
    iVar11 = (int)param_1[0x10] + -1;
    if ((int)param_1[0x10] == 0) {
      iVar11 = 0;
    }
    else {
      pwVar16 = (wchar_t *)param_1[0xf];
    }
    if (iVar4 < 0) {
      iVar11 = 0;
    }
    else if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
    local_58 = (wchar_t *)0x0;
    local_4c = 0;
    uVar9 = iVar11 + 1;
    if (iVar11 == 0) {
      uVar9 = 0;
    }
    pwVar12 = (wchar_t *)0x0;
    local_50 = uVar9;
    if ((0 < (int)uVar9) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), uVar9 = local_50,
       pwVar12 = local_58, 0 < (int)local_50)) {
      wcsncpy(local_58,pwVar16,(longlong)iVar11);
      pwVar12[iVar11] = L'\0';
    }
    pwVar16 = L"";
    if (uVar9 != 0) {
      pwVar16 = pwVar12;
    }
    FString::PrintfImpl(local_48,L"%s%s%s",pwVar16,local_res10,local_res20);
    (**(code **)(*param_1 + 0x278))(param_1,local_48);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (pwVar12 != (wchar_t *)0x0) {
      FMemory::Free(pwVar12);
    }
    if (puVar15 != (undefined2 *)0x0) {
      FMemory::Free(puVar15);
    }
    (**(code **)(*param_1 + 0x280))(param_1);
  } while( true );
}



// FUNCTION 14289fce0 FUN_14289fce0 body=507 status=ok
// SIG undefined FUN_14289fce0(void)

void FUN_14289fce0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if ((((iVar1 != 0) || (*(int *)(param_1 + 0x84) != 0)) || (*(int *)(param_1 + 0x88) != 0)) ||
     (*(int *)(param_1 + 0x8c) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x268);
    iVar5 = 0;
    iVar8 = 0;
    if (lVar4 != 0) {
      iVar5 = *(int *)(lVar4 + 0x368);
      iVar8 = *(int *)(lVar4 + 0x36c);
    }
    iVar2 = *(int *)(param_1 + 0x40);
    iVar3 = *(int *)(param_1 + 0x44);
    *(int *)(param_1 + 0x78) = iVar2;
    *(int *)(param_1 + 0x7c) = iVar3;
    iVar6 = (int)((float)iVar5 + *(float *)(param_1 + 0x28));
    iVar5 = 0;
    if (iVar6 < iVar1) {
      iVar5 = iVar1 - iVar6;
    }
    iVar8 = (int)((float)iVar8 + *(float *)(param_1 + 0x2c));
    iVar1 = 0;
    if (iVar8 < *(int *)(param_1 + 0x84)) {
      iVar1 = *(int *)(param_1 + 0x84) - iVar8;
    }
    iVar7 = (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x90)) + iVar2 + iVar6;
    if (iVar2 + iVar6 <= *(int *)(param_1 + 0x90) - *(int *)(param_1 + 0x88)) {
      iVar7 = 0;
    }
    iVar7 = (iVar2 - iVar5) - iVar7;
    *(int *)(param_1 + 0x40) = iVar7;
    iVar6 = 0;
    if (*(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x8c) < iVar3 + iVar8) {
      iVar6 = *(int *)(param_1 + 0x8c) - (*(int *)(param_1 + 0x94) - (iVar3 + iVar8));
    }
    iVar8 = (iVar3 - iVar6) - iVar1;
    *(int *)(param_1 + 0x44) = iVar8;
    local_58 = 0x3f800000;
    uStack_50 = 0;
    local_38 = 0;
    uStack_30 = 0x3f800000;
    *(float *)(param_1 + 0x30) = (float)(iVar7 - (int)((float)iVar2 - *(float *)(param_1 + 0x30)));
    local_24 = (float)iVar1;
    *(float *)(param_1 + 0x34) = (float)(iVar8 - (int)((float)iVar3 - *(float *)(param_1 + 0x34)));
    local_48 = 0x3f80000000000000;
    uStack_40 = 0;
    local_28 = (float)iVar5;
    local_1c = 0x3f800000;
    local_20 = 0;
    FCanvas::PushRelativeTransform(*(undefined8 *)(param_1 + 0x260),&local_58);
  }
  return;
}



// FUNCTION 14289fee0 FUN_14289fee0 body=34 status=ok
// SIG undefined FUN_14289fee0(void)

void FUN_14289fee0(undefined8 param_1)

{
  FUN_1417502d0();
  FUN_140483870(&DAT_1464aef80,param_1);
  return;
}



// FUNCTION 14289ff10 FUN_14289ff10 body=27 status=ok
// SIG undefined FUN_14289ff10(void)

void FUN_14289ff10(undefined8 param_1)

{
  FUN_1428b99c0();
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 14289ff60 FUN_14289ff60 body=56 status=ok
// SIG undefined FUN_14289ff60(void)

void FUN_14289ff60(longlong *param_1,longlong param_2)

{
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x2a8))();
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 1;
    return;
  }
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 1;
  return;
}



// FUNCTION 14289ffa0 Bind body=67 status=ok
// SIG undefined Bind(void)

void FVectorFieldVisualizationVertexFactoryShaderParameters::Bind
               (longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"VectorFieldTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0xc,param_2,L"VectorFieldTextureSampler",0);
  return;
}



// FUNCTION 14289fff0 BlendToSimpleElementBlend body=57 status=ok
// SIG undefined BlendToSimpleElementBlend(void)

undefined8 FCanvas::BlendToSimpleElementBlend(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == 1) {
    return 1;
  }
  if (param_1 == 3) {
    return 3;
  }
  if (param_1 != 4) {
    if (param_1 != 5) {
      return 2;
    }
    return 9;
  }
  return 4;
}



// FUNCTION 1428a0030 Build body=288 status=ok
// SIG undefined Build(void)

void `UPlayerInput::ConditionalBuildKeyMappings_Internal'::`5'::<unnamed-type-ActionMappingsUtility>
     ::Build(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int local_res10 [2];
  longlong *local_res20;
  
  plVar6 = (longlong *)*param_2;
  plVar2 = plVar6 + (longlong)(int)param_2[1] * 5;
  do {
    if (plVar6 == plVar2) {
      return;
    }
    lVar3 = *plVar6;
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      plVar5 = (longlong *)param_3[8];
      if ((longlong *)param_3[8] == (longlong *)0x0) {
        plVar5 = param_3 + 7;
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_3[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          plVar5 = (longlong *)((longlong)iVar4 * 0x40 + *param_3);
          if (*plVar5 == lVar3) {
            if ((iVar4 != -1) && (plVar5 != (longlong *)0x0)) goto LAB_1428a00e9;
            break;
          }
          iVar4 = (int)plVar5[7];
        } while (iVar4 != -1);
      }
    }
    local_res20 = plVar6;
    FUN_142896330(param_3,local_res10,&local_res20,0);
    plVar5 = (longlong *)((longlong)local_res10[0] * 0x40 + *param_3);
LAB_1428a00e9:
    plVar1 = plVar5 + 1;
    iVar4 = TArray<FInputActionKeyMapping,FDefaultAllocator>::Find(plVar1,plVar6);
    if (iVar4 == -1) {
      iVar4 = (int)plVar5[2];
      *(int *)(plVar5 + 2) = iVar4 + 1;
      if (*(int *)((longlong)plVar5 + 0x14) < iVar4 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
      }
      FUN_14289abe0(*plVar1 + (longlong)iVar4 * 0x28,plVar6);
    }
    plVar6 = plVar6 + 5;
  } while( true );
}



// FUNCTION 1428a0150 FUN_1428a0150 body=368 status=ok
// SIG undefined FUN_1428a0150(void)

void FUN_1428a0150(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res10 [4];
  longlong *local_res20;
  
  plVar8 = (longlong *)*param_2;
  plVar1 = plVar8 + (longlong)(int)param_2[1] * 5;
  if (plVar8 != plVar1) {
    plVar9 = plVar8 + 3;
    do {
      lVar2 = *plVar8;
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        plVar4 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar4 = param_3 + 7;
        }
        iVar3 = *(int *)((longlong)plVar4 +
                        ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                        (longlong)(int)param_3[9] - 1U) * 4);
        if (iVar3 != -1) {
          do {
            lVar6 = *param_3 + (longlong)iVar3 * 0x28;
            if (*(longlong *)(*param_3 + (longlong)iVar3 * 0x28) == lVar2) {
              if ((iVar3 != -1) && (lVar6 != 0)) goto LAB_1428a021f;
              break;
            }
            iVar3 = *(int *)(lVar6 + 0x20);
          } while (iVar3 != -1);
        }
      }
      local_res20 = plVar8;
      FUN_142896610(param_3,local_res10,&local_res20,0);
      lVar6 = *param_3 + (longlong)local_res10[0] * 0x28;
LAB_1428a021f:
      lVar5 = *(longlong *)(lVar6 + 8);
      lVar7 = (longlong)*(int *)(lVar6 + 0x10);
      lVar2 = lVar5 + lVar7 * 0x28;
      if (lVar5 != lVar2) {
        do {
          if (*(longlong *)(lVar5 + 0x10) == plVar9[-1]) goto LAB_1428a0297;
          lVar5 = lVar5 + 0x28;
        } while (lVar5 != lVar2);
      }
      iVar3 = *(int *)(lVar6 + 0x10) + 1;
      *(int *)(lVar6 + 0x10) = iVar3;
      if (*(int *)(lVar6 + 0x14) < iVar3) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow((longlong *)(lVar6 + 8));
      }
      lVar2 = *(longlong *)(lVar6 + 8);
      *(longlong *)(lVar2 + lVar7 * 0x28) = *plVar8;
      *(int *)(lVar2 + 8 + lVar7 * 0x28) = (int)plVar9[-2];
      *(longlong *)(lVar2 + 0x10 + lVar7 * 0x28) = plVar9[-1];
      *(longlong *)(lVar2 + 0x18 + lVar7 * 0x28) = *plVar9;
      lVar6 = plVar9[1];
      *(longlong *)(lVar2 + 0x20 + lVar7 * 0x28) = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
LAB_1428a0297:
      plVar8 = plVar8 + 5;
      plVar9 = plVar9 + 5;
    } while (plVar8 != plVar1);
  }
  return;
}



// FUNCTION 1428a02c0 CalcBaseTransform2D body=497 status=ok
// SIG undefined CalcBaseTransform2D(void)

undefined8 FCanvas::CalcBaseTransform2D(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float local_a8;
  ulonglong uStack_a4;
  longlong lStack_9c;
  float fStack_94;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  uVar1 = 1;
  if (param_3 != 0) {
    uVar1 = param_3;
  }
  uVar2 = 1;
  if (param_2 != 0) {
    uVar2 = param_2;
  }
  fVar3 = -2.0 / (float)uVar1;
  fVar4 = 2.0 / (float)uVar2;
  local_a8 = fVar4 * 1.0 + 0.0 + 0.0 + -0.0;
  uStack_a4 = (ulonglong)(uint)(fVar3 * 0.0 + 0.0 + 0.0 + 0.0);
  fStack_94 = fVar3 * 1.0 + 0.0 + 0.0 + 0.0;
  lStack_9c = (ulonglong)(uint)(fVar4 * 0.0 + 0.0 + 0.0 + -0.0) << 0x20;
  uStack_90 = 0;
  local_88 = fVar4 * 0.0 + 0.0 + 0.0 + -0.0;
  fStack_84 = fVar3 * 0.0 + 0.0 + 0.0 + 0.0;
  uStack_80 = 0x3f800000;
  uStack_7c = 0;
  local_78 = fVar4 * 0.0 + 0.0 + 0.0 + -1.0;
  fStack_74 = fVar3 * 0.0 + 0.0 + 0.0 + 1.0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  AdjustProjectionMatrixForRHI(fVar4 * 0.0,&local_a8);
  return param_1;
}



// FUNCTION 1428a04c0 FUN_1428a04c0 body=252 status=ok
// SIG undefined FUN_1428a04c0(void)

undefined8 FUN_1428a04c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  
  local_30 = 0.0;
  lVar1 = *(longlong *)(param_1 + 0x6f0);
  local_38 = 0;
  local_2c = 0;
  uStack_24 = 0;
  if (lVar1 != 0) {
    fVar3 = *(float *)(lVar1 + 0x38) - *(float *)(lVar1 + 0x2c);
    fVar2 = *(float *)(lVar1 + 0x3c) - *(float *)(lVar1 + 0x30);
    fVar4 = *(float *)(lVar1 + 0x34) - *(float *)(lVar1 + 0x28);
    local_2c = CONCAT44(fVar3 * 0.5,fVar4 * 0.5);
    local_30 = fVar2 * 0.5 + *(float *)(lVar1 + 0x30);
    local_38 = CONCAT44(fVar3 * 0.5 + *(float *)(lVar1 + 0x2c),
                        fVar4 * 0.5 + *(float *)(lVar1 + 0x28));
    uStack_24 = CONCAT44(SQRT((fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) * 0.25),fVar2 * 0.5);
  }
  FBoxSphereBounds::TransformBy(&local_38);
  return param_2;
}



// FUNCTION 1428a05c0 FUN_1428a05c0 body=1319 status=ok
// SIG undefined FUN_1428a05c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1428a05c0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  ulonglong *puStack_190;
  undefined1 local_188 [8];
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined1 local_160 [16];
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  longlong local_120 [2];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [16];
  undefined1 local_a0 [40];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *param_3 = 0;
  if (*(char *)(param_1 + 0x18c) == '\x04') {
    plVar4 = *(longlong **)(param_1 + 0x238);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)FSoftClassPath::TryLoadClass<UDPICustomScalingRule>(param_1 + 400);
      *(longlong **)(param_1 + 0x238) = plVar4;
      if (plVar4 == (longlong *)0x0) {
        uVar5 = FSoftObjectPath::ToString(param_1 + 400,local_120);
        lVar6 = FText::FromString(local_78,uVar5);
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_c8,
                           L"Project Settings - User Interface Custom Scaling Rule \'{0}\' could not be found."
                           ,L"Engine",L"CustomScalingRule_NotFound");
        puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_b0,uVar5);
        local_60[0] = 4;
        FText::FText(local_50,lVar6);
        local_170 = *puVar7;
        local_198 = local_60;
        puStack_190 = &local_30;
        local_168 = puVar7[1];
        local_38 = '\x01';
        if (local_168 != 0) {
          LOCK();
          *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
          UNLOCK();
        }
        uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_160,&local_198);
        uVar5 = FText::Format(local_f8,&local_170,uVar5);
        FText::FText(local_110,uVar5);
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_f0 + 1;
          lVar3 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_f0)(local_f0);
            LOCK();
            piVar1 = (int *)((longlong)local_f0 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_f0 + 8))(local_f0,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_160);
        if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
          LOCK();
          plVar4 = local_48 + 1;
          lVar3 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar1 = (int *)((longlong)local_48 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_48 + 8))(local_48,1);
            }
          }
        }
        plVar4 = (longlong *)puVar7[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar4 + 1;
          lVar3 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar4 = *(longlong **)(lVar6 + 8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar4 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        puVar7 = (undefined8 *)FUN_140973510(local_130,local_110);
        local_180 = *puVar7;
        local_178 = (longlong *)puVar7[1];
        if (local_178 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_178 + 1) = (int)local_178[1] + 1;
          UNLOCK();
        }
        FName::FName(local_188,"MapCheck",1);
        uVar5 = FText::FText(local_e0);
        uVar8 = FUN_14161fb50(local_a0,local_188);
        puVar7 = (undefined8 *)FMessageLog::Error(uVar8,local_140,uVar5);
        FUN_141621960(*puVar7,local_150,&local_180);
        if (local_148 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_148 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_148)(local_148);
            LOCK();
            piVar1 = (int *)((longlong)local_148 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_148 + 8))(local_148,1);
            }
          }
        }
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_138 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar1 = (int *)((longlong)local_138 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_138 + 8))(local_138,1);
            }
          }
        }
        FMessageLog::~FMessageLog(local_a0);
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_d8 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_d8)(local_d8);
            LOCK();
            piVar1 = (int *)((longlong)local_d8 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_d8 + 8))(local_d8,1);
            }
          }
        }
        plVar4 = local_178;
        if (local_178 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_178 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_178)(local_178);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_128 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_128 + 8))(local_128,1);
            }
          }
        }
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_108 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar1 = (int *)((longlong)local_108 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_108 + 8))(local_108,1);
            }
          }
        }
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_c0 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar1 = (int *)((longlong)local_c0 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
            }
          }
        }
        if (local_120[0] != 0) {
          FMemory::Free();
        }
        *param_3 = 1;
        return 0x3f800000;
      }
    }
    plVar9 = *(longlong **)(param_1 + 0x240);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)plVar4[0x1f];
      if (plVar9 == (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x368))(plVar4);
        plVar9 = (longlong *)plVar4[0x1f];
      }
      *(longlong **)(param_1 + 0x240) = plVar9;
    }
    uVar5 = (**(code **)(*plVar9 + 0x278))(plVar9,param_2);
  }
  else {
    uVar5 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x1a8);
    uVar5 = FRichCurve::Eval(uVar5);
  }
  return uVar5;
}



// FUNCTION 1428a0af0 FUN_1428a0af0 body=314 status=ok
// SIG undefined FUN_1428a0af0(void)

void FUN_1428a0af0(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = *(undefined8 *)(param_1 + 0x58);
  if (DAT_146ac3ac6 != '\0') {
    cVar7 = IsInRenderingThread();
    if (cVar7 != '\0') {
      uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_14289dde0(&local_58,uVar9);
      return;
    }
  }
  if (DAT_146ac3ac5 == '\0') {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar8 = GetCurrentThreadId();
      if (DVar8 != DAT_1468c21c0) goto LAB_1428a0b8f;
    }
    local_40 = local_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    local_30 = local_48;
    uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_14289dde0(&local_40,uVar9);
    return;
  }
LAB_1428a0b8f:
  plVar10 = (longlong *)FUN_1428a23c0(local_28,0,0xff);
  lVar3 = *plVar10;
  *(undefined4 *)(lVar3 + 0x10) = local_58;
  *(undefined4 *)(lVar3 + 0x14) = uStack_54;
  *(undefined4 *)(lVar3 + 0x18) = uStack_50;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_4c;
  *(undefined8 *)(lVar3 + 0x20) = local_48;
  lVar3 = *plVar10;
  lVar6 = plVar10[2];
  lVar4 = plVar10[1];
  lVar5 = *(longlong *)(lVar3 + 0x30);
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_14048a160(lVar3,lVar4,(int)lVar6,1);
  if (lVar5 != 0) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar5);
    }
  }
  return;
}



// FUNCTION 1428a0c30 ClearOutput body=97 status=ok
// SIG undefined ClearOutput(void)

void UConsole::ClearOutput(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  plVar1 = *(longlong **)(param_1 + 0x50);
  for (iVar2 = *(int *)(param_1 + 0x58); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo((undefined8 *)(param_1 + 0x50),0);
  }
  return;
}



// FUNCTION 1428a0ca0 ClearSmoothing body=103 status=ok
// SIG undefined ClearSmoothing(void)

void UPlayerInput::ClearSmoothing(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  plVar1 = (longlong *)FUN_1429ecea0();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(lVar2 + 0x114);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar2 + 0x110);
  return;
}



// FUNCTION 1428a0d10 ClippedStrLen body=572 status=ok
// SIG undefined ClippedStrLen(void)

void UCanvas::ClippedStrLen
               (longlong param_1,float param_2,float param_3,int *param_4,int *param_5,
               wint_t *param_6)

{
  wint_t wVar1;
  int *piVar2;
  wint_t *pwVar3;
  wint_t *pwVar4;
  char cVar5;
  int iVar6;
  wint_t *pwVar7;
  wint_t *pwVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res8 [2];
  float local_res20 [2];
  float local_98 [28];
  
  pwVar3 = param_6;
  piVar2 = param_5;
  *param_4 = 0;
  *param_5 = 0;
  if (param_1 != 0) {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (param_6[lVar9] != 0);
    fVar12 = 0.0;
    fVar11 = 0.0;
    FUN_14244e9c0(param_1,0x30,local_res20,local_98);
    if (local_res20[0] == 0.0) {
      FUN_14244e9c0(param_1,0x41,local_res20,local_98);
    }
    if (*pwVar3 != 0) {
      pwVar4 = pwVar3;
      pwVar8 = (wint_t *)0x0;
      do {
        pwVar7 = pwVar4;
        if (pwVar3 + (int)lVar9 <= pwVar7) break;
        wVar1 = *pwVar7;
        FUN_14244e9c0(param_1,wVar1,&param_5,local_res8);
        if ((local_res8[0] == 0.0) && (wVar1 == 10)) {
          local_res8[0] = local_98[0];
        }
        fVar10 = 0.0;
        if (pwVar8 != (wint_t *)0x0) {
          cVar5 = FUN_14244e820(param_1,*pwVar8,wVar1);
          fVar10 = (float)(int)cVar5 * param_2;
        }
        pwVar4 = pwVar7 + 1;
        param_5._0_4_ = param_5._0_4_ * param_2;
        local_res8[0] = local_res8[0] * param_3;
        iVar6 = iswspace(*pwVar4);
        if ((iVar6 == 0) && (*pwVar4 != 0)) {
          param_5._0_4_ = param_5._0_4_ + fVar10;
        }
        fVar12 = fVar12 + param_5._0_4_;
        if (fVar11 < local_res8[0]) {
          fVar11 = local_res8[0];
        }
        pwVar8 = pwVar7;
      } while (*pwVar4 != 0);
    }
    *param_4 = (int)fVar12;
    *piVar2 = (int)fVar11;
  }
  return;
}



// FUNCTION 1428a0f50 CommandToStringArray body=79 status=ok
// SIG undefined CommandToStringArray(void)

void CommandToStringArray(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  FString::FString((longlong)iVar1 * 0x10 + *param_2,param_1);
  return;
}



// FUNCTION 1428a0fa0 ConditionalBuildKeyMappings_Internal body=372 status=ok
// SIG undefined ConditionalBuildKeyMappings_Internal(void)

void UPlayerInput::ConditionalBuildKeyMappings_Internal(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  if (*(int *)(param_1 + 0x1c8) == *(int *)(param_1 + 500)) {
    `UPlayerInput::ConditionalBuildKeyMappings_Internal'::`5'::<unnamed-type-ActionMappingsUtility>
    ::Build(local_res8,param_1 + 0x140,param_1 + 0x1c0);
    `UPlayerInput::ConditionalBuildKeyMappings_Internal'::`5'::<unnamed-type-ActionMappingsUtility>
    ::Build(local_res8,&DAT_146b18a30,param_1 + 0x1c0);
    *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + 1;
  }
  plVar1 = (longlong *)(param_1 + 0x210);
  if (*(int *)(param_1 + 0x218) != *(int *)(param_1 + 0x244)) {
    *(byte *)(param_1 + 0x2b4) = *(byte *)(param_1 + 0x2b4) | 1;
    return;
  }
  FUN_1428a0150(local_res8,param_1 + 0x150,plVar1);
  FUN_1428a0150(local_res8,&DAT_146b18a40,plVar1);
  uVar7 = 0;
  uVar9 = uVar7;
  uVar10 = uVar7;
  if (0 < *(int *)(param_1 + 0x168)) {
    do {
      lVar2 = *(longlong *)(uVar10 + *(longlong *)(param_1 + 0x160));
      if (*(int *)(param_1 + 0x218) != *(int *)(param_1 + 0x244)) {
        lVar4 = *(longlong *)(param_1 + 0x250);
        if (*(longlong *)(param_1 + 0x250) == 0) {
          lVar4 = param_1 + 0x248;
        }
        iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                 (longlong)*(int *)(param_1 + 600) - 1U) * 4);
        if (iVar3 != -1) {
          do {
            uVar6 = *plVar1 + (longlong)iVar3 * 0x28;
            if (*(longlong *)(*plVar1 + (longlong)iVar3 * 0x28) == lVar2) {
              if (iVar3 != -1) goto LAB_1428a10c3;
              break;
            }
            iVar3 = *(int *)(uVar6 + 0x20);
          } while (iVar3 != -1);
        }
      }
      uVar6 = uVar7;
LAB_1428a10c3:
      uVar5 = uVar6 + 8;
      if (uVar6 == 0) {
        uVar5 = uVar7;
      }
      if (uVar5 != 0) {
        *(byte *)(uVar5 + 0x10) = *(byte *)(uVar5 + 0x10) | 1;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar10 = uVar10 + 8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x168));
  }
  *(byte *)(param_1 + 0x2b4) = *(byte *)(param_1 + 0x2b4) | 1;
  return;
}



// FUNCTION 1428a1120 FUN_1428a1120 body=247 status=ok
// SIG undefined FUN_1428a1120(void)

void FUN_1428a1120(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong *plStack_18;
  
  if (*(int *)(param_1 + 0x178) == *(int *)(param_1 + 0x1a4)) {
    puVar8 = *(undefined8 **)(param_1 + 0x130);
    puVar3 = puVar8 + (longlong)*(int *)(param_1 + 0x138) * 3;
    for (; puVar8 != puVar3; puVar8 = puVar8 + 3) {
      local_28 = *puVar8;
      local_20 = 0;
      plStack_18 = (longlong *)0x0;
      cVar7 = FKey::IsValid(&local_28);
      if (cVar7 != '\0') {
        local_38 = &local_28;
        local_30 = puVar8 + 1;
        FUN_142896ee0(param_1 + 0x170,local_res8,&local_38,0);
      }
      plVar6 = plStack_18;
      if (plStack_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_18 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_18)(plStack_18);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1428a1240 FUN_1428a1240 body=410 status=ok
// SIG undefined FUN_1428a1240(void)

void FUN_1428a1240(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined8 *local_res8;
  longlong local_18 [2];
  
  local_res8 = param_2;
  TArray<FString,FDefaultAllocator>::RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>
            (param_1 + 0xd,&local_res8);
  iVar1 = (int)param_1[0xe];
  *(int *)(param_1 + 0xe) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x74) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xd,iVar1);
  }
  FString::FString((longlong)iVar1 * 0x10 + param_1[0xd],param_2);
  if (0x32 < *(uint *)(param_1 + 0xe)) {
    TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
              (param_1 + 0xd,0,*(uint *)(param_1 + 0xe) - 0x32,1);
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_1464af718,param_2);
  FUN_141761740(param_1,0x4000,0,DAT_1468b6148);
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  FString::PrintfImpl(local_18,L"\n>>> %s <<<",puVar6);
  (**(code **)(*param_1 + 0x298))(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)0x0;
  plVar4 = plVar5;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar4 = (longlong *)param_1[4];
  }
  lVar2 = FUN_14048b700(plVar4);
  if (param_1[7] == 0) {
    if (lVar2 != 0) {
      lVar3 = FUN_14244f490(lVar2,0);
      if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_14244f490(lVar2,0);
        (**(code **)(*plVar4 + 0xd28))(plVar4,local_18,param_2,1);
        goto LAB_1428a13b6;
      }
    }
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      plVar5 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar5 + 0x2e8))(plVar5,local_18,param_2);
  }
  else {
    plVar4 = *(longlong **)(param_1[7] + 0x30);
    (**(code **)(*plVar4 + 0xd28))(plVar4,local_18,param_2,1);
  }
LAB_1428a13b6:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428a13e0 FUN_1428a13e0 body=1066 status=ok
// SIG undefined FUN_1428a13e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428a13e0(undefined4 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  char cVar19;
  DWORD DVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  undefined4 *puVar24;
  float *pfVar25;
  float *pfVar26;
  float fVar27;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_a8 [160];
  
  lVar23 = DAT_146b18968;
  cVar19 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar19 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar20 = GetCurrentThreadId(), DVar20 != DAT_1468c21c0)) {
    lVar22 = 4;
  }
  else {
    lVar22 = 0;
  }
  if (*(int *)(lVar22 + lVar23) == 1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b191a8) &&
       (_Init_thread_header(&DAT_146b191a8), DAT_146b191a8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146b191a0 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"EnableHighDPIAwareness")
      ;
      _Init_thread_footer(&DAT_146b191a8);
    }
    if ((DAT_146b191a0 == (longlong *)0x0) ||
       (iVar21 = (**(code **)(*DAT_146b191a0 + 0x68))(), iVar21 < 1)) goto LAB_1428a1489;
  }
  else if (*(int *)(lVar22 + lVar23) != 2) goto LAB_1428a1489;
  param_1[0x4e] = 0x3f800000;
LAB_1428a1489:
  uVar18 = _DAT_1464aa7d8;
  *(undefined8 *)(param_1 + 0x38) = _DAT_1464aa7d0;
  *(undefined8 *)(param_1 + 0x3a) = uVar18;
  uVar18 = _DAT_1464aa7e8;
  *(undefined8 *)(param_1 + 0x3c) = _DAT_1464aa7e0;
  *(undefined8 *)(param_1 + 0x3e) = uVar18;
  uVar18 = _DAT_1464aa7f8;
  *(undefined8 *)(param_1 + 0x40) = _DAT_1464aa7f0;
  *(undefined8 *)(param_1 + 0x42) = uVar18;
  uVar18 = uRam00000001464aa808;
  *(undefined8 *)(param_1 + 0x44) = _DAT_1464aa800;
  *(undefined8 *)(param_1 + 0x46) = uVar18;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_1 + 0x3a);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_1 + 0x3e);
  param_1[0x30] = param_1[0x40];
  param_1[0x31] = param_1[0x41];
  param_1[0x32] = param_1[0x42];
  param_1[0x33] = param_1[0x43];
  param_1[0x34] = param_1[0x44];
  param_1[0x35] = param_1[0x45];
  param_1[0x36] = param_1[0x46];
  param_1[0x37] = param_1[0x47];
  *(undefined8 *)(param_1 + 0x49) = 0xffffffffffffffff;
  param_1[0x48] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined2 *)(param_1 + 0x23) = 0x100;
  iVar21 = param_1[0xc];
  param_1[0xc] = iVar21 + 1;
  if ((int)param_1[0xd] < iVar21 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 10,iVar21);
  }
  pfVar26 = (float *)((longlong)iVar21 * 0x50 + *(longlong *)(param_1 + 10));
  if (pfVar26 != (float *)0x0) {
    if (*(char *)(param_1 + 0x25) == '\0') {
      fVar27 = (float)param_1[0x4e];
    }
    else {
      fVar27 = 1.0;
    }
    lVar23 = (**(code **)(**(longlong **)(param_1 + 0x16) + 0x20))
                       (*(longlong **)(param_1 + 0x16),local_res8);
    uVar1 = *(undefined4 *)(lVar23 + 4);
    puVar24 = (undefined4 *)
              (**(code **)(**(longlong **)(param_1 + 0x16) + 0x20))
                        (*(longlong **)(param_1 + 0x16),local_res10);
    pfVar25 = (float *)FCanvas::CalcBaseTransform2D(local_a8,*puVar24,uVar1);
    fVar2 = pfVar25[4];
    fVar3 = pfVar25[5];
    fVar4 = pfVar25[6];
    fVar5 = pfVar25[7];
    fVar6 = *pfVar25;
    fVar7 = pfVar25[1];
    fVar8 = pfVar25[2];
    fVar9 = pfVar25[3];
    fVar10 = pfVar25[8];
    fVar11 = pfVar25[9];
    fVar12 = pfVar25[10];
    fVar13 = pfVar25[0xb];
    fVar14 = pfVar25[0xc];
    fVar15 = pfVar25[0xd];
    fVar16 = pfVar25[0xe];
    fVar17 = pfVar25[0xf];
    *pfVar26 = fVar27 * fVar6 + fVar2 * 0.0 + fVar10 * 0.0 + fVar14 * 0.0;
    pfVar26[1] = fVar27 * fVar7 + fVar3 * 0.0 + fVar11 * 0.0 + fVar15 * 0.0;
    pfVar26[2] = fVar27 * fVar8 + fVar4 * 0.0 + fVar12 * 0.0 + fVar16 * 0.0;
    pfVar26[3] = fVar27 * fVar9 + fVar5 * 0.0 + fVar13 * 0.0 + fVar17 * 0.0;
    pfVar26[4] = fVar6 * 0.0 + fVar27 * fVar2 + fVar10 * 0.0 + fVar14 * 0.0;
    pfVar26[5] = fVar7 * 0.0 + fVar27 * fVar3 + fVar11 * 0.0 + fVar15 * 0.0;
    pfVar26[6] = fVar8 * 0.0 + fVar27 * fVar4 + fVar12 * 0.0 + fVar16 * 0.0;
    pfVar26[7] = fVar9 * 0.0 + fVar27 * fVar5 + fVar13 * 0.0 + fVar17 * 0.0;
    pfVar26[8] = fVar6 * 0.0 + fVar2 * 0.0 + fVar27 * fVar10 + fVar14 * 0.0;
    pfVar26[9] = fVar7 * 0.0 + fVar3 * 0.0 + fVar27 * fVar11 + fVar15 * 0.0;
    pfVar26[10] = fVar8 * 0.0 + fVar4 * 0.0 + fVar27 * fVar12 + fVar16 * 0.0;
    pfVar26[0xb] = fVar9 * 0.0 + fVar5 * 0.0 + fVar27 * fVar13 + fVar17 * 0.0;
    pfVar26[0xc] = fVar6 * 0.0 + fVar2 * 0.0 + fVar10 * 0.0 + fVar14 * 1.0;
    pfVar26[0xd] = fVar7 * 0.0 + fVar3 * 0.0 + fVar11 * 0.0 + fVar15 * 1.0;
    pfVar26[0xe] = fVar8 * 0.0 + fVar4 * 0.0 + fVar12 * 0.0 + fVar16 * 1.0;
    pfVar26[0xf] = fVar9 * 0.0 + fVar5 * 0.0 + fVar13 * 0.0 + fVar17 * 1.0;
    fVar27 = (float)FCrc::MemCrc_DEPRECATED(pfVar26,0x40);
    pfVar26[0x10] = fVar27;
  }
  *param_1 = 0x3f800000;
  param_1[0x68] = 0xffffffff;
  iVar21 = param_1[8];
  param_1[8] = iVar21 + 1;
  if ((int)param_1[9] < iVar21 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 6,iVar21);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 6) + (longlong)iVar21 * 4) = 0;
  return;
}



// FUNCTION 1428a1810 ConstructCompiledInstance body=153 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TCopyDataCS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(200);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144ddf7d0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SrcCopyBuffer",1)
    ;
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"DestBuffer",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428a18b0 ConstructCompiledInstance body=304 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCompositeAnimatedVectorFieldCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b230;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"AtlasTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"AtlasTextureSampler",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"NoiseVolumeTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"NoiseVolumeTextureSampler",
               0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"OutVolumeTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"OutVolumeTextureSampler",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428a19e0 ConstructCompiledInstance body=204 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCopyTexture2DCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1451e1f28;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    FShaderResourceParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SrcTexture",1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"DestTexture",1);
    FShaderParameter::Bind(puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"DestPosSize",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428a1ab0 ConstructCompiledInstance body=258 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FUpdateTexture2DSubresouceCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1451e1de0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xd2) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SrcPitch",1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"SrcBuffer",1);
    FShaderParameter::Bind((longlong)puVar1 + 0xca,*(undefined8 *)(param_1 + 0x18),L"DestPosSize",1)
    ;
    FShaderResourceParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"DestTexture",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428a1bc0 ConstructCompiledInstance body=332 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FUpdateTexture3DSubresouceCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1451e1e90;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd6) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xde) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SrcPitch",1);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"SrcDepthPitch",1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"SrcBuffer",1);
    FShaderParameter::Bind(puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"DestPos",1);
    FShaderParameter::Bind((longlong)puVar1 + 0xd6,*(undefined8 *)(param_1 + 0x18),L"DestSize",1);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"DestTexture3D",1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428a1d10 ConstructFVectorFieldVisualizationVertexFactoryShaderParameters body=66 status=ok
// SIG undefined ConstructFVectorFieldVisualizationVertexFactoryShaderParameters(void)

undefined8 * ConstructFVectorFieldVisualizationVertexFactoryShaderParameters(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x10);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *puVar1 = &PTR_FUN_1451e4dc0;
      *(undefined4 *)((longlong)puVar1 + 10) = 0;
      *(undefined2 *)((longlong)puVar1 + 0xe) = 0;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428a1d60 FUN_1428a1d60 body=79 status=ok
// SIG undefined FUN_1428a1d60(void)

undefined8 * FUN_1428a1d60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__1451e1f28;
    puVar1[0x18] = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428a1db0 FUN_1428a1db0 body=79 status=ok
// SIG undefined FUN_1428a1db0(void)

undefined8 * FUN_1428a1db0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__1451e1de0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428a1e00 FUN_1428a1e00 body=87 status=ok
// SIG undefined FUN_1428a1e00(void)

undefined8 * FUN_1428a1e00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FShader::FShader(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__1451e1e90;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428a1e60 FUN_1428a1e60 body=316 status=ok
// SIG undefined FUN_1428a1e60(void)

void FUN_1428a1e60(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_18;
  longlong *local_10;
  
  puVar7 = (undefined8 *)operator_new(0x10);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    if (DAT_1468b616c == '\0') {
      plVar5 = *(longlong **)(*(longlong *)(DAT_1469f4590 + 0x18) + 0x10);
      local_18 = *(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_10 = plVar5;
      if (puVar7 != &local_18) {
        *puVar7 = local_18;
        local_18 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(puVar7 + 1,&local_10);
      }
      plVar3 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    DAT_146b184b8 = puVar7;
    return;
  }
  DAT_146b184b8 = (undefined8 *)0x0;
  return;
}



// FUNCTION 1428a1fa0 CreateFontRenderInfo body=110 status=ok
// SIG undefined CreateFontRenderInfo(void)

uint * UCanvas::CreateFontRenderInfo
                 (undefined8 param_1,uint *param_2,byte param_3,byte param_4,longlong param_5,
                 undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  
  *param_2 = *param_2 & 0xfffffffc;
  param_2[1] = param_2[1] & 0xfffffffe;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = *param_2 & 0xfffffffe;
  *param_2 = ((uint)param_3 | *param_2) & 0xfffffffd | (uint)param_4 * 2;
  bVar1 = *(float *)(param_5 + 0xc) != 0.0;
  param_2[1] = param_2[1] & 0xfffffffe | (uint)bVar1;
  if (bVar1) {
    *(undefined8 *)(param_2 + 6) = param_6;
    *(undefined8 *)(param_2 + 8) = param_7;
  }
  return param_2;
}



// FUNCTION 1428a2020 FUN_1428a2020 body=256 status=ok
// SIG undefined FUN_1428a2020(void)

undefined8 * FUN_1428a2020(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x710) == 0) {
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)operator_new(0xa10);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14271d7c0(puVar1,param_1,0);
    *puVar1 = &PTR_FUN_1451e4be8;
    *(undefined4 *)(puVar1 + 0x76) = *(undefined4 *)(puVar1[0x26] + 8);
    puVar1[0x77] = 0;
    puVar1[0x78] = 0;
    *(undefined1 *)(puVar1 + 0x7a) = 0;
    puVar1[0xdb] = 0;
    *(undefined2 *)(puVar1 + 0xdc) = 1;
    *(undefined1 *)((longlong)puVar1 + 0x6e2) = 0;
    puVar1[0x13d] = 0;
    puVar1[0x13e] = 0;
    puVar1[0x13f] = 0;
    puVar1[0x75] = &PTR_FUN_14513ab28;
    puVar1[0x140] = 0;
    *(uint *)((longlong)puVar1 + 0x1c) = *(uint *)((longlong)puVar1 + 0x1c) & 0xfffffffd;
    puVar1[0x74] = *(undefined8 *)(param_1 + 0x710);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1428a2120 FUN_1428a2120 body=332 status=ok
// SIG undefined FUN_1428a2120(void)

undefined8 * FUN_1428a2120(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1451e4e48;
  *(undefined1 *)(plVar6 + 7) = 0;
  plVar6[8] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1428a2270 FUN_1428a2270 body=332 status=ok
// SIG undefined FUN_1428a2270(void)

undefined8 * FUN_1428a2270(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1451e4e58;
  *(undefined1 *)(plVar6 + 8) = 0;
  plVar6[9] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1428a23c0 FUN_1428a23c0 body=332 status=ok
// SIG undefined FUN_1428a23c0(void)

undefined8 * FUN_1428a23c0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_1451e4e68;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1428a2510 Deproject body=36 status=ok
// SIG undefined Deproject(void)

void UCanvas::Deproject(longlong param_1,undefined8 param_2)

{
  undefined8 local_18 [3];
  
  if (*(longlong *)(param_1 + 0x268) != 0) {
    local_18[0] = param_2;
    FUN_142749b40(*(longlong *)(param_1 + 0x268),local_18);
  }
  return;
}



// FUNCTION 1428a2540 Destroy body=226 status=ok
// SIG undefined Destroy(void)

void FEngineFontServices::Destroy(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_18;
  longlong *local_10;
  
  puVar7 = DAT_146b184b8;
  if (DAT_146b184b8 != (undefined8 *)0x0) {
    local_10 = (longlong *)0x0;
    if (DAT_146b184b8 != &local_18) {
      puVar1 = DAT_146b184b8 + 1;
      *DAT_146b184b8 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar1,&local_10);
      plVar5 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_10 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
    plVar5 = (longlong *)puVar7[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FMemory::operator_delete(puVar7,0x10);
  }
  DAT_146b184b8 = (undefined8 *)0x0;
  return;
}



// FUNCTION 1428a2630 FUN_1428a2630 body=20 status=ok
// SIG undefined FUN_1428a2630(void)

void FUN_1428a2630(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FCanvasWordWrapper::_scalar_deleting_destructor_(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 1428a2650 FUN_1428a2650 body=475 status=ok
// SIG undefined FUN_1428a2650(void)

undefined8 FUN_1428a2650(longlong param_1,byte *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  
  if ((*(byte *)(param_1 + 0x2b4) & 1) == 0) {
    UPlayerInput::ConditionalBuildKeyMappings_Internal();
  }
  plVar6 = (longlong *)0x0;
  fVar10 = 0.0;
  uVar11 = 0;
  lVar1 = *(longlong *)(param_2 + 8);
  if (*(int *)(param_1 + 0x218) != *(int *)(param_1 + 0x244)) {
    lVar4 = *(longlong *)(param_1 + 0x250);
    if (*(longlong *)(param_1 + 0x250) == 0) {
      lVar4 = param_1 + 0x248;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 600) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x210) + (longlong)iVar3 * 0x28);
        if (*(longlong *)(*(longlong *)(param_1 + 0x210) + (longlong)iVar3 * 0x28) == lVar1) {
          if (iVar3 != -1) goto LAB_1428a2703;
          break;
        }
        iVar3 = (int)plVar5[4];
      } while (iVar3 != -1);
    }
  }
  plVar5 = plVar6;
LAB_1428a2703:
  plVar8 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar8 = plVar6;
  }
  if (plVar8 != (longlong *)0x0) {
    plVar5 = plVar6;
    if (0 < (int)plVar8[1]) {
      do {
        lVar1 = *plVar8;
        local_68 = *(undefined8 *)((longlong)plVar6 + lVar1 + 0x10);
        local_60 = *(undefined8 *)((longlong)plVar6 + lVar1 + 0x18);
        local_58 = *(longlong *)((longlong)plVar6 + lVar1 + 0x20);
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
        }
        cVar2 = FUN_1428b22c0(param_1,&local_68,0);
        if (cVar2 == '\0') {
          if ((param_3 == '\0') || ((*param_2 & 2) != 0)) {
            local_50 = *(undefined8 *)((longlong)plVar6 + lVar1 + 0x10);
            local_48 = *(undefined8 *)((longlong)plVar6 + lVar1 + 0x18);
            local_40 = *(longlong *)((longlong)plVar6 + lVar1 + 0x20);
            if (local_40 != 0) {
              LOCK();
              *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
              UNLOCK();
            }
            fVar9 = (float)FUN_1428ad940(param_1,&local_50);
            fVar10 = fVar10 + fVar9 * *(float *)((longlong)plVar6 + lVar1 + 8);
          }
          if ((*param_2 & 1) != 0) {
            TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
                      (param_4,(longlong)plVar6 + lVar1 + 0x10);
          }
        }
        uVar7 = (int)plVar5 + 1;
        plVar6 = plVar6 + 5;
        plVar5 = (longlong *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)plVar8[1]);
    }
    if ((*(byte *)(plVar8 + 2) & 1) != 0) {
      uVar11 = 0x80000000;
      fVar10 = -fVar10;
    }
  }
  return CONCAT44(uVar11,fVar10);
}



// FUNCTION 1428a2830 FUN_1428a2830 body=2348 status=ok
// SIG undefined FUN_1428a2830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428a2830(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Dst;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auVar7 [12];
  longlong lVar8;
  void *_Src;
  longlong *plVar9;
  float fVar10;
  char cVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  undefined2 *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_res10 [2];
  longlong local_268;
  int local_260;
  int local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248 [2];
  int local_240;
  uint uStack_23c;
  uint *puStack_238;
  undefined4 local_230;
  int iStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  longlong *local_1f8;
  undefined8 uStack_1f0;
  uint *local_1e8;
  uint uStack_1e0;
  int iStack_1dc;
  undefined8 local_1d8;
  longlong *plStack_1d0;
  longlong *local_1c8;
  undefined2 local_1c0;
  int local_1b8;
  longlong local_1b0;
  undefined2 *local_1a8;
  int local_1a0;
  void *local_198;
  int local_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *plStack_168;
  uint *puStack_160;
  undefined4 uStack_158;
  int iStack_154;
  undefined8 uStack_150;
  longlong *local_148;
  undefined **local_138;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  if (param_2 == 0) {
    return;
  }
  plVar3 = (longlong *)(param_2 + 0x98);
  local_220 = (float)DAT_1464aa738._2_1_ * 0.003921569;
  local_21c = (float)DAT_1464aa738._1_1_ * 0.003921569;
  local_218 = (float)(byte)DAT_1464aa738 * 0.003921569;
  auVar20 = ZEXT416((uint)local_218);
  local_214 = (float)DAT_1464aa738._3_1_ * 0.003921569;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_220);
  local_1b0 = param_1[3];
  local_res10[0] = 0;
  FName::ToString(&local_1b0,&local_1a8);
  puVar17 = &DAT_143f3eda8;
  if (local_1a0 != 0) {
    puVar17 = local_1a8;
  }
  FString::PrintfImpl(local_b8,L"INPUT %s",puVar17);
  FUN_1428a6fb0(plVar3,local_b8,local_res10);
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  if (local_1a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  lVar12 = (**(code **)(*param_1 + 0x148))(param_1);
  uStack_23c = 1;
  local_1f8 = param_1 + 0x4c;
  iVar4 = (int)param_1[0x51];
  puStack_238 = (uint *)(param_1 + 0x4e);
  fVar24 = *(float *)(lVar12 + 0x798);
  local_240 = 0;
  iStack_22c = 0;
  iStack_228 = 0;
  if (iVar4 != 0) {
    puVar19 = (uint *)param_1[0x50];
    if ((uint *)param_1[0x50] == (uint *)0x0) {
      puVar19 = puStack_238;
    }
    uVar5 = *puVar19;
    iStack_228 = 0;
    local_240 = 0;
    while (uVar5 == 0) {
      lVar12 = (longlong)local_240;
      iStack_228 = iStack_228 + 0x20;
      iVar15 = local_240 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_240;
      local_240 = iVar15;
      if (bVar6) goto LAB_1428a2a37;
      uVar5 = puVar19[lVar12 + 1];
    }
    uStack_23c = -uVar5 & uVar5;
    local_1b8 = 0x1f;
    if (uStack_23c != 0) {
      for (; uStack_23c >> local_1b8 == 0; local_1b8 = local_1b8 + -1) {
      }
    }
    if (uStack_23c == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - local_1b8;
    }
    iStack_22c = (iStack_228 - iVar15) + 0x1f;
    if (iVar4 < iStack_22c) {
LAB_1428a2a37:
      iStack_22c = iVar4;
    }
  }
  local_230 = 0xffffffff;
  uStack_1f0 = (longlong *)CONCAT44(uStack_23c,local_240);
  uStack_158 = 0xffffffff;
  iStack_154 = iStack_22c;
  local_1c0 = 0;
  uStack_1e0 = 0xffffffff;
  iStack_1dc = iStack_22c;
  auVar7._4_8_ = auVar20._8_8_;
  auVar7._0_4_ = iStack_22c;
  auVar20._0_8_ = auVar7._0_8_ << 0x20;
  auVar20._8_4_ = iStack_228;
  auVar20._12_4_ = uStack_224;
  local_1d8 = auVar20._8_8_;
  local_1e8 = puStack_238;
  local_1c8 = local_1f8;
  local_170 = local_1f8;
  plStack_168 = uStack_1f0;
  uStack_150 = local_1d8;
  local_148 = local_1f8;
  puStack_160 = puStack_238;
  plStack_1d0 = local_1f8;
  if (iStack_22c < (int)param_1[0x51]) {
    do {
      lVar16 = (longlong)iStack_1dc * 0xf0;
      lVar12 = *local_1f8;
      local_188 = *(undefined8 *)(lVar16 + lVar12);
      local_180 = *(undefined8 *)(lVar16 + 8 + lVar12);
      local_178 = *(longlong **)(lVar16 + 0x10 + lVar12);
      if (local_178 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_178 + 1) = (int)local_178[1] + 1;
        UNLOCK();
      }
      uVar13 = FUN_1417ad2a0(&local_188,&local_170);
      puVar14 = (undefined8 *)FText::ToString(uVar13);
      if (*(int *)(puVar14 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar14;
      }
      FString::PrintfImpl(&local_268,L" %s: %.2f (raw %.2f)",puVar17,
                          (double)*(float *)(lVar16 + 0x24 + lVar12),
                          (double)*(float *)(lVar16 + 0x18 + lVar12));
      plVar9 = plStack_168;
      if (plStack_168 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_168 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_168)(plStack_168);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      if (((*(byte *)(lVar16 + 0x34 + lVar12) & 1) == 0) &&
         (*(float *)(lVar16 + 0x24 + lVar12) == 0.0)) {
        local_78 = 0x3f34b4b53f34b4b5;
        uStack_70 = 0x3f8000003f34b4b5;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_78);
        puVar18 = &local_258;
        local_258 = 0;
      }
      else {
        cVar11 = FKey::IsFloatAxis(&local_188);
        if (cVar11 == '\0') {
          FString::PrintfImpl(&local_198,L" time: %.2f",
                              (double)(fVar24 - *(float *)(lVar16 + 0x30 + lVar12)));
          _Src = local_198;
          iVar4 = local_260;
          iVar15 = 0;
          if (local_190 != 0) {
            iVar15 = local_190 + -1;
          }
          if (iVar15 != 0) {
            lVar12 = (longlong)local_260;
            local_260 = (uint)(local_260 == 0) + iVar15 + local_260;
            if (local_25c < local_260) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,iVar4);
            }
            _Dst = (void *)(local_268 + (lVar12 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar15 * 2);
            *(undefined2 *)((longlong)iVar15 * 2 + (longlong)_Dst) = 0;
          }
          if (local_198 != (void *)0x0) {
            FMemory::Free(local_198);
          }
        }
        local_68 = 0x3f8000003f34b4b5;
        uStack_60 = 0x3f8000003f34b4b5;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_68);
        puVar18 = &local_254;
        local_254 = 0;
      }
      FUN_1428a6fb0(plVar3,&local_268,puVar18);
      if (local_268 != 0) {
        FMemory::Free();
      }
      plVar9 = local_178;
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_178 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      uStack_1e0 = uStack_1e0 & ~uStack_1f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1f0);
    } while (iStack_1dc < (int)local_1e8[6]);
    if (((char)local_1c0 != '\0') && (local_1c0._1_1_ != '\0')) {
      TSet<TTuple<FName,FDiskCachedAssetData>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_1c8,(int)local_1c8[1] - *(int *)((longlong)local_1c8 + 0x34),1);
    }
  }
  lVar12 = param_1[0x22];
  fVar24 = *(float *)((longlong)param_1 + 0x114);
  local_210 = (float)DAT_1464aa730._2_1_ * 0.003921569;
  local_20c = (float)DAT_1464aa730._1_1_ * 0.003921569;
  local_208 = (float)(byte)DAT_1464aa730 * 0.003921569;
  local_204 = (float)DAT_1464aa730._3_1_ * 0.003921569;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_210);
  local_250 = 0;
  FString::PrintfImpl(local_a8,L"MouseSampleRate: %.2f",(double)((float)(int)lVar12 / fVar24));
  FUN_1428a6fb0(plVar3,local_a8,&local_250);
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_24c = 0;
  FString::PrintfImpl(local_98,L"MouseX ZeroTime: %.2f, Smoothed: %.2f",
                      (double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x21));
  FUN_1428a6fb0(plVar3,local_98,&local_24c);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  local_248[0] = 0;
  FString::PrintfImpl(local_88,L"MouseY ZeroTime: %.2f, Smoothed: %.2f",
                      (double)*(float *)((longlong)param_1 + 0x104),
                      (double)*(float *)((longlong)param_1 + 0x10c));
  FUN_1428a6fb0(plVar3,local_88,local_248);
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  if ((((2.0 < *(float *)(param_1 + 0x20)) && (2.0 < *(float *)((longlong)param_1 + 0x104))) &&
      ((*(uint *)(param_1 + 1) >> 4 & 1) == 0)) && ((longlong *)param_1[4] != (longlong *)0x0)) {
    cVar11 = (**(code **)(*(longlong *)param_1[4] + 0xed8))();
    if (cVar11 != '\0') {
      DAT_146b18a98 = (float)*(int *)(param_2 + 0x40) * 0.5;
      DAT_146b18b3c = (float)*(int *)(param_2 + 0x44) * 0.5;
      DAT_146b18a9c = DAT_146b18a98;
      fVar22 = DAT_146b18b3c;
      goto LAB_1428a303c;
    }
  }
  fVar23 = (float)*(int *)(param_2 + 0x40) * 0.5;
  fVar21 = (float)*(int *)(param_2 + 0x44) * 0.5;
  fVar24 = fVar23 - 700.0;
  fVar23 = fVar23 + 700.0;
  fVar22 = fVar24;
  if ((fVar24 <= DAT_146b18a9c) && (fVar22 = DAT_146b18a9c, fVar23 <= DAT_146b18a9c)) {
    fVar22 = fVar23;
  }
  DAT_146b18a9c = fVar22;
  fVar22 = fVar21 - 700.0;
  fVar21 = fVar21 + 700.0;
  fVar10 = fVar22;
  if ((fVar22 <= DAT_146b18b3c) && (fVar10 = DAT_146b18b3c, fVar21 <= DAT_146b18b3c)) {
    fVar10 = fVar21;
  }
  DAT_146b18b3c = fVar10;
  if ((fVar24 <= DAT_146b18a98) && (fVar24 = DAT_146b18a98, fVar23 <= DAT_146b18a98)) {
    fVar24 = fVar23;
  }
  DAT_146b18a98 = fVar24;
  if ((fVar22 <= DAT_146b18b38) && (fVar22 = DAT_146b18b38, fVar21 <= DAT_146b18b38)) {
    fVar22 = fVar21;
  }
LAB_1428a303c:
  DAT_146b18b38 = fVar22;
  local_e8 = 0x3f800000;
  local_c4 = (undefined4)DAT_1468b5d88;
  local_138 = &PTR_FUN_1451e2200;
  local_f8 = 0x3f800000;
  uStack_f0 = 0x3f80000000000000;
  local_110 = _DAT_1464aa720;
  uStack_108 = uRam00000001464aa728;
  local_128 = 0;
  local_c0 = DAT_1468b5d88._4_4_;
  local_120 = 0;
  local_118 = 0;
  local_100 = 0x41000000;
  local_fc = 0x41000000;
  local_e0 = DAT_146ac3d68;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_130 = DAT_146b18a9c;
  local_12c = DAT_146b18b3c;
  FCanvas::DrawItem(*(undefined8 *)(param_2 + 0x260),&local_138);
  local_110 = _DAT_1464aa6c0;
  uStack_108 = _DAT_1464aa6c8;
  local_100 = 0x40a00000;
  local_12c = DAT_146b18b38;
  local_130 = DAT_146b18a98;
  local_fc = 0x40a00000;
  FCanvas::DrawItem(*(undefined8 *)(param_2 + 0x260),&local_138);
  return;
}



// FUNCTION 1428a3160 Draw body=7554 status=ok
// SIG undefined Draw(void)

void FCanvasBorderItem::Draw(longlong param_1,float *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float local_res8;
  float local_resc;
  float *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffda8;
  undefined8 uVar49;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  float fStack_20c;
  float local_208;
  undefined8 uStack_204;
  undefined8 uStack_1fc;
  undefined8 uStack_1f4;
  undefined8 uStack_1ec;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  longlong local_1c8;
  float local_1b8;
  float local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  
  uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffda8 >> 0x20);
  pfVar1 = (float *)(param_1 + 0x98);
  fVar23 = *pfVar1;
  fVar18 = (float)(int)(fVar23 * 0.0027777778) * 360.0;
  if (ABS(fVar23) < ABS(fVar18)) {
    fVar18 = fVar23;
  }
  fVar23 = fVar23 - fVar18;
  if (fVar23 < 0.0) {
    fVar23 = fVar23 + 360.0;
  }
  local_res10 = param_2;
  if (fVar23 == 0.0) {
    fVar23 = *(float *)(param_1 + 0x9c);
    fVar18 = (float)(int)(fVar23 * 0.0027777778) * 360.0;
    if (ABS(fVar23) < ABS(fVar18)) {
      fVar18 = fVar23;
    }
    fVar23 = fVar23 - fVar18;
    if (fVar23 < 0.0) {
      fVar23 = fVar23 + 360.0;
    }
    if (fVar23 == 0.0) {
      fVar23 = *(float *)(param_1 + 0xa0);
      fVar18 = (float)(int)(fVar23 * 0.0027777778) * 360.0;
      if (ABS(fVar23) < ABS(fVar18)) {
        fVar18 = fVar23;
      }
      fVar23 = fVar23 - fVar18;
      if (fVar23 < 0.0) {
        fVar23 = fVar23 + 360.0;
      }
      if (fVar23 == 0.0) goto LAB_1428a37b5;
    }
  }
  fVar43 = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0x38);
  fVar48 = *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x3c);
  FRotationMatrix::FRotationMatrix(&local_208,pfVar1);
  local_f8 = -fVar43;
  fStack_f4 = -fVar48;
  fVar35 = uStack_1fc._4_4_ * 0.0 + local_208 * 1.0 + uStack_1ec._4_4_ * 0.0 + local_1d8 * 0.0;
  fVar37 = (float)uStack_1f4 * 0.0 + (float)uStack_204 * 1.0 + fStack_1e4 * 0.0 + fStack_1d4 * 0.0;
  fVar39 = uStack_1f4._4_4_ * 0.0 + uStack_204._4_4_ * 1.0 + fStack_1e0 * 0.0 + fStack_1d0 * 0.0;
  fVar41 = (float)uStack_1ec * 0.0 + (float)uStack_1fc * 1.0 + fStack_1dc * 0.0 + fStack_1cc * 0.0;
  fVar23 = uStack_1fc._4_4_ * 1.0 + local_208 * 0.0 + uStack_1ec._4_4_ * 0.0 + local_1d8 * 0.0;
  fVar18 = (float)uStack_1f4 * 1.0 + (float)uStack_204 * 0.0 + fStack_1e4 * 0.0 + fStack_1d4 * 0.0;
  fVar29 = uStack_1f4._4_4_ * 1.0 + uStack_204._4_4_ * 0.0 + fStack_1e0 * 0.0 + fStack_1d0 * 0.0;
  fVar30 = (float)uStack_1ec * 1.0 + (float)uStack_1fc * 0.0 + fStack_1dc * 0.0 + fStack_1cc * 0.0;
  fVar31 = uStack_1fc._4_4_ * 0.0 + local_208 * 0.0 + uStack_1ec._4_4_ * 1.0 + local_1d8 * 0.0;
  fVar32 = (float)uStack_1f4 * 0.0 + (float)uStack_204 * 0.0 + fStack_1e4 * 1.0 + fStack_1d4 * 0.0;
  fVar33 = uStack_1f4._4_4_ * 0.0 + uStack_204._4_4_ * 0.0 + fStack_1e0 * 1.0 + fStack_1d0 * 0.0;
  fVar34 = (float)uStack_1ec * 0.0 + (float)uStack_1fc * 0.0 + fStack_1dc * 1.0 + fStack_1cc * 0.0;
  uStack_f0 = 0;
  uStack_ec = 0x3f800000;
  fVar19 = fStack_f4 * uStack_1fc._4_4_ + local_f8 * local_208 + uStack_1ec._4_4_ * 0.0 +
           local_1d8 * 1.0;
  fVar20 = fStack_f4 * (float)uStack_1f4 + local_f8 * (float)uStack_204 + fStack_1e4 * 0.0 +
           fStack_1d4 * 1.0;
  fVar21 = fStack_f4 * uStack_1f4._4_4_ + local_f8 * uStack_204._4_4_ + fStack_1e0 * 0.0 +
           fStack_1d0 * 1.0;
  fVar22 = fStack_f4 * (float)uStack_1ec + local_f8 * (float)uStack_1fc + fStack_1dc * 0.0 +
           fStack_1cc * 1.0;
  local_238 = fVar37 * 0.0 + fVar35 * 1.0 + fVar39 * 0.0 + fVar41 * fVar43;
  fStack_234 = fVar37 * 1.0 + fVar35 * 0.0 + fVar39 * 0.0 + fVar41 * fVar48;
  fStack_230 = fVar37 * 0.0 + fVar35 * 0.0 + fVar39 * 1.0 + fVar41 * 0.0;
  fStack_22c = fVar37 * 0.0 + fVar35 * 0.0 + fVar39 * 0.0 + fVar41 * 1.0;
  fVar44 = fVar18 * 0.0 + fVar23 * 1.0 + fVar29 * 0.0 + fVar30 * fVar43;
  fVar45 = fVar18 * 1.0 + fVar23 * 0.0 + fVar29 * 0.0 + fVar30 * fVar48;
  fVar46 = fVar18 * 0.0 + fVar23 * 0.0 + fVar29 * 1.0 + fVar30 * 0.0;
  fVar47 = fVar18 * 0.0 + fVar23 * 0.0 + fVar29 * 0.0 + fVar30 * 1.0;
  fVar23 = *(float *)(param_1 + 8);
  fVar29 = -fVar23;
  fVar36 = fVar32 * 0.0 + fVar31 * 1.0 + fVar33 * 0.0 + fVar34 * fVar43;
  fVar38 = fVar32 * 1.0 + fVar31 * 0.0 + fVar33 * 0.0 + fVar34 * fVar48;
  fVar40 = fVar32 * 0.0 + fVar31 * 0.0 + fVar33 * 1.0 + fVar34 * 0.0;
  fVar42 = fVar32 * 0.0 + fVar31 * 0.0 + fVar33 * 0.0 + fVar34 * 1.0;
  fVar18 = *(float *)(param_1 + 0xc);
  fVar30 = -fVar18;
  fVar26 = fVar20 * 0.0 + fVar19 * 1.0 + fVar21 * 0.0 + fVar22 * fVar43;
  fVar27 = fVar20 * 1.0 + fVar19 * 0.0 + fVar21 * 0.0 + fVar22 * fVar48;
  fVar28 = fVar20 * 0.0 + fVar19 * 0.0 + fVar21 * 1.0 + fVar22 * 0.0;
  fVar22 = fVar20 * 0.0 + fVar19 * 0.0 + fVar21 * 0.0 + fVar22 * 1.0;
  fVar31 = fVar44 * 0.0 + local_238 * 1.0 + fVar36 * 0.0 + fVar26 * 0.0;
  fVar32 = fVar45 * 0.0 + fStack_234 * 1.0 + fVar38 * 0.0 + fVar27 * 0.0;
  fVar33 = fVar46 * 0.0 + fStack_230 * 1.0 + fVar40 * 0.0 + fVar28 * 0.0;
  fVar34 = fVar47 * 0.0 + fStack_22c * 1.0 + fVar42 * 0.0 + fVar22 * 0.0;
  fVar43 = fVar44 * 0.0 + local_238 * 0.0 + fVar36 * 1.0 + fVar26 * 0.0;
  fVar48 = fVar45 * 0.0 + fStack_234 * 0.0 + fVar38 * 1.0 + fVar27 * 0.0;
  fVar24 = fVar46 * 0.0 + fStack_230 * 0.0 + fVar40 * 1.0 + fVar28 * 0.0;
  fVar25 = fVar47 * 0.0 + fStack_22c * 0.0 + fVar42 * 1.0 + fVar22 * 0.0;
  fVar35 = fVar44 * 1.0 + local_238 * 0.0 + fVar36 * 0.0 + fVar26 * 0.0;
  fVar37 = fVar45 * 1.0 + fStack_234 * 0.0 + fVar38 * 0.0 + fVar27 * 0.0;
  fVar39 = fVar46 * 1.0 + fStack_230 * 0.0 + fVar40 * 0.0 + fVar28 * 0.0;
  fVar41 = fVar47 * 1.0 + fStack_22c * 0.0 + fVar42 * 0.0 + fVar22 * 0.0;
  fVar19 = fVar30 * fVar44 + fVar29 * local_238 + fVar36 * 0.0 + fVar26 * 1.0;
  fVar20 = fVar30 * fVar45 + fVar29 * fStack_234 + fVar38 * 0.0 + fVar27 * 1.0;
  fVar21 = fVar30 * fVar46 + fVar29 * fStack_230 + fVar40 * 0.0 + fVar28 * 1.0;
  fVar22 = fVar30 * fVar47 + fVar29 * fStack_22c + fVar42 * 0.0 + fVar22 * 1.0;
  local_168 = fVar32 * 0.0 + fVar31 * 1.0 + fVar33 * 0.0 + fVar34 * fVar23;
  fStack_164 = fVar32 * 1.0 + fVar31 * 0.0 + fVar33 * 0.0 + fVar34 * fVar18;
  fStack_160 = fVar32 * 0.0 + fVar31 * 0.0 + fVar33 * 1.0 + fVar34 * 0.0;
  fStack_15c = fVar32 * 0.0 + fVar31 * 0.0 + fVar33 * 0.0 + fVar34 * 1.0;
  local_158 = fVar37 * 0.0 + fVar35 * 1.0 + fVar39 * 0.0 + fVar41 * fVar23;
  fStack_154 = fVar37 * 1.0 + fVar35 * 0.0 + fVar39 * 0.0 + fVar41 * fVar18;
  fStack_150 = fVar37 * 0.0 + fVar35 * 0.0 + fVar39 * 1.0 + fVar41 * 0.0;
  fStack_14c = fVar37 * 0.0 + fVar35 * 0.0 + fVar39 * 0.0 + fVar41 * 1.0;
  local_148 = fVar48 * 0.0 + fVar43 * 1.0 + fVar24 * 0.0 + fVar25 * fVar23;
  fStack_144 = fVar48 * 1.0 + fVar43 * 0.0 + fVar24 * 0.0 + fVar25 * fVar18;
  fStack_140 = fVar48 * 0.0 + fVar43 * 0.0 + fVar24 * 1.0 + fVar25 * 0.0;
  fStack_13c = fVar48 * 0.0 + fVar43 * 0.0 + fVar24 * 0.0 + fVar25 * 1.0;
  local_138 = fVar20 * 0.0 + fVar19 * 1.0 + fVar21 * 0.0 + fVar22 * fVar23;
  fStack_134 = fVar20 * 1.0 + fVar19 * 0.0 + fVar21 * 0.0 + fVar22 * fVar18;
  fStack_130 = fVar20 * 0.0 + fVar19 * 0.0 + fVar21 * 1.0 + fVar22 * 0.0;
  fStack_12c = fVar20 * 0.0 + fVar19 * 0.0 + fVar21 * 0.0 + fVar22 * 1.0;
  FCanvas::PushRelativeTransform(param_2,&local_168);
LAB_1428a37b5:
  local_1c8 = *(longlong *)(param_1 + 0x68);
  if (local_1c8 != 0) {
    local_218 = *(undefined4 *)(param_1 + 0x28);
    uStack_214 = *(undefined4 *)(param_1 + 0x2c);
    uStack_210 = *(undefined4 *)(param_1 + 0x30);
    plVar14 = DAT_146ac3d68;
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x70);
    }
    fStack_20c = *(float *)(param_1 + 0x34) * *param_2;
    plVar16 = DAT_146ac3d68;
    if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
      plVar16 = *(longlong **)(param_1 + 0x78);
    }
    plVar17 = DAT_146ac3d68;
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      plVar17 = *(longlong **)(param_1 + 0x80);
    }
    uStack_204 = 0;
    uStack_1fc = 0;
    local_190 = DAT_146ac3d68;
    if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
      local_190 = *(longlong **)(param_1 + 0x88);
    }
    plVar15 = DAT_146ac3d68;
    if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
      plVar15 = *(longlong **)(param_1 + 0x90);
    }
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uVar49 = CONCAT44(uVar9,*(undefined4 *)(param_1 + 0x14));
    uStack_1f4 = 0;
    uStack_1ec = 0;
    local_228 = plVar14;
    local_188 = plVar15;
    local_180 = plVar16;
    local_178 = plVar17;
    local_220 = FUN_1428abd30(param_2,1,*(undefined8 *)(param_1 + 0x20),local_1c8,uVar49,&local_208,
                              1);
    uVar9 = (undefined4)((ulonglong)uVar49 >> 0x20);
    if (*(longlong *)(param_2 + 0x1a) == 0) {
      uVar13 = 0xffffffff;
    }
    else {
      uVar13 = *(undefined4 *)(*(longlong *)(param_2 + 0x1a) + 0x18);
    }
    fVar23 = *(float *)(param_1 + 0x50);
    fVar32 = *(float *)(param_1 + 8) * fVar23;
    fVar29 = (*(float *)(param_1 + 8) + *(float *)(param_1 + 0x38)) * fVar23;
    fVar31 = (*(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x3c)) * fVar23;
    local_res18 = CONCAT44(local_res18._4_4_,fVar32);
    local_res20 = CONCAT44(local_res20._4_4_,fVar31);
    fVar23 = *(float *)(param_1 + 0xc) * fVar23;
    local_res8 = fVar29;
    uVar3 = (**(code **)(*plVar16 + 0x40))(plVar16);
    fVar18 = *(float *)(param_1 + 0x44);
    fVar19 = *(float *)(param_1 + 0x40);
    uVar4 = (**(code **)(*plVar16 + 0x48))(plVar16);
    plVar16 = local_190;
    local_19c = (float)uVar4 * fVar18;
    fVar18 = *(float *)(param_1 + 0x40);
    uVar4 = (**(code **)(*local_190 + 0x40))(local_190);
    uVar5 = (**(code **)(*plVar16 + 0x48))(plVar16);
    fVar20 = *(float *)(param_1 + 0x44);
    uVar6 = (**(code **)(*plVar17 + 0x40))(plVar17);
    fVar21 = *(float *)(param_1 + 0x44);
    fVar22 = *(float *)(param_1 + 0x40);
    uVar7 = (**(code **)(*plVar17 + 0x48))(plVar17);
    local_194 = (float)uVar7 * fVar21;
    fVar21 = *(float *)(param_1 + 0x40);
    uVar7 = (**(code **)(*plVar15 + 0x40))(plVar15);
    local_1a0 = (float)uVar7 * fVar21;
    uVar7 = (**(code **)(*plVar15 + 0x48))(plVar15);
    fVar21 = *(float *)(param_1 + 0x44);
    uVar8 = (**(code **)(*plVar14 + 0x40))(plVar14);
    fVar30 = (fVar29 - fVar32) / ((float)uVar8 * *(float *)(param_1 + 0x48));
    uVar8 = (**(code **)(*plVar14 + 0x48))(plVar14);
    uVar49 = local_220;
    fVar29 = (fVar31 - fVar23) / ((float)uVar8 * *(float *)(param_1 + 0x4c));
    FUN_1422f8300(local_220,0x24);
    local_1a8 = 0;
    local_1b0 = 0;
    local_1ac = *(undefined4 *)(param_1 + 0x50);
    fVar32 = (float)uVar3 * fVar19 + fVar32;
    fVar33 = (float)uVar5 * fVar20 + fVar23;
    local_1b8 = fVar32;
    local_1b4 = fVar33;
    local_198 = fVar32;
    uVar9 = FUN_1422e40b0(uVar49,&local_1b8,&local_1a8,&local_218,CONCAT44(uVar9,uVar13));
    fStack_22c = *(float *)(param_1 + 0x50);
    fVar19 = local_res8 - (float)uVar6 * fVar22;
    local_1b4 = 0.0;
    fStack_230 = 0.0;
    local_1a8 = CONCAT44(local_1a8._4_4_,fVar19);
    local_238 = fVar19;
    fStack_234 = fVar33;
    local_1b8 = fVar30;
    uVar10 = FUN_1422e40b0(uVar49,&local_238,&local_1b8,&local_218,uVar13);
    fStack_22c = *(float *)(param_1 + 0x50);
    fVar31 = fVar31 - (float)uVar7 * fVar21;
    local_1b8 = 0.0;
    fStack_230 = 0.0;
    local_238 = fVar32;
    fStack_234 = fVar31;
    local_1b4 = fVar29;
    uVar11 = FUN_1422e40b0(uVar49,&local_238,&local_1b8,&local_218,uVar13);
    fStack_22c = *(float *)(param_1 + 0x50);
    fStack_230 = 0.0;
    local_238 = fVar19;
    fStack_234 = fVar31;
    local_1b8 = fVar30;
    local_1b4 = fVar29;
    uVar12 = FUN_1422e40b0(uVar49,&local_238,&local_1b8,&local_218,uVar13);
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar10,uVar12,*(undefined8 *)(param_1 + 0x20),local_228,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    uVar2 = local_220;
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uVar49 = *(undefined8 *)(param_1 + 0x20);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar12,uVar11,uVar49,local_228,*(undefined4 *)(param_1 + 0x14),
                  &local_208);
    uVar9 = (undefined4)((ulonglong)uVar49 >> 0x20);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x40))();
    fVar19 = *(float *)(param_1 + 0x5c);
    fVar20 = *(float *)(param_1 + 0x54);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x48))();
    fVar21 = (float)local_res18;
    fVar22 = (fVar19 - fVar20) * (float)uVar3 * *(float *)(param_1 + 0xac) *
             *(float *)(param_1 + 0x40);
    fStack_230 = 0.0;
    local_238 = (float)local_res18;
    local_228 = *(longlong **)(param_1 + 0x54);
    fStack_22c = *(float *)(param_1 + 0x50);
    fVar29 = (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x58)) * (float)uVar5 *
             *(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0x44);
    fStack_234 = fVar23;
    uVar9 = FUN_1422e40b0(uVar2,&local_238,&local_228,&local_218,CONCAT44(uVar9,uVar13));
    local_228 = (longlong *)
                CONCAT44(*(undefined4 *)(param_1 + 0x58),
                         *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0x5c));
    fStack_22c = *(float *)(param_1 + 0x50);
    fVar30 = fVar22 + fVar21;
    fStack_230 = 0.0;
    local_238 = fVar30;
    fStack_234 = fVar23;
    uVar10 = FUN_1422e40b0(uVar2,&local_238,&local_228,&local_218,uVar13);
    fStack_22c = *(float *)(param_1 + 0x50);
    fVar32 = fVar29 + fVar23;
    local_228 = (longlong *)
                CONCAT44(*(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0x54));
    local_238 = fVar21;
    fStack_230 = 0.0;
    fStack_234 = fVar32;
    uVar11 = FUN_1422e40b0(uVar2,&local_238,&local_228,&local_218,uVar13);
    fStack_230 = 0.0;
    fStack_22c = *(float *)(param_1 + 0x50);
    local_228 = (longlong *)
                CONCAT44(*(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0x60),
                         *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0x5c));
    local_238 = fVar30;
    fStack_234 = fVar32;
    uVar12 = FUN_1422e40b0(uVar2,&local_238,&local_228,&local_218,uVar13);
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar10,uVar12,*(undefined8 *)(param_1 + 0x20),local_1c8,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    uVar49 = local_220;
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar12,uVar11,*(undefined8 *)(param_1 + 0x20),local_1c8,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    fVar22 = local_res8 - fVar22;
    fStack_230 = 0.0;
    fStack_22c = *(float *)(param_1 + 0x50);
    local_228 = (longlong *)
                CONCAT44(*(undefined4 *)(param_1 + 0x58),
                         *(float *)(param_1 + 0x5c) -
                         (*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x54)) *
                         *(float *)(param_1 + 0xac));
    local_238 = fVar22;
    fStack_234 = fVar23;
    uVar9 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    fVar19 = local_res8;
    fStack_22c = *(float *)(param_1 + 0x50);
    local_228 = (longlong *)
                CONCAT44(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    local_238 = local_res8;
    fStack_230 = 0.0;
    fStack_234 = fVar23;
    uVar10 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    fStack_230 = 0.0;
    fStack_22c = *(float *)(param_1 + 0x50);
    local_228 = (longlong *)
                CONCAT44(*(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0x60),
                         *(float *)(param_1 + 0x5c) -
                         (*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x54)) *
                         *(float *)(param_1 + 0xac));
    local_238 = fVar22;
    fStack_234 = fVar32;
    uVar11 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    fStack_230 = 0.0;
    fStack_22c = *(float *)(param_1 + 0x50);
    local_228 = (longlong *)
                CONCAT44(*(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0x5c));
    local_238 = fVar19;
    fStack_234 = fVar32;
    uVar12 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar10,uVar12,*(undefined8 *)(param_1 + 0x20),local_1c8,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    uVar49 = local_220;
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar12,uVar11,*(undefined8 *)(param_1 + 0x20),local_1c8,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    fVar20 = (float)local_res20;
    local_238 = fVar21;
    fStack_22c = *(float *)(param_1 + 0x50);
    fVar29 = (float)local_res20 - fVar29;
    fStack_230 = 0.0;
    local_228 = (longlong *)
                CONCAT44(*(float *)(param_1 + 0x60) -
                         (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x58)) *
                         *(float *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x54));
    fStack_234 = fVar29;
    uVar9 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    fStack_230 = 0.0;
    fStack_22c = *(float *)(param_1 + 0x50);
    local_228 = (longlong *)
                CONCAT44(*(float *)(param_1 + 0x60) -
                         (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x58)) *
                         *(float *)(param_1 + 0xb0),
                         *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0x5c));
    local_238 = fVar30;
    fStack_234 = fVar29;
    uVar10 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    local_238 = (float)local_res18;
    fStack_22c = *(float *)(param_1 + 0x50);
    local_228 = (longlong *)
                CONCAT44(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x54));
    fStack_234 = fVar20;
    fStack_230 = 0.0;
    uVar11 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    fStack_234 = fVar20;
    local_228 = (longlong *)
                CONCAT44(*(undefined4 *)(param_1 + 0x60),
                         *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0x5c));
    fStack_22c = *(float *)(param_1 + 0x50);
    fStack_230 = 0.0;
    local_238 = fVar30;
    uVar12 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar10,uVar12,*(undefined8 *)(param_1 + 0x20),local_1c8,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    uVar49 = local_220;
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar12,uVar11,*(undefined8 *)(param_1 + 0x20),local_1c8,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    fStack_230 = 0.0;
    fStack_22c = *(float *)(param_1 + 0x50);
    local_228 = (longlong *)
                CONCAT44(*(float *)(param_1 + 0x60) -
                         (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x58)) *
                         *(float *)(param_1 + 0xb0),
                         *(float *)(param_1 + 0x5c) -
                         (*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x54)) *
                         *(float *)(param_1 + 0xac));
    local_238 = fVar22;
    fStack_234 = fVar29;
    uVar9 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    fVar19 = local_res8;
    fStack_22c = *(float *)(param_1 + 0x50);
    local_238 = local_res8;
    fStack_230 = 0.0;
    local_228 = (longlong *)
                CONCAT44(*(float *)(param_1 + 0x60) -
                         (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x58)) *
                         *(float *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x5c));
    fStack_234 = fVar29;
    uVar10 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    fStack_234 = fVar20;
    fStack_230 = 0.0;
    fStack_22c = *(float *)(param_1 + 0x50);
    local_228 = (longlong *)
                CONCAT44(*(undefined4 *)(param_1 + 0x60),
                         *(float *)(param_1 + 0x5c) -
                         (*(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x54)) *
                         *(float *)(param_1 + 0xac));
    local_238 = fVar22;
    uVar11 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    local_228 = *(longlong **)(param_1 + 0x5c);
    fStack_22c = *(float *)(param_1 + 0x50);
    local_238 = fVar19;
    fStack_234 = fVar20;
    fStack_230 = 0.0;
    uVar12 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar10,uVar12,*(undefined8 *)(param_1 + 0x20),local_1c8,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    uVar49 = local_220;
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar12,uVar11,*(undefined8 *)(param_1 + 0x20),local_1c8,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    fStack_22c = *(float *)(param_1 + 0x50);
    local_228 = (longlong *)0x0;
    fStack_230 = 0.0;
    fVar18 = (fVar22 - fVar30) / ((float)uVar4 * fVar18);
    local_238 = fVar30;
    fStack_234 = fVar23;
    uVar9 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    fStack_230 = 0.0;
    fStack_22c = *(float *)(param_1 + 0x50);
    local_228 = (longlong *)(ulonglong)(uint)fVar18;
    local_238 = fVar22;
    fStack_234 = fVar23;
    uVar10 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    fStack_22c = *(float *)(param_1 + 0x50);
    local_228 = (longlong *)0x3f80000000000000;
    fStack_230 = 0.0;
    local_238 = fVar30;
    fStack_234 = fVar33;
    uVar11 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    local_228 = (longlong *)CONCAT44(0x3f800000,fVar18);
    fStack_22c = *(float *)(param_1 + 0x50);
    fStack_230 = 0.0;
    local_238 = fVar22;
    fStack_234 = fVar33;
    uVar12 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar10,uVar12,*(undefined8 *)(param_1 + 0x20),local_190,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    uVar49 = local_220;
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar12,uVar11,*(undefined8 *)(param_1 + 0x20),local_190,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    fStack_22c = *(float *)(param_1 + 0x50);
    fVar23 = (fVar22 - fVar30) / local_1a0;
    local_228 = (longlong *)0x0;
    fStack_230 = 0.0;
    local_238 = fVar30;
    fStack_234 = fVar31;
    uVar10 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    fStack_22c = *(float *)(param_1 + 0x50);
    local_228 = (longlong *)(ulonglong)(uint)fVar23;
    fStack_230 = 0.0;
    local_238 = fVar22;
    fStack_234 = fVar31;
    uVar11 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    uVar9 = (float)local_res20;
    fStack_234 = (float)local_res20;
    local_228 = (longlong *)0x3f80000000000000;
    fStack_230 = 0.0;
    fStack_22c = *(float *)(param_1 + 0x50);
    local_238 = fVar30;
    uVar12 = FUN_1422e40b0(uVar49,&local_238,&local_228,&local_218,uVar13);
    fStack_22c = *(float *)(param_1 + 0x50);
    fStack_234 = (float)uVar9;
    local_res20 = CONCAT44(0x3f800000,fVar23);
    fStack_230 = 0.0;
    local_238 = fVar22;
    uVar9 = FUN_1422e40b0(uVar49,&local_238,&local_res20,&local_218,uVar13);
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar10,uVar11,uVar9,*(undefined8 *)(param_1 + 0x20),local_188,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    uVar49 = local_220;
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar10,uVar9,uVar12,*(undefined8 *)(param_1 + 0x20),local_188,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    fStack_22c = *(float *)(param_1 + 0x50);
    fVar23 = (float)local_res18;
    local_238 = (float)local_res18;
    local_res20 = 0;
    fStack_230 = 0.0;
    fVar19 = (fVar29 - fVar32) / local_19c;
    fStack_234 = fVar32;
    uVar9 = FUN_1422e40b0(uVar49,&local_238,&local_res20,&local_218,uVar13);
    fVar18 = local_198;
    local_res18 = 0x3f800000;
    local_238 = local_198;
    fStack_22c = *(float *)(param_1 + 0x50);
    fStack_230 = 0.0;
    fStack_234 = fVar32;
    uVar10 = FUN_1422e40b0(uVar49,&local_238,&local_res18,&local_218,uVar13);
    fStack_22c = *(float *)(param_1 + 0x50);
    local_238 = fVar23;
    local_res18 = (ulonglong)(uint)fVar19 << 0x20;
    fStack_230 = 0.0;
    fStack_234 = fVar29;
    uVar11 = FUN_1422e40b0(uVar49,&local_238,&local_res18,&local_218,uVar13);
    fStack_22c = *(float *)(param_1 + 0x50);
    local_238 = fVar18;
    local_res18 = CONCAT44(fVar19,0x3f800000);
    fStack_230 = 0.0;
    fStack_234 = fVar29;
    uVar12 = FUN_1422e40b0(uVar49,&local_238,&local_res18,&local_218,uVar13);
    uVar49 = local_220;
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar10,uVar12,*(undefined8 *)(param_1 + 0x20),local_180,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(uVar49,uVar9,uVar12,uVar11,*(undefined8 *)(param_1 + 0x20),local_180,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    fVar18 = (float)local_1a8;
    fVar19 = (fVar29 - fVar32) / local_194;
    local_res18 = 0;
    local_238 = (float)local_1a8;
    fStack_22c = *(float *)(param_1 + 0x50);
    fStack_230 = 0.0;
    fStack_234 = fVar32;
    uVar9 = FUN_1422e40b0(uVar49,&local_238,&local_res18,&local_218,uVar13);
    fVar23 = local_res8;
    fStack_22c = *(float *)(param_1 + 0x50);
    local_238 = local_res8;
    local_res18 = 0x3f800000;
    fStack_230 = 0.0;
    fStack_234 = fVar32;
    uVar10 = FUN_1422e40b0(uVar49,&local_238,&local_res18,&local_218,uVar13);
    fStack_22c = *(float *)(param_1 + 0x50);
    local_238 = fVar18;
    local_res8 = 0.0;
    fStack_230 = 0.0;
    local_resc = fVar19;
    fStack_234 = fVar29;
    uVar11 = FUN_1422e40b0(uVar49,&local_238,&local_res8,&local_218,uVar13);
    fStack_22c = *(float *)(param_1 + 0x50);
    local_238 = fVar23;
    local_res8 = 1.0;
    fStack_230 = 0.0;
    local_resc = fVar19;
    fStack_234 = fVar29;
    uVar13 = FUN_1422e40b0(local_220,&local_238,&local_res8,&local_218,uVar13);
    plVar14 = local_178;
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar10,uVar13,*(undefined8 *)(param_1 + 0x20),local_178,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    local_208 = (float)((uint)local_208 & 0xfffffffe);
    uStack_204 = 0;
    uStack_1fc = 0;
    uStack_1f4 = 0;
    uStack_1ec = 0;
    FUN_1422e3d20(local_220,uVar9,uVar13,uVar11,*(undefined8 *)(param_1 + 0x20),plVar14,
                  *(undefined4 *)(param_1 + 0x14),&local_208);
    param_2 = local_res10;
  }
  fVar23 = *pfVar1;
  fVar18 = (float)(int)(fVar23 * 0.0027777778) * 360.0;
  if (ABS(fVar23) < ABS(fVar18)) {
    fVar18 = fVar23;
  }
  fVar23 = fVar23 - fVar18;
  if (fVar23 < 0.0) {
    fVar23 = fVar23 + 360.0;
  }
  if (fVar23 == 0.0) {
    fVar23 = *(float *)(param_1 + 0x9c);
    fVar18 = (float)(int)(fVar23 * 0.0027777778) * 360.0;
    if (ABS(fVar23) < ABS(fVar18)) {
      fVar18 = fVar23;
    }
    fVar23 = fVar23 - fVar18;
    if (fVar23 < 0.0) {
      fVar23 = fVar23 + 360.0;
    }
    if (fVar23 == 0.0) {
      fVar23 = *(float *)(param_1 + 0xa0);
      fVar18 = (float)(int)(fVar23 * 0.0027777778) * 360.0;
      if (ABS(fVar23) < ABS(fVar18)) {
        fVar18 = fVar23;
      }
      fVar23 = fVar23 - fVar18;
      if (fVar23 < 0.0) {
        fVar23 = fVar23 + 360.0;
      }
      if (fVar23 == 0.0) {
        return;
      }
    }
  }
  param_2[0xc] = (float)((int)param_2[0xc] + -1);
  TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_2 + 10);
  return;
}



// FUNCTION 1428a4ef0 FUN_1428a4ef0 body=300 status=ok
// SIG undefined FUN_1428a4ef0(void)

void FUN_1428a4ef0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  uint local_58 [16];
  
  FUN_1428bc980();
  local_58[0] = local_58[0] & 0xfffffffe;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  uVar1 = FUN_1428abd30(param_2,0,0,0,0x2e,local_58,1);
  if (*(longlong *)(param_2 + 0x68) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18);
  }
  iVar2 = *(int *)(param_1 + 0x80);
  if (0 < iVar2) {
    iVar6 = 0;
    do {
      iVar3 = iVar6 + 1;
      lVar5 = *(longlong *)(param_1 + 0x78);
      if (*(longlong *)(param_1 + 0x78) == 0) {
        lVar5 = param_1 + 0x48;
      }
      FUN_1422e2f30(uVar1,lVar5 + (longlong)iVar6 * 0xc,lVar5 + (longlong)(iVar3 % iVar2) * 0xc,
                    param_1 + 0x28,uVar4,*(undefined4 *)(param_1 + 0x40),0,0);
      iVar2 = *(int *)(param_1 + 0x80);
      iVar6 = iVar3;
    } while (iVar3 < iVar2);
  }
  return;
}



// FUNCTION 1428a5020 Draw body=158 status=ok
// SIG undefined Draw(void)

void FCanvasLineItem::Draw(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint local_38 [12];
  
  local_38[0] = local_38[0] & 0xfffffffe;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  uVar1 = FUN_1428abd30(param_2,0,0,0,0x2e,local_38,1);
  if (*(longlong *)(param_2 + 0x68) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18);
  }
  FUN_1422e2f30(uVar1,param_1 + 0x38,param_1 + 0x44,param_1 + 0x28,uVar2,
                *(undefined4 *)(param_1 + 0x50),0,0);
  return;
}



// FUNCTION 1428a50e0 FUN_1428a50e0 body=266 status=ok
// SIG undefined FUN_1428a50e0(void)

void FUN_1428a50e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_48 [16];
  
  local_48[0] = local_48[0] & 0xfffffffe;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[8] = 0;
  uVar1 = FUN_1428abd30(param_2,0,0,0,0x2e,local_48,1);
  if (*(longlong *)(param_2 + 0x68) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18);
  }
  iVar2 = *(int *)(param_1 + 0x48);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = iVar5 + 1;
      FUN_1422e2f30(uVar1,*(longlong *)(param_1 + 0x40) + (longlong)iVar5 * 0xc,
                    *(longlong *)(param_1 + 0x40) + (longlong)(iVar3 % iVar2) * 0xc,param_1 + 0x28,
                    uVar4,*(undefined4 *)(param_1 + 0x38),0,0);
      iVar2 = *(int *)(param_1 + 0x48);
      iVar5 = iVar3;
    } while (iVar3 < iVar2);
  }
  return;
}



// FUNCTION 1428a51f0 FUN_1428a51f0 body=933 status=ok
// SIG undefined FUN_1428a51f0(void)

void FUN_1428a51f0(longlong *param_1,float *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  longlong local_48;
  undefined4 uStack_40;
  float fStack_3c;
  
  if ((param_2 != (float *)0x0) && (cVar4 = (**(code **)(*param_1 + 0x28))(), cVar4 != '\0')) {
    uVar7 = *(uint *)(param_1 + 8) >> 1;
    if (((uVar7 & 1) != 0) &&
       (*(float *)(param_1 + 0xf) * *(float *)(param_1 + 0xf) +
        *(float *)((longlong)param_1 + 0x7c) * *(float *)((longlong)param_1 + 0x7c) == 0.0)) {
      *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
      *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
      uVar3 = DAT_1464aa6ec;
      uVar2 = DAT_1464aa6e8;
      uVar1 = DAT_1464aa6e4;
      uVar5 = DAT_1464aa6e0;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
      *(undefined4 *)(param_1 + 0xd) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x6c) = uVar1;
      *(undefined4 *)(param_1 + 0xe) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
    }
    uVar5 = (**(code **)(*param_1 + 0x30))(param_1,(byte)uVar7 & 1);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
    if (*(char *)((longlong)param_2 + 0x95) != '\0') {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0xc;
    }
    if (*(char *)(param_2 + 0x25) == '\0') {
      fVar8 = param_2[0x4e];
    }
    else {
      fVar8 = 1.0;
    }
    local_res10 = fVar8 * *(float *)(param_1 + 1);
    local_res14 = fVar8 * *(float *)((longlong)param_1 + 0xc);
    if ((((char)param_1[0x11] != '\0') || (*(char *)((longlong)param_1 + 0x89) != '\0')) ||
       (*(char *)((longlong)param_1 + 0x9c) == '\0')) {
      (**(code **)(*param_1 + 0x38))(param_1,&local_res18,fVar8);
      if ((char)param_1[0x11] == '\0') {
        cVar4 = *(char *)((longlong)param_1 + 0x89);
      }
      else {
        cVar4 = *(char *)((longlong)param_1 + 0x89);
        local_res10 = local_res10 + (float)(int)(local_res18 * -0.5);
      }
      if (cVar4 != '\0') {
        local_res14 = local_res14 + (float)(int)(local_res1c * -0.5);
      }
      if ((*(char *)((longlong)param_1 + 0x9c) == '\0') &&
         (cVar4 = FUN_142881000(DAT_146b17150,0), cVar4 != '\0')) {
        lVar6 = (**(code **)(**(longlong **)(DAT_146b17150 + 0x488) + 0x2a8))
                          (*(longlong **)(DAT_146b17150 + 0x488),0,0);
        param_1[0x21] = lVar6;
        *(undefined1 *)(param_1 + 0x18) = 1;
        *(float *)((longlong)param_1 + 0xb4) = local_res14 - 2.0;
        *(float *)(param_1 + 0x16) = local_res10 - 2.0;
        *(float *)(param_1 + 0x1c) = local_res18 + 2.0 + 2.0;
        *(float *)((longlong)param_1 + 0xe4) = local_res1c + 2.0 + 2.0;
        (**(code **)(param_1[0x15] + 0x18))(param_1 + 0x15,param_2);
      }
    }
    param_1[0x25] = 0;
    if ((uVar7 & 1) != 0) {
      local_48 = param_1[0xd];
      _uStack_40 = CONCAT44(*(float *)((longlong)param_1 + 0x34) * *param_2,(int)param_1[0xe]);
      local_res1c = fVar8 * *(float *)((longlong)param_1 + 0x7c) + local_res14;
      local_res18 = fVar8 * *(float *)(param_1 + 0xf) + local_res10;
      (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_res18,&local_48);
    }
    if (*(char *)((longlong)param_1 + 0x8a) != '\0') {
      local_48 = *(longlong *)((longlong)param_1 + 0x8c);
      local_res1c = local_res14 - 1.0;
      _uStack_40 = CONCAT44(*(float *)(param_1 + 0x13) * *param_2,
                            *(undefined4 *)((longlong)param_1 + 0x94));
      local_res18 = local_res10 - 1.0;
      (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_res18,&local_48);
      local_res18 = local_res10 - 1.0;
      local_res1c = local_res14 + 1.0;
      (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_res18,&local_48);
      local_res18 = local_res10 + 1.0;
      local_res1c = local_res14 + 1.0;
      (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_res18,&local_48);
      local_res18 = local_res10 + 1.0;
      local_res1c = local_res14 - 1.0;
      (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_res18,&local_48);
    }
    local_48 = param_1[5];
    _uStack_40 = CONCAT44(*(float *)((longlong)param_1 + 0x34) * *param_2,(int)param_1[6]);
    (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_res10,&local_48);
  }
  return;
}



// FUNCTION 1428a55a0 Draw body=2783 status=ok
// SIG undefined Draw(void)

void FCanvasTileItem::Draw(longlong param_1,float *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 local_res8;
  undefined4 local_resc;
  float *local_res10;
  longlong local_res18;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  float fStack_19c;
  float local_198;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  fVar6 = *(float *)(param_1 + 0x68);
  fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
  if (ABS(fVar6) < ABS(fVar7)) {
    fVar7 = fVar6;
  }
  fVar6 = fVar6 - fVar7;
  if (fVar6 < 0.0) {
    fVar6 = fVar6 + 360.0;
  }
  local_res10 = param_2;
  if (fVar6 == 0.0) {
    fVar6 = *(float *)(param_1 + 0x6c);
    fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
    if (ABS(fVar6) < ABS(fVar7)) {
      fVar7 = fVar6;
    }
    fVar6 = fVar6 - fVar7;
    if (fVar6 < 0.0) {
      fVar6 = fVar6 + 360.0;
    }
    if (fVar6 == 0.0) {
      fVar6 = *(float *)(param_1 + 0x70);
      fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
      if (ABS(fVar6) < ABS(fVar7)) {
        fVar7 = fVar6;
      }
      fVar6 = fVar6 - fVar7;
      if (fVar6 < 0.0) {
        fVar6 = fVar6 + 360.0;
      }
      if (fVar6 == 0.0) goto LAB_1428a5c31;
    }
  }
  fVar28 = *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x38);
  fVar33 = *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x3c);
  FRotationMatrix::FRotationMatrix(&local_198,(float *)(param_1 + 0x68));
  local_e8 = -fVar28;
  fStack_e4 = -fVar33;
  fVar20 = uStack_18c._4_4_ * 0.0 + local_198 * 1.0 + uStack_17c._4_4_ * 0.0 + local_168 * 0.0;
  fVar22 = (float)local_184 * 0.0 + (float)uStack_194 * 1.0 + fStack_174 * 0.0 + fStack_164 * 0.0;
  fVar24 = local_184._4_4_ * 0.0 + uStack_194._4_4_ * 1.0 + fStack_170 * 0.0 + fStack_160 * 0.0;
  fVar26 = (float)uStack_17c * 0.0 + (float)uStack_18c * 1.0 + fStack_16c * 0.0 + fStack_15c * 0.0;
  fVar6 = uStack_18c._4_4_ * 1.0 + local_198 * 0.0 + uStack_17c._4_4_ * 0.0 + local_168 * 0.0;
  fVar7 = (float)local_184 * 1.0 + (float)uStack_194 * 0.0 + fStack_174 * 0.0 + fStack_164 * 0.0;
  fVar14 = local_184._4_4_ * 1.0 + uStack_194._4_4_ * 0.0 + fStack_170 * 0.0 + fStack_160 * 0.0;
  fVar15 = (float)uStack_17c * 1.0 + (float)uStack_18c * 0.0 + fStack_16c * 0.0 + fStack_15c * 0.0;
  fVar16 = uStack_18c._4_4_ * 0.0 + local_198 * 0.0 + uStack_17c._4_4_ * 1.0 + local_168 * 0.0;
  fVar17 = (float)local_184 * 0.0 + (float)uStack_194 * 0.0 + fStack_174 * 1.0 + fStack_164 * 0.0;
  fVar18 = local_184._4_4_ * 0.0 + uStack_194._4_4_ * 0.0 + fStack_170 * 1.0 + fStack_160 * 0.0;
  fVar19 = (float)uStack_17c * 0.0 + (float)uStack_18c * 0.0 + fStack_16c * 1.0 + fStack_15c * 0.0;
  uStack_e0 = 0;
  uStack_dc = 0x3f800000;
  fVar10 = fStack_e4 * uStack_18c._4_4_ + local_e8 * local_198 + uStack_17c._4_4_ * 0.0 +
           local_168 * 1.0;
  fVar11 = fStack_e4 * (float)local_184 + local_e8 * (float)uStack_194 + fStack_174 * 0.0 +
           fStack_164 * 1.0;
  fVar8 = fStack_e4 * local_184._4_4_ + local_e8 * uStack_194._4_4_ + fStack_170 * 0.0 +
          fStack_160 * 1.0;
  fVar9 = fStack_e4 * (float)uStack_17c + local_e8 * (float)uStack_18c + fStack_16c * 0.0 +
          fStack_15c * 1.0;
  local_1b8 = fVar22 * 0.0 + fVar20 * 1.0 + fVar24 * 0.0 + fVar26 * fVar28;
  fStack_1b4 = fVar22 * 1.0 + fVar20 * 0.0 + fVar24 * 0.0 + fVar26 * fVar33;
  fStack_1b0 = fVar22 * 0.0 + fVar20 * 0.0 + fVar24 * 1.0 + fVar26 * 0.0;
  fStack_1ac = fVar22 * 0.0 + fVar20 * 0.0 + fVar24 * 0.0 + fVar26 * 1.0;
  fVar29 = fVar7 * 0.0 + fVar6 * 1.0 + fVar14 * 0.0 + fVar15 * fVar28;
  fVar30 = fVar7 * 1.0 + fVar6 * 0.0 + fVar14 * 0.0 + fVar15 * fVar33;
  fVar31 = fVar7 * 0.0 + fVar6 * 0.0 + fVar14 * 1.0 + fVar15 * 0.0;
  fVar32 = fVar7 * 0.0 + fVar6 * 0.0 + fVar14 * 0.0 + fVar15 * 1.0;
  fVar6 = *(float *)(param_1 + 8);
  fVar21 = fVar17 * 0.0 + fVar16 * 1.0 + fVar18 * 0.0 + fVar19 * fVar28;
  fVar23 = fVar17 * 1.0 + fVar16 * 0.0 + fVar18 * 0.0 + fVar19 * fVar33;
  fVar25 = fVar17 * 0.0 + fVar16 * 0.0 + fVar18 * 1.0 + fVar19 * 0.0;
  fVar27 = fVar17 * 0.0 + fVar16 * 0.0 + fVar18 * 0.0 + fVar19 * 1.0;
  fVar7 = *(float *)(param_1 + 0xc);
  fVar14 = -fVar6;
  fVar15 = -fVar7;
  fVar28 = fVar11 * 0.0 + fVar10 * 1.0 + fVar8 * 0.0 + fVar9 * fVar28;
  fVar33 = fVar11 * 1.0 + fVar10 * 0.0 + fVar8 * 0.0 + fVar9 * fVar33;
  fVar12 = fVar11 * 0.0 + fVar10 * 0.0 + fVar8 * 1.0 + fVar9 * 0.0;
  fVar13 = fVar11 * 0.0 + fVar10 * 0.0 + fVar8 * 0.0 + fVar9 * 1.0;
  fVar16 = fVar29 * 0.0 + local_1b8 * 1.0 + fVar21 * 0.0 + fVar28 * 0.0;
  fVar17 = fVar30 * 0.0 + fStack_1b4 * 1.0 + fVar23 * 0.0 + fVar33 * 0.0;
  fVar18 = fVar31 * 0.0 + fStack_1b0 * 1.0 + fVar25 * 0.0 + fVar12 * 0.0;
  fVar19 = fVar32 * 0.0 + fStack_1ac * 1.0 + fVar27 * 0.0 + fVar13 * 0.0;
  fVar20 = fVar29 * 1.0 + local_1b8 * 0.0 + fVar21 * 0.0 + fVar28 * 0.0;
  fVar22 = fVar30 * 1.0 + fStack_1b4 * 0.0 + fVar23 * 0.0 + fVar33 * 0.0;
  fVar24 = fVar31 * 1.0 + fStack_1b0 * 0.0 + fVar25 * 0.0 + fVar12 * 0.0;
  fVar26 = fVar32 * 1.0 + fStack_1ac * 0.0 + fVar27 * 0.0 + fVar13 * 0.0;
  fVar10 = fVar15 * fVar29 + fVar14 * local_1b8 + fVar21 * 0.0 + fVar28 * 1.0;
  fVar11 = fVar15 * fVar30 + fVar14 * fStack_1b4 + fVar23 * 0.0 + fVar33 * 1.0;
  fVar8 = fVar15 * fVar31 + fVar14 * fStack_1b0 + fVar25 * 0.0 + fVar12 * 1.0;
  fVar9 = fVar15 * fVar32 + fVar14 * fStack_1ac + fVar27 * 0.0 + fVar13 * 1.0;
  fVar14 = fVar29 * 0.0 + local_1b8 * 0.0 + fVar21 * 1.0 + fVar28 * 0.0;
  fVar15 = fVar30 * 0.0 + fStack_1b4 * 0.0 + fVar23 * 1.0 + fVar33 * 0.0;
  fVar28 = fVar31 * 0.0 + fStack_1b0 * 0.0 + fVar25 * 1.0 + fVar12 * 0.0;
  fVar33 = fVar32 * 0.0 + fStack_1ac * 0.0 + fVar27 * 1.0 + fVar13 * 0.0;
  local_158 = fVar17 * 0.0 + fVar16 * 1.0 + fVar18 * 0.0 + fVar19 * fVar6;
  fStack_154 = fVar17 * 1.0 + fVar16 * 0.0 + fVar18 * 0.0 + fVar19 * fVar7;
  fStack_150 = fVar17 * 0.0 + fVar16 * 0.0 + fVar18 * 1.0 + fVar19 * 0.0;
  fStack_14c = fVar17 * 0.0 + fVar16 * 0.0 + fVar18 * 0.0 + fVar19 * 1.0;
  local_148 = fVar22 * 0.0 + fVar20 * 1.0 + fVar24 * 0.0 + fVar26 * fVar6;
  fStack_144 = fVar22 * 1.0 + fVar20 * 0.0 + fVar24 * 0.0 + fVar26 * fVar7;
  fStack_140 = fVar22 * 0.0 + fVar20 * 0.0 + fVar24 * 1.0 + fVar26 * 0.0;
  fStack_13c = fVar22 * 0.0 + fVar20 * 0.0 + fVar24 * 0.0 + fVar26 * 1.0;
  local_138 = fVar15 * 0.0 + fVar14 * 1.0 + fVar28 * 0.0 + fVar33 * fVar6;
  fStack_134 = fVar15 * 1.0 + fVar14 * 0.0 + fVar28 * 0.0 + fVar33 * fVar7;
  fStack_130 = fVar15 * 0.0 + fVar14 * 0.0 + fVar28 * 1.0 + fVar33 * 0.0;
  fStack_12c = fVar15 * 0.0 + fVar14 * 0.0 + fVar28 * 0.0 + fVar33 * 1.0;
  local_128 = fVar11 * 0.0 + fVar10 * 1.0 + fVar8 * 0.0 + fVar9 * fVar6;
  fStack_124 = fVar11 * 1.0 + fVar10 * 0.0 + fVar8 * 0.0 + fVar9 * fVar7;
  fStack_120 = fVar11 * 0.0 + fVar10 * 0.0 + fVar8 * 1.0 + fVar9 * 0.0;
  fStack_11c = fVar11 * 0.0 + fVar10 * 0.0 + fVar8 * 0.0 + fVar9 * 1.0;
  FCanvas::PushRelativeTransform(param_2,&local_158);
LAB_1428a5c31:
  local_res18 = *(longlong *)(param_1 + 0x58);
  if (local_res18 == 0) {
    FUN_1428ba2c0(param_1,param_2,(float *)(param_1 + 8));
  }
  else {
    local_1a8 = *(undefined4 *)(param_1 + 0x28);
    uStack_1a4 = *(undefined4 *)(param_1 + 0x2c);
    uStack_1a0 = *(undefined4 *)(param_1 + 0x30);
    local_198 = (float)((uint)local_198 & 0xfffffffe);
    fStack_19c = *(float *)(param_1 + 0x34) * *param_2;
    uStack_194 = 0;
    uStack_18c = 0;
    local_184 = 0;
    uStack_17c = 0;
    uVar5 = FUN_1428abd30(param_2,1,*(undefined8 *)(param_1 + 0x20),local_res18,
                          *(undefined4 *)(param_1 + 0x14),&local_198,1);
    if (*(longlong *)(param_2 + 0x1a) == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0x1a) + 0x18);
    }
    fStack_1ac = *(float *)(param_1 + 0x40);
    fVar6 = *(float *)(param_1 + 8);
    local_res8 = *(undefined4 *)(param_1 + 0x44);
    local_resc = *(undefined4 *)(param_1 + 0x48);
    fVar10 = fVar6 * fStack_1ac;
    fStack_1b0 = 0.0;
    fVar7 = *(float *)(param_1 + 0xc) * fStack_1ac;
    fVar11 = (fVar6 + *(float *)(param_1 + 0x38)) * fStack_1ac;
    fVar6 = (*(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x3c)) * fStack_1ac;
    local_1b8 = fVar10;
    fStack_1b4 = fVar7;
    uVar1 = FUN_1422e40b0(uVar5,&local_1b8,&local_res8,&local_1a8,uVar4);
    local_res8 = *(undefined4 *)(param_1 + 0x4c);
    local_resc = *(undefined4 *)(param_1 + 0x48);
    fStack_1ac = *(float *)(param_1 + 0x40);
    fStack_1b0 = 0.0;
    local_1b8 = fVar11;
    fStack_1b4 = fVar7;
    uVar2 = FUN_1422e40b0(uVar5,&local_1b8,&local_res8,&local_1a8,uVar4);
    local_res8 = *(undefined4 *)(param_1 + 0x44);
    local_resc = *(undefined4 *)(param_1 + 0x50);
    fStack_1ac = *(float *)(param_1 + 0x40);
    fStack_1b0 = 0.0;
    local_1b8 = fVar10;
    fStack_1b4 = fVar6;
    uVar3 = FUN_1422e40b0(uVar5,&local_1b8,&local_res8,&local_1a8,uVar4);
    local_res8 = *(undefined4 *)(param_1 + 0x4c);
    local_resc = *(undefined4 *)(param_1 + 0x50);
    fStack_1ac = *(float *)(param_1 + 0x40);
    fStack_1b0 = 0.0;
    local_1b8 = fVar11;
    fStack_1b4 = fVar6;
    uVar4 = FUN_1422e40b0(uVar5,&local_1b8,&local_res8,&local_1a8,uVar4);
    local_198 = (float)((uint)local_198 & 0xfffffffe);
    uStack_194 = 0;
    uStack_18c = 0;
    local_184 = 0;
    uStack_17c = 0;
    FUN_1422e3d20(uVar5,uVar1,uVar2,uVar4,*(undefined8 *)(param_1 + 0x20),local_res18,
                  *(undefined4 *)(param_1 + 0x14),&local_198);
    local_198 = (float)((uint)local_198 & 0xfffffffe);
    uStack_194 = 0;
    uStack_18c = 0;
    local_184 = 0;
    uStack_17c = 0;
    FUN_1422e3d20(uVar5,uVar1,uVar4,uVar3,*(undefined8 *)(param_1 + 0x20),local_res18,
                  *(undefined4 *)(param_1 + 0x14),&local_198);
    param_2 = local_res10;
  }
  fVar6 = *(float *)(param_1 + 0x68);
  fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
  if (ABS(fVar6) < ABS(fVar7)) {
    fVar7 = fVar6;
  }
  fVar6 = fVar6 - fVar7;
  if (fVar6 < 0.0) {
    fVar6 = fVar6 + 360.0;
  }
  if (fVar6 == 0.0) {
    fVar6 = *(float *)(param_1 + 0x6c);
    fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
    if (ABS(fVar6) < ABS(fVar7)) {
      fVar7 = fVar6;
    }
    fVar6 = fVar6 - fVar7;
    if (fVar6 < 0.0) {
      fVar6 = fVar6 + 360.0;
    }
    if (fVar6 == 0.0) {
      fVar6 = *(float *)(param_1 + 0x70);
      fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
      if (ABS(fVar6) < ABS(fVar7)) {
        fVar7 = fVar6;
      }
      fVar6 = fVar6 - fVar7;
      if (fVar6 < 0.0) {
        fVar6 = fVar6 + 360.0;
      }
      if (fVar6 == 0.0) {
        return;
      }
    }
  }
  param_2[0xc] = (float)((int)param_2[0xc] + -1);
  TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_2 + 10);
  return;
}



// FUNCTION 1428a6080 FUN_1428a6080 body=1044 status=ok
// SIG undefined FUN_1428a6080(void)

void FUN_1428a6080(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined4 uVar25;
  uint *puVar24;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8 [36];
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    puVar24 = local_b8;
    local_b8[0] = local_b8[0] & 0xfffffffe;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_b8[4] = 0;
    local_b8[5] = 0;
    local_b8[6] = 0;
    local_b8[7] = 0;
    local_b8[8] = 0;
    uVar17 = FUN_1428abd30(param_2,1,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38)
                           ,*(undefined4 *)(param_1 + 0x14),puVar24,1);
    if (*(longlong *)(param_2 + 0x68) == 0) {
      uVar20 = 0xffffffff;
    }
    else {
      uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18);
    }
    iVar2 = *(int *)(param_1 + 0x58);
    lVar22 = (longlong)iVar2;
    FUN_1422f8300(uVar17,iVar2 * 3);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      FUN_1422f8250(uVar17,iVar2,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x14));
    }
    if (0 < iVar2) {
      lVar21 = 0;
      do {
        uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
        lVar23 = *(longlong *)(param_1 + 0x50);
        local_e0 = 0;
        local_dc = 0x3f800000;
        local_e8 = *(undefined4 *)(lVar21 + lVar23);
        local_e4 = *(undefined4 *)(lVar21 + 4 + lVar23);
        uVar14 = FUN_1422e40b0(uVar17,&local_e8,lVar23 + 8 + lVar21,lVar23 + 0x10 + lVar21,uVar20);
        local_d8 = *(undefined4 *)(lVar21 + 0x20 + lVar23);
        local_d4 = *(undefined4 *)(lVar21 + 0x24 + lVar23);
        local_d0 = 0;
        local_cc = 0x3f800000;
        uVar15 = FUN_1422e40b0(uVar17,&local_d8,lVar23 + 0x28 + lVar21,lVar23 + 0x30 + lVar21,uVar20
                              );
        local_c8 = *(undefined4 *)(lVar21 + 0x40 + lVar23);
        local_c4 = *(undefined4 *)(lVar21 + 0x44 + lVar23);
        local_c0 = 0;
        local_bc = 0x3f800000;
        uVar16 = FUN_1422e40b0(uVar17,&local_c8,lVar23 + 0x48 + lVar21,lVar23 + 0x50 + lVar21,uVar20
                              );
        if (*(longlong *)(param_1 + 0x48) == 0) {
          local_b8[0] = local_b8[0] & 0xfffffffe;
          puVar24 = (uint *)CONCAT44(uVar25,*(undefined4 *)(param_1 + 0x14));
          local_b8[1] = 0;
          local_b8[2] = 0;
          local_b8[3] = 0;
          local_b8[4] = 0;
          local_b8[5] = 0;
          local_b8[6] = 0;
          local_b8[7] = 0;
          local_b8[8] = 0;
          FBatchedElements::AddTriangle
                    (uVar17,uVar14,uVar15,uVar16,*(undefined8 *)(param_1 + 0x38),puVar24,local_b8);
        }
        else {
          puVar24 = (uint *)CONCAT44(uVar25,*(undefined4 *)(param_1 + 0x14));
          FBatchedElements::AddTriangle
                    (uVar17,uVar14,uVar15,uVar16,*(longlong *)(param_1 + 0x48),puVar24);
        }
        lVar21 = lVar21 + 0x60;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
  }
  else {
    lVar22 = FUN_1428add20(param_2,*(undefined4 *)
                                    (*(longlong *)(param_2 + 0x18) + -4 +
                                    (longlong)*(int *)(param_2 + 0x20) * 4));
    lVar21 = 0;
    lVar23 = (longlong)*(int *)(param_2 + 0x30) * 0x50 + *(longlong *)(param_2 + 0x28);
    if ((((*(int *)(lVar22 + 0x10) < 1) ||
         (lVar18 = (**(code **)(**(longlong **)
                                  (*(longlong *)(lVar22 + 8) + -8 +
                                  (longlong)*(int *)(lVar22 + 0x10) * 8) + 0x28))(), lVar18 == 0))
        || (**(longlong **)(lVar18 + 8) != *(longlong *)(param_1 + 0x40))) ||
       ((int)(*(longlong **)(lVar18 + 8))[10] != *(int *)(lVar23 + -0x10))) {
      lVar19 = operator_new(0x18);
      lVar18 = lVar21;
      if (lVar19 != 0) {
        lVar18 = FUN_14289a5b0(lVar19,*(undefined4 *)(param_2 + 0x90),
                               *(undefined8 *)(param_1 + 0x40),lVar23 + -0x50,
                               *(undefined1 *)(param_1 + 0x18));
      }
      iVar2 = *(int *)(lVar22 + 0x10);
      *(int *)(lVar22 + 0x10) = iVar2 + 1;
      if (*(int *)(lVar22 + 0x14) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar22 + 8,iVar2);
      }
      *(longlong *)(*(longlong *)(lVar22 + 8) + (longlong)iVar2 * 8) = lVar18;
    }
    if (*(longlong *)(param_2 + 0x68) == 0) {
      uVar20 = 0xffffffff;
    }
    else {
      uVar20 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18);
    }
    iVar2 = *(int *)(param_1 + 0x58);
    lVar22 = (longlong)iVar2;
    if (*(int *)(*(longlong *)(lVar18 + 8) + 0xad4) < iVar2) {
      TArray<FCanvasTriangleRendererItem::FRenderData::FTriangleInst,FDefaultAllocator>::ResizeTo
                (*(longlong *)(lVar18 + 8) + 0xac8,iVar2);
    }
    if (0 < iVar2) {
      do {
        lVar23 = *(longlong *)(param_1 + 0x50);
        lVar19 = *(longlong *)(lVar18 + 8);
        uVar17 = *(undefined8 *)(lVar23 + lVar21);
        uVar3 = ((undefined8 *)(lVar23 + lVar21))[1];
        iVar2 = *(int *)(lVar19 + 0xad0);
        puVar1 = (undefined8 *)(lVar23 + 0x10 + lVar21);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        puVar1 = (undefined8 *)(lVar23 + 0x20 + lVar21);
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        puVar1 = (undefined8 *)(lVar23 + 0x30 + lVar21);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        puVar1 = (undefined8 *)(lVar23 + 0x40 + lVar21);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        puVar1 = (undefined8 *)(lVar23 + 0x50 + lVar21);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        *(int *)(lVar19 + 0xad0) = iVar2 + 1;
        if (*(int *)(lVar19 + 0xad4) < iVar2 + 1) {
          TArray<FCanvasTriangleRendererItem::FRenderData::FTriangleInst,FDefaultAllocator>::
          ResizeGrow(lVar19 + 0xac8,iVar2);
        }
        lVar23 = *(longlong *)(lVar19 + 0xac8);
        lVar21 = lVar21 + 0x60;
        lVar19 = (longlong)iVar2 * 100;
        *(undefined8 *)(lVar19 + lVar23) = uVar17;
        ((undefined8 *)(lVar19 + lVar23))[1] = uVar3;
        puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar23);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        puVar1 = (undefined8 *)(lVar19 + 0x20 + lVar23);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        puVar1 = (undefined8 *)(lVar19 + 0x30 + lVar23);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)(lVar19 + 0x40 + lVar23);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        puVar1 = (undefined8 *)(lVar19 + 0x50 + lVar23);
        *puVar1 = uVar12;
        puVar1[1] = uVar13;
        *(undefined4 *)(lVar19 + 0x60 + lVar23) = uVar20;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
  }
  return;
}



// FUNCTION 1428a64a0 FUN_1428a64a0 body=1418 status=ok
// SIG undefined FUN_1428a64a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428a64a0(longlong param_1,longlong param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,undefined8 param_9,undefined8 param_10)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_4a8 [32];
  undefined *local_488;
  longlong local_478;
  undefined4 local_470;
  undefined4 local_46c;
  float local_468;
  float local_464;
  float local_460;
  float local_45c;
  float local_458;
  float local_454;
  undefined **local_448;
  float local_440;
  float local_43c;
  undefined8 local_438;
  undefined1 local_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  float local_410;
  float local_40c;
  undefined4 local_408;
  float local_404;
  float local_400;
  undefined8 local_3fc;
  longlong local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  longlong local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined **local_3c8;
  float local_3c0;
  float local_3bc;
  undefined8 local_3b8;
  undefined1 local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined1 local_348 [8];
  longlong *local_340;
  undefined1 local_330 [8];
  longlong *local_328;
  undefined1 local_318 [8];
  longlong *local_310;
  undefined **local_2f8;
  float local_2f0;
  float local_2ec;
  undefined8 local_2e8;
  undefined1 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  float local_2c0;
  float local_2bc;
  undefined4 local_2b8;
  longlong local_280;
  undefined8 local_278;
  undefined1 local_268 [304];
  undefined1 local_138 [120];
  ulonglong local_c0;
  
  local_c0 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  if (param_9._4_4_ != (float)param_9) {
    param_9._0_4_ = (param_3 - (float)param_9) / (param_9._4_4_ - (float)param_9);
  }
  if (param_10._4_4_ != (float)param_10) {
    param_10._0_4_ = (param_4 - (float)param_10) / (param_10._4_4_ - (float)param_10);
  }
  local_2d0 = DAT_1464aa6c0;
  uStack_2cc = DAT_1464aa6c4;
  uStack_2c8 = DAT_1464aa6c8;
  uStack_2c4 = DAT_1464aa6cc;
  local_2e8 = 0;
  local_2f0 = param_5;
  local_2ec = param_6;
  local_2c0 = param_7;
  local_2bc = param_8;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2f8 = &PTR_FUN_1444d5548;
  local_2b8 = 0;
  local_280 = 0;
  local_278 = 0;
  FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260),&local_2f8);
  local_388 = 0x3f800000;
  uStack_380 = 0x3f80000000000000;
  local_3b8 = 0;
  local_354 = (undefined4)DAT_1468b5d88;
  local_3b0 = 0;
  local_378 = 0x3f800000;
  fVar8 = (float)(int)(((float)param_9 * param_7 + param_5) - 4.0);
  local_3a8 = 0;
  local_390 = 0x41000000;
  local_38c = 0x41000000;
  local_368 = 0;
  local_350 = DAT_1468b5d88._4_4_;
  local_360 = 0;
  local_358 = 0;
  local_3a0 = _DAT_1464aa720;
  uStack_39c = uRam00000001464aa724;
  uStack_398 = uRam00000001464aa728;
  uStack_394 = uRam00000001464aa72c;
  local_3c8 = &PTR_FUN_1451e2200;
  fVar7 = (float)(int)(((float)param_10 * param_8 + param_6) - 4.0);
  local_370 = DAT_146ac3d68;
  local_3c0 = fVar8;
  local_3bc = fVar7;
  FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260),&local_3c8);
  local_440 = param_5;
  local_410 = param_5;
  local_438 = 0;
  local_430 = 0;
  local_428 = 0;
  local_448 = &PTR_FUN_14416c998;
  local_3fc = 0;
  local_408 = 0;
  local_420 = 0x3f000000;
  uStack_41c = 0x3f000000;
  uStack_418 = 0;
  uStack_414 = 0x3f000000;
  local_43c = fVar7;
  local_40c = fVar7;
  local_404 = param_5 + param_7;
  local_400 = fVar7;
  FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260),&local_448);
  local_40c = param_6;
  local_408 = 0;
  local_410 = fVar8;
  local_404 = fVar8;
  local_400 = param_6 + param_8;
  FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260),&local_448);
  local_478 = 0;
  FString::PrintfImpl(&local_3e8,&DAT_1451e0428,(double)param_3);
  if (local_478 != 0) {
    FMemory::Free();
  }
  local_478 = local_3e8;
  local_464 = param_6 + param_8 + 16.0;
  local_470 = local_3e0;
  local_46c = local_3dc;
  local_468 = fVar8;
  uVar5 = UEngine::GetSmallFont();
  uVar6 = FText::FromString(local_348,&local_478);
  local_488 = &DAT_1464aa720;
  FCanvasTextItem::FCanvasTextItem(local_268,&local_468,uVar6,uVar5);
  if (local_340 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_340 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_340)(local_340);
      LOCK();
      piVar2 = (int *)((longlong)local_340 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_340 + 8))(local_340,1);
      }
    }
  }
  FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260),local_268);
  FString::PrintfImpl(&local_3d8,&DAT_1451e0430,(double)param_4);
  if (local_478 != 0) {
    FMemory::Free();
  }
  local_478 = local_3d8;
  local_470 = local_3d0;
  local_46c = local_3cc;
  uVar5 = FText::FromString(local_330,&local_478);
  FText::operator=(local_138,uVar5);
  if (local_328 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_328 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_328)(local_328);
      LOCK();
      piVar2 = (int *)((longlong)local_328 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_328 + 8))(local_328,1);
      }
    }
  }
  local_460 = param_5 + param_7 + 8.0;
  local_45c = fVar7;
  UCanvas::DrawItem(param_1,local_268,&local_460);
  if (1 < *(int *)(param_2 + 8)) {
    uVar5 = FText::FromString(local_318,param_2);
    FText::operator=(local_138,uVar5);
    if (local_310 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_310 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_310)(local_310);
        LOCK();
        piVar2 = (int *)((longlong)local_310 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_310 + 8))(local_310,1);
        }
      }
    }
    local_454 = param_6 - 16.0;
    local_458 = param_5;
    UCanvas::DrawItem(param_1,local_268,&local_458);
  }
  FUN_140c64b70(local_268);
  if (local_478 != 0) {
    FMemory::Free();
  }
  local_448 = &PTR_FUN_143f4c5f0;
  local_3c8 = &PTR_FUN_143f4c5f0;
  if (local_280 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428a6a30 DrawItem body=207 status=ok
// SIG undefined DrawItem(void)

void FCanvas::DrawItem(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  
  uVar1 = *(uint *)(param_2 + 2);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0x98);
  }
  cVar2 = FUN_1428adbd0(param_1,(float)uVar1,local_88);
  if (cVar2 == '\0') {
    (**(code **)(*param_2 + 0x18))(param_2,param_1);
  }
  else {
    PushRelativeTransform(param_1,local_88);
    (**(code **)(*param_2 + 0x18))(param_2,param_1);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
    if (*(char *)(param_1 + 0x95) == '\0') {
      PushRelativeTransform(param_1,local_48);
      (**(code **)(*param_2 + 0x18))(param_2,param_1);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
    }
  }
  if (*(int *)(param_1 + 0x134) == 1) {
    FUN_1428aa700(param_1,0);
  }
  return;
}



// FUNCTION 1428a6b00 FUN_1428a6b00 body=229 status=ok
// SIG undefined FUN_1428a6b00(void)

void FUN_1428a6b00(longlong param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  
  uVar1 = *(uint *)(param_2 + 2);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0x98);
  }
  cVar2 = FUN_1428adbd0(param_1,(float)uVar1,local_88);
  if (cVar2 == '\0') {
    (**(code **)(*param_2 + 0x10))(param_2,param_1,param_3);
  }
  else {
    FCanvas::PushRelativeTransform(param_1,local_88);
    (**(code **)(*param_2 + 0x10))(param_2,param_1,param_3);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
    if (*(char *)(param_1 + 0x95) == '\0') {
      FCanvas::PushRelativeTransform(param_1,local_48);
      (**(code **)(*param_2 + 0x10))(param_2,param_1,param_3);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
    }
  }
  if (*(int *)(param_1 + 0x134) == 1) {
    FUN_1428aa700(param_1,0);
  }
  return;
}



// FUNCTION 1428a6bf0 DrawItem body=253 status=ok
// SIG undefined DrawItem(void)

void FCanvas::DrawItem(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  undefined1 local_a8 [64];
  undefined1 local_68 [96];
  
  uVar1 = *(uint *)(param_2 + 2);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0x98);
  }
  cVar2 = FUN_1428adbd0(param_1,(float)uVar1,local_a8);
  if (cVar2 == '\0') {
    (**(code **)(*param_2 + 8))(param_2,param_1,param_3,param_4);
  }
  else {
    PushRelativeTransform(param_1,local_a8);
    (**(code **)(*param_2 + 8))(param_2,param_1,param_3,param_4);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
    if (*(char *)(param_1 + 0x95) == '\0') {
      PushRelativeTransform(param_1,local_68);
      (**(code **)(*param_2 + 8))(param_2,param_1,param_3,param_4);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
    }
  }
  if (*(int *)(param_1 + 0x134) == 1) {
    FUN_1428aa700(param_1,0);
  }
  return;
}



// FUNCTION 1428a6cf0 FUN_1428a6cf0 body=12 status=ok
// SIG undefined FUN_1428a6cf0(void)

void FUN_1428a6cf0(longlong param_1)

{
  FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260));
  return;
}



// FUNCTION 1428a6d00 DrawItem body=236 status=ok
// SIG undefined DrawItem(void)

void UCanvas::DrawItem(longlong param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  
  lVar2 = *(longlong *)(param_1 + 0x260);
  uVar1 = *(uint *)(param_2 + 2);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(lVar2 + 0x98);
  }
  cVar3 = FUN_1428adbd0(lVar2,(float)uVar1,local_88);
  if (cVar3 == '\0') {
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,param_3);
  }
  else {
    FCanvas::PushRelativeTransform(lVar2,local_88);
    (**(code **)(*param_2 + 0x10))(param_2,lVar2,param_3);
    *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + -1;
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(lVar2 + 0x28);
    if (*(char *)(lVar2 + 0x95) == '\0') {
      FCanvas::PushRelativeTransform(lVar2,local_48);
      (**(code **)(*param_2 + 0x10))(param_2,lVar2,param_3);
      *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + -1;
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeShrink(lVar2 + 0x28);
    }
  }
  if (*(int *)(lVar2 + 0x134) == 1) {
    FUN_1428aa700(lVar2,0);
  }
  return;
}



// FUNCTION 1428a6df0 FUN_1428a6df0 body=12 status=ok
// SIG undefined FUN_1428a6df0(void)

void FUN_1428a6df0(longlong param_1)

{
  FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260));
  return;
}



// FUNCTION 1428a6e00 FUN_1428a6e00 body=423 status=ok
// SIG undefined FUN_1428a6e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1428a6e00(undefined8 param_1,undefined4 param_2,undefined4 param_3,short *param_4,
                 longlong param_5,undefined8 param_6,undefined4 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  longlong local_218;
  ulonglong local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1e8 [20];
  undefined4 local_1d4;
  uint local_1a8;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  float local_164;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_218 = 0;
  local_210 = 0;
  lVar6 = -1;
  if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (param_4[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_210 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
    }
    FGenericPlatformString::Memcpy(local_218,param_4,(longlong)(int)uVar5 * 2);
  }
  local_208 = param_2;
  local_204 = param_3;
  uVar4 = FText::FromString(local_200,&local_218);
  local_228 = param_6;
  FCanvasTextItem::FCanvasTextItem(local_1e8,&local_208,uVar4,param_5);
  if (local_1f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f8 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_1f8)(local_1f8);
      LOCK();
      piVar2 = (int *)((longlong)local_1f8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1f8 + 8))(local_1f8,1);
      }
    }
  }
  if (local_218 != 0) {
    FMemory::Free();
  }
  if ((param_5 == 0) || ((*(byte *)(param_5 + 0x110) & 1) == 0)) {
    local_1a8 = local_1a8 | 2;
    local_170 = 0x3f800000;
    local_16c = 0x3f800000;
    local_180 = *param_7;
    uStack_17c = param_7[1];
    uStack_178 = param_7[2];
    uStack_174 = param_7[3];
  }
  else {
    local_1d4 = 6;
  }
  FCanvas::DrawItem(param_1,local_1e8);
  FUN_140c64b70(local_1e8);
  return (int)local_164;
}



// FUNCTION 1428a6fb0 FUN_1428a6fb0 body=356 status=ok
// SIG undefined FUN_1428a6fb0(void)

void FUN_1428a6fb0(longlong param_1,undefined8 param_2,float *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  undefined4 local_resc;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
    uVar5 = FText::FromString(local_28);
    FText::operator=(param_1 + 0x130,uVar5);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    local_res8 = *(float *)(param_1 + 0x1a8) + *param_3;
    local_resc = *(undefined4 *)(param_1 + 0x1ac);
    UCanvas::DrawItem(*(undefined8 *)(param_1 + 0x1c0),param_1,&local_res8);
    fVar7 = *(float *)(param_1 + 0x1b4) * 1.15;
    fVar6 = *(float *)(param_1 + 0x84);
    if (*(float *)(param_1 + 0x84) <= fVar7) {
      fVar6 = fVar7;
    }
    fVar8 = *(float *)(param_1 + 0x1a8) + *param_3 + *(float *)(param_1 + 0x80);
    fVar6 = fVar6 + *(float *)(param_1 + 0x1ac);
    if (fVar8 <= *(float *)(param_1 + 0x1b0)) {
      fVar8 = *(float *)(param_1 + 0x1b0);
    }
    *(float *)(param_1 + 0x1ac) = fVar6;
    *(float *)(param_1 + 0x1b0) = fVar8;
    if ((*(longlong *)(param_1 + 0x1c0) != 0) &&
       ((float)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0x44) < fVar7 + fVar6)) {
      *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x1bc);
      *(float *)(param_1 + 0x1a8) = fVar7 + fVar7 + fVar8;
    }
  }
  return;
}



// FUNCTION 1428a7150 FUN_1428a7150 body=1662 status=ok
// SIG undefined FUN_1428a7150(void)

void FUN_1428a7150(longlong param_1,longlong param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  short sVar4;
  wint_t _C;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ushort uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  undefined4 uVar18;
  longlong lVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_res8;
  longlong in_stack_fffffffffffffe58;
  undefined8 uVar31;
  undefined8 in_stack_fffffffffffffe60;
  undefined4 uVar32;
  ulonglong in_stack_fffffffffffffe68;
  float local_188;
  float local_184;
  longlong local_178;
  ulonglong local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_138;
  float local_134;
  undefined4 local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  undefined4 local_100;
  undefined4 local_fc;
  longlong *local_f8;
  
  *(undefined4 *)(param_1 + 0x80) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x84) = DAT_1468b5d88._4_4_;
  plVar14 = (longlong *)FText::ToString(param_1 + 0x130);
  iVar20 = (int)plVar14[1];
  uVar15 = (ulonglong)(iVar20 - 1);
  iVar17 = iVar20 + -1;
  if (iVar20 == 0) {
    uVar15 = 0xffffffff;
    iVar17 = -1;
  }
  local_168 = 0;
  if (iVar20 == 0) {
    iVar17 = 0;
  }
  if (iVar17 != 0) {
    fVar24 = 0.0;
    fVar29 = 0.0;
    local_184 = 0.0;
    if (*(longlong *)(param_2 + 0x68) == 0) {
      uVar18 = 0xffffffff;
    }
    else {
      uVar18 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18);
    }
    fVar22 = 1.0;
    if (iVar20 == 0) {
      uVar15 = local_168;
    }
    local_res8 = 1.0;
    local_188 = 1.0;
    iVar17 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x6c);
    iVar20 = (int)uVar15;
    fVar1 = *(float *)(param_1 + 0x38);
    fVar2 = *(float *)(param_1 + 0xa0);
    if (0 < iVar20) {
      local_178 = 0;
      fVar23 = fVar22;
      local_f8 = plVar14;
      do {
        uVar8 = UFont::RemapChar(*(undefined8 *)(param_1 + 0x148),
                                 *(undefined2 *)(*plVar14 + local_178 * 2));
        uVar15 = (ulonglong)uVar8;
        if ((int)(uint)uVar8 < *(int *)(*(longlong *)(param_1 + 0x148) + 0x40)) {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x38);
          if (*(float *)(param_1 + 0x84) == 0.0) {
            fVar21 = (float)FUN_14244fa00();
            *(float *)(param_1 + 0x84) = fVar21 * *(float *)(param_1 + 0xa4);
          }
          uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffe60 >> 0x20);
          uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
          sVar4 = *(short *)(*plVar14 + local_178 * 2);
          if ((((ushort)(sVar4 - 10U) < 4) || (sVar4 == 0x85)) || ((ushort)(sVar4 + 0xdfd8U) < 2)) {
            fVar29 = (float)FUN_14244fa00(*(undefined8 *)(param_1 + 0x148));
            fVar24 = fVar24 + fVar29 * *(float *)(param_1 + 0xa4);
            fVar29 = (float)FUN_14244fa00(*(undefined8 *)(param_1 + 0x148));
            *(float *)(param_1 + 0x84) =
                 fVar29 * *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0x84);
            fVar29 = 0.0;
            local_184 = fVar24;
          }
          else {
            bVar3 = *(byte *)(lVar5 + 0x10 + uVar15 * 0x18);
            if ((((int)(uint)bVar3 < *(int *)(*(longlong *)(param_1 + 0x148) + 0x50)) &&
                (plVar6 = *(longlong **)
                           (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x48) +
                           (ulonglong)bVar3 * 8), plVar6 != (longlong *)0x0)) &&
               (uVar7 = plVar6[0xc], uVar7 != 0)) {
              plVar14 = (longlong *)(param_1 + 0x128);
              if ((local_168 != uVar7) || (lVar19 = *plVar14, local_168 = uVar7, lVar19 == 0)) {
                lVar19 = param_1 + 0x44;
                uVar31 = CONCAT44(uVar9,*(undefined4 *)(param_1 + 0x14));
                lVar16 = FUN_1428abd30(param_2,1,0,uVar7,uVar31,lVar19,
                                       in_stack_fffffffffffffe68 & 0xffffffffffffff00);
                uVar32 = (undefined4)((ulonglong)lVar19 >> 0x20);
                uVar9 = (undefined4)((ulonglong)uVar31 >> 0x20);
                *plVar14 = lVar16;
                FUN_1422f8250(lVar16,iVar20 * 2,plVar6[0xc],*(undefined4 *)(param_1 + 0x14));
                FUN_1422f8300(*plVar14,iVar20 * 4);
                fVar22 = (float)(**(code **)(*plVar6 + 0x2b0))(plVar6);
                fVar22 = 1.0 / fVar22;
                fVar23 = (float)(**(code **)(*plVar6 + 0x2b8))(plVar6);
                local_168 = plVar6[0xc];
                lVar19 = *plVar14;
                fVar23 = 1.0 / fVar23;
                local_res8 = fVar22;
                local_188 = fVar23;
              }
              local_130 = 0;
              fVar28 = (float)*(int *)(lVar5 + 8 + uVar15 * 0x18);
              fVar30 = fVar28 * *(float *)(param_1 + 0xa0);
              fVar24 = (float)*(int *)(lVar5 + 0x14 + uVar15 * 0x18) * *(float *)(param_1 + 0xa4) +
                       fVar24 + param_3[1];
              local_12c = *(float *)(param_1 + 0x3c);
              fVar21 = local_12c * fVar24;
              fVar23 = (float)*(int *)(lVar5 + 4 + uVar15 * 0x18) * fVar23;
              fVar27 = (float)*(int *)(lVar5 + 0xc + uVar15 * 0x18);
              fVar22 = (float)*(int *)(lVar5 + uVar15 * 0x18) * fVar22;
              fVar25 = local_12c * (fVar29 + *param_3);
              fVar24 = (fVar27 * *(float *)(param_1 + 0xa4) + fVar24) * local_12c;
              fVar26 = (fVar30 + fVar29 + *param_3) * local_12c;
              local_160 = fVar22;
              local_15c = fVar23;
              local_138 = fVar25;
              local_134 = fVar21;
              uVar9 = FUN_1422e40b0(lVar19,&local_138,&local_160,param_4,CONCAT44(uVar9,uVar18));
              local_11c = *(undefined4 *)(param_1 + 0x3c);
              fVar28 = fVar28 * local_res8 + fVar22;
              local_120 = 0;
              local_158 = fVar28;
              local_154 = fVar23;
              local_128 = fVar26;
              local_124 = fVar21;
              uVar10 = FUN_1422e40b0(*plVar14,&local_128,&local_158,param_4,uVar18);
              local_10c = *(undefined4 *)(param_1 + 0x3c);
              fVar23 = fVar27 * local_188 + fVar23;
              local_110 = 0;
              local_150 = fVar22;
              local_14c = fVar23;
              local_118 = fVar25;
              local_114 = fVar24;
              uVar11 = FUN_1422e40b0(*plVar14,&local_118,&local_150,param_4,uVar18);
              local_fc = *(undefined4 *)(param_1 + 0x3c);
              local_100 = 0;
              local_148 = fVar28;
              local_144 = fVar23;
              local_108 = fVar26;
              local_104 = fVar24;
              uVar12 = FUN_1422e40b0(*plVar14,&local_108,&local_148,param_4,uVar18);
              uVar31 = CONCAT44(uVar32,*(undefined4 *)(param_1 + 0x14));
              FBatchedElements::AddTriangle
                        (*plVar14,uVar9,uVar10,uVar12,plVar6[0xc],uVar31,param_1 + 0x44);
              in_stack_fffffffffffffe68 = param_1 + 0x44;
              in_stack_fffffffffffffe58 = plVar6[0xc];
              in_stack_fffffffffffffe60 =
                   CONCAT44((int)((ulonglong)uVar31 >> 0x20),*(undefined4 *)(param_1 + 0x14));
              FBatchedElements::AddTriangle
                        (*plVar14,uVar9,uVar12,uVar11,in_stack_fffffffffffffe58,
                         in_stack_fffffffffffffe60,in_stack_fffffffffffffe68);
              plVar14 = local_f8;
              _C = *(wint_t *)(*local_f8 + 2 + local_178 * 2);
              if ((_C != 0) && (iVar13 = iswspace(_C), iVar13 == 0)) {
                fVar30 = fVar30 + ((float)iVar17 + fVar1) * fVar2;
              }
              fVar29 = fVar29 + fVar30;
              fVar22 = local_res8;
              fVar23 = local_188;
              fVar24 = local_184;
              if (*(float *)(param_1 + 0x80) <= fVar29 && fVar29 != *(float *)(param_1 + 0x80)) {
                *(float *)(param_1 + 0x80) = fVar29;
              }
            }
          }
        }
        local_178 = local_178 + 1;
      } while (local_178 < iVar20);
    }
  }
  return;
}



// FUNCTION 1428a77d0 FUN_1428a77d0 body=2621 status=ok
// SIG undefined FUN_1428a77d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428a77d0(longlong param_1,longlong param_2,float *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  wint_t _C;
  int iVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  longlong lVar11;
  byte bVar12;
  char cVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined1 *puVar29;
  longlong *plVar30;
  longlong lVar31;
  undefined8 *puVar32;
  undefined4 *puVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float local_res8;
  longlong *in_stack_fffffffffffffcd8;
  undefined4 uVar44;
  longlong in_stack_fffffffffffffce0;
  ulonglong in_stack_fffffffffffffce8;
  float local_308;
  float local_2fc;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  ushort uStack_2d4;
  ushort uStack_2d2;
  ushort uStack_2d0;
  ushort uStack_2ce;
  short sStack_2cc;
  short sStack_2ca;
  short local_2c8;
  short sStack_2c6;
  byte bStack_2c4;
  undefined2 uStack_2c3;
  char cStack_2c1;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  longlong local_2a0;
  float local_298;
  float local_294;
  undefined4 local_290;
  float local_28c;
  float local_288;
  float local_284;
  undefined4 local_280;
  undefined4 local_27c;
  float local_278;
  float local_274;
  undefined4 local_270;
  undefined4 local_26c;
  float local_268;
  float local_264;
  undefined4 local_260;
  undefined4 local_25c;
  longlong local_258;
  undefined8 local_250;
  longlong local_248;
  longlong *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4 [4];
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128 [4];
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec [172];
  
  if (*(char *)(param_2 + 0x94) == '\0') {
    uVar35 = *(undefined4 *)(param_2 + 0x138);
  }
  else {
    uVar35 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x80) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x84) = DAT_1468b5d88._4_4_;
  plVar23 = (longlong *)FText::ToString(param_1 + 0x130);
  iVar17 = (int)plVar23[1] + -1;
  if ((int)plVar23[1] == 0) {
    iVar17 = 0;
  }
  if ((iVar17 != 0) && (*DAT_146b184b8 != 0)) {
    plVar24 = (longlong *)FUN_1418375f0(*DAT_146b184b8,local_148);
    plVar30 = (longlong *)plVar24[1];
    lVar31 = *plVar24;
    if (plVar30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar30 + 1) = (int)plVar30[1] + 1;
      UNLOCK();
    }
    local_258 = lVar31;
    local_240 = plVar30;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar24 = local_140 + 1;
      lVar11 = *plVar24;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)local_140 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
    if (lVar31 != 0) {
      if (*(char *)(param_1 + 0x1a0) == '\0') {
        lVar11 = *(longlong *)(param_1 + 0x148);
        in_stack_fffffffffffffcd8 = (longlong *)&local_1c0;
        local_1c0 = 0;
        local_1bc = 0;
        local_1b8 = 0;
        local_1b0 = _DAT_1464aa6e0;
        uStack_1a8 = _DAT_1464aa6e8;
        FSlateFontInfo::FSlateFontInfo
                  (&local_138,lVar11,*(undefined4 *)(lVar11 + 0x13c),lVar11 + 0x140,
                   in_stack_fffffffffffffcd8);
        puVar25 = local_128;
        puVar28 = &local_108;
        puVar32 = &local_f8;
        puVar33 = &local_f0;
        bVar9 = false;
        bVar8 = true;
        puVar29 = local_ec;
        local_190 = local_130;
        local_168 = local_108;
      }
      else {
        local_1d8 = *(longlong **)(param_1 + 0x188);
        local_138 = *(undefined8 *)(param_1 + 0x150);
        local_208 = *(undefined8 *)(param_1 + 0x158);
        local_1e0 = *(undefined8 *)(param_1 + 0x180);
        local_200 = *(undefined8 *)(param_1 + 0x160);
        uStack_1f8 = *(undefined8 *)(param_1 + 0x168);
        local_1f0 = *(undefined8 *)(param_1 + 0x170);
        uStack_1e8 = *(undefined8 *)(param_1 + 0x178);
        if (local_1d8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
          UNLOCK();
        }
        puVar28 = &local_1e0;
        local_1d0 = *(undefined8 *)(param_1 + 400);
        puVar32 = &local_1d0;
        puVar33 = &local_1c8;
        local_1c8 = *(undefined4 *)(param_1 + 0x198);
        puVar29 = local_1c4;
        bVar9 = true;
        bVar8 = false;
        local_1c4[0] = *(undefined1 *)(param_1 + 0x19c);
        puVar25 = &local_200;
        local_190 = local_208;
        local_168 = local_1e0;
        local_210 = local_138;
      }
      uVar26 = *puVar25;
      uVar27 = puVar25[1];
      local_198 = local_138;
      auVar6 = *(undefined1 (*) [16])(puVar25 + 2);
      local_160 = (longlong *)puVar28[1];
      puVar28[1] = 0;
      *puVar28 = 0;
      local_158 = *puVar32;
      local_150 = *puVar33;
      local_14c = *puVar29;
      local_188 = uVar26;
      uStack_180 = uVar27;
      local_178 = auVar6;
      if ((bVar8) && (local_100 != (longlong *)0x0)) {
        LOCK();
        plVar24 = local_100 + 1;
        lVar11 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
          }
        }
      }
      plVar24 = local_1d8;
      if ((bVar9) && (local_1d8 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_1d8 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_1d8)(local_1d8);
          LOCK();
          piVar1 = (int *)((longlong)plVar24 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_1d8 + 8))(local_1d8,1);
          }
        }
      }
      uVar26 = FUN_1418336f0(lVar31,&local_198,uVar35,&DAT_1469eaf80);
      if (*(longlong *)(param_2 + 0x68) == 0) {
        uVar35 = 0xffffffff;
      }
      else {
        uVar35 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0x18);
      }
      fVar3 = *(float *)(param_1 + 0x38);
      fVar4 = *(float *)(param_1 + 0xa0);
      fVar40 = 0.0;
      bVar10 = 0;
      fVar41 = 0.0;
      local_308 = 0.0;
      fVar37 = 0.0;
      local_res8 = 0.0;
      plVar24 = (longlong *)0x0;
      local_2fc = 0.0;
      local_238 = 0;
      uStack_230 = 0;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      local_250 = uVar26;
      uVar14 = FUN_14183a900(uVar26);
      iVar7 = (int)plVar23[1];
      iVar17 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar17 = 0;
      }
      local_248 = (longlong)iVar17;
      fVar43 = (float)uVar14 * *(float *)(param_1 + 0xa4);
      if (0 < local_248) {
        local_2a0 = 0;
        fVar42 = 0.0;
        do {
          lVar31 = local_2a0;
          fVar34 = 0.0;
          _C = *(wint_t *)(*plVar23 + local_2a0 * 2);
          fVar5 = *(float *)(param_1 + 0x84);
          if (*(float *)(param_1 + 0x84) == 0.0) {
            *(float *)(param_1 + 0x84) = fVar43;
            fVar5 = fVar43;
          }
          if (_C == 10) {
            fVar37 = fVar37 + fVar43;
            *(float *)(param_1 + 0x84) = fVar5 + fVar43;
            local_2fc = fVar37;
          }
          else {
            FCharacterList::GetCharacter(uVar26,&local_2e8,_C,local_14c);
            bVar12 = bStack_2c4;
            uVar44 = (undefined4)((ulonglong)in_stack_fffffffffffffcd8 >> 0x20);
            iVar17 = 0;
            if (cStack_2c1 == '\0') {
LAB_1428a7df5:
              bVar8 = true;
            }
            else {
              if ((plVar24 == (longlong *)0x0) || (bStack_2c4 != bVar10)) {
                plVar24 = (longlong *)
                          (**(code **)(**(longlong **)
                                         (*(longlong *)(local_258 + 0x100) +
                                         (ulonglong)bStack_2c4 * 0x10) + 0x10))();
                in_stack_fffffffffffffce0 = param_1 + 0x44;
                in_stack_fffffffffffffce8 = in_stack_fffffffffffffce8 & 0xffffffffffffff00;
                in_stack_fffffffffffffcd8 =
                     (longlong *)CONCAT44(uVar44,*(undefined4 *)(param_1 + 0x14));
                uVar27 = FUN_1428abd30(param_2,1,0,plVar24,in_stack_fffffffffffffcd8,
                                       in_stack_fffffffffffffce0,in_stack_fffffffffffffce8);
                *(undefined8 *)(param_1 + 0x128) = uVar27;
                iVar16 = iVar7 * 2 + -2;
                if (iVar7 == 0) {
                  iVar16 = 0;
                }
                FUN_1422f8250(uVar27,iVar16,plVar24,*(undefined4 *)(param_1 + 0x14));
                iVar16 = iVar7 * 4 + -4;
                if (iVar7 == 0) {
                  iVar16 = 0;
                }
                FUN_1422f8300(*(undefined8 *)(param_1 + 0x128),iVar16);
                uVar15 = (**(code **)(*plVar24 + 0x40))(plVar24);
                fVar40 = 1.0 / (float)uVar15;
                uVar15 = (**(code **)(*plVar24 + 0x48))(plVar24);
                fVar41 = 1.0 / (float)uVar15;
                local_res8 = fVar41;
                local_308 = fVar40;
                bVar10 = bVar12;
              }
              if ((cStack_2c1 == '\0') || (iVar16 = iswspace(_C), iVar16 != 0)) goto LAB_1428a7df5;
              bVar8 = false;
              if (local_218._7_1_ != '\0') {
                cVar13 = FUN_141839520(uVar26,&local_238,&local_2e8);
                iVar17 = (int)((float)(int)cVar13 * *(float *)(param_1 + 0xa0));
              }
            }
            uVar44 = (undefined4)((ulonglong)in_stack_fffffffffffffce0 >> 0x20);
            local_238 = local_2e8;
            uStack_230 = uStack_2e0;
            local_218 = CONCAT17(cStack_2c1,
                                 CONCAT25(uStack_2c3,
                                          CONCAT14(bStack_2c4,CONCAT22(sStack_2c6,local_2c8))));
            local_228 = CONCAT26(uStack_2d2,CONCAT24(uStack_2d4,local_2d8));
            uStack_220 = CONCAT26(sStack_2ca,CONCAT24(sStack_2cc,CONCAT22(uStack_2ce,uStack_2d0)));
            if (!bVar8) {
              fVar5 = *(float *)(param_1 + 0xa4);
              local_290 = 0;
              fVar34 = (float)(int)sStack_2ca * *(float *)(param_1 + 0xa0) +
                       fVar42 + (float)iVar17 + *param_3;
              local_28c = *(float *)(param_1 + 0x3c);
              fVar38 = local_28c * fVar34;
              uVar15 = (uint)uStack_2d0;
              fVar37 = ((fVar37 + param_3[1]) - (float)(int)sStack_2cc * fVar5) +
                       (float)(int)local_2c8 * fVar5 + fVar43;
              fVar41 = (float)uStack_2d2 * fVar41;
              uVar18 = (uint)uStack_2ce;
              fVar36 = local_28c * fVar37;
              fVar39 = (float)uStack_2d4 * fVar40;
              fVar34 = ((float)uVar15 * *(float *)(param_1 + 0xa0) + fVar34) * local_28c;
              fVar37 = ((float)uVar18 * fVar5 + fVar37) * local_28c;
              local_2c0 = fVar39;
              local_2bc = fVar41;
              local_298 = fVar38;
              local_294 = fVar36;
              uVar19 = FUN_1422e40b0(*(undefined8 *)(param_1 + 0x128),&local_298,&local_2c0,param_4,
                                     uVar35);
              local_27c = *(undefined4 *)(param_1 + 0x3c);
              fVar40 = (float)uVar15 * fVar40 + fVar39;
              local_280 = 0;
              local_2b8 = fVar40;
              local_2b4 = fVar41;
              local_288 = fVar34;
              local_284 = fVar36;
              uVar20 = FUN_1422e40b0(*(undefined8 *)(param_1 + 0x128),&local_288,&local_2b8,param_4,
                                     uVar35);
              local_26c = *(undefined4 *)(param_1 + 0x3c);
              fVar41 = (float)uVar18 * local_res8 + fVar41;
              local_270 = 0;
              local_2b0 = fVar39;
              local_2ac = fVar41;
              local_278 = fVar38;
              local_274 = fVar37;
              uVar21 = FUN_1422e40b0(*(undefined8 *)(param_1 + 0x128),&local_278,&local_2b0,param_4,
                                     uVar35);
              local_25c = *(undefined4 *)(param_1 + 0x3c);
              local_260 = 0;
              local_2a8 = fVar40;
              local_2a4 = fVar41;
              local_268 = fVar34;
              local_264 = fVar37;
              uVar22 = FUN_1422e40b0(*(undefined8 *)(param_1 + 0x128),&local_268,&local_2a8,param_4,
                                     uVar35);
              in_stack_fffffffffffffce8 = param_1 + 0x44;
              uVar26 = CONCAT44(uVar44,*(undefined4 *)(param_1 + 0x14));
              FBatchedElements::AddTriangle
                        (*(undefined8 *)(param_1 + 0x128),uVar19,uVar20,uVar22,plVar24,uVar26,
                         in_stack_fffffffffffffce8);
              in_stack_fffffffffffffce0 =
                   CONCAT44((int)((ulonglong)uVar26 >> 0x20),*(undefined4 *)(param_1 + 0x14));
              in_stack_fffffffffffffcd8 = plVar24;
              FBatchedElements::AddTriangle
                        (*(undefined8 *)(param_1 + 0x128),uVar19,uVar22,uVar21,plVar24,
                         in_stack_fffffffffffffce0,in_stack_fffffffffffffce8);
              lVar31 = local_2a0;
              uVar26 = local_250;
              fVar37 = local_2fc;
            }
            fVar34 = (float)(int)sStack_2c6 * *(float *)(param_1 + 0xa0) + fVar42 + (float)iVar17 +
                     fVar3 * fVar4;
            fVar40 = local_308;
            fVar41 = local_res8;
            if (*(float *)(param_1 + 0x80) <= fVar34 && fVar34 != *(float *)(param_1 + 0x80)) {
              *(float *)(param_1 + 0x80) = fVar34;
            }
          }
          local_2a0 = lVar31 + 1;
          plVar30 = local_240;
          fVar42 = fVar34;
        } while (local_2a0 < local_248);
      }
      plVar23 = local_160;
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar24 = local_160 + 1;
        lVar31 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar31 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
      }
    }
    if (plVar30 != (longlong *)0x0) {
      LOCK();
      plVar23 = plVar30 + 1;
      lVar31 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar31 == 1) {
        (**(code **)*plVar30)(plVar30);
        LOCK();
        piVar1 = (int *)((longlong)plVar30 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*plVar30 + 8))(plVar30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1428a8210 DrawText body=573 status=ok
// SIG undefined DrawText(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UCanvas::DrawText(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,
                      float param_5,undefined4 param_6,undefined4 param_7,byte *param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_2c8 [32];
  undefined4 *local_2a8;
  undefined4 *local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_288;
  byte local_280;
  byte local_278;
  undefined2 *local_270;
  byte *local_268;
  undefined4 local_258;
  undefined4 local_254;
  float local_250;
  float local_24c;
  undefined4 local_248 [4];
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_220 [20];
  undefined4 local_20c;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined4 local_180;
  undefined4 local_17c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  uVar5 = FText::FromString(local_238,param_3);
  local_254 = 0;
  local_258 = 0;
  puVar6 = (undefined8 *)FText::ToString(uVar5);
  if (*(int *)(puVar6 + 1) == 0) {
    local_270 = &DAT_143f3eda8;
  }
  else {
    local_270 = (undefined2 *)*puVar6;
  }
  local_280 = (byte)*(uint *)(param_1 + 0x3c) & 1;
  local_268 = param_8;
  local_278 = (byte)(*(uint *)(param_1 + 0x3c) >> 1) & 1;
  local_2a0 = &local_258;
  local_288 = param_7;
  local_290 = param_6;
  local_2a8 = &local_254;
  local_298 = param_2;
  FUN_1428bfd60(param_1,~*param_8 & 1,param_4,param_5);
  if ((*param_8 & 1) != 0) {
    FLinearColor::FLinearColor(local_248,param_1 + 0x38);
    local_250 = (float)(int)(param_4 + *(float *)(param_1 + 0x28));
    local_2a8 = local_248;
    local_24c = (float)(int)(param_5 + *(float *)(param_1 + 0x2c));
    FCanvasTextItem::FCanvasTextItem(local_220,&local_250,uVar5,param_2);
    local_1e0 = *(undefined8 *)param_8;
    uStack_1d8 = *(undefined8 *)(param_8 + 8);
    local_1d0 = *(undefined4 *)(param_8 + 0x10);
    uStack_1cc = *(undefined4 *)(param_8 + 0x14);
    uStack_1c8 = *(undefined4 *)(param_8 + 0x18);
    uStack_1c4 = *(undefined4 *)(param_8 + 0x1c);
    local_20c = 2;
    local_1c0 = *(undefined8 *)(param_8 + 0x20);
    local_180 = param_6;
    local_17c = param_7;
    FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260),local_220);
    FUN_140c64b70(local_220);
  }
  if (local_230 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_230 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_230)(local_230);
      LOCK();
      piVar2 = (int *)((longlong)local_230 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_230 + 8))(local_230,1);
      }
    }
  }
  return;
}



// FUNCTION 1428a8450 FUN_1428a8450 body=242 status=ok
// SIG undefined FUN_1428a8450(void)

void FUN_1428a8450(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 *param_10,longlong param_11,char param_12)

{
  undefined **local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_4c = param_5;
  local_44 = param_6;
  local_48 = 0x3f800000;
  local_88 = &PTR_FUN_1451e2200;
  local_3c = param_8;
  local_30 = DAT_146ac3d68;
  if (param_11 != 0) {
    local_30 = param_11;
  }
  local_40 = param_7;
  local_14 = (undefined4)DAT_1468b5d88;
  local_38 = param_9;
  local_60 = *param_10;
  uStack_5c = param_10[1];
  uStack_58 = param_10[2];
  uStack_54 = param_10[3];
  local_78 = 0;
  local_70 = 0;
  local_10 = DAT_1468b5d88._4_4_;
  local_68 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (param_12 == '\0') {
    local_74 = 0;
  }
  else {
    local_74 = 2;
    if (*(char *)(param_1 + 0x95) != '\0') {
      local_74 = 0xc;
    }
  }
  local_80 = param_2;
  local_7c = param_3;
  local_50 = param_4;
  FCanvas::DrawItem(param_1,&local_88);
  return;
}



// FUNCTION 1428a8550 FUN_1428a8550 body=1723 status=ok
// SIG undefined FUN_1428a8550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428a8550(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 *puVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined1 local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_11c;
  float local_114;
  undefined8 local_110;
  float local_108;
  undefined8 local_104;
  float local_fc;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d4;
  float local_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar1 = *param_3;
  fVar2 = *(float *)(param_3 + 0x16);
  fVar3 = *(float *)((longlong)param_3 + 0xb4);
  fVar4 = *(float *)(param_3 + 0x17);
  fVar5 = *(float *)(param_3 + 0x1c);
  fVar6 = *(float *)((longlong)param_3 + 0xe4);
  fVar7 = *(float *)(param_3 + 0x1d);
  fVar8 = *(float *)(param_3 + 0x1a);
  fVar9 = *(float *)((longlong)param_3 + 0xd4);
  fVar10 = *(float *)(param_3 + 0x1b);
  fVar11 = *(float *)(param_3 + 0x18);
  fVar12 = *(float *)((longlong)param_3 + 0xc4);
  fVar13 = *(float *)(param_3 + 0x19);
  fVar18 = 0.5 / (float)*(int *)(lVar1 + 0x38);
  fVar19 = 0.5 / (float)*(int *)(lVar1 + 0x40);
  fStack_154 = 0.5 / (float)*(int *)(lVar1 + 0x3c);
  local_158 = -fVar18;
  fVar17 = -fStack_154;
  fVar16 = -fVar19;
  fVar18 = fVar18 + 1.0;
  fStack_154 = fStack_154 + 1.0;
  fVar19 = fVar19 + 1.0;
  local_138 = 0x3f0000003f800000;
  uStack_130 = 0x3f80000000000000;
  local_120 = local_158 * fVar4 + fVar17 * fVar13 + fVar16 * fVar10 + fVar7 * 1.0;
  local_128 = CONCAT44(local_158 * fVar3 + fVar17 * fVar12 + fVar16 * fVar9 + fVar6 * 1.0,
                       local_158 * fVar2 + fVar17 * fVar11 + fVar16 * fVar8 + fVar5 * 1.0);
  local_114 = fVar18 * fVar4 + fVar17 * fVar13 + fVar16 * fVar10 + fVar7 * 1.0;
  local_11c = CONCAT44(fVar18 * fVar3 + fVar17 * fVar12 + fVar16 * fVar9 + fVar6 * 1.0,
                       fVar18 * fVar2 + fVar17 * fVar11 + fVar16 * fVar8 + fVar5 * 1.0);
  local_108 = fVar18 * fVar4 + fStack_154 * fVar13 + fVar16 * fVar10 + fVar7 * 1.0;
  local_110 = CONCAT44(fVar18 * fVar3 + fStack_154 * fVar12 + fVar16 * fVar9 + fVar6 * 1.0,
                       fVar18 * fVar2 + fStack_154 * fVar11 + fVar16 * fVar8 + fVar5 * 1.0);
  local_fc = local_158 * fVar4 + fStack_154 * fVar13 + fVar16 * fVar10 + fVar7 * 1.0;
  local_104 = CONCAT44(local_158 * fVar3 + fStack_154 * fVar12 + fVar16 * fVar9 + fVar6 * 1.0,
                       local_158 * fVar2 + fStack_154 * fVar11 + fVar16 * fVar8 + fVar5 * 1.0);
  local_f0 = local_158 * fVar4 + fVar17 * fVar13 + fVar19 * fVar10 + fVar7 * 1.0;
  local_f8 = CONCAT44(local_158 * fVar3 + fVar17 * fVar12 + fVar19 * fVar9 + fVar6 * 1.0,
                      local_158 * fVar2 + fVar17 * fVar11 + fVar19 * fVar8 + fVar5 * 1.0);
  local_e4 = fVar18 * fVar4 + fVar17 * fVar13 + fVar19 * fVar10 + fVar7 * 1.0;
  local_ec = CONCAT44(fVar18 * fVar3 + fVar17 * fVar12 + fVar19 * fVar9 + fVar6 * 1.0,
                      fVar18 * fVar2 + fVar17 * fVar11 + fVar19 * fVar8 + fVar5 * 1.0);
  puVar14 = &local_128;
  uVar15 = 0;
  local_148 = 0;
  local_140 = 0;
  local_d8 = fVar18 * fVar4 + fStack_154 * fVar13 + fVar19 * fVar10 + fVar7 * 1.0;
  local_e0 = CONCAT44(fVar18 * fVar3 + fStack_154 * fVar12 + fVar19 * fVar9 + fVar6 * 1.0,
                      fVar18 * fVar2 + fStack_154 * fVar11 + fVar19 * fVar8 + fVar5 * 1.0);
  uStack_14c = 0x3f800000;
  fStack_150 = local_158 * fVar4 + fStack_154 * fVar13 + fVar19 * fVar10 + fVar7 * 1.0;
  local_d4 = CONCAT44(local_158 * fVar3 + fStack_154 * fVar12 + fVar19 * fVar9 + fVar6 * 1.0,
                      local_158 * fVar2 + fStack_154 * fVar11 + fVar19 * fVar8 + fVar5 * 1.0);
  local_cc = fStack_150;
  do {
    local_160 = 0;
    local_168 = 0;
    uVar15 = uVar15 + 1;
    local_170 = 0;
    local_178 = 0;
    (**(code **)(*param_1 + 0x38))
              (param_1,puVar14,(longlong)&local_128 + (ulonglong)(uVar15 & 3) * 0xc,&local_138);
    local_160 = 0;
    local_168 = 0;
    local_170 = 0;
    local_178 = 0;
    (**(code **)(*param_1 + 0x38))
              (param_1,puVar14 + 6,(longlong)&local_128 + (ulonglong)((uVar15 & 3) + 4) * 0xc,
               &local_138);
    local_160 = 0;
    local_168 = 0;
    local_170 = 0;
    local_178 = 0;
    (**(code **)(*param_1 + 0x38))(param_1,puVar14,puVar14 + 6,&local_138);
    puVar14 = (undefined8 *)((longlong)puVar14 + 0xc);
  } while ((int)uVar15 < 4);
  return;
}



// FUNCTION 1428a8c10 FUN_1428a8c10 body=453 status=ok
// SIG undefined FUN_1428a8c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428a8c10(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  wint_t wVar2;
  wint_t wVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined ***local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined **local_a8;
  undefined2 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [64];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_1417a8a60(0x18);
  lVar5 = 0;
  local_a8 = &PTR__scalar_deleting_destructor__144d1a9a0;
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  FExportObjectInnerContext::FExportObjectInnerContext(local_88);
  plVar4 = (longlong *)FUN_1428a9b10(param_2,&DAT_1451e0bb8);
  if (plVar4 != (longlong *)0x0) {
    *(uint *)(plVar4 + 0xc) = *(uint *)(plVar4 + 0xc) & 0xfffffffd;
    uVar1 = *(undefined4 *)((longlong)plVar4 + 0x5c);
    *(undefined4 *)((longlong)plVar4 + 0x5c) = 0;
    plVar4[6] = 0;
    for (; (wVar2 = *(wint_t *)((longlong)&DAT_1451e0bb8 + lVar5), wVar2 != 0 ||
           (*(short *)((longlong)&DAT_1451e0690 + lVar5) != 0)); lVar5 = lVar5 + 2) {
      if (wVar2 != *(wint_t *)((longlong)&DAT_1451e0690 + lVar5)) {
        wVar2 = towlower(wVar2);
        wVar3 = towlower(*(wint_t *)((longlong)&DAT_1451e0690 + lVar5));
        if (wVar2 != wVar3) break;
      }
    }
    local_b8 = 0x200a00;
    local_c0 = DAT_1468b6160;
    local_c8 = &local_a8;
    (**(code **)(*plVar4 + 0x280))(plVar4,local_88,param_2,&DAT_1451e0bb8);
    *(undefined4 *)((longlong)plVar4 + 0x5c) = uVar1;
  }
  lVar5 = local_98;
  local_98 = 0;
  local_90 = 0;
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_88);
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  return;
}



// FUNCTION 1428a8de0 Empty body=114 status=ok
// SIG undefined Empty(void)

void TArray<FAutoCompleteCommand,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 5;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 1428a8e70 FUN_1428a8e70 body=733 status=ok
// SIG undefined FUN_1428a8e70(void)

void FUN_1428a8e70(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  
  cVar5 = (char)param_1[6];
  if (cVar5 == '\x01') {
    if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar5 != '\0')) {
      if ((int)param_1[1] == 0) {
        param_1 = (longlong *)0x0;
      }
      else {
        param_1 = (longlong *)*param_1;
      }
      (**(code **)(*param_1 + 0x38))(param_1);
    }
  }
  else if (cVar5 == '\x02') {
    if ((((int)param_1[3] != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(*(longlong *)param_1[2] + 0x18))(), cVar5 != '\0')) {
      plVar4 = (longlong *)param_2[2];
      local_38 = *param_2;
      local_30 = param_2[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if ((int)param_1[3] == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)param_1[2];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_28 = plVar4;
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_38);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar4 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
  }
  else if (((cVar5 == '\x03') && (param_1[5] != 0)) &&
          ((lVar6 = FWeakObjectPtr::Get(param_1 + 4), lVar6 != 0 &&
           (lVar6 = UObject::FindFunction(lVar6,param_1[5]), lVar6 != 0)))) {
    plVar4 = (longlong *)param_2[2];
    local_68 = *param_2;
    local_60 = param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_50 = 0;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    local_58 = plVar4;
    FKey::operator=(&local_50,&local_68);
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 4);
    uVar8 = FUN_14178ac60(plVar7,param_1[5]);
    (**(code **)(*plVar7 + 0x208))(plVar7,uVar8,&local_50);
    plVar7 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    plVar7 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar4 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 1428a9150 FUN_1428a9150 body=238 status=ok
// SIG undefined FUN_1428a9150(void)

void FUN_1428a9150(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14289dc50(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_1451e4e48;
  if (param_1[8] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[8] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1428a9240 FUN_1428a9240 body=238 status=ok
// SIG undefined FUN_1428a9240(void)

void FUN_1428a9240(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14289e030(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_1451e4e58;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1428a9330 FUN_1428a9330 body=238 status=ok
// SIG undefined FUN_1428a9330(void)

void FUN_1428a9330(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_14289dde0(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_1451e4e68;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1428a9420 FUN_1428a9420 body=276 status=ok
// SIG undefined FUN_1428a9420(void)

void FUN_1428a9420(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    FUN_14289d270(lVar3);
    FMemory::operator_delete(lVar3,0x110);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_1451e4d60;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1428a9540 FUN_1428a9540 body=1215 status=ok
// SIG undefined FUN_1428a9540(void)

void FUN_1428a9540(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  bool bVar13;
  longlong *local_90;
  ulonglong local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_1[0x1b] == DAT_146b18a00) {
    (**(code **)(*param_1 + 0x2f0))();
  }
  if (param_2 == DAT_146b18a00) {
    lVar10 = 0;
    plVar6 = (longlong *)FUN_1428ab710();
    (**(code **)(*plVar6 + 0x68))(plVar6,0,0x80,0);
    (**(code **)(*param_1 + 0x2e8))(param_1,param_1[0x1b]);
    plVar6 = (longlong *)(**(code **)(*DAT_1469f4590 + 0x78))(DAT_1469f4590,local_58);
    param_1[0x24] = *plVar6;
    plVar6 = (longlong *)plVar6[1];
    plVar11 = (longlong *)param_1[0x25];
    if (plVar6 != plVar11) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar11 = (longlong *)param_1[0x25];
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
      param_1[0x25] = (longlong)plVar6;
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    FUN_1418be2c0(DAT_1469f4590);
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      lVar10 = param_1[4];
    }
    puVar7 = (undefined8 *)FUN_14247fef0(lVar10,local_48);
    local_78 = *puVar7;
    local_70 = (longlong *)puVar7[1];
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    FSlateApplication::SetKeyboardFocus(DAT_1469f4590,&local_78,2);
    plVar6 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_70 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  else {
    if (param_2 == DAT_146b18a08) {
      plVar6 = (longlong *)FUN_1428ab710();
      (**(code **)(*plVar6 + 0x68))(plVar6,0x80,0x80,0);
      (**(code **)(*param_1 + 0x310))(param_1,param_1[0x1b]);
      FUN_1418be2c0(DAT_1469f4590);
      goto LAB_1428a99d4;
    }
    uVar12 = 0;
    if (param_2 != 0) goto LAB_1428a99d4;
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfffffffd;
    param_1[0x1b] = 0;
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    if ((param_1[0x24] == 0) || (param_1[0x25] == 0)) {
LAB_1428a9838:
      puVar9 = (ulonglong *)(**(code **)(*DAT_1469f4590 + 0x78))(DAT_1469f4590,&local_38);
      if (&local_88 != puVar9) {
        local_88 = *puVar9;
        *puVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_80,puVar9 + 1);
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_30 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            lVar10 = *local_30;
            goto LAB_1428a9898;
          }
        }
      }
    }
    else {
      piVar1 = (int *)(param_1[0x25] + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (iVar5 < 1) goto LAB_1428a9838;
      local_90 = (longlong *)param_1[0x25];
      local_88 = uVar12;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        uVar2 = *(uint *)(local_90 + 1);
        bVar13 = uVar2 == 0;
        if (bVar13) {
          *(uint *)(local_90 + 1) = 0;
          uVar8 = uVar12;
        }
        else {
          uVar8 = (ulonglong)uVar2;
        }
        UNLOCK();
        while (!bVar13) {
          iVar5 = (int)uVar8;
          LOCK();
          bVar13 = iVar5 == (int)local_90[1];
          if (bVar13) {
            *(int *)(local_90 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar13) {
            local_88 = param_1[0x24];
            goto LAB_1428a97dc;
          }
          uVar8 = 0;
          LOCK();
          uVar2 = *(uint *)(local_90 + 1);
          bVar13 = uVar2 == 0;
          if (bVar13) {
            *(uint *)(local_90 + 1) = 0;
          }
          else {
            uVar8 = (ulonglong)uVar2;
          }
          UNLOCK();
        }
        local_88 = 0;
        local_90 = (longlong *)0x0;
      }
LAB_1428a97dc:
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_80,&local_90);
      plVar6 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_90 + 1;
        lVar10 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar10 != 1) goto LAB_1428a98a0;
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 != 1) goto LAB_1428a98a0;
        lVar10 = *local_90;
        local_30 = local_90;
LAB_1428a9898:
        (**(code **)(lVar10 + 8))(local_30,1);
      }
    }
LAB_1428a98a0:
    if (local_88 != 0) {
      FUN_141891070(DAT_1469f4590,2);
      cVar4 = FSlateApplication::SetKeyboardFocus(DAT_1469f4590,&local_88,2);
      if (cVar4 == '\0') {
        if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
          uVar12 = param_1[4];
        }
        puVar7 = (undefined8 *)FUN_14247fef0(uVar12,local_28);
        local_68 = *puVar7;
        local_60 = (longlong *)puVar7[1];
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        FSlateApplication::SetKeyboardFocus(DAT_1469f4590,&local_68,2);
        plVar6 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_60 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_20 + 1;
          lVar10 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar1 = (int *)((longlong)local_20 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_20 + 8))(local_20,1);
            }
          }
        }
      }
    }
    plVar6 = (longlong *)FUN_1428ab710();
    (**(code **)(*plVar6 + 0x68))(plVar6,0,0x80,0);
    local_40 = plStack_80;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar10 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
LAB_1428a99d4:
  param_1[0x1b] = param_2;
  return;
}



// FUNCTION 1428a9a00 Find body=149 status=ok
// SIG undefined Find(void)

longlong TArray<FInputActionKeyMapping,FDefaultAllocator>::Find(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 != plVar3 + (longlong)(int)param_1[1] * 5) {
    plVar4 = plVar3;
    do {
      if ((*plVar4 == *param_2) && (plVar4[2] == param_2[2])) {
        bVar1 = *(byte *)(param_2 + 1);
        bVar2 = *(byte *)(plVar4 + 1);
        if ((((bVar1 ^ bVar2) & 1) == 0) &&
           (((((bVar1 ^ bVar2) & 2) == 0 && (((bVar1 ^ bVar2) & 4) == 0)) &&
            (((bVar1 ^ bVar2) & 8) == 0)))) {
          return ((longlong)plVar4 - (longlong)plVar3) / 0x28;
        }
      }
      plVar4 = plVar4 + 5;
    } while (plVar4 != plVar3 + (longlong)(int)param_1[1] * 5);
  }
  return 0xffffffff;
}



// FUNCTION 1428a9aa0 Find body=105 status=ok
// SIG undefined Find(void)

longlong TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_>::Find
                   (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != plVar1 + (longlong)(int)param_1[1] * 5) {
    plVar2 = plVar1;
    do {
      if (((*plVar2 == *param_2) && (plVar2[2] == param_2[2])) &&
         (*(float *)(param_2 + 1) == *(float *)(plVar2 + 1))) {
        return ((longlong)plVar2 - (longlong)plVar1) / 0x28;
      }
      plVar2 = plVar2 + 5;
    } while (plVar2 != plVar1 + (longlong)(int)param_1[1] * 5);
  }
  return 0xffffffff;
}



// FUNCTION 1428a9b10 FUN_1428a9b10 body=1103 status=ok
// SIG undefined FUN_1428a9b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1428a9b10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  wint_t *pwVar16;
  ulonglong uVar17;
  undefined2 *puVar18;
  uint *puVar19;
  ulonglong uVar20;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined4 local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  uint uStack_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  undefined *local_c8;
  undefined *local_c0;
  longlong *plStack_b8;
  undefined *puStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_130 = param_2;
  local_f8 = param_1;
  lVar9 = UObjectBaseUtility::GetOutermost();
  if ((*(uint *)(lVar9 + 0x50) >> 0x16 & 1) == 0) {
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_128 = (longlong *)0x100000000;
    plStack_120 = (longlong *)&DAT_146535500;
    iStack_114 = 0;
    iStack_110 = 0;
    iVar8 = (int)DAT_146535518;
    if (iVar8 != 0) {
      puVar19 = DAT_146535510;
      if (DAT_146535510 == (uint *)0x0) {
        puVar19 = (uint *)&DAT_146535500;
      }
      uVar6 = *puVar19;
      iStack_110 = 0;
      iVar7 = 0;
      while (uVar6 == 0) {
        iStack_110 = iStack_110 + 0x20;
        uVar17 = (ulonglong)local_128 >> 0x20;
        local_128 = (longlong *)CONCAT44((int)uVar17,iVar7 + 1);
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1428a9c44;
        uVar6 = puVar19[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar7 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      local_128 = (longlong *)CONCAT44(uVar6,SUB84(local_128,0));
      if (uVar6 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_114 = (iStack_110 - iVar7) + 0x1f;
      if (iVar8 < iStack_114) {
LAB_1428a9c44:
        iStack_114 = iVar8;
      }
    }
    local_118 = 0xffffffff;
    local_c0 = &DAT_1465354f0;
    local_c8 = &DAT_1465354f0;
    plStack_b8 = local_128;
    puStack_b0 = &DAT_146535500;
    uStack_a8 = 0xffffffff;
    iStack_a4 = iStack_114;
    iStack_a0 = iStack_110;
    uStack_9c = uStack_10c;
    uStack_d8 = 0xffffffff;
    iStack_d4 = iStack_114;
    local_f0 = (longlong *)&DAT_1465354f0;
    uStack_e8 = local_128;
    local_d0 = iStack_110;
    uStack_cc = uStack_10c;
    local_e0 = &DAT_146535500;
    if (iStack_114 < iVar8) {
      do {
        uVar17 = 0;
        plVar10 = (longlong *)FWeakObjectPtr::Get((longlong)iStack_d4 * 0x10 + *local_f0);
        if (((plVar10 != (longlong *)0x0) &&
            (cVar3 = (**(code **)(*plVar10 + 0x278))(plVar10,param_1), cVar3 != '\0')) &&
           (uVar20 = uVar17, 0 < (int)plVar10[8])) {
LAB_1428a9d10:
          if (*(int *)(uVar20 + 8 + plVar10[7]) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = *(undefined2 **)(uVar20 + plVar10[7]);
          }
          iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar18,param_2);
          if (*(int *)(uVar20 + 8 + plVar10[7]) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = *(undefined2 **)(uVar20 + plVar10[7]);
          }
          pwVar16 = &DAT_1451e04bc;
          do {
            wVar4 = *(wint_t *)((longlong)(puVar18 + -0xa28f025e) + (longlong)pwVar16);
            if ((wVar4 == 0) && (*pwVar16 == 0)) {
              iVar7 = 0;
              goto LAB_1428a9da0;
            }
            if (wVar4 != *pwVar16) {
              wVar4 = towlower(wVar4);
              wVar5 = towlower(*pwVar16);
              if (wVar4 != wVar5) goto LAB_1428a9d96;
            }
            pwVar16 = pwVar16 + 1;
          } while( true );
        }
LAB_1428a9e27:
        uStack_d8 = uStack_d8 & ~uStack_e8._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e8);
      } while (iStack_d4 < *(int *)(local_e0 + 0x18));
    }
    uVar12 = GetTransientPackage();
    lVar1 = local_98;
    puVar14 = (undefined8 *)0x0;
    for (lVar9 = *(longlong *)(param_1 + 0x10); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(&local_98,&local_138,lVar9);
      puVar15 = puVar14;
      if ((int)local_138 != -1) {
        puVar15 = (undefined8 *)(lVar1 + (longlong)(int)local_138 * 0x18);
      }
      puVar13 = puVar15 + 1;
      if (puVar15 == (undefined8 *)0x0) {
        puVar13 = puVar14;
      }
      if (puVar13 != (undefined8 *)0x0) {
        uVar2 = *puVar13;
        local_130 = 0;
        local_138 = 0;
        FUN_1417846f0(uVar12,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_148 = 0;
        local_150 = 0;
        local_158 = 0;
        local_160 = 0;
        local_168 = 0;
        puVar14 = (undefined8 *)FUN_1417985e0(uVar2,uVar12,0,0);
        break;
      }
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
  }
  else {
    puVar14 = (undefined8 *)0x0;
  }
  return puVar14;
LAB_1428a9d96:
  iVar7 = (uint)wVar4 - (uint)wVar5;
LAB_1428a9da0:
  if ((iVar8 == 0) || (iVar7 == 0)) {
    local_100 = plVar10[2];
    lVar9 = 0;
    if (plVar10[5] != 0) {
      lVar11 = UObject::GetPrivateStaticClass();
      for (lVar1 = plVar10[5]; (lVar9 = 0, lVar1 != 0 && (lVar9 = plVar10[5], lVar1 != lVar11));
          lVar1 = *(longlong *)(lVar1 + 0x30)) {
      }
    }
    local_128 = &local_108;
    plStack_120 = &local_100;
    local_108 = lVar9;
    TSet<TTuple<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,UFlareSimulatedSpacecraft_*_const_&>_>
              (&local_98,&local_138,&local_128,0);
  }
  uVar6 = (int)uVar17 + 1;
  uVar17 = (ulonglong)uVar6;
  param_2 = local_130;
  param_1 = local_f8;
  uVar20 = uVar20 + 0x10;
  if ((int)plVar10[8] <= (int)uVar6) goto LAB_1428a9e27;
  goto LAB_1428a9d10;
}



// FUNCTION 1428a9f60 FindId body=127 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FKey,FKeyState>,TDefaultMapHashableKeyFuncs<FKey,FKeyState,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_3;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)((longlong)iVar2 * 0xf0 + *param_1) == lVar1) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0xf0 + 0xe8 + *param_1);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1428a9fe0 FUN_1428a9fe0 body=402 status=ok
// SIG undefined FUN_1428a9fe0(void)

void FUN_1428a9fe0(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x260);
  iVar3 = *(int *)(param_1 + 0x288);
  puStack_28 = (uint *)(param_1 + 0x270);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar3 != 0) {
    puVar8 = *(uint **)(param_1 + 0x280);
    if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar4 = *puVar8;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar5) goto LAB_1428aa09f;
      uVar4 = puVar8[lVar7 + 1];
    }
    uStack_74 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
    if (iVar3 < local_68._4_4_) {
LAB_1428aa09f:
      local_68._4_4_ = iVar3;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar5 = local_68._4_4_ < *(int *)(param_1 + 0x288);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar5) {
    do {
      lVar7 = (longlong)iStack_5c * 0xf0 + *plVar1;
      bVar2 = *(byte *)(lVar7 + 0x34);
      *(byte *)(lVar7 + 0x34) = (bVar2 & 1) * '\x02' | bVar2 & 0xf9;
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FName,FDiskCachedAssetData>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1428aa180 FUN_1428aa180 body=95 status=ok
// SIG undefined FUN_1428aa180(void)

void FUN_1428aa180(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 == 0) {
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    else {
      plVar3 = (longlong *)0x0;
    }
    uVar1 = (**(code **)(*plVar3 + 0x148))();
    lVar2 = UEngine::GetFirstGamePlayer(DAT_146b17150,uVar1);
    if (lVar2 == 0) {
      return;
    }
  }
  if ((*(longlong *)(lVar2 + 0x30) != 0) &&
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x5b8) != 0)) {
    FUN_1428aa1e0();
    return;
  }
  return;
}



// FUNCTION 1428aa1e0 FUN_1428aa1e0 body=1300 status=ok
// SIG undefined FUN_1428aa1e0(void)

void FUN_1428aa1e0(longlong *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  undefined8 *local_158;
  uint local_150;
  int local_14c;
  undefined8 local_148;
  uint *puStack_140;
  undefined8 uStack_138;
  uint uStack_130;
  int iStack_12c;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  uint uStack_100;
  int iStack_fc;
  undefined8 uStack_f8;
  longlong *local_e8;
  undefined8 uStack_e0;
  uint *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  longlong *local_b8;
  undefined2 local_b0;
  longlong *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  
  if ((char)param_1[0x78] == '\0') {
    uVar13 = 0;
    uVar18 = uVar13;
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      uVar18 = param_1[4];
    }
    lVar11 = *(longlong *)(uVar18 + 0x508);
    if (lVar11 != 0) {
      lVar10 = ULocalPlayer::GetPrivateStaticClass();
      lVar11 = *(longlong *)(lVar11 + 0x10);
      if ((*(int *)(lVar11 + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar11 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        local_148 = param_1 + 0x4c;
        local_158 = (undefined8 *)0x0;
        iVar12 = (int)param_1[0x51];
        uStack_110 = (uint *)(param_1 + 0x4e);
        local_150 = 0;
        local_14c = 0;
        local_118 = (longlong *)0x100000000;
        local_108._4_4_ = 0;
        uStack_100 = 0;
        if (iVar12 != 0) {
          puVar17 = (uint *)param_1[0x50];
          if ((uint *)param_1[0x50] == (uint *)0x0) {
            puVar17 = uStack_110;
          }
          uVar8 = *puVar17;
          uVar18 = uVar13;
          uVar16 = uVar13;
          while (uVar8 == 0) {
            iVar9 = (int)uVar18;
            uStack_100 = (int)uVar16 + 0x20;
            uVar16 = (ulonglong)uStack_100;
            uVar18 = (ulonglong)(iVar9 + 1U);
            uVar6 = (ulonglong)local_118 >> 0x20;
            local_118 = (longlong *)CONCAT44((int)uVar6,iVar9 + 1U);
            if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9)
            goto LAB_1428aa345;
            uVar8 = puVar17[(longlong)iVar9 + 1];
          }
          uVar8 = -uVar8 & uVar8;
          iVar9 = 0x1f;
          if (uVar8 != 0) {
            for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
            }
          }
          local_118 = (longlong *)CONCAT44(uVar8,SUB84(local_118,0));
          if (uVar8 == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - iVar9;
          }
          local_108._4_4_ = (uStack_100 - iVar9) + 0x1f;
          if (iVar12 < local_108._4_4_) {
LAB_1428aa345:
            local_108._4_4_ = iVar12;
          }
        }
        local_108._0_4_ = 0xffffffff;
        uStack_d0 = CONCAT44(local_108._4_4_,0xffffffff);
        auVar4._8_4_ = uStack_100;
        auVar4._0_8_ = uStack_d0;
        auVar4._12_4_ = iStack_fc;
        iStack_12c = local_108._4_4_;
        local_120._0_4_ = SUB84(local_148,0);
        local_120._4_4_ = (undefined4)((ulonglong)local_148 >> 0x20);
        uStack_130 = 0xffffffff;
        puStack_140 = (uint *)local_118;
        local_b0 = 0;
        uStack_e0 = local_118;
        uStack_128 = auVar4._8_8_;
        local_c8._8_4_ = (undefined4)local_120;
        local_c8._0_8_ = uStack_128;
        local_c8._12_4_ = local_120._4_4_;
        uVar18 = uVar13;
        iVar12 = local_108._4_4_;
        local_e8 = local_148;
        local_d8 = uStack_110;
        local_b8 = local_148;
        uStack_138 = uStack_110;
        local_120 = local_148;
        if (local_108._4_4_ < (int)param_1[0x51]) {
          do {
            lVar10 = (longlong)iVar12 * 0xf0;
            lVar11 = *local_e8;
            if ((*(byte *)(lVar10 + 0x34 + lVar11) & 1) != 0) {
              lVar14 = (longlong)(int)uVar18;
              local_150 = (int)uVar18 + 1;
              if (local_14c < (int)local_150) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(&local_158,uVar18);
              }
              uVar18 = (ulonglong)local_150;
              local_158[lVar14 * 3] = *(undefined8 *)(lVar10 + lVar11);
              local_158[lVar14 * 3 + 1] = *(undefined8 *)(lVar10 + 8 + lVar11);
              lVar11 = *(longlong *)(lVar10 + 0x10 + lVar11);
              local_158[lVar14 * 3 + 2] = lVar11;
              if (lVar11 != 0) {
                LOCK();
                *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
                UNLOCK();
                uVar18 = (ulonglong)local_150;
              }
            }
            uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e0);
            iVar12 = uStack_d0._4_4_;
          } while (uStack_d0._4_4_ < (int)local_d8[6]);
          if (((char)local_b0 != '\0') && (local_b0._1_1_ != '\0')) {
            TSet<TTuple<FName,FDiskCachedAssetData>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData,0>,FDefaultSetAllocator>
            ::ConditionalRehash(local_b8,(int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34),1);
          }
          if (0 < (int)uVar18) {
            DAT_146b184b0 = 0;
            puVar15 = local_158;
            do {
              local_68 = *puVar15;
              local_60 = puVar15[1];
              local_58 = puVar15[2];
              if (local_58 != 0) {
                LOCK();
                *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
                UNLOCK();
              }
              lVar11 = *param_1;
              uVar7 = FKey::IsGamepadKey(puVar15);
              (**(code **)(lVar11 + 0x278))(param_1,&local_68,1,0,uVar7);
              puVar15 = puVar15 + 3;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
        }
        TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
        ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_158);
      }
    }
    lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
    local_118 = param_1 + 0x4c;
    iVar12 = (int)param_1[0x51];
    puStack_140 = (uint *)(param_1 + 0x4e);
    local_148._0_4_ = 0;
    local_148._4_4_ = 1;
    uVar2 = *(undefined4 *)(lVar11 + 0x798);
    uStack_138._4_4_ = 0;
    uStack_130 = 0;
    if (iVar12 != 0) {
      puVar17 = (uint *)param_1[0x50];
      if ((uint *)param_1[0x50] == (uint *)0x0) {
        puVar17 = puStack_140;
      }
      uVar8 = *puVar17;
      uVar18 = uVar13;
      while (uVar8 == 0) {
        iVar9 = (int)uVar18;
        uStack_130 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_130;
        local_148._0_4_ = iVar9 + 1;
        uVar18 = (ulonglong)(uint)local_148;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1428aa5ce;
        uVar8 = puVar17[(longlong)iVar9 + 1];
      }
      local_148._4_4_ = -uVar8 & uVar8;
      iVar9 = 0x1f;
      if (local_148._4_4_ != 0) {
        for (; local_148._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (local_148._4_4_ == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_138._4_4_ = (uStack_130 - iVar9) + 0x1f;
      if (iVar12 < uStack_138._4_4_) {
LAB_1428aa5ce:
        uStack_138._4_4_ = iVar12;
      }
    }
    uStack_138._0_4_ = 0xffffffff;
    uStack_90 = CONCAT44(uStack_138._4_4_,0xffffffff);
    auVar3._8_4_ = uStack_130;
    auVar3._0_8_ = uStack_90;
    auVar3._12_4_ = iStack_12c;
    iStack_fc = uStack_138._4_4_;
    local_120._0_4_ = SUB84(local_118,0);
    local_120._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
    uStack_110._0_4_ = (uint)local_148;
    uStack_110._4_4_ = local_148._4_4_;
    local_70 = 0;
    uStack_100 = 0xffffffff;
    uStack_f8 = auVar3._8_8_;
    uStack_a0 = (uint)local_148;
    uStack_9c = local_148._4_4_;
    local_88._8_4_ = (undefined4)local_120;
    local_88._0_8_ = uStack_f8;
    local_88._12_4_ = local_120._4_4_;
    if (uStack_138._4_4_ < (int)param_1[0x51]) {
      local_158 = (undefined8 *)0x0;
      local_150 = 0;
      iVar12 = uStack_138._4_4_;
      local_a8 = local_118;
      local_98 = puStack_140;
      local_78 = local_118;
      local_120 = local_118;
      local_108 = puStack_140;
      do {
        lVar10 = (longlong)iVar12 * 0xf0;
        lVar11 = *local_a8;
        uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_9c);
        pbVar1 = (byte *)(lVar10 + 0x34 + lVar11);
        *pbVar1 = *pbVar1 & 0xfc;
        *(undefined8 *)(lVar10 + 0x18 + lVar11) = 0;
        *(undefined4 *)(lVar10 + 0x20 + lVar11) = 0;
        *(undefined4 *)(lVar10 + 0x30 + lVar11) = uVar2;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
        iVar12 = uStack_90._4_4_;
      } while (uStack_90._4_4_ < (int)local_98[6]);
      if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
        TSet<TTuple<FName,FDiskCachedAssetData>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 1428aa700 FUN_1428aa700 body=905 status=ok
// SIG undefined FUN_1428aa700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428aa700(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  char cVar15;
  byte bVar16;
  DWORD DVar17;
  undefined8 uVar18;
  longlong *plVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined1 local_58 [32];
  
  if ((((*(byte *)(param_1 + 0x78) & 1) != 0) || (param_2 != '\0')) &&
     (*(int *)(param_1 + 0x148) != 0)) {
    if (DAT_146b184b8 != 0) {
      FEngineFontServices::UpdateCache();
    }
    plVar3 = (longlong *)(param_1 + 0x140);
    AlgoImpl::
    IntroSortInternal<FCanvas::FCanvasSortElement,FIdentityFunctor,TDereferenceWrapper<FCanvas::FCanvasSortElement,_FCanvas::Flush_GameThread_::_2_::FCompareFCanvasSortElement>_>
              (*plVar3,(longlong)*(int *)(param_1 + 0x148),local_res8[0],local_res8);
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
              (*(longlong **)(param_1 + 0x58),local_res20);
    uVar18 = _DAT_1468b5ca0;
    if ((*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c)) *
        (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38)) < 1) {
      *(int *)(param_1 + 0x38) = (int)_DAT_1468b5ca0;
      local_68 = uVar18;
      *(int *)(param_1 + 0x3c) = (int)((ulonglong)uVar18 >> 0x20);
      *(int *)(param_1 + 0x40) = local_res20._0_4_;
      *(int *)(param_1 + 0x44) = local_res20._4_4_;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    uVar18 = *(undefined8 *)(param_1 + 0x58);
    puVar1 = (undefined8 *)(param_1 + 0x48);
    uVar4 = *(undefined4 *)puVar1;
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    uVar12 = *puVar1;
    uVar10 = *puVar1;
    puVar1 = (undefined8 *)(param_1 + 0x50);
    uVar6 = *(undefined4 *)puVar1;
    uVar7 = *(undefined4 *)(param_1 + 0x54);
    uVar13 = *puVar1;
    uVar11 = *puVar1;
    uStack_d0 = CONCAT31(uStack_d0._1_3_,*(undefined1 *)(param_1 + 0x8c));
    FUN_14164b510();
    local_d8 = (undefined4)uVar18;
    uStack_d4 = (undefined4)((ulonglong)uVar18 >> 0x20);
    local_a8 = local_d8;
    uStack_a4 = uStack_d4;
    uStack_a0 = uStack_d0;
    local_c8 = uVar8;
    uStack_c0 = uVar9;
    local_b8 = uVar4;
    uStack_b4 = uVar5;
    uStack_b0 = uVar6;
    uStack_ac = uVar7;
    if ((DAT_146ac3ac6 == '\0') || (cVar15 = IsInRenderingThread(), cVar15 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar15 = FUN_1415ad720(&DAT_1468e2448), cVar15 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar17 = GetCurrentThreadId(), DVar17 == DAT_1468c21c0)))) {
        local_78 = local_d8;
        uStack_74 = uStack_d4;
        uStack_70 = uStack_d0;
        local_98 = uVar8;
        uStack_90 = uVar9;
        local_88 = uVar10;
        uStack_80 = uVar11;
        uVar18 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_14289e030(&local_98,uVar18);
      }
      else {
        plVar19 = (longlong *)FUN_1428a2270(local_58,0,0xff);
        lVar22 = *plVar19;
        *(undefined8 *)(lVar22 + 0x10) = uVar8;
        *(undefined8 *)(lVar22 + 0x18) = uVar9;
        *(undefined8 *)(lVar22 + 0x20) = uVar12;
        *(undefined8 *)(lVar22 + 0x28) = uVar13;
        *(undefined4 *)(lVar22 + 0x30) = local_d8;
        *(undefined4 *)(lVar22 + 0x34) = uStack_d4;
        *(undefined4 *)(lVar22 + 0x38) = uStack_d0;
        *(undefined4 *)(lVar22 + 0x3c) = uStack_cc;
        lVar22 = *plVar19;
        lVar14 = plVar19[2];
        lVar23 = plVar19[1];
        lVar21 = *(longlong *)(lVar22 + 0x48);
        piVar2 = (int *)(lVar21 + 0x48);
        if (lVar21 != 0) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        FUN_140489ef0(lVar22,lVar23,(int)lVar14,1);
        if (lVar21 != 0) {
          LOCK();
          iVar24 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar24 == 1) {
            FGraphEvent::Recycle(lVar21);
          }
        }
      }
    }
    else {
      uVar18 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_14289e030(&local_c8,uVar18);
    }
    iVar24 = 0;
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar22 = 0;
      do {
        iVar20 = 0;
        lVar23 = *plVar3 + lVar22;
        if (0 < *(int *)(lVar23 + 0x10)) {
          lVar21 = 0;
          do {
            plVar19 = *(longlong **)(lVar21 + *(longlong *)(lVar23 + 8));
            if (plVar19 != (longlong *)0x0) {
              bVar16 = (**(code **)(*plVar19 + 0x10))(plVar19,param_1);
              *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | bVar16;
              if ((*(byte *)(param_1 + 0x78) & 2) != 0) {
                (**(code **)*plVar19)(plVar19,1);
              }
            }
            iVar20 = iVar20 + 1;
            lVar21 = lVar21 + 8;
          } while (iVar20 < *(int *)(lVar23 + 0x10));
        }
        if ((*(byte *)(param_1 + 0x78) & 2) != 0) {
          *(undefined4 *)(lVar23 + 0x10) = 0;
          if (*(int *)(lVar23 + 0x14) != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(lVar23 + 8,0);
          }
        }
        iVar24 = iVar24 + 1;
        lVar22 = lVar22 + 0x18;
      } while (iVar24 < *(int *)(param_1 + 0x148));
    }
    if ((*(byte *)(param_1 + 0x78) & 2) != 0) {
      iVar24 = *(int *)(param_1 + 0x148);
      if (iVar24 != 0) {
        plVar19 = (longlong *)(*plVar3 + 8);
        do {
          if (*plVar19 != 0) {
            FMemory::Free();
          }
          plVar19 = plVar19 + 3;
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
      }
      *(undefined4 *)(param_1 + 0x148) = 0;
      if (*(int *)(param_1 + 0x14c) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar3,0);
      }
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
                (param_1 + 0x150,0);
      *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 1428aaa90 FUN_1428aaa90 body=1366 status=ok
// SIG undefined FUN_1428aaa90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428aaa90(longlong param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong *puVar18;
  ulonglong local_res8;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  
  if ((((*(byte *)(param_1 + 0x78) & 1) != 0) || (param_3 != '\0')) &&
     (*(int *)(param_1 + 0x148) != 0)) {
    FEngineFontServices::UpdateCache(DAT_146b184b8);
    AlgoImpl::
    IntroSortInternal<FCanvas::FCanvasSortElement,FIdentityFunctor,TDereferenceWrapper<FCanvas::FCanvasSortElement,_FCanvas::Flush_GameThread_::_2_::FCompareFCanvasSortElement>_>
              (*(undefined8 *)(param_1 + 0x140),(longlong)*(int *)(param_1 + 0x148),
               local_res8 & 0xff,&local_res8);
    puVar7 = (ulonglong *)(**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
    puVar18 = (ulonglong *)(param_2 + 0x30);
    puVar13 = (ulonglong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_res8 = *puVar7;
    puVar11 = puVar13 + 1;
    if (*(ulonglong **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(puVar18,0x10);
      puVar13 = (ulonglong *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar13 + 1;
    }
    *puVar18 = (ulonglong)puVar11;
    *puVar13 = local_res8;
    puVar9 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(puVar18,0x30);
      puVar9 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *puVar18 = (ulonglong)puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[3] = puVar13;
    *(undefined4 *)(puVar9 + 4) = 1;
    *(undefined1 *)((longlong)puVar9 + 0x24) = 0;
    local_res8 = 0;
    if (*(char *)(param_1 + 0x95) == '\0') {
      FUN_141a19150(param_2,*puVar7,0,0);
    }
    else {
      FUN_141ad74f0(param_2,*puVar7,0,5,0x22,0);
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
    local_78 = 0;
    local_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_4c = 0;
    local_44 = 0;
    local_70 = FUN_1409853f0();
    iVar12 = *(int *)(param_1 + 0x38);
    local_50 = 0;
    if ((*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c)) * (*(int *)(param_1 + 0x40) - iVar12)
        < 1) {
      puVar8 = (undefined8 *)
               (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                         (*(longlong **)(param_1 + 0x58),&local_res8);
      uVar5 = _DAT_1468b5ca0;
      uVar4 = *puVar8;
      *(int *)(param_1 + 0x38) = (int)_DAT_1468b5ca0;
      *(int *)(param_1 + 0x3c) = (int)((ulonglong)uVar5 >> 0x20);
      *(int *)(param_1 + 0x40) = (int)uVar4;
      *(int *)(param_1 + 0x44) = (int)((ulonglong)uVar4 >> 0x20);
      iVar12 = *(int *)(param_1 + 0x38);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    puVar9 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(puVar18,0x30);
      puVar9 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *puVar18 = (ulonglong)puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59420;
    *(int *)(puVar9 + 2) = iVar12;
    *(undefined4 *)((longlong)puVar9 + 0x14) = uVar3;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar2;
    *(undefined4 *)(puVar9 + 4) = uVar1;
    *(undefined4 *)((longlong)puVar9 + 0x24) = 0x3f800000;
    iVar12 = *(int *)(param_1 + 0x48);
    if (0 < (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c)) *
            (*(int *)(param_1 + 0x50) - iVar12)) {
      uVar1 = *(undefined4 *)(param_1 + 0x54);
      uVar2 = *(undefined4 *)(param_1 + 0x50);
      puVar9 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      puVar8 = puVar9 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(puVar18,0x30);
        puVar9 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar9 + 5;
      }
      *puVar18 = (ulonglong)puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar9;
      *(undefined8 **)(param_2 + 8) = puVar9 + 1;
      puVar9[1] = 0;
      *puVar9 = &PTR_LAB_143f59430;
      *(undefined1 *)(puVar9 + 2) = 1;
      *(int *)((longlong)puVar9 + 0x14) = iVar12;
      *(undefined4 *)(puVar9 + 3) = uVar3;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar2;
      *(undefined4 *)(puVar9 + 4) = uVar1;
    }
    iVar12 = 0;
    local_res8 = local_res8 & 0xffffffff00000000;
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar16 = 0;
      do {
        lVar10 = *(longlong *)(param_1 + 0x140);
        iVar15 = 0;
        if (0 < *(int *)(lVar16 + 0x10 + lVar10)) {
          lVar17 = 0;
          do {
            plVar14 = *(longlong **)(lVar17 + *(longlong *)(lVar16 + 8 + lVar10));
            if (plVar14 != (longlong *)0x0) {
              bVar6 = (**(code **)(*plVar14 + 8))(plVar14,param_2,&local_78,param_1);
              *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | bVar6;
              if ((*(byte *)(param_1 + 0x78) & 2) != 0) {
                (**(code **)*plVar14)(plVar14,1);
              }
            }
            iVar15 = iVar15 + 1;
            lVar17 = lVar17 + 8;
          } while (iVar15 < *(int *)(lVar16 + 0x10 + lVar10));
          iVar12 = (int)local_res8;
        }
        if ((*(byte *)(param_1 + 0x78) & 2) != 0) {
          lVar10 = lVar10 + 8 + lVar16;
          *(undefined4 *)(lVar10 + 8) = 0;
          if (*(int *)(lVar10 + 0xc) != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(lVar10,0);
          }
        }
        iVar12 = iVar12 + 1;
        lVar16 = lVar16 + 0x18;
        local_res8 = CONCAT44(local_res8._4_4_,iVar12);
      } while (iVar12 < *(int *)(param_1 + 0x148));
    }
    puVar18 = (ulonglong *)(param_2 + 0x30);
    if ((*(byte *)(param_1 + 0x78) & 2) != 0) {
      iVar12 = *(int *)(param_1 + 0x148);
      if (iVar12 != 0) {
        plVar14 = (longlong *)(*(longlong *)(param_1 + 0x140) + 8);
        do {
          if (*plVar14 != 0) {
            FMemory::Free();
          }
          plVar14 = plVar14 + 3;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      *(undefined4 *)(param_1 + 0x148) = 0;
      if (*(int *)(param_1 + 0x14c) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  ((longlong *)(param_1 + 0x140),0);
      }
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
                (param_1 + 0x150,0);
      *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
    }
    puVar13 = (ulonglong *)(*puVar18 + 7 & 0xfffffffffffffff8);
    local_res8 = *puVar7;
    puVar11 = puVar13 + 1;
    if (*(ulonglong **)(param_2 + 0x38) < puVar11) {
      FMemStackBase::AllocateNewChunk(puVar18,0x10);
      puVar13 = (ulonglong *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar13 + 1;
    }
    *puVar18 = (ulonglong)puVar11;
    *puVar13 = local_res8;
    puVar9 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(puVar18,0x30);
      puVar9 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *puVar18 = (ulonglong)puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar9 + 2) = 1;
    puVar9[3] = puVar13;
    *(undefined4 *)(puVar9 + 4) = 0;
    *(undefined1 *)((longlong)puVar9 + 0x24) = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_60);
  }
  return;
}



// FUNCTION 1428aaff0 FUN_1428aaff0 body=754 status=ok
// SIG undefined FUN_1428aaff0(void)

void FUN_1428aaff0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  uint *puVar11;
  longlong *plVar12;
  uint local_b8;
  uint uStack_b4;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  uint local_90;
  uint local_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  if (DAT_1468b616c == '\0') {
    plVar8 = (longlong *)(param_1 + 0x90);
    puVar1 = (uint *)(param_1 + 0xa0);
    uVar2 = *(uint *)(param_1 + 0xb8);
    plVar12 = (longlong *)0x0;
    local_98 = (longlong *)0x0;
    local_8c = 0;
    local_b8 = 0;
    uStack_b4 = 1;
    uStack_a4 = 0;
    uStack_a0 = 0;
    if (uVar2 != 0) {
      puVar11 = *(uint **)(param_1 + 0xb0);
      if (*(uint **)(param_1 + 0xb0) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar10 = *puVar11;
      plVar6 = plVar12;
      plVar9 = plVar12;
      while (uVar10 == 0) {
        iVar3 = (int)plVar9;
        uStack_a0 = (int)plVar6 + 0x20;
        plVar6 = (longlong *)(ulonglong)uStack_a0;
        local_b8 = iVar3 + 1;
        plVar9 = (longlong *)(ulonglong)local_b8;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto LAB_1428ab0ea;
        uVar10 = puVar11[(longlong)iVar3 + 1];
      }
      uStack_b4 = -uVar10 & uVar10;
      iVar3 = 0x1f;
      if (uStack_b4 != 0) {
        for (; uStack_b4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uStack_b4 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uStack_a4 = (uStack_a0 - iVar3) + 0x1f;
      if ((int)uVar2 < (int)uStack_a4) {
LAB_1428ab0ea:
        uStack_a4 = uVar2;
      }
    }
    uStack_74 = *(uint *)(param_1 + 0xb8);
    uStack_80 = CONCAT44(uStack_b4,local_b8);
    uVar2 = *(uint *)(param_1 + 0xb8);
    uStack_48 = 0xffffffff;
    uStack_44 = uStack_a4;
    uStack_68 = CONCAT44(uStack_9c,uStack_a0);
    uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
    uVar10 = uStack_74 & 0xffffffe0;
    uStack_58 = local_b8;
    uStack_54 = uStack_b4;
    plVar6 = plVar12;
    plVar9 = plVar12;
    local_88 = plVar8;
    local_50 = puVar1;
    local_40 = uStack_68;
    local_60 = plVar8;
    uStack_70 = uStack_48;
    uStack_6c = uStack_44;
    uVar7 = uStack_74;
    if (uStack_74 != uVar2) {
      puVar11 = *(uint **)(param_1 + 0xb0);
      if (*(uint **)(param_1 + 0xb0) == (uint *)0x0) {
        puVar11 = puVar1;
      }
      uVar7 = puVar11[(int)uStack_74 >> 5] & uStack_78;
      iVar3 = (int)uStack_74 >> 5;
      while (uVar7 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto LAB_1428ab1b1;
        uVar7 = puVar11[(longlong)iVar3 + 1];
        uStack_78 = 0xffffffff;
        iVar3 = iVar3 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar3 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uVar7 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uStack_74 = (uVar10 - iVar3) + 0x1f;
      uVar7 = uStack_74;
      if ((int)uVar2 < (int)uStack_74) {
LAB_1428ab1b1:
        uStack_74 = uVar2;
        uVar7 = uVar2;
      }
    }
    while( true ) {
      iVar3 = (int)plVar12;
      if (((uStack_44 == uVar7) && (local_50 == puVar1)) && (local_60 == plVar8)) break;
      lVar4 = FSoftObjectPath::TryLoad(*local_60 + ((longlong)(int)uStack_44 * 5 + 1) * 8);
      local_90 = iVar3 + 1;
      if ((int)plVar6 < (int)local_90) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,plVar12);
        plVar6 = (longlong *)(ulonglong)local_8c;
        plVar9 = local_98;
      }
      plVar12 = (longlong *)(ulonglong)local_90;
      plVar9[iVar3] = lVar4;
      uStack_48 = uStack_48 & ~uStack_54;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
    }
    plVar8 = plVar9;
    if (0 < iVar3) {
      do {
        lVar4 = *plVar8;
        if (lVar4 != 0) {
          iVar3 = *(int *)(param_1 + 0x230);
          *(int *)(param_1 + 0x230) = iVar3 + 1;
          if (*(int *)(param_1 + 0x234) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x228,iVar3)
            ;
          }
          *(longlong *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar3 * 8) = lVar4;
        }
        plVar12 = (longlong *)((longlong)plVar12 + -1);
        plVar8 = plVar8 + 1;
      } while (plVar12 != (longlong *)0x0);
    }
    uVar5 = FSoftClassPath::TryLoadClass<UDPICustomScalingRule>(param_1 + 400);
    *(undefined8 *)(param_1 + 0x238) = uVar5;
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
  }
  return;
}



// FUNCTION 1428ab2f0 ForceRebuildKeymaps body=190 status=ok
// SIG undefined ForceRebuildKeymaps(void)

void UInputSettings::ForceRebuildKeymaps(void)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong local_28;
  undefined8 local_20;
  uint local_18;
  
  local_18 = 0xffffffff;
  local_28 = 0;
  local_20 = 0;
  uVar1 = FUN_1429ecea0();
  FUN_1417a5560(uVar1,&local_28,1,0x10,0);
  do {
    local_18 = local_18 + 1;
    uVar3 = (ulonglong)local_18;
    if ((int)local_20 <= (int)local_18) break;
  } while (*(longlong *)(local_28 + (longlong)(int)local_18 * 8) == 0);
  do {
    do {
      iVar2 = (int)uVar3;
      if ((iVar2 < 0) || ((int)local_20 <= iVar2)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      FUN_1428ab3b0(*(undefined8 *)(local_28 + (longlong)iVar2 * 8),CONCAT71((int7)(uVar3 >> 8),1));
      local_18 = local_18 + 1;
      uVar3 = (ulonglong)local_18;
    } while ((int)local_20 <= (int)local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)(int)uVar3 * 8) != 0) break;
      local_18 = (int)uVar3 + 1;
      uVar3 = (ulonglong)local_18;
    } while ((int)local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 1428ab3b0 FUN_1428ab3b0 body=813 status=ok
// SIG undefined FUN_1428ab3b0(void)

void FUN_1428ab3b0(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  
  if (param_2 != '\0') {
    plVar6 = (longlong *)UInputSettings::GetPrivateStaticClass();
    lVar7 = plVar6[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar7 = plVar6[0x1f];
    }
    puVar13 = (undefined8 *)(param_1 + 0x130);
    if (puVar13 != (undefined8 *)(lVar7 + 0x28)) {
      iVar11 = *(int *)(lVar7 + 0x30);
      _Src = *(void **)(lVar7 + 0x28);
      *(int *)(param_1 + 0x138) = iVar11;
      if ((iVar11 == 0) && (*(int *)(param_1 + 0x13c) == 0)) {
        *(undefined4 *)(param_1 + 0x13c) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar13,iVar11);
        _guard_xfg_dispatch_icall_nop((void *)*puVar13,_Src,(longlong)iVar11 * 0x18);
      }
    }
    plVar6 = (longlong *)UInputSettings::GetPrivateStaticClass();
    lVar7 = plVar6[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar7 = plVar6[0x1f];
    }
    plVar6 = (longlong *)(param_1 + 0x150);
    if (plVar6 != (longlong *)(lVar7 + 0x90)) {
      iVar11 = *(int *)(param_1 + 0x158);
      if (iVar11 != 0) {
        plVar12 = (longlong *)(*plVar6 + 0x20);
        do {
          plVar4 = (longlong *)*plVar12;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar12 = plVar12 + 5;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      iVar11 = *(int *)(lVar7 + 0x98);
      lVar7 = *(longlong *)(lVar7 + 0x90);
      *(int *)(param_1 + 0x158) = iVar11;
      if ((iVar11 == 0) && (*(int *)(param_1 + 0x15c) == 0)) {
        *(undefined4 *)(param_1 + 0x15c) = 0;
      }
      else {
        TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(plVar6,iVar11);
        puVar13 = (undefined8 *)*plVar6;
        if (iVar11 != 0) {
          puVar10 = puVar13 + 3;
          puVar9 = (undefined8 *)(lVar7 + 0x18);
          do {
            *puVar13 = puVar9[-3];
            *(undefined4 *)(puVar10 + -2) = *(undefined4 *)(puVar9 + -2);
            puVar10[-1] = puVar9[-1];
            *puVar10 = *puVar9;
            lVar7 = puVar9[1];
            puVar10[1] = lVar7;
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            puVar13 = puVar13 + 5;
            puVar10 = puVar10 + 5;
            puVar9 = puVar9 + 5;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
      }
    }
    plVar6 = (longlong *)UInputSettings::GetPrivateStaticClass();
    lVar7 = plVar6[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar7 = plVar6[0x1f];
    }
    plVar6 = (longlong *)(param_1 + 0x140);
    if (plVar6 != (longlong *)(lVar7 + 0x80)) {
      iVar11 = *(int *)(param_1 + 0x148);
      if (iVar11 != 0) {
        plVar12 = (longlong *)(*plVar6 + 0x20);
        do {
          plVar4 = (longlong *)*plVar12;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar12 = plVar12 + 5;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      iVar11 = *(int *)(lVar7 + 0x88);
      lVar7 = *(longlong *)(lVar7 + 0x80);
      *(int *)(param_1 + 0x148) = iVar11;
      if ((iVar11 == 0) && (*(int *)(param_1 + 0x14c) == 0)) {
        *(undefined4 *)(param_1 + 0x14c) = 0;
      }
      else {
        TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(plVar6,iVar11);
        puVar13 = (undefined8 *)*plVar6;
        if (iVar11 != 0) {
          pbVar14 = (byte *)(lVar7 + 8);
          do {
            *puVar13 = *(undefined8 *)(pbVar14 + -8);
            *(byte *)(puVar13 + 1) =
                 *(byte *)(puVar13 + 1) ^ (*(byte *)(puVar13 + 1) ^ *pbVar14) & 1;
            bVar8 = (*(byte *)(puVar13 + 1) ^ *pbVar14) & 2 ^ *(byte *)(puVar13 + 1);
            *(byte *)(puVar13 + 1) = bVar8;
            bVar8 = (bVar8 ^ *pbVar14) & 4 ^ bVar8;
            *(byte *)(puVar13 + 1) = bVar8;
            *(byte *)(puVar13 + 1) = (bVar8 ^ *pbVar14) & 8 ^ bVar8;
            puVar13[2] = *(undefined8 *)(pbVar14 + 8);
            puVar13[3] = *(undefined8 *)(pbVar14 + 0x10);
            lVar7 = *(longlong *)(pbVar14 + 0x18);
            puVar13[4] = lVar7;
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            puVar13 = puVar13 + 5;
            pbVar14 = pbVar14 + 0x28;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
      }
    }
  }
  FUN_1428badb0(param_1 + 0x1c0);
  TSet<TTuple<FName,UPlayerInput::FAxisKeyDetails>,TDefaultMapHashableKeyFuncs<FName,UPlayerInput::FAxisKeyDetails,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 0x210);
  FUN_1428bac60(param_1 + 0x170);
  *(byte *)(param_1 + 0x2b4) = *(byte *)(param_1 + 0x2b4) & 0xfe;
  return;
}



// FUNCTION 1428ab6e0 GenerateFullEnumName body=23 status=ok
// SIG undefined GenerateFullEnumName(void)

undefined8 UUserDefinedEnum::GenerateFullEnumName(undefined8 param_1,undefined8 param_2)

{
  UEnum::GenerateFullEnumName();
  return param_2;
}



// FUNCTION 1428ab700 FUN_1428ab700 body=8 status=ok
// SIG undefined FUN_1428ab700(void)

undefined8 FUN_1428ab700(void)

{
  return DAT_146b184b8;
}



// FUNCTION 1428ab710 FUN_1428ab710 body=337 status=ok
// SIG undefined FUN_1428ab710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1428ab710(void)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int *piVar6;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar6 < DAT_146b191e0) {
    _Init_thread_header(&DAT_146b191e0);
    if (DAT_146b191e0 == -1) {
      FName::FName(&DAT_146b191d8,L"GbxPerfAnalytics",1);
      _Init_thread_footer(&DAT_146b191e0);
    }
  }
  uVar2 = DAT_146b191d8;
  uVar4 = FUN_14168dc80();
  cVar3 = FModuleManager::IsModuleLoaded(uVar4,uVar2);
  iVar1 = *piVar6;
  if (cVar3 != '\0') {
    if (iVar1 < DAT_146b191e0) {
      _Init_thread_header(&DAT_146b191e0);
      if (DAT_146b191e0 == -1) {
        FName::FName(&DAT_146b191d8,L"GbxPerfAnalytics",1);
        _Init_thread_footer(&DAT_146b191e0);
      }
    }
    uVar2 = DAT_146b191d8;
    uVar4 = FUN_14168dc80();
    puVar5 = (undefined *)FModuleManager::GetModule(uVar4,uVar2);
    return puVar5;
  }
  if (iVar1 < DAT_146b19200) {
    _Init_thread_header(&DAT_146b19200);
    if (DAT_146b19200 == -1) {
      _DAT_146b191e8 = &PTR_FUN_143f3ee80;
      DAT_146b191f0 = 0;
      _DAT_146b191f8 = 0;
      atexit(FUN_143ebdb80);
      _Init_thread_footer(&DAT_146b19200);
    }
  }
  return &DAT_146b191e8;
}



// FUNCTION 1428ab870 GetActionMappingByName body=307 status=ok
// SIG undefined GetActionMappingByName(void)

void UInputSettings::GetActionMappingByName(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  lVar3 = FName::GetNames();
  iVar7 = (int)param_2;
  if ((-1 < iVar7) && (iVar7 < *(int *)(lVar3 + 0x400))) {
    uVar5 = iVar7 >> 0x1f & 0x3fff;
    uVar2 = iVar7 + uVar5;
    lVar4 = (longlong)((int)uVar2 >> 0xe);
    lVar6 = (longlong)(int)((uVar2 & 0x3fff) - uVar5) * 8;
    if ((*(longlong *)(lVar6 + *(longlong *)(lVar3 + lVar4 * 8)) != 0) &&
       (((iVar7 < *(int *)(lVar3 + 0x400) &&
         (*(longlong *)(lVar6 + *(longlong *)(lVar3 + lVar4 * 8)) != 0)) &&
        (iVar7 = *(int *)(param_1 + 0x88) + -1, -1 < iVar7)))) {
      lVar6 = (longlong)iVar7 * 0x28;
      lVar3 = lVar6;
      do {
        lVar4 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(lVar6 + lVar4) == param_2) {
          iVar1 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
          }
          FUN_14289abe0(*param_3 + (longlong)iVar1 * 0x28,lVar3 + lVar4);
        }
        lVar3 = lVar3 + -0x28;
        lVar6 = lVar6 + -0x28;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
  }
  return;
}



// FUNCTION 1428ab9b0 GetActionNames body=116 status=ok
// SIG undefined GetActionNames(void)

void UInputSettings::GetActionNames(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x88) * 0x28;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,lVar2);
  }
  return;
}



// FUNCTION 1428aba30 FUN_1428aba30 body=320 status=ok
// SIG undefined FUN_1428aba30(void)

void FUN_1428aba30(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar4 = FName::GetNames();
  iVar3 = (int)param_2;
  if ((-1 < iVar3) && (iVar3 < *(int *)(lVar4 + 0x400))) {
    uVar6 = iVar3 >> 0x1f & 0x3fff;
    uVar2 = iVar3 + uVar6;
    lVar7 = (longlong)((int)uVar2 >> 0xe);
    lVar5 = (longlong)(int)((uVar2 & 0x3fff) - uVar6);
    if ((*(longlong *)(*(longlong *)(lVar4 + lVar7 * 8) + lVar5 * 8) != 0) &&
       (((iVar3 < *(int *)(lVar4 + 0x400) &&
         (*(longlong *)(*(longlong *)(lVar4 + lVar7 * 8) + lVar5 * 8) != 0)) &&
        (iVar3 = *(int *)(param_1 + 0x98) + -1, lVar4 = (longlong)iVar3, -1 < iVar3)))) {
      lVar5 = lVar4 * 0x28;
      do {
        lVar7 = *(longlong *)(param_1 + 0x90);
        if (*(longlong *)(lVar5 + lVar7) == param_2) {
          iVar3 = (int)param_3[1];
          lVar8 = (longlong)iVar3;
          *(int *)(param_3 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
          }
          lVar1 = *param_3;
          *(undefined8 *)(lVar1 + lVar8 * 0x28) = *(undefined8 *)(lVar5 + lVar7);
          *(undefined4 *)(lVar1 + 8 + lVar8 * 0x28) = *(undefined4 *)(lVar5 + 8 + lVar7);
          *(undefined8 *)(lVar1 + 0x10 + lVar8 * 0x28) = *(undefined8 *)(lVar5 + 0x10 + lVar7);
          *(undefined8 *)(lVar1 + 0x18 + lVar8 * 0x28) = *(undefined8 *)(lVar5 + 0x18 + lVar7);
          lVar7 = *(longlong *)(lVar5 + 0x20 + lVar7);
          *(longlong *)(lVar1 + 0x20 + lVar8 * 0x28) = lVar7;
          if (lVar7 != 0) {
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
          }
        }
        lVar5 = lVar5 + -0x28;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
  }
  return;
}



// FUNCTION 1428abb70 GetAxisNames body=116 status=ok
// SIG undefined GetAxisNames(void)

void UInputSettings::GetAxisNames(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x98) * 0x28;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,lVar2);
  }
  return;
}



// FUNCTION 1428abbf0 FUN_1428abbf0 body=319 status=ok
// SIG undefined FUN_1428abbf0(void)

undefined8 FUN_1428abbf0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  FUN_1428a1120();
  if (*(int *)(param_1 + 0x178) != *(int *)(param_1 + 0x1a4)) {
    lVar2 = *param_2;
    lVar6 = *(longlong *)(param_1 + 0x1b0);
    if (*(longlong *)(param_1 + 0x1b0) == 0) {
      lVar6 = param_1 + 0x1a8;
    }
    iVar5 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(param_1 + 0x1b8) - 1U) * 4);
    if (iVar5 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar5 * 0x30 + *(longlong *)(param_1 + 0x170));
        if (*plVar8 == lVar2) {
          if (iVar5 != -1) goto LAB_1428abc87;
          break;
        }
        iVar5 = (int)plVar8[5];
      } while (iVar5 != -1);
    }
  }
  plVar8 = (longlong *)0x0;
LAB_1428abc87:
  plVar7 = plVar8 + 3;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 == (longlong *)0x0) {
    plVar8 = (longlong *)param_2[2];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    return 0;
  }
  uVar3 = *(undefined4 *)((longlong)plVar7 + 4);
  lVar2 = plVar7[1];
  uVar4 = *(undefined4 *)((longlong)plVar7 + 0xc);
  *param_3 = (int)*plVar7;
  param_3[1] = uVar3;
  param_3[2] = (int)lVar2;
  param_3[3] = uVar4;
  plVar8 = (longlong *)param_2[2];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return 1;
}



// FUNCTION 1428abd30 FUN_1428abd30 body=1312 status=ok
// SIG undefined FUN_1428abd30(void)

longlong FUN_1428abd30(longlong param_1,int param_2,longlong param_3,longlong param_4,int param_5,
                      uint *param_6,char param_7)

{
  float *pfVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  
  lVar8 = FUN_1428add20(param_1,*(undefined4 *)
                                 (*(longlong *)(param_1 + 0x18) + -4 +
                                 (longlong)*(int *)(param_1 + 0x20) * 4));
  lVar9 = *(longlong *)(param_1 + 0x28);
  lVar13 = (longlong)*(int *)(param_1 + 0x30);
  pfVar1 = (float *)(lVar9 + -0x50 + lVar13 * 0x50);
  fVar19 = *pfVar1;
  fVar20 = pfVar1[1];
  fVar21 = pfVar1[2];
  fVar22 = pfVar1[3];
  pfVar1 = (float *)(lVar9 + -0x40 + lVar13 * 0x50);
  fVar23 = *pfVar1;
  fVar24 = pfVar1[1];
  fVar25 = pfVar1[2];
  fVar26 = pfVar1[3];
  pfVar1 = (float *)(lVar9 + -0x30 + lVar13 * 0x50);
  fVar27 = *pfVar1;
  fVar28 = pfVar1[1];
  fVar29 = pfVar1[2];
  fVar30 = pfVar1[3];
  pfVar1 = (float *)(lVar9 + -0x20 + lVar13 * 0x50);
  fVar31 = *pfVar1;
  fVar32 = pfVar1[1];
  fVar33 = pfVar1[2];
  fVar34 = pfVar1[3];
  piVar2 = (int *)(lVar9 + -0x10 + lVar13 * 0x50);
  iVar7 = *piVar2;
  iVar16 = piVar2[1];
  iVar17 = piVar2[2];
  iVar18 = piVar2[3];
  if (((param_7 == '\0') && (*(char *)(param_1 + 0x94) == '\0')) &&
     (*(float *)(param_1 + 0x138) != 1.0)) {
    fVar15 = 1.0 / *(float *)(param_1 + 0x138);
    local_d8 = fVar23 * 0.0 + fVar15 * fVar19 + fVar27 * 0.0 + fVar31 * 0.0;
    uStack_d4 = CONCAT44(fVar25 * 0.0 + fVar15 * fVar21 + fVar29 * 0.0 + fVar33 * 0.0,
                         fVar24 * 0.0 + fVar15 * fVar20 + fVar28 * 0.0 + fVar32 * 0.0);
    fStack_c4 = fVar15 * fVar24 + fVar20 * 0.0 + fVar28 * 0.0 + fVar32 * 0.0;
    uStack_cc = CONCAT44(fVar15 * fVar23 + fVar19 * 0.0 + fVar27 * 0.0 + fVar31 * 0.0,
                         fVar26 * 0.0 + fVar15 * fVar22 + fVar30 * 0.0 + fVar34 * 0.0);
    uStack_c0 = CONCAT44(fVar15 * fVar26 + fVar22 * 0.0 + fVar30 * 0.0 + fVar34 * 0.0,
                         fVar15 * fVar25 + fVar21 * 0.0 + fVar29 * 0.0 + fVar33 * 0.0);
    fStack_b0 = fVar25 * 0.0 + fVar21 * 0.0 + fVar15 * fVar29 + fVar33 * 0.0;
    fStack_ac = fVar26 * 0.0 + fVar22 * 0.0 + fVar15 * fVar30 + fVar34 * 0.0;
    local_b8 = CONCAT44(fVar24 * 0.0 + fVar20 * 0.0 + fVar15 * fVar28 + fVar32 * 0.0,
                        fVar23 * 0.0 + fVar19 * 0.0 + fVar15 * fVar27 + fVar31 * 0.0);
    local_a8 = fVar23 * 0.0 + fVar19 * 0.0 + fVar27 * 0.0 + fVar31 * 1.0;
    fStack_a4 = fVar24 * 0.0 + fVar20 * 0.0 + fVar28 * 0.0 + fVar32 * 1.0;
    fStack_a0 = fVar25 * 0.0 + fVar21 * 0.0 + fVar29 * 0.0 + fVar33 * 1.0;
    fStack_9c = fVar26 * 0.0 + fVar22 * 0.0 + fVar30 * 0.0 + fVar34 * 1.0;
    iVar7 = FCrc::MemCrc_DEPRECATED(&local_d8,0x40);
    iVar16 = iStack_94;
    iVar17 = iStack_90;
    iVar18 = iStack_8c;
    fVar19 = local_d8;
    fVar20 = (float)uStack_d4;
    fVar21 = uStack_d4._4_4_;
    fVar22 = (float)uStack_cc;
    fVar23 = uStack_cc._4_4_;
    fVar24 = fStack_c4;
    fVar25 = (float)uStack_c0;
    fVar26 = uStack_c0._4_4_;
    fVar27 = (float)local_b8;
    fVar28 = local_b8._4_4_;
    fVar29 = fStack_b0;
    fVar30 = fStack_ac;
    fVar31 = local_a8;
    fVar32 = fStack_a4;
    fVar33 = fStack_a0;
    fVar34 = fStack_9c;
    local_98 = iVar7;
  }
  if (((((*(int *)(lVar8 + 0x10) < 1) ||
        (lVar9 = (**(code **)(**(longlong **)
                                (*(longlong *)(lVar8 + 8) + -8 +
                                (longlong)*(int *)(lVar8 + 0x10) * 8) + 0x18))(), lVar9 == 0)) ||
       ((lVar9 = *(longlong *)(lVar9 + 8), *(longlong *)(lVar9 + 0x208) != param_3 ||
        ((*(longlong *)(lVar9 + 0x210) != param_4 || (*(int *)(lVar9 + 0x218) != param_5)))))) ||
      ((*(int *)(lVar9 + 0x21c) != param_2 ||
       ((*(int *)(lVar9 + 0x260) != iVar7 ||
        (uVar12 = *(uint *)(lVar9 + 0x270) & 1, (*param_6 & 1) != uVar12)))))) ||
     ((uVar12 != 0 &&
      (((((*(float *)(lVar9 + 0x274) != (float)param_6[1] ||
          (*(float *)(lVar9 + 0x278) != (float)param_6[2])) ||
         (*(float *)(lVar9 + 0x27c) != (float)param_6[3])) ||
        ((*(float *)(lVar9 + 0x280) != (float)param_6[4] ||
         (*(float *)(lVar9 + 0x284) != (float)param_6[5])))) ||
       ((*(float *)(lVar9 + 0x288) != (float)param_6[6] ||
        ((*(float *)(lVar9 + 0x28c) != (float)param_6[7] ||
         (*(float *)(lVar9 + 0x290) != (float)param_6[8])))))))))) {
    puVar10 = (undefined8 *)operator_new(0x10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      *puVar10 = &PTR_FUN_1451e21a0;
      puVar11 = (undefined8 *)operator_new(0x2a0);
      if (puVar11 == (undefined8 *)0x0) {
        puVar10[1] = 0;
      }
      else {
        *puVar11 = 0;
        puVar11[1] = 0;
        *(undefined4 *)(puVar11 + 2) = 0;
        puVar3 = (undefined8 *)*puVar11;
        for (iVar14 = *(int *)(puVar11 + 1); iVar14 != 0; iVar14 = iVar14 + -1) {
          FMemory::Free(*puVar3);
          puVar3 = puVar3 + 1;
        }
        *(undefined4 *)(puVar11 + 1) = 0;
        if (*(int *)((longlong)puVar11 + 0xc) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(puVar11,0);
        }
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[10] = 0;
        puVar11[0xb] = 0;
        puVar11[0xc] = 0;
        *(int *)(puVar11 + 0xd) = (int)((ulonglong)(longlong)DAT_1464c9c34 >> 2);
        uVar12 = (uint)((ulonglong)(longlong)DAT_1464c9c30 / 0x2c);
        if (0xfffe < uVar12) {
          uVar12 = 0xffff;
        }
        *(uint *)((longlong)puVar11 + 0x6c) = uVar12;
        puVar11[0x26] = 0;
        puVar11[0x27] = 0;
        puVar11[0x3e] = 0;
        puVar11[0x3f] = 0;
        *(undefined1 *)(puVar11 + 0x40) = 1;
        puVar11[0x41] = param_3;
        if (param_3 != 0) {
          *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
        }
        *(float *)(puVar11 + 0x44) = fVar19;
        *(float *)((longlong)puVar11 + 0x224) = fVar20;
        *(float *)(puVar11 + 0x45) = fVar21;
        *(float *)((longlong)puVar11 + 0x22c) = fVar22;
        puVar11[0x42] = param_4;
        *(float *)(puVar11 + 0x46) = fVar23;
        *(float *)((longlong)puVar11 + 0x234) = fVar24;
        *(float *)(puVar11 + 0x47) = fVar25;
        *(float *)((longlong)puVar11 + 0x23c) = fVar26;
        *(int *)(puVar11 + 0x43) = param_5;
        *(float *)(puVar11 + 0x48) = fVar27;
        *(float *)((longlong)puVar11 + 0x244) = fVar28;
        *(float *)(puVar11 + 0x49) = fVar29;
        *(float *)((longlong)puVar11 + 0x24c) = fVar30;
        *(int *)((longlong)puVar11 + 0x21c) = param_2;
        *(float *)(puVar11 + 0x4a) = fVar31;
        *(float *)((longlong)puVar11 + 0x254) = fVar32;
        *(float *)(puVar11 + 0x4b) = fVar33;
        *(float *)((longlong)puVar11 + 0x25c) = fVar34;
        *(int *)(puVar11 + 0x4c) = iVar7;
        *(int *)((longlong)puVar11 + 0x264) = iVar16;
        *(int *)(puVar11 + 0x4d) = iVar17;
        *(int *)((longlong)puVar11 + 0x26c) = iVar18;
        uVar12 = param_6[1];
        uVar4 = param_6[2];
        uVar5 = param_6[3];
        *(uint *)(puVar11 + 0x4e) = *param_6;
        *(uint *)((longlong)puVar11 + 0x274) = uVar12;
        *(uint *)(puVar11 + 0x4f) = uVar4;
        *(uint *)((longlong)puVar11 + 0x27c) = uVar5;
        uVar6 = *(undefined8 *)(param_6 + 6);
        puVar11[0x50] = *(undefined8 *)(param_6 + 4);
        puVar11[0x51] = uVar6;
        *(uint *)(puVar11 + 0x52) = param_6[8];
        puVar10[1] = puVar11;
      }
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x10) = iVar7 + 1;
    if (*(int *)(lVar8 + 0x14) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 8,iVar7);
    }
    *(undefined8 **)(*(longlong *)(lVar8 + 8) + (longlong)iVar7 * 8) = puVar10;
    lVar9 = puVar10[1];
  }
  return lVar9;
}



// FUNCTION 1428ac260 FUN_1428ac260 body=2024 status=ok
// SIG undefined FUN_1428ac260(void)

void FUN_1428ac260(longlong param_1,byte *param_2,char param_3,longlong *param_4,undefined8 param_5,
                  longlong *param_6)

{
  byte *pbVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  undefined8 in_stack_fffffffffffffd60;
  undefined4 uVar20;
  uint local_288;
  uint uStack_284;
  int iStack_274;
  uint uStack_270;
  undefined4 uStack_26c;
  uint uStack_254;
  uint uStack_228;
  uint uStack_224;
  uint *local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  byte local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  byte local_168;
  byte local_167;
  undefined8 local_160;
  undefined8 local_158;
  longlong *local_150;
  uint local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [40];
  undefined4 local_108 [2];
  undefined1 local_100 [16];
  undefined1 local_f0 [64];
  longlong *local_b0;
  undefined1 local_98 [48];
  undefined1 local_68 [48];
  
  lVar16 = *(longlong *)(param_2 + 8);
  pbVar1 = param_2 + 8;
  bVar7 = false;
  plVar12 = (longlong *)0x0;
  bVar8 = false;
  if (lVar16 == DAT_1469e97d8) {
    local_288 = 0;
    iVar19 = *(int *)(param_1 + 0x288);
    puVar2 = (uint *)(param_1 + 0x270);
    uStack_284 = 1;
    iStack_274 = 0;
    uStack_270 = 0;
    if (iVar19 != 0) {
      puVar17 = *(uint **)(param_1 + 0x280);
      if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
        puVar17 = puVar2;
      }
      uVar6 = *puVar17;
      plVar13 = plVar12;
      while (uVar6 == 0) {
        iVar10 = (int)plVar13;
        uStack_270 = (int)plVar12 + 0x20;
        plVar12 = (longlong *)(ulonglong)uStack_270;
        local_288 = iVar10 + 1;
        plVar13 = (longlong *)(ulonglong)local_288;
        if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10) goto LAB_1428ac374;
        uVar6 = puVar17[(longlong)iVar10 + 1];
      }
      uStack_284 = -uVar6 & uVar6;
      iVar10 = 0x1f;
      if (uStack_284 != 0) {
        for (; uStack_284 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_284 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      iStack_274 = (uStack_270 - iVar10) + 0x1f;
      if (iVar19 < iStack_274) {
LAB_1428ac374:
        iStack_274 = iVar19;
      }
    }
    uStack_254 = *(uint *)(param_1 + 0x288);
    uVar6 = *(uint *)(param_1 + 0x288);
    uStack_218 = CONCAT44(iStack_274,0xffffffff);
    local_210 = CONCAT44(uStack_26c,uStack_270);
    uVar18 = uStack_254 & 0xffffffe0;
    uStack_228 = local_288;
    uStack_224 = uStack_284;
    local_220 = puVar2;
    if (uStack_254 != uVar6) {
      puVar17 = *(uint **)(param_1 + 0x280);
      if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
        puVar17 = puVar2;
      }
      uVar14 = puVar17[(int)uStack_254 >> 5] & -1 << ((byte)uStack_254 & 0x1f);
      iVar19 = (int)uStack_254 >> 5;
      while (uVar14 == 0) {
        uVar18 = uVar18 + 0x20;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar19)
        goto LAB_1428ac470;
        uVar14 = puVar17[(longlong)iVar19 + 1];
        iVar19 = iVar19 + 1;
      }
      uVar14 = -uVar14 & uVar14;
      iVar19 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar19 == 0; iVar19 = iVar19 + -1) {
        }
      }
      if (uVar14 == 0) {
        iVar19 = 0x20;
      }
      else {
        iVar19 = 0x1f - iVar19;
      }
      uStack_254 = (uVar18 - iVar19) + 0x1f;
      if ((int)uVar6 < (int)uStack_254) {
LAB_1428ac470:
        uStack_254 = uVar6;
      }
    }
    while( true ) {
      if ((uStack_218._4_4_ == uStack_254) && (local_220 == puVar2)) break;
      lVar16 = (longlong)(int)uStack_218._4_4_ * 0xf0 + *(longlong *)(param_1 + 0x260);
      cVar9 = FKey::IsFloatAxis(lVar16);
      if (((cVar9 == '\0') && (cVar9 = FKey::IsVectorAxis(lVar16), cVar9 == '\0')) &&
         ((*(byte *)(lVar16 + 0x34) & 4) == 0)) {
        local_168 = *param_2;
        local_167 = param_2[1];
        local_160 = *(undefined8 *)pbVar1;
        local_158 = *(undefined8 *)(param_2 + 0x10);
        local_150 = *(longlong **)(param_2 + 0x18);
        if (local_150 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_150 + 1) = (int)local_150[1] + 1;
          UNLOCK();
        }
        local_148 = local_148 ^ (*(uint *)(param_2 + 0x20) ^ local_148) & 0xf;
        FInputActionUnifiedDelegate::FInputActionUnifiedDelegate(local_140,param_2 + 0x28);
        FKey::operator=(&local_160,lVar16);
        FUN_1428ac260(param_1,&local_168,param_3,param_4,param_5,lVar16 + 0x18);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_130);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_140);
        plVar12 = local_150;
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_150 + 1;
          lVar16 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar3 = (int *)((longlong)plVar12 + 0xc);
            iVar19 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
      }
      uStack_218 = CONCAT44(uStack_218._4_4_,(uint)uStack_218 & ~uStack_224);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_228);
    }
  }
  else {
    if (param_6 == (longlong *)0x0) {
      if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
        lVar11 = *(longlong *)(param_1 + 0x2a0);
        if (*(longlong *)(param_1 + 0x2a0) == 0) {
          lVar11 = param_1 + 0x298;
        }
        iVar19 = *(int *)(lVar11 + ((longlong)((int)((ulonglong)lVar16 >> 0x20) + (int)lVar16) &
                                   (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
        if (iVar19 != -1) {
          do {
            plVar13 = (longlong *)((longlong)iVar19 * 0xf0 + *(longlong *)(param_1 + 0x260));
            if (*plVar13 == lVar16) {
              if ((iVar19 != -1) && (param_6 = plVar13 + 3, plVar13 != (longlong *)0x0))
              goto LAB_1428ac680;
              break;
            }
            iVar19 = (int)plVar13[0x1d];
          } while (iVar19 != -1);
        }
      }
      param_6 = plVar12;
    }
LAB_1428ac680:
    local_190 = *(undefined8 *)(param_2 + 0x10);
    local_188 = *(longlong *)(param_2 + 0x18);
    if (local_188 != 0) {
      LOCK();
      *(int *)(local_188 + 8) = *(int *)(local_188 + 8) + 1;
      UNLOCK();
    }
    local_198 = lVar16;
    cVar9 = FUN_1428b22c0(param_1,&local_198,param_6);
    if ((((cVar9 != '\0') ||
         (((param_2[0x20] & 4) != 0 && (cVar9 = FUN_1428b1ff0(param_1), cVar9 == '\0')))) ||
        (((param_2[0x20] & 2) != 0 && (cVar9 = FUN_1428b2110(param_1), cVar9 == '\0')))) ||
       ((((param_2[0x20] & 1) != 0 && (cVar9 = FUN_1428b29d0(param_1), cVar9 == '\0')) ||
        (((param_2[0x20] & 8) != 0 && (cVar9 = FUN_1428b2080(param_1), cVar9 == '\0'))))))
    goto LAB_1428ac9f0;
    local_180 = *(undefined8 *)pbVar1;
    bVar5 = param_2[1];
    local_178 = *(undefined8 *)(param_2 + 0x10);
    local_170 = *(longlong *)(param_2 + 0x18);
    if (local_170 != 0) {
      LOCK();
      *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
      UNLOCK();
    }
    puVar4 = (undefined8 *)(param_1 + 0x390);
    cVar9 = FUN_1428b3730(param_1,&local_180,bVar5,puVar4,param_6);
    if (cVar9 != '\0') {
      iVar19 = (int)param_4[1];
joined_r0x0001428ac763:
      do {
        iVar19 = iVar19 + -1;
        if (iVar19 < 0) {
          uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffd60 >> 0x20);
          if ((param_3 == '\0') || ((*param_2 & 2) != 0)) {
            local_208 = 0;
            local_200 = 0;
            TBaseDelegate<FSlateBrush_const_*>::operator=(&local_208,param_2 + 0x28);
            local_1f8 = 0;
            local_1f0 = 0;
            if ((param_2 + 0x38 != (byte *)&local_1f8) &&
               ((*(int *)(param_2 + 0x40) != 0 &&
                (plVar12 = *(longlong **)(param_2 + 0x38), plVar12 != (longlong *)0x0)))) {
              (**(code **)(*plVar12 + 0x30))(plVar12,&local_1f8);
            }
            local_1e8 = *(undefined4 *)(param_2 + 0x48);
            puVar15 = &local_208;
            bVar7 = false;
            local_1e4 = *(undefined4 *)(param_2 + 0x4c);
            bVar8 = true;
            local_1e0 = *(undefined8 *)(param_2 + 0x50);
            local_1d8 = param_2[0x58];
          }
          else {
            local_1d0 = 0;
            local_1c8 = 0;
            local_1c0 = 0;
            local_1b8 = 0;
            FWeakObjectPtr::operator=(local_1b0,0);
            puVar15 = &local_1d0;
            local_1a8 = 0;
            local_1a0 = 0;
            bVar7 = true;
          }
          FUN_14289a830(local_108,*(undefined4 *)*puVar4,(int)param_4[1],pbVar1,puVar15,
                        CONCAT44(uVar20,(uint)param_2[1]),0);
          if (bVar8) {
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1f8);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_208);
          }
          if (bVar7) {
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c0);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1d0);
          }
          iVar19 = (int)param_4[1];
          *(int *)(param_4 + 1) = iVar19 + 1;
          if (*(int *)((longlong)param_4 + 0xc) < iVar19 + 1) {
            FUN_140ae1ad0(param_4,iVar19);
          }
          FUN_14289a6b0((longlong)iVar19 * 200 + *param_4,local_108);
          iVar19 = 1;
          if (1 < *(int *)(param_1 + 0x398)) {
            lVar16 = 4;
            do {
              iVar10 = (int)param_4[1];
              local_108[0] = *(undefined4 *)(lVar16 + *(longlong *)(param_1 + 0x390));
              *(int *)(param_4 + 1) = iVar10 + 1;
              if (*(int *)((longlong)param_4 + 0xc) < iVar10 + 1) {
                FUN_140ae1ad0(param_4,iVar10);
              }
              FUN_14289a6b0((longlong)iVar10 * 200 + *param_4,local_108);
              iVar19 = iVar19 + 1;
              lVar16 = lVar16 + 4;
            } while (iVar19 < *(int *)(param_1 + 0x398));
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(local_98);
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_b0 + 1;
            lVar16 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar16 == 1) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar3 = (int *)((longlong)local_b0 + 0xc);
              iVar19 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar19 == 1) {
                (**(code **)(*local_b0 + 8))(local_b0,1);
              }
            }
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(local_f0);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(local_100);
          bVar7 = true;
LAB_1428ac9ce:
          *(undefined4 *)(param_1 + 0x398) = 0;
          if (0x7fffffff < *(uint *)(param_1 + 0x39c)) {
            TArray<float,FDefaultAllocator>::ResizeTo(puVar4,0);
          }
          goto LAB_1428ac9f0;
        }
        iVar10 = FInputChord::GetRelationship(pbVar1,*param_4 + 0x48 + (longlong)iVar19 * 200);
        if (iVar10 == 3) {
          FUN_1428b9e60(param_4,iVar19,1,0);
          goto joined_r0x0001428ac763;
        }
        bVar7 = false;
        if (iVar10 == 2) goto LAB_1428ac9ce;
      } while( true );
    }
  }
  bVar7 = false;
LAB_1428ac9f0:
  if (((*param_2 & 1) != 0) && ((bVar7 || (((param_2[0x20] & 0xf) == 0 && (param_2[1] != 3)))))) {
    TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>(param_5,param_2 + 8);
  }
  return;
}



// FUNCTION 1428aca50 FUN_1428aca50 body=1319 status=ok
// SIG undefined FUN_1428aca50(void)

void FUN_1428aca50(longlong param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined8 *puVar16;
  uint local_108;
  uint uStack_104;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  uint uStack_d4;
  undefined8 local_c0;
  byte local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  int local_98;
  undefined8 *local_90;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  
  if ((*(byte *)(param_1 + 0x2b4) & 1) == 0) {
    UPlayerInput::ConditionalBuildKeyMappings_Internal();
  }
  lVar11 = *(longlong *)(param_2 + 8);
  if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 500)) {
    lVar7 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar7 = param_1 + 0x1f8;
    }
    iVar5 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                             (longlong)*(int *)(param_1 + 0x208) - 1U) * 4);
    if (iVar5 != -1) {
      do {
        plVar9 = (longlong *)((longlong)iVar5 * 0x40 + *(longlong *)(param_1 + 0x1c0));
        if (*plVar9 == lVar11) {
          if (iVar5 != -1) goto LAB_1428acb01;
          break;
        }
        iVar5 = (int)plVar9[7];
      } while (iVar5 != -1);
    }
  }
  plVar9 = (longlong *)0x0;
LAB_1428acb01:
  plVar6 = plVar9 + 1;
  if (plVar9 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 != (longlong *)0x0) {
    puVar16 = (undefined8 *)*plVar6;
    local_90 = puVar16 + (longlong)(int)plVar6[1] * 5;
    if (puVar16 != local_90) {
      puVar13 = puVar16 + 3;
      plVar9 = (longlong *)(param_1 + 0x260);
      do {
        plVar6 = (longlong *)0x0;
        lVar11 = puVar13[-1];
        if (lVar11 == DAT_1469e97d8) {
          uVar3 = *(uint *)(param_1 + 0x288);
          puVar1 = (uint *)(param_1 + 0x270);
          uStack_104 = 1;
          local_108 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0;
          if (uVar3 != 0) {
            puVar15 = *(uint **)(param_1 + 0x280);
            if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
              puVar15 = puVar1;
            }
            uVar14 = *puVar15;
            plVar10 = plVar6;
            while (uVar14 == 0) {
              iVar5 = (int)plVar6;
              uStack_f0 = (int)plVar10 + 0x20;
              plVar10 = (longlong *)(ulonglong)uStack_f0;
              local_108 = iVar5 + 1;
              plVar6 = (longlong *)(ulonglong)local_108;
              if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
              goto LAB_1428acc38;
              uVar14 = puVar15[(longlong)iVar5 + 1];
            }
            uStack_104 = -uVar14 & uVar14;
            iVar5 = 0x1f;
            if (uStack_104 != 0) {
              for (; uStack_104 >> iVar5 == 0; iVar5 = iVar5 + -1) {
              }
            }
            if (uStack_104 == 0) {
              iVar5 = 0x20;
            }
            else {
              iVar5 = 0x1f - iVar5;
            }
            uStack_f4 = (uStack_f0 - iVar5) + 0x1f;
            if ((int)uVar3 < (int)uStack_f4) {
LAB_1428acc38:
              uStack_f4 = uVar3;
            }
          }
          uStack_d4 = *(uint *)(param_1 + 0x288);
          uStack_70 = CONCAT44(uStack_f4,0xffffffff);
          local_68 = CONCAT44(uStack_ec,uStack_f0);
          uVar14 = uStack_d4 & 0xffffffe0;
          uStack_80 = local_108;
          uStack_7c = uStack_104;
          local_78 = puVar1;
          local_88 = plVar9;
          if (uStack_d4 != uVar3) {
            puVar15 = *(uint **)(param_1 + 0x280);
            if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
              puVar15 = puVar1;
            }
            uVar8 = puVar15[(int)uStack_d4 >> 5] & -1 << ((byte)uStack_d4 & 0x1f);
            iVar5 = (int)uStack_d4 >> 5;
            while (uVar8 == 0) {
              uVar14 = uVar14 + 0x20;
              if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
              goto LAB_1428acd35;
              uVar8 = puVar15[(longlong)iVar5 + 1];
              iVar5 = iVar5 + 1;
            }
            uVar8 = -uVar8 & uVar8;
            local_98 = 0x1f;
            if (uVar8 != 0) {
              for (; uVar8 >> local_98 == 0; local_98 = local_98 + -1) {
              }
            }
            if (uVar8 == 0) {
              iVar5 = 0x20;
            }
            else {
              iVar5 = 0x1f - local_98;
            }
            uStack_d4 = (uVar14 - iVar5) + 0x1f;
            if ((int)uVar3 < (int)uStack_d4) {
LAB_1428acd35:
              uStack_d4 = uVar3;
            }
          }
          while( true ) {
            if (((uStack_70._4_4_ == uStack_d4) && (local_78 == puVar1)) && (local_88 == plVar9))
            break;
            lVar11 = (longlong)(int)uStack_70._4_4_ * 0xf0 + *local_88;
            cVar4 = FKey::IsFloatAxis(lVar11);
            if (cVar4 == '\0') {
              cVar4 = FKey::IsVectorAxis(lVar11);
              if ((cVar4 == '\0') && ((*(byte *)(lVar11 + 0x34) & 4) == 0)) {
                local_c0 = *puVar16;
                local_b8 = local_b8 ^ (*(byte *)(puVar13 + -2) ^ local_b8) & 0xf;
                local_b0 = puVar13[-1];
                local_a8 = *puVar13;
                local_a0 = (longlong *)puVar13[1];
                if (local_a0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                  UNLOCK();
                }
                FKey::operator=(&local_b0,lVar11);
                FUN_1428acf80(param_1,&local_c0,param_2,param_3,param_4,param_5,lVar11 + 0x18);
                plVar6 = local_a0;
                if (local_a0 != (longlong *)0x0) {
                  LOCK();
                  plVar10 = local_a0 + 1;
                  lVar11 = *plVar10;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_a0)(local_a0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar6 + 0xc);
                    iVar5 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      (**(code **)(*local_a0 + 8))(local_a0,1);
                    }
                  }
                }
              }
            }
            uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
          }
        }
        else {
          if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
            lVar7 = *(longlong *)(param_1 + 0x2a0);
            if (*(longlong *)(param_1 + 0x2a0) == 0) {
              lVar7 = param_1 + 0x298;
            }
            iVar5 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                                     (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
            if (iVar5 != -1) {
              do {
                plVar10 = (longlong *)((longlong)iVar5 * 0xf0 + *plVar9);
                if (*plVar10 == lVar11) {
                  if (iVar5 != -1) goto LAB_1428acec7;
                  break;
                }
                iVar5 = (int)plVar10[0x1d];
              } while (iVar5 != -1);
            }
          }
          plVar10 = plVar6;
LAB_1428acec7:
          local_58 = *puVar13;
          local_50 = puVar13[1];
          plVar12 = plVar10 + 3;
          if (plVar10 == (longlong *)0x0) {
            plVar12 = plVar6;
          }
          if (local_50 != 0) {
            LOCK();
            *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
            UNLOCK();
          }
          local_60 = lVar11;
          cVar4 = FUN_1428b22c0(param_1,&local_60,plVar12);
          if (cVar4 == '\0') {
            FUN_1428acf80(param_1,puVar16,param_2,param_3,param_4,param_5,plVar12);
          }
        }
        puVar16 = puVar16 + 5;
        puVar13 = puVar13 + 5;
      } while (puVar16 != local_90);
    }
  }
  return;
}



// FUNCTION 1428acf80 FUN_1428acf80 body=1343 status=ok
// SIG undefined FUN_1428acf80(void)

void FUN_1428acf80(longlong param_1,longlong param_2,byte *param_3,char param_4,longlong *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  uint local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  byte local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_140 [8];
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [16];
  undefined1 local_f0 [40];
  byte *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  byte local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  
  bVar6 = false;
  if ((((((*(byte *)(param_2 + 8) & 4) == 0) || (cVar7 = FUN_1428b1ff0(), cVar7 != '\0')) &&
       (((*(byte *)(param_2 + 8) & 2) == 0 || (cVar7 = FUN_1428b2110(param_1), cVar7 != '\0')))) &&
      (((*(byte *)(param_2 + 8) & 1) == 0 || (cVar7 = FUN_1428b29d0(param_1), cVar7 != '\0')))) &&
     (((*(byte *)(param_2 + 8) & 8) == 0 || (cVar7 = FUN_1428b2080(param_1), cVar7 != '\0')))) {
    local_128 = *(undefined8 *)(param_2 + 0x10);
    bVar3 = param_3[2];
    local_120 = *(undefined8 *)(param_2 + 0x18);
    local_118 = *(longlong *)(param_2 + 0x20);
    if (local_118 != 0) {
      LOCK();
      *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
      UNLOCK();
    }
    cVar7 = FUN_1428b3730(param_1,&local_128,bVar3,param_1 + 0x390,param_7);
    if (cVar7 != '\0') {
      local_1b8 = *(undefined8 *)(param_2 + 0x10);
      local_1b0 = *(undefined8 *)(param_2 + 0x18);
      plVar4 = *(longlong **)(param_2 + 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      bVar3 = *(byte *)(param_2 + 8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_1a0 = (((bVar3 >> 3 & 1) * 2 | bVar3 >> 2 & 1) * 2 | bVar3 >> 1 & 1) * 2 | bVar3 & 1 |
                  local_1a0 & 0xfffffff0;
      local_1a8 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
      iVar11 = (int)param_5[1];
joined_r0x0001428ad137:
      do {
        iVar11 = iVar11 + -1;
        if (iVar11 < 0) {
          if ((param_4 == '\0') || ((*param_3 & 2) != 0)) {
            local_198 = 0;
            bVar6 = false;
            local_190 = 0;
            TBaseDelegate<FSlateBrush_const_*>::operator=(&local_198,param_3 + 0x10);
            local_188 = 0;
            local_180 = 0;
            if ((param_3 + 0x20 != (byte *)&local_188) &&
               ((*(int *)(param_3 + 0x28) != 0 &&
                (plVar4 = *(longlong **)(param_3 + 0x20), plVar4 != (longlong *)0x0)))) {
              (**(code **)(*plVar4 + 0x30))(plVar4,&local_188);
            }
            local_178 = *(undefined4 *)(param_3 + 0x30);
            puVar9 = &local_198;
            local_174 = *(undefined4 *)(param_3 + 0x34);
            bVar5 = true;
            local_170 = *(undefined8 *)(param_3 + 0x38);
            local_168 = param_3[0x40];
          }
          else {
            local_160 = 0;
            bVar5 = false;
            local_158 = 0;
            local_150 = 0;
            local_148 = 0;
            FWeakObjectPtr::operator=(local_140,0);
            puVar9 = &local_160;
            local_138 = 0;
            local_130 = 0;
            bVar6 = true;
          }
          bVar3 = param_3[2];
          local_108 = **(undefined4 **)(param_1 + 0x390);
          local_104 = (undefined4)param_5[1];
          FInputActionUnifiedDelegate::FInputActionUnifiedDelegate(local_100,puVar9);
          local_c0 = local_1b8;
          local_b8 = local_1b0;
          local_b0 = local_1a8;
          if (local_1a8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
            UNLOCK();
          }
          local_98 = 0;
          local_a8 = local_a8 ^ (local_a8 ^ local_1a0) & 0xf;
          local_90 = 0;
          local_c8 = param_3;
          local_a0 = bVar3;
          FWeakObjectPtr::operator=(local_88,0);
          local_80 = 0;
          local_68 = 0;
          local_60 = 0;
          FWeakObjectPtr::operator=(local_58,0);
          local_50 = 0;
          if (bVar5) {
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_188);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_198);
          }
          if (bVar6) {
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_150);
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_160);
          }
          iVar11 = (int)param_5[1];
          *(int *)(param_5 + 1) = iVar11 + 1;
          if (*(int *)((longlong)param_5 + 0xc) < iVar11 + 1) {
            FUN_140ae1ad0(param_5,iVar11);
          }
          FUN_14289a6b0((longlong)iVar11 * 200 + *param_5,&local_108);
          iVar11 = 1;
          if (1 < *(int *)(param_1 + 0x398)) {
            lVar10 = 4;
            do {
              iVar8 = (int)param_5[1];
              local_108 = *(undefined4 *)(lVar10 + *(longlong *)(param_1 + 0x390));
              *(int *)(param_5 + 1) = iVar8 + 1;
              if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
                FUN_140ae1ad0(param_5,iVar8);
              }
              FUN_14289a6b0((longlong)iVar8 * 200 + *param_5,&local_108);
              iVar11 = iVar11 + 1;
              lVar10 = lVar10 + 4;
            } while (iVar11 < *(int *)(param_1 + 0x398));
          }
          bVar6 = true;
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
          plVar4 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_b0 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(local_f0);
          TBaseDelegate<FText>::~TBaseDelegate<FText>(local_100);
LAB_1428ad403:
          plVar4 = local_1a8;
          if (local_1a8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1a8 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_1a8)(local_1a8);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          break;
        }
        iVar8 = FInputChord::GetRelationship(&local_1b8,*param_5 + 0x48 + (longlong)iVar11 * 200);
        if (iVar8 == 3) {
          FUN_1428b9e60(param_5,iVar11,1,0);
          goto joined_r0x0001428ad137;
        }
        if (iVar8 == 2) goto LAB_1428ad403;
      } while( true );
    }
  }
  if (((*param_3 & 1) != 0) &&
     ((bVar6 || (((*(byte *)(param_2 + 8) & 0xf) == 0 && (param_3[2] != 3)))))) {
    TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>(param_6,param_2 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x398) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x39c)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x390,0);
  }
  return;
}



// FUNCTION 1428ad4d0 GetDPIScaleBasedOnSize body=134 status=ok
// SIG undefined GetDPIScaleBasedOnSize(void)

float UUserInterfaceSettings::GetDPIScaleBasedOnSize(longlong param_1,undefined8 param_2)

{
  float fVar1;
  char local_res8 [8];
  undefined8 local_res10;
  
  if (((*(char *)(param_1 + 0x250) == '\0') || ((int)param_2 != *(int *)(param_1 + 0x248))) ||
     ((int)((ulonglong)param_2 >> 0x20) != *(int *)(param_1 + 0x24c))) {
    fVar1 = (float)FUN_1428a05c0(param_1,param_2,local_res8);
    if (local_res8[0] == '\0') {
      *(float *)(param_1 + 0x254) = fVar1;
      if (&local_res10 != (undefined8 *)(param_1 + 0x248)) {
        *(undefined8 *)(param_1 + 0x248) = param_2;
        *(undefined1 *)(param_1 + 0x250) = 1;
      }
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x254);
  }
  fVar1 = fVar1 * *(float *)(param_1 + 0x188);
  if (fVar1 <= 0.01) {
    fVar1 = 0.01;
  }
  return fVar1;
}



// FUNCTION 1428ad560 GetDisplayNameTextByIndex body=290 status=ok
// SIG undefined GetDisplayNameTextByIndex(void)

undefined8
UUserDefinedEnum::GetDisplayNameTextByIndex(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong local_res8;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)FUN_1417392b0(param_1,local_18);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar2;
  }
  FName::FName(&local_res8,puVar5,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar3 = param_1 + 0x98;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)local_res8 >> 0x20) + (int)local_res8) &
                             (longlong)*(int *)(param_1 + 0xa8) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 0x28;
        if (*(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 0x28) == local_res8) {
          if (iVar1 != -1) goto LAB_1428ad633;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x20);
      } while (iVar1 != -1);
    }
  }
  lVar3 = 0;
LAB_1428ad633:
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  if (lVar4 == 0) {
    FUN_141737240(param_1,param_2,param_3);
    return param_2;
  }
  FText::FText(param_2,lVar4);
  return param_2;
}



// FUNCTION 1428ad690 FUN_1428ad690 body=527 status=ok
// SIG undefined FUN_1428ad690(void)

void FUN_1428ad690(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  iVar9 = 0;
  if (0 < (int)param_2[1]) {
    uVar8 = 1;
    lVar10 = 0;
    do {
      if ((param_4 & uVar8) != 0) {
        lVar4 = *(longlong *)(lVar10 + *param_2);
        lVar6 = *(longlong *)(param_5 + 0x88);
        if (*(longlong *)(param_5 + 0x88) == 0) {
          lVar6 = param_5 + 0x78;
        }
        FUN_1428a8550(*(undefined8 *)(lVar6 + lVar10),lVar4,*(undefined8 *)(param_1 + 0x3a0));
        if ((*(uint *)(param_1 + 0x18) & 0x300) != 0) {
          uVar2 = *(undefined4 *)(lVar4 + 0x1a38);
          uStack_40 = local_res10;
          local_res10[0] = 0;
          local_48 = 0x4060d670;
          uStack_44 = 1;
          lVar4 = FUN_1415d8310(&local_48,&DAT_146216a38);
          puVar7 = (undefined8 *)(*(longlong *)(lVar4 + 0x18) + 0xfU & 0xfffffffffffffff0);
          puVar1 = (ulonglong *)(lVar4 + 0x18);
          puVar5 = puVar7 + 0xce;
          if (*(undefined8 **)(lVar4 + 0x20) < puVar5) {
            FMemStackBase::AllocateNewChunk(puVar1,0x680);
            puVar7 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
            puVar5 = puVar7 + 0xce;
          }
          *puVar1 = (ulonglong)puVar5;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &PTR_FUN_1451e4be0;
            *(undefined4 *)(puVar7 + 2) = uVar2;
            puVar7[3] = 0;
            puVar7[4] = 0;
            *(undefined1 *)(puVar7 + 6) = 0;
            puVar7[0x67] = 0;
            *(undefined2 *)(puVar7 + 0x68) = 1;
            *(undefined1 *)((longlong)puVar7 + 0x342) = 0;
            puVar7[0xc9] = 0;
            puVar7[0xca] = 0;
            puVar7[0xcb] = 0;
            puVar7[1] = &PTR_FUN_14513ab28;
            puVar7[0xcc] = 0;
          }
          iVar3 = *(int *)(param_5 + 0xd0);
          *(int *)(param_5 + 0xd0) = iVar3 + 1;
          if (*(int *)(param_5 + 0xd4) < iVar3 + 1) {
            FUN_140822430(param_5 + 200,iVar3);
          }
          *(undefined8 **)(*(longlong *)(param_5 + 200) + (longlong)iVar3 * 8) = puVar7;
          (**(code **)(puVar7[1] + 0x28))(puVar7 + 1);
          FUN_1428aefc0(puVar7 + 1,*(undefined8 *)(param_1 + 0x3a0),iVar9,param_5);
        }
      }
      iVar9 = iVar9 + 1;
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      lVar10 = lVar10 + 8;
    } while (iVar9 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1428ad8a0 GetFontCache body=153 status=ok
// SIG undefined GetFontCache(void)

undefined8 * FEngineFontServices::GetFontCache(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  puVar5 = (undefined8 *)FUN_1418375f0(*param_1,local_18);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1428ad940 FUN_1428ad940 body=240 status=ok
// SIG undefined FUN_1428ad940(void)

undefined4 FUN_1428ad940(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
    lVar2 = *param_2;
    lVar4 = *(longlong *)(param_1 + 0x2a0);
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      lVar4 = param_1 + 0x298;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0xf0 + *(longlong *)(param_1 + 0x260));
        if (*plVar6 == lVar2) {
          if (iVar3 != -1) goto LAB_1428ad9c7;
          break;
        }
        iVar3 = (int)plVar6[0x1d];
      } while (iVar3 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_1428ad9c7:
  plVar5 = plVar6 + 3;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)((longlong)plVar5 + 0xc);
  }
  plVar6 = (longlong *)param_2[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 1428ada30 GetKeysForAction body=179 status=ok
// SIG undefined GetKeysForAction(void)

longlong * UPlayerInput::GetKeysForAction(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((*(byte *)(param_1 + 0x2b4) & 1) == 0) {
    ConditionalBuildKeyMappings_Internal();
  }
  if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 500)) {
    lVar2 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar2 = param_1 + 0x1f8;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x208) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x1c0));
        if (*plVar4 == param_2) {
          if (iVar1 != -1) goto LAB_1428adac1;
          break;
        }
        iVar1 = (int)plVar4[7];
      } while (iVar1 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1428adac1:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)&DAT_146b18a10;
  }
  return plVar3;
}



// FUNCTION 1428adb00 GetOption body=198 status=ok
// SIG undefined GetOption(void)

wchar_t * FURL::GetOption(longlong param_1,wchar_t *param_2,wchar_t *param_3)

{
  int iVar1;
  longlong lVar2;
  wchar_t *_Str1;
  size_t _MaxCount;
  int iVar3;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_2[lVar2] != L'\0');
  if ((0 < (int)lVar2) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x50))) {
    _MaxCount = (size_t)(int)lVar2;
    lVar2 = 0;
    do {
      if (*(int *)(lVar2 + 8 + *(longlong *)(param_1 + 0x48)) == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)(lVar2 + *(longlong *)(param_1 + 0x48));
      }
      iVar1 = _wcsnicmp(_Str1,param_2,_MaxCount);
      if ((iVar1 == 0) &&
         (((_Str1[_MaxCount - 1] == L'=' || (_Str1[_MaxCount] == L'=')) ||
          (_Str1[_MaxCount] == L'\0')))) {
        return _Str1 + _MaxCount;
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x50));
  }
  return param_3;
}



// FUNCTION 1428adbd0 FUN_1428adbd0 body=334 status=ok
// SIG undefined FUN_1428adbd0(void)

ulonglong FUN_1428adbd0(longlong param_1,float param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong in_RAX;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  
  if (*(char *)(param_1 + 0x94) != '\0') {
    uVar7 = 1;
    piVar5 = (int *)(**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                              (*(longlong **)(param_1 + 0x58),local_res8);
    iVar1 = *piVar5;
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
                      (*(longlong **)(param_1 + 0x58),local_res8);
    iVar2 = *(int *)(lVar6 + 4);
    if (((iVar1 != *(int *)(param_1 + 0x120)) || (iVar2 != *(int *)(param_1 + 0x124))) ||
       (param_2 != (float)*(int *)(param_1 + 0x128))) {
      uVar7 = 0;
      if ((DAT_146b17150 != 0) &&
         (plVar3 = *(longlong **)(DAT_146b17150 + 0xab8), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x70))(plVar3,iVar1,iVar2,param_2,param_1 + 0xa0);
        *(int *)(param_1 + 0x120) = iVar1;
        uVar7 = 1;
        *(int *)(param_1 + 0x124) = iVar2;
        *(int *)(param_1 + 0x128) = (int)param_2;
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0xa8);
    *param_3 = *(undefined8 *)(param_1 + 0xa0);
    param_3[1] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    param_3[2] = *(undefined8 *)(param_1 + 0xb0);
    param_3[3] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 200);
    param_3[4] = *(undefined8 *)(param_1 + 0xc0);
    param_3[5] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0xd8);
    param_3[6] = *(undefined8 *)(param_1 + 0xd0);
    param_3[7] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0xe8);
    param_3[8] = *(undefined8 *)(param_1 + 0xe0);
    param_3[9] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0xf8);
    param_3[10] = *(undefined8 *)(param_1 + 0xf0);
    param_3[0xb] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x108);
    param_3[0xc] = *(undefined8 *)(param_1 + 0x100);
    param_3[0xd] = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x118);
    param_3[0xe] = *(undefined8 *)(param_1 + 0x110);
    param_3[0xf] = uVar4;
    return uVar7;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1428add20 FUN_1428add20 body=398 status=ok
// SIG undefined FUN_1428add20(void)

longlong FUN_1428add20(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_res18 [16];
  int *local_38;
  int *local_30;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  if (((iVar1 < 0) || (*(int *)(param_1 + 0x148) <= iVar1)) ||
     (lVar3 = *(longlong *)(param_1 + 0x140) + (longlong)iVar1 * 0x18,
     *(int *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar1 * 0x18) != param_2)) {
    local_res8[0] = -1;
    if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
      lVar3 = *(longlong *)(param_1 + 400);
      if (*(longlong *)(param_1 + 400) == 0) {
        lVar3 = param_1 + 0x188;
      }
      iVar1 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x198) - 1U & (longlong)param_2) * 4);
      if (iVar1 != -1) {
        do {
          piVar4 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x150));
          if (*piVar4 == param_2) {
            if (iVar1 != -1) goto LAB_1428addd1;
            break;
          }
          iVar1 = piVar4[2];
        } while (iVar1 != -1);
      }
    }
    piVar4 = (int *)0x0;
LAB_1428addd1:
    piVar2 = piVar4 + 1;
    if (piVar4 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    if (piVar2 == (int *)0x0) {
      iVar1 = *(int *)(param_1 + 0x148);
      *(int *)(param_1 + 0x148) = iVar1 + 1;
      local_res10[0] = param_2;
      if (*(int *)(param_1 + 0x14c) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x140,iVar1);
      }
      piVar4 = (int *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar1 * 0x18);
      if (piVar4 != (int *)0x0) {
        *piVar4 = local_res10[0];
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[4] = 0;
        piVar4[5] = 0;
      }
      local_res8[0] = *(int *)(param_1 + 0x148) + -1;
      local_38 = local_res10;
      local_30 = local_res8;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_&&>_>
                ((longlong *)(param_1 + 0x150),local_res18,&local_38,0);
    }
    else {
      local_res8[0] = *piVar2;
    }
    *(int *)(param_1 + 0x1a0) = local_res8[0];
    lVar3 = *(longlong *)(param_1 + 0x140) + (longlong)local_res8[0] * 0x18;
  }
  return lVar3;
}



// FUNCTION 1428adeb0 FUN_1428adeb0 body=960 status=ok
// SIG undefined FUN_1428adeb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1428adeb0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_228 [32];
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined **local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined1 local_15f;
  undefined1 local_15e;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined1 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined **local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  *(undefined4 *)param_2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_2 + 4) = DAT_1468b5d88._4_4_;
  if ((*(longlong *)(param_1 + 0x1c0) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x260) != 0)) {
    local_1d8 = *(undefined4 *)(param_1 + 0x10);
    local_1e0 = *(undefined4 *)(param_1 + 8);
    local_1dc = *(undefined4 *)(param_1 + 0xc);
    local_1d4 = *(undefined4 *)(param_1 + 0x14);
    local_1d0 = *(undefined1 *)(param_1 + 0x18);
    local_1c8 = *(undefined8 *)(param_1 + 0x20);
    local_1c0 = *(undefined8 *)(param_1 + 0x28);
    uStack_1b8 = *(undefined8 *)(param_1 + 0x30);
    local_160 = *(undefined1 *)(param_1 + 0x88);
    local_15f = *(undefined1 *)(param_1 + 0x89);
    local_1ac = *(undefined4 *)(param_1 + 0x3c);
    local_198 = *(undefined8 *)(param_1 + 0x50);
    uStack_190 = *(undefined8 *)(param_1 + 0x58);
    local_15e = *(undefined1 *)(param_1 + 0x8a);
    local_14c = *(undefined1 *)(param_1 + 0x9c);
    local_180 = *(undefined8 *)(param_1 + 0x68);
    uStack_178 = *(undefined8 *)(param_1 + 0x70);
    local_130 = *(undefined4 *)(param_1 + 0xb8);
    local_12c = *(undefined4 *)(param_1 + 0xbc);
    local_15c = *(undefined8 *)(param_1 + 0x8c);
    uStack_154 = *(undefined8 *)(param_1 + 0x94);
    local_128 = *(undefined1 *)(param_1 + 0xc0);
    local_148 = *(undefined4 *)(param_1 + 0xa0);
    local_120 = *(undefined8 *)(param_1 + 200);
    local_1b0 = *(undefined4 *)(param_1 + 0x38);
    local_138 = *(undefined4 *)(param_1 + 0xb0);
    local_1a8 = *(undefined8 *)(param_1 + 0x40);
    uStack_1a0 = *(undefined8 *)(param_1 + 0x48);
    local_118 = *(undefined8 *)(param_1 + 0xd0);
    uStack_110 = *(undefined8 *)(param_1 + 0xd8);
    local_140 = &PTR_FUN_1451e2200;
    local_e8 = *(undefined8 *)(param_1 + 0x100);
    local_e0 = *(undefined8 *)(param_1 + 0x108);
    local_188 = *(undefined8 *)(param_1 + 0x60);
    local_108 = *(undefined8 *)(param_1 + 0xe0);
    uStack_100 = *(undefined8 *)(param_1 + 0xe8);
    local_d0 = *(undefined4 *)(param_1 + 0x118);
    local_170 = *(undefined8 *)(param_1 + 0x78);
    uStack_168 = *(undefined8 *)(param_1 + 0x80);
    local_c0 = *(undefined8 *)(param_1 + 0x128);
    local_f8 = *(undefined4 *)(param_1 + 0xf0);
    local_144 = *(undefined4 *)(param_1 + 0xa4);
    local_f0 = *(undefined4 *)(param_1 + 0xf8);
    local_134 = *(undefined4 *)(param_1 + 0xb4);
    local_d8 = *(undefined8 *)(param_1 + 0x110);
    local_f4 = *(undefined4 *)(param_1 + 0xf4);
    local_cc = *(undefined4 *)(param_1 + 0x11c);
    local_c8 = *(undefined4 *)(param_1 + 0x120);
    local_1e8 = &PTR_FUN_1444d5500;
    FText::FText(local_b8,param_1 + 0x130);
    local_a0 = *(undefined8 *)(param_1 + 0x148);
    local_48 = 0;
    if (*(char *)(param_1 + 0x1a0) != '\0') {
      local_98 = *(undefined8 *)(param_1 + 0x150);
      local_88 = *(undefined4 *)(param_1 + 0x160);
      uStack_84 = *(undefined4 *)(param_1 + 0x164);
      uStack_80 = *(undefined4 *)(param_1 + 0x168);
      uStack_7c = *(undefined4 *)(param_1 + 0x16c);
      local_90 = *(undefined8 *)(param_1 + 0x158);
      local_78 = *(undefined8 *)(param_1 + 0x170);
      uStack_70 = *(undefined8 *)(param_1 + 0x178);
      local_68 = *(undefined8 *)(param_1 + 0x180);
      local_60 = *(longlong *)(param_1 + 0x188);
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      local_58 = *(undefined8 *)(param_1 + 400);
      local_50 = *(undefined4 *)(param_1 + 0x198);
      local_4c = *(undefined1 *)(param_1 + 0x19c);
      local_48 = 1;
    }
    uVar7 = 0x3f800000;
    local_148 = 0x3f800000;
    local_144 = 0x3f800000;
    uVar5 = FText::FromString(local_200,param_3);
    FText::operator=(local_b8,uVar5);
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1f8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar2 = (int *)((longlong)local_1f8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1f8 + 8))(local_1f8,1);
        }
      }
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 0x260);
    if (*(char *)(lVar4 + 0x94) == '\0') {
      uVar7 = *(undefined4 *)(lVar4 + 0x138);
    }
    puVar6 = (undefined8 *)FUN_1428ae600(&local_1e8,local_208,uVar7);
    *param_2 = *puVar6;
    FUN_140c64b70(&local_1e8);
  }
  return param_2;
}



// FUNCTION 1428ae270 FUN_1428ae270 body=793 status=ok
// SIG undefined FUN_1428ae270(void)

longlong * FUN_1428ae270(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  short *psVar9;
  longlong lVar10;
  void *_Dst;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  longlong local_res8;
  longlong local_a8;
  int local_a0;
  int local_9c;
  void *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68 [2];
  short *local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  local_res8 = param_1[3];
  FName::ToString(&local_res8,&local_58);
  psVar9 = &DAT_143f3eda8;
  if (local_50 != 0) {
    psVar9 = local_58;
  }
  local_70 = 0;
  local_78 = 0;
  if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar9[lVar8] != 0);
    uVar6 = (int)lVar8 + 1;
    local_70 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    }
    FGenericPlatformString::Memcpy(local_78,psVar9,(longlong)(int)uVar6 * 2);
  }
  uVar4 = UObjectBaseUtility::GetOutermost(param_1);
  UObjectBaseUtility::GetPathName(uVar4,&local_88,0);
  cVar2 = FString::StartsWith(&local_88,L"/Temp/__TEMP_BP__",0);
  if (cVar2 != '\0') {
    local_68[0] = 0;
    local_68[1] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Memcpy(local_68[0],L"/Temp/__TEMP_BP__",0x24);
    FString::RemoveFromStart(&local_88,local_68,0);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  FPackageName::GetLongPackageAssetName(local_48,&local_88);
  FString::RemoveFromEnd(&local_88,local_48,1);
  puVar13 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar13 = local_88;
  }
  uVar3 = FUN_140438070(puVar13);
  FString::PrintfImpl(&local_98,&DAT_1451e02ac,uVar3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar4 = (**(code **)(*param_1 + 0x2c0))(param_1);
  plVar5 = (longlong *)UnicodeToCPPIdentifier(local_38,&local_78,0,uVar4);
  iVar1 = (int)plVar5[1];
  if (iVar1 < 2) {
    *param_2 = (longlong)local_98;
    *(int *)(param_2 + 1) = (int)local_90;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_90._4_4_;
    local_90 = 0;
    local_98 = (void *)0x0;
  }
  else {
    iVar7 = 0;
    if ((int)local_90 != 0) {
      iVar7 = (int)local_90 + -1;
    }
    if ((iVar1 != 0) || (iVar12 = 1, iVar7 == 0)) {
      iVar12 = 0;
    }
    local_a8 = *plVar5;
    *plVar5 = 0;
    local_9c = *(int *)((longlong)plVar5 + 0xc);
    plVar5[1] = 0;
    local_a0 = iVar1;
    if (local_9c < iVar1 + iVar12 + iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8);
    }
    _Src = local_98;
    iVar1 = local_a0;
    lVar8 = local_a8;
    iVar11 = local_9c;
    iVar12 = local_a0;
    if (iVar7 != 0) {
      lVar10 = (longlong)local_a0;
      local_a0 = local_a0 + (uint)(local_a0 == 0) + iVar7;
      if (local_9c < local_a0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,iVar1);
      }
      iVar11 = local_9c;
      iVar12 = local_a0;
      lVar8 = local_a8;
      _Dst = (void *)((lVar10 - (ulonglong)(iVar1 != 0)) * 2 + local_a8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = lVar8;
    *(int *)(param_2 + 1) = iVar12;
    *(int *)((longlong)param_2 + 0xc) = iVar11;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_58 != (short *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1428ae5a0 FUN_1428ae5a0 body=91 status=ok
// SIG undefined FUN_1428ae5a0(void)

int FUN_1428ae5a0(longlong param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if ((*(byte *)(*(longlong *)(param_1 + 0x148) + 0x110) & 1) != 0) {
    if (iVar2 == 1) {
      iVar2 = param_2 + 5;
    }
    else if (iVar2 == 2) {
      iVar2 = param_2 + 7;
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x148) + 0x30) == '\x01') {
    cVar1 = FUN_141a90f50();
    return (cVar1 != '\0') + 0xb;
  }
  return iVar2;
}



// FUNCTION 1428ae600 FUN_1428ae600 body=1318 status=ok
// SIG undefined FUN_1428ae600(void)

float * FUN_1428ae600(longlong param_1,float *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  wint_t wVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  bool bVar17;
  wint_t *pwVar18;
  char cVar19;
  int iVar20;
  float *pfVar21;
  undefined8 *puVar22;
  undefined1 *puVar23;
  wint_t *pwVar24;
  wint_t *pwVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined4 *puVar29;
  wint_t *pwVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_res8 [2];
  float local_res10 [2];
  float local_res20 [2];
  undefined8 in_stack_fffffffffffffe18;
  undefined4 uVar34;
  float local_1d8 [2];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_184 [4];
  longlong *local_180;
  longlong *local_178;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0 [4];
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [108];
  
  fVar3 = DAT_1468b5d88._4_4_;
  uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffe18 >> 0x20);
  local_res8[0] = 0.0;
  lVar6 = *(longlong *)(param_1 + 0x148);
  *param_2 = (float)DAT_1468b5d88;
  cVar19 = *(char *)(lVar6 + 0x30);
  param_2[1] = fVar3;
  if (cVar19 == '\0') {
    fVar3 = *(float *)(param_1 + 0xa0);
    fVar4 = *(float *)(param_1 + 0xa4);
    puVar22 = (undefined8 *)FText::ToString(param_1 + 0x130);
    if (*(int *)(puVar22 + 1) == 0) {
      pwVar24 = &DAT_143f3eda8;
    }
    else {
      pwVar24 = (wint_t *)*puVar22;
    }
    lVar26 = -1;
    do {
      lVar26 = lVar26 + 1;
    } while (pwVar24[lVar26] != 0);
    fVar33 = 0.0;
    fVar32 = 0.0;
    if (lVar6 != 0) {
      FUN_14244e9c0(lVar6,0x30,local_res20,local_1d8);
      if (local_res20[0] == 0.0) {
        FUN_14244e9c0(lVar6,0x41,local_res20,local_1d8);
      }
      if (*pwVar24 != 0) {
        pwVar18 = pwVar24;
        pwVar30 = (wint_t *)0x0;
        do {
          pwVar25 = pwVar18;
          if (pwVar24 + (int)lVar26 <= pwVar25) break;
          wVar5 = *pwVar25;
          FUN_14244e9c0(lVar6,wVar5,local_res8,local_res10);
          if ((local_res10[0] == 0.0) && (wVar5 == 10)) {
            local_res10[0] = local_1d8[0];
          }
          fVar31 = 0.0;
          if (pwVar30 != (wint_t *)0x0) {
            cVar19 = FUN_14244e820(lVar6,*pwVar30,wVar5);
            fVar31 = (float)(int)cVar19 * fVar3;
          }
          pwVar18 = pwVar25 + 1;
          local_res8[0] = local_res8[0] * fVar3;
          local_res10[0] = local_res10[0] * fVar4;
          iVar20 = iswspace(*pwVar18);
          if ((iVar20 == 0) && (*pwVar18 != 0)) {
            local_res8[0] = local_res8[0] + fVar31;
          }
          fVar33 = fVar33 + local_res8[0];
          if (fVar32 < local_res10[0]) {
            fVar32 = local_res10[0];
          }
          pwVar30 = pwVar25;
        } while (*pwVar18 != 0);
      }
    }
    *param_2 = fVar33;
    param_2[1] = fVar32;
  }
  else if (cVar19 == '\x01') {
    if (*(char *)(param_1 + 0x1a0) == '\0') {
      puVar29 = &local_170;
      local_170 = 0;
      local_16c = 0;
      local_168 = 0;
      local_160 = DAT_1464aa6e0;
      uStack_15c = DAT_1464aa6e4;
      uStack_158 = DAT_1464aa6e8;
      uStack_154 = DAT_1464aa6ec;
      FSlateFontInfo::FSlateFontInfo
                (&local_f0,lVar6,*(undefined4 *)(lVar6 + 0x13c),lVar6 + 0x140,puVar29);
      uVar34 = (undefined4)((ulonglong)puVar29 >> 0x20);
      puVar22 = local_e0;
      puVar27 = &local_c0;
      puVar28 = &local_b0;
      puVar29 = &local_a8;
      bVar17 = false;
      bVar16 = true;
      puVar23 = local_a4;
    }
    else {
      local_198 = *(longlong **)(param_1 + 0x188);
      local_f0 = *(undefined8 *)(param_1 + 0x150);
      local_e8 = *(undefined8 *)(param_1 + 0x158);
      local_c0 = *(undefined8 *)(param_1 + 0x180);
      local_1a0 = local_c0;
      local_1c0 = *(undefined8 *)(param_1 + 0x160);
      uStack_1b8 = *(undefined8 *)(param_1 + 0x168);
      local_1b0 = *(undefined8 *)(param_1 + 0x170);
      uStack_1a8 = *(undefined8 *)(param_1 + 0x178);
      if (local_198 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_198 + 1) = (int)local_198[1] + 1;
        UNLOCK();
      }
      puVar27 = &local_1a0;
      local_190 = *(undefined8 *)(param_1 + 400);
      puVar28 = &local_190;
      puVar29 = &local_188;
      local_188 = *(undefined4 *)(param_1 + 0x198);
      puVar23 = local_184;
      bVar17 = true;
      bVar16 = false;
      local_184[0] = *(undefined1 *)(param_1 + 0x19c);
      puVar22 = &local_1c0;
      local_1d0 = local_f0;
      local_1c8 = local_e8;
    }
    local_148 = local_f0;
    local_140 = local_e8;
    local_118 = local_c0;
    uVar8 = *(undefined4 *)puVar22;
    uVar9 = *(undefined4 *)((longlong)puVar22 + 4);
    uVar10 = *(undefined4 *)(puVar22 + 1);
    uVar11 = *(undefined4 *)((longlong)puVar22 + 0xc);
    uVar12 = *(undefined4 *)(puVar22 + 2);
    uVar13 = *(undefined4 *)((longlong)puVar22 + 0x14);
    uVar14 = *(undefined4 *)(puVar22 + 3);
    uVar15 = *(undefined4 *)((longlong)puVar22 + 0x1c);
    plVar7 = (longlong *)puVar27[1];
    puVar27[1] = 0;
    local_110 = plVar7;
    *puVar27 = 0;
    local_108 = *puVar28;
    local_100 = *puVar29;
    local_fc = *puVar23;
    local_138 = uVar8;
    uStack_134 = uVar9;
    uStack_130 = uVar10;
    uStack_12c = uVar11;
    local_128 = uVar12;
    uStack_124 = uVar13;
    uStack_120 = uVar14;
    uStack_11c = uVar15;
    if ((bVar16) && (local_b8 != (longlong *)0x0)) {
      LOCK();
      plVar7 = local_b8 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    plVar7 = local_198;
    if ((bVar17) && (local_198 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_198 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_198 + 8))(local_198,1);
        }
      }
    }
    FUN_1418388a0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_180);
    pfVar21 = (float *)(**(code **)(*local_180 + 0x10))
                                 (local_180,local_f8,param_1 + 0x130,&local_148,
                                  CONCAT44(uVar34,param_3));
    fVar3 = *(float *)(param_1 + 0xa4);
    fVar4 = pfVar21[1];
    *param_2 = *pfVar21 * *(float *)(param_1 + 0xa0);
    param_2[1] = fVar3 * fVar4;
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_178 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar1 = (int *)((longlong)local_178 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
    plVar7 = local_110;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_110 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1428aeb30 FUN_1428aeb30 body=293 status=ok
// SIG undefined FUN_1428aeb30(void)

float FUN_1428aeb30(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  fVar7 = 0.0;
  if (lVar4 != 0) {
    if ((int)param_1[0x4d] != *(int *)((longlong)param_1 + 0x294)) {
      lVar2 = *param_2;
      plVar6 = (longlong *)param_1[0x54];
      if ((longlong *)param_1[0x54] == (longlong *)0x0) {
        plVar6 = param_1 + 0x53;
      }
      iVar3 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[0x55] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar3 * 0xf0 + param_1[0x4c]);
          if (*plVar6 == lVar2) {
            if (iVar3 != -1) goto LAB_1428aebe7;
            break;
          }
          iVar3 = (int)plVar6[0x1d];
        } while (iVar3 != -1);
      }
    }
    plVar6 = (longlong *)0x0;
LAB_1428aebe7:
    plVar5 = plVar6 + 3;
    if (plVar6 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    if ((plVar5 != (longlong *)0x0) && ((*(byte *)((longlong)plVar5 + 0x1c) & 1) != 0)) {
      fVar7 = *(float *)(lVar4 + 0x798) - *(float *)(plVar5 + 3);
    }
  }
  plVar6 = (longlong *)param_2[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return fVar7;
}



// FUNCTION 1428aec80 GetUniqueFilename body=113 status=ok
// SIG undefined GetUniqueFilename(void)

undefined8 * UExporter::GetUniqueFilename(undefined8 param_1,undefined8 *param_2,short *param_3)

{
  int iVar1;
  longlong lVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_3[lVar2] != 0);
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_2 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,param_3,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1428aed00 GetUsedMaterials body=85 status=ok
// SIG undefined GetUsedMaterials(void)

void UVectorFieldComponent::GetUsedMaterials(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(DAT_146b17150 + 0x3f8);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 1428aed60 GetUserDefinedStructTypeHash body=598 status=ok
// SIG undefined GetUserDefinedStructTypeHash(void)

uint UUserDefinedStruct::GetUserDefinedStructTypeHash(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (param_2 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = *(longlong *)(param_2 + 0x38);
  }
  local_28 = 0xffffffff;
  local_24 = 0x101;
  local_22 = 0;
  local_38 = param_2;
  FUN_140472e10(&local_38);
  lVar2 = local_30;
  uVar8 = 0;
  do {
    if (lVar2 == 0) {
      return uVar8;
    }
    uVar9 = 0;
    uVar4 = 0;
    local_30 = lVar2;
    uVar5 = uVar4;
    if (lVar2 == 0) {
LAB_1428aee4b:
      if (((*(ulonglong *)(lVar2 + 0x38) >> 0x33 & 1) != 0) &&
         (iVar10 = 0, 0 < *(int *)(lVar2 + 0x30))) {
        do {
          uVar5 = FUN_1417586f0(lVar2,(longlong)*(int *)(lVar2 + 0x44) +
                                      *(int *)(lVar2 + 0x34) * iVar10 + param_1);
          if (uVar9 != 0) {
            uVar9 = uVar9 - uVar5 ^ uVar5 >> 0xd;
            uVar4 = (-0x61c88647 - uVar9) - uVar5 ^ uVar9 << 8;
            uVar7 = (uVar5 - uVar4) - uVar9 ^ uVar4 >> 0xd;
            uVar5 = (uVar9 - uVar4) - uVar7 ^ uVar7 >> 0xc;
            uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar5 << 0x10;
            uVar9 = (uVar7 - uVar4) - uVar5 ^ uVar4 >> 5;
            uVar5 = (uVar5 - uVar4) - uVar9 ^ uVar9 >> 3;
            uVar4 = (uVar4 - uVar5) - uVar9 ^ uVar5 << 10;
            uVar5 = (uVar9 - uVar4) - uVar5 ^ uVar4 >> 0xf;
          }
          uVar9 = uVar5;
          iVar10 = iVar10 + 1;
          uVar5 = uVar9;
        } while (iVar10 < *(int *)(lVar2 + 0x30));
      }
    }
    else {
      lVar3 = UBoolProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_1428aee4b;
      uVar6 = (ulonglong)*(uint *)(lVar2 + 0x30);
      uVar5 = uVar9;
      if (0 < (int)*(uint *)(lVar2 + 0x30)) {
        do {
          uVar6 = uVar6 - 1;
          uVar5 = uVar4;
        } while (uVar6 != 0);
      }
    }
    if (uVar8 != 0) {
      uVar8 = uVar8 - uVar5 ^ uVar5 >> 0xd;
      uVar4 = (-0x61c88647 - uVar8) - uVar5 ^ uVar8 << 8;
      uVar9 = (uVar5 - uVar4) - uVar8 ^ uVar4 >> 0xd;
      uVar8 = (uVar8 - uVar4) - uVar9 ^ uVar9 >> 0xc;
      uVar5 = (uVar4 - uVar8) - uVar9 ^ uVar8 << 0x10;
      uVar4 = (uVar9 - uVar5) - uVar8 ^ uVar5 >> 5;
      uVar8 = (uVar8 - uVar5) - uVar4 ^ uVar4 >> 3;
      uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 << 10;
      uVar5 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xf;
    }
    local_30 = *(longlong *)(lVar2 + 0x28);
    FUN_140472e10(&local_38);
    lVar2 = local_30;
    uVar8 = uVar5;
  } while( true );
}



// FUNCTION 1428aefc0 FUN_1428aefc0 body=681 status=ok
// SIG undefined FUN_1428aefc0(void)

void FUN_1428aefc0(longlong param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined1 local_b8 [8];
  float local_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  float local_20;
  float local_1c;
  
  lVar2 = *param_2;
  if ((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x30), lVar3 != 0)) {
    local_a8 = param_2[0x16];
    lStack_a0 = param_2[0x17];
    local_98 = param_2[0x18];
    lStack_90 = param_2[0x19];
    local_88 = param_2[0x1a];
    lStack_80 = param_2[0x1b];
    local_78 = param_2[0x1c];
    lStack_70 = param_2[0x1d];
    local_68 = param_2[6];
    lStack_60 = param_2[7];
    local_58 = param_2[8];
    lStack_50 = param_2[9];
    local_48 = param_2[10];
    lStack_40 = param_2[0xb];
    local_38 = param_2[0xc];
    lStack_30 = param_2[0xd];
    local_b0 = 1.0 / (float)*(int *)(lVar2 + 0x40);
    local_1c = *(float *)((longlong)param_2 + 0xf4) * *(float *)(lVar2 + 0x44);
    local_28 = CONCAT44(1.0 / (float)*(int *)(lVar2 + 0x3c),1.0 / (float)*(int *)(lVar2 + 0x38));
    local_20 = local_b0;
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res10,&local_a8,&DAT_146b18cb8,1);
    if (CONCAT44(uStackX_14,local_res10) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStackX_14,local_res10) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x658,local_b8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b8);
    *(longlong *)(param_1 + 0x660) = lVar3;
    iVar4 = FUN_1408bed80(param_4,1);
    puVar9 = (undefined8 *)
             ((ulonglong)(uint)(iVar4 % 0x59) * 0xb8 +
             *(longlong *)(*param_4 + (longlong)(iVar4 / 0x59) * 8));
    *(uint *)((longlong)puVar9 + 0x8c) = *(uint *)((longlong)puVar9 + 0x8c) & 0xffffff5f;
    puVar9[0x14] = param_1;
    uVar6 = (**(code **)(**(longlong **)(DAT_146b17150 + 0x3f8) + 0x2a8))
                      (*(longlong **)(DAT_146b17150 + 0x3f8),0,0);
    *(uint *)((longlong)puVar9 + 0x8c) = *(uint *)((longlong)puVar9 + 0x8c) & 0xfffc2fff;
    *(uint *)((longlong)puVar9 + 0x8c) = *(uint *)((longlong)puVar9 + 0x8c) | 0x2000;
    puVar9[0x15] = uVar6;
    local_res10 = 0;
    uStackX_14 = 1;
    puVar8 = (undefined8 *)puVar9[0xf];
    if ((undefined8 *)puVar9[0xf] == (undefined8 *)0x0) {
      puVar8 = puVar9;
    }
    *(int *)(puVar8 + 8) = *(int *)(lVar2 + 0x38) * *(int *)(lVar2 + 0x40) * *(int *)(lVar2 + 0x3c);
    iVar4 = *(int *)(puVar8 + 7);
    iVar5 = iVar4 + 1;
    *(int *)(puVar8 + 7) = iVar5;
    if (*(int *)((longlong)puVar8 + 0x3c) < iVar5) {
      TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
      ::ResizeGrow(puVar8 + 5);
    }
    puVar7 = (undefined8 *)puVar8[6];
    if ((undefined8 *)puVar8[6] == (undefined8 *)0x0) {
      puVar7 = puVar8 + 5;
    }
    puVar7[iVar4] = CONCAT44(uStackX_14,local_res10);
    *puVar8 = &PTR_PTR_146534c80;
    *(undefined4 *)(puVar8 + 9) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = 1;
    *(uint *)((longlong)puVar9 + 0x8c) = *(uint *)((longlong)puVar9 + 0x8c) & 0xffdfffff;
    FUN_142747330(param_4,param_3,puVar9);
  }
  return;
}



// FUNCTION 1428af270 FUN_1428af270 body=293 status=ok
// SIG undefined FUN_1428af270(void)

longlong * FUN_1428af270(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_28;
  undefined4 local_20;
  longlong local_1c;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
    lVar2 = *param_3;
    lVar4 = *(longlong *)(param_1 + 0x2a0);
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      lVar4 = param_1 + 0x298;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0xf0 + *(longlong *)(param_1 + 0x260));
        if (*plVar6 == lVar2) {
          if (iVar3 != -1) goto LAB_1428af307;
          break;
        }
        iVar3 = (int)plVar6[0x1d];
      } while (iVar3 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_1428af307:
  plVar5 = plVar6 + 3;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 == (longlong *)0x0) {
    local_28 = 0;
    plVar6 = &local_28;
    local_20 = 0;
  }
  else {
    local_14 = (int)plVar5[1];
    plVar6 = &local_1c;
    local_1c = *plVar5;
  }
  plVar5 = (longlong *)param_3[2];
  lVar2 = plVar6[1];
  *param_2 = *plVar6;
  *(int *)(param_2 + 1) = (int)lVar2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1428af3a0 GetViewRelevance body=61 status=ok
// SIG undefined GetViewRelevance(void)

undefined8 *
FVectorFieldSceneProxy::GetViewRelevance(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | 0x2001;
  bVar1 = FUN_142730ad0(param_1,param_3);
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) & 0xfffffbff;
  *(uint *)((longlong)param_2 + 4) = *(uint *)((longlong)param_2 + 4) | (uint)bVar1 << 10 | 0x201;
  return param_2;
}



// FUNCTION 1428af410 HasBatchesToRender body=84 status=ok
// SIG undefined HasBatchesToRender(void)

ulonglong FCanvas::HasBatchesToRender(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x148);
  plVar3 = (longlong *)(longlong)iVar1;
  if (0 < iVar1) {
    lVar6 = 0;
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x140) + 8);
    do {
      iVar2 = *(int *)(puVar5 + 1);
      lVar4 = 0;
      plVar3 = (longlong *)(longlong)iVar2;
      if (0 < iVar2) {
        plVar3 = (longlong *)*puVar5;
        do {
          if (*plVar3 != 0) {
            return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
          }
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar4 < iVar2);
      }
      lVar6 = lVar6 + 1;
      puVar5 = puVar5 + 3;
    } while (lVar6 < iVar1);
  }
  return (ulonglong)plVar3 & 0xffffffffffffff00;
}



// FUNCTION 1428af470 HasOption body=217 status=ok
// SIG undefined HasOption(void)

undefined8 FURL::HasOption(longlong param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  wchar_t *_Str1;
  size_t _MaxCount;
  wchar_t *pwVar4;
  uint uVar5;
  wchar_t *pwVar7;
  wchar_t *pwVar6;
  
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (param_2[uVar3] != L'\0');
  pwVar7 = (wchar_t *)0x0;
  if ((0 < (int)uVar3) && (0 < *(int *)(param_1 + 0x50))) {
    _MaxCount = (size_t)(int)uVar3;
    pwVar4 = pwVar7;
    pwVar6 = pwVar7;
    do {
      if (*(int *)((longlong)pwVar4 + *(longlong *)(param_1 + 0x48) + 8) == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)((longlong)pwVar4 + *(longlong *)(param_1 + 0x48));
      }
      iVar2 = _wcsnicmp(_Str1,param_2,_MaxCount);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) {
        if (_Str1[_MaxCount - 1] != L'=') {
          wVar1 = _Str1[_MaxCount];
          uVar3 = (ulonglong)(ushort)wVar1;
          if ((wVar1 != L'=') && (wVar1 != L'\0')) goto LAB_1428af512;
        }
        pwVar7 = _Str1 + _MaxCount;
        break;
      }
LAB_1428af512:
      uVar5 = (int)pwVar6 + 1;
      pwVar6 = (wchar_t *)(ulonglong)uVar5;
      pwVar4 = pwVar4 + 8;
    } while ((int)uVar5 < *(int *)(param_1 + 0x50));
  }
  return CONCAT71((int7)(uVar3 >> 8),pwVar7 != (wchar_t *)0x0);
}



// FUNCTION 1428af550 HasValidText body=44 status=ok
// SIG undefined HasValidText(void)

undefined1 FCanvasTextItem::HasValidText(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x148) != 0) {
    cVar1 = FText::IsEmpty(param_1 + 0x130);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1428af580 FUN_1428af580 body=192 status=ok
// SIG undefined FUN_1428af580(void)

void FUN_1428af580(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = DAT_1464aa81c;
  uVar5 = DAT_1464aa818;
  uVar4 = DAT_1464aa814;
  uVar3 = DAT_1464aa810;
  param_1[0x4c] = param_5;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xf) = param_2;
  *(undefined4 *)(param_1 + 0x56) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar4;
  *(undefined4 *)(param_1 + 0x57) = uVar5;
  *(undefined4 *)((longlong)param_1 + 700) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x7c) = param_3;
  param_1[0x4d] = param_4;
  (**(code **)(*param_1 + 0x278))(uVar3,0);
  iVar1 = *(int *)((longlong)param_1 + 0x44);
  lVar2 = param_1[0x4c];
  fVar8 = (float)(int)param_1[8];
  fVar9 = (float)iVar1;
  *(float *)(param_1 + 6) = fVar8;
  *(float *)((longlong)param_1 + 0x34) = fVar9;
  if (lVar2 != 0) {
    fVar7 = 1.0;
    if (*(char *)(lVar2 + 0x94) == '\0') {
      fVar10 = *(float *)(lVar2 + 0x138);
    }
    else {
      fVar10 = 1.0;
    }
    *(float *)(param_1 + 6) = fVar8 / fVar10;
    if (*(char *)(lVar2 + 0x94) == '\0') {
      fVar7 = *(float *)(lVar2 + 0x138);
    }
    *(float *)((longlong)param_1 + 0x34) = fVar9 / fVar7;
    *(int *)(lVar2 + 300) = (int)param_1[8];
    *(int *)(lVar2 + 0x130) = iVar1;
  }
  return;
}



// FUNCTION 1428af640 InitInstance body=203 status=ok
// SIG undefined InitInstance(void)

void UVectorField::InitInstance(longlong param_1)

{
  undefined2 *puVar1;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  LowLevelFatalErrorHandler("Unknown",0x72,L"%s must override InitInstance.",puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  FDebug::AssertFailed(&DAT_1451dfccb,"Unknown",0x72,L"%s must override InitInstance.",puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428af710 InitInstance body=190 status=ok
// SIG undefined InitInstance(void)

void UVectorFieldAnimated::InitInstance(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)operator_new(0x80);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 4;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined1 *)(puVar4 + 5) = 0;
    puVar4[6] = 0;
    *puVar4 = &PTR__scalar_deleting_destructor__1451e4d70;
    puVar4[0xd] = 0;
    puVar4[0xe] = param_1;
    *(undefined4 *)(puVar4 + 0xf) = 0;
    *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)((longlong)puVar4 + 0x3c) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)((longlong)puVar4 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(puVar4 + 9) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar4 + 0x4c) = uVar1;
    *(undefined4 *)(puVar4 + 10) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0x54) = uVar3;
    puVar4[0xb] = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(param_1 + 0x40);
  }
  if (param_3 == '\0') {
    FUN_141edf270(puVar4);
  }
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 0x20) = 1;
  return;
}



// FUNCTION 1428af7e0 FUN_1428af7e0 body=496 status=ok
// SIG undefined FUN_1428af7e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428af7e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (DAT_1464c9c20 != '\0') {
    iVar5 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 8) == 4) {
      iVar5 = DAT_1464c9c14;
    }
    local_58 = 0;
    uStack_50 = 0;
    lVar7 = 0;
    local_48 = 1;
    local_80 = &local_58;
    local_34 = 0;
    local_88 = 0x10008;
    if (iVar5 < 3) {
      local_88 = 0;
    }
    local_a0 = *(undefined4 *)(param_1 + 0x40);
    local_90 = 1;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_98 = 10;
    local_a8 = *(undefined4 *)(param_1 + 0x3c);
    (**(code **)(*DAT_146ab6358 + 0x5f8))
              (DAT_146ab6358,local_70,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x38));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_70);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_70);
    iVar5 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 8) == 4) {
      iVar5 = DAT_1464c9c14;
    }
    if (2 < iVar5) {
      local_a8 = 0;
      (**(code **)(*DAT_146ab6358 + 0x610))
                (DAT_146ab6358,&local_78,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
      plVar1 = (longlong *)(param_1 + 0x68);
      if (plVar1 != &local_78) {
        puVar3 = (undefined8 *)*plVar1;
        *plVar1 = local_78;
        local_78 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar3 + 1);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            if ((*(char *)(puVar3 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
              if (bVar8) {
                *(int *)((longlong)puVar3 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar8) {
                uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar6 != 0) {
                  lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar7 + 8) = puVar3;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
        }
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_78);
    }
  }
  return;
}



// FUNCTION 1428af9d0 FUN_1428af9d0 body=290 status=ok
// SIG undefined FUN_1428af9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428af9d0(longlong param_1)

{
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 **local_80;
  undefined1 local_78 [8];
  undefined **local_70;
  longlong local_68;
  int local_60;
  undefined ***local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_68 = *(longlong *)(param_1 + 0x68);
  if ((local_68 != 0) && (DAT_1464c9c20 != '\0')) {
    local_a8 = *(int *)(param_1 + 0x3c);
    local_a0 = *(int *)(param_1 + 0x40);
    local_80 = &local_58;
    local_70 = &PTR_FUN_1445109b8;
    local_88 = 8;
    local_90 = 1;
    local_50 = 0;
    local_48 = 1;
    local_60 = *(int *)(param_1 + 0x38) * local_a8 * local_a0 * 8;
    local_58 = &local_70;
    local_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    uStack_38 = uRam00000001468b5d84;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_98 = 10;
    (**(code **)(*DAT_146ab6358 + 0x5f8))(DAT_146ab6358,local_78,&DAT_146ab6e78);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_78);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
    FMemory::Free(*(undefined8 *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1428afb00 FUN_1428afb00 body=141 status=ok
// SIG undefined FUN_1428afb00(void)

void FUN_1428afb00(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint6 uStack_16;
  
  iVar2 = *(int *)(param_1 + 0x330);
  *(int *)(param_1 + 0x330) = iVar2 + 1;
  if (*(int *)(param_1 + 0x334) < iVar2 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(param_1 + 0x30,iVar2);
  }
  puVar1 = (undefined4 *)(param_1 + 0x30 + (longlong)iVar2 * 0x18);
  *puVar1 = 0x465355e8;
  puVar1[1] = 1;
  puVar1[2] = 0x10;
  puVar1[3] = 0;
  *(ulonglong *)(param_1 + 0x40 + (longlong)iVar2 * 0x18) = (ulonglong)uStack_16 << 0x10;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x648,DAT_1465355e0);
  return;
}



// FUNCTION 1428afb90 Initialize body=143 status=ok
// SIG undefined Initialize(void)

void FUserStructOnScopeIgnoreDefaults::Initialize(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    if ((-*(int *)(lVar2 + 0x44) & *(int *)(lVar2 + 0x44) + -1 + *(int *)(lVar2 + 0x40)) == 0) {
      uVar4 = 1;
    }
    else {
      lVar2 = FWeakObjectPtr::Get(param_1 + 8);
      uVar4 = *(int *)(lVar2 + 0x44) + -1 + *(int *)(lVar2 + 0x40) & -*(int *)(lVar2 + 0x44);
    }
    uVar3 = FMemory::Malloc((longlong)(int)uVar4,0);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_14171dea0(uVar3,*(undefined8 *)(param_1 + 0x10),1);
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}



// FUNCTION 1428afc20 InitializeStruct body=214 status=ok
// SIG undefined InitializeStruct(void)

void UUserDefinedStruct::InitializeStruct(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_res10 [8];
  
  uVar6 = (ulonglong)param_3;
  FUN_14171dea0();
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xb0);
    cVar4 = (**(code **)(*plVar1 + 0x30))(plVar1);
    if (cVar4 != '\0') {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    lVar5 = (**(code **)(*plVar1 + 8))(plVar1);
    if ((lVar5 != 0) &&
       (iVar2 = *(int *)(param_1 + 0x44), iVar3 = *(int *)(param_1 + 0x40), 0 < (int)param_3)) {
      do {
        FUN_141717f80(param_1,param_2,lVar5,1);
        FUN_14174d5d0(local_res10,param_2);
        FUN_141706630(param_1,param_2);
        FUN_14174db00(local_res10);
        param_2 = param_2 + (iVar2 + -1 + iVar3 & -iVar2);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



// FUNCTION 1428afd00 FUN_1428afd00 body=492 status=ok
// SIG undefined FUN_1428afd00(void)

ulonglong FUN_1428afd00(longlong param_1,longlong *param_2,float param_3,undefined8 param_4,
                       char param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *local_res8;
  int local_res18 [2];
  
  plVar2 = (longlong *)(param_1 + 0x260);
  if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
    lVar8 = *param_2;
    lVar5 = *(longlong *)(param_1 + 0x2a0);
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      lVar5 = param_1 + 0x298;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                             (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar3 * 0xf0 + *plVar2);
        if (*plVar7 == lVar8) {
          if ((iVar3 != -1) && (plVar7 != (longlong *)0x0)) goto LAB_1428afdc2;
          break;
        }
        iVar3 = (int)plVar7[0x1d];
      } while (iVar3 != -1);
    }
  }
  local_res8 = param_2;
  FUN_142896050(plVar2,local_res18,&local_res8,0);
  plVar7 = (longlong *)((longlong)local_res18[0] * 0xf0 + *plVar2);
LAB_1428afdc2:
  if (*(float *)((longlong)plVar7 + 0x24) == 0.0) {
    if (param_3 != 0.0) {
      *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
      iVar3 = (int)plVar7[0x12];
      lVar8 = (longlong)iVar3;
      *(int *)(plVar7 + 0x12) = iVar3 + 1;
      if (*(int *)((longlong)plVar7 + 0x94) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar7 + 0x11,iVar3);
      }
      lVar5 = plVar7[0x11];
      goto LAB_1428afe77;
    }
  }
  else if (param_3 == 0.0) {
    *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
    iVar3 = (int)plVar7[0x14];
    lVar8 = (longlong)iVar3;
    *(int *)(plVar7 + 0x14) = iVar3 + 1;
    if (*(int *)((longlong)plVar7 + 0xa4) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar7 + 0x13,iVar3);
    }
    lVar5 = plVar7[0x13];
    goto LAB_1428afe77;
  }
  *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
  iVar3 = (int)plVar7[0x16];
  lVar8 = (longlong)iVar3;
  *(int *)(plVar7 + 0x16) = iVar3 + 1;
  if (*(int *)((longlong)plVar7 + 0xb4) < iVar3 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar7 + 0x15,iVar3);
  }
  lVar5 = plVar7[0x15];
LAB_1428afe77:
  *(undefined4 *)(lVar5 + lVar8 * 4) = *(undefined4 *)(param_1 + 0x3a0);
  uVar6 = 0;
  *(char *)((longlong)plVar7 + 0x35) = *(char *)((longlong)plVar7 + 0x35) + param_5;
  *(float *)(plVar7 + 0x1b) = param_3 + *(float *)(plVar7 + 0x1b);
  plVar2 = (longlong *)param_2[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    uVar4 = (int)lVar8 - 1;
    uVar6 = (ulonglong)uVar4;
    if (uVar4 == 0) {
      uVar6 = (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar6 = (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1428aff30 InputChar_Open body=32 status=ok
// SIG undefined InputChar_Open(void)

undefined8 UConsole::InputChar_Open(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0x16) & 1) == 0) {
    (**(code **)(*param_1 + 0x2b8))(param_1,param_3);
  }
  return 1;
}



// FUNCTION 1428aff50 FUN_1428aff50 body=345 status=ok
// SIG undefined FUN_1428aff50(void)

undefined8 FUN_1428aff50(longlong param_1,longlong *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_res8;
  int local_res18 [4];
  
  plVar6 = (longlong *)(param_1 + 0x260);
  if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
    lVar2 = *param_2;
    lVar4 = *(longlong *)(param_1 + 0x2a0);
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      lVar4 = param_1 + 0x298;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0xf0 + *plVar6);
        if (*plVar5 == lVar2) {
          if ((iVar3 != -1) && (plVar5 != (longlong *)0x0)) goto LAB_1428b0012;
          break;
        }
        iVar3 = (int)plVar5[0x1d];
      } while (iVar3 != -1);
    }
  }
  local_res8 = param_2;
  FUN_142896050(plVar6,local_res18,&local_res8,0);
  plVar5 = (longlong *)((longlong)local_res18[0] * 0xf0 + *plVar6);
LAB_1428b0012:
  *(undefined4 *)(plVar5 + 3) = param_4;
  *(undefined4 *)(plVar5 + 0x1b) = param_4;
  *(undefined4 *)((longlong)plVar5 + 0x24) = param_4;
  *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
  plVar6 = plVar5 + 3 + ((longlong)param_3 + 7) * 2;
  iVar3 = (int)plVar6[1];
  *(int *)(plVar6 + 1) = iVar3 + 1;
  if (*(int *)((longlong)plVar6 + 0xc) < iVar3 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar6,iVar3);
  }
  *(undefined4 *)(*plVar6 + (longlong)iVar3 * 4) = *(undefined4 *)(param_1 + 0x3a0);
  plVar6 = (longlong *)param_2[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return 1;
}



// FUNCTION 1428b00b0 FUN_1428b00b0 body=317 status=ok
// SIG undefined FUN_1428b00b0(void)

char FUN_1428b00b0(longlong *param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4,
                  undefined4 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_58 = *param_3;
  local_50 = param_3[1];
  local_48 = param_3[2];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  cVar6 = FUN_1428b0630(param_1,param_2,&local_58,param_4,param_5,param_6);
  if (cVar6 == '\0') {
    if (param_1[0x1b] != DAT_146b18a00) {
      if (param_1[0x1b] != DAT_146b18a08) goto LAB_1428b0193;
      local_40 = *param_3;
      local_38 = param_3[1];
      local_30 = param_3[2];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*param_1 + 0x300))
                (param_1,param_2 & 0xffffffff,&local_40,param_4 & 0xffffffff,param_5,param_6);
    }
    FKey::~FKey(param_3);
    cVar6 = '\x01';
  }
  else {
LAB_1428b0193:
    plVar4 = (longlong *)param_3[2];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  return cVar6;
}



// FUNCTION 1428b01f0 FUN_1428b01f0 body=1077 status=ok
// SIG undefined FUN_1428b01f0(void)

undefined8 FUN_1428b01f0(longlong *param_1,longlong *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *local_res8;
  int local_res18 [2];
  
  plVar7 = param_1 + 0x4c;
  if ((int)param_1[0x4d] != *(int *)((longlong)param_1 + 0x294)) {
    lVar6 = *param_2;
    plVar9 = (longlong *)param_1[0x54];
    if ((longlong *)param_1[0x54] == (longlong *)0x0) {
      plVar9 = param_1 + 0x53;
    }
    iVar5 = *(int *)((longlong)plVar9 +
                    ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                    (longlong)(int)param_1[0x55] - 1U) * 4);
    if (iVar5 != -1) {
      do {
        plVar9 = (longlong *)((longlong)iVar5 * 0xf0 + *plVar7);
        if (*plVar9 == lVar6) {
          if ((iVar5 != -1) && (plVar9 != (longlong *)0x0)) goto LAB_1428b02b2;
          break;
        }
        iVar5 = (int)plVar9[0x1d];
      } while (iVar5 != -1);
    }
  }
  local_res8 = param_2;
  FUN_142896050(plVar7,local_res18,&local_res8,0);
  plVar9 = (longlong *)((longlong)local_res18[0] * 0xf0 + *plVar7);
LAB_1428b02b2:
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (param_3 != 0) {
    if (param_3 == 1) {
      *(undefined4 *)(plVar9 + 0x1b) = 0;
      *(int *)(param_1 + 0x74) = (int)param_1[0x74] + 1;
      iVar5 = (int)plVar9[0x14];
      *(int *)(plVar9 + 0x14) = iVar5 + 1;
      if (*(int *)((longlong)plVar9 + 0xa4) < iVar5 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9 + 0x13,iVar5);
      }
      *(int *)(plVar9[0x13] + (longlong)iVar5 * 4) = (int)param_1[0x74];
      goto LAB_1428b047a;
    }
    if (param_3 != 2) {
      if (param_3 == 3) {
        *(undefined4 *)(plVar9 + 0x1b) = param_4;
        *(int *)(param_1 + 0x74) = (int)param_1[0x74] + 1;
        iVar5 = (int)plVar9[0x12];
        *(int *)(plVar9 + 0x12) = iVar5 + 1;
        if (*(int *)((longlong)plVar9 + 0x94) < iVar5 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9 + 0x11,iVar5);
        }
        *(int *)(plVar9[0x11] + (longlong)iVar5 * 4) = (int)param_1[0x74];
        *(int *)(param_1 + 0x74) = (int)param_1[0x74] + 1;
        iVar5 = (int)plVar9[0x18];
        *(int *)(plVar9 + 0x18) = iVar5 + 1;
        if (*(int *)((longlong)plVar9 + 0xc4) < iVar5 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9 + 0x17,iVar5);
        }
        *(int *)(plVar9[0x17] + (longlong)iVar5 * 4) = (int)param_1[0x74];
      }
      goto LAB_1428b047a;
    }
  }
  *(undefined4 *)(plVar9 + 0x1b) = param_4;
  *(int *)(param_1 + 0x74) = (int)param_1[0x74] + 1;
  plVar7 = plVar9 + ((longlong)param_3 + 7) * 2 + 3;
  iVar5 = (int)plVar7[1];
  *(int *)(plVar7 + 1) = iVar5 + 1;
  if (*(int *)((longlong)plVar7 + 0xc) < iVar5 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar7,iVar5);
  }
  *(int *)(*plVar7 + (longlong)iVar5 * 4) = (int)param_1[0x74];
  if ((*(byte *)((longlong)plVar9 + 0x34) & 2) == 0) {
    fVar3 = *(float *)(lVar6 + 0x798);
    plVar7 = (longlong *)UInputSettings::GetPrivateStaticClass();
    lVar6 = plVar7[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      lVar6 = plVar7[0x1f];
    }
    if (fVar3 - *(float *)(plVar9 + 6) < *(float *)(lVar6 + 0x78)) {
      *(int *)(param_1 + 0x74) = (int)param_1[0x74] + 1;
      iVar5 = (int)plVar9[0x18];
      *(int *)(plVar9 + 0x18) = iVar5 + 1;
      if (*(int *)((longlong)plVar9 + 0xc4) < iVar5 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9 + 0x17,iVar5);
      }
      *(int *)(plVar9[0x17] + (longlong)iVar5 * 4) = (int)param_1[0x74];
    }
    *(float *)(plVar9 + 6) = fVar3;
  }
LAB_1428b047a:
  *(char *)((longlong)plVar9 + 0x35) = *(char *)((longlong)plVar9 + 0x35) + '\x01';
  if (param_3 == 0) {
    plVar7 = (longlong *)param_2[2];
    lVar6 = *param_2;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    lVar10 = param_1[0x28];
    lVar2 = lVar10 + (longlong)(int)param_1[0x29] * 0x28;
    for (; lVar10 != lVar2; lVar10 = lVar10 + 0x28) {
      if ((((((*(longlong *)(lVar10 + 0x10) == lVar6) ||
             (*(longlong *)(lVar10 + 0x10) == DAT_1469e97d8)) &&
            (((*(byte *)(lVar10 + 8) & 4) == 0 || (cVar4 = FUN_1428b1ff0(param_1), cVar4 != '\0'))))
           && (((*(byte *)(lVar10 + 8) & 2) == 0 || (cVar4 = FUN_1428b2110(param_1), cVar4 != '\0'))
              )) && (((*(byte *)(lVar10 + 8) & 1) == 0 ||
                     (cVar4 = FUN_1428b29d0(param_1), cVar4 != '\0')))) &&
         (((*(byte *)(lVar10 + 8) & 8) == 0 || (cVar4 = FUN_1428b2080(param_1), cVar4 != '\0')))) {
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar7 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        uVar8 = 1;
        goto LAB_1428b0560;
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar7 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    uVar8 = 0;
LAB_1428b0560:
    plVar7 = (longlong *)param_2[2];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar7 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  else {
    plVar7 = (longlong *)param_2[2];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar7 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 1428b0630 FUN_1428b0630 body=3586 status=ok
// SIG undefined FUN_1428b0630(void)

undefined8
FUN_1428b0630(longlong *param_1,undefined8 param_2,ulonglong *param_3,uint param_4,
             undefined8 param_5,char param_6)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong *puVar4;
  short *psVar5;
  ulonglong uVar6;
  void *_Src;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  undefined2 *puVar18;
  wchar_t *pwVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  undefined2 *puVar24;
  wchar_t *pwVar25;
  bool bVar26;
  wchar_t *local_res8;
  ushort local_res20 [4];
  wchar_t *local_128;
  void *local_120;
  int local_118;
  undefined4 local_114;
  wchar_t *local_110;
  ulonglong local_108;
  wchar_t *local_100;
  int local_f8;
  undefined4 local_f4;
  wchar_t *local_f0;
  ulonglong local_e8;
  wchar_t *local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0 [8];
  longlong local_80 [2];
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  uVar21 = *(uint *)(param_1 + 0x16);
  if (param_4 == 0) {
    uVar21 = uVar21 & 0xfffffffe;
    *(uint *)(param_1 + 0x16) = uVar21;
  }
  bVar20 = (byte)(uVar21 >> 1) & 1;
  FSlateApplication::GetModifierKeys(DAT_1469f4590,local_res20);
  if (((((((local_res20[0] & 0x10) != 0) || ((local_res20[0] & 0x20) != 0)) ||
        ((local_res20[0] & 0x40) != 0)) ||
       (((char)local_res20[0] < '\0' || ((local_res20[0] & 1) != 0)))) ||
      ((local_res20[0] & 2) != 0)) || (((local_res20[0] & 4) != 0 || ((local_res20[0] & 8) != 0))))
  {
    bVar20 = 1;
  }
  if ((*param_3 == DAT_1469e98f8) &&
     ((param_1[0x1b] == DAT_146b18a00 || (param_1[0x1b] == DAT_146b18a08)))) {
    bVar26 = true;
  }
  else {
    bVar26 = false;
  }
  plVar14 = (longlong *)UInputSettings::GetPrivateStaticClass();
  lVar23 = plVar14[0x1f];
  if (lVar23 == 0) {
    (**(code **)(*plVar14 + 0x368))(plVar14);
    lVar23 = plVar14[0x1f];
  }
  puVar15 = *(ulonglong **)(lVar23 + 0xd0);
  puVar4 = puVar15 + (longlong)*(int *)(lVar23 + 0xd8) * 3;
  if (puVar15 != puVar4) {
    do {
      if (*puVar15 == *param_3) {
        if (((param_4 == 0) && (bVar20 == 0)) && (!bVar26)) {
          lVar23 = param_1[0x1b];
          lVar16 = DAT_146b18a08;
          if (((lVar23 == DAT_146b18a00) || (lVar16 = 0, lVar23 == DAT_146b18a08)) ||
             (lVar16 = DAT_146b18a00, lVar23 == 0)) {
            (**(code **)(*param_1 + 0x340))(param_1,lVar16);
            *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 1;
            FKey::~FKey(param_3);
            return 1;
          }
          goto LAB_1428b0e35;
        }
        break;
      }
      puVar15 = puVar15 + 3;
    } while (puVar15 != puVar4);
  }
  pwVar25 = (wchar_t *)0x0;
  iVar13 = 0;
  iVar11 = 0;
  if (param_1[0x1b] == 0) {
LAB_1428b0bde:
    plVar14 = (longlong *)param_3[2];
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar14 + 1;
      lVar23 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar3 = (int *)((longlong)plVar14 + 0xc);
        iVar13 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    return 0;
  }
  local_70 = *param_3;
  local_68 = param_3[1];
  local_60 = param_3[2];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  cVar7 = (**(code **)(*param_1 + 0x2b0))(param_1,&local_70,param_4);
  if (cVar7 != '\0') goto LAB_1428b0e35;
  if (param_6 != '\0') {
    FKey::~FKey(param_3);
    return 0;
  }
  uVar6 = *param_3;
  if ((uVar6 == DAT_1469e9958) && (param_4 == 1)) {
    if ((int)param_1[0x10] < 2) {
      local_d0 = 0;
      (**(code **)(*param_1 + 0x340))(param_1,0);
      FKey::~FKey(param_3);
      return 1;
    }
    local_c0[0] = 0;
    local_c0[1] = 0;
    (**(code **)(*param_1 + 0x278))(param_1,local_c0);
    if (local_c0[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(*param_1 + 0x280))(param_1,0);
    *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
    plVar14 = param_1 + 0x12;
    if (plVar14 != local_58) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      *plVar14 = 0;
      param_1[0x13] = 0;
    }
    plVar14 = param_1 + 0x14;
    if (*plVar14 != 0) {
      *(undefined4 *)(param_1 + 0x15) = 0;
      if (*(int *)((longlong)param_1 + 0xac) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar14,0);
        pwVar25 = (wchar_t *)(ulonglong)*(uint *)(param_1 + 0x15);
      }
      *(int *)(param_1 + 0x15) = (int)pwVar25;
      if (*(int *)((longlong)param_1 + 0xac) < (int)pwVar25) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar14,pwVar25);
      }
    }
    TArray<FAutoCompleteCommand,FDefaultAllocator>::Empty(param_1 + 0x21,0);
    *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xfffffffe;
    FKey::~FKey(param_3);
    return 1;
  }
  if ((uVar6 == DAT_1469e9910) && (param_4 == 1)) {
    if ((int)param_1[0x10] < 2) {
      (**(code **)(*param_1 + 0x340))(param_1,0);
    }
    else {
      local_118 = (int)param_1[0x10];
      lVar23 = (longlong)local_118;
      _Src = (void *)param_1[0xf];
      local_120 = (void *)0x0;
      if (local_118 == 0) {
        local_114 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_120,local_118,0);
        _guard_xfg_dispatch_icall_nop(local_120,_Src,lVar23 * 2);
      }
      local_c0[2] = 0;
      local_c0[3] = 0;
      (**(code **)(*param_1 + 0x278))(param_1,local_c0 + 2);
      if (local_c0[2] != 0) {
        FMemory::Free();
      }
      (**(code **)(*param_1 + 0x280))(param_1,0);
      (**(code **)(*param_1 + 0x288))(param_1,&local_120);
      local_c0[4] = 0;
      local_c0[5] = 0;
      (**(code **)(*param_1 + 0x298))(param_1,local_c0 + 4);
      if (local_c0[4] != 0) {
        FMemory::Free();
      }
      if (param_1[0x1b] == DAT_146b18a00) {
        local_c8 = 0;
        (**(code **)(*param_1 + 0x340))(param_1,0);
      }
      (**(code **)(*param_1 + 0x2d0))(param_1);
      if (local_120 != (void *)0x0) {
        FMemory::Free();
      }
    }
    plVar14 = param_1 + 0x12;
    if (plVar14 != local_48) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      *plVar14 = 0;
      param_1[0x13] = 0;
    }
    plVar14 = param_1 + 0x14;
    if (*plVar14 != 0) {
      *(undefined4 *)(param_1 + 0x15) = 0;
      if (*(int *)((longlong)param_1 + 0xac) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar14,0);
        pwVar25 = (wchar_t *)(ulonglong)*(uint *)(param_1 + 0x15);
      }
      *(int *)(param_1 + 0x15) = (int)pwVar25;
      if (*(int *)((longlong)param_1 + 0xac) < (int)pwVar25) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar14,pwVar25);
        FKey::~FKey(param_3);
        return 1;
      }
    }
    goto LAB_1428b0e35;
  }
  if ((param_4 & 0xfffffffd) != 0) {
    if (((uVar6 != DAT_1469e9868) && (uVar6 != DAT_1469e9898)) && (uVar6 != DAT_1469e9880)) {
      FKey::~FKey(param_3);
      return 1;
    }
    FKey::~FKey(param_3);
    return 0;
  }
  if (uVar6 == DAT_1469e9a00) {
    if ((*(byte *)(param_1 + 0x16) & 2) == 0) {
      uVar21 = *(uint *)(param_1 + 0x22);
      if (uVar21 == 0) {
        FUN_1428bb8f0(param_1);
      }
      else {
        iVar13 = (int)param_1[0x1a];
        if (*(char *)(param_1[0x23] + 0x54) == '\0') {
          uVar22 = uVar21;
          if (0x13 < (int)uVar21) {
            uVar22 = 0x14;
          }
          if (iVar13 + 1 < (int)uVar22) {
            *(int *)(param_1 + 0x1a) = iVar13 + 1;
          }
          else if (*(int *)((longlong)param_1 + 0xcc) < (int)(uVar21 - 0x14)) {
            *(int *)((longlong)param_1 + 0xcc) = *(int *)((longlong)param_1 + 0xcc) + 1;
          }
          else {
            *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
          }
        }
        else if (iVar13 < 1) {
          if (*(int *)((longlong)param_1 + 0xcc) < 1) {
            iVar8 = uVar21 - 0x15;
            if ((int)(uVar21 - 0x15) < 1) {
              iVar8 = iVar11;
            }
            *(int *)((longlong)param_1 + 0xcc) = iVar8;
            if (uVar21 < 0x15) {
              *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xfffffffe;
              *(uint *)(param_1 + 0x1a) = (uVar21 - 1) + iVar13;
            }
            else {
              *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xfffffffe;
              *(int *)((longlong)param_1 + 0xcc) = iVar8 + 1;
              *(int *)(param_1 + 0x1a) = iVar13 + 0x13;
            }
          }
          else {
            *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xfffffffe;
            *(int *)((longlong)param_1 + 0xcc) = *(int *)((longlong)param_1 + 0xcc) + -1;
          }
        }
        else {
          *(int *)(param_1 + 0x1a) = iVar13 + -1;
        }
      }
      UConsole::SetInputLineFromAutoComplete(param_1);
    }
    goto LAB_1428b0bde;
  }
  iVar8 = 0;
  if ((uVar6 == DAT_1469e9a30) || (uVar6 == DAT_1469e98f8)) {
    if ((*(uint *)(param_1 + 0x16) & 2) != 0) goto LAB_1428b0e35;
    iVar13 = (int)param_1[0x22];
    if (iVar13 == 0) {
      FUN_1428bb8f0(param_1);
    }
    else if (uVar6 == DAT_1469e98f8) {
      *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 1;
      if (1 < iVar13) {
        puVar24 = &DAT_143f3eda8;
        if ((int)param_1[0x10] == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)param_1[0xf];
        }
        if ((int)param_1[0x15] != 0) {
          puVar24 = (undefined2 *)param_1[0x14];
        }
        iVar13 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar24,puVar18);
        if (iVar13 != 0) {
          UConsole::SetInputLineFromAutoComplete(param_1);
          FKey::~FKey(param_3);
          return 1;
        }
LAB_1428b12b3:
        iVar13 = (int)param_1[0x1a];
        if (*(char *)(param_1[0x23] + 0x54) != '\0') {
          iVar11 = (int)param_1[0x22];
          iVar8 = iVar11;
          if (0x13 < iVar11) {
            iVar8 = 0x14;
          }
          if (iVar8 <= iVar13 + 1) {
            if (iVar11 + -0x14 <= *(int *)((longlong)param_1 + 0xcc)) {
              *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
              UConsole::SetInputLineFromAutoComplete(param_1);
              FKey::~FKey(param_3);
              return 1;
            }
            *(int *)((longlong)param_1 + 0xcc) = *(int *)((longlong)param_1 + 0xcc) + 1;
            UConsole::SetInputLineFromAutoComplete(param_1);
            FKey::~FKey(param_3);
            return 1;
          }
          *(int *)(param_1 + 0x1a) = iVar13 + 1;
          UConsole::SetInputLineFromAutoComplete(param_1);
          FKey::~FKey(param_3);
          return 1;
        }
        if (0 < iVar13) {
          *(int *)(param_1 + 0x1a) = iVar13 + -1;
          UConsole::SetInputLineFromAutoComplete(param_1);
          FKey::~FKey(param_3);
          return 1;
        }
        if (*(int *)((longlong)param_1 + 0xcc) < 1) {
          uVar21 = *(uint *)(param_1 + 0x22);
          iVar11 = uVar21 - 0x15;
          if ((int)(uVar21 - 0x15) < 1) {
            iVar11 = iVar8;
          }
          *(int *)((longlong)param_1 + 0xcc) = iVar11;
          if (0x14 < uVar21) {
            *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xfffffffe;
            *(int *)((longlong)param_1 + 0xcc) = iVar11 + 1;
            *(int *)(param_1 + 0x1a) = iVar13 + 0x13;
            UConsole::SetInputLineFromAutoComplete(param_1);
            FKey::~FKey(param_3);
            return 1;
          }
          *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xfffffffe;
          *(uint *)(param_1 + 0x1a) = (uVar21 - 1) + iVar13;
          UConsole::SetInputLineFromAutoComplete(param_1);
          FKey::~FKey(param_3);
          return 1;
        }
        *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xfffffffe;
        *(int *)((longlong)param_1 + 0xcc) = *(int *)((longlong)param_1 + 0xcc) + -1;
        UConsole::SetInputLineFromAutoComplete(param_1);
        FKey::~FKey(param_3);
        return 1;
      }
    }
    else if (1 < iVar13) goto LAB_1428b12b3;
    UConsole::SetInputLineFromAutoComplete(param_1);
    FKey::~FKey(param_3);
    return 1;
  }
  if (uVar6 != DAT_1469e98e0) {
    if (uVar6 != DAT_1469e9a60) {
      if (uVar6 == DAT_1469e99e8) {
        if ((*(byte *)(param_1 + 0x16) & 2) == 0) {
          uVar21 = (int)param_1[0x11] - 1;
          pwVar17 = (wchar_t *)(ulonglong)uVar21;
          if ((int)uVar21 < 1) {
            pwVar17 = pwVar25;
          }
          (**(code **)(*param_1 + 0x280))(param_1,pwVar17);
          FKey::~FKey(param_3);
          return 1;
        }
        uVar21 = FUN_141592950(param_1 + 0xf,&DAT_1451dfce4,0,1,(int)param_1[0x11]);
        uVar22 = FUN_141592950(param_1 + 0xf,&DAT_1451dfcf4,0,1,(int)param_1[0x11]);
        if ((int)uVar21 <= (int)uVar22) {
          uVar21 = uVar22;
        }
        pwVar17 = (wchar_t *)(ulonglong)uVar21;
        if ((int)uVar21 < 1) {
          pwVar17 = pwVar25;
        }
        (**(code **)(*param_1 + 0x280))(param_1,pwVar17);
        FKey::~FKey(param_3);
        return 1;
      }
      if (uVar6 == DAT_1469e9a18) {
        if ((*(byte *)(param_1 + 0x16) & 2) == 0) {
          iVar13 = (int)param_1[0x10] + -1;
          if ((int)param_1[0x10] == 0) {
            iVar13 = iVar8;
          }
          iVar11 = (int)param_1[0x11] + 1;
          if (iVar13 <= iVar11) {
            iVar11 = iVar13;
          }
          (**(code **)(*param_1 + 0x280))(param_1,iVar11);
          FKey::~FKey(param_3);
          return 1;
        }
        iVar11 = FUN_141592950(param_1 + 0xf,&DAT_1451dfcf8,1,0,0xffffffff);
        iVar12 = FUN_141592950(param_1 + 0xf,&DAT_1451dfcfc,1,0,0xffffffff);
        iVar13 = iVar12;
        if (((-1 < iVar11) && (iVar13 = iVar11, -1 < iVar12)) && (iVar13 = iVar12, iVar11 <= iVar12)
           ) {
          iVar13 = iVar11;
        }
        if ((iVar13 == -1) && (iVar13 = iVar8, (int)param_1[0x10] != 0)) {
          iVar13 = (int)param_1[0x10] + -1;
        }
        iVar11 = (int)param_1[0x10] + -1;
        if ((int)param_1[0x10] == 0) {
          iVar11 = iVar8;
        }
        if (iVar13 <= (int)param_1[0x11]) {
          iVar13 = (int)param_1[0x11];
        }
        if (iVar11 <= iVar13) {
          iVar13 = iVar11;
        }
        (**(code **)(*param_1 + 0x280))(param_1,iVar13);
        FKey::~FKey(param_3);
        return 1;
      }
      if (uVar6 == DAT_1469e99d0) {
        (**(code **)(*param_1 + 0x280))(param_1,0);
        FKey::~FKey(param_3);
        return 1;
      }
      if (uVar6 == DAT_1469e99b8) {
        pwVar17 = (wchar_t *)(ulonglong)((int)param_1[0x10] - 1);
        if ((int)param_1[0x10] == 0) {
          pwVar17 = pwVar25;
        }
        (**(code **)(*param_1 + 0x280))(param_1,pwVar17);
        FKey::~FKey(param_3);
        return 1;
      }
      goto LAB_1428b0bde;
    }
    iVar9 = (int)param_1[0x10];
    lVar23 = -1;
    iVar12 = iVar9 + -1;
    iVar10 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar12 = -1;
      iVar10 = iVar8;
    }
    if (iVar10 <= (int)param_1[0x11]) goto LAB_1428b0e35;
    iVar10 = iVar12;
    if (iVar9 == 0) {
      iVar10 = iVar8;
    }
    iVar10 = iVar10 - (int)param_1[0x11];
    iVar1 = iVar10 + -1;
    if (iVar9 == 0) {
      puVar24 = &DAT_143f3eda8;
      iVar12 = iVar8;
    }
    else {
      puVar24 = (undefined2 *)param_1[0xf];
    }
    if ((-1 < iVar1) && (iVar13 = iVar12, iVar10 <= iVar12)) {
      iVar13 = iVar1;
    }
    local_f0 = (wchar_t *)0x0;
    local_e8 = 0;
    psVar5 = puVar24 + ((longlong)iVar12 - (longlong)iVar13);
    pwVar17 = pwVar25;
    if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
LAB_1428b0f28:
      local_128 = L"";
    }
    else {
      do {
        lVar23 = lVar23 + 1;
      } while (psVar5[lVar23] != 0);
      uVar22 = (int)lVar23 + 1;
      local_e8 = (ulonglong)uVar22;
      uVar21 = uVar22;
      if (0 < (int)uVar22) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,0);
        uVar21 = (uint)local_e8;
      }
      pwVar17 = local_f0;
      FGenericPlatformString::Memcpy(local_f0,psVar5,(longlong)(int)uVar22 * 2);
      local_128 = pwVar17;
      if (uVar21 == 0) goto LAB_1428b0f28;
    }
    iVar13 = (int)param_1[0x11];
    if ((int)param_1[0x10] == 0) {
      local_res8 = L"";
      iVar12 = iVar8;
    }
    else {
      local_res8 = (wchar_t *)param_1[0xf];
      iVar12 = (int)param_1[0x10] + -1;
    }
    if ((-1 < iVar13) && (iVar8 = iVar12, iVar13 < iVar12)) {
      iVar8 = iVar13;
    }
    local_e0 = (wchar_t *)0x0;
    local_d4 = 0;
    local_d8 = iVar8 + 1;
    if (iVar8 == 0) {
      local_d8 = iVar11;
    }
    bVar26 = local_d8 == 0;
    if (0 < local_d8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
      iVar13 = local_d8;
      pwVar25 = local_e0;
      bVar26 = local_d8 == 0;
      if (0 < local_d8) {
        wcsncpy(local_e0,local_res8,(longlong)iVar8);
        bVar26 = iVar13 == 0;
        pwVar25[iVar8] = L'\0';
      }
    }
    pwVar19 = L"";
    if (!bVar26) {
      pwVar19 = pwVar25;
    }
    FString::PrintfImpl(local_80,L"%s%s",pwVar19,local_128);
    (**(code **)(*param_1 + 0x278))(param_1,local_80);
    if (local_80[0] != 0) {
      FMemory::Free();
    }
    if (pwVar25 != (wchar_t *)0x0) {
      FMemory::Free(pwVar25);
    }
    if (pwVar17 != (wchar_t *)0x0) {
      FMemory::Free(pwVar17);
      FKey::~FKey(param_3);
      return 1;
    }
    goto LAB_1428b0e35;
  }
  if ((int)param_1[0x11] < 1) goto LAB_1428b0e35;
  iVar12 = (int)param_1[0x10];
  lVar23 = -1;
  iVar13 = iVar12 + -1;
  iVar9 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar13 = -1;
    iVar9 = iVar11;
  }
  iVar9 = iVar9 - (int)param_1[0x11];
  if (iVar12 == 0) {
    puVar24 = &DAT_143f3eda8;
    iVar13 = iVar8;
  }
  else {
    puVar24 = (undefined2 *)param_1[0xf];
  }
  iVar12 = iVar8;
  if ((-1 < iVar9) && (iVar12 = iVar13, iVar9 < iVar13)) {
    iVar12 = iVar9;
  }
  local_110 = (wchar_t *)0x0;
  local_108 = 0;
  psVar5 = puVar24 + ((longlong)iVar13 - (longlong)iVar12);
  pwVar17 = pwVar25;
  if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
LAB_1428b0d2e:
    local_128 = L"";
  }
  else {
    do {
      lVar23 = lVar23 + 1;
    } while (psVar5[lVar23] != 0);
    uVar22 = (int)lVar23 + 1;
    local_108 = (ulonglong)uVar22;
    uVar21 = uVar22;
    if (0 < (int)uVar22) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
      uVar21 = (uint)local_108;
    }
    pwVar17 = local_110;
    FGenericPlatformString::Memcpy(local_110,psVar5,(longlong)(int)uVar22 * 2);
    local_128 = pwVar17;
    if (uVar21 == 0) goto LAB_1428b0d2e;
  }
  iVar13 = (int)param_1[0x11] + -1;
  if ((int)param_1[0x10] == 0) {
    local_res8 = L"";
    iVar12 = iVar8;
  }
  else {
    local_res8 = (wchar_t *)param_1[0xf];
    iVar12 = (int)param_1[0x10] + -1;
  }
  if ((-1 < iVar13) && (iVar8 = iVar12, (int)param_1[0x11] <= iVar12)) {
    iVar8 = iVar13;
  }
  local_100 = (wchar_t *)0x0;
  local_f4 = 0;
  local_f8 = iVar8 + 1;
  if (iVar8 == 0) {
    local_f8 = iVar11;
  }
  bVar26 = local_f8 == 0;
  if (0 < local_f8) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
    iVar13 = local_f8;
    pwVar25 = local_100;
    bVar26 = local_f8 == 0;
    if (0 < local_f8) {
      wcsncpy(local_100,local_res8,(longlong)iVar8);
      bVar26 = iVar13 == 0;
      pwVar25[iVar8] = L'\0';
    }
  }
  pwVar19 = L"";
  if (!bVar26) {
    pwVar19 = pwVar25;
  }
  FString::PrintfImpl(local_c0 + 6,L"%s%s",pwVar19,local_128);
  (**(code **)(*param_1 + 0x278))(param_1,local_c0 + 6);
  if (local_c0[6] != 0) {
    FMemory::Free();
  }
  if (pwVar25 != (wchar_t *)0x0) {
    FMemory::Free(pwVar25);
  }
  if (pwVar17 != (wchar_t *)0x0) {
    FMemory::Free(pwVar17);
  }
  (**(code **)(*param_1 + 0x280))(param_1,(int)param_1[0x11] + -1);
  *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xfffffffe;
LAB_1428b0e35:
  FKey::~FKey(param_3);
  return 1;
}



// FUNCTION 1428b1440 FUN_1428b1440 body=233 status=ok
// SIG undefined FUN_1428b1440(void)

undefined8 FUN_1428b1440(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = *param_3;
  if ((lVar3 == DAT_1469e9988) || (lVar3 == DAT_1469e9820)) {
    iVar5 = *(int *)(param_1 + 0x58) + -1;
    if (*(int *)(param_1 + 100) < iVar5) {
      iVar6 = *(int *)(param_1 + 100) + ((*(uint *)(param_1 + 0xb0) & 2) * 2 | 1);
      if (*(int *)(param_1 + 0x58) <= iVar6) {
        iVar6 = iVar5;
      }
      *(int *)(param_1 + 100) = iVar6;
    }
    plVar4 = (longlong *)param_3[2];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 1;
  }
  if ((lVar3 != DAT_1469e99a0) && (lVar3 != DAT_1469e9838)) {
    FKey::~FKey(param_3);
    return 0;
  }
  if (0 < *(int *)(param_1 + 100)) {
    iVar5 = (~(*(int *)(param_1 + 0xb0) * 2) | 0xfffffffbU) + *(int *)(param_1 + 100);
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    *(int *)(param_1 + 100) = iVar5;
  }
  FKey::~FKey(param_3);
  return 1;
}



// FUNCTION 1428b1530 FUN_1428b1530 body=1045 status=ok
// SIG undefined FUN_1428b1530(void)

undefined8
FUN_1428b1530(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int local_res8 [2];
  undefined8 *local_res10;
  
  plVar1 = (longlong *)(param_1 + 0x260);
  if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
    lVar4 = *(longlong *)(param_1 + 0x2a0);
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      lVar4 = param_1 + 0x298;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)
                              ((int)((ulonglong)DAT_1469ea6d8 >> 0x20) + (int)DAT_1469ea6d8) &
                             (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0xf0 + *plVar1);
        if (*plVar5 == DAT_1469ea6d8) {
          if ((iVar3 != -1) && (plVar5 != (longlong *)0x0)) goto LAB_1428b1609;
          break;
        }
        iVar3 = (int)plVar5[0x1d];
      } while (iVar3 != -1);
    }
  }
  local_res10 = &DAT_1469ea6d8;
  FUN_142896050(plVar1,local_res8,&local_res10,0);
  plVar5 = (longlong *)((longlong)local_res8[0] * 0xf0 + *plVar1);
LAB_1428b1609:
  *(undefined8 *)((longlong)plVar5 + 0x24) = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)plVar5 + 0x2c) = uVar2;
  plVar5[3] = *(longlong *)((longlong)plVar5 + 0x24);
  *(undefined4 *)(plVar5 + 4) = uVar2;
  *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
  iVar3 = (int)plVar5[0x16];
  *(int *)(plVar5 + 0x16) = iVar3 + 1;
  if (*(int *)((longlong)plVar5 + 0xb4) < iVar3 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar5 + 0x15,iVar3);
  }
  *(undefined4 *)(plVar5[0x15] + (longlong)iVar3 * 4) = *(undefined4 *)(param_1 + 0x3a0);
  if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
    lVar4 = *(longlong *)(param_1 + 0x2a0);
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      lVar4 = param_1 + 0x298;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)
                              ((int)((ulonglong)DAT_1469ea6f0 >> 0x20) + (int)DAT_1469ea6f0) &
                             (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0xf0 + *plVar1);
        if (*plVar5 == DAT_1469ea6f0) {
          if ((iVar3 != -1) && (plVar5 != (longlong *)0x0)) goto LAB_1428b16f9;
          break;
        }
        iVar3 = (int)plVar5[0x1d];
      } while (iVar3 != -1);
    }
  }
  local_res10 = &DAT_1469ea6f0;
  FUN_142896050(plVar1,local_res8,&local_res10,0);
  plVar5 = (longlong *)((longlong)local_res8[0] * 0xf0 + *plVar1);
LAB_1428b16f9:
  *(undefined8 *)((longlong)plVar5 + 0x24) = *param_3;
  uVar2 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)plVar5 + 0x2c) = uVar2;
  plVar5[3] = *(longlong *)((longlong)plVar5 + 0x24);
  *(undefined4 *)(plVar5 + 4) = uVar2;
  *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
  iVar3 = (int)plVar5[0x16];
  *(int *)(plVar5 + 0x16) = iVar3 + 1;
  if (*(int *)((longlong)plVar5 + 0xb4) < iVar3 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar5 + 0x15,iVar3);
  }
  *(undefined4 *)(plVar5[0x15] + (longlong)iVar3 * 4) = *(undefined4 *)(param_1 + 0x3a0);
  if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
    lVar4 = *(longlong *)(param_1 + 0x2a0);
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      lVar4 = param_1 + 0x298;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)
                              ((int)((ulonglong)DAT_1469ea708 >> 0x20) + (int)DAT_1469ea708) &
                             (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0xf0 + *plVar1);
        if (*plVar5 == DAT_1469ea708) {
          if ((iVar3 != -1) && (plVar5 != (longlong *)0x0)) goto LAB_1428b17e9;
          break;
        }
        iVar3 = (int)plVar5[0x1d];
      } while (iVar3 != -1);
    }
  }
  local_res10 = &DAT_1469ea708;
  FUN_142896050(plVar1,local_res8,&local_res10,0);
  plVar5 = (longlong *)((longlong)local_res8[0] * 0xf0 + *plVar1);
LAB_1428b17e9:
  *(undefined8 *)((longlong)plVar5 + 0x24) = *param_4;
  uVar2 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)plVar5 + 0x2c) = uVar2;
  plVar5[3] = *(longlong *)((longlong)plVar5 + 0x24);
  *(undefined4 *)(plVar5 + 4) = uVar2;
  *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
  iVar3 = (int)plVar5[0x16];
  *(int *)(plVar5 + 0x16) = iVar3 + 1;
  if (*(int *)((longlong)plVar5 + 0xb4) < iVar3 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar5 + 0x15,iVar3);
  }
  *(undefined4 *)(plVar5[0x15] + (longlong)iVar3 * 4) = *(undefined4 *)(param_1 + 0x3a0);
  if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
    lVar4 = *(longlong *)(param_1 + 0x2a0);
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      lVar4 = param_1 + 0x298;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)
                              ((int)((ulonglong)DAT_1469ea720 >> 0x20) + (int)DAT_1469ea720) &
                             (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0xf0 + *plVar1);
        if (*plVar5 == DAT_1469ea720) {
          if ((iVar3 != -1) && (plVar5 != (longlong *)0x0)) goto LAB_1428b18d9;
          break;
        }
        iVar3 = (int)plVar5[0x1d];
      } while (iVar3 != -1);
    }
  }
  local_res10 = &DAT_1469ea720;
  FUN_142896050(plVar1,local_res8,&local_res10,0);
  plVar5 = (longlong *)((longlong)local_res8[0] * 0xf0 + *plVar1);
LAB_1428b18d9:
  *(undefined8 *)((longlong)plVar5 + 0x24) = *param_5;
  uVar2 = *(undefined4 *)(param_5 + 1);
  *(undefined4 *)((longlong)plVar5 + 0x2c) = uVar2;
  plVar5[3] = *(longlong *)((longlong)plVar5 + 0x24);
  *(undefined4 *)(plVar5 + 4) = uVar2;
  *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + 1;
  iVar3 = (int)plVar5[0x16];
  *(int *)(plVar5 + 0x16) = iVar3 + 1;
  if (*(int *)((longlong)plVar5 + 0xb4) < iVar3 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar5 + 0x15,iVar3);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x3a0);
  *(undefined4 *)(plVar5[0x15] + (longlong)iVar3 * 4) = uVar2;
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}



// FUNCTION 1428b1950 FUN_1428b1950 body=839 status=ok
// SIG undefined FUN_1428b1950(void)

ulonglong FUN_1428b1950(longlong *param_1,uint param_2,int param_3,longlong *param_4,
                       undefined4 param_5)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  int local_res10 [2];
  longlong *local_48;
  longlong local_40;
  
  if (10 < param_2) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar7 = (ulonglong)param_2;
  *(int *)((longlong)param_1 + uVar7 * 0xc + 0x28) = (int)*param_4;
  lVar6 = (longlong)param_1 + uVar7 * 0xc + 0x28;
  *(undefined4 *)((longlong)param_1 + uVar7 * 0xc + 0x2c) = *(undefined4 *)((longlong)param_4 + 4);
  uVar9 = 0;
  if (param_3 != 3) {
    uVar9 = param_5;
  }
  *(undefined4 *)((longlong)param_1 + uVar7 * 0xc + 0x30) = uVar9;
  plVar1 = param_1 + 0x4c;
  if ((int)param_1[0x4d] != *(int *)((longlong)param_1 + 0x294)) {
    lVar4 = (&DAT_1469ea750)[uVar7 * 3];
    plVar8 = (longlong *)param_1[0x54];
    if ((longlong *)param_1[0x54] == (longlong *)0x0) {
      plVar8 = param_1 + 0x53;
    }
    iVar3 = *(int *)((longlong)plVar8 +
                    ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                    (longlong)(int)param_1[0x55] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar3 * 0xf0 + *plVar1);
        if (*plVar8 == lVar4) {
          if ((iVar3 != -1) && (plVar8 != (longlong *)0x0)) goto LAB_1428b1a72;
          break;
        }
        iVar3 = (int)plVar8[0x1d];
      } while (iVar3 != -1);
    }
  }
  local_48 = &DAT_1469ea750 + uVar7 * 3;
  FUN_142896050(plVar1,local_res10,&local_48,0);
  plVar8 = (longlong *)((longlong)local_res10[0] * 0xf0 + *plVar1);
LAB_1428b1a72:
  plVar1 = param_1 + 0x74;
  *(int *)plVar1 = (int)*plVar1 + 1;
  local_40 = lVar6;
  if (param_3 == 0) {
    iVar3 = (int)plVar8[0x12];
    *(int *)(plVar8 + 0x12) = iVar3 + 1;
    if (*(int *)((longlong)plVar8 + 0x94) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar8 + 0x11,iVar3);
    }
    *(int *)(plVar8[0x11] + (longlong)iVar3 * 4) = (int)*plVar1;
    local_48 = plVar1;
    FUN_142896c10(param_1 + 0x16,local_res10,&local_48,0);
    if ((*(byte *)((longlong)plVar8 + 0x34) & 2) == 0) {
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      fVar2 = *(float *)(lVar4 + 0x798);
      plVar5 = (longlong *)UInputSettings::GetPrivateStaticClass();
      lVar4 = plVar5[0x1f];
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x368))(plVar5);
        lVar4 = plVar5[0x1f];
      }
      if (fVar2 - *(float *)(plVar8 + 6) < *(float *)(lVar4 + 0x78)) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        iVar3 = (int)plVar8[0x18];
        *(int *)(plVar8 + 0x18) = iVar3 + 1;
        if (*(int *)((longlong)plVar8 + 0xc4) < iVar3 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar8 + 0x17,iVar3);
        }
        *(int *)(plVar8[0x17] + (longlong)iVar3 * 4) = (int)*plVar1;
        local_48 = plVar1;
        local_40 = lVar6;
        FUN_142896c10(param_1 + 0x16,local_res10,&local_48,0);
      }
      *(float *)(plVar8 + 6) = fVar2;
    }
  }
  else {
    if (param_3 == 3) {
      iVar3 = (int)plVar8[0x14];
      *(int *)(plVar8 + 0x14) = iVar3 + 1;
      if (*(int *)((longlong)plVar8 + 0xa4) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar8 + 0x13,iVar3);
      }
      lVar6 = plVar8[0x13];
    }
    else {
      iVar3 = (int)plVar8[0x16];
      *(int *)(plVar8 + 0x16) = iVar3 + 1;
      if (*(int *)((longlong)plVar8 + 0xb4) < iVar3 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar8 + 0x15,iVar3);
      }
      lVar6 = plVar8[0x15];
    }
    *(int *)(lVar6 + (longlong)iVar3 * 4) = (int)*plVar1;
    local_48 = plVar1;
    FUN_142896c10(param_1 + 0x16,local_res10,&local_48,0);
  }
  *(char *)((longlong)plVar8 + 0x35) = *(char *)((longlong)plVar8 + 0x35) + '\x01';
  lVar4 = *param_4;
  lVar6 = *param_4;
  plVar8[3] = *param_4;
  *(longlong *)((longlong)plVar8 + 0x24) = lVar6;
  plVar8[0x1b] = lVar4;
  *(undefined4 *)(plVar8 + 4) = 0;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = 0;
  *(undefined4 *)(plVar8 + 0x1c) = 0;
  return 1;
}



// FUNCTION 1428b1ca0 InvertAxis body=592 status=ok
// SIG undefined InvertAxis(void)

void UPlayerInput::InvertAxis(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x218) - *(int *)(param_1 + 0x244) < 1) {
    bVar2 = false;
    iVar6 = *(int *)(param_1 + 0x168) + -1;
    if (-1 < iVar6) {
      lVar7 = (longlong)iVar6 * 8;
      lVar8 = lVar7;
      do {
        lVar1 = *(longlong *)(param_1 + 0x160);
        if (*(longlong *)(lVar1 + lVar7) == param_2) {
          iVar5 = *(int *)(param_1 + 0x168);
          bVar2 = true;
          iVar3 = (iVar5 - iVar6) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(lVar1 + lVar8),(void *)(lVar1 + (longlong)(iVar5 - iVar3) * 8),
                       (longlong)iVar3 << 3);
            iVar5 = *(int *)(param_1 + 0x168);
          }
          *(int *)(param_1 + 0x168) = iVar5 + -1;
        }
        lVar8 = lVar8 + -8;
        lVar7 = lVar7 + -8;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      if (bVar2) goto LAB_1428b1ecf;
    }
    iVar6 = *(int *)(param_1 + 0x168);
    *(int *)(param_1 + 0x168) = iVar6 + 1;
    if (*(int *)(param_1 + 0x16c) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x160,iVar6);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar6 * 8) = param_2;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x250);
    if (*(longlong *)(param_1 + 0x250) == 0) {
      lVar7 = param_1 + 0x248;
    }
    iVar6 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 600) - 1U) * 4);
    if (iVar6 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x210) + (longlong)iVar6 * 0x28;
        if (*(longlong *)(*(longlong *)(param_1 + 0x210) + (longlong)iVar6 * 0x28) == param_2) {
          if (iVar6 != -1) goto LAB_1428b1d33;
          break;
        }
        iVar6 = *(int *)(lVar7 + 0x20);
      } while (iVar6 != -1);
    }
    lVar7 = 0;
LAB_1428b1d33:
    lVar8 = lVar7 + 8;
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    if ((lVar8 == 0) ||
       (bVar4 = *(byte *)(lVar8 + 0x10) ^ 1, *(byte *)(lVar8 + 0x10) = bVar4, (bVar4 & 1) != 0)) {
      iVar6 = *(int *)(param_1 + 0x168);
      *(int *)(param_1 + 0x168) = iVar6 + 1;
      if (*(int *)(param_1 + 0x16c) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x160,iVar6);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar6 * 8) = param_2;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x168) + -1;
      if (-1 < iVar6) {
        iVar5 = *(int *)(param_1 + 0x168);
        lVar7 = (longlong)iVar6 << 3;
        do {
          iVar3 = (iVar5 - iVar6) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x160) + lVar7),
                       (void *)(*(longlong *)(param_1 + 0x160) + (longlong)(iVar5 - iVar3) * 8),
                       (longlong)iVar3 << 3);
            iVar5 = *(int *)(param_1 + 0x168);
          }
          iVar5 = iVar5 + -1;
          lVar7 = lVar7 + -8;
          iVar6 = iVar6 + -1;
          *(int *)(param_1 + 0x168) = iVar5;
        } while (-1 < iVar6);
      }
    }
  }
LAB_1428b1ecf:
  FUN_141761740(param_1,0x4000,0,DAT_1468b6148);
  return;
}



// FUNCTION 1428b1ef0 InvertAxisKey body=252 status=ok
// SIG undefined InvertAxisKey(void)

void UPlayerInput::InvertAxisKey(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  byte local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  FUN_1428a1120();
  local_38 = *param_2;
  local_3c = local_3c & 0xfe;
  local_30 = param_2[1];
  local_28 = param_2[2];
  local_48 = 0x3e4ccccd;
  local_44 = 0x3f800000;
  local_40 = 0x3f800000;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  cVar6 = FUN_1428abbf0(param_1,&local_38,&local_48);
  if (cVar6 != '\0') {
    local_3c = local_3c ^ 1;
    local_20 = *param_2;
    local_18 = param_2[1];
    local_10 = param_2[2];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_1428bbaa0(param_1,&local_20,&local_48);
  }
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 1428b1ff0 FUN_1428b1ff0 body=144 status=ok
// SIG undefined FUN_1428b1ff0(void)

undefined1 FUN_1428b1ff0(undefined8 param_1)

{
  char cVar1;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_38 = DAT_1469ea0f0;
  local_30 = DAT_1469ea0f8;
  local_28 = DAT_1469ea100;
  if (DAT_1469ea100 != 0) {
    LOCK();
    *(int *)(DAT_1469ea100 + 8) = *(int *)(DAT_1469ea100 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_1428b2680(param_1,&local_38);
  if (cVar1 == '\0') {
    local_20 = DAT_1469ea108;
    local_18 = DAT_1469ea110;
    local_10 = DAT_1469ea118;
    if (DAT_1469ea118 != 0) {
      LOCK();
      *(int *)(DAT_1469ea118 + 8) = *(int *)(DAT_1469ea118 + 8) + 1;
      UNLOCK();
    }
    cVar1 = FUN_1428b2680(param_1,&local_20);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1428b2080 FUN_1428b2080 body=144 status=ok
// SIG undefined FUN_1428b2080(void)

undefined1 FUN_1428b2080(undefined8 param_1)

{
  char cVar1;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_38 = DAT_1469ea120;
  local_30 = DAT_1469ea128;
  local_28 = DAT_1469ea130;
  if (DAT_1469ea130 != 0) {
    LOCK();
    *(int *)(DAT_1469ea130 + 8) = *(int *)(DAT_1469ea130 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_1428b2680(param_1,&local_38);
  if (cVar1 == '\0') {
    local_20 = DAT_1469ea138;
    local_18 = DAT_1469ea140;
    local_10 = DAT_1469ea148;
    if (DAT_1469ea148 != 0) {
      LOCK();
      *(int *)(DAT_1469ea148 + 8) = *(int *)(DAT_1469ea148 + 8) + 1;
      UNLOCK();
    }
    cVar1 = FUN_1428b2680(param_1,&local_20);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1428b2110 FUN_1428b2110 body=144 status=ok
// SIG undefined FUN_1428b2110(void)

undefined1 FUN_1428b2110(undefined8 param_1)

{
  char cVar1;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_38 = DAT_1469ea0c0;
  local_30 = DAT_1469ea0c8;
  local_28 = DAT_1469ea0d0;
  if (DAT_1469ea0d0 != 0) {
    LOCK();
    *(int *)(DAT_1469ea0d0 + 8) = *(int *)(DAT_1469ea0d0 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_1428b2680(param_1,&local_38);
  if (cVar1 == '\0') {
    local_20 = DAT_1469ea0d8;
    local_18 = DAT_1469ea0e0;
    local_10 = DAT_1469ea0e8;
    if (DAT_1469ea0e8 != 0) {
      LOCK();
      *(int *)(DAT_1469ea0e8 + 8) = *(int *)(DAT_1469ea0e8 + 8) + 1;
      UNLOCK();
    }
    cVar1 = FUN_1428b2680(param_1,&local_20);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1428b21a0 IsHistory body=129 status=ok
// SIG undefined IsHistory(void)

bool FAutoCompleteCommand::IsHistory(longlong param_1)

{
  wint_t wVar1;
  wint_t wVar2;
  int iVar3;
  wint_t *pwVar4;
  undefined2 *puVar5;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = *(undefined2 **)(param_1 + 0x10);
  }
  for (pwVar4 = &DAT_144d66ac8;
      (wVar1 = *(wint_t *)((longlong)(puVar5 + -0xa26b3564) + (longlong)pwVar4), wVar1 != 0 ||
      (*pwVar4 != 0)); pwVar4 = pwVar4 + 1) {
    if (wVar1 != *pwVar4) {
      wVar1 = towlower(wVar1);
      wVar2 = towlower(*pwVar4);
      if (wVar1 != wVar2) {
        iVar3 = (uint)wVar1 - (uint)wVar2;
LAB_1428b220c:
        return iVar3 == 0;
      }
    }
  }
  iVar3 = 0;
  goto LAB_1428b220c;
}



// FUNCTION 1428b2230 FUN_1428b2230 body=12 status=ok
// SIG undefined FUN_1428b2230(void)

bool FUN_1428b2230(void)

{
  return DAT_146b184b8 != 0;
}



// FUNCTION 1428b2240 FUN_1428b2240 body=126 status=ok
// SIG undefined FUN_1428b2240(void)

uint FUN_1428b2240(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar5 = &DAT_143f3eda8;
  puVar4 = &DAT_143f3eda8;
  if ((int)DAT_146b188e8 != 0) {
    puVar4 = DAT_146b188e0;
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
  if (iVar1 != 0) {
    puVar4 = &DAT_143f3eda8;
    if (DAT_146b18940 != 0) {
      puVar4 = DAT_146b18938;
    }
    if (*(int *)(param_1 + 1) != 0) {
      puVar5 = (undefined2 *)*param_1;
    }
    uVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar4);
    if (uVar2 != 0) {
      return uVar2 & 0xffffff00;
    }
  }
  return 1;
}



// FUNCTION 1428b22c0 FUN_1428b22c0 body=898 status=ok
// SIG undefined FUN_1428b22c0(void)

byte FUN_1428b22c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  uint uStack_64;
  int iStack_48;
  uint uStack_44;
  uint *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar11 = *param_2;
  if (lVar11 != DAT_1469e97d8) {
    if (param_3 == (longlong *)0x0) {
      if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
        lVar7 = *(longlong *)(param_1 + 0x2a0);
        if (*(longlong *)(param_1 + 0x2a0) == 0) {
          lVar7 = param_1 + 0x298;
        }
        iVar8 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                                 (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
        if (iVar8 != -1) {
          do {
            plVar9 = (longlong *)((longlong)iVar8 * 0xf0 + *(longlong *)(param_1 + 0x260));
            if (*plVar9 == lVar11) {
              if (iVar8 != -1) goto LAB_1428b25c7;
              break;
            }
            iVar8 = (int)plVar9[0x1d];
          } while (iVar8 != -1);
        }
      }
      plVar9 = (longlong *)0x0;
LAB_1428b25c7:
      param_3 = plVar9 + 3;
      if (plVar9 == (longlong *)0x0) {
        param_3 = (longlong *)0x0;
      }
      if (param_3 == (longlong *)0x0) goto LAB_1428b25d7;
    }
    bVar4 = *(byte *)((longlong)param_3 + 0x1c);
    FKey::~FKey(param_2);
    return bVar4 >> 2 & 1;
  }
  uVar5 = *(uint *)(param_1 + 0x288);
  puVar1 = (uint *)(param_1 + 0x270);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar5 != 0) {
    puVar13 = *(uint **)(param_1 + 0x280);
    if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar12 == 0) {
      lVar11 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar6 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar6) goto LAB_1428b23b0;
      uVar12 = puVar13[lVar11 + 1];
    }
    uStack_94 = -uVar12 & uVar12;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (iStack_80 - iVar8) + 0x1f;
    if ((int)uVar5 < (int)uStack_84) {
LAB_1428b23b0:
      uStack_84 = uVar5;
    }
  }
  uStack_64 = *(uint *)(param_1 + 0x288);
  uStack_38 = CONCAT44(uStack_84,0xffffffff);
  local_30 = CONCAT44(uStack_7c,iStack_80);
  uVar12 = uStack_64 & 0xffffffe0;
  iStack_48 = local_98;
  uStack_44 = uStack_94;
  local_40 = puVar1;
  if (uStack_64 != uVar5) {
    puVar13 = *(uint **)(param_1 + 0x280);
    if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = puVar13[(int)uStack_64 >> 5] & -1 << ((byte)uStack_64 & 0x1f);
    iVar8 = (int)uStack_64 >> 5;
    while (uVar10 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1428b248e;
      uVar10 = puVar13[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar8 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_64 = (uVar12 - iVar8) + 0x1f;
    if ((int)uVar5 < (int)uStack_64) {
LAB_1428b248e:
      uStack_64 = uVar5;
    }
  }
  while( true ) {
    if ((uStack_38._4_4_ == uStack_64) && (local_40 == puVar1)) break;
    if ((*(byte *)((longlong)(int)uStack_38._4_4_ * 0xf0 + 0x34 + *(longlong *)(param_1 + 0x260)) &
        4) != 0) {
      plVar9 = (longlong *)param_2[2];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      return 1;
    }
    uStack_38 = CONCAT44(uStack_38._4_4_,(uint)uStack_38 & ~uStack_44);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_48);
  }
LAB_1428b25d7:
  plVar9 = (longlong *)param_2[2];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      iVar8 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return 0;
}



// FUNCTION 1428b2650 FUN_1428b2650 body=46 status=ok
// SIG undefined FUN_1428b2650(void)

ulonglong FUN_1428b2650(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_1428b2240();
  if ((char)uVar2 != '\0') {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 == 0) || (uVar2 = (ulonglong)(uVar1 - 1), uVar1 - 1 == 0)) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1428b2680 FUN_1428b2680 body=843 status=ok
// SIG undefined FUN_1428b2680(void)

byte FUN_1428b2680(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_64;
  uint uStack_48;
  uint uStack_44;
  uint *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar12 = *param_2;
  plVar8 = (longlong *)0x0;
  if (lVar12 == DAT_1469e97d8) {
    uVar3 = *(uint *)(param_1 + 0x288);
    puVar1 = (uint *)(param_1 + 0x270);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar3 != 0) {
      puVar14 = *(uint **)(param_1 + 0x280);
      if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar13 = *puVar14;
      plVar9 = plVar8;
      while (uVar13 == 0) {
        iVar5 = (int)plVar8;
        uStack_80 = (int)plVar9 + 0x20;
        plVar9 = (longlong *)(ulonglong)uStack_80;
        local_98 = iVar5 + 1;
        plVar8 = (longlong *)(ulonglong)local_98;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_1428b275f;
        uVar13 = puVar14[(longlong)iVar5 + 1];
      }
      uStack_94 = -uVar13 & uVar13;
      iVar5 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_84 = (uStack_80 - iVar5) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_1428b275f:
        uStack_84 = uVar3;
      }
    }
    uStack_64 = *(uint *)(param_1 + 0x288);
    uStack_38 = CONCAT44(uStack_84,0xffffffff);
    local_30 = CONCAT44(uStack_7c,uStack_80);
    uVar13 = uStack_64 & 0xffffffe0;
    uStack_48 = local_98;
    uStack_44 = uStack_94;
    local_40 = puVar1;
    if (uStack_64 != uVar3) {
      puVar14 = *(uint **)(param_1 + 0x280);
      if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar10 = puVar14[(int)uStack_64 >> 5] & -1 << ((byte)uStack_64 & 0x1f);
      iVar5 = (int)uStack_64 >> 5;
      while (uVar10 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_1428b283d;
        uVar10 = puVar14[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar10 = -uVar10 & uVar10;
      iVar5 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar10 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_64 = (uVar13 - iVar5) + 0x1f;
      if ((int)uVar3 < (int)uStack_64) {
LAB_1428b283d:
        uStack_64 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_38._4_4_ == uStack_64) && (local_40 == puVar1)) goto LAB_1428b297b;
      lVar12 = (longlong)(int)uStack_38._4_4_ * 0xf0 + *(longlong *)(param_1 + 0x260);
      cVar4 = FKey::IsFloatAxis(lVar12);
      if ((cVar4 == '\0') &&
         ((cVar4 = FKey::IsVectorAxis(lVar12), cVar4 == '\0' &&
          ((*(byte *)(lVar12 + 0x34) & 1) != 0)))) break;
      uStack_38 = CONCAT44(uStack_38._4_4_,(uint)uStack_38 & ~uStack_44);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_48);
    }
    plVar8 = (longlong *)param_2[2];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      lVar12 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    bVar11 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x268) != *(int *)(param_1 + 0x294)) {
      lVar6 = *(longlong *)(param_1 + 0x2a0);
      if (*(longlong *)(param_1 + 0x2a0) == 0) {
        lVar6 = param_1 + 0x298;
      }
      iVar5 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar12 >> 0x20) + (int)lVar12) &
                               (longlong)*(int *)(param_1 + 0x2a8) - 1U) * 4);
      if (iVar5 != -1) {
        do {
          plVar9 = (longlong *)((longlong)iVar5 * 0xf0 + *(longlong *)(param_1 + 0x260));
          if (*plVar9 == lVar12) {
            if (iVar5 != -1) goto LAB_1428b2957;
            break;
          }
          iVar5 = (int)plVar9[0x1d];
        } while (iVar5 != -1);
      }
    }
    plVar9 = plVar8;
LAB_1428b2957:
    plVar7 = plVar9 + 3;
    if (plVar9 == (longlong *)0x0) {
      plVar7 = plVar8;
    }
    if (plVar7 == (longlong *)0x0) {
LAB_1428b297b:
      plVar8 = (longlong *)param_2[2];
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar8 + 1;
        lVar12 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      bVar11 = 0;
    }
    else {
      bVar11 = *(byte *)((longlong)plVar7 + 0x1c) & 1;
      FKey::~FKey(param_2);
    }
  }
  return bVar11;
}



// FUNCTION 1428b29d0 FUN_1428b29d0 body=144 status=ok
// SIG undefined FUN_1428b29d0(void)

undefined1 FUN_1428b29d0(undefined8 param_1)

{
  char cVar1;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_38 = DAT_1469ea090;
  local_30 = DAT_1469ea098;
  local_28 = DAT_1469ea0a0;
  if (DAT_1469ea0a0 != 0) {
    LOCK();
    *(int *)(DAT_1469ea0a0 + 8) = *(int *)(DAT_1469ea0a0 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_1428b2680(param_1,&local_38);
  if (cVar1 == '\0') {
    local_20 = DAT_1469ea0a8;
    local_18 = DAT_1469ea0b0;
    local_10 = DAT_1469ea0b8;
    if (DAT_1469ea0b8 != 0) {
      LOCK();
      *(int *)(DAT_1469ea0b8 + 8) = *(int *)(DAT_1469ea0b8 + 8) + 1;
      UNLOCK();
    }
    cVar1 = FUN_1428b2680(param_1,&local_20);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1428b2a60 K2_Deproject body=36 status=ok
// SIG undefined K2_Deproject(void)

void UCanvas::K2_Deproject(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  if (*(longlong *)(param_1 + 0x268) != 0) {
    local_res8[0] = param_2;
    FUN_142749b40(*(longlong *)(param_1 + 0x268),local_res8);
  }
  return;
}



// FUNCTION 1428b2a90 FUN_1428b2a90 body=420 status=ok
// SIG undefined FUN_1428b2a90(void)

void FUN_1428b2a90(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
                  undefined8 param_13,undefined8 param_14,uint param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  float local_6c;
  float local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  
  if ((((((0.0 < (float)param_9) && (0.0 < param_9._4_4_)) && (param_2 != 0)) &&
       ((param_3 != 0 && (param_4 != 0)))) && ((param_5 != 0 && ((param_6 != 0 && (param_7 != 0)))))
      ) && (*(longlong *)(param_1 + 0x260) != 0)) {
    local_60 = *(undefined8 *)(param_2 + 0x60);
    local_6c = (float)param_10 + (float)param_11;
    local_c0 = param_8;
    local_90 = param_9;
    local_58 = *(undefined8 *)(param_3 + 0x60);
    local_50 = *(undefined8 *)(param_4 + 0x60);
    local_48 = *(undefined8 *)(param_5 + 0x60);
    local_40 = *(undefined8 *)(param_6 + 0x60);
    local_78 = 0x3f800000;
    local_38 = *(undefined8 *)(param_7 + 0x60);
    local_88 = param_13;
    local_74 = param_10;
    local_a0 = *param_12;
    uStack_98 = param_12[1];
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_80 = param_14;
    local_68 = param_10._4_4_ + param_11._4_4_;
    local_c8 = &PTR_FUN_1451e2228;
    local_30 = (ulonglong)param_15 << 0x20;
    local_24 = param_16;
    local_28 = 0;
    local_1c = param_17;
    FCanvas::DrawItem(*(longlong *)(param_1 + 0x260),&local_c8);
  }
  return;
}



// FUNCTION 1428b2c40 FUN_1428b2c40 body=191 status=ok
// SIG undefined FUN_1428b2c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428b2c40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (((0.0 < (float)param_3) &&
      (local_b8._4_4_ = (float)((ulonglong)param_3 >> 0x20), 0.0 < local_b8._4_4_)) &&
     (*(longlong *)(param_1 + 0x260) != 0)) {
    local_a8 = &PTR_FUN_1444d5548;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = *param_5;
    uStack_7c = param_5[1];
    uStack_78 = param_5[2];
    uStack_74 = param_5[3];
    local_30 = 0;
    local_28 = 0;
    local_b8 = param_3;
    local_a0 = param_2;
    local_70 = param_3;
    local_68 = param_4;
    FCanvas::DrawItem(*(longlong *)(param_1 + 0x260),&local_a8);
    if (local_30 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1428b2d00 FUN_1428b2d00 body=216 status=ok
// SIG undefined FUN_1428b2d00(void)

void FUN_1428b2d00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  float local_88;
  float fStack_84;
  float fStack_7c;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_88 = (float)param_3;
  fStack_84 = (float)((ulonglong)param_3 >> 0x20);
  local_40 = (float)param_2;
  fStack_7c = (float)((ulonglong)param_2 >> 0x20);
  if ((0.0 < (fStack_84 - fStack_7c) * (fStack_84 - fStack_7c) +
             (local_88 - local_40) * (local_88 - local_40)) && (*(longlong *)(param_1 + 0x260) != 0)
     ) {
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_78 = &PTR_FUN_14416c998;
    local_3c = fStack_7c;
    local_34 = local_88;
    local_50 = *param_5;
    uStack_4c = param_5[1];
    uStack_48 = param_5[2];
    uStack_44 = param_5[3];
    local_38 = 0;
    local_30 = fStack_84;
    local_2c = 0;
    local_70 = param_2;
    local_28 = param_4;
    FCanvas::DrawItem(*(longlong *)(param_1 + 0x260),&local_78);
  }
  return;
}



// FUNCTION 1428b2de0 FUN_1428b2de0 body=412 status=ok
// SIG undefined FUN_1428b2de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428b2de0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8)

{
  float local_108;
  float fStack_104;
  undefined1 local_100 [8];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  float local_9c;
  float local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_74;
  
  if ((((param_2 != (longlong *)0x0) && (local_108 = (float)param_4, 0.0 < local_108)) &&
      (fStack_104 = (float)((ulonglong)param_4 >> 0x20), 0.0 < fStack_104)) &&
     (*(longlong *)(param_1 + 0x260) != 0)) {
    local_88 = (**(code **)(*param_2 + 0x2a8))(param_2,0,0);
    local_c0 = _DAT_1464aa6c0;
    uStack_b8 = _DAT_1464aa6c8;
    local_a8 = 0x3f800000;
    local_a4 = param_5;
    local_80 = (ulonglong)param_7 << 0x20;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_e8 = &PTR_FUN_1451e2200;
    local_90 = 0;
    uStack_f8 = 0;
    local_78 = 0;
    local_74 = param_8;
    local_e0 = param_3;
    local_b0 = param_4;
    local_9c = (float)param_6 + (float)param_5;
    local_98 = param_5._4_4_ + param_6._4_4_;
    FLinearColor::FLinearColor(local_100,param_1 + 0x38);
    uStack_b8 = CONCAT44(uStack_f4,uStack_f8);
    FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260),&local_e8);
  }
  return;
}



// FUNCTION 1428b2f80 FUN_1428b2f80 body=296 status=ok
// SIG undefined FUN_1428b2f80(void)

void FUN_1428b2f80(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined **local_68 [8];
  undefined8 local_28;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if (((param_2 != (longlong *)0x0) && (0 < (int)param_3[1])) &&
     (*(longlong *)(param_1 + 0x260) != 0)) {
    FCanvasTriangleItem::FCanvasTriangleItem
              (local_68,&DAT_1468b5d88,&DAT_1468b5d88,&DAT_1468b5d88,0);
    local_28 = (**(code **)(*param_2 + 0x2a8))(param_2,0,0);
    if (&local_18 != param_3) {
      if (local_18 != 0) {
        FMemory::Free();
      }
      local_18 = *param_3;
      *param_3 = 0;
      local_10 = (undefined4)param_3[1];
      local_c = *(undefined4 *)((longlong)param_3 + 0xc);
      param_3[1] = 0;
    }
    FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260),local_68);
    local_68[0] = &PTR__scalar_deleting_destructor__1450861e0;
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428b30b0 FUN_1428b30b0 body=276 status=ok
// SIG undefined FUN_1428b30b0(void)

void FUN_1428b30b0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined4 *param_6)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30 [2];
  undefined8 *local_20;
  undefined8 local_18;
  
  local_78._0_4_ = (float)param_4;
  if ((((0.0 < (float)local_78) &&
       (local_78._4_4_ = (float)((ulonglong)param_4 >> 0x20), 0.0 < local_78._4_4_)) &&
      (2 < param_5)) && (*(longlong *)(param_1 + 0x260) != 0)) {
    local_18 = DAT_146ac3d68;
    if (param_2 != 0) {
      local_18 = *(undefined8 *)(param_2 + 0x60);
    }
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = *param_6;
    uStack_3c = param_6[1];
    uStack_38 = param_6[2];
    uStack_34 = param_6[3];
    local_30[0] = 0;
    local_30[1] = 0;
    local_20 = (undefined8 *)0x0;
    local_68 = &PTR__scalar_deleting_destructor__1451e2250;
    local_78 = param_4;
    local_70 = param_3;
    local_60 = param_3;
    TArray<FCanvasUVTri,FDefaultAllocator>::SetNum(local_30,param_5,1);
    FCanvasNGonItem::SetupPosition(&local_68,&local_70,&local_78);
    FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260),&local_68);
    local_68 = &PTR__scalar_deleting_destructor__1451e2250;
    if (local_20 != (undefined8 *)0x0) {
      (**(code **)*local_20)(local_20,1);
    }
    if (local_30[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1428b31d0 K2_DrawText body=363 status=ok
// SIG undefined K2_DrawText(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UCanvas::K2_DrawText
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,undefined4 *param_7,undefined8 param_8,
               undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined4 *param_12)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined8 local_1f8;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [56];
  undefined4 local_1a0;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  if ((1 < *(int *)(param_3 + 8)) && (*(longlong *)(param_1 + 0x260) != 0)) {
    local_1f8 = param_4;
    uVar5 = FText::FromString(local_1f0,param_3);
    local_208 = param_5;
    FCanvasTextItem::FCanvasTextItem(local_1d8,&local_1f8,uVar5,param_2);
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar2 = (int *)((longlong)local_1e8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1e8 + 8))(local_1e8,1);
        }
      }
    }
    local_170 = *param_7;
    uStack_16c = param_7[1];
    uStack_168 = param_7[2];
    uStack_164 = param_7[3];
    local_1a0 = param_6;
    local_150 = param_9;
    local_160 = param_8;
    local_14c = *param_12;
    uStack_148 = param_12[1];
    uStack_144 = param_12[2];
    uStack_140 = param_12[3];
    local_14f = param_10;
    local_14e = param_11;
    FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260),local_1d8);
    FUN_140c64b70(local_1d8);
  }
  return;
}



// FUNCTION 1428b3340 FUN_1428b3340 body=298 status=ok
// SIG undefined FUN_1428b3340(void)

void FUN_1428b3340(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined4 param_8,
                  uint param_9,undefined8 param_10)

{
  longlong lVar1;
  float fStack_b4;
  undefined **local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  float local_5c;
  float local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_34;
  
  if (((0.0 < (float)param_4) && (fStack_b4 = (float)((ulonglong)param_4 >> 0x20), 0.0 < fStack_b4))
     && (lVar1 = *(longlong *)(param_1 + 0x260), lVar1 != 0)) {
    local_50 = DAT_146ac3d68;
    if (param_2 != 0) {
      local_50 = *(undefined8 *)(param_2 + 0x60);
    }
    local_64 = param_5;
    local_5c = (float)param_5 + (float)param_6;
    local_68 = 0x3f800000;
    local_58 = param_5._4_4_ + param_6._4_4_;
    local_80 = *param_7;
    uStack_78 = param_7[1];
    local_a8 = &PTR_FUN_1451e2200;
    local_40 = (ulonglong)param_9 << 0x20;
    local_34 = param_10;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_48 = 0;
    local_38 = 0;
    local_a0 = param_3;
    local_70 = param_4;
    local_94 = FCanvas::BlendToSimpleElementBlend(param_8);
    FCanvas::DrawItem(lVar1,&local_a8);
  }
  return;
}



// FUNCTION 1428b3470 K2_DrawTriangle body=246 status=ok
// SIG undefined K2_DrawTriangle(void)

void UCanvas::K2_DrawTriangle(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined **local_68 [10];
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((0 < (int)param_3[1]) && (*(longlong *)(param_1 + 0x260) != 0)) {
    uVar1 = DAT_146ac3d68;
    if (param_2 != 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x60);
    }
    FCanvasTriangleItem::FCanvasTriangleItem
              (local_68,&DAT_1468b5d88,&DAT_1468b5d88,&DAT_1468b5d88,uVar1);
    if (&local_18 != param_3) {
      if (local_18 != 0) {
        FMemory::Free();
      }
      local_18 = *param_3;
      *param_3 = 0;
      local_10 = (undefined4)param_3[1];
      local_c = *(undefined4 *)((longlong)param_3 + 0xc);
      param_3[1] = 0;
    }
    FCanvas::DrawItem(*(undefined8 *)(param_1 + 0x260),local_68);
    local_68[0] = &PTR__scalar_deleting_destructor__1450861e0;
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428b3570 FUN_1428b3570 body=202 status=ok
// SIG undefined FUN_1428b3570(void)

float * FUN_1428b3570(longlong param_1,float *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  uVar2 = 0;
  uVar3 = 0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  if (*(longlong *)(param_1 + 0x268) != 0) {
    puVar1 = (undefined4 *)FUN_142759760(*(longlong *)(param_1 + 0x268),local_18,&local_28,0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    fVar4 = (float)puVar1[2];
    fVar5 = (float)puVar1[3];
  }
  *(ulonglong *)param_2 = CONCAT44(uVar3,uVar2);
  param_2[2] = fVar4;
  fVar4 = *(float *)(param_1 + 0x34);
  *param_2 = (*param_2 + 1.0) * *(float *)(param_1 + 0x30) * 0.5;
  param_2[1] = (1.0 - DAT_1464c9c24 * 1.0 * param_2[1]) * fVar4 * 0.5;
  if (fVar5 <= 0.0) {
    param_2[2] = 0.0;
  }
  return param_2;
}



// FUNCTION 1428b3640 K2_StrLen body=88 status=ok
// SIG undefined K2_StrLen(void)

undefined8 *
UCanvas::K2_StrLen(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 local_res20;
  
  if (1 < *(int *)(param_4 + 8)) {
    FUN_1428bd2d0(param_1,param_3,param_4,&local_res20,(longlong)&local_res20 + 4);
    *param_2 = local_res20;
    return param_2;
  }
  *param_2 = DAT_1468b5d88;
  return param_2;
}



// FUNCTION 1428b36a0 K2_TextSize body=134 status=ok
// SIG undefined K2_TextSize(void)

undefined8 *
UCanvas::K2_TextSize
          (undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
          undefined8 param_5)

{
  float local_res20;
  float fStackX_24;
  int local_18 [4];
  
  if (1 < *(int *)(param_4 + 1)) {
    if (param_3 != 0) {
      ClippedStrLen(param_3,param_2,param_5._4_4_,&local_res20,local_18,*param_4);
      local_res20 = (float)(int)local_res20;
      fStackX_24 = (float)local_18[0];
    }
    *param_2 = CONCAT44(fStackX_24,local_res20);
    return param_2;
  }
  *param_2 = DAT_1468b5d88;
  return param_2;
}


