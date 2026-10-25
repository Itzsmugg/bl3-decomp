// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1409eafd0 FUN_1409eafd0 body=1066 status=ok
// SIG undefined FUN_1409eafd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409eafd0(longlong *param_1,float *param_2,float param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  ulonglong *puVar5;
  void *pvVar6;
  int iVar7;
  void *pvVar8;
  void *_Src;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  char local_148;
  ulonglong local_140;
  ulonglong local_138;
  int local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  float local_124;
  void *local_120;
  uint local_118;
  int local_114;
  void *local_110;
  int local_108;
  undefined4 local_104;
  float local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  float local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c4;
  float local_bc;
  undefined1 local_b8;
  void *local_b0 [3];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_e8 = param_2[2] + *(float *)((longlong)param_1 + 0x564);
  local_124 = param_2[2] + *(float *)(param_1 + 0xab);
  local_d0 = CONCAT44(param_2[1] + *(float *)((longlong)param_1 + 0x554),
                      *param_2 + *(float *)(param_1 + 0xaa));
  local_c4 = CONCAT44(param_2[1] + *(float *)(param_1 + 0xac),
                      *param_2 + *(float *)((longlong)param_1 + 0x55c));
  local_f8 = (undefined8 *)param_1[0xb0];
  local_b8 = 1;
  local_f0 = local_f8 + (int)param_1[0xb1];
  local_148 = 1e-08 < ABS(param_3);
  pvVar8 = (void *)0x0;
  local_130 = 0;
  local_120 = (void *)0x0;
  iVar7 = 0;
  local_114 = 0;
  _Src = pvVar8;
  local_e0 = param_1;
  local_d8 = param_4;
  local_c8 = local_124;
  local_bc = local_e8;
  if (local_f8 != local_f0) {
    do {
      uVar9 = 0;
      plVar2 = (longlong *)*local_f8;
      local_140 = 0;
      local_138 = 0;
      if (local_148 == '\0') {
        puVar5 = (ulonglong *)(**(code **)(*plVar2 + 0x9b0))(plVar2,local_b0,&local_d0,1);
        pvVar6 = local_b0[0];
        if (&local_140 != puVar5) {
          if (local_140 != 0) {
            FMemory::Free();
          }
          local_140 = *puVar5;
          *puVar5 = 0;
          local_138 = puVar5[1];
          puVar5[1] = 0;
          pvVar6 = local_b0[0];
        }
      }
      else {
        local_158 = 1;
        puVar5 = (ulonglong *)(**(code **)(*plVar2 + 0x9a8))(plVar2,&local_110,local_d8,param_3);
        pvVar6 = local_110;
        if (&local_140 != puVar5) {
          if (local_140 != 0) {
            FMemory::Free();
          }
          local_140 = *puVar5;
          *puVar5 = 0;
          local_138 = puVar5[1];
          puVar5[1] = 0;
          pvVar6 = local_110;
        }
      }
      if (pvVar6 != (void *)0x0) {
        FMemory::Free();
      }
      uVar1 = local_140 + (longlong)(int)local_138 * 4;
      uVar10 = (uVar1 - local_140) + 3 >> 2;
      if (uVar1 < local_140) {
        uVar10 = 0;
      }
      if (uVar10 != 0) {
        do {
          local_78 = _DAT_146864db0 & _DAT_146864dc0;
          uStack_74 = uRam0000000146864db4 & uRam0000000146864dc4;
          uStack_70 = uRam0000000146864db8 & uRam0000000146864dc8;
          uStack_6c = uRam0000000146864dbc & uRam0000000146864dcc;
          local_98 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          uStack_8c = uRam0000000146864dbc;
          local_88 = 0;
          uStack_80 = 0;
          cVar3 = FUN_1424f4b30(plVar2,0,&local_98,1);
          if (cVar3 != '\0') {
            iVar7 = (int)pvVar8;
            local_12c = (undefined4)local_88;
            local_118 = iVar7 + 1;
            uStack_128 = local_88._4_4_;
            local_124 = (float)uStack_80;
            if (local_114 < (int)local_118) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_120,pvVar8);
              _Src = local_120;
            }
            pvVar8 = (void *)(ulonglong)local_118;
            *(ulonglong *)((longlong)_Src + (longlong)iVar7 * 0xc) = CONCAT44(uStack_128,local_12c);
            *(float *)((longlong)_Src + (longlong)iVar7 * 0xc + 8) = local_124;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar10);
      }
      param_1 = local_e0;
      iVar7 = (int)pvVar8;
      (**(code **)(*local_e0 + 0x778))(local_e0,plVar2,&local_140);
      iVar4 = FUN_1424f4b20(plVar2);
      local_130 = local_130 + iVar4;
      if (local_140 != 0) {
        FMemory::Free();
      }
      local_f8 = local_f8 + 1;
    } while (local_f8 != local_f0);
  }
  fVar11 = (float)local_130 / (float)(int)param_1[0xb3];
  fVar12 = 0.0;
  if ((0.0 <= fVar11) && (fVar12 = fVar11, 1.0 <= fVar11)) {
    fVar12 = 1.0;
  }
  local_110 = (void *)0x0;
  local_104 = 0;
  local_108 = iVar7;
  if (iVar7 != 0) {
    TArray<FVector,FDefaultAllocator>::ResizeForCopy(&local_110,iVar7,0);
    _guard_xfg_dispatch_icall_nop(local_110,_Src,(longlong)iVar7 * 0xc);
  }
  local_100 = fVar12;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xae,&local_110);
  if (local_110 != (void *)0x0) {
    FMemory::Free();
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 1409eb400 FUN_1409eb400 body=34 status=ok
// SIG undefined FUN_1409eb400(void)

void FUN_1409eb400(longlong param_1)

{
  FUN_1409bd210();
  FUN_1409bd1e0(param_1,param_1 + 0x298);
  return;
}



// FUNCTION 1409eb430 FUN_1409eb430 body=573 status=ok
// SIG undefined FUN_1409eb430(void)

void FUN_1409eb430(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  
  FUN_1422406d0();
  if (*(char *)(param_1 + 0x128) == '\x03') {
    fVar4 = (float)FUN_142d199e0(*(undefined8 *)(param_1 + 0xe78));
    if (0.0 < fVar4) {
      if ((*(longlong *)(param_1 + 0x23b0) == 0) &&
         (plVar1 = *(longlong **)(param_1 + 0x490), plVar1 != (longlong *)0x0)) {
        uVar3 = FUN_142c36280();
        uVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
        *(undefined8 *)(param_1 + 0x23b0) = uVar3;
      }
      *(float *)(param_1 + 0x234c) = param_2 + *(float *)(param_1 + 0x234c);
      *(float *)(param_1 + 0x2348) = param_2 + *(float *)(param_1 + 0x2348);
      if (*(char *)(param_1 + 0x23e5) != '\0') {
        *(float *)(param_1 + 0x2350) = param_2 + *(float *)(param_1 + 0x2350);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(int *)(lVar2 + 0x38) < DAT_1468655f0) {
        _Init_thread_header(&DAT_1468655f0);
        if (DAT_1468655f0 == -1) {
          FName::FName(&DAT_1468655e8,L"A9K_TimeSinceBeginFight",1);
          _Init_thread_footer(&DAT_1468655f0);
        }
      }
      if (*(int *)(lVar2 + 0x38) < DAT_146865600) {
        _Init_thread_header(&DAT_146865600);
        if (DAT_146865600 == -1) {
          FName::FName(&DAT_1468655f8,L"A9K_TimeSinceBeginPhase",1);
          _Init_thread_footer(&DAT_146865600);
        }
      }
      if (*(int *)(lVar2 + 0x38) < DAT_146865610) {
        _Init_thread_header(&DAT_146865610);
        if (DAT_146865610 == -1) {
          FName::FName(&DAT_146865608,L"A9K_TimeSinceLastSponsorBegan",1);
          _Init_thread_footer(&DAT_146865610);
        }
      }
      if (*(longlong *)(param_1 + 0x23b0) != 0) {
        UBlackboardComponent::SetValueAsFloat
                  (*(longlong *)(param_1 + 0x23b0),&DAT_1468655e8,*(undefined4 *)(param_1 + 0x234c))
        ;
        UBlackboardComponent::SetValueAsFloat
                  (*(undefined8 *)(param_1 + 0x23b0),&DAT_1468655f8,
                   *(undefined4 *)(param_1 + 0x2348));
        UBlackboardComponent::SetValueAsFloat
                  (*(undefined8 *)(param_1 + 0x23b0),&DAT_146865608,
                   *(undefined4 *)(param_1 + 0x2350));
      }
      FUN_1409d8230(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1409eb680 FUN_1409eb680 body=347 status=ok
// SIG undefined FUN_1409eb680(void)

void FUN_1409eb680(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 local_58;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [8];
  float local_40;
  
  uVar6 = FUN_1422406d0();
  if (0.0 < *(float *)(param_1 + 0x47c)) {
    lVar4 = *(longlong *)(param_1 + 0x168);
    *(float *)(param_1 + 0x47c) = *(float *)(param_1 + 0x47c) - param_2;
    fVar1 = *(float *)(param_1 + 0x470);
    fVar2 = *(float *)(param_1 + 0x474);
    fVar3 = *(float *)(param_1 + 0x478);
    if (lVar4 == 0) {
      fVar9 = (float)DAT_1468b5da0;
      fVar10 = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
      fStack_50 = DAT_1468b5da8;
    }
    else {
      fVar9 = *(float *)(lVar4 + 0x210);
      local_58 = *(undefined8 *)(lVar4 + 0x210);
      fStack_50 = *(float *)(lVar4 + 0x218);
      fStack_4c = *(float *)(lVar4 + 0x21c);
      auVar5._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != *(float *)(lVar4 + 0x214));
      auVar5._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != fVar9);
      auVar5._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_50);
      auVar5._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_4c);
      iVar7 = movmskps(uVar6,auVar5);
      if (iVar7 != 0) {
        *(float *)(lVar4 + 0x250) = fVar9;
        *(float *)(lVar4 + 0x254) = *(float *)(lVar4 + 0x214);
        *(float *)(lVar4 + 600) = fStack_50;
        *(float *)(lVar4 + 0x25c) = fStack_4c;
        puVar8 = (undefined8 *)FQuat::Rotator(&local_58,local_48);
        *(undefined8 *)(lVar4 + 0x260) = *puVar8;
        *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar8 + 1);
      }
      fVar9 = (float)*(undefined8 *)(lVar4 + 0x260);
      fVar10 = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x260) >> 0x20);
      fStack_50 = *(float *)(lVar4 + 0x268);
    }
    fStack_50 = param_2 * fVar3 + fStack_50;
    local_58 = CONCAT44(param_2 * fVar2 + fVar10,param_2 * fVar1 + fVar9);
    local_40 = fStack_50;
    AActor::SetActorRotation(param_1,&local_58,0);
  }
  return;
}



// FUNCTION 1409eb7e0 FUN_1409eb7e0 body=479 status=ok
// SIG undefined FUN_1409eb7e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409eb7e0(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  
  FUN_1422406d0();
  if (*(longlong *)(param_1 + 0x460) != 0) {
    cVar3 = UObjectBase::IsValidLowLevel();
    if (cVar3 != '\0') {
      if (*(longlong *)(param_1 + 0x168) == 0) {
        local_58 = _DAT_1468b5d90;
      }
      else {
        local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x220);
      }
      uVar2 = local_58;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x460) + 0x168);
      if (lVar1 == 0) {
        local_58 = _DAT_1468b5d90;
      }
      else {
        local_58 = *(undefined8 *)(lVar1 + 0x220);
      }
      local_48._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      local_48._4_4_ = (float)((ulonglong)local_58 >> 0x20) - local_48._4_4_;
      local_48._0_4_ = (float)uVar2;
      local_48._0_4_ = (float)local_58 - (float)local_48;
      fVar4 = local_48._4_4_ * local_48._4_4_ + (float)local_48 * (float)local_48;
      if (1e-08 < fVar4) {
        auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
        fVar5 = auVar6._0_4_;
        fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
        fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
        local_48._0_4_ = (float)local_48 * fVar5;
        local_48._4_4_ = local_48._4_4_ * fVar5;
      }
      param_2 = param_2 * *(float *)(param_1 + 0x468);
      local_40 = 0;
      local_48 = CONCAT44(local_48._4_4_ * param_2,(float)local_48 * param_2);
      FUN_142221b50(param_1,&local_48,0,0,0);
    }
  }
  return;
}



// FUNCTION 1409eb9c0 FUN_1409eb9c0 body=221 status=ok
// SIG undefined FUN_1409eb9c0(void)

void FUN_1409eb9c0(longlong *param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  FUN_142c85cd0();
  if ((*(char *)(param_1[2] + 0x1dd) != '\0') && ((char)param_1[0xa2] == '\0')) {
    lVar1 = *param_1;
    uVar3 = (**(code **)(lVar1 + 0xa0))(param_1,1);
    cVar2 = (**(code **)(lVar1 + 0x148))(param_1,uVar3,1,param_2);
    if (cVar2 != '\0') {
      lVar1 = *param_1;
      uVar3 = (**(code **)(lVar1 + 0xa0))(param_1,2);
      cVar2 = (**(code **)(lVar1 + 0x148))(param_1,uVar3,2,param_2);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0x150))(param_1);
      }
    }
  }
  if ((0.0 < *(float *)((longlong)param_1 + 0x504)) &&
     (param_2 = *(float *)((longlong)param_1 + 0x504) - param_2,
     *(float *)((longlong)param_1 + 0x504) = param_2, param_2 <= 0.0)) {
    FUN_1409e4910(param_1,0,*(undefined4 *)((longlong)param_1 + 0x4fc));
  }
  return;
}



// FUNCTION 1409ebaa0 FUN_1409ebaa0 body=27 status=ok
// SIG undefined FUN_1409ebaa0(void)

void FUN_1409ebaa0(undefined8 param_1)

{
  FUN_1409eb9c0();
  FUN_1409ce720(param_1);
  return;
}



// FUNCTION 1409ebac0 FUN_1409ebac0 body=1107 status=ok
// SIG undefined FUN_1409ebac0(void)

void FUN_1409ebac0(longlong param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 local_res18 [2];
  undefined8 local_78;
  float local_70;
  float local_60;
  undefined1 local_5c [68];
  
  FUN_142c85cd0();
  lVar4 = FUN_142c6f130(param_1);
  if (lVar4 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x10);
    if (*(char *)(lVar4 + 0x128) == '\x03') {
      if ((*(longlong *)(param_1 + 0x4a0) == 0) ||
         (iVar3 = FUN_142dec940(*(longlong *)(param_1 + 0x4a0),lVar4), iVar3 == 2)) {
        *(undefined4 *)(param_1 + 0x4c8) = 0;
      }
      else {
        fVar10 = param_2 + *(float *)(param_1 + 0x4c8);
        *(float *)(param_1 + 0x4c8) = fVar10;
        if (*(float *)(param_1 + 0x4cc) <= fVar10 && fVar10 != *(float *)(param_1 + 0x4cc)) {
          FUN_1409d1160(param_1);
          *(undefined1 *)(param_1 + 0x468) = 3;
          FUN_142c76980(param_1);
          return;
        }
      }
      plVar5 = (longlong *)FUN_14222e2a0(lVar4);
      if (plVar5 == (longlong *)0x0) {
        *(undefined1 *)(param_1 + 0x468) = 5;
        FUN_142c76980(param_1);
      }
      else {
        if (1e-08 <= param_2) {
          fVar10 = *(float *)(param_1 + 0x4c4);
          uVar9 = *(undefined8 *)(param_1 + 0x4bc);
          local_70 = fVar10;
          puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x308))(plVar5,local_5c);
          *(undefined8 *)(param_1 + 0x4bc) = *puVar6;
          *(undefined4 *)(param_1 + 0x4c4) = 0;
          local_78._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
          if (((0.0001 < ABS((float)uVar9)) || (0.0001 < ABS(local_78._4_4_))) ||
             (0.0001 < ABS(local_70))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          local_78 = uVar9;
          if (bVar1) {
            *(float *)(param_1 + 0x4d4) =
                 param_2 * *(float *)(param_1 + 0x4b0) + *(float *)(param_1 + 0x4d4);
          }
          else {
            local_60 = local_70 - *(float *)(param_1 + 0x4c4);
            *(ulonglong *)(param_1 + 0x4d8) =
                 CONCAT44(local_78._4_4_ - *(float *)(param_1 + 0x4c0),
                          (float)uVar9 - *(float *)(param_1 + 0x4bc));
            *(float *)(param_1 + 0x4e0) = local_60;
            fVar11 = *(float *)(param_1 + 0x4d4) -
                     SQRT(*(float *)(param_1 + 0x4d8) * *(float *)(param_1 + 0x4d8) +
                          *(float *)(param_1 + 0x4dc) * *(float *)(param_1 + 0x4dc)) *
                     *(float *)(param_1 + 0x4ac);
            *(float *)(param_1 + 0x4d4) = fVar11;
            if (0.0 <= fVar11) {
              fVar11 = param_2 * *(float *)(param_1 + 0x4b0) + fVar11;
            }
            else {
              FUN_1409d15a0(param_1,&local_78);
              *(undefined8 *)(param_1 + 0x46c) = uVar9;
              *(undefined1 *)(param_1 + 0x468) = 4;
              *(float *)(param_1 + 0x474) = fVar10;
              FUN_142c76980(param_1);
              fVar11 = *(float *)(param_1 + 0x4d4);
            }
            if (0.0 <= fVar11) {
              if (1.0 <= fVar11) {
                fVar11 = 1.0;
              }
            }
            else {
              fVar11 = 0.0;
            }
            *(float *)(param_1 + 0x4d4) = fVar11;
            FUN_1409eed20(param_1,fVar11,param_1 + 0x4d8);
          }
        }
        cVar2 = *(char *)(param_1 + 0x468);
        if (cVar2 == '\0') {
          cVar2 = FUN_1409ed9a0(param_1,param_2,lVar4);
          if (cVar2 != '\0') {
            return;
          }
          param_2 = *(float *)(param_1 + 0x4a8) - param_2;
          *(float *)(param_1 + 0x4a8) = param_2;
          if (0.0 <= param_2) {
            cVar2 = FUN_142c73400(param_1,1,1);
            if (cVar2 != '\0') {
              return;
            }
            FUN_1409e08d0(param_1,lVar8 + 0xb8,2);
            return;
          }
          lVar8 = *(longlong *)(param_1 + 0x10) + 0xd0;
          *(undefined1 *)(param_1 + 0x468) = 1;
          uVar9 = 0;
        }
        else {
          if (cVar2 == '\x01') {
            cVar2 = FUN_1409ed9a0(param_1,param_2,lVar4);
            if (cVar2 != '\0') {
              return;
            }
            cVar2 = FUN_142c73400(param_1,1,1);
            if (cVar2 != '\0') {
              return;
            }
            lVar7 = lVar8 + 400;
          }
          else {
            if (cVar2 != '\x02') {
              return;
            }
            cVar2 = FUN_142c73400(param_1,1,1);
            if (cVar2 != '\0') {
              param_2 = *(float *)(param_1 + 0x4e8) - param_2;
              *(float *)(param_1 + 0x4e8) = param_2;
              if (0.0 <= param_2) {
                return;
              }
              if (*(float *)(param_1 + 0x4d4) <= *(float *)(param_1 + 0x4e4)) {
                return;
              }
            }
            lVar7 = lVar8 + 0x510;
          }
          local_res18[0] = 0xffffffffffffffff;
          fVar10 = (float)FUN_142de77e0(lVar7,lVar4,0,local_res18);
          lVar8 = lVar8 + 0xb8;
          *(undefined1 *)(param_1 + 0x468) = 0;
          uVar9 = 2;
          *(float *)(param_1 + 0x4a8) = (float)((int)ROUND(fVar10 * 2.0 + 0.5) >> 1);
        }
        FUN_1409e08d0(param_1,lVar8,uVar9);
        FUN_142c76980(param_1);
      }
    }
    else {
      cVar2 = FUN_142c73400(param_1,1,1);
      if (cVar2 == '\0') {
        FUN_1409e08d0(param_1,lVar8 + 0xb8,2);
      }
    }
  }
  return;
}



// FUNCTION 1409ebf20 FUN_1409ebf20 body=671 status=ok
// SIG undefined FUN_1409ebf20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409ebf20(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((char)param_1[0xac] != '\0') {
    return;
  }
  lVar6 = FUN_142c6f130();
  if (lVar6 != 0) {
    lVar7 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_1409ebf9e;
  }
  lVar6 = 0;
LAB_1409ebf9e:
  if ((param_1[0xad] == 0) || (lVar6 == 0)) {
    *(undefined1 *)(param_1 + 0x9f) = 4;
  }
  else {
    lVar7 = param_1[2];
    if ((char)param_1[0x9f] == '\x04') {
      FUN_142c7bae0(param_1[3],&local_a8,*(undefined8 *)(lVar7 + 0x2f0));
      local_70 = (longlong *)CONCAT44(uStack_9c,local_a0);
LAB_1409ec15b:
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
    }
    else {
      lVar8 = FUN_142cef2b0(param_1[0xad],local_58);
      lVar10 = *(longlong *)(lVar6 + 0x168);
      local_88 = *(float *)(lVar8 + 0x10);
      fStack_84 = *(float *)(lVar8 + 0x14);
      fStack_80 = *(float *)(lVar8 + 0x18);
      uStack_7c = *(undefined4 *)(lVar8 + 0x1c);
      if (lVar10 == 0) {
        local_90 = DAT_1468b5d98;
        puVar9 = &local_98;
        local_98 = _DAT_1468b5d90;
      }
      else {
        local_68 = *(undefined4 *)(lVar10 + 0x220);
        uStack_64 = *(undefined4 *)(lVar10 + 0x224);
        uStack_60 = *(undefined4 *)(lVar10 + 0x228);
        uStack_5c = *(undefined4 *)(lVar10 + 0x22c);
        puVar9 = (undefined8 *)&local_b8;
        local_b8 = local_68;
        local_b0 = uStack_60;
        uStack_b4 = uStack_64;
      }
      local_a8 = *puVar9;
      local_a0 = *(float *)(puVar9 + 1);
      fVar12 = (float)local_a8 - *(float *)(lVar8 + 0x10);
      fVar13 = local_a0 - (*(float *)(lVar8 + 0x18) + *(float *)(lVar7 + 0x2fc));
      fVar11 = (float)((ulonglong)local_a8 >> 0x20) - *(float *)(lVar8 + 0x14);
      if ((*(char *)(lVar6 + 0x128) != '\x03') ||
         (*(float *)(lVar7 + 0x2f8) * *(float *)(lVar7 + 0x2f8) <=
          fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13)) {
        FUN_1406f8980(param_1,param_2);
        cVar5 = (**(code **)(*param_1 + 0x38))(param_1);
        if ((cVar5 != '\0') && (*(longlong *)(lVar7 + 0x2f0) != 0)) {
          lVar10 = FUN_142e20fc0();
          lVar6 = *(longlong *)(lVar7 + 0x2f0);
          for (lVar7 = lVar6; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
            if (lVar7 == lVar10) {
              if (lVar6 == 0) {
                return;
              }
              FUN_142c7bae0(param_1[3],local_78,lVar6);
              goto LAB_1409ec15b;
            }
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x9f) = 4;
        FUN_142ce1dc0(param_1[0xad],lVar6,0);
        *(undefined1 *)(param_1 + 0xac) = 1;
        FUN_142c76980(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1409ec1c0 FUN_1409ec1c0 body=457 status=ok
// SIG undefined FUN_1409ec1c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409ec1c0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [96];
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_142c85a30();
  if (*(char *)(param_1 + 0x550) == '\0') {
    FUN_1409db470(param_1,0);
  }
  else if ((*(longlong *)(param_1 + 0x548) != 0) && (0.0 < *(float *)(param_1 + 0x588))) {
    lVar1 = FUN_142c728d0(param_1);
    plVar3 = (longlong *)0x0;
    plVar5 = plVar3;
    if (*(longlong *)(param_1 + 0x540) != 0) {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x540) + 0x168);
    }
    if ((lVar1 != 0) && (plVar5 != (longlong *)0x0)) {
      plVar4 = *(longlong **)(param_1 + 0x590);
      if (*(longlong **)(param_1 + 0x590) == (longlong *)0x0) {
        lVar1 = *(longlong *)(param_1 + 0x10);
        lVar2 = operator_new(0x48);
        if (lVar2 != 0) {
          local_e0 = *(undefined4 *)(param_1 + 0x584);
          local_d8 = &local_c8;
          local_e8 = *(undefined4 *)(lVar1 + 0x3c4);
          local_f0 = *(undefined4 *)(lVar1 + 0x3c0);
          local_f8 = *(undefined4 *)(lVar1 + 0x3bc);
          local_c8 = 0xffffffffffffffff;
          local_c0 = 0;
          local_b8 = 0;
          plVar3 = (longlong *)
                   FUN_142d79d00(lVar2,plVar5,*(undefined8 *)(param_1 + 0x548),
                                 *(undefined4 *)(lVar1 + 0x3b8));
        }
        *(longlong **)(param_1 + 0x590) = plVar3;
        plVar4 = plVar3;
      }
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_3c = param_2;
      (**(code **)(*plVar4 + 8))(plVar4,local_b0);
      if (local_50 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1409ec390 FUN_1409ec390 body=27 status=ok
// SIG undefined FUN_1409ec390(void)

void FUN_1409ec390(undefined8 param_1)

{
  FUN_1409eb9c0();
  FUN_1409ce990(param_1);
  return;
}



// FUNCTION 1409ec3b0 FUN_1409ec3b0 body=113 status=ok
// SIG undefined FUN_1409ec3b0(void)

void FUN_1409ec3b0(longlong param_1)

{
  longlong lVar1;
  
  FUN_142c85cd0();
  if (*(longlong **)(param_1 + 0x500) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x500) + 0x148))();
    if ((lVar1 != 0) && (*(char *)(param_1 + 0x4f8) != '\0')) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x500) + 0x148))();
      if (*(float *)(param_1 + 0x4fc) <= *(float *)(lVar1 + 0x790) &&
          *(float *)(lVar1 + 0x790) != *(float *)(param_1 + 0x4fc)) {
        FUN_14122df80(*(undefined8 *)(param_1 + 0x500),DAT_146294a50);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409ec430 FUN_1409ec430 body=226 status=ok
// SIG undefined FUN_1409ec430(void)

void FUN_1409ec430(longlong *param_1,undefined8 param_2,float param_3)

{
  char cVar1;
  
  if (param_1[1] != 0) {
    if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
      param_3 = *(float *)((longlong)param_1 + 0xdc) - param_3;
      if (param_3 <= 0.0) {
        param_3 = 0.0;
      }
      *(float *)((longlong)param_1 + 0xdc) = param_3;
      if (0.0 < param_3) {
        cVar1 = (**(code **)(*param_1 + 0x10))();
        if (cVar1 != '\0') {
          return;
        }
        if (0.5 < *(float *)((longlong)param_1 + 0xdc)) {
          FUN_1409ced00(param_1);
          FUN_1409e3890(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001409ec4b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x40))(param_1);
          return;
        }
      }
      FUN_1409d10b0(param_1);
      return;
    }
    param_3 = *(float *)(param_1 + 0x1c) - param_3;
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    *(float *)(param_1 + 0x1c) = param_3;
    if (param_3 <= 0.0) {
      FUN_1409e3890(param_2,param_1);
      (**(code **)(*param_1 + 0x40))(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    }
  }
  return;
}



// FUNCTION 1409ec520 FUN_1409ec520 body=446 status=ok
// SIG undefined FUN_1409ec520(void)

void FUN_1409ec520(ulonglong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar7 = 0;
  puVar6 = (undefined8 *)*param_1;
  uVar8 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
  if (puVar6 + (int)param_1[1] < puVar6) {
    uVar8 = uVar7;
  }
  if (uVar8 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar6 + 8))((longlong *)*puVar6,param_1,param_2);
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 != uVar8);
  }
  if ((int)param_1[5] != -1) {
    return;
  }
  if ((int)param_1[3] < 1) {
    return;
  }
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  uVar8 = *(ulonglong *)param_1[2];
  param_1[4] = uVar8;
  local_38 = FUN_1409dd470;
  uVar1 = *(undefined8 *)(uVar8 + 8);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = 3;
  local_48 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_144089920;
    FWeakObjectPtr::operator=(plVar4 + 1,uVar1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_2c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_144089968;
  }
  uVar2 = FUN_142d369f0(uVar8 + 0x20,*(undefined8 *)(uVar8 + 8),&local_48);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) goto LAB_1409ec68b;
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
LAB_1409ec68b:
  *(undefined4 *)(param_1 + 5) = uVar2;
  iVar3 = (int)param_1[3];
  if (iVar3 + -1 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)param_1[2],(void *)((longlong)param_1[2] + 8),(longlong)(iVar3 + -1) << 3);
    iVar3 = (int)param_1[3];
  }
  *(int *)(param_1 + 3) = iVar3 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 2);
  if ((int)param_1[5] == -1) {
    param_1[4] = 0;
  }
  return;
}



// FUNCTION 1409ec6e0 FUN_1409ec6e0 body=265 status=ok
// SIG undefined FUN_1409ec6e0(void)

void FUN_1409ec6e0(longlong *param_1,undefined8 param_2,float param_3)

{
  char cVar1;
  float fVar2;
  
  if (param_1[1] != 0) {
    if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
      fVar2 = *(float *)(param_1 + 0x1c) - param_3;
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      *(float *)(param_1 + 0x1c) = fVar2;
      if (fVar2 <= 0.0) {
        FUN_1409e3890(param_2,param_1);
        (**(code **)(*param_1 + 0x40))(param_1);
        *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
      }
    }
    else {
      fVar2 = *(float *)((longlong)param_1 + 0xdc) - param_3;
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      *(float *)((longlong)param_1 + 0xdc) = fVar2;
      if (0.0 < fVar2) {
        cVar1 = (**(code **)(*param_1 + 0x10))();
        if (cVar1 != '\0') goto LAB_1409ec7af;
        if (0.5 < *(float *)((longlong)param_1 + 0xdc)) {
          FUN_1409ced00(param_1);
          FUN_1409e3890(param_2,param_1);
          (**(code **)(*param_1 + 0x40))(param_1);
          goto LAB_1409ec7af;
        }
      }
      FUN_1409d10b0(param_1);
    }
  }
LAB_1409ec7af:
  param_3 = *(float *)(param_1 + 0x23) - param_3;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  *(float *)(param_1 + 0x23) = param_3;
  if (param_3 <= 0.0) {
    FUN_1409d1300(param_1);
  }
  return;
}



// FUNCTION 1409ec7f0 FUN_1409ec7f0 body=302 status=ok
// SIG undefined FUN_1409ec7f0(void)

void FUN_1409ec7f0(longlong param_1,float param_2)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  
  FUN_1422409a0();
  iVar3 = *(int *)(param_1 + 0x588) + -1;
  if (-1 < iVar3) {
    lVar2 = (longlong)iVar3 * 0x60;
    lVar4 = lVar2;
    do {
      if (((*(longlong *)(param_1 + 0x578) == 0) ||
          (*(longlong *)(*(longlong *)(param_1 + 0x580) + 0x10 + lVar2) == 0)) ||
         (fVar5 = (float)FUN_142230c20(), pfVar1 = (float *)(*(longlong *)(param_1 + 0x578) + 0x60c)
         , *pfVar1 <= fVar5 && fVar5 != *pfVar1)) {
        FUN_1409e3380(param_1 + 0x4c8,iVar3);
      }
      else {
        FUN_1409eeb30(param_1 + 0x4c8,*(longlong *)(param_1 + 0x580) + lVar4);
      }
      lVar4 = lVar4 + -0x60;
      lVar2 = lVar2 + -0x60;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x600) != '\0')) {
    param_2 = *(float *)(param_1 + 0x608) - param_2;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)(param_1 + 0x608) = param_2;
    if (param_2 <= 0.0) {
      if (0.0 < *(float *)(param_1 + 0x604)) {
        FUN_14144b490(param_1);
        *(undefined4 *)(param_1 + 0x604) = 0;
      }
      *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_1 + 0x4b0);
    }
  }
  return;
}



// FUNCTION 1409ec920 FUN_1409ec920 body=545 status=ok
// SIG undefined FUN_1409ec920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409ec920(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined1 *local_d0;
  undefined *local_c8;
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_98 [22];
  undefined1 local_82;
  longlong local_50;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_14239ae60();
  plVar1 = *(longlong **)(param_1 + 0x468);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar1 + 0x148))(plVar1);
    if ((lVar3 != 0) && (plVar1[0xe8] != 0)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146865390) {
        _Init_thread_header(&DAT_146865390);
        if (DAT_146865390 == -1) {
          FName::FName(&DAT_146865388,L"GRMLNPhasedCheck",1);
          _Init_thread_footer(&DAT_146865390);
        }
      }
      local_d8 = plVar1;
      FUN_1422ffb20(local_98,DAT_146865388,local_b8,0);
      lVar3 = plVar1[0x2d];
      local_82 = 1;
      if (lVar3 == 0) {
        local_b4 = _DAT_1468b5d90;
        local_ac = DAT_1468b5d98;
      }
      else {
        local_b4 = *(undefined8 *)(lVar3 + 0x220);
        local_ac = *(undefined4 *)(lVar3 + 0x228);
      }
      local_a4 = local_b4;
      local_9c = local_ac;
      uVar4 = (**(code **)(*(longlong *)plVar1[0xe8] + 0x748))((longlong *)plVar1[0xe8],&local_b4,0)
      ;
      uVar5 = (**(code **)(*plVar1 + 0x148))(plVar1);
      local_c8 = &DAT_146aefe68;
      local_d0 = local_98;
      local_d8 = (longlong *)uVar4;
      bVar2 = UWorld::OverlapAnyTestByChannel(uVar5,&local_a4,&DAT_1464aa810,3);
      if (bVar2 != (*(byte *)((longlong)plVar1 + 0xac2) >> 6 & 1)) {
        *(byte *)((longlong)plVar1 + 0xac2) =
             *(byte *)((longlong)plVar1 + 0xac2) & 0xbf | bVar2 << 6;
        FUN_14141c830(plVar1,(bVar2 << 6 & 0x40) >> 6);
      }
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1409ecb50 FUN_1409ecb50 body=256 status=ok
// SIG undefined FUN_1409ecb50(void)

void FUN_1409ecb50(longlong param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_res8 [32];
  
  FUN_14239b370();
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    FUN_1409ecc50(param_1);
    if (*(longlong *)(param_1 + 0x468) != 0) {
      param_2 = *(float *)(param_1 + 0x474) - param_2;
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      *(float *)(param_1 + 0x474) = param_2;
      if ((((*(byte *)(*(longlong *)(param_1 + 0x468) + 0xac2) & 0x10) != 0) &&
          ((*(byte *)(param_1 + 0x470) & 2) != 0)) && (param_2 <= 0.0)) {
        FUN_14141c100();
        uVar2 = FUN_142c98860(param_1 + 0x430,*(undefined8 *)(param_1 + 0x468));
        *(undefined4 *)(param_1 + 0x474) = uVar2;
      }
    }
  }
  local_res8[0] =
       *(float *)(param_1 + 0x420) <=
       *(float *)(param_1 + 0x18c) * *(float *)(param_1 + 0x18c) +
       *(float *)(param_1 + 400) * *(float *)(param_1 + 400) +
       *(float *)(param_1 + 0x194) * *(float *)(param_1 + 0x194);
  if ((*(byte *)(param_1 + 0x470) & 1) != local_res8[0]) {
    *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) & 0xfe | local_res8[0];
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x400,local_res8);
  }
  return;
}



// FUNCTION 1409ecc50 FUN_1409ecc50 body=530 status=ok
// SIG undefined FUN_1409ecc50(void)

void FUN_1409ecc50(longlong param_1,float param_2)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  longlong lVar4;
  float fVar5;
  
  if (*(longlong *)(param_1 + 0x468) != 0) {
    if (((*(char *)(param_1 + 0x2d0) != '\x02') || (*(longlong *)(param_1 + 0x2e0) == 0)) ||
       ((fVar5 = (float)FUN_142230c20(), (*(byte *)(param_1 + 0x470) & 2) != 0 &&
        (*(float *)(param_1 + 0x428) <= fVar5 && fVar5 != *(float *)(param_1 + 0x428))))) {
      bVar2 = false;
    }
    else {
      bVar2 = fVar5 < *(float *)(param_1 + 0x424) || fVar5 == *(float *)(param_1 + 0x424);
    }
    bVar3 = *(byte *)(param_1 + 0x470);
    if ((bool)(bVar3 >> 1 & 1) != bVar2) {
      lVar4 = *(longlong *)(param_1 + 0x468);
      bVar3 = bVar3 & 0xfd | bVar2 * '\x02';
      *(byte *)(param_1 + 0x470) = bVar3;
      if (lVar4 != 0) {
        lVar1 = *(longlong *)(lVar4 + 0xa38);
        lVar4 = (longlong)*(int *)(lVar4 + 0xa40) * 0x168 + lVar1;
        if (lVar1 != lVar4) {
          do {
            if (bVar2 == false) {
              if (*(char *)(lVar1 + 0x154) != '\0') {
                *(undefined1 *)(lVar1 + 0x154) = 0;
              }
            }
            else if ((*(char *)(lVar1 + 0x140) != '\0') && (*(char *)(lVar1 + 0x154) == '\0')) {
              *(undefined1 *)(lVar1 + 0x154) = 1;
              *(undefined4 *)(lVar1 + 0x160) = 0;
            }
            lVar1 = lVar1 + 0x168;
          } while (lVar1 != lVar4);
          bVar3 = *(byte *)(param_1 + 0x470);
        }
      }
    }
    if ((bVar3 & 2) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0xa38);
      lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x468) + 0xa40) * 0x168 + lVar4;
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x168) {
        if ((*(char *)(lVar4 + 0x154) != '\0') &&
           (fVar5 = *(float *)(lVar4 + 0x160) - param_2, *(float *)(lVar4 + 0x160) = fVar5,
           fVar5 <= 0.0)) {
          if (*(int *)(lVar4 + 0x158) < 1) {
            *(int *)(lVar4 + 0x158) = *(int *)(lVar4 + 0x148);
            *(undefined4 *)(lVar4 + 0x15c) = 0;
            if (*(int *)(lVar4 + 0x148) < 1) {
              *(undefined1 *)(lVar4 + 0x154) = 0;
              goto LAB_1409ece1d;
            }
          }
          FUN_1409d3e40(lVar4);
          if (*(int *)(lVar4 + 0x158) < 1) {
            *(undefined4 *)(lVar4 + 0x160) = *(undefined4 *)(lVar4 + 0x14c);
          }
          else {
            *(undefined4 *)(lVar4 + 0x160) = *(undefined4 *)(lVar4 + 0x144);
          }
        }
LAB_1409ece1d:
      }
    }
    FUN_1409ec520(*(longlong *)(param_1 + 0x468) + 0xca0,param_2);
  }
  return;
}



// FUNCTION 1409ece70 FUN_1409ece70 body=869 status=ok
// SIG undefined FUN_1409ece70(void)

undefined8 FUN_1409ece70(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong *plVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined8 local_58;
  float local_50;
  undefined1 local_4c [20];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if (*(char *)((longlong)param_1 + 0x845) != '\x01') {
    if (*(char *)((longlong)param_1 + 0x845) != '\x02') {
      return 0;
    }
    if ((char)param_1[0x105] != '\x01') {
      *(undefined1 *)(param_1 + 0x105) = 1;
      FUN_1409e28b0(param_1);
      cVar4 = (char)param_1[0x105];
      cVar1 = *(char *)((longlong)param_1 + 0x845);
      if (cVar4 != cVar1) {
        *(char *)((longlong)param_1 + 0x845) = cVar4;
        if (cVar4 == '\x03') {
          FUN_1409ee050(param_1);
          cVar4 = *(char *)((longlong)param_1 + 0x845);
        }
        FUN_14149eb20(param_1,cVar1,cVar4);
      }
      FUN_1409ef4c0(param_1);
      (**(code **)(*param_1 + 0x600))(param_1);
    }
    return 1;
  }
  uVar6 = FUN_1409d4c70(param_1);
  cVar4 = FUN_142d47900(uVar6,param_1 + 0xad,(longlong)param_1 + 0x82c);
  if (cVar4 == '\0') {
    return 0;
  }
  uVar6 = UBlueprintGeneratedClass::GetPrivateStaticClass();
  plVar10 = param_1;
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  if (lVar7 == 0) {
    lVar7 = FUN_1409d4c70(param_1);
    if (lVar7 != 0) {
      lVar2 = *(longlong *)(lVar7 + 0x168);
      if (lVar2 == 0) {
        uVar12 = (undefined4)DAT_1468b5da0;
        uVar13 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        uVar5 = DAT_1468b5da8;
      }
      else {
        local_38 = *(float *)(lVar2 + 0x210);
        fStack_34 = *(float *)(lVar2 + 0x214);
        fStack_30 = *(float *)(lVar2 + 0x218);
        fStack_2c = *(float *)(lVar2 + 0x21c);
        auVar16._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_34);
        auVar16._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_38);
        auVar16._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_30);
        auVar16._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_2c);
        iVar11 = movmskps((int)lVar7,auVar16);
        if (iVar11 != 0) {
          *(float *)(lVar2 + 0x250) = local_38;
          *(float *)(lVar2 + 0x254) = fStack_34;
          *(float *)(lVar2 + 600) = fStack_30;
          *(float *)(lVar2 + 0x25c) = fStack_2c;
          puVar8 = (undefined8 *)FQuat::Rotator(&local_38,&local_58);
          *(undefined8 *)(lVar2 + 0x260) = *puVar8;
          *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar8 + 1);
        }
        uVar12 = (undefined4)*(undefined8 *)(lVar2 + 0x260);
        uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x260) >> 0x20);
        uVar5 = *(undefined4 *)(lVar2 + 0x268);
      }
      local_58 = CONCAT44(uVar13,uVar12);
      param_1[0x107] = local_58;
      local_50 = (float)uVar5;
      goto LAB_1409ed072;
    }
  }
  else {
    local_38 = *(float *)(lVar7 + 0x210);
    fStack_34 = *(float *)(lVar7 + 0x214);
    fStack_30 = *(float *)(lVar7 + 0x218);
    fStack_2c = *(float *)(lVar7 + 0x21c);
    auVar3._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_34);
    auVar3._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_38);
    auVar3._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_30);
    auVar3._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_2c);
    iVar11 = movmskps((int)plVar10,auVar3);
    if (iVar11 != 0) {
      *(float *)(lVar7 + 0x250) = local_38;
      *(float *)(lVar7 + 0x254) = fStack_34;
      *(float *)(lVar7 + 600) = fStack_30;
      *(float *)(lVar7 + 0x25c) = fStack_2c;
      puVar8 = (undefined8 *)FQuat::Rotator(&local_38,&local_58);
      *(undefined8 *)(lVar7 + 0x260) = *puVar8;
      *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar8 + 1);
    }
    param_1[0x107] = *(longlong *)(lVar7 + 0x260);
    uVar5 = *(undefined4 *)(lVar7 + 0x268);
LAB_1409ed072:
    *(undefined4 *)(param_1 + 0x108) = uVar5;
  }
  pfVar9 = (float *)FRotator::Vector(param_1 + 0x107,local_4c);
  fVar18 = pfVar9[1];
  fVar17 = *pfVar9;
  fVar14 = fVar17 * fVar17 + fVar18 * fVar18;
  if (fVar14 == 1.0) {
    if (pfVar9[2] == 0.0) {
      local_58 = *(longlong *)pfVar9;
      local_50 = pfVar9[2];
      goto LAB_1409ed177;
    }
  }
  else {
    if (fVar14 < 1e-08) {
      local_50 = DAT_1468b5d98;
      local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_1409ed177;
    }
    auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar15 = auVar16._0_4_;
    fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
    fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
    fVar17 = fVar17 * fVar15;
    fVar18 = fVar18 * fVar15;
  }
  local_50 = 0.0;
  local_58 = CONCAT44(fVar18,fVar17);
LAB_1409ed177:
  plVar10 = (longlong *)FVector::Rotation(&local_58,&local_38);
  param_1[0x107] = *plVar10;
  *(int *)(param_1 + 0x108) = (int)plVar10[1];
  FUN_1409e4580(param_1,2);
  return 1;
}



// FUNCTION 1409ed1e0 FUN_1409ed1e0 body=755 status=ok
// SIG undefined FUN_1409ed1e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1409ed1e0(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  byte bVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  longlong local_108 [3];
  undefined1 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  code *local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_b8 [8];
  char local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FUN_142df1610(param_1 + 0xc9,local_b8,0);
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((((lVar4 != 0) && (cVar2 = FUN_142cc7750(local_b8), cVar2 != '\0')) && (local_b0 == '\0')) &&
     (local_108[0] = param_1[0xcc], local_108[0] != 0)) {
    local_108[1] = 0xffffffff;
    local_108[2] = 0xffffffff;
    bVar7 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f0 = 1;
    local_ec = 0;
    local_d8 = 0;
    FWeakObjectPtr::operator=(local_108 + 1,param_1);
    local_f0 = 0;
    local_ec = FUN_142cc4350(local_b8,0);
    puVar8 = (undefined8 *)param_1[0xee];
    puVar1 = puVar8 + (longlong)(int)param_1[0xef] * 9;
    if (puVar8 != puVar1) {
      do {
        uVar5 = FUN_142dc4b70(&local_d0,*puVar8,local_108);
        bVar3 = FUN_142dd3d30(uVar5);
        bVar7 = bVar7 | bVar3;
        puVar8 = puVar8 + 9;
      } while (puVar8 != puVar1);
      if (bVar7 != 0) {
        if (*(char *)((longlong)param_1 + 0x804) != '\x01') {
          *(undefined1 *)((longlong)param_1 + 0x804) = 1;
          FUN_14149ebf0(param_1,1);
          (**(code **)(*param_1 + 0x600))(param_1);
        }
        local_d0 = FUN_1409ced40;
        uStack_c8 = 0;
        lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar4 + 400) == 0) {
          uVar5 = *(undefined8 *)(lVar4 + 0x3f8);
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
        }
        uVar10 = FUN_142cc4350(local_b8,0);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar6 + 1,param_1);
          plVar6[2] = (longlong)local_d0;
          plVar6[3] = CONCAT44(uStack_c4,uStack_c8);
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar6[5] = lVar4;
          *plVar6 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x30))(plVar6,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_110 = 0xbf800000;
        local_118 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar5,param_1 + 0x103,&local_a8,uVar10);
        if (local_48 != 0) {
          plVar9 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar9 = local_58;
          }
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))(plVar9,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          lVar4 = FMemory::Realloc(plVar6,0,0);
          if (lVar4 != 0) {
            FMemory::Free(lVar4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1409ed4e0 FUN_1409ed4e0 body=344 status=ok
// SIG undefined FUN_1409ed4e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1409ed4e0(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  longlong local_38;
  undefined1 local_30 [8];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_40 = *(longlong *)(param_1 + 0x628);
  if ((local_40 == 0) || ((*(byte *)(param_1 + 0x800) & 0x10) == 0)) {
    FAudioDeviceHandle::FAudioDeviceHandle(param_2);
  }
  else {
    local_38 = param_1;
    FUN_142dd9890(param_4,&local_40);
    local_78 = *(undefined8 *)(param_1 + 0x628);
    local_70 = 0xffffffff;
    uStack_68 = 0xffffffff;
    local_60 = 1;
    local_5c = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    FWeakObjectPtr::operator=(&local_70,param_1);
    if (param_3 == '\0') {
      local_60 = 1;
      FUN_142dc4b70(param_2,param_4,&local_78);
    }
    else {
      FUN_142df1610(param_1 + 0x630,local_30,0);
      local_60 = 0;
      cVar1 = FUN_142cc7750(local_30);
      if ((cVar1 == '\0') || (local_28 != '\0')) {
        local_5c = 0;
        FUN_142dc4b70(param_2,param_4,&local_78);
      }
      else {
        local_5c = FUN_142cc4350(local_30,0);
        FUN_142dc4b70(param_2,param_4,&local_78);
      }
    }
  }
  return param_2;
}



// FUNCTION 1409ed640 FUN_1409ed640 body=849 status=ok
// SIG undefined FUN_1409ed640(void)

ulonglong FUN_1409ed640(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18;
  undefined4 local_res1c;
  wchar_t *local_38;
  undefined8 local_30;
  
  uVar4 = FOpenXRHMD::IsStereoEnabled();
  if (((((char)uVar4 == '\0') || (plVar1 = *(longlong **)(param_2 + 8), plVar1 == (longlong *)0x0))
      || (lVar7 = *(longlong *)(param_2 + 4), lVar7 == 0)) ||
     (uVar4 = (ulonglong)~*(uint *)((longlong)param_1 + 0x2d4),
     (*param_2 & 1 << (*(byte *)(lVar7 + 0xa0) & 0x1f) & ~*(uint *)((longlong)param_1 + 0x2d4)) == 0
     )) goto LAB_1409ed978;
  if (*(char *)(lVar7 + 0xe0) == '\0') {
    uVar5 = UThrobber::GetPrivateStaticClass();
    lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
    if (((lVar6 != 0) &&
        (uVar4 = (**(code **)(*(longlong *)(lVar6 + 0x178) + 0x28))
                           ((longlong *)(lVar6 + 0x178),lVar7 + 0xe8), (char)uVar4 != '\0')) ||
       ((*(longlong *)(lVar7 + 0x108) != 0 &&
        (uVar4 = FUN_142c48f60(*(longlong *)(lVar7 + 0x108),plVar1,0), (char)uVar4 != '\0'))))
    goto LAB_1409ed978;
    lVar6 = FUN_1413f82e0();
    iVar3 = *(int *)(lVar6 + 0x90);
    uVar4 = (longlong)iVar3;
    if ((*(int *)(plVar1[2] + 0x90) < iVar3) ||
       (uVar4 = *(ulonglong *)(plVar1[2] + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar3 * 8) != lVar6 + 0x88)) {
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((((char)uVar4 == '\0') ||
        (uVar4 = (**(code **)(*plVar1 + 0x950))(plVar1), (char)uVar4 != '\0')) ||
       ((*(char *)(lVar7 + 0xe1) != '\0' && (uVar4 = FUN_142ceefa0(plVar1), uVar4 != 0))))
    goto LAB_1409ed978;
  }
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar7 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 8);
    local_38 = (wchar_t *)0x0;
    local_30 = 0;
    if (*(float *)(lVar7 + 0x790) - *(float *)(param_1 + 0x5e) <
        *(float *)((longlong)param_1 + 0x2ec)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,0x1d);
      iVar3 = (int)local_30 + 0x1d;
      local_30 = CONCAT44(local_30._4_4_,iVar3);
      if (local_30._4_4_ < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
      }
      builtin_wcsncpy(local_38,L"Effect is still on cooldown.",0x1d);
LAB_1409ed96e:
      uVar4 = 0;
      if (local_38 != (wchar_t *)0x0) {
        uVar4 = FMemory::Free();
      }
LAB_1409ed978:
      return uVar4 & 0xffffffffffffff00;
    }
    if (*(char *)((longlong)param_1 + 0x2f4) != '\0') {
      lVar8 = param_1[0x5f];
      lVar6 = lVar8 + (longlong)(int)param_1[0x60] * 8;
      if (lVar8 != lVar6) {
        do {
          cVar2 = FUN_14058c1e0(lVar8,uVar5);
          if (cVar2 != '\0') {
            local_30 = local_30 & 0xffffffff00000000;
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,0x41);
            iVar3 = (int)local_30 + 0x41;
            local_30 = CONCAT44(local_30._4_4_,iVar3);
            if (local_30._4_4_ < iVar3) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
            }
            builtin_wcsncpy(local_38,
                            L"Actor has already been affected by single-use per target effect.",0x41
                           );
            goto LAB_1409ed96e;
          }
          lVar8 = lVar8 + 8;
        } while (lVar8 != lVar6);
        uVar5 = *(undefined8 *)(param_2 + 8);
      }
    }
    *(int *)(param_1 + 0x5d) = (int)param_1[0x5d] + 1;
    *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(lVar7 + 0x790);
    if (*(char *)((longlong)param_1 + 0x2f4) != '\0') {
      FWeakObjectPtr::operator=(&local_res18,uVar5);
      iVar3 = (int)param_1[0x60];
      *(int *)(param_1 + 0x60) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x304) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x5f,iVar3);
      }
      lVar7 = param_1[0x5f];
      *(undefined4 *)(lVar7 + (longlong)iVar3 * 8) = local_res18;
      *(undefined4 *)(lVar7 + 4 + (longlong)iVar3 * 8) = local_res1c;
    }
  }
  uVar4 = FUN_1413e21f0(param_1,param_2);
  return uVar4;
}



// FUNCTION 1409ed9a0 FUN_1409ed9a0 body=231 status=ok
// SIG undefined FUN_1409ed9a0(void)

undefined8 FUN_1409ed9a0(longlong param_1,float param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(float *)(param_1 + 0x4d0) = *(float *)(param_1 + 0x4d0) - param_2;
  cVar2 = FUN_142c73840(lVar1 + 0xe8);
  if (((cVar2 == '\0') || (0.0 < *(float *)(param_1 + 0x4d0) || *(float *)(param_1 + 0x4d0) == 0.0))
     || (*(float *)(param_1 + 0x4e4) < *(float *)(param_1 + 0x4d4) ||
         *(float *)(param_1 + 0x4e4) == *(float *)(param_1 + 0x4d4))) {
    uVar3 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x468) = 2;
    FUN_1409e08d0(param_1,lVar1 + 0xe8,0);
    local_res8 = 0xffffffffffffffff;
    fVar4 = (float)FUN_142de77e0(lVar1 + 0x590,param_3,0,&local_res8);
    *(float *)(param_1 + 0x4e8) = (float)((int)ROUND(fVar4 * 2.0 + 0.5) >> 1);
    FUN_142c76980(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1409eda90 FUN_1409eda90 body=98 status=ok
// SIG undefined FUN_1409eda90(void)

undefined8 FUN_1409eda90(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x298))();
  if (cVar1 != '\0') {
    lVar3 = param_1[0x1b] + *(longlong *)(param_2 + 8);
    cVar1 = FWeakObjectPtr::IsValid(lVar3 + 0x50);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(lVar3 + 0x50);
      FUN_140c5b130(uVar2,0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1409edb00 FUN_1409edb00 body=594 status=ok
// SIG undefined FUN_1409edb00(void)

undefined8 FUN_1409edb00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  char cVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *local_258;
  undefined8 local_250;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_238 [32];
  undefined8 *local_218;
  int local_210;
  int local_20c;
  undefined1 local_168 [56];
  undefined1 local_130 [56];
  undefined1 local_f8 [208];
  
  cVar11 = (**(code **)(*param_1 + 0x298))();
  if (cVar11 != '\0') {
    lVar5 = *(longlong *)(*param_2 + 0x648);
    if (lVar5 != 0) {
      lVar12 = param_1[0x1b];
      lVar6 = param_2[1];
      FUN_142c62180(local_238);
      lVar12 = FWeakObjectPtr::Get(lVar12 + lVar6 + 0x58);
      uVar13 = FWeakObjectPtr::Get();
      uVar4 = *(undefined4 *)(lVar12 + 0x6c8);
      local_250 = 1;
      local_258 = (undefined8 *)0x0;
      puVar14 = (undefined8 *)FUN_142c625b0(local_168,&DAT_1468651c8,uVar13);
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_258,0);
      puVar18 = local_258;
      uVar13 = puVar14[1];
      *local_258 = *puVar14;
      local_258[1] = uVar13;
      uVar13 = puVar14[3];
      local_258[2] = puVar14[2];
      local_258[3] = uVar13;
      uVar7 = *(undefined4 *)((longlong)puVar14 + 0x24);
      uVar8 = *(undefined4 *)(puVar14 + 5);
      uVar9 = *(undefined4 *)((longlong)puVar14 + 0x2c);
      *(undefined4 *)(local_258 + 4) = *(undefined4 *)(puVar14 + 4);
      *(undefined4 *)((longlong)local_258 + 0x24) = uVar7;
      *(undefined4 *)(local_258 + 5) = uVar8;
      *(undefined4 *)((longlong)local_258 + 0x2c) = uVar9;
      local_258[6] = puVar14[6];
      puVar14 = (undefined8 *)FUN_142c62570(local_130,&DAT_1468651d0,uVar4);
      lVar12 = (longlong)(int)local_250;
      iVar17 = (int)local_250 + 1;
      if (local_250._4_4_ < iVar17) {
        uVar16 = local_250 & 0xffffffff;
        local_250._0_4_ = iVar17;
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_258,uVar16);
        puVar18 = local_258;
        iVar17 = (int)local_250;
      }
      local_250._0_4_ = iVar17;
      iVar10 = local_250._4_4_;
      iVar17 = (int)local_250;
      uVar13 = puVar14[1];
      puVar18[lVar12 * 7] = *puVar14;
      (puVar18 + lVar12 * 7)[1] = uVar13;
      uVar13 = puVar14[3];
      puVar18[lVar12 * 7 + 2] = puVar14[2];
      (puVar18 + lVar12 * 7 + 2)[1] = uVar13;
      uVar4 = *(undefined4 *)((longlong)puVar14 + 0x24);
      uVar7 = *(undefined4 *)(puVar14 + 5);
      uVar8 = *(undefined4 *)((longlong)puVar14 + 0x2c);
      puVar3 = puVar18 + lVar12 * 7 + 4;
      *(undefined4 *)puVar3 = *(undefined4 *)(puVar14 + 4);
      *(undefined4 *)((longlong)puVar3 + 4) = uVar4;
      *(undefined4 *)(puVar3 + 1) = uVar7;
      *(undefined4 *)((longlong)puVar3 + 0xc) = uVar8;
      puVar18[lVar12 * 7 + 6] = puVar14[6];
      if (local_218 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      local_218 = puVar18;
      local_210 = iVar17;
      local_20c = iVar10;
      if (param_1[0x2b] != 0) {
        lVar15 = UProgressBar::GetPrivateStaticClass();
        lVar12 = param_1[0x2b];
        for (lVar6 = lVar12; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
          if (lVar6 == lVar15) goto LAB_1409edcc1;
        }
      }
      lVar12 = 0;
LAB_1409edcc1:
      uVar13 = FUN_1405e0fd0(local_f8,local_238);
      FUN_142c7bb40(lVar5,local_248,lVar12,uVar13,0);
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_240 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar2 = (int *)((longlong)local_240 + 0xc);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_240 + 8))(local_240,1);
          }
        }
      }
      FUN_142c63c50(local_238);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1409edd60 FUN_1409edd60 body=161 status=ok
// SIG undefined FUN_1409edd60(void)

undefined8 FUN_1409edd60(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1409e3da0();
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0xec0) == '\x03') {
      cVar1 = FUN_1409da4a0(param_1,param_2,lVar2);
      if (cVar1 != '\0') {
        (**(code **)(**(longlong **)(lVar2 + 0x10e0) + 0x410))
                  (*(longlong **)(lVar2 + 0x10e0),*param_2,0);
      }
      FWeakObjectPtr::operator=(*(longlong *)(param_1 + 0xd8) + param_2[1] + 0x48,lVar2);
      return 1;
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + param_2[1]) = 1;
  }
  return 0;
}



// FUNCTION 1409ede10 FUN_1409ede10 body=158 status=ok
// SIG undefined FUN_1409ede10(void)

undefined8 FUN_1409ede10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 local_res8;
  
  uVar2 = (**(code **)(*param_1 + 0x298))();
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  uVar2 = FWeakObjectPtr::Get(param_2[1] + 0x48 + param_1[0x1b]);
  local_res8 = *(undefined8 *)(*param_2 + 0x568);
  fVar3 = (float)FUN_142de77e0(param_1 + 0x20,*param_2,0,&local_res8);
  FUN_1409f8220(uVar2,1,0.5 <= fVar3);
  lVar1 = param_1[0x1b];
  *(undefined1 *)(param_2[1] + 0x29 + lVar1) = 1;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 1409edeb0 FUN_1409edeb0 body=405 status=ok
// SIG undefined FUN_1409edeb0(void)

char FUN_1409edeb0(longlong param_1,longlong *param_2,char param_3)

{
  float *pfVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  float fVar11;
  longlong local_res8;
  
  lVar10 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  *(undefined4 *)(lVar10 + 0x50) = 0xffffffff;
  if (param_3 != '\0') {
    return param_3;
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar6 = UDamageableInterface::GetPrivateStaticClass();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar6);
    if ((plVar7 != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*plVar7 + 0x18))(plVar7), cVar4 != '\0')) {
      bVar3 = true;
      if (*(longlong *)(*param_2 + 0x5e8) != 0) {
        pfVar1 = (float *)(*(longlong *)(*param_2 + 0x5e8) + 0xe78c);
        bVar3 = true;
        if (*pfVar1 <= 0.0001 && *pfVar1 != 0.0001) {
          bVar3 = false;
        }
      }
      plVar7 = *(longlong **)(param_1 + 0x148);
      local_res8 = DAT_146865290;
      for (plVar9 = plVar7; plVar9 != plVar7 + *(int *)(param_1 + 0x150); plVar9 = plVar9 + 1) {
        if ((*plVar9 != 0) && (*(longlong *)(*plVar9 + 0x18) == DAT_146865290)) {
          iVar8 = (int)((longlong)plVar9 - (longlong)plVar7 >> 3);
          if (iVar8 == -1) {
            return '\x01';
          }
          lVar2 = plVar7[iVar8];
          if (lVar2 == 0) {
            return '\x01';
          }
          if (!bVar3) {
            return '\x01';
          }
          if (*(char *)(lVar10 + 0x58) != '\0') {
            return '\x01';
          }
          cVar4 = FUN_1406de170(lVar2,param_2);
          if (cVar4 == '\0') {
            return '\x01';
          }
          iVar5 = rand();
          local_res8 = -1;
          fVar11 = (float)FUN_142de77e0(param_1 + 0x160,*param_2,0,&local_res8);
          if (fVar11 < (float)iVar5 * 3.051851e-05) {
            return '\x01';
          }
          cVar4 = FUN_1406f70d0(lVar2,param_2,param_1);
          if (cVar4 == '\0') {
            return '\x01';
          }
          *(int *)(lVar10 + 0x50) = iVar8;
          *(undefined1 *)(lVar10 + 0x58) = 1;
          return '\0';
        }
      }
    }
  }
  return '\x01';
}



// FUNCTION 1409ee050 FUN_1409ee050 body=496 status=ok
// SIG undefined FUN_1409ee050(void)

void FUN_1409ee050(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
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
  
  if (*(char *)(param_1 + 0x823) == '\0') {
    lVar4 = *(longlong *)(param_1 + 2000);
    *(undefined1 *)(param_1 + 0x823) = 1;
    if ((lVar4 != 0) && ((*(byte *)(param_1 + 0x800) & 8) != 0)) {
      plVar1 = (longlong *)(lVar4 + 0x510);
      iVar2 = *(int *)(lVar4 + 0x538);
      puStack_28 = (uint *)(lVar4 + 0x520);
      local_78 = 0;
      uStack_74 = 1;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      if (iVar2 != 0) {
        puVar9 = *(uint **)(lVar4 + 0x530);
        if (*(uint **)(lVar4 + 0x530) == (uint *)0x0) {
          puVar9 = puStack_28;
        }
        uVar3 = *puVar9;
        uStack_60 = 0;
        local_78 = 0;
        while (uVar3 == 0) {
          lVar8 = (longlong)local_78;
          uStack_60 = uStack_60 + 0x20;
          iVar7 = local_78 + 1;
          bVar6 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
          local_78 = iVar7;
          if (bVar6) goto LAB_1409ee14f;
          uVar3 = puVar9[lVar8 + 1];
        }
        uStack_74 = -uVar3 & uVar3;
        iVar7 = 0x1f;
        if (uStack_74 != 0) {
          for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uStack_74 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        local_68._4_4_ = (uStack_60 - iVar7) + 0x1f;
        if (iVar2 < local_68._4_4_) {
LAB_1409ee14f:
          local_68._4_4_ = iVar2;
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
      bVar6 = local_68._4_4_ < *(int *)(lVar4 + 0x538);
      local_48 = plVar1;
      local_38 = plVar1;
      local_10 = plVar1;
      local_68 = puStack_28;
      if (bVar6) {
        do {
          plVar5 = *(longlong **)((longlong)iStack_5c * 0x40 + *plVar1);
          (**(code **)(*plVar5 + 0x2f8))
                    (plVar5,param_1 + 0x558,*plVar1 + 8 + (longlong)iStack_5c * 0x40);
          uStack_60 = uStack_60 & ~uStack_6c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
        } while (iStack_5c < (int)local_68[6]);
        if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
          TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
        }
      }
      FUN_1409c8b20(param_1,param_1 + 0x7b8);
    }
  }
  return;
}



// FUNCTION 1409ee240 FUN_1409ee240 body=496 status=ok
// SIG undefined FUN_1409ee240(void)

void FUN_1409ee240(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
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
  
  if (*(char *)(param_1 + 0x822) == '\0') {
    lVar4 = *(longlong *)(param_1 + 2000);
    *(undefined1 *)(param_1 + 0x822) = 1;
    if ((lVar4 != 0) && ((*(byte *)(param_1 + 0x800) & 8) != 0)) {
      plVar1 = (longlong *)(lVar4 + 0x510);
      iVar2 = *(int *)(lVar4 + 0x538);
      puStack_28 = (uint *)(lVar4 + 0x520);
      local_78 = 0;
      uStack_74 = 1;
      local_68._4_4_ = 0;
      uStack_60 = 0;
      if (iVar2 != 0) {
        puVar9 = *(uint **)(lVar4 + 0x530);
        if (*(uint **)(lVar4 + 0x530) == (uint *)0x0) {
          puVar9 = puStack_28;
        }
        uVar3 = *puVar9;
        uStack_60 = 0;
        local_78 = 0;
        while (uVar3 == 0) {
          lVar8 = (longlong)local_78;
          uStack_60 = uStack_60 + 0x20;
          iVar7 = local_78 + 1;
          bVar6 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
          local_78 = iVar7;
          if (bVar6) goto LAB_1409ee33f;
          uVar3 = puVar9[lVar8 + 1];
        }
        uStack_74 = -uVar3 & uVar3;
        iVar7 = 0x1f;
        if (uStack_74 != 0) {
          for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uStack_74 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        local_68._4_4_ = (uStack_60 - iVar7) + 0x1f;
        if (iVar2 < local_68._4_4_) {
LAB_1409ee33f:
          local_68._4_4_ = iVar2;
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
      bVar6 = local_68._4_4_ < *(int *)(lVar4 + 0x538);
      local_48 = plVar1;
      local_38 = plVar1;
      local_10 = plVar1;
      local_68 = puStack_28;
      if (bVar6) {
        do {
          plVar5 = *(longlong **)((longlong)iStack_5c * 0x40 + *plVar1);
          (**(code **)(*plVar5 + 0x2f0))
                    (plVar5,param_1 + 0x558,*plVar1 + 8 + (longlong)iStack_5c * 0x40);
          uStack_60 = uStack_60 & ~uStack_6c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
        } while (iStack_5c < (int)local_68[6]);
        if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
          TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
        }
      }
      FUN_1409c8b20(param_1,param_1 + 0x7a0);
    }
  }
  return;
}



// FUNCTION 1409ee430 FUN_1409ee430 body=98 status=ok
// SIG undefined FUN_1409ee430(void)

void FUN_1409ee430(longlong param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_142398ec0(*(undefined8 *)(param_1 + 0x468),0,1);
  FUN_142398ec0(*(undefined8 *)(param_1 + 0x460),0,1);
  local_18 = *(undefined8 *)(param_1 + 0x480);
  local_10 = *(undefined4 *)(param_1 + 0x488);
  AActor::SetActorRotation(param_1,&local_18,0);
  AActor::SetActorTickEnabled(param_1,0);
  return;
}



// FUNCTION 1409ee4a0 FUN_1409ee4a0 body=62 status=ok
// SIG undefined FUN_1409ee4a0(void)

void FUN_1409ee4a0(longlong param_1)

{
  FUN_142398ec0(*(undefined8 *)(param_1 + 0x468),1);
  FUN_142398ec0(*(undefined8 *)(param_1 + 0x460),1);
  AActor::SetActorTickEnabled(param_1,1);
  return;
}



// FUNCTION 1409ee4e0 FUN_1409ee4e0 body=289 status=ok
// SIG undefined FUN_1409ee4e0(void)

void FUN_1409ee4e0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x500);
  if ((uVar1 & 4) != 0) {
    FUN_1409e4840(param_1,0);
    uVar1 = *(uint *)(param_1 + 0x500);
  }
  if ((uVar1 & 8) != 0) {
    FUN_1409e51f0(param_1,0);
    uVar1 = *(uint *)(param_1 + 0x500);
  }
  if ((uVar1 & 0x10) != 0) {
    FUN_1409e4770(param_1,0);
  }
  if (*(int *)(param_1 + 0x4fc) != 0) {
    FUN_1409e4910(param_1,0);
  }
  uVar1 = *(uint *)(param_1 + 0x500);
  if ((uVar1 & 1) != 0) {
    FUN_1409e5640(param_1,0);
    uVar1 = *(uint *)(param_1 + 0x500);
  }
  if ((uVar1 & 2) != 0) {
    FUN_1409e5560(param_1,0);
    uVar1 = *(uint *)(param_1 + 0x500);
  }
  if ((char)uVar1 < '\0') {
    FUN_1409e4630(param_1,0);
    uVar1 = *(uint *)(param_1 + 0x500);
  }
  if ((uVar1 >> 8 & 1) != 0) {
    FUN_1409e5440(param_1,0);
    uVar1 = *(uint *)(param_1 + 0x500);
  }
  if ((uVar1 & 0x20) != 0) {
    FUN_1409e4f10(param_1,0);
    uVar1 = *(uint *)(param_1 + 0x500);
  }
  if ((uVar1 & 0x40) != 0) {
    FUN_1409e4f80(param_1,0);
    uVar1 = *(uint *)(param_1 + 0x500);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    FUN_1409e5330(param_1,0);
    uVar1 = *(uint *)(param_1 + 0x500);
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    FUN_1409e46c0(param_1,0);
    uVar1 = *(uint *)(param_1 + 0x500);
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    FUN_1409e4dd0(param_1,0);
  }
  FUN_142c87470(param_1);
  return;
}



// FUNCTION 1409ee610 FUN_1409ee610 body=551 status=ok
// SIG undefined FUN_1409ee610(void)

longlong * FUN_1409ee610(longlong *param_1,longlong *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == (longlong *)0x0) {
    return param_1;
  }
  lVar6 = param_2[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*param_2 + 0x368))(param_2);
    lVar6 = param_2[0x1f];
    if (lVar6 == 0) {
      return param_1;
    }
  }
  lVar5 = *(longlong *)(lVar6 + 0x260);
  if (((int)*param_3 < 1) || (iVar2 = ((int)*param_3 + -1) / 100, lVar5 == 0)) {
LAB_1409ee6f7:
    lVar5 = 0;
  }
  else {
    if ((iVar2 < 0) || (*(int *)(lVar5 + 0x70) <= iVar2)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) ||
       (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x68) + (longlong)iVar2 * 8), lVar5 == 0))
    goto LAB_1409ee6f7;
    lVar4 = FUN_1413e07a0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1409ee6f7;
  }
  fVar1 = param_3[1];
  lVar4 = *(longlong *)(lVar6 + 0x268);
  *param_1 = lVar5;
  if (((int)fVar1 < 1) || (iVar2 = ((int)fVar1 + -1) / 100, lVar4 == 0)) {
LAB_1409ee77e:
    lVar5 = 0;
  }
  else {
    if ((iVar2 < 0) || (*(int *)(lVar4 + 0x70) <= iVar2)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) ||
       (lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x68) + (longlong)iVar2 * 8), lVar5 == 0))
    goto LAB_1409ee77e;
    lVar4 = FUN_1413e0900();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1409ee77e;
  }
  fVar1 = param_3[2];
  lVar6 = *(longlong *)(lVar6 + 0x270);
  param_1[1] = lVar5;
  if ((0 < (int)fVar1) && (iVar2 = ((int)fVar1 + -1) / 100, lVar6 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar6 + 0x70) <= iVar2)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x68) + (longlong)iVar2 * 8), lVar6 != 0)) {
      lVar5 = FUN_1413e0850();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_1409ee808;
    }
  }
  lVar6 = 0;
LAB_1409ee808:
  param_1[2] = lVar6;
  return param_1;
}



// FUNCTION 1409ee840 FUN_1409ee840 body=77 status=ok
// SIG undefined FUN_1409ee840(void)

void FUN_1409ee840(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x821) != '\0') {
    *(undefined1 *)(param_1 + 0x821) = 0;
    lVar1 = FUN_1409d4c70();
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0xe80);
    }
    if (lVar1 != 0) {
      FUN_140a9b1e0(lVar1,*(undefined8 *)(param_1 + 0x808),param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1409ee890 FUN_1409ee890 body=583 status=ok
// SIG undefined FUN_1409ee890(void)

void FUN_1409ee890(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 local_res10;
  
  if (param_2 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x7f0);
    if (*(int *)(param_1 + 0x7f0) != 0) {
      iVar9 = 0;
      bVar10 = **(longlong **)(param_1 + 0x7e8) != param_2;
      lVar6 = 0;
      iVar7 = 0;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar7 + 1;
        if (lVar6 < lVar4) {
          plVar5 = (longlong *)(*(longlong *)(param_1 + 0x7e8) + lVar6 * 8);
          do {
            if (bVar10 != (*plVar5 != param_2)) break;
            iVar8 = iVar8 + 1;
            lVar6 = lVar6 + 1;
            plVar5 = plVar5 + 1;
          } while (lVar6 < lVar4);
        }
        if (bVar10 != false) {
          if (iVar9 != iVar7) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x7e8) + (longlong)iVar9 * 8),
                       (void *)(*(longlong *)(param_1 + 0x7e8) + (longlong)iVar7 * 8),
                       (longlong)(iVar8 - iVar7) << 3);
          }
          iVar9 = iVar9 + (iVar8 - iVar7);
        }
        bVar10 = (bool)(bVar10 ^ 1);
        iVar7 = iVar8;
      } while (lVar6 < lVar4);
      *(int *)(param_1 + 0x7f0) = iVar9;
    }
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AOperativeBarrier::HandleProjectileOverlap",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res10,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0x570,param_1,local_res10);
    if ((*(byte *)(param_1 + 0x800) & 0x20) != 0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop
                         (L"&AOperativeBarrier::NotifyActorComponentBeginOverlap",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res10,pwVar2 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0x570,param_1,local_res10);
      pwVar3 = _guard_xfg_dispatch_icall_nop
                         (L"&AOperativeBarrier::NotifyActorComponentEndOverlap",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res10,pwVar2 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0x580,param_1,local_res10);
      if (param_2 == *(longlong *)(param_1 + 0x768)) {
        *(undefined8 *)(param_1 + 0x768) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1409eeae0 FUN_1409eeae0 body=7 status=ok
// SIG undefined FUN_1409eeae0(void)

void FUN_1409eeae0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001409eeae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



// FUNCTION 1409eeaf0 FUN_1409eeaf0 body=63 status=ok
// SIG undefined FUN_1409eeaf0(void)

void FUN_1409eeaf0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_14141c390();
  if (cVar1 == '\0') {
    FUN_1409d9fb0(param_1,0);
    lVar2 = FUN_14141c240(param_1);
    if (lVar2 != 0) {
      FUN_1409d9fb0(param_1,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1409eeb30 FUN_1409eeb30 body=489 status=ok
// SIG undefined FUN_1409eeb30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409eeb30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1409d4b60(param_1,&local_b8,*(undefined8 *)(param_2 + 0x28),param_2 + 0x30);
    uVar4 = FWeakObjectPtr::Get(param_2 + 0x38);
    FUN_1409d4b60(param_1,&local_98,uVar4,param_2 + 0x40);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x168);
    if (lVar1 == 0) {
      uVar6 = (undefined4)DAT_1468b5da0;
      uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_c0 = DAT_1468b5da8;
    }
    else {
      local_88 = *(float *)(lVar1 + 0x210);
      fStack_84 = *(float *)(lVar1 + 0x214);
      fStack_80 = *(float *)(lVar1 + 0x218);
      fStack_7c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_84);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_88);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_80);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_7c);
      iVar3 = movmskps((int)*(longlong *)(param_1 + 0xb0),auVar2);
      if (iVar3 != 0) {
        *(float *)(lVar1 + 0x250) = local_88;
        *(float *)(lVar1 + 0x254) = fStack_84;
        *(float *)(lVar1 + 600) = fStack_80;
        *(float *)(lVar1 + 0x25c) = fStack_7c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_88,local_78);
        *(undefined8 *)(lVar1 + 0x260) = *puVar5;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      uVar6 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      local_c0 = *(undefined4 *)(lVar1 + 0x268);
    }
    local_c8 = CONCAT44(uVar7,uVar6);
    local_a8 = local_c8;
    uStack_a0 = local_c0;
    FRotator::Quaternion(&local_c8,&local_a8);
    uStack_60 = CONCAT44(uStack_9c,uStack_a0);
    local_58._4_4_ = local_b4;
    local_58._0_4_ = local_b8;
    local_68 = local_a8;
    local_58._8_4_ = local_b0;
    local_58._12_4_ = 0;
    local_48._4_4_ = DAT_1464aa788._4_4_;
    local_48._0_4_ = (undefined4)DAT_1464aa788;
    local_48._8_4_ = DAT_1464aa790;
    local_48._12_4_ = 0;
    local_d8 = 0;
    FUN_142399d60(*(undefined8 *)(param_2 + 0x48),&local_68,0,0);
    local_c0 = local_b0;
    (**(code **)(**(longlong **)(param_2 + 0x48) + 0x8f0))
              (*(longlong **)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x18),&local_c8,0);
    local_c0 = local_90;
    local_c8 = local_98;
    (**(code **)(**(longlong **)(param_2 + 0x48) + 0x908))
              (*(longlong **)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x18),&local_c8,0);
  }
  return;
}



// FUNCTION 1409eed20 FUN_1409eed20 body=95 status=ok
// SIG undefined FUN_1409eed20(void)

void FUN_1409eed20(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FUN_142cd0820(param_1 + 0x478,*(longlong *)(param_1 + 0x498),param_2);
    local_18 = *param_3;
    local_10 = *(undefined4 *)(param_3 + 1);
    FUN_142cd0df0(param_1 + 0x488,*(undefined8 *)(param_1 + 0x498),&local_18);
  }
  return;
}



// FUNCTION 1409eed80 FUN_1409eed80 body=294 status=ok
// SIG undefined FUN_1409eed80(void)

void FUN_1409eed80(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined1 local_18 [16];
  
  lVar5 = FUN_1409d7110();
  if (lVar5 != 0) {
    FUN_1409e34b0(param_1);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0xa58);
    if (lVar5 != 0) {
      *(undefined8 *)(param_1 + 0xa68) = *(undefined8 *)(param_1 + 0xa28);
      lVar6 = FUN_1413f82e0();
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
        uVar8 = *(undefined8 *)(lVar5 + 0x4c0);
      }
      else {
        lVar6 = FUN_1430e5840();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          uVar8 = *(undefined8 *)(lVar5 + 0x4d0);
        }
        else {
          uVar8 = 0;
        }
      }
      *(undefined8 *)(param_1 + 0xa78) = uVar8;
      *(undefined8 *)(param_1 + 0xa80) = *(undefined8 *)(param_1 + 0xa30);
      *(longlong *)(param_1 + 0xa70) = lVar5;
      puVar7 = (undefined4 *)FGuid::NewGuid(local_18);
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      uVar3 = puVar7[3];
      *(undefined4 *)(param_1 + 0xa98) = *puVar7;
      *(undefined4 *)(param_1 + 0xa9c) = uVar1;
      *(undefined4 *)(param_1 + 0xaa0) = uVar2;
      *(undefined4 *)(param_1 + 0xaa4) = uVar3;
      uVar8 = FUN_1409d7110(param_1);
      FUN_140c331b0(uVar8,param_1 + 0xa68);
    }
  }
  return;
}



// FUNCTION 1409eeeb0 FUN_1409eeeb0 body=401 status=ok
// SIG undefined FUN_1409eeeb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409eeeb0(ulonglong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_28 [2];
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_1[5] != 0) {
    FUN_1409d2900(param_1,local_28,param_1 + 9);
    iVar3 = FUN_14233f450(param_1[5]);
    if (iVar3 == 3) {
      puVar4 = (ulonglong *)FUN_1409d2900(param_1,&local_48,param_1 + 7);
      if ((puVar4 == &local_68) || ((char)puVar4[2] == '\0')) {
        local_68 = local_68 & 0xffffffffffffff00;
        uStack_60 = 0;
      }
      else {
        local_68 = *puVar4;
        uStack_60 = puVar4[1];
      }
      local_48 = (undefined4)local_68;
      uStack_44 = local_68._4_4_;
      uStack_40 = (undefined4)uStack_60;
      uStack_3c = uStack_60._4_4_;
      if (((char)*param_1 != (char)local_68) || (param_1[1] != uStack_60)) {
        *(undefined4 *)param_1 = (undefined4)local_68;
        *(undefined4 *)((longlong)param_1 + 4) = local_68._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
        if ((longlong *)param_1[5] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[5] + 0x260))();
        }
      }
    }
    puVar4 = local_28;
    if (local_18 == '\0') {
      puVar4 = param_1;
    }
    local_68 = *puVar4;
    uStack_60 = puVar4[1];
    if ((((param_1[5] == 0) || (lVar5 = FUN_140e50630(), lVar5 == 0)) ||
        (cVar2 = UKeyLabel::GetDisplayNameVisibility_Implementation(lVar5), cVar2 != '\0')) ||
       (2 < *(byte *)(lVar5 + 0xec0))) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (char)local_68;
    }
    if (param_1[5] != 0) {
      if (param_1[4] != uStack_60) {
        param_1[4] = uStack_60;
        FUN_140e835f0();
      }
      uVar1 = param_1[3];
      if ((char)uVar1 != cVar2) {
        *(char *)(param_1 + 3) = cVar2;
        FUN_140e83610(param_1[5],(char)uVar1,cVar2);
      }
      if ((char)param_1[6] != (char)param_1[2]) {
        *(char *)(param_1 + 6) = (char)param_1[2];
        UAbilityOverviewWidget::OnAbilityUsed(param_1[5]);
      }
      if (*(char *)((longlong)param_1 + 0x31) != *(char *)((longlong)param_1 + 0x11)) {
        *(char *)((longlong)param_1 + 0x31) = *(char *)((longlong)param_1 + 0x11);
        UAbilityOverviewWidget::OnAbilityUsed(param_1[5]);
      }
    }
  }
  return;
}



// FUNCTION 1409ef050 FUN_1409ef050 body=810 status=ok
// SIG undefined FUN_1409ef050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1409ef050(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  undefined1 local_1b8 [96];
  undefined1 local_158 [288];
  ulonglong uVar11;
  
  if (*(longlong *)(*param_2 + 0x488) == 0) {
    return 0;
  }
  lVar13 = *(longlong *)(*(longlong *)(*param_2 + 0x488) + 0x168);
  if (lVar13 == 0) {
    local_1d8 = _DAT_1468b5d90;
    local_1d0 = DAT_1468b5d98;
  }
  else {
    local_1d8 = *(undefined8 *)(lVar13 + 0x220);
    local_1d0 = *(float *)(lVar13 + 0x228);
  }
  lVar13 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  uVar8 = 0;
  local_1c8 = local_1d8;
  iVar2 = *(int *)(lVar13 + 0x80);
  local_1c0 = local_1d0;
  iVar15 = 0;
  if (iVar2 != 0) {
    cVar6 = FWeakObjectPtr::IsValid(*(undefined8 *)(lVar13 + 0x78));
    bVar17 = cVar6 != '\0';
    uVar11 = uVar8;
    uVar16 = uVar8;
    do {
      uVar9 = (uint)uVar11;
      uVar10 = uVar9;
      do {
        uVar10 = uVar10 + 1;
        uVar11 = (ulonglong)uVar10;
        if (iVar2 <= (int)uVar10) break;
        cVar6 = FWeakObjectPtr::IsValid(*(longlong *)(lVar13 + 0x78) + (longlong)(int)uVar10 * 8);
      } while (bVar17 == (cVar6 != '\0'));
      if (bVar17 != false) {
        uVar14 = (uint)uVar16;
        if (uVar14 != uVar9) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar13 + 0x78) + (longlong)(int)uVar14 * 8),
                     (void *)(*(longlong *)(lVar13 + 0x78) + (longlong)(int)uVar9 * 8),
                     (longlong)(int)(uVar10 - uVar9) << 3);
        }
        uVar16 = (ulonglong)(uVar14 + (uVar10 - uVar9));
      }
      bVar17 = (bool)(bVar17 ^ 1);
    } while ((int)uVar10 < iVar2);
    iVar15 = (int)uVar16;
    *(int *)(lVar13 + 0x80) = iVar15;
  }
  fVar5 = local_1c0;
  lVar12 = *(longlong *)(lVar13 + 0x78);
  fVar21 = 3.4028235e+38;
  lVar1 = lVar12 + (longlong)iVar15 * 8;
  if (lVar12 != lVar1) {
    fVar4 = local_1c8._4_4_;
    fVar3 = (float)local_1c8;
    do {
      lVar7 = FWeakObjectPtr::Get(lVar12);
      fVar18 = *(float *)(lVar7 + 0x220) - fVar3;
      fVar20 = *(float *)(lVar7 + 0x224) - fVar4;
      fVar19 = *(float *)(lVar7 + 0x228) - fVar5;
      fVar18 = fVar20 * fVar20 + fVar18 * fVar18 + fVar19 * fVar19;
      if (fVar18 < fVar21) {
        uVar8 = FWeakObjectPtr::Get(lVar12);
        fVar21 = fVar18;
      }
      lVar12 = lVar12 + 8;
    } while (lVar12 != lVar1);
  }
  FWeakObjectPtr::operator=(lVar13 + 0x60,uVar8);
  if ((*(char *)(param_1 + 0x248) != '\0') && (uVar8 != 0)) {
    FUN_1409d3270(param_1,&local_1d8,&local_1c8,uVar8);
    FUN_142f89470(local_1b8,&local_1d8);
    FUN_142f89220(local_158,local_1b8);
    cVar6 = FUN_140712ec0(param_1,param_2,local_158);
    FUN_142f8b770(local_158);
    if (cVar6 != '\0') {
      *(undefined8 *)(lVar13 + 0x68) = local_1d8;
      *(float *)(lVar13 + 0x70) = local_1d0;
    }
  }
  return uVar8;
}



// FUNCTION 1409ef380 FUN_1409ef380 body=320 status=ok
// SIG undefined FUN_1409ef380(void)

ulonglong FUN_1409ef380(longlong param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0xd8);
  lVar5 = param_2[1];
  bVar1 = true;
  if (((DAT_146294670 != *(float *)(lVar5 + 0x68 + lVar2)) ||
      (DAT_146294674 != *(float *)(lVar5 + 0x6c + lVar2))) ||
     (DAT_146294678 != *(float *)(lVar5 + 0x70 + lVar2))) {
    bVar1 = false;
    *(ulonglong *)(lVar5 + 0x68 + lVar2) = CONCAT44(DAT_146294674,DAT_146294670);
    *(float *)(lVar5 + 0x70 + lVar2) = DAT_146294678;
    lVar2 = *(longlong *)(param_1 + 0xd8);
    lVar5 = param_2[1];
  }
  lVar2 = FWeakObjectPtr::Get(lVar5 + 0x60 + lVar2);
  lVar5 = 0;
  if (lVar2 != 0) {
    if (bVar1) {
      FUN_14076de60(lVar2,*(undefined8 *)(*param_2 + 0x488));
    }
    plVar3 = (longlong *)FUN_14076aaa0(lVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = AUGWeapon_Hook::GetPrivateStaticClass();
      lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    }
    if ((bVar1) && (lVar5 != 0)) {
      FUN_14076de30(lVar5,*(undefined8 *)(*param_2 + 0x488));
    }
  }
  uVar6 = FWeakObjectPtr::operator=(param_2[1] + *(longlong *)(param_1 + 0xd8) + 0x60,lVar5);
  if (lVar5 == 0) {
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  else {
    uVar6 = FUN_14070a100(param_1,param_2);
  }
  return uVar6;
}



// FUNCTION 1409ef4c0 FUN_1409ef4c0 body=99 status=ok
// SIG undefined FUN_1409ef4c0(void)

void FUN_1409ef4c0(longlong param_1)

{
  uint uVar1;
  
  if (((*(char *)(param_1 + 0x844) == '\0') && (*(char *)(param_1 + 0x845) == '\x02')) &&
     ((uVar1 = *(uint *)(param_1 + 0x800), (uVar1 & 8) != 0 ||
      ((((uVar1 & 1) != 0 || ((uVar1 & 0x10) != 0)) || ((uVar1 & 2) != 0)))))) {
    if (*(char *)(param_1 + 0x820) == '\0') {
      *(undefined1 *)(param_1 + 0x820) = 1;
      FUN_1409e2690();
      FUN_1409ee240(param_1);
      return;
    }
    return;
  }
  FUN_1409e5d80();
  return;
}



// FUNCTION 1409ef530 FUN_1409ef530 body=104 status=ok
// SIG undefined FUN_1409ef530(void)

void FUN_1409ef530(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  
  if (*(longlong **)(param_1 + 0x750) != (longlong *)0x0) {
    pcVar1 = *(code **)(**(longlong **)(param_1 + 0x750) + 0x2a0);
    if (*(char *)(param_1 + 0xac1) == '\0') {
      cVar2 = (*pcVar1)();
      if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001409ef58b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x750) + 0x288))();
        return;
      }
    }
    else {
      cVar2 = (*pcVar1)();
      if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001409ef56f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x750) + 0x280))(*(longlong **)(param_1 + 0x750),0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409ef5a0 FUN_1409ef5a0 body=520 status=ok
// SIG undefined FUN_1409ef5a0(void)

ulonglong FUN_1409ef5a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 local_res8;
  undefined2 *local_28;
  int local_20;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (0 < *(int *)(lVar1 + 0x140)) {
    local_res8 = *(undefined8 *)(param_2 + 0x18);
    FName::ToString(&local_res8,&local_28);
    puVar2 = *(undefined8 **)(lVar1 + 0x138);
    iVar11 = *(int *)(lVar1 + 0x140);
    puVar12 = puVar2;
    do {
      if (puVar12 == puVar2 + (longlong)iVar11 * 2) {
        iVar11 = -1;
LAB_1409ef63b:
        if (local_28 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        return (ulonglong)(iVar11 != -1);
      }
      puVar10 = &DAT_143f3eda8;
      if (local_20 != 0) {
        puVar10 = local_28;
      }
      if (*(int *)(puVar12 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar12;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
      if (iVar4 == 0) {
        iVar11 = (int)((longlong)puVar12 - (longlong)puVar2 >> 4);
        goto LAB_1409ef63b;
      }
      puVar12 = puVar12 + 2;
    } while( true );
  }
  lVar5 = FUN_142c6f130();
  if ((*(char *)(lVar1 + 0x131) != '\0') && (*(char *)(lVar1 + 0x133) == '\0')) goto LAB_1409ef722;
  uVar8 = 0;
  if (lVar5 != 0) {
    lVar6 = FUN_1430b3b80();
    iVar11 = *(int *)(lVar6 + 0x90);
    uVar8 = (longlong)iVar11;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar11) ||
       (uVar8 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0x88),
       *(longlong *)(uVar8 + (longlong)iVar11 * 8) != lVar6 + 0x88)) {
      uVar8 = uVar8 & 0xffffffffffffff00;
      bVar3 = false;
    }
    else {
      uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
      bVar3 = true;
    }
    if (bVar3) goto LAB_1409ef722;
  }
  lVar6 = *(longlong *)(param_2 + 0x118);
  if (lVar6 == 0) {
LAB_1409ef6fc:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_1430b3b80();
    iVar11 = *(int *)(lVar7 + 0x90);
    uVar8 = (longlong)iVar11;
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar11) ||
       (uVar8 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + 0x88),
       *(longlong *)(uVar8 + (longlong)iVar11 * 8) != lVar7 + 0x88)) {
      uVar8 = uVar8 & 0xffffffffffffff00;
      bVar3 = false;
    }
    else {
      uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1409ef6fc;
  }
  if (((*(char *)(lVar1 + 0x133) != '\0') && (lVar6 == 0)) ||
     ((*(char *)(lVar1 + 0x131) == '\0' && (lVar6 != 0)))) {
LAB_1409ef7a4:
    return uVar8 & 0xffffffffffffff00;
  }
LAB_1409ef722:
  lVar6 = param_2;
  if (*(char *)(lVar1 + 0x132) == '\0') {
    for (; (lVar6 != 0 && (lVar1 = *(longlong *)(lVar6 + 0x118), lVar1 != lVar5));
        lVar6 = *(longlong *)(lVar6 + 400)) {
      if (lVar1 != 0) {
        lVar7 = APostProcessVolume::GetPrivateStaticClass();
        iVar11 = *(int *)(lVar7 + 0x90);
        uVar8 = (longlong)iVar11;
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < iVar11) ||
           (uVar8 = *(ulonglong *)(*(longlong *)(lVar1 + 0x10) + 0x88),
           *(longlong *)(uVar8 + (longlong)iVar11 * 8) != lVar7 + 0x88)) {
          uVar8 = uVar8 & 0xffffffffffffff00;
          bVar3 = false;
        }
        else {
          uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
          bVar3 = true;
        }
        if (bVar3) goto LAB_1409ef7a4;
      }
    }
  }
  uVar8 = FUN_142d07e90(param_1,param_2);
  return uVar8;
}



// FUNCTION 1409ef7b0 FUN_1409ef7b0 body=917 status=ok
// SIG undefined FUN_1409ef7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409ef7b0(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined7 uVar11;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar8 = *(longlong *)(param_1 + 0x550);
  lVar13 = (longlong)*(int *)(param_1 + 0x558) * 0x68 + lVar8;
  do {
    if (lVar8 == lVar13) {
      return;
    }
    if (*(longlong *)(param_1 + 0x578) != 0) {
      (**(code **)(**(longlong **)(lVar8 + 0x20) + 0x280))(*(longlong **)(lVar8 + 0x20),1);
      lVar7 = *(longlong *)(lVar8 + 8);
      plVar6 = (longlong *)(param_1 + 0x620);
      lVar12 = (longlong)*(int *)(lVar8 + 0x10) * 0x70 + lVar7;
      for (; lVar7 != lVar12; lVar7 = lVar7 + 0x70) {
        lVar5 = *(longlong *)(lVar7 + 0x28);
        iVar4 = *(int *)(param_1 + 0x628);
        uStack_ec = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        local_f8 = *(undefined4 *)(lVar5 + 0x220);
        uStack_f4 = *(undefined4 *)(lVar5 + 0x224);
        uStack_f0 = *(undefined4 *)(lVar5 + 0x228);
        uStack_e0 = *(undefined4 *)(lVar7 + 0x38);
        uStack_dc = *(undefined4 *)(param_1 + 0x4d8);
        *(int *)(param_1 + 0x628) = iVar4 + 1;
        local_d0 = uStack_f0;
        if (*(int *)(param_1 + 0x62c) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(plVar6,iVar4);
        }
        lVar5 = *plVar6;
        puVar1 = (undefined4 *)((longlong)iVar4 * 0x20 + lVar5);
        *puVar1 = local_f8;
        puVar1[1] = uStack_f4;
        puVar1[2] = uStack_f0;
        puVar1[3] = uStack_ec;
        puVar2 = (undefined8 *)((longlong)iVar4 * 0x20 + 0x10 + lVar5);
        *puVar2 = CONCAT44(uStack_e4,uStack_e8);
        puVar2[1] = CONCAT44(uStack_dc,uStack_e0);
      }
      lVar7 = *(longlong *)(lVar8 + 0x30);
      if (lVar7 != 0) {
        uVar11 = (undefined7)
                 ((ulonglong)
                  (IMAGE_DOS_HEADER_140000000.e_magic +
                  (&switchD_1409ef935::switchdataD_1409efb48)[*(int *)(lVar8 + 0x38) + -1]) >> 8);
        switch(*(int *)(lVar8 + 0x38)) {
        case 1:
        case 5:
          FUN_1405a9fb0(lVar7,plVar6,CONCAT71(uVar11,2),0);
          uVar9 = *(undefined8 *)(param_1 + 0x498);
          break;
        case 2:
        case 6:
          FUN_1405a9fb0(lVar7,plVar6,CONCAT71(uVar11,2),0);
          uVar9 = *(undefined8 *)(param_1 + 0x4a0);
          break;
        case 3:
        case 7:
          FUN_1405a9fb0(lVar7,plVar6,CONCAT71(uVar11,2),0);
          uVar9 = *(undefined8 *)(param_1 + 0x4a8);
          break;
        case 4:
        case 8:
          FUN_1405a9fb0(lVar7,plVar6,CONCAT71(uVar11,2),0);
          uVar9 = *(undefined8 *)(param_1 + 0x4b0);
          break;
        default:
          goto switchD_1409ef935_default;
        }
        FUN_1405a3150(*(undefined8 *)(lVar8 + 0x30),&local_f8,uVar9);
        FUN_140591060(&local_f8);
      }
switchD_1409ef935_default:
      *(undefined4 *)(param_1 + 0x628) = 0;
      if (*(int *)(param_1 + 0x62c) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x620,0);
      }
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_1441bfda8;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        plVar6[2] = (longlong)FUN_1409dfd00;
        plVar6[3] = lVar8;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[4] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_1441bfdf0;
      }
      uVar3 = *(undefined4 *)(param_1 + 0x4f0);
      uVar9 = *(undefined8 *)(param_1 + 0x578);
      local_c8 = 0;
      local_c0 = 0;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_100 = 0xbf800000;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_108 = 0;
      FUN_142880850(uVar9,lVar8 + 0x40,&local_c8,uVar3);
      if (local_68 != 0) {
        plVar10 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar10 = local_78;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar7 = FMemory::Realloc(plVar6,0);
        if (lVar7 != 0) {
          FMemory::Free(lVar7);
        }
      }
    }
    lVar8 = lVar8 + 0x68;
  } while( true );
}



// FUNCTION 1409efb70 FUN_1409efb70 body=931 status=ok
// SIG undefined FUN_1409efb70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409efb70(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar9 = *(longlong *)(param_1 + 0x5e0);
  lVar12 = (longlong)*(int *)(param_1 + 0x5e8) * 0x68 + lVar9;
  if (lVar9 != lVar12) {
    plVar1 = (longlong *)(param_1 + 0x6b0);
    do {
      (**(code **)(**(longlong **)(lVar9 + 0x20) + 0x280))(*(longlong **)(lVar9 + 0x20),1);
      lVar8 = *(longlong *)(lVar9 + 8);
      lVar13 = (longlong)*(int *)(lVar9 + 0x10) * 0x68 + lVar8;
      for (; lVar8 != lVar13; lVar8 = lVar8 + 0x68) {
        lVar6 = *(longlong *)(lVar8 + 0x20);
        iVar5 = *(int *)(param_1 + 0x6b8);
        uStack_ec = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        local_f8 = *(undefined4 *)(lVar6 + 0x220);
        uStack_f4 = *(undefined4 *)(lVar6 + 0x224);
        uStack_f0 = *(undefined4 *)(lVar6 + 0x228);
        uStack_e0 = *(undefined4 *)(lVar8 + 0x30);
        uStack_dc = *(undefined4 *)(param_1 + 0x568);
        *(int *)(param_1 + 0x6b8) = iVar5 + 1;
        local_d0 = uStack_f0;
        if (*(int *)(param_1 + 0x6bc) < iVar5 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(plVar1,iVar5);
        }
        lVar6 = *plVar1;
        puVar2 = (undefined4 *)((longlong)iVar5 * 0x20 + lVar6);
        *puVar2 = local_f8;
        puVar2[1] = uStack_f4;
        puVar2[2] = uStack_f0;
        puVar2[3] = uStack_ec;
        puVar3 = (undefined8 *)((longlong)iVar5 * 0x20 + 0x10 + lVar6);
        *puVar3 = CONCAT44(uStack_e4,uStack_e8);
        puVar3[1] = CONCAT44(uStack_dc,uStack_e0);
      }
      lVar8 = *(longlong *)(lVar9 + 0x30);
      if (lVar8 != 0) {
        switch(*(undefined4 *)(lVar9 + 0x38)) {
        case 0:
        case 4:
          FUN_1405a9fb0(lVar8,plVar1,2,0);
          uVar10 = *(undefined8 *)(param_1 + 0x528);
          break;
        case 1:
        case 5:
          FUN_1405a9fb0(lVar8,plVar1,2,0);
          uVar10 = *(undefined8 *)(param_1 + 0x530);
          break;
        case 2:
        case 6:
          FUN_1405a9fb0(lVar8,plVar1,2,0);
          uVar10 = *(undefined8 *)(param_1 + 0x538);
          break;
        case 3:
        case 7:
          FUN_1405a9fb0(lVar8,plVar1,2,0);
          uVar10 = *(undefined8 *)(param_1 + 0x540);
          break;
        default:
          goto switchD_1409efce6_default;
        }
        FUN_1405a3150(*(undefined8 *)(lVar9 + 0x30),&local_f8,uVar10);
        FUN_140591060(&local_f8);
      }
switchD_1409efce6_default:
      *(undefined4 *)(param_1 + 0x6b8) = 0;
      if (*(int *)(param_1 + 0x6bc) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar1,0);
      }
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_1441bfda8;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        plVar7[2] = (longlong)FUN_1409dfd50;
        plVar7[3] = lVar9;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[4] = lVar8;
        *plVar7 = (longlong)&PTR_FUN_1441bfdf0;
      }
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x608) + 400);
      if (lVar8 == 0) {
        uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x3f8);
      }
      else {
        uVar10 = *(undefined8 *)(lVar8 + 0x90);
      }
      uVar4 = *(undefined4 *)(param_1 + 0x580);
      local_c8 = 0;
      local_c0 = 0;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_100 = 0xbf800000;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_108 = 0;
      FUN_142880850(uVar10,lVar9 + 0x40,&local_c8,uVar4);
      if (local_68 != 0) {
        plVar11 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar11 = local_78;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        lVar8 = FMemory::Realloc(plVar7,0);
        if (lVar8 != 0) {
          FMemory::Free(lVar8);
        }
      }
      lVar9 = lVar9 + 0x68;
    } while (lVar9 != lVar12);
  }
  return;
}



// FUNCTION 1409effb0 FUN_1409effb0 body=15 status=ok
// SIG undefined FUN_1409effb0(void)

void FUN_1409effb0(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    FMemory::operator_delete(param_1,0x18);
    return;
  }
  return;
}



// FUNCTION 1409effe0 FUN_1409effe0 body=154 status=ok
// SIG undefined FUN_1409effe0(void)

undefined8 FUN_1409effe0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  param_2 = (longlong *)*param_2;
  if (((param_2 != (longlong *)0x0) && ((char)param_2[0x13] != '\0')) && (param_2[0x23] != 0)) {
    lVar2 = *(longlong *)(param_1 + 8);
    iVar1 = *(int *)(lVar2 + 0x510);
    *(int *)(lVar2 + 0x510) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x514) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x508,iVar1);
    }
    *(longlong **)(*(longlong *)(lVar2 + 0x508) + (longlong)iVar1 * 8) = param_2;
    (**(code **)(*param_2 + 0x358))(param_2,1);
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
              (param_2[0x23] + 0x348,param_2);
  }
  return 1;
}



// FUNCTION 1409f02c0 FUN_1409f02c0 body=307 status=ok
// SIG undefined FUN_1409f02c0(void)

void FUN_1409f02c0(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  FUN_1409b8040(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar7 = (undefined8 *)(param_2 + 8);
    do {
      *param_1 = puVar7[-1];
      param_1[1] = *puVar7;
      param_1[2] = 0;
      iVar2 = *(int *)(puVar7 + 2);
      _Src = (void *)puVar7[1];
      *(int *)(param_1 + 3) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar2,0);
        _guard_xfg_dispatch_icall_nop((void *)param_1[2],_Src,(longlong)iVar2 << 2);
      }
      *(byte *)(param_1 + 4) =
           *(byte *)(param_1 + 4) ^ (*(byte *)(puVar7 + 3) ^ *(byte *)(param_1 + 4)) & 1;
      *(byte *)(param_1 + 4) =
           *(byte *)(param_1 + 4) ^ (*(byte *)(param_1 + 4) ^ *(byte *)(puVar7 + 3)) & 2;
      uVar6 = puVar7[5];
      param_1[5] = puVar7[4];
      param_1[6] = uVar6;
      uVar6 = puVar7[7];
      param_1[7] = puVar7[6];
      param_1[8] = uVar6;
      uVar6 = puVar7[9];
      param_1[9] = puVar7[8];
      param_1[10] = uVar6;
      param_1[0xb] = puVar7[10];
      uVar3 = *(undefined4 *)((longlong)puVar7 + 0x5c);
      uVar4 = *(undefined4 *)(puVar7 + 0xc);
      uVar5 = *(undefined4 *)((longlong)puVar7 + 100);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(puVar7 + 0xb);
      *(undefined4 *)((longlong)param_1 + 100) = uVar3;
      *(undefined4 *)(param_1 + 0xd) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
      puVar1 = puVar7 + 0xd;
      puVar7 = puVar7 + 0xf;
      param_1[0xe] = *puVar1;
      param_1 = param_1 + 0xf;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1409f0400 FUN_1409f0400 body=305 status=ok
// SIG undefined FUN_1409f0400(void)

void FUN_1409f0400(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  FUN_1406f4a40(param_1,param_3 + param_5,param_4);
  puVar8 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar7 = (undefined8 *)(param_2 + 8);
    puVar6 = (undefined4 *)((longlong)puVar8 + 0x84);
    do {
      *puVar8 = puVar7[-1];
      uVar5 = puVar7[1];
      *(undefined8 *)(puVar6 + -0x1f) = *puVar7;
      *(undefined8 *)(puVar6 + -0x1d) = uVar5;
      uVar5 = puVar7[3];
      *(undefined8 *)(puVar6 + -0x1b) = puVar7[2];
      *(undefined8 *)(puVar6 + -0x19) = uVar5;
      uVar5 = puVar7[5];
      *(undefined8 *)(puVar6 + -0x17) = puVar7[4];
      *(undefined8 *)(puVar6 + -0x15) = uVar5;
      *(undefined8 *)(puVar6 + -0x13) = puVar7[6];
      uVar5 = puVar7[8];
      *(undefined8 *)(puVar6 + -0x11) = puVar7[7];
      *(undefined8 *)(puVar6 + -0xf) = uVar5;
      uVar5 = puVar7[10];
      *(undefined8 *)(puVar6 + -0xd) = puVar7[9];
      *(undefined8 *)(puVar6 + -0xb) = uVar5;
      uVar2 = *(undefined4 *)((longlong)puVar7 + 0x5c);
      uVar3 = *(undefined4 *)(puVar7 + 0xc);
      uVar4 = *(undefined4 *)((longlong)puVar7 + 100);
      puVar6[-9] = *(undefined4 *)(puVar7 + 0xb);
      puVar6[-8] = uVar2;
      puVar6[-7] = uVar3;
      puVar6[-6] = uVar4;
      *(undefined8 *)(puVar6 + -5) = puVar7[0xd];
      *(undefined8 *)(puVar6 + -3) = 0;
      iVar1 = *(int *)(puVar7 + 0xf);
      _Src = (void *)puVar7[0xe];
      puVar6[-1] = iVar1;
      if (iVar1 == 0) {
        *puVar6 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar6 + -3,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + -3),_Src,(longlong)iVar1 << 3);
      }
      puVar8 = puVar8 + 0x11;
      puVar6 = puVar6 + 0x22;
      puVar7 = puVar7 + 0x11;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1409f0540 FUN_1409f0540 body=445 status=ok
// SIG undefined FUN_1409f0540(void)

void FUN_1409f0540(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  int local_res18;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeForCopy
            (param_1,param_5 + param_3,param_4);
  puVar8 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    piVar9 = (int *)(param_2 + 0x50);
    puVar5 = (undefined4 *)((longlong)puVar8 + 0x2c);
    local_res18 = param_3;
    do {
      *puVar8 = *(undefined8 *)(piVar9 + -0x14);
      *(undefined8 *)(puVar5 + -9) = *(undefined8 *)(piVar9 + -0x12);
      *(undefined8 *)(puVar5 + -7) = *(undefined8 *)(piVar9 + -0x10);
      puVar5[-5] = piVar9[-0xe];
      *(undefined8 *)(puVar5 + -3) = 0;
      iVar7 = piVar9[-10];
      lVar2 = *(longlong *)(piVar9 + -0xc);
      puVar5[-1] = iVar7;
      if (iVar7 == 0) {
        *puVar5 = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar5 + -3,iVar7,0);
        puVar4 = *(undefined1 **)(puVar5 + -3);
        puVar6 = (undefined8 *)(lVar2 + 8);
        do {
          *puVar4 = *(undefined1 *)(puVar6 + -1);
          *(undefined8 *)(puVar4 + 8) = 0;
          iVar1 = *(int *)(puVar6 + 1);
          pvVar3 = (void *)*puVar6;
          *(int *)(puVar4 + 0x10) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)(puVar4 + 0x14) = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (puVar4 + 8,iVar1,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + 8),pvVar3,(longlong)iVar1 << 3);
          }
          puVar4 = puVar4 + 0x18;
          puVar6 = puVar6 + 3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      FUN_1409f3920(puVar5 + 1,piVar9 + -8);
      *(undefined8 *)(puVar5 + 7) = 0;
      iVar7 = *piVar9;
      pvVar3 = *(void **)(piVar9 + -2);
      puVar5[9] = iVar7;
      if (iVar7 == 0) {
        puVar5[10] = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar5 + 7,iVar7,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar5 + 7),pvVar3,(longlong)iVar7 << 3);
      }
      puVar8 = puVar8 + 0xc;
      *(char *)(puVar5 + 0xb) = (char)piVar9[2];
      puVar4 = (undefined1 *)((longlong)piVar9 + 9);
      piVar9 = piVar9 + 0x18;
      *(undefined1 *)((longlong)puVar5 + 0x2d) = *puVar4;
      puVar5 = puVar5 + 0x18;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  return;
}



// FUNCTION 1409f0700 FUN_1409f0700 body=895 status=ok
// SIG undefined FUN_1409f0700(void)

int * FUN_1409f0700(longlong param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  longlong *_Dst;
  char cVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  int local_38 [2];
  undefined8 *local_30;
  
  FUN_1409f88b0(param_1,local_38);
  puVar2 = (undefined8 *)*param_3;
  puVar13 = &DAT_143f3eda8;
  puVar3 = (undefined8 *)param_3[1];
  bVar18 = false;
  *param_2 = local_38[0];
  *local_30 = 0;
  *local_30 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(local_30 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  local_30[2] = *puVar3;
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  if (*(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x22c) != 1) {
    if (*(int *)(param_1 + 0x208) != *(int *)(param_1 + 0x22c)) {
      if (*(int *)(local_30 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*local_30;
      }
      iVar5 = FUN_140438070(puVar12);
      lVar10 = *(longlong *)(param_1 + 0x250);
      if (*(longlong *)(param_1 + 0x250) == 0) {
        lVar10 = param_1 + 0x230;
      }
      iVar5 = *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 600) - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar10 = *(longlong *)(param_1 + 0x200);
        do {
          lVar14 = (longlong)iVar5 * 0x20;
          if (lVar10 == 0) {
            lVar10 = param_1;
          }
          if (*(int *)(local_30 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*local_30;
          }
          if (*(int *)(lVar10 + 8 + lVar14) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = *(undefined2 **)(lVar10 + lVar14);
          }
          iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
          if (iVar6 == 0) goto LAB_1409f084d;
          lVar10 = *(longlong *)(param_1 + 0x200);
          lVar9 = lVar10;
          if (lVar10 == 0) {
            lVar9 = param_1;
          }
          iVar5 = *(int *)(lVar9 + 0x18 + lVar14);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1409f084d:
    bVar18 = iVar5 != -1;
    if (bVar18) {
      lVar10 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar10 = param_1;
      }
      _Dst = (longlong *)(lVar10 + (longlong)iVar5 * 0x20);
      if (*_Dst != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x18);
      iVar6 = *param_2;
      bVar4 = (byte)iVar6 & 0x1f;
      if (*(int *)(param_1 + 0x22c) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x200);
        if (*(longlong *)(param_1 + 0x200) == 0) {
          lVar10 = param_1;
        }
        *(int *)(lVar10 + (longlong)*(int *)(param_1 + 0x228) * 0x20) = iVar6;
      }
      lVar10 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar10 = param_1;
      }
      uVar7 = 0xffffffff;
      *(undefined4 *)(lVar10 + (longlong)iVar6 * 0x20) = 0xffffffff;
      if (0 < *(int *)(param_1 + 0x22c)) {
        uVar7 = *(undefined4 *)(param_1 + 0x228);
      }
      *(undefined4 *)(lVar10 + 4 + (longlong)iVar6 * 0x20) = uVar7;
      *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
      *(int *)(param_1 + 0x228) = iVar6;
      lVar10 = *(longlong *)(param_1 + 0x218);
      *param_2 = iVar5;
      if (lVar10 == 0) {
        lVar10 = param_1 + 0x210;
      }
      puVar1 = (uint *)(lVar10 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1409f0a48;
    }
  }
  uVar17 = *(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x22c);
  uVar8 = uVar17 >> 1;
  iVar5 = 0x1f;
  if (uVar8 != 0) {
    for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  iVar6 = 0x20;
  cVar15 = '\0';
  if (uVar8 != 0) {
    iVar6 = 0x1f - iVar5;
  }
  uVar8 = uVar8 - 1;
  iVar5 = 0x1f;
  if (uVar8 != 0) {
    for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  if (uVar8 != 0) {
    cVar15 = '\x1f' - (char)iVar5;
  }
  uVar16 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  uVar8 = 8;
  if ((7 < uVar16) && (uVar8 = uVar16, uVar17 < 4)) {
    uVar8 = 8;
  }
  if (((int)uVar17 < 1) ||
     ((*(int *)(param_1 + 600) != 0 && ((int)uVar8 <= *(int *)(param_1 + 600))))) {
    iVar5 = *param_2;
    if (*(int *)(local_30 + 1) != 0) {
      puVar13 = (undefined2 *)*local_30;
    }
    uVar8 = FUN_140438070(puVar13);
    uVar8 = *(int *)(param_1 + 600) - 1U & uVar8;
    *(uint *)((longlong)local_30 + 0x1c) = uVar8;
    lVar10 = *(longlong *)(param_1 + 0x250);
    if (*(longlong *)(param_1 + 0x250) == 0) {
      lVar10 = param_1 + 0x230;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          (lVar10 + ((longlong)*(int *)(param_1 + 600) - 1U & (longlong)(int)uVar8) * 4);
    lVar10 = *(longlong *)(param_1 + 0x250);
    if (*(longlong *)(param_1 + 0x250) == 0) {
      lVar10 = param_1 + 0x230;
    }
    *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 600) - 1U & (longlong)(int)uVar8) * 4) = iVar5;
  }
  else {
    *(uint *)(param_1 + 600) = uVar8;
    FUN_1406f4300(param_1);
  }
LAB_1409f0a48:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 1409f0a80 FUN_1409f0a80 body=695 status=ok
// SIG undefined FUN_1409f0a80(void)

int * FUN_1409f0a80(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  ulonglong *_Src;
  bool bVar16;
  int local_res8 [2];
  
  uVar14 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar15 + 1) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_1,iVar15);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar15 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar15 * 0x90);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x90) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar15;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  uVar3 = param_3[1];
  _Src = (ulonglong *)((longlong)iVar15 * 0x90 + *param_1);
  *_Src = *(ulonglong *)*param_3;
  FUN_142de2b80(_Src + 1,uVar3);
  *(undefined4 *)(_Src + 0x11) = 0xffffffff;
  iVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar15 != 1) {
    FUN_140a043b0(param_1,local_res8,*_Src);
    iVar2 = local_res8[0];
    lVar12 = (longlong)local_res8[0];
    bVar16 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar12 * 0x90 + *param_1),_Src,0x88);
      iVar15 = *param_2;
      bVar4 = (byte)iVar15 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x90) = iVar15;
      }
      puVar7 = (undefined4 *)((longlong)iVar15 * 0x90 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      puVar7[1] = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar15;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar2;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar11 = (undefined1)local_res8[0];
      goto LAB_1409f0d13;
    }
  }
  uVar11 = 0;
  cVar5 = FUN_1409ff790(param_1,iVar15,0);
  if (cVar5 == '\0') {
    iVar15 = (int)(*_Src >> 4);
    uVar10 = 0x9e3779b9U - iVar15 ^ iVar15 << 8;
    uVar13 = -(iVar15 + uVar10) ^ uVar10 >> 0xd;
    uVar9 = (iVar15 - uVar10) - uVar13 ^ uVar13 >> 0xc;
    uVar10 = (uVar10 - uVar9) - uVar13 ^ uVar9 << 0x10;
    uVar13 = (uVar13 - uVar10) - uVar9 ^ uVar10 >> 5;
    uVar9 = (uVar9 - uVar10) - uVar13 ^ uVar13 >> 3;
    uVar10 = (uVar10 - uVar9) - uVar13 ^ uVar9 << 10;
    uVar9 = ((uVar13 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x8c) = uVar9;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x11) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_1409f0d13:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar11;
  }
  return param_2;
}



// FUNCTION 1409f0d40 FUN_1409f0d40 body=1073 status=ok
// SIG undefined FUN_1409f0d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409f0d40(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong **_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  char local_c8;
  longlong *local_c0;
  int local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  int local_90;
  int local_8c;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  longlong **local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  longlong **pplStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_2 + 0x28) = 0;
  local_c8 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x2c)) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_b4 = 1;
  local_c0 = (longlong *)(param_1 + 0x2b0);
  local_98 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_b0 = (uint *)(param_1 + 0x2c0);
  local_8c = 0;
  iVar13 = 0;
  local_b8 = 0;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_b0;
    }
    uVar12 = *puVar10;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar5 = local_b8 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar5;
      if (bVar3) goto LAB_1409f0e5a;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_b4 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_a4 = (iStack_a0 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_a4) {
LAB_1409f0e5a:
      uStack_a4 = uVar1;
    }
  }
  local_a8 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_58 = CONCAT44(uStack_b4,local_b8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_a4;
  local_68 = (longlong **)CONCAT44(uStack_9c,iStack_a0);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_80 = local_b8;
  uStack_7c = uStack_b4;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_b0;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1409f0f1d;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_1409f0f1d:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_78 = puStack_b0;
  local_60 = local_c0;
  puStack_50 = puStack_b0;
  pplStack_40 = local_68;
  local_88 = local_c0;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  while( true ) {
    if ((uStack_6c == uVar12) && (local_78 == puStack_b0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_88 == local_c0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_1412e05a0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x28) = iVar2 + 1;
        if (*(int *)(param_2 + 0x2c) < iVar2 + 1) {
          TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::
          ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x20);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_c8 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_90 = iVar13 + 1;
        if (iVar5 < local_90) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,iVar13);
          plVar11 = local_98;
          iVar5 = local_8c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_90;
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  if (local_c8 != '\0') {
    uVar8 = 0;
    pplStack_40 = (longlong **)0x0;
    local_38 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_1409f0d40(*(longlong *)(*plVar14 + 0x2d8),&local_60,1);
          iVar13 = (int)local_38;
          lVar7 = (longlong)(int)local_38;
          if ((int)local_38 != 0) {
            iVar5 = *(int *)(param_2 + 0x28);
            if (*(int *)(param_2 + 0x2c) < (int)local_38 + iVar5) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                        (param_2);
              iVar5 = *(int *)(param_2 + 0x28);
            }
            _Src = &local_60;
            if (pplStack_40 != (longlong **)0x0) {
              _Src = pplStack_40;
            }
            lVar4 = *(longlong *)(param_2 + 0x20);
            if (*(longlong *)(param_2 + 0x20) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + iVar13;
            local_38 = local_38 & 0xffffffff00000000;
          }
        }
        plVar14 = plVar14 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar15);
      if (pplStack_40 != (longlong **)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 1409f1180 FUN_1409f1180 body=1139 status=ok
// SIG undefined FUN_1409f1180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409f1180(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_1409f12af;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_1409f12af:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1409f136f;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_1409f136f:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = AUGDoor::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_1409f1180(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 1409f1600 FUN_1409f1600 body=323 status=ok
// SIG undefined FUN_1409f1600(void)

void FUN_1409f1600(undefined2 *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar4 = iVar6;
    iVar8 = iVar5;
joined_r0x0001409f162a:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(byte *)(param_1 + iVar7) < *(byte *)(param_1 + (longlong)iVar6 + 2)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        pbVar1 = (byte *)(param_1 + iVar7);
        pbVar2 = (byte *)(param_1 + iVar5);
        if (*pbVar1 < *pbVar2) {
          if (pbVar2 != pbVar1) {
            uVar3 = *(undefined2 *)pbVar2;
            *(undefined2 *)pbVar2 = *(undefined2 *)pbVar1;
            *(undefined2 *)pbVar1 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x0001409f162a;
        }
      }
      iVar6 = iVar4 + -2;
      iVar5 = iVar8 + -1;
      iVar4 = iVar6;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + param_2;
    do {
      if (param_1 != puVar9) {
        uVar3 = *param_1;
        *param_1 = *puVar9;
        *puVar9 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar6 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(byte *)(param_1 + iVar6) < *(byte *)(param_1 + (longlong)iVar4 + 2)) {
              iVar6 = iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          pbVar1 = (byte *)(param_1 + iVar6);
          pbVar2 = (byte *)(param_1 + iVar5);
          if (*pbVar2 <= *pbVar1) break;
          if (pbVar2 != pbVar1) {
            uVar3 = *(undefined2 *)pbVar2;
            *(undefined2 *)pbVar2 = *(undefined2 *)pbVar1;
            *(undefined2 *)pbVar1 = uVar3;
          }
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1409f1750 FUN_1409f1750 body=733 status=ok
// SIG undefined FUN_1409f1750(void)

void FUN_1409f1750(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
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
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  
  iVar15 = (param_2 + -2) / 2;
  if (-1 < iVar15) {
    iVar16 = iVar15 * 2 + 1;
    iVar1 = iVar16;
    iVar17 = iVar15;
joined_r0x0001409f1787:
    do {
      if (iVar16 < param_2) {
        iVar16 = iVar15 * 2;
        iVar19 = iVar16 + 1;
        if (iVar16 + 2 < param_2) {
          if (*(byte *)(param_1 + (longlong)iVar19 * 0xc + 10) <
              *(byte *)(param_1 + (longlong)iVar16 * 0xc + 0x22)) {
            iVar19 = iVar16;
          }
          iVar19 = iVar19 + 1;
        }
        puVar18 = param_1 + (longlong)iVar19 * 0xc;
        puVar20 = param_1 + (longlong)iVar15 * 0xc;
        if (*(byte *)(puVar18 + 10) < *(byte *)(puVar20 + 10)) {
          if (puVar20 != puVar18) {
            uVar2 = puVar18[1];
            uVar3 = *puVar20;
            uVar4 = puVar20[1];
            uVar5 = puVar20[2];
            uVar6 = puVar20[3];
            uVar7 = puVar20[4];
            uVar8 = puVar20[5];
            uVar9 = puVar20[6];
            uVar10 = puVar20[7];
            uVar11 = puVar20[8];
            uVar12 = puVar20[9];
            uVar13 = puVar20[10];
            uVar14 = puVar20[0xb];
            *puVar20 = *puVar18;
            puVar20[1] = uVar2;
            uVar2 = puVar18[3];
            puVar20[2] = puVar18[2];
            puVar20[3] = uVar2;
            uVar2 = puVar18[5];
            puVar20[4] = puVar18[4];
            puVar20[5] = uVar2;
            uVar2 = puVar18[7];
            puVar20[6] = puVar18[6];
            puVar20[7] = uVar2;
            uVar2 = puVar18[9];
            puVar20[8] = puVar18[8];
            puVar20[9] = uVar2;
            uVar2 = puVar18[0xb];
            puVar20[10] = puVar18[10];
            puVar20[0xb] = uVar2;
            *puVar18 = uVar3;
            puVar18[1] = uVar4;
            puVar18[2] = uVar5;
            puVar18[3] = uVar6;
            puVar18[4] = uVar7;
            puVar18[5] = uVar8;
            puVar18[6] = uVar9;
            puVar18[7] = uVar10;
            puVar18[8] = uVar11;
            puVar18[9] = uVar12;
            puVar18[10] = uVar13;
            puVar18[0xb] = uVar14;
          }
          iVar16 = iVar19 * 2 + 1;
          iVar15 = iVar19;
          goto joined_r0x0001409f1787;
        }
      }
      iVar16 = iVar1 + -2;
      iVar15 = iVar17 + -1;
      iVar1 = iVar16;
      iVar17 = iVar15;
    } while (-1 < iVar15);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar18 = param_1 + (longlong)param_2 * 0xc;
    do {
      if (param_1 != puVar18) {
        uVar2 = puVar18[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
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
        *param_1 = *puVar18;
        param_1[1] = uVar2;
        uVar2 = puVar18[3];
        param_1[2] = puVar18[2];
        param_1[3] = uVar2;
        uVar2 = puVar18[5];
        param_1[4] = puVar18[4];
        param_1[5] = uVar2;
        uVar2 = puVar18[7];
        param_1[6] = puVar18[6];
        param_1[7] = uVar2;
        uVar2 = puVar18[9];
        param_1[8] = puVar18[8];
        param_1[9] = uVar2;
        uVar2 = puVar18[0xb];
        param_1[10] = puVar18[10];
        param_1[0xb] = uVar2;
        *puVar18 = uVar3;
        puVar18[1] = uVar4;
        puVar18[2] = uVar5;
        puVar18[3] = uVar6;
        puVar18[4] = uVar7;
        puVar18[5] = uVar8;
        puVar18[6] = uVar9;
        puVar18[7] = uVar10;
        puVar18[8] = uVar11;
        puVar18[9] = uVar12;
        puVar18[10] = uVar13;
        puVar18[0xb] = uVar14;
      }
      iVar15 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar15 * 2;
          iVar16 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(byte *)(param_1 + (longlong)iVar16 * 0xc + 10) <
                *(byte *)(param_1 + (longlong)iVar1 * 0xc + 0x22)) {
              iVar16 = iVar1;
            }
            iVar16 = iVar16 + 1;
          }
          puVar20 = param_1 + (longlong)iVar16 * 0xc;
          puVar21 = param_1 + (longlong)iVar15 * 0xc;
          if (*(byte *)(puVar21 + 10) <= *(byte *)(puVar20 + 10)) break;
          if (puVar21 != puVar20) {
            uVar2 = puVar20[1];
            uVar3 = *puVar21;
            uVar4 = puVar21[1];
            uVar5 = puVar21[2];
            uVar6 = puVar21[3];
            uVar7 = puVar21[4];
            uVar8 = puVar21[5];
            uVar9 = puVar21[6];
            uVar10 = puVar21[7];
            uVar11 = puVar21[8];
            uVar12 = puVar21[9];
            uVar13 = puVar21[10];
            uVar14 = puVar21[0xb];
            *puVar21 = *puVar20;
            puVar21[1] = uVar2;
            uVar2 = puVar20[3];
            puVar21[2] = puVar20[2];
            puVar21[3] = uVar2;
            uVar2 = puVar20[5];
            puVar21[4] = puVar20[4];
            puVar21[5] = uVar2;
            uVar2 = puVar20[7];
            puVar21[6] = puVar20[6];
            puVar21[7] = uVar2;
            uVar2 = puVar20[9];
            puVar21[8] = puVar20[8];
            puVar21[9] = uVar2;
            uVar2 = puVar20[0xb];
            puVar21[10] = puVar20[10];
            puVar21[0xb] = uVar2;
            *puVar20 = uVar3;
            puVar20[1] = uVar4;
            puVar20[2] = uVar5;
            puVar20[3] = uVar6;
            puVar20[4] = uVar7;
            puVar20[5] = uVar8;
            puVar20[6] = uVar9;
            puVar20[7] = uVar10;
            puVar20[8] = uVar11;
            puVar20[9] = uVar12;
            puVar20[10] = uVar13;
            puVar20[0xb] = uVar14;
          }
          iVar15 = iVar16;
        } while (iVar16 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar18 = puVar18 + -0xc;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1409f1a30 FUN_1409f1a30 body=604 status=ok
// SIG undefined FUN_1409f1a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409f1a30(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined2 uVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong *plVar7;
  byte *pbVar8;
  byte *pbVar10;
  byte *pbVar11;
  float fVar12;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  byte *pbVar9;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 2;
    fVar12 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar12 = fVar12 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
    local_318 = (undefined4)(longlong)(fVar12 + fVar12);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar7 = &local_328;
    do {
      pbVar6 = (byte *)*plVar7;
      pbVar3 = (byte *)plVar7[1];
      lVar1 = plVar7[2];
      local_338._0_4_ = (int)lVar1;
      lVar4 = (longlong)pbVar3 - (longlong)pbVar6;
      pbVar10 = pbVar3;
      pbVar11 = pbVar6;
      if ((int)local_338 != 0) {
LAB_1409f1af0:
        lVar5 = (lVar4 >> 1) + 1;
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = (lVar4 >> 1) + 2;
          }
          pbVar6 = pbVar11 + (lVar5 >> 1) * 2;
          if (pbVar6 != pbVar11) {
            uVar2 = *(undefined2 *)pbVar6;
            *(undefined2 *)pbVar6 = *(undefined2 *)pbVar11;
            *(undefined2 *)pbVar11 = uVar2;
          }
          pbVar8 = pbVar10 + 2;
          pbVar6 = pbVar11;
LAB_1409f1b25:
          pbVar6 = pbVar6 + 2;
          if (pbVar6 <= pbVar10) goto code_r0x0001409f1b2e;
          goto LAB_1409f1b36;
        }
        for (; pbVar3 = pbVar11, pbVar6 = pbVar11, pbVar11 < pbVar10; pbVar10 = pbVar10 + -2) {
          while (pbVar8 = pbVar3, pbVar6 = pbVar6 + 2, pbVar6 <= pbVar10) {
            pbVar3 = pbVar6;
            if (*pbVar8 <= *pbVar6) {
              pbVar3 = pbVar8;
            }
          }
          if (pbVar8 != pbVar10) {
            uVar2 = *(undefined2 *)pbVar8;
            *(undefined2 *)pbVar8 = *(undefined2 *)pbVar10;
            *(undefined2 *)pbVar10 = uVar2;
          }
        }
        goto LAB_1409f1bff;
      }
LAB_1409f1bf0:
      local_338 = lVar1;
      FUN_1409f1600(pbVar6,pbVar3,param_3,param_4);
LAB_1409f1bff:
      plVar7 = plVar7 + -3;
    } while (&local_328 <= plVar7);
  }
  return;
code_r0x0001409f1b2e:
  if (*pbVar11 <= *pbVar6) goto LAB_1409f1b25;
LAB_1409f1b36:
  do {
    pbVar9 = pbVar8;
    pbVar8 = pbVar9 + -2;
    if (pbVar8 <= pbVar11) break;
  } while (*pbVar8 <= *pbVar11);
  if (pbVar6 <= pbVar8) {
    if (pbVar6 != pbVar8) {
      uVar2 = *(undefined2 *)pbVar6;
      *(undefined2 *)pbVar6 = *(undefined2 *)pbVar8;
      *(undefined2 *)pbVar8 = uVar2;
    }
    goto LAB_1409f1b25;
  }
  if (pbVar11 != pbVar8) {
    uVar2 = *(undefined2 *)pbVar11;
    *(undefined2 *)pbVar11 = *(undefined2 *)pbVar8;
    *(undefined2 *)pbVar8 = uVar2;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((ulonglong)(pbVar8 + (-2 - (longlong)pbVar11)) & 0xfffffffffffffffe) <
      (longlong)((longlong)pbVar10 - (longlong)pbVar6 & 0xfffffffffffffffeU)) {
    if (pbVar6 < pbVar10) {
      *plVar7 = (longlong)pbVar6;
      plVar7[1] = (longlong)pbVar10;
      *(int *)(plVar7 + 2) = (int)local_338;
      plVar7 = plVar7 + 3;
    }
    if (pbVar8 <= pbVar11 + 2) goto LAB_1409f1bff;
    pbVar10 = pbVar9 + -4;
    pbVar6 = pbVar11;
  }
  else {
    if (pbVar11 + 2 < pbVar8) {
      *plVar7 = (longlong)pbVar11;
      plVar7[1] = (longlong)(pbVar9 + -4);
      *(int *)(plVar7 + 2) = (int)local_338;
      plVar7 = plVar7 + 3;
    }
    if (pbVar10 <= pbVar6) goto LAB_1409f1bff;
  }
  lVar4 = (longlong)pbVar10 - (longlong)pbVar6;
  pbVar11 = pbVar6;
  if ((int)local_338 == 0) goto LAB_1409f1bf0;
  goto LAB_1409f1af0;
}



// FUNCTION 1409f1c90 FUN_1409f1c90 body=1162 status=ok
// SIG undefined FUN_1409f1c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409f1c90(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong *plVar29;
  float fVar30;
  undefined1 auStack_398 [48];
  longlong local_368;
  longlong local_358;
  longlong lStack_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_398;
    lStack_350 = param_2 * 0x60 + -0x60 + param_1;
    fVar30 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar30 = fVar30 + 1.8446744e+19;
    }
    local_358 = param_1;
    fVar30 = _guard_xfg_dispatch_icall_nop(fVar30);
    local_348 = (undefined4)(longlong)(fVar30 + fVar30);
    _guard_xfg_dispatch_icall_nop(local_340,0,0x2e8);
    plVar29 = &local_358;
    do {
      puVar28 = (undefined8 *)*plVar29;
      puVar23 = (undefined8 *)plVar29[1];
      lVar1 = plVar29[2];
      local_368._0_4_ = (int)lVar1;
      lVar22 = ((longlong)puVar23 - (longlong)puVar28) / 0x60 + 1;
      puVar27 = puVar28;
      if ((int)local_368 != 0) {
LAB_1409f1d90:
        if (8 < lVar22) {
          if (lVar22 < 0) {
            lVar22 = lVar22 + 1;
          }
          puVar28 = puVar27 + (lVar22 >> 1) * 0xc;
          if (puVar28 != puVar27) {
            uVar9 = puVar27[1];
            uVar2 = *(undefined4 *)puVar28;
            uVar3 = *(undefined4 *)((longlong)puVar28 + 4);
            uVar4 = *(undefined4 *)(puVar28 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar28 + 0xc);
            uVar10 = puVar28[2];
            uVar11 = puVar28[3];
            uVar12 = puVar28[4];
            uVar13 = puVar28[5];
            uVar14 = puVar28[6];
            uVar15 = puVar28[7];
            uVar16 = puVar28[8];
            uVar17 = puVar28[9];
            uVar18 = puVar28[10];
            uVar19 = puVar28[0xb];
            *puVar28 = *puVar27;
            puVar28[1] = uVar9;
            uVar9 = puVar27[3];
            puVar28[2] = puVar27[2];
            puVar28[3] = uVar9;
            uVar9 = puVar27[5];
            puVar28[4] = puVar27[4];
            puVar28[5] = uVar9;
            uVar9 = puVar27[7];
            puVar28[6] = puVar27[6];
            puVar28[7] = uVar9;
            uVar6 = *(undefined4 *)((longlong)puVar27 + 0x44);
            uVar7 = *(undefined4 *)(puVar27 + 9);
            uVar8 = *(undefined4 *)((longlong)puVar27 + 0x4c);
            *(undefined4 *)(puVar28 + 8) = *(undefined4 *)(puVar27 + 8);
            *(undefined4 *)((longlong)puVar28 + 0x44) = uVar6;
            *(undefined4 *)(puVar28 + 9) = uVar7;
            *(undefined4 *)((longlong)puVar28 + 0x4c) = uVar8;
            uVar9 = puVar27[0xb];
            puVar28[10] = puVar27[10];
            puVar28[0xb] = uVar9;
            *(undefined4 *)puVar27 = uVar2;
            *(undefined4 *)((longlong)puVar27 + 4) = uVar3;
            *(undefined4 *)(puVar27 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar27 + 0xc) = uVar5;
            puVar27[2] = uVar10;
            puVar27[3] = uVar11;
            puVar27[4] = uVar12;
            puVar27[5] = uVar13;
            puVar27[6] = uVar14;
            puVar27[7] = uVar15;
            puVar27[8] = uVar16;
            puVar27[9] = uVar17;
            puVar27[10] = uVar18;
            puVar27[0xb] = uVar19;
          }
          puVar25 = puVar23 + 0xc;
          puVar28 = puVar27;
LAB_1409f1e24:
          puVar24 = puVar28;
          puVar28 = puVar24 + 0xc;
          if (puVar28 <= puVar23) goto code_r0x0001409f1e2d;
          goto LAB_1409f1e40;
        }
        for (; puVar25 = puVar27, puVar28 = puVar27, puVar27 < puVar23; puVar23 = puVar23 + -0xc) {
          while (puVar24 = puVar25, puVar28 = puVar28 + 0xc, puVar28 <= puVar23) {
            puVar25 = puVar28;
            if (*(byte *)(puVar24 + 10) <= *(byte *)(puVar28 + 10)) {
              puVar25 = puVar24;
            }
          }
          if (puVar24 != puVar23) {
            uVar9 = puVar23[1];
            uVar10 = *puVar24;
            uVar11 = puVar24[1];
            uVar12 = puVar24[2];
            uVar13 = puVar24[3];
            uVar14 = puVar24[4];
            uVar15 = puVar24[5];
            uVar16 = puVar24[6];
            uVar17 = puVar24[7];
            uVar18 = puVar24[8];
            uVar19 = puVar24[9];
            uVar20 = puVar24[10];
            uVar21 = puVar24[0xb];
            *puVar24 = *puVar23;
            puVar24[1] = uVar9;
            uVar9 = puVar23[3];
            puVar24[2] = puVar23[2];
            puVar24[3] = uVar9;
            uVar9 = puVar23[5];
            puVar24[4] = puVar23[4];
            puVar24[5] = uVar9;
            uVar9 = puVar23[7];
            puVar24[6] = puVar23[6];
            puVar24[7] = uVar9;
            uVar9 = puVar23[9];
            puVar24[8] = puVar23[8];
            puVar24[9] = uVar9;
            uVar9 = puVar23[0xb];
            puVar24[10] = puVar23[10];
            puVar24[0xb] = uVar9;
            *puVar23 = uVar10;
            puVar23[1] = uVar11;
            puVar23[2] = uVar12;
            puVar23[3] = uVar13;
            puVar23[4] = uVar14;
            puVar23[5] = uVar15;
            puVar23[6] = uVar16;
            puVar23[7] = uVar17;
            puVar23[8] = uVar18;
            puVar23[9] = uVar19;
            puVar23[10] = uVar20;
            puVar23[0xb] = uVar21;
          }
        }
        goto LAB_1409f200a;
      }
LAB_1409f1ffb:
      local_368 = lVar1;
      FUN_1409f1750(puVar28,lVar22,param_3,param_4);
LAB_1409f200a:
      plVar29 = plVar29 + -3;
    } while (&local_358 <= plVar29);
  }
  return;
code_r0x0001409f1e2d:
  if (*(byte *)(puVar27 + 10) <= *(byte *)(puVar24 + 0x16)) goto LAB_1409f1e24;
LAB_1409f1e40:
  do {
    puVar26 = puVar25;
    puVar25 = puVar26 + -0xc;
    if (puVar25 <= puVar27) break;
  } while (*(byte *)(puVar26 + -2) <= *(byte *)(puVar27 + 10));
  if (puVar28 <= puVar25) {
    if (puVar28 != puVar25) {
      uVar9 = puVar26[-0xb];
      uVar2 = *(undefined4 *)puVar28;
      uVar3 = *(undefined4 *)((longlong)puVar24 + 100);
      uVar4 = *(undefined4 *)(puVar24 + 0xd);
      uVar5 = *(undefined4 *)((longlong)puVar24 + 0x6c);
      uVar10 = puVar24[0xe];
      uVar11 = puVar24[0xf];
      uVar12 = puVar24[0x10];
      uVar13 = puVar24[0x11];
      uVar14 = puVar24[0x12];
      uVar15 = puVar24[0x13];
      uVar16 = puVar24[0x14];
      uVar17 = puVar24[0x15];
      uVar18 = puVar24[0x16];
      uVar19 = puVar24[0x17];
      *puVar28 = *puVar25;
      puVar24[0xd] = uVar9;
      uVar9 = puVar26[-9];
      puVar24[0xe] = puVar26[-10];
      puVar24[0xf] = uVar9;
      uVar9 = puVar26[-7];
      puVar24[0x10] = puVar26[-8];
      puVar24[0x11] = uVar9;
      uVar9 = puVar26[-5];
      puVar24[0x12] = puVar26[-6];
      puVar24[0x13] = uVar9;
      uVar6 = *(undefined4 *)((longlong)puVar26 + -0x1c);
      uVar7 = *(undefined4 *)(puVar26 + -3);
      uVar8 = *(undefined4 *)((longlong)puVar26 + -0x14);
      *(undefined4 *)(puVar24 + 0x14) = *(undefined4 *)(puVar26 + -4);
      *(undefined4 *)((longlong)puVar24 + 0xa4) = uVar6;
      *(undefined4 *)(puVar24 + 0x15) = uVar7;
      *(undefined4 *)((longlong)puVar24 + 0xac) = uVar8;
      uVar9 = puVar26[-1];
      puVar24[0x16] = puVar26[-2];
      puVar24[0x17] = uVar9;
      *(undefined4 *)puVar25 = uVar2;
      *(undefined4 *)((longlong)puVar26 + -0x5c) = uVar3;
      *(undefined4 *)(puVar26 + -0xb) = uVar4;
      *(undefined4 *)((longlong)puVar26 + -0x54) = uVar5;
      puVar26[-10] = uVar10;
      puVar26[-9] = uVar11;
      puVar26[-8] = uVar12;
      puVar26[-7] = uVar13;
      puVar26[-6] = uVar14;
      puVar26[-5] = uVar15;
      puVar26[-4] = uVar16;
      puVar26[-3] = uVar17;
      puVar26[-2] = uVar18;
      puVar26[-1] = uVar19;
    }
    goto LAB_1409f1e24;
  }
  if (puVar27 != puVar25) {
    uVar9 = puVar26[-0xb];
    uVar2 = *(undefined4 *)puVar27;
    uVar3 = *(undefined4 *)((longlong)puVar27 + 4);
    uVar4 = *(undefined4 *)(puVar27 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar27 + 0xc);
    uVar10 = puVar27[2];
    uVar11 = puVar27[3];
    uVar12 = puVar27[4];
    uVar13 = puVar27[5];
    uVar14 = puVar27[6];
    uVar15 = puVar27[7];
    uVar16 = puVar27[8];
    uVar17 = puVar27[9];
    uVar18 = puVar27[10];
    uVar19 = puVar27[0xb];
    *puVar27 = *puVar25;
    puVar27[1] = uVar9;
    uVar9 = puVar26[-9];
    puVar27[2] = puVar26[-10];
    puVar27[3] = uVar9;
    uVar9 = puVar26[-7];
    puVar27[4] = puVar26[-8];
    puVar27[5] = uVar9;
    uVar9 = puVar26[-5];
    puVar27[6] = puVar26[-6];
    puVar27[7] = uVar9;
    uVar6 = *(undefined4 *)((longlong)puVar26 + -0x1c);
    uVar7 = *(undefined4 *)(puVar26 + -3);
    uVar8 = *(undefined4 *)((longlong)puVar26 + -0x14);
    *(undefined4 *)(puVar27 + 8) = *(undefined4 *)(puVar26 + -4);
    *(undefined4 *)((longlong)puVar27 + 0x44) = uVar6;
    *(undefined4 *)(puVar27 + 9) = uVar7;
    *(undefined4 *)((longlong)puVar27 + 0x4c) = uVar8;
    uVar9 = puVar26[-1];
    puVar27[10] = puVar26[-2];
    puVar27[0xb] = uVar9;
    *(undefined4 *)puVar25 = uVar2;
    *(undefined4 *)((longlong)puVar26 + -0x5c) = uVar3;
    *(undefined4 *)(puVar26 + -0xb) = uVar4;
    *(undefined4 *)((longlong)puVar26 + -0x54) = uVar5;
    puVar26[-10] = uVar10;
    puVar26[-9] = uVar11;
    puVar26[-8] = uVar12;
    puVar26[-7] = uVar13;
    puVar26[-6] = uVar14;
    puVar26[-5] = uVar15;
    puVar26[-4] = uVar16;
    puVar26[-3] = uVar17;
    puVar26[-2] = uVar18;
    puVar26[-1] = uVar19;
  }
  local_368._0_4_ = (int)local_368 + -1;
  lVar22 = (longlong)puVar25 + (-0x60 - (longlong)puVar27);
  lVar22 = lVar22 / 6 + (lVar22 >> 0x3f);
  if ((lVar22 >> 4) - (lVar22 >> 0x3f) < ((longlong)puVar23 - (longlong)puVar28) / 0x60) {
    if (puVar28 < puVar23) {
      *plVar29 = (longlong)puVar28;
      plVar29[1] = (longlong)puVar23;
      *(int *)(plVar29 + 2) = (int)local_368;
      plVar29 = plVar29 + 3;
    }
    if (puVar25 <= puVar27 + 0xc) goto LAB_1409f200a;
    puVar23 = puVar26 + -0x18;
    puVar28 = puVar27;
  }
  else {
    if (puVar27 + 0xc < puVar25) {
      *plVar29 = (longlong)puVar27;
      plVar29[1] = (longlong)(puVar26 + -0x18);
      *(int *)(plVar29 + 2) = (int)local_368;
      plVar29 = plVar29 + 3;
    }
    if (puVar23 <= puVar28) goto LAB_1409f200a;
  }
  lVar22 = ((longlong)puVar23 - (longlong)puVar28) / 0x60 + 1;
  puVar27 = puVar28;
  if ((int)local_368 == 0) goto LAB_1409f1ffb;
  goto LAB_1409f1d90;
}



// FUNCTION 1409f2120 FUN_1409f2120 body=470 status=ok
// SIG undefined FUN_1409f2120(void)

int FUN_1409f2120(longlong *param_1,longlong *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  lVar7 = *(longlong *)*param_1;
  iVar15 = 0;
  lVar14 = DAT_1469e91b0;
  iVar13 = (int)DAT_1469e91c4;
  if (lVar7 != 0) {
    iVar9 = *(int *)(lVar7 + 0xc);
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar4 = iVar9 >> 0x1f & 0xffff;
      uVar3 = iVar9 + uVar4;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if (((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) && (lVar7 != *param_2)) {
      bVar8 = 1;
      lVar7 = 0;
      iVar9 = 0;
      iVar15 = 0;
      goto LAB_1409f21e5;
    }
  }
  bVar8 = 0;
  lVar7 = 0;
  iVar9 = 0;
LAB_1409f21e5:
  do {
    lVar7 = lVar7 + 1;
    iVar10 = iVar9 + 1;
    if (lVar7 < lVar11) {
      plVar12 = (longlong *)(lVar7 * 0x1d0 + *param_1);
      do {
        lVar5 = *plVar12;
        if (lVar5 == 0) {
LAB_1409f2251:
          bVar2 = 0;
        }
        else {
          uVar3 = *(uint *)(lVar5 + 0xc);
          if ((int)uVar3 < iVar13) {
            uVar4 = uVar3 & 0xffff;
            if ((int)uVar3 < 0) {
              uVar3 = uVar3 + 0xffff;
              uVar4 = uVar4 - 0x10000;
            }
            lVar6 = *(longlong *)(lVar14 + (longlong)((int)uVar3 >> 0x10) * 8) +
                    (longlong)(int)uVar4 * 0x18;
          }
          else {
            lVar6 = 0;
          }
          if (((*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0) || (lVar5 == *param_2)) goto LAB_1409f2251;
          bVar2 = 1;
        }
        if (bVar8 != bVar2) break;
        iVar10 = iVar10 + 1;
        lVar7 = lVar7 + 1;
        plVar12 = plVar12 + 0x3a;
      } while (lVar7 < lVar11);
    }
    if (bVar8 != 0) {
      if (iVar15 != iVar9) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar15 * 0x1d0 + *param_1),
                   (void *)((longlong)iVar9 * 0x1d0 + *param_1),(longlong)(iVar10 - iVar9) * 0x1d0);
        lVar14 = DAT_1469e91b0;
        iVar13 = (int)DAT_1469e91c4;
      }
      iVar15 = iVar15 + (iVar10 - iVar9);
    }
    bVar8 = bVar8 ^ 1;
    iVar9 = iVar10;
    if (lVar11 <= lVar7) {
      *(int *)(param_1 + 1) = iVar15;
      return iVar1 - iVar15;
    }
  } while( true );
}



// FUNCTION 1409f2300 FUN_1409f2300 body=517 status=ok
// SIG undefined FUN_1409f2300(void)

int FUN_1409f2300(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  ulonglong local_68;
  
  iVar1 = (int)param_1[1];
  lVar8 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  puVar4 = (undefined8 *)*param_1;
  uVar6 = 0;
  fVar14 = *(float *)((longlong)puVar4 + 0x14) - *(float *)*param_2;
  local_68 = 0;
  *(float *)((longlong)puVar4 + 0x14) = fVar14;
  uVar9 = uVar6;
  uVar11 = uVar6;
  if ((0.0 < fVar14) || (cVar2 = FUN_14059f130(puVar4), cVar2 == '\0')) {
    cVar2 = FUN_14059f130(puVar4);
    bVar12 = cVar2 != '\0';
  }
  else {
    FUN_1405aa990(*puVar4,*(undefined4 *)(puVar4 + 2),0,0);
    bVar12 = false;
  }
  do {
    iVar5 = (int)uVar6;
    uVar6 = (ulonglong)(iVar5 + 1);
    uVar9 = uVar9 + 1;
    if ((longlong)uVar9 < lVar8) {
      lVar7 = uVar9 * 0x18;
      do {
        puVar4 = (undefined8 *)(*param_1 + lVar7);
        fVar14 = *(float *)((longlong)puVar4 + 0x14) - *(float *)*param_2;
        *(float *)((longlong)puVar4 + 0x14) = fVar14;
        if ((0.0 < fVar14) || (cVar2 = FUN_14059f130(puVar4), cVar2 == '\0')) {
          cVar2 = FUN_14059f130(puVar4);
          bVar13 = cVar2 != '\0';
        }
        else {
          FUN_1405aa990(*puVar4,*(undefined4 *)(puVar4 + 2),0,0);
          bVar13 = false;
        }
        uVar11 = local_68;
        if (bVar12 != bVar13) break;
        uVar6 = (ulonglong)((int)uVar6 + 1);
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 0x18;
      } while ((longlong)uVar9 < lVar8);
    }
    iVar3 = (int)uVar6 - iVar5;
    if (bVar12 == false) {
      lVar7 = *param_1 + (longlong)iVar5 * 0x18;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        FUN_140591060(lVar7);
        lVar7 = lVar7 + 0x18;
      }
    }
    else {
      iVar10 = (int)uVar11;
      if (iVar10 != iVar5) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar10 * 0x18),
                   (void *)(*param_1 + (longlong)iVar5 * 0x18),(longlong)iVar3 * 0x18);
      }
      uVar11 = (ulonglong)(uint)(iVar10 + iVar3);
      local_68 = uVar11;
    }
    bVar12 = (bool)(bVar12 ^ 1);
    if (lVar8 <= (longlong)uVar9) {
      *(int *)(param_1 + 1) = (int)uVar11;
      return iVar1 - (int)uVar11;
    }
  } while( true );
}



// FUNCTION 1409f2510 FUN_1409f2510 body=971 status=ok
// SIG undefined FUN_1409f2510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1409f2510(longlong param_1,byte param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118 [2];
  undefined1 local_110 [192];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar5 = FUN_142bbd600();
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) ||
     (lVar7 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10),
     lVar6 = UBlackboardKeyType_Bool::GetPrivateStaticClass(), lVar7 != lVar6)) {
    return 0;
  }
  lVar7 = *(longlong *)(lVar5 + 8);
  lVar13 = 0;
  bVar8 = *(byte *)(lVar7 + 0x2b) >> 1 & 1;
  lVar6 = lVar13;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar2 = (ulonglong)bVar8 * 4;
  lVar6 = lVar6 + lVar2;
  if (lVar6 == 0) {
    return 0;
  }
  if (bVar8 != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_2 * 8);
  }
  cVar3 = FUN_142bcaae0(lVar7,lVar6,param_3);
  if (((cVar3 == '\0') ||
      (FUN_142bc3660(param_1,param_2), (*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0))
     || (cVar3 = FUN_142bc1e70(param_1,param_2), cVar3 == '\0')) {
    return 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (((lVar7 != 0) || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x150), lVar7 != 0)) {
    lVar6 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_1409f267f;
  }
  lVar7 = lVar13;
LAB_1409f267f:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (lVar7,local_118,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar12 = (ulonglong)local_118[0];
    do {
      iVar11 = (int)uVar12;
      if (iVar11 < local_48) {
        puVar10 = local_110;
        if (local_50 != (undefined1 *)0x0) {
          puVar10 = local_50;
        }
        if (*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) == -1) goto LAB_1409f26cb;
        bVar4 = true;
      }
      else {
LAB_1409f26cb:
        bVar4 = false;
      }
      if (!bVar4) {
        if (local_50 == (undefined1 *)0x0) {
          return 1;
        }
        FMemory::Free(local_50);
        return 1;
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = FWeakObjectPtr::Get(**(longlong **)(puVar10 + (longlong)iVar11 * 0x18) +
                                  ((longlong)*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar7 != 0) && (cVar3 = FUN_142bcaf00(param_1,lVar7), cVar3 != '\0')) {
        lVar6 = FUN_142bbbf70(lVar7);
        if (lVar6 == 0) {
          bVar8 = 0xff;
        }
        else {
          bVar8 = UBlackboardData::GetKeyID(lVar6,lVar5);
        }
        if (bVar8 != 0xff) {
          lVar6 = *(longlong *)(lVar5 + 8);
          if ((*(byte *)(lVar6 + 0x2b) & 2) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(lVar7 + 0x1a8) + (ulonglong)(uint)bVar8 * 8);
          }
          lVar9 = lVar13;
          if ((*(int *)(lVar7 + 400) != 0) && ((int)(uint)bVar8 < *(int *)(lVar7 + 0x1a0))) {
            lVar9 = (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x198) + (ulonglong)bVar8 * 2) +
                    *(longlong *)(lVar7 + 0x188);
          }
          FUN_142bcaae0(lVar6,lVar9 + lVar2,param_3);
          FUN_142bc3660(lVar7,bVar8);
        }
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar7 = (longlong)(int)local_118[0];
      iVar11 = *(int *)(puVar10 + lVar7 * 0x18 + 0x14);
      *(int *)(puVar10 + lVar7 * 0x18 + 0x10) = iVar11;
      puVar1 = (undefined8 *)(puVar10 + lVar7 * 0x18);
      while (iVar11 != -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + (longlong)iVar11 * 0x18);
        lVar7 = *(longlong *)*puVar1;
        local_120 = *(undefined4 *)(lVar7 + (longlong)iVar11 * 0x18);
        local_11c = *(undefined4 *)(lVar7 + 4 + (longlong)iVar11 * 0x18);
        local_128 = *(undefined4 *)(puVar1 + 1);
        local_124 = *(undefined4 *)((longlong)puVar1 + 0xc);
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_120,&local_128);
        if (cVar3 != '\0') break;
        iVar11 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar11;
      }
      uVar12 = (ulonglong)(int)local_118[0];
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
    } while ((*(int *)(puVar10 + uVar12 * 0x18 + 0x10) != -1) ||
            (local_48 + -1 <= (int)local_118[0]));
    local_118[0] = local_118[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_118);
  } while( true );
}



// FUNCTION 1409f28e0 FUN_1409f28e0 body=169 status=ok
// SIG undefined FUN_1409f28e0(void)

undefined8 *
FUN_1409f28e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_28 [16];
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = FUN_14058f8f0(local_28,param_5);
  param_1[1] = param_2;
  *param_1 = &PTR_GetPoolName_1441db480;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  FUN_14058f8f0(param_1 + 4,uVar3);
  uVar4 = FDelegateHandle::GenerateNewID();
  param_1[6] = uVar4;
  FUN_140591060(uVar3);
  *param_1 = &PTR_GetPoolName_1441db4c8;
  FUN_140591060(param_5);
  return param_1;
}



// FUNCTION 1409f2990 FUN_1409f2990 body=630 status=ok
// SIG undefined FUN_1409f2990(void)

undefined8 * FUN_1409f2990(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  local_res8 = DAT_146859058;
  lVar1 = FName::GetComparisonNameEntry(&local_res8);
  if (lVar1 == 0) {
    local_48 = (undefined2 *)0x0;
    local_40 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar1,&local_48);
  }
  puVar3 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar3 = local_48;
  }
  FUN_141784790(param_2,puVar3);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar2 = FUN_141442a00();
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res8,uVar2,param_2);
  local_res10 = DAT_146859050;
  lVar1 = FName::GetComparisonNameEntry(&local_res10);
  if (lVar1 == 0) {
    local_38 = (undefined2 *)0x0;
    local_30 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar1,&local_38);
  }
  puVar3 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar3 = local_38;
  }
  FUN_141784790(param_2,puVar3);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar2 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res10,uVar2,param_2);
  FUN_14074bc40(param_1,param_2);
  *param_1 = &PTR_FUN_1441d1b90;
  param_1[0x8b] = &PTR_LAB_1441d24a0;
  param_1[0xa1] = &PTR_LAB_1441d24f8;
  param_1[0xa2] = &PTR_LAB_1441d2510;
  param_1[0xa3] = &PTR_LAB_1441d2558;
  param_1[0xa4] = &PTR_LAB_1441d2580;
  param_1[0xb3] = &PTR_LAB_1441d2598;
  param_1[0xb4] = &PTR_LAB_1441d25d0;
  param_1[0xb5] = &PTR_LAB_1441d25e8;
  param_1[0xb6] = &PTR_LAB_1441d2600;
  param_1[0xb7] = &PTR_LAB_1441d2670;
  param_1[0xb8] = &PTR_LAB_1441d2688;
  param_1[0xd8] = &PTR_LAB_1441d26a0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe8] = param_1[0xc1];
  param_1[0xe9] = param_1[0xc5];
  *(undefined2 *)(param_1 + 0xeb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x75a) = 0;
  return param_1;
}



// FUNCTION 1409f2c10 FUN_1409f2c10 body=193 status=ok
// SIG undefined FUN_1409f2c10(void)

undefined8 * FUN_1409f2c10(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1441dad88;
  *(undefined4 *)(param_1 + 0x8b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x93] = 0;
  FUN_140590080(param_1 + 0x94);
  FUN_14223ef90(param_1,1);
  FUN_14223d380(param_1,1);
  AActor::SetActorTickEnabled(param_1,0);
  return param_1;
}



// FUNCTION 1409f2ce0 FUN_1409f2ce0 body=1280 status=ok
// SIG undefined FUN_1409f2ce0(void)

undefined8 * FUN_1409f2ce0(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  FUN_14125b280();
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfe;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x20000000;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 0x10;
  *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) | 2;
  uVar10 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1441d7fc0;
  param_1[0x8b] = &PTR_LAB_1441d86d0;
  param_1[0x8c] = &PTR_LAB_1441d86e8;
  param_1[0xd0] = &PTR_LAB_1441d8710;
  param_1[0xd1] = &PTR_LAB_1441d8728;
  param_1[0xdc] = &PTR_LAB_1441d87f8;
  param_1[0xdd] = &PTR_LAB_1441d8840;
  param_1[0xde] = &PTR_LAB_1441d8858;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined1 *)((longlong)param_1 + 0x729) = 1;
  *(undefined1 *)((longlong)param_1 + 0x501) = 1;
  *(undefined4 *)(param_1 + 0xb5) = 0x1010101;
  lVar8 = *(longlong *)((longlong)pvVar2 + uVar10 * 8);
  *(undefined2 *)((longlong)param_1 + 0x5ad) = 0x101;
  if ((*(int *)(lVar8 + 0x38) < DAT_146865dd8) &&
     (_Init_thread_header(&DAT_146865dd8), DAT_146865dd8 == -1)) {
    puVar9 = (undefined8 *)FName::FName(local_res8,L"Sphere",1);
    DAT_146865dd0 = *puVar9;
    _Init_thread_footer(&DAT_146865dd8);
  }
  uVar5 = DAT_146865dd0;
  uVar3 = FUN_142a175e0();
  lVar4 = FUN_141752410(param_1,uVar5,uVar3,uVar3,0,0,0);
  param_1[0xdf] = lVar4;
  param_1[0x2d] = lVar4;
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x14c) = 1;
    *(undefined4 *)(param_1[0xdf] + 0x710) = 0x42400000;
    *(undefined1 *)(param_1[0xdf] + 0x303) = 0;
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_146865de8) &&
     (_Init_thread_header(&DAT_146865de8), DAT_146865de8 == -1)) {
    puVar9 = (undefined8 *)FName::FName(local_res8,L"DroneMovement",1);
    DAT_146865de0 = *puVar9;
    _Init_thread_footer(&DAT_146865de8);
  }
  uVar5 = DAT_146865de0;
  uVar3 = AUGWallHowlingMouthTrap::GetPrivateStaticClass();
  uVar5 = FUN_141752410(param_1,uVar5,uVar3,uVar3,0,0,0);
  param_1[0xe0] = uVar5;
  if ((*(int *)(lVar8 + 0x38) < DAT_146865df8) &&
     (_Init_thread_header(&DAT_146865df8), DAT_146865df8 == -1)) {
    puVar9 = (undefined8 *)FName::FName(local_res8,L"OakDamage",1);
    DAT_146865df0 = *puVar9;
    _Init_thread_footer(&DAT_146865df8);
  }
  uVar5 = DAT_146865df0;
  uVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
  lVar4 = FUN_141752410(param_1,uVar5,uVar3,uVar3,0,0,0);
  param_1[0xe1] = lVar4;
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x14c) = 1;
    *(byte *)(param_1[0xe1] + 0x660) = *(byte *)(param_1[0xe1] + 0x660) & 0xef;
    lVar4 = param_1[0xe1];
    plVar11 = (longlong *)(lVar4 + 0x240);
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = 0x40a00380;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_1c;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
      (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
      iVar1 = *(int *)(lVar4 + 0x248);
      *(int *)(lVar4 + 0x248) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x24c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
      }
      lVar4 = *plVar11;
      *(longlong **)(lVar4 + (longlong)iVar1 * 0x10) = plVar6;
      *(undefined4 *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = 3;
    }
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_146865e08) &&
     (_Init_thread_header(&DAT_146865e08), DAT_146865e08 == -1)) {
    puVar9 = (undefined8 *)FName::FName(local_res8,L"Targetable",1);
    DAT_146865e00 = *puVar9;
    _Init_thread_footer(&DAT_146865e08);
  }
  uVar5 = DAT_146865e00;
  uVar3 = FUN_142e79d90();
  lVar4 = FUN_141752410(param_1,uVar5,uVar3,uVar3,0,0,0);
  param_1[0xe2] = lVar4;
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x14c) = 1;
    FUN_142df2730(param_1[0xe2],0);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_146865e18) &&
     (_Init_thread_header(&DAT_146865e18), DAT_146865e18 == -1)) {
    puVar9 = (undefined8 *)FName::FName(local_res8,L"AIPerceptionStimuliSource",1);
    DAT_146865e10 = *puVar9;
    _Init_thread_footer(&DAT_146865e18);
  }
  uVar5 = DAT_146865e10;
  uVar3 = FUN_142c2cf40();
  lVar8 = FUN_141752410(param_1,uVar5,uVar3,uVar3,0,0,0);
  param_1[0xe4] = lVar8;
  if (lVar8 != 0) {
    *(undefined1 *)(lVar8 + 0x14c) = 1;
  }
  return param_1;
}



// FUNCTION 1409f31e0 FUN_1409f31e0 body=61 status=ok
// SIG undefined FUN_1409f31e0(void)

undefined8 * FUN_1409f31e0(undefined8 *param_1)

{
  FUN_142f881c0();
  *param_1 = &PTR_FUN_1441d9438;
  param_1[0x8b] = &PTR_LAB_1441d9ca8;
  param_1[0xc3] = &PTR_LAB_1441d9cc0;
  return param_1;
}



// FUNCTION 1409f3220 FUN_1409f3220 body=660 status=ok
// SIG undefined FUN_1409f3220(void)

undefined8 * FUN_1409f3220(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_14074c450();
  *param_1 = &PTR_FUN_1441d9cd0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xac] = 0;
  param_1[0xb0] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(undefined1 *)(param_1 + 0x92) = 1;
  *(undefined1 *)(param_1 + 0xad) = 0;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SpawnerComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1414763d0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8d] = uVar3;
  local_res8 = 0;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  FUN_1407c4f50(param_1[0x8d]);
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SpawnPointComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_141477600();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8e] = uVar3;
  local_res8 = 0;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SkelMeshComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a07000();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8f] = uVar3;
  local_res8 = 0;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"RegionComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1414ba0d0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x90] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"TerritoryComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e7dfd0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x91] = uVar3;
  local_res8 = 0;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  return param_1;
}



// FUNCTION 1409f34c0 FUN_1409f34c0 body=140 status=ok
// SIG undefined FUN_1409f34c0(void)

undefined8 * FUN_1409f34c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1441da3f0;
  param_1[0x8b] = &PTR_LAB_1441daad8;
  param_1[0x8f] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SplineComponent",1);
  uVar3 = *puVar1;
  uVar2 = UGNewsMenuItem::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 1409f3550 FUN_1409f3550 body=633 status=ok
// SIG undefined FUN_1409f3550(void)

undefined1 * FUN_1409f3550(undefined1 *param_1)

{
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_142de2eb0();
  FUN_142de2eb0(param_1 + 0x80);
  FUN_142de2eb0(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x180) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x184) = 0x3f000000;
  param_1[0x188] = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0x41700000;
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x194) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x198) = 3;
  param_1[0x19c] = 1;
  FUN_142de2d20(&local_88,0x44bb8000,0);
  *param_1 = local_88;
  param_1[1] = local_87;
  param_1[2] = local_86;
  param_1[3] = local_85;
  *(undefined4 *)(param_1 + 4) = local_84;
  *(undefined8 *)(param_1 + 0x10) = local_78;
  *(undefined8 *)(param_1 + 0x20) = local_68;
  *(undefined8 *)(param_1 + 0x28) = uStack_60;
  *(undefined8 *)(param_1 + 0x18) = local_70;
  *(undefined4 *)(param_1 + 8) = local_80;
  *(undefined8 *)(param_1 + 0x68) = local_20;
  *(undefined8 *)(param_1 + 0x30) = local_58;
  *(undefined8 *)(param_1 + 0x38) = uStack_50;
  *(undefined8 *)(param_1 + 0x40) = local_48;
  *(undefined8 *)(param_1 + 0x48) = uStack_40;
  *(undefined8 *)(param_1 + 0x50) = local_38;
  *(undefined8 *)(param_1 + 0x58) = local_30;
  *(undefined8 *)(param_1 + 0x60) = uStack_28;
  *(undefined4 *)(param_1 + 0x70) = local_18;
  *(undefined4 *)(param_1 + 0x74) = local_14;
  *(undefined4 *)(param_1 + 0x78) = local_10;
  FUN_142de2d20(&local_88,0x44fa0000,0);
  param_1[0x80] = local_88;
  param_1[0x81] = local_87;
  param_1[0x82] = local_86;
  *(undefined4 *)(param_1 + 0x84) = local_84;
  param_1[0x83] = local_85;
  *(undefined8 *)(param_1 + 0xa0) = local_68;
  *(undefined8 *)(param_1 + 0xa8) = uStack_60;
  *(undefined8 *)(param_1 + 0x90) = local_78;
  *(undefined4 *)(param_1 + 0x88) = local_80;
  *(undefined8 *)(param_1 + 0x98) = local_70;
  *(undefined8 *)(param_1 + 0xb0) = local_58;
  *(undefined8 *)(param_1 + 0xb8) = uStack_50;
  *(undefined8 *)(param_1 + 0xc0) = local_48;
  *(undefined8 *)(param_1 + 200) = uStack_40;
  *(undefined8 *)(param_1 + 0xe8) = local_20;
  *(undefined8 *)(param_1 + 0xd8) = local_30;
  *(undefined8 *)(param_1 + 0xe0) = uStack_28;
  *(undefined8 *)(param_1 + 0xd0) = local_38;
  *(undefined4 *)(param_1 + 0xf0) = local_18;
  *(undefined4 *)(param_1 + 0xf4) = local_14;
  *(undefined4 *)(param_1 + 0xf8) = local_10;
  FUN_142de2d20(&local_88,0x453b8000,0);
  param_1[0x100] = local_88;
  param_1[0x101] = local_87;
  param_1[0x102] = local_86;
  param_1[0x103] = local_85;
  *(undefined8 *)(param_1 + 0x110) = local_78;
  *(undefined4 *)(param_1 + 0x104) = local_84;
  *(undefined8 *)(param_1 + 0x118) = local_70;
  *(undefined8 *)(param_1 + 0x120) = local_68;
  *(undefined8 *)(param_1 + 0x128) = uStack_60;
  *(undefined8 *)(param_1 + 0x168) = local_20;
  *(undefined4 *)(param_1 + 0x108) = local_80;
  *(undefined8 *)(param_1 + 0x130) = local_58;
  *(undefined8 *)(param_1 + 0x138) = uStack_50;
  *(undefined8 *)(param_1 + 0x140) = local_48;
  *(undefined8 *)(param_1 + 0x148) = uStack_40;
  *(undefined8 *)(param_1 + 0x150) = local_38;
  *(undefined8 *)(param_1 + 0x158) = local_30;
  *(undefined8 *)(param_1 + 0x160) = uStack_28;
  *(undefined4 *)(param_1 + 0x170) = local_18;
  *(undefined4 *)(param_1 + 0x174) = local_14;
  *(undefined4 *)(param_1 + 0x178) = local_10;
  return param_1;
}



// FUNCTION 1409f37d0 GetLdnLastError body=16 status=ok
// SIG undefined GetLdnLastError(void)

undefined8 * ATTLGameSession::GetLdnLastError(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1409f37e0 FUN_1409f37e0 body=307 status=ok
// SIG undefined FUN_1409f37e0(void)

longlong FUN_1409f37e0(longlong param_1)

{
  FUN_142de2d20(param_1,0x44fa0000,0);
  *(undefined1 *)(param_1 + 0x80) = 0;
  FUN_142de2d20(param_1 + 0x88,0,0);
  *(undefined1 *)(param_1 + 0x108) = 0;
  FUN_142de2f30(param_1 + 0x110,0,1);
  FUN_142de2f30(param_1 + 400,0,1);
  FUN_142de2f30(param_1 + 0x210,0,1);
  FUN_142de2f30(param_1 + 0x290,0,1);
  FUN_142de2f30(param_1 + 0x310,0,1);
  FUN_142de2d20(param_1 + 0x390,0,0);
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined2 *)(param_1 + 0x418) = 0xff00;
  FUN_142de2d20(param_1 + 0x420,0,0);
  FUN_142de2d20(param_1 + 0x4a0,0x461c4000,0);
  FUN_142de2d20(param_1 + 0x520,0xbf800000,0);
  FUN_142de2d20(param_1 + 0x5a0,0x43fa0000,0);
  *(undefined1 *)(param_1 + 0x620) = 1;
  *(undefined1 *)(param_1 + 0x628) = 0;
  FUN_142de2eb0(param_1 + 0x630);
  *(undefined1 *)(param_1 + 0x6b0) = 0;
  return param_1;
}



// FUNCTION 1409f3920 FUN_1409f3920 body=111 status=ok
// SIG undefined FUN_1409f3920(void)

undefined1 * FUN_1409f3920(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 8,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 8),_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1409f3990 FUN_1409f3990 body=646 status=ok
// SIG undefined FUN_1409f3990(void)

undefined8 * FUN_1409f3990(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = 0;
  param_1[0xb] = param_2[0xb];
  param_2[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  param_2[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((longlong)param_1 + 0x69) = *(undefined1 *)((longlong)param_2 + 0x69);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x99) = *(undefined1 *)((longlong)param_2 + 0x99);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0xa1) = *(undefined1 *)((longlong)param_2 + 0xa1);
  *(undefined1 *)((longlong)param_1 + 0xa2) = *(undefined1 *)((longlong)param_2 + 0xa2);
  param_1[0x15] = param_2[0x15];
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x1b,param_2 + 0x1b);
  param_1[0x3d] = 0;
  if (param_2[0x3d] == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 0x1d,param_2 + 0x1d,0x100);
  }
  if (param_1[0x3d] != 0) {
    FMemory::Free();
  }
  param_1[0x3d] = param_2[0x3d];
  param_2[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)((longlong)param_2 + 500);
  param_2[0x3e] = 0;
  param_1[0x43] = 0;
  if (param_2[0x43] == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 0x3f,param_2 + 0x3f,0x20);
  }
  if (param_1[0x43] != 0) {
    FMemory::Free();
  }
  param_1[0x43] = param_2[0x43];
  param_2[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)((longlong)param_2 + 0x224);
  param_2[0x44] = 0;
  return param_1;
}



// FUNCTION 1409f3c20 TVertexInterfaceGroup<Metasound::FEnvironmentVertex> body=146 status=ok
// SIG undefined TVertexInterfaceGroup<Metasound::FEnvironmentVertex>(void)

undefined8 *
Metasound::TVertexInterfaceGroup<Metasound::FEnvironmentVertex>::
TVertexInterfaceGroup<Metasound::FEnvironmentVertex>(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  FUN_1409f0400(param_1,*param_2,*(undefined4 *)(param_2 + 1),0,0);
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[2],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1409f3cc0 FUN_1409f3cc0 body=100 status=ok
// SIG undefined FUN_1409f3cc0(void)

longlong FUN_1409f3cc0(longlong param_1)

{
  FUN_142de2d20(param_1,0x43fa0000,0);
  FUN_142de2d20(param_1 + 0x80,0x42c80000,0);
  FUN_142de2d20(param_1 + 0x100,0x43340000,0);
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x66;
  *(undefined1 *)(param_1 + 0x81) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 0x101) = *(undefined1 *)(param_1 + 1);
  return param_1;
}



// FUNCTION 1409f3d30 FTextSnapshot body=17 status=ok
// SIG undefined FTextSnapshot(void)

undefined8 * FTextSnapshot::FTextSnapshot(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1409f3d50 FUN_1409f3d50 body=117 status=ok
// SIG undefined FUN_1409f3d50(void)

longlong FUN_1409f3d50(longlong param_1)

{
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x24) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x28) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x2c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0x40400000;
  *(undefined4 *)(param_1 + 0xb4) = 0x45000000;
  *(undefined4 *)(param_1 + 0x94) = 0x7f7fffff;
  return param_1;
}



// FUNCTION 1409f3dd0 FUN_1409f3dd0 body=323 status=ok
// SIG undefined FUN_1409f3dd0(void)

undefined8 * FUN_1409f3dd0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = 0;
  lVar2 = param_2[4];
  iVar5 = *(int *)(param_2 + 5);
  *(int *)(param_1 + 5) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar5,0);
    puVar4 = (undefined1 *)param_1[4];
    puVar6 = (undefined8 *)(lVar2 + 8);
    do {
      *puVar4 = *(undefined1 *)(puVar6 + -1);
      *(undefined8 *)(puVar4 + 8) = 0;
      iVar1 = *(int *)(puVar6 + 1);
      pvVar3 = (void *)*puVar6;
      *(int *)(puVar4 + 0x10) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(puVar4 + 0x14) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar4 + 8,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + 8),pvVar3,(longlong)iVar1 << 3);
      }
      puVar4 = puVar4 + 0x18;
      puVar6 = puVar6 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_1409f3920(param_1 + 6,param_2 + 6);
  param_1[9] = 0;
  iVar5 = *(int *)(param_2 + 10);
  pvVar3 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 9,iVar5,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[9],pvVar3,(longlong)iVar5 << 3);
  }
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
  return param_1;
}



// FUNCTION 1409f3f20 FUN_1409f3f20 body=236 status=ok
// SIG undefined FUN_1409f3f20(void)

undefined4 *
FUN_1409f3f20(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
             undefined1 param_9,undefined4 *param_10,undefined4 param_11,undefined4 param_12)

{
  *(undefined1 *)((longlong)param_1 + 6) = param_5;
  *(undefined1 *)((longlong)param_1 + 7) = param_6;
  *(undefined1 *)(param_1 + 2) = param_7;
  *param_1 = param_2;
  param_1[3] = param_8;
  *(undefined1 *)(param_1 + 1) = param_3;
  *(undefined1 *)((longlong)param_1 + 5) = param_4;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[4] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x13] = 0;
  param_1[7] = 0x461c4000;
  param_1[8] = 0xbf800000;
  param_1[9] = 0x43fa0000;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0x12] = 0xbf800000;
  *(undefined1 *)(param_1 + 0x14) = param_9;
  param_1[0x15] = param_11;
  param_1[0x16] = param_12;
  if (param_10 != (undefined4 *)0x0) {
    param_1[4] = *param_10;
    param_1[5] = param_10[1];
    param_1[6] = param_10[2];
    param_1[7] = param_10[3];
    param_1[8] = param_10[4];
    param_1[9] = param_10[5];
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_10 + 6);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_10 + 8);
    param_1[0xe] = param_10[10];
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_10 + 0xb);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_10 + 0xc);
    param_1[0x12] = param_10[0xe];
    param_1[0x13] = param_10[0xf];
  }
  return param_1;
}



// FUNCTION 1409f4010 FUN_1409f4010 body=872 status=ok
// SIG undefined FUN_1409f4010(void)

undefined8 * FUN_1409f4010(undefined8 *param_1)

{
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144057018;
  param_1[5] = &PTR_LAB_1440573d0;
  FUN_1406fedb0(param_1 + 0x20);
  *param_1 = &PTR_FUN_1441d17c0;
  param_1[5] = &PTR_LAB_1441d1b78;
  FUN_142de2eb0(param_1 + 0x48);
  FUN_142de2eb0(param_1 + 0x58);
  FUN_142de2eb0(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x78) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x41700000;
  *(undefined4 *)(param_1 + 0x7a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x7b) = 3;
  *(undefined1 *)((longlong)param_1 + 0x3dc) = 1;
  FUN_142de2d20(&local_88,0x44bb8000,0);
  *(undefined1 *)(param_1 + 0x48) = local_88;
  *(undefined1 *)((longlong)param_1 + 0x241) = local_87;
  *(undefined1 *)((longlong)param_1 + 0x242) = local_86;
  *(undefined1 *)((longlong)param_1 + 0x243) = local_85;
  *(undefined4 *)((longlong)param_1 + 0x244) = local_84;
  param_1[0x4a] = local_78;
  param_1[0x4c] = local_68;
  param_1[0x4d] = uStack_60;
  param_1[0x4b] = local_70;
  *(undefined4 *)(param_1 + 0x49) = local_80;
  param_1[0x55] = local_20;
  param_1[0x4e] = local_58;
  param_1[0x4f] = uStack_50;
  param_1[0x50] = local_48;
  param_1[0x51] = uStack_40;
  param_1[0x52] = local_38;
  param_1[0x53] = local_30;
  param_1[0x54] = uStack_28;
  *(undefined4 *)(param_1 + 0x56) = local_18;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = local_14;
  *(undefined4 *)(param_1 + 0x57) = local_10;
  FUN_142de2d20(&local_88,0x44fa0000,0);
  *(undefined1 *)(param_1 + 0x58) = local_88;
  *(undefined1 *)((longlong)param_1 + 0x2c1) = local_87;
  *(undefined1 *)((longlong)param_1 + 0x2c2) = local_86;
  *(undefined1 *)((longlong)param_1 + 0x2c3) = local_85;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = local_84;
  param_1[0x5a] = local_78;
  param_1[0x5c] = local_68;
  param_1[0x5d] = uStack_60;
  param_1[0x5b] = local_70;
  *(undefined4 *)(param_1 + 0x59) = local_80;
  param_1[0x65] = local_20;
  param_1[0x5e] = local_58;
  param_1[0x5f] = uStack_50;
  param_1[0x60] = local_48;
  param_1[0x61] = uStack_40;
  param_1[0x62] = local_38;
  param_1[99] = local_30;
  param_1[100] = uStack_28;
  *(undefined4 *)(param_1 + 0x66) = local_18;
  *(undefined4 *)((longlong)param_1 + 0x334) = local_14;
  *(undefined4 *)(param_1 + 0x67) = local_10;
  FUN_142de2d20(&local_88,0x453b8000,0);
  *(undefined1 *)(param_1 + 0x68) = local_88;
  *(undefined1 *)((longlong)param_1 + 0x341) = local_87;
  *(undefined1 *)((longlong)param_1 + 0x342) = local_86;
  *(undefined1 *)((longlong)param_1 + 0x343) = local_85;
  param_1[0x6a] = local_78;
  *(undefined4 *)((longlong)param_1 + 0x344) = local_84;
  param_1[0x6b] = local_70;
  param_1[0x6c] = local_68;
  param_1[0x6d] = uStack_60;
  param_1[0x75] = local_20;
  *(undefined4 *)(param_1 + 0x69) = local_80;
  param_1[0x6e] = local_58;
  param_1[0x6f] = uStack_50;
  param_1[0x70] = local_48;
  param_1[0x71] = uStack_40;
  param_1[0x72] = local_38;
  param_1[0x73] = local_30;
  param_1[0x74] = uStack_28;
  *(undefined4 *)(param_1 + 0x76) = local_18;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = local_14;
  *(undefined4 *)(param_1 + 0x77) = local_10;
  param_1[0x7c] = 0;
  *(undefined2 *)(param_1 + 0x7d) = 0xff00;
  param_1[0x7e] = 0;
  *(undefined2 *)(param_1 + 0x7f) = 0xff00;
  param_1[0x80] = 0;
  *(undefined2 *)(param_1 + 0x81) = 0xff00;
  param_1[0x82] = 0;
  *(undefined2 *)(param_1 + 0x83) = 0xff00;
  param_1[0x84] = 0;
  *(undefined2 *)(param_1 + 0x85) = 0xff00;
  param_1[0x86] = 0;
  *(undefined2 *)(param_1 + 0x87) = 0xff00;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  return param_1;
}



// FUNCTION 1409f4380 FUN_1409f4380 body=84 status=ok
// SIG undefined FUN_1409f4380(void)

undefined8 * FUN_1409f4380(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__1441d2828;
  param_1[5] = &PTR_LAB_1441d2bc8;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  return param_1;
}



// FUNCTION 1409f43e0 FUN_1409f43e0 body=69 status=ok
// SIG undefined FUN_1409f43e0(void)

undefined8 * FUN_1409f43e0(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR_FUN_1441d2be0;
  param_1[5] = &PTR_LAB_14405fdb8;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return param_1;
}



// FUNCTION 1409f4430 FUN_1409f4430 body=391 status=ok
// SIG undefined FUN_1409f4430(void)

undefined8 * FUN_1409f4430(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__1441d2f80;
  param_1[5] = &PTR_LAB_1441d3320;
  FUN_142de2d20(param_1 + 0x20,0x44fa0000,0);
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_142de2d20(param_1 + 0x31,0,0);
  *(undefined1 *)(param_1 + 0x41) = 0;
  FUN_142de2f30(param_1 + 0x42,0,1);
  FUN_142de2f30(param_1 + 0x52,0,1);
  FUN_142de2f30(param_1 + 0x62,0,1);
  FUN_142de2f30(param_1 + 0x72,0,1);
  FUN_142de2f30(param_1 + 0x82,0,1);
  FUN_142de2d20(param_1 + 0x92,0,0);
  param_1[0xa2] = 0;
  *(undefined2 *)(param_1 + 0xa3) = 0xff00;
  FUN_142de2d20(param_1 + 0xa4,0,0);
  FUN_142de2d20(param_1 + 0xb4,0x461c4000,0);
  FUN_142de2d20(param_1 + 0xc4,0xbf800000,0);
  FUN_142de2d20(param_1 + 0xd4,0x43fa0000,0);
  *(undefined1 *)(param_1 + 0xe4) = 1;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  FUN_142de2eb0(param_1 + 0xe6);
  *(undefined1 *)(param_1 + 0xf6) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  return param_1;
}



// FUNCTION 1409f45c0 FUN_1409f45c0 body=336 status=ok
// SIG undefined FUN_1409f45c0(void)

undefined8 * FUN_1409f45c0(undefined8 *param_1)

{
  FUN_142cb26e0();
  *param_1 = &PTR_FUN_1441d3338;
  param_1[5] = &PTR_LAB_1441d3790;
  param_1[0x2f] = &PTR_LAB_1441d37c0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x42f00000;
  *(undefined1 *)((longlong)param_1 + 0x304) = 1;
  param_1[99] = 0;
  param_1[0x66] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x41200000;
  return param_1;
}



// FUNCTION 1409f4710 FUN_1409f4710 body=213 status=ok
// SIG undefined FUN_1409f4710(void)

undefined8 * FUN_1409f4710(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  FUN_142d7a7d0();
  *param_1 = &PTR_FUN_1441d3c68;
  param_1[5] = &PTR_LAB_1441d41c0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIMelee_Equipped",1);
  param_1[100] = *puVar1;
  *(undefined2 *)(param_1 + 0x65) = 0xff00;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AIMelee_Requesting",1);
  param_1[0x66] = *puVar1;
  *(undefined2 *)(param_1 + 0x67) = 0xff00;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined2 *)(param_1 + 0x6c) = 0x101;
  FName::FName(param_1 + 0x6d,L"BlockAllProjectile",1);
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xf9;
  return param_1;
}



// FUNCTION 1409f47f0 FUN_1409f47f0 body=393 status=ok
// SIG undefined FUN_1409f47f0(void)

undefined8 * FUN_1409f47f0(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  FUN_142327780();
  *param_1 = &PTR_FUN_1441d4470;
  param_1[5] = &PTR_LAB_1441d4d60;
  param_1[0x5a] = &PTR_LAB_1441d4d90;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  puVar3 = (undefined8 *)FName::FName(local_res8,L"AIStolenProj",1);
  param_1[0xea] = *puVar3;
  *(undefined2 *)(param_1 + 0xeb) = 0xff00;
  puVar3 = (undefined8 *)FName::FName(local_res8,L"AIStolenProj_Present",1);
  plVar1 = param_1 + 0xff;
  param_1[0xec] = *puVar3;
  *(undefined2 *)(param_1 + 0xed) = 0xff00;
  *(undefined4 *)(param_1 + 0xee) = 0x42340000;
  *(undefined1 *)((longlong)param_1 + 0x774) = 1;
  *(undefined4 *)(param_1 + 0xef) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf1) = 1;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0x40800000;
  param_1[0xf3] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  *plVar1 = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  FUN_14288e3d0(param_1 + 6,0);
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    param_1[0x101] = param_1;
    param_1[0x100] = &DAT_146865c30;
    *plVar1 = (longlong)DAT_146865c30;
    DAT_146865c30 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 1409f4980 FUN_1409f4980 body=204 status=ok
// SIG undefined FUN_1409f4980(void)

undefined8 * FUN_1409f4980(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  uVar3 = FUN_14178c940();
  UBTService::UBTService(param_1,uVar3);
  local_10 = 0xc;
  *param_1 = &PTR__scalar_deleting_destructor__1441d4fa8;
  param_1[5] = &PTR_LAB_1441d5298;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xc,"Fire Weapon",0xc,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 3;
  return param_1;
}



// FUNCTION 1409f4a50 FUN_1409f4a50 body=261 status=ok
// SIG undefined FUN_1409f4a50(void)

undefined8 * FUN_1409f4a50(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  uVar3 = FUN_14178c940();
  UBTService::UBTService(param_1,uVar3);
  local_10 = 0xf;
  *param_1 = &PTR_FUN_1441d52e0;
  param_1[5] = &PTR_LAB_1441d55d0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  lVar2 = local_18;
  FGenericPlatformString::Convert<char,wchar_t>(local_18,0xf,"Trigger Dialog",0xf,0x3f);
  plVar1 = param_1 + 6;
  if (plVar1 == &local_18) {
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar2;
    *(undefined4 *)(param_1 + 7) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_10._4_4_;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 1;
  return param_1;
}



// FUNCTION 1409f4b60 FUN_1409f4b60 body=54 status=ok
// SIG undefined FUN_1409f4b60(void)

undefined8 * FUN_1409f4b60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAIDataProvider::UAIDataProvider(param_1,uVar1);
  param_1[5] = 0;
  *param_1 = &PTR_FUN_1441d7758;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



// FUNCTION 1409f4ba0 FUN_1409f4ba0 body=54 status=ok
// SIG undefined FUN_1409f4ba0(void)

undefined8 * FUN_1409f4ba0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAIDataProvider::UAIDataProvider(param_1,uVar1);
  param_1[5] = 0;
  *param_1 = &PTR_FUN_1441d74d8;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



// FUNCTION 1409f4be0 FUN_1409f4be0 body=47 status=ok
// SIG undefined FUN_1409f4be0(void)

undefined8 * FUN_1409f4be0(undefined8 *param_1)

{
  UPrimaryAssetLabel::UPrimaryAssetLabel();
  *param_1 = &PTR__scalar_deleting_destructor__1441dab10;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  return param_1;
}



// FUNCTION 1409f4c10 FUN_1409f4c10 body=319 status=ok
// SIG undefined FUN_1409f4c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409f4c10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_res8 [4];
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_1441d5638;
  param_1[5] = &PTR_LAB_1441d5a30;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined2 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  uVar1 = uRam00000001468b5b78;
  param_1[0x44] = _DAT_1468b5b70;
  param_1[0x45] = uVar1;
  uVar4 = uRam00000001468b5b8c;
  uVar3 = uRam00000001468b5b88;
  uVar2 = uRam00000001468b5b84;
  *(undefined4 *)(param_1 + 0x46) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_1 + 0x234) = uVar2;
  *(undefined4 *)(param_1 + 0x47) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x23c) = uVar4;
  uVar4 = uRam00000001468b5b9c;
  uVar3 = uRam00000001468b5b98;
  uVar2 = uRam00000001468b5b94;
  *(undefined4 *)(param_1 + 0x48) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_1 + 0x244) = uVar2;
  *(undefined4 *)(param_1 + 0x49) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24c) = uVar4;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0xbf800000;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  FName::FName(local_res8,L"R_Hand_Object",1);
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  param_1[0x3a] = local_res8[0];
  return param_1;
}



// FUNCTION 1409f4d50 FUN_1409f4d50 body=234 status=ok
// SIG undefined FUN_1409f4d50(void)

undefined8 * FUN_1409f4d50(undefined8 *param_1)

{
  FUN_142327780();
  *param_1 = &PTR_FUN_1441d5e88;
  param_1[5] = &PTR_LAB_1441d6778;
  param_1[0x5a] = &PTR_LAB_1441d67a8;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  FUN_142de2d20(param_1 + 0xe8,0x43fa0000,0);
  FUN_142de2d20(param_1 + 0xf8,0x42c80000,0);
  FUN_142de2d20(param_1 + 0x108,0x43340000,0);
  *(byte *)((longlong)param_1 + 0x741) = *(byte *)((longlong)param_1 + 0x741) | 0x66;
  *(undefined1 *)((longlong)param_1 + 0x7c1) = *(undefined1 *)((longlong)param_1 + 0x741);
  *(undefined1 *)((longlong)param_1 + 0x841) = *(undefined1 *)((longlong)param_1 + 0x741);
  *(undefined4 *)((longlong)param_1 + 0x8cc) = 0x42480000;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) & 0xbf;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  return param_1;
}



// FUNCTION 1409f4e40 FUN_1409f4e40 body=120 status=ok
// SIG undefined FUN_1409f4e40(void)

undefined8 * FUN_1409f4e40(undefined8 *param_1)

{
  FUN_1407723f0();
  param_1[0x117] = 0;
  *param_1 = &PTR_FUN_1441d6800;
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  param_1[5] = &PTR_LAB_1441d6c58;
  param_1[0x2f] = &PTR_LAB_1441d6c88;
  *(undefined4 *)((longlong)param_1 + 0x8c4) = 0x3f800000;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x119);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x8d4);
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) & 0xfffffffe;
  return param_1;
}



// FUNCTION 1409f4ec0 FUN_1409f4ec0 body=287 status=ok
// SIG undefined FUN_1409f4ec0(void)

undefined8 * FUN_1409f4ec0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_143039130();
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x41000000;
  param_1[0x59] = 0;
  *param_1 = &PTR_FUN_1441d79d8;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  param_1[5] = &PTR_LAB_1441d7f90;
  *(undefined2 *)(param_1 + 0x5b) = 0x101;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x442f0000;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x42480000;
  *(undefined4 *)(param_1 + 0x61) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x43480000;
  *(undefined4 *)(param_1 + 0x62) = 0x42480000;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  FUN_142d2e580(param_1 + 0x66);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x20000000;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(undefined4 *)(param_1 + 0x7d) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x7e] = DAT_146294aa0;
  uVar1 = DAT_146294aa8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 0xe;
  *(undefined4 *)(param_1 + 0x7f) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x420c0000;
  return param_1;
}



// FUNCTION 1409f4fe0 FUN_1409f4fe0 body=515 status=ok
// SIG undefined FUN_1409f4fe0(void)

undefined8 * FUN_1409f4fe0(undefined8 *param_1)

{
  FUN_142f89ef0();
  *param_1 = &PTR_FUN_1441d12b8;
  param_1[5] = &PTR_LAB_1441d1790;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 2;
  *(undefined1 *)(param_1 + 0x162) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb14) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x163) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xb1c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x164) = 0x3e4ccccd;
  *(undefined1 *)((longlong)param_1 + 0xb24) = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  *(uint *)(param_1 + 0x171) = *(uint *)(param_1 + 0x171) & 0xffffffe0;
  *(undefined4 *)((longlong)param_1 + 0xb8c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x172) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xb94) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x173) = 0x3f000000;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  *(undefined4 *)(param_1 + 0x177) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbbc) = 0;
  *(undefined4 *)(param_1 + 0x17e) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0xbf4) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x17f) = 0;
  *(undefined4 *)(param_1 + 0x183) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0xc1c) = 0x45000000;
  *(undefined4 *)((longlong)param_1 + 0xbfc) = 0x7f7fffff;
  param_1[0x184] = DAT_146294aa0;
  *(undefined4 *)(param_1 + 0x185) = DAT_146294aa8;
  *(undefined8 *)((longlong)param_1 + 0xc2c) = DAT_146294aa0;
  *(undefined4 *)((longlong)param_1 + 0xc34) = DAT_146294aa8;
  *(undefined4 *)(param_1 + 0x187) = 0x471c4000;
  *(undefined4 *)((longlong)param_1 + 0xc3c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x188) = 0xbe99999a;
  *(undefined8 *)((longlong)param_1 + 0xc44) = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  *(undefined2 *)(param_1 + 0x18e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc74) = 0;
  param_1[399] = DAT_146865880;
  *(undefined4 *)(param_1 + 400) = DAT_146865888;
  *(undefined4 *)((longlong)param_1 + 0xc84) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x191) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xc8c) = 0;
  *(undefined4 *)(param_1 + 0x192) = 0x3e800000;
  param_1[0x193] = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined2 *)(param_1 + 0x195) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcac) = 0xc47a0000;
  return param_1;
}



// FUNCTION 1409f51f0 FUN_1409f51f0 body=325 status=ok
// SIG undefined FUN_1409f51f0(void)

undefined8 * FUN_1409f51f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  uVar1 = FUN_14178c940();
  FUN_142c8d2c0(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x282) = 0x3e800000;
  *param_1 = &PTR_FUN_1441d8880;
  *(undefined4 *)((longlong)param_1 + 0x1414) = 0x3dcccccd;
  param_1[5] = &PTR_LAB_1441d9338;
  *(undefined1 *)(param_1 + 0x283) = 1;
  param_1[0x5a] = &PTR_LAB_1441d9368;
  *(undefined4 *)((longlong)param_1 + 0x141c) = 8;
  param_1[0x146] = &PTR_LAB_1441d93c0;
  param_1[0x1e4] = &PTR_LAB_1441d93f0;
  *(undefined4 *)(param_1 + 0x284) = 0xc;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ShouldReplenishDrones",1);
  param_1[0x285] = *puVar2;
  *(undefined2 *)(param_1 + 0x286) = 0xff00;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DroneShieldEnabled",1);
  param_1[0x287] = *puVar2;
  *(undefined2 *)(param_1 + 0x288) = 0xff00;
  *(undefined4 *)(param_1 + 0x28a) = 6;
  param_1[0x28b] = 0;
  param_1[0x28c] = 0;
  param_1[0x28d] = 0;
  param_1[0x28e] = 0;
  param_1[799] = 0;
  param_1[800] = 0;
  param_1[0x339] = 0;
  param_1[0x33a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19e4) = 0;
  *(undefined1 *)(param_1 + 0x33e) = 0;
  *(undefined4 *)(param_1 + 0x33b) = 0xffffffff;
  return param_1;
}



// FUNCTION 1409f5340 FUN_1409f5340 body=319 status=ok
// SIG undefined FUN_1409f5340(void)

undefined8 * FUN_1409f5340(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_1441d5a60;
  param_1[5] = &PTR_LAB_1441d5e58;
  FUN_142de2d20(param_1 + 0x2f,0x44160000,0);
  FUN_142de2d20(param_1 + 0x3f,0x41f00000,0);
  *(undefined4 *)(param_1 + 0x4f) = 0;
  FUN_142de2d20(param_1 + 0x50,0x40c00000,0);
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_142de2c90(param_1 + 0x61,0x41700000,0x40a00000,0);
  *(undefined4 *)(param_1 + 0x71) = 0;
  FUN_142de2d20(param_1 + 0x72,0x41200000,0);
  *(undefined4 *)(param_1 + 0x82) = 0;
  FUN_142de2d20(param_1 + 0x83,0x42700000,0);
  FUN_142d2e640(param_1 + 0x93);
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  FUN_142d2e640(param_1 + 0xc3);
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  param_1[199] = 0;
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xc9) = 0;
  return param_1;
}



// FUNCTION 1409f5480 FUN_1409f5480 body=455 status=ok
// SIG undefined FUN_1409f5480(void)

undefined8 * FUN_1409f5480(undefined8 *param_1)

{
  FUN_143068030();
  *param_1 = &PTR_FUN_1441d37d8;
  param_1[5] = &PTR_LAB_1441d3c10;
  param_1[0x2f] = &PTR_LAB_1441d3c40;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_14058f8d0(param_1 + 0x4d,0);
  FUN_140590080(param_1 + 0x4e);
  FWeakObjectPtr::operator=(param_1 + 0x51,0);
  param_1[0x52] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x53,0);
  param_1[0x54] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x55,0);
  param_1[0x56] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x57,0);
  param_1[0x58] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x59,0);
  param_1[0x5a] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x5b,0);
  param_1[0x5c] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x5d,0);
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x41c80000;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  *(undefined1 *)(param_1 + 0x38) = 7;
  return param_1;
}



// FUNCTION 1409f5650 FUN_1409f5650 body=244 status=ok
// SIG undefined FUN_1409f5650(void)

void FUN_1409f5650(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  lVar5 = *param_1;
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    plVar6 = (longlong *)(lVar5 + 0x38);
    do {
      FUN_1409f5750(plVar6 + 0xd);
      if (plVar6[9] != 0) {
        FMemory::Free();
      }
      FUN_1409f57b0(plVar6 + 6);
      if (plVar6[4] != 0) {
        FMemory::Free();
      }
      TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
      ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(plVar6 + 2);
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
      ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(plVar6 + -2);
      plVar4 = (longlong *)plVar6[-4];
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
      plVar6 = plVar6 + 0x16;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1409f5750 FUN_1409f5750 body=95 status=ok
// SIG undefined FUN_1409f5750(void)

void FUN_1409f5750(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xf;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1409f57b0 FUN_1409f57b0 body=95 status=ok
// SIG undefined FUN_1409f57b0(void)

void FUN_1409f57b0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    do {
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        FMemory::Free();
      }
      TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
      ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(lVar1);
      lVar1 = lVar1 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 1409f5810 ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_> body=98 status=ok
// SIG undefined ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(void)

void TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
     ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x78);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x11;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1409f5880 FUN_1409f5880 body=118 status=ok
// SIG undefined FUN_1409f5880(void)

void FUN_1409f5880(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x38);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar2 + -3);
      plVar2 = plVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1409f5900 FUN_1409f5900 body=112 status=ok
// SIG undefined FUN_1409f5900(void)

void FUN_1409f5900(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      FUN_140591060(plVar1 + 1);
      if (*plVar1 != 0) {
        FUN_1405a53f0();
        *plVar1 = 0;
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar1);
  return;
}



// FUNCTION 1409f5970 FUN_1409f5970 body=106 status=ok
// SIG undefined FUN_1409f5970(void)

void FUN_1409f5970(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  iVar4 = *(int *)(param_1 + 0x108);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x10);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar1 = *(longlong *)(param_1 + 0x100);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409f59e0 FUN_1409f59e0 body=348 status=ok
// SIG undefined FUN_1409f59e0(void)

void FUN_1409f59e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x678) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x638) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x5c0) = &PTR_FUN_144055c50;
  *(undefined ***)(param_1 + 0x5b8) = &PTR_FUN_14407f7d8;
  *(undefined ***)(param_1 + 0x5b0) = &PTR_FUN_14407f768;
  *(undefined ***)(param_1 + 0x5a8) = &PTR_FUN_1440732c8;
  *(undefined ***)(param_1 + 0x5a0) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x598) = &PTR_FUN_14407f730;
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x520) = &PTR_FUN_1440732c8;
  *(undefined ***)(param_1 + 0x518) = &PTR_FUN_14407f310;
  *(undefined ***)(param_1 + 0x510) = &PTR_FUN_144055190;
  *(undefined ***)(param_1 + 0x508) = &PTR_FUN_14407f2f8;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4f0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4d8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x4a8);
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1409f5b40 FUN_1409f5b40 body=668 status=ok
// SIG undefined FUN_1409f5b40(void)

void FUN_1409f5b40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb70) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb40) = 0;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xaf8);
  *(undefined4 *)(param_1 + 0xaf0) = 0;
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xaa8);
  *(undefined4 *)(param_1 + 0xaa0) = 0;
  if (*(longlong *)(param_1 + 0xa98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa58);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa30));
  FUN_142f8b890(param_1 + 0x918);
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8c8) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x8b8);
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x890) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x878) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x860) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x840) = 0;
  if (*(longlong *)(param_1 + 0x838) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x7f8);
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  if (*(longlong *)(param_1 + 0x7e8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x7a8);
  if (*(longlong *)(param_1 + 0x790) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x768) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x680) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x670) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x660) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x638));
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x620);
  *(undefined ***)(param_1 + 0x618) = &PTR_FUN_143f47c98;
  FUN_1409f5de0(param_1);
  return;
}



// FUNCTION 1409f5de0 FUN_1409f5de0 body=490 status=ok
// SIG undefined FUN_1409f5de0(void)

void FUN_1409f5de0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x608) = 0;
  if (*(longlong *)(param_1 + 0x600) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x5c0);
  iVar6 = *(int *)(param_1 + 0x5b8);
  plVar5 = *(longlong **)(param_1 + 0x5b0);
  if (iVar6 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar5 = *(longlong **)(param_1 + 0x5b0);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  *(undefined4 *)(param_1 + 0x5a8) = 0;
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x560,0);
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x558);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  iVar6 = *(int *)(param_1 + 0x540);
  lVar4 = *(longlong *)(param_1 + 0x538);
  if (iVar6 != 0) {
    plVar5 = (longlong *)(lVar4 + 8);
    do {
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *(longlong *)(param_1 + 0x538);
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0x528);
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0x518);
  plVar5 = *(longlong **)(param_1 + 0x510);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441d0fc8;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1409f5fd0 FUN_1409f5fd0 body=422 status=ok
// SIG undefined FUN_1409f5fd0(void)

void FUN_1409f5fd0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xa68) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa68) + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *(undefined4 *)(param_1 + 0xa60) = 0;
  if (*(longlong *)(param_1 + 0xa58) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa18);
  if (*(longlong *)(param_1 + 0x9d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x998) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x988) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x978) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x920) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x7c8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x7a8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x790);
  FGPUSkinCache::Release(param_1 + 0x520);
  FGPUSkinCache::Release(param_1 + 0x518);
  if (*(longlong *)(param_1 + 0x418) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x280);
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 600);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x240);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x228);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x210);
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 1409f6180 FUN_1409f6180 body=195 status=ok
// SIG undefined FUN_1409f6180(void)

void FUN_1409f6180(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0x250);
  lVar2 = *(longlong *)(param_1 + 0x248);
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x30);
    do {
      if ((int)plVar3[2] != 0) {
        plVar1 = (longlong *)*plVar3;
        if ((longlong *)*plVar3 == (longlong *)0x0) {
          plVar1 = plVar3 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar2 = *(longlong *)(param_1 + 0x248);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 1409f6250 FUN_1409f6250 body=484 status=ok
// SIG undefined FUN_1409f6250(void)

void FUN_1409f6250(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x1400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x13f0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x13d0) = 0;
  if (*(longlong *)(param_1 + 0x13c8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 5000);
  if (*(longlong *)(param_1 + 0x1378) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x12f8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if (*(longlong *)(param_1 + 0x12d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1298) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10b8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x10b0) = 0;
  if (*(longlong *)(param_1 + 0x10a8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1068);
  if (*(char *)(param_1 + 0x1050) != '\0') {
    *(undefined1 *)(param_1 + 0x1050) = 0;
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1000);
  if (*(longlong *)(param_1 + 0xfe8) != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0xfe0);
  plVar5 = *(longlong **)(param_1 + 0xfd8);
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = *(longlong **)(param_1 + 0xfd8);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  if (*(longlong *)(param_1 + 0xfb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf40) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xf20) = &PTR_FUN_143fe0658;
  FUN_1409f65b0(param_1);
  return;
}



// FUNCTION 1409f6440 FUN_1409f6440 body=245 status=ok
// SIG undefined FUN_1409f6440(void)

void FUN_1409f6440(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FMemory::Free();
  }
  FUN_1409f5900(param_1 + 0x300);
  FUN_140591060(param_1 + 0x270);
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_1405a53f0();
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  FUN_140590d70(param_1 + 600);
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_144191f28;
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 1409f6540 FUN_1409f6540 body=102 status=ok
// SIG undefined FUN_1409f6540(void)

void FUN_1409f6540(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x60);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x58);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x48);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1409f65b0 FUN_1409f65b0 body=712 status=ok
// SIG undefined FUN_1409f65b0(void)

void FUN_1409f65b0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xf00);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xec8));
  if (*(longlong *)(param_1 + 0xeb8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe90);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xe78);
  if (*(longlong *)(param_1 + 0xe58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe10) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xe10) + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0xe08) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xe08) + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FTickFunction::~FTickFunction(param_1 + 0xdb0);
  if (*(longlong *)(param_1 + 0xda0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xd98) = 0;
  if (*(longlong *)(param_1 + 0xd90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xd50);
  *(undefined4 *)(param_1 + 0xd48) = 0;
  if (*(longlong *)(param_1 + 0xd40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xd00,0);
  if (*(longlong *)(param_1 + 0xd20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd00) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xcf8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xcf8) + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  iVar3 = *(int *)(param_1 + 0xcf0);
  lVar2 = *(longlong *)(param_1 + 0xce8);
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar2 + 0x18);
    do {
      if (plVar4[2] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar2 = *(longlong *)(param_1 + 0xce8);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0xc18);
  if (*(longlong *)(param_1 + 0xc00) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xbf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xbe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xbd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xaf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xae0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xad0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xab0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa50) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xa30) = &PTR_FUN_1440facf0;
  FUN_14061f9e0(param_1);
  return;
}



// FUNCTION 1409f6880 FUN_1409f6880 body=114 status=ok
// SIG undefined FUN_1409f6880(void)

undefined8 * FUN_1409f6880(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x48);
  }
  return param_1;
}



// FUNCTION 1409f6900 FUN_1409f6900 body=145 status=ok
// SIG undefined FUN_1409f6900(void)

longlong * FUN_1409f6900(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      plVar1 = (longlong *)(*param_1 + 0x38);
      do {
        if (plVar1[2] != 0) {
          FMemory::Free();
        }
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar1 + -3);
        plVar1 = plVar1 + 0xc;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_1409f0540(param_1,*param_2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  return param_1;
}



// FUNCTION 1409f69a0 FUN_1409f69a0 body=83 status=ok
// SIG undefined FUN_1409f69a0(void)

undefined4 * FUN_1409f69a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  local_28 = *(undefined8 *)(param_2 + 6);
  FString::FString(local_20,param_2 + 8);
  FSoftObjectPath::operator=(param_1 + 6,&local_28);
  return param_1;
}



// FUNCTION 1409f6a00 operator= body=170 status=ok
// SIG undefined operator=(void)

undefined4 * FNavDataConfig::operator=(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  local_28 = *(undefined8 *)(param_2 + 6);
  FString::FString(local_20,param_2 + 8);
  FSoftObjectPath::operator=(param_1 + 6,&local_28);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)(param_2 + 0xf);
  param_1[0x11] = param_2[0x11];
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  local_28 = *(undefined8 *)(param_2 + 0x14);
  FString::FString(local_20,param_2 + 0x16);
  FSoftObjectPath::operator=(param_1 + 0x14,&local_28);
  return param_1;
}



// FUNCTION 1409f6ab0 FUN_1409f6ab0 body=573 status=ok
// SIG undefined FUN_1409f6ab0(void)

undefined1 * FUN_1409f6ab0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  param_1[0x80] = param_2[0x80];
  param_1[0x81] = param_2[0x81];
  param_1[0x82] = param_2[0x82];
  param_1[0x83] = param_2[0x83];
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  param_1[0x100] = param_2[0x100];
  param_1[0x101] = param_2[0x101];
  param_1[0x102] = param_2[0x102];
  param_1[0x103] = param_2[0x103];
  *(undefined8 *)(param_1 + 0x104) = *(undefined8 *)(param_2 + 0x104);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  uVar1 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  uVar1 = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x160) = uVar1;
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  param_1[0x180] = param_2[0x180];
  return param_1;
}



// FUNCTION 1409f6cf0 FUN_1409f6cf0 body=338 status=ok
// SIG undefined FUN_1409f6cf0(void)

void FUN_1409f6cf0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong local_res10;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(*param_1,&local_res10);
    plVar5 = *(longlong **)(param_2 + 0x50);
    uVar4 = 0;
    uVar6 = (longlong)*(int *)(param_2 + 0x58) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(param_2 + 0x58) < plVar5) {
      uVar6 = uVar4;
    }
    if (uVar6 != 0) {
      do {
        local_res10 = *plVar5;
        if (local_res10 != 0) {
          lVar1 = *(longlong *)(local_res10 + 0x30);
          if (lVar1 != 0) {
            if (*(char *)param_1[3] == '\0') {
              if (DAT_146865cf0 != DAT_146865cf0 + DAT_146865cf8) {
                piVar2 = DAT_146865cf0;
                do {
                  if (*piVar2 == *(int *)(lVar1 + 0x28)) goto LAB_1409f6e1d;
                  piVar2 = piVar2 + 1;
                } while (piVar2 != DAT_146865cf0 + DAT_146865cf8);
              }
              for (plVar3 = DAT_146865d00; plVar3 != DAT_146865d00 + DAT_146865d08;
                  plVar3 = plVar3 + 1) {
                if (*plVar3 ==
                    CONCAT44(*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(local_res10 + 0x28)))
                goto LAB_1409f6e1d;
              }
            }
            if ((*(char *)param_1[2] == '\0') && (DAT_146865ce0 != DAT_146865ce0 + DAT_146865ce8)) {
              piVar2 = DAT_146865ce0;
              do {
                if (*piVar2 == *(int *)(lVar1 + 0x28)) goto LAB_1409f6e1d;
                piVar2 = piVar2 + 1;
              } while (piVar2 != DAT_146865ce0 + DAT_146865ce8);
            }
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[1],&local_res10);
          }
        }
LAB_1409f6e1d:
        plVar5 = plVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
  }
  return;
}



// FUNCTION 1409f6e50 FUN_1409f6e50 body=288 status=ok
// SIG undefined FUN_1409f6e50(void)

longlong FUN_1409f6e50(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_res10;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  lVar6 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_14244db10(param_2,param_3,&local_38);
  plVar1 = local_38 + (int)local_30;
  plVar5 = local_38;
  do {
    if (plVar5 == plVar1) {
LAB_1409f6f2a:
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      return lVar6;
    }
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      local_res10 = *(undefined8 *)(lVar2 + 0x18);
      local_28 = 0;
      local_20 = 0;
      FName::ToString(&local_res10,&local_28);
      if (*(int *)(param_4 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_4;
      }
      iVar3 = FUN_141592950(&local_28,puVar4,1,0,0xffffffff);
      if (iVar3 != -1) {
        lVar6 = lVar2;
        if (local_28 != 0) {
          FMemory::Free();
        }
        goto LAB_1409f6f2a;
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 1409f6f70 FUN_1409f6f70 body=321 status=ok
// SIG undefined FUN_1409f6f70(void)

void FUN_1409f6f70(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong local_res10;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_2 + 0x50);
    uVar5 = 0;
    uVar6 = (longlong)*(int *)(param_2 + 0x58) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_2 + 0x58) < plVar4) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      do {
        local_res10 = *plVar4;
        if (local_res10 != 0) {
          lVar1 = *(longlong *)(local_res10 + 0x30);
          if (lVar1 != 0) {
            if (*(char *)param_1[2] == '\0') {
              if (DAT_146865cf0 != DAT_146865cf0 + DAT_146865cf8) {
                piVar2 = DAT_146865cf0;
                do {
                  if (*piVar2 == *(int *)(lVar1 + 0x28)) goto LAB_1409f708c;
                  piVar2 = piVar2 + 1;
                } while (piVar2 != DAT_146865cf0 + DAT_146865cf8);
              }
              for (plVar3 = DAT_146865d00; plVar3 != DAT_146865d00 + DAT_146865d08;
                  plVar3 = plVar3 + 1) {
                if (*plVar3 ==
                    CONCAT44(*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(local_res10 + 0x28)))
                goto LAB_1409f708c;
              }
            }
            if ((*(char *)param_1[1] == '\0') && (DAT_146865ce0 != DAT_146865ce0 + DAT_146865ce8)) {
              piVar2 = DAT_146865ce0;
              do {
                if (*piVar2 == *(int *)(lVar1 + 0x28)) goto LAB_1409f708c;
                piVar2 = piVar2 + 1;
              } while (piVar2 != DAT_146865ce0 + DAT_146865ce8);
            }
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(*param_1,&local_res10);
          }
        }
LAB_1409f708c:
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
  }
  return;
}



// FUNCTION 1409f70c0 FUN_1409f70c0 body=157 status=ok
// SIG undefined FUN_1409f70c0(void)

void FUN_1409f70c0(longlong *param_1,undefined8 *param_2)

{
  code *local_18;
  undefined4 uStack_10;
  
  *(undefined1 *)(param_2 + 10) = 0;
  *param_2 = *(undefined8 *)(*param_1 + 0x118);
  param_2[9] = *(undefined8 *)(*param_1 + 0x2b0);
  param_2[0xe] = *(undefined8 *)(*param_1 + 0x2b8);
  *(undefined2 *)(param_2 + 6) = 0x101;
  *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(*param_1 + 0x2d8);
  FUN_1409f6880(param_2 + 0xb,*param_1 + 0x2e0);
  local_18 = FUN_1409f9370;
  uStack_10 = 0;
  FUN_14058c4b0(param_2 + 0xf,*param_1,&local_18);
  return;
}



// FUNCTION 1409f7160 FUN_1409f7160 body=444 status=ok
// SIG undefined FUN_1409f7160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409f7160(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined8 local_48;
  float local_40;
  
  lVar1 = *param_1;
  if (((*(float *)(lVar1 + 0xc20) == (float)DAT_146294aa0) &&
      (DAT_146294aa0._4_4_ == *(float *)(lVar1 + 0xc24))) &&
     (DAT_146294aa8 == *(float *)(lVar1 + 0xc28))) {
    FUN_142fa2760();
    return param_2;
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb30) + 0x168);
  if (lVar2 == 0) {
    local_48 = _DAT_1468b5d90;
    local_40 = DAT_1468b5d98;
  }
  else {
    local_48 = *(undefined8 *)(lVar2 + 0x220);
    local_40 = *(float *)(lVar2 + 0x228);
  }
  fVar7 = *(float *)(lVar1 + 0xc20) - (float)local_48;
  fVar6 = *(float *)(lVar1 + 0xc24) - (float)((ulonglong)local_48 >> 0x20);
  local_40 = *(float *)(lVar1 + 0xc28) - local_40;
  fVar3 = fVar6 * fVar6 + fVar7 * fVar7 + local_40 * local_40;
  if (1e-08 < fVar3) {
    auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar4 = auVar5._0_4_;
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar7 = fVar7 * fVar4;
    fVar6 = fVar6 * fVar4;
    local_40 = local_40 * fVar4;
  }
  fVar3 = (float)FUN_140a09700();
  *param_2 = CONCAT44(fVar6 * fVar3,fVar3 * fVar7);
  *(float *)(param_2 + 1) = local_40 * fVar3;
  return param_2;
}



// FUNCTION 1409f7580 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseUObjectMethodDelegateInstance<0,UOnlineEngineInterfaceImpl,TTypeWrapper<void>___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FName,TBaseDelegate<void,int,bool,FString_const_&>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_140591060(param_1 + 4);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1409f75d0 FUN_1409f75d0 body=52 status=ok
// SIG undefined FUN_1409f75d0(void)

undefined8 FUN_1409f75d0(undefined8 param_1,ulonglong param_2)

{
  FUN_14099acc0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6e0);
  }
  return param_1;
}



// FUNCTION 1409f7610 FUN_1409f7610 body=138 status=ok
// SIG undefined FUN_1409f7610(void)

longlong FUN_1409f7610(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x6c0) = &PTR_FUN_143fe0658;
  FUN_1409f59e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x760);
  }
  return param_1;
}



// FUNCTION 1409f76a0 FUN_1409f76a0 body=79 status=ok
// SIG undefined FUN_1409f76a0(void)

longlong FUN_1409f76a0(longlong param_1,ulonglong param_2)

{
  FUN_140591060(param_1 + 0x4a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x488);
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b8);
  }
  return param_1;
}



// FUNCTION 1409f76f0 FUN_1409f76f0 body=94 status=ok
// SIG undefined FUN_1409f76f0(void)

longlong FUN_1409f76f0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x6f0) = &PTR_FUN_1441b39a8;
  *(undefined ***)(param_1 + 0x6e8) = &PTR_FUN_144055c50;
  *(undefined ***)(param_1 + 0x6e0) = &PTR_FUN_144080410;
  FUN_14099acc0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x730);
  }
  return param_1;
}



// FUNCTION 1409f7750 FUN_1409f7750 body=52 status=ok
// SIG undefined FUN_1409f7750(void)

undefined8 FUN_1409f7750(undefined8 param_1,ulonglong param_2)

{
  FUN_1409f5b40();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb80);
  }
  return param_1;
}



// FUNCTION 1409f7790 FUN_1409f7790 body=200 status=ok
// SIG undefined FUN_1409f7790(void)

undefined8 * FUN_1409f7790(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441d9cd0;
  if (param_1[0xa8] != 0) {
    FMemory::Free();
  }
  if (param_1[0xa4] != 0) {
    FMemory::Free();
  }
  if (param_1[0xa2] != 0) {
    FMemory::Free();
  }
  if (param_1[0xa0] != 0) {
    FMemory::Free();
  }
  if (param_1[0x9e] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x9d) = 0;
  if (param_1[0x9c] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x94);
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x588);
  }
  return param_1;
}



// FUNCTION 1409f7860 FUN_1409f7860 body=66 status=ok
// SIG undefined FUN_1409f7860(void)

longlong FUN_1409f7860(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441da3b8;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x480);
  }
  return param_1;
}



// FUNCTION 1409f78b0 FUN_1409f78b0 body=43 status=ok
// SIG undefined FUN_1409f78b0(void)

undefined8 * FUN_1409f78b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441d26b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1409f78e0 FUN_1409f78e0 body=43 status=ok
// SIG undefined FUN_1409f78e0(void)

undefined8 * FUN_1409f78e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441d26b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1409f7910 FUN_1409f7910 body=75 status=ok
// SIG undefined FUN_1409f7910(void)

undefined8 * FUN_1409f7910(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1409f7960 FUN_1409f7960 body=52 status=ok
// SIG undefined FUN_1409f7960(void)

undefined8 FUN_1409f7960(undefined8 param_1,ulonglong param_2)

{
  FUN_14271e9f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3d0);
  }
  return param_1;
}



// FUNCTION 1409f79a0 FUN_1409f79a0 body=43 status=ok
// SIG undefined FUN_1409f79a0(void)

undefined8 * FUN_1409f79a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441d0fc8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409f79d0 FUN_1409f79d0 body=43 status=ok
// SIG undefined FUN_1409f79d0(void)

undefined8 * FUN_1409f79d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1441da3b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1409f7a00 FUN_1409f7a00 body=52 status=ok
// SIG undefined FUN_1409f7a00(void)

undefined8 FUN_1409f7a00(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x448);
  }
  return param_1;
}



// FUNCTION 1409f7a40 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UContentWidget::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 1409f7a90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FSlateApplication::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7b8);
  }
  return param_1;
}



// FUNCTION 1409f7ad0 FUN_1409f7ad0 body=235 status=ok
// SIG undefined FUN_1409f7ad0(void)

longlong FUN_1409f7ad0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
  ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(param_1 + 0x290);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
  ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(param_1 + 0x270);
  FUN_1409f5650(param_1 + 0x1e8);
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x338);
  }
  return param_1;
}



// FUNCTION 1409f7bc0 FUN_1409f7bc0 body=90 status=ok
// SIG undefined FUN_1409f7bc0(void)

longlong FUN_1409f7bc0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b0);
  }
  return param_1;
}



// FUNCTION 1409f7c20 FUN_1409f7c20 body=202 status=ok
// SIG undefined FUN_1409f7c20(void)

longlong FUN_1409f7c20(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x808) != 0) {
    if (*(longlong *)(param_1 + 0x7f8) == 0) {
      **(longlong **)(param_1 + 0x800) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x800) = *(longlong *)(param_1 + 0x7f8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x7f8) + 8) = *(undefined8 *)(param_1 + 0x800);
      *(undefined8 *)(param_1 + 0x7f8) = 0;
    }
    *(undefined8 *)(param_1 + 0x800) = 0;
    *(undefined8 *)(param_1 + 0x808) = 0;
  }
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x740) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x730) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x820);
  }
  return param_1;
}



// FUNCTION 1409f7cf0 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTService::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1409f7d50 FUN_1409f7d50 body=130 status=ok
// SIG undefined FUN_1409f7d50(void)

longlong FUN_1409f7d50(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1409f7de0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UVoiceChannel::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x70);
  FUN_1409f6540(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1409f7e20 FUN_1409f7e20 body=107 status=ok
// SIG undefined FUN_1409f7e20(void)

longlong FUN_1409f7e20(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 1409f7e90 FUN_1409f7e90 body=107 status=ok
// SIG undefined FUN_1409f7e90(void)

longlong FUN_1409f7e90(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x8d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x730) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8e0);
  }
  return param_1;
}



// FUNCTION 1409f7f00 FUN_1409f7f00 body=128 status=ok
// SIG undefined FUN_1409f7f00(void)

longlong FUN_1409f7f00(longlong param_1,ulonglong param_2)

{
  thunk_FUN_142478640(param_1 + 0x8d4);
  thunk_FUN_142478640(param_1 + 0x8c8);
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8e0);
  }
  return param_1;
}



// FUNCTION 1409f7f80 FUN_1409f7f80 body=85 status=ok
// SIG undefined FUN_1409f7f80(void)

longlong FUN_1409f7f80(longlong param_1,ulonglong param_2)

{
  FUN_1406d8b70(param_1 + 0x330);
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FMemory::Free();
  }
  FUN_1409f6180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x400);
  }
  return param_1;
}



// FUNCTION 1409f7fe0 FUN_1409f7fe0 body=131 status=ok
// SIG undefined FUN_1409f7fe0(void)

longlong FUN_1409f7fe0(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc98);
  if (*(longlong *)(param_1 + 0xc60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xba8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xaf8);
  FUN_1409f5fd0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xcb0);
  }
  return param_1;
}



// FUNCTION 1409f8070 FUN_1409f8070 body=90 status=ok
// SIG undefined FUN_1409f8070(void)

longlong FUN_1409f8070(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x19c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18f8) != 0) {
    FMemory::Free();
  }
  FUN_1409f6250(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a00);
  }
  return param_1;
}



// FUNCTION 1409f80d0 FUN_1409f80d0 body=73 status=ok
// SIG undefined FUN_1409f80d0(void)

longlong FUN_1409f80d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x608) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x650);
  }
  return param_1;
}



// FUNCTION 1409f8120 FUN_1409f8120 body=52 status=ok
// SIG undefined FUN_1409f8120(void)

undefined8 FUN_1409f8120(undefined8 param_1,ulonglong param_2)

{
  FUN_1409f6440();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 1409f8160 FUN_1409f8160 body=78 status=ok
// SIG undefined FUN_1409f8160(void)

void FUN_1409f8160(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 1000) != -1) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    lVar1 = UBehaviorTreeManager::GetCurrent(lVar1);
    if (lVar1 != 0) {
      FUN_142bd8290(lVar1,*(undefined4 *)(param_1 + 1000));
    }
    *(undefined4 *)(param_1 + 1000) = 0xffffffff;
  }
  return;
}



// FUNCTION 1409f81b0 FUN_1409f81b0 body=96 status=ok
// SIG undefined FUN_1409f81b0(void)

void FUN_1409f81b0(longlong param_1,longlong param_2)

{
  longlong local_res8;
  longlong local_18;
  longlong local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x730,&local_18);
  if (param_2 != 0) {
    FUN_1407665e0(param_2 + 0x290,param_1);
  }
  local_res8 = param_2;
  FUN_1409f2120(param_1 + 0x8d0,&local_res8);
  return;
}



// FUNCTION 1409f8210 FUN_1409f8210 body=12 status=ok
// SIG undefined FUN_1409f8210(void)

void FUN_1409f8210(longlong param_1)

{
  FUN_142fe4180(param_1 + 0x290);
  return;
}



// FUNCTION 1409f8220 FUN_1409f8220 body=321 status=ok
// SIG undefined FUN_1409f8220(void)

void FUN_1409f8220(longlong param_1,char param_2,undefined1 param_3)

{
  longlong *plVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != '\x04') {
    plVar1 = (longlong *)(param_1 + 0xc60);
    lVar3 = (longlong)*(int *)(param_1 + 0xc68);
    if (*(int *)(param_1 + 0xc68) != 0) {
      iVar7 = 0;
      bVar8 = *(char *)*plVar1 != param_2;
      lVar4 = 0;
      iVar5 = 0;
      do {
        lVar4 = lVar4 + 1;
        iVar6 = iVar5 + 1;
        if (lVar4 < lVar3) {
          pcVar2 = (char *)(*plVar1 + lVar4 * 2);
          do {
            if (bVar8 != (*pcVar2 != param_2)) break;
            iVar6 = iVar6 + 1;
            lVar4 = lVar4 + 1;
            pcVar2 = pcVar2 + 2;
          } while (lVar4 < lVar3);
        }
        if (bVar8 != false) {
          if (iVar7 != iVar5) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + (longlong)iVar7 * 2),
                       (void *)(*plVar1 + (longlong)iVar5 * 2),(longlong)(iVar6 - iVar5) * 2);
          }
          iVar7 = iVar7 + (iVar6 - iVar5);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        iVar5 = iVar6;
      } while (lVar4 < lVar3);
      *(int *)(param_1 + 0xc68) = iVar7;
    }
    FUN_140a203b0(param_1);
    iVar5 = *(int *)(param_1 + 0xc68);
    *(int *)(param_1 + 0xc68) = iVar5 + 1;
    if (*(int *)(param_1 + 0xc6c) < iVar5 + 1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
    }
    lVar3 = *plVar1;
    *(char *)(lVar3 + (longlong)iVar5 * 2) = param_2;
    *(undefined1 *)(lVar3 + 1 + (longlong)iVar5 * 2) = param_3;
  }
  return;
}



// FUNCTION 1409f8370 FUN_1409f8370 body=116 status=ok
// SIG undefined FUN_1409f8370(void)

void FUN_1409f8370(void)

{
  FUN_1409f83f0();
  return;
}



// FUNCTION 1409f83f0 FUN_1409f83f0 body=352 status=ok
// SIG undefined FUN_1409f83f0(void)

void FUN_1409f83f0(longlong param_1,char param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined4 param_9,undefined8 param_10,float param_11,undefined4 param_12)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  
  if (param_2 != '\x06') {
    FUN_1409fdcf0();
    fVar3 = 0.0;
    if ((0.0 < param_11) && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x148))();
      if (lVar2 != 0) {
        fVar3 = param_11 + *(float *)(lVar2 + 0x790);
      }
    }
    iVar1 = *(int *)(param_1 + 0xc58);
    *(int *)(param_1 + 0xc58) = iVar1 + 1;
    if (*(int *)(param_1 + 0xc5c) < iVar1 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 0xc50,iVar1);
    }
    FUN_1409f3f20((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0xc50),param_3,param_4,param_5,
                  param_6,param_7,param_8,param_9,param_2,param_10,fVar3,param_12);
    FUN_140a203b0(param_1);
  }
  return;
}



// FUNCTION 1409f8550 FUN_1409f8550 body=200 status=ok
// SIG undefined FUN_1409f8550(void)

void FUN_1409f8550(longlong param_1,longlong param_2,undefined1 param_3,float param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11)

{
  if (param_4 < 0.0) {
    if ((*(longlong *)(param_1 + 0xaf0) == 0) || (*(longlong *)(param_1 + 0xb30) == 0)) {
      param_4 = 2000.0;
    }
    else {
      param_4 = *(float *)(*(longlong *)(param_1 + 0xb30) + 0xda0) *
                *(float *)(*(longlong *)(param_1 + 0xaf0) + 0x30);
    }
  }
  if (*(float *)(param_2 + 0x10) <= 0.0 && *(float *)(param_2 + 0x10) != 0.0) {
    *(float *)(param_2 + 0x10) = param_4;
  }
  if (*(float *)(param_2 + 0x14) <= 0.0 && *(float *)(param_2 + 0x14) != 0.0) {
    *(float *)(param_2 + 0x14) = param_4;
  }
  FUN_1409f83f0(param_8,param_3,param_4,0,param_5,param_6,param_11,param_7,param_8,param_2,param_9,
                param_10);
  return;
}



// FUNCTION 1409f8620 FUN_1409f8620 body=646 status=ok
// SIG undefined FUN_1409f8620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409f8620(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  wchar_t *pwVar6;
  uint uVar7;
  int iVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint uVar13;
  longlong lVar14;
  longlong local_res18 [2];
  undefined8 local_48;
  longlong local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0xc);
    pwVar9 = (wchar_t *)0x0;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar13 = iVar3 >> 0x1f & 0xffff;
      uVar7 = iVar3 + uVar13;
      pwVar9 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
               (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18);
    }
    if ((*(uint *)(pwVar9 + 4) >> 0x1d & 1) == 0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&UOakAISwarmComponent::ActorDestroyed",L"::");
      pwVar9 = (wchar_t *)0x0;
      while (pwVar6 = pwVar10, pwVar6 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar9 = pwVar6;
      }
      FName::FName(local_res18,pwVar9 + 2,1);
      plVar1 = (longlong *)(param_2 + 0x290);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48);
      local_40 = local_res18[0];
      if ((local_res18[0] != 0) && (lVar11 = FWeakObjectPtr::Get(&local_48), lVar11 != 0)) {
        UObject::FindFunction(lVar11);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      iVar3 = *(int *)(param_2 + 0x298);
      iVar8 = iVar3 + 1;
      *(int *)(param_2 + 0x298) = iVar8;
      if (*(int *)(param_2 + 0x29c) < iVar8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
      }
      plVar2 = (longlong *)(param_1 + 0x8d0);
      puVar12 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar1);
      *puVar12 = (undefined4)local_48;
      puVar12[1] = local_48._4_4_;
      *(longlong *)(puVar12 + 2) = local_40;
      iVar3 = *(int *)(param_1 + 0x8d8);
      iVar8 = iVar3 + 1;
      *(int *)(param_1 + 0x8d8) = iVar8;
      if (*(int *)(param_1 + 0x8dc) < iVar8) {
        TArray<FShaderPipelineCache::CompileJob,FDefaultAllocator>::ResizeGrow(plVar2);
      }
      lVar14 = (longlong)iVar3 * 0x1d0;
      _guard_xfg_dispatch_icall_nop((void *)(*plVar2 + lVar14),0,0x1d0);
      lVar11 = *plVar2;
      *(longlong *)(lVar14 + lVar11) = param_2;
      FUN_1409f6ab0(lVar11 + 0x18 + lVar14,param_1 + 0x740);
      *(undefined8 *)(lVar14 + 0x1ac + lVar11) = DAT_146294aa0;
      *(undefined4 *)(lVar14 + 0x1b4 + lVar11) = DAT_146294aa8;
      *(undefined8 *)(lVar14 + 0x1b8 + lVar11) = DAT_146294aa0;
      *(undefined4 *)(lVar14 + 0x1c0 + lVar11) = DAT_146294aa8;
      lVar4 = *(longlong *)(param_2 + 0x168);
      if (lVar4 == 0) {
        local_48 = _DAT_1468b5d90;
        fVar5 = DAT_1468b5d98;
      }
      else {
        local_48 = *(undefined8 *)(lVar4 + 0x220);
        fVar5 = *(float *)(lVar4 + 0x228);
      }
      local_38 = (float)*(undefined8 *)(param_1 + 0x220);
      fStack_30 = (float)*(undefined8 *)(param_1 + 0x228);
      fStack_34 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x220) >> 0x20);
      *(ulonglong *)(lVar14 + 0x1c4 + lVar11) =
           CONCAT44((float)((ulonglong)local_48 >> 0x20) - fStack_34,(float)local_48 - local_38);
      *(float *)(lVar14 + 0x1cc + lVar11) = fVar5 - fStack_30;
    }
  }
  return;
}



// FUNCTION 1409f88b0 FUN_1409f88b0 body=518 status=ok
// SIG undefined FUN_1409f88b0(void)

int * FUN_1409f88b0(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x22c) == 0) {
    iVar8 = *(int *)(param_1 + 0x208);
    *(int *)(param_1 + 0x208) = iVar8 + 1;
    if (*(int *)(param_1 + 0x20c) < iVar8 + 1) {
      TArray<FReplayViewer,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_1,iVar8);
    }
    iVar2 = *(int *)(param_1 + 0x220);
    iVar4 = iVar2 + 1;
    *(int *)(param_1 + 0x220) = iVar4;
    if (*(int *)(param_1 + 0x224) <= iVar2) {
      uVar3 = (int)(iVar2 + 0x20 + (iVar2 + 0x20 >> 0x1f & 0x1fU)) >> 5;
      iVar5 = 1;
      if (1 < uVar3) {
        iVar4 = *(int *)(param_1 + 0x224) + 0x1f;
        lVar7 = 4;
        if (((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5 != 0) || (4 < uVar3)) {
          lVar7 = (longlong)(int)uVar3 + 0x10 + ((ulonglong)((longlong)(int)uVar3 * 3) >> 3);
        }
        uVar6 = FMemory::QuantizeSize(lVar7 * 4,0);
        iVar4 = *(int *)(param_1 + 0x220);
        iVar5 = (int)(uVar6 >> 2);
        if (iVar5 < (int)uVar3) {
          iVar5 = 0x7fffffff;
        }
      }
      *(int *)(param_1 + 0x224) = iVar5 << 5;
      TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 0x210,iVar4 + -1);
    }
    lVar7 = *(longlong *)(param_1 + 0x218);
    if (*(longlong *)(param_1 + 0x218) == 0) {
      lVar7 = param_1 + 0x210;
    }
    puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar2 & 0x1f));
  }
  else {
    iVar8 = *(int *)(param_1 + 0x228);
    lVar7 = *(longlong *)(param_1 + 0x200);
    if (*(longlong *)(param_1 + 0x200) == 0) {
      lVar7 = param_1;
    }
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar8 * 0x20);
    iVar4 = *(int *)(param_1 + 0x22c) + -1;
    *(int *)(param_1 + 0x228) = iVar2;
    *(int *)(param_1 + 0x22c) = iVar4;
    if (iVar4 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x200);
      if (*(longlong *)(param_1 + 0x200) == 0) {
        lVar7 = param_1;
      }
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x20) = 0xffffffff;
    }
  }
  *param_2 = iVar8;
  lVar7 = *(longlong *)(param_1 + 0x218);
  if (*(longlong *)(param_1 + 0x218) == 0) {
    lVar7 = param_1 + 0x210;
  }
  puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  lVar7 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar7 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 + (longlong)iVar8 * 0x20;
  return param_2;
}



// FUNCTION 1409f8ac0 FUN_1409f8ac0 body=352 status=ok
// SIG undefined FUN_1409f8ac0(void)

void FUN_1409f8ac0(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x1d);
  if (6 < bVar1) {
    return;
  }
  uVar2 = (&switchD_1409f8ae7::switchdataD_1409f8c20)[bVar1];
  switch(bVar1) {
  case 0:
    *(undefined1 *)(param_1 + 0x1d) = 1;
    break;
  case 1:
    *(undefined1 *)(param_1 + 0x1d) = 2;
    return;
  case 3:
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      *(undefined1 *)(param_1 + 0x1d) = 4;
      FUN_1409fb2e0(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x1d) = 5;
    if ((*(longlong **)(param_1 + 0xe8) == (longlong *)0x0) ||
       (lVar3 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x148))(), lVar3 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(lVar3 + 0x8c8);
    }
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FUN_142dc7850();
    }
    if ((*(char *)(param_1 + 0x1c) == '\0') && (*(longlong *)(param_1 + 0xf0) != 0)) {
      FUN_142398ec0(*(longlong *)(param_1 + 0xf0),0,1);
                    /* WARNING: Could not recover jumptable at 0x0001409f8bbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x928))(*(longlong **)(param_1 + 0xf0),0);
      return;
    }
    return;
  case 4:
    *(undefined1 *)(param_1 + 0x1c) = 0;
    if ((*(longlong *)(param_1 + 0x110) != 0) && (lVar3 = *(longlong *)(param_1 + 0xe0), lVar3 != 0)
       ) {
      if (*(char *)(param_1 + 0x88) == '\0') {
        lVar3 = *(longlong *)(lVar3 + 0x188);
      }
      else {
        lVar3 = *(longlong *)(lVar3 + 400);
      }
      if (lVar3 != 0) {
        FUN_142ddc5e0(*(longlong *)(param_1 + 0x110),
                      CONCAT71((int7)((ulonglong)(IMAGE_DOS_HEADER_140000000.e_magic + uVar2) >> 8),
                               3));
      }
    }
  case 2:
    *(undefined1 *)(param_1 + 0x1d) = 3;
    return;
  case 5:
    *(undefined1 *)(param_1 + 0x1d) = 6;
    break;
  case 6:
    *(undefined1 *)(param_1 + 0x1d) = 7;
    return;
  }
  if ((*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) &&
     (lVar3 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x148))(), lVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar3 + 0x8c8);
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1409f8c40 FUN_1409f8c40 body=133 status=ok
// SIG undefined FUN_1409f8c40(void)

void FUN_1409f8c40(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_3 + 0x108)) {
    lVar1 = FWeakObjectPtr::Get(param_3);
    if ((lVar1 != 0) && (500.0 < *(float *)(*(longlong *)(param_3 + 0x100) + 0x10))) {
      *(undefined4 *)(param_1 + 0xc84) = *(undefined4 *)(lVar1 + 0x790);
      lVar1 = *(longlong *)(param_3 + 0x100);
      *(undefined8 *)(param_1 + 0xc78) = *(undefined8 *)(lVar1 + 0x2c);
      *(undefined4 *)(param_1 + 0xc80) = *(undefined4 *)(lVar1 + 0x34);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xc84) = 0xbf800000;
  return;
}



// FUNCTION 1409f8cd0 FUN_1409f8cd0 body=97 status=ok
// SIG undefined FUN_1409f8cd0(void)

void FUN_1409f8cd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = FUN_140c13370();
  iVar1 = iVar1 + -1;
  iVar3 = *(int *)(param_1 + 0x1f0) + -1;
  if (iVar1 < 0) {
    iVar3 = 0;
  }
  else {
    if (iVar1 < iVar3) {
      iVar3 = iVar1;
    }
    if (iVar3 < 0) {
      return;
    }
  }
  if ((iVar3 < *(int *)(param_1 + 0x1f0)) &&
     (lVar2 = (longlong)iVar3 * 0xb0 + *(longlong *)(param_1 + 0x1e8), lVar2 != 0)) {
    FUN_142cabc40(lVar2 + 0x80,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x118),0);
    return;
  }
  return;
}



// FUNCTION 1409f8d40 FUN_1409f8d40 body=96 status=ok
// SIG undefined FUN_1409f8d40(void)

void FUN_1409f8d40(longlong param_1,int param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(char *)(param_1 + 0x1418) != '\0') && (-1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x1900))) {
    lVar2 = *(longlong *)(param_1 + 0x18f8);
    if (*(longlong *)(param_1 + 0x18f8) == 0) {
      lVar2 = param_1 + 0x1478;
    }
    lVar1 = (longlong)param_2;
    param_3 = *(float *)(lVar2 + 0x10 + lVar1 * 0x18) - param_3;
    *(float *)(lVar2 + 0x10 + lVar1 * 0x18) = param_3;
    if (param_3 <= 0.0) {
      *(undefined4 *)(lVar2 + 0x10 + lVar1 * 0x18) = 0;
      FUN_140a0ba00();
      return;
    }
  }
  return;
}



// FUNCTION 1409f8da0 FUN_1409f8da0 body=274 status=ok
// SIG undefined FUN_1409f8da0(void)

void FUN_1409f8da0(longlong param_1,float param_2,undefined8 *param_3)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res8 [4];
  undefined8 local_28;
  undefined4 local_20;
  
  if ((*(char *)(param_1 + 0x1418) != '\0') && (*(longlong *)(param_1 + 0x19e8) != 0)) {
    local_28 = *param_3;
    local_20 = *(undefined4 *)(param_3 + 1);
    FUN_1423ab810(0x3f000000,local_res8,&local_28,0,0x3f000000,0);
    plVar5 = *(longlong **)(param_1 + 0x18f8);
    if (*(longlong **)(param_1 + 0x18f8) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x1478);
    }
    plVar3 = plVar5;
    if (plVar5 != plVar5 + (longlong)*(int *)(param_1 + 0x1900) * 3) {
      while (*plVar3 != local_res8[0]) {
        plVar3 = plVar3 + 3;
        if (plVar3 == plVar5 + (longlong)*(int *)(param_1 + 0x1900) * 3) {
          return;
        }
      }
      if (*(char *)((longlong)plVar3 + 0x14) != '\0') {
        iVar2 = (int)plVar3[1];
        lVar4 = (longlong)iVar2;
        if ((((*(char *)(param_1 + 0x1418) != '\0') && (-1 < iVar2)) &&
            (iVar2 < *(int *)(param_1 + 0x1900))) &&
           (fVar1 = *(float *)(plVar5 + lVar4 * 3 + 2),
           *(float *)(plVar5 + lVar4 * 3 + 2) = fVar1 - param_2, fVar1 - param_2 <= 0.0)) {
          *(undefined4 *)(plVar5 + lVar4 * 3 + 2) = 0;
          FUN_140a0ba00(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409f8ec0 FUN_1409f8ec0 body=1020 status=ok
// SIG undefined FUN_1409f8ec0(void)

void FUN_1409f8ec0(longlong param_1)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  void *_Src;
  longlong *plVar17;
  float fVar18;
  longlong local_68;
  int local_60;
  
  iVar4 = FUN_14233f450();
  if (iVar4 != 3) {
    return;
  }
  iVar5 = FUN_140c13370(param_1);
  iVar4 = *(int *)(param_1 + 0x1f0);
  iVar13 = 0;
  if (iVar5 + -1 < 0) {
LAB_1409f8f15:
    if (iVar13 < iVar4) {
      bVar2 = true;
      goto LAB_1409f8f1f;
    }
  }
  else {
    iVar13 = iVar4;
    if (iVar5 + -1 < iVar4 + -1) {
      iVar13 = iVar5;
    }
    iVar13 = iVar13 + -1;
    if (-1 < iVar13) goto LAB_1409f8f15;
  }
  bVar2 = false;
LAB_1409f8f1f:
  if ((((bVar2) &&
       (pbVar10 = (byte *)((longlong)iVar13 * 0xb0 + *(longlong *)(param_1 + 0x1e8)),
       pbVar10 != (byte *)0x0)) && ((*pbVar10 & 0x10) != 0)) &&
     (lVar12 = *(longlong *)(param_1 + 0x118), lVar12 != 0)) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (lVar6 = *(longlong *)(lVar12 + 0x910), lVar6 != 0)) &&
       ((*(byte *)(lVar6 + 200) & 0x20) == 0)) {
      local_68 = 0;
      FUN_1409f02c0(&local_68,*(undefined8 *)(pbVar10 + 0xa0),*(undefined4 *)(pbVar10 + 0xa8),0,0);
      iVar4 = *(int *)(lVar12 + 0x2210);
      uVar11 = (ulonglong)local_60;
      if (iVar4 < 1) {
        uVar1 = lVar12 + 0x2200;
        iVar13 = *(int *)(lVar12 + 0x2210);
        if (iVar13 < local_60) {
          iVar5 = iVar13 + (local_60 - iVar13);
          *(int *)(lVar12 + 0x2210) = iVar5;
          if (*(int *)(lVar12 + 0x2214) < iVar5) {
            FUN_140a13660(uVar1);
          }
          uVar15 = *(ulonglong *)(lVar12 + 0x2208);
          if (*(ulonglong *)(lVar12 + 0x2208) == 0) {
            uVar15 = uVar1;
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(uVar15 + (longlong)iVar13),0,(longlong)(local_60 - iVar13));
        }
        else if ((local_60 < iVar13) && (iVar5 = iVar13 - local_60, iVar5 != 0)) {
          iVar7 = (iVar13 - local_60) - iVar5;
          if (iVar7 != 0) {
            uVar15 = (ulonglong)(*(longlong *)(lVar12 + 0x2208) != 0) - 1 & uVar1 |
                     *(ulonglong *)(lVar12 + 0x2208);
            _guard_xfg_dispatch_icall_nop
                      ((void *)(uVar15 + uVar11),(void *)((longlong)(local_60 + iVar5) + uVar15),
                       (longlong)iVar7);
            iVar13 = *(int *)(lVar12 + 0x2210);
          }
          *(int *)(lVar12 + 0x2210) = iVar13 - iVar5;
          FUN_140a13970(uVar1);
        }
      }
      iVar13 = local_60 + -1;
      if (-1 < iVar13) {
        lVar16 = (longlong)iVar13;
        _Src = (void *)((longlong)local_60 * 0x78 + local_68);
        pbVar10 = (byte *)(local_68 + 0x20 + lVar16 * 0x78);
        plVar17 = (longlong *)(local_68 + 0x10 + lVar16 * 0x78);
        do {
          bVar2 = false;
          if (iVar4 < 1) {
            if ((*pbVar10 & 2) != 0) {
              fVar18 = (float)FUN_142c98860(plVar17 + 3);
              iVar5 = rand();
              if (fVar18 <= (float)iVar5 * 3.051851e-05) {
                bVar2 = true;
                goto LAB_1409f9199;
              }
            }
            lVar8 = *(longlong *)(lVar12 + 0x2208);
            if (*(longlong *)(lVar12 + 0x2208) == 0) {
              lVar8 = lVar12 + 0x2200;
            }
            *(undefined1 *)(lVar8 + lVar16) = 1;
          }
          else {
            if ((iVar13 < 0) || (*(int *)(lVar12 + 0x2210) <= iVar13)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              lVar8 = *(longlong *)(lVar12 + 0x2208);
              if (*(longlong *)(lVar12 + 0x2208) == 0) {
                lVar8 = lVar12 + 0x2200;
              }
              if (*(char *)(lVar8 + lVar16) == '\0') {
                bVar2 = true;
              }
            }
          }
LAB_1409f9199:
          *pbVar10 = *pbVar10 & 0xfd;
          if (bVar2) {
            if (*plVar17 != 0) {
              FMemory::Free();
            }
            iVar5 = ((int)uVar11 - iVar13) + -1;
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop(plVar17 + -2,_Src,(longlong)iVar5 * 0x78);
            }
            uVar11 = (ulonglong)((int)uVar11 - 1);
          }
          _Src = (void *)((longlong)_Src + -0x78);
          plVar17 = plVar17 + -0xf;
          lVar16 = lVar16 + -1;
          pbVar10 = pbVar10 + -0x78;
          iVar13 = iVar13 + -1;
        } while (-1 < iVar13);
      }
      plVar17 = (longlong *)(lVar6 + 0x678);
      lVar12 = local_68;
      if (plVar17 != &local_68) {
        iVar4 = *(int *)(lVar6 + 0x680);
        if (iVar4 != 0) {
          plVar14 = (longlong *)(*plVar17 + 0x10);
          do {
            if (*plVar14 != 0) {
              FMemory::Free();
            }
            plVar14 = plVar14 + 0xf;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        lVar12 = local_68;
        FUN_1409f02c0(plVar17,local_68,uVar11 & 0xffffffff,*(undefined4 *)(lVar6 + 0x684),0);
      }
      if ((int)uVar11 != 0) {
        plVar17 = (longlong *)(lVar12 + 0x10);
        do {
          if (*plVar17 != 0) {
            FMemory::Free();
          }
          plVar17 = plVar17 + 0xf;
          uVar9 = (int)uVar11 - 1;
          uVar11 = (ulonglong)uVar9;
        } while (uVar9 != 0);
      }
      if (lVar12 != 0) {
        FMemory::Free(lVar12);
      }
    }
  }
  return;
}



// FUNCTION 1409f92c0 FUN_1409f92c0 body=170 status=ok
// SIG undefined FUN_1409f92c0(void)

void FUN_1409f92c0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar2 = FUN_140c13370();
  iVar2 = iVar2 + -1;
  iVar5 = *(int *)(param_1 + 0x1f0) + -1;
  if (iVar2 < 0) {
    iVar5 = 0;
  }
  else {
    if (iVar2 < iVar5) {
      iVar5 = iVar2;
    }
    if (iVar5 < 0) {
      return;
    }
  }
  if (((iVar5 < *(int *)(param_1 + 0x1f0)) &&
      (pbVar6 = (byte *)((longlong)iVar5 * 0xb0 + *(longlong *)(param_1 + 0x1e8)),
      pbVar6 != (byte *)0x0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
    uVar3 = FUN_142e79d90();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    if (lVar4 != 0) {
      if (((*pbVar6 & 1) != 0) && (*(longlong *)(pbVar6 + 8) != 0)) {
        FUN_142ddc6a0(lVar4);
        return;
      }
      if ((*pbVar6 & 2) != 0) {
        FUN_142ddc620(lVar4,pbVar6 + 0x10);
      }
    }
  }
  return;
}



// FUNCTION 1409f9370 FUN_1409f9370 body=1043 status=ok
// SIG undefined FUN_1409f9370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409f9370(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  float fVar18;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined8 local_168;
  float local_160;
  longlong local_158;
  undefined8 local_150 [2];
  undefined8 local_140;
  undefined4 local_138;
  longlong local_128;
  undefined4 local_120;
  longlong local_118 [2];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
    local_128 = *(longlong *)(param_1 + 0x118);
    if (local_128 != 0) {
      local_158 = *(longlong *)(param_1 + 0x2b8);
      lVar9 = *(longlong *)(param_1 + 0x2b0);
      local_168 = param_1;
      local_118[0] = param_2;
      if (0 < *(int *)(param_1 + 0x2c8)) {
        pbVar14 = *(byte **)(param_1 + 0x2c0);
        puVar11 = (undefined8 *)0x0;
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        pbVar1 = pbVar14 + (longlong)*(int *)(param_1 + 0x2c8) * 0x18;
        local_4c = 0;
        if (pbVar14 != pbVar1) {
          puVar13 = puVar11;
          puVar15 = puVar11;
          do {
            bVar2 = *pbVar14;
            if (((bVar2 & 4) == 0) || ((bVar2 & 8) != 0)) {
              if ((bVar2 & 2) == 0) {
                local_150[0] = 0;
                puVar17 = local_150;
              }
              else {
                puVar17 = &local_140;
                local_140 = *(undefined8 *)(pbVar14 + 8);
              }
              uVar16 = 0;
              if ((bVar2 & 1) != 0) {
                uVar16 = *(undefined8 *)(pbVar14 + 0x10);
              }
              local_50 = (int)puVar13 + 1;
              if ((int)puVar11 < (int)local_50) {
                TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>
                ::ResizeGrow(&local_d8,puVar13);
                puVar15 = local_58;
              }
              puVar11 = &local_d8;
              if (puVar15 != (undefined8 *)0x0) {
                puVar11 = puVar15;
              }
              uVar3 = *puVar17;
              puVar11[(longlong)(int)puVar13 * 2] = uVar16;
              (puVar11 + (longlong)(int)puVar13 * 2)[1] = uVar3;
              puVar11 = (undefined8 *)(ulonglong)local_4c;
              puVar13 = (undefined8 *)(ulonglong)local_50;
              puVar15 = local_58;
            }
            param_1 = local_168;
            pbVar14 = pbVar14 + 0x18;
          } while (pbVar14 != pbVar1);
          iVar12 = (int)puVar13;
          if (0 < iVar12) {
            iVar7 = rand();
            local_150[0] = 0;
            iVar8 = (int)((float)iVar7 * 3.051851e-05 * (float)iVar12);
            iVar7 = iVar12 + -1;
            if (iVar8 <= iVar12 + -1) {
              iVar7 = iVar8;
            }
            puVar11 = &local_d8;
            if (local_58 != (undefined8 *)0x0) {
              puVar11 = local_58;
            }
            lVar4 = puVar11[(longlong)iVar7 * 2];
            if (lVar4 != 0) {
              local_158 = lVar4;
            }
            lVar4 = (puVar11 + (longlong)iVar7 * 2)[1];
            puVar15 = local_58;
            if (lVar4 != 0) {
              lVar9 = lVar4;
            }
          }
          if (puVar15 != (undefined8 *)0x0) {
            FMemory::Free(puVar15);
          }
        }
      }
      lVar5 = local_118[0];
      lVar4 = *(longlong *)(local_128 + 0x168);
      if (lVar4 == 0) {
        local_f8 = 0.0;
        fStack_f4 = 0.0;
        uStack_f0 = 0;
        uStack_ec = 0;
        local_e8 = _DAT_1468657f0 & _DAT_146865800;
        uStack_e4 = uRam00000001468657f4 & uRam0000000146865804;
        uStack_e0 = uRam00000001468657f8 & uRam0000000146865808;
        uStack_dc = (uint)fRam00000001468657fc & uRam000000014686580c;
        local_108 = 0;
        uStack_104 = 0;
        uStack_100 = 0;
        fStack_fc = fRam00000001468657fc;
      }
      else {
        local_108 = *(undefined4 *)(lVar4 + 0x210);
        uStack_104 = *(undefined4 *)(lVar4 + 0x214);
        uStack_100 = *(undefined4 *)(lVar4 + 0x218);
        local_f8 = *(float *)(lVar4 + 0x220);
        fStack_f4 = *(float *)(lVar4 + 0x224);
        uStack_f0 = *(undefined4 *)(lVar4 + 0x228);
        uStack_ec = *(undefined4 *)(lVar4 + 0x22c);
        local_e8 = *(uint *)(lVar4 + 0x230);
        uStack_e4 = *(uint *)(lVar4 + 0x234);
        uStack_e0 = *(uint *)(lVar4 + 0x238);
        uStack_dc = *(uint *)(lVar4 + 0x23c);
        fStack_fc = *(float *)(lVar4 + 0x21c);
      }
      local_178 = local_118[0];
      FUN_140b537a0(&local_108,local_128,lVar9,local_158);
      if ((*(byte *)(param_1 + 0x311) & 4) != 0) {
        lVar9 = *(longlong *)(lVar5 + 0x168);
        if (lVar9 == 0) {
          local_168 = _DAT_1468b5d90;
          local_160 = (float)DAT_1468b5d98;
        }
        else {
          local_168 = *(undefined8 *)(lVar9 + 0x220);
          local_160 = *(float *)(lVar9 + 0x228);
        }
        lVar9 = *(longlong *)(param_1 + 0x120);
        local_140 = local_168;
        local_138 = local_160;
        if (lVar9 == 0) {
          lVar9 = FUN_1423407b0(param_1);
        }
        FUN_142f88b40(&local_d8);
        local_58 = (undefined8 *)FUN_142f9cfb0(lVar9,0);
        local_d8 = local_140;
        local_d0 = local_138;
        local_cc = 0x45000000;
        cVar6 = FUN_142f9e730(&local_d8,local_150,0);
        if (cVar6 != '\0') {
          fVar18 = (float)FUN_1428cc5b0(lVar9);
          FUN_1424c5f20(&local_108,&local_140,local_150,fVar18 * 4.5);
          local_160 = fStack_f4;
          local_168._0_4_ = fStack_fc;
          local_168._4_4_ = local_f8;
          plVar10 = (longlong *)FVector::Rotation(&local_168,local_118);
          local_128 = *plVar10;
          local_120 = (undefined4)plVar10[1];
          AActor::SetActorRotation(lVar5,&local_128,1);
          FUN_143015760(lVar5,SQRT((float)local_168 * (float)local_168 +
                                   local_168._4_4_ * local_168._4_4_ + local_160 * local_160));
        }
      }
    }
  }
  return;
}



// FUNCTION 1409f9790 FUN_1409f9790 body=61 status=ok
// SIG undefined FUN_1409f9790(void)

undefined1 FUN_1409f9790(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x7b8) != 0) && (*(char *)(param_1 + 0x790) != '\0')) {
    FUN_1409fde20();
    FUN_1412e83c0(*(undefined8 *)(param_1 + 0x7b8));
    return 1;
  }
  return 0;
}



// FUNCTION 1409f97d0 FUN_1409f97d0 body=1351 status=ok
// SIG undefined FUN_1409f97d0(void)

longlong * FUN_1409f97d0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [24];
  
  plVar6 = param_1 + 0x85;
  plVar12 = (longlong *)*plVar6;
  lVar11 = (longlong)(int)param_1[0x86];
  plVar10 = plVar12 + lVar11 * 5;
  for (; plVar12 != plVar10; plVar12 = plVar12 + 5) {
    if (param_3 == (longlong *)*plVar12) goto LAB_1409f999f;
  }
  iVar3 = (int)param_1[0x86] + 1;
  *(int *)(param_1 + 0x86) = iVar3;
  if (*(int *)((longlong)param_1 + 0x434) < iVar3) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar6);
  }
  lVar8 = *plVar6;
  *(undefined8 *)(lVar8 + lVar11 * 0x28) = 0;
  *(undefined8 *)(lVar8 + 8 + lVar11 * 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x10 + lVar11 * 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x18 + lVar11 * 0x28) = 0;
  *(undefined8 *)(lVar8 + 0x20 + lVar11 * 0x28) = 0;
  plVar12 = (longlong *)(*plVar6 + lVar11 * 0x28);
  *plVar12 = (longlong)param_3;
  local_90 = (undefined8 *)0x0;
  local_88 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_90);
  local_80 = 0;
  local_78 = 0;
  *local_90 = DAT_146870858;
  puVar4 = (undefined8 *)operator_new(0x28,&local_80);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1441bfda8;
    FWeakObjectPtr::operator=(puVar4 + 1,param_1);
    puVar4[2] = FUN_1409fccf0;
    puVar4[3] = param_3;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[4] = uVar5;
    *puVar4 = &PTR_FUN_1441bfdf0;
  }
  lVar11 = *param_1;
  uVar5 = (**(code **)(*param_3 + 400))(param_3,local_50);
  plVar6 = (longlong *)(**(code **)(lVar11 + 800))(param_1,local_70,uVar5,&local_90,&local_80,100);
  if (plVar12 + 1 != plVar6) {
    plVar12[1] = *plVar6;
    *plVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(plVar12 + 2,plVar6 + 1);
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_68 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  if (local_90 != (undefined8 *)0x0) {
    FMemory::Free();
  }
LAB_1409f999f:
  lVar11 = plVar12[1];
  if ((lVar11 == 0) || (*(char *)(lVar11 + 0x10) == '\0')) {
    iVar3 = (int)plVar12[4];
    *(int *)(plVar12 + 4) = iVar3 + 1;
    if (*(int *)((longlong)plVar12 + 0x24) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12 + 3,iVar3);
    }
    plVar6 = (longlong *)((longlong)iVar3 * 0x10 + plVar12[3]);
    *plVar6 = 0;
    *(undefined4 *)(plVar6 + 1) = 0;
    if (((param_4 != plVar6) && ((int)param_4[1] != 0)) && ((longlong *)*param_4 != (longlong *)0x0)
       ) {
      (**(code **)(*(longlong *)*param_4 + 0x30))();
    }
  }
  else {
    local_60 = 0;
    uStack_58 = 0;
    FUN_142838d00(param_4,&local_60);
  }
  plVar6 = param_1 + 0x94;
  plVar10 = (longlong *)*plVar6;
  plVar12 = plVar10 + (longlong)(int)param_1[0x95] * 2;
  for (; plVar10 != plVar12; plVar10 = plVar10 + 2) {
    plVar7 = (longlong *)0x0;
    if ((*plVar10 != 0) && (plVar10[1] != 0)) {
      piVar1 = (int *)(plVar10[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) {
        plVar2 = (longlong *)plVar10[1];
        plVar9 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar3 = (int)plVar2[1];
          bVar13 = iVar3 == 0;
          if (bVar13) {
            *(int *)(plVar2 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          while (plVar9 = plVar7, !bVar13) {
            LOCK();
            bVar13 = iVar3 == (int)plVar2[1];
            if (bVar13) {
              *(int *)(plVar2 + 1) = iVar3 + 1;
            }
            UNLOCK();
            if (bVar13) {
              plVar7 = (longlong *)*plVar10;
              plVar9 = plVar2;
              break;
            }
            LOCK();
            iVar3 = (int)plVar2[1];
            bVar13 = iVar3 == 0;
            if (bVar13) {
              *(int *)(plVar2 + 1) = 0;
              iVar3 = 0;
            }
            UNLOCK();
          }
        }
        plVar7 = (longlong *)plVar7[2];
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar9 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        lVar8 = 0;
        if (plVar7 == param_3) {
          *param_2 = 0;
          lVar11 = plVar10[1];
          param_2[1] = lVar11;
          if (lVar11 == 0) goto LAB_1409f9cec;
          LOCK();
          iVar3 = *(int *)(lVar11 + 8);
          bVar13 = iVar3 == 0;
          if (bVar13) {
            *(int *)(lVar11 + 8) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          if (!bVar13) goto LAB_1409f9b50;
          goto LAB_1409f9b64;
        }
      }
    }
  }
  plVar7 = (longlong *)operator_new(0x20);
  plVar10 = (longlong *)0x0;
  plVar12 = plVar10;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = (longlong)param_3;
    *(undefined4 *)(plVar7 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = 0;
    uVar5 = FUN_1422ca050();
    FWeakObjectPtr::operator=(plVar7 + 3,uVar5);
    plVar12 = plVar7;
  }
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_1441db700;
    plVar7[2] = (longlong)plVar12;
    plVar10 = plVar7;
  }
  if (plVar12 == (longlong *)0x0) {
LAB_1409f9c51:
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
    }
  }
  else {
    if ((*plVar12 != 0) && (plVar12[1] != 0)) {
      piVar1 = (int *)(plVar12[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_1409f9c51;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *plVar12 = (longlong)plVar12;
    plVar7 = (longlong *)plVar12[1];
    if (plVar10 != plVar7) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar12[1];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar12[1] = (longlong)plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar10 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      goto LAB_1409f9c51;
    }
  }
  iVar3 = (int)param_1[0x95];
  *(int *)(param_1 + 0x95) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x4ac) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar3);
  }
  puVar4 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar6);
  *puVar4 = plVar12;
  puVar4[1] = plVar10;
  if ((lVar11 == 0) || (*(char *)(lVar11 + 0x10) == '\0')) {
    iVar3 = (int)param_1[0x97];
    *(int *)(param_1 + 0x97) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x4bc) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x96,iVar3);
    }
    puVar4 = (undefined8 *)((longlong)iVar3 * 0x10 + param_1[0x96]);
    *puVar4 = plVar12;
    puVar4[1] = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
  }
  *param_2 = (longlong)plVar12;
  param_2[1] = (longlong)plVar10;
LAB_1409f9cec:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return param_2;
  while( true ) {
    LOCK();
    iVar3 = *(int *)(lVar11 + 8);
    bVar13 = iVar3 == 0;
    if (bVar13) {
      *(int *)(lVar11 + 8) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar13) break;
LAB_1409f9b50:
    LOCK();
    bVar13 = iVar3 == *(int *)(lVar11 + 8);
    if (bVar13) {
      *(int *)(lVar11 + 8) = iVar3 + 1;
    }
    UNLOCK();
    if (bVar13) {
      lVar8 = param_2[1];
      goto LAB_1409f9b6c;
    }
  }
LAB_1409f9b64:
  param_2[1] = 0;
LAB_1409f9b6c:
  if (lVar8 != 0) {
    *param_2 = *plVar10;
  }
  goto LAB_1409f9cec;
}



// FUNCTION 1409f9d20 FUN_1409f9d20 body=175 status=ok
// SIG undefined FUN_1409f9d20(void)

undefined8 FUN_1409f9d20(longlong *param_1,longlong param_2)

{
  if (((param_1[0xf7] != 0) && (param_1[0xfa] != 0)) && ((char)param_1[0xf2] != '\0')) {
    FUN_14223c460(param_1[0xf7],0);
    FUN_1422232e0(param_1[0xf7],param_1[0xfa],&DAT_146532184,param_2);
    FUN_1409fde20(param_1);
    if ((param_1[0x23] != 0) && (*(char *)(param_1[0x23] + 0x128) == '\x03')) {
      param_1[0xfe] = param_1[0xf7];
      param_1[0xfd] = param_2;
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1409f9dd0 FUN_1409f9dd0 body=303 status=ok
// SIG undefined FUN_1409f9dd0(void)

ulonglong FUN_1409f9dd0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  BOOL BVar4;
  ulonglong uVar5;
  ulonglong extraout_RAX;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  uVar5 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 0x150);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0x150) = 0;
  }
  else {
    uVar5 = (ulonglong)uVar1;
  }
  UNLOCK();
  if (uVar1 == 0) {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    }
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar3 = *(longlong *)(param_1 + 0x68);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    }
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + *(longlong *)(param_1 + 0x68);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
    }
    uVar5 = *(ulonglong *)(param_1 + 0x98);
    while (uVar5 < (ulonglong)(lVar3 + lVar2)) {
      local_14 = *(int *)(param_1 + 0x98) - (int)lVar2;
      local_c = local_14 + 1;
      local_18 = 0x503c0090;
      local_10 = 0x503c0080;
      FUN_1405a2520(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0),&local_18,2);
      *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + *(longlong *)(param_1 + 0xa0);
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
      uVar5 = *(ulonglong *)(param_1 + 0x98);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
    uVar5 = extraout_RAX;
  }
  return uVar5;
}



// FUNCTION 1409f9f00 FUN_1409f9f00 body=150 status=ok
// SIG undefined FUN_1409f9f00(void)

void FUN_1409f9f00(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x33f,L"Pure virtual not implemented (%s)",L"ANavigationData::BatchProjectPoints");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x33f,L"Pure virtual not implemented (%s)",L"ANavigationData::BatchProjectPoints");
  plVar4 = *(longlong **)(param_3 + 8);
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



// FUNCTION 1409f9fa0 FUN_1409f9fa0 body=36 status=ok
// SIG undefined FUN_1409f9fa0(void)

void FUN_1409f9fa0(longlong param_1)

{
  if (*(char *)(param_1 + 0x338) != '\0') {
    FUN_140a1e990();
  }
  FUN_142330890(param_1);
  return;
}



// FUNCTION 1409f9fd0 FUN_1409f9fd0 body=60 status=ok
// SIG undefined FUN_1409f9fd0(void)

void FUN_1409f9fd0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 local_res10 [24];
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  puVar1 = (undefined8 *)FName::FName(local_res10,puVar2,1);
  FUN_140a05c80(param_1,*puVar1);
  return;
}



// FUNCTION 1409fa060 FUN_1409fa060 body=48 status=ok
// SIG undefined FUN_1409fa060(void)

void FUN_1409fa060(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_142223710();
  uVar1 = FUN_141442290();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0xea] = lVar2;
  return;
}



// FUNCTION 1409fa090 FUN_1409fa090 body=610 status=ok
// SIG undefined FUN_1409fa090(void)

void FUN_1409fa090(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_141264210();
  FUN_140a11950(param_1);
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar3 < DAT_146865e28) {
    _Init_thread_header(&DAT_146865e28);
    if (DAT_146865e28 == -1) {
      FName::FName(&DAT_146865e20,L"Proj_Nog_BuffDrone_HandsomeJackie_C",1);
      _Init_thread_footer(&DAT_146865e28);
    }
  }
  if ((param_1[2] != 0) && (*(longlong *)(param_1[2] + 0x18) == DAT_146865e20)) {
    if (*piVar3 < DAT_146865e38) {
      _Init_thread_header(&DAT_146865e38);
      if (DAT_146865e38 == -1) {
        FWeakObjectPtr::operator=(&DAT_146865e30,0);
        _Init_thread_footer(&DAT_146865e38);
      }
    }
    if (*piVar3 < DAT_146865e48) {
      _Init_thread_header(&DAT_146865e48);
      if (DAT_146865e48 == -1) {
        FName::FName(&DAT_146865e40,L"BasicShield",1);
        _Init_thread_footer(&DAT_146865e48);
      }
    }
    if (*piVar3 < DAT_146865e58) {
      _Init_thread_header(&DAT_146865e58);
      if (DAT_146865e58 == -1) {
        FName::FName(&DAT_146865e50,L"Nog_BuffDrone_RegisterBuffData",1);
        _Init_thread_footer(&DAT_146865e58);
      }
    }
    if ((char)param_1[0x25] != '\x03') {
      lVar1 = FUN_140a63ba0(param_1);
      if (lVar1 != 0) {
        lVar1 = FWeakObjectPtr::Get(&DAT_146865e30);
        if (lVar1 == 0) {
          uVar2 = USoundMix::GetPrivateStaticClass();
          uVar2 = FUN_141799780(uVar2,0xffffffffffffffff,
                                L"DataTable\'/Game/Enemies/Nog/_Shared/_Design/Buffs/Table_NogBuffData.Table_NogBuffData\'"
                               );
          FWeakObjectPtr::operator=(&DAT_146865e30,uVar2);
        }
        lVar1 = FWeakObjectPtr::Get(&DAT_146865e30);
        if (lVar1 != 0) {
          lVar1 = UObject::FindFunction(param_1,DAT_146865e50);
          if (lVar1 != 0) {
            local_28 = 0;
            local_20 = 0;
            local_28 = FWeakObjectPtr::Get(&DAT_146865e30);
            local_20 = DAT_146865e40;
            local_18 = FUN_140a63ba0(param_1);
            (**(code **)(*param_1 + 0x208))(param_1,lVar1,&local_28);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1409fa300 FUN_1409fa300 body=549 status=ok
// SIG undefined FUN_1409fa300(void)

void FUN_1409fa300(longlong param_1)

{
  byte bVar1;
  wchar_t *pwVar2;
  int iVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  
  FUN_142223710();
  pwVar7 = (wchar_t *)0x0;
  if (*(longlong *)(param_1 + 0x468) != 0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ATinkPile::OnActorSpawned",L"::");
    pwVar6 = pwVar7;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    FUN_14074ba20(*(longlong *)(param_1 + 0x468) + 0x788,param_1,FUN_140a0ca60,local_res8);
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ATinkPile::OnActorDied",L"::");
    pwVar6 = pwVar7;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    FUN_14074ba20(*(longlong *)(param_1 + 0x468) + 0x798,param_1,FUN_140a0ca40,local_res8);
  }
  if ((*(char *)(param_1 + 0x128) == '\x03') && ((*(byte *)(param_1 + 0x568) & 0xfb) == 0)) {
    *(undefined1 *)(param_1 + 0x568) = 1;
    FUN_140a0e5b0(param_1);
  }
  bVar1 = *(byte *)(param_1 + 0x491);
  *(byte *)(param_1 + 0x579) = bVar1;
  *(undefined8 *)(param_1 + 0x558) = *(undefined8 *)(param_1 + 0x498);
  if (((*(char *)(param_1 + 0x490) != '\0') && (*(longlong *)(param_1 + 0x468) != 0)) &&
     (*(char *)(param_1 + 0x578) == '\0')) {
    if (*(int *)(param_1 + 0x4a8) != *(int *)(param_1 + 0x4d4)) {
      lVar5 = *(longlong *)(param_1 + 0x4e0);
      if (*(longlong *)(param_1 + 0x4e0) == 0) {
        lVar5 = param_1 + 0x4d8;
      }
      iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x4e8) - 1U & (ulonglong)bVar1) * 4);
      if (iVar3 != -1) {
        do {
          pwVar6 = (wchar_t *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar3 * 0x18);
          if (*(byte *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar3 * 0x18) == bVar1) {
            if (iVar3 != -1) goto LAB_1409fa4e3;
            break;
          }
          iVar3 = *(int *)(pwVar6 + 8);
        } while (iVar3 != -1);
      }
    }
    pwVar6 = pwVar7;
LAB_1409fa4e3:
    pwVar4 = pwVar6 + 4;
    if (pwVar6 == (wchar_t *)0x0) {
      pwVar4 = pwVar7;
    }
    if (pwVar4 != (wchar_t *)0x0) {
      FUN_1407da8a0(*(longlong *)(param_1 + 0x468),*(undefined8 *)pwVar4);
      (**(code **)(**(longlong **)(param_1 + 0x468) + 0x900))();
      FUN_1407c56e0(*(undefined8 *)(param_1 + 0x468));
    }
  }
  return;
}



// FUNCTION 1409fa530 FUN_1409fa530 body=685 status=ok
// SIG undefined FUN_1409fa530(void)

void FUN_1409fa530(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_142cb7380();
  iVar2 = FUN_140c13370(param_1);
  iVar9 = 0;
  iVar2 = iVar2 + -1;
  iVar8 = *(int *)(param_1 + 0x1f0) + -1;
  if (-1 < iVar2) {
    iVar9 = iVar8;
    if (iVar2 < iVar8) {
      iVar9 = iVar2;
    }
    if (iVar9 < 0) goto LAB_1409fa5d5;
  }
  if (((iVar9 < *(int *)(param_1 + 0x1f0)) &&
      (pbVar10 = (byte *)((longlong)iVar9 * 0xb0 + *(longlong *)(param_1 + 0x1e8)),
      pbVar10 != (byte *)0x0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
    uVar3 = FUN_142e79d90();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    if (lVar4 != 0) {
      if (((*pbVar10 & 1) == 0) || (*(longlong *)(pbVar10 + 8) == 0)) {
        if ((*pbVar10 & 2) != 0) {
          FUN_142ddc620(lVar4,pbVar10 + 0x10);
        }
      }
      else {
        FUN_142ddc6a0(lVar4);
      }
    }
  }
LAB_1409fa5d5:
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar3 = UScrollBox::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    if (lVar4 != 0) {
      local_28 = FUN_140a0c570;
      uStack_20 = 0;
      TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                (lVar4 + 0x268,local_res8,param_1,&local_28);
      if (*(char *)(param_1 + 0x2f0) == '\0') {
        return;
      }
      FUN_142dafbc0(lVar4 + 0x328,&DAT_146865c28);
      local_28 = FUN_140a0a4c0;
      uStack_20 = 0;
      TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                (lVar4 + 0x1e8,local_res8,param_1,&local_28);
      local_28 = FUN_140a0cb00;
      uStack_20 = 0;
      TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                (lVar4 + 0x1d0,local_res8,param_1,&local_28);
    }
    if (*(char *)(param_1 + 0x2f0) != '\0') {
      uVar3 = FUN_141477fa0();
      lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
      if (lVar4 != 0) {
        FUN_142dafbc0(lVar4 + 0x238,&DAT_146865c28);
        uStack_20 = 0;
        local_28 = FUN_140a0e1d0;
        plVar1 = (longlong *)(lVar4 + 0x310);
        plVar5 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = (longlong)&PTR_FUN_143fcff50;
          FWeakObjectPtr::operator=(plVar5 + 1,param_1);
          *(undefined4 *)(plVar5 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)plVar5 + 0x14) = local_28._4_4_;
          *(undefined4 *)(plVar5 + 3) = uStack_20;
          *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_1c;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar5[5] = lVar6;
          *plVar5 = (longlong)&PTR_FUN_143fcff98;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
          iVar9 = *(int *)(lVar4 + 0x318);
          *(int *)(lVar4 + 0x318) = iVar9 + 1;
          if (*(int *)(lVar4 + 0x31c) < iVar9 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar9);
          }
          puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + *plVar1);
          *puVar7 = plVar5;
          *(undefined4 *)(puVar7 + 1) = 3;
        }
        if (*(char *)(lVar4 + 0x3af) == '\x01') {
          FUN_140a0e1d0(param_1,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409fa7e0 FUN_1409fa7e0 body=427 status=ok
// SIG undefined FUN_1409fa7e0(void)

void FUN_1409fa7e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res10;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  if (*(char *)(param_1 + 0x372) == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x118);
    *(undefined1 *)(param_1 + 0x372) = 1;
    if (plVar3 != (longlong *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UAIHeldActorComponent::OnHeldActorSpawned",L"::");
      pwVar6 = (wchar_t *)0x0;
      while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar6 = pwVar5;
      }
      FName::FName(&local_res10,pwVar6 + 2,1);
      plVar1 = (longlong *)(param_1 + 0x308);
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_28), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_20);
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      iVar2 = *(int *)(param_1 + 0x310);
      lVar8 = (longlong)iVar2;
      *(int *)(param_1 + 0x310) = iVar2 + 1;
      if (*(int *)(param_1 + 0x314) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      lVar9 = *plVar1;
      *(undefined4 *)(lVar9 + lVar8 * 0x10) = local_28;
      *(undefined4 *)(lVar9 + 4 + lVar8 * 0x10) = local_24;
      *(longlong *)(lVar9 + 8 + lVar8 * 0x10) = local_20;
      lVar8 = (**(code **)(*plVar3 + 0x668))(plVar3);
      if (lVar8 != 0) {
        lVar9 = ARemnantWeaponMod::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(lVar8 + 0x5e8);
          *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(lVar8 + 0x568);
        }
      }
    }
  }
  FUN_142d7dae0(param_1);
  return;
}



// FUNCTION 1409fa990 FUN_1409fa990 body=649 status=ok
// SIG undefined FUN_1409fa990(void)

void FUN_1409fa990(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res10;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != (longlong *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UAIStolenProjectileComponent::OnOverlapBegin",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    lVar8 = local_res10;
    plVar1 = (longlong *)(param_1 + 0x570);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = lVar8;
    if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_38), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_30);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    iVar2 = *(int *)(param_1 + 0x578);
    lVar8 = (longlong)iVar2;
    *(int *)(param_1 + 0x578) = iVar2 + 1;
    if (*(int *)(param_1 + 0x57c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    lVar9 = *plVar1;
    *(undefined4 *)(lVar9 + lVar8 * 0x10) = local_38;
    *(undefined4 *)(lVar9 + 4 + lVar8 * 0x10) = local_34;
    *(longlong *)(lVar9 + 8 + lVar8 * 0x10) = local_30;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UAIStolenProjectileComponent::OnOverlapEnd",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    plVar1 = (longlong *)(param_1 + 0x580);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = local_res10;
    if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_38), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_30);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    iVar2 = *(int *)(param_1 + 0x588);
    lVar8 = (longlong)iVar2;
    *(int *)(param_1 + 0x588) = iVar2 + 1;
    if (*(int *)(param_1 + 0x58c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    lVar9 = *plVar1;
    *(undefined4 *)(lVar9 + lVar8 * 0x10) = local_38;
    *(undefined4 *)(lVar9 + 4 + lVar8 * 0x10) = local_34;
    *(longlong *)(lVar9 + 8 + lVar8 * 0x10) = local_30;
    lVar8 = (**(code **)(*plVar3 + 0x668))(plVar3);
    if (lVar8 != 0) {
      lVar9 = ARemnantWeaponMod::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        *(undefined8 *)(param_1 + 0x7d8) = *(undefined8 *)(lVar8 + 0x5e8);
        *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(lVar8 + 0x568);
      }
    }
    lVar8 = (**(code **)(*plVar3 + 0x678))(plVar3);
    if (lVar8 != 0) {
      *(undefined8 *)(param_1 + 2000) = *(undefined8 *)(lVar8 + 0x4c0);
    }
  }
  FUN_142385110(param_1);
  return;
}



// FUNCTION 1409fac30 FUN_1409fac30 body=261 status=ok
// SIG undefined FUN_1409fac30(void)

void FUN_1409fac30(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  float fVar7;
  
  FUN_140775270();
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar1 + 0x668))(plVar1);
    if (lVar4 != 0) {
      lVar5 = FUN_1413e48b0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1409faca1;
    }
  }
  lVar4 = 0;
LAB_1409faca1:
  *(longlong *)(param_1 + 0x8b0) = lVar4;
  lVar4 = FUN_142da89b0(param_1);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x68) != '\0')) {
    iVar3 = FUN_140c13370(plVar1);
    lVar5 = 0x130;
    if (1 < iVar3) {
      lVar5 = 0x1d8;
    }
    uVar6 = FUN_142c98860(lVar5 + lVar4,*(undefined8 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x8c4) = uVar6;
    lVar5 = 0x168;
    if (1 < iVar3) {
      lVar5 = 0x1a0;
    }
    fVar7 = (float)FUN_142c98860(lVar5 + lVar4,*(undefined8 *)(param_1 + 0x1a8));
    *(float *)(param_1 + 0x8a4) = fVar7 * *(float *)(lVar4 + 0x118);
  }
  return;
}



// FUNCTION 1409fad40 FUN_1409fad40 body=91 status=ok
// SIG undefined FUN_1409fad40(void)

void FUN_1409fad40(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x390) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x394)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x388,0);
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1405dfd80(*(longlong *)(param_1 + 0x118),param_1 + 0x388,0);
  }
  FUN_1405c5100(param_1);
  return;
}



// FUNCTION 1409fada0 FUN_1409fada0 body=27 status=ok
// SIG undefined FUN_1409fada0(void)

void FUN_1409fada0(undefined8 param_1)

{
  FUN_14303e730();
  FUN_140a21c80(param_1);
  return;
}



// FUNCTION 1409fadc0 FUN_1409fadc0 body=111 status=ok
// SIG undefined FUN_1409fadc0(void)

void FUN_1409fadc0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142c94500();
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar2 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1409fae16;
  }
  lVar3 = 0;
LAB_1409fae16:
  *(longlong *)(param_1 + 0x19e8) = lVar3;
  FUN_140a01550(param_1);
  return;
}



// FUNCTION 1409fae30 FUN_1409fae30 body=872 status=ok
// SIG undefined FUN_1409fae30(void)

void FUN_1409fae30(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_48;
  undefined8 uStack_40;
  
  FUN_142330a70();
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar2 + 0x668))(plVar2);
    if (lVar6 != 0) {
      plVar10 = (longlong *)(lVar6 + 0x4d8);
      local_48 = FUN_140a0dad0;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_48._4_4_;
        *(undefined4 *)(plVar7 + 3) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_40._4_4_;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar8;
        *plVar7 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_res8);
        iVar1 = *(int *)(lVar6 + 0x4e0);
        *(int *)(lVar6 + 0x4e0) = iVar1 + 1;
        if (*(int *)(lVar6 + 0x4e4) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
        }
        lVar8 = *plVar10;
        *(longlong **)(lVar8 + (longlong)iVar1 * 0x10) = plVar7;
        *(undefined4 *)(lVar8 + 8 + (longlong)iVar1 * 0x10) = 3;
      }
      uStack_40 = uStack_40 & 0xffffffff00000000;
      local_48 = FUN_140a0db40;
      plVar10 = (longlong *)(lVar6 + 0x4f0);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_48._4_4_;
        *(undefined4 *)(plVar7 + 3) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_40._4_4_;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar8;
        *plVar7 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_res8);
        iVar1 = *(int *)(lVar6 + 0x4f8);
        *(int *)(lVar6 + 0x4f8) = iVar1 + 1;
        if (*(int *)(lVar6 + 0x4fc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
        }
        lVar8 = *plVar10;
        *(longlong **)(lVar8 + (longlong)iVar1 * 0x10) = plVar7;
        *(undefined4 *)(lVar8 + 8 + (longlong)iVar1 * 0x10) = 3;
      }
      lVar8 = ARemnantWeaponMod::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar6 = (**(code **)(*(longlong *)(lVar6 + 0x508) + 0x10))();
        *(longlong *)(param_1 + 0x628) = lVar6;
        if (lVar6 != 0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop
                             (L"&UOakNpcGreetingComponent::OnPerceptionUpdated",L"::");
          pwVar5 = (wchar_t *)0x0;
          while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
            pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
            pwVar5 = pwVar4;
          }
          FName::FName(&local_res10,pwVar5 + 2,1);
          lVar6 = *(longlong *)(param_1 + 0x628);
          plVar10 = (longlong *)(lVar6 + 0x238);
          FWeakObjectPtr::operator=(&local_48,0);
          uStack_40 = 0;
          FWeakObjectPtr::operator=(&local_48,param_1);
          uStack_40 = local_res10;
          local_res8 = 0;
          if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_48), lVar8 != 0)) {
            UObject::FindFunction(lVar8,uStack_40);
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
          iVar1 = *(int *)(lVar6 + 0x240);
          lVar8 = (longlong)iVar1;
          *(int *)(lVar6 + 0x240) = iVar1 + 1;
          if (*(int *)(lVar6 + 0x244) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
          }
          lVar6 = *plVar10;
          *(undefined4 *)(lVar6 + lVar8 * 0x10) = (undefined4)local_48;
          *(undefined4 *)(lVar6 + 4 + lVar8 * 0x10) = local_48._4_4_;
          *(ulonglong *)(lVar6 + 8 + lVar8 * 0x10) = uStack_40;
        }
      }
    }
    lVar6 = (**(code **)(*plVar2 + 0x678))(plVar2);
    if (lVar6 != 0) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_140a20a00(param_1,lVar6);
      }
    }
  }
  return;
}



// FUNCTION 1409fb1a0 FUN_1409fb1a0 body=310 status=ok
// SIG undefined FUN_1409fb1a0(void)

void FUN_1409fb1a0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  undefined1 local_38 [32];
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar2 = FUN_1428cf800(uVar4);
    if ((((iVar2 == 3) && (param_2 != 0)) && (param_3 != 0)) &&
       ((cVar1 = FUN_14059ee90(param_1 + 0x94), cVar1 == '\0' &&
        (lVar3 = FUN_14059b7e0(param_2,1), lVar3 != 0)))) {
      lVar3 = FUN_1405a3150(lVar3,local_38,param_3,0);
      FUN_1405913a0(param_1 + 0x94,lVar3);
      *(undefined4 *)(param_1 + 0x96) = *(undefined4 *)(lVar3 + 0x10);
      FUN_140591060(local_38);
      if (param_4 != 0) {
        FUN_1405aa0a0(param_4);
      }
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar5 = (longlong *)FUN_140c44ae0(uVar4);
      if (plVar5 != (longlong *)0x0) {
        FName::FName(&local_res8,L"Music_Silence",1);
        lVar3 = UObject::FindFunction(plVar5,local_res8);
        if (lVar3 != 0) {
          (**(code **)(*plVar5 + 0x208))(plVar5,lVar3,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409fb2e0 FUN_1409fb2e0 body=460 status=ok
// SIG undefined FUN_1409fb2e0(void)

void FUN_1409fb2e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  longlong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  longlong *local_18;
  
  FUN_140a15cb0();
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    *(undefined1 *)(param_1 + 0x26) = 1;
    plVar5 = (longlong *)
             FUN_142c7c8a0(*(longlong *)(param_1 + 0x100),local_28,*(undefined8 *)(param_1 + 0xa0));
    if (&local_48 != plVar5) {
      local_48 = *plVar5;
      *plVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_40,plVar5 + 1);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    lVar4 = local_48;
    if (local_48 == 0) {
      *(undefined1 *)(param_1 + 0x26) = 0;
    }
    else {
      uStack_30 = 0;
      uVar3 = *(undefined8 *)(param_1 + 0xe0);
      local_38 = FUN_140a03a20;
      plVar5 = (longlong *)(local_48 + 0x58);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      local_18 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcff50;
        FWeakObjectPtr::operator=(plVar6 + 1,uVar3);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_38._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_30;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_2c;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_143fcff98;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
        iVar2 = *(int *)(lVar4 + 0x60);
        *(int *)(lVar4 + 0x60) = iVar2 + 1;
        if (*(int *)(lVar4 + 100) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar5);
        *puVar8 = plVar6;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
    }
    plVar5 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_40 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409fb4b0 FUN_1409fb4b0 body=295 status=ok
// SIG undefined FUN_1409fb4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409fb4b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_18;
  float local_10;
  
  if (*(longlong *)(param_1 + 0xb30) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0xb30) + 0x308))
              (*(longlong **)(param_1 + 0xb30),&local_28);
    lVar2 = *(longlong *)(param_1 + 0xb30);
    if (local_28 * local_28 + local_24 * local_24 + local_20 * local_20 < _DAT_146294ed0) {
      FUN_141240250(lVar2,0);
      return;
    }
    if (*(longlong *)(lVar2 + 0x168) == 0) {
      local_10 = (float)DAT_1464aa7b0;
      puVar1 = &local_18;
      local_18 = DAT_1464aa7a8;
    }
    else {
      puVar1 = (undefined8 *)FUN_142369f10(*(longlong *)(lVar2 + 0x168),&local_18);
      lVar2 = *(longlong *)(param_1 + 0xb30);
    }
    local_10 = *(float *)(puVar1 + 1);
    if (0.0 < (float)*puVar1 * local_28 + (float)((ulonglong)*puVar1 >> 0x20) * local_24 +
              local_10 * local_20) {
      FUN_141240250(lVar2,0xbf800000);
      return;
    }
    FUN_141240250(lVar2,0x3f800000);
  }
  return;
}



// FUNCTION 1409fb5e0 FUN_1409fb5e0 body=229 status=ok
// SIG undefined FUN_1409fb5e0(void)

void FUN_1409fb5e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (((*(char *)(param_1 + 0x490) != '\0') && (*(longlong *)(param_1 + 0x468) != 0)) &&
     (*(char *)(param_1 + 0x578) == '\0')) {
    if (*(int *)(param_1 + 0x4a8) != *(int *)(param_1 + 0x4d4)) {
      lVar2 = *(longlong *)(param_1 + 0x4e0);
      if (*(longlong *)(param_1 + 0x4e0) == 0) {
        lVar2 = param_1 + 0x4d8;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x4e8) - 1U &
                               (ulonglong)*(byte *)(param_1 + 0x579)) * 4);
      if (iVar1 != -1) {
        do {
          puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar1 * 0x18);
          if (*(byte *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar1 * 0x18) ==
              *(byte *)(param_1 + 0x579)) {
            if (iVar1 != -1) goto LAB_1409fb683;
            break;
          }
          iVar1 = *(int *)(puVar3 + 2);
        } while (iVar1 != -1);
      }
    }
    puVar3 = (undefined8 *)0x0;
LAB_1409fb683:
    puVar4 = puVar3 + 1;
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1407da8a0(*(longlong *)(param_1 + 0x468),*puVar4);
      (**(code **)(**(longlong **)(param_1 + 0x468) + 0x900))();
      FUN_1407c56e0(*(undefined8 *)(param_1 + 0x468));
      return;
    }
  }
  return;
}



// FUNCTION 1409fb6d0 FUN_1409fb6d0 body=65 status=ok
// SIG undefined FUN_1409fb6d0(void)

undefined8 FUN_1409fb6d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142f8ffe0();
  if ((cVar1 != '\0') &&
     ((*(longlong *)(param_1 + 0xb30) == 0 ||
      ((*(longlong *)(param_1 + 0xb48) != 0 &&
       (*(char *)(*(longlong *)(param_1 + 0xb48) + 0x758) != '\0')))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1409fb720 FUN_1409fb720 body=40 status=ok
// SIG undefined FUN_1409fb720(void)

undefined4 FUN_1409fb720(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140775b70();
  FUN_14246fd70(param_1 + 0x8c8,uVar1);
  return *(undefined4 *)(param_1 + 0x8cc);
}



// FUNCTION 1409fb750 FUN_1409fb750 body=43 status=ok
// SIG undefined FUN_1409fb750(void)

undefined4 FUN_1409fb750(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140775cd0();
  FUN_14246fd50(param_1 + 0x8d4,uVar1);
  return *(undefined4 *)(param_1 + 0x8d8);
}



// FUNCTION 1409fb780 FUN_1409fb780 body=382 status=ok
// SIG undefined FUN_1409fb780(void)

float * FUN_1409fb780(longlong param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  lVar4 = *(longlong *)(param_3 + 0x10);
  if (lVar4 != 0) {
    fVar1 = *(float *)(lVar4 + 0x224);
    fVar2 = *(float *)(lVar4 + 0x228);
    fVar3 = *(float *)(param_1 + 0x224);
    fVar5 = *(float *)(param_1 + 0x228);
    *param_2 = *(float *)(lVar4 + 0x220) - *(float *)(param_1 + 0x220);
    param_2[1] = fVar1 - fVar3;
    param_2[2] = fVar2 - fVar5;
    return param_2;
  }
  fVar1 = *(float *)(param_1 + 0x710);
  fVar2 = *(float *)(param_1 + 0x714);
  fVar3 = *(float *)(param_1 + 0x718);
  fVar5 = *(float *)(param_1 + 0x230);
  fVar6 = *(float *)(param_1 + 0x234);
  fVar7 = *(float *)(param_1 + 0x238);
  iVar8 = rand();
  iVar9 = rand();
  iVar10 = rand();
  *(ulonglong *)param_2 =
       CONCAT44(((float)iVar9 * 6.103702e-05 - 1.0) * fVar6 * fVar2,
                (((float)iVar10 * 3.051851e-05 + (float)iVar10 * 3.051851e-05) - 1.0) *
                fVar5 * fVar1);
  param_2[2] = ((float)iVar8 * 6.103702e-05 - 1.0) * fVar7 * fVar3;
  return param_2;
}



// FUNCTION 1409fb900 FUN_1409fb900 body=28 status=ok
// SIG undefined FUN_1409fb900(void)

float FUN_1409fb900(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_140775d90();
  return fVar1 * *(float *)(param_1 + 0x8c4);
}



// FUNCTION 1409fba20 FUN_1409fba20 body=163 status=ok
// SIG undefined FUN_1409fba20(void)

undefined8 FUN_1409fba20(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong in_stack_00000028;
  
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x344,L"Pure virtual not implemented (%s)",L"ANavigationData::CalcPathCost");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x344,L"Pure virtual not implemented (%s)",L"ANavigationData::CalcPathCost");
  plVar4 = *(longlong **)(in_stack_00000028 + 8);
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
    return 0;
  }
  return 0;
}



// FUNCTION 1409fbad0 FUN_1409fbad0 body=151 status=ok
// SIG undefined FUN_1409fbad0(void)

ulonglong FUN_1409fbad0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_5;
  local_10 = param_5[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  puVar7 = &local_18;
  uVar6 = (**(code **)(*param_1 + 0x7f0))();
  plVar4 = (longlong *)param_5[1];
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
      uVar6 = uVar6 & 0xffffffff;
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1,param_3,param_4,puVar7,param_6);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1409fbb70 FUN_1409fbb70 body=163 status=ok
// SIG undefined FUN_1409fbb70(void)

undefined8 FUN_1409fbb70(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong in_stack_00000028;
  
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x351,L"Pure virtual not implemented (%s)",L"ANavigationData::CalcPathLength");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x351,L"Pure virtual not implemented (%s)",L"ANavigationData::CalcPathLength");
  plVar4 = *(longlong **)(in_stack_00000028 + 8);
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
    return 0;
  }
  return 0;
}



// FUNCTION 1409fbc20 FUN_1409fbc20 body=151 status=ok
// SIG undefined FUN_1409fbc20(void)

ulonglong FUN_1409fbc20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_5;
  local_10 = param_5[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  puVar7 = &local_18;
  uVar6 = (**(code **)(*param_1 + 0x800))();
  plVar4 = (longlong *)param_5[1];
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
      uVar6 = uVar6 & 0xffffffff;
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1,param_3,param_4,puVar7,param_6);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1409fbcc0 FUN_1409fbcc0 body=163 status=ok
// SIG undefined FUN_1409fbcc0(void)

undefined8 FUN_1409fbcc0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong in_stack_00000030;
  
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x35e,L"Pure virtual not implemented (%s)",L"ANavigationData::CalcPathLength");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h",
             0x35e,L"Pure virtual not implemented (%s)",L"ANavigationData::CalcPathLength");
  plVar4 = *(longlong **)(in_stack_00000030 + 8);
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
    return 0;
  }
  return 0;
}



// FUNCTION 1409fbd70 FUN_1409fbd70 body=170 status=ok
// SIG undefined FUN_1409fbd70(void)

ulonglong FUN_1409fbd70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_6;
  local_10 = param_6[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  puVar7 = &local_18;
  uVar6 = (**(code **)(*param_1 + 0x810))();
  plVar4 = (longlong *)param_6[1];
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
      uVar6 = uVar6 & 0xffffffff;
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1,param_3,param_4,param_5,puVar7,param_7);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1409fbe20 FUN_1409fbe20 body=1069 status=ok
// SIG undefined FUN_1409fbe20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409fbe20(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  
  if (*(longlong *)(param_1 + 0xb30) == 0) {
    FUN_140a09700();
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xb30) + 0x168);
    if (lVar7 == 0) {
      local_40 = DAT_1468b5d98;
      puVar8 = &local_48;
      local_48 = _DAT_1468b5d90;
    }
    else {
      puVar8 = &local_58;
      local_50 = (float)*(undefined4 *)(lVar7 + 0x228);
      local_58 = *(undefined8 *)(lVar7 + 0x220);
    }
    local_78 = *puVar8;
    local_70 = *(float *)(puVar8 + 1);
    cVar4 = FWeakObjectPtr::IsValid(param_2);
    if (cVar4 != '\0') {
      uVar6 = FWeakObjectPtr::Get(param_2);
      cVar4 = FUN_140b83940(uVar6);
      lVar7 = FWeakObjectPtr::Get(param_2);
      if (cVar4 != '\0') {
        lVar7 = FUN_140b7fb20(&local_78,lVar7);
      }
      if (lVar7 != 0) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xb30) + 0x168);
        if (lVar9 == 0) {
          local_40 = (float)DAT_1464aa7b0;
          puVar8 = &local_48;
          local_48 = DAT_1464aa7a8;
        }
        else {
          puVar8 = (undefined8 *)FUN_142369f10(lVar9,&local_48);
        }
        uVar6 = *puVar8;
        local_50 = *(float *)(puVar8 + 1);
        lVar9 = *(longlong *)(lVar7 + 0x168);
        if (lVar9 == 0) {
          local_48 = _DAT_1468b5d90;
          local_40 = DAT_1468b5d98;
        }
        else {
          local_48 = *(undefined8 *)(lVar9 + 0x220);
          local_40 = *(float *)(lVar9 + 0x228);
        }
        local_68 = local_48;
        uVar3 = local_68;
        local_60 = local_40;
        if (*(char *)(param_2 + 0x18) != '\0') {
          local_68._0_4_ = (float)local_48;
          local_68._4_4_ = (float)((ulonglong)local_48 >> 0x20);
          local_58._0_4_ = (float)uVar6;
          local_58._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
          if (0.0 < ((float)local_68 - (float)local_78) * (float)local_58 +
                    (local_68._4_4_ - local_78._4_4_) * local_58._4_4_ +
                    (local_40 - local_70) * local_50) {
            return;
          }
        }
        plVar2 = *(longlong **)(param_1 + 0xb30);
        local_68 = uVar3;
        local_58 = uVar6;
        if (*(char *)(param_2 + 0x2c) == '\0') {
          FUN_142230c20(plVar2,lVar7);
        }
        else {
          lVar9 = (**(code **)(*plVar2 + 0x148))();
          fVar1 = *(float *)(lVar9 + 0x790);
          if (*(float *)(param_2 + 0x38) <= fVar1) {
            lVar9 = plVar2[0x2d];
            if (lVar9 == 0) {
              local_48 = _DAT_1468b5d90;
              local_40 = DAT_1468b5d98;
            }
            else {
              local_48 = *(undefined8 *)(lVar9 + 0x220);
              local_40 = *(float *)(lVar9 + 0x228);
            }
            lVar9 = *(longlong *)(param_2 + 0x30);
            local_68 = local_48;
            local_60 = local_40;
            if (lVar9 == 0) {
              plVar2 = *(longlong **)(param_2 + 0x20);
              if (plVar2 == (longlong *)0x0) {
                return;
              }
              uVar6 = UGNewsMenuItem::GetPrivateStaticClass();
              lVar9 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar6);
              if (lVar9 == 0) {
                return;
              }
            }
            lVar7 = *(longlong *)(lVar7 + 0x168);
            if (lVar7 == 0) {
              local_48 = _DAT_1468b5d90;
              local_40 = DAT_1468b5d98;
            }
            else {
              local_48 = *(undefined8 *)(lVar7 + 0x220);
              local_40 = *(float *)(lVar7 + 0x228);
            }
            local_58 = local_48;
            local_50 = local_40;
            uVar10 = FUN_1423ac1f0(lVar9,&local_58);
            fVar11 = (float)FUN_1423ae500(lVar9,uVar10);
            uVar10 = FUN_1423ac1f0(lVar9,&local_68);
            fVar12 = (float)FUN_1423ae500(lVar9,uVar10);
            *(float *)(param_2 + 0x3c) = (fVar12 - fVar11) - *(float *)(param_2 + 0x28);
            iVar5 = rand();
            *(float *)(param_2 + 0x38) = (float)iVar5 * 3.0518513e-06 + 0.2 + fVar1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1409fc270 FUN_1409fc270 body=1470 status=ok
// SIG undefined FUN_1409fc270(void)

float FUN_1409fc270(longlong param_1,char param_2,float *param_3,char param_4,float param_5)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  
  lVar4 = *(longlong *)(param_1 + 0xaf0);
  if (lVar4 == 0) {
    fVar15 = 0.4;
    fVar6 = 0.87;
  }
  else {
    fVar15 = *(float *)(lVar4 + 0x50);
    fVar6 = *(float *)(lVar4 + 0x4c);
  }
  fVar12 = param_3[1];
  fVar9 = *param_3;
  fVar16 = 1.0;
  fVar7 = fVar9 * fVar9 + fVar12 * fVar12;
  if (fVar7 == 1.0) {
    if (param_3[2] == 0.0) {
      local_d0 = *(undefined8 *)param_3;
      local_res8 = param_3[2];
      fVar12 = (float)((ulonglong)local_d0 >> 0x20);
      fVar9 = (float)local_d0;
      local_c8 = local_res8;
    }
    else {
LAB_1409fc419:
      local_res8 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar7) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar11._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar9 = fVar9 * fVar8;
      fVar12 = fVar12 * fVar8;
      goto LAB_1409fc419;
    }
    local_res8 = DAT_1468b5d98;
    fVar12 = DAT_1468b5d94;
    fVar9 = DAT_1468b5d90;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb30) + 0x168);
  if (lVar4 == 0) {
    local_b8 = DAT_1464aa7b0;
    puVar3 = &local_c0;
    local_c0 = DAT_1464aa7a8;
  }
  else {
    puVar3 = (undefined8 *)FUN_142369f10(lVar4,&local_d0);
  }
  uVar1 = *puVar3;
  local_c8 = *(float *)(puVar3 + 1);
  fVar7 = (float)((ulonglong)uVar1 >> 0x20);
  local_d0._0_4_ = (float)uVar1;
  fVar8 = fVar7 * fVar7 + (float)local_d0 * (float)local_d0;
  if (fVar8 == 1.0) {
    fVar10 = fVar7;
    fVar13 = (float)local_d0;
    fVar14 = local_c8;
    if (local_c8 != 0.0) {
LAB_1409fc556:
      fVar10 = fVar7;
      fVar13 = (float)local_d0;
      fVar14 = 0.0;
    }
  }
  else {
    fVar10 = DAT_1468b5d94;
    fVar13 = DAT_1468b5d90;
    fVar14 = DAT_1468b5d98;
    if (1e-08 <= fVar8) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar10 = auVar11._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar8 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar8 * 0.5 * fVar10 * fVar10);
      local_d0._0_4_ = (float)local_d0 * fVar10;
      fVar7 = fVar7 * fVar10;
      goto LAB_1409fc556;
    }
  }
  bVar2 = false;
  if (0 < *(int *)(param_1 + 0xc58)) {
    if ((*(char *)(*(longlong *)(param_1 + 0xc50) + 6) == '\0') &&
       (*(char *)(*(longlong *)(param_1 + 0xc50) + 7) == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if (((*(char *)(param_1 + 0xb60) != '\0') || (bVar2)) ||
     ((param_4 != '\0' &&
      ((((lVar4 = *(longlong *)(param_1 + 0xaf0), lVar4 != 0 && (*(char *)(lVar4 + 0x118) != '\0'))
        && (*(float *)(lVar4 + 0x128) + *(float *)(param_1 + 0xcac) <= param_5)) &&
       ((*(char *)(param_1 + 0xca8) != '\0' && (*(char *)(param_1 + 0xca9) != '\0')))))))) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
    if (param_2 == '\0') {
      fVar9 = fVar10 * fVar12 + fVar13 * fVar9 + fVar14 * local_res8;
      fVar12 = fVar15;
      if ((fVar15 <= fVar9) && (fVar12 = fVar9, fVar6 <= fVar9)) {
        fVar12 = fVar6;
      }
      if (*(longlong *)(param_1 + 0xaf0) == 0) {
        fVar9 = 0.5;
      }
      else {
        fVar9 = *(float *)(*(longlong *)(param_1 + 0xaf0) + 0x48);
      }
      fVar16 = fVar9 * ((fVar12 - fVar15) / (fVar6 - fVar15)) + (1.0 - fVar9);
    }
  }
  local_d0 = uVar1;
  (**(code **)(**(longlong **)(param_1 + 0xb30) + 0x308))(*(longlong **)(param_1 + 0xb30),&local_c0)
  ;
  local_b8 = 0;
  fVar15 = SQRT((float)local_c0 * (float)local_c0 + local_c0._4_4_ * local_c0._4_4_);
  if ((bool)(bVar5 ^ 1) != 0.0 < fVar13 * (float)local_c0 + fVar10 * local_c0._4_4_) {
    fVar15 = -fVar15;
  }
  fVar6 = (float)FUN_140a09700(param_1);
  if (bVar5 == 0) {
    fVar6 = fVar6 * fVar16;
  }
  lVar4 = *(longlong *)(param_1 + 0x120);
  fVar6 = fVar6 - fVar15;
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  fVar15 = *(float *)(lVar4 + 0x7b0);
  lVar4 = *(longlong *)(param_1 + 0xaf0);
  fVar12 = 3000.0;
  if (lVar4 == 0) {
    fVar9 = 3000.0;
  }
  else {
    fVar9 = *(float *)(lVar4 + 100);
  }
  fVar7 = *(float *)(param_1 + 0xc48);
  if (fVar7 <= fVar9) {
    if (lVar4 != 0) {
      fVar12 = *(float *)(lVar4 + 100);
    }
    if (-fVar12 <= fVar7) goto LAB_1409fc779;
  }
  fVar7 = 0.0;
LAB_1409fc779:
  fVar12 = *(float *)(param_1 + 0xc44);
  *(float *)(param_1 + 0xc44) = fVar6;
  fVar7 = (fVar12 + fVar6) * fVar15 * 0.5 + fVar7;
  *(float *)(param_1 + 0xc48) = fVar7;
  if (lVar4 == 0) {
    fVar9 = 0.004;
    fVar16 = 0.001;
    fVar8 = 0.002;
  }
  else {
    fVar9 = *(float *)(lVar4 + 0x58);
    fVar16 = *(float *)(lVar4 + 0x5c);
    fVar8 = *(float *)(lVar4 + 0x60);
  }
  fVar15 = fVar7 * fVar16 + fVar9 * fVar6 + fVar8 * ((fVar6 - fVar12) / fVar15);
  if (bVar5 != 0) {
    fVar15 = -fVar15;
  }
  return fVar15;
}



// FUNCTION 1409fc830 FUN_1409fc830 body=47 status=ok
// SIG undefined FUN_1409fc830(void)

void FUN_1409fc830(undefined8 *param_1,undefined8 param_2)

{
  FUN_143014080(*param_1,param_2,*(undefined4 *)(param_1 + 1),param_1[2],0,1,
                *(undefined1 *)(param_1 + 3));
  return;
}



// FUNCTION 1409fc860 FUN_1409fc860 body=44 status=ok
// SIG undefined FUN_1409fc860(void)

void FUN_1409fc860(undefined8 *param_1,undefined8 param_2)

{
  FUN_143014080(*param_1,param_2,*(undefined4 *)(param_1 + 1),param_1[2],0,1,0);
  return;
}



// FUNCTION 1409fc890 FUN_1409fc890 body=71 status=ok
// SIG undefined FUN_1409fc890(void)

ulonglong FUN_1409fc890(longlong param_1)

{
  longlong *plVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = UScrollBox::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    in_RAX = 0;
    if (lVar3 != 0) {
      return (ulonglong)
             CONCAT31((uint3)(*(uint *)(lVar3 + 0x840) >> 0xb),
                      ~(byte)(*(uint *)(lVar3 + 0x840) >> 3)) & 0xffffffffffffff01;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409fc8e0 FUN_1409fc8e0 body=540 status=ok
// SIG undefined FUN_1409fc8e0(void)

ulonglong FUN_1409fc8e0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  uint7 uVar7;
  undefined8 *puVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float local_68;
  float fStack_64;
  undefined8 local_5c;
  undefined4 local_54;
  
  uVar5 = in_RAX & 0xffffffffffffff00;
  if (0 < *(int *)(param_1 + 0xc58)) {
    lVar4 = *(longlong *)(param_1 + 0xc50);
    uVar7 = (uint7)((ulonglong)lVar4 >> 8);
    if ((*(char *)(lVar4 + 6) == '\0') && (*(char *)(lVar4 + 7) == '\0')) {
      uVar5 = (ulonglong)uVar7 << 8;
    }
    else {
      uVar5 = CONCAT71(uVar7,1);
    }
  }
  if ((*(char *)(param_1 + 0xb60) == '\0') && ((char)uVar5 == '\0')) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb30) + 0x168);
    if (lVar4 == 0) {
      local_54 = DAT_1464aa7b0;
      puVar6 = &local_5c;
      local_5c = DAT_1464aa7a8;
    }
    else {
      puVar6 = (undefined8 *)FUN_142369f10(lVar4,&local_5c);
    }
    fVar1 = param_2[1];
    fVar2 = *param_2;
    fVar3 = param_2[2];
    fVar12 = 1.0;
    fVar9 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    if (fVar9 == 1.0) {
      local_5c._0_4_ = (float)*(undefined8 *)param_2;
      fVar8 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
      fVar10 = param_2[2];
    }
    else {
      fVar8 = DAT_1468b5d94;
      fVar10 = DAT_1468b5d98;
      local_5c._0_4_ = DAT_1468b5d90;
      if (1e-08 <= fVar9) {
        auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar10 = auVar11._0_4_;
        fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
        fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
        local_5c._0_4_ = fVar2 * fVar10;
        fVar8 = fVar1 * fVar10;
        fVar10 = fVar3 * fVar10;
      }
    }
    fStack_64 = (float)((ulonglong)*puVar6 >> 0x20);
    local_68 = (float)*puVar6;
    uVar5 = *(ulonglong *)(param_1 + 0xaf0);
    if (uVar5 != 0) {
      fVar12 = *(float *)(uVar5 + 0x114);
    }
    if (fVar12 <= fStack_64 * fVar8 + local_68 * (float)local_5c + *(float *)(puVar6 + 1) * fVar10)
    {
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1409fcb00 FUN_1409fcb00 body=92 status=ok
// SIG undefined FUN_1409fcb00(void)

undefined1 FUN_1409fcb00(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0x2f0) == '\0') || (*(char *)(param_1 + 0x328) != '\0')) {
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_141477fa0();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if ((lVar4 != 0) && (cVar3 = FUN_140eb27a0(lVar4,1), cVar3 != '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1409fcb60 FUN_1409fcb60 body=156 status=ok
// SIG undefined FUN_1409fcb60(void)

undefined8 FUN_1409fcb60(longlong param_1,char param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((plVar1[0x1cf] != 0) && (*(char *)(plVar1[0x1cf] + 0x950) != '\0')) {
        return 0;
      }
      if (((param_2 == '\0') || ((*(byte *)(plVar1 + 0x10) & 1) != 0)) &&
         (cVar3 = (**(code **)(*plVar1 + 0x950))(plVar1), cVar3 != '\0')) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1409fcc00 FUN_1409fcc00 body=70 status=ok
// SIG undefined FUN_1409fcc00(void)

undefined8 FUN_1409fcc00(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 0xb30) != 0) && (*(longlong *)(param_1 + 0xb48) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0xb48) + 0x758) != '\0')) {
    cVar1 = FUN_142fa5440();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FUN_142f95820(param_1);
  return uVar2;
}



// FUNCTION 1409fcc50 FUN_1409fcc50 body=151 status=ok
// SIG undefined FUN_1409fcc50(void)

void FUN_1409fcc50(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  uVar2 = (**(code **)(*param_1 + 0x148))();
  lVar3 = FUN_14126dac0(uVar2);
  if ((lVar3 != 0) && (param_1[0xd9] != 0)) {
    FUN_141269380(lVar3);
  }
  FName::FName(local_res8,L"IsDead",1);
  lVar3 = param_1[0xad];
  if (lVar3 != 0) {
    uVar1 = FUN_142bbd6b0(lVar3,local_res8);
    FUN_1409f2510(lVar3,uVar1,1);
  }
  FUN_140753f70(param_1,param_2);
  return;
}



// FUNCTION 1409fccf0 FUN_1409fccf0 body=823 status=ok
// SIG undefined FUN_1409fccf0(void)

void FUN_1409fccf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong **pplVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong **pplVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  int local_res18;
  longlong *local_68;
  int local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  plVar12 = *(longlong **)(param_1 + 0x428);
  plVar3 = plVar12 + (longlong)*(int *)(param_1 + 0x430) * 5;
  if (plVar12 != plVar3) {
    while (param_2 != *plVar12) {
      plVar12 = plVar12 + 5;
      if (plVar12 == plVar3) {
        return;
      }
    }
    pplVar4 = (longlong **)plVar12[3];
    uVar11 = (ulonglong)(int)plVar12[4];
    pplVar8 = pplVar4 + uVar11 * 2;
    if (pplVar4 != pplVar8) {
      do {
        local_68 = (longlong *)0x0;
        local_60 = 0;
        if (((pplVar4 != &local_68) && (*(int *)(pplVar4 + 1) != 0)) &&
           (plVar3 = *pplVar4, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_68);
        }
        local_48 = 0;
        uStack_40 = 0;
        FUN_142838d00(&local_68,&local_48);
        if (local_60 == 0) {
LAB_1409fce06:
          if (local_68 != (longlong *)0x0) {
            FMemory::Free(local_68);
          }
        }
        else if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x28))(local_68,0);
          if (local_68 != (longlong *)0x0) {
            local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
          }
          local_60 = 0;
          goto LAB_1409fce06;
        }
        pplVar4 = pplVar4 + 2;
      } while (pplVar4 != pplVar8);
      uVar11 = (ulonglong)*(uint *)(plVar12 + 4);
    }
    lVar5 = plVar12[3];
    uVar10 = (uint)uVar11;
    while (uVar10 != 0) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar5);
      lVar5 = lVar5 + 0x10;
      uVar10 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar10;
    }
    *(undefined4 *)(plVar12 + 4) = 0;
    if (*(int *)((longlong)plVar12 + 0x24) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar12 + 3,0);
    }
    FUN_140a061a0(param_1,&local_58,param_2);
    lVar5 = (longlong)*(int *)(param_1 + 0x4b8);
    if (*(int *)(param_1 + 0x4b8) != 0) {
      local_res18 = 0;
      bVar15 = **(longlong **)(param_1 + 0x4b0) != local_58;
      lVar9 = 0;
      lVar6 = local_58;
      iVar13 = 0;
      do {
        lVar9 = lVar9 + 1;
        iVar14 = iVar13 + 1;
        if (lVar9 < lVar5) {
          plVar3 = (longlong *)(lVar9 * 0x10 + *(longlong *)(param_1 + 0x4b0));
          do {
            if (bVar15 != (*plVar3 != lVar6)) break;
            iVar14 = iVar14 + 1;
            lVar9 = lVar9 + 1;
            plVar3 = plVar3 + 2;
          } while (lVar9 < lVar5);
        }
        iVar7 = iVar14 - iVar13;
        if (bVar15 == false) {
          if (iVar7 != 0) {
            plVar3 = (longlong *)((longlong)iVar13 * 0x10 + 8 + *(longlong *)(param_1 + 0x4b0));
            do {
              plVar12 = (longlong *)*plVar3;
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar12 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar12 + 0xc);
                  iVar13 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar13 == 1) {
                    (**(code **)(*plVar12 + 8))(plVar12,1);
                  }
                }
              }
              plVar3 = plVar3 + 2;
              iVar7 = iVar7 + -1;
              lVar6 = local_58;
            } while (iVar7 != 0);
          }
        }
        else {
          if (local_res18 != iVar13) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)local_res18 * 0x10 + *(longlong *)(param_1 + 0x4b0)),
                       (void *)((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x4b0)),
                       (longlong)iVar7 << 4);
          }
          local_res18 = local_res18 + iVar7;
        }
        bVar15 = (bool)(bVar15 ^ 1);
        iVar13 = iVar14;
      } while (lVar9 < lVar5);
      *(int *)(param_1 + 0x4b8) = local_res18;
    }
    FUN_142d86f20(*(undefined8 *)(param_2 + 0x18));
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_50 + 1;
      lVar5 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar13 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409fd030 FUN_1409fd030 body=171 status=ok
// SIG undefined FUN_1409fd030(void)

void FUN_1409fd030(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_28 [32];
  
  if ((*(longlong *)(param_1 + 0x1f0) != 0) && (lVar2 = FUN_140a09850(), lVar2 != 0)) {
    lVar2 = param_1 + 0x270;
    cVar1 = FUN_14059ee90(lVar2);
    if (cVar1 != '\0') {
      FUN_1405ac8f0(lVar2,0,4);
    }
    lVar3 = *(longlong *)(param_1 + 800);
    if (lVar3 == 0) {
      lVar3 = FUN_140a19170(param_1);
      *(longlong *)(param_1 + 800) = lVar3;
      if (lVar3 == 0) {
        return;
      }
    }
    lVar3 = FUN_1405a3150(lVar3,local_28,*(undefined8 *)(param_1 + 0x1f0),0);
    FUN_1405913a0(lVar2,lVar3);
    *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(lVar3 + 0x10);
    FUN_140591060(local_28);
  }
  return;
}



// FUNCTION 1409fd0e0 FUN_1409fd0e0 body=152 status=ok
// SIG undefined FUN_1409fd0e0(void)

void FUN_1409fd0e0(longlong param_1)

{
  char cVar1;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  cVar1 = FUN_14059ee90();
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x1f8) == 0) {
      FUN_1405ac8f0(param_1 + 0x270,0,4);
    }
    else {
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_1405a2d20(*(undefined8 *)(param_1 + 0x270),local_28,*(longlong *)(param_1 + 0x1f8),0,0,
                    local_38);
      FUN_140591060(local_28);
      if (local_38[0] != 0) {
        FMemory::Free();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409fd180 FUN_1409fd180 body=1429 status=ok
// SIG undefined FUN_1409fd180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1409fd180(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint7 uVar14;
  ulonglong uVar13;
  float fVar15;
  float fVar16;
  char local_res8 [8];
  ulonglong local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined2 local_70;
  float local_68;
  float local_64;
  float local_60;
  
  local_res10 = 0xffffffffffffffff;
  fVar15 = (float)FUN_142de77e0(param_1 + 0x240,*param_2,0,&local_res10);
  local_78 = 0xffffffffffffffff;
  fVar16 = (float)FUN_142de77e0(param_1 + 0x2c0,*param_2,0,&local_78);
  if (fVar16 < fVar15) {
    uVar13 = param_2[1];
    *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + uVar13) = 2;
    return uVar13 & 0xffffffffffffff00;
  }
  lVar9 = *param_2;
  if (lVar9 == 0) {
LAB_1409fd6b0:
    uVar13 = param_2[1];
    *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + uVar13) = 2;
    return uVar13 & 0xffffffffffffff00;
  }
  lVar6 = FUN_1413e48b0();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_1409fd6b0;
  lVar6 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  cVar5 = FUN_14044aea0(lVar6 + 0x60,0);
  if (((cVar5 != '\0') || (*(char *)(lVar9 + 0x758) == '\0')) || (*(longlong *)(lVar9 + 0x718) == 0)
     ) {
    uVar13 = *(ulonglong *)(param_1 + 0xd8);
    *(undefined1 *)(param_2[1] + 0x29 + uVar13) = 2;
    return uVar13 & 0xffffffffffffff00;
  }
  lVar1 = *(longlong *)(lVar9 + 0x568);
  if (lVar1 == 0) {
    uVar13 = *(ulonglong *)(param_1 + 0xd8);
    *(undefined1 *)(param_2[1] + 0x29 + uVar13) = 2;
    return uVar13 & 0xffffffffffffff00;
  }
  local_res18 = (longlong *)0x0;
  local_res8[0] = '\0';
  local_88 = 0;
  cVar5 = FUN_142cc3c10(param_1 + 0x430,lVar1,local_res8);
  if (((cVar5 == '\0') || (local_res8[0] == '\0')) &&
     ((cVar5 = FUN_142cc4b40(param_1 + 0x430,lVar1,&local_88), cVar5 == '\0' || (local_88 == 0)))) {
    cVar5 = FUN_142cc4b40(param_1 + 0x3e0,lVar1,&local_res18);
    plVar12 = local_res18;
  }
  else {
    local_res8[0] = '\x01';
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146865d28) &&
       (_Init_thread_header(&DAT_146865d28), DAT_146865d28 == -1)) {
      FName::FName(&DAT_146865d20,L"TargetActorInfo",1);
      _Init_thread_footer(&DAT_146865d28);
    }
    local_78 = DAT_146865d20;
    local_70 = 0xff00;
    cVar5 = FUN_142cc4b40(&local_78,lVar1,&local_res18);
    plVar12 = local_res18;
  }
  if ((cVar5 != '\0') && (plVar12 != (longlong *)0x0)) {
    local_res18 = plVar12;
    lVar7 = FUN_1428dfc70();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FWeakObjectPtr::operator=(lVar6 + 0x70,plVar12);
      local_80 = 0;
      cVar5 = FUN_142cc4b40(param_1 + 0x400,lVar1,&local_80);
      lVar7 = local_80;
      if ((cVar5 == '\0') || (local_80 == 0)) {
        local_res10 = local_res10 & 0xffffffffffffff00;
        cVar5 = FUN_142cc3c10(param_1 + 0x3f0,lVar1,&local_res10);
        if ((cVar5 != '\0') &&
           (((char)local_res10 != '\0' &&
            (lVar7 = FUN_141220520(*(undefined8 *)(lVar9 + 0x718),plVar12,1), lVar7 != 0)))) {
          FUN_142cd0a60(param_1 + 0x400,lVar1,lVar7);
          *(undefined8 *)(lVar7 + 0x2d8) = *(undefined8 *)(lVar9 + 0x718);
        }
      }
      else {
        lVar8 = FUN_1429ff160();
        lVar2 = *(longlong *)(lVar7 + 0x10);
        if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FWeakObjectPtr::operator=(lVar6 + 0x78,lVar7);
        }
      }
      *(char *)(lVar6 + 0x11c) = local_res8[0];
      FWeakObjectPtr::operator=(lVar6 + 0x68,*(undefined8 *)(lVar9 + 0x718));
      *(undefined8 *)(lVar6 + 0x90) = _DAT_1468b5d90;
      *(undefined4 *)(lVar6 + 0x98) = DAT_1468b5d98;
      cVar5 = FUN_142cc5d60(param_1 + 0x420,lVar1);
      if (cVar5 != '\0') {
        FUN_142cc54f0(param_1 + 0x420,lVar1,lVar6 + 0x90);
      }
      local_res20 = (longlong *)0x0;
      cVar5 = FUN_142cc4b40(param_1 + 0x410,lVar1,&local_res20);
      plVar4 = local_res20;
      if (cVar5 == '\0') {
LAB_1409fd5d9:
        if (local_res20 == (longlong *)0x0) goto LAB_1409fd5e0;
      }
      else {
        if (local_res20 != (longlong *)0x0) {
          lVar9 = FUN_1428dfc70();
          if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
              != lVar9 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FWeakObjectPtr::operator=(lVar6 + 0x80,plVar4);
            uVar10 = UGNewsMenuItem::GetPrivateStaticClass();
            lVar9 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar10);
            if (lVar9 != 0) {
              FWeakObjectPtr::operator=(lVar6 + 0x88,lVar9);
            }
          }
          goto LAB_1409fd5d9;
        }
LAB_1409fd5e0:
        if (local_res8[0] != '\0') {
          FWeakObjectPtr::operator=(lVar6 + 0x80,plVar12);
        }
      }
      puVar11 = (undefined8 *)(**(code **)(*plVar12 + 0x308))(plVar12,&local_78);
      *(undefined8 *)(lVar6 + 0xa8) = *puVar11;
      *(undefined4 *)(lVar6 + 0xb0) = *(undefined4 *)(puVar11 + 1);
      plVar12 = (longlong *)FWeakObjectPtr::Get(lVar6 + 0x60);
      (**(code **)(*plVar12 + 0x4a8))(plVar12,0x40000000);
      uVar10 = FUN_140a08430(param_1,&local_68,lVar6);
      uVar14 = (uint7)((ulonglong)uVar10 >> 8);
      if (((local_68 == (float)DAT_146294aa0) && (local_64 == DAT_146294aa0._4_4_)) &&
         (local_60 == DAT_146294aa8)) {
        uVar13 = CONCAT71(uVar14,1);
      }
      else {
        uVar13 = (ulonglong)uVar14 << 8;
      }
      if ((char)uVar13 == '\0') {
        cVar5 = FUN_140a17ff0(param_1,lVar6,&local_68);
        if (cVar5 != '\0') {
          FUN_140a214c0(param_1,lVar6,&local_68);
        }
        uVar13 = FUN_140708a20(param_1,param_2);
        return uVar13;
      }
      goto LAB_1409fd38d;
    }
  }
  uVar13 = *(ulonglong *)(param_1 + 0xd8);
  *(undefined1 *)(param_2[1] + 0x29 + uVar13) = 2;
LAB_1409fd38d:
  return uVar13 & 0xffffffffffffff00;
}



// FUNCTION 1409fd720 FUN_1409fd720 body=29 status=ok
// SIG undefined FUN_1409fd720(void)

bool FUN_1409fd720(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140a0a630();
  return cVar1 != *(char *)(param_1 + 0x110);
}



// FUNCTION 1409fd740 FUN_1409fd740 body=158 status=ok
// SIG undefined FUN_1409fd740(void)

void FUN_1409fd740(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_146294aa8;
  fVar2 = DAT_146294aa0._4_4_;
  fVar1 = (float)DAT_146294aa0;
  if ((((float)DAT_146294aa0 != *param_1) || (DAT_146294aa0._4_4_ != param_1[1])) ||
     (DAT_146294aa8 != param_1[2])) {
    *param_1 = (float)DAT_146294aa0;
    param_1[1] = fVar2;
    param_1[2] = fVar3;
    param_1[3] = fVar1;
    param_1[4] = fVar2;
    param_1[5] = fVar3;
    param_1[6] = 40000.0;
    param_1[7] = -1.0;
    param_1[8] = -0.3;
  }
  return;
}



// FUNCTION 1409fd7e0 FUN_1409fd7e0 body=263 status=ok
// SIG undefined FUN_1409fd7e0(void)

void FUN_1409fd7e0(longlong param_1,char param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = (longlong)*(int *)(param_1 + 0xc68);
  if (*(int *)(param_1 + 0xc68) != 0) {
    iVar6 = 0;
    bVar7 = **(char **)(param_1 + 0xc60) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar2) {
        pcVar1 = (char *)(*(longlong *)(param_1 + 0xc60) + lVar3 * 2);
        do {
          if (bVar7 != (*pcVar1 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          pcVar1 = pcVar1 + 2;
        } while (lVar3 < lVar2);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0xc60) + (longlong)iVar6 * 2),
                     (void *)(*(longlong *)(param_1 + 0xc60) + (longlong)iVar4 * 2),
                     (longlong)(iVar5 - iVar4) * 2);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0xc68) = iVar6;
  }
  FUN_140a203b0(param_1);
  return;
}



// FUNCTION 1409fd8f0 FUN_1409fd8f0 body=659 status=ok
// SIG undefined FUN_1409fd8f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409fd8f0(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined8 local_58;
  float local_50;
  
  fVar7 = *(float *)(param_1 + 0xc20);
  if (((fVar7 == (float)DAT_146294aa0) && (DAT_146294aa0._4_4_ == *(float *)(param_1 + 0xc24))) &&
     (DAT_146294aa8 == *(float *)(param_1 + 0xc28))) {
    return;
  }
  if ((*(float *)(param_1 + 0xc3c) <= 0.0) || (param_2 <= *(float *)(param_1 + 0xc3c))) {
    lVar1 = *(longlong *)(param_1 + 0xb30);
    if (lVar1 == 0) {
      return;
    }
    if (0.0 < *(float *)(param_1 + 0xc38)) {
      lVar2 = *(longlong *)(lVar1 + 0x168);
      if (lVar2 == 0) {
        local_58 = _DAT_1468b5d90;
        local_50 = DAT_1468b5d98;
      }
      else {
        local_58 = *(undefined8 *)(lVar2 + 0x220);
        local_50 = *(float *)(lVar2 + 0x228);
      }
      fVar3 = fVar7 - (float)local_58;
      fVar4 = *(float *)(param_1 + 0xc24) - (float)((ulonglong)local_58 >> 0x20);
      local_50 = *(float *)(param_1 + 0xc28) - local_50;
      if (fVar4 * fVar4 + fVar3 * fVar3 + local_50 * local_50 < *(float *)(param_1 + 0xc38))
      goto LAB_1409fdb6e;
    }
    if (1.0 <= *(float *)(param_1 + 0xc40)) {
      return;
    }
    lVar1 = *(longlong *)(lVar1 + 0x168);
    if (lVar1 == 0) {
      local_58 = _DAT_1468b5d90;
      local_50 = DAT_1468b5d98;
    }
    else {
      local_58 = *(undefined8 *)(lVar1 + 0x220);
      local_50 = *(float *)(lVar1 + 0x228);
    }
    fVar4 = (float)((ulonglong)local_58 >> 0x20) - *(float *)(param_1 + 0xc24);
    fVar7 = (float)local_58 - fVar7;
    local_50 = local_50 - *(float *)(param_1 + 0xc28);
    fVar3 = fVar4 * fVar4 + fVar7 * fVar7 + local_50 * local_50;
    if (1e-08 < fVar3) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar3 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar3 * 0.5 * fVar5 * fVar5);
      fVar7 = fVar7 * fVar5;
      fVar4 = fVar4 * fVar5;
      local_50 = local_50 * fVar5;
    }
    if (fVar4 * *(float *)(param_1 + 0xc30) + fVar7 * *(float *)(param_1 + 0xc2c) +
        local_50 * *(float *)(param_1 + 0xc34) <= *(float *)(param_1 + 0xc40)) {
      return;
    }
  }
LAB_1409fdb6e:
  FUN_1409fdbf0();
  return;
}



// FUNCTION 1409fdb90 FUN_1409fdb90 body=81 status=ok
// SIG undefined FUN_1409fdb90(void)

void FUN_1409fdb90(longlong param_1)

{
  FUN_142f97e30();
  if (*(longlong *)(param_1 + 0xb30) != 0) {
    FUN_1412153d0(*(longlong *)(param_1 + 0xb30),1);
  }
  *(longlong *)(param_1 + 0xb78) = param_1;
  *(undefined8 *)(param_1 + 0xb80) = 0;
  *(undefined8 *)(param_1 + 0xb30) = 0;
  *(undefined8 *)(param_1 + 0xb40) = 0;
  *(undefined1 *)(param_1 + 0xc70) = 0;
  *(undefined4 *)(param_1 + 0xc74) = 0;
  return;
}



// FUNCTION 1409fdbf0 FUN_1409fdbf0 body=244 status=ok
// SIG undefined FUN_1409fdbf0(void)

void FUN_1409fdbf0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((((float)DAT_146294aa0 != *(float *)(param_1 + 0xc20)) ||
      (DAT_146294aa0._4_4_ != *(float *)(param_1 + 0xc24))) ||
     (DAT_146294aa8 != *(float *)(param_1 + 0xc28))) {
    *(int *)(param_1 + 0xb0c) = *(int *)(param_1 + 0xb0c) + 1;
    iVar6 = *(int *)(param_1 + 0xb0c);
    bVar3 = false;
    iVar5 = *(int *)(param_1 + 0xb00) + -1;
    lVar8 = (longlong)iVar5;
    if (-1 < iVar5) {
      lVar7 = lVar8 << 4;
      bVar3 = false;
      do {
        lVar1 = *(longlong *)(param_1 + 0xaf8);
        if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
           (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1409fdc8d:
          bVar3 = true;
        }
        else {
          cVar4 = (**(code **)(*plVar2 + 0x40))();
          if (cVar4 == '\0') goto LAB_1409fdc8d;
        }
        lVar7 = lVar7 + -0x10;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
      iVar6 = *(int *)(param_1 + 0xb0c);
    }
    *(int *)(param_1 + 0xb0c) = iVar6 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0xaf8),0)
      ;
    }
    FUN_1409fd740(param_1 + 0xc20);
    FUN_1409fdcf0(param_1,4);
  }
  return;
}



// FUNCTION 1409fdcf0 FUN_1409fdcf0 body=303 status=ok
// SIG undefined FUN_1409fdcf0(void)

void FUN_1409fdcf0(longlong param_1,char param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar1 = (longlong)*(int *)(param_1 + 0xc58);
  if (*(int *)(param_1 + 0xc58) != 0) {
    iVar6 = 0;
    bVar7 = *(char *)(*(longlong *)(param_1 + 0xc50) + 0x50) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar1) {
        pcVar2 = (char *)(*(longlong *)(param_1 + 0xc50) + 0x50 + lVar3 * 0x60);
        do {
          if (bVar7 != (*pcVar2 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          pcVar2 = pcVar2 + 0x60;
        } while (lVar3 < lVar1);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar6 * 0x60 + *(longlong *)(param_1 + 0xc50)),
                     (void *)((longlong)iVar4 * 0x60 + *(longlong *)(param_1 + 0xc50)),
                     (longlong)(iVar5 - iVar4) * 0x60);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar1);
    *(int *)(param_1 + 0xc58) = iVar6;
  }
  FUN_140a203b0(param_1);
  return;
}



// FUNCTION 1409fde20 FUN_1409fde20 body=108 status=ok
// SIG undefined FUN_1409fde20(void)

void FUN_1409fde20(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((((*(char *)(param_1 + 0x788) != '\0') && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)
       ) && (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x148))(), lVar1 != 0)) &&
     (*(longlong *)(param_1 + 0x810) != 0)) {
    uVar2 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
    FUN_142880530(uVar2,param_1 + 0x810);
    *(undefined8 *)(param_1 + 0x810) = 0;
  }
  return;
}



// FUNCTION 1409fde90 FUN_1409fde90 body=3679 status=ok
// SIG undefined FUN_1409fde90(void)

undefined8 * FUN_1409fde90(longlong param_1,undefined8 *param_2,float *param_3,float param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  float *pfVar9;
  undefined8 *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined1 local_f8 [8];
  float local_f0;
  undefined1 local_e8 [176];
  
  FUN_14303fd80();
  if (*(longlong *)(param_1 + 0x2c8) == 0) {
    return param_2;
  }
  cVar6 = *(char *)(param_1 + 0x2d0);
  if (cVar6 == '\x01') {
    if (*(longlong *)(param_1 + 0x2e0) == 0) {
      return param_2;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x168);
    if (lVar1 == 0) {
      local_100 = DAT_1468b5d98;
      local_108._0_4_ = DAT_1468b5d90;
      local_108._4_4_ = DAT_1468b5d94;
    }
    else {
      local_100 = *(float *)(lVar1 + 0x228);
      local_108._0_4_ = *(float *)(lVar1 + 0x220);
      local_108._4_4_ = *(float *)(lVar1 + 0x224);
    }
    fVar22 = local_100;
    fVar19 = local_108._4_4_;
    fVar17 = (float)local_108;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x168);
    if (lVar1 == 0) {
      local_100 = DAT_1468b5d98;
      local_108._0_4_ = DAT_1468b5d90;
      local_108._4_4_ = DAT_1468b5d94;
    }
    else {
      local_100 = *(float *)(lVar1 + 0x228);
      local_108._0_4_ = *(float *)(lVar1 + 0x220);
      local_108._4_4_ = *(float *)(lVar1 + 0x224);
    }
    fVar17 = fVar17 - (float)local_108;
    fVar19 = fVar19 - local_108._4_4_;
    fVar22 = fVar22 - local_100;
    fVar12 = SQRT(fVar19 * fVar19 + fVar17 * fVar17 + fVar22 * fVar22);
    fVar20 = DAT_1468b5d98;
    fVar23 = DAT_1468b5d94;
    fVar16 = DAT_1468b5d90;
    if (1e-08 < fVar12) {
      fVar16 = 1.0 / fVar12;
      fVar20 = fVar16 * fVar22;
      fVar23 = fVar16 * fVar19;
      fVar16 = fVar16 * fVar17;
    }
    fVar17 = *(float *)(param_1 + 0x300);
    if ((fVar12 < *(float *)(param_1 + 0x32c) || fVar12 == *(float *)(param_1 + 0x32c)) &&
       (fVar17 * fVar17 * 0.25 <=
        *param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2])) {
      return param_2;
    }
    fVar19 = *(float *)(param_1 + 0x308);
    if (*(float *)(param_1 + 0x308) <= param_4) {
      fVar19 = param_4;
    }
    if (fVar19 <= 0.001) {
      fVar19 = 0.001;
    }
    fVar17 = fVar17 / fVar19;
    *param_2 = CONCAT44(fVar23 * fVar17,fVar16 * fVar17);
    *(float *)(param_2 + 1) = fVar20 * fVar17;
    return param_2;
  }
  if (cVar6 == '\x02') {
    plVar8 = *(longlong **)(param_1 + 0x2e0);
  }
  else {
    if (cVar6 != '\x03') {
      return param_2;
    }
    plVar8 = (longlong *)FUN_140a63ba0();
  }
  if (plVar8 == (longlong *)0x0) {
    return param_2;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x168);
  if (lVar1 == 0) {
    local_100 = DAT_1468b5d98;
    local_108._0_4_ = DAT_1468b5d90;
    local_108._4_4_ = DAT_1468b5d94;
  }
  else {
    local_100 = *(float *)(lVar1 + 0x228);
    local_108._0_4_ = *(float *)(lVar1 + 0x220);
    local_108._4_4_ = *(float *)(lVar1 + 0x224);
  }
  fVar22 = local_100;
  fVar19 = local_108._4_4_;
  fVar17 = (float)local_108;
  local_110 = local_100;
  lVar1 = plVar8[0x2d];
  local_118._0_4_ = (float)local_108;
  local_118._4_4_ = local_108._4_4_;
  if (lVar1 == 0) {
    local_100 = DAT_1468b5d98;
    local_108._0_4_ = DAT_1468b5d90;
    local_108._4_4_ = DAT_1468b5d94;
  }
  else {
    local_100 = *(float *)(lVar1 + 0x228);
    local_108._0_4_ = *(float *)(lVar1 + 0x220);
    local_108._4_4_ = *(float *)(lVar1 + 0x224);
  }
  fVar20 = (float)local_108 - fVar17;
  fVar16 = *(float *)(param_1 + 0x3f0);
  fVar23 = local_108._4_4_ - fVar19;
  local_120 = (local_100 + *(float *)(param_1 + 0x30c)) - fVar22;
  local_128 = CONCAT44(fVar23,fVar20);
  if ((((fVar16 <= -(float)DAT_146294aa0) || ((float)DAT_146294aa0 <= fVar16)) ||
      (*(float *)(param_1 + 0x3f4) <= -DAT_146294aa0._4_4_)) ||
     (((DAT_146294aa0._4_4_ <= *(float *)(param_1 + 0x3f4) ||
       (fVar12 = *(float *)(param_1 + 0x3f8), fVar12 <= -DAT_146294aa8)) ||
      (DAT_146294aa8 <= fVar12)))) {
    bVar2 = false;
    local_108 = local_128;
    local_100 = local_120;
    fVar16 = fVar20;
  }
  else {
    fVar16 = fVar16 - fVar17;
    bVar2 = true;
    local_108 = CONCAT44(*(float *)(param_1 + 0x3f4) - fVar19,fVar16);
    local_100 = fVar12 - fVar22;
  }
  fVar17 = local_108._4_4_;
  fVar19 = fVar16 * fVar16 + local_108._4_4_ * local_108._4_4_ + local_100 * local_100;
  if (fVar19 == 1.0) {
    uVar5 = local_108;
    local_108._0_4_ = (float)local_108;
    fVar22 = local_100;
    fVar12 = (float)local_108;
    local_108 = uVar5;
  }
  else {
    fVar17 = DAT_1468b5d94;
    fVar22 = DAT_1468b5d98;
    fVar12 = DAT_1468b5d90;
    if (1e-08 <= fVar19) {
      auVar18 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
      fVar22 = auVar18._0_4_;
      fVar22 = fVar22 + fVar22 * (0.5 - fVar19 * 0.5 * fVar22 * fVar22);
      fVar22 = fVar22 + fVar22 * (0.5 - fVar19 * 0.5 * fVar22 * fVar22);
      fVar12 = fVar22 * fVar16;
      fVar17 = local_108._4_4_ * fVar22;
      fVar22 = local_100 * fVar22;
    }
  }
  fVar19 = SQRT(fVar20 * fVar20 + fVar23 * fVar23);
  if (((*(float *)(param_1 + 0x314) <= fVar19 && fVar19 != *(float *)(param_1 + 0x314)) ||
      (fVar19 < *(float *)(param_1 + 0x318))) ||
     (*(float *)(param_1 + 0x310) <= ABS(local_120) && ABS(local_120) != *(float *)(param_1 + 0x310)
     )) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  bVar4 = true;
  if ((*(char *)(param_1 + 0x328) != '\0') && (!bVar2)) {
    (**(code **)(*plVar8 + 0x648))(plVar8,local_e8,local_f8);
    pfVar9 = (float *)FRotator::Vector(local_f8,&local_128);
    fVar16 = pfVar9[1];
    fVar20 = *pfVar9;
    fVar23 = fVar20 * fVar20 + fVar16 * fVar16;
    if (fVar23 == 1.0) {
      if (pfVar9[2] == 0.0) {
        local_128 = *(longlong *)pfVar9;
        local_120 = pfVar9[2];
        fVar16 = (float)((ulonglong)local_128 >> 0x20);
        fVar20 = (float)local_128;
      }
      else {
LAB_1409fe5bb:
        local_120 = 0.0;
        local_128 = CONCAT44(fVar16,fVar20);
      }
    }
    else {
      if (1e-08 <= fVar23) {
        auVar18 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
        fVar14 = auVar18._0_4_;
        fVar14 = fVar14 + fVar14 * (0.5 - fVar23 * 0.5 * fVar14 * fVar14);
        fVar14 = fVar14 + fVar14 * (0.5 - fVar23 * 0.5 * fVar14 * fVar14);
        fVar20 = fVar20 * fVar14;
        fVar16 = fVar16 * fVar14;
        goto LAB_1409fe5bb;
      }
      local_128 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_120 = DAT_1468b5d98;
      fVar16 = DAT_1468b5d94;
      fVar20 = DAT_1468b5d90;
    }
    fVar23 = local_120;
    local_100 = local_120;
    lVar1 = plVar8[0x2d];
    local_108 = local_128;
    if (lVar1 == 0) {
      local_128 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_120 = DAT_1468b5d98;
    }
    else {
      local_128 = *(undefined8 *)(lVar1 + 0x220);
      local_120 = *(float *)(lVar1 + 0x228);
    }
    fVar24 = (float)local_118 - (float)local_128;
    fVar21 = local_118._4_4_ - (float)((ulonglong)local_128 >> 0x20);
    fVar14 = fVar21 * fVar21 + fVar24 * fVar24;
    if (fVar14 == 1.0) {
      fVar15 = fVar21;
      fVar25 = fVar24;
      fVar13 = local_110 - local_120;
      if (local_110 - local_120 != 0.0) {
LAB_1409fe708:
        fVar15 = fVar21;
        fVar25 = fVar24;
        fVar13 = 0.0;
      }
    }
    else {
      fVar15 = DAT_1468b5d94;
      fVar25 = DAT_1468b5d90;
      fVar13 = DAT_1468b5d98;
      if (1e-08 <= fVar14) {
        auVar18 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar15 = auVar18._0_4_;
        fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
        fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
        fVar24 = fVar24 * fVar15;
        fVar21 = fVar21 * fVar15;
        goto LAB_1409fe708;
      }
    }
    fVar20 = fVar15 * fVar16 + fVar25 * fVar20 + fVar13 * fVar23;
    fVar16 = -1.0;
    if ((-1.0 <= fVar20) && (fVar16 = fVar20, 1.0 <= fVar20)) {
      fVar16 = 1.0;
    }
    _guard_xfg_dispatch_icall_nop(fVar16);
    cVar6 = FUN_142c4a520(param_1 + 800);
    bVar4 = true;
    if (cVar6 == '\0') {
      bVar4 = false;
    }
  }
  fVar16 = param_3[1];
  fVar20 = *param_3;
  fVar23 = param_3[2];
  fVar15 = SQRT(fVar20 * fVar20 + fVar16 * fVar16 + fVar23 * fVar23);
  fVar14 = DAT_1468b5d90;
  fVar21 = DAT_1468b5d94;
  fVar24 = DAT_1468b5d98;
  if (1e-08 < fVar15) {
    fVar24 = 1.0 / fVar15;
    local_f0 = fVar23 * fVar24;
    fVar14 = fVar20 * fVar24;
    fVar21 = fVar16 * fVar24;
    fVar24 = fVar23 * fVar24;
  }
  if ((bVar3) && (bVar4)) {
    fVar16 = *(float *)(param_1 + 0x304);
    if (!bVar2) {
      if (*(float *)(param_1 + 0x318) <= 5.0) {
        if (fVar15 <= 0.0) {
          puVar10 = (undefined8 *)UKismetMathLibrary::RandomUnitVector(local_e8);
        }
        else {
          local_118 = CONCAT44(fVar21,fVar14);
          puVar10 = &local_118;
          local_110 = fVar24;
        }
        fVar22 = *(float *)(puVar10 + 1);
        local_108._0_4_ = (float)*puVar10;
        fVar17 = (float)((ulonglong)*puVar10 >> 0x20);
        fVar12 = (float)local_108;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x31c);
        if (iVar7 == 0) {
          iVar7 = rand();
          iVar7 = (int)((float)iVar7 * 3.051851e-05 + (float)iVar7 * 3.051851e-05);
          iVar11 = 1;
          if (iVar7 < 2) {
            iVar11 = iVar7;
          }
          iVar7 = -1;
          if (iVar11 == 1) {
            iVar7 = 1;
          }
          *(int *)(param_1 + 0x31c) = iVar7;
        }
        fVar20 = (fVar22 * (float)DAT_1464aa798 - fVar12 * DAT_1464aa7a0) * (float)iVar7;
        fVar12 = (fVar17 * DAT_1464aa7a0 - fVar22 * DAT_1464aa798._4_4_) * (float)iVar7;
        fVar19 = fVar20 * fVar20 + fVar12 * fVar12 + fVar22 * fVar22;
        fVar17 = fVar20;
        if (1e-08 < fVar19) {
          auVar18 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
          fVar23 = auVar18._0_4_;
          fVar23 = fVar23 + fVar23 * (0.5 - fVar19 * 0.5 * fVar23 * fVar23);
          fVar23 = fVar23 + fVar23 * (0.5 - fVar19 * 0.5 * fVar23 * fVar23);
          fVar22 = fVar23 * fVar22;
          fVar17 = fVar20 * fVar23;
          fVar12 = fVar12 * fVar23;
        }
      }
    }
  }
  else {
    fVar16 = *(float *)(param_1 + 0x300);
    *(undefined4 *)(param_1 + 0x31c) = 0;
    if (!bVar2) {
      if (bVar4) {
        if (*(float *)(param_1 + 0x318) <= fVar19) goto LAB_1409fec0a;
        if (1e-08 < ABS(fVar17 + fVar12)) {
          fVar17 = -fVar17;
          fVar12 = -fVar12;
          goto LAB_1409fec0a;
        }
      }
      else {
        if (*(float *)(param_1 + 800) == 0.0) {
          local_120 = local_100;
          puVar10 = &local_128;
          local_128 = local_108;
        }
        else {
          local_128 = (ulonglong)(uint)*(float *)(param_1 + 800) << 0x20;
          local_120 = 0.0;
          puVar10 = (undefined8 *)FRotator::RotateVector(&local_128,local_e8,&local_108);
        }
        lVar1 = plVar8[0x2d];
        fVar17 = (*(float *)(param_1 + 0x318) + *(float *)(param_1 + 0x314)) * 0.5;
        if (lVar1 == 0) {
          local_128 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          local_120 = DAT_1468b5d98;
        }
        else {
          local_128 = *(undefined8 *)(lVar1 + 0x220);
          local_120 = *(float *)(lVar1 + 0x228);
        }
        fVar12 = (float)*puVar10 * fVar17 + (float)local_128;
        fVar20 = (float)((ulonglong)*puVar10 >> 0x20) * fVar17 +
                 (float)((ulonglong)local_128 >> 0x20);
        fVar19 = (float)local_118 - fVar12;
        fVar17 = fVar17 * *(float *)(puVar10 + 1) + local_120 + *(float *)(param_1 + 0x30c);
        if (((((fVar19 <= -2e-05) || (2e-05 <= fVar19)) ||
             (fVar19 = local_118._4_4_ - fVar20, fVar19 <= -2e-05)) ||
            ((2e-05 <= fVar19 || (fVar19 = local_110 - fVar17, fVar19 <= -2e-05)))) ||
           (2e-05 <= fVar19)) {
          fVar17 = fVar17 - local_110;
          fVar20 = fVar20 - local_118._4_4_;
          fVar12 = fVar12 - (float)local_118;
          fVar19 = fVar12 * fVar12 + fVar20 * fVar20 + fVar17 * fVar17;
          auVar18 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
          fVar23 = auVar18._0_4_;
          fVar23 = fVar23 + fVar23 * (0.5 - fVar19 * 0.5 * fVar23 * fVar23);
          fVar23 = fVar23 * (0.5 - fVar19 * 0.5 * fVar23 * fVar23) + fVar23;
          fVar22 = fVar23 * fVar17;
          fVar12 = fVar23 * fVar12;
          fVar17 = fVar23 * fVar20;
          goto LAB_1409fec0a;
        }
      }
      UKismetMathLibrary::RandomUnitVector(&local_118);
      fVar17 = local_118._4_4_;
      fVar12 = (float)local_118;
    }
  }
LAB_1409fec0a:
  fVar19 = *(float *)(param_1 + 0x308);
  if (*(float *)(param_1 + 0x308) <= param_4) {
    fVar19 = param_4;
  }
  if (fVar19 <= 0.001) {
    fVar19 = 0.001;
  }
  fVar19 = 1.0 / fVar19;
  fVar20 = param_3[2];
  *param_2 = CONCAT44((fVar17 * fVar16 - param_3[1]) * fVar19,(fVar12 * fVar16 - *param_3) * fVar19)
  ;
  *(float *)(param_2 + 1) = (fVar22 * fVar16 - fVar20) * fVar19;
  return param_2;
}



// FUNCTION 1409fecf0 FUN_1409fecf0 body=1478 status=ok
// SIG undefined FUN_1409fecf0(void)

undefined8 FUN_1409fecf0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  cVar1 = *(char *)(param_1 + 0x2d1);
  if (cVar1 == '\x01') {
LAB_1409ff223:
    puVar4 = (undefined8 *)FVector4::ToOrientationQuat(param_3,&local_88);
  }
  else {
    if (cVar1 == '\x02') {
      if (*(longlong *)(param_1 + 0x2c8) != 0) {
        if (*(longlong *)(param_1 + 0x2e8) == 0) {
          lVar2 = FUN_140a63ba0();
          if (lVar2 != 0) {
            lVar2 = *(longlong *)(lVar2 + 0x168);
            if (lVar2 == 0) {
              uVar9 = 0x3f800000;
              uVar5 = 0;
              uVar6 = 0;
              uVar8 = 0;
            }
            else {
              uVar5 = *(undefined4 *)(lVar2 + 0x210);
              uVar6 = *(undefined4 *)(lVar2 + 0x214);
              uVar8 = *(undefined4 *)(lVar2 + 0x218);
              uVar9 = *(undefined4 *)(lVar2 + 0x21c);
            }
            local_78 = CONCAT44(uVar6,uVar5);
            uStack_70 = CONCAT44(uVar9,uVar8);
            goto LAB_1409ff233;
          }
        }
        else {
          lVar2 = FUN_142dddd00(*(longlong *)(param_1 + 0x2e8));
          if (lVar2 == 0) {
            if (*(longlong *)(param_1 + 0x2e8) != 0) {
              FUN_14222da00(*(longlong *)(param_1 + 0x2e8),1,&local_c8,&local_88);
              goto LAB_1409fefab;
            }
            local_c8 = CONCAT44(DAT_146294aa0._4_4_,(float)DAT_146294aa0);
            local_c0 = DAT_146294aa8;
            fVar14 = DAT_146294aa0._4_4_;
            fVar15 = (float)DAT_146294aa0;
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x648))
                      (*(longlong **)(param_1 + 0x2c8),local_a8,&local_b8);
            uVar3 = FRotator::Vector(&local_b8,local_98);
            puVar4 = (undefined8 *)FUN_142dce5a0(lVar2,&local_88,local_a8,uVar3);
            local_c8 = *puVar4;
            local_c0 = *(float *)(puVar4 + 1);
LAB_1409fefab:
            fVar14 = local_c8._4_4_;
            fVar15 = (float)local_c8;
          }
          if ((((-(float)DAT_146294aa0 < fVar15) && (fVar15 < (float)DAT_146294aa0)) &&
              (-DAT_146294aa0._4_4_ < fVar14)) &&
             (((fVar14 < DAT_146294aa0._4_4_ && (-DAT_146294aa8 < local_c0)) &&
              (local_c0 < DAT_146294aa8)))) {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x168);
            if (lVar2 == 0) {
              local_b8._0_4_ = DAT_1468b5d90;
              local_b8._4_4_ = DAT_1468b5d94;
              local_b0 = DAT_1468b5d98;
            }
            else {
              local_b8._0_4_ = *(float *)(lVar2 + 0x220);
              local_b8._4_4_ = *(float *)(lVar2 + 0x224);
              local_b0 = *(float *)(lVar2 + 0x228);
            }
            fVar15 = fVar15 - (float)local_b8;
            fVar14 = fVar14 - local_b8._4_4_;
            fVar12 = local_c0 - local_b0;
            fVar10 = fVar14 * fVar14 + fVar15 * fVar15 + fVar12 * fVar12;
            local_b0 = fVar12;
            fVar13 = fVar14;
            fVar7 = fVar15;
            if ((fVar10 != 1.0) &&
               (local_b0 = DAT_1468b5d98, fVar13 = DAT_1468b5d94, fVar7 = DAT_1468b5d90,
               1e-08 <= fVar10)) {
              auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
              fVar7 = auVar11._0_4_;
              fVar7 = fVar7 + fVar7 * (0.5 - fVar10 * 0.5 * fVar7 * fVar7);
              fVar7 = fVar7 + fVar7 * (0.5 - fVar10 * 0.5 * fVar7 * fVar7);
              local_b0 = fVar12 * fVar7;
              fVar13 = fVar14 * fVar7;
              fVar7 = fVar15 * fVar7;
            }
            local_b8 = CONCAT44(fVar13,fVar7);
            if (((fVar7 != 0.0) || (fVar13 != 0.0)) || (local_b0 != 0.0)) {
              param_3 = &local_b8;
              goto LAB_1409ff223;
            }
          }
        }
      }
    }
    else if (((cVar1 == '\x03') && (*(longlong *)(param_1 + 0x2c8) != 0)) &&
            (*(longlong *)(param_1 + 0x2e0) != 0)) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x168);
      if (lVar2 == 0) {
        local_c0 = DAT_1468b5d98;
        local_c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      else {
        local_c0 = *(float *)(lVar2 + 0x228);
        local_c8 = *(undefined8 *)(lVar2 + 0x220);
      }
      fVar14 = local_c0;
      uVar3 = local_c8;
      local_b0 = local_c0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x168);
      local_b8 = local_c8;
      if (lVar2 == 0) {
        local_c0 = DAT_1468b5d98;
        local_c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      else {
        local_c0 = *(float *)(lVar2 + 0x228);
        local_c8 = *(undefined8 *)(lVar2 + 0x220);
      }
      local_b8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
      local_b8._4_4_ = (float)((ulonglong)local_c8 >> 0x20) - local_b8._4_4_;
      local_b8._0_4_ = (float)uVar3;
      local_b8._0_4_ = (float)local_c8 - (float)local_b8;
      fVar14 = local_c0 - fVar14;
      fVar7 = local_b8._4_4_ * local_b8._4_4_ + (float)local_b8 * (float)local_b8 + fVar14 * fVar14;
      fVar15 = local_b8._4_4_;
      fVar13 = (float)local_b8;
      local_c0 = fVar14;
      if ((fVar7 != 1.0) &&
         (fVar15 = DAT_1468b5d94, fVar13 = DAT_1468b5d90, local_c0 = DAT_1468b5d98, 1e-08 <= fVar7))
      {
        auVar11 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar10 = auVar11._0_4_;
        fVar10 = fVar10 + fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10);
        fVar10 = fVar10 + fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10);
        fVar15 = local_b8._4_4_ * fVar10;
        fVar13 = (float)local_b8 * fVar10;
        local_c0 = fVar14 * fVar10;
      }
      local_c8 = CONCAT44(fVar15,fVar13);
      local_b8 = uVar3;
      if (((fVar13 != 0.0) || (fVar15 != 0.0)) || (local_c0 != 0.0)) {
        param_3 = &local_c8;
        goto LAB_1409ff223;
      }
    }
    puVar4 = (undefined8 *)FUN_142386f60(param_1,&local_88,param_3,param_4);
  }
  local_78 = *puVar4;
  uStack_70 = puVar4[1];
LAB_1409ff233:
  lVar2 = *(longlong *)(param_1 + 0x178);
  if (lVar2 == 0) {
    local_88 = (undefined4)local_78;
    uStack_84 = local_78._4_4_;
    uStack_80 = (undefined4)uStack_70;
    uStack_7c = uStack_70._4_4_;
  }
  else {
    local_88 = *(undefined4 *)(lVar2 + 0x210);
    uStack_84 = *(undefined4 *)(lVar2 + 0x214);
    uStack_80 = *(undefined4 *)(lVar2 + 0x218);
    uStack_7c = *(undefined4 *)(lVar2 + 0x21c);
  }
  local_68 = CONCAT44(uStack_84,local_88);
  uStack_60 = CONCAT44(uStack_7c,uStack_80);
  FUN_1416342a0(param_2,&local_68,&local_78,param_4,*(undefined4 *)(param_1 + 0x2d4));
  return param_2;
}



// FUNCTION 1409ff2c0 FUN_1409ff2c0 body=1226 status=ok
// SIG undefined FUN_1409ff2c0(void)

float * FUN_1409ff2c0(longlong param_1,float *param_2,float *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float local_88;
  float fStack_84;
  undefined8 local_78;
  float local_70;
  
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    if (*(char *)(param_1 + 0x2d0) == '\x01') {
      if (*(longlong *)(param_1 + 0x2e0) != 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x168);
        if (lVar1 == 0) {
          local_70 = DAT_1468b5d98;
          local_78 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          local_70 = *(float *)(lVar1 + 0x228);
          local_78 = *(undefined8 *)(lVar1 + 0x220);
        }
        fVar10 = local_70;
        uVar2 = local_78;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x168);
        if (lVar1 == 0) {
          local_70 = DAT_1468b5d98;
          local_78 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          local_70 = *(float *)(lVar1 + 0x228);
          local_78 = *(undefined8 *)(lVar1 + 0x220);
        }
        fStack_84 = (float)((ulonglong)uVar2 >> 0x20);
        fStack_84 = (float)((ulonglong)local_78 >> 0x20) - fStack_84;
        local_88 = (float)uVar2;
        local_88 = (float)local_78 - local_88;
        local_70 = local_70 - fVar10;
        fVar6 = fStack_84 * fStack_84 + local_88 * local_88 + local_70 * local_70;
        fVar10 = fStack_84;
        fVar11 = local_70;
        fVar7 = local_88;
        if ((fVar6 != 1.0) &&
           (fVar10 = DAT_1468b5d94, fVar11 = DAT_1468b5d98, fVar7 = DAT_1468b5d90, 1e-08 <= fVar6))
        {
          auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
          fVar7 = auVar9._0_4_;
          fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
          fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
          fVar10 = fStack_84 * fVar7;
          fVar11 = local_70 * fVar7;
          fVar7 = local_88 * fVar7;
        }
        fVar6 = fVar10 * param_3[1] + fVar7 * *param_3 + fVar11 * param_3[2];
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        *(ulonglong *)param_3 = CONCAT44(fVar10 * fVar6,fVar7 * fVar6);
        param_3[2] = fVar11 * fVar6;
      }
    }
    else if ((byte)(*(char *)(param_1 + 0x2d0) - 2U) < 2) {
      fVar10 = *param_3;
      if (((0.0001 < ABS(fVar10)) || (0.0001 < ABS(param_3[1]))) || (0.0001 < ABS(param_3[2]))) {
        fVar11 = param_3[2];
        fVar7 = *(float *)(param_1 + 0x304);
        fVar6 = param_3[1];
        fVar5 = fVar10 * fVar10 + fVar6 * fVar6 + fVar11 * fVar11;
        if (SQRT(fVar5) < fVar7) {
          if (fVar5 == 1.0) {
            local_78._0_4_ = (float)*(undefined8 *)param_3;
            fVar4 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
            fVar8 = param_3[2];
          }
          else {
            fVar4 = DAT_1468b5d94;
            local_78._0_4_ = DAT_1468b5d90;
            fVar8 = DAT_1468b5d98;
            if (1e-08 <= fVar5) {
              auVar9 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
              fVar8 = auVar9._0_4_;
              fVar8 = fVar8 + fVar8 * (0.5 - fVar5 * 0.5 * fVar8 * fVar8);
              fVar8 = fVar8 + fVar8 * (0.5 - fVar5 * 0.5 * fVar8 * fVar8);
              local_78._0_4_ = fVar10 * fVar8;
              fVar4 = fVar6 * fVar8;
              fVar8 = fVar11 * fVar8;
            }
          }
          *(ulonglong *)param_3 = CONCAT44(fVar4 * fVar7,(float)local_78 * fVar7);
          param_3[2] = fVar8 * fVar7;
        }
      }
      else {
        fVar10 = *(float *)(param_1 + 0x304);
        pfVar3 = (float *)UKismetMathLibrary::RandomUnitVector(&local_78);
        fVar11 = pfVar3[2];
        *(ulonglong *)param_3 = CONCAT44(fVar10 * pfVar3[1],fVar10 * *pfVar3);
        param_3[2] = fVar10 * fVar11;
      }
    }
  }
  local_78 = *(undefined8 *)param_3;
  local_70 = param_3[2];
  FUN_1423870e0(param_1,param_2,&local_78,param_4);
  fVar10 = param_2[1];
  fVar11 = *param_2;
  fVar7 = param_2[2];
  fVar6 = *(float *)(param_1 + 0x300);
  fVar5 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar7 * fVar7);
  if (fVar6 < fVar5) {
    fVar5 = 1.0 / fVar5;
    *(ulonglong *)param_2 = CONCAT44(fVar10 * fVar5 * fVar6,fVar11 * fVar5 * fVar6);
    param_2[2] = fVar7 * fVar5 * fVar6;
  }
  return param_2;
}



// FUNCTION 1409ff790 FUN_1409ff790 body=161 status=ok
// SIG undefined FUN_1409ff790(void)

undefined8 FUN_1409ff790(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_140a11c50(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1409ff840 FUN_1409ff840 body=683 status=ok
// SIG undefined FUN_1409ff840(void)

void FUN_1409ff840(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *in_stack_ffffffffffffffc0;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  if (*param_2 == 0) {
    return;
  }
  lVar3 = FUN_140a08d60();
  if (lVar3 != 0) {
    FUN_140c58440(lVar3,param_2);
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    in_stack_ffffffffffffffc0 = &local_38;
    local_38 = 0;
    local_30 = 0;
    FUN_1405a2d20(*param_2,local_28,*(longlong *)(param_1 + 0x180),0,0,in_stack_ffffffffffffffc0);
    FUN_140591060(local_28);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x200);
  lVar6 = (longlong)*(int *)(param_1 + 0x208) * 0x10 + lVar3;
  for (; lVar3 != lVar6; lVar3 = lVar3 + 0x10) {
    if (*(longlong *)(lVar3 + 8) != 0) {
      in_stack_ffffffffffffffc0 = &local_38;
      local_38 = 0;
      local_30 = 0;
      FUN_1405a2d20(*param_2,local_28,*(longlong *)(lVar3 + 8),0,0,in_stack_ffffffffffffffc0);
      FUN_140591060(local_28);
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x210);
  plVar7 = plVar5 + (longlong)*(int *)(param_1 + 0x218) * 2;
  for (; plVar5 != plVar7; plVar5 = plVar5 + 2) {
    if (*plVar5 != 0) {
      in_stack_ffffffffffffffc0 =
           (longlong *)((ulonglong)in_stack_ffffffffffffffc0 & 0xffffffff00000000);
      FUN_1405aaa50(*param_2);
    }
  }
  if (*(longlong *)(param_1 + 0x230) == 0) {
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x230) + 0x2a0) != 0) {
    iVar2 = rand();
    FUN_1405aaa50(*param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x2a0),
                  (float)iVar2 * 3.051851e-05,0,4,
                  (ulonglong)in_stack_ffffffffffffffc0 & 0xffffffff00000000);
  }
  plVar5 = *(longlong **)(param_1 + 0x328);
  if (plVar5 != (longlong *)0x0) goto LAB_1409ffa37;
  plVar5 = *(longlong **)(param_1 + 0x118);
  if (plVar5 == (longlong *)0x0) {
LAB_1409ffa24:
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar3 = FUN_1430b3b80();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1409ffa24;
  }
  *(longlong **)(param_1 + 0x328) = plVar5;
  if (plVar5 == (longlong *)0x0) {
    return;
  }
LAB_1409ffa37:
  uVar4 = APlayArea::GetPrivateStaticClass();
  lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar4);
  if (lVar3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x230);
    if (*(longlong *)(lVar6 + 0x2b8) != 0) {
      FSceneViewport::GetMouseY(lVar3);
      FUN_1405aaa50(*param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x2b8));
      lVar6 = *(longlong *)(param_1 + 0x230);
    }
    if (*(longlong *)(lVar6 + 0x2b0) != 0) {
      FUN_14129eee0(lVar3);
      FUN_1405aaa50(*param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0x2b0));
    }
  }
  return;
}



// FUNCTION 1409ffaf0 FUN_1409ffaf0 body=251 status=ok
// SIG undefined FUN_1409ffaf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409ffaf0(longlong param_1,void *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x120);
    FUN_1406d4f00(param_2);
    *(undefined4 *)((longlong)param_2 + 0x60) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 100) = 0;
    *(undefined4 *)((longlong)param_2 + 0x68) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x6c) = 0;
    *(undefined4 *)((longlong)param_2 + 0x70) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x74) = 0;
    *(undefined4 *)((longlong)param_2 + 0x78) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x7c) = 0;
    *(undefined4 *)((longlong)param_2 + 0x80) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x84) = 0;
    *(undefined4 *)((longlong)param_2 + 0x88) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x8c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x90) = _DAT_1468b5d90;
    *(undefined4 *)((longlong)param_2 + 0x98) = DAT_1468b5d98;
    *(undefined8 *)((longlong)param_2 + 0x9c) = DAT_146294aa0;
    *(undefined4 *)((longlong)param_2 + 0xa4) = DAT_146294aa8;
    *(undefined8 *)((longlong)param_2 + 0xa8) = _DAT_1468b5d90;
    *(undefined4 *)((longlong)param_2 + 0xb0) = DAT_1468b5d98;
    FUN_142f89530((longlong)param_2 + 0xb4);
    *(undefined8 *)((longlong)param_2 + 0x110) = DAT_146294aa0;
    *(undefined4 *)((longlong)param_2 + 0x118) = DAT_146294aa8;
  }
  return;
}



// FUNCTION 1409ffbf0 FUN_1409ffbf0 body=116 status=ok
// SIG undefined FUN_1409ffbf0(void)

void FUN_1409ffbf0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  FUN_140c6f270();
  if (param_2 != 0) {
    lVar2 = FUN_1413acfb0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined1 *)(param_1 + 0xae8) = *(undefined1 *)(param_2 + 0xae8);
      *(undefined4 *)(param_1 + 0xaec) = *(undefined4 *)(param_2 + 0xaec);
    }
  }
  return;
}



// FUNCTION 1409ffc70 FUN_1409ffc70 body=141 status=ok
// SIG undefined FUN_1409ffc70(void)

void FUN_1409ffc70(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  FUN_140c6f270();
  if (param_2 != 0) {
    lVar2 = UGunnerAnimInstance::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined1 *)(param_1 + 0xae8) = *(undefined1 *)(param_2 + 0xae8);
      *(undefined4 *)(param_1 + 0xaec) = *(undefined4 *)(param_2 + 0xaec);
      *(undefined1 *)(param_1 + 0xaf0) = *(undefined1 *)(param_2 + 0xaf0);
      *(undefined4 *)(param_1 + 0xaf4) = *(undefined4 *)(param_2 + 0xaf4);
    }
  }
  return;
}



// FUNCTION 1409ffd00 FUN_1409ffd00 body=154 status=ok
// SIG undefined FUN_1409ffd00(void)

void FUN_1409ffd00(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  FUN_140c6f270();
  *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(param_1 + 0x660);
  if (param_2 != 0) {
    lVar2 = FUN_1414420b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + 0xb00) = *(undefined4 *)(param_2 + 0xb00);
      *(undefined4 *)(param_1 + 0xaf4) = *(undefined4 *)(param_2 + 0xaf4);
      *(undefined4 *)(param_1 + 0xaf8) = *(undefined4 *)(param_2 + 0xaf8);
      *(undefined4 *)(param_1 + 0xafc) = *(undefined4 *)(param_2 + 0xafc);
    }
  }
  return;
}



// FUNCTION 1409ffda0 FUN_1409ffda0 body=117 status=ok
// SIG undefined FUN_1409ffda0(void)

void FUN_1409ffda0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  FUN_140c6f270();
  if (param_2 != 0) {
    lVar2 = UGunnerAnimInstance::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined1 *)(param_1 + 0xaec) = *(undefined1 *)(param_2 + 0xaec);
      *(undefined1 *)(param_1 + 0xaf4) = *(undefined1 *)(param_2 + 0xaf4);
    }
  }
  return;
}



// FUNCTION 1409ffe20 FUN_1409ffe20 body=35 status=ok
// SIG undefined FUN_1409ffe20(void)

void FUN_1409ffe20(longlong param_1)

{
  FUN_140c6f270();
  *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(param_1 + 0x660);
  return;
}



// FUNCTION 1409ffe50 FUN_1409ffe50 body=511 status=ok
// SIG undefined FUN_1409ffe50(void)

void FUN_1409ffe50(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(longlong *)(param_1 + 800) == 0) && ((*(byte *)(param_1 + 200) & 0x20) != 0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x118);
      FUN_1417846f0(uVar3,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar5 = FUN_142e80f20();
      lVar6 = FUN_1417985e0(uVar5,uVar3,0,0,0,0,0,0,0);
      *(longlong *)(param_1 + 800) = lVar6;
      *(undefined1 *)(lVar6 + 0x25c) = 0;
      FUN_142350b20(*(undefined8 *)(param_1 + 800),0);
      uStack_20 = 0;
      pbVar1 = (byte *)(*(longlong *)(param_1 + 800) + 0x1a8);
      *pbVar1 = *pbVar1 & 0xfe;
      lVar6 = *(longlong *)(param_1 + 800);
      local_28 = FUN_1409fc890;
      plVar9 = (longlong *)(lVar6 + 0x3a0);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_1441db630;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_28;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_28._4_4_;
        *(undefined4 *)(plVar7 + 3) = uStack_20;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_1c;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar8;
      }
      if (&local_28 != plVar9) {
        if (plVar7 == (longlong *)0x0) {
          if ((*(int *)(lVar6 + 0x3a8) != 0) &&
             (plVar4 = (longlong *)*plVar9, plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x28))(plVar4,0);
            if (*plVar9 != 0) {
              lVar8 = FMemory::Realloc(*plVar9,0,0);
              *plVar9 = lVar8;
            }
            *(undefined4 *)(lVar6 + 0x3a8) = 0;
          }
        }
        else {
          (**(code **)(*plVar7 + 0x30))(plVar7,plVar9);
        }
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        lVar6 = FMemory::Realloc(plVar7,0,0);
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
      *(undefined8 *)(*(longlong *)(param_1 + 800) + 400) = *(undefined8 *)(lVar2 + 0xe28);
      pbVar1 = (byte *)(*(longlong *)(param_1 + 800) + 0x228);
      *pbVar1 = *pbVar1 | 0x10;
      FUN_14234b150(*(undefined8 *)(param_1 + 800));
    }
  }
  return;
}



// FUNCTION 140a00050 FUN_140a00050 body=111 status=ok
// SIG undefined FUN_140a00050(void)

void FUN_140a00050(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1441db480;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    FUN_14058f8f0(puVar1 + 4,param_1 + 0x20);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar1 = &PTR_GetPoolName_1441db4c8;
  }
  return;
}



// FUNCTION 140a000c0 FUN_140a000c0 body=91 status=ok
// SIG undefined FUN_140a000c0(void)

void FUN_140a000c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_LAB_1441db670;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_LAB_1441db6b8;
  }
  return;
}



// FUNCTION 140a00120 FUN_140a00120 body=74 status=ok
// SIG undefined FUN_140a00120(void)

void FUN_140a00120(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1441db630;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140a00170 FUN_140a00170 body=78 status=ok
// SIG undefined FUN_140a00170(void)

void FUN_140a00170(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1441db5a0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_1441db5e8;
  }
  return;
}



// FUNCTION 140a001c0 CreateCopy body=93 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<0,UVisualComponent,TTypeWrapper<void>___cdecl(void),FName,FName>
     ::CreateCopy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1441db510;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = uVar1;
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_FUN_1441db558;
  }
  return;
}


