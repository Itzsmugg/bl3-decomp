// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141227a00 FUN_141227a00 body=19 status=ok
// SIG undefined FUN_141227a00(void)

longlong FUN_141227a00(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x668);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = *(longlong *)(lVar1 + 0x408);
  if ((lVar2 == 0) ||
     ((1 < (byte)(*(char *)(lVar1 + 0x418) - 1U) &&
      ((param_2 == '\0' || (*(char *)(lVar1 + 0x418) != '\x03')))))) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 141227a20 FUN_141227a20 body=2146 status=ok
// SIG undefined FUN_141227a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141227a20(longlong *param_1,undefined8 *param_2,float param_3,float param_4,float *param_5)

{
  float *pfVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float *pfVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  size_t _Size;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_318 [32];
  undefined1 local_2f8;
  float local_2f4;
  float local_2f0;
  float fStack_2ec;
  float local_2e8;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  undefined4 uStack_2bc;
  longlong local_2b8;
  float local_2b0;
  undefined8 local_2a8;
  undefined8 *local_2a0;
  undefined8 local_298;
  undefined8 *local_290;
  undefined8 local_288;
  float local_278 [12];
  float *local_248;
  undefined8 local_240;
  undefined8 local_238 [40];
  undefined8 *local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  local_2d8 = param_4;
  if (param_3 < param_4) {
    local_2c8 = *(float *)(param_1 + 0xe4);
    fStack_2c4 = *(float *)((longlong)param_1 + 0x724);
    fStack_2c0 = *(float *)(param_1 + 0xe5);
    uStack_2bc = *(undefined4 *)((longlong)param_1 + 0x72c);
    local_f8 = (undefined8 *)0x0;
    local_2dc = param_3 * param_3;
    local_f0 = 0;
    local_2e0 = param_4 * param_4 - local_2dc;
    local_248 = (float *)0x0;
    local_240 = 0;
    local_2a8 = (**(code **)(*param_1 + 0x148))();
    local_2a0 = &local_2a8;
    local_298 = FUN_14073d6c0(&local_2a8,DAT_146876ff8);
    puVar19 = local_2a0;
    local_290 = &local_2a8;
    local_288 = 0;
    puVar12 = (undefined8 *)FUN_14073d6c0(local_2a0,local_298);
    puVar13 = (undefined8 *)FUN_14073d6c0(local_290,local_288);
    uVar9 = local_240;
    while (local_240 = uVar9, puVar12 != puVar13) {
      plVar2 = (longlong *)puVar12[2];
      if ((plVar2 != param_1) && (plVar2[0xdf] == param_1[0xdf])) {
        local_240._0_4_ = (int)uVar9;
        lVar18 = (longlong)(int)local_240;
        local_2f0 = *(float *)(plVar2 + 0xe4) + *(float *)(plVar2 + 0xd2);
        fStack_2ec = *(float *)((longlong)plVar2 + 0x724) + *(float *)((longlong)plVar2 + 0x694);
        local_240._0_4_ = (int)local_240 + 1;
        local_2e8 = *(float *)(plVar2 + 0xe5) + *(float *)(plVar2 + 0xd3);
        local_240._4_4_ = (int)(uVar9 >> 0x20);
        if (local_240._4_4_ < (int)local_240) {
          TArray<FVertexInputStream,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_278,uVar9 & 0xffffffff);
        }
        pfVar16 = local_278;
        if (local_248 != (float *)0x0) {
          pfVar16 = local_248;
        }
        *(ulonglong *)(pfVar16 + lVar18 * 3) = CONCAT44(fStack_2ec,local_2f0);
        pfVar16[lVar18 * 3 + 2] = local_2e8;
      }
      puVar12 = (undefined8 *)FUN_14073d6c0(puVar19,*puVar12);
      uVar9 = local_240;
    }
    lVar18 = 0x14;
    do {
      iVar11 = rand();
      fVar29 = ((float)iVar11 * 3.051851e-05 + (float)iVar11 * 3.051851e-05) - 1.0;
      iVar11 = rand();
      fVar30 = ((float)iVar11 * 3.051851e-05 + (float)iVar11 * 3.051851e-05) - 1.0;
      iVar11 = rand();
      uVar9 = local_f0;
      local_2f4 = (float)iVar11 * 1.5259255e-05 + 0.5;
      fVar22 = fVar30 * fVar30 + fVar29 * fVar29 + local_2f4 * local_2f4;
      if (1e-08 < fVar22) {
        auVar25 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
        fVar24 = auVar25._0_4_;
        fVar24 = fVar24 + fVar24 * (0.5 - fVar22 * 0.5 * fVar24 * fVar24);
        fVar24 = fVar24 + fVar24 * (0.5 - fVar22 * 0.5 * fVar24 * fVar24);
        fVar29 = fVar24 * fVar29;
        local_2f4 = fVar24 * local_2f4;
        fVar30 = fVar24 * fVar30;
      }
      fVar22 = *(float *)(param_1 + 0xe2);
      fVar24 = *(float *)((longlong)param_1 + 0x714);
      fVar3 = *(float *)(param_1 + 0xe3);
      fVar4 = *(float *)((longlong)param_1 + 0x71c);
      local_2b8 = param_1[0xa8];
      fVar21 = (float)((ulonglong)local_2b8 >> 0x20);
      local_2b0 = *(float *)(param_1 + 0xa9);
      fVar28 = local_2b0 * fVar24 - fVar21 * fVar3;
      fVar26 = (float)local_2b8 * fVar3 - local_2b0 * fVar22;
      fVar28 = fVar28 + fVar28;
      fVar23 = fVar21 * fVar22 - (float)local_2b8 * fVar24;
      fVar26 = fVar26 + fVar26;
      fVar23 = fVar23 + fVar23;
      fVar27 = 0.0;
      local_2f0 = (fVar24 * fVar23 - fVar3 * fVar26) + (float)local_2b8 + fVar4 * fVar28 +
                  fVar29 * *(float *)((longlong)param_1 + 0x54c);
      fStack_2ec = (fVar3 * fVar28 - fVar22 * fVar23) + fVar21 + fVar4 * fVar26 +
                   fVar30 * *(float *)(param_1 + 0xaa);
      local_2e8 = (fVar22 * fVar26 - fVar24 * fVar28) + local_2b0 + fVar4 * fVar23 +
                  local_2f4 * *(float *)((longlong)param_1 + 0x554);
      if ((param_5 != (float *)0x0) &&
         (fStack_2ec * param_5[1] + local_2f0 * *param_5 + local_2e8 * param_5[2] < 0.0)) {
        fVar27 = -1.0;
      }
      pfVar16 = local_278;
      if (local_248 != (float *)0x0) {
        pfVar16 = local_248;
      }
      pfVar1 = pfVar16 + (longlong)(int)local_240 * 3;
      if (pfVar16 != pfVar1) {
        fVar29 = *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0xe8);
        do {
          fVar30 = *pfVar16 - (local_2c8 + local_2f0);
          fVar24 = pfVar16[1] - (fStack_2c4 + fStack_2ec);
          fVar22 = pfVar16[2] - (fStack_2c0 + local_2e8);
          if (fVar24 * fVar24 + fVar30 * fVar30 + fVar22 * fVar22 < fVar29 * fVar29) {
            fVar27 = -1.0;
          }
          pfVar16 = pfVar16 + 3;
        } while (pfVar16 != pfVar1);
      }
      fVar22 = local_2f0 - *(float *)((longlong)param_1 + 0x6bc);
      fVar29 = local_2e8 - *(float *)((longlong)param_1 + 0x6c4);
      fVar29 = (fStack_2ec - *(float *)(param_1 + 0xd8)) * (fStack_2ec - *(float *)(param_1 + 0xd8))
               + fVar22 * fVar22 + fVar29 * fVar29;
      if ((fVar29 <= local_2dc) || (local_2d8 <= fVar29)) {
        if (local_2dc <= fVar29) {
          fVar29 = 1.0 - (fVar29 - local_2e0) / local_2e0;
        }
        else {
          fVar29 = 1.0 - (local_2dc - fVar29) / local_2e0;
        }
      }
      else {
        fVar29 = 1.0;
      }
      lVar20 = (longlong)(int)local_f0;
      iVar11 = (int)local_f0 + 1;
      local_f0 = CONCAT44(local_f0._4_4_,iVar11);
      if (local_f0._4_4_ < iVar11) {
        FUN_14123d150(local_238,uVar9 & 0xffffffff);
      }
      puVar12 = local_238;
      if (local_f8 != (undefined8 *)0x0) {
        puVar12 = local_f8;
      }
      puVar12 = puVar12 + lVar20 * 2;
      *(float *)((longlong)puVar12 + 0xc) = fVar29 + fVar27;
      *puVar12 = CONCAT44(fStack_2ec,local_2f0);
      *(float *)(puVar12 + 1) = local_2e8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    puVar12 = local_238;
    if (local_f8 != (undefined8 *)0x0) {
      puVar12 = local_f8;
    }
    puVar19 = puVar12 + (longlong)(int)local_f0 * 2;
    if (puVar12 != puVar19) {
      puVar17 = puVar12;
      puVar13 = puVar12;
      if (0x20 < (longlong)(int)local_f0) {
        do {
          FUN_141204540(&local_2c8,puVar17,puVar19,local_2f8);
          puVar13 = (undefined8 *)CONCAT44(uStack_2bc,fStack_2c0);
          if ((puVar12 < puVar13) &&
             (puVar19 = (undefined8 *)CONCAT44(fStack_2c4,local_2c8), puVar13 = puVar17,
             puVar19 <= puVar12)) goto LAB_1412281ea;
          puVar17 = puVar13;
        } while (0x200 < (longlong)((longlong)puVar19 - (longlong)puVar13 & 0xfffffffffffffff0U));
      }
      if ((puVar13 != puVar19) && (puVar12 = puVar13 + 2, puVar12 != puVar19)) {
        _Size = 0x10;
        puVar17 = puVar12;
        do {
          uVar5 = *(undefined4 *)puVar17;
          uVar6 = *(undefined4 *)((longlong)puVar17 + 4);
          uVar7 = *(undefined4 *)(puVar17 + 1);
          fVar29 = *(float *)((longlong)puVar17 + 0xc);
          if (fVar29 < *(float *)((longlong)puVar13 + 0xc) ||
              fVar29 == *(float *)((longlong)puVar13 + 0xc)) {
            pfVar16 = (float *)((longlong)puVar13 + (_Size - 4));
            puVar10 = (undefined8 *)((_Size - 0x10) + (longlong)puVar13);
            puVar15 = puVar17;
            puVar14 = puVar17;
            if (*pfVar16 <= fVar29 && fVar29 != *pfVar16) {
              do {
                puVar15 = puVar10;
                uVar8 = puVar15[1];
                *puVar14 = *puVar15;
                puVar14[1] = uVar8;
                puVar10 = puVar15 + -2;
                puVar14 = puVar15;
              } while (*(float *)((longlong)puVar15 + -4) <= fVar29 &&
                       fVar29 != *(float *)((longlong)puVar15 + -4));
            }
            *(undefined4 *)puVar15 = uVar5;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar6;
            *(undefined4 *)(puVar15 + 1) = uVar7;
            *(float *)((longlong)puVar15 + 0xc) = fVar29;
          }
          else {
            _guard_xfg_dispatch_icall_nop(puVar12,puVar13,_Size);
            *(undefined4 *)puVar13 = uVar5;
            *(undefined4 *)((longlong)puVar13 + 4) = uVar6;
            *(undefined4 *)(puVar13 + 1) = uVar7;
            *(float *)((longlong)puVar13 + 0xc) = fVar29;
          }
          puVar17 = puVar17 + 2;
          _Size = _Size + 0x10;
        } while (puVar17 != puVar19);
      }
    }
LAB_1412281ea:
    puVar12 = local_238;
    if (local_f8 != (undefined8 *)0x0) {
      puVar12 = local_f8;
    }
    *param_2 = *puVar12;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar12 + 1);
    if (local_248 != (float *)0x0) {
      FMemory::Free(local_248);
    }
    if (local_f8 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    FUN_141225d50();
  }
  return param_2;
}



// FUNCTION 1412282a0 FUN_1412282a0 body=925 status=ok
// SIG undefined FUN_1412282a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_1412282a0(longlong param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  ulonglong *puStack_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [24];
  undefined4 local_80 [4];
  undefined1 local_70 [8];
  longlong *local_68;
  char local_58;
  ulonglong local_50 [2];
  
  local_50[0] = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FUN_141207b20(param_2);
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar8 != 0) {
    local_118 = lVar8;
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      local_120 = FUN_140e51670(*(undefined4 *)(param_1 + 0x898),param_4,param_3);
      if (local_120 != 0) {
        lVar8 = FText::FText(local_98,local_120);
        local_128 = lVar8;
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_c0,&DAT_1447033c0,L"GFxVaultCardMenu",L"ItemNameFormat");
        puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_a8,uVar10);
        local_80[0] = 4;
        FText::FText(local_70,lVar8);
        local_138 = local_80;
        local_58 = '\x01';
        puStack_130 = local_50;
        local_110 = *puVar11;
        local_108 = puVar11[1];
        if (local_108 != 0) {
          LOCK();
          *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
          UNLOCK();
        }
        uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_100,&local_138);
        uVar10 = FText::Format(local_d8,&local_110,uVar10);
        FText::FText(local_f0,uVar10);
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_d0 + 1;
          lVar8 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar1 = (int *)((longlong)local_d0 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_d0 + 8))(local_d0,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_100);
        if (local_58 != '\0') {
          local_58 = '\0';
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_68 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar1 = (int *)((longlong)local_68 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_68 + 8))(local_68,1);
              }
            }
          }
        }
        plVar4 = (longlong *)puVar11[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar4 = *(longlong **)(local_128 + 8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        FText::operator=(param_2 + 8,local_f0);
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_e8 + 1;
          lVar8 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar1 = (int *)((longlong)local_e8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
            }
          }
        }
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_b8 + 1;
          lVar8 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar1 = (int *)((longlong)local_b8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_b8 + 8))(local_b8,1);
            }
          }
        }
        lVar8 = local_120;
        FText::operator=(param_2 + 0x20,local_120 + 0x18);
        FString::operator=(param_2 + 0x38,lVar8 + 0x30);
        lVar8 = local_118 + 0x1b10;
        uVar6 = FUN_140e85f30(lVar8,param_4,param_3,*(undefined4 *)(param_1 + 0x898));
        *param_2 = uVar6;
        uVar6 = FUN_140e85fc0(lVar8,param_4,param_3,*(undefined4 *)(param_1 + 0x898));
        param_2[1] = uVar6;
        lVar8 = FUN_140e822f0(lVar8,*(undefined4 *)(param_1 + 0x898));
        if (lVar8 != 0) {
          uVar7 = FUN_140e51730(lVar8,param_4,param_3);
          *(undefined4 *)(param_2 + 4) = uVar7;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141228640 FUN_141228640 body=25 status=ok
// SIG undefined FUN_141228640(void)

undefined8 * FUN_141228640(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc0c);
  *param_2 = *(undefined8 *)(param_1 + 0xc04);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 141228660 FUN_141228660 body=56 status=ok
// SIG undefined FUN_141228660(void)

undefined4 FUN_141228660(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x2c8);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x2c8);
    return *(undefined4 *)(lVar2 + 0x170);
  }
  return 0xffffffff;
}



// FUNCTION 1412286a0 FUN_1412286a0 body=30 status=ok
// SIG undefined FUN_1412286a0(void)

undefined8 FUN_1412286a0(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x6e8))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + (longlong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 1412286c0 GetNumMaterials body=7 status=ok
// SIG undefined GetNumMaterials(void)

undefined4 UProceduralMeshComponent::GetNumMaterials(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x6e8);
}



// FUNCTION 1412286d0 FUN_1412286d0 body=76 status=ok
// SIG undefined FUN_1412286d0(void)

ulonglong FUN_1412286d0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  plVar5 = *(longlong **)(param_1 + 0x6e0);
  uVar6 = (longlong)*(int *)(param_1 + 0x6e8) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x6e8) < plVar5) {
    uVar6 = uVar3;
  }
  uVar4 = uVar3;
  if (uVar6 != 0) {
    do {
      lVar1 = *plVar5;
      plVar5 = plVar5 + 1;
      uVar2 = (ulonglong)((int)uVar4 + 1);
      if (lVar1 == 0) {
        uVar2 = uVar4;
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar2;
    } while (uVar3 != uVar6);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141228720 FUN_141228720 body=43 status=ok
// SIG undefined FUN_141228720(void)

undefined8 FUN_141228720(longlong param_1,int param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x6e8))) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6e0) + (longlong)param_2 * 8), lVar1 != 0)) {
    uVar2 = FUN_142ceeb40(lVar1,param_3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141228750 FUN_141228750 body=100 status=ok
// SIG undefined FUN_141228750(void)

undefined8 * FUN_141228750(longlong param_1,undefined8 *param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  uVar1 = DAT_1468b5da8;
  *param_2 = DAT_1468b5da0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  if (((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x6e8))) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6e0) + (longlong)param_3 * 8), lVar2 != 0)) {
    puVar3 = (undefined8 *)FUN_140a66600(lVar2,local_18,param_4);
    uVar1 = *(undefined4 *)(puVar3 + 1);
    *param_2 = *puVar3;
    *(undefined4 *)(param_2 + 1) = uVar1;
  }
  return param_2;
}



// FUNCTION 1412287c0 FUN_1412287c0 body=181 status=ok
// SIG undefined FUN_1412287c0(void)

longlong FUN_1412287c0(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x668) + 0x6cc);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x6e8) <= iVar1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar3) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6e0) + (longlong)iVar1 * 8), lVar2 != 0)) {
    if ((param_2 != '\0') && (cVar4 = FUN_142cf39b0(lVar2,1), cVar4 != '\0')) {
      return 0;
    }
    lVar2 = *(longlong *)(lVar2 + 0x118);
    if (lVar2 != 0) {
      lVar5 = AGTutorialStepVideo::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (*(char *)(lVar2 + 0x528) != '\0')) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 141228880 FUN_141228880 body=77 status=ok
// SIG undefined FUN_141228880(void)

undefined8 * FUN_141228880(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_142d1bf20(*(longlong *)(param_1 + 0xa0),param_1 + 0x298);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x2a0);
  uVar1 = *(undefined8 *)(param_1 + 0x2a8);
  *param_2 = *(undefined8 *)(param_1 + 0x298);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return param_2;
}



// FUNCTION 1412288d0 FUN_1412288d0 body=244 status=ok
// SIG undefined FUN_1412288d0(void)

void FUN_1412288d0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  (**(code **)(*param_1 + 0x560))(param_1,&local_58,1);
  *param_2 = CONCAT44((local_54 + local_48) * 0.5,(local_58 + local_4c) * 0.5);
  *(float *)(param_2 + 1) = (local_50 + local_44) * 0.5;
  *param_3 = CONCAT44((local_48 - local_54) * 0.5,(local_4c - local_58) * 0.5);
  *(float *)(param_3 + 1) = (local_44 - local_50) * 0.5;
  return;
}



// FUNCTION 1412289f0 FUN_1412289f0 body=129 status=ok
// SIG undefined FUN_1412289f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412289f0(longlong param_1,undefined8 *param_2,undefined4 *param_3,float *param_4)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  *param_3 = *(undefined4 *)(param_1 + 0xd88);
  *param_4 = *(float *)(param_1 + 0xd8c) * 0.5;
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = local_10;
  return;
}



// FUNCTION 141228a80 FUN_141228a80 body=97 status=ok
// SIG undefined FUN_141228a80(void)

void FUN_141228a80(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1404b03b0();
  FText::operator=(param_2,uVar1);
  FText::operator=(param_3,param_1 + 0x68);
  *param_4 = (float)*(int *)(param_1 + 0x80);
  return;
}



// FUNCTION 141228af0 FUN_141228af0 body=271 status=ok
// SIG undefined FUN_141228af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141228af0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  float fVar5;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = *(undefined4 *)(param_1 + 0x220);
  uStack_54 = *(undefined4 *)(param_1 + 0x224);
  uStack_50 = *(undefined8 *)(param_1 + 0x228);
  local_48 = *(undefined8 *)(param_1 + 0x230);
  fVar5 = 0.0;
  cVar1 = FUN_142deebe0(&local_58);
  if (cVar1 == '\0') {
    uVar2 = FUN_140b5c140(*param_2);
    FString::PrintfImpl(&local_68,&DAT_144700154,uVar2);
    puVar4 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar4 = local_68;
    }
    puVar3 = (undefined8 *)FName::FName(local_40,puVar4,1);
    uStack_50 = *puVar3;
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FUN_142df1610(&local_58,local_38,*param_2);
    fVar5 = (float)FUN_142cc4350(local_38,0);
    if (*(char *)(param_1 + 0x238) != '\0') {
      fVar5 = fVar5 + -1.0;
    }
  }
  FUN_142deadc0(param_1,fVar5,*param_2);
  return;
}



// FUNCTION 141228c00 FUN_141228c00 body=221 status=ok
// SIG undefined FUN_141228c00(void)

void FUN_141228c00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong local_28 [4];
  
  uVar4 = 0;
  if ((*(longlong *)(param_1 + 0x220) != 0) && (lVar1 = *param_2, lVar1 != 0)) {
    lVar3 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(int *)(lVar1 + 0x6dc) = 1 << (*(byte *)(param_1 + 0x248) & 0x1f);
      local_28[1] = 0;
      local_28[0] = lVar1;
      uVar4 = FUN_142ca2f00(*(undefined8 *)(param_1 + 0x220),local_28,0);
      *(undefined4 *)(lVar1 + 0x6dc) = 0;
    }
  }
  FUN_142deadc0(param_1,uVar4,*param_2);
  return;
}



// FUNCTION 141228ce0 FUN_141228ce0 body=88 status=ok
// SIG undefined FUN_141228ce0(void)

undefined8 FUN_141228ce0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((((*(longlong *)(param_1 + 0x698) != 0) && (*(char *)(param_1 + 0xe89) == '\0')) &&
      (*(char *)(param_1 + 0xebc) == '\0')) && (*(longlong *)(param_1 + 0x668) != 0)) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x668) + 0x418);
    if ((cVar1 == '\x02') || ((cVar1 != '\0' && (*(char *)(param_1 + 0xbb0) != '\0'))))
    goto LAB_141228d30;
  }
  if (*(char *)(param_1 + 0xbd8) == '\0') {
    return 0;
  }
LAB_141228d30:
  uVar2 = FUN_1409648d0(*(longlong *)(param_1 + 0x698));
  return uVar2;
}



// FUNCTION 141228d40 FUN_141228d40 body=102 status=ok
// SIG undefined FUN_141228d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141228d40(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *(longlong *)(param_1 + -0x4a0);
  if (lVar1 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = local_10;
  return param_2;
}



// FUNCTION 141228db0 FUN_141228db0 body=317 status=ok
// SIG undefined FUN_141228db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141228db0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x6d8) != 0) && (param_2 != 0)) &&
     (lVar4 = (**(code **)(*(longlong *)(param_1 + -0x608) + 0x148))(param_1 + -0x608), lVar4 != 0))
  {
    uVar5 = (**(code **)(*(longlong *)(param_1 + -0x608) + 0x148))(param_1 + -0x608);
    lVar4 = UWorld::GetGameState<APVPGameState>(uVar5);
    if ((lVar4 != 0) && (lVar1 = *(longlong *)(param_2 + 0x118), lVar1 != 0)) {
      lVar6 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (iVar3 = (**(code **)(*(longlong *)(lVar1 + 0x8b0) + 0x20))
                            ((longlong *)(lVar1 + 0x8b0),param_1 + -0x608), iVar3 == 2)) {
        FUN_140cd8d10(lVar4,&local_28,param_2,*(undefined8 *)(param_1 + 0x6d8));
        if (local_24 != '\0') {
          return (ulonglong)local_28;
        }
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x408))();
        return uVar7;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 141228ef0 FUN_141228ef0 body=340 status=ok
// SIG undefined FUN_141228ef0(void)

undefined8 FUN_141228ef0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  bool bVar7;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar4 = *(longlong *)(param_1 + 0x370);
  if (lVar4 != 0) {
    (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x10))(lVar4 + 0x30);
    return param_2;
  }
  bVar7 = *(longlong *)(param_1 + 0x6d8) == 0;
  if (bVar7) {
    uVar5 = (**(code **)(*(longlong *)(param_1 + -0x608) + 0x5e0))
                      ((longlong *)(param_1 + -0x608),local_48);
    puVar6 = (undefined1 *)FText::FromString(local_20,uVar5);
  }
  else {
    FText::FText(local_38,*(longlong *)(param_1 + 0x6d8) + 0x268);
    puVar6 = local_38;
  }
  FText::FText(param_2,puVar6);
  if (bVar7) {
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
  }
  if (bVar7) {
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar7) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141229050 FUN_141229050 body=22 status=ok
// SIG undefined FUN_141229050(void)

undefined8 FUN_141229050(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x518);
  if (lVar1 == 0) {
    return 1;
  }
  if (*(longlong *)(lVar1 + 0x180) != 0) {
    lVar2 = FUN_142df3580(param_2);
    if (lVar2 != 0) {
      uVar3 = FUN_142de8c20(*(undefined8 *)(lVar1 + 0x180),lVar2);
      return uVar3;
    }
  }
  return 1;
}



// FUNCTION 141229070 FUN_141229070 body=88 status=ok
// SIG undefined FUN_141229070(void)

undefined8 FUN_141229070(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((((*(longlong *)(param_1 + 0x698) != 0) && (*(char *)(param_1 + 0xe89) == '\0')) &&
      (*(char *)(param_1 + 0xebc) == '\0')) && (*(longlong *)(param_1 + 0x668) != 0)) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x668) + 0x418);
    if ((cVar1 == '\x02') || ((cVar1 != '\0' && (*(char *)(param_1 + 0xbb0) != '\0'))))
    goto LAB_1412290c0;
  }
  if (*(char *)(param_1 + 0xbd8) == '\0') {
    return 0;
  }
LAB_1412290c0:
  uVar2 = ACharacter::GetAnimRootMotionTranslationScale(*(longlong *)(param_1 + 0x698));
  return uVar2;
}



// FUNCTION 1412290d0 FUN_1412290d0 body=121 status=ok
// SIG undefined FUN_1412290d0(void)

undefined8 FUN_1412290d0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_res8 [32];
  
  plVar2 = (longlong *)FUN_1409aabf0(param_1 + 0xe0,local_res8);
  if (*plVar2 != 0) {
    plVar3 = (longlong *)FUN_1414425d0();
    plVar2 = (longlong *)*plVar2;
    for (plVar1 = plVar2; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
      if (plVar1 == plVar3) {
        if (plVar2 == (longlong *)0x0) {
          return 0;
        }
        if ((plVar2[0x1f] == 0) && ((**(code **)(*plVar2 + 0x368))(plVar2), plVar2[0x1f] == 0)) {
          return 0;
        }
        uVar4 = FUN_1409ac010();
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 141229150 FUN_141229150 body=105 status=ok
// SIG undefined FUN_141229150(void)

undefined4 FUN_141229150(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x490);
  if (lVar3 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = FUN_140cff230(lVar3);
      if (lVar3 != 0) {
        return *(undefined4 *)(lVar3 + 0x174);
      }
    }
  }
  return 0;
}



// FUNCTION 1412291c0 FUN_1412291c0 body=90 status=ok
// SIG undefined FUN_1412291c0(void)

longlong FUN_1412291c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x700);
  if (lVar3 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x6f8);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_142a07000();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
      *(longlong *)(param_1 + 0x700) = lVar3;
      return lVar3;
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 141229220 FUN_141229220 body=89 status=ok
// SIG undefined FUN_141229220(void)

longlong FUN_141229220(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x4d8);
  if (lVar1 != 0) {
    lVar3 = FUN_1429d7b60();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 141229290 FUN_141229290 body=204 status=ok
// SIG undefined FUN_141229290(void)

longlong FUN_141229290(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    uVar3 = FUN_141270f70();
    lVar4 = FUN_141270d10(*(undefined8 *)(param_1 + 0x6d0),uVar3);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x6e0);
  plVar1 = plVar6 + *(int *)(param_1 + 0x6e8);
  do {
    if (plVar6 == plVar1) {
      return 0;
    }
    if ((*plVar6 != 0) && (plVar2 = *(longlong **)(*plVar6 + 0x118), plVar2 != (longlong *)0x0)) {
      uVar5 = FUN_1412d7930();
      lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar5);
      if (lVar4 != 0) {
        uVar3 = FUN_141270f70(lVar4,param_2);
        lVar4 = FUN_141270d10(lVar4,uVar3);
        if (lVar4 != 0) {
          return lVar4;
        }
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 141229380 FUN_141229380 body=73 status=ok
// SIG undefined FUN_141229380(void)

undefined8 * FUN_141229380(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (*(longlong *)(param_1 + 0x150) != 0) {
    puVar1 = (undefined8 *)FUN_141270d40(*(longlong *)(param_1 + 0x150),local_res8);
    *param_2 = *puVar1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1412293f0 FUN_1412293f0 body=178 status=ok
// SIG undefined FUN_1412293f0(void)

longlong * FUN_1412293f0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 == 0) {
    return (longlong *)0x0;
  }
  lVar2 = FUN_1409655a0(param_2);
  lVar2 = *(longlong *)(lVar2 + 8);
  if (*(int *)(param_1 + 0xd00) != *(int *)(param_1 + 0xd2c)) {
    lVar3 = *(longlong *)(param_1 + 0xd38);
    if (*(longlong *)(param_1 + 0xd38) == 0) {
      lVar3 = param_1 + 0xd30;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(param_1 + 0xd40) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar1 * 0x68 + *(longlong *)(param_1 + 0xcf8));
        if (*plVar5 == lVar2) {
          if (iVar1 != -1) goto LAB_141229491;
          break;
        }
        iVar1 = (int)plVar5[0xc];
      } while (iVar1 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_141229491:
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  return plVar4;
}



// FUNCTION 1412294b0 FUN_1412294b0 body=431 status=ok
// SIG undefined FUN_1412294b0(void)

void FUN_1412294b0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [80];
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    lVar5 = FUN_1413a0d30();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x2c8);
      if ((cVar4 == '\0') ||
         (lVar5 = FWeakObjectPtr::Get(param_1 + 0x2c8), *(int *)(lVar5 + 0x170) == -1)) {
        uVar1 = *(undefined4 *)(param_1 + 0x2d0);
        cVar4 = FUN_141257250(plVar2);
        if ((cVar4 != '\0') && (lVar5 = FUN_140e971d0(plVar2), lVar5 != 0)) {
          cVar4 = FUN_140e746d0(lVar5 + 0x1b10,uVar1,(int)plVar2[0x113]);
          if (cVar4 == '\0') {
            local_68 = 0;
            local_60 = 0;
            (**(code **)(*plVar2 + 0x4e8))(plVar2,plVar2[0x11b],&local_68);
          }
          else {
            FUN_140e8cae0(lVar5 + 0x1b10,(int)plVar2[0x113],uVar1);
            local_68 = 0;
            local_60 = 0;
            (**(code **)(*plVar2 + 0x4e8))(plVar2,plVar2[0x11a],&local_68);
            if (plVar2[0xda] != 0) {
              FUN_1412257c0(plVar2,local_58,uVar1);
              uVar6 = FUN_140e515c0((int)plVar2[0x113],uVar1);
              FUN_14123f870(plVar2[0xda],local_58,uVar6);
              FUN_1410b4290(local_58);
            }
          }
        }
      }
      else {
        lVar5 = FWeakObjectPtr::Get(param_1 + 0x2c8);
        if (lVar5 != 0) {
          FUN_141229f50(plVar2,*(undefined4 *)(lVar5 + 0x170),*(undefined4 *)(param_1 + 0x2d0));
        }
      }
    }
  }
  return;
}



// FUNCTION 141229660 FUN_141229660 body=1021 status=ok
// SIG undefined FUN_141229660(void)

void FUN_141229660(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_res10 [8];
  longlong local_128 [6];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  longlong *local_d8;
  longlong *local_c0;
  longlong local_b0;
  undefined1 local_98 [16];
  longlong *local_88;
  longlong *local_70;
  longlong local_60;
  
  if (param_2 != (longlong *)0x0) {
    LOCK();
    *(undefined4 *)(param_1 + 0xb1) = 1;
    UNLOCK();
    lVar7 = (**(code **)(*param_2 + 8))(param_2);
    lVar8 = FUN_1413a0ec0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar8 = lVar7 + 0x2c8;
      cVar6 = FWeakObjectPtr::IsValid(lVar8);
      if ((cVar6 == '\0') || (lVar9 = FWeakObjectPtr::Get(lVar8), *(int *)(lVar9 + 0x170) == -1)) {
        uVar4 = *(undefined4 *)(lVar7 + 0x2d0);
        lVar7 = *param_1;
        local_128[4] = 0;
        local_128[5] = 0;
        puVar10 = (undefined8 *)FName::FName(local_f8,"Navigate",1);
        (**(code **)(lVar7 + 0x4e8))(param_1,*puVar10,local_128 + 4);
        FUN_1412257c0(param_1,local_98,uVar4);
        LOCK();
        *(undefined4 *)(param_1 + 0x12a) = 1;
        UNLOCK();
        if (param_1[0xda] != 0) {
          uVar11 = FUN_140e515c0((int)param_1[0x113],uVar4);
          FUN_14123f870(param_1[0xda],local_98,uVar11);
        }
        LOCK();
        *(undefined4 *)(param_1 + 0xb1) = 1;
        UNLOCK();
        FUN_141256040(param_1);
        if (local_60 != 0) {
          FMemory::Free();
        }
        plVar12 = local_88;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)local_70 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar12 = local_88;
            if (iVar13 == 1) {
              (**(code **)(*local_70 + 8))(local_70,1);
              plVar12 = local_88;
            }
          }
        }
      }
      else {
        uVar4 = *(undefined4 *)(lVar7 + 0x2d0);
        cVar6 = FWeakObjectPtr::IsValid(lVar8);
        uVar14 = 0xffffffff;
        if (cVar6 != '\0') {
          lVar7 = FWeakObjectPtr::Get(lVar8);
          uVar14 = *(undefined4 *)(lVar7 + 0x170);
        }
        lVar7 = *param_1;
        local_128[2] = 0;
        local_128[3] = 0;
        puVar10 = (undefined8 *)FName::FName(local_res10,"Navigate",1);
        (**(code **)(lVar7 + 0x4e8))(param_1,*puVar10,local_128 + 2);
        local_128[0] = 0;
        local_128[1] = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128,0);
        FGenericPlatformString::Memcpy(local_128[0],&DAT_144706ed4,6);
        FUN_142088cf0(param_1[0xc0],local_128);
        if (local_128[0] != 0) {
          FMemory::Free();
        }
        FUN_1412282a0(param_1,local_e8,uVar14,uVar4);
        if (param_1[0xda] != 0) {
          uVar11 = FUN_140e51670((int)param_1[0x113],uVar14,uVar4);
          FUN_14123fc50(param_1[0xda],local_e8,uVar11);
        }
        LOCK();
        *(undefined4 *)(param_1 + 0xb1) = 1;
        UNLOCK();
        FUN_141256040(param_1);
        if (local_b0 != 0) {
          FMemory::Free();
        }
        plVar12 = local_d8;
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_c0 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar2 = (int *)((longlong)local_c0 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar12 = local_d8;
            if (iVar13 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
              plVar12 = local_d8;
            }
          }
        }
      }
      iVar13 = -1;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      cVar6 = FWeakObjectPtr::IsValid(lVar8);
      if (cVar6 != '\0') {
        lVar7 = FWeakObjectPtr::Get(lVar8);
        iVar13 = *(int *)(lVar7 + 0x170);
      }
      iVar13 = iVar13 + 1;
      if ((-1 < iVar13) && (iVar13 < *(int *)((longlong)param_1 + 0x84c))) {
        fVar16 = (float)iVar13 * *(float *)(param_1 + 0x10f);
        fVar17 = fVar16 + *(float *)(param_1 + 0x10f);
        fVar15 = (float)FUN_142eedeb0(param_1 + 0x103);
        if ((fVar15 <= fVar16) && (fVar16 = fVar15, fVar15 + *(float *)(param_1 + 0x107) < fVar17))
        {
          fVar16 = fVar17 - *(float *)(param_1 + 0x107);
        }
        FUN_142f0ced0(param_1 + 0x103,fVar16);
      }
    }
  }
  FUN_14123afd0(param_1);
  return;
}



// FUNCTION 141229a60 FUN_141229a60 body=158 status=ok
// SIG undefined FUN_141229a60(void)

void FUN_141229a60(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  cVar1 = *(char *)(param_1 + 0xb8);
  if (param_3 != cVar1) {
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_2 + 0x690);
    }
    if (lVar3 != 0) {
      if (cVar1 == '\0') {
        uVar2 = 0xb;
      }
      else if (cVar1 == '\x01') {
        uVar2 = 0xc;
      }
      else if (cVar1 == '\x02') {
        uVar2 = 0xd;
      }
      else {
        uVar2 = 0;
      }
      FUN_141280e60(lVar3,uVar2);
      if (param_3 == '\0') {
        uVar2 = 0xb;
      }
      else if (param_3 == '\x01') {
        uVar2 = 0xc;
      }
      else if (param_3 == '\x02') {
        uVar2 = 0xd;
      }
      else {
        uVar2 = 0;
      }
      FUN_14127a6d0(lVar3,uVar2);
    }
    *(char *)(param_1 + 0xb8) = param_3;
  }
  return;
}



// FUNCTION 141229b00 FUN_141229b00 body=438 status=ok
// SIG undefined FUN_141229b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141229b00(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  iVar2 = FUN_141230ae0();
  if ((0 < iVar2) && (cVar1 = FUN_141257250(param_1), cVar1 != '\0')) {
    *(undefined1 *)(param_1 + 0x8c8) = 1;
    lVar3 = FUN_140e971d0(param_1);
    if (lVar3 != 0) {
      FUN_140e8a690(lVar3 + 0x1b10);
    }
    *(undefined4 *)(param_1 + 0x8c4) = 0;
    LOCK();
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
    plVar5 = *(longlong **)(param_1 + 0x6d8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x278))(plVar5,0);
    }
    plVar5 = *(longlong **)(param_1 + 0x6a8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x278))(plVar5,0);
    }
    plVar5 = *(longlong **)(param_1 + 0x6d0);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x278))(plVar5,0);
    }
    if (*(longlong *)(param_1 + 0x600) != 0) {
      local_78[0] = 0;
      local_78[1] = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
      FGenericPlatformString::Memcpy(local_78[0],L"firstTimeUnlock",0x20);
      FUN_142088910(*(undefined8 *)(param_1 + 0x600),local_78);
      if (local_78[0] != 0) {
        FMemory::Free();
      }
    }
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_68[0] = &LAB_141213fa0;
    FUN_14208c260(param_1,local_68);
    if (local_28 != 0) {
      plVar5 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar5 = local_38;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    return 1;
  }
  return 0;
}



// FUNCTION 141229cc0 FUN_141229cc0 body=643 status=ok
// SIG undefined FUN_141229cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141229cc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong **pplVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong *_Src;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44 [12];
  longlong *local_38;
  int local_30;
  int local_2c;
  
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != (longlong *)0x0) {
    iVar12 = 0;
    lVar13 = *(longlong *)(param_3 + 0x100);
    iVar14 = 0;
    _Src = (longlong *)0x0;
    local_38 = (longlong *)0x0;
    lVar2 = lVar13 + (longlong)*(int *)(param_3 + 0x108) * 0x18;
    local_2c = 0;
    for (; lVar13 != lVar2; lVar13 = lVar13 + 0x18) {
      lVar5 = FWeakObjectPtr::Get(lVar13);
      for (plVar10 = _Src; plVar10 != _Src + iVar12; plVar10 = plVar10 + 1) {
        if (*plVar10 == lVar5) goto LAB_141229eac;
      }
      lVar5 = FWeakObjectPtr::Get(lVar13);
      if (lVar5 == 0) {
LAB_141229da8:
        lVar5 = FWeakObjectPtr::Get(lVar13);
        lVar6 = (longlong)iVar12;
        local_30 = iVar12 + 1;
        if (iVar14 < local_30) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,iVar12);
          _Src = local_38;
          iVar14 = local_2c;
        }
        iVar12 = local_30;
        _Src[lVar6] = lVar5;
        lVar5 = FWeakObjectPtr::Get(lVar13);
        plVar11 = *(longlong **)(param_1 + 0x198);
        plVar10 = plVar11 + *(int *)(param_1 + 0x1a0);
        for (; plVar11 != plVar10; plVar11 = plVar11 + 1) {
          if (*plVar11 == lVar5) goto LAB_141229eac;
        }
        lVar5 = plVar3[0x2d];
        if (lVar5 == 0) {
          local_54 = DAT_1468b5d98;
          puVar7 = &local_5c;
          local_5c = _DAT_1468b5d90;
        }
        else {
          puVar7 = (undefined8 *)&local_68;
          local_68 = *(undefined4 *)(lVar5 + 0x220);
          local_60 = *(undefined4 *)(lVar5 + 0x228);
          uStack_64 = *(undefined4 *)(lVar5 + 0x224);
        }
        local_50 = *puVar7;
        local_48 = *(undefined4 *)(puVar7 + 1);
        uVar8 = FWeakObjectPtr::Get(lVar13);
        uVar9 = (**(code **)(*plVar3 + 0x308))(plVar3,local_44);
        FUN_142d4de90(param_1,uVar8,&local_50,uVar9,plVar3);
      }
      else {
        lVar6 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((!bVar4) || (*(char *)(lVar5 + 0xb00) == '\0')) goto LAB_141229da8;
      }
LAB_141229eac:
    }
    pplVar1 = (longlong **)(param_1 + 0x198);
    if (pplVar1 != &local_38) {
      *(int *)(param_1 + 0x1a0) = iVar12;
      if ((iVar12 == 0) && (*(int *)(param_1 + 0x1a4) == 0)) {
        *(undefined4 *)(param_1 + 0x1a4) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(pplVar1,iVar12);
        _guard_xfg_dispatch_icall_nop(*pplVar1,_Src,(longlong)iVar12 << 3);
      }
    }
    if (_Src != (longlong *)0x0) {
      FMemory::Free(_Src);
    }
  }
  return;
}



// FUNCTION 141229f50 FUN_141229f50 body=503 status=ok
// SIG undefined FUN_141229f50(void)

void FUN_141229f50(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_b8;
  undefined8 local_b0;
  char local_a8;
  char local_a7;
  undefined1 local_58 [80];
  
  cVar1 = FUN_141257250();
  if ((cVar1 != '\0') && (lVar2 = FUN_140e971d0(param_1), lVar2 != 0)) {
    FUN_1412282a0(param_1,&local_a8,param_2,param_3);
    if (local_a7 == '\0') {
      if (local_a8 == '\0') {
        cVar1 = FUN_140e74aa0(lVar2 + 0x1b10,param_3,param_2,1,(int)param_1[0x113]);
        local_b8 = 0;
        local_b0 = 0;
        if (cVar1 == '\0') {
          (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x11b],&local_b8);
        }
        else {
          (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x11a]);
          FUN_140e950a0(lVar2 + 0x1b10,(int)param_1[0x113],param_3,param_2,1);
          if (param_1[0xda] != 0) {
            uVar3 = FUN_1412282a0(param_1,local_58,param_2,param_3);
            FUN_141209700(&local_a8,uVar3);
            FUN_1410b4290(local_58);
            uVar3 = FUN_140e51670((int)param_1[0x113],param_2,param_3);
            FUN_14123fc50(param_1[0xda],&local_a8,uVar3);
          }
        }
      }
    }
    else {
      local_b8 = 0;
      local_b0 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x11d],&local_b8);
      FUN_140e8ccf0(lVar2 + 0x1b10,(int)param_1[0x113],param_3,param_2);
      if (param_1[0xda] != 0) {
        uVar3 = FUN_1412282a0(param_1,local_58,param_2,param_3);
        FUN_141209700(&local_a8,uVar3);
        FUN_1410b4290(local_58);
        uVar3 = FUN_140e51670((int)param_1[0x113],param_2,param_3);
        FUN_14123fc50(param_1[0xda],&local_a8,uVar3);
      }
    }
    FUN_1410b4290(&local_a8);
  }
  return;
}



// FUNCTION 14122a150 FUN_14122a150 body=895 status=ok
// SIG undefined FUN_14122a150(void)

void FUN_14122a150(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [72];
  undefined1 local_78 [80];
  
  uVar9 = 0;
  *(undefined4 *)(param_1 + 0x170) = param_2;
  uVar11 = uVar9;
  if (0 < *(int *)(param_1 + 0x198)) {
    do {
      lVar3 = *(longlong *)(uVar11 + *(longlong *)(param_1 + 400));
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x38);
        if (lVar4 == 0) {
LAB_14122a289:
          local_100 = 0;
          local_f8 = (longlong *)0x0;
          local_f0 = 0;
          local_e8 = 0;
          local_e0 = (longlong *)0x0;
          local_d8 = 0;
          local_d0 = 0;
          local_c8 = 0;
          FText::FText(&local_100);
          FText::FText(&local_e8);
          local_d0 = 0;
          local_c8 = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0,0);
          FGenericPlatformString::Memcpy(local_d0,L"artifact",0x12);
          *(undefined1 *)(lVar3 + 0x2d8) = 0;
          *(undefined1 *)(lVar3 + 0x2d9) = 0;
          *(undefined4 *)(lVar3 + 0x2dc) = 0;
          FText::operator=(lVar3 + 0x2e0,&local_100);
          FText::operator=(lVar3 + 0x2f8);
          plVar5 = (longlong *)(lVar3 + 0x310);
          if (plVar5 == &local_d0) {
            if (local_d0 != 0) {
              FMemory::Free();
            }
          }
          else {
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            *plVar5 = local_d0;
            *(undefined4 *)(lVar3 + 0x318) = (undefined4)local_c8;
            *(undefined4 *)(lVar3 + 0x31c) = local_c8._4_4_;
            local_c8 = 0;
            local_d0 = 0;
          }
          plVar5 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_e0 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5);
              }
            }
          }
          plVar5 = local_f8;
          if (local_f8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_f8 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_f8)(local_f8);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5);
              }
            }
          }
        }
        else {
          lVar8 = FUN_1413a0d30();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if (!bVar12) goto LAB_14122a289;
          cVar6 = FWeakObjectPtr::IsValid(lVar3 + 0x2c8);
          if (cVar6 == '\0') {
            iVar7 = -1;
          }
          else {
            lVar8 = FWeakObjectPtr::Get(lVar3 + 0x2c8);
            iVar7 = *(int *)(lVar8 + 0x170);
          }
          if (iVar7 == -1) {
            FUN_1412257c0(lVar4,local_78,*(undefined4 *)(lVar3 + 0x2d0));
            FUN_141209700(lVar3 + 0x2d8);
            FUN_1410b4290(local_78);
          }
          else {
            FUN_1412282a0(lVar4,local_c0,iVar7,*(undefined4 *)(lVar3 + 0x2d0));
            FUN_141209700(lVar3 + 0x2d8);
            FUN_1410b4290(local_c0);
          }
        }
        plVar5 = *(longlong **)(lVar3 + 0x328);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          iVar7 = (int)plVar5[1];
          bVar12 = iVar7 == 0;
          if (bVar12) {
            *(int *)(plVar5 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
          while (!bVar12) {
            LOCK();
            bVar12 = iVar7 == (int)plVar5[1];
            if (bVar12) {
              *(int *)(plVar5 + 1) = iVar7 + 1;
            }
            UNLOCK();
            if (bVar12) {
              if (*(longlong *)(lVar3 + 800) != 0) {
                FUN_14203e230();
              }
              LOCK();
              plVar1 = plVar5 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5);
                }
              }
              break;
            }
            LOCK();
            iVar7 = (int)plVar5[1];
            bVar12 = iVar7 == 0;
            if (bVar12) {
              *(int *)(plVar5 + 1) = 0;
              iVar7 = 0;
            }
            UNLOCK();
          }
        }
        FUN_142ecf920(lVar3);
      }
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
      uVar11 = uVar11 + 8;
    } while ((int)uVar10 < *(int *)(param_1 + 0x198));
  }
  return;
}



// FUNCTION 14122a4d0 FUN_14122a4d0 body=168 status=ok
// SIG undefined FUN_14122a4d0(void)

undefined8 FUN_14122a4d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x6e0);
  plVar1 = plVar6 + *(int *)(param_1 + 0x6e8);
  do {
    if (plVar6 == plVar1) {
      return 0;
    }
    if (*plVar6 != 0) {
      lVar4 = FUN_142ceeb40(*plVar6,0);
      if (lVar4 != 0) {
        lVar5 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) &&
           (cVar3 = AFGCentralStorageContainer::AddToCentralStorageSubsystem(lVar4), cVar3 != '\0'))
        {
          return 1;
        }
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 14122a580 FUN_14122a580 body=116 status=ok
// SIG undefined FUN_14122a580(void)

undefined8 FUN_14122a580(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x518) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x6e0);
    plVar1 = plVar4 + *(int *)(param_1 + 0x6e8);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      lVar2 = *plVar4;
      if (((lVar2 != 0) && (*(char *)(lVar2 + 0x6e5) != '\0')) &&
         (cVar3 = FWeakObjectPtr::IsValid(lVar2 + 0x77c), cVar3 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14122a600 FUN_14122a600 body=231 status=ok
// SIG undefined FUN_14122a600(void)

bool FUN_14122a600(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  float fVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 local_70;
  byte local_68;
  undefined1 local_60 [56];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  local_68 = local_68 & 0xfd | 1;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_142c8c260(local_60,0x3f800000);
  local_28[0] = 0xff;
  local_20 = 0;
  local_18 = 0;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x640) != 0)) {
    cVar1 = FUN_142d1a700(*(longlong *)(param_1 + 0x640),param_2,&local_88);
    if (cVar1 != '\0') {
      cVar1 = FUN_142d52a00(local_28);
      if (cVar1 != '\0') {
        uVar2 = FUN_142d52a20(local_28);
        uVar2 = FArchive::operator<<(uVar2);
        fVar4 = (float)FUN_142d5fea0(uVar2);
        bVar3 = 0.0 < fVar4;
        goto LAB_14122a6c0;
      }
    }
  }
  bVar3 = false;
LAB_14122a6c0:
  if (local_78 != 0) {
    FMemory::Free();
  }
  return bVar3;
}



// FUNCTION 14122a6f0 FUN_14122a6f0 body=87 status=ok
// SIG undefined FUN_14122a6f0(void)

undefined8 FUN_14122a6f0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x6e0);
  plVar1 = plVar3 + *(int *)(param_1 + 0x6e8);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    if ((*plVar3 != 0) && (cVar2 = FUN_141273d30(*plVar3,1), cVar2 != '\0')) break;
    plVar3 = plVar3 + 1;
  }
  return 1;
}



// FUNCTION 14122a750 FUN_14122a750 body=114 status=ok
// SIG undefined FUN_14122a750(void)

undefined8 FUN_14122a750(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x6e0);
  plVar1 = plVar3 + *(int *)(param_1 + 0x6e8);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    if ((*plVar3 != 0) && (cVar2 = FUN_142cf39b0(*plVar3,param_2), cVar2 != '\0')) break;
    plVar3 = plVar3 + 1;
  }
  return 1;
}



// FUNCTION 14122a7d0 FUN_14122a7d0 body=87 status=ok
// SIG undefined FUN_14122a7d0(void)

undefined8 FUN_14122a7d0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x6e0);
  plVar1 = plVar3 + *(int *)(param_1 + 0x6e8);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    if ((*plVar3 != 0) && (cVar2 = FUN_141273d30(*plVar3,0), cVar2 != '\0')) break;
    plVar3 = plVar3 + 1;
  }
  return 1;
}



// FUNCTION 14122a870 FUN_14122a870 body=285 status=ok
// SIG undefined FUN_14122a870(void)

undefined8 FUN_14122a870(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res10 [24];
  undefined1 local_d8 [208];
  
  lVar1 = *(longlong *)(param_2 + 0x468);
  if (lVar1 != 0) {
    lVar3 = FUN_142e20fc0();
    lVar4 = lVar1;
    while (lVar4 != lVar3) {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 == 0) {
        return 0;
      }
    }
    if (param_3 != 0) {
      lVar4 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar4 = *(longlong *)(param_3 + 0x920), lVar4 != 0)) {
        FUN_142c62180(local_d8);
        plVar5 = (longlong *)FUN_142c707b0(lVar4,local_res10,lVar1,local_d8);
        if (*plVar5 != 0) {
          lVar4 = FUN_142e20fc0();
          for (lVar1 = *plVar5; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
            if (lVar1 == lVar4) {
              if (*plVar5 != 0) {
                FUN_142c63c50(local_d8);
                return 1;
              }
              break;
            }
          }
        }
        FUN_142c63c50(local_d8);
      }
    }
  }
  return 0;
}



// FUNCTION 14122a9f0 FUN_14122a9f0 body=1749 status=ok
// SIG undefined FUN_14122a9f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14122a9f0(longlong *param_1,longlong *param_2,char param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 **ppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  int local_100 [2];
  undefined8 *local_f8;
  undefined8 *local_f0;
  int local_e8;
  int local_e4;
  undefined8 *local_e0;
  int local_d8;
  int local_d4;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar9 = 0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  local_d4 = 0;
  iVar7 = 0;
  if (param_3 != '\0') {
    FUN_14222e300(param_1,&local_e0);
    (**(code **)(*param_1 + 0x4b8))(param_1,&local_e0,1);
    iVar7 = local_d8;
  }
  local_d8 = iVar7 + 1;
  if (local_d4 < local_d8) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e0,iVar7);
  }
  local_e0[iVar7] = param_1;
  local_e4 = 0;
  local_f0 = (undefined8 *)0x0;
  local_e8 = 0;
  iVar7 = 0;
  if (param_3 != '\0') {
    FUN_14222e300(param_2,&local_f0);
    (**(code **)(*param_2 + 0x4b8))(param_2,&local_f0,1);
    iVar7 = local_e8;
  }
  local_e8 = iVar7 + 1;
  if (local_e4 < local_e8) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_f0,iVar7);
  }
  local_f0[iVar7] = param_2;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar11 = (ulonglong)((longlong)(local_e0 + local_d8) + (7 - (longlong)local_e0)) >> 3;
  if (local_e0 + local_d8 < local_e0) {
    uVar11 = uVar9;
  }
  if (uVar11 != 0) {
    local_d0 = &local_108;
    uVar8 = uVar9;
    puVar13 = local_e0;
    do {
      local_108 = (undefined8 *)*puVar13;
      uVar2 = FUN_1429f11d0();
      local_c8 = AActor::GetComponentsByClass(local_108,&local_c0,uVar2);
      FUN_141201240(&local_98,local_100,&local_d0,0);
      if (local_c0 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      puVar13 = puVar13 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar11);
  }
  local_f8 = local_f0;
  uVar11 = (ulonglong)((longlong)(local_f0 + local_e8) + (7 - (longlong)local_f0)) >> 3;
  if (local_f0 + local_e8 < local_f0) {
    uVar11 = uVar9;
  }
  if (uVar11 != 0) {
    local_d0 = &local_108;
    puVar13 = local_f0;
    do {
      local_108 = (undefined8 *)*puVar13;
      uVar2 = FUN_1429f11d0();
      local_c8 = AActor::GetComponentsByClass(local_108,&local_c0,uVar2);
      FUN_141201240(&local_98,local_100,&local_d0,0);
      if (local_c0 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      puVar13 = puVar13 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar11);
  }
  puVar13 = local_e0 + local_d8;
  puVar16 = local_f0;
  local_108 = local_e0;
  local_f8 = local_f0;
  local_a0 = puVar13;
  if (local_e0 != puVar13) {
    do {
      puVar14 = local_108;
      lVar4 = 0;
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(&local_98,&local_b0,*local_108);
      if ((int)local_b0 != -1) {
        lVar4 = (longlong)(int)local_b0 * 0x20 + local_98;
      }
      local_b8 = *(int *)(lVar4 + 0x10);
      lVar10 = (longlong)local_b8;
      pvVar1 = *(void **)(lVar4 + 8);
      local_c0 = (undefined8 *)0x0;
      if (local_b8 == 0) {
        local_b4 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_c0,local_b8,0);
        _guard_xfg_dispatch_icall_nop(local_c0,pvVar1,lVar10 << 3);
        puVar16 = local_f0;
      }
      puVar5 = local_c0 + local_b8;
      local_f8 = local_c0;
      local_a8 = puVar5;
      if (local_c0 != puVar5) {
        do {
          uVar2 = *local_f8;
          puVar15 = puVar16 + local_e8;
          puVar17 = puVar16;
          puVar14 = local_108;
          puVar13 = local_a0;
          for (; local_108 = puVar14, local_a0 = puVar13, puVar17 != puVar15; puVar17 = puVar17 + 1)
          {
            uVar3 = *puVar17;
            FUN_14238f290(uVar2,uVar3,1);
            TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
            ::FindId(&local_98,local_100,uVar3);
            if (local_100[0] == -1) {
              lVar4 = 0;
            }
            else {
              lVar4 = (longlong)local_100[0] * 0x20 + local_98;
            }
            ppuVar6 = (undefined8 **)0x0;
            iVar7 = *(int *)(lVar4 + 0x10);
            pvVar1 = *(void **)(lVar4 + 8);
            local_d0 = (undefined8 **)0x0;
            local_c8 = CONCAT44(local_c8._4_4_,iVar7);
            if (iVar7 == 0) {
              local_c8 = 0;
              local_c8._0_4_ = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (&local_d0,iVar7,0);
              ppuVar6 = local_d0;
              _guard_xfg_dispatch_icall_nop(local_d0,pvVar1,(longlong)iVar7 << 3);
            }
            uVar11 = 0;
            uVar9 = (ulonglong)((longlong)(ppuVar6 + (int)local_c8) + (7 - (longlong)ppuVar6)) >> 3;
            if (ppuVar6 + (int)local_c8 < ppuVar6) {
              uVar9 = uVar11;
            }
            ppuVar12 = ppuVar6;
            if (uVar9 != 0) {
              do {
                FUN_14238f3f0(uVar2,*ppuVar12,1);
                uVar11 = uVar11 + 1;
                ppuVar12 = ppuVar12 + 1;
              } while (uVar11 != uVar9);
            }
            if (ppuVar6 != (undefined8 **)0x0) {
              FMemory::Free(ppuVar6);
            }
            puVar5 = local_a8;
            puVar16 = local_f0;
            puVar14 = local_108;
            puVar13 = local_a0;
          }
          local_f8 = local_f8 + 1;
        } while (local_f8 != puVar5);
      }
      if (local_c0 != (undefined8 *)0x0) {
        FMemory::Free(local_c0);
        puVar16 = local_f0;
      }
      local_108 = puVar14 + 1;
    } while (local_108 != puVar13);
  }
  local_f8 = puVar16;
  puVar13 = local_f8 + local_e8;
  local_b0 = puVar13;
  if (local_f8 != puVar13) {
    do {
      puVar14 = local_f8;
      uVar2 = *local_f8;
      uVar3 = FUN_1429f11d0();
      AActor::GetComponentsByClass(uVar2,&local_c0,uVar3);
      local_108 = local_c0;
      local_a8 = local_c0 + local_b8;
      puVar16 = local_e0;
      if (local_c0 != local_a8) {
        do {
          uVar2 = *local_108;
          puVar5 = puVar16 + local_d8;
          puVar17 = puVar16;
          puVar14 = local_f8;
          puVar13 = local_b0;
          for (; local_f8 = puVar14, local_b0 = puVar13, puVar16 != puVar5; puVar16 = puVar16 + 1) {
            uVar3 = *puVar16;
            FUN_14238f290(uVar2,uVar3,1);
            TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
            ::FindId(&local_98,local_100,uVar3);
            if (local_100[0] == -1) {
              lVar4 = 0;
            }
            else {
              lVar4 = (longlong)local_100[0] * 0x20 + local_98;
            }
            ppuVar6 = (undefined8 **)0x0;
            iVar7 = *(int *)(lVar4 + 0x10);
            pvVar1 = *(void **)(lVar4 + 8);
            local_d0 = (undefined8 **)0x0;
            local_c8 = CONCAT44(local_c8._4_4_,iVar7);
            if (iVar7 == 0) {
              local_c8 = 0;
              local_c8._0_4_ = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (&local_d0,iVar7,0);
              ppuVar6 = local_d0;
              _guard_xfg_dispatch_icall_nop(local_d0,pvVar1,(longlong)iVar7 << 3);
            }
            uVar11 = 0;
            uVar9 = (ulonglong)((longlong)(ppuVar6 + (int)local_c8) + (7 - (longlong)ppuVar6)) >> 3;
            if (ppuVar6 + (int)local_c8 < ppuVar6) {
              uVar9 = uVar11;
            }
            ppuVar12 = ppuVar6;
            if (uVar9 != 0) {
              do {
                FUN_14238f3f0(uVar2,*ppuVar12,1);
                uVar11 = uVar11 + 1;
                ppuVar12 = ppuVar12 + 1;
              } while (uVar11 != uVar9);
            }
            if (ppuVar6 != (undefined8 **)0x0) {
              FMemory::Free(ppuVar6);
            }
            puVar17 = local_e0;
            puVar14 = local_f8;
            puVar13 = local_b0;
          }
          local_108 = local_108 + 1;
          puVar16 = puVar17;
        } while (local_108 != local_a8);
      }
      if (local_c0 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      local_f8 = puVar14 + 1;
    } while (local_f8 != puVar13);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_98);
  if (local_f0 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_e0 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14122b0d0 FUN_14122b0d0 body=1584 status=ok
// SIG undefined FUN_14122b0d0(void)

void FUN_14122b0d0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  short *psVar16;
  longlong lVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  uint uVar20;
  uint local_res18 [2];
  longlong *local_res20;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  ulonglong local_90;
  longlong *local_88;
  undefined8 local_80;
  short *local_78;
  int local_70;
  
  FUN_141217390();
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x48);
  cVar3 = FWeakObjectPtr::IsValid(param_2);
  puVar12 = (undefined8 *)0x0;
  uVar20 = 0;
  if (cVar3 == '\0') goto LAB_14122b2d7;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  uVar4 = FWeakObjectPtr::Get(param_2);
  lVar5 = FUN_140ecbdf0(uVar4,param_2 + 8,0,6,&local_88);
  puVar1 = (uint *)(param_1 + 0x38);
  if (*(longlong *)puVar1 == 0) {
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)operator_new(0x18);
      puVar8 = puVar12;
      if (puVar6 != (undefined8 *)0x0) {
        FGCObject::FGCObject(puVar6);
        *puVar6 = &PTR__scalar_deleting_destructor__1440f8f50;
        puVar6[2] = lVar5;
        puVar8 = puVar6;
      }
      if (puVar1 == local_res18) {
        if (puVar8 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar8;
          goto LAB_14122b1cb;
        }
      }
      else {
        puVar10 = *(undefined8 **)puVar1;
        *(undefined8 **)puVar1 = puVar8;
        if (puVar10 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar10;
          puVar8 = puVar10;
LAB_14122b1cb:
          (*(code *)*puVar6)(puVar8,1);
        }
      }
    }
  }
  else {
    *(longlong *)(*(longlong *)puVar1 + 0x10) = lVar5;
  }
  plVar11 = local_88;
  for (iVar13 = (uint)local_80; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  local_88 = (longlong *)0x0;
  local_80 = 0;
  uVar4 = FWeakObjectPtr::Get(param_2);
  lVar5 = FUN_141021f30(uVar4,param_2 + 0x18,0,6,&local_88);
  puVar1 = (uint *)(param_1 + 0x40);
  if (*(longlong *)puVar1 == 0) {
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)operator_new(0x18);
      puVar8 = puVar12;
      if (puVar6 != (undefined8 *)0x0) {
        FGCObject::FGCObject(puVar6);
        *puVar6 = &PTR__scalar_deleting_destructor__1440f8f50;
        puVar6[2] = lVar5;
        puVar8 = puVar6;
      }
      if (puVar1 == local_res18) {
        if (puVar8 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar8;
          goto LAB_14122b297;
        }
      }
      else {
        puVar10 = *(undefined8 **)puVar1;
        *(undefined8 **)puVar1 = puVar8;
        if (puVar10 != (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar10;
          puVar8 = puVar10;
LAB_14122b297:
          (*(code *)*puVar6)(puVar8,1);
        }
      }
    }
  }
  else {
    *(longlong *)(*(longlong *)puVar1 + 0x10) = lVar5;
  }
  plVar11 = local_88;
  for (iVar13 = (uint)local_80; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
LAB_14122b2d7:
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10), lVar5 != 0)) {
    FUN_142087ad0(lVar5,param_1 + 0x48,param_1 + 0x4c);
    local_88 = (longlong *)0x0;
    local_res18[0] = 0;
    local_80 = local_80 & 0xffffffff;
    local_res20 = (longlong *)((ulonglong)local_res20 & 0xffffffff00000000);
    puVar8 = puVar12;
    puVar6 = puVar12;
    if (0 < *(int *)(param_2 + 0x40)) {
      do {
        uVar20 = (uint)puVar6;
        if (*(int *)(param_2 + 0x30) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = *(undefined2 **)(param_2 + 0x28);
        }
        FString::PrintfImpl(&local_78,L"%s%d",puVar18,*(int *)(param_2 + 0x44) + (int)puVar8);
        local_98 = 0;
        psVar16 = &DAT_143f3eda8;
        if (local_70 != 0) {
          psVar16 = local_78;
        }
        local_90 = 0;
        if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
          lVar5 = -1;
          do {
            lVar17 = lVar5 + 1;
            lVar5 = lVar5 + 1;
          } while (psVar16[lVar17] != 0);
          uVar14 = (int)lVar5 + 1;
          local_90 = (ulonglong)uVar14;
          if (0 < (int)uVar14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
          }
          FGenericPlatformString::Memcpy(local_98,psVar16,(longlong)(int)uVar14 * 2);
        }
        local_a8 = (longlong *)0x0;
        local_a0 = 0;
        puVar8 = puVar12;
        if (*(longlong *)(param_2 + 0x38) != 0) {
          puVar7 = (undefined8 *)UPlatformGameInstance::StaticClass();
          for (puVar10 = *(undefined8 **)(param_2 + 0x38);
              (puVar8 = puVar12, puVar10 != (undefined8 *)0x0 &&
              (puVar8 = *(undefined8 **)(param_2 + 0x38), puVar10 != puVar7));
              puVar10 = (undefined8 *)puVar10[6]) {
          }
        }
        puVar10 = puVar12;
        if (*(longlong *)(param_1 + 0x38) != 0) {
          puVar10 = *(undefined8 **)(*(longlong *)(param_1 + 0x38) + 0x10);
        }
        lVar5 = FUN_140ecbdf0(puVar10,&local_98,puVar8,6,&local_a8);
        plVar11 = local_a8;
        for (iVar13 = (int)local_a0; iVar13 != 0; iVar13 = iVar13 + -1) {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 2;
        }
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free(local_a8);
        }
        if (local_98 != 0) {
          FMemory::Free();
        }
        if (lVar5 == 0) {
          if (local_78 != (short *)0x0) {
            FMemory::Free();
          }
          break;
        }
        lVar17 = (longlong)(int)uVar20;
        local_res18[0] = uVar20 + 1;
        local_80 = CONCAT44(local_80._4_4_,local_res18[0]);
        uVar20 = local_res18[0];
        if (local_80._4_4_ < (int)local_res18[0]) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_88,puVar6);
          uVar20 = (uint)local_80;
        }
        puVar6 = (undefined8 *)(ulonglong)uVar20;
        local_88[lVar17] = lVar5;
        local_res18[0] = uVar20;
        if (local_78 != (short *)0x0) {
          FMemory::Free();
        }
        uVar14 = (int)local_res20 + 1;
        puVar8 = (undefined8 *)(ulonglong)uVar14;
        local_res20 = (longlong *)CONCAT44(local_res20._4_4_,uVar14);
      } while ((int)uVar14 < *(int *)(param_2 + 0x40));
    }
    plVar11 = local_88;
    iVar13 = *(int *)(param_1 + 0x58);
    local_res20 = (longlong *)(param_1 + 0x50);
    if (iVar13 < (int)uVar20) {
      *(uint *)(param_1 + 0x58) = uVar20;
      if (*(int *)(param_1 + 0x5c) < (int)uVar20) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_res20,iVar13);
      }
      if (uVar20 - iVar13 != 0) {
        puVar8 = (undefined8 *)(*local_res20 + (longlong)iVar13 * 8);
        for (uVar9 = (ulonglong)(uVar20 - iVar13); uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
      }
    }
    else if ((int)uVar20 < iVar13) {
      TArray<TUniquePtr<Chaos::FImplicitObject,TDefaultDelete<Chaos::FImplicitObject>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(local_res20,uVar20,iVar13 - uVar20,1);
    }
    plVar19 = plVar11;
    puVar8 = puVar12;
    puVar6 = puVar12;
    plVar15 = plVar11;
    if (0 < *(int *)(param_1 + 0x58)) {
      do {
        local_a8 = plVar15;
        if (((-1 < (longlong)puVar8) && ((int)puVar6 < (int)local_res18[0])) &&
           (lVar5 = *plVar19, lVar5 != 0)) {
          plVar15 = (longlong *)((longlong)plVar19 + (*local_res20 - (longlong)plVar11));
          if (*plVar15 == 0) {
            puVar7 = (undefined8 *)operator_new(0x18);
            puVar10 = puVar12;
            if (puVar7 != (undefined8 *)0x0) {
              FGCObject::FGCObject(puVar7);
              puVar7[2] = lVar5;
              *puVar7 = &PTR__scalar_deleting_destructor__1440f8f50;
              puVar10 = puVar7;
            }
            plVar11 = local_a8;
            if (plVar15 == &local_98) {
              if (puVar10 != (undefined8 *)0x0) {
                puVar7 = (undefined8 *)*puVar10;
                goto LAB_14122b5b5;
              }
            }
            else {
              puVar2 = (undefined8 *)*plVar15;
              *plVar15 = (longlong)puVar10;
              if (puVar2 != (undefined8 *)0x0) {
                puVar7 = (undefined8 *)*puVar2;
                puVar10 = puVar2;
LAB_14122b5b5:
                (*(code *)*puVar7)(puVar10,1);
                plVar11 = local_a8;
              }
            }
          }
          else {
            *(longlong *)(*plVar15 + 0x10) = lVar5;
          }
        }
        uVar20 = (int)puVar6 + 1;
        plVar19 = plVar19 + 1;
        puVar8 = (undefined8 *)((longlong)puVar8 + 1);
        puVar6 = (undefined8 *)(ulonglong)uVar20;
        plVar15 = local_a8;
      } while ((int)uVar20 < *(int *)(param_1 + 0x58));
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  FUN_142f11a80(param_1,(float)*(int *)(param_1 + 0x68) * *(float *)(param_1 + 0x60),
                (float)*(int *)(param_1 + 0x58) * *(float *)(param_1 + 0x60));
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10), lVar5 != 0)) {
    FUN_142f0f790(lVar5,1);
  }
  iVar13 = *(int *)(param_2 + 0x40);
  *(int *)(param_1 + 0x34) = iVar13;
  FUN_142f11a80(param_1,(float)*(int *)(param_1 + 0x68) * *(float *)(param_1 + 0x60),
                (float)iVar13 * *(float *)(param_1 + 0x60));
  FUN_142f0ee50(param_1);
  if (0 < *(int *)(param_1 + 0x34)) {
    FUN_142eedeb0(param_1);
    FUN_142f0ced0(param_1);
  }
  return;
}



// FUNCTION 14122b700 FUN_14122b700 body=298 status=ok
// SIG undefined FUN_14122b700(void)

void FUN_14122b700(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x668))(), lVar2 != 0)) {
    lVar3 = FUN_1413e48b0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(lVar2 + 0x568), lVar2 != 0)) {
      plVar4 = (longlong *)UBlackboardKeyType_Object::GetPrivateStaticClass();
      if (plVar4 == (longlong *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = plVar4[0x1f];
        if (lVar3 == 0) {
          (**(code **)(*plVar4 + 0x368))(plVar4);
          lVar3 = plVar4[0x1f];
        }
      }
      FUN_142bb3d50(lVar2,DAT_1468652c8,lVar3);
      FUN_142bcad50(lVar2,&DAT_1468652c8,param_2);
      plVar4 = (longlong *)UBlackboardKeyType_Bool::GetPrivateStaticClass();
      if (plVar4 == (longlong *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = plVar4[0x1f];
        if (lVar3 == 0) {
          (**(code **)(*plVar4 + 0x368))(plVar4);
          lVar3 = plVar4[0x1f];
        }
      }
      FUN_142bb3d50(lVar2,DAT_1468652d0,lVar3);
      UBlackboardComponent::SetValueAsBool(lVar2,&DAT_1468652d0,1);
    }
  }
  return;
}



// FUNCTION 14122b830 FUN_14122b830 body=145 status=ok
// SIG undefined FUN_14122b830(void)

void FUN_14122b830(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *local_18;
  int local_10;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  uVar1 = FUN_1414dc8f0();
  AActor::GetComponentsByClass(param_1,&local_18,uVar1);
  uVar4 = 0;
  uVar3 = (ulonglong)((longlong)(local_18 + local_10) + (7 - (longlong)local_18)) >> 3;
  if (local_18 + local_10 < local_18) {
    uVar3 = uVar4;
  }
  plVar2 = local_18;
  if (uVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FUN_141263c20();
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 14122b940 FUN_14122b940 body=143 status=ok
// SIG undefined FUN_14122b940(void)

void FUN_14122b940(longlong param_1,undefined8 param_2)

{
  FUN_14122d5d0(param_1 + 0x1010);
  if (*(char *)(param_1 + 0x12ca) != '\0') {
    *(undefined1 *)(param_1 + 0x15b0) = 3;
  }
  if (*(char *)(param_1 + 0x142a) != '\0') {
    *(undefined1 *)(param_1 + 0x15b0) = 5;
  }
  if (*(char *)(param_1 + 0x137a) != '\0') {
    *(undefined1 *)(param_1 + 0x15b1) = 4;
  }
  if (*(char *)(param_1 + 0x14da) != '\0') {
    *(undefined1 *)(param_1 + 0x15b1) = 6;
  }
  if (*(char *)(param_1 + 0x158a) != '\0') {
    *(undefined1 *)(param_1 + 0x15b2) = 7;
  }
  if (*(char *)(param_1 + 0x14d) != '\0') {
    FUN_14122b9d0(param_1 + 0x180,param_2);
  }
  return;
}



// FUNCTION 14122b9d0 FUN_14122b9d0 body=1022 status=ok
// SIG undefined FUN_14122b9d0(void)

void FUN_14122b9d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar15;
  undefined1 local_68 [4];
  int local_64;
  int *local_60;
  uint local_58;
  uint local_54;
  int local_50 [2];
  longlong local_48;
  undefined1 local_40 [8];
  int *piVar14;
  
  piVar3 = (int *)0x0;
  local_60 = (int *)0x0;
  local_54 = 0;
  piVar12 = piVar3;
  piVar15 = piVar3;
  local_48 = param_2;
  if (0 < *(int *)(param_1 + 0xe70)) {
    piVar9 = (int *)(param_1 + 0xa4);
    piVar14 = piVar3;
    do {
      lVar6 = (longlong)(int)piVar14 * 0xb0 + param_1;
      FUN_1422f3ff0(lVar6,local_48,1);
      uVar2 = FBoneReference::IsValidToEvaluate(lVar6,local_48);
      *(undefined1 *)((longlong)piVar9 + 6) = uVar2;
      piVar9[-1] = 0;
      if (*piVar9 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar9 + -3,0);
      }
      iVar8 = (int)piVar15;
      if (*(char *)((longlong)piVar9 + 6) == '\0') {
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 0;
      }
      else {
        if ((char)piVar9[-0x26] == '\0') {
          iVar5 = piVar9[-0x25];
        }
        else if (piVar9[-0x27] == -1) {
          iVar5 = -1;
        }
        else {
          iVar5 = *(int *)(*(longlong *)(local_48 + 0x80) + (longlong)piVar9[-0x27] * 4);
        }
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        piVar12[(longlong)iVar8 * 2] = iVar5;
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 1;
      }
      piVar15 = (int *)(ulonglong)local_58;
      uVar13 = (int)piVar14 + 1;
      piVar14 = (int *)(ulonglong)uVar13;
      piVar9 = piVar9 + 0x2c;
    } while ((int)uVar13 < *(int *)(param_1 + 0xe70));
  }
  plVar1 = (longlong *)(param_1 + 0xe80);
  *(undefined4 *)(param_1 + 0xe88) = 0;
  if (*(int *)(param_1 + 0xe8c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_64 = 0;
  if (0 < *(int *)(param_1 + 0xe70)) {
    plVar7 = (longlong *)(param_1 + 0x90);
    local_60 = piVar12;
    do {
      lVar6 = local_48;
      if (*(char *)((longlong)plVar7 + 0x1a) != '\0') {
        lVar10 = (longlong)local_64;
        if (*local_60 == 0) {
          *plVar7 = 0;
          iVar8 = *(int *)(param_1 + 0xe88);
          *(int *)(param_1 + 0xe88) = iVar8 + 1;
          if (*(int *)(param_1 + 0xe8c) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
          }
          *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar10 * 0xb0 + param_1;
        }
        else {
          FBoneContainer::GetParentBoneIndex(local_48,local_50,piVar12 + lVar10 * 2);
          for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2; piVar3 = piVar3 + 2
              ) {
            if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
              lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
              goto LAB_14122bc0c;
            }
          }
          lVar4 = 0xffffffff;
LAB_14122bc0c:
          iVar8 = (int)lVar4;
          while ((local_50[0] != 0 && (iVar8 = (int)lVar4, iVar8 == -1))) {
            piVar3 = (int *)FBoneContainer::GetParentBoneIndex(lVar6,local_40,local_50);
            local_50[0] = *piVar3;
            for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2;
                piVar3 = piVar3 + 2) {
              if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
                lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
                goto LAB_14122bc4d;
              }
            }
            lVar4 = 0xffffffff;
LAB_14122bc4d:
            iVar8 = (int)lVar4;
          }
          lVar6 = lVar10 * 0xb0 + param_1;
          if (iVar8 == -1) {
            *plVar7 = 0;
            iVar8 = *(int *)(param_1 + 0xe88);
            *(int *)(param_1 + 0xe88) = iVar8 + 1;
            if (*(int *)(param_1 + 0xe8c) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
            }
            *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar6;
          }
          else {
            lVar10 = (longlong)iVar8 * 0xb0 + param_1;
            *plVar7 = lVar10;
            iVar8 = *(int *)(lVar10 + 0xa0);
            *(int *)(lVar10 + 0xa0) = iVar8 + 1;
            if (*(int *)(lVar10 + 0xa4) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(lVar10 + 0x98),iVar8);
            }
            *(longlong *)(*(longlong *)(lVar10 + 0x98) + (longlong)iVar8 * 8) = lVar6;
          }
        }
      }
      local_64 = local_64 + 1;
      local_60 = local_60 + 2;
      plVar7 = plVar7 + 0x16;
    } while (local_64 < *(int *)(param_1 + 0xe70));
  }
  iVar8 = 0;
  local_68[0] = 0;
  AlgoImpl::
  IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
            (*plVar1,(longlong)*(int *)(param_1 + 0xe88),0,local_68);
  uVar2 = local_68[0];
  if (0 < *(int *)(param_1 + 0xe70)) {
    puVar11 = (undefined8 *)(param_1 + 0x98);
    do {
      local_68[0] = 0;
      AlgoImpl::
      IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
                (*puVar11,(longlong)*(int *)(puVar11 + 1),uVar2,local_68);
      iVar8 = iVar8 + 1;
      puVar11 = puVar11 + 0x16;
    } while (iVar8 < *(int *)(param_1 + 0xe70));
  }
  if ((int)piVar15 != 0) {
    piVar3 = piVar12 + 1;
    do {
      if ((char)*piVar3 != '\0') {
        *(char *)piVar3 = '\0';
      }
      piVar3 = piVar3 + 2;
      uVar13 = (int)piVar15 - 1;
      piVar15 = (int *)(ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  if (piVar12 != (int *)0x0) {
    FMemory::Free(piVar12);
  }
  return;
}



// FUNCTION 14122bdd0 FUN_14122bdd0 body=1022 status=ok
// SIG undefined FUN_14122bdd0(void)

void FUN_14122bdd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar15;
  undefined1 local_68 [4];
  int local_64;
  int *local_60;
  uint local_58;
  uint local_54;
  int local_50 [2];
  longlong local_48;
  undefined1 local_40 [8];
  int *piVar14;
  
  piVar3 = (int *)0x0;
  local_60 = (int *)0x0;
  local_54 = 0;
  piVar12 = piVar3;
  piVar15 = piVar3;
  local_48 = param_2;
  if (0 < *(int *)(param_1 + 0x1810)) {
    piVar9 = (int *)(param_1 + 0xa4);
    piVar14 = piVar3;
    do {
      lVar6 = (longlong)(int)piVar14 * 0xb0 + param_1;
      FUN_1422f3ff0(lVar6,local_48,1);
      uVar2 = FBoneReference::IsValidToEvaluate(lVar6,local_48);
      *(undefined1 *)((longlong)piVar9 + 6) = uVar2;
      piVar9[-1] = 0;
      if (*piVar9 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar9 + -3,0);
      }
      iVar8 = (int)piVar15;
      if (*(char *)((longlong)piVar9 + 6) == '\0') {
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 0;
      }
      else {
        if ((char)piVar9[-0x26] == '\0') {
          iVar5 = piVar9[-0x25];
        }
        else if (piVar9[-0x27] == -1) {
          iVar5 = -1;
        }
        else {
          iVar5 = *(int *)(*(longlong *)(local_48 + 0x80) + (longlong)piVar9[-0x27] * 4);
        }
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        piVar12[(longlong)iVar8 * 2] = iVar5;
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 1;
      }
      piVar15 = (int *)(ulonglong)local_58;
      uVar13 = (int)piVar14 + 1;
      piVar14 = (int *)(ulonglong)uVar13;
      piVar9 = piVar9 + 0x2c;
    } while ((int)uVar13 < *(int *)(param_1 + 0x1810));
  }
  plVar1 = (longlong *)(param_1 + 0x1820);
  *(undefined4 *)(param_1 + 0x1828) = 0;
  if (*(int *)(param_1 + 0x182c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_64 = 0;
  if (0 < *(int *)(param_1 + 0x1810)) {
    plVar7 = (longlong *)(param_1 + 0x90);
    local_60 = piVar12;
    do {
      lVar6 = local_48;
      if (*(char *)((longlong)plVar7 + 0x1a) != '\0') {
        lVar10 = (longlong)local_64;
        if (*local_60 == 0) {
          *plVar7 = 0;
          iVar8 = *(int *)(param_1 + 0x1828);
          *(int *)(param_1 + 0x1828) = iVar8 + 1;
          if (*(int *)(param_1 + 0x182c) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
          }
          *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar10 * 0xb0 + param_1;
        }
        else {
          FBoneContainer::GetParentBoneIndex(local_48,local_50,piVar12 + lVar10 * 2);
          for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2; piVar3 = piVar3 + 2
              ) {
            if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
              lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
              goto LAB_14122c00c;
            }
          }
          lVar4 = 0xffffffff;
LAB_14122c00c:
          iVar8 = (int)lVar4;
          while ((local_50[0] != 0 && (iVar8 = (int)lVar4, iVar8 == -1))) {
            piVar3 = (int *)FBoneContainer::GetParentBoneIndex(lVar6,local_40,local_50);
            local_50[0] = *piVar3;
            for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2;
                piVar3 = piVar3 + 2) {
              if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
                lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
                goto LAB_14122c04d;
              }
            }
            lVar4 = 0xffffffff;
LAB_14122c04d:
            iVar8 = (int)lVar4;
          }
          lVar6 = lVar10 * 0xb0 + param_1;
          if (iVar8 == -1) {
            *plVar7 = 0;
            iVar8 = *(int *)(param_1 + 0x1828);
            *(int *)(param_1 + 0x1828) = iVar8 + 1;
            if (*(int *)(param_1 + 0x182c) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
            }
            *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar6;
          }
          else {
            lVar10 = (longlong)iVar8 * 0xb0 + param_1;
            *plVar7 = lVar10;
            iVar8 = *(int *)(lVar10 + 0xa0);
            *(int *)(lVar10 + 0xa0) = iVar8 + 1;
            if (*(int *)(lVar10 + 0xa4) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(lVar10 + 0x98),iVar8);
            }
            *(longlong *)(*(longlong *)(lVar10 + 0x98) + (longlong)iVar8 * 8) = lVar6;
          }
        }
      }
      local_64 = local_64 + 1;
      local_60 = local_60 + 2;
      plVar7 = plVar7 + 0x16;
    } while (local_64 < *(int *)(param_1 + 0x1810));
  }
  iVar8 = 0;
  local_68[0] = 0;
  AlgoImpl::
  IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
            (*plVar1,(longlong)*(int *)(param_1 + 0x1828),0,local_68);
  uVar2 = local_68[0];
  if (0 < *(int *)(param_1 + 0x1810)) {
    puVar11 = (undefined8 *)(param_1 + 0x98);
    do {
      local_68[0] = 0;
      AlgoImpl::
      IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
                (*puVar11,(longlong)*(int *)(puVar11 + 1),uVar2,local_68);
      iVar8 = iVar8 + 1;
      puVar11 = puVar11 + 0x16;
    } while (iVar8 < *(int *)(param_1 + 0x1810));
  }
  if ((int)piVar15 != 0) {
    piVar3 = piVar12 + 1;
    do {
      if ((char)*piVar3 != '\0') {
        *(char *)piVar3 = '\0';
      }
      piVar3 = piVar3 + 2;
      uVar13 = (int)piVar15 - 1;
      piVar15 = (int *)(ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  if (piVar12 != (int *)0x0) {
    FMemory::Free(piVar12);
  }
  return;
}



// FUNCTION 14122c1d0 FUN_14122c1d0 body=1022 status=ok
// SIG undefined FUN_14122c1d0(void)

void FUN_14122c1d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar15;
  undefined1 local_68 [4];
  int local_64;
  int *local_60;
  uint local_58;
  uint local_54;
  int local_50 [2];
  longlong local_48;
  undefined1 local_40 [8];
  int *piVar14;
  
  piVar3 = (int *)0x0;
  local_60 = (int *)0x0;
  local_54 = 0;
  piVar12 = piVar3;
  piVar15 = piVar3;
  local_48 = param_2;
  if (0 < *(int *)(param_1 + 0x1290)) {
    piVar9 = (int *)(param_1 + 0xa4);
    piVar14 = piVar3;
    do {
      lVar6 = (longlong)(int)piVar14 * 0xb0 + param_1;
      FUN_1422f3ff0(lVar6,local_48,1);
      uVar2 = FBoneReference::IsValidToEvaluate(lVar6,local_48);
      *(undefined1 *)((longlong)piVar9 + 6) = uVar2;
      piVar9[-1] = 0;
      if (*piVar9 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar9 + -3,0);
      }
      iVar8 = (int)piVar15;
      if (*(char *)((longlong)piVar9 + 6) == '\0') {
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 0;
      }
      else {
        if ((char)piVar9[-0x26] == '\0') {
          iVar5 = piVar9[-0x25];
        }
        else if (piVar9[-0x27] == -1) {
          iVar5 = -1;
        }
        else {
          iVar5 = *(int *)(*(longlong *)(local_48 + 0x80) + (longlong)piVar9[-0x27] * 4);
        }
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        piVar12[(longlong)iVar8 * 2] = iVar5;
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 1;
      }
      piVar15 = (int *)(ulonglong)local_58;
      uVar13 = (int)piVar14 + 1;
      piVar14 = (int *)(ulonglong)uVar13;
      piVar9 = piVar9 + 0x2c;
    } while ((int)uVar13 < *(int *)(param_1 + 0x1290));
  }
  plVar1 = (longlong *)(param_1 + 0x12a0);
  *(undefined4 *)(param_1 + 0x12a8) = 0;
  if (*(int *)(param_1 + 0x12ac) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_64 = 0;
  if (0 < *(int *)(param_1 + 0x1290)) {
    plVar7 = (longlong *)(param_1 + 0x90);
    local_60 = piVar12;
    do {
      lVar6 = local_48;
      if (*(char *)((longlong)plVar7 + 0x1a) != '\0') {
        lVar10 = (longlong)local_64;
        if (*local_60 == 0) {
          *plVar7 = 0;
          iVar8 = *(int *)(param_1 + 0x12a8);
          *(int *)(param_1 + 0x12a8) = iVar8 + 1;
          if (*(int *)(param_1 + 0x12ac) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
          }
          *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar10 * 0xb0 + param_1;
        }
        else {
          FBoneContainer::GetParentBoneIndex(local_48,local_50,piVar12 + lVar10 * 2);
          for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2; piVar3 = piVar3 + 2
              ) {
            if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
              lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
              goto LAB_14122c40c;
            }
          }
          lVar4 = 0xffffffff;
LAB_14122c40c:
          iVar8 = (int)lVar4;
          while ((local_50[0] != 0 && (iVar8 = (int)lVar4, iVar8 == -1))) {
            piVar3 = (int *)FBoneContainer::GetParentBoneIndex(lVar6,local_40,local_50);
            local_50[0] = *piVar3;
            for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2;
                piVar3 = piVar3 + 2) {
              if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
                lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
                goto LAB_14122c44d;
              }
            }
            lVar4 = 0xffffffff;
LAB_14122c44d:
            iVar8 = (int)lVar4;
          }
          lVar6 = lVar10 * 0xb0 + param_1;
          if (iVar8 == -1) {
            *plVar7 = 0;
            iVar8 = *(int *)(param_1 + 0x12a8);
            *(int *)(param_1 + 0x12a8) = iVar8 + 1;
            if (*(int *)(param_1 + 0x12ac) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
            }
            *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar6;
          }
          else {
            lVar10 = (longlong)iVar8 * 0xb0 + param_1;
            *plVar7 = lVar10;
            iVar8 = *(int *)(lVar10 + 0xa0);
            *(int *)(lVar10 + 0xa0) = iVar8 + 1;
            if (*(int *)(lVar10 + 0xa4) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(lVar10 + 0x98),iVar8);
            }
            *(longlong *)(*(longlong *)(lVar10 + 0x98) + (longlong)iVar8 * 8) = lVar6;
          }
        }
      }
      local_64 = local_64 + 1;
      local_60 = local_60 + 2;
      plVar7 = plVar7 + 0x16;
    } while (local_64 < *(int *)(param_1 + 0x1290));
  }
  iVar8 = 0;
  local_68[0] = 0;
  AlgoImpl::
  IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
            (*plVar1,(longlong)*(int *)(param_1 + 0x12a8),0,local_68);
  uVar2 = local_68[0];
  if (0 < *(int *)(param_1 + 0x1290)) {
    puVar11 = (undefined8 *)(param_1 + 0x98);
    do {
      local_68[0] = 0;
      AlgoImpl::
      IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
                (*puVar11,(longlong)*(int *)(puVar11 + 1),uVar2,local_68);
      iVar8 = iVar8 + 1;
      puVar11 = puVar11 + 0x16;
    } while (iVar8 < *(int *)(param_1 + 0x1290));
  }
  if ((int)piVar15 != 0) {
    piVar3 = piVar12 + 1;
    do {
      if ((char)*piVar3 != '\0') {
        *(char *)piVar3 = '\0';
      }
      piVar3 = piVar3 + 2;
      uVar13 = (int)piVar15 - 1;
      piVar15 = (int *)(ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  if (piVar12 != (int *)0x0) {
    FMemory::Free(piVar12);
  }
  return;
}



// FUNCTION 14122c5d0 FUN_14122c5d0 body=1022 status=ok
// SIG undefined FUN_14122c5d0(void)

void FUN_14122c5d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar15;
  undefined1 local_68 [4];
  int local_64;
  int *local_60;
  uint local_58;
  uint local_54;
  int local_50 [2];
  longlong local_48;
  undefined1 local_40 [8];
  int *piVar14;
  
  piVar3 = (int *)0x0;
  local_60 = (int *)0x0;
  local_54 = 0;
  piVar12 = piVar3;
  piVar15 = piVar3;
  local_48 = param_2;
  if (0 < *(int *)(param_1 + 0x840)) {
    piVar9 = (int *)(param_1 + 0xa4);
    piVar14 = piVar3;
    do {
      lVar6 = (longlong)(int)piVar14 * 0xb0 + param_1;
      FUN_1422f3ff0(lVar6,local_48,1);
      uVar2 = FBoneReference::IsValidToEvaluate(lVar6,local_48);
      *(undefined1 *)((longlong)piVar9 + 6) = uVar2;
      piVar9[-1] = 0;
      if (*piVar9 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar9 + -3,0);
      }
      iVar8 = (int)piVar15;
      if (*(char *)((longlong)piVar9 + 6) == '\0') {
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 0;
      }
      else {
        if ((char)piVar9[-0x26] == '\0') {
          iVar5 = piVar9[-0x25];
        }
        else if (piVar9[-0x27] == -1) {
          iVar5 = -1;
        }
        else {
          iVar5 = *(int *)(*(longlong *)(local_48 + 0x80) + (longlong)piVar9[-0x27] * 4);
        }
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        piVar12[(longlong)iVar8 * 2] = iVar5;
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 1;
      }
      piVar15 = (int *)(ulonglong)local_58;
      uVar13 = (int)piVar14 + 1;
      piVar14 = (int *)(ulonglong)uVar13;
      piVar9 = piVar9 + 0x2c;
    } while ((int)uVar13 < *(int *)(param_1 + 0x840));
  }
  plVar1 = (longlong *)(param_1 + 0x850);
  *(undefined4 *)(param_1 + 0x858) = 0;
  if (*(int *)(param_1 + 0x85c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_64 = 0;
  if (0 < *(int *)(param_1 + 0x840)) {
    plVar7 = (longlong *)(param_1 + 0x90);
    local_60 = piVar12;
    do {
      lVar6 = local_48;
      if (*(char *)((longlong)plVar7 + 0x1a) != '\0') {
        lVar10 = (longlong)local_64;
        if (*local_60 == 0) {
          *plVar7 = 0;
          iVar8 = *(int *)(param_1 + 0x858);
          *(int *)(param_1 + 0x858) = iVar8 + 1;
          if (*(int *)(param_1 + 0x85c) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
          }
          *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar10 * 0xb0 + param_1;
        }
        else {
          FBoneContainer::GetParentBoneIndex(local_48,local_50,piVar12 + lVar10 * 2);
          for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2; piVar3 = piVar3 + 2
              ) {
            if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
              lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
              goto LAB_14122c80c;
            }
          }
          lVar4 = 0xffffffff;
LAB_14122c80c:
          iVar8 = (int)lVar4;
          while ((local_50[0] != 0 && (iVar8 = (int)lVar4, iVar8 == -1))) {
            piVar3 = (int *)FBoneContainer::GetParentBoneIndex(lVar6,local_40,local_50);
            local_50[0] = *piVar3;
            for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2;
                piVar3 = piVar3 + 2) {
              if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
                lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
                goto LAB_14122c84d;
              }
            }
            lVar4 = 0xffffffff;
LAB_14122c84d:
            iVar8 = (int)lVar4;
          }
          lVar6 = lVar10 * 0xb0 + param_1;
          if (iVar8 == -1) {
            *plVar7 = 0;
            iVar8 = *(int *)(param_1 + 0x858);
            *(int *)(param_1 + 0x858) = iVar8 + 1;
            if (*(int *)(param_1 + 0x85c) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
            }
            *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar6;
          }
          else {
            lVar10 = (longlong)iVar8 * 0xb0 + param_1;
            *plVar7 = lVar10;
            iVar8 = *(int *)(lVar10 + 0xa0);
            *(int *)(lVar10 + 0xa0) = iVar8 + 1;
            if (*(int *)(lVar10 + 0xa4) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(lVar10 + 0x98),iVar8);
            }
            *(longlong *)(*(longlong *)(lVar10 + 0x98) + (longlong)iVar8 * 8) = lVar6;
          }
        }
      }
      local_64 = local_64 + 1;
      local_60 = local_60 + 2;
      plVar7 = plVar7 + 0x16;
    } while (local_64 < *(int *)(param_1 + 0x840));
  }
  iVar8 = 0;
  local_68[0] = 0;
  AlgoImpl::
  IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
            (*plVar1,(longlong)*(int *)(param_1 + 0x858),0,local_68);
  uVar2 = local_68[0];
  if (0 < *(int *)(param_1 + 0x840)) {
    puVar11 = (undefined8 *)(param_1 + 0x98);
    do {
      local_68[0] = 0;
      AlgoImpl::
      IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
                (*puVar11,(longlong)*(int *)(puVar11 + 1),uVar2,local_68);
      iVar8 = iVar8 + 1;
      puVar11 = puVar11 + 0x16;
    } while (iVar8 < *(int *)(param_1 + 0x840));
  }
  if ((int)piVar15 != 0) {
    piVar3 = piVar12 + 1;
    do {
      if ((char)*piVar3 != '\0') {
        *(char *)piVar3 = '\0';
      }
      piVar3 = piVar3 + 2;
      uVar13 = (int)piVar15 - 1;
      piVar15 = (int *)(ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  if (piVar12 != (int *)0x0) {
    FMemory::Free(piVar12);
  }
  return;
}



// FUNCTION 14122c9d0 FUN_14122c9d0 body=1022 status=ok
// SIG undefined FUN_14122c9d0(void)

void FUN_14122c9d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar15;
  undefined1 local_68 [4];
  int local_64;
  int *local_60;
  uint local_58;
  uint local_54;
  int local_50 [2];
  longlong local_48;
  undefined1 local_40 [8];
  int *piVar14;
  
  piVar3 = (int *)0x0;
  local_60 = (int *)0x0;
  local_54 = 0;
  piVar12 = piVar3;
  piVar15 = piVar3;
  local_48 = param_2;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    piVar9 = (int *)(param_1 + 0xa4);
    piVar14 = piVar3;
    do {
      lVar6 = (longlong)(int)piVar14 * 0xb0 + param_1;
      FUN_1422f3ff0(lVar6,local_48,1);
      uVar2 = FBoneReference::IsValidToEvaluate(lVar6,local_48);
      *(undefined1 *)((longlong)piVar9 + 6) = uVar2;
      piVar9[-1] = 0;
      if (*piVar9 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar9 + -3,0);
      }
      iVar8 = (int)piVar15;
      if (*(char *)((longlong)piVar9 + 6) == '\0') {
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 0;
      }
      else {
        if ((char)piVar9[-0x26] == '\0') {
          iVar5 = piVar9[-0x25];
        }
        else if (piVar9[-0x27] == -1) {
          iVar5 = -1;
        }
        else {
          iVar5 = *(int *)(*(longlong *)(local_48 + 0x80) + (longlong)piVar9[-0x27] * 4);
        }
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        piVar12[(longlong)iVar8 * 2] = iVar5;
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 1;
      }
      piVar15 = (int *)(ulonglong)local_58;
      uVar13 = (int)piVar14 + 1;
      piVar14 = (int *)(ulonglong)uVar13;
      piVar9 = piVar9 + 0x2c;
    } while ((int)uVar13 < *(int *)(param_1 + 0x2c0));
  }
  plVar1 = (longlong *)(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  if (*(int *)(param_1 + 0x2dc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_64 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    plVar7 = (longlong *)(param_1 + 0x90);
    local_60 = piVar12;
    do {
      lVar6 = local_48;
      if (*(char *)((longlong)plVar7 + 0x1a) != '\0') {
        lVar10 = (longlong)local_64;
        if (*local_60 == 0) {
          *plVar7 = 0;
          iVar8 = *(int *)(param_1 + 0x2d8);
          *(int *)(param_1 + 0x2d8) = iVar8 + 1;
          if (*(int *)(param_1 + 0x2dc) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
          }
          *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar10 * 0xb0 + param_1;
        }
        else {
          FBoneContainer::GetParentBoneIndex(local_48,local_50,piVar12 + lVar10 * 2);
          for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2; piVar3 = piVar3 + 2
              ) {
            if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
              lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
              goto LAB_14122cc0c;
            }
          }
          lVar4 = 0xffffffff;
LAB_14122cc0c:
          iVar8 = (int)lVar4;
          while ((local_50[0] != 0 && (iVar8 = (int)lVar4, iVar8 == -1))) {
            piVar3 = (int *)FBoneContainer::GetParentBoneIndex(lVar6,local_40,local_50);
            local_50[0] = *piVar3;
            for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2;
                piVar3 = piVar3 + 2) {
              if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
                lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
                goto LAB_14122cc4d;
              }
            }
            lVar4 = 0xffffffff;
LAB_14122cc4d:
            iVar8 = (int)lVar4;
          }
          lVar6 = lVar10 * 0xb0 + param_1;
          if (iVar8 == -1) {
            *plVar7 = 0;
            iVar8 = *(int *)(param_1 + 0x2d8);
            *(int *)(param_1 + 0x2d8) = iVar8 + 1;
            if (*(int *)(param_1 + 0x2dc) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
            }
            *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar6;
          }
          else {
            lVar10 = (longlong)iVar8 * 0xb0 + param_1;
            *plVar7 = lVar10;
            iVar8 = *(int *)(lVar10 + 0xa0);
            *(int *)(lVar10 + 0xa0) = iVar8 + 1;
            if (*(int *)(lVar10 + 0xa4) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(lVar10 + 0x98),iVar8);
            }
            *(longlong *)(*(longlong *)(lVar10 + 0x98) + (longlong)iVar8 * 8) = lVar6;
          }
        }
      }
      local_64 = local_64 + 1;
      local_60 = local_60 + 2;
      plVar7 = plVar7 + 0x16;
    } while (local_64 < *(int *)(param_1 + 0x2c0));
  }
  iVar8 = 0;
  local_68[0] = 0;
  AlgoImpl::
  IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
            (*plVar1,(longlong)*(int *)(param_1 + 0x2d8),0,local_68);
  uVar2 = local_68[0];
  if (0 < *(int *)(param_1 + 0x2c0)) {
    puVar11 = (undefined8 *)(param_1 + 0x98);
    do {
      local_68[0] = 0;
      AlgoImpl::
      IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
                (*puVar11,(longlong)*(int *)(puVar11 + 1),uVar2,local_68);
      iVar8 = iVar8 + 1;
      puVar11 = puVar11 + 0x16;
    } while (iVar8 < *(int *)(param_1 + 0x2c0));
  }
  if ((int)piVar15 != 0) {
    piVar3 = piVar12 + 1;
    do {
      if ((char)*piVar3 != '\0') {
        *(char *)piVar3 = '\0';
      }
      piVar3 = piVar3 + 2;
      uVar13 = (int)piVar15 - 1;
      piVar15 = (int *)(ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  if (piVar12 != (int *)0x0) {
    FMemory::Free(piVar12);
  }
  return;
}



// FUNCTION 14122cdd0 FUN_14122cdd0 body=1022 status=ok
// SIG undefined FUN_14122cdd0(void)

void FUN_14122cdd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar15;
  undefined1 local_68 [4];
  int local_64;
  int *local_60;
  uint local_58;
  uint local_54;
  int local_50 [2];
  longlong local_48;
  undefined1 local_40 [8];
  int *piVar14;
  
  piVar3 = (int *)0x0;
  local_60 = (int *)0x0;
  local_54 = 0;
  piVar12 = piVar3;
  piVar15 = piVar3;
  local_48 = param_2;
  if (0 < *(int *)(param_1 + 0x27e0)) {
    piVar9 = (int *)(param_1 + 0xa4);
    piVar14 = piVar3;
    do {
      lVar6 = (longlong)(int)piVar14 * 0xb0 + param_1;
      FUN_1422f3ff0(lVar6,local_48,1);
      uVar2 = FBoneReference::IsValidToEvaluate(lVar6,local_48);
      *(undefined1 *)((longlong)piVar9 + 6) = uVar2;
      piVar9[-1] = 0;
      if (*piVar9 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar9 + -3,0);
      }
      iVar8 = (int)piVar15;
      if (*(char *)((longlong)piVar9 + 6) == '\0') {
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 0;
      }
      else {
        if ((char)piVar9[-0x26] == '\0') {
          iVar5 = piVar9[-0x25];
        }
        else if (piVar9[-0x27] == -1) {
          iVar5 = -1;
        }
        else {
          iVar5 = *(int *)(*(longlong *)(local_48 + 0x80) + (longlong)piVar9[-0x27] * 4);
        }
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        piVar12[(longlong)iVar8 * 2] = iVar5;
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 1;
      }
      piVar15 = (int *)(ulonglong)local_58;
      uVar13 = (int)piVar14 + 1;
      piVar14 = (int *)(ulonglong)uVar13;
      piVar9 = piVar9 + 0x2c;
    } while ((int)uVar13 < *(int *)(param_1 + 0x27e0));
  }
  plVar1 = (longlong *)(param_1 + 0x27f0);
  *(undefined4 *)(param_1 + 0x27f8) = 0;
  if (*(int *)(param_1 + 0x27fc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_64 = 0;
  if (0 < *(int *)(param_1 + 0x27e0)) {
    plVar7 = (longlong *)(param_1 + 0x90);
    local_60 = piVar12;
    do {
      lVar6 = local_48;
      if (*(char *)((longlong)plVar7 + 0x1a) != '\0') {
        lVar10 = (longlong)local_64;
        if (*local_60 == 0) {
          *plVar7 = 0;
          iVar8 = *(int *)(param_1 + 0x27f8);
          *(int *)(param_1 + 0x27f8) = iVar8 + 1;
          if (*(int *)(param_1 + 0x27fc) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
          }
          *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar10 * 0xb0 + param_1;
        }
        else {
          FBoneContainer::GetParentBoneIndex(local_48,local_50,piVar12 + lVar10 * 2);
          for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2; piVar3 = piVar3 + 2
              ) {
            if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
              lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
              goto LAB_14122d00c;
            }
          }
          lVar4 = 0xffffffff;
LAB_14122d00c:
          iVar8 = (int)lVar4;
          while ((local_50[0] != 0 && (iVar8 = (int)lVar4, iVar8 == -1))) {
            piVar3 = (int *)FBoneContainer::GetParentBoneIndex(lVar6,local_40,local_50);
            local_50[0] = *piVar3;
            for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2;
                piVar3 = piVar3 + 2) {
              if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
                lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
                goto LAB_14122d04d;
              }
            }
            lVar4 = 0xffffffff;
LAB_14122d04d:
            iVar8 = (int)lVar4;
          }
          lVar6 = lVar10 * 0xb0 + param_1;
          if (iVar8 == -1) {
            *plVar7 = 0;
            iVar8 = *(int *)(param_1 + 0x27f8);
            *(int *)(param_1 + 0x27f8) = iVar8 + 1;
            if (*(int *)(param_1 + 0x27fc) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
            }
            *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar6;
          }
          else {
            lVar10 = (longlong)iVar8 * 0xb0 + param_1;
            *plVar7 = lVar10;
            iVar8 = *(int *)(lVar10 + 0xa0);
            *(int *)(lVar10 + 0xa0) = iVar8 + 1;
            if (*(int *)(lVar10 + 0xa4) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(lVar10 + 0x98),iVar8);
            }
            *(longlong *)(*(longlong *)(lVar10 + 0x98) + (longlong)iVar8 * 8) = lVar6;
          }
        }
      }
      local_64 = local_64 + 1;
      local_60 = local_60 + 2;
      plVar7 = plVar7 + 0x16;
    } while (local_64 < *(int *)(param_1 + 0x27e0));
  }
  iVar8 = 0;
  local_68[0] = 0;
  AlgoImpl::
  IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
            (*plVar1,(longlong)*(int *)(param_1 + 0x27f8),0,local_68);
  uVar2 = local_68[0];
  if (0 < *(int *)(param_1 + 0x27e0)) {
    puVar11 = (undefined8 *)(param_1 + 0x98);
    do {
      local_68[0] = 0;
      AlgoImpl::
      IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
                (*puVar11,(longlong)*(int *)(puVar11 + 1),uVar2,local_68);
      iVar8 = iVar8 + 1;
      puVar11 = puVar11 + 0x16;
    } while (iVar8 < *(int *)(param_1 + 0x27e0));
  }
  if ((int)piVar15 != 0) {
    piVar3 = piVar12 + 1;
    do {
      if ((char)*piVar3 != '\0') {
        *(char *)piVar3 = '\0';
      }
      piVar3 = piVar3 + 2;
      uVar13 = (int)piVar15 - 1;
      piVar15 = (int *)(ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  if (piVar12 != (int *)0x0) {
    FMemory::Free(piVar12);
  }
  return;
}



// FUNCTION 14122d1d0 FUN_14122d1d0 body=1022 status=ok
// SIG undefined FUN_14122d1d0(void)

void FUN_14122d1d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar15;
  undefined1 local_68 [4];
  int local_64;
  int *local_60;
  uint local_58;
  uint local_54;
  int local_50 [2];
  longlong local_48;
  undefined1 local_40 [8];
  int *piVar14;
  
  piVar3 = (int *)0x0;
  local_60 = (int *)0x0;
  local_54 = 0;
  piVar12 = piVar3;
  piVar15 = piVar3;
  local_48 = param_2;
  if (0 < *(int *)(param_1 + 0x6e0)) {
    piVar9 = (int *)(param_1 + 0xa4);
    piVar14 = piVar3;
    do {
      lVar6 = (longlong)(int)piVar14 * 0xb0 + param_1;
      FUN_1422f3ff0(lVar6,local_48,1);
      uVar2 = FBoneReference::IsValidToEvaluate(lVar6,local_48);
      *(undefined1 *)((longlong)piVar9 + 6) = uVar2;
      piVar9[-1] = 0;
      if (*piVar9 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar9 + -3,0);
      }
      iVar8 = (int)piVar15;
      if (*(char *)((longlong)piVar9 + 6) == '\0') {
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 0;
      }
      else {
        if ((char)piVar9[-0x26] == '\0') {
          iVar5 = piVar9[-0x25];
        }
        else if (piVar9[-0x27] == -1) {
          iVar5 = -1;
        }
        else {
          iVar5 = *(int *)(*(longlong *)(local_48 + 0x80) + (longlong)piVar9[-0x27] * 4);
        }
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        piVar12[(longlong)iVar8 * 2] = iVar5;
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 1;
      }
      piVar15 = (int *)(ulonglong)local_58;
      uVar13 = (int)piVar14 + 1;
      piVar14 = (int *)(ulonglong)uVar13;
      piVar9 = piVar9 + 0x2c;
    } while ((int)uVar13 < *(int *)(param_1 + 0x6e0));
  }
  plVar1 = (longlong *)(param_1 + 0x6f0);
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  if (*(int *)(param_1 + 0x6fc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_64 = 0;
  if (0 < *(int *)(param_1 + 0x6e0)) {
    plVar7 = (longlong *)(param_1 + 0x90);
    local_60 = piVar12;
    do {
      lVar6 = local_48;
      if (*(char *)((longlong)plVar7 + 0x1a) != '\0') {
        lVar10 = (longlong)local_64;
        if (*local_60 == 0) {
          *plVar7 = 0;
          iVar8 = *(int *)(param_1 + 0x6f8);
          *(int *)(param_1 + 0x6f8) = iVar8 + 1;
          if (*(int *)(param_1 + 0x6fc) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
          }
          *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar10 * 0xb0 + param_1;
        }
        else {
          FBoneContainer::GetParentBoneIndex(local_48,local_50,piVar12 + lVar10 * 2);
          for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2; piVar3 = piVar3 + 2
              ) {
            if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
              lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
              goto LAB_14122d40c;
            }
          }
          lVar4 = 0xffffffff;
LAB_14122d40c:
          iVar8 = (int)lVar4;
          while ((local_50[0] != 0 && (iVar8 = (int)lVar4, iVar8 == -1))) {
            piVar3 = (int *)FBoneContainer::GetParentBoneIndex(lVar6,local_40,local_50);
            local_50[0] = *piVar3;
            for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2;
                piVar3 = piVar3 + 2) {
              if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
                lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
                goto LAB_14122d44d;
              }
            }
            lVar4 = 0xffffffff;
LAB_14122d44d:
            iVar8 = (int)lVar4;
          }
          lVar6 = lVar10 * 0xb0 + param_1;
          if (iVar8 == -1) {
            *plVar7 = 0;
            iVar8 = *(int *)(param_1 + 0x6f8);
            *(int *)(param_1 + 0x6f8) = iVar8 + 1;
            if (*(int *)(param_1 + 0x6fc) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
            }
            *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar6;
          }
          else {
            lVar10 = (longlong)iVar8 * 0xb0 + param_1;
            *plVar7 = lVar10;
            iVar8 = *(int *)(lVar10 + 0xa0);
            *(int *)(lVar10 + 0xa0) = iVar8 + 1;
            if (*(int *)(lVar10 + 0xa4) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(lVar10 + 0x98),iVar8);
            }
            *(longlong *)(*(longlong *)(lVar10 + 0x98) + (longlong)iVar8 * 8) = lVar6;
          }
        }
      }
      local_64 = local_64 + 1;
      local_60 = local_60 + 2;
      plVar7 = plVar7 + 0x16;
    } while (local_64 < *(int *)(param_1 + 0x6e0));
  }
  iVar8 = 0;
  local_68[0] = 0;
  AlgoImpl::
  IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
            (*plVar1,(longlong)*(int *)(param_1 + 0x6f8),0,local_68);
  uVar2 = local_68[0];
  if (0 < *(int *)(param_1 + 0x6e0)) {
    puVar11 = (undefined8 *)(param_1 + 0x98);
    do {
      local_68[0] = 0;
      AlgoImpl::
      IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
                (*puVar11,(longlong)*(int *)(puVar11 + 1),uVar2,local_68);
      iVar8 = iVar8 + 1;
      puVar11 = puVar11 + 0x16;
    } while (iVar8 < *(int *)(param_1 + 0x6e0));
  }
  if ((int)piVar15 != 0) {
    piVar3 = piVar12 + 1;
    do {
      if ((char)*piVar3 != '\0') {
        *(char *)piVar3 = '\0';
      }
      piVar3 = piVar3 + 2;
      uVar13 = (int)piVar15 - 1;
      piVar15 = (int *)(ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  if (piVar12 != (int *)0x0) {
    FMemory::Free(piVar12);
  }
  return;
}



// FUNCTION 14122d5d0 FUN_14122d5d0 body=1022 status=ok
// SIG undefined FUN_14122d5d0(void)

void FUN_14122d5d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint uVar13;
  int *piVar15;
  undefined1 local_68 [4];
  int local_64;
  int *local_60;
  uint local_58;
  uint local_54;
  int local_50 [2];
  longlong local_48;
  undefined1 local_40 [8];
  int *piVar14;
  
  piVar3 = (int *)0x0;
  local_60 = (int *)0x0;
  local_54 = 0;
  piVar12 = piVar3;
  piVar15 = piVar3;
  local_48 = param_2;
  if (0 < *(int *)(param_1 + 0x580)) {
    piVar9 = (int *)(param_1 + 0xa4);
    piVar14 = piVar3;
    do {
      lVar6 = (longlong)(int)piVar14 * 0xb0 + param_1;
      FUN_1422f3ff0(lVar6,local_48,1);
      uVar2 = FBoneReference::IsValidToEvaluate(lVar6,local_48);
      *(undefined1 *)((longlong)piVar9 + 6) = uVar2;
      piVar9[-1] = 0;
      if (*piVar9 != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar9 + -3,0);
      }
      iVar8 = (int)piVar15;
      if (*(char *)((longlong)piVar9 + 6) == '\0') {
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 0;
      }
      else {
        if ((char)piVar9[-0x26] == '\0') {
          iVar5 = piVar9[-0x25];
        }
        else if (piVar9[-0x27] == -1) {
          iVar5 = -1;
        }
        else {
          iVar5 = *(int *)(*(longlong *)(local_48 + 0x80) + (longlong)piVar9[-0x27] * 4);
        }
        local_58 = iVar8 + 1;
        if ((int)piVar3 < (int)local_58) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_60,piVar15);
          piVar3 = (int *)(ulonglong)local_54;
          piVar12 = local_60;
        }
        piVar12[(longlong)iVar8 * 2] = iVar5;
        *(undefined1 *)(piVar12 + (longlong)iVar8 * 2 + 1) = 1;
      }
      piVar15 = (int *)(ulonglong)local_58;
      uVar13 = (int)piVar14 + 1;
      piVar14 = (int *)(ulonglong)uVar13;
      piVar9 = piVar9 + 0x2c;
    } while ((int)uVar13 < *(int *)(param_1 + 0x580));
  }
  plVar1 = (longlong *)(param_1 + 0x590);
  *(undefined4 *)(param_1 + 0x598) = 0;
  if (*(int *)(param_1 + 0x59c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_64 = 0;
  if (0 < *(int *)(param_1 + 0x580)) {
    plVar7 = (longlong *)(param_1 + 0x90);
    local_60 = piVar12;
    do {
      lVar6 = local_48;
      if (*(char *)((longlong)plVar7 + 0x1a) != '\0') {
        lVar10 = (longlong)local_64;
        if (*local_60 == 0) {
          *plVar7 = 0;
          iVar8 = *(int *)(param_1 + 0x598);
          *(int *)(param_1 + 0x598) = iVar8 + 1;
          if (*(int *)(param_1 + 0x59c) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
          }
          *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar10 * 0xb0 + param_1;
        }
        else {
          FBoneContainer::GetParentBoneIndex(local_48,local_50,piVar12 + lVar10 * 2);
          for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2; piVar3 = piVar3 + 2
              ) {
            if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
              lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
              goto LAB_14122d80c;
            }
          }
          lVar4 = 0xffffffff;
LAB_14122d80c:
          iVar8 = (int)lVar4;
          while ((local_50[0] != 0 && (iVar8 = (int)lVar4, iVar8 == -1))) {
            piVar3 = (int *)FBoneContainer::GetParentBoneIndex(lVar6,local_40,local_50);
            local_50[0] = *piVar3;
            for (piVar3 = piVar12; piVar3 != piVar12 + (longlong)(int)piVar15 * 2;
                piVar3 = piVar3 + 2) {
              if (((char)piVar3[1] == '\x01') && (*piVar3 == local_50[0])) {
                lVar4 = (longlong)piVar3 - (longlong)piVar12 >> 3;
                goto LAB_14122d84d;
              }
            }
            lVar4 = 0xffffffff;
LAB_14122d84d:
            iVar8 = (int)lVar4;
          }
          lVar6 = lVar10 * 0xb0 + param_1;
          if (iVar8 == -1) {
            *plVar7 = 0;
            iVar8 = *(int *)(param_1 + 0x598);
            *(int *)(param_1 + 0x598) = iVar8 + 1;
            if (*(int *)(param_1 + 0x59c) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
            }
            *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar6;
          }
          else {
            lVar10 = (longlong)iVar8 * 0xb0 + param_1;
            *plVar7 = lVar10;
            iVar8 = *(int *)(lVar10 + 0xa0);
            *(int *)(lVar10 + 0xa0) = iVar8 + 1;
            if (*(int *)(lVar10 + 0xa4) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(lVar10 + 0x98),iVar8);
            }
            *(longlong *)(*(longlong *)(lVar10 + 0x98) + (longlong)iVar8 * 8) = lVar6;
          }
        }
      }
      local_64 = local_64 + 1;
      local_60 = local_60 + 2;
      plVar7 = plVar7 + 0x16;
    } while (local_64 < *(int *)(param_1 + 0x580));
  }
  iVar8 = 0;
  local_68[0] = 0;
  AlgoImpl::
  IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
            (*plVar1,(longlong)*(int *)(param_1 + 0x598),0,local_68);
  uVar2 = local_68[0];
  if (0 < *(int *)(param_1 + 0x580)) {
    puVar11 = (undefined8 *)(param_1 + 0x98);
    do {
      local_68[0] = 0;
      AlgoImpl::
      IntroSortInternal<FReferenceChainSearch::FReferenceChain_*,FIdentityFunctor,TDereferenceWrapper<FReferenceChainSearch::FReferenceChain_*,<lambda_4983a430573ee25d3894a862d99aa3c2>_>_>
                (*puVar11,(longlong)*(int *)(puVar11 + 1),uVar2,local_68);
      iVar8 = iVar8 + 1;
      puVar11 = puVar11 + 0x16;
    } while (iVar8 < *(int *)(param_1 + 0x580));
  }
  if ((int)piVar15 != 0) {
    piVar3 = piVar12 + 1;
    do {
      if ((char)*piVar3 != '\0') {
        *(char *)piVar3 = '\0';
      }
      piVar3 = piVar3 + 2;
      uVar13 = (int)piVar15 - 1;
      piVar15 = (int *)(ulonglong)uVar13;
    } while (uVar13 != 0);
  }
  if (piVar12 != (int *)0x0) {
    FMemory::Free(piVar12);
  }
  return;
}



// FUNCTION 14122d9d0 FUN_14122d9d0 body=496 status=ok
// SIG undefined FUN_14122d9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14122d9d0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined8 local_100;
  undefined1 local_f8 [192];
  ulonglong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  undefined1 *puVar9;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FUN_14148f330();
  puVar12 = (undefined1 *)0x0;
  local_2c = 0;
  local_38 = 0;
  local_30 = 0;
  if (param_1 != 0) {
    FUN_141201e70(param_1,local_f8,0);
  }
  puVar9 = local_f8;
  if (local_38 != 0) {
    puVar9 = puVar12;
  }
  puVar8 = (undefined8 *)((ulonglong)puVar9 | local_38);
  puVar9 = (undefined1 *)((longlong)local_30 & 0x1fffffffffffffff);
  if (puVar8 + local_30 < puVar8) {
    puVar9 = puVar12;
  }
  if (puVar9 != (undefined1 *)0x0) {
    do {
      FUN_14123c560(param_1,*puVar8);
      puVar12 = puVar12 + 1;
      puVar8 = puVar8 + 1;
    } while (puVar12 != puVar9);
  }
  local_108 = (longlong *)0x0;
  local_100 = 0;
  FUN_14222e300(param_1,&local_108);
  plVar2 = local_108 + (int)local_100;
  for (plVar10 = local_108; plVar10 != plVar2; plVar10 = plVar10 + 1) {
    lVar11 = *plVar10;
    if (lVar11 != 0) {
      lVar6 = AGTutorialStepVideo::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_14123c560(param_1,*(undefined8 *)(lVar11 + 0x518));
      }
    }
  }
  bVar3 = false;
  *(int *)(param_1 + 0x9a4) = *(int *)(param_1 + 0x9a4) + 1;
  iVar7 = *(int *)(param_1 + 0x9a4);
  iVar5 = *(int *)(param_1 + 0x998) + -1;
  lVar11 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar6 = lVar11 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x990);
      if (((*(int *)(lVar6 + 8 + lVar1) == 0) ||
          (plVar2 = *(longlong **)(lVar6 + lVar1), plVar2 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1), cVar4 == '\0')) {
        bVar3 = true;
      }
      lVar6 = lVar6 + -0x10;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
    iVar7 = *(int *)(param_1 + 0x9a4);
  }
  *(int *)(param_1 + 0x9a4) = iVar7 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x990),0);
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14122dbc0 FUN_14122dbc0 body=42 status=ok
// SIG undefined FUN_14122dbc0(void)

void FUN_14122dbc0(longlong param_1,undefined8 *param_2)

{
  FUN_141faaaf0();
  *(undefined8 *)(param_1 + 0x180) = *param_2;
  return;
}



// FUNCTION 14122dbf0 FUN_14122dbf0 body=42 status=ok
// SIG undefined FUN_14122dbf0(void)

void FUN_14122dbf0(longlong param_1,undefined8 *param_2)

{
  FUN_141faaaf0();
  *(undefined8 *)(param_1 + 0x9a0) = *param_2;
  return;
}



// FUNCTION 14122dc20 FUN_14122dc20 body=42 status=ok
// SIG undefined FUN_14122dc20(void)

void FUN_14122dc20(longlong param_1,undefined8 *param_2)

{
  FUN_141faaaf0();
  *(undefined8 *)(param_1 + 0x1680) = *param_2;
  return;
}



// FUNCTION 14122dc50 FUN_14122dc50 body=42 status=ok
// SIG undefined FUN_14122dc50(void)

void FUN_14122dc50(longlong param_1,undefined8 *param_2)

{
  FUN_141faaaf0();
  *(undefined8 *)(param_1 + 0x420) = *param_2;
  return;
}



// FUNCTION 14122dc80 FUN_14122dc80 body=153 status=ok
// SIG undefined FUN_14122dc80(void)

void FUN_14122dc80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  FUN_141faaaf0();
  if (*param_2 != 0) {
    *(longlong *)(param_1 + 0x590) = *param_2;
    puVar1 = (undefined8 *)
             FVector::RotateAngleAxis
                       (&DAT_1464aa7a8,local_18,*(undefined4 *)(param_1 + 0x15c),&DAT_1464aa798);
    *(undefined8 *)(param_1 + 0x264) = *puVar1;
    *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(puVar1 + 1);
    puVar1 = (undefined8 *)
             FVector::RotateAngleAxis
                       (&DAT_1464aa7b8,local_18,*(undefined4 *)(param_1 + 0x160),&DAT_1464aa798);
    *(undefined8 *)(param_1 + 0x270) = *puVar1;
    *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(puVar1 + 1);
  }
  return;
}



// FUNCTION 14122dd20 FUN_14122dd20 body=42 status=ok
// SIG undefined FUN_14122dd20(void)

void FUN_14122dd20(longlong param_1,undefined8 *param_2)

{
  FUN_141faaaf0();
  *(undefined8 *)(param_1 + 0x2d20) = *param_2;
  return;
}



// FUNCTION 14122dd50 FUN_14122dd50 body=42 status=ok
// SIG undefined FUN_14122dd50(void)

void FUN_14122dd50(longlong param_1,undefined8 *param_2)

{
  FUN_141faaaf0();
  *(undefined8 *)(param_1 + 0x890) = *param_2;
  return;
}



// FUNCTION 14122dd90 FUN_14122dd90 body=493 status=ok
// SIG undefined FUN_14122dd90(void)

ulonglong FUN_14122dd90(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1[0x127] == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  *(undefined1 *)((longlong)param_1 + 0x8c9) = 0;
  lVar4 = FUN_142eb65a0();
  if (lVar4 != 0) {
    lVar5 = FUN_1413a0ec0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (((cVar3 = FWeakObjectPtr::IsValid(lVar4 + 0x2c8), cVar3 == '\0' ||
         (lVar5 = FWeakObjectPtr::Get(lVar4 + 0x2c8), *(int *)(lVar5 + 0x170) == -1)) &&
        (*(char *)(lVar4 + 0x2d8) == '\0')))) {
      pauVar8 = (undefined1 (*) [16])param_1[0x101];
      pauVar9 = pauVar8 + (int)param_1[0x102];
      if (pauVar8 != pauVar9) {
        do {
          if ((SUB164(*pauVar8,0xc) == (int)param_1[0x113]) &&
             (SUB164(*pauVar8,8) == *(int *)(lVar4 + 0x2d0))) {
            plVar1 = *(longlong **)*pauVar8;
            if (plVar1 != (longlong *)0x0) {
              uVar6 = FUN_14301f8f0();
              lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar6);
              if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x208), lVar4 != 0)) &&
                 (lVar5 = FUN_142ebe540(param_1,param_1[0x127]), lVar5 != 0)) {
                lVar7 = FUN_141358f70();
                if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  *(undefined1 *)((longlong)param_1 + 0x8c9) = 1;
                  local_18 = 0;
                  local_10 = 0;
                  (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x11e],&local_18);
                  FUN_140f8dd50(lVar5,plVar1,*(undefined8 *)(lVar4 + 0x1d8));
                }
              }
            }
            break;
          }
          pauVar8 = pauVar8 + 1;
        } while (pauVar8 != pauVar9);
      }
    }
  }
  return (ulonglong)*(byte *)((longlong)param_1 + 0x8c9);
}



// FUNCTION 14122df80 FUN_14122df80 body=825 status=ok
// SIG undefined FUN_14122df80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14122df80(longlong *param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_178 [32];
  longlong *local_158;
  uint5 *local_150;
  undefined1 *local_148;
  longlong *local_140;
  undefined4 local_138;
  undefined1 local_128 [8];
  undefined8 local_120;
  float local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint5 local_100;
  undefined3 uStack_fb;
  float local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined1 local_e0 [40];
  undefined1 local_b8 [72];
  longlong local_70;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar5 = param_1[0x2d];
  if (lVar5 == 0) {
    puVar7 = &local_120;
    local_120 = _DAT_1468b5d90;
    local_118 = (float)DAT_1468b5d98;
  }
  else {
    puVar7 = &local_110;
    uStack_108 = *(undefined4 *)(lVar5 + 0x228);
    local_110 = *(code **)(lVar5 + 0x220);
  }
  local_120 = *puVar7;
  local_f8 = *(float *)(puVar7 + 1);
  local_118 = local_f8 - 300.0;
  _local_100 = local_120;
  local_f0 = local_120;
  local_e8 = local_f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146877438) {
    _Init_thread_header(&DAT_146877438);
    if (DAT_146877438 == -1) {
      FName::FName(&DAT_146877430,L"OakVehicleInterpolateToGround",1);
      _Init_thread_footer(&DAT_146877438);
    }
  }
  local_158 = param_1;
  FUN_1422ffb20(local_b8,DAT_146877430,local_128,0);
  FUN_1426d3dd0(local_e0);
  FUN_1426ea8d0(local_e0,2);
  FCollisionResponseContainer::SetResponse(local_e0,0,2);
  plVar1 = param_1 + 0x169;
  if (((int)param_1[0x16a] != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)*plVar1 + 0x18))();
    if (cVar3 != '\0') goto LAB_14122e1af;
  }
  uStack_108 = 0;
  local_110 = FUN_14122e2c0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_110;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_110._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_108;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_104;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_144012f78;
  }
  if (&local_110 != plVar1) {
    if (plVar4 == (longlong *)0x0) {
      if (((int)param_1[0x16a] != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar5 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar5;
        }
        *(undefined4 *)(param_1 + 0x16a) = 0;
      }
    }
    else {
      (**(code **)(*plVar4 + 0x30))(plVar4,plVar1);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
LAB_14122e1af:
  lVar5 = FUN_140a05dc0();
  local_100 = (uint5)*(uint *)(lVar5 + 4);
  lVar5 = FUN_14222e2a0(param_1);
  if (lVar5 != 0) {
    FCollisionQueryParams::AddIgnoredActor(local_b8,lVar5);
  }
  FCollisionResponseContainer::SetResponse(local_e0,0,2);
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  local_138 = (undefined4)(longlong)param_2;
  local_148 = local_b8;
  local_150 = &local_100;
  local_158 = &local_120;
  local_140 = plVar1;
  FUN_142330140(uVar6,&local_110,1,&local_f0);
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14122e2c0 FUN_14122e2c0 body=1362 status=ok
// SIG undefined FUN_14122e2c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14122e2c0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  float fVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float *pfVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1b8;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 local_1a8;
  float local_1a0;
  undefined1 local_198 [8];
  float local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined1 local_170 [24];
  byte local_158;
  undefined4 local_154;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  float local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  float local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [160];
  
  pbVar11 = *(byte **)(param_3 + 0x100);
  pbVar12 = pbVar11 + (longlong)*(int *)(param_3 + 0x108) * 0x90;
  if (pbVar11 != pbVar12) {
    pbVar10 = pbVar11 + 0x70;
    do {
      local_14c = *(undefined4 *)(pbVar10 + -100);
      local_158 = local_158 ^ (*pbVar11 ^ local_158) & 3;
      local_154 = *(undefined4 *)(pbVar10 + -0x6c);
      local_144 = *(undefined8 *)(pbVar10 + -0x5c);
      local_150 = local_150 ^ (*(uint *)(pbVar10 + -0x68) ^ local_150) & 1;
      local_13c = *(undefined4 *)(pbVar10 + -0x54);
      local_130 = *(float *)(pbVar10 + -0x48);
      local_124 = *(undefined4 *)(pbVar10 + -0x3c);
      local_118 = *(float *)(pbVar10 + -0x30);
      local_10c = *(undefined4 *)(pbVar10 + -0x24);
      local_100 = *(undefined4 *)(pbVar10 + -0x18);
      local_f8 = *(undefined4 *)(pbVar10 + -0x10);
      local_f4 = *(undefined4 *)(pbVar10 + -0xc);
      local_138 = *(undefined8 *)(pbVar10 + -0x50);
      local_f0 = *(undefined4 *)(pbVar10 + -8);
      local_12c = *(undefined8 *)(pbVar10 + -0x44);
      local_ec = *(undefined4 *)(pbVar10 + -4);
      local_120 = *(undefined8 *)(pbVar10 + -0x38);
      local_e8 = *(undefined4 *)pbVar10;
      local_114 = *(undefined8 *)(pbVar10 + -0x2c);
      local_e4 = *(undefined4 *)(pbVar10 + 4);
      local_108 = *(undefined8 *)(pbVar10 + -0x20);
      local_e0 = *(undefined4 *)(pbVar10 + 8);
      local_fc = *(undefined4 *)(pbVar10 + -0x14);
      local_d8 = *(undefined8 *)(pbVar10 + 0x10);
      local_d0 = *(undefined8 *)(pbVar10 + 0x18);
      local_148 = *(undefined4 *)(pbVar10 + -0x60);
      if (0.7 <= *(float *)(pbVar10 + -0x30)) {
        lVar8 = param_1[0x2d];
        if (lVar8 == 0) {
          local_174 = DAT_1468b5d98;
          puVar7 = &local_17c;
          local_17c = _DAT_1468b5d90;
        }
        else {
          puVar7 = (undefined8 *)&local_188;
          local_188 = *(undefined4 *)(lVar8 + 0x220);
          local_180 = *(undefined4 *)(lVar8 + 0x228);
          uStack_184 = *(undefined4 *)(lVar8 + 0x224);
        }
        uVar3 = *puVar7;
        fVar16 = *(float *)(puVar7 + 1);
        FUN_141225c00(param_1,local_198);
        if (param_1[0x2d] == 0) {
          local_1a0 = (float)DAT_1464aa7b0;
          puVar7 = &local_1a8;
          local_1a8 = DAT_1464aa7a8;
        }
        else {
          puVar7 = (undefined8 *)FUN_142369f10(param_1[0x2d],local_170);
        }
        local_1b8 = *puVar7;
        fStack_1b0 = *(float *)(puVar7 + 1);
        FRotationMatrix::MakeFromZX(local_b8,&local_120,&local_1b8);
        FQuat::FQuat(local_c8,local_b8);
        local_1c8._0_4_ = (float)uVar3;
        local_1c8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        fVar13 = local_130 - fVar16;
        if ((local_138._4_4_ - local_1c8._4_4_) * (local_138._4_4_ - local_1c8._4_4_) +
            ((float)local_138 - (float)local_1c8) * ((float)local_138 - (float)local_1c8) +
            fVar13 * fVar13 <= 90000.0) {
          local_1c0 = local_130 + local_190 * local_118;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_146877440) && (_Init_thread_header(&DAT_146877440), DAT_146877440 == -1)) {
            DAT_14687743c = (float)*(uint *)(param_3 + 0xc0);
            _Init_thread_footer(&DAT_146877440);
          }
          if (DAT_14687743c == 0.0) {
            puVar7 = (undefined8 *)FQuat::Rotator(local_c8,local_170);
            fVar16 = (float)*puVar7;
            fVar13 = (float)((ulonglong)*puVar7 >> 0x20);
            fStack_1b0 = *(float *)(puVar7 + 1);
            local_1c8 = uVar3;
          }
          else {
            lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
            fVar13 = DAT_14687743c * *(float *)(lVar8 + 0x7b0);
            if (1.0 <= fVar13) {
              fVar13 = 1.0;
            }
            fVar17 = 1.0 - fVar13;
            local_1c0 = local_1c0 * fVar13 + fVar16 * fVar17;
            local_1c8 = CONCAT44((fVar17 + fVar13) * local_1c8._4_4_,
                                 (fVar17 + fVar13) * (float)local_1c8);
            pfVar9 = (float *)FQuat::Rotator(local_c8,local_170);
            lVar8 = param_1[0x2d];
            fVar16 = *pfVar9;
            fVar1 = pfVar9[1];
            fVar2 = pfVar9[2];
            if (lVar8 == 0) {
              fVar14 = (float)DAT_1468b5da0;
              fVar15 = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
              fVar6 = DAT_1468b5da8;
            }
            else {
              fVar6 = *(float *)(lVar8 + 0x210);
              local_1b8 = *(undefined8 *)(lVar8 + 0x210);
              fStack_1b0 = *(float *)(lVar8 + 0x218);
              fStack_1ac = *(float *)(lVar8 + 0x21c);
              auVar4._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != *(float *)(lVar8 + 0x214));
              auVar4._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != fVar6);
              auVar4._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_1b0);
              auVar4._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_1ac);
              iVar5 = movmskps((int)pfVar9,auVar4);
              if (iVar5 != 0) {
                *(float *)(lVar8 + 0x250) = fVar6;
                *(float *)(lVar8 + 0x254) = *(float *)(lVar8 + 0x214);
                *(float *)(lVar8 + 600) = fStack_1b0;
                *(float *)(lVar8 + 0x25c) = fStack_1ac;
                puVar7 = (undefined8 *)FQuat::Rotator(&local_1b8,local_198);
                *(undefined8 *)(lVar8 + 0x260) = *puVar7;
                *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar7 + 1);
              }
              fVar14 = (float)*(undefined8 *)(lVar8 + 0x260);
              fVar15 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x260) >> 0x20);
              fVar6 = *(float *)(lVar8 + 0x268);
            }
            fStack_1b0 = fVar6 * fVar17 + fVar13 * fVar2;
            fVar16 = fVar14 * fVar17 + fVar13 * fVar16;
            fVar13 = fVar15 * fVar17 + fVar13 * fVar1;
            local_190 = fStack_1b0;
          }
          local_1b8 = CONCAT44(fVar13,fVar16);
          local_1a8 = local_1c8;
          local_1a0 = local_1c0;
          FUN_14223ca30(param_1,&local_1a8,&local_1b8,0,0,1);
          return;
        }
      }
      pbVar11 = pbVar11 + 0x90;
      pbVar10 = pbVar10 + 0x90;
    } while (pbVar11 != pbVar12);
  }
  return;
}



// FUNCTION 14122e820 FUN_14122e820 body=21 status=ok
// SIG undefined FUN_14122e820(void)

undefined1 FUN_14122e820(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x6b8) + 0x1c1);
  }
  return 0;
}



// FUNCTION 14122e840 FUN_14122e840 body=42 status=ok
// SIG undefined FUN_14122e840(void)

bool FUN_14122e840(longlong param_1)

{
  float fVar1;
  
  if (*(longlong *)(param_1 + 0x698) == 0) {
    return false;
  }
  fVar1 = (float)FUN_140963880();
  return 0.0 < fVar1;
}



// FUNCTION 14122e870 FUN_14122e870 body=95 status=ok
// SIG undefined FUN_14122e870(void)

bool FUN_14122e870(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x6e0);
  plVar1 = plVar2 + *(int *)(param_1 + 0x6e8);
  while( true ) {
    if (plVar2 == plVar1) {
      return false;
    }
    lVar3 = *plVar2;
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x410) == param_2)) break;
    plVar2 = plVar2 + 1;
  }
  if (*(longlong **)(lVar3 + 0x408) == (longlong *)0x0) {
    return false;
  }
  lVar3 = (**(code **)(**(longlong **)(lVar3 + 0x408) + 0x678))();
  return lVar3 != 0;
}



// FUNCTION 14122e8d0 FUN_14122e8d0 body=27 status=ok
// SIG undefined FUN_14122e8d0(void)

undefined8 FUN_14122e8d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x6c0);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),0.0 < *(float *)(lVar1 + 0x244));
  }
  return 0;
}



// FUNCTION 14122e8f0 FUN_14122e8f0 body=8 status=ok
// SIG undefined FUN_14122e8f0(void)

undefined1 FUN_14122e8f0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xbd9);
}



// FUNCTION 14122e900 FUN_14122e900 body=644 status=ok
// SIG undefined FUN_14122e900(void)

bool FUN_14122e900(float *param_1,longlong param_2,float param_3,float *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_78;
  float fStack_74;
  undefined8 local_68;
  float local_60;
  
  lVar2 = *(longlong *)(param_2 + 0x6a0);
  if (*(longlong *)(param_2 + 0x168) == 0) {
    local_60 = (float)DAT_1464aa7b0;
    puVar3 = &local_68;
    local_68 = DAT_1464aa7a8;
  }
  else {
    puVar3 = (ulonglong *)FUN_142369f10(*(longlong *)(param_2 + 0x168),&local_68);
  }
  uVar1 = *puVar3;
  fVar9 = *(float *)(puVar3 + 1);
  if ((lVar2 != 0) &&
     (fVar4 = (float)UGeometryCacheComponent::GetStartTimeOffset(lVar2), fVar4 < 0.0)) {
    local_68 = uVar1 ^ 0x8000000080000000;
    uVar1 = local_68;
    fVar9 = -fVar9;
  }
  local_60 = fVar9;
  local_68 = uVar1;
  fVar9 = local_60;
  uVar1 = local_68;
  lVar2 = *(longlong *)(param_2 + 0x168);
  if (lVar2 == 0) {
    local_68._0_4_ = DAT_1468b5d90;
    local_68._4_4_ = DAT_1468b5d94;
    local_60 = DAT_1468b5d98;
  }
  else {
    local_68._0_4_ = *(float *)(lVar2 + 0x220);
    local_68._4_4_ = *(float *)(lVar2 + 0x224);
    local_60 = *(float *)(lVar2 + 0x228);
  }
  fVar8 = *param_1 - (float)local_68;
  fVar10 = param_1[1] - local_68._4_4_;
  fVar12 = param_1[2] - local_60;
  fVar5 = fVar10 * fVar10 + fVar8 * fVar8 + fVar12 * fVar12;
  fVar4 = fVar8;
  fVar11 = fVar10;
  fVar6 = fVar12;
  if ((fVar5 != 1.0) &&
     (fVar4 = DAT_1468b5d90, fVar11 = DAT_1468b5d94, fVar6 = DAT_1468b5d98, 1e-08 <= fVar5)) {
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
    fVar4 = fVar8 * fVar6;
    fVar11 = fVar10 * fVar6;
    fVar6 = fVar12 * fVar6;
  }
  local_78 = (float)uVar1;
  fStack_74 = (float)(uVar1 >> 0x20);
  fVar4 = fVar4 * local_78 + fVar11 * fStack_74 + fVar6 * fVar9;
  fVar9 = -1.0;
  if ((-1.0 <= fVar4) && (fVar9 = fVar4, 1.0 <= fVar4)) {
    fVar9 = 1.0;
  }
  fVar9 = _guard_xfg_dispatch_icall_nop(fVar9);
  *param_4 = fVar9;
  return fVar9 <= param_3;
}



// FUNCTION 14122eb90 FUN_14122eb90 body=69 status=ok
// SIG undefined FUN_14122eb90(void)

undefined1 FUN_14122eb90(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_142d52a00(param_1 + 0x858);
  if (cVar2 != '\0') {
    uVar1 = FUN_142d52a20(param_1 + 0x858);
    uVar1 = FArchive::operator<<(uVar1);
    cVar2 = FUN_142d639f0(uVar1,2);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14122ebf0 FUN_14122ebf0 body=21 status=ok
// SIG undefined FUN_14122ebf0(void)

undefined1 FUN_14122ebf0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x6b0) + 0x280);
  }
  return 0;
}



// FUNCTION 14122ec10 FUN_14122ec10 body=19 status=ok
// SIG undefined FUN_14122ec10(void)

ulonglong FUN_14122ec10(longlong param_1)

{
  ulonglong in_RAX;
  
  if (*(longlong *)(param_1 + 0x6c8) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  return (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x6c8) + 0x260);
}



// FUNCTION 14122ec30 FUN_14122ec30 body=34 status=ok
// SIG undefined FUN_14122ec30(void)

undefined1 FUN_14122ec30(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xbd8) == '\0') {
    cVar1 = FUN_14269ca20();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14122ec70 FUN_14122ec70 body=223 status=ok
// SIG undefined FUN_14122ec70(void)

undefined8 FUN_14122ec70(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  longlong local_30 [2];
  undefined1 local_20 [8];
  longlong local_18;
  
  local_38 = *(undefined8 *)(param_2 + 0x10);
  FString::FString(local_30,param_2 + 0x18);
  puVar4 = *(undefined8 **)(param_1 + 0x540);
  puVar1 = puVar4 + *(int *)(param_1 + 0x548);
  while( true ) {
    if (puVar4 == puVar1) {
      if (local_30[0] != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_2 + 0x18) != 0) {
        FMemory::Free();
      }
      return 0;
    }
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_20,*puVar4);
    cVar2 = FSoftObjectPath::operator==(&local_38,uVar3);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') break;
    puVar4 = puVar4 + 1;
  }
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 14122ed50 FUN_14122ed50 body=12 status=ok
// SIG undefined FUN_14122ed50(void)

void FUN_14122ed50(longlong param_1)

{
  FUN_1407c3030(param_1 + 0x10a8);
  return;
}



// FUNCTION 14122ed60 FUN_14122ed60 body=19 status=ok
// SIG undefined FUN_14122ed60(void)

ulonglong FUN_14122ed60(longlong param_1,char param_2)

{
  char cVar1;
  ulonglong in_RAX;
  
  if (*(longlong *)(param_1 + 0x668) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x668) + 0x418);
  if ((cVar1 != '\0') && ((param_2 != '\0' || (cVar1 != '\x03')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14122edc0 FUN_14122edc0 body=78 status=ok
// SIG undefined FUN_14122edc0(void)

undefined1 FUN_14122edc0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142fa8b70(param_1 + 0xdc8);
  if (cVar1 != '\0') {
    cVar1 = UKismetSystemLibrary::EqualEqual_PrimaryAssetId(param_1 + 0xdd8,param_1 + 0xdc8);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14122ee30 FUN_14122ee30 body=119 status=ok
// SIG undefined FUN_14122ee30(void)

undefined8 FUN_14122ee30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1660)) {
    do {
      cVar1 = FBoneReference::IsValidToEvaluate((longlong)iVar2 * 0xb0 + param_1 + 0x3d0,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x1660));
  }
  return 1;
}



// FUNCTION 14122eeb0 FUN_14122eeb0 body=119 status=ok
// SIG undefined FUN_14122eeb0(void)

undefined8 FUN_14122eeb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x570)) {
    do {
      cVar1 = FBoneReference::IsValidToEvaluate((longlong)iVar2 * 0xb0 + param_1 + 0x2b0,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x570));
  }
  return 1;
}



// FUNCTION 14122ef30 FUN_14122ef30 body=119 status=ok
// SIG undefined FUN_14122ef30(void)

undefined8 FUN_14122ef30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2d00)) {
    do {
      cVar1 = FBoneReference::IsValidToEvaluate((longlong)iVar2 * 0xb0 + param_1 + 0x520,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x2d00));
  }
  return 1;
}



// FUNCTION 14122efb0 FUN_14122efb0 body=119 status=ok
// SIG undefined FUN_14122efb0(void)

undefined8 FUN_14122efb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x870)) {
    do {
      cVar1 = FBoneReference::IsValidToEvaluate((longlong)iVar2 * 0xb0 + param_1 + 400,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x870));
  }
  return 1;
}



// FUNCTION 14122f030 FUN_14122f030 body=127 status=ok
// SIG undefined FUN_14122f030(void)

undefined8 FUN_14122f030(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x14d) == '\0') {
    return 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xff0)) {
    do {
      cVar1 = FBoneReference::IsValidToEvaluate((longlong)iVar2 * 0xb0 + param_1 + 0x180,param_3);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xff0));
  }
  return 1;
}



// FUNCTION 14122f0b0 FUN_14122f0b0 body=20 status=ok
// SIG undefined FUN_14122f0b0(void)

bool FUN_14122f0b0(void)

{
  int iVar1;
  
  iVar1 = FUN_1412278a0();
  return iVar1 != -1;
}



// FUNCTION 14122f0d0 FUN_14122f0d0 body=52 status=ok
// SIG undefined FUN_14122f0d0(void)

ulonglong FUN_14122f0d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *in_RAX;
  
  if (param_2 != 0) {
    in_RAX = *(longlong **)(param_1 + 0xec0);
    plVar1 = in_RAX + *(int *)(param_1 + 0xec8);
    for (; in_RAX != plVar1; in_RAX = in_RAX + 1) {
      if (*in_RAX == param_2) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14122f110 FUN_14122f110 body=145 status=ok
// SIG undefined FUN_14122f110(void)

ulonglong FUN_14122f110(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0xec0);
  uVar4 = (ulonglong)*(int *)(param_1 + 0xec8);
  plVar1 = plVar6 + uVar4;
  do {
    if (plVar6 == plVar1) {
      return uVar4 & 0xffffffffffffff00;
    }
    lVar3 = *plVar6;
    if (lVar3 != 0) {
      lVar5 = FUN_1413ffe00();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar2 = *(int *)(lVar5 + 0x90);
      uVar4 = (longlong)iVar2;
      if ((*(int *)(lVar3 + 0x90) < iVar2) ||
         (uVar4 = *(ulonglong *)(lVar3 + 0x88),
         *(longlong *)(uVar4 + (longlong)iVar2 * 8) != lVar5 + 0x88)) {
        uVar4 = uVar4 & 0xffffffffffffff00;
      }
      else {
        uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      }
      if ((char)uVar4 != '\0') {
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 14122f1b0 FUN_14122f1b0 body=35 status=ok
// SIG undefined FUN_14122f1b0(void)

ulonglong FUN_14122f1b0(longlong param_1,longlong param_2)

{
  longlong *in_RAX;
  
  if (*(int *)(param_1 + 0xec8) == 1) {
    in_RAX = *(longlong **)(param_1 + 0xec0);
    if ((*in_RAX != 0) && (*in_RAX == param_2)) {
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14122f1e0 FUN_14122f1e0 body=116 status=ok
// SIG undefined FUN_14122f1e0(void)

ulonglong FUN_14122f1e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((((*(char *)(param_1 + 0x95a) != '\0') && (*(longlong *)(param_1 + 0x8d8) == 0)) &&
      (*(char *)(param_1 + 0x8f2) == '\0')) && (lVar2 = *(longlong *)(param_1 + 0x490), lVar2 != 0))
  {
    lVar3 = FUN_14145f370();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(lVar2 + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(lVar2 + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14122f280 CanAccept body=39 status=ok
// SIG undefined CanAccept(void)

undefined1 UDrawAndRevolveTool::CanAccept(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x150) != 0) {
    cVar1 = FUN_141274520();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14122f2b0 FUN_14122f2b0 body=12 status=ok
// SIG undefined FUN_14122f2b0(void)

void FUN_14122f2b0(longlong param_1)

{
  FUN_1407c3030(param_1 + 0x12f0);
  return;
}



// FUNCTION 14122f2c0 FUN_14122f2c0 body=72 status=ok
// SIG undefined FUN_14122f2c0(void)

void FUN_14122f2c0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_141477fa0();
  lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
  if (lVar2 != 0) {
    FUN_140eb2eb0(lVar2,*(undefined1 *)(param_1 + 0x38),DAT_146876ff0);
  }
  return;
}



// FUNCTION 14122f350 FUN_14122f350 body=232 status=ok
// SIG undefined FUN_14122f350(void)

void FUN_14122f350(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146877408) && (_Init_thread_header(&DAT_146877408), DAT_146877408 == -1))
  {
    FName::FName(&DAT_146877400,L"AOakVehicle::LockAllSeat",1);
    _Init_thread_footer(&DAT_146877408);
  }
  plVar1 = *(longlong **)(param_1 + 0x6e0);
  uVar3 = 0;
  uVar2 = (longlong)*(int *)(param_1 + 0x6e8) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x6e8) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_142df3080(*plVar1,param_2,DAT_146877400);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 14122f440 FUN_14122f440 body=31 status=ok
// SIG undefined FUN_14122f440(void)

void FUN_14122f440(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_142dafbc0(param_1 + 0x12f0,local_res10);
  return;
}



// FUNCTION 14122f460 FUN_14122f460 body=400 status=ok
// SIG undefined FUN_14122f460(void)

void FUN_14122f460(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong *local_48;
  ulonglong local_40;
  
  uVar5 = 0;
  if (*(char *)(param_1 + 0x957) == '\0') {
    plVar1 = (longlong *)(param_1 + 0x958);
    *(undefined4 *)(param_1 + 0x960) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x964)) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_14222dd40(param_1 + -0x580,&local_48,0);
    if (*(int *)(param_1 + 0x964) < (int)local_40) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1,local_40 & 0xffffffff);
    }
    uVar4 = (ulonglong)((longlong)(local_48 + (int)local_40) + (7 - (longlong)local_48)) >> 3;
    if (local_48 + (int)local_40 < local_48) {
      uVar4 = uVar5;
    }
    plVar6 = local_48;
    uVar8 = uVar5;
    if (uVar4 != 0) {
      do {
        iVar2 = *(int *)(param_1 + 0x960);
        uVar3 = *(undefined4 *)(*plVar6 + 0xc);
        *(int *)(param_1 + 0x960) = iVar2 + 1;
        if (*(int *)(param_1 + 0x964) < iVar2 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        uVar8 = uVar8 + 1;
        *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
        plVar6 = plVar6 + 1;
      } while (uVar8 != uVar4);
    }
    *(undefined1 *)(param_1 + 0x957) = 1;
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  if (param_3 != '\0') {
    FCollisionQueryParams::AddIgnoredActor(param_2,param_1 + -0x580);
  }
  puVar7 = *(undefined4 **)(param_1 + 0x958);
  uVar4 = (longlong)*(int *)(param_1 + 0x960) & 0x3fffffffffffffff;
  if (puVar7 + *(int *)(param_1 + 0x960) < puVar7) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      FCollisionQueryParams::AddIgnoredActor(param_2,*puVar7);
      uVar5 = uVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



// FUNCTION 14122f5f0 FUN_14122f5f0 body=35 status=ok
// SIG undefined FUN_14122f5f0(void)

ulonglong FUN_14122f5f0(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  
  if (param_2 != 0) {
    in_RAX = *(ulonglong *)(param_1 + 0x58);
    if ((in_RAX != 0) && (in_RAX == *(ulonglong *)(param_2 + 0x58))) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14122f670 FUN_14122f670 body=363 status=ok
// SIG undefined FUN_14122f670(void)

void FUN_14122f670(undefined8 param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  longlong local_res18 [2];
  int local_28;
  int local_24;
  longlong local_20;
  
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UOakVehicleAnimInstance::OwnerPostBeginPlay",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(local_res18,pwVar4 + 2,1);
  lVar7 = FUN_142269f40(param_1);
  plVar1 = (longlong *)(lVar7 + 0x408);
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res18[0];
  if ((local_res18[0] != 0) && (lVar8 = FWeakObjectPtr::Get(&local_28), lVar8 != 0)) {
    UObject::FindFunction(lVar8,local_20);
  }
  piVar9 = (int *)*plVar1;
  iVar2 = *(int *)(lVar7 + 0x410);
  piVar10 = piVar9;
  do {
    if (piVar10 == piVar9 + (longlong)iVar2 * 4) {
LAB_14122f78d:
      iVar2 = *(int *)(lVar7 + 0x410);
      *(int *)(lVar7 + 0x410) = iVar2 + 1;
      if (*(int *)(lVar7 + 0x414) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar9 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar9 = local_28;
      piVar9[1] = local_24;
      *(longlong *)(piVar9 + 2) = local_20;
LAB_14122f7c6:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      return;
    }
    if ((((*piVar10 == local_28) && (piVar10[1] == local_24)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar10), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
       (*(longlong *)(piVar10 + 2) == local_20)) {
      if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_14122f7c6;
      goto LAB_14122f78d;
    }
    piVar10 = piVar10 + 4;
  } while( true );
}



// FUNCTION 14122f7f0 FUN_14122f7f0 body=239 status=ok
// SIG undefined FUN_14122f7f0(void)

void FUN_14122f7f0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  *(undefined1 *)(param_1 + 0x444) = *(undefined1 *)(param_1 + 0x445);
  bVar5 = false;
  lVar3 = FUN_142269f40();
  if (lVar3 != 0) {
    lVar4 = FUN_1412f6630();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(longlong *)(lVar3 + 0x4e0) == 0) {
        bVar5 = false;
      }
      else {
        bVar5 = *(char *)(*(longlong *)(lVar3 + 0x4e0) + 0x4fb) == '\x02';
        if (bVar5) {
          cVar2 = (*(char *)(param_1 + 0x44a) == '\x01') + '\x01';
          goto LAB_14122f884;
        }
      }
    }
  }
  cVar2 = '\0';
LAB_14122f884:
  *(char *)(param_1 + 0x445) = cVar2;
  cVar2 = *(char *)(param_1 + 0x445);
  *(bool *)(param_1 + 0x44a) = bVar5;
  *(bool *)(param_1 + 0x446) = cVar2 == '\0';
  *(bool *)(param_1 + 0x447) = cVar2 == '\x01';
  *(bool *)(param_1 + 0x448) = cVar2 == '\x02';
  *(bool *)(param_1 + 0x449) = cVar2 == '\x03';
  return;
}



// FUNCTION 14122f8e0 FUN_14122f8e0 body=468 status=ok
// SIG undefined FUN_14122f8e0(void)

void FUN_14122f8e0(longlong param_1)

{
  longlong lVar1;
  float local_18 [4];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *(longlong *)(param_1 + 0xb40);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x290) == 10)) {
    if (*(char *)(param_1 + 0x12f1) == '\0') {
      if (*(char *)(param_1 + 0x12f0) == '\0') {
        return;
      }
      if (*(longlong *)(param_1 + 0x1308) == 0) {
        return;
      }
      if (*(longlong *)(param_1 + 0x1310) == 0) {
        return;
      }
      lVar1 = *(longlong *)(lVar1 + 0x288);
    }
    else {
      if (*(longlong *)(param_1 + 0x12f8) == 0) {
        return;
      }
      if (*(longlong *)(param_1 + 0x1300) == 0) {
        return;
      }
      if (*(longlong *)(param_1 + 0x1308) == 0) {
        return;
      }
      if (*(longlong *)(param_1 + 0x1310) == 0) {
        return;
      }
      local_18[0] = (float)FUN_140964710(**(undefined8 **)(lVar1 + 0x288));
      local_18[0] = local_18[0] / *(float *)(param_1 + 0x1318);
      local_18[1] = 0.0;
      local_18[2] = 0.0;
      local_18[3] = 1.0;
      FUN_1425a2be0(*(undefined8 *)(param_1 + 0x12f8),*(undefined8 *)(param_1 + 0x1320),local_18);
      local_18[0] = (float)FUN_140964710(*(undefined8 *)
                                          (*(longlong *)(*(longlong *)(param_1 + 0xb40) + 0x288) + 8
                                          ));
      local_18[0] = local_18[0] / *(float *)(param_1 + 0x1318);
      local_18[1] = 0.0;
      local_18[2] = 0.0;
      local_18[3] = 1.0;
      FUN_1425a2be0(*(undefined8 *)(param_1 + 0x1300),*(undefined8 *)(param_1 + 0x1320),local_18);
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb40) + 0x288);
    }
    local_18[0] = (float)FUN_140964710(*(undefined8 *)(lVar1 + 0x30));
    local_18[0] = local_18[0] / *(float *)(param_1 + 0x1318);
    local_18[1] = 0.0;
    local_18[2] = 0.0;
    local_18[3] = 1.0;
    FUN_1425a2be0(*(undefined8 *)(param_1 + 0x1308),*(undefined8 *)(param_1 + 0x1320),local_18);
    local_18[0] = (float)FUN_140964710(*(undefined8 *)
                                        (*(longlong *)(*(longlong *)(param_1 + 0xb40) + 0x288) +
                                        0x38));
    local_18[0] = local_18[0] / *(float *)(param_1 + 0x1318);
    local_18[1] = 0.0;
    local_18[2] = 0.0;
    local_18[3] = 1.0;
    FUN_1425a2be0(*(undefined8 *)(param_1 + 0x1310),*(undefined8 *)(param_1 + 0x1320),local_18);
  }
  return;
}



// FUNCTION 14122fac0 FUN_14122fac0 body=1786 status=ok
// SIG undefined FUN_14122fac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14122fac0(longlong *param_1,float param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  float *pfVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_188 [32];
  uint local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_138;
  float local_130;
  longlong local_128 [2];
  longlong local_118;
  undefined4 local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  code *local_f8;
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  plVar8 = (longlong *)param_1[0x167];
  if (plVar8 != (longlong *)0x0) {
    if ((char)param_1[0x363] == '\0') {
      pwVar3 = _guard_xfg_dispatch_icall_nop
                         (L"&UOutrunnerVehicleAnimInstance::OnPrimaryOccupantEnter",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_138,pwVar2 + 2,1);
      FUN_14074ba20(param_1[0x167] + 0x9a8,param_1,FUN_141234180,local_138);
      pwVar3 = _guard_xfg_dispatch_icall_nop
                         (L"&UOutrunnerVehicleAnimInstance::OnPrimaryOccupantExit",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_138,pwVar2 + 2,1);
      FUN_14074ba20(param_1[0x167] + 0x9b8,param_1,FUN_1412341e0,local_138);
      plVar8 = (longlong *)param_1[0x167];
      *(undefined1 *)(param_1 + 0x363) = 1;
    }
    if (plVar8 != (longlong *)0x0) {
      local_130 = *(float *)((longlong)plVar8 + 0xbf4);
      uVar9 = *(undefined8 *)((longlong)plVar8 + 0xbec);
      pfVar4 = (float *)(**(code **)(*plVar8 + 0x308))(plVar8,local_128);
      fVar13 = (float)((ulonglong)uVar9 >> 0x20) - pfVar4[1];
      fVar12 = (float)uVar9 - *pfVar4;
      local_138 = uVar9;
      if (810000.0 <=
          fVar13 * fVar13 + fVar12 * fVar12 + (local_130 - pfVar4[2]) * (local_130 - pfVar4[2])) {
        fVar12 = (*(float *)(param_1[0x167] + 0x78c) - 900.0) * 0.000625;
        if (0.0 <= fVar12) {
          if (1.0 <= fVar12) {
            fVar12 = 1.0;
          }
        }
        else {
          fVar12 = 0.0;
        }
        *(float *)(param_1 + 0x268) = fVar12 * 0.8 + 0.2;
        if (*(char *)((longlong)param_1 + 0x1b19) == '\0') {
          puVar5 = (undefined8 *)FName::FName(&local_138,"VehicleBody",1);
          local_148 = 0;
          local_150 = 0xbf800000;
          local_158 = 1;
          local_160 = 0x3f800000;
          local_168 = 0x3e4ccccd;
          lVar6 = FUN_14227a0e0(param_1,param_1[0x265],*puVar5,0);
          if (lVar6 != 0) {
            *(undefined1 *)((longlong)param_1 + 0x1b19) = 1;
            lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
            if (*(longlong *)(lVar7 + 400) == 0) {
              uVar9 = *(undefined8 *)(lVar7 + 0x3f8);
            }
            else {
              uVar9 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
            }
            uVar11 = FUN_14225ae40(lVar6);
            plVar8 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar8 != (longlong *)0x0) {
              *plVar8 = (longlong)&PTR_FUN_143f4d170;
              FWeakObjectPtr::operator=(plVar8 + 1,param_1);
              plVar8[2] = (longlong)&LAB_141231fd0;
              lVar6 = FDelegateHandle::GenerateNewID();
              plVar8[4] = lVar6;
              *plVar8 = (longlong)&PTR_FUN_143f4d1b8;
            }
            local_118 = 0;
            local_110 = 0;
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x30))(plVar8,&local_118);
            }
            FWeakObjectPtr::operator=(local_108,0);
            local_160 = 0xbf800000;
            local_100 = 0;
            local_c8 = (longlong *)0x0;
            local_b8 = 0;
            local_f8 = AK::MemoryMgr::StartProfileThreadUsage;
            local_168 = local_168 & 0xffffff00;
            FUN_142880850(uVar9,param_1 + 0x364,&local_118,uVar11);
            if (local_b8 != 0) {
              plVar10 = local_e8;
              if (local_c8 != (longlong *)0x0) {
                plVar10 = local_c8;
              }
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x10))(plVar10,0);
              }
            }
            if (local_c8 != (longlong *)0x0) {
              FMemory::Free();
            }
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_118);
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x28))(plVar8,0);
              lVar6 = FMemory::Realloc(plVar8,0,0);
              if (lVar6 != 0) {
                FMemory::Free(lVar6);
              }
            }
          }
        }
      }
      fVar12 = (float)FUN_140a23120(*(float *)(param_1[0x167] + 0x784) * 0.01,0xc,0xe);
      if (((int)fVar12 == 0) && (*(char *)((longlong)param_1 + 0x1b1a) == '\0')) {
        fVar12 = *(float *)(param_1 + 0x362);
        *(undefined1 *)((longlong)param_1 + 0x1b1a) = 1;
        if (0.0 <= fVar12) {
          if (1.0 <= fVar12) {
            fVar12 = 1.0;
          }
        }
        else {
          fVar12 = 0.0;
        }
        *(float *)((longlong)param_1 + 0x1344) = fVar12;
        if (*(int *)((longlong)param_1 + 0x1b14) < 1) {
          lVar6 = param_1[0x266];
        }
        else {
          lVar6 = param_1[0x267];
        }
        puVar5 = (undefined8 *)FName::FName(&local_138,"VehicleAccel",1);
        local_148 = 0;
        local_150 = 0xbf800000;
        local_158 = 1;
        local_160 = 0x3f4ccccd;
        local_168 = 0x3dcccccd;
        lVar6 = FUN_14227a0e0(param_1,lVar6,*puVar5,0);
        if (lVar6 != 0) {
          lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
          if (*(longlong *)(lVar7 + 400) == 0) {
            uVar9 = *(undefined8 *)(lVar7 + 0x3f8);
          }
          else {
            uVar9 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
          }
          uVar11 = FUN_14225ae40(lVar6);
          plVar8 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = (longlong)&PTR_FUN_143f4d170;
            FWeakObjectPtr::operator=(plVar8 + 1,param_1);
            plVar8[2] = (longlong)&LAB_141230c00;
            lVar6 = FDelegateHandle::GenerateNewID();
            plVar8[4] = lVar6;
            *plVar8 = (longlong)&PTR_FUN_143f4d1b8;
          }
          local_118 = 0;
          local_110 = 0;
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x30))(plVar8,&local_118);
          }
          FWeakObjectPtr::operator=(local_108,0);
          local_160 = 0xbf800000;
          local_100 = 0;
          local_c8 = (longlong *)0x0;
          local_b8 = 0;
          local_f8 = AK::MemoryMgr::StartProfileThreadUsage;
          local_168 = local_168 & 0xffffff00;
          FUN_142880850(uVar9,param_1 + 0x365,&local_118,uVar11);
          if (local_b8 != 0) {
            plVar10 = local_e8;
            if (local_c8 != (longlong *)0x0) {
              plVar10 = local_c8;
            }
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x10))(plVar10,0);
            }
          }
          if (local_c8 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_118);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x28))(plVar8,0);
            lVar6 = FMemory::Realloc(plVar8,0,0);
            if (lVar6 != 0) {
              FMemory::Free(lVar6);
            }
          }
        }
        *(undefined4 *)(param_1 + 0x362) = 0;
        *(undefined1 *)((longlong)param_1 + 0x1b1b) = 1;
      }
      else if (((*(longlong *)(param_1[0x167] + 0x698) != 0) &&
               (fVar12 = (float)FUN_140963880(), 0.0 < fVar12)) ||
              (*(char *)((longlong)param_1 + 0x1b1b) != '\0')) {
        *(float *)(param_1 + 0x362) = param_2 * 0.5 + *(float *)(param_1 + 0x362);
        *(undefined4 *)((longlong)param_1 + 0x1b14) = *(undefined4 *)(param_1[0x167] + 0x7a4);
      }
      else {
        *(undefined4 *)(param_1 + 0x362) = 0;
        *(undefined1 *)((longlong)param_1 + 0x1b1a) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1412301c0 FUN_1412301c0 body=1745 status=ok
// SIG undefined FUN_1412301c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412301c0(longlong *param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  undefined1 *local_280;
  undefined4 local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined1 local_258 [8];
  float local_250;
  float local_24c;
  float local_248;
  undefined8 local_240;
  float local_238;
  float local_230;
  float local_22c;
  float local_228;
  undefined1 local_220 [8];
  float local_218;
  undefined1 local_208 [12];
  undefined4 local_1fc;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  undefined1 local_178 [16];
  undefined1 local_168;
  undefined1 local_164;
  longlong local_130;
  longlong local_110;
  undefined1 local_f8 [24];
  float local_e0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  plVar1 = (longlong *)param_1[0x167];
  if (plVar1 != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[0x264];
    if (plVar4 == (longlong *)0x0) {
      FUN_142a07000();
      plVar4 = (longlong *)(**(code **)(*plVar1 + 0x628))(plVar1);
      param_1[0x264] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop(local_208,0,0x90);
      local_1fc = 0x3f800000;
      (**(code **)(*plVar4 + 0x428))(plVar4,&local_250,DAT_146876fd0);
      lVar7 = param_1[0x264];
      fVar14 = *(float *)(lVar7 + 0x214);
      fVar12 = -*(float *)(lVar7 + 0x210);
      fVar12 = fVar12 + fVar12;
      fVar13 = fVar14 + fVar14;
      fVar11 = *(float *)(param_1 + 0x25e);
      local_238 = fVar11 * ((fVar12 * *(float *)(lVar7 + 0x210) - fVar13 * fVar14) + 1.0) +
                  local_248;
      local_240 = CONCAT44(local_24c +
                           fVar11 * (fVar13 * *(float *)(lVar7 + 0x218) +
                                    fVar12 * *(float *)(lVar7 + 0x21c)),
                           local_250 +
                           (fVar13 * *(float *)(lVar7 + 0x21c) - fVar12 * *(float *)(lVar7 + 0x218))
                           * fVar11);
      fVar14 = *(float *)(lVar7 + 0x214);
      fVar13 = -*(float *)(lVar7 + 0x210);
      fVar12 = fVar14 + fVar14;
      fVar13 = fVar13 + fVar13;
      fVar11 = *(float *)((longlong)param_1 + 0x12f4);
      local_228 = local_248 -
                  ((*(float *)(lVar7 + 0x210) * fVar13 - fVar12 * fVar14) + 1.0) * fVar11;
      local_230 = local_250 -
                  (*(float *)(lVar7 + 0x21c) * fVar12 - *(float *)(lVar7 + 0x218) * fVar13) * fVar11
      ;
      local_22c = local_24c -
                  (*(float *)(lVar7 + 0x21c) * fVar13 + fVar12 * *(float *)(lVar7 + 0x218)) * fVar11
      ;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146877128) &&
         (_Init_thread_header(&DAT_146877128), DAT_146877128 == -1)) {
        FName::FName(&DAT_146877120,L"LineTraceSingleByProfile",1);
        _Init_thread_footer(&DAT_146877128);
      }
      local_288 = 0;
      FUN_1422ffb20(local_178,DAT_146877120,local_258,0);
      local_164 = 0;
      local_168 = 1;
      FCollisionQueryParams::AddIgnoredActor(local_178,param_1[0x167]);
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      local_280 = local_178;
      local_288 = param_1[0x25f];
      cVar2 = FUN_1423420a0(uVar5,local_208,&local_240,&local_230);
      if ((cVar2 != '\0') && (iVar3 = FUN_1430d6f90(param_1[0x167]), iVar3 == 0)) {
        (**(code **)(*(longlong *)param_1[0x264] + 0x420))
                  ((longlong *)param_1[0x264],local_f8,DAT_146876fd0,2);
        local_1f4 = local_1f4 - local_250;
        local_1f0 = local_1f0 - local_24c;
        local_248 = local_248 - (local_e0 + *(float *)(param_1[0x167] + 0xeb0));
        local_1ec = local_1ec - local_248;
        lVar7 = *(longlong *)(param_1[0x167] + 0x168);
        if (lVar7 == 0) {
          fVar13 = 1.0;
          fVar11 = 0.0;
          fVar14 = 0.0;
          fVar12 = 0.0;
        }
        else {
          fVar11 = *(float *)(lVar7 + 0x210);
          fVar14 = *(float *)(lVar7 + 0x214);
          fVar12 = *(float *)(lVar7 + 0x218);
          fVar13 = *(float *)(lVar7 + 0x21c);
        }
        fVar12 = -fVar12;
        fVar11 = -fVar11;
        fVar14 = -fVar14;
        fVar10 = fVar14 * local_1ec - fVar12 * local_1f0;
        fVar9 = fVar12 * local_1f4 - fVar11 * local_1ec;
        fVar10 = fVar10 + fVar10;
        fVar8 = fVar11 * local_1f0 - fVar14 * local_1f4;
        fVar9 = fVar9 + fVar9;
        fVar8 = fVar8 + fVar8;
        local_218 = (fVar11 * fVar9 - fVar14 * fVar10) + fVar13 * fVar8 + local_1ec;
        param_1[0x265] =
             CONCAT44((fVar12 * fVar10 - fVar11 * fVar8) + fVar13 * fVar9 + local_1f0,
                      (fVar14 * fVar8 - fVar12 * fVar9) + fVar13 * fVar10 + local_1f4);
        *(float *)(param_1 + 0x266) = local_218;
        *(undefined4 *)((longlong)param_1 + 0x132c) = 0;
      }
      if (local_110 != 0) {
        FMemory::Free();
      }
      if (local_130 != 0) {
        FMemory::Free();
      }
    }
    fVar11 = (float)FUN_14225e8a0(param_1,DAT_146876fd8);
    *(bool *)(param_1 + 0x267) = 0.0 < fVar11;
    if (0.0 < *(float *)((longlong)param_1 + 0x1334)) {
      *(float *)((longlong)param_1 + 0x1334) = *(float *)((longlong)param_1 + 0x1334) - param_2;
    }
    plVar1 = (longlong *)param_1[0x167];
    local_238 = *(float *)((longlong)plVar1 + 0xbf4);
    uVar5 = *(undefined8 *)((longlong)plVar1 + 0xbec);
    pfVar6 = (float *)(**(code **)(*plVar1 + 0x308))(plVar1,local_220);
    local_240._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
    if ((900.0 <= SQRT((float)uVar5 * (float)uVar5 + local_240._4_4_ * local_240._4_4_ +
                       local_238 * local_238) -
                  SQRT(*pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1] + pfVar6[2] * pfVar6[2])) &&
       (*(float *)((longlong)param_1 + 0x1334) <= 0.0)) {
      local_278 = *(undefined4 *)((longlong)param_1 + 0x1314);
      local_268 = 0;
      local_270 = 0xbf800000;
      local_280 = (undefined1 *)CONCAT44(local_280._4_4_,(int)param_1[0x262]);
      local_288 = CONCAT44(local_288._4_4_,*(undefined4 *)((longlong)param_1 + 0x130c));
      local_240 = uVar5;
      lVar7 = FUN_14227a0e0(param_1,param_1[0x260],param_1[0x263],(int)param_1[0x261]);
      if (lVar7 != 0) {
        *(float *)((longlong)param_1 + 0x1334) =
             *(float *)(lVar7 + 0x90) / *(float *)(param_1 + 0x262);
      }
    }
  }
  return;
}



// FUNCTION 1412308a0 FUN_1412308a0 body=563 status=ok
// SIG undefined FUN_1412308a0(void)

void FUN_1412308a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  FUN_141215280(param_1,0xfb);
  lVar6 = *(longlong *)(param_1 + 0x490);
  if (lVar6 != 0) {
    lVar5 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14123090f;
  }
  lVar6 = 0;
LAB_14123090f:
  FUN_141242150(param_1,lVar6);
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    FUN_1430cfcb0();
  }
  iVar4 = *(int *)(param_1 + 0x6fc);
  lVar6 = *(longlong *)(param_1 + 0x6f0);
  iVar7 = *(int *)(param_1 + 0x6f8);
  if (iVar4 < 0) {
    if (iVar7 != 0) {
      do {
        FUN_1412094e0(lVar6);
        lVar6 = lVar6 + 0x20;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar4 = *(int *)(param_1 + 0x6fc);
    }
    *(undefined4 *)(param_1 + 0x6f8) = 0;
    if (iVar4 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                ((longlong *)(param_1 + 0x6f0),0);
    }
  }
  else {
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_1412094e0(lVar6);
      lVar6 = lVar6 + 0x20;
    }
    *(undefined4 *)(param_1 + 0x6f8) = 0;
  }
  if (*(longlong *)(param_1 + 0x690) != 0) {
    Z_Construct_UClass_ADamageableActor_Statics::NewProp_Invincible_SetBit();
  }
  if (*(longlong *)(param_1 + 0x12b0) != 0) {
    FUN_141275160();
  }
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x400))();
  }
  plVar1 = *(longlong **)(param_1 + 0x698);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x628))(plVar1);
    (**(code **)(*plVar1 + 0x620))(plVar1);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar6 = *(longlong *)(param_1 + 0x490);
  if (lVar6 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar6 = *(longlong *)(lVar6 + 0x528), lVar6 != 0)) {
      lVar5 = FUN_142fd5420();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar2 = *(undefined8 *)(lVar6 + 0x468);
        FUN_142fcc0b0(lVar6,uVar2,0xbf800000,0);
        *(undefined1 *)(param_1 + 0x12e8) = 1;
        FUN_142fccb00(lVar6,uVar2,0xbf800000,1);
      }
    }
  }
  return;
}



// FUNCTION 141230ae0 FUN_141230ae0 body=127 status=ok
// SIG undefined FUN_141230ae0(void)

undefined8 FUN_141230ae0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = FUN_140e82370(lVar2 + 0x1b10,*(undefined4 *)(param_1 + 0x898));
      return uVar4;
    }
  }
  return 0xffffffff;
}



// FUNCTION 141230b60 FUN_141230b60 body=64 status=ok
// SIG undefined FUN_141230b60(void)

undefined8 FUN_141230b60(longlong param_1,longlong param_2)

{
  if ((*(int *)(param_1 + 0x3ec) == 2) && (*(longlong *)(param_2 + 8) == DAT_146876d00)) {
    FUN_142eb96e0(*(undefined8 *)(*(longlong *)(param_1 + 0x200) + 0x1e0),
                  *(undefined4 *)(param_2 + 4));
    return 1;
  }
  return 0;
}



// FUNCTION 141230ba0 FUN_141230ba0 body=90 status=ok
// SIG undefined FUN_141230ba0(void)

void FUN_141230ba0(longlong param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0x744) == '\0') && (0 < *(int *)(param_1 + 0x768))) {
    fVar1 = (float)ACharacter::GetAnimRootMotionTranslationScale(*(undefined8 *)(param_1 + 0x698));
    if (0.9 < fVar1) {
      *(float *)(param_1 + 0x7a0) =
           *(float *)(*(longlong *)(param_1 + 0x760) + -4 + (longlong)*(int *)(param_1 + 0x768) * 4)
           * 100.0;
    }
  }
  return;
}



// FUNCTION 141230c20 FUN_141230c20 body=18 status=ok
// SIG undefined FUN_141230c20(void)

undefined4 FUN_141230c20(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x8c4) = 1;
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141230c40 FUN_141230c40 body=239 status=ok
// SIG undefined FUN_141230c40(void)

void FUN_141230c40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong local_28 [4];
  
  *(undefined1 *)(param_1 + 0x8c8) = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x90) != 0) {
    lVar1 = FUN_1411e11d0(*(longlong *)(DAT_146b33f38 + 0x90),param_3);
    if (lVar1 != 0) {
      FName::ToString(lVar1 + 0x28,local_28 + 2);
    }
  }
  if (*(longlong *)(param_1 + 0x728) == 0) {
    FUN_14123d4b0(param_1);
  }
  else {
    FUN_142088cf0(*(longlong *)(param_1 + 0x728),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  FString::AppendInt(local_28,param_4);
  FUN_142f0fdc0(param_1 + 0x7c0,local_28,1,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141230d30 FUN_141230d30 body=268 status=ok
// SIG undefined FUN_141230d30(void)

void FUN_141230d30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_238 [2];
  undefined1 local_228 [272];
  undefined1 local_118 [272];
  
  *(undefined1 *)(param_1 + 0x8c8) = 0;
  uVar1 = FUN_141227990();
  FUN_1411e38c0(local_228,param_3,uVar1);
  if (*(longlong *)(param_1 + 0x720) != 0) {
    uVar1 = FUN_140e9a4f0(local_118,local_228);
    FUN_141240ff0(param_1,*(undefined8 *)(param_1 + 0x720),uVar1);
  }
  if (*(longlong *)(param_1 + 0x728) == 0) {
    FUN_14123d4b0(param_1);
  }
  else {
    local_238[0] = 0;
    local_238[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_238,0);
    FGenericPlatformString::Memcpy(local_238[0],L"itemCard",0x12);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x728),local_238);
    if (local_238[0] != 0) {
      FMemory::Free();
    }
  }
  local_238[0] = 0;
  local_238[1] = 0;
  FUN_142f0fdc0(param_1 + 0x7c0,local_238,1,0);
  if (local_238[0] != 0) {
    FMemory::Free();
  }
  FUN_140e9c360(local_228);
  return;
}



// FUNCTION 141230e50 FUN_141230e50 body=443 status=ok
// SIG undefined FUN_141230e50(void)

void FUN_141230e50(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_78 [3];
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  longlong *local_30;
  longlong local_20;
  
  *(undefined1 *)(param_1 + 0x8c8) = 0;
  lVar5 = FUN_1412282a0(param_1,local_58,param_4,param_3);
  local_78[2] = *(longlong *)(lVar5 + 0x38);
  *(undefined8 *)(lVar5 + 0x38) = 0;
  local_60 = *(undefined4 *)(lVar5 + 0x40);
  local_5c = *(undefined4 *)(lVar5 + 0x44);
  *(undefined8 *)(lVar5 + 0x40) = 0;
  if (local_20 != 0) {
    FMemory::Free();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x728) == 0) {
    FUN_14123d4b0(param_1);
  }
  else {
    FUN_142088cf0(*(longlong *)(param_1 + 0x728),local_78 + 2);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_142f0fdc0(param_1 + 0x7c0,local_78,1,0);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (param_4 < *(int *)(param_1 + 0x870)) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x868) + (longlong)param_4 * 8);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x10), lVar5 != 0)) {
      lVar6 = FUN_1413a0f70();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_14122a150(lVar5,*(undefined4 *)(lVar5 + 0x170));
      }
    }
  }
  if (local_78[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141231020 FUN_141231020 body=228 status=ok
// SIG undefined FUN_141231020(void)

void FUN_141231020(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar6 = uVar5;
  if (0 < *(int *)(param_1 + 0x198)) {
    do {
      plVar1 = *(longlong **)(uVar6 + *(longlong *)(param_1 + 400));
      if (plVar1 != (longlong *)0x0) {
        lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          (**(code **)(*plVar1 + 0x288))(plVar1);
        }
        *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 400)) = 0;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar6 = uVar6 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 0x198));
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(int *)(param_1 + 0x19c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 400,0);
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 141231110 FUN_141231110 body=1304 status=ok
// SIG undefined FUN_141231110(void)

void FUN_141231110(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong local_res8;
  longlong local_res10;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  
  lVar8 = (**(code **)(*param_1 + 0x148))();
  if (lVar8 == 0) {
    return;
  }
  uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar8 = UWorld::GetGameState<APVPGameState>(uVar9);
  if (lVar8 == 0) {
    return;
  }
  if (*(char *)(lVar8 + 0x638) == '\0') {
    return;
  }
  bVar1 = *(byte *)(param_1[0xcd] + 0x418);
  if ((char)param_1[0x25] == '\x03') {
    if ((bVar1 == 3) || (bVar1 == 0)) {
      (**(code **)(param_1[0xb0] + 0xf8))(param_1 + 0xb0,0xffffffff,1);
      if ((param_1[0xd7] != 0) && (*(char *)(param_1[0xd7] + 0x1c1) != '\0')) {
        FUN_14148fb50(param_1,0);
      }
      uVar9 = FUN_142ceeb40(param_1[0xcd],1);
      lVar8 = FUN_141227930(uVar9);
      if (lVar8 != 0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AOakVehicle::OnPrimaryOccupantLevelChange",L"::")
        ;
        pwVar5 = (wchar_t *)0x0;
        while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(&local_res8,pwVar5 + 2,1);
        lVar6 = local_res8;
        plVar15 = (longlong *)(lVar8 + 0x1b0);
        lVar11 = *plVar15;
        iVar14 = *(int *)(lVar8 + 0x1b8);
        for (lVar16 = lVar11; lVar16 != (longlong)iVar14 * 0x10 + lVar11; lVar16 = lVar16 + 0x10) {
          if ((*(longlong *)(lVar16 + 8) == lVar6) &&
             (plVar12 = (longlong *)FWeakObjectPtr::GetEvenIfUnreachable(lVar16), param_1 == plVar12
             )) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            iVar14 = (int)(lVar16 - lVar11 >> 4);
            if (iVar14 != -1) {
              iVar2 = *(int *)(lVar8 + 0x1b8);
              iVar13 = (iVar2 - iVar14) + -1;
              if (0 < iVar13) {
                iVar13 = 1;
              }
              if (iVar13 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar14 * 0x10 + *plVar15),
                           (void *)((longlong)(iVar2 - iVar13) * 0x10 + *plVar15),
                           (longlong)iVar13 << 4);
                iVar2 = *(int *)(lVar8 + 0x1b8);
              }
              *(int *)(lVar8 + 0x1b8) = iVar2 + -1;
            }
            break;
          }
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
      }
    }
    else if (bVar1 == 2) {
      uVar9 = FUN_142ceeb40(param_1[0xcd],0);
      lVar8 = FUN_141227930(uVar9);
      if (lVar8 != 0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AOakVehicle::OnPrimaryOccupantLevelChange",L"::")
        ;
        pwVar5 = (wchar_t *)0x0;
        while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(&local_res10,pwVar5 + 2,1);
        plVar15 = (longlong *)(lVar8 + 0x1b0);
        FWeakObjectPtr::operator=(&local_48,0);
        local_40 = 0;
        FWeakObjectPtr::operator=(&local_48,param_1);
        local_40 = local_res10;
        local_res8 = 0;
        if ((local_res10 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_48), lVar11 != 0)) {
          UObject::FindFunction(lVar11,local_40);
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
        iVar14 = *(int *)(lVar8 + 0x1b8);
        lVar11 = (longlong)iVar14;
        *(int *)(lVar8 + 0x1b8) = iVar14 + 1;
        if (*(int *)(lVar8 + 0x1bc) < iVar14 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar14);
        }
        lVar8 = *plVar15;
        *(undefined4 *)(lVar8 + lVar11 * 0x10) = local_48;
        *(undefined4 *)(lVar8 + (lVar11 * 8 + 2) * 2) = local_44;
        *(longlong *)(lVar8 + (lVar11 * 8 + 4) * 2) = local_40;
      }
    }
  }
  if (param_1[0xd3] != 0) {
    FUN_140968120(param_1[0xd3],1 < (byte)(bVar1 - 1),DAT_1468770d8);
  }
  lVar8 = param_1[0xb0];
  if ((bVar1 & 0xfd) == 0) {
    (**(code **)(lVar8 + 0x108))(param_1 + 0xb0,DAT_1468770a8,0xffffffff);
    *(undefined1 *)(param_1 + 0x176) = 0;
  }
  else {
    (**(code **)(lVar8 + 0x100))();
    FUN_141215280(param_1,0xff);
  }
  if (bVar1 == 1) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x135,0);
    goto LAB_141231540;
  }
  if (bVar1 == 2) {
    if (((char)param_1[0x1d1] == '\0') || (lVar8 = param_1[0xd6], lVar8 == 0)) goto LAB_141231540;
    uVar9 = 1;
  }
  else {
    if (bVar1 != 3) goto LAB_141231540;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x137,0);
    if ((char)param_1[0x175] != '\0') {
      FUN_14148fb90(param_1);
    }
    *(undefined4 *)(param_1 + 0x173) = 0;
    if (*(int *)((longlong)param_1 + 0xb9c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x172,0);
    }
    *(undefined4 *)(param_1 + 0x174) = 0xbf800000;
    *(undefined4 *)((longlong)param_1 + 0xba4) = 0xbf800000;
    *(undefined1 *)(param_1 + 0x175) = 0;
    if (((char)param_1[0x1d1] == '\0') || (lVar8 = param_1[0xd6], lVar8 == 0)) goto LAB_141231540;
    uVar9 = 0;
  }
  thunk_FUN_1430cc8e0(lVar8,uVar9);
LAB_141231540:
  uVar9 = URemnantQuestSubQuest::GetPrivateStaticClass();
  lVar8 = (**(code **)(*param_1 + 0x628))(param_1,uVar9);
  if (lVar8 != 0) {
    cVar7 = FUN_141214120(param_1);
    *(bool *)(lVar8 + 0x25d) = cVar7 == '\0';
  }
  lVar8 = FUN_1412287c0(param_1,1);
  if (lVar8 != 0) {
    FUN_141284890(lVar8);
  }
  plVar12 = (longlong *)param_1[0xdc];
  plVar15 = plVar12 + (int)param_1[0xdd];
  for (; plVar12 != plVar15; plVar12 = plVar12 + 1) {
    lVar8 = *plVar12;
    if (((lVar8 != 0) && (*(char *)(lVar8 + 0x6f8) == '\0')) &&
       (lVar8 = *(longlong *)(lVar8 + 0x118), lVar8 != 0)) {
      lVar11 = AGTutorialStepVideo::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (*(char *)(lVar8 + 0x528) != '\0')) {
        FUN_141284890(lVar8);
      }
    }
  }
  return;
}



// FUNCTION 141231630 FUN_141231630 body=25 status=ok
// SIG undefined FUN_141231630(void)

void FUN_141231630(longlong param_1)

{
  if (*(int *)(param_1 + 0x340) == 0) {
    FUN_1412131f0(param_1,0xffffffff,0,1);
    return;
  }
  return;
}



// FUNCTION 141231650 FUN_141231650 body=1957 status=ok
// SIG undefined FUN_141231650(void)

void FUN_141231650(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int *piVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  FUN_14108b1e0();
  pwVar17 = (wchar_t *)0x0;
  pwVar18 = pwVar17;
  if (*(longlong *)(param_1 + 0x858) != 0) {
    pwVar18 = *(wchar_t **)(*(longlong *)(param_1 + 0x858) + 0x10);
  }
  if (pwVar18 != (wchar_t *)0x0) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnRewardsListScrollBarUpdated",L"::");
    pwVar6 = pwVar17;
    while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    FWeakObjectPtr::operator=(pwVar18 + 0x1bc,param_1);
    *(longlong *)(pwVar18 + 0x1c0) = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar11 = FWeakObjectPtr::Get(pwVar18 + 0x1bc), lVar11 != 0)) {
      UObject::FindFunction(lVar11,*(undefined8 *)(pwVar18 + 0x1c0));
    }
  }
  lVar11 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar11 != 0) {
    lVar12 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_58 = FUN_1412361c0;
      plVar1 = (longlong *)(lVar11 + 7000);
      iStack_50 = 0;
      plVar13 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar13 != (longlong *)0x0) {
        *plVar13 = (longlong)&PTR_FUN_144319740;
        FWeakObjectPtr::operator=(plVar13 + 1,param_1);
        *(undefined4 *)(plVar13 + 2) = (undefined4)local_58;
        *(undefined4 *)((longlong)plVar13 + 0x14) = local_58._4_4_;
        *(int *)(plVar13 + 3) = iStack_50;
        *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_4c;
        lVar12 = FDelegateHandle::GenerateNewID();
        plVar13[5] = lVar12;
        *plVar13 = (longlong)&PTR_FUN_144319788;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_res8);
        iVar8 = *(int *)(lVar11 + 0x1b60);
        *(int *)(lVar11 + 0x1b60) = iVar8 + 1;
        if (*(int *)(lVar11 + 0x1b64) < iVar8 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar8);
        }
        puVar14 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar1);
        *puVar14 = plVar13;
        *(undefined4 *)(puVar14 + 1) = 3;
      }
      iStack_50 = 0;
      local_58 = FUN_141236190;
      plVar1 = (longlong *)(lVar11 + 0x1b28);
      plVar13 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar13 != (longlong *)0x0) {
        *plVar13 = (longlong)&PTR_FUN_144319740;
        FWeakObjectPtr::operator=(plVar13 + 1,param_1);
        *(undefined4 *)(plVar13 + 2) = (undefined4)local_58;
        *(undefined4 *)((longlong)plVar13 + 0x14) = local_58._4_4_;
        *(int *)(plVar13 + 3) = iStack_50;
        *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_4c;
        lVar12 = FDelegateHandle::GenerateNewID();
        plVar13[5] = lVar12;
        *plVar13 = (longlong)&PTR_FUN_144319788;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_res8);
        iVar8 = *(int *)(lVar11 + 0x1b30);
        *(int *)(lVar11 + 0x1b30) = iVar8 + 1;
        if (*(int *)(lVar11 + 0x1b34) < iVar8 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar8);
        }
        puVar14 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar1);
        *puVar14 = plVar13;
        *(undefined4 *)(puVar14 + 1) = 3;
      }
      iStack_50 = 0;
      local_58 = FUN_141236160;
      plVar1 = (longlong *)(lVar11 + 0x1b40);
      plVar13 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar13 != (longlong *)0x0) {
        *plVar13 = (longlong)&PTR_FUN_14471e898;
        FWeakObjectPtr::operator=(plVar13 + 1,param_1);
        *(undefined4 *)(plVar13 + 2) = (undefined4)local_58;
        *(undefined4 *)((longlong)plVar13 + 0x14) = local_58._4_4_;
        *(int *)(plVar13 + 3) = iStack_50;
        *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_4c;
        lVar12 = FDelegateHandle::GenerateNewID();
        plVar13[5] = lVar12;
        *plVar13 = (longlong)&PTR_FUN_14471e8e0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_res8);
        iVar8 = *(int *)(lVar11 + 0x1b48);
        *(int *)(lVar11 + 0x1b48) = iVar8 + 1;
        if (*(int *)(lVar11 + 0x1b4c) < iVar8 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar8);
        }
        puVar14 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar1);
        *puVar14 = plVar13;
        *(undefined4 *)(puVar14 + 1) = 3;
      }
      iStack_50 = 0;
      local_58 = FUN_141230c40;
      plVar1 = (longlong *)(lVar11 + 0x1ba0);
      plVar13 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar13 != (longlong *)0x0) {
        *plVar13 = (longlong)&PTR_FUN_144318d40;
        FWeakObjectPtr::operator=(plVar13 + 1,param_1);
        *(undefined4 *)(plVar13 + 2) = (undefined4)local_58;
        *(undefined4 *)((longlong)plVar13 + 0x14) = local_58._4_4_;
        *(int *)(plVar13 + 3) = iStack_50;
        *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_4c;
        lVar12 = FDelegateHandle::GenerateNewID();
        plVar13[5] = lVar12;
        *plVar13 = (longlong)&PTR_FUN_144318d88;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_res8);
        iVar8 = *(int *)(lVar11 + 0x1ba8);
        *(int *)(lVar11 + 0x1ba8) = iVar8 + 1;
        if (*(int *)(lVar11 + 0x1bac) < iVar8 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar8);
        }
        puVar14 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar1);
        *puVar14 = plVar13;
        *(undefined4 *)(puVar14 + 1) = 3;
      }
      iStack_50 = 0;
      local_58 = FUN_141230d30;
      plVar1 = (longlong *)(lVar11 + 0x1b88);
      plVar13 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar13 != (longlong *)0x0) {
        *plVar13 = (longlong)&PTR_FUN_1444f8638;
        FWeakObjectPtr::operator=(plVar13 + 1,param_1);
        *(undefined4 *)(plVar13 + 2) = (undefined4)local_58;
        *(undefined4 *)((longlong)plVar13 + 0x14) = local_58._4_4_;
        *(int *)(plVar13 + 3) = iStack_50;
        *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_4c;
        lVar12 = FDelegateHandle::GenerateNewID();
        plVar13[5] = lVar12;
        *plVar13 = (longlong)&PTR_FUN_1444f8680;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_res8);
        iVar8 = *(int *)(lVar11 + 0x1b90);
        *(int *)(lVar11 + 0x1b90) = iVar8 + 1;
        if (*(int *)(lVar11 + 0x1b94) < iVar8 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar8);
        }
        puVar14 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar1);
        *puVar14 = plVar13;
        *(undefined4 *)(puVar14 + 1) = 3;
      }
      iStack_50 = 0;
      local_58 = FUN_141230e50;
      plVar1 = (longlong *)(lVar11 + 0x1b70);
      plVar13 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar13 != (longlong *)0x0) {
        *plVar13 = (longlong)&PTR_FUN_144319740;
        FWeakObjectPtr::operator=(plVar13 + 1,param_1);
        *(undefined4 *)(plVar13 + 2) = (undefined4)local_58;
        *(undefined4 *)((longlong)plVar13 + 0x14) = local_58._4_4_;
        *(int *)(plVar13 + 3) = iStack_50;
        *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_4c;
        lVar12 = FDelegateHandle::GenerateNewID();
        plVar13[5] = lVar12;
        *plVar13 = (longlong)&PTR_FUN_144319788;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_res8);
        iVar8 = *(int *)(lVar11 + 0x1b78);
        *(int *)(lVar11 + 0x1b78) = iVar8 + 1;
        if (*(int *)(lVar11 + 0x1b7c) < iVar8 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar8);
        }
        puVar14 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar1);
        *puVar14 = plVar13;
        *(undefined4 *)(puVar14 + 1) = 3;
      }
      uStack_40 = 0;
      local_48 = (code *)&LAB_141230e40;
      local_58 = (code *)0x0;
      plVar1 = (longlong *)(lVar11 + 0x1bb8);
      iStack_50 = 0;
      puVar14 = (undefined8 *)operator_new(0x30,&local_58);
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = &PTR_FUN_1442cc120;
        FWeakObjectPtr::operator=(puVar14 + 1,param_1);
        *(undefined4 *)(puVar14 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar14 + 0x14) = local_48._4_4_;
        *(undefined4 *)(puVar14 + 3) = uStack_40;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = uStack_3c;
        uVar15 = FDelegateHandle::GenerateNewID();
        puVar14[5] = uVar15;
        *puVar14 = &PTR_FUN_1442cc168;
      }
      iVar8 = iStack_50;
      plVar13 = (longlong *)local_58;
      if (iStack_50 == 0) {
        if (local_58 != (code *)0x0) {
          FMemory::Free();
        }
      }
      else if (local_58 != (code *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_res8);
        iVar2 = *(int *)(lVar11 + 0x1bc0);
        *(int *)(lVar11 + 0x1bc0) = iVar2 + 1;
        if (*(int *)(lVar11 + 0x1bc4) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar14 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar14 = plVar13;
        *(int *)(puVar14 + 1) = iVar8;
      }
      lVar11 = lVar11 + 0x1b10;
      plVar13 = (longlong *)FUN_140e7edb0(lVar11,&local_48);
      plVar1 = (longlong *)(param_1 + 0x8a0);
      if (plVar1 != plVar13) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        *plVar1 = *plVar13;
        *plVar13 = 0;
        *(int *)(param_1 + 0x8a8) = (int)plVar13[1];
        *(undefined4 *)(param_1 + 0x8ac) = *(undefined4 *)((longlong)plVar13 + 0xc);
        plVar13[1] = 0;
      }
      if (local_48 != (code *)0x0) {
        FMemory::Free();
      }
      iVar8 = FUN_1404cf9f0(lVar11);
      piVar3 = (int *)*plVar1;
      for (piVar16 = piVar3; piVar16 != piVar3 + *(int *)(param_1 + 0x8a8); piVar16 = piVar16 + 1) {
        if (*piVar16 == iVar8) {
          iVar8 = (int)((longlong)piVar16 - (longlong)piVar3 >> 2);
          goto LAB_141231ca9;
        }
      }
      iVar8 = -1;
LAB_141231ca9:
      *(int *)(param_1 + 0x8b0) = iVar8;
      if (iVar8 == -1) {
        if (0 < *(int *)(param_1 + 0x8a8)) {
          *(undefined4 *)(param_1 + 0x8b0) = 0;
          FUN_141237350(param_1,*(undefined4 *)*plVar1);
          FUN_140e908e0(lVar11,*(undefined4 *)(param_1 + 0x898),0);
        }
      }
      else {
        uVar9 = FUN_1404cf9f0(lVar11);
        FUN_141237350(param_1,uVar9);
      }
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x5a8);
  if (lVar11 != 0) {
    uStack_40 = 0;
    local_48 = FUN_141229660;
    local_58 = (code *)0x0;
    iStack_50 = 0;
    puVar14 = (undefined8 *)operator_new(0x30,&local_58);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &PTR_FUN_144060be0;
      FWeakObjectPtr::operator=(puVar14 + 1,param_1);
      *(undefined4 *)(puVar14 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar14 + 0x14) = local_48._4_4_;
      *(undefined4 *)(puVar14 + 3) = uStack_40;
      *(undefined4 *)((longlong)puVar14 + 0x1c) = uStack_3c;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[5] = uVar15;
      *puVar14 = &PTR_FUN_144060c28;
    }
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x28,&local_58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
  }
  FUN_141238200(param_1);
  FUN_142ecd4d0(param_1);
  if (0 < *(int *)(param_1 + 0x870)) {
    if (**(longlong **)(param_1 + 0x868) != 0) {
      pwVar17 = *(wchar_t **)(**(longlong **)(param_1 + 0x868) + 0x10);
    }
    if ((pwVar17 != (wchar_t *)0x0) && (cVar7 = FUN_141202f70(pwVar17), cVar7 != '\0')) {
      uVar15 = TScriptInterface<IBlendableInterface>::
               TScriptInterface<IBlendableInterface><UMaterialInterface>
                         (&local_48,**(undefined8 **)(pwVar17 + 200));
      FUN_142ed36d0(param_1,uVar15,0);
    }
  }
  return;
}



// FUNCTION 141231e00 FUN_141231e00 body=222 status=ok
// SIG undefined FUN_141231e00(void)

void FUN_141231e00(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140483870(lVar2 + 7000,param_1);
      FUN_140483870(lVar2 + 0x1b28,param_1);
      FUN_140483870(lVar2 + 0x1b40,param_1);
      FUN_140483870(lVar2 + 0x1ba0,param_1);
      FUN_140483870(lVar2 + 0x1b88,param_1);
      FUN_140483870(lVar2 + 0x1b70,param_1);
      FUN_140483870(lVar2 + 0x1bb8,param_1);
    }
  }
  FUN_141217390(param_1 + 0x818);
  thunk_FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 141231ee0 FUN_141231ee0 body=17 status=ok
// SIG undefined FUN_141231ee0(void)

void FUN_141231ee0(longlong param_1)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_14123ece0(param_1,1);
    return;
  }
  return;
}



// FUNCTION 141231f00 FUN_141231f00 body=200 status=ok
// SIG undefined FUN_141231f00(void)

void FUN_141231f00(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_3 != 0) {
    lVar2 = FUN_1413c3a10();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_18 = *(undefined8 *)(param_5 + 0x20);
      local_10 = *(undefined4 *)(param_5 + 0x28);
      FUN_141216b60(param_1,param_2,param_3,&local_18);
      return;
    }
  }
  local_18 = *(undefined8 *)(param_5 + 0x20);
  local_10 = *(undefined4 *)(param_5 + 0x28);
  FUN_1412162b0(param_1,param_2,param_3,&local_18);
  return;
}



// FUNCTION 141231fe0 FUN_141231fe0 body=498 status=ok
// SIG undefined FUN_141231fe0(void)

void FUN_141231fe0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ec5080();
  puVar5 = (undefined8 *)FUN_142085870(param_1,local_38,L"checkBox");
  *(undefined8 *)(param_1 + 0x308) = *puVar5;
  plVar3 = (longlong *)puVar5[1];
  plVar6 = *(longlong **)(param_1 + 0x310);
  if (plVar3 != plVar6) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x310);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x310) = plVar3;
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  puVar5 = (undefined8 *)FUN_142085870(param_1,local_28,L"progressBar");
  *(undefined8 *)(param_1 + 0x318) = *puVar5;
  plVar3 = (longlong *)puVar5[1];
  plVar6 = *(longlong **)(param_1 + 800);
  if (plVar3 != plVar6) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 800);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 800) = plVar3;
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  puVar5 = (undefined8 *)FUN_142085870(param_1,local_18,L"progressText");
  *(undefined8 *)(param_1 + 0x328) = *puVar5;
  plVar3 = (longlong *)puVar5[1];
  plVar6 = *(longlong **)(param_1 + 0x330);
  if (plVar3 != plVar6) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x330);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x330) = plVar3;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 1412321e0 FUN_1412321e0 body=1342 status=ok
// SIG undefined FUN_1412321e0(void)

void FUN_1412321e0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  FUN_142ef9e70();
  uVar3 = FUN_142085870(param_1,local_b8,L"title");
  FUN_142ede260(param_1 + 0x170,uVar3);
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_b0 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  uVar3 = FUN_142085870(param_1,local_a8,L"expireText");
  FUN_142ede260(param_1 + 0x188,uVar3);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_a0 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  uVar3 = FUN_142085870(param_1,local_98,L"timer");
  FUN_142ede260(param_1 + 0x1a0,uVar3);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_90 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  uVar3 = FUN_142085870(param_1,local_88,L"progressBarText");
  FUN_142ede260(param_1 + 0x1b8,uVar3);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_80 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  puVar4 = (undefined8 *)FUN_142085870(param_1,local_78,&DAT_144710300);
  *(undefined8 *)(param_1 + 0x1d0) = *puVar4;
  plVar6 = (longlong *)puVar4[1];
  plVar5 = *(longlong **)(param_1 + 0x1d8);
  if (plVar6 != plVar5) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x1d8);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    *(longlong **)(param_1 + 0x1d8) = plVar6;
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_70 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  local_c0 = 5;
  local_c8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"list",10);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  FUN_140f15e80(param_1,param_1 + 0x1e0,&local_c8,0,6,&local_d8);
  plVar6 = local_d8;
  for (iVar7 = (int)local_d0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x178) != 0) && (*(longlong *)(param_1 + 0x180) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x180) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      uVar3 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x170,uVar3,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 400) != 0) && (*(longlong *)(param_1 + 0x198) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x198) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_68,L"EXPIRES IN",L"GFxVaultCardMenu",L"ExpiresInText");
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x188,uVar3,1,0);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_60 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x1a8) != 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1b0) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_50,&DAT_1447103c8,L"GFxVaultCardMenu",L"SampleTimeText");
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1a0,uVar3,1,0);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_48 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1c8) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      uVar3 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1b8,uVar3,1,0);
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x1d8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar6[1];
    bVar8 = iVar7 == 0;
    if (bVar8) {
      *(int *)(plVar6 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar7 == (int)plVar6[1];
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar8) {
        if (plVar6 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x1d0) != 0) {
            FUN_14203e3e0(*(longlong *)(param_1 + 0x1d0),1);
          }
          LOCK();
          plVar5 = plVar6 + 1;
          lVar2 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar8 = iVar7 == 0;
      if (bVar8) {
        *(int *)(plVar6 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x170);
    (**(code **)(*plVar6 + 0x38))(plVar6,0);
    *(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + 0x242) = 1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x1e0) + 0x248) = 0x41ef3333;
  }
  FUN_1412369a0(param_1);
  return;
}



// FUNCTION 141232720 FUN_141232720 body=748 status=ok
// SIG undefined FUN_141232720(void)

void FUN_141232720(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ef9e70();
  uVar3 = FUN_142085870(param_1,local_58,L"itemName");
  FUN_142ede260(param_1 + 0x170,uVar3);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  uVar3 = FUN_142085870(param_1,local_48,L"itemTypeText");
  FUN_142ede260(param_1 + 0x188,uVar3);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  uVar3 = FUN_142085870(param_1,local_38,L"descriptionText");
  FUN_142ede260(param_1 + 0x1a0,uVar3);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  uVar3 = FUN_142085870(param_1,local_28,L"lockedText");
  FUN_142ede260(param_1 + 0x1b8,uVar3);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  uVar3 = FUN_142085870(param_1,local_18,L"keysRequiredPunch.keyAmount");
  FUN_142ede260(param_1 + 0x1d0,uVar3);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  local_70 = 0x11;
  local_78 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"upgradeHint.hint",0x22);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  FUN_140e98630(param_1,param_1 + 0x1e8,&local_78,0,6,&local_88);
  plVar5 = local_88;
  for (iVar4 = (int)local_80; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1413a0d30();
  }
  local_68[0] = 0;
  local_68[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"empty",0xc);
  FUN_142088cf0(param_1,local_68);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141232a10 FUN_141232a10 body=491 status=ok
// SIG undefined FUN_141232a10(void)

void FUN_141232a10(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 local_res8;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ec3600();
  puVar3 = (undefined8 *)FUN_142085870(param_1,local_28,L"itemIcon");
  *(undefined8 *)(param_1 + 800) = *puVar3;
  plVar6 = (longlong *)puVar3[1];
  plVar5 = *(longlong **)(param_1 + 0x328);
  if (plVar6 != plVar5) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x328);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    *(longlong **)(param_1 + 0x328) = plVar6;
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_20 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  uVar4 = FUN_142085870(param_1,local_18,L"stackCounter");
  FUN_142ede260(param_1 + 0x330,uVar4);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_10 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  FName::FName(&local_res8,L"Navigate",1);
  *(undefined8 *)(param_1 + 0x1a0) = local_res8;
  local_38 = 0;
  local_30 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"glowAnim",0x12);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140e98b90(param_1,param_1 + 0x348,&local_38,0,6,&local_48);
  plVar6 = local_48;
  for (iVar7 = (int)local_40; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141232c00 FUN_141232c00 body=770 status=ok
// SIG undefined FUN_141232c00(void)

void FUN_141232c00(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_78;
  ulonglong local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58 [2];
  short *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_142ef9e70();
  FUN_142085870(param_1,local_38,L"rowNumber");
  FUN_142ede260(param_1 + 0x178);
  uVar8 = 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_30 + 8))(local_30);
      }
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x38);
  if (lVar9 != 0) {
    lVar4 = FUN_1413a0d30();
    lVar9 = *(longlong *)(lVar9 + 0x10);
    if ((*(int *)(lVar9 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar8 = 4;
    }
  }
  uVar11 = 0;
  plVar2 = (longlong *)(param_1 + 400);
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(int *)(param_1 + 0x19c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2);
    iVar5 = *(int *)(param_1 + 0x198);
  }
  *(uint *)(param_1 + 0x198) = iVar5 + uVar8;
  if (*(int *)(param_1 + 0x19c) < (int)(iVar5 + uVar8)) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar2 + (longlong)iVar5 * 8),0,(ulonglong)uVar8 << 3);
  uVar12 = uVar11;
  if (0 < *(int *)(param_1 + 0x198)) {
    do {
      iVar5 = (int)uVar12;
      FString::PrintfImpl(&local_48,L"itemButton%d",uVar12);
      local_78 = 0;
      psVar7 = &DAT_143f3eda8;
      if (local_40 != 0) {
        psVar7 = local_48;
      }
      local_70 = 0;
      if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (psVar7[lVar9] != 0);
        uVar8 = (int)lVar9 + 1;
        local_70 = (ulonglong)uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
        }
        FGenericPlatformString::Memcpy(local_78,psVar7,(longlong)(int)uVar8 * 2);
      }
      local_68 = (longlong *)0x0;
      local_60 = 0;
      FUN_1412036a0(param_1,*plVar2 + (longlong)iVar5 * 8,&local_78,0,6,&local_68);
      plVar10 = local_68;
      for (iVar6 = (int)local_60; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 2;
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free(local_68);
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
      if (local_48 != (short *)0x0) {
        FMemory::Free();
      }
      lVar9 = *(longlong *)(*plVar2 + uVar11);
      if (lVar9 != 0) {
        FWeakObjectPtr::operator=(lVar9 + 0x2c8,param_1);
        *(int *)(lVar9 + 0x2d0) = iVar5;
      }
      uVar11 = uVar11 + 8;
      uVar12 = (ulonglong)(iVar5 + 1U);
    } while ((int)(iVar5 + 1U) < *(int *)(param_1 + 0x198));
  }
  local_58[0] = 0;
  local_58[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"notFilled",0x14);
  FUN_142088cf0(param_1,local_58);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141232f10 FUN_141232f10 body=535 status=ok
// SIG undefined FUN_141232f10(void)

ulonglong FUN_141232f10(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ulonglong in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  
  cVar2 = *(char *)((longlong)param_2 + 0xc);
  if (*(int *)(param_1 + 0x3ec) == 2) {
    lVar1 = param_1 + -0x4d8;
    if (cVar2 == '\0') {
      if (DAT_146876c78 == *param_2) {
        cVar2 = FUN_141229b00(lVar1,param_2);
LAB_141232fce:
        if (cVar2 == '\0') goto LAB_141232fd6;
      }
      else if (DAT_146b3e2a0 == *param_2) {
        cVar2 = FUN_141257250(lVar1);
        if (cVar2 != '\0') goto LAB_141232fd6;
        lVar4 = FUN_140e971d0(lVar1);
        if (lVar4 != 0) {
          FUN_140e908e0(lVar4 + 0x1b10,*(undefined4 *)(param_1 + 0x3c0),0);
        }
        LOCK();
        *(undefined4 *)(param_1 + 0xb0) = 1;
        UNLOCK();
        FUN_14123afd0(lVar1);
      }
      else {
        if (DAT_146876c80 == *param_2) {
          cVar2 = FUN_14122dd90(lVar1);
          goto LAB_141232fce;
        }
        if (DAT_146876cb0 == *param_2) {
          if ((*(int *)(param_1 + 0x3d8) != *(int *)(param_1 + 0x3d0) + -1) &&
             (*(longlong *)(param_1 + 0x208) != 0)) {
            FUN_142ebe950();
          }
        }
        else {
          if (DAT_146876cb8 != *param_2) goto LAB_141232fd6;
          if ((*(int *)(param_1 + 0x3d8) != 0) && (*(longlong *)(param_1 + 0x208) != 0)) {
            ATTLPlayerController::InputPadDown_Released();
          }
        }
      }
    }
    else {
LAB_141232fd6:
      cVar2 = FUN_1410949b0(param_1,param_2);
      if (cVar2 == '\0') goto LAB_14123308d;
    }
LAB_1412330f1:
    bVar3 = 1;
  }
  else {
    if ((cVar2 != '\0') ||
       (((in_RAX = *param_2, DAT_146b3e2b8 != in_RAX && (DAT_146876ca8 != in_RAX)) &&
        (DAT_146876ca0 != in_RAX)))) {
      if ((*(int *)(param_1 + 0x3ec) != 1) || (cVar2 != '\0')) {
LAB_141233115:
        return in_RAX & 0xffffffffffffff00;
      }
      if (DAT_146b3e2a0 == *param_2) {
        FUN_14123d4b0(param_1 + -0x4d8);
      }
      else {
        in_RAX = *param_2;
        if (DAT_146876c78 != in_RAX) goto LAB_141233115;
        FUN_141229b00(param_1 + -0x4d8,param_2);
      }
      goto LAB_1412330f1;
    }
LAB_14123308d:
    uVar5 = FUN_1410949b0(param_1,param_2);
    bVar3 = (byte)uVar5;
    if (bVar3 == 0) {
      return uVar5;
    }
  }
  FUN_141081510(param_1 + -0x4d8,param_2);
  return (ulonglong)bVar3;
}



// FUNCTION 141233130 FUN_141233130 body=246 status=ok
// SIG undefined FUN_141233130(void)

undefined1 FUN_141233130(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142efbf70();
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146876ca0 == *param_2) {
      FUN_1412149f0(param_1 + -0x2b8,1);
      return 1;
    }
    if (DAT_146876ca8 == *param_2) {
      FUN_1412149f0(param_1 + -0x2b8,0);
      return 1;
    }
    if ((DAT_146876cb0 == *param_2) && (*(int *)(param_1 + 0x88) == 1)) {
      FUN_141214a70(param_1 + -0x2b8,1);
      return 1;
    }
    if ((DAT_146876cb8 == *param_2) && (*(int *)(param_1 + 0x88) == 1)) {
      FUN_141214a70(param_1 + -0x2b8,0xffffffff);
      return 1;
    }
  }
  return uVar1;
}



// FUNCTION 141233230 FUN_141233230 body=179 status=ok
// SIG undefined FUN_141233230(void)

ulonglong FUN_141233230(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*(longlong **)(param_1 + 0x718) == (longlong *)0x0) goto LAB_1412332bd;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x2b0))();
  if (lVar3 == 0) goto LAB_1412332bd;
  lVar3 = *(longlong *)(param_1 + 0x430);
  if (lVar3 == 0) {
LAB_14123329a:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14123329a;
  }
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x2b0))();
  FWeakObjectPtr::operator=(lVar4 + 0x18,lVar3);
LAB_1412332bd:
  uVar5 = *(ulonglong *)(param_1 + 0x718);
  if ((uVar5 != 0) && (*(char *)(uVar5 + 0x1a8) != '\0')) {
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x950);
    *(uint *)(param_1 + 0x950) = 1;
    uVar5 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 1412332f0 FUN_1412332f0 body=253 status=ok
// SIG undefined FUN_1412332f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412332f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_141096090();
  puVar1 = (undefined8 *)FName::FName(&local_78,L"InventoryMenuInspecting",1);
  uVar2 = FUN_1410a77f0(param_1 + -0x4d8,local_68,*puVar1);
  FUN_14208c260(param_1 + -0x4d8,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x3f1) != '\0') {
    local_78 = 0;
    local_70 = 0;
    (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x4e8))
              (param_1 + -0x4d8,*(undefined8 *)(param_1 + 0x420),&local_78);
    *(undefined1 *)(param_1 + 0x3f1) = 0;
  }
  return;
}



// FUNCTION 1412333f0 FUN_1412333f0 body=207 status=ok
// SIG undefined FUN_1412333f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412333f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x3f1) != '\0') {
    puVar1 = (undefined8 *)FName::FName(local_78,L"InventoryMenuInspecting",1);
    uVar2 = FUN_1410853c0(param_1 + -0x4d8,local_68,*puVar1);
    FUN_14208c260(param_1 + -0x4d8,uVar2);
    if (local_28 != 0) {
      plVar3 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar3 = local_38;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  FUN_142ec7580(param_1);
  return;
}



// FUNCTION 1412334c0 FUN_1412334c0 body=238 status=ok
// SIG undefined FUN_1412334c0(void)

void FUN_1412334c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *local_58 [6];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x228) != 0) {
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x238) + 0xe8,param_1 + -0x4d8);
    local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
    local_28 = 0;
    local_18 = 0;
    FUN_1411f67c0(*(undefined8 *)(param_1 + 0x238),local_58);
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x330);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x338) * 2;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
    if (*plVar1 != 0) {
      FUN_142227350(*plVar1,0,1);
    }
  }
  *(undefined4 *)(param_1 + 0x338) = 0;
  if (*(int *)(param_1 + 0x33c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x330,0);
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 1412335b0 FUN_1412335b0 body=57 status=ok
// SIG undefined FUN_1412335b0(void)

void FUN_1412335b0(longlong param_1)

{
  longlong lVar1;
  
  FUN_142efc5d0();
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(lVar1 + 0x898,0);
    *(undefined8 *)(lVar1 + 0x8a0) = 0;
  }
  return;
}



// FUNCTION 141233600 FUN_141233600 body=115 status=ok
// SIG undefined FUN_141233600(void)

void FUN_141233600(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142efc880();
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(longlong *)(param_1 + 0x38) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 141233680 FUN_141233680 body=833 status=ok
// SIG undefined FUN_141233680(void)

void FUN_141233680(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong local_res10;
  undefined1 local_38 [32];
  
  FUN_142efc880();
  pwVar8 = (wchar_t *)0x0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UVendingMachineMenu::OnVendingItemClicked",L"::");
    pwVar7 = pwVar8;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar7 = pwVar2;
    }
    FName::FName(&local_res10,pwVar7 + 2,1);
    lVar4 = local_res10;
    lVar6 = *(longlong *)(param_1 + 0x38);
    FWeakObjectPtr::operator=(lVar6 + 0x898,param_1 + -0x2b8);
    *(longlong *)(lVar6 + 0x8a0) = lVar4;
    if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(lVar6 + 0x898), lVar4 != 0)) {
      UObject::FindFunction(lVar4,*(undefined8 *)(lVar6 + 0x8a0));
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UVendingMachineMenu::OnFeaturedItemClicked",L"::");
    pwVar7 = pwVar8;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar7 = pwVar2;
    }
    FName::FName(&local_res10,pwVar7 + 2,1);
    lVar6 = *(longlong *)(param_1 + 0x60);
    FWeakObjectPtr::operator=(lVar6 + 0x260,param_1 + -0x2b8);
    *(longlong *)(lVar6 + 0x268) = local_res10;
    if ((local_res10 != 0) && (lVar4 = FWeakObjectPtr::Get(lVar6 + 0x260), lVar4 != 0)) {
      UObject::FindFunction(lVar4,*(undefined8 *)(lVar6 + 0x268));
    }
  }
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    lVar6 = **(longlong **)(param_1 + 0x40);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Vending Machine",L"VendingMachineMenu",L"VendingMachineTitle");
    (**(code **)(lVar6 + 0x2d0))(*(undefined8 *)(param_1 + 0x40),uVar5);
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    lVar6 = **(longlong **)(param_1 + 0x48);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,&DAT_14470fa30,L"VendingMachineMenu",L"BuyHeader");
    (**(code **)(lVar6 + 0x2d0))(*(undefined8 *)(param_1 + 0x48),uVar5);
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    lVar6 = **(longlong **)(param_1 + 0x50);
    uVar5 = FText::FText(local_38);
    (**(code **)(lVar6 + 0x2d0))(*(undefined8 *)(param_1 + 0x50),uVar5);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar6 = *(longlong *)(param_1 + 8);
    if (lVar6 != 0) {
      lVar4 = FUN_1414e4b00();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(longlong *)(lVar6 + 0xb0) != 0)) {
        UImage::SetBrush(*(undefined8 *)(param_1 + 0x58),lVar6 + 0x68);
        goto LAB_1412338d8;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),2);
  }
LAB_1412338d8:
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (lVar6 == 0) {
LAB_14123395b:
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14123395b;
    pwVar7 = *(wchar_t **)(lVar6 + 0x848);
    if (pwVar7 != (wchar_t *)0x0) {
      lVar4 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(pwVar7 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar7 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
          != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_141233961;
    }
  }
  pwVar7 = pwVar8;
LAB_141233961:
  *(wchar_t **)(param_1 + 0x68) = pwVar7;
  if (lVar6 != 0) {
    pwVar8 = *(wchar_t **)(lVar6 + 0xc90);
  }
  *(wchar_t **)(param_1 + 0x80) = pwVar8;
  FUN_14123c2f0(param_1 + -0x2b8);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0xd80) + 0x18))();
  }
  FUN_14123b0a0(param_1 + -0x2b8);
  return;
}



// FUNCTION 1412339d0 FUN_1412339d0 body=467 status=ok
// SIG undefined FUN_1412339d0(void)

void FUN_1412339d0(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FUN_142ec8c70();
  uVar8 = 0;
  if (*(int *)(param_1 + 0x3ec) == 2) {
    lVar1 = param_1 + 0x340;
    cVar5 = FUN_142f13060(lVar1,param_2);
    if (cVar5 != '\0') {
      if ((*(longlong *)(param_1 + 0x378) != 0) &&
         (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x378) + 0x10), lVar6 != 0)) {
        FUN_14208ff10(lVar6,*(undefined4 *)(param_1 + 0x388),
                      *(float *)(param_1 + 0x38c) - *(float *)(param_1 + 0x3a4));
      }
      lVar6 = *(longlong *)(param_1 + 0x380);
      if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x10) != 0)) {
        fVar10 = *(float *)(param_1 + 0x360);
        fVar2 = *(float *)(param_1 + 0x364);
        if (1e-08 < ABS(fVar2)) {
          fVar11 = 0.0;
          fVar12 = fVar2 - fVar10;
          if (1e-08 < ABS(fVar12)) {
            fVar11 = (float)FUN_142eedeb0(lVar1);
            lVar6 = *(longlong *)(param_1 + 0x380);
            fVar11 = fVar11 / fVar12;
          }
          uVar7 = uVar8;
          if (lVar6 != 0) {
            uVar7 = *(undefined8 *)(lVar6 + 0x10);
          }
          FUN_142f10880(uVar7,fVar10 / fVar2);
          if (*(longlong *)(param_1 + 0x380) != 0) {
            uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x380) + 0x10);
          }
          FUN_142f0fa70(uVar8,fVar11);
        }
        else {
          FUN_142f10880(*(longlong *)(lVar6 + 0x10),0x3f800000);
        }
        uVar9 = FUN_142eedeb0(lVar1);
        *(undefined4 *)(param_1 + 0x3a4) = uVar9;
      }
    }
    fVar10 = param_2 + *(float *)(param_1 + 0x3c4);
    *(float *)(param_1 + 0x3c4) = fVar10;
    if (1.0 < fVar10) {
      *(undefined4 *)(param_1 + 0x3c4) = 0;
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x240);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2a0))(plVar4,param_2);
  }
  LOCK();
  iVar3 = *(int *)(param_1 + 0x478);
  *(int *)(param_1 + 0x478) = 0;
  UNLOCK();
  if (iVar3 == 0) {
    return;
  }
  FUN_14123ba40(param_1 + -0x4d8);
  return;
}



// FUNCTION 141233bb0 FUN_141233bb0 body=884 status=ok
// SIG undefined FUN_141233bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141233bb0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  ulonglong *puStack_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [16];
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FText::FText(local_f8);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    fVar9 = (float)FUN_140d00100();
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    lVar6 = FText::AsNumber(local_78,(int)(fVar9 + 1.0),0,&local_108);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Respawning in {0} seconds",L"UMGGameOverScreen",
                       L"RespawnCountdownText");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar7);
    local_60[0] = 4;
    FText::FText(local_50,lVar6);
    local_118 = *puVar8;
    local_128 = local_60;
    puStack_120 = &local_30;
    local_110 = puVar8[1];
    local_38 = '\x01';
    if (local_110 != 0) {
      LOCK();
      *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_e0,&local_128);
    uVar7 = FText::Format(local_b8,&local_118,uVar7);
    FText::FText(local_d0,uVar7);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_e0);
    if (local_38 != '\0') {
      local_38 = '\0';
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_48 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
    }
    plVar4 = (longlong *)puVar8[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    plVar4 = *(longlong **)(lVar6 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    FText::operator=(local_f8,local_d0);
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c8 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_98 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    plVar4 = plStack_100;
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_100 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_100)(plStack_100);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    FUN_1414db390(param_1 + -0x2b8,local_f8);
    if ((float)(int)(fVar9 + 1.0) <= 0.1) {
      FUN_142ef6530(param_1 + -0x2b8);
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  return;
}



// FUNCTION 141233f30 FUN_141233f30 body=247 status=ok
// SIG undefined FUN_141233f30(void)

void FUN_141233f30(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong in_stack_00000038;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_3 != 0) {
    lVar2 = FUN_1413c3a10();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_18 = *(undefined8 *)(in_stack_00000038 + 0x20);
      local_10 = *(undefined4 *)(in_stack_00000038 + 0x28);
      FUN_141216b60(param_1,*(undefined8 *)(param_1 + 0x118),param_3,&local_18);
      return;
    }
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_18 = *(undefined8 *)(in_stack_00000038 + 0x20);
      local_10 = *(undefined4 *)(in_stack_00000038 + 0x28);
      FUN_1412162b0(param_1,*(undefined8 *)(param_1 + 0x118),param_3,&local_18);
    }
  }
  return;
}



// FUNCTION 141234030 FUN_141234030 body=84 status=ok
// SIG undefined FUN_141234030(void)

void FUN_141234030(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x12b8);
  lVar2 = (longlong)*(int *)(param_1 + 0x12c0) * 0x20 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    FUN_1412572d0(lVar1,param_1);
  }
  return;
}



// FUNCTION 141234090 FUN_141234090 body=223 status=ok
// SIG undefined FUN_141234090(void)

void FUN_141234090(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x2d8);
    *(int *)(param_1 + 0x8b0) = iVar1;
    *(undefined4 *)(param_1 + 0x898) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x8a0) + (longlong)iVar1 * 4);
    *(undefined4 *)(param_1 + 0x898) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x8a0) + (longlong)*(int *)(param_1 + 0x8b0) * 4);
    FUN_141238d90(param_1);
    FUN_141236cf0(param_1);
    LOCK();
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
    FUN_141237f70(param_1);
    FUN_14123dc30(param_1);
    lVar2 = FUN_142eb65a0(param_1);
    local_18 = 0;
    uStack_10 = 0;
    FUN_142ed36d0(param_1,&local_18,0);
    if (lVar2 != 0) {
      local_20 = 0;
      local_28 = lVar2;
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      local_20 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
      FUN_142ed36d0(param_1,&local_28,0);
    }
  }
  return;
}



// FUNCTION 141234170 FUN_141234170 body=11 status=ok
// SIG undefined FUN_141234170(void)

void FUN_141234170(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x8c4) = 0;
  return;
}



// FUNCTION 141234180 FUN_141234180 body=87 status=ok
// SIG undefined FUN_141234180(void)

void FUN_141234180(longlong param_1)

{
  FUN_14227a0e0(0x3f800000,*(undefined8 *)(param_1 + 0x1318),DAT_146876fc8,0x3dcccccd,0x3dcccccd,
                0x3f800000,1,0xbf800000,0);
  return;
}



// FUNCTION 1412341e0 FUN_1412341e0 body=87 status=ok
// SIG undefined FUN_1412341e0(void)

void FUN_1412341e0(longlong param_1)

{
  FUN_14227a0e0(0x3f800000,*(undefined8 *)(param_1 + 0x1320),DAT_146876fc8,0x3dcccccd,0x3dcccccd,
                0x3f800000,1,0xbf800000,0);
  return;
}



// FUNCTION 141234240 FUN_141234240 body=243 status=ok
// SIG undefined FUN_141234240(void)

void FUN_141234240(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    if (*(longlong **)(param_1 + 0xce0) != (longlong *)0x0) {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0xce0) + 0x400))();
      if (param_3 <= iVar3) {
        return;
      }
      (**(code **)(**(longlong **)(param_1 + 0xce0) + 0x3f8))
                (*(longlong **)(param_1 + 0xce0),param_3);
      FUN_142ccf590(*(undefined8 *)(param_1 + 0xce0),param_3);
    }
    lVar7 = *(longlong *)(param_1 + 0x640);
    if (lVar7 != 0) {
      lVar6 = *(longlong *)(lVar7 + 0x678);
      lVar7 = (longlong)*(int *)(lVar7 + 0x680) * 0x78 + lVar6;
      if (lVar6 != lVar7) {
        lVar8 = lVar6 + 0x60;
        do {
          cVar2 = FUN_142d52a00(lVar8);
          if (cVar2 != '\0') {
            uVar4 = FUN_142d52a20(lVar8);
            lVar5 = FArchive::operator<<(uVar4);
            uVar1 = *(undefined4 *)(lVar5 + 0x20);
            uVar4 = FUN_142d52a20(lVar8);
            uVar4 = FArchive::operator<<(uVar4);
            FUN_142d6f560(uVar4,uVar1,1);
          }
          lVar6 = lVar6 + 0x78;
          lVar8 = lVar8 + 0x78;
        } while (lVar6 != lVar7);
      }
    }
  }
  return;
}



// FUNCTION 141234340 FUN_141234340 body=521 status=ok
// SIG undefined FUN_141234340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141234340(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  if ((((param_4 == '\x04') &&
       (local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8, *(longlong *)(param_1 + 0xc28) == 0)) &&
      (*(longlong *)(param_1 + 0xc30) == 0)) &&
     (cVar2 = FUN_1407c3030(param_1 + 0xc38), cVar2 == '\0')) {
    uVar1 = *(undefined4 *)(param_3 + 0x1c);
    uStack_b0 = 0;
    local_b8 = FUN_141240b00;
    uVar3 = AActor::GetWorldTimerManager(param_1);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar4 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_ac;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0xc28,&local_a8,uVar1);
    if (local_48 != 0) {
      plVar6 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar6 = local_58;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar5 = FMemory::Realloc(plVar4,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 141234580 FUN_141234580 body=71 status=ok
// SIG undefined FUN_141234580(void)

void FUN_141234580(longlong *param_1)

{
  undefined1 uVar1;
  
  FUN_1426a2e70();
  if (((char)param_1[0x25] != '\x03') && (param_1[0xda] != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x778))(param_1);
    FUN_14127dd10(param_1[0xda],uVar1);
    return;
  }
  return;
}



// FUNCTION 1412345d0 FUN_1412345d0 body=74 status=ok
// SIG undefined FUN_1412345d0(void)

void FUN_1412345d0(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(char *)(param_1 + 0xebc) != '\0') &&
     (plVar1 = *(longlong **)(param_1 + 0x698), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x628))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000141234609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x620))(plVar1);
    return;
  }
  return;
}



// FUNCTION 141234630 FUN_141234630 body=69 status=ok
// SIG undefined FUN_141234630(void)

void FUN_141234630(longlong param_1)

{
  if (*(char *)(param_1 + 0xbd9) != '\0') {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x9d8);
    FUN_14148f370(param_1);
    return;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x9e8);
  FUN_14148f3b0(param_1);
  return;
}



// FUNCTION 1412346c0 FUN_1412346c0 body=60 status=ok
// SIG undefined FUN_1412346c0(void)

void FUN_1412346c0(longlong param_1)

{
  undefined2 local_res8 [16];
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x8c8,0);
  if ((*(char *)(param_1 + 0x8f1) == '\0') && (local_res8 != (undefined2 *)(param_1 + 0x8f0))) {
    *(undefined2 *)(param_1 + 0x8f0) = 0x101;
  }
  return;
}



// FUNCTION 141234740 FUN_141234740 body=179 status=ok
// SIG undefined FUN_141234740(void)

ulonglong FUN_141234740(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*(longlong **)(param_1 + 0x720) == (longlong *)0x0) goto LAB_1412347cd;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x2b0))();
  if (lVar3 == 0) goto LAB_1412347cd;
  lVar3 = *(longlong *)(param_1 + 0x430);
  if (lVar3 == 0) {
LAB_1412347aa:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1412347aa;
  }
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x2b0))();
  FWeakObjectPtr::operator=(lVar4 + 0x18,lVar3);
LAB_1412347cd:
  uVar5 = *(ulonglong *)(param_1 + 0x720);
  if ((uVar5 != 0) && (*(char *)(uVar5 + 0x1a8) != '\0')) {
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x950);
    *(uint *)(param_1 + 0x950) = 1;
    uVar5 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar5;
}



// FUNCTION 141234800 FUN_141234800 body=123 status=ok
// SIG undefined FUN_141234800(void)

void FUN_141234800(longlong param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((param_2 < *(int *)(param_1 + 0x870)) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x868) + (longlong)param_2 * 8), lVar1 != 0))
     && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) {
    lVar3 = FUN_1413a0f70();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_14122a150(lVar1,param_2 + -1);
    }
  }
  return;
}



// FUNCTION 141234880 FUN_141234880 body=54 status=ok
// SIG undefined FUN_141234880(void)

void FUN_141234880(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = *(float *)(param_1 + 0x83c) - *(float *)(param_1 + 0x838);
  if (1e-08 < ABS(fVar2)) {
    fVar1 = fVar2 * param_2;
  }
  FUN_142f0ee50(param_1 + 0x818,fVar1);
  return;
}



// FUNCTION 1412348e0 FUN_1412348e0 body=501 status=ok
// SIG undefined FUN_1412348e0(void)

void FUN_1412348e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  
  lVar1 = (**(code **)(*(longlong *)(param_2 + 0x608) + 0x98))();
  if (lVar1 != 0) {
    plVar6 = *(longlong **)(param_1 + 0x38);
    plVar2 = plVar6 + (longlong)*(int *)(param_1 + 0x40) * 6;
    for (; plVar6 != plVar2; plVar6 = plVar6 + 6) {
      lVar4 = (longlong)*(int *)(lVar1 + 0x728);
      if (*(int *)(lVar1 + 0x728) != 0) {
        iVar11 = 0;
        lVar10 = 0;
        bVar12 = **(longlong **)(lVar1 + 0x720) != *plVar6;
        iVar7 = 0;
        do {
          lVar10 = lVar10 + 1;
          iVar8 = iVar7 + 1;
          if (lVar10 < lVar4) {
            plVar3 = (longlong *)(lVar10 * 0x30 + *(longlong *)(lVar1 + 0x720));
            do {
              if (bVar12 != (*plVar3 != *plVar6)) break;
              iVar8 = iVar8 + 1;
              lVar10 = lVar10 + 1;
              plVar3 = plVar3 + 6;
            } while (lVar10 < lVar4);
          }
          iVar9 = iVar8 - iVar7;
          if (bVar12 == false) {
            if (iVar9 != 0) {
              lVar5 = (longlong)iVar7 * 0x30 + 0x14 + *(longlong *)(lVar1 + 0x720);
              do {
                thunk_FUN_142478640(lVar5 + 0xc);
                thunk_FUN_142478640(lVar5);
                thunk_FUN_142478640(lVar5 + -0xc);
                lVar5 = lVar5 + 0x30;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
          else {
            if (iVar11 != iVar7) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar11 * 0x30 + *(longlong *)(lVar1 + 0x720)),
                         (void *)((longlong)iVar7 * 0x30 + *(longlong *)(lVar1 + 0x720)),
                         (longlong)iVar9 * 0x30);
            }
            iVar11 = iVar11 + iVar9;
          }
          bVar12 = (bool)(bVar12 ^ 1);
          iVar7 = iVar8;
        } while (lVar10 < lVar4);
        *(int *)(lVar1 + 0x728) = iVar11;
      }
    }
  }
  if ((*(char *)(param_1 + 0x49) != '\0') && (*(char *)(param_2 + 0x12a8) != '\0')) {
    *(undefined1 *)(param_2 + 0x12a8) = 0;
  }
  return;
}



// FUNCTION 141234ae0 FUN_141234ae0 body=58 status=ok
// SIG undefined FUN_141234ae0(void)

void FUN_141234ae0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x690);
  }
  if (lVar1 != 0) {
    FUN_14127a6d0(lVar1,0xe);
    FUN_141280e60(lVar1,0xe);
    return;
  }
  return;
}



// FUNCTION 141234b80 FUN_141234b80 body=702 status=ok
// SIG undefined FUN_141234b80(void)

void FUN_141234b80(longlong *param_1,wchar_t *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  uint uVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  undefined8 local_res8;
  longlong *local_38;
  undefined8 local_30;
  code *local_28;
  ulonglong uStack_20;
  
  pwVar10 = (wchar_t *)0x0;
  if (param_2 == (wchar_t *)0x0) {
LAB_141234bd4:
    param_2 = pwVar10;
  }
  else {
    lVar5 = AAFGameState::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_141234bd4;
  }
  param_1[0xe0] = (longlong)param_2;
  if (param_2 == (wchar_t *)0x0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x23d) = 1;
  AActor::SetActorTickEnabled(param_1[0xe0],1);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  (**(code **)(*(longlong *)param_1[0xe0] + 0x4b8))((longlong *)param_1[0xe0],&local_38,1);
  plVar1 = param_1 + 0xe1;
  lVar5 = FUN_1413c3a10();
  pwVar7 = pwVar10;
  plVar9 = local_38;
  if (0 < (int)local_30) {
    do {
      if (*plVar9 != 0) {
        lVar2 = *(longlong *)(*plVar9 + 0x10);
        if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (plVar1 != (longlong *)0x0) {
            *plVar1 = local_38[(int)pwVar7];
          }
          break;
        }
      }
      uVar8 = (int)pwVar7 + 1;
      pwVar7 = (wchar_t *)(ulonglong)uVar8;
      plVar9 = plVar9 + 1;
    } while ((int)uVar8 < (int)local_30);
  }
  if (*plVar1 == 0) goto LAB_141234e1e;
  uStack_20 = uStack_20 & 0xffffffff00000000;
  local_28 = FUN_141230c20;
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnChestOpeningAnimationComplete",L"::");
  pwVar7 = pwVar10;
  while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar7 = pwVar4;
  }
  FName::FName(&local_res8,pwVar7 + 2,1);
  TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
            (*plVar1 + 0x7c0,param_1,&local_28,local_res8);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  local_28 = FUN_141234170;
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerOpenChest",L"::");
  pwVar7 = pwVar10;
  while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar7 = pwVar4;
  }
  FName::FName(&local_res8,pwVar7 + 2,1);
  TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
            (*plVar1 + 2000,param_1,&local_28,local_res8);
  pwVar7 = (wchar_t *)FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (pwVar7 == (wchar_t *)0x0) {
LAB_141234ddb:
    pwVar7 = pwVar10;
  }
  else {
    lVar5 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(pwVar7 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar7 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_141234ddb;
  }
  (**(code **)(*(longlong *)*plVar1 + 0x448))((longlong *)*plVar1,pwVar7);
  (**(code **)(*(longlong *)*plVar1 + 0x730))((longlong *)*plVar1,1);
  local_28 = (code *)0x0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x11c],&local_28);
LAB_141234e1e:
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 141234e40 FUN_141234e40 body=4110 status=ok
// SIG undefined FUN_141234e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141234e40(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 auStack_3e8 [32];
  longlong **local_3c8;
  longlong **local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b4;
  wchar_t *local_3b0;
  undefined8 local_3a8;
  wchar_t *local_3a0;
  undefined8 local_398;
  undefined8 *local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  longlong *local_358;
  undefined8 local_350;
  longlong local_348;
  undefined8 local_340;
  longlong *local_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 local_320;
  longlong *local_318;
  undefined8 local_310;
  longlong *local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  longlong *local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong *local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined8 local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [80];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  thunk_FUN_142ecbc80();
  uVar8 = 0;
  iVar7 = 0;
  lVar9 = -1;
  if (*(longlong *)(param_1 + 0x600) != 0) {
    uVar4 = FUN_142085870(*(longlong *)(param_1 + 0x600),local_198,L"unlockAbilityName");
    FUN_142ede260(param_1 + 0x7d8,uVar4);
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_190 + 1;
      lVar2 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)local_190 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_190 + 8))(local_190,1);
        }
      }
    }
    UMistDebugEntityScreen::InspectEntity(param_1 + 0x7d8,param_1 + 0x730,1,0);
    uVar4 = FUN_142085870(*(undefined8 *)(param_1 + 0x600),local_188,L"abilityUnlockedText");
    FUN_142ede260(param_1 + 0x7f0,uVar4);
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_180 + 1;
      lVar2 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)local_180 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
    UMistDebugEntityScreen::InspectEntity(param_1 + 0x7f0,param_1 + 0x748,1,0);
    local_298 = 0;
    local_290 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
    FGenericPlatformString::Memcpy(local_298,L"rewards",0x10);
    local_3c0 = &local_2a8;
    local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,6);
    local_2a8 = (longlong *)0x0;
    local_2a0 = 0;
    local_1e8 = 0;
    cVar3 = FUN_140e98b90(*(undefined8 *)(param_1 + 0x600),param_1 + 0x6a8,&local_298,0);
    plVar11 = local_2a8;
    for (iVar12 = (int)local_2a0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_2a8 != (longlong *)0x0) {
      FMemory::Free(local_2a8);
    }
    if (local_298 != 0) {
      FMemory::Free();
    }
    if (cVar3 != '\0') {
      local_348 = 0;
      local_340 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,0);
      FGenericPlatformString::Memcpy(local_348,&DAT_144704728,8);
      local_3c0 = &local_358;
      local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,6);
      local_358 = (longlong *)0x0;
      local_350 = 0;
      local_1e0 = 0;
      cVar3 = FUN_140e98b90(*(undefined8 *)(param_1 + 0x6a8),param_1 + 0x6b0,&local_348,0);
      plVar11 = local_358;
      for (iVar12 = (int)local_350; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_358 != (longlong *)0x0) {
        FMemory::Free(local_358);
      }
      if (local_348 != 0) {
        FMemory::Free();
      }
      if (cVar3 != '\0') {
        cVar3 = FUN_142ebe120(param_1);
        pwVar10 = L"gearHeader";
        if (cVar3 != '\0') {
          pwVar10 = L"gridItems.gearHeader";
        }
        uVar4 = FUN_142085870(*(undefined8 *)(param_1 + 0x6a8),local_130,pwVar10);
        FUN_142ede260(param_1 + 0x7a8,uVar4);
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_128 + 1;
          lVar2 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_128 + 8))(local_128,1);
            }
          }
        }
        uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_f0,L"Gear",L"GFxVaultCardMenu",L"GearHeaderText");
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x7a8,uVar4,1,0);
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_e8 + 1;
          lVar2 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar1 = (int *)((longlong)local_e8 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
            }
          }
        }
        cVar3 = FUN_142ebe120(param_1);
        pwVar10 = L"itemsHeader";
        if (cVar3 != '\0') {
          pwVar10 = L"gridItems.itemsHeader";
        }
        uVar4 = FUN_142085870(*(undefined8 *)(param_1 + 0x6a8),local_170,pwVar10);
        FUN_142ede260(param_1 + 0x790,uVar4);
        if (local_168 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_168 + 1;
          lVar2 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_168)(local_168);
            LOCK();
            piVar1 = (int *)((longlong)local_168 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_168 + 8))(local_168,1);
            }
          }
        }
        uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_120,L"Items",L"GFxVaultCardMenu",L"ItemsHeaderText");
        UMistDebugEntityScreen::InspectEntity(param_1 + 0x790,uVar4,1,0);
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_118 + 1;
          lVar2 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar1 = (int *)((longlong)local_118 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
      }
      local_328 = 0;
      local_320 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_328,0);
      FGenericPlatformString::Memcpy(local_328,L"navBarIcon",0x16);
      local_3c0 = &local_338;
      local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,6);
      local_338 = (longlong *)0x0;
      local_330 = 0;
      local_1d8 = 0;
      FUN_140e98b90(*(undefined8 *)(param_1 + 0x6a8),param_1 + 0x6b8,&local_328,0);
      plVar11 = local_338;
      for (iVar12 = (int)local_330; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_338 != (longlong *)0x0) {
        FMemory::Free(local_338);
      }
      if (local_328 != 0) {
        FMemory::Free();
      }
    }
    local_2f8 = 0;
    local_2f0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f8,0);
    FGenericPlatformString::Memcpy(local_2f8,L"floatingPannel",0x1e);
    local_3c0 = &local_318;
    local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,6);
    local_318 = (longlong *)0x0;
    local_310 = 0;
    local_1d0 = 0;
    cVar3 = FUN_141203330(*(undefined8 *)(param_1 + 0x600),(undefined8 *)(param_1 + 0x6d0),
                          &local_2f8,0);
    plVar11 = local_318;
    for (iVar12 = (int)local_310; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_318 != (longlong *)0x0) {
      FMemory::Free(local_318);
    }
    if (local_2f8 != 0) {
      FMemory::Free();
    }
    if (cVar3 != '\0') {
      local_2d8 = 0;
      local_2d0 = 0x1a;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
      FGenericPlatformString::Memcpy(local_2d8,L"keysRequiredPunch.keyType",0x34);
      local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,6);
      local_2e8 = (longlong *)0x0;
      local_2e0 = 0;
      local_1c8 = 0;
      local_3c0 = &local_2e8;
      FUN_140e98b90(*(undefined8 *)(param_1 + 0x6d0),param_1 + 0x6c0,&local_2d8,0);
      plVar11 = local_2e8;
      for (iVar12 = (int)local_2e0; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_2e8 != (longlong *)0x0) {
        FMemory::Free(local_2e8);
      }
      if (local_2d8 != 0) {
        FMemory::Free();
      }
    }
    local_2b8 = 0;
    local_2b0 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
    FGenericPlatformString::Memcpy(local_2b8,L"leftPannel",0x16);
    local_3c0 = &local_2c8;
    local_2c8 = (longlong *)0x0;
    local_2c0 = 0;
    local_178 = 0;
    local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,6);
    cVar3 = FUN_141202fc0(*(undefined8 *)(param_1 + 0x600),param_1 + 0x6d8,&local_2b8,0);
    plVar11 = local_2c8;
    for (iVar12 = (int)local_2c0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_2c8 != (longlong *)0x0) {
      FMemory::Free(local_2c8);
    }
    if (local_2b8 != 0) {
      FMemory::Free();
    }
    if (cVar3 != '\0') {
      local_288 = 0;
      local_280 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
      FGenericPlatformString::Memcpy(local_288,L"navBar",0xe);
      local_3c8 = &local_308;
      local_308 = (longlong *)0x0;
      local_300 = 0;
      local_1c0 = 0;
      puVar5 = (undefined8 *)(param_1 + 0x6e0);
      uVar4 = FUN_140ecb6b0(*(undefined8 *)(param_1 + 0x6d8),&local_288,0,6);
      *puVar5 = uVar4;
      plVar11 = local_308;
      for (iVar12 = (int)local_300; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_308 != (longlong *)0x0) {
        FMemory::Free(local_308);
      }
      if (local_288 != 0) {
        FMemory::Free();
      }
      local_268 = 0;
      local_260 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
      FGenericPlatformString::Memcpy(local_268,L"navBar",0xe);
      local_3c0 = &local_278;
      local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,6);
      local_278 = (longlong *)0x0;
      local_270 = 0;
      local_1b8 = 0;
      cVar3 = FUN_140f15e80(*(undefined8 *)(param_1 + 0x6d8),puVar5,&local_268,0);
      plVar11 = local_278;
      for (iVar12 = (int)local_270; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_278 != (longlong *)0x0) {
        FMemory::Free(local_278);
      }
      if (local_268 != 0) {
        FMemory::Free();
      }
      if (cVar3 != '\0') {
        local_248 = 0;
        local_240 = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
        FGenericPlatformString::Memcpy(local_248,L"categoryLabel",0x1c);
        local_3c0 = &local_258;
        local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,6);
        local_258 = (longlong *)0x0;
        local_250 = 0;
        local_1b0 = 0;
        FUN_140e99270(*puVar5,param_1 + 0x6f8,&local_248,0);
        plVar11 = local_258;
        for (iVar12 = (int)local_250; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 2;
        }
        if (local_258 != (longlong *)0x0) {
          FMemory::Free(local_258);
        }
        if (local_248 != 0) {
          FMemory::Free();
        }
      }
      uVar4 = FUN_142085870(*(undefined8 *)(param_1 + 0x6d8),local_160,L"myKeys.keyCounterDiamond");
      FUN_142ede260(param_1 + 0x760,uVar4);
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_158 + 1;
        lVar2 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar1 = (int *)((longlong)local_158 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_158 + 8))(local_158,1);
          }
        }
      }
      uVar4 = FUN_142085870(*(undefined8 *)(param_1 + 0x6d8),local_150,L"myKeys.myKeysTitle.label");
      FUN_142ede260(param_1 + 0x778,uVar4);
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_148 + 1;
        lVar2 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar1 = (int *)((longlong)local_148 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_108,L"My Keys",L"GFxVaultCardMenu",L"MyKeysText");
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x778,uVar4,1,0);
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_100 + 1;
        lVar2 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
          }
        }
      }
      local_228 = 0;
      local_220 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
      FGenericPlatformString::Memcpy(local_228,L"myKeys.keyType",0x1e);
      local_3c0 = &local_238;
      local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,6);
      local_238 = (longlong *)0x0;
      local_230 = 0;
      local_1a8 = 0;
      FUN_140e98b90(*(undefined8 *)(param_1 + 0x6d8),param_1 + 0x6c8,&local_228,0);
      plVar11 = local_238;
      for (iVar12 = (int)local_230; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_238 != (longlong *)0x0) {
        FMemory::Free(local_238);
      }
      if (local_228 != 0) {
        FMemory::Free();
      }
    }
    local_208 = 0;
    local_200 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
    FGenericPlatformString::Memcpy(local_208,L"rewardTypes",0x18);
    local_3c0 = &local_218;
    local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,6);
    local_218 = (longlong *)0x0;
    local_210 = 0;
    local_1a0 = 0;
    cVar3 = FUN_140e98b90(*(undefined8 *)(param_1 + 0x600),param_1 + 0x728,&local_208,0);
    plVar11 = local_218;
    for (iVar12 = (int)local_210; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_218 != (longlong *)0x0) {
      FMemory::Free(local_218);
    }
    if (local_208 != 0) {
      FMemory::Free();
    }
    if (cVar3 != '\0') {
      uVar4 = FUN_142085870(*(undefined8 *)(param_1 + 0x728),local_140,L"keyAmount");
      FUN_142ede260(param_1 + 0x7c0,uVar4);
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_138 + 1;
        lVar2 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar1 = (int *)((longlong)local_138 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_138 + 8))(local_138,1);
          }
        }
      }
      local_1f8 = 0;
      local_1f0 = 0;
      FUN_142f0fdc0(param_1 + 0x7c0,&local_1f8,1,0);
      if (local_1f8 != 0) {
        FMemory::Free();
      }
    }
  }
  local_3b8 = 0xffffffff;
  local_3b4 = 0;
  local_3b0 = (wchar_t *)0x0;
  local_3a8 = 0;
  local_3a0 = (wchar_t *)0x0;
  local_398 = 0;
  local_390 = (undefined8 *)0x0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 7;
  local_370 = 1;
  FWeakObjectPtr::operator=(&local_3b8,*(undefined8 *)(param_1 + 0x6b0));
  cVar3 = FUN_142ebe120(param_1);
  pwVar10 = L"";
  if (cVar3 != '\0') {
    pwVar10 = L"gridItems";
  }
  if (local_3b0 != pwVar10) {
    if (*pwVar10 != L'\0') {
      do {
        lVar9 = lVar9 + 1;
      } while (pwVar10[lVar9] != L'\0');
      uVar8 = (int)lVar9 + 1;
    }
    uVar6 = local_3a8._4_4_;
    local_3a8 = (ulonglong)local_3a8._4_4_ << 0x20;
    iVar12 = iVar7;
    if (uVar6 != uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_3b0,uVar8);
      iVar12 = (int)local_3a8;
      uVar6 = local_3a8._4_4_;
    }
    local_3a8 = CONCAT44(local_3a8._4_4_,iVar12 + uVar8);
    if ((int)uVar6 < (int)(iVar12 + uVar8)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3b0);
    }
    if (uVar8 != 0) {
      _guard_xfg_dispatch_icall_nop(local_3b0,pwVar10,(longlong)(int)uVar8 * 2);
    }
  }
  if (local_3a0 != L"scrollBar") {
    uVar8 = local_398._4_4_;
    local_398 = (ulonglong)local_398._4_4_ << 0x20;
    iVar12 = iVar7;
    if (uVar8 != 10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_3a0,10);
      iVar12 = (int)local_398;
      uVar8 = local_398._4_4_;
    }
    local_398 = CONCAT44(local_398._4_4_,iVar12 + 10);
    if ((int)uVar8 < iVar12 + 10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a0);
    }
    builtin_wcsncpy(local_3a0,L"scrollBar",10);
  }
  if (local_390 != &DAT_144704a78) {
    uVar8 = local_388._4_4_;
    local_388 = (ulonglong)local_388._4_4_ << 0x20;
    if (uVar8 != 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_390,4);
      iVar7 = (int)local_388;
      uVar8 = local_388._4_4_;
    }
    local_388 = CONCAT44(local_388._4_4_,iVar7 + 4);
    if ((int)uVar8 < iVar7 + 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_390);
    }
    *local_390 = 0x77006f0072;
  }
  local_380 = FUN_1413a0f70();
  local_378 = 7;
  cVar3 = FUN_142ebe120(param_1);
  if (cVar3 == '\0') {
    local_370 = *(undefined4 *)(param_1 + 0x940);
  }
  else {
    local_370 = *(undefined4 *)(param_1 + 0x944);
  }
  local_36c = *(undefined4 *)(param_1 + 0x948);
  local_368 = *(undefined4 *)(param_1 + 0x94c);
  FUN_14122b0d0(param_1 + 0x818,&local_3b8);
  *(undefined4 *)(param_1 + 0x8c4) = 2;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_88[0] = &LAB_141213fb0;
  FUN_1420849a0(param_1,local_d8,local_88);
  if (local_48 != 0) {
    plVar11 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar11 = local_58;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_14208c4f0(param_1,local_d8);
  if (local_390 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_3a0 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_3b0 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141235e50 FUN_141235e50 body=451 status=ok
// SIG undefined FUN_141235e50(void)

void FUN_141235e50(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x6b8) == 0) {
    if (param_2 == 0) {
LAB_141235eae:
      lVar2 = lVar3;
    }
    else {
      lVar2 = UTextBlock::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar2 = param_2;
      if (!bVar1) goto LAB_141235eae;
    }
    *(longlong *)(param_1 + 0x6b8) = lVar2;
  }
  if (*(longlong *)(param_1 + 0x6c8) == 0) {
    if (param_2 == 0) {
LAB_141235eff:
      lVar2 = lVar3;
    }
    else {
      lVar2 = AGameStateBase::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar2 = param_2;
      if (!bVar1) goto LAB_141235eff;
    }
    *(longlong *)(param_1 + 0x6c8) = lVar2;
  }
  if (*(longlong *)(param_1 + 0x6a8) == 0) {
    if (param_2 == 0) {
LAB_141235f50:
      lVar2 = lVar3;
    }
    else {
      lVar2 = FUN_1430e38c0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar2 = param_2;
      if (!bVar1) goto LAB_141235f50;
    }
    *(longlong *)(param_1 + 0x6a8) = lVar2;
  }
  if (*(longlong *)(param_1 + 0x6b0) != 0) goto LAB_141235fab;
  if (param_2 == 0) {
LAB_141235fa1:
    lVar2 = lVar3;
  }
  else {
    lVar2 = FUN_1430e3990();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar2 = param_2;
    if (!bVar1) goto LAB_141235fa1;
  }
  *(longlong *)(param_1 + 0x6b0) = lVar2;
LAB_141235fab:
  if (*(longlong *)(param_1 + 0x6c0) == 0) {
    if (param_2 != 0) {
      lVar2 = FUN_1430e4ad0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar3 = param_2;
      }
    }
    *(longlong *)(param_1 + 0x6c0) = lVar3;
  }
  AActor::OnSubobjectCreatedFromReplication(param_1,param_2);
  return;
}



// FUNCTION 141236020 FUN_141236020 body=312 status=ok
// SIG undefined FUN_141236020(void)

void FUN_141236020(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x30) == (int)param_1[0x10a]) {
    if ((lVar8 != 0) && (*(int *)(lVar8 + 8) != 0)) {
      lVar6 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
      lVar8 = *param_2;
      if (*(longlong *)(lVar8 + 0x10) != 0) {
        lVar7 = UEnvQueryItemType::GetPrivateStaticClass();
        lVar9 = *(longlong *)(lVar8 + 0x10);
        for (lVar8 = lVar9; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
          if (lVar8 == lVar7) goto joined_r0x0001412360b3;
        }
      }
      lVar9 = 0;
joined_r0x0001412360b3:
      do {
        if (lVar9 == 0) goto LAB_1412360fa;
        if (lVar9 == lVar6) break;
        lVar9 = *(longlong *)(lVar9 + 0x30);
      } while( true );
    }
    param_1[0xde] = 0;
    lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    fVar3 = *(float *)(lVar8 + 0x790);
    *(undefined4 *)(param_1 + 0x10a) = 0xffffffff;
    *(float *)((longlong)param_1 + 0x854) = fVar3 + 1.0;
LAB_1412360fa:
    lVar8 = FUN_142be4ff0(*param_2,0);
    param_1[0xde] = lVar8;
    plVar5 = (longlong *)param_2[1];
  }
  else {
    plVar5 = (longlong *)param_2[1];
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return;
}



// FUNCTION 141236160 FUN_141236160 body=41 status=ok
// SIG undefined FUN_141236160(void)

undefined4 FUN_141236160(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_141234800(param_1,0);
  FUN_141237f70(param_1);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 141236190 FUN_141236190 body=35 status=ok
// SIG undefined FUN_141236190(void)

undefined4 FUN_141236190(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  
  FUN_141234800(param_1,param_4 + 1);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1412361c0 FUN_1412361c0 body=43 status=ok
// SIG undefined FUN_1412361c0(void)

undefined4 FUN_1412361c0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  
  FUN_141234800(param_1,param_4 + 1);
  FUN_141237f70(param_1);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1412361f0 FUN_1412361f0 body=154 status=ok
// SIG undefined FUN_1412361f0(void)

void FUN_1412361f0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  cVar1 = FWeakObjectPtr::IsValid(param_2);
  if (cVar1 != '\0') {
    local_res18 = *param_2;
    local_res1c = param_2[1];
    lVar2 = *(longlong *)(param_1 + 0x12b8);
    lVar3 = (longlong)*(int *)(param_1 + 0x12c0) * 0x20 + lVar2;
    if (lVar2 != lVar3) {
      while (cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar2,&local_res18),
            cVar1 == '\0') {
        lVar2 = lVar2 + 0x20;
        if (lVar2 == lVar3) {
          return;
        }
      }
      if (lVar2 != 0) {
        FUN_1412572d0(lVar2,param_1);
      }
    }
  }
  return;
}



// FUNCTION 141236290 FUN_141236290 body=393 status=ok
// SIG undefined FUN_141236290(void)

void FUN_141236290(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 local_48 [32];
  longlong local_28;
  
  if (param_2 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x2e0);
  }
  iVar1 = *(int *)(param_1 + 0x340);
  if (iVar1 == 0) {
    FUN_1412131f0(param_1,iVar4,0,0);
    return;
  }
  if (iVar1 == 1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146877118) &&
       (_Init_thread_header(&DAT_146877118), DAT_146877118 == -1)) {
      FName::FName(&DAT_146877110,L"Sell",1);
      _Init_thread_footer(&DAT_146877118);
    }
    if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x330))) &&
        (*(longlong *)(param_1 + 800) != 0)) &&
       (plVar3 = (longlong *)
                 (**(code **)(*(longlong *)(*(longlong *)(param_1 + 800) + 0xd80) + 0x18))(),
       plVar3 != (longlong *)0x0)) {
      FUN_142fde510(local_48);
      cVar2 = FUN_142ffa4f0(plVar3,(longlong)iVar4 * 0x110 + *(longlong *)(param_1 + 0x328) + 0xd8,
                            local_48);
      if (((cVar2 != '\0') &&
          (cVar2 = (**(code **)(*plVar3 + 0x480))(plVar3,local_48), cVar2 != '\0')) &&
         (local_28 != 0)) {
        FUN_140e61550(*(undefined8 *)(param_1 + 0x338));
      }
    }
  }
  else if (iVar1 == 2) {
    FUN_1412131f0(param_1,iVar4,1,0);
    return;
  }
  return;
}



// FUNCTION 141236420 FUN_141236420 body=236 status=ok
// SIG undefined FUN_141236420(void)

void FUN_141236420(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if (*(char *)(param_1 + 0xaa) != '\0') {
    uVar8 = 0;
    plVar9 = *(longlong **)(param_1 + 0x98);
    uVar10 = (longlong)*(int *)(param_1 + 0xa0) & 0x1fffffffffffffff;
    if (plVar9 + *(int *)(param_1 + 0xa0) < plVar9) {
      uVar10 = uVar8;
    }
    if (uVar10 != 0) {
      do {
        lVar2 = *plVar9;
        if (*(char *)(lVar2 + 0xa9) != '\0') {
          FUN_141215940(lVar2);
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(param_2,iVar1);
          }
          puVar7 = (undefined4 *)((longlong)iVar1 * 0x40 + *param_2);
          *puVar7 = *(undefined4 *)(lVar2 + 0x20);
          uVar6 = *(undefined8 *)(lVar2 + 0x38);
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(lVar2 + 0x30);
          *(undefined8 *)(puVar7 + 6) = uVar6;
          uVar6 = *(undefined8 *)(lVar2 + 0x48);
          *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(lVar2 + 0x40);
          *(undefined8 *)(puVar7 + 10) = uVar6;
          uVar3 = *(undefined4 *)(lVar2 + 0x54);
          uVar4 = *(undefined4 *)(lVar2 + 0x58);
          uVar5 = *(undefined4 *)(lVar2 + 0x5c);
          puVar7[0xc] = *(undefined4 *)(lVar2 + 0x50);
          puVar7[0xd] = uVar3;
          puVar7[0xe] = uVar4;
          puVar7[0xf] = uVar5;
        }
        FUN_141236420(lVar2,param_2);
        plVar9 = plVar9 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar10);
    }
  }
  return;
}



// FUNCTION 141236510 FUN_141236510 body=85 status=ok
// SIG undefined FUN_141236510(void)

void FUN_141236510(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  lVar3 = 0;
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = UWorld::GetGameState<APVPGameState>(uVar2);
  }
  if (((char)param_1[0x25] != '\x03') && ((lVar3 == 0 || (*(char *)(lVar3 + 0x638) == '\0')))) {
    return;
  }
  FUN_1426a2f50(param_1);
  return;
}



// FUNCTION 141236580 FUN_141236580 body=132 status=ok
// SIG undefined FUN_141236580(void)

void FUN_141236580(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_14121ff10();
  lVar2 = USignificanceManager::GetWorld(param_1);
  if (lVar2 != 0) {
    lVar2 = USignificanceManager::GetWorld(param_1);
    lVar2 = *(longlong *)(lVar2 + 400);
    if (lVar2 != 0) {
      lVar3 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar4 = FUN_1423ac7e0(lVar2);
        *(undefined8 *)(param_1 + 0x1b30) = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 141236610 FUN_141236610 body=400 status=ok
// SIG undefined FUN_141236610(void)

void FUN_141236610(longlong param_1,longlong param_2,undefined4 param_3,char param_4,char param_5)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong local_58;
  undefined4 local_50;
  char local_4c;
  undefined8 local_48;
  undefined8 local_40;
  
  if (param_2 != 0) {
    iVar8 = -1;
    if (param_4 != '\0') {
      local_4c = param_5;
      local_48 = 0;
      local_40 = 0;
      local_58 = param_2;
      local_50 = param_3;
      iVar8 = FUN_141200d70(param_1 + 0x6f0,&local_58);
      FUN_1412094e0(&local_58);
    }
    plVar7 = *(longlong **)(param_1 + 0x6e0);
    plVar1 = plVar7 + *(int *)(param_1 + 0x6e8);
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      lVar6 = *plVar7;
      if (((lVar6 != 0) && (lVar4 = FUN_142ceeb40(lVar6,0), lVar4 != 0)) &&
         (plVar5 = (longlong *)FUN_142ceefb0(lVar6), plVar5 != (longlong *)0x0)) {
        lVar6 = FUN_1429e18b0();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) &&
           ((param_5 == '\0' || (cVar3 = (**(code **)(*plVar5 + 0x768))(plVar5), cVar3 != '\0')))) {
          if (param_4 == '\0') {
            FUN_142d408e0(param_2,plVar5,param_3,0,0);
          }
          else {
            FUN_141241870((longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x6f0));
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1412367a0 FUN_1412367a0 body=17 status=ok
// SIG undefined FUN_1412367a0(void)

void FUN_1412367a0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x690);
  if (lVar1 != 0) {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x188) + 0x780))();
    uVar6 = UGameplayStatics::GetGameInstance(lVar1);
    cVar4 = FUN_142d86da0(uVar6);
    plVar7 = *(longlong **)(lVar1 + 0x438);
    plVar8 = plVar7 + (longlong)*(int *)(lVar1 + 0x440) * 2;
    for (; plVar7 != plVar8; plVar7 = plVar7 + 2) {
      lVar2 = *plVar7;
      if ((((*(char *)(lVar2 + 0x38) == param_2) &&
           ((*(char *)(lVar2 + 0x39) == '\0' || (cVar3 != '\0')))) &&
          ((*(char *)(lVar2 + 0x3a) == '\0' || (cVar4 == '\0')))) &&
         ((*(longlong *)(lVar2 + 0x40) == 0 ||
          (cVar5 = FUN_142c48f60(*(longlong *)(lVar2 + 0x40),*(undefined8 *)(lVar1 + 0x188),0),
          cVar5 != '\0')))) {
        (**(code **)(*(longlong *)*plVar7 + 0x280))((longlong *)*plVar7,lVar1);
      }
    }
    return;
  }
  return;
}



// FUNCTION 1412367c0 FUN_1412367c0 body=177 status=ok
// SIG undefined FUN_1412367c0(void)

void FUN_1412367c0(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = UAnimInstance::IsPlayingSlotAnimation
                    (param_1,*(undefined8 *)(param_1 + 0xb58),*(undefined8 *)(param_1 + 0xb50));
  if (cVar1 == '\0') {
    cVar1 = UAnimInstance::IsPlayingSlotAnimation
                      (param_1,*(undefined8 *)(param_1 + 0xb60),*(undefined8 *)(param_1 + 0xb50));
    if ((cVar1 == '\0') &&
       (((lVar2 = *(longlong *)(param_1 + 0xb58), lVar2 != 0 && (param_3 != '\0')) ||
        ((lVar2 = *(longlong *)(param_1 + 0xb60), lVar2 != 0 && (param_3 == '\0')))))) {
      FUN_14227a0e0(param_1,lVar2,*(undefined8 *)(param_1 + 0xb50),0,0,0x3f800000,1,0xbf800000,0);
    }
  }
  return;
}



// FUNCTION 141236880 FUN_141236880 body=277 status=ok
// SIG undefined FUN_141236880(void)

undefined8 FUN_141236880(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (((*(longlong *)(param_1 + 0x708) == 0) && (*(longlong *)(param_1 + 0x6f8) != 0)) &&
     (lVar2 = FUN_1412291c0(), lVar2 != 0)) {
    uVar3 = FUN_1423ac7e0(lVar2);
    *(undefined8 *)(param_1 + 0x708) = uVar3;
  }
  lVar2 = *(longlong *)(param_1 + 0x708);
  if ((lVar2 != 0) && (param_2 != 0)) {
    lVar4 = UTextureRenderTarget::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) &&
        (lVar4 = FUN_14227a0e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x468),0,0,0x3f800000,1,
                               0xbf800000,0), lVar4 != 0)) &&
       (lVar2 = UAnimInstance::GetActiveInstanceForMontage(lVar2,lVar4), lVar2 != 0)) {
      uVar3 = FUN_1422752f0(lVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1412369a0 FUN_1412369a0 body=843 status=ok
// SIG undefined FUN_1412369a0(void)

void FUN_1412369a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res8;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar8 = *(longlong *)(param_1 + 0x38);
  if (lVar8 == 0) {
LAB_1412369f1:
    lVar8 = 0;
  }
  else {
    lVar6 = FUN_1413a0d30();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1412369f1;
  }
  lVar6 = *(longlong *)(param_1 + 0x1e0);
  if (lVar6 == 0) {
    return;
  }
  if (*(longlong *)(lVar6 + 0x2f8) != 0) {
    FUN_142f0f790(*(longlong *)(lVar6 + 0x2f8),1);
    lVar6 = *(longlong *)(param_1 + 0x1e0);
  }
  local_res8 = param_1;
  local_b8 = param_1;
  local_b0 = lVar8;
  local_a8 = param_1;
  local_a0 = lVar8;
  FUN_142ecffe0(lVar6);
  if (lVar8 == 0) {
    return;
  }
  local_90 = (longlong *)(lVar8 + 0x888);
  lVar9 = *local_90;
  local_88 = &local_a8;
  bVar4 = false;
  bVar3 = false;
  local_80 = &local_res8;
  lVar6 = lVar9 + (longlong)*(int *)(lVar8 + 0x890) * 0x28;
  local_98 = param_1;
  if (lVar9 != lVar6) {
    do {
      if (*(char *)(lVar9 + 0x22) != '\0') {
        bVar3 = true;
      }
      if (*(char *)(lVar9 + 0x21) != '\0') {
        bVar4 = true;
      }
      lVar9 = lVar9 + 0x28;
    } while (lVar9 != lVar6);
    if (bVar4) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_60,L"Daily Challenges",L"GFxVaultCardMenu",L"DailyChallengesHeader");
      FUN_14120bbb0(&local_b8,uVar7);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      FUN_14120b7b0(&local_98,1);
    }
    if (bVar3) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_48,L"Weekly Challenges",L"GFxVaultCardMenu",L"WeeklyChallengesHeader"
                        );
      FUN_14120bbb0(&local_b8,uVar7);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      FUN_14120b7b0(&local_98,0);
    }
  }
  if (*(longlong *)(param_1 + 0x178) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    return;
  }
  piVar2 = (int *)(*(longlong *)(param_1 + 0x180) + 8);
  LOCK();
  iVar5 = *piVar2;
  if (iVar5 == 0) {
    *piVar2 = 0;
    iVar5 = 0;
  }
  UNLOCK();
  if (iVar5 < 1) {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(lVar8 + 0x58c);
  if (lVar6 != 0) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (lVar8 = FUN_140e822f0(lVar6 + 0x1b10,*(undefined4 *)(lVar8 + 0x898)), lVar8 != 0)) {
      lVar8 = lVar8 + 0x30;
      goto LAB_141236c6e;
    }
  }
  lVar8 = FUN_1404b03b0();
LAB_141236c6e:
  FText::FText(local_78,lVar8);
  UMistDebugEntityScreen::InspectEntity(param_1 + 0x170,local_78,1,0);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 141236cf0 FUN_141236cf0 body=1625 status=ok
// SIG undefined FUN_141236cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141236cf0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined4 local_148;
  undefined4 local_144;
  undefined2 local_140;
  char local_13e;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar4 = (longlong *)(param_1 + 0x888);
  iVar16 = *(int *)(param_1 + 0x890);
  local_128 = param_1;
  if (iVar16 != 0) {
    plVar18 = (longlong *)(*plVar4 + 8);
    do {
      plVar17 = (longlong *)*plVar18;
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar17 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
      plVar18 = plVar18 + 5;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  *(undefined4 *)(param_1 + 0x890) = 0;
  if (*(int *)(param_1 + 0x894) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (plVar4,0);
  }
  lVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar9 != 0) {
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_141236dee;
  }
  lVar9 = 0;
LAB_141236dee:
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (((lVar9 != 0) &&
      (lVar10 = *(longlong *)(lVar9 + 0xc98),
      local_f8 = (undefined4 *)CONCAT44(local_f8._4_4_,(undefined4)local_f8),
      uStack_f0 = (ulonglong *)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0), lVar10 != 0)) &&
     (local_f8 = (undefined4 *)CONCAT44(local_f8._4_4_,(undefined4)local_f8),
     uStack_f0 = (ulonglong *)CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0),
     *(longlong *)(DAT_146b33f38 + 0x58) != 0)) {
    local_138 = (longlong *)0x0;
    local_130 = 0;
    FUN_140e7eaf0(lVar9 + 0x1b10,*(undefined4 *)(param_1 + 0x898),&local_138);
    plVar18 = local_138 + (int)local_130;
    plVar17 = local_138;
    lVar9 = param_1;
    local_168 = plVar18;
    if (local_138 != plVar18) {
LAB_141236e90:
      if (*plVar17 != 0) {
        lVar11 = FUN_142dfdfe0();
        for (lVar9 = *plVar17; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
          if (lVar9 == lVar11) {
            if (*plVar17 != 0) {
              lVar12 = FUN_142dfdfe0();
              lVar9 = *plVar17;
              lVar11 = lVar9;
              goto joined_r0x000141236eda;
            }
            break;
          }
        }
      }
      goto LAB_1412372c7;
    }
LAB_1412372e6:
    param_1 = lVar9;
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
  }
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FUN_1412369a0();
  }
  return;
joined_r0x000141236eda:
  if (lVar11 == 0) goto LAB_141236eee;
  if (lVar11 == lVar12) goto LAB_141236ef0;
  lVar11 = *(longlong *)(lVar11 + 0x30);
  goto joined_r0x000141236eda;
LAB_141236eee:
  lVar9 = 0;
LAB_141236ef0:
  lVar9 = FUN_142dcdc10(lVar10,lVar9);
  if (lVar9 != 0) {
    lVar11 = FUN_1413f2350();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_141236f38;
  }
  lVar9 = 0;
LAB_141236f38:
  if (lVar9 != 0) {
    uVar13 = FUN_1404b03b0();
    FText::FText(local_160,uVar13);
    local_140 = 0;
    local_13e = 0;
    lVar11 = FText::FText(local_80,lVar9 + 0x58);
    uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_a8,&DAT_144707900,L"GFxVaultCardMenu",L"ChallengeFormat");
    puVar14 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar13);
    local_68[0] = 4;
    FText::FText(local_58,lVar11);
    local_108 = *puVar14;
    local_118 = local_68;
    puStack_110 = local_38;
    local_100 = puVar14[1];
    local_40 = '\x01';
    if (local_100 != 0) {
      LOCK();
      *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
      UNLOCK();
    }
    local_f8 = local_118;
    uStack_f0 = puStack_110;
    uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_f8);
    uVar13 = FText::Format(local_c0,&local_108,uVar13);
    FText::FText(local_d8,uVar13);
    plVar18 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_e8);
    plVar18 = local_50;
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
    plVar18 = (longlong *)puVar14[1];
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar18 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
    plVar18 = *(longlong **)(lVar11 + 8);
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar18 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
    FText::operator=(local_160,local_d8);
    plVar18 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
    plVar18 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
    if (*plVar17 != 0) {
      lVar15 = FUN_142dfdfe0();
      lVar11 = *plVar17;
      for (lVar12 = lVar11; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30)) {
        if (lVar12 == lVar15) goto LAB_1412371c5;
      }
    }
    lVar11 = 0;
LAB_1412371c5:
    cVar7 = FUN_142dd3360(lVar10,lVar11);
    local_13e = *(char *)(lVar9 + 0x25c);
    local_140 = CONCAT11(local_13e == '\0',cVar7);
    local_144 = 0;
    if (0 < *(int *)(lVar9 + 0xa8)) {
      iVar16 = *(int *)(*(longlong *)(lVar9 + 0xa0) + 0x10);
      if (0 < iVar16) {
        local_144 = *(undefined4 *)
                     (*(longlong *)(*(longlong *)(lVar9 + 0xa0) + 8) + -8 + (longlong)iVar16 * 8);
      }
    }
    uVar8 = local_144;
    if (cVar7 == '\0') {
      uVar8 = FUN_142dcdd00(lVar9);
    }
    local_148 = uVar8;
    iVar16 = *(int *)(param_1 + 0x890);
    *(int *)(param_1 + 0x890) = iVar16 + 1;
    if (*(int *)(param_1 + 0x894) < iVar16 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar4,iVar16);
    }
    lVar9 = *plVar4 + (longlong)iVar16 * 0x28;
    FText::FText(lVar9,local_160);
    plVar1 = local_158;
    *(undefined4 *)(lVar9 + 0x18) = local_148;
    *(undefined4 *)(lVar9 + 0x1c) = local_144;
    *(undefined1 *)(lVar9 + 0x20) = (undefined1)local_140;
    *(undefined1 *)(lVar9 + 0x21) = local_140._1_1_;
    *(char *)(lVar9 + 0x22) = local_13e;
    plVar18 = local_168;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_158 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar18 = local_168;
        if (iVar16 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
          plVar18 = local_168;
        }
      }
    }
  }
LAB_1412372c7:
  plVar17 = plVar17 + 1;
  lVar9 = local_128;
  if (plVar17 == plVar18) goto LAB_1412372e6;
  goto LAB_141236e90;
}



// FUNCTION 141237350 FUN_141237350 body=60 status=ok
// SIG undefined FUN_141237350(void)

void FUN_141237350(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x898) = param_2;
  FUN_141238d90();
  FUN_141236cf0(param_1);
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  FUN_141237f70(param_1);
  FUN_14123dc30(param_1);
  return;
}



// FUNCTION 141237390 FUN_141237390 body=3033 status=ok
// SIG undefined FUN_141237390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141237390(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined1 auStack_428 [32];
  undefined1 local_408;
  longlong **local_400;
  longlong *local_3f8;
  undefined8 local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  longlong *local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  undefined8 local_3c0;
  ulonglong *local_3b8;
  ulonglong *puStack_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  longlong local_398;
  undefined8 local_390;
  ulonglong local_388;
  undefined8 local_380;
  longlong local_378;
  undefined8 local_370;
  longlong local_368;
  longlong *local_360;
  ulonglong local_358;
  longlong *local_350;
  ulonglong local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined1 local_328 [16];
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  undefined1 local_2e0 [8];
  longlong *local_2d8;
  char local_2c8;
  char local_2c7;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [72];
  undefined1 local_d8 [72];
  undefined4 local_90 [2];
  longlong local_88;
  longlong *local_78;
  char local_68;
  undefined4 local_60 [2];
  longlong local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  uVar12 = 0;
  local_388 = local_388 & 0xffffffff00000000;
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) == 0) {
    return;
  }
  uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_278,L"Close",L"GFxVaultCardMenu",L"BackoutText");
  FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar10);
  if (local_270 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_270 + 1;
    lVar13 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_270)(local_270);
      LOCK();
      piVar1 = (int *)((longlong)local_270 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_270 + 8))(local_270,1);
      }
    }
  }
  if (*(int *)(param_1 + 0x8c4) == 1) {
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_260,L"Return To Vault Card",L"GFxVaultCardMenu",
                        L"ReturnToVaultCardText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar10);
    if (local_258 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_258 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_258)(local_258);
        LOCK();
        piVar1 = (int *)((longlong)local_258 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_258 + 8))(local_258,1);
        }
      }
    }
    iVar8 = FUN_141230ae0(param_1);
    local_88 = (longlong)iVar8;
    if (iVar8 < 1) {
      return;
    }
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_230,L"Open Chest ({0} Available)",L"GFxVaultCardMenu",
                        L"NumberOfChestsText");
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_140,uVar10);
    local_90[0] = 0;
    local_3b8 = (ulonglong *)local_90;
    local_68 = '\0';
    puStack_3b0 = (ulonglong *)local_60;
    local_370 = *puVar11;
    local_368 = puVar11[1];
    if (local_368 != 0) {
      LOCK();
      *(int *)(local_368 + 8) = *(int *)(local_368 + 8) + 1;
      UNLOCK();
    }
    local_338 = (undefined4 *)local_3b8;
    uStack_330 = puStack_3b0;
    uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_328,&local_338);
    uVar10 = FText::Format(local_248,&local_370,uVar10);
    FText::FText(local_2f8,uVar10);
    if (local_240 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_240 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_240)(local_240);
        LOCK();
        piVar1 = (int *)((longlong)local_240 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_240 + 8))(local_240,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_328);
    if ((local_68 != '\0') && (local_68 = '\0', local_78 != (longlong *)0x0)) {
      LOCK();
      plVar15 = local_78 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    plVar15 = (longlong *)puVar11[1];
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar15 + 1;
      lVar13 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146876c78,local_2f8);
    local_1e0 = local_228;
    if (local_2f0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_2f0 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_2f0)(local_2f0);
        LOCK();
        piVar1 = (int *)((longlong)local_2f0 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        local_1e0 = local_228;
        if (iVar8 == 1) {
          (**(code **)(*local_2f0 + 8))(local_2f0,1);
          local_1e0 = local_228;
        }
      }
    }
    goto LAB_141237aa0;
  }
  if (*(int *)(param_1 + 0x8c4) != 2) {
    return;
  }
  uVar16 = uVar12;
  if (*(longlong *)(param_1 + 0x6e0) == 0) {
LAB_141237750:
    bVar4 = false;
  }
  else {
    local_3e8 = 0;
    local_3e0 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
    FGenericPlatformString::Memcpy(local_3e8,L"prevPageHint",0x1a);
    local_400 = &local_3f8;
    local_408 = 6;
    local_3f8 = (longlong *)0x0;
    uVar16 = 3;
    local_3f0 = 0;
    local_388 = 0;
    cVar7 = FUN_140e98630(*(undefined8 *)(param_1 + 0x6e0),param_1 + 0x6e8,&local_3e8,0);
    if (cVar7 == '\0') goto LAB_141237750;
    bVar4 = true;
  }
  if ((uVar16 & 2) != 0) {
    uVar16 = (ulonglong)((uint)uVar16 & 0xfffffffd);
    plVar15 = local_3f8;
    for (iVar8 = (int)local_3f0; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_3f8 != (longlong *)0x0) {
      FMemory::Free(local_3f8);
    }
  }
  if (((uVar16 & 1) != 0) && (local_3e8 != 0)) {
    FMemory::Free();
  }
  bVar6 = false;
  bVar5 = false;
  if (bVar4) {
    plVar15 = *(longlong **)(param_1 + 0x6e8);
    if (*(int *)(param_1 + 0x8a8) < 2) {
      (**(code **)(*plVar15 + 0x278))(plVar15,0);
    }
    else {
      local_358 = uVar12;
      local_360 = plVar15;
      if (plVar15 != (longlong *)0x0) {
        uVar10 = UBlendableInterface::GetPrivateStaticClass();
        local_358 = UObjectBaseUtility::GetInterfaceAddress(plVar15,uVar10);
      }
      FUN_142f05530(*(undefined8 *)(param_1 + 0x5b0),&local_360,DAT_146876cb8);
      local_3a8 = 0;
      local_3a0 = 0;
      uVar10 = FText::FromString(local_218,&local_3a8);
      FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146876cb8,uVar10,1);
      if (local_210 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_210 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_210)(local_210);
          LOCK();
          piVar1 = (int *)((longlong)local_210 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_210 + 8))(local_210,1);
          }
        }
      }
      if (local_3a8 != 0) {
        FMemory::Free();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x6e0) == 0) {
LAB_141237911:
    bVar4 = false;
  }
  else {
    local_3c8 = 0;
    local_3c0 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,0);
    FGenericPlatformString::Memcpy(local_3c8,L"nextPageHint",0x1a);
    local_400 = &local_3d8;
    local_408 = 6;
    local_3d8 = (longlong *)0x0;
    bVar6 = true;
    bVar5 = true;
    local_3d0 = 0;
    local_340 = 0;
    cVar7 = FUN_140e98630(*(undefined8 *)(param_1 + 0x6e0),param_1 + 0x6f0,&local_3c8,0);
    if (cVar7 == '\0') goto LAB_141237911;
    bVar4 = true;
  }
  if (bVar5) {
    plVar15 = local_3d8;
    for (iVar8 = (int)local_3d0; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_3d8 != (longlong *)0x0) {
      FMemory::Free(local_3d8);
    }
  }
  if ((bVar6) && (local_3c8 != 0)) {
    FMemory::Free();
  }
  if (bVar4) {
    plVar15 = *(longlong **)(param_1 + 0x6f0);
    if (*(int *)(param_1 + 0x8a8) < 2) {
      (**(code **)(*plVar15 + 0x278))(plVar15,0);
    }
    else {
      local_350 = plVar15;
      if (plVar15 != (longlong *)0x0) {
        uVar10 = UBlendableInterface::GetPrivateStaticClass();
        uVar12 = UObjectBaseUtility::GetInterfaceAddress(plVar15,uVar10);
      }
      local_348 = uVar12;
      FUN_142f05530(*(undefined8 *)(param_1 + 0x5b0),&local_350,DAT_146876cb0);
      local_398 = 0;
      local_390 = 0;
      uVar10 = FText::FromString(local_200,&local_398);
      FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146876cb0,uVar10,1);
      if (local_1f8 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_1f8 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_1f8)(local_1f8);
          LOCK();
          piVar1 = (int *)((longlong)local_1f8 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_1f8 + 8))(local_1f8,1);
          }
        }
      }
      if (local_398 != 0) {
        FMemory::Free();
      }
    }
  }
  cVar7 = FUN_141257250(param_1);
  if (cVar7 != '\0') {
    iVar8 = FUN_141230ae0(param_1);
    if (0 < iVar8) {
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_1b8,L"Open Chest ({0} Available)",L"GFxVaultCardMenu",
                          L"NumberOfChestsText");
      puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_130,uVar10);
      local_60[0] = 0;
      local_3b8 = (ulonglong *)local_60;
      local_38 = '\0';
      puStack_3b0 = &local_30;
      local_380 = *puVar11;
      local_378 = puVar11[1];
      if (local_378 != 0) {
        LOCK();
        *(int *)(local_378 + 8) = *(int *)(local_378 + 8) + 1;
        UNLOCK();
      }
      local_58 = (longlong)iVar8;
      local_318 = (undefined4 *)local_3b8;
      uStack_310 = puStack_3b0;
      uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_308,&local_318);
      uVar10 = FText::Format(local_1d0,&local_380,uVar10);
      FText::FText(local_2e0,uVar10);
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_1c8 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_1c8)(local_1c8);
          LOCK();
          piVar1 = (int *)((longlong)local_1c8 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_1c8 + 8))(local_1c8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_308);
      if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
        LOCK();
        plVar15 = local_48 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
      plVar15 = (longlong *)puVar11[1];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar15 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146876c78,local_2e0);
      if (local_2d8 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_2d8 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_2d8)(local_2d8);
          LOCK();
          piVar1 = (int *)((longlong)local_2d8 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_2d8 + 8))(local_2d8,1);
          }
        }
      }
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_1b0 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar1 = (int *)((longlong)local_1b0 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
    }
    lVar13 = FUN_142eb65a0(param_1);
    if (lVar13 == 0) {
      return;
    }
    lVar14 = FUN_1413a0ec0();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return;
    }
    FUN_141207b20(&local_2c8);
    iVar8 = FUN_141228660(lVar13);
    uVar3 = *(undefined4 *)(lVar13 + 0x2d0);
    if (iVar8 == -1) {
      uVar10 = FUN_1412257c0(param_1,local_120,uVar3);
      FUN_141209700(&local_2c8,uVar10);
      FUN_1410b4290(local_120);
      if (local_2c8 == '\0') {
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_1a0,L"Inspect Item",L"GFxVaultCardMenu",L"InspectItemText");
        FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146876c80,uVar10);
        plVar15 = local_198;
      }
      else {
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_188,L"Re-roll item parts",L"GFxVaultCardMenu",
                            L"RerollGearPartsText");
        FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar10);
        plVar15 = local_180;
      }
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar15 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
    }
    else {
      uVar9 = FUN_141228660(lVar13);
      uVar10 = FUN_1412282a0(param_1,local_d8,uVar9,uVar3);
      FUN_141209700(&local_2c8,uVar10);
      FUN_1410b4290(local_d8);
    }
    if (local_2c8 == '\0') {
      if (local_2c7 == '\0') {
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_158,L"Spend Keys to Unlock Reward",L"GFxVaultCardMenu",
                            L"PurchaseVaultCardRewardText");
        FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar10);
        plVar15 = local_150;
      }
      else {
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_170,L"Claim Reward",L"GFxVaultCardMenu",
                            L"ClaimVaultCardRewardText");
        FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar10);
        plVar15 = local_168;
      }
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar15 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
    }
    FUN_1410b4290(&local_2c8);
    return;
  }
  uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_1e8,L"Activate Vault Card",L"GFxVaultCardMenu",
                      L"ActivateVaultCardPrompt");
  FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar10);
LAB_141237aa0:
  if (local_1e0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1e0 + 1;
    lVar13 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_1e0)(local_1e0);
      LOCK();
      piVar1 = (int *)((longlong)local_1e0 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_1e0 + 8))(local_1e0,1);
      }
    }
  }
  return;
}



// FUNCTION 141237f70 FUN_141237f70 body=651 status=ok
// SIG undefined FUN_141237f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141237f70(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong lStack_d0;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  longlong local_48;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      iVar5 = FUN_140e82730(lVar6 + 0x1b10,*(undefined4 *)(param_1 + 0x898));
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_78,&DAT_144707970,L"GFxVaultCardMenu",L"VaultCardKeyCounterText");
      puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_60,uVar8);
      local_50[0] = 0;
      local_c8 = local_50;
      local_28 = '\0';
      puStack_c0 = &local_20;
      local_d8 = *puVar9;
      lStack_d0 = puVar9[1];
      if (lStack_d0 != 0) {
        LOCK();
        *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
        UNLOCK();
      }
      local_48 = (longlong)iVar5;
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
      uVar8 = FText::Format(local_90,&local_d8,uVar8);
      FText::FText(local_a8,uVar8);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_88 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8);
      if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_38 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
      plVar3 = (longlong *)puVar9[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x760,local_a8,1,0);
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_a0 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_70 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141238200 FUN_141238200 body=1959 status=ok
// SIG undefined FUN_141238200(void)

void FUN_141238200(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *_Src;
  char cVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  int *piVar18;
  longlong *plVar19;
  int iVar20;
  longlong *plVar21;
  wchar_t *pwVar22;
  longlong **pplVar23;
  int local_128;
  int local_124;
  longlong local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_110;
  wchar_t *local_108;
  int local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  void *local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  if (param_1[0xdc] != 0) {
    pwVar22 = (wchar_t *)0x0;
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnNavCellSelectionChanged",L"::");
    pwVar12 = pwVar22;
    while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar12 = pwVar5;
    }
    FName::FName(&local_98,pwVar12 + 2,1);
    lVar15 = param_1[0xdc];
    plVar21 = (longlong *)(lVar15 + 0x180);
    FWeakObjectPtr::operator=(&local_128,0);
    local_120 = 0;
    FWeakObjectPtr::operator=(&local_128,param_1);
    local_120 = local_98;
    if ((local_98 != 0) && (lVar11 = FWeakObjectPtr::Get(&local_128), lVar11 != 0)) {
      UObject::FindFunction(lVar11,local_120);
    }
    piVar3 = (int *)*plVar21;
    iVar2 = *(int *)(lVar15 + 0x188);
    for (piVar18 = piVar3; piVar18 != piVar3 + (longlong)iVar2 * 4; piVar18 = piVar18 + 4) {
      if (((*piVar18 == local_128) && (piVar18[1] == local_124)) ||
         ((cVar9 = FWeakObjectPtr::IsValid(piVar18), cVar9 == '\0' &&
          (cVar9 = FWeakObjectPtr::IsValid(&local_128), cVar9 == '\0')))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) && (*(longlong *)(piVar18 + 2) == local_120)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        if ((int)((longlong)piVar18 - (longlong)piVar3 >> 4) != -1) goto LAB_14123839e;
        break;
      }
    }
    iVar2 = *(int *)(lVar15 + 0x188);
    lVar11 = (longlong)iVar2;
    *(int *)(lVar15 + 0x188) = iVar2 + 1;
    if (*(int *)(lVar15 + 0x18c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar21,iVar2);
    }
    lVar15 = *plVar21;
    *(int *)(lVar15 + lVar11 * 0x10) = local_128;
    *(int *)(lVar15 + 4 + lVar11 * 0x10) = local_124;
    *(longlong *)(lVar15 + 8 + lVar11 * 0x10) = local_120;
LAB_14123839e:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar21);
    *(undefined1 *)(param_1[0xdc] + 0x208) = 1;
    *(undefined1 *)(param_1[0xdc] + 0x209) = 2;
    *(undefined1 *)(param_1[0xdc] + 0x20a) = 0;
    *(undefined1 *)(param_1[0xdc] + 0x1e2) = 2;
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar15 = *(longlong *)(DAT_146b33f38 + 0x58);
    lVar11 = FUN_140e971d0(param_1);
    if ((lVar11 != 0) && (lVar15 != 0)) {
      plVar21 = *(longlong **)(lVar15 + 0x1118);
      iVar2 = 0;
      local_88 = plVar21 + *(int *)(lVar15 + 0x1120);
      if (plVar21 != local_88) {
        do {
          lVar15 = *plVar21;
          local_f8 = 0;
          local_f0 = 0xd;
          local_90 = lVar15;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
          FGenericPlatformString::Memcpy(local_f8,L"NavBarButton",0x1a);
          lVar11 = param_1[0xdc];
          local_70 = URemnantGameInstance::GetPrivateStaticClass();
          pwVar12 = (wchar_t *)FUN_142ebcee0(lVar11,&local_f8,local_70,0);
          if (pwVar12 == (wchar_t *)0x0) {
LAB_1412384fb:
            pwVar12 = pwVar22;
          }
          else {
            lVar11 = URemnantGameInstance::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(pwVar12 + 8) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pwVar12 + 8) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_1412384fb;
          }
          if (local_f8 != 0) {
            FMemory::Free();
          }
          if (pwVar12 != (wchar_t *)0x0) {
            local_d8 = 0;
            local_d0 = 0xb;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
            FGenericPlatformString::Convert<char,wchar_t>(local_d8,0xb,"navBarIcon",0xb,0x3f);
            pplVar23 = &local_e8;
            local_e8 = (longlong *)0x0;
            local_e0 = 0;
            local_68 = 0;
            lVar11 = FUN_140ecbdf0(pwVar12,&local_d8,0,6,pplVar23);
            plVar19 = local_e8;
            for (iVar20 = (int)local_e0; iVar20 != 0; iVar20 = iVar20 + -1) {
              if (*plVar19 != 0) {
                FMemory::Free();
              }
              plVar19 = plVar19 + 2;
            }
            if (local_e8 != (longlong *)0x0) {
              FMemory::Free(local_e8);
            }
            if (local_d8 != 0) {
              FMemory::Free();
            }
            if (lVar11 != 0) {
              FUN_142088ee0(lVar11,iVar2 + 1);
              FString::PrintfImpl(&local_a8,L"NavBarIcon_%02d_nopack",iVar2);
              lVar11 = lVar15 + 0xa8;
              lVar13 = FWeakObjectPtr::Get(lVar11);
              if (lVar13 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != *(int *)(lVar15 + 0xb0)) &&
                   (*(longlong *)(lVar15 + 0xb8) != 0)) {
                  lVar13 = FUN_141796df0();
                  FWeakObjectPtr::operator=(lVar11,lVar13);
                  if ((lVar13 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    *(int *)(lVar15 + 0xb0) = DAT_1464b56f4;
                  }
                  lVar13 = FWeakObjectPtr::Get(lVar11);
                  if (lVar13 != 0) goto LAB_141238660;
                }
LAB_14123875b:
                local_c8 = 0;
                local_c0 = 0x20;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
                FGenericPlatformString::Memcpy(local_c8,L"RequestAsyncLoad SingleDelegate",0x40);
                FWeakObjectPtr::operator=(&local_b0,param_1);
                _Src = local_a8;
                lVar11 = (longlong)local_a0;
                local_118 = local_b0;
                local_114 = local_ac;
                local_108 = (wchar_t *)0x0;
                local_100 = local_a0;
                local_110 = lVar15;
                if (local_a0 == 0) {
                  local_fc = 0;
                  pwVar12 = pwVar22;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_a0,0);
                  pwVar12 = local_108;
                  _guard_xfg_dispatch_icall_nop(local_108,_Src,lVar11 * 2);
                }
                uVar8 = local_fc;
                iVar20 = local_100;
                uVar7 = local_114;
                uVar6 = local_118;
                local_80 = 0;
                local_78 = 0;
                puVar16 = (undefined8 *)operator_new(0x38,&local_80);
                if (puVar16 != (undefined8 *)0x0) {
                  local_108 = (wchar_t *)0x0;
                  *puVar16 = &PTR_GetPoolName_14471e600;
                  *(undefined4 *)(puVar16 + 1) = uVar6;
                  *(undefined4 *)((longlong)puVar16 + 0xc) = uVar7;
                  puVar16[2] = local_110;
                  puVar16[3] = pwVar12;
                  *(int *)(puVar16 + 4) = iVar20;
                  *(undefined4 *)((longlong)puVar16 + 0x24) = uVar8;
                  uVar17 = FDelegateHandle::GenerateNewID();
                  puVar16[6] = uVar17;
                  *puVar16 = &PTR_GetPoolName_14471e648;
                  pwVar12 = pwVar22;
                }
                lVar15 = local_90;
                lVar11 = FUN_1422ca050();
                FStreamableManager::RequestAsyncLoad
                          (lVar11 + 0x178,local_60,lVar15 + 0xb8,&local_80,
                           (ulonglong)pplVar23 & 0xffffffff00000000,0,0,&local_c8);
                plVar19 = local_58;
                if (local_58 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_58 + 1;
                  lVar15 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  pwVar12 = local_108;
                  if ((int)lVar15 == 1) {
                    (**(code **)*local_58)(local_58);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar19 + 0xc);
                    iVar20 = *piVar3;
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    pwVar12 = local_108;
                    if (iVar20 == 1) {
                      (**(code **)(*plVar19 + 8))(plVar19);
                      pwVar12 = local_108;
                    }
                  }
                }
                if (pwVar12 != (wchar_t *)0x0) {
                  FMemory::Free(pwVar12);
                }
                if (local_c8 != 0) {
                  FMemory::Free();
                }
              }
              else {
LAB_141238660:
                lVar14 = UTexture::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (!bVar4) goto LAB_14123875b;
                pwVar12 = (wchar_t *)FWeakObjectPtr::Get(lVar11);
                if (pwVar12 == (wchar_t *)0x0) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  if ((DAT_1464b56f4 != *(int *)(lVar15 + 0xb0)) &&
                     (local_b8 = 0, *(longlong *)(lVar15 + 0xb8) != 0)) {
                    lVar13 = FUN_141796df0();
                    FWeakObjectPtr::operator=(lVar11,lVar13);
                    if ((lVar13 != 0) || (DAT_1469e7e10 == '\0')) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      *(int *)(lVar15 + 0xb0) = DAT_1464b56f4;
                    }
                    pwVar12 = (wchar_t *)FWeakObjectPtr::Get(lVar11);
                    if (pwVar12 != (wchar_t *)0x0) goto LAB_141238709;
                  }
LAB_14123873f:
                  pwVar12 = pwVar22;
                }
                else {
LAB_141238709:
                  lVar15 = UTexture::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(pwVar12 + 8) + 0x90) < *(int *)(lVar15 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(pwVar12 + 8) + 0x88) +
                       (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (!bVar4) goto LAB_14123873f;
                }
                (**(code **)(*param_1 + 0x2a0))(param_1,&local_a8,pwVar12);
              }
              if (local_a8 != (void *)0x0) {
                FMemory::Free();
              }
            }
          }
          iVar2 = iVar2 + 1;
          plVar21 = plVar21 + 1;
        } while (plVar21 != local_88);
      }
    }
    (**(code **)(*(longlong *)param_1[0xdc] + 0x2b8))
              ((longlong *)param_1[0xdc],(int)param_1[0x116],1);
    (**(code **)(*(longlong *)(param_1[0xdc] + 0x170) + 0x38))
              ((longlong *)(param_1[0xdc] + 0x170),0);
  }
  return;
}



// FUNCTION 1412389b0 FUN_1412389b0 body=981 status=ok
// SIG undefined FUN_1412389b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412389b0(longlong param_1,int param_2,float param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 *local_128;
  ulonglong *puStack_120;
  undefined8 local_118;
  longlong local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [16];
  undefined4 local_70 [2];
  longlong local_68;
  longlong *local_58;
  char local_48;
  ulonglong local_40 [3];
  
  local_40[0] = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_138 = 0;
  if ((*(longlong *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1c8) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      if (param_2 < 1) {
        uVar8 = FUN_1404b03b0();
        puVar10 = (undefined1 *)FText::FText(local_b0,uVar8);
        bVar5 = false;
        bVar4 = false;
        bVar11 = true;
      }
      else {
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_98,L"Vault Card Points Level {0} Progress",L"GFxVaultCardMenu",
                           L"VaultCardProgressFormat");
        puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_80,uVar8);
        local_70[0] = 0;
        local_128 = local_70;
        local_48 = '\0';
        puStack_120 = local_40;
        local_118 = *puVar9;
        local_110 = puVar9[1];
        if (local_110 != 0) {
          LOCK();
          *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
          UNLOCK();
        }
        local_68 = (longlong)param_2;
        uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_108,&local_128);
        uVar8 = FText::Format(local_c8,&local_118,uVar8);
        FText::FText(local_f8,uVar8);
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_c0 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar1 = (int *)((longlong)local_c0 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_108);
        if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
          LOCK();
          plVar3 = local_58 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar1 = (int *)((longlong)local_58 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_58 + 8))(local_58,1);
            }
          }
        }
        plVar3 = (longlong *)puVar9[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        puVar10 = local_f8;
        bVar5 = true;
        bVar4 = true;
        bVar11 = false;
      }
      FText::FText(local_e0,puVar10);
      if ((bVar11) && (local_a8 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_a8 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
      if ((bVar4) && (local_f0 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_f0 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)local_f0 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
      if ((bVar5) && (local_90 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_90 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1b8,local_e0,1,0);
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_d8 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar1 = (int *)((longlong)local_d8 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_d8 + 8))(local_d8,1);
          }
        }
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x1d8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar11 = iVar7 == 0;
    if (bVar11) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar11) {
      LOCK();
      bVar11 = iVar7 == (int)plVar3[1];
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar11) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        if (*(longlong *)(param_1 + 0x1d0) != 0) {
          fVar12 = 0.0;
          if ((0.0 <= param_3) && (fVar12 = param_3, 1.0 <= param_3)) {
            fVar12 = 1.0;
          }
          FUN_14203e3e0(*(longlong *)(param_1 + 0x1d0),
                        (int)ROUND(fVar12 * 99.0 + fVar12 * 99.0 + 2.5) >> 1);
        }
        LOCK();
        plVar2 = plVar3 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 != 1) {
          return;
        }
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 != 1) {
          return;
        }
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return;
      }
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(plVar3 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 141238d90 FUN_141238d90 body=549 status=ok
// SIG undefined FUN_141238d90(void)

void FUN_141238d90(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  
  uVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  uVar10 = 0;
  if (uVar5 == 0) {
LAB_141238dfe:
    uVar5 = uVar10;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141238dfe;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = *(longlong *)(DAT_146b33f38 + 200);
  fVar14 = 0.0;
  uVar11 = uVar10;
  uVar12 = uVar10;
  if ((uVar5 == 0) || (uVar12 = 0, lVar6 == 0)) goto LAB_141238f10;
  lVar9 = uVar5 + 0x1b10;
  uVar2 = FUN_140e827f0(lVar9,*(undefined4 *)(param_1 + 0x898));
  uVar12 = (ulonglong)uVar2;
  lVar7 = FUN_140e7f880(lVar9,*(undefined4 *)(param_1 + 0x898));
  iVar3 = FUN_140a32b50(lVar6,uVar12);
  iVar4 = FUN_140a32b50(lVar6,uVar2 + 1);
  fVar13 = (float)iVar4 - (float)iVar3;
  if (1e-08 < ABS(fVar13)) {
    fVar13 = ((float)lVar7 - (float)iVar3) / fVar13;
    if (0.0 <= fVar13) goto LAB_141238ed9;
  }
  else {
    if ((float)lVar7 < (float)iVar4) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = 1.0;
    }
LAB_141238ed9:
    fVar14 = fVar13;
    if (1.0 <= fVar13) {
      fVar14 = 1.0;
    }
  }
  FUN_14123afd0(param_1);
  uVar8 = FUN_140e822f0(lVar9,*(undefined4 *)(param_1 + 0x898));
  FUN_14123e190(param_1,uVar8);
LAB_141238f10:
  do {
    iVar3 = (int)uVar11;
    if (((iVar3 < *(int *)(param_1 + 0x870)) &&
        (lVar6 = *(longlong *)(uVar10 + *(longlong *)(param_1 + 0x868)), lVar6 != 0)) &&
       (lVar6 = *(longlong *)(lVar6 + 0x10), lVar6 != 0)) {
      lVar9 = FUN_1413a0f70();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_14122a150(lVar6,iVar3 + -1);
      }
    }
    uVar10 = uVar10 + 8;
    uVar11 = (ulonglong)(iVar3 + 1);
  } while ((longlong)uVar10 < 0x38);
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FUN_1412389b0(*(longlong *)(param_1 + 0x6d8),uVar12,fVar14);
  }
  return;
}



// FUNCTION 141238fc0 FUN_141238fc0 body=245 status=ok
// SIG undefined FUN_141238fc0(void)

void FUN_141238fc0(longlong param_1)

{
  longlong *plVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char *pcVar7;
  
  UWidgetComponent::DestroyComponent();
  lVar4 = *(longlong *)(param_1 + 0x490);
  if (lVar4 != 0) {
    lVar6 = FUN_1429e18b0();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (*(longlong *)(param_1 + 0xe48) != 0)) {
      plVar1 = (longlong *)(param_1 + 0xe50);
      pcVar7 = (char *)*plVar1;
      iVar3 = *(int *)(param_1 + 0xe58);
      pcVar2 = pcVar7 + (longlong)iVar3 * 2;
      for (; pcVar7 != pcVar2; pcVar7 = pcVar7 + 2) {
        if (*pcVar7 == '\x01') {
          pcVar7[1] = '\0';
          goto LAB_141239079;
        }
      }
      *(int *)(param_1 + 0xe58) = iVar3 + 1;
      if (*(int *)(param_1 + 0xe5c) < iVar3 + 1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(undefined2 *)(*plVar1 + (longlong)iVar3 * 2) = 1;
LAB_141239079:
      FUN_141255ea0(param_1);
    }
  }
  if (*(longlong **)(param_1 + 0x660) == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001412390a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x660) + 0x260))();
  return;
}



// FUNCTION 1412390c0 FUN_1412390c0 body=557 status=ok
// SIG undefined FUN_1412390c0(void)

void FUN_1412390c0(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  undefined1 local_58 [16];
  float local_48 [6];
  float local_30;
  
  lVar8 = *(longlong *)(param_1 + 0x118);
  if (lVar8 != 0) {
    lVar5 = FUN_1414bbb50();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar6 = (**(code **)(*(longlong *)(lVar8 + 0x4c8) + 0xf0))((longlong *)(lVar8 + 0x4c8),0);
      FUN_141256e80(param_1 + 0x2f8,uVar6);
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x308);
      if (cVar4 != '\0') {
        cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x300);
        if (((cVar4 == '\0') || (*(char *)(param_1 + 0x31c) == '\0')) ||
           (*(float *)(param_1 + 0x314) <= 0.0001 && *(float *)(param_1 + 0x314) != 0.0001)) {
          plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x308);
          (**(code **)(*plVar7 + 0x438))(plVar7,&local_88);
          local_78 = *param_3 - local_88;
          local_74 = param_3[1] - local_84;
          local_70 = param_3[2] - local_80;
          FVector::Rotation(&local_78,&local_68);
          param_2[1] = local_64;
        }
        else {
          plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x308);
          (**(code **)(*plVar7 + 0x438))(plVar7,local_58);
          uVar6 = FWeakObjectPtr::Get(param_1 + 0x300);
          fVar9 = (float)FUN_14306cf90(uVar6);
          lVar8 = *(longlong *)(param_1 + 0x120);
          fVar1 = *(float *)(param_1 + 0x310);
          if (lVar8 == 0) {
            lVar8 = FUN_1423407b0(param_1);
          }
          fVar10 = (float)FUN_1428cc5b0(lVar8);
          fVar2 = *(float *)(param_1 + 0x314);
          FUN_1424b51e0(local_48);
          local_48[0] = fVar9 * fVar1;
          FUN_1424d07e0(local_48,local_58,param_3,fVar10 * fVar2);
          local_68 = local_30 - *(float *)(param_1 + 0x318);
        }
        *param_2 = local_68;
      }
    }
  }
  return;
}



// FUNCTION 1412392f0 FUN_1412392f0 body=391 status=ok
// SIG undefined FUN_1412392f0(void)

void FUN_1412392f0(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_res8;
  undefined8 local_res10;
  code *local_28;
  ulonglong uStack_20;
  
  FUN_1430da7b0();
  if (param_1[0xcd] != 0) {
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_141231110;
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AOakVehicle::OnDriverAttachStateChanged",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_1407260e0(param_1[0xcd] + 0x3f0,param_1,&local_28,local_res8);
  }
  if (param_1[0x272] == 0) {
    local_res8 = 0;
    uVar4 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
    local_res10 = 0;
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar5 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
    param_1[0x272] = lVar5;
    (**(code **)(*param_1 + 0x630))(param_1,lVar5);
    FUN_14234b150(param_1[0x272]);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x119,0);
  if ((*(char *)((longlong)param_1 + 0x8f1) == '\0') && (&local_res8 != param_1 + 0x11e)) {
    *(undefined2 *)(param_1 + 0x11e) = 0x101;
  }
  return;
}



// FUNCTION 141239480 FUN_141239480 body=41 status=ok
// SIG undefined FUN_141239480(void)

void FUN_141239480(longlong param_1)

{
  FUN_1422384a0();
  FUN_1407665e0(*(longlong *)(param_1 + 0x560) + 0x570,param_1);
  return;
}



// FUNCTION 1412394b0 FUN_1412394b0 body=448 status=ok
// SIG undefined FUN_1412394b0(void)

void FUN_1412394b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  FUN_1426a4710();
  if (*(longlong *)(param_1 + 0x670) != 0) {
    lVar4 = FUN_142956f50();
    for (lVar2 = *(longlong *)(param_1 + 0x670); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar4) {
        if (*(longlong *)(param_1 + 0x670) != 0) {
          if (*(int *)(param_1 + 0x688) < 1) {
            iVar1 = *(int *)(param_1 + 0x688);
            *(int *)(param_1 + 0x688) = iVar1 + 1;
            if (*(int *)(param_1 + 0x68c) < iVar1 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(param_1 + 0x680,iVar1);
            }
            puVar5 = (undefined8 *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x680));
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
          }
          **(undefined8 **)(param_1 + 0x680) = *(undefined8 *)(param_1 + 0x670);
          *(undefined8 *)(param_1 + 0x670) = 0;
        }
        break;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x678) != 0) {
    lVar4 = FUN_142956f50();
    for (lVar2 = *(longlong *)(param_1 + 0x678); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar4) {
        if (*(longlong *)(param_1 + 0x678) != 0) {
          iVar1 = *(int *)(param_1 + 0x688);
          if (iVar1 < 2) {
            iVar3 = iVar1 + (2 - iVar1);
            *(int *)(param_1 + 0x688) = iVar3;
            if (*(int *)(param_1 + 0x68c) < iVar3) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(param_1 + 0x680);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x680)),0,
                       (longlong)(2 - iVar1) * 0x38);
          }
          *(undefined8 *)(*(longlong *)(param_1 + 0x680) + 0x38) = *(undefined8 *)(param_1 + 0x678);
          *(undefined8 *)(param_1 + 0x678) = 0;
        }
        break;
      }
    }
  }
  if (*(longlong *)(param_1 + 0xda8) != 0) {
    *(longlong *)(param_1 + 0xdc0) = *(longlong *)(param_1 + 0xda8);
    *(undefined8 *)(param_1 + 0xda8) = 0;
  }
  if (*(longlong *)(param_1 + 0xdb0) != 0) {
    *(longlong *)(param_1 + 0xdd0) = *(longlong *)(param_1 + 0xdb0);
    *(undefined8 *)(param_1 + 0xdb0) = 0;
  }
  return;
}



// FUNCTION 141239670 FUN_141239670 body=837 status=ok
// SIG undefined FUN_141239670(void)

void FUN_141239670(longlong param_1)

{
  undefined8 *puVar1;
  void *_Src;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  UObject::PostLoad();
  if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(param_1 + 0x50) == 0)) {
    puVar6 = *(undefined8 **)(param_1 + 0x38);
    uVar9 = (ulonglong)*(int *)(param_1 + 0x40);
    puVar10 = puVar6 + uVar9 * 0xd;
    if (puVar6 != puVar10) {
      do {
        if (puVar6[1] != 0) {
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          uVar4 = UUGJournalKey::GetPrivateStaticClass();
          lVar5 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
          uVar2 = FUN_14126cf90(*puVar6);
          *(undefined1 *)(lVar5 + 0x38) = uVar2;
          *(byte *)(lVar5 + 0x39) = *(byte *)(puVar6 + 3) & 1;
          *(undefined8 *)(lVar5 + 0x50) = puVar6[2];
          *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)((longlong)puVar6 + 0x1c);
          *(undefined4 *)(lVar5 + 0x68) = *(undefined4 *)((longlong)puVar6 + 0x24);
          *(undefined8 *)(lVar5 + 0x6c) = puVar6[5];
          *(undefined4 *)(lVar5 + 0x74) = *(undefined4 *)(puVar6 + 6);
          *(undefined4 *)(lVar5 + 0x78) = *(undefined4 *)((longlong)puVar6 + 0x34);
          *(undefined8 *)(lVar5 + 0x80) = puVar6[1];
          *(byte *)(lVar5 + 0x88) = *(byte *)(puVar6 + 3) >> 1 & 1;
          iVar3 = *(int *)(param_1 + 0x50);
          *(int *)(param_1 + 0x50) = iVar3 + 1;
          if (*(int *)(param_1 + 0x54) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x48,iVar3);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar3 * 8) = lVar5;
        }
        if ((puVar6[7] != 0) || (puVar6[8] != 0)) {
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          uVar4 = FUN_1414e1600();
          lVar5 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
          uVar2 = FUN_14126cf90(*puVar6);
          *(undefined1 *)(lVar5 + 0x38) = uVar2;
          puVar1 = (undefined8 *)(lVar5 + 0x98);
          *(byte *)(lVar5 + 0x39) = *(byte *)(puVar6 + 3) & 1;
          *(undefined8 *)(lVar5 + 0x50) = puVar6[2];
          *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)((longlong)puVar6 + 0x1c);
          *(undefined4 *)(lVar5 + 0x68) = *(undefined4 *)((longlong)puVar6 + 0x24);
          *(undefined8 *)(lVar5 + 0x6c) = puVar6[5];
          *(undefined4 *)(lVar5 + 0x74) = *(undefined4 *)(puVar6 + 6);
          *(undefined4 *)(lVar5 + 0x78) = *(undefined4 *)((longlong)puVar6 + 0x34);
          *(byte *)(lVar5 + 0x80) = *(byte *)(puVar6 + 3) >> 2 & 1;
          *(undefined8 *)(lVar5 + 0x88) = puVar6[7];
          *(undefined8 *)(lVar5 + 0x90) = puVar6[8];
          if (puVar1 != puVar6 + 9) {
            iVar3 = *(int *)(puVar6 + 10);
            _Src = (void *)puVar6[9];
            *(int *)(lVar5 + 0xa0) = iVar3;
            if ((iVar3 == 0) && (*(int *)(lVar5 + 0xa4) == 0)) {
              *(undefined4 *)(lVar5 + 0xa4) = 0;
            }
            else {
              TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
              _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 << 4);
            }
          }
          *(undefined8 *)(lVar5 + 0xa8) = puVar6[0xb];
          *(undefined4 *)(lVar5 + 0xb0) = *(undefined4 *)(puVar6 + 0xc);
          iVar3 = *(int *)(param_1 + 0x50);
          *(int *)(param_1 + 0x50) = iVar3 + 1;
          if (*(int *)(param_1 + 0x54) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x48,iVar3);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar3 * 8) = lVar5;
        }
        puVar6 = puVar6 + 0xd;
      } while (puVar6 != puVar10);
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x40);
    }
    iVar3 = *(int *)(param_1 + 0x44);
    if (iVar3 < 0) {
      if ((int)uVar9 != 0) {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x48);
        do {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 0xd;
          uVar8 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 != 0);
        iVar3 = *(int *)(param_1 + 0x44);
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (iVar3 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(param_1 + 0x38,0);
      }
    }
    else {
      if ((int)uVar9 != 0) {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x48);
        do {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 0xd;
          uVar8 = (int)uVar9 - 1;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 != 0);
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  return;
}



// FUNCTION 1412399c0 FUN_1412399c0 body=292 status=ok
// SIG undefined FUN_1412399c0(void)

void FUN_1412399c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_38 [32];
  
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar2 = FUN_14149a4d0();
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar4 = lVar1;
    if (lVar1 != 0) {
      while (lVar4 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      if (lVar1 != 0) {
        lVar4 = 0;
        if (lVar1 != 0) {
          lVar2 = FUN_14149a4d0();
          for (lVar1 = *(longlong *)(param_1 + 0x38);
              (lVar4 = 0, lVar1 != 0 && (lVar4 = *(longlong *)(param_1 + 0x38), lVar1 != lVar2));
              lVar1 = *(longlong *)(lVar1 + 0x30)) {
          }
        }
        if (lVar4 == 0) {
          *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x44) = 0;
          *(undefined8 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x60) = 0;
          if ((*(int *)(param_1 + 100) < 0) && (*(int *)(param_1 + 100) != 0)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x58,0);
          }
          if (*(undefined2 **)(param_1 + 0x58) != (undefined2 *)0x0) {
            **(undefined2 **)(param_1 + 0x58) = 0;
          }
          *(undefined4 *)(param_1 + 0x48) = 0;
        }
        else {
          uVar3 = FSoftObjectPath::FSoftObjectPath(local_38,lVar4);
          FSoftObjectPath::operator=(param_1 + 0x50,uVar3);
          FWeakObjectPtr::operator=(param_1 + 0x40,lVar4);
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x48) = DAT_1464b56f4;
        }
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
    }
  }
  return;
}



// FUNCTION 141239af0 FUN_141239af0 body=348 status=ok
// SIG undefined FUN_141239af0(void)

void FUN_141239af0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong local_res8;
  
  FUN_142238870();
  if ((*(char *)((longlong)param_1 + 0x8f1) != '\0') &&
     (plVar1 = param_1 + 0x11e, (char)*plVar1 == '\x01')) {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    lVar9 = 0;
    lVar6 = lVar9;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar8 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    if (((((*(uint *)(lVar6 + 8) & 0x30000000) == 0) && ((char)param_1[0x25] != '\x03')) &&
        (param_1[0x11b] != 0)) && ((param_1[0x11c] != 0 && (param_1[0x11d] != 0)))) {
      if (DAT_146b17150 != 0) {
        uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar6 = FUN_142874910(DAT_146b17150,uVar5);
        if (lVar6 != 0) {
          lVar7 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            lVar9 = *(longlong *)(lVar6 + 0xc70);
          }
        }
      }
      if (lVar9 != 0) {
        FUN_140e76da0(lVar9,param_1[0x11d],param_1[0x11c],param_1);
      }
      if (&local_res8 != plVar1) {
        *(undefined2 *)plVar1 = 0x100;
      }
    }
  }
  return;
}



// FUNCTION 141239c50 FUN_141239c50 body=887 status=ok
// SIG undefined FUN_141239c50(void)

void FUN_141239c50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_18 [8];
  float local_10;
  
  FUN_141239fd0();
  if (param_2 == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_2 + 0xb38);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x778) = *(undefined1 *)(param_2 + 0x12f0);
  uVar7 = (undefined4)DAT_1468b5da0;
  uVar8 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
  uVar6 = DAT_1468b5da8;
  if ((2 < (int)plVar1[0xdd]) && (*(longlong *)(plVar1[0xdc] + 0x10) != 0)) {
    puVar3 = (undefined8 *)FUN_140a66600(*(longlong *)(plVar1[0xdc] + 0x10),local_18,0);
    uVar7 = (undefined4)*puVar3;
    uVar8 = (undefined4)((ulonglong)*puVar3 >> 0x20);
    uVar6 = *(undefined4 *)(puVar3 + 1);
  }
  *(ulonglong *)(param_1 + 0x780) = CONCAT44(uVar8,uVar7);
  *(undefined4 *)(param_1 + 0x788) = uVar6;
  uVar7 = (undefined4)DAT_1468b5da0;
  uVar8 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
  uVar6 = DAT_1468b5da8;
  if ((3 < (int)plVar1[0xdd]) && (*(longlong *)(plVar1[0xdc] + 0x18) != 0)) {
    puVar3 = (undefined8 *)FUN_140a66600(*(longlong *)(plVar1[0xdc] + 0x18),local_18,0);
    uVar7 = (undefined4)*puVar3;
    uVar8 = (undefined4)((ulonglong)*puVar3 >> 0x20);
    uVar6 = *(undefined4 *)(puVar3 + 1);
  }
  *(ulonglong *)(param_1 + 0x78c) = CONCAT44(uVar8,uVar7);
  *(undefined4 *)(param_1 + 0x794) = uVar6;
  if ((int)plVar1[0xdd] < 1) {
    lVar4 = 0;
  }
  else if (*(longlong *)plVar1[0xdc] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_142ceeb40(*(longlong *)plVar1[0xdc],0);
  }
  *(bool *)(param_1 + 0x779) = lVar4 != 0;
  if ((int)plVar1[0xdd] < 2) {
    lVar4 = 0;
  }
  else if (*(longlong *)(plVar1[0xdc] + 8) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_142ceeb40(*(longlong *)(plVar1[0xdc] + 8),0);
  }
  *(bool *)(param_1 + 0x77a) = lVar4 != 0;
  if (((int)plVar1[0xdd] < 3) || (*(longlong *)(plVar1[0xdc] + 0x10) == 0)) {
LAB_141239dc7:
    uVar2 = 0;
  }
  else {
    lVar4 = FUN_142ceeb40(*(longlong *)(plVar1[0xdc] + 0x10),0);
    if (lVar4 == 0) {
      if (plVar1[0xcd] == 0) goto LAB_141239dc7;
      uVar2 = FUN_142cf39b0(plVar1[0xcd],0);
    }
    else {
      uVar2 = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x77b) = uVar2;
  if ((3 < (int)plVar1[0xdd]) && (*(longlong *)(plVar1[0xdc] + 0x18) != 0)) {
    lVar4 = FUN_142ceeb40(*(longlong *)(plVar1[0xdc] + 0x18),0);
    if (lVar4 != 0) {
      uVar2 = 1;
      goto LAB_141239e0f;
    }
    if (plVar1[0xcd] != 0) {
      uVar2 = FUN_142cf39b0(plVar1[0xcd],0);
      goto LAB_141239e0f;
    }
  }
  uVar2 = 0;
LAB_141239e0f:
  *(undefined1 *)(param_1 + 0x77c) = uVar2;
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x308))(plVar1,local_18);
  *(undefined8 *)(param_1 + 0x7b0) = *puVar3;
  *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(puVar3 + 1);
  pfVar5 = (float *)UPrimitiveComponent::GetPhysicsAngularVelocityInRadians(plVar1[0x9a],local_18,0)
  ;
  local_10 = pfVar5[2] * 57.295776;
  *(ulonglong *)(param_1 + 0x7bc) = CONCAT44(pfVar5[1] * 57.295776,*pfVar5 * 57.295776);
  *(float *)(param_1 + 0x7c4) = local_10;
  lVar4 = plVar1[0x2d];
  if (lVar4 == 0) {
    uVar9 = 0x3f800000;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(lVar4 + 0x210);
    uVar7 = *(undefined4 *)(lVar4 + 0x214);
    uVar8 = *(undefined4 *)(lVar4 + 0x218);
    uVar9 = *(undefined4 *)(lVar4 + 0x21c);
  }
  *(undefined4 *)(param_1 + 2000) = uVar6;
  *(undefined4 *)(param_1 + 0x7d4) = uVar7;
  *(undefined4 *)(param_1 + 0x7d8) = uVar8;
  *(undefined4 *)(param_1 + 0x7dc) = uVar9;
  if ((*(char *)(param_1 + 0x6e3) != '\0') && (lVar4 = *(longlong *)(param_2 + 0xb48), lVar4 != 0))
  {
    *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(lVar4 + 0x198);
    *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(lVar4 + 0x19c);
  }
  uVar2 = FUN_1407c3030(plVar1 + 0x22c);
  *(undefined1 *)(param_2 + 0x1339) = uVar2;
  uVar2 = FUN_1407c3030(plVar1 + 0x23f);
  *(undefined1 *)(param_2 + 0x133a) = uVar2;
  if ((*(char *)(param_1 + 0x779) == '\0') && (*(char *)(param_1 + 0x77a) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 0x1338) = uVar2;
  *(undefined1 *)(param_2 + 0x1334) = *(undefined1 *)(param_1 + 0x77a);
  *(undefined1 *)(param_2 + 0x1335) = *(undefined1 *)(param_1 + 0x779);
  *(undefined1 *)(param_2 + 0x1336) = *(undefined1 *)(param_1 + 0x77b);
  *(undefined1 *)(param_2 + 0x1337) = *(undefined1 *)(param_1 + 0x77c);
  *(undefined8 *)(param_1 + 0x7a4) = *(undefined8 *)(param_2 + 0x1328);
  *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(param_2 + 0x1330);
  return;
}



// FUNCTION 141239fd0 FUN_141239fd0 body=1584 status=ok
// SIG undefined FUN_141239fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141239fd0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong lVar10;
  bool bVar11;
  uint uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined8 local_68;
  undefined4 local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  FUN_1409670a0();
  if ((param_2 != 0) && (plVar2 = *(longlong **)(param_2 + 0xb38), plVar2 != (longlong *)0x0)) {
    uVar6 = FUN_141224c20(param_1);
    *(undefined4 *)(param_1 + 0x6d8) = uVar6;
    *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(plVar2[0xd2] + 0x2d4);
    if (((plVar2[0xd3] == 0) ||
        (((*(char *)((longlong)plVar2 + 0xe89) != '\0' ||
          (*(char *)((longlong)plVar2 + 0xebc) != '\0')) || (plVar2[0xcd] == 0)))) ||
       ((cVar1 = *(char *)(plVar2[0xcd] + 0x418), cVar1 != '\x02' &&
        ((cVar1 == '\0' || ((char)plVar2[0x176] == '\0')))))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x6dc) = uVar5;
    *(bool *)(param_1 + 0x6e3) = plVar2[0xd6] != 0;
    uVar5 = FUN_1430d8750(plVar2);
    *(undefined1 *)(param_1 + 0x6e4) = uVar5;
    uVar6 = FUN_140a23120(*(float *)((longlong)plVar2 + 0x784) * 0.01,0xc,0xd);
    *(undefined4 *)(param_1 + 0x700) = uVar6;
    lVar4 = plVar2[0xf5];
    *(int *)(param_1 + 0x704) = (int)lVar4;
    lVar3 = plVar2[0x2d];
    uVar6 = DAT_1468b5da8;
    uVar14 = DAT_1468b5da0;
    if (lVar3 != 0) {
      local_58 = *(float *)(lVar3 + 0x210);
      fStack_54 = *(float *)(lVar3 + 0x214);
      fStack_50 = *(float *)(lVar3 + 0x218);
      fStack_4c = *(float *)(lVar3 + 0x21c);
      auVar15._4_4_ = -(uint)(*(float *)(lVar3 + 0x254) != fStack_54);
      auVar15._0_4_ = -(uint)(*(float *)(lVar3 + 0x250) != local_58);
      auVar15._8_4_ = -(uint)(*(float *)(lVar3 + 600) != fStack_50);
      auVar15._12_4_ = -(uint)(*(float *)(lVar3 + 0x25c) != fStack_4c);
      iVar7 = movmskps((int)lVar4,auVar15);
      if (iVar7 != 0) {
        *(float *)(lVar3 + 0x250) = local_58;
        *(float *)(lVar3 + 0x254) = fStack_54;
        *(float *)(lVar3 + 600) = fStack_50;
        *(float *)(lVar3 + 0x25c) = fStack_4c;
        puVar8 = (undefined8 *)FQuat::Rotator(&local_58,&local_68);
        *(undefined8 *)(lVar3 + 0x260) = *puVar8;
        *(undefined4 *)(lVar3 + 0x268) = *(undefined4 *)(puVar8 + 1);
      }
      uVar6 = *(undefined4 *)(lVar3 + 0x268);
      uVar14 = *(undefined8 *)(lVar3 + 0x260);
    }
    *(undefined8 *)(param_1 + 0x714) = uVar14;
    *(undefined4 *)(param_1 + 0x71c) = uVar6;
    lVar3 = plVar2[0x2d];
    if (lVar3 == 0) {
      local_68 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      local_68 = *(undefined8 *)(lVar3 + 0x220);
      local_60 = *(undefined4 *)(lVar3 + 0x228);
    }
    *(undefined8 *)(param_1 + 0x720) = local_68;
    *(undefined4 *)(param_1 + 0x728) = local_60;
    puVar8 = (undefined8 *)(**(code **)(*plVar2 + 0x308))(plVar2,&local_68);
    *(undefined8 *)(param_1 + 0x72c) = *puVar8;
    *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(param_1 + 0x738) = *(undefined8 *)((longlong)plVar2 + 0xbec);
    *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)((longlong)plVar2 + 0xbf4);
    if (plVar2[0xd4] == 0) {
      local_60 = DAT_1468b5d98;
      puVar8 = &local_68;
      local_68 = _DAT_1468b5d90;
    }
    else {
      puVar8 = (undefined8 *)FUN_1430d48d0(plVar2[0xd4],&local_68);
    }
    *(undefined8 *)(param_1 + 0x744) = *puVar8;
    *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(puVar8 + 1);
    *(int *)(param_1 + 0x6f0) = (int)plVar2[0x101];
    *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)((longlong)plVar2 + 0x80c);
    uVar6 = DAT_1468b5da8;
    uVar14 = DAT_1468b5da0;
    if ((0 < (int)plVar2[0xdd]) && (*(longlong *)plVar2[0xdc] != 0)) {
      puVar8 = (undefined8 *)FUN_140a66600(*(longlong *)plVar2[0xdc],&local_68,0);
      uVar14 = *puVar8;
      uVar6 = *(undefined4 *)(puVar8 + 1);
    }
    *(undefined8 *)(param_1 + 0x750) = uVar14;
    *(undefined4 *)(param_1 + 0x758) = uVar6;
    uVar14 = DAT_1468b5da0;
    uVar6 = DAT_1468b5da8;
    if ((1 < (int)plVar2[0xdd]) && (*(longlong *)(plVar2[0xdc] + 8) != 0)) {
      puVar8 = (undefined8 *)FUN_140a66600(*(longlong *)(plVar2[0xdc] + 8),&local_68,0);
      uVar14 = *puVar8;
      uVar6 = *(undefined4 *)(puVar8 + 1);
    }
    *(undefined8 *)(param_1 + 0x75c) = uVar14;
    *(undefined4 *)(param_1 + 0x764) = uVar6;
    lVar3 = *(longlong *)(param_2 + 0xb40);
    if (lVar3 != 0) {
      if (*(char *)(param_1 + 0x6dc) == '\0') {
        *(undefined1 *)(param_1 + 0x6e2) = 0;
        bVar11 = false;
        *(undefined2 *)(param_1 + 0x6de) = 0;
        *(undefined8 *)(param_1 + 0x6e8) = 0;
      }
      else {
        if (*(char *)(param_1 + 0x6e2) == '\0') {
          uVar6 = ACharacter::GetAnimRootMotionTranslationScale(lVar3);
          *(undefined4 *)(param_1 + 0x6e8) = uVar6;
          uVar6 = FUN_1409648d0(lVar3);
          *(undefined4 *)(param_1 + 0x6ec) = uVar6;
        }
        if (plVar2[0xd3] == 0) {
          bVar11 = false;
        }
        else {
          fVar17 = (float)FUN_140963880();
          bVar11 = 0.0 < fVar17;
        }
        *(bool *)(param_1 + 0x6dd) = bVar11;
        *(undefined1 *)(param_1 + 0x6de) = *(undefined1 *)((longlong)plVar2 + 0xbd9);
        uVar5 = 0;
        if (plVar2[0xd7] != 0) {
          uVar5 = *(undefined1 *)(plVar2[0xd7] + 0x1c1);
        }
        *(undefined1 *)(param_1 + 0x6df) = uVar5;
        if (plVar2[0xd9] == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_1430d8780();
        }
        *(undefined1 *)(param_1 + 0x6e0) = uVar5;
        if (plVar2[0xd6] == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined1 *)(plVar2[0xd6] + 0x280);
        }
        *(undefined1 *)(param_1 + 0x6e2) = uVar5;
        iVar7 = FUN_140963c50(lVar3);
        bVar11 = iVar7 < 0;
      }
      *(bool *)(param_1 + 0x6e1) = bVar11;
      if (*(char *)(param_1 + 0x6e2) == '\0') {
        uVar12 = FUN_140963d50(lVar3);
        *(uint *)(param_1 + 0x6f4) = uVar12 & 0x7fffffff;
        *(int *)(param_1 + 0x6fc) = (int)plVar2[0xf4];
      }
      uVar6 = UDecalComponent::GetFadeInStartDelay(lVar3);
      *(undefined4 *)(param_1 + 0x6f8) = uVar6;
      uVar6 = UGeometryCacheComponent::GetStartTimeOffset(lVar3);
      *(undefined4 *)(param_1 + 0x708) = uVar6;
      iVar7 = FUN_140963c50(lVar3);
      *(float *)(param_1 + 0x70c) = (float)iVar7;
      lVar4 = *(longlong *)(param_2 + 0xb48);
      if (lVar4 != 0) {
        if ((*(char *)(param_1 + 0x6dc) == '\0') || (*(char *)(param_1 + 0x6e2) == '\0')) {
          *(undefined8 *)(param_1 + 0x768) = 0;
          *(undefined4 *)(param_1 + 0x770) = 0;
        }
        else {
          local_68 = *(undefined8 *)(param_1 + 0x714);
          local_60 = *(undefined4 *)(param_1 + 0x71c);
          pfVar9 = (float *)UKismetMathLibrary::GetForwardVector(&local_58,&local_68);
          local_60 = *(undefined4 *)(param_1 + 0x71c);
          local_68 = *(undefined8 *)(param_1 + 0x714);
          *(float *)(param_1 + 0x768) =
               pfVar9[1] * *(float *)(param_1 + 0x73c) + *pfVar9 * *(float *)(param_1 + 0x738) +
               pfVar9[2] * *(float *)(param_1 + 0x740);
          pfVar9 = (float *)UKismetMathLibrary::GetRightVector(&local_58,&local_68);
          *(float *)(param_1 + 0x76c) =
               *(float *)(param_1 + 0x73c) * pfVar9[1] + *pfVar9 * *(float *)(param_1 + 0x738) +
               *(float *)(param_1 + 0x740) * pfVar9[2];
          lVar10 = FUN_1430d48d0(plVar2[0xd4],&local_58);
          *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(lVar10 + 8);
          *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(lVar4 + 0x19c);
          *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(lVar4 + 0x198);
          fVar17 = *(float *)(param_1 + 0x730);
          fVar16 = *(float *)(param_1 + 0x72c);
          fVar13 = (float)UDecalComponent::GetFadeInStartDelay(lVar3);
          fVar16 = SQRT(fVar16 * fVar16 + fVar17 * fVar17) * 0.0005;
          fVar17 = 0.0;
          if ((0.0 <= fVar16) && (fVar17 = fVar16, 1.0 <= fVar16)) {
            fVar17 = 1.0;
          }
          *(float *)(param_1 + 0x6f4) = fVar13 * fVar17;
        }
      }
    }
  }
  return;
}



// FUNCTION 14123a600 FUN_14123a600 body=85 status=ok
// SIG undefined FUN_14123a600(void)

void FUN_14123a600(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  FUN_141239fd0();
  if (param_2 != 0) {
    if ((*(longlong *)(param_2 + 0x1b30) == 0) ||
       (lVar1 = *(longlong *)(param_2 + 0x1b30), *(char *)(param_2 + 0x12f0) != '\0')) {
      lVar1 = param_2;
    }
    FUN_141250e40(param_1,lVar1,param_3);
  }
  return;
}



// FUNCTION 14123a660 FUN_14123a660 body=219 status=ok
// SIG undefined FUN_14123a660(void)

void FUN_14123a660(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  FUN_141239fd0();
  if (param_2 != 0) {
    lVar2 = FUN_1414b8f00();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(param_2 + 0xb38), lVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(lVar2 + 0xeb0);
      fVar4 = (*(float *)(lVar2 + 0x78c) - 900.0) * 0.000625;
      fVar3 = 0.0;
      if ((0.0 <= fVar4) && (fVar3 = fVar4, 1.0 <= fVar4)) {
        fVar3 = 1.0;
      }
      *(float *)(param_1 + 0x78c) = fVar3 * 0.5;
      *(undefined8 *)(param_1 + 0x77c) = *(undefined8 *)(param_2 + 0x1328);
      *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_2 + 0x1330);
      *(undefined1 *)(param_1 + 0x790) = *(undefined1 *)(param_2 + 0x1338);
    }
  }
  return;
}



// FUNCTION 14123a740 FUN_14123a740 body=512 status=ok
// SIG undefined FUN_14123a740(void)

void FUN_14123a740(longlong param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  FUN_141239fd0();
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xb38) != 0)) {
    *(undefined1 *)(param_1 + 0x778) = *(undefined1 *)(param_2 + 0x12f0);
    lVar1 = *(longlong *)(param_2 + 0xb40);
    if (lVar1 != 0) {
      if (((1 < *(int *)(lVar1 + 0x290)) && (**(longlong **)(lVar1 + 0x288) != 0)) &&
         ((*(longlong **)(lVar1 + 0x288))[1] != 0)) {
        uVar4 = FUN_1409648e0();
        *(undefined4 *)(param_1 + 0x77c) = uVar4;
        uVar4 = FUN_1409648e0(*(undefined8 *)(*(longlong *)(lVar1 + 0x288) + 8));
        *(undefined4 *)(param_1 + 0x780) = uVar4;
      }
      if (((*(char *)(param_1 + 0x78c) == '\0') || ((int)*(float *)(param_1 + 0x700) != 0)) ||
         ((cVar2 = UAnimInstance::IsPlayingSlotAnimation
                             (param_2,*(undefined8 *)(param_2 + 0x1300),
                              *(undefined8 *)(param_2 + 0x12f8)), cVar2 != '\0' ||
          (cVar2 = UAnimInstance::IsPlayingSlotAnimation
                             (param_2,*(undefined8 *)(param_2 + 0x1308),
                              *(undefined8 *)(param_2 + 0x12f8)), cVar2 != '\0')))) {
        if ((*(char *)(param_1 + 0x6dd) == '\0') && (0 < (int)*(float *)(param_1 + 0x700))) {
          *(undefined1 *)(param_1 + 0x78c) = 1;
          *(undefined4 *)(param_1 + 0x784) = 0;
          uVar4 = FMath::FInterpTo(*(undefined4 *)(param_2 + 0x1310),0,param_3,0x40400000);
          *(undefined4 *)(param_2 + 0x1310) = uVar4;
        }
        else {
          *(float *)(param_1 + 0x784) = param_3 + *(float *)(param_1 + 0x784);
          *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(*(longlong *)(param_2 + 0xb38) + 0x7a4)
          ;
        }
      }
      else {
        fVar5 = *(float *)(param_1 + 0x784);
        if (0.0 <= fVar5) {
          if (1.0 <= fVar5) {
            fVar5 = 1.0;
          }
        }
        else {
          fVar5 = 0.0;
        }
        *(float *)(param_2 + 0x1310) = fVar5;
        if (*(int *)(param_1 + 0x788) < 1) {
          uVar3 = *(undefined8 *)(param_2 + 0x1300);
        }
        else {
          uVar3 = *(undefined8 *)(param_2 + 0x1308);
        }
        FUN_14227a0e0(param_2,uVar3,*(undefined8 *)(param_2 + 0x12f8),0x3e800000,0,0x3f800000,1,
                      0xbf800000,0);
        *(undefined1 *)(param_1 + 0x78c) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14123a940 FUN_14123a940 body=1643 status=ok
// SIG undefined FUN_14123a940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14123a940(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_6f8 [32];
  undefined8 *local_6d8;
  undefined4 local_6d0;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined1 local_688 [1560];
  longlong local_70;
  longlong local_60;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_6f8;
  FUN_14227b130();
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0xe00) == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0xe08) == 0) {
    return;
  }
  lVar5 = FUN_142269f40(param_2);
  if (lVar5 == 0) {
    *(undefined8 **)(param_1 + 0x6b8) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x6c0) = DAT_1468b5d98;
    uVar10 = DAT_1464aa810;
    uVar11 = DAT_1464aa814;
    uVar12 = DAT_1464aa818;
    uVar13 = DAT_1464aa81c;
  }
  else {
    lVar8 = *(longlong *)(lVar5 + 0x168);
    if (lVar8 == 0) {
      local_6d8 = _DAT_1468b5d90;
      local_6d0 = DAT_1468b5d98;
    }
    else {
      local_6d8 = *(undefined8 **)(lVar8 + 0x220);
      local_6d0 = *(undefined4 *)(lVar8 + 0x228);
    }
    *(undefined8 **)(param_1 + 0x6b8) = local_6d8;
    *(undefined4 *)(param_1 + 0x6c0) = local_6d0;
    lVar8 = *(longlong *)(lVar5 + 0x168);
    if (lVar8 == 0) {
      uVar13 = 0x3f800000;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      local_6c8 = uVar10;
      uStack_6c4 = uVar11;
      uStack_6c0 = uVar12;
      uStack_6bc = uVar13;
    }
    else {
      uVar10 = *(undefined4 *)(lVar8 + 0x210);
      uVar11 = *(undefined4 *)(lVar8 + 0x214);
      uVar12 = *(undefined4 *)(lVar8 + 0x218);
      uVar13 = *(undefined4 *)(lVar8 + 0x21c);
      local_6c8 = uVar10;
      uStack_6c4 = uVar11;
      uStack_6c0 = uVar12;
      uStack_6bc = uVar13;
    }
  }
  *(undefined4 *)(param_1 + 0x6d0) = uVar10;
  *(undefined4 *)(param_1 + 0x6d4) = uVar11;
  *(undefined4 *)(param_1 + 0x6d8) = uVar12;
  *(undefined4 *)(param_1 + 0x6dc) = uVar13;
  *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(param_2 + 0x444);
  *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(param_2 + 0x448);
  *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)(param_2 + 0x44c);
  *(undefined4 *)(param_1 + 0x724) = *(undefined4 *)(param_2 + 0x450);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_2 + 0x454);
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(param_2 + 0x45c);
  *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(param_2 + 0x460);
  *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(param_2 + 0x464);
  uVar6 = FRuntimeFloatCurve::GetRichCurve(param_2 + 0x470);
  *(undefined8 *)(param_1 + 0x740) = uVar6;
  uVar6 = FRuntimeFloatCurve::GetRichCurve(param_2 + 0x4e8);
  *(undefined8 *)(param_1 + 0x748) = uVar6;
  uVar6 = FRuntimeFloatCurve::GetRichCurve(param_2 + 0x560);
  *(undefined8 *)(param_1 + 0x750) = uVar6;
  uVar6 = FRuntimeFloatCurve::GetRichCurve();
  *(undefined8 *)(param_1 + 0x758) = uVar6;
  *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_2 + 0x650);
  uVar10 = (undefined4)DAT_1468b5da0;
  uVar11 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
  iVar1 = *(int *)(*(longlong *)(param_2 + 0xe08) + 0x960);
  lVar8 = *(longlong *)(param_2 + 0xe00);
  if (iVar1 == -1) {
    uVar12 = DAT_1468b5da8;
    if (*(char *)(param_2 + 0x440) == '\0') {
      if (1 < *(int *)(lVar8 + 0x6e8)) {
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x6e0) + 8);
        goto LAB_14123ac15;
      }
    }
    else if (0 < *(int *)(lVar8 + 0x6e8)) {
      lVar8 = **(longlong **)(lVar8 + 0x6e0);
LAB_14123ac15:
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)FUN_140a66600(uVar10,&local_6d8,1);
        uVar10 = (undefined4)*puVar7;
        uVar11 = (undefined4)((ulonglong)*puVar7 >> 0x20);
        uVar12 = *(undefined4 *)(puVar7 + 1);
      }
    }
    *(ulonglong *)(param_1 + 0x704) = CONCAT44(uVar11,uVar10);
    *(undefined4 *)(param_1 + 0x70c) = uVar12;
  }
  else {
    if ((iVar1 < 0) || (*(int *)(lVar8 + 0x6e8) <= iVar1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar12 = DAT_1468b5da8;
    if ((bVar3) &&
       (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x6e0) + (longlong)iVar1 * 8), lVar8 != 0)) {
      puVar7 = (undefined8 *)
               FUN_140a66600(lVar8,&local_6d8,CONCAT71((uint7)(uint3)((uint)DAT_1468b5da8 >> 8),1));
      uVar10 = (undefined4)*puVar7;
      uVar11 = (undefined4)((ulonglong)*puVar7 >> 0x20);
      uVar12 = *(undefined4 *)(puVar7 + 1);
    }
    *(ulonglong *)(param_1 + 0x704) = CONCAT44(uVar11,uVar10);
    *(undefined4 *)(param_1 + 0x70c) = uVar12;
  }
  if (*(char *)(param_1 + 0x6f0) != '\0') {
    *(undefined1 *)(param_1 + 0x6f0) = 0;
  }
  if (lVar5 != 0) {
    lVar5 = *(longlong *)(lVar5 + 0x118);
    if (lVar5 != 0) {
      lVar8 = FUN_1429d7ab0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar5 = *(longlong *)(lVar5 + 0x490);
        if (lVar5 != 0) {
          lVar8 = FUN_1429e18b0();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (plVar2 = *(longlong **)(lVar5 + 0x528), plVar2 != (longlong *)0x0)) {
            lVar5 = (**(code **)(*plVar2 + 0x720))(plVar2,local_688);
            puVar9 = (undefined4 *)FRotator::Quaternion(lVar5 + 0xc,&local_6c8);
            if (puVar9 != (undefined4 *)(param_1 + 0x6e0)) {
              if (*(char *)(param_1 + 0x6f0) != '\0') {
                *(undefined1 *)(param_1 + 0x6f0) = 0;
              }
              *(undefined4 *)(param_1 + 0x6e0) = *puVar9;
              *(undefined4 *)(param_1 + 0x6e4) = puVar9[1];
              *(undefined4 *)(param_1 + 0x6e8) = puVar9[2];
              *(undefined4 *)(param_1 + 0x6ec) = puVar9[3];
              *(undefined1 *)(param_1 + 0x6f0) = 1;
            }
            if (local_60 != 0) {
              FMemory::Free();
            }
            if (local_70 != 0) {
              FMemory::Free();
            }
            iVar1 = *(int *)(*(longlong *)(param_2 + 0xe08) + 0x960);
            if ((iVar1 < 0) || (*(int *)(*(longlong *)(param_2 + 0xe00) + 0x6e8) <= iVar1)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              lVar5 = *(longlong *)
                       (*(longlong *)(*(longlong *)(param_2 + 0xe00) + 0x6e0) + (longlong)iVar1 * 8)
              ;
              if (lVar5 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = FUN_142ceeb40(lVar5,0);
              }
            }
            else {
              lVar5 = 0;
            }
            *(bool *)(param_1 + 0x701) = lVar5 != 0;
            if (lVar5 == 0) {
              if ((((*(int *)(*(longlong *)(param_2 + 0xe00) + 0x6e8) < 1) ||
                   (lVar5 = **(longlong **)(*(longlong *)(param_2 + 0xe00) + 0x6e0), lVar5 == 0)) ||
                  (lVar5 = FUN_142ceeb40(lVar5,0), lVar5 == 0)) &&
                 (((*(int *)(*(longlong *)(param_2 + 0xe00) + 0x6e8) < 2 ||
                   (lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe00) + 0x6e0) + 8)
                   , lVar5 == 0)) || (lVar5 = FUN_142ceeb40(lVar5,0), lVar5 == 0)))) {
                *(undefined1 *)(param_2 + 0x442) = 0;
              }
              else {
                *(undefined1 *)(param_2 + 0x442) = 1;
              }
            }
            else {
              *(bool *)(param_2 + 0x442) = lVar5 != 0;
            }
          }
        }
        goto LAB_14123ae39;
      }
    }
    *(undefined1 *)(param_2 + 0x442) = 0;
  }
LAB_14123ae39:
  if (((*(longlong *)(param_2 + 0xe10) != 0) || (*(longlong *)(param_2 + 0xe18) != 0)) &&
     (lVar5 = USignificanceManager::GetWorld(param_2), lVar5 != 0)) {
    lVar5 = USignificanceManager::GetWorld(param_2);
    local_6b8 = *(undefined8 *)(lVar5 + 0x210);
    uStack_6b0 = *(undefined8 *)(lVar5 + 0x218);
    local_6a8 = *(undefined4 *)(lVar5 + 0x220);
    uStack_6a4 = *(undefined4 *)(lVar5 + 0x224);
    uStack_6a0 = *(undefined4 *)(lVar5 + 0x228);
    uStack_69c = *(undefined4 *)(lVar5 + 0x22c);
    local_698 = *(undefined4 *)(lVar5 + 0x230);
    uStack_694 = *(undefined4 *)(lVar5 + 0x234);
    uStack_690 = *(undefined4 *)(lVar5 + 0x238);
    uStack_68c = *(undefined4 *)(lVar5 + 0x23c);
    local_6d8 = &local_6b8;
    puVar7 = (undefined8 *)FUN_14120a930(&local_6d8,&local_6c8,*(undefined8 *)(param_2 + 0xe10));
    *(undefined8 *)(param_1 + 0x764) = *puVar7;
    *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(puVar7 + 1);
    puVar7 = (undefined8 *)FUN_14120a930(&local_6d8,&local_6c8,*(undefined8 *)(param_2 + 0xe18));
    *(undefined8 *)(param_1 + 0x770) = *puVar7;
    *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(puVar7 + 1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146877138) && (_Init_thread_header(&DAT_146877138), DAT_146877138 == -1))
  {
    FName::FName(&DAT_146877130,L"RetargetEnter",1);
    _Init_thread_footer(&DAT_146877138);
  }
  cVar4 = FUN_1422687f0(param_2,DAT_146877130,param_1 + 0x73c);
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x73c) = 0x3f800000;
  }
  *(undefined1 *)(param_1 + 0x700) = *(undefined1 *)(param_2 + 0x441);
  return;
}



// FUNCTION 14123afd0 FUN_14123afd0 body=198 status=ok
// SIG undefined FUN_14123afd0(void)

void FUN_14123afd0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = FUN_140e822f0(lVar3 + 0x1b10,*(undefined4 *)(param_1 + 0x898));
      if (lVar3 != 0) {
        cVar2 = FUN_141257250(param_1);
        lVar4 = 0x5c;
        if (cVar2 != '\0') {
          lVar4 = 0x58;
        }
        puVar5 = (undefined4 *)FLinearColor::FLinearColor(local_38,lVar3 + lVar4);
        local_18 = *puVar5;
        uStack_14 = puVar5[1];
        uStack_10 = puVar5[2];
        uStack_c = puVar5[3];
        local_28 = 0x3f800000;
        uStack_24 = 0x3f800000;
        uStack_20 = 0x3f800000;
        uStack_1c = 0x3f800000;
        FUN_14208db90(*(undefined8 *)(param_1 + 0x6a8),&local_28);
      }
    }
  }
  return;
}



// FUNCTION 14123b0a0 FUN_14123b0a0 body=2453 status=ok
// SIG undefined FUN_14123b0a0(void)

void FUN_14123b0a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  undefined4 *local_598;
  undefined8 local_590;
  undefined1 local_588 [8];
  longlong *local_580;
  undefined8 local_570;
  undefined1 local_568 [8];
  longlong *local_560;
  undefined8 local_550;
  undefined1 local_548 [8];
  longlong *local_540;
  undefined1 local_530 [8];
  longlong *local_528;
  undefined1 local_518 [8];
  longlong *local_510;
  undefined1 local_500 [8];
  longlong *local_4f8;
  undefined1 local_4e8 [8];
  longlong *local_4e0;
  undefined1 local_4d0 [8];
  longlong *local_4c8;
  undefined1 local_4b8 [8];
  longlong *local_4b0;
  undefined1 local_4a0 [8];
  longlong *local_498;
  undefined1 local_488 [8];
  longlong *local_480;
  undefined1 local_468 [32];
  longlong *local_448;
  undefined8 local_428 [4];
  undefined8 local_408;
  undefined1 local_3e8 [24];
  undefined1 local_3d0 [24];
  undefined1 local_3b8 [24];
  undefined1 local_3a0 [24];
  undefined1 local_388 [24];
  undefined1 local_370 [24];
  undefined1 local_358 [32];
  undefined1 local_338 [184];
  undefined4 local_280;
  undefined1 local_248 [32];
  undefined1 local_228 [240];
  undefined1 local_138 [32];
  undefined1 local_118 [184];
  undefined4 local_60;
  
  plVar13 = (longlong *)(param_1 + 0x328);
  FUN_140ebe6a0(plVar13,0);
  plVar12 = *(longlong **)(param_1 + 0x300);
  if (plVar12 == (longlong *)0x0) goto LAB_14123b985;
  iVar8 = *(int *)(param_1 + 0x340);
  if (iVar8 == 0) {
    lVar14 = *plVar12;
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_3a0,&DAT_14470faf0,L"VendingMachineMenu",L"BuyHeader");
    (**(code **)(lVar14 + 0x2d0))(*(undefined8 *)(param_1 + 0x300),uVar9);
    FText::FText(local_568);
    local_550 = 0;
    if ((*(longlong *)(param_1 + 0x338) != 0) && (lVar14 = FUN_140e4c7f0(), lVar14 != 0)) {
      lVar10 = *(longlong *)(param_1 + 0x2c8);
      local_598 = (undefined4 *)0x0;
      local_590 = 0;
      if (lVar10 == 0) {
LAB_14123b525:
        lVar10 = 0;
      }
      else {
        lVar11 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_14123b525;
      }
      FUN_140b2ac50(lVar14,lVar10,&local_598);
      puVar3 = local_598 + (int)local_590;
      for (puVar16 = local_598; puVar16 != puVar3; puVar16 = puVar16 + 1) {
        FUN_142fde510(local_428);
        cVar7 = FUN_142ffa4f0(lVar14,puVar16,local_428);
        if (cVar7 != '\0') {
          FUN_140ed0240(local_358);
          uVar9 = FUN_1411e3dd0(local_500,local_408);
          FText::operator=(local_358,uVar9);
          plVar12 = local_4f8;
          if (local_4f8 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_4f8 + 1;
            lVar10 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_4f8)(local_4f8);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          cVar7 = FText::IsEmpty(local_358);
          if (cVar7 != '\0') {
            uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_4e8,L"Fix Me: No Name",L"VendingMachineMenu",L"NoItemText");
            FText::operator=(local_358,uVar9);
            plVar12 = local_4e0;
            if (local_4e0 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_4e0 + 1;
              lVar10 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_4e0)(local_4e0);
                LOCK();
                piVar2 = (int *)((longlong)plVar12 + 0xc);
                iVar8 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                }
              }
            }
          }
          uVar9 = FUN_142ff9f00(local_4d0,local_408);
          FText::operator=(local_338,uVar9);
          plVar12 = local_4c8;
          if (local_4c8 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_4c8 + 1;
            lVar10 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_4c8)(local_4c8);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          local_280 = *puVar16;
          iVar8 = *(int *)(param_1 + 0x330);
          *(int *)(param_1 + 0x330) = iVar8 + 1;
          if (*(int *)(param_1 + 0x334) < iVar8 + 1) {
            TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow(plVar13,iVar8);
          }
          FUN_140e9a4f0((longlong)iVar8 * 0x110 + *plVar13,local_358);
          FUN_140e9c360(local_358);
        }
      }
      lVar10 = *(longlong *)(param_1 + 0x2c8);
      if (lVar10 == 0) {
LAB_14123b74d:
        lVar10 = 0;
      }
      else {
        lVar11 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_14123b74d;
      }
      lVar14 = FUN_140b28fa0(lVar14,lVar10);
      if (lVar14 == 0) {
        if (*(longlong *)(param_1 + 0x318) != 0) {
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_370,L"SOLD OUT",L"VendingMachineMenu",L"SoldOutText");
          FUN_142f0e010(*(undefined8 *)(param_1 + 0x318),uVar9);
          plVar12 = (longlong *)(*(longlong *)(param_1 + 0x318) + 0x208);
          (**(code **)(*plVar12 + 0x38))(plVar12,0);
          lVar14 = FUN_142eebf20(param_1);
          if (lVar14 == *(longlong *)(param_1 + 0x318)) {
            FUN_142f0d3e0(param_1,*(undefined8 *)(param_1 + 0x2f0),0);
          }
        }
      }
      else {
        FUN_140ed0240(local_248);
        uVar9 = FUN_1411e3dd0(local_4b8,lVar14);
        FText::operator=(local_248,uVar9);
        if (local_4b0 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_4b0 + 1;
          lVar10 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_4b0)(local_4b0);
            LOCK();
            piVar2 = (int *)((longlong)local_4b0 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_4b0 + 8))(local_4b0,1);
            }
          }
        }
        cVar7 = FText::IsEmpty(local_248);
        if (cVar7 != '\0') {
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_4a0,L"Fix Me: No Name",L"VendingMachineMenu",L"NoItemText");
          FText::operator=(local_248,uVar9);
          if (local_498 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_498 + 1;
            lVar10 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_498)(local_498);
              LOCK();
              piVar2 = (int *)((longlong)local_498 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_498 + 8))(local_498,1);
              }
            }
          }
        }
        uVar9 = FUN_142ff9f00(local_488,lVar14);
        FText::operator=(local_228,uVar9);
        if (local_480 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_480 + 1;
          lVar14 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_480)(local_480);
            LOCK();
            piVar2 = (int *)((longlong)local_480 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_480 + 8))(local_480,1);
            }
          }
        }
        if (*(longlong *)(param_1 + 0x318) != 0) {
          uVar9 = FText::FText(local_388,local_248);
          FUN_142f0e010(*(undefined8 *)(param_1 + 0x318),uVar9);
        }
        FUN_140e9c360(local_248);
      }
      if (local_598 != (undefined4 *)0x0) {
        FMemory::Free();
      }
    }
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 == 2) {
        lVar14 = *plVar12;
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_3e8,L"Buyback",L"VendingMachineMenu",L"BuybackHeader");
        (**(code **)(lVar14 + 0x2d0))(*(undefined8 *)(param_1 + 0x300),uVar9);
        lVar14 = *(longlong *)(param_1 + 0x338);
        if (lVar14 != 0) {
          plVar15 = *(longlong **)(lVar14 + 0x198);
          plVar12 = plVar15 + *(int *)(lVar14 + 0x1a0);
          for (; plVar15 != plVar12; plVar15 = plVar15 + 1) {
            if (*plVar15 != 0) {
              FUN_142fde510(local_468);
              plVar5 = (longlong *)*plVar15;
              local_448 = plVar5;
              uVar9 = FUN_14301f8f0();
              lVar10 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar9);
              lVar14 = 0;
              if (lVar10 != 0) {
                lVar14 = *(longlong *)(lVar10 + 0x208);
              }
              if (lVar14 != 0) {
                FUN_140ed0240(local_138);
                uVar9 = FUN_1411e3dd0(local_548,local_448);
                FText::operator=(local_138,uVar9);
                plVar5 = local_540;
                if (local_540 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_540 + 1;
                  lVar14 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar14 == 1) {
                    (**(code **)*local_540)(local_540);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar5 + 0xc);
                    iVar8 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*plVar5 + 8))(plVar5,1);
                    }
                  }
                }
                uVar9 = FUN_142ff9f00(local_530,local_448);
                FText::operator=(local_118,uVar9);
                plVar5 = local_528;
                if (local_528 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_528 + 1;
                  lVar14 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar14 == 1) {
                    (**(code **)*local_528)(local_528);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar5 + 0xc);
                    iVar8 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*plVar5 + 8))(plVar5,1);
                    }
                  }
                }
                iVar8 = *(int *)(param_1 + 0x330);
                local_60 = 0xffffffff;
                *(int *)(param_1 + 0x330) = iVar8 + 1;
                if (*(int *)(param_1 + 0x334) < iVar8 + 1) {
                  TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow(plVar13,iVar8);
                }
                FUN_140e9a4f0((longlong)iVar8 * 0x110 + *plVar13,local_138);
                FUN_140e9c360(local_138);
              }
            }
          }
        }
      }
      goto LAB_14123b985;
    }
    lVar14 = *plVar12;
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_3d0,L"Sell",L"VendingMachineMenu",L"SellHeader");
    (**(code **)(lVar14 + 0x2d0))(*(undefined8 *)(param_1 + 0x300),uVar9);
    if (*(longlong *)(param_1 + 800) == 0) goto LAB_14123b985;
    lVar14 = *(longlong *)(param_1 + 0x2c0);
    if (lVar14 == 0) {
LAB_14123b34c:
      lVar14 = 0;
    }
    else {
      lVar10 = FUN_1414e4b00();
      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_14123b34c;
    }
    FText::FText(local_588);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_518,L"Fix Me: Missing Filter",L"VendingMachineMenu",L"MissingFilter");
    FText::operator=(local_588,uVar9);
    if (local_510 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_510 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_510)(local_510);
        LOCK();
        piVar2 = (int *)((longlong)local_510 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_510 + 8))(local_510,1);
        }
      }
    }
    local_570 = 0;
    if ((lVar14 != 0) && (0 < *(int *)(lVar14 + 0x60))) {
      iVar8 = *(int *)(param_1 + 0x344);
      if ((-1 < iVar8) && (iVar8 < *(int *)(lVar14 + 0x60))) {
        lVar14 = (longlong)iVar8 * 0x20 + *(longlong *)(lVar14 + 0x58);
        FText::operator=(local_588,lVar14);
        local_570 = *(undefined8 *)(lVar14 + 0x18);
      }
    }
    if (*(longlong **)(param_1 + 0x308) != (longlong *)0x0) {
      lVar14 = **(longlong **)(param_1 + 0x308);
      uVar9 = FText::FText(local_3b8,local_588);
      (**(code **)(lVar14 + 0x2d0))(*(undefined8 *)(param_1 + 0x308),uVar9);
    }
    uVar9 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 800) + 0xd80) + 0x18))();
    FUN_1411f4910(plVar13,uVar9,local_570);
    local_560 = local_580;
  }
  if (local_560 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_560 + 1;
    lVar14 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_560)(local_560);
      LOCK();
      piVar2 = (int *)((longlong)local_560 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_560 + 8))(local_560,1);
      }
    }
  }
LAB_14123b985:
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    iVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x860) + 0x10))();
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x860) + 0x38))();
    lVar14 = *plVar13;
    lVar10 = (longlong)*(int *)(param_1 + 0x330) * 0x110 + lVar14;
    for (; lVar14 != lVar10; lVar14 = lVar14 + 0x110) {
      FUN_1414e5b90(param_1,lVar14);
    }
    iVar4 = *(int *)(param_1 + 0x330);
    if (0 < iVar4) {
      plVar13 = (longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x860);
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (iVar4 <= iVar8) {
        iVar8 = iVar4 + -1;
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,iVar8,1,0);
    }
  }
  return;
}



// FUNCTION 14123ba40 FUN_14123ba40 body=733 status=ok
// SIG undefined FUN_14123ba40(void)

void FUN_14123ba40(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_248;
  undefined8 uStack_240;
  undefined1 local_238 [272];
  undefined1 local_128 [272];
  
  lVar5 = FUN_142eb65a0();
  if (lVar5 != 0) {
    lVar6 = FUN_1413a0ec0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (((cVar4 = FWeakObjectPtr::IsValid(lVar5 + 0x2c8), cVar4 == '\0' ||
         (lVar6 = FWeakObjectPtr::Get(lVar5 + 0x2c8), *(int *)(lVar6 + 0x170) == -1)) &&
        (*(char *)(lVar5 + 0x2d8) == '\0')))) {
      iVar2 = *(int *)(lVar5 + 0x2d0);
      plVar1 = (longlong *)(param_1 + 0x808);
      plVar8 = (longlong *)*plVar1;
      lVar5 = 0;
      plVar9 = plVar8 + (longlong)*(int *)(param_1 + 0x810) * 2;
      if (plVar8 != plVar9) {
        do {
          if ((*(int *)((longlong)plVar8 + 0xc) == *(int *)(param_1 + 0x898)) &&
             ((int)plVar8[1] == iVar2)) {
            lVar5 = *plVar8;
            uStack_240 = plVar8[1];
            local_248 = lVar5;
            if (lVar5 != 0) goto LAB_14123bbc5;
            break;
          }
          plVar8 = plVar8 + 2;
        } while (plVar8 != plVar9);
      }
      uStack_240 = CONCAT44(*(undefined4 *)(param_1 + 0x898),iVar2);
      lVar6 = FUN_140e515c0(*(undefined4 *)(param_1 + 0x898),iVar2);
      if (lVar6 != 0) {
        uVar7 = FUN_140e971d0(param_1);
        lVar5 = FUN_140e5f140(lVar6,uVar7,0,0);
        local_248 = lVar5;
        if (lVar5 != 0) {
          iVar2 = *(int *)(param_1 + 0x810);
          *(int *)(param_1 + 0x810) = iVar2 + 1;
          if (*(int *)(param_1 + 0x814) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          plVar1 = (longlong *)(*plVar1 + (longlong)iVar2 * 0x10);
          *plVar1 = local_248;
          plVar1[1] = uStack_240;
        }
      }
LAB_14123bbc5:
      uVar7 = FUN_141227990(param_1);
      FUN_1411e38c0(local_238,lVar5,uVar7);
      uVar7 = FUN_140e9a4f0(local_128,local_238);
      cVar4 = FUN_141240ff0(param_1,*(undefined8 *)(param_1 + 0x718),uVar7);
      local_248 = 0;
      if (cVar4 == '\0') {
        uStack_240 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
        FGenericPlatformString::Memcpy(local_248,&DAT_14470b574,6);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x600),&local_248);
      }
      else {
        uStack_240 = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
        FGenericPlatformString::Memcpy(local_248,L"focusGear",0x14);
        FUN_142088910(*(undefined8 *)(param_1 + 0x600),&local_248);
      }
      if (local_248 != 0) {
        FMemory::Free();
      }
      FUN_140e9c360(local_238);
      return;
    }
  }
  uStack_240 = 3;
  local_248 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
  FGenericPlatformString::Memcpy(local_248,&DAT_14470c550,6);
  FUN_142088cf0(*(undefined8 *)(param_1 + 0x600),&local_248);
  if (local_248 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14123bd20 FUN_14123bd20 body=837 status=ok
// SIG undefined FUN_14123bd20(void)

void FUN_14123bd20(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  bool bVar15;
  ulonglong local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  longlong local_b8 [2];
  longlong local_a8 [3];
  longlong local_90 [2];
  undefined1 local_80 [8];
  int local_78;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (param_2 == 0) {
    return;
  }
  bVar15 = false;
  local_res10 = local_res10 & 0xffffffff00000000;
  if (*(longlong *)(param_2 + 0xa58) == 0) {
LAB_14123bda1:
    bVar3 = false;
  }
  else {
    bVar15 = true;
    puVar7 = (undefined8 *)FName::ToString(*(longlong *)(param_2 + 0xa58) + 0x88,local_90);
    puVar13 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0xd0) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = *(undefined2 **)(param_1 + 200);
    }
    if (*(int *)(puVar7 + 1) != 0) {
      puVar13 = (undefined2 *)*puVar7;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
    if (iVar5 != 0) goto LAB_14123bda1;
    bVar3 = true;
  }
  if ((bVar15) && (local_90[0] != 0)) {
    FMemory::Free();
  }
  if (!bVar3) {
    return;
  }
  plVar9 = *(longlong **)(param_2 + 0x498);
  if (plVar9 != (longlong *)0x0) {
    lVar8 = FUN_1413ffe00();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15) {
      local_res18 = AGFireballProjectile::GetPrivateStaticClass();
      lVar8 = (**(code **)(*plVar9 + 0x628))(plVar9,local_res18);
      if (lVar8 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x3b0);
        goto LAB_14123be2f;
      }
    }
  }
  lVar8 = 0;
LAB_14123be2f:
  if ((*(longlong *)(param_1 + 0xd8) != 0) && (lVar8 != 0)) {
    plVar9 = (longlong *)FUN_1409aabf0(param_1 + 0xe0,local_res20);
    plVar9 = (longlong *)*plVar9;
    if ((plVar9 != (longlong *)0x0) &&
       ((plVar9[0x1f] != 0 || ((**(code **)(*plVar9 + 0x368))(plVar9), plVar9[0x1f] != 0)))) {
      puVar10 = (ulonglong *)FUN_1409aabf0(param_1 + 0xe0);
      if (*puVar10 != 0) {
        uVar11 = FUN_1414425d0();
        local_res10 = *puVar10;
        for (uVar2 = local_res10; uVar2 != 0; uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
          if (uVar2 == uVar11) goto LAB_14123bed0;
        }
      }
      local_res10 = 0;
LAB_14123bed0:
      plVar9 = (longlong *)FUN_1409a7470(lVar8,&local_res10);
      local_68 = 0;
      if (((plVar9 != (longlong *)0x0) && (*plVar9 != 0)) &&
         (cVar4 = FUN_1409a7560(lVar8,*plVar9,local_80), cVar4 != '\0')) {
        cVar4 = APlayerController::IsPrimaryPlayer(param_2);
        if (cVar4 == '\0') {
          uVar6 = FUN_1409aa830(*plVar9);
          FString::PrintfImpl(local_a8,L"%i/%i",local_78 + *(int *)(param_1 + 0x80),uVar6);
          uVar12 = FText::FromString(local_48,local_a8);
          FText::operator=(param_1 + 0xb0,uVar12);
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_40 + 1;
            lVar8 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
        }
        else {
          uVar6 = FUN_1409aa830(*plVar9);
          FString::PrintfImpl(local_b8,L"%i/%i",local_78 + *(int *)(param_1 + 0x80),uVar6);
          uVar12 = FText::FromString(local_60,local_b8);
          FText::operator=(param_1 + 0x98,uVar12);
          local_a8[0] = local_b8[0];
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_58 + 1;
            lVar8 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar1 = (int *)((longlong)local_58 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              local_a8[0] = local_b8[0];
              if (iVar5 == 1) {
                (**(code **)(*local_58 + 8))(local_58,1);
                local_a8[0] = local_b8[0];
              }
            }
          }
        }
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 14123c070 FUN_14123c070 body=637 status=ok
// SIG undefined FUN_14123c070(void)

void FUN_14123c070(undefined8 param_1,longlong param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong local_res18;
  longlong local_res20;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  
  uVar8 = 0;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_14083bac0(param_2,&local_48,0);
  uVar11 = (ulonglong)((longlong)(local_48 + (int)local_40) + (7 - (longlong)local_48)) >> 3;
  if (local_48 + (int)local_40 < local_48) {
    uVar11 = uVar8;
  }
  if (uVar11 != 0) {
    plVar10 = local_48;
    do {
      lVar6 = *plVar10;
      iVar3 = FUN_142696340(lVar6 + 0x3b0);
      if ((iVar3 != 0) && (*(char *)(lVar6 + 0x3da) == '\x02')) {
        pwVar4 = _guard_xfg_dispatch_icall_nop
                           (L"&UCollisionDamageComponent::OnMeshComponentBeginOverlap",L"::");
        pwVar2 = (wchar_t *)0x0;
        while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
          pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar2 = pwVar1;
        }
        FName::FName(&local_res20,pwVar2 + 2,1);
        lVar5 = local_res20;
        plVar9 = (longlong *)(lVar6 + 0x570);
        FWeakObjectPtr::operator=(&local_58,0);
        local_50 = 0;
        FWeakObjectPtr::operator=(&local_58,param_1);
        local_50 = lVar5;
        local_res18 = 0;
        if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(&local_58), lVar5 != 0)) {
          UObject::FindFunction(lVar5,local_50);
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
        iVar3 = *(int *)(lVar6 + 0x578);
        *(int *)(lVar6 + 0x578) = iVar3 + 1;
        if (*(int *)(lVar6 + 0x57c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar3);
        }
        puVar7 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar9);
        *puVar7 = local_58;
        puVar7[1] = local_54;
        *(longlong *)(puVar7 + 2) = local_50;
      }
      plVar10 = plVar10 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar11);
  }
  plVar10 = local_48;
  pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UCollisionDamageComponent::OnHit",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res18,pwVar2 + 2,1);
  lVar6 = local_res18;
  plVar9 = (longlong *)(param_2 + 0x280);
  FWeakObjectPtr::operator=(&local_58,0);
  local_50 = 0;
  FWeakObjectPtr::operator=(&local_58,param_1);
  local_50 = lVar6;
  if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_58), lVar6 != 0)) {
    UObject::FindFunction(lVar6,local_50);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
  iVar3 = *(int *)(param_2 + 0x288);
  *(int *)(param_2 + 0x288) = iVar3 + 1;
  if (*(int *)(param_2 + 0x28c) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar3);
  }
  puVar7 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar9);
  *puVar7 = local_58;
  puVar7[1] = local_54;
  *(longlong *)(puVar7 + 2) = local_50;
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  return;
}



// FUNCTION 14123c2f0 FUN_14123c2f0 body=609 status=ok
// SIG undefined FUN_14123c2f0(void)

void FUN_14123c2f0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  
  lVar5 = *(longlong *)(param_1 + 0x338);
  if (lVar5 != 0) {
    plVar6 = (longlong *)(lVar5 + 0x178);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = 0x4123b0a0;
      *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
      iVar1 = *(int *)(lVar5 + 0x180);
      *(int *)(lVar5 + 0x180) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x184) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
      *puVar4 = plVar2;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
  }
  if ((*(longlong *)(param_1 + 0x338) != 0) && (lVar5 = FUN_140e4c7f0(), lVar5 != 0)) {
    plVar2 = (longlong *)(lVar5 + 0x2c0);
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = 0x4123b0a0;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_2c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar3;
      *plVar6 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
      (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
      iVar1 = *(int *)(lVar5 + 0x2c8);
      *(int *)(lVar5 + 0x2c8) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x2cc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
      *puVar4 = plVar6;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
  }
  if ((*(longlong *)(param_1 + 800) != 0) &&
     (lVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 800) + 0xd80) + 0x18))(),
     lVar5 != 0)) {
    plVar2 = (longlong *)(lVar5 + 0x2c0);
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = 0x4123b0a0;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_2c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar3;
      *plVar6 = (longlong)&PTR_FUN_143f77bd0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
      (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
      iVar1 = *(int *)(lVar5 + 0x2c8);
      *(int *)(lVar5 + 0x2c8) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x2cc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
      *puVar4 = plVar6;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 14123c560 FUN_14123c560 body=291 status=ok
// SIG undefined FUN_14123c560(void)

void FUN_14123c560(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    if (param_2 == 0) {
      return;
    }
    plVar1 = (longlong *)(param_1 + 0x6e0);
    plVar6 = (longlong *)*plVar1;
    iVar2 = *(int *)(param_1 + 0x6e8);
    for (plVar9 = plVar6; plVar9 != plVar6 + iVar2; plVar9 = plVar9 + 1) {
      if (*plVar9 == param_2) goto LAB_14123c65d;
    }
    iVar8 = *(int *)(param_2 + 0x6c8);
    if (iVar8 < 0) {
      iVar3 = *(int *)(param_1 + 0x6e8);
      uVar4 = 0;
      uVar5 = uVar4;
      iVar7 = iVar8;
      if (0 < iVar3) {
        do {
          iVar7 = (int)uVar5;
          if (*plVar6 == 0) break;
          uVar4 = uVar4 + 1;
          plVar6 = plVar6 + 1;
          uVar5 = (ulonglong)((int)uVar5 + 1);
          iVar7 = iVar8;
        } while ((longlong)uVar4 < (longlong)iVar3);
      }
      iVar8 = iVar7;
      if (iVar7 < 0) {
        iVar8 = iVar3;
      }
    }
    if (*(int *)(param_1 + 0x6e8) <= iVar8) {
      iVar7 = (iVar8 - *(int *)(param_1 + 0x6e8)) + 1;
      iVar3 = iVar2 + iVar7;
      *(int *)(param_1 + 0x6e8) = iVar3;
      if (*(int *)(param_1 + 0x6ec) < iVar3) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar2 * 8),0,(longlong)iVar7 << 3);
    }
    *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = param_2;
    *(int *)(param_2 + 0x6c8) = iVar8;
  }
LAB_14123c65d:
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x12b0) != 0)) {
    FUN_1412789c0(*(longlong *)(param_1 + 0x12b0),param_2);
    return;
  }
  return;
}



// FUNCTION 14123c690 Rehash body=530 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FName,FSlateFontInfo>,TDefaultMapHashableKeyFuncs<FName,FSlateFontInfo,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_14123c7cf;
        uVar8 = puVar13[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_14123c7cf:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0x68 + *param_1);
        uVar8 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 100) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0xc) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14123c8b0 FUN_14123c8b0 body=555 status=ok
// SIG undefined FUN_14123c8b0(void)

void FUN_14123c8b0(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  lVar1 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x150),0,0);
    *(undefined8 *)(param_1 + 0x150) = uVar6;
  }
  puVar2 = (uint *)(param_1 + 0x158);
  uVar5 = *puVar2;
  if (uVar5 != 0) {
    FUN_1406f49a0(lVar1,0);
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar8 = (longlong)(int)*puVar2 - 1U & uVar10;
        lVar9 = *(longlong *)(param_1 + 0x150);
        if (*(longlong *)(param_1 + 0x150) == 0) {
          lVar9 = lVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)(lVar9 + uVar8 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 0x110);
    local_58 = 0;
    iVar3 = *(int *)(param_1 + 0x120);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = *(uint **)(param_1 + 0x118);
      if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar9 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_14123c9ff;
        uVar5 = puVar12[lVar9 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_14123c9ff:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        lVar9 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar9 = param_1;
        }
        puVar12 = (uint *)(lVar9 + (longlong)iStack_1c * 0x10);
        uVar5 = *puVar2 - 1 & *puVar12;
        puVar12[3] = uVar5;
        lVar9 = *(longlong *)(param_1 + 0x150);
        if (*(longlong *)(param_1 + 0x150) == 0) {
          lVar9 = lVar1;
        }
        puVar12[2] = *(uint *)(lVar9 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar5) * 4);
        lVar9 = *(longlong *)(param_1 + 0x150);
        if (*(longlong *)(param_1 + 0x150) == 0) {
          lVar9 = lVar1;
        }
        *(int *)(lVar9 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar5) * 4) = iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        FUN_1406e9690(&local_30);
      } while (iStack_1c < (int)puStack_28[4]);
    }
  }
  return;
}



// FUNCTION 14123cae0 FUN_14123cae0 body=93 status=ok
// SIG undefined FUN_14123cae0(void)

void FUN_14123cae0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if ((*(longlong *)(param_1 + 0x6d0) != 0) && (*(longlong *)(param_1 + 0x668) != 0)) {
    cVar1 = FUN_142cf39b0(*(longlong *)(param_1 + 0x668),0);
    if (cVar1 != '\0') {
      uVar2 = FUN_141270f70(*(undefined8 *)(param_1 + 0x6d0),param_2);
      FUN_14127c500(*(undefined8 *)(param_1 + 0x6d0),uVar2,0);
    }
  }
  return;
}



// FUNCTION 14123cb40 FUN_14123cb40 body=453 status=ok
// SIG undefined FUN_14123cb40(void)

void FUN_14123cb40(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 local_res8;
  
  local_res8 = param_2;
  iVar4 = TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x1d8,&local_res8);
  if (((0 < iVar4) && ((int)param_1[0x1d9] == 0)) &&
     (cVar3 = FUN_14122a750(param_1,1), cVar3 == '\0')) {
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    *(undefined4 *)(param_1 + 0x1da) = *(undefined4 *)(lVar5 + 0x790);
    if (((char)param_1[0x25] == '\x03') && (lVar5 = param_1[0xa3], lVar5 != 0)) {
      FUN_142df2b50(lVar5,0);
      plVar10 = (longlong *)param_1[0xdc];
      lVar9 = 0;
      lVar2 = param_1[0x139];
      plVar1 = plVar10 + (int)param_1[0xdd];
      for (; lVar8 = lVar9, plVar10 != plVar1; plVar10 = plVar10 + 1) {
        lVar8 = *plVar10;
        if (((lVar8 != 0) && (*(char *)(lVar8 + 0x6e5) != '\0')) &&
           ((cVar3 = FUN_142cf39b0(lVar8,1), cVar3 != '\0' &&
            (plVar6 = (longlong *)FUN_142ceeb40(lVar8,0), plVar6 != (longlong *)0x0)))) {
          uVar7 = UCircularThrobber::GetPrivateStaticClass();
          lVar8 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
          if (lVar8 != 0) {
            cVar3 = (**(code **)(*plVar6 + 0x780))(plVar6);
            if (cVar3 != '\0') break;
            if (lVar9 == 0) {
              lVar9 = lVar8;
            }
          }
        }
      }
      if (lVar8 == 0) {
        FUN_142df2ca0(lVar5,*(undefined8 *)(lVar5 + 0x188));
        *(undefined1 *)(param_1 + 0x139) = 3;
        FUN_141214880(param_1);
      }
      else {
        cVar3 = FUN_142dec9a0(lVar8);
        *(char *)(param_1 + 0x139) = (cVar3 == '\x01') + '\x02';
        FUN_142df2b50(lVar5,lVar8);
      }
      if ((char)lVar2 != (char)param_1[0x139]) {
        FUN_141256d00(param_1);
      }
    }
  }
  return;
}



// FUNCTION 14123cd10 FUN_14123cd10 body=82 status=ok
// SIG undefined FUN_14123cd10(void)

void FUN_14123cd10(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((*(char *)((longlong)param_1 + 0xed6) == '\0') &&
     ((*(char *)((longlong)param_1 + 0xebe) == '\0' || (param_2 != '\0')))) {
    *(undefined1 *)((longlong)param_1 + 0xed6) = 1;
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_1407c74b0(uVar1);
    if (lVar2 != 0) {
      FUN_1407c4580(lVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14123cd70 FUN_14123cd70 body=465 status=ok
// SIG undefined FUN_14123cd70(void)

void FUN_14123cd70(longlong *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_18;
  int local_10;
  
  if ((char)param_1[0x25] == '\x03') {
    iVar3 = FUN_1412278a0(param_1,param_2,0);
    if ((iVar3 < 0) || ((int)param_1[0xdd] <= iVar3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar5 == 0) {
LAB_14123ce3e:
        if ((param_3 < 0) || ((int)param_1[0xdd] <= param_3)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((bVar1) && (lVar5 = *(longlong *)(param_1[0xdc] + (longlong)param_3 * 8), lVar5 != 0))
           && ((*(char *)(lVar5 + 0x6f8) != '\0' && (*(longlong *)(lVar5 + 0x118) != 0)))) {
          cVar2 = FUN_142cf39b0(lVar5,0);
          if (((cVar2 == '\0') || (lVar7 = FUN_142ceeb40(lVar5,0), lVar7 == 0)) ||
             (iVar4 = FUN_140b812b0(param_2,lVar7), iVar4 != 0)) {
            FUN_141214b00(param_1,param_2,param_3);
          }
          else if ((*(longlong **)(lVar5 + 0x118) != (longlong *)0x0) &&
                  (lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x118) + 0x670))(), lVar5 != 0)) {
            lVar7 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              FUN_14145e340(lVar5,param_1,iVar3,param_3);
            }
          }
        }
      }
      else {
        UWorld::GetPlayerControllerIterator(lVar5,&local_18);
        while( true ) {
          if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_14123ce3e;
          plVar6 = (longlong *)FWeakObjectPtr::Get();
          if (((plVar6 != (longlong *)0x0) &&
              (cVar2 = (**(code **)(*plVar6 + 0x768))(), cVar2 != '\0')) &&
             ((*(byte *)(plVar6 + 200) & 2) != 0)) break;
          local_10 = local_10 + 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 14123cf60 FUN_14123cf60 body=47 status=ok
// SIG undefined FUN_14123cf60(void)

void FUN_14123cf60(longlong param_1)

{
  char cVar1;
  
  cVar1 = UKismetSystemLibrary::EqualEqual_PrimaryAssetId
                    ((undefined8 *)(param_1 + 0xdd8),param_1 + 0xdc8);
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0xdd8) = 0;
    *(undefined8 *)(param_1 + 0xde0) = 0;
  }
  return;
}



// FUNCTION 14123cf90 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<16,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x100);
  if (param_3 < 0x11) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x100);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x100) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x100) = uVar2;
  return;
}



// FUNCTION 14123d040 ResizeGrow body=137 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FNiagaraRendererVariableInfo,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
     ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (uVar1 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x10c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x10c) = iVar2;
  TInlineAllocator<16,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
            (param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 14123d0d0 FUN_14123d0d0 body=11 status=ok
// SIG undefined FUN_14123d0d0(void)

void FUN_14123d0d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xe74) = 0x15;
  return;
}



// FUNCTION 14123d0e0 FUN_14123d0e0 body=11 status=ok
// SIG undefined FUN_14123d0e0(void)

void FUN_14123d0e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1814) = 0x23;
  return;
}



// FUNCTION 14123d0f0 FUN_14123d0f0 body=11 status=ok
// SIG undefined FUN_14123d0f0(void)

void FUN_14123d0f0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1294) = 0x1b;
  return;
}



// FUNCTION 14123d100 FUN_14123d100 body=11 status=ok
// SIG undefined FUN_14123d100(void)

void FUN_14123d100(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x844) = 0xc;
  return;
}



// FUNCTION 14123d110 FUN_14123d110 body=11 status=ok
// SIG undefined FUN_14123d110(void)

void FUN_14123d110(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2c4) = 4;
  return;
}



// FUNCTION 14123d120 FUN_14123d120 body=11 status=ok
// SIG undefined FUN_14123d120(void)

void FUN_14123d120(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x27e4) = 0x3a;
  return;
}



// FUNCTION 14123d130 FUN_14123d130 body=11 status=ok
// SIG undefined FUN_14123d130(void)

void FUN_14123d130(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x6e4) = 10;
  return;
}



// FUNCTION 14123d140 FUN_14123d140 body=11 status=ok
// SIG undefined FUN_14123d140(void)

void FUN_14123d140(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x584) = 8;
  return;
}



// FUNCTION 14123d150 FUN_14123d150 body=257 status=ok
// SIG undefined FUN_14123d150(void)

void FUN_14123d150(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x148);
  if (uVar1 < 0x15) {
    uVar2 = 0x14;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x14c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x14c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x140);
  if (uVar2 < 0x15) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x140);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 4,0);
        *(void **)((longlong)param_1 + 0x140) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x140) = uVar5;
  return;
}



// FUNCTION 14123d260 ResizeShrink body=159 status=ok
// SIG undefined ResizeShrink(void)

void TArray<D3D12_STATE_SUBOBJECT,TInlineAllocator<16,FDefaultAllocator>_>::ResizeShrink
               (longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x108);
  uVar3 = *(uint *)(param_1 + 0x10c);
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
    goto LAB_14123d2d2;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 4)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 4,0);
        uVar3 = *(uint *)(param_1 + 0x10c);
        uVar2 = (uint)(uVar1 >> 4);
      }
      goto LAB_14123d2d2;
    }
    if (uVar2 == 0) goto LAB_14123d2d2;
  }
  uVar2 = uVar3;
LAB_14123d2d2:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x10c) = uVar2;
    TInlineAllocator<16,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x108),uVar2,0x10);
    return;
  }
  return;
}



// FUNCTION 14123d300 ResizeTo body=110 status=ok
// SIG undefined ResizeTo(void)

void TArray<FSrtResourceBinding,TInlineAllocator<16,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = iVar1;
    TInlineAllocator<16,FDefaultAllocator>::ForElementType<FVector4>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x108),iVar1,0x10);
  }
  return;
}



// FUNCTION 14123d370 FUN_14123d370 body=149 status=ok
// SIG undefined FUN_14123d370(void)

longlong * FUN_14123d370(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_res8;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2a8) + 0xce0);
  if (lVar3 == 0) {
    *param_2 = *(longlong *)(param_1 + 0x268);
    return param_2;
  }
  lVar3 = *(longlong *)(lVar3 + 0x3f0);
  local_res8 = lVar3;
  if (lVar3 != 0) {
    lVar1 = FUN_142e49950();
    do {
      if (lVar3 == lVar1) {
        plVar2 = &local_res8;
        goto LAB_14123d3e5;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  plVar2 = (longlong *)(param_1 + 0x268);
LAB_14123d3e5:
  *param_2 = *plVar2;
  return param_2;
}



// FUNCTION 14123d410 FUN_14123d410 body=147 status=ok
// SIG undefined FUN_14123d410(void)

void FUN_14123d410(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != (longlong *)0x0) && (0 < *(int *)(param_1 + 0x6f8))) {
    lVar2 = *(longlong *)(param_1 + 0x6f0);
    lVar3 = (longlong)*(int *)(param_1 + 0x6f8) * 0x20 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
      if (*(char *)(lVar2 + 0xc) == '\0') {
LAB_14123d471:
        if (*(char *)(param_1 + 0x128) == '\x03') {
LAB_14123d47a:
          FUN_141241870(lVar2,param_2);
        }
      }
      else {
        cVar1 = (**(code **)(*param_2 + 0x768))(param_2);
        if (cVar1 != '\0') goto LAB_14123d47a;
        if (*(char *)(lVar2 + 0xc) == '\0') goto LAB_14123d471;
      }
    }
  }
  return;
}



// FUNCTION 14123d4b0 FUN_14123d4b0 body=457 status=ok
// SIG undefined FUN_14123d4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14123d4b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_1 + 0x8c4) = 2;
  if (*(longlong *)(param_1 + 0x600) != 0) {
    local_78[0] = 0;
    local_78[1] = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],&DAT_144708f44,6);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x600),local_78);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x6d8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x6a8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x6d0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x708);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x730))(plVar2,3);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x6f0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x290))(plVar2,1,0);
    }
  }
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_141213f50;
  FUN_14208c260(param_1,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_141238d90(param_1);
  FUN_141236cf0(param_1);
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  FUN_141237f70(param_1);
  FUN_14123dc30(param_1);
  return;
}



// FUNCTION 14123d680 FUN_14123d680 body=787 status=ok
// SIG undefined FUN_14123d680(void)

undefined8 FUN_14123d680(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 0:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Artifact",L"GFxVaultCardMenu",L"ArtifactText");
    return param_1;
  case 1:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Currency",L"GFxVaultCardMenu",L"CurrencyRewardText");
    return param_1;
  case 2:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Diamond Key",L"GFxVaultCardMenu",L"DiamondKeyRewardText");
    return param_1;
  case 3:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Echo Device",L"GFxVaultCardMenu",L"EchoDeviceRewardText");
    return param_1;
  case 4:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Emote",L"GFxVaultCardMenu",L"EmoteRewardText");
    return param_1;
  case 5:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Gold Key",L"GFxVaultCardMenu",L"GoldKeyRewardText");
    return param_1;
  case 6:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Grenade Mod",L"GFxVaultCardMenu",L"GrenadeRewardText");
    return param_1;
  case 7:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Head",L"GFxVaultCardMenu",L"HeadRewardText");
    return param_1;
  case 8:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Beastmaster Head",L"GFxVaultCardMenu",L"HeadBeastmasterRewardText");
    return param_1;
  case 9:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Gunner Head",L"GFxVaultCardMenu",L"HeadGunnerRewardText");
    return param_1;
  case 10:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Operative Head",L"GFxVaultCardMenu",L"HeadOperativeRewardText");
    return param_1;
  case 0xb:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Siren Head",L"GFxVaultCardMenu",L"SirenHeadRewardText");
    return param_1;
  case 0xc:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Character Model",L"GFxVaultCardMenu",L"MeshSkinRewardText");
    return param_1;
  case 0xd:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Room Decoration",L"GFxVaultCardMenu",L"RoomDecorationRewardText");
    return param_1;
  case 0xe:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Shield Mod",L"GFxVaultCardMenu",L"ShieldRewardText");
    return param_1;
  case 0xf:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Skin",L"GFxVaultCardMenu",L"SkinRewardText");
    return param_1;
  case 0x10:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Weapon Trinket",L"GFxVaultCardMenu",L"TrinketRewardText");
    return param_1;
  case 0x11:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Weapon",L"GFxVaultCardMenu",L"WeaponRewardText");
    return param_1;
  case 0x12:
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_1,L"Weapon Skin",L"GFxVaultCardMenu",L"WeaponSkinRewardText");
    return param_1;
  default:
    uVar1 = FUN_1404b03b0();
    FText::FText(param_1,uVar1);
    return param_1;
  }
}



// FUNCTION 14123d9e0 FUN_14123d9e0 body=155 status=ok
// SIG undefined FUN_14123d9e0(void)

void FUN_14123d9e0(longlong param_1,char param_2)

{
  if (((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0xbd9) == '\0')) &&
     (*(char *)(*(longlong *)(param_1 + 0x668) + 0x418) == '\x02')) {
    *(undefined1 *)(param_1 + 0xbd9) = 1;
    if ((param_2 == '\0') || (*(longlong *)(param_1 + 0x6c8) == 0)) {
      if (*(longlong *)(param_1 + 0x698) != 0) {
        FUN_140968540(*(longlong *)(param_1 + 0x698),1);
      }
    }
    else {
      FUN_1430dc0b0(*(longlong *)(param_1 + 0x6c8),1);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x9d8,0);
    FUN_14148f370(param_1);
    if (*(byte *)(param_1 + 0x128) < 3) {
      FUN_14148f870(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 14123da90 FUN_14123da90 body=8 status=ok
// SIG undefined FUN_14123da90(void)

void FUN_14123da90(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xde0) = param_2;
  return;
}



// FUNCTION 14123daa0 FUN_14123daa0 body=398 status=ok
// SIG undefined FUN_14123daa0(void)

void FUN_14123daa0(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *local_38;
  undefined8 local_30;
  
  FUN_14223c560();
  lVar1 = *(longlong *)(param_1 + 0x580);
  if (param_2 == '\0') {
    (**(code **)(lVar1 + 0x80))((longlong *)(param_1 + 0x580),DAT_1468770d0,1);
  }
  else {
    (**(code **)(lVar1 + 0x78))();
  }
  uVar5 = 0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1430ccd50(param_1,&local_38,1);
  plVar7 = *(longlong **)(param_1 + 0x6e0);
  uVar8 = (longlong)*(int *)(param_1 + 0x6e8) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x6e8) < plVar7) {
    uVar8 = uVar5;
  }
  uVar6 = uVar5;
  if (uVar8 != 0) {
    do {
      if ((*plVar7 != 0) && (lVar1 = FUN_142ceeb40(*plVar7,0), lVar1 != 0)) {
        lVar3 = (longlong)(int)local_30;
        iVar2 = (int)local_30 + 1;
        local_30 = CONCAT44(local_30._4_4_,iVar2);
        if (local_30._4_4_ < iVar2) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38);
        }
        local_38[lVar3] = lVar1;
      }
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar8);
  }
  uVar8 = (ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >> 3;
  if (local_38 + (int)local_30 < local_38) {
    uVar8 = uVar5;
  }
  puVar4 = local_38;
  if (uVar8 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar4 + 0x310))((longlong *)*puVar4,param_2);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != uVar8);
  }
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FUN_140eb3560();
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 14123dc30 FUN_14123dc30 body=697 status=ok
// SIG undefined FUN_14123dc30(void)

void FUN_14123dc30(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
  if (((0 < *(int *)(param_1 + 0x870)) && (**(longlong **)(param_1 + 0x868) != 0)) &&
     (lVar9 = *(longlong *)(**(longlong **)(param_1 + 0x868) + 0x10), lVar9 != 0)) {
    lVar3 = FUN_1413a0f70();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar10 = 0;
      lVar3 = 0;
      iVar7 = 0;
      do {
        lVar8 = lVar9;
        if (((iVar7 + 1 < *(int *)(param_1 + 0x870)) &&
            (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x868) + 8 + lVar10), lVar9 != 0)) &&
           (lVar9 = *(longlong *)(lVar9 + 0x10), lVar9 != 0)) {
          lVar4 = FUN_1413a0f70();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_14123dd3b;
        }
        else {
LAB_14123dd3b:
          lVar9 = 0;
        }
        if (((iVar7 < *(int *)(param_1 + 0x870)) &&
            (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x868) + lVar10), lVar4 != 0)) &&
           (lVar4 = *(longlong *)(lVar4 + 0x10), lVar4 != 0)) {
          lVar5 = FUN_1413a0f70();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar5 = 0;
            do {
              lVar1 = *(longlong *)(*(longlong *)(lVar4 + 400) + lVar5 * 8);
              if (lVar1 != 0) {
                FWeakObjectPtr::operator=(local_48,0);
                FWeakObjectPtr::operator=(local_40,0);
                FWeakObjectPtr::operator=(local_38,0);
                FWeakObjectPtr::operator=(local_30,0);
                if (lVar3 != 0) {
                  FWeakObjectPtr::operator=
                            (local_48,*(undefined8 *)(*(longlong *)(lVar3 + 400) + lVar5 * 8));
                }
                if (lVar9 != 0) {
                  FWeakObjectPtr::operator=
                            (local_40,*(undefined8 *)(*(longlong *)(lVar9 + 400) + lVar5 * 8));
                }
                if (lVar5 != 0) {
                  FWeakObjectPtr::operator=
                            (local_38,*(undefined8 *)(*(longlong *)(lVar4 + 400) + -8 + lVar5 * 8));
                }
                if (lVar5 != 3) {
                  FWeakObjectPtr::operator=
                            (local_30,*(undefined8 *)(*(longlong *)(lVar4 + 400) + 8 + lVar5 * 8));
                }
                local_50 = 0;
                local_58 = lVar1;
                uVar6 = UBlendableInterface::GetPrivateStaticClass();
                local_50 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar6);
                FUN_142ecfd10(param_1,&local_58,local_48);
              }
              lVar5 = lVar5 + 1;
            } while (lVar5 < 4);
          }
        }
        lVar10 = lVar10 + 8;
        lVar3 = lVar8;
        iVar7 = iVar7 + 1;
      } while (lVar10 < 0x38);
    }
  }
  return;
}



// FUNCTION 14123def0 FUN_14123def0 body=78 status=ok
// SIG undefined FUN_14123def0(void)

void FUN_14123def0(longlong param_1)

{
  char cVar1;
  
  if ((((*(longlong *)(param_1 + 0x698) != 0) && (*(char *)(param_1 + 0xe89) == '\0')) &&
      (*(char *)(param_1 + 0xebc) == '\0')) && (*(longlong *)(param_1 + 0x668) != 0)) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x668) + 0x418);
    if ((cVar1 == '\x02') || ((cVar1 != '\0' && (*(char *)(param_1 + 0xbb0) != '\0')))) {
      FUN_1430dbaa0(*(undefined8 *)(param_1 + 0x6a8));
      return;
    }
  }
  return;
}



// FUNCTION 14123df40 FUN_14123df40 body=476 status=ok
// SIG undefined FUN_14123df40(void)

void FUN_14123df40(longlong param_1,char param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *local_48;
  uint local_40;
  uint local_3c;
  
  if ((param_2 != '\0') || (cVar1 = FUN_142dafb10(param_1 + 0x1000,&DAT_1468770c8), cVar1 != '\0'))
  {
    cVar1 = FUN_1407c3030(param_1 + 0x1000);
    if (param_2 == '\0') {
      FUN_142dbb5d0(param_1 + 0x1000,&DAT_1468770c8);
    }
    else {
      FUN_142dafbc0();
    }
    cVar2 = FUN_1407c3030(param_1 + 0xf68);
    if (cVar1 != cVar2) {
      puVar8 = (undefined8 *)0x0;
      iVar5 = 0;
      plVar10 = *(longlong **)(param_1 + 0x6e0);
      local_48 = (undefined8 *)0x0;
      local_3c = 0;
      puVar4 = (undefined8 *)((longlong)*(int *)(param_1 + 0x6e8) & 0x1fffffffffffffff);
      if (plVar10 + *(int *)(param_1 + 0x6e8) < plVar10) {
        puVar4 = puVar8;
      }
      puVar6 = puVar8;
      puVar7 = puVar8;
      puVar9 = puVar8;
      puVar11 = puVar8;
      if (puVar4 != (undefined8 *)0x0) {
        do {
          if ((*plVar10 != 0) && (lVar3 = FUN_142ceeb40(*plVar10,0), lVar3 != 0)) {
            iVar5 = (int)puVar6;
            local_40 = iVar5 + 1;
            if ((int)puVar9 < (int)local_40) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48);
              puVar9 = (undefined8 *)(ulonglong)local_3c;
              puVar11 = local_48;
            }
            puVar6 = (undefined8 *)(ulonglong)local_40;
            puVar11[iVar5] = lVar3;
          }
          iVar5 = (int)puVar6;
          plVar10 = plVar10 + 1;
          puVar7 = (undefined8 *)((longlong)puVar7 + 1);
        } while (puVar7 != puVar4);
      }
      puVar4 = puVar11 + iVar5;
      puVar6 = (undefined8 *)((ulonglong)((longlong)puVar4 + (7 - (longlong)puVar11)) >> 3);
      if (puVar4 < puVar11) {
        puVar6 = puVar8;
      }
      if (puVar6 != (undefined8 *)0x0) {
        puVar7 = puVar11;
        if (cVar1 == '\0') {
          do {
            FUN_142d8e990(*puVar7,DAT_1468770c8,1);
            puVar8 = (undefined8 *)((longlong)puVar8 + 1);
            puVar7 = puVar7 + 1;
          } while (puVar8 != puVar6);
        }
        else {
          for (; puVar7 != puVar4; puVar7 = puVar7 + 1) {
            FUN_142d8f260(*puVar7,DAT_1468770c8);
          }
        }
      }
      if (puVar11 != (undefined8 *)0x0) {
        FMemory::Free(puVar11);
      }
    }
  }
  return;
}



// FUNCTION 14123e120 FUN_14123e120 body=103 status=ok
// SIG undefined FUN_14123e120(void)

void FUN_14123e120(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x6b8);
  if (lVar2 == 0) {
    return;
  }
  if ((((param_2 != '\0') && (*(longlong *)(param_1 + 0x698) != 0)) &&
      (*(char *)(param_1 + 0xe89) == '\0')) &&
     ((*(char *)(param_1 + 0xebc) == '\0' && (*(longlong *)(param_1 + 0x668) != 0)))) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x668) + 0x418);
    if ((cVar1 == '\x02') || ((cVar1 != '\0' && (*(char *)(param_1 + 0xbb0) != '\0')))) {
      FUN_1430dda50(lVar2);
      return;
    }
  }
  FUN_1430ddb00(lVar2,0);
  return;
}



// FUNCTION 14123e190 FUN_14123e190 body=2889 status=ok
// SIG undefined FUN_14123e190(void)

void FUN_14123e190(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  void *pvVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  void *pvVar16;
  void *pvVar17;
  wchar_t *local_168;
  uint local_160;
  int local_15c;
  undefined4 local_158;
  undefined4 local_154;
  longlong local_150;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_130;
  void *local_128;
  int local_120;
  uint local_11c;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  longlong local_f8 [6];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  wchar_t *local_a0;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  if (param_2 == 0) {
    return;
  }
  iVar9 = FUN_142eb7a90();
  if (param_1[0xd7] != 0) {
    FUN_142088ee0(param_1[0xd7],iVar9 + 1);
  }
  FString::PrintfImpl(&local_168,L"RewardHeaderIcon_%02d_nopack",iVar9);
  lVar13 = param_2 + 0xa8;
  lVar10 = FWeakObjectPtr::Get(lVar13);
  pvVar17 = (void *)0x0;
  if (lVar10 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0xb0)) && (*(longlong *)(param_2 + 0xb8) != 0)) {
      lVar10 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar13,lVar10);
      if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0xb0) = DAT_1464b56f4;
      }
      lVar10 = FWeakObjectPtr::Get(lVar13);
      if (lVar10 != 0) goto LAB_14123e28f;
    }
LAB_14123e38f:
    local_f8[0] = 0;
    local_f8[1] = 0x20;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,0);
    FGenericPlatformString::Memcpy(local_f8[0],L"RequestAsyncLoad SingleDelegate",0x40);
    FWeakObjectPtr::operator=(&local_c8,param_1);
    pwVar5 = local_168;
    local_158 = local_c8;
    local_154 = local_c4;
    local_148 = (void *)0x0;
    local_140 = local_160;
    local_150 = param_2;
    if (local_160 == 0) {
      local_13c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,local_160,0);
      pvVar17 = local_148;
      _guard_xfg_dispatch_icall_nop(local_148,pwVar5,(longlong)(int)local_160 * 2);
    }
    uVar8 = local_13c;
    iVar3 = local_140;
    uVar7 = local_154;
    uVar6 = local_158;
    local_b0 = 0;
    local_a8 = 0;
    puVar14 = (undefined8 *)operator_new(0x38,&local_b0);
    pvVar12 = pvVar17;
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &PTR_GetPoolName_14471e600;
      *(undefined4 *)(puVar14 + 1) = uVar6;
      pvVar12 = (void *)0x0;
      *(undefined4 *)((longlong)puVar14 + 0xc) = uVar7;
      puVar14[2] = local_150;
      puVar14[3] = pvVar17;
      *(int *)(puVar14 + 4) = iVar3;
      *(undefined4 *)((longlong)puVar14 + 0x24) = uVar8;
      local_148 = (void *)0x0;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[6] = uVar15;
      *puVar14 = &PTR_GetPoolName_14471e648;
    }
    lVar13 = FUN_1422ca050();
    FStreamableManager::RequestAsyncLoad
              (lVar13 + 0x178,local_70,param_2 + 0xb8,&local_b0,0,0,0,local_f8);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      pvVar12 = local_148;
      if ((int)lVar13 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        pvVar12 = local_148;
        if (iVar3 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
          pvVar12 = local_148;
        }
      }
    }
    if (pvVar12 != (void *)0x0) {
      FMemory::Free(pvVar12);
    }
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
  }
  else {
LAB_14123e28f:
    lVar11 = UTexture::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14123e38f;
    pvVar12 = (void *)FWeakObjectPtr::Get(lVar13);
    if (pvVar12 == (void *)0x0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_2 + 0xb0)) && (*(longlong *)(param_2 + 0xb8) != 0)) {
        lVar10 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar13,lVar10);
        if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_2 + 0xb0) = DAT_1464b56f4;
        }
        pvVar12 = (void *)FWeakObjectPtr::Get(lVar13);
        if (pvVar12 != (void *)0x0) goto LAB_14123e33d;
      }
LAB_14123e373:
      pvVar12 = pvVar17;
    }
    else {
LAB_14123e33d:
      lVar13 = UTexture::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)((longlong)pvVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)((longlong)pvVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14123e373;
    }
    (**(code **)(*param_1 + 0x2a0))(param_1,&local_168,pvVar12);
  }
  pvVar17 = (void *)0x0;
  if (param_1[0xd9] != 0) {
    FUN_142088ee0(param_1[0xd9],iVar9 + 1);
  }
  if (param_1[0xd8] != 0) {
    FUN_142088ee0(param_1[0xd8],iVar9 + 1);
  }
  FString::PrintfImpl(&local_a0,L"ExtTexKey_%02d_nopack",iVar9);
  if (local_168 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  lVar13 = param_2 + 0xf8;
  local_168 = local_a0;
  local_160 = local_98;
  local_15c = local_94;
  lVar10 = FWeakObjectPtr::Get(lVar13);
  if (lVar10 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0x100)) && (*(longlong *)(param_2 + 0x108) != 0)) {
      lVar10 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar13,lVar10);
      if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0x100) = DAT_1464b56f4;
      }
      lVar10 = FWeakObjectPtr::Get(lVar13);
      if (lVar10 != 0) goto LAB_14123e632;
    }
LAB_14123e739:
    local_f8[2] = 0;
    local_f8[3] = 0x20;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 2,0);
    FGenericPlatformString::Memcpy(local_f8[2],L"RequestAsyncLoad SingleDelegate",0x40);
    FWeakObjectPtr::operator=(&local_c0,param_1);
    pwVar5 = local_168;
    lVar13 = (longlong)(int)local_160;
    local_138 = local_c0;
    local_134 = local_bc;
    local_128 = (void *)0x0;
    local_120 = local_160;
    local_130 = param_2;
    if (local_160 == 0) {
      local_11c = 0;
      pvVar12 = pvVar17;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,local_160,0);
      pvVar17 = local_128;
      _guard_xfg_dispatch_icall_nop(local_128,pwVar5,lVar13 * 2);
      pvVar12 = (void *)(ulonglong)local_11c;
    }
    iVar9 = local_120;
    uVar7 = local_134;
    uVar6 = local_138;
    local_90 = 0;
    local_88 = 0;
    puVar14 = (undefined8 *)operator_new(0x38,&local_90);
    pvVar16 = pvVar17;
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &PTR_GetPoolName_14471e690;
      *(undefined4 *)(puVar14 + 1) = uVar6;
      pvVar16 = (void *)0x0;
      *(undefined4 *)((longlong)puVar14 + 0xc) = uVar7;
      puVar14[2] = local_130;
      puVar14[3] = pvVar17;
      *(int *)(puVar14 + 4) = iVar9;
      *(int *)((longlong)puVar14 + 0x24) = (int)pvVar12;
      local_128 = (void *)0x0;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[6] = uVar15;
      *puVar14 = &PTR_GetPoolName_14471e6d8;
    }
    lVar13 = FUN_1422ca050();
    FStreamableManager::RequestAsyncLoad
              (lVar13 + 0x178,local_60,param_2 + 0x108,&local_90,0,0,0,local_f8 + 2);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      pvVar16 = local_128;
      if ((int)lVar13 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        pvVar16 = local_128;
        if (iVar9 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
          pvVar16 = local_128;
        }
      }
    }
    if (pvVar16 != (void *)0x0) {
      FMemory::Free(pvVar16);
    }
    if (local_f8[2] != 0) {
      FMemory::Free();
    }
  }
  else {
LAB_14123e632:
    lVar11 = UTexture::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14123e739;
    pvVar12 = (void *)FWeakObjectPtr::Get(lVar13);
    if (pvVar12 == (void *)0x0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_2 + 0x100)) && (*(longlong *)(param_2 + 0x108) != 0)) {
        lVar10 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar13,lVar10);
        if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_2 + 0x100) = DAT_1464b56f4;
        }
        pvVar12 = (void *)FWeakObjectPtr::Get(lVar13);
        if (pvVar12 != (void *)0x0) goto LAB_14123e6e7;
      }
LAB_14123e71d:
      pvVar12 = pvVar17;
    }
    else {
LAB_14123e6e7:
      lVar13 = UTexture::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)((longlong)pvVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)((longlong)pvVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14123e71d;
    }
    (**(code **)(*param_1 + 0x2a0))(param_1,&local_168,pvVar12);
  }
  pvVar17 = (void *)0x0;
  if (local_168 != L"BannerExtTex_00_nopack") {
    local_160 = 0;
    pvVar12 = pvVar17;
    if (local_15c != 0x17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_168,0x17);
      pvVar12 = (void *)(ulonglong)local_160;
    }
    local_160 = (int)pvVar12 + 0x17;
    if (local_15c < (int)local_160) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168);
    }
    builtin_wcsncpy(local_168,L"BannerExtTex_00_nopack",0x17);
  }
  lVar13 = param_2 + 0xd0;
  lVar10 = FWeakObjectPtr::Get(lVar13);
  if (lVar10 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0xd8)) && (*(longlong *)(param_2 + 0xe0) != 0)) {
      lVar10 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar13,lVar10);
      if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0xd8) = DAT_1464b56f4;
      }
      lVar10 = FWeakObjectPtr::Get(lVar13);
      if (lVar10 != 0) goto LAB_14123e9ea;
    }
  }
  else {
LAB_14123e9ea:
    lVar11 = UTexture::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pvVar12 = (void *)FWeakObjectPtr::Get(lVar13);
      if (pvVar12 == (void *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(param_2 + 0xd8)) && (*(longlong *)(param_2 + 0xe0) != 0)) {
          lVar10 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar13,lVar10);
          if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_2 + 0xd8) = DAT_1464b56f4;
          }
          pvVar12 = (void *)FWeakObjectPtr::Get(lVar13);
          if (pvVar12 != (void *)0x0) goto LAB_14123ea9f;
        }
LAB_14123ead5:
        pvVar12 = pvVar17;
      }
      else {
LAB_14123ea9f:
        lVar13 = UTexture::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)((longlong)pvVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)((longlong)pvVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_14123ead5;
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_168,pvVar12);
      goto LAB_14123ec96;
    }
  }
  local_f8[4] = 0;
  local_f8[5] = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8 + 4,0);
  FGenericPlatformString::Memcpy(local_f8[4],L"RequestAsyncLoad SingleDelegate",0x40);
  FWeakObjectPtr::operator=(&local_b8,param_1);
  pwVar5 = local_168;
  local_108 = (void *)0x0;
  lVar13 = (longlong)(int)local_160;
  local_118 = local_b8;
  local_114 = local_b4;
  local_100 = local_160;
  local_110 = param_2;
  if (local_160 == 0) {
    local_fc = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_160,0);
    pvVar17 = local_108;
    _guard_xfg_dispatch_icall_nop(local_108,pwVar5,lVar13 * 2);
  }
  uVar8 = local_fc;
  iVar9 = local_100;
  lVar13 = local_110;
  uVar7 = local_114;
  uVar6 = local_118;
  local_80 = 0;
  local_78 = 0;
  puVar14 = (undefined8 *)operator_new(0x38,&local_80);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &PTR_GetPoolName_14471e720;
    *(undefined4 *)((longlong)puVar14 + 0xc) = uVar7;
    *(undefined4 *)(puVar14 + 1) = uVar6;
    puVar14[2] = lVar13;
    puVar14[3] = pvVar17;
    local_108 = (void *)0x0;
    *(int *)(puVar14 + 4) = iVar9;
    *(undefined4 *)((longlong)puVar14 + 0x24) = uVar8;
    uVar15 = FDelegateHandle::GenerateNewID();
    puVar14[6] = uVar15;
    *puVar14 = &PTR_GetPoolName_14471e768;
    pvVar17 = (void *)0x0;
  }
  lVar13 = FUN_1422ca050();
  FStreamableManager::RequestAsyncLoad
            (lVar13 + 0x178,local_50,param_2 + 0xe0,&local_80,0,0,0,local_f8 + 4);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    pvVar17 = local_108;
    if ((int)lVar13 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      pvVar17 = local_108;
      if (iVar9 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
        pvVar17 = local_108;
      }
    }
  }
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
  if (local_f8[4] != 0) {
    FMemory::Free();
  }
LAB_14123ec96:
  if (local_168 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14123ece0 FUN_14123ece0 body=1037 status=ok
// SIG undefined FUN_14123ece0(void)

void FUN_14123ece0(longlong *param_1,char param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  longlong *local_28;
  longlong local_20;
  
  if ((((char)param_1[0x25] == '\x03') && ((char)param_1[0x10e] != '\x03')) &&
     (*(char *)((longlong)param_1 + 0x871) == '\0')) {
    *(char *)((longlong)param_1 + 0x871) = param_2;
    FUN_14148ed50();
    local_20 = CONCAT71(local_20._1_7_,*(undefined1 *)((longlong)param_1 + 0x871));
    local_28 = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x167,&local_28);
    if (param_1[0xcd] != 0) {
      lVar4 = FUN_142ceeb40(param_1[0xcd],1);
      if (lVar4 != 0) {
        lVar5 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (bVar12) {
          local_28 = (longlong *)param_1[0xcd];
          local_20 = lVar4;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x165,&local_28);
          FUN_14148f820(param_1,param_1[0xcd],lVar4);
        }
      }
    }
    if (param_2 == '\x03') {
      FUN_141218070(param_1);
      return;
    }
    if (param_2 == '\x04') {
      if ((char)param_1[0x10e] != '\x03') {
        *(undefined1 *)(param_1 + 0x10e) = 3;
        (**(code **)(param_1[0xb1] + 0x48))();
      }
      if ((char)param_1[0x25] == '\x03') {
        plVar11 = (longlong *)param_1[0xdc];
        plVar10 = plVar11 + (int)param_1[0xdd];
        for (; plVar11 != plVar10; plVar11 = plVar11 + 1) {
          if ((*plVar11 != 0) &&
             (plVar6 = (longlong *)FUN_142ceeb40(*plVar11,0), plVar6 != (longlong *)0x0)) {
            lVar4 = FUN_1413f82e0();
            if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
                lVar4 + 0x88)) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if (bVar12) {
              cVar1 = (**(code **)(*plVar6 + 0x780))(plVar6);
              if ((cVar1 != '\0') && ((char)param_1[0x25] == '\x03')) {
                iVar3 = FUN_1412278a0(param_1,plVar6,1);
                if ((iVar3 < 0) || ((int)param_1[0xdd] <= iVar3)) {
                  bVar12 = false;
                }
                else {
                  bVar12 = true;
                }
                if ((bVar12) &&
                   (lVar4 = *(longlong *)(param_1[0xdc] + (longlong)iVar3 * 8), lVar4 != 0)) {
                  FUN_142ce8a30(lVar4,1,0);
                }
              }
              cVar2 = (**(code **)(*param_1 + 0x450))(param_1);
              if (((cVar1 == '\0') && (cVar2 != '\0')) && (plVar6[0x1cf] != 0)) {
                FUN_142d1fdd0(plVar6[0x1cf],param_1[200]);
              }
              (**(code **)(*plVar6 + 0xbc8))(plVar6);
            }
          }
        }
      }
      FUN_142227350(param_1,0,1);
    }
    else {
      bVar12 = param_2 == '\x02';
      if (!bVar12) {
        FUN_1412188d0(param_1);
      }
      cVar1 = FUN_14122a7d0(param_1);
      if ((cVar1 == '\0') || (param_2 == '\x02')) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      FUN_141218b10(param_1,uVar7,bVar12,0,bVar12,1);
      if ((param_1[200] != 0) && (cVar1 = FUN_142d1f310(), cVar1 == '\0')) {
        (**(code **)(*(longlong *)param_1[200] + 0x420))();
      }
      if ((char)param_1[0x10e] != '\x03') {
        *(undefined1 *)(param_1 + 0x10e) = 3;
        (**(code **)(param_1[0xb1] + 0x48))();
      }
      FUN_141214880(param_1);
      FUN_14223c460(param_1,0);
      *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfe;
      (**(code **)(*param_1 + 0x310))(param_1,1);
      AActor::SetActorTickEnabled(param_1,0);
      uVar9 = 0;
      local_28 = (longlong *)0x0;
      local_20 = 0;
      FUN_14222e300(param_1,&local_28);
      uVar8 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
      if (local_28 + (int)local_20 < local_28) {
        uVar8 = uVar9;
      }
      plVar10 = local_28;
      if (uVar8 != 0) {
        do {
          plVar11 = (longlong *)*plVar10;
          if ((longlong *)plVar11[0x23] == param_1) {
            FUN_14223c460(plVar11,0);
            (**(code **)(*plVar11 + 0x310))(plVar11);
            AActor::SetActorTickEnabled(plVar11);
          }
          plVar10 = plVar10 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar8);
      }
      (**(code **)(*param_1 + 0x288))(param_1);
      (**(code **)(*param_1 + 0x3a0))(param_1,0x3f800000);
      if (local_28 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14123f0f0 FUN_14123f0f0 body=126 status=ok
// SIG undefined FUN_14123f0f0(void)

void FUN_14123f0f0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  
  if (((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0xe8a) != '\0')) &&
     (param_2 != *(byte *)(param_1 + 0xebc))) {
    *(byte *)(param_1 + 0xebc) = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              ((((ulonglong)param_2 ^ 1) + 0xe9) * 0x10 + param_1,0);
    if ((*(char *)(param_1 + 0xebc) != '\0') &&
       (plVar1 = *(longlong **)(param_1 + 0x698), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x628))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00014123f161. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x620))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14123f170 FUN_14123f170 body=84 status=ok
// SIG undefined FUN_14123f170(void)

void FUN_14123f170(longlong param_1,undefined1 param_2)

{
  char cVar1;
  
  if (((((*(longlong *)(param_1 + 0x698) != 0) && (*(char *)(param_1 + 0xe89) == '\0')) &&
       (*(char *)(param_1 + 0xebc) == '\0')) && (*(longlong *)(param_1 + 0x668) != 0)) &&
     ((cVar1 = *(char *)(*(longlong *)(param_1 + 0x668) + 0x418), cVar1 == '\x02' ||
      ((cVar1 != '\0' && (*(char *)(param_1 + 0xbb0) != '\0')))))) {
    FUN_140968540(*(longlong *)(param_1 + 0x698),param_2);
    return;
  }
  return;
}



// FUNCTION 14123f1e0 FUN_14123f1e0 body=158 status=ok
// SIG undefined FUN_14123f1e0(void)

void FUN_14123f1e0(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  char cVar2;
  
  if ((param_3 == '\0') && (cVar1 = FUN_142dafb10(param_1 + 0x1ed), cVar1 == '\0')) {
    return;
  }
  cVar1 = FUN_1407c3030(param_1 + 0x1ed);
  if (param_3 == '\0') {
    FUN_142dbb5d0(param_1 + 0x1ed,param_2);
  }
  else {
    FUN_142dafbc0();
  }
  cVar2 = FUN_1407c3030(param_1 + 0x1ed);
  if (cVar1 != cVar2) {
    (**(code **)(*param_1 + 0x310))(param_1,param_3);
  }
  return;
}



// FUNCTION 14123f280 FUN_14123f280 body=15 status=ok
// SIG undefined FUN_14123f280(void)

void FUN_14123f280(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x12a8)) {
    *(char *)(param_1 + 0x12a8) = param_2;
  }
  return;
}



// FUNCTION 14123f290 FUN_14123f290 body=130 status=ok
// SIG undefined FUN_14123f290(void)

void FUN_14123f290(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  if ((((*(longlong *)(param_1 + 0x6b0) != 0) && (*(longlong *)(param_1 + 0x698) != 0)) &&
      (*(char *)(param_1 + 0xe89) == '\0')) &&
     ((*(char *)(param_1 + 0xebc) == '\0' && (*(longlong *)(param_1 + 0x668) != 0)))) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x668) + 0x418);
    if ((cVar1 == '\x02') || ((cVar1 != '\0' && (*(char *)(param_1 + 0xbb0) != '\0')))) {
      FUN_1430dc3c0(*(longlong *)(param_1 + 0x6b0),param_2[1]);
      FUN_1430dbc90(*(undefined8 *)(param_1 + 0x6b0),*param_2);
    }
  }
  return;
}



// FUNCTION 14123f320 FUN_14123f320 body=203 status=ok
// SIG undefined FUN_14123f320(void)

void FUN_14123f320(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 0xe61) != '\0') && (param_2 != *(char *)(param_1 + 0xe89))) {
    if (param_2 != '\0') {
      FUN_141215280(param_1,0xff);
    }
    lVar2 = *(longlong *)(param_1 + 0x698);
    if (lVar2 != 0) {
      if ((((*(char *)(param_1 + 0xe89) == '\0') && (*(char *)(param_1 + 0xebc) == '\0')) &&
          (*(longlong *)(param_1 + 0x668) != 0)) &&
         ((cVar1 = *(char *)(*(longlong *)(param_1 + 0x668) + 0x418), cVar1 == '\x02' ||
          ((cVar1 != '\0' && (*(char *)(param_1 + 0xbb0) != '\0')))))) {
        FUN_140968540(lVar2,param_2);
        lVar2 = *(longlong *)(param_1 + 0x698);
      }
      if (lVar2 != 0) {
        FUN_140968120(lVar2,param_2,DAT_1468770e0);
      }
    }
    *(char *)(param_1 + 0xe89) = param_2;
    lVar2 = param_1 + 0xe68;
    if (param_2 == '\0') {
      lVar2 = param_1 + 0xe78;
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar2,0);
  }
  return;
}



// FUNCTION 14123f3f0 FUN_14123f3f0 body=108 status=ok
// SIG undefined FUN_14123f3f0(void)

void FUN_14123f3f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14096cb40();
  uVar1 = (**(code **)(*(longlong *)(param_1 + -0x590) + 0x628))(param_1 + -0x590,uVar1);
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  if (*(longlong *)(param_1 + 0xd20) != 0) {
    FUN_14127e6e0(*(longlong *)(param_1 + 0xd20),param_2);
    FUN_141283fe0(*(undefined8 *)(param_1 + 0xd20),param_2);
  }
  return;
}



// FUNCTION 14123f460 FUN_14123f460 body=871 status=ok
// SIG undefined FUN_14123f460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14123f460(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  longlong *local_120;
  undefined1 local_118 [192];
  ulonglong local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146877418) && (_Init_thread_header(&DAT_146877418), DAT_146877418 == -1))
  {
    FName::FName(&DAT_146877410,L"AOakVehicle::FullLock",1);
    _Init_thread_footer(&DAT_146877418);
  }
  puVar5 = (undefined1 *)0x0;
  local_4c = 0;
  local_58 = 0;
  local_50 = 0;
  if (param_1 != (longlong *)0x0) {
    FUN_141201e70(param_1,local_118,0);
  }
  puVar3 = local_118;
  if (local_58 != 0) {
    puVar3 = puVar5;
  }
  puVar2 = (undefined8 *)((ulonglong)puVar3 | local_58);
  puVar3 = (undefined1 *)((longlong)local_50 & 0x1fffffffffffffff);
  if (puVar2 + local_50 < puVar2) {
    puVar3 = puVar5;
  }
  if (puVar3 != (undefined1 *)0x0) {
    do {
      FUN_142df3080(*puVar2,param_2,DAT_146877410);
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    } while (puVar5 != puVar3);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_138 = (longlong *)0x0;
  local_130 = 0;
  FUN_14222e300(param_1,&local_138);
  (**(code **)(*param_1 + 0x4b8))(param_1,&local_138,1);
  local_128 = local_138;
  local_120 = local_138 + (int)local_130;
  plVar7 = local_138;
  if (local_138 != local_120) {
    do {
      puVar5 = (undefined1 *)0x0;
      plVar1 = (longlong *)*plVar7;
      local_58 = 0;
      local_50 = 0;
      local_4c = 0;
      local_128 = plVar7;
      if (plVar1 != (longlong *)0x0) {
        FUN_141201e70(plVar1,local_118,0);
      }
      puVar3 = local_118;
      if (local_58 != 0) {
        puVar3 = puVar5;
      }
      puVar2 = (undefined8 *)((ulonglong)puVar3 | local_58);
      puVar3 = (undefined1 *)((longlong)local_50 & 0x1fffffffffffffff);
      if (puVar2 + local_50 < puVar2) {
        puVar3 = puVar5;
      }
      if (puVar3 != (undefined1 *)0x0) {
        do {
          FUN_142df3080(*puVar2,param_2,DAT_146877410);
          puVar5 = puVar5 + 1;
          puVar2 = puVar2 + 1;
        } while (puVar5 != puVar3);
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      local_148 = (longlong *)0x0;
      local_140 = 0;
      FUN_14222e300(plVar1,&local_148);
      (**(code **)(*plVar1 + 0x4b8))(plVar1,&local_148);
      plVar1 = local_148 + (int)local_140;
      if (local_148 != plVar1) {
        puVar5 = (undefined1 *)0x0;
        plVar4 = local_148;
        do {
          local_58 = 0;
          local_50 = 0;
          local_4c = 0;
          if (*plVar4 != 0) {
            FUN_141201e70(*plVar4,local_118,0);
          }
          puVar3 = local_118;
          if (local_58 != 0) {
            puVar3 = puVar5;
          }
          puVar2 = (undefined8 *)((ulonglong)puVar3 | local_58);
          puVar3 = (undefined1 *)((longlong)local_50 & 0x1fffffffffffffff);
          if (puVar2 + local_50 < puVar2) {
            puVar3 = puVar5;
          }
          puVar6 = puVar5;
          if (puVar3 != (undefined1 *)0x0) {
            do {
              FUN_142df3080(*puVar2,param_2);
              puVar6 = puVar6 + 1;
              puVar2 = puVar2 + 1;
            } while (puVar6 != puVar3);
          }
          if (local_58 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 1;
          plVar7 = local_128;
        } while (plVar4 != plVar1);
      }
      if (local_148 != (longlong *)0x0) {
        FMemory::Free(local_148);
      }
      plVar7 = plVar7 + 1;
      local_128 = plVar7;
    } while (plVar7 != local_120);
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free(local_138);
  }
  return;
}



// FUNCTION 14123f7d0 FUN_14123f7d0 body=149 status=ok
// SIG undefined FUN_14123f7d0(void)

void FUN_14123f7d0(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined2 local_res8;
  
  if (*(longlong *)(param_1 + 0xe48) != 0) {
    plVar1 = (longlong *)(param_1 + 0xe50);
    pcVar4 = (char *)*plVar1;
    iVar3 = *(int *)(param_1 + 0xe58);
    pcVar2 = pcVar4 + (longlong)iVar3 * 2;
    for (; pcVar4 != pcVar2; pcVar4 = pcVar4 + 2) {
      if (*pcVar4 == param_2) {
        pcVar4[1] = param_3;
        goto LAB_14123f847;
      }
    }
    local_res8 = CONCAT11(param_3,param_2);
    *(int *)(param_1 + 0xe58) = iVar3 + 1;
    if (*(int *)(param_1 + 0xe5c) < iVar3 + 1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    *(undefined2 *)((longlong)iVar3 * 2 + *plVar1) = local_res8;
LAB_14123f847:
    FUN_141255ea0(param_1);
  }
  return;
}



// FUNCTION 14123f870 FUN_14123f870 body=990 status=ok
// SIG undefined FUN_14123f870(void)

void FUN_14123f870(longlong param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  wchar_t *local_b8;
  undefined8 local_b0;
  longlong local_a8 [2];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  local_b8 = (wchar_t *)0x0;
  local_b0 = 0;
  uVar5 = FUN_1404b03b0();
  FText::FText(local_98,uVar5);
  if (*param_2 == '\0') {
    if (local_b8 != L"locked") {
      iVar6 = local_b0._4_4_;
      if (local_b0._4_4_ != 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8,7);
        iVar6 = local_b0._4_4_;
      }
      iVar4 = (int)local_b0 + 7;
      local_b0 = CONCAT44(local_b0._4_4_,iVar4);
      if (iVar6 < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8);
      }
      builtin_wcsncpy(local_b8,L"locked",7);
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"Locked",L"GFxVaultCardMenu",L"LockedText");
    FText::operator=(local_98,uVar5);
  }
  else {
    if (local_b8 != L"locked") {
      iVar6 = local_b0._4_4_;
      if (local_b0._4_4_ != 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8,7);
        iVar6 = local_b0._4_4_;
      }
      iVar4 = (int)local_b0 + 7;
      local_b0 = CONCAT44(local_b0._4_4_,iVar4);
      if (iVar6 < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8);
      }
      builtin_wcsncpy(local_b8,L"locked",7);
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"Re-roll item parts",L"GFxVaultCardMenu",L"RerollGearPartsText");
    FText::operator=(local_98,uVar5);
    local_48 = local_60;
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  FUN_142088cf0(param_1,&local_b8);
  if ((*(longlong *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x1c8) + 8);
    LOCK();
    iVar6 = *piVar2;
    if (iVar6 == 0) {
      *piVar2 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1b8,local_98,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x178) != 0) && (*(longlong *)(param_1 + 0x180) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x180) + 8);
    LOCK();
    iVar6 = *piVar2;
    if (iVar6 == 0) {
      *piVar2 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x170,param_2 + 8,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x1a8) != 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x1b0) + 8);
    LOCK();
    iVar6 = *piVar2;
    if (iVar6 == 0) {
      *piVar2 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      FText::FText(local_80,param_2 + 0x20);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1a0,local_80,1,0);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar2 = (int *)((longlong)local_78 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 400) != 0) && (*(longlong *)(param_1 + 0x198) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x198) + 8);
    LOCK();
    iVar6 = *piVar2;
    if (iVar6 == 0) {
      *piVar2 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      uVar5 = FUN_141222ec0(local_38,param_2 + 0x38);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x188,uVar5,1,0);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x1d8) != 0) && (*(longlong *)(param_1 + 0x1e0) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x1e0) + 8);
    LOCK();
    iVar6 = *piVar2;
    if (iVar6 == 0) {
      *piVar2 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_a8[0] = 0;
      local_a8[1] = 0;
      FString::AppendInt(local_a8,*(undefined4 *)(param_2 + 4));
      FUN_142f0fdc0(param_1 + 0x1d0,local_a8,1,0);
      if (local_a8[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (local_b8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14123fc50 FUN_14123fc50 body=1132 status=ok
// SIG undefined FUN_14123fc50(void)

void FUN_14123fc50(longlong param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  wchar_t *local_c8;
  undefined8 local_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  local_c8 = (wchar_t *)0x0;
  local_c0 = 0;
  uVar6 = FUN_1404b03b0();
  FText::FText(local_a8,uVar6);
  if (param_2[1] == '\0') {
    if (*param_2 == '\0') {
      if (local_c8 != L"locked") {
        iVar7 = local_c0._4_4_;
        if (local_c0._4_4_ != 7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8,7);
          iVar7 = local_c0._4_4_;
        }
        iVar4 = (int)local_c0 + 7;
        local_c0 = CONCAT44(local_c0._4_4_,iVar4);
        if (iVar7 < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8);
        }
        builtin_wcsncpy(local_c8,L"locked",7);
      }
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_48,L"Locked",L"GFxVaultCardMenu",L"LockedText");
      FText::operator=(local_a8,uVar6);
    }
    else {
      if (local_c8 != L"unlocked") {
        iVar7 = local_c0._4_4_;
        if (local_c0._4_4_ != 9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8,9);
          iVar7 = local_c0._4_4_;
        }
        iVar4 = (int)local_c0 + 9;
        local_c0 = CONCAT44(local_c0._4_4_,iVar4);
        if (iVar7 < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8);
        }
        builtin_wcsncpy(local_c8,L"unlocked",9);
      }
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_60,L"Redeemed",L"GFxVaultCardMenu",L"RedeemedText");
      FText::operator=(local_a8,uVar6);
      local_40 = local_58;
    }
  }
  else {
    if (local_c8 != L"unlocked") {
      iVar7 = local_c0._4_4_;
      if (local_c0._4_4_ != 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8,9);
        iVar7 = local_c0._4_4_;
      }
      iVar4 = (int)local_c0 + 9;
      local_c0 = CONCAT44(local_c0._4_4_,iVar4);
      if (iVar7 < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8);
      }
      builtin_wcsncpy(local_c8,L"unlocked",9);
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,L"Unlocked",L"GFxVaultCardMenu",L"UnlockedText");
    FText::operator=(local_a8,uVar6);
    local_40 = local_70;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  FUN_142088cf0(param_1,&local_c8);
  if ((*(longlong *)(param_1 + 0x1c0) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x1c8) + 8);
    LOCK();
    iVar7 = *piVar2;
    if (iVar7 == 0) {
      *piVar2 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1b8,local_a8,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x178) != 0) && (*(longlong *)(param_1 + 0x180) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x180) + 8);
    LOCK();
    iVar7 = *piVar2;
    if (iVar7 == 0) {
      *piVar2 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x170,param_2 + 8,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x1a8) != 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x1b0) + 8);
    LOCK();
    iVar7 = *piVar2;
    if (iVar7 == 0) {
      *piVar2 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      FText::FText(local_90,param_2 + 0x20);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1a0,local_90,1,0);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)local_88 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 400) != 0) && (*(longlong *)(param_1 + 0x198) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x198) + 8);
    LOCK();
    iVar7 = *piVar2;
    if (iVar7 == 0) {
      *piVar2 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      uVar5 = FUN_141221160(param_2 + 0x38);
      uVar6 = FUN_14123d680(local_30,uVar5);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x188,uVar6,1,0);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x1d8) != 0) && (*(longlong *)(param_1 + 0x1e0) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x1e0) + 8);
    LOCK();
    iVar7 = *piVar2;
    if (iVar7 == 0) {
      *piVar2 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_b8[0] = 0;
      local_b8[1] = 0;
      FString::AppendInt(local_b8,*(undefined4 *)(param_2 + 4));
      FUN_142f0fdc0(param_1 + 0x1d0,local_b8,1,0);
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (local_c8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412400c0 FUN_1412400c0 body=15 status=ok
// SIG undefined FUN_1412400c0(void)

void FUN_1412400c0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xdd8) = *(undefined8 *)(param_1 + 0xdc8);
  *(undefined8 *)(param_1 + 0xde0) = *(undefined8 *)(param_1 + 0xdd0);
  return;
}



// FUNCTION 1412400d0 FUN_1412400d0 body=126 status=ok
// SIG undefined FUN_1412400d0(void)

void FUN_1412400d0(longlong param_1,byte param_2,undefined8 *param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  param_1 = (ulonglong)param_2 * 0xb0 + param_1;
  FUN_141215940(param_1);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined1 *)(param_1 + 0xa9) = 1;
  if ((param_4 == '\0') || (*(int *)(param_1 + 0xa0) == 0)) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  *(char *)(param_1 + 0xa8) = cVar3;
  if (cVar3 != '\0') {
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x58);
  }
  return;
}



// FUNCTION 141240150 FUN_141240150 body=15 status=ok
// SIG undefined FUN_141240150(void)

void FUN_141240150(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd78) = param_2;
  *(undefined8 *)(param_1 + 0xd80) = param_3;
  return;
}



// FUNCTION 141240160 FUN_141240160 body=144 status=ok
// SIG undefined FUN_141240160(void)

void FUN_141240160(longlong param_1,int param_2)

{
  code *pcVar1;
  longlong lVar2;
  
  if ((param_2 < 7) && (param_2 != *(int *)(param_1 + 0x664))) {
    lVar2 = *(longlong *)(param_1 + 0x648);
    if (*(longlong *)(param_1 + 0x648) == 0) {
      lVar2 = param_1 + 0x610;
    }
    pcVar1 = *(code **)(lVar2 + (longlong)*(int *)(param_1 + 0x664) * 8);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,param_2);
    }
    lVar2 = *(longlong *)(param_1 + 0x5b8);
    if (*(longlong *)(param_1 + 0x5b8) == 0) {
      lVar2 = param_1 + 0x580;
    }
    pcVar1 = *(code **)(lVar2 + (longlong)param_2 * 8);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,*(undefined4 *)(param_1 + 0x664));
    }
    *(int *)(param_1 + 0x664) = param_2;
  }
  return;
}



// FUNCTION 1412401f0 FUN_1412401f0 body=85 status=ok
// SIG undefined FUN_1412401f0(void)

void FUN_1412401f0(longlong param_1)

{
  char cVar1;
  
  if ((((*(longlong *)(param_1 + 0x698) != 0) && (*(char *)(param_1 + 0xe89) == '\0')) &&
      (*(char *)(param_1 + 0xebc) == '\0')) && (*(longlong *)(param_1 + 0x668) != 0)) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x668) + 0x418);
    if ((cVar1 == '\x02') || ((cVar1 != '\0' && (*(char *)(param_1 + 0xbb0) != '\0'))))
    goto LAB_14124023c;
  }
  if (*(char *)(param_1 + 0xbd8) == '\0') {
    return;
  }
LAB_14124023c:
  FUN_140968920(*(longlong *)(param_1 + 0x698));
  return;
}



// FUNCTION 141240250 FUN_141240250 body=120 status=ok
// SIG undefined FUN_141240250(void)

void FUN_141240250(longlong param_1,float param_2)

{
  char cVar1;
  float fVar2;
  
  if ((((((*(longlong *)(param_1 + 0x698) == 0) || (*(char *)(param_1 + 0xe89) != '\0')) ||
        (*(char *)(param_1 + 0xebc) != '\0')) || (*(longlong *)(param_1 + 0x668) == 0)) ||
      ((cVar1 = *(char *)(*(longlong *)(param_1 + 0x668) + 0x418), cVar1 != '\x02' &&
       ((cVar1 == '\0' || (*(char *)(param_1 + 0xbb0) == '\0')))))) &&
     (*(char *)(param_1 + 0xbd8) == '\0')) {
    return;
  }
  fVar2 = -1.0;
  if ((-1.0 <= param_2) && (fVar2 = param_2, 1.0 <= param_2)) {
    fVar2 = 1.0;
  }
  *(float *)(param_1 + 0x9cc) = fVar2;
  FUN_1409689a0(*(longlong *)(param_1 + 0x698));
  return;
}



// FUNCTION 1412402d0 FUN_1412402d0 body=226 status=ok
// SIG undefined FUN_1412402d0(void)

void FUN_1412402d0(longlong param_1,byte param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    plVar5 = *(longlong **)(param_1 + 0x6e0);
    plVar1 = plVar5 + *(int *)(param_1 + 0x6e8);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0xba) = *(byte *)(lVar3 + 0xba) & 0xfb;
        *(byte *)(lVar3 + 0xba) = *(byte *)(lVar3 + 0xba) | (param_2 ^ 1) << 2;
        if ((param_3 != '\0') && (lVar3 = FUN_142ceeb40(lVar3,0), lVar3 != 0)) {
          lVar4 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_140c40820(lVar3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1412403c0 FUN_1412403c0 body=21 status=ok
// SIG undefined FUN_1412403c0(void)

void FUN_1412403c0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x8d8) = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x8c8,0);
  return;
}



// FUNCTION 1412403e0 FUN_1412403e0 body=493 status=ok
// SIG undefined FUN_1412403e0(void)

void FUN_1412403e0(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  longlong local_58 [4];
  undefined1 local_38 [8];
  longlong *local_30;
  
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 2;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined8 *)(param_1 + 0x50) = param_4;
  puVar3 = (undefined4 *)(param_1 + 0xe0);
  *puVar3 = *param_5;
  *(undefined4 *)(param_1 + 0xe4) = param_5[1];
  *(undefined4 *)(param_1 + 0xe8) = param_5[2];
  *(undefined4 *)(param_1 + 0xec) = param_5[3];
  FString::operator=(param_1 + 200);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xec);
  cVar6 = FUN_1409aecd0(puVar3);
  if (cVar6 != '\0') {
    lVar7 = FUN_1409a7d20(puVar3);
    local_58[0] = 0;
    local_58[1] = 0;
    cVar6 = FUN_141606040(local_58,lVar7 + 0xc0,param_1 + 0x68,0);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (cVar6 == '\0') {
      FUN_141606040(lVar7 + 0xb0,lVar7 + 0xc0,param_1 + 0x68,0);
    }
    puVar8 = (undefined8 *)FText::ToString(param_1 + 0x68);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar8;
    }
    FString::PrintfImpl(local_58 + 2,L"+%i %s",*(undefined4 *)(param_1 + 0x80),puVar10);
    uVar9 = FText::FromString(local_38,local_58 + 2);
    FText::operator=(param_1 + 0x68,uVar9);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_58[2] != 0) {
      FMemory::Free();
    }
    FString::operator=(param_1 + 0x58,lVar7 + 0xa0);
    FString::operator=(param_1 + 0x88,lVar7 + 0x40);
  }
  *(undefined8 *)(param_1 + 0xd8) = param_6;
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}


