// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143043840 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FPositionVertexBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FLightProjectileBatchTickFunction",0x44);
  return param_2;
}



// FUNCTION 143043880 FUN_143043880 body=268 status=ok
// SIG undefined FUN_143043880(void)

longlong * FUN_143043880(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0x50),local_18,0);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((0x16 - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (0x16 - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar2 * 2),L"[TickLig",8);
  lVar2 = local_28 + lVar2 * 2;
  ((wchar_t *)(lVar2 + 0x10))[0] = L'h';
  ((wchar_t *)(lVar2 + 0x10))[1] = L't';
  ((wchar_t *)(lVar2 + 0x14))[0] = L'P';
  ((wchar_t *)(lVar2 + 0x14))[1] = L'r';
  ((wchar_t *)(lVar2 + 0x18))[0] = L'o';
  ((wchar_t *)(lVar2 + 0x18))[1] = L'j';
  ((wchar_t *)(lVar2 + 0x1c))[0] = L'e';
  ((wchar_t *)(lVar2 + 0x1c))[1] = L'c';
  *(undefined8 *)(lVar2 + 0x20) = 0x65006c00690074;
  *(undefined2 *)(lVar2 + 0x28) = 0x5d;
  *(undefined2 *)(lVar2 + 0x2a) = 0;
  *param_2 = local_28;
  *(int *)(param_2 + 1) = local_20;
  *(int *)((longlong)param_2 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 143043990 FUN_143043990 body=62 status=ok
// SIG undefined FUN_143043990(void)

undefined8 * FUN_143043990(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FPostLightBeamTickFunction",0x36);
  return param_2;
}



// FUNCTION 1430439d0 FUN_1430439d0 body=62 status=ok
// SIG undefined FUN_1430439d0(void)

undefined8 * FUN_1430439d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x21;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FPostLightProjectileTickFunction",0x42);
  return param_2;
}



// FUNCTION 143043a10 FUN_143043a10 body=94 status=ok
// SIG undefined FUN_143043a10(void)

void FUN_143043a10(longlong *param_1)

{
  longlong lVar1;
  
  if (((byte)*(ushort *)(param_1 + 0x1d) >> 1 & 1) != 0) {
    *(ushort *)(param_1 + 0x1d) = *(ushort *)(param_1 + 0x1d) & 0xfffd;
    if ((*(ushort *)(param_1 + 0x30) & 2) != 0) {
      if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
        lVar1 = param_1[4];
      }
      else {
        lVar1 = 0;
      }
      if (*(char *)(lVar1 + 0x128) == '\x03') {
        *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) & 0xfffd;
                    /* WARNING: Could not recover jumptable at 0x000143043a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x260))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 143043a70 FUN_143043a70 body=477 status=ok
// SIG undefined FUN_143043a70(void)

void FUN_143043a70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong local_res8;
  longlong local_res10;
  
  plVar6 = *(longlong **)(param_1 + 0x458);
  plVar3 = plVar6;
  if (plVar6 != plVar6 + *(int *)(param_1 + 0x460)) {
    while (*plVar3 != param_2) {
      plVar3 = plVar3 + 1;
      if (plVar3 == plVar6 + *(int *)(param_1 + 0x460)) {
        return;
      }
    }
    iVar2 = (int)((longlong)plVar3 - (longlong)plVar6 >> 3);
    if (iVar2 != -1) {
      uVar4 = 0;
      local_res10 = param_2;
      if (*(char *)(param_2 + 0x55) == '\0') {
        iVar5 = *(int *)(param_2 + 0xa0);
        local_res8 = param_2;
        if ((iVar5 < 0) || (*(int *)(param_1 + 0x478) <= iVar5)) {
          TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap
                    (param_1 + 0x480,&local_res8,1);
        }
        else {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x470) + (longlong)iVar5 * 8);
          plVar6 = *(longlong **)(lVar1 + 0x10);
          plVar3 = plVar6;
          if (plVar6 == plVar6 + *(int *)(lVar1 + 0x18)) {
LAB_143043bff:
            *(undefined4 *)(param_2 + 0xa0) = 0xffffffff;
          }
          else {
            do {
              if (*plVar3 == param_2) {
                iVar5 = (int)((longlong)plVar3 - (longlong)plVar6 >> 3);
                if (iVar5 != -1) {
                  FUN_14305b2c0(param_2,0);
                  *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar5 * 8) = 0;
                  *(undefined1 *)(lVar1 + 8) = 1;
                }
                goto LAB_143043bff;
              }
              plVar3 = plVar3 + 1;
            } while (plVar3 != plVar6 + *(int *)(lVar1 + 0x18));
            *(undefined4 *)(param_2 + 0xa0) = 0xffffffff;
          }
        }
      }
      else {
        FUN_14288e3d0(param_2 + 0x48,0);
        FTickFunction::UnRegisterTickFunction(param_2 + 0x48);
        plVar6 = *(longlong **)(param_2 + 0x310);
        uVar7 = (longlong)*(int *)(param_2 + 0x318) & 0x1fffffffffffffff;
        if (plVar6 + *(int *)(param_2 + 0x318) < plVar6) {
          uVar7 = uVar4;
        }
        if (uVar7 != 0) {
          do {
            lVar1 = *plVar6;
            if ((lVar1 != 0) && (*(longlong *)(lVar1 + 400) == 0)) {
              FTickFunction::RemovePrerequisite(lVar1 + 0x30,param_2,param_2 + 0x48);
            }
            plVar6 = plVar6 + 1;
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar7);
        }
        TArray<AOnlineBeaconClient_*,FDefaultAllocator>::RemoveSingleSwap
                  (param_1 + 0x480,&local_res10,0);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x458) + (longlong)iVar2 * 8) = 0;
      *(undefined1 *)(param_1 + 0x590) = 1;
    }
  }
  return;
}



// FUNCTION 143043c50 FUN_143043c50 body=227 status=ok
// SIG undefined FUN_143043c50(void)

void FUN_143043c50(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_2 + 0x6c);
  cVar1 = (**(code **)(*param_1 + 0x350))(param_1,lVar2);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x358))(param_1,param_2);
    if (param_3 != '\0') {
      cVar1 = FUN_1405dc8f0(param_1 + 0x46,lVar2);
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x49) = 0;
      }
      FWeakObjectPtr::operator=(param_1 + 0x46,lVar2);
      param_1[0x4a] = *(longlong *)(param_2 + 0x80);
    }
    FUN_1430585c0(param_1,*(undefined4 *)(lVar2 + 0xc));
  }
  if (param_3 == '\0') {
    if ((*(byte *)(param_1[0x16] + 0x8c) & 1) == 0) {
      return;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  (**(code **)(*param_1 + 0x360))(param_1,param_2,uVar3);
  return;
}



// FUNCTION 143043d40 FUN_143043d40 body=2995 status=ok
// SIG undefined FUN_143043d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143043d40(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  float *pfVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 uVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined1 **local_190;
  char local_188;
  byte local_187 [7];
  longlong local_180;
  float local_178;
  undefined8 local_170;
  float local_168;
  undefined1 local_160 [16];
  undefined8 local_150;
  undefined8 uStack_148;
  byte *local_140;
  longlong lStack_138;
  undefined1 *local_128 [2];
  float local_118;
  undefined8 local_114;
  float local_10c;
  float *local_f8;
  int local_e8;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar6 = FWeakObjectPtr::Get(param_2 + 0x6c);
  lVar7 = FWeakObjectPtr::Get(param_2 + 0x74);
  bVar4 = false;
  cVar5 = (**(code **)(*param_1 + 0x280))(param_1,lVar6,lVar7);
  bVar16 = cVar5 == '\0';
  local_188 = '\0';
  if (((!bVar16) && ((int)param_1[0x6b] < *(int *)(param_1[0x15] + 0x19c))) &&
     ((lVar6 == 0 ||
      (cVar5 = (**(code **)(*param_1 + 0x278))(param_1,lVar6,lVar7,&local_188), cVar5 != '\0')))) {
    bVar4 = true;
  }
  if (((byte)*(ushort *)(param_1 + 0x1d) >> 4 & 1) != 0) {
    *(ushort *)(param_1 + 0x1d) = *(ushort *)(param_1 + 0x1d) & 0xffef;
  }
  if (bVar4) {
    *(int *)(param_1 + 0x6b) = (int)param_1[0x6b] + 1;
    local_168 = *(float *)(param_2 + 0x34) + *(float *)(param_2 + 0x1c);
    fVar19 = *(float *)(param_2 + 0x2c) + *(float *)(param_2 + 0x14);
    fVar18 = *(float *)(param_2 + 0x30) + *(float *)(param_2 + 0x18);
    *(ulonglong *)((longlong)param_1 + 0x2b4) = CONCAT44(fVar18,fVar19);
    *(float *)((longlong)param_1 + 700) = local_168;
    if (((*(float *)((longlong)param_1 + 0x2cc) == 0.0) && (*(float *)(param_1 + 0x5a) == 0.0)) &&
       (*(float *)((longlong)param_1 + 0x2d4) == 0.0)) {
      param_1[0x55] = CONCAT44(fVar18,fVar19);
    }
    else {
      uVar8 = FVector::Rotation(param_1 + 0x5e,&local_180,fVar19,fVar19);
      pfVar9 = (float *)FRotator::RotateVector(uVar8,local_160,(longlong)param_1 + 0x2cc);
      local_168 = *(float *)((longlong)param_1 + 700) - pfVar9[2];
      param_1[0x55] =
           CONCAT44(*(float *)(param_1 + 0x57) - pfVar9[1],
                    *(float *)((longlong)param_1 + 0x2b4) - *pfVar9);
      local_178 = local_168;
    }
    pfVar9 = (float *)(param_1 + 0x5e);
    *(undefined8 *)((longlong)param_1 + 0x254) = *(undefined8 *)((longlong)param_1 + 0x2b4);
    local_170 = *(undefined8 *)pfVar9;
    *(float *)(param_1 + 0x56) = local_168;
    *(undefined4 *)((longlong)param_1 + 0x25c) = *(undefined4 *)((longlong)param_1 + 700);
    local_168 = (float)param_1[0x5f];
    fVar18 = *(float *)(param_2 + 0x30) * *(float *)((longlong)param_1 + 0x2f4) +
             *(float *)(param_2 + 0x2c) * *pfVar9 +
             *(float *)(param_2 + 0x34) * *(float *)(param_1 + 0x5f);
    if (fVar18 < 0.0) {
      if (local_188 != '\0') {
        fVar19 = *(float *)(param_1 + 0x16);
        fVar17 = (float)FUN_142c98860(param_1[0x15] + 0x238,param_1[0x2d]);
        if (0.0 < fVar19 * fVar17) {
          local_190 = (undefined1 **)0x0;
          local_198 = 0;
          (**(code **)(*param_1 + 0x388))(param_1,param_2,fVar19 * fVar17,0);
        }
      }
      if (((*(byte *)(param_1 + 0x1d) >> 3 & 1) == 0) ||
         (cVar5 = (**(code **)(*param_1 + 0x348))(param_1,param_2), cVar5 == '\0')) {
        fVar18 = -fVar18;
        fVar24 = fVar18 * *(float *)(param_2 + 0x2c);
        fVar17 = 13000.0;
        fVar25 = fVar18 * *(float *)(param_2 + 0x30);
        fVar18 = fVar18 * *(float *)(param_2 + 0x34);
        fVar20 = fVar24 + *pfVar9;
        *pfVar9 = fVar20;
        *(float *)((longlong)param_1 + 0x2f4) = fVar25 + *(float *)((longlong)param_1 + 0x2f4);
        *(float *)(param_1 + 0x5f) = fVar18 + *(float *)(param_1 + 0x5f);
        fVar19 = 1.0 - *(float *)(param_1[0x15] + 0x168);
        fVar20 = fVar20 * fVar19;
        *(float *)((longlong)param_1 + 0x2f4) = fVar19 * *(float *)((longlong)param_1 + 0x2f4);
        *pfVar9 = fVar20;
        *(float *)(param_1 + 0x5f) = fVar19 * *(float *)(param_1 + 0x5f);
        fVar19 = *(float *)(param_1[0x15] + 0x16c);
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        fVar20 = fVar24 * fVar19 + fVar20;
        fVar24 = fVar25 * fVar19 + *(float *)((longlong)param_1 + 0x2f4);
        fVar18 = fVar18 * fVar19 + *(float *)(param_1 + 0x5f);
        *pfVar9 = fVar20;
        *(float *)((longlong)param_1 + 0x2f4) = fVar24;
        *(float *)(param_1 + 0x5f) = fVar18;
        lVar6 = param_1[0x15];
        if ((lVar6 != 0) && (fVar17 = *(float *)(lVar6 + 0x148), fVar17 <= 0.0)) {
          fVar17 = *(float *)(lVar6 + 0x144);
        }
        fVar17 = fVar17 * *(float *)(param_1 + 0x2f);
        fVar19 = fVar24 * fVar24 + fVar20 * fVar20 + fVar18 * fVar18;
        if (fVar17 < SQRT(fVar19)) {
          if (fVar19 == 1.0) {
            local_180 = *(longlong *)pfVar9;
            fVar25 = (float)((ulonglong)local_180 >> 0x20);
            local_178 = *(float *)(param_1 + 0x5f);
            fVar21 = (float)local_180;
          }
          else {
            fVar25 = DAT_1468b5d94;
            local_178 = DAT_1468b5d98;
            fVar21 = DAT_1468b5d90;
            if (1e-08 <= fVar19) {
              auVar23 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
              fVar22 = auVar23._0_4_;
              fVar22 = fVar22 + fVar22 * (0.5 - fVar19 * 0.5 * fVar22 * fVar22);
              fVar22 = fVar22 * (0.5 - fVar19 * 0.5 * fVar22 * fVar22) + fVar22;
              fVar21 = fVar22 * fVar20;
              fVar25 = fVar22 * fVar24;
              local_178 = fVar22 * fVar18;
            }
          }
          local_178 = local_178 * fVar17;
          *(ulonglong *)pfVar9 = CONCAT44(fVar25 * fVar17,fVar21 * fVar17);
          *(float *)(param_1 + 0x5f) = local_178;
        }
        plVar10 = (longlong *)FVector::Rotation(pfVar9,local_160);
        param_1[0x58] = *plVar10;
        *(int *)(param_1 + 0x59) = (int)plVar10[1];
      }
    }
    (**(code **)(*param_1 + 0x3b8))(param_1,param_2,&local_170);
    return;
  }
  local_180 = FUN_142d39be0(lVar6);
  cVar5 = (**(code **)(*param_1 + 0x288))(param_1,lVar6,lVar7);
  if (cVar5 != '\0') {
    FUN_14303dbf0(param_1,param_2);
  }
  lVar15 = 0;
  if (lVar6 == 0) {
LAB_1430442b3:
    if (!bVar16) {
      if (((((*(byte *)(param_2 + 8) & 1) == 0) && (lVar6 != 0)) &&
          ((*(byte *)(lVar6 + 0x400) & 4) != 0)) && ((*(byte *)((longlong)param_1 + 0xe9) & 1) != 0)
         ) {
        FUN_140729f20(local_128,param_2);
        FUN_14223c0b0(lVar6,(int)param_1[0x47],local_128);
        *(undefined8 *)((longlong)param_1 + 0x2b4) = local_114;
      }
      else {
        *(undefined8 *)((longlong)param_1 + 0x2b4) = *(undefined8 *)(param_2 + 0x14);
        local_10c = *(float *)(param_2 + 0x1c);
      }
      *(float *)((longlong)param_1 + 700) = local_10c;
      if (((*(float *)((longlong)param_1 + 0x2cc) == 0.0) && (*(float *)(param_1 + 0x5a) == 0.0)) &&
         (*(float *)((longlong)param_1 + 0x2d4) == 0.0)) {
        param_1[0x55] = *(longlong *)((longlong)param_1 + 0x2b4);
      }
      else {
        uVar8 = FVector::Rotation(param_1 + 0x5e,local_160);
        pfVar9 = (float *)FRotator::RotateVector
                                    (uVar8,&local_170,(float *)((longlong)param_1 + 0x2cc));
        local_10c = *(float *)((longlong)param_1 + 700) - pfVar9[2];
        param_1[0x55] =
             CONCAT44(*(float *)(param_1 + 0x57) - pfVar9[1],
                      *(float *)((longlong)param_1 + 0x2b4) - *pfVar9);
        local_168 = local_10c;
      }
      *(float *)(param_1 + 0x56) = local_10c;
    }
    uVar1 = *(uint *)((longlong)param_1 + 0xe4);
    if (((uVar1 & 4) == 0) &&
       ((lVar12 = param_1[0x15], (*(byte *)(lVar12 + 0x22c) & 2) == 0 || (param_1[0x28] != 0)))) {
      local_187[0] = ~(byte)(uVar1 >> 0xe) & 1;
      if (lVar6 != 0) {
        if (((bVar16) || ((uVar1 & 0x10) != 0)) ||
           (*(int *)(lVar12 + 0x1a0) <= *(int *)((longlong)param_1 + 0x35c))) {
          uVar14 = 0;
        }
        else {
          uVar14 = 1;
        }
        fVar18 = *(float *)(param_1 + 0x16);
        if ((uVar1 & 0x10) != 0) {
          fVar18 = fVar18 * *(float *)(lVar12 + 0x230);
        }
        fVar19 = (float)FUN_142c98860(lVar12 + 0x238,param_1[0x2d]);
        local_150 = local_187 + 1;
        local_140 = local_187;
        local_187[1] = 0;
        local_f8 = (float *)0x0;
        local_e8 = 0;
        uStack_148 = param_1;
        lStack_138 = param_2;
        puVar11 = (undefined8 *)FUN_140438ef0(0x28,&local_118);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &PTR_FUN_143ff7760;
          *(undefined4 *)(puVar11 + 1) = (undefined4)local_150;
          *(undefined4 *)((longlong)puVar11 + 0xc) = local_150._4_4_;
          *(undefined4 *)(puVar11 + 2) = (undefined4)uStack_148;
          *(undefined4 *)((longlong)puVar11 + 0x14) = uStack_148._4_4_;
          puVar11[3] = local_140;
          puVar11[4] = lStack_138;
        }
        local_128[0] = &LAB_14303f770;
        if (((*(byte *)((longlong)param_1 + 0xe4) & 0x10) == 0) || (0.0 < fVar18 * fVar19)) {
          local_190 = local_128;
          local_198 = uVar14;
          (**(code **)(*param_1 + 0x388))(param_1,param_2,fVar18 * fVar19,bVar16);
        }
        FWeakObjectPtr::operator=(param_1 + 0x4c,lVar6);
        if (local_e8 != 0) {
          pfVar9 = &local_118;
          if (local_f8 != (float *)0x0) {
            pfVar9 = local_f8;
          }
          if (pfVar9 != (float *)0x0) {
            (**(code **)(*(longlong *)pfVar9 + 0x10))(pfVar9,0);
          }
        }
        if (local_f8 != (float *)0x0) {
          FMemory::Free();
        }
      }
      lVar12 = lVar15;
      if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
        lVar12 = param_1[4];
      }
      if (*(char *)(lVar12 + 0x128) == '\x03') {
        (**(code **)(*param_1 + 0x3b0))(param_1,param_2,bVar16,local_187[0]);
        if ((((*(uint *)((longlong)param_1 + 0xe4) >> 0xe & 1) != 0) && (!bVar16)) &&
           ((*(uint *)((longlong)param_1 + 0xe4) & 0x10) == 0)) {
          (**(code **)(*param_1 + 0x308))(param_1,param_2);
        }
      }
    }
    if ((*(byte *)((longlong)param_1 + 0xe4) & 0x20) == 0) {
      lVar12 = lVar15;
      if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
        lVar12 = param_1[4];
      }
      if (*(char *)(lVar12 + 0x128) != '\x03') {
        lVar12 = FUN_142d29780(lVar6);
        if (!bVar16) {
          if (lVar12 == 0) {
            FUN_14305abd0(param_1,1);
          }
          goto LAB_1430447b2;
        }
        if ((lVar12 != 0) || ((*(uint *)((longlong)param_1 + 0xe4) >> 0xe & 1) != 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        (**(code **)(*param_1 + 0x3b0))(param_1,param_2,1,uVar8);
      }
    }
  }
  else {
    cVar5 = FUN_140f12a40(lVar6,param_1 + 0x4c);
    if ((cVar5 != '\0') &&
       ((local_180 == 0 || (cVar5 = FUN_140f12a40(local_180,param_1 + 0x4c), cVar5 != '\0'))))
    goto LAB_1430442b3;
  }
  if (bVar16) {
    *(int *)(param_1 + 0x6c) = (int)param_1[0x6c] + 1;
    if (lVar6 != 0) {
      uVar2 = *(undefined4 *)(lVar6 + 0xc);
      plVar10 = param_1 + 0x4d;
      iVar3 = (int)param_1[0x50];
      *(int *)(param_1 + 0x50) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x284) < iVar3 + 1) {
        TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (plVar10,iVar3);
      }
      plVar13 = (longlong *)param_1[0x4f];
      if ((longlong *)param_1[0x4f] == (longlong *)0x0) {
        plVar13 = plVar10;
      }
      *(undefined4 *)((longlong)plVar13 + (longlong)iVar3 * 4) = uVar2;
      lVar6 = FUN_142d39be0(lVar6);
      if (lVar6 != 0) {
        iVar3 = (int)param_1[0x50];
        uVar2 = *(undefined4 *)(lVar6 + 0xc);
        *(int *)(param_1 + 0x50) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0x284) < iVar3 + 1) {
          TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (plVar10,iVar3);
        }
        plVar13 = (longlong *)param_1[0x4f];
        if ((longlong *)param_1[0x4f] == (longlong *)0x0) {
          plVar13 = plVar10;
        }
        *(undefined4 *)((longlong)plVar13 + (longlong)iVar3 * 4) = uVar2;
      }
    }
    if (lVar7 != 0) {
      uVar2 = *(undefined4 *)(lVar7 + 0xc);
      iVar3 = (int)param_1[0x54];
      *(int *)(param_1 + 0x54) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x2a4) < iVar3 + 1) {
        TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (param_1 + 0x51,iVar3);
      }
      plVar10 = (longlong *)param_1[0x53];
      if ((longlong *)param_1[0x53] == (longlong *)0x0) {
        plVar10 = param_1 + 0x51;
      }
      *(undefined4 *)((longlong)plVar10 + (longlong)iVar3 * 4) = uVar2;
    }
    if ((((((byte)*(ushort *)(param_1 + 0x1d) >> 2 & 1) != 0) && ((int)param_1[0x6c] == 1)) &&
        ((int)param_1[0x6b] == 0)) && (*(int *)((longlong)param_1 + 0x35c) == 0)) {
      fVar25 = *(float *)((longlong)param_1 + 0x124) - *(float *)(param_1 + 0x23);
      fVar24 = *(float *)(param_1 + 0x25) - *(float *)((longlong)param_1 + 0x11c);
      fVar21 = *(float *)((longlong)param_1 + 300) - *(float *)(param_1 + 0x24);
      fVar22 = SQRT(*(float *)(param_1 + 0x5e) * *(float *)(param_1 + 0x5e) +
                    *(float *)((longlong)param_1 + 0x2f4) * *(float *)((longlong)param_1 + 0x2f4) +
                    *(float *)(param_1 + 0x5f) * *(float *)(param_1 + 0x5f));
      fVar20 = fVar24 * fVar24 + fVar25 * fVar25 + fVar21 * fVar21;
      fVar18 = fVar24;
      fVar19 = fVar25;
      fVar17 = fVar21;
      if ((fVar20 != 1.0) &&
         (fVar18 = DAT_1468b5d94, fVar19 = DAT_1468b5d90, fVar17 = DAT_1468b5d98, 1e-08 <= fVar20))
      {
        auVar23 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
        fVar17 = auVar23._0_4_;
        fVar17 = fVar17 + fVar17 * (0.5 - fVar20 * 0.5 * fVar17 * fVar17);
        fVar17 = fVar17 + fVar17 * (0.5 - fVar20 * 0.5 * fVar17 * fVar17);
        fVar18 = fVar17 * fVar24;
        fVar19 = fVar17 * fVar25;
        fVar17 = fVar17 * fVar21;
      }
      param_1[0x5e] = CONCAT44(fVar18 * fVar22,fVar22 * fVar19);
      *(float *)(param_1 + 0x5f) = fVar22 * fVar17;
    }
    *(ushort *)(param_1 + 0x1d) = *(ushort *)(param_1 + 0x1d) | 0x40;
    return;
  }
LAB_1430447b2:
  uVar1 = *(uint *)((longlong)param_1 + 0xe4);
  if (((uVar1 & 0x10) == 0) && ((uVar1 & 1) != 0)) {
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      lVar15 = param_1[4];
    }
    if ((*(char *)(lVar15 + 0x128) == '\x03') ||
       (*(uint *)((longlong)param_1 + 0xe4) = uVar1 | 0x2000, (uVar1 & 0x220) != 0)) {
      (**(code **)(*param_1 + 0x2a0))(param_1,1);
    }
  }
  return;
}



// FUNCTION 143044900 FUN_143044900 body=701 status=ok
// SIG undefined FUN_143044900(void)

void FUN_143044900(longlong *param_1,char param_2)

{
  byte *_Dst;
  longlong *plVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  byte local_d8 [12];
  undefined4 local_cc;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  _Dst = (byte *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x484);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x48c);
  fVar2 = *(float *)(lVar6 + 0x790);
  lVar6 = param_1[0x92];
  lVar5 = param_1[0x93];
  _guard_xfg_dispatch_icall_nop(_Dst,0,0x90);
  *(undefined8 *)((longlong)param_1 + 0x484) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x48c) = uVar4;
  plVar1 = param_1 + 0x9a;
  param_1[0x92] = lVar6;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0x3f800000;
  *(int *)(param_1 + 0x93) = (int)lVar5;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x4dc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1,0);
  }
  (**(code **)(*param_1 + 800))(param_1);
  if ((int)param_1[0x9b] < 1) {
    _guard_xfg_dispatch_icall_nop(local_d8,0,0x90);
    pbVar7 = local_d8;
    local_cc = 0x3f800000;
  }
  else {
    pbVar7 = (byte *)FUN_140729f20(local_d8,*plVar1 + -0x90 + (longlong)(int)param_1[0x9b] * 0x90);
  }
  *_Dst = *_Dst ^ (*pbVar7 ^ *_Dst) & 1;
  *_Dst = *_Dst ^ (*_Dst ^ *pbVar7) & 2;
  *(undefined4 *)((longlong)param_1 + 0x444) = *(undefined4 *)(pbVar7 + 4);
  *(uint *)(param_1 + 0x89) =
       *(uint *)(param_1 + 0x89) ^ (*(uint *)(pbVar7 + 8) ^ *(uint *)(param_1 + 0x89)) & 1;
  *(undefined4 *)((longlong)param_1 + 0x44c) = *(undefined4 *)(pbVar7 + 0xc);
  *(undefined4 *)(param_1 + 0x8a) = *(undefined4 *)(pbVar7 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x454) = *(undefined8 *)(pbVar7 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x45c) = *(undefined4 *)(pbVar7 + 0x1c);
  param_1[0x8c] = *(longlong *)(pbVar7 + 0x20);
  *(undefined4 *)(param_1 + 0x8d) = *(undefined4 *)(pbVar7 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x46c) = *(undefined8 *)(pbVar7 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x474) = *(undefined4 *)(pbVar7 + 0x34);
  param_1[0x8f] = *(longlong *)(pbVar7 + 0x38);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(pbVar7 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x484) = *(undefined8 *)(pbVar7 + 0x44);
  *(undefined4 *)((longlong)param_1 + 0x48c) = *(undefined4 *)(pbVar7 + 0x4c);
  param_1[0x92] = *(longlong *)(pbVar7 + 0x50);
  *(undefined4 *)(param_1 + 0x93) = *(undefined4 *)(pbVar7 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x49c) = *(undefined4 *)(pbVar7 + 0x5c);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(pbVar7 + 0x60);
  *(undefined4 *)((longlong)param_1 + 0x4a4) = *(undefined4 *)(pbVar7 + 100);
  *(undefined4 *)(param_1 + 0x95) = *(undefined4 *)(pbVar7 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x4ac) = *(undefined4 *)(pbVar7 + 0x6c);
  *(undefined4 *)(param_1 + 0x96) = *(undefined4 *)(pbVar7 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x4b4) = *(undefined4 *)(pbVar7 + 0x74);
  *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)(pbVar7 + 0x78);
  param_1[0x98] = *(longlong *)(pbVar7 + 0x80);
  param_1[0x99] = *(longlong *)(pbVar7 + 0x88);
  FUN_140729f20(param_1 + 0x65,_Dst);
  uVar8 = 0;
  if ((*(byte *)(param_1 + 0x65) & 1) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x1de) >> 1 & 1) != 0) {
      lVar6 = FWeakObjectPtr::Get((longlong)param_1 + 0x394);
      uVar8 = 0;
      if (lVar6 == param_1[0x23]) goto LAB_143044b41;
    }
    uVar8 = 1;
  }
LAB_143044b41:
  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) & 0xfffffffe;
  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | uVar8;
  if (((param_2 == '\0') && ((*(byte *)(param_1[0x16] + 0xd0) & 1) != 0)) &&
     (*(float *)(param_1 + 0x19) + *(float *)((longlong)param_1 + 0x20c) <= fVar2)) {
    (**(code **)(*param_1 + 0x328))(param_1,plVar1);
    *(float *)((longlong)param_1 + 0x20c) = fVar2;
  }
  return;
}



// FUNCTION 143044bc0 FUN_143044bc0 body=1515 status=ok
// SIG undefined FUN_143044bc0(void)

void FUN_143044bc0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float *pfVar9;
  byte *pbVar10;
  void *_Src;
  longlong *plVar11;
  uint uVar12;
  byte *pbVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_90;
  byte *local_88;
  ulonglong local_80;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  fVar17 = *(float *)(lVar6 + 0x790);
  bVar14 = *(float *)(param_1[0x15] + 400) + *(float *)(param_1 + 0x49) <= fVar17;
  iVar5 = 0;
  uVar12 = 0;
  if ((bVar14) || ((*(uint *)((longlong)param_1 + 0xe4) >> 0xc & 1) != 0)) {
    uVar12 = 0x20000;
  }
  plVar11 = param_1 + 0x7e;
  *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xfffdffff | uVar12;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x3fc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
              (plVar11,0);
  }
  plVar1 = param_1 + 0x80;
  *(undefined4 *)(param_1 + 0x81) = 0;
  if ((*(int *)((longlong)param_1 + 0x40c) < 0) && (*(int *)((longlong)param_1 + 0x40c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1,0);
  }
  if ((*(uint *)((longlong)param_1 + 0xe4) & 0x20000) != 0) {
    local_b8 = *(undefined8 *)((longlong)param_1 + 0x254);
    local_b0 = *(float *)((longlong)param_1 + 0x25c);
    local_c8 = *(undefined8 *)((longlong)param_1 + 0x2b4);
    local_c0 = *(float *)((longlong)param_1 + 700);
    *(float *)(param_1 + 0x49) = fVar17;
    (**(code **)(*param_1 + 0x2e8))
              (param_1,plVar11,&local_b8,&local_c8,*(undefined4 *)(param_1[0x15] + 0x194),
               *(undefined1 *)(param_1[0x15] + 0x18c),1,0);
    lVar6 = param_1[0x15];
    local_88 = (byte *)0x0;
    local_80 = 0;
    if (0.0 < *(float *)(lVar6 + 0x1a4)) {
      cVar4 = *(char *)(lVar6 + 0x1a9);
      local_a0 = local_c0;
      fVar16 = 1.0;
      local_a8 = local_c8;
      fVar17 = 1.0;
      if (0 < (int)param_1[0x7f]) {
        pbVar10 = (byte *)*plVar11;
        do {
          if ((*pbVar10 & 1) != 0) {
            fVar17 = *(float *)(pbVar10 + 0xc);
            fVar16 = 1.0;
            local_a0 = (local_c0 - local_b0) * fVar17 + local_b0;
            local_a8 = CONCAT44((local_c8._4_4_ - local_b8._4_4_) * fVar17 + local_b8._4_4_,
                                ((float)local_c8 - (float)local_b8) * fVar17 + (float)local_b8);
            local_90 = local_a0;
            if (0.0 < *(float *)(pbVar10 + 0xc)) {
              fVar16 = 1.0 / *(float *)(pbVar10 + 0xc);
            }
            break;
          }
          iVar5 = iVar5 + 1;
          pbVar10 = pbVar10 + 0x90;
        } while (iVar5 < (int)param_1[0x7f]);
      }
      cVar3 = (**(code **)(*param_1 + 0x2e8))
                        (param_1,&local_88,&local_b8,&local_a8,*(float *)(lVar6 + 0x1a4),
                         *(undefined1 *)(lVar6 + 0x1a8),1,0);
      if (cVar3 != '\0') {
        pbVar10 = local_88 + (longlong)(int)local_80 * 0x90;
        if (local_88 != pbVar10) {
          pbVar13 = local_88;
          do {
            iVar5 = 0;
            fVar15 = (1.0 / fVar16) * *(float *)(pbVar13 + 0xc);
            if (1.0 <= fVar15) {
              fVar15 = 1.0;
            }
            *(float *)(pbVar13 + 0xc) = fVar15;
            if (((*pbVar13 & 1) != 0) && (fVar15 <= fVar17)) {
              uVar7 = FWeakObjectPtr::Get(pbVar13 + 0x74);
              uVar8 = FWeakObjectPtr::Get(pbVar13 + 0x6c);
              cVar3 = (**(code **)(*param_1 + 0x3a0))(param_1,uVar8,uVar7);
              if (cVar3 != '\0') {
                if (cVar4 < '\0') {
                  iVar5 = (int)param_1[0x81];
                  *(int *)(param_1 + 0x81) = iVar5 + 1;
                  if (*(int *)((longlong)param_1 + 0x40c) < iVar5 + 1) {
                    TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                              (plVar1,iVar5);
                  }
                  lVar6 = (longlong)iVar5 * 0x90 + *plVar1;
                }
                else {
                  if (0 < (int)param_1[0x7f]) {
                    pfVar9 = (float *)(*plVar11 + 0xc);
                    do {
                      if (*(float *)(pbVar13 + 0xc) < *pfVar9 ||
                          *(float *)(pbVar13 + 0xc) == *pfVar9) {
                        iVar2 = (int)param_1[0x7f];
                        *(int *)(param_1 + 0x7f) = iVar2 + 1;
                        if (*(int *)((longlong)param_1 + 0x3fc) < iVar2 + 1) {
                          TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::
                          ResizeGrow(plVar11,iVar2);
                        }
                        _Src = (void *)(*plVar11 + (longlong)iVar5 * 0x90);
                        _guard_xfg_dispatch_icall_nop
                                  ((void *)((longlong)_Src + 0x90),_Src,
                                   (longlong)(iVar2 - iVar5) * 0x90);
                        FUN_140729f20(*plVar11 + (longlong)iVar5 * 0x90,pbVar13);
                        if (iVar5 != -1) goto LAB_143044fc3;
                        break;
                      }
                      iVar5 = iVar5 + 1;
                      pfVar9 = pfVar9 + 0x24;
                    } while (iVar5 < (int)param_1[0x7f]);
                  }
                  iVar5 = (int)param_1[0x7f];
                  *(int *)(param_1 + 0x7f) = iVar5 + 1;
                  if (*(int *)((longlong)param_1 + 0x3fc) < iVar5 + 1) {
                    TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                              (plVar11,iVar5);
                  }
                  lVar6 = (longlong)iVar5 * 0x90 + *plVar11;
                }
                FUN_140729f20(lVar6,pbVar13);
              }
            }
LAB_143044fc3:
            pbVar13 = pbVar13 + 0x90;
          } while (pbVar13 != pbVar10);
        }
      }
    }
    if ((bVar14) && ((*(uint *)((longlong)param_1 + 0xe4) & 0x1000) == 0)) {
      pbVar10 = (byte *)*plVar11;
      pbVar13 = pbVar10 + (longlong)(int)param_1[0x7f] * 0x90;
      for (; pbVar10 != pbVar13; pbVar10 = pbVar10 + 0x90) {
        if ((*pbVar10 & 1) != 0) goto LAB_1430450fb;
      }
      bVar14 = (longlong)local_80 < 0;
      lVar6 = param_1[0x15];
      fVar17 = *(float *)(lVar6 + 400);
      local_80 = local_80 & 0xffffffff00000000;
      local_a0 = fVar17 * *(float *)(param_1 + 0x5f) + local_c0;
      local_a8 = CONCAT44(fVar17 * *(float *)((longlong)param_1 + 0x2f4) + local_c8._4_4_,
                          fVar17 * *(float *)(param_1 + 0x5e) + (float)local_c8);
      if (bVar14) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
                  (&local_88,0);
        lVar6 = param_1[0x15];
      }
      cVar4 = (**(code **)(*param_1 + 0x2e8))
                        (param_1,&local_88,&local_c8,&local_a8,*(undefined4 *)(lVar6 + 0x194),
                         *(undefined1 *)(lVar6 + 0x18c),1,1);
      if (cVar4 != '\0') {
        *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) | 0x1000;
      }
    }
LAB_1430450fb:
    if (local_88 != (byte *)0x0) {
      FMemory::Free(local_88);
    }
  }
  if (((*(uint *)((longlong)param_1 + 0xe4) & 0x80000) == 0) && (param_1[0x61] != 0)) {
    if ((int)param_1[0x7f] < 1) {
      plVar11 = param_1 + 0x55;
    }
    else {
      plVar11 = (longlong *)(*plVar11 + 0x20 + (longlong)((int)param_1[0x7f] + -1) * 0x90);
    }
    local_a8 = *plVar11;
    local_a0 = (float)plVar11[1];
    cVar4 = FUN_14305d9a0(param_1,&local_a8);
    *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xffefffff;
    uVar12 = 0;
    if (cVar4 == '\0') {
      uVar12 = 0x100000;
    }
    *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) | uVar12;
  }
  return;
}



// FUNCTION 1430451b0 FUN_1430451b0 body=1028 status=ok
// SIG undefined FUN_1430451b0(void)

void FUN_1430451b0(longlong *param_1,byte *param_2)

{
  float fVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  ulonglong in_stack_fffffffffffffed8;
  ulonglong in_stack_fffffffffffffee0;
  undefined8 local_118;
  float local_110;
  float local_100;
  undefined1 local_f8 [12];
  undefined4 local_ec;
  longlong local_e4;
  undefined4 local_dc;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  float local_c4;
  undefined8 local_c0;
  float local_b8;
  undefined1 local_8c [8];
  undefined1 local_84 [12];
  longlong local_78;
  undefined1 local_68 [80];
  
  if (param_1[0x15] == 0) {
    return;
  }
  *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) | 4;
  lVar4 = FWeakObjectPtr::Get(param_2 + 0x6c);
  lVar8 = 0;
  local_118 = *(undefined8 *)(param_2 + 0x14);
  local_110 = *(float *)(param_2 + 0x1c);
  lVar7 = lVar8;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar7 = param_1[4];
  }
  if (*(char *)(lVar7 + 0x128) == '\x03') {
    if ((*param_2 & 1) != 0) {
      if (((*(float *)(param_2 + 0x38) == 0.0) && (*(float *)(param_2 + 0x3c) == 0.0)) &&
         (*(float *)(param_2 + 0x40) == 0.0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) {
        fVar1 = *(float *)(param_1[0x15] + 0x228);
        local_118._4_4_ = (float)((ulonglong)local_118 >> 0x20);
        local_110 = local_110 + fVar1 * *(float *)(param_2 + 0x40);
        local_118 = CONCAT44(local_118._4_4_ + fVar1 * *(float *)(param_2 + 0x3c),
                             (float)local_118 + *(float *)(param_2 + 0x38) * fVar1);
      }
    }
    *(byte *)(param_1 + 0x40) = *param_2 & 1;
    *(undefined8 *)((longlong)param_1 + 0x204) = local_118;
    *(float *)((longlong)param_1 + 0x20c) = local_110;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  if ((((*(byte *)((longlong)param_1 + 0xe4) & 0x10) == 0) || ((*param_2 & 1) != 0)) ||
     ((lVar7 = param_1[0x38], lVar7 == 0 || ((*(byte *)(lVar7 + 0x91) & 0x40) == 0))))
  goto LAB_1430454bc;
  _guard_xfg_dispatch_icall_nop(local_f8,0,0x90);
  local_ec = 0x3f800000;
  FWeakObjectPtr::operator=(local_8c,lVar7);
  lVar4 = param_1[0x39];
  if (lVar4 == 0) {
LAB_143045397:
    lVar4 = lVar8;
  }
  else {
    lVar5 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_143045397;
  }
  FWeakObjectPtr::operator=(local_84,lVar4);
  local_78 = param_1[0x3a];
  local_e4 = param_1[0x55];
  local_dc = (undefined4)param_1[0x56];
  local_d8 = local_e4;
  local_d0 = local_dc;
  pfVar6 = (float *)FUN_14304e080(param_1 + 0x38,local_68);
  in_stack_fffffffffffffee0 = 0;
  fVar1 = pfVar6[2];
  fVar10 = -pfVar6[1];
  fVar9 = fVar1 + fVar1;
  fVar10 = fVar10 + fVar10;
  local_100 = -(*pfVar6 * fVar9 + pfVar6[3] * fVar10);
  local_cc = CONCAT44(*pfVar6 * fVar10 - pfVar6[3] * fVar9,
                      (fVar1 * fVar9 - pfVar6[1] * fVar10) - 1.0);
  local_c4 = local_100;
  local_c0 = local_cc;
  local_b8 = local_100;
  (**(code **)(*param_1 + 0x388))
            (param_1,local_f8,(int)param_1[0x16],0,in_stack_fffffffffffffed8 & 0xffffffffffffff00,0)
  ;
  lVar4 = lVar7;
LAB_1430454bc:
  (**(code **)(*param_1 + 0x398))(param_1,&local_118,lVar4,param_2);
  lVar7 = param_1[0x15];
  if (((*(byte *)(lVar7 + 0xd8) & 1) != 0) &&
     ((lVar4 = param_1[0x2e], lVar4 != 0 ||
      ((lVar7 != 0 && (lVar4 = *(longlong *)(lVar7 + 0xd0), lVar4 != 0)))))) {
    lVar7 = param_1[0x28];
    if ((param_1[0x28] == 0) && (lVar7 = lVar8, (*(uint *)(param_1 + 1) >> 4 & 1) == 0)) {
      lVar7 = param_1[4];
    }
    FUN_142d68ea0(lVar4,lVar7,param_2,0,&DAT_1466ad4f0,
                  in_stack_fffffffffffffee0 & 0xffffffffffffff00);
    lVar7 = param_1[0x15];
  }
  uVar2 = *(undefined8 *)(lVar7 + 800);
  *(longlong **)(lVar7 + 800) = param_1;
  FUN_1430af370(param_1[0x15],param_1);
  *(undefined8 *)(param_1[0x15] + 800) = uVar2;
  if ((*(byte *)((longlong)param_1 + 0xe4) & 1) != 0) {
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      lVar8 = param_1[4];
    }
    if (*(char *)(lVar8 + 0x128) == '\x03') {
      (**(code **)(*param_1 + 0x2a0))(param_1,1);
    }
  }
  return;
}



// FUNCTION 1430455c0 FUN_1430455c0 body=1943 status=ok
// SIG undefined FUN_1430455c0(void)

void FUN_1430455c0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  longlong *plVar9;
  float *pfVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float local_108;
  float fStack_104;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 local_e8 [12];
  float local_dc [3];
  char local_d0 [4];
  longlong local_cc;
  undefined4 local_c4;
  longlong local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  float local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  
  fVar16 = (float)param_2;
  lVar5 = (**(code **)(*param_1 + 0x148))();
  pfVar8 = (float *)((longlong)param_1 + 0x2cc);
  lVar11 = param_1[0x15];
  fVar15 = *(float *)(lVar5 + 0x790);
  *(ulonglong *)pfVar8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(float *)((longlong)param_1 + 0x2d4) = DAT_1468b5d98;
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  cVar2 = '\0';
  if (0 < *(int *)(lVar11 + 0x178)) {
    uVar13 = 0;
    local_98 = fVar15 - *(float *)((longlong)param_1 + 0x224);
    local_cc = param_1[0x55];
    local_c0 = param_1[0x5e];
    local_c4 = (undefined4)param_1[0x56];
    local_b8 = (undefined4)param_1[0x5f];
    local_ac = 0.0;
    local_d0[0] = '\0';
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    plVar9 = *(longlong **)(lVar11 + 0x170);
    uVar12 = (longlong)*(int *)(lVar11 + 0x178) & 0x1fffffffffffffff;
    if (plVar9 + *(int *)(lVar11 + 0x178) < plVar9) {
      uVar12 = uVar13;
    }
    uVar14 = uVar13;
    local_9c = fVar16;
    if (uVar12 != 0) {
      do {
        plVar1 = (longlong *)*plVar9;
        if ((plVar1 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,param_1), cVar2 == '\0')) {
          iVar3 = (**(code **)(*plVar1 + 0x2a0))(plVar1);
          uVar4 = iVar3 + 3U & 0xfffffffc;
          if (uVar4 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = (longlong)(int)uVar14 + param_1[0x6d];
          }
          uVar14 = (ulonglong)((int)uVar14 + uVar4);
          (**(code **)(*plVar1 + 0x298))(plVar1,param_1,local_d0,lVar11);
        }
        plVar9 = plVar9 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar12);
    }
    *(undefined8 *)pfVar8 = local_a8;
    param_1[0x55] = local_cc;
    param_1[0x5e] = local_c0;
    *(undefined4 *)((longlong)param_1 + 0x2d4) = local_a0;
    *(undefined4 *)(param_1 + 0x56) = local_c4;
    *(undefined4 *)(param_1 + 0x5f) = local_b8;
    fVar21 = local_b4._4_4_;
    fVar22 = (float)local_b4;
    fVar23 = local_ac;
    cVar2 = local_d0[0];
  }
  if ((*(byte *)(param_1 + 0x1d) >> 4 & 1) != 0) {
    (**(code **)(*param_1 + 0x340))(param_1,param_2);
  }
  if (cVar2 == '\0') {
    if (*(float *)((longlong)param_1 + 0x2fc) != 0.0) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      fVar15 = (float)FUN_1428cc5b0(uVar6);
      fVar23 = fVar23 + fVar15 * *(float *)((longlong)param_1 + 0x2fc);
    }
    fVar15 = *(float *)(param_1[0x15] + 0x158);
    if (0.0 < fVar15) {
      fVar17 = *(float *)(param_1 + 0x5e) * *(float *)(param_1 + 0x5e) +
               *(float *)((longlong)param_1 + 0x2f4) * *(float *)((longlong)param_1 + 0x2f4) +
               *(float *)(param_1 + 0x5f) * *(float *)(param_1 + 0x5f);
      if (fVar17 == 1.0) {
        local_108 = (float)param_1[0x5e];
        fVar19 = *(float *)(param_1 + 0x5f);
        fVar18 = (float)((ulonglong)param_1[0x5e] >> 0x20);
      }
      else {
        local_108 = DAT_1468b5d90;
        fVar19 = DAT_1468b5d98;
        fVar18 = DAT_1468b5d94;
        if (1e-08 <= fVar17) {
          auVar20 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
          fVar18 = auVar20._0_4_;
          fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
          fVar18 = fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18) + fVar18;
          local_108 = fVar18 * *(float *)(param_1 + 0x5e);
          fVar19 = fVar18 * *(float *)(param_1 + 0x5f);
          fVar18 = fVar18 * *(float *)((longlong)param_1 + 0x2f4);
        }
      }
      fVar22 = fVar22 + local_108 * fVar15;
      fVar21 = fVar21 + fVar18 * fVar15;
      fVar23 = fVar23 + fVar19 * fVar15;
    }
    fVar21 = fVar21 * fVar16 + *(float *)((longlong)param_1 + 0x2f4);
    fVar23 = fVar23 * fVar16 + *(float *)(param_1 + 0x5f);
    fVar17 = fVar22 * fVar16 + *(float *)(param_1 + 0x5e);
    *(float *)((longlong)param_1 + 0x2f4) = fVar21;
    *(float *)(param_1 + 0x5f) = fVar23;
    *(float *)(param_1 + 0x5e) = fVar17;
    fVar15 = *(float *)(param_1[0x15] + 0x160);
    fVar22 = *(float *)((longlong)param_1 + 0x2f4) - fVar21 * fVar15 * fVar16;
    fVar23 = *(float *)(param_1 + 0x5f) - fVar23 * fVar15 * fVar16;
    fVar21 = 13000.0;
    *(float *)((longlong)param_1 + 0x2f4) = fVar22;
    fVar17 = fVar17 - fVar17 * fVar15 * fVar16;
    *(float *)(param_1 + 0x5f) = fVar23;
    *(float *)(param_1 + 0x5e) = fVar17;
    lVar11 = param_1[0x15];
    if ((lVar11 != 0) && (fVar21 = *(float *)(lVar11 + 0x148), fVar21 <= 0.0)) {
      fVar21 = *(float *)(lVar11 + 0x144);
    }
    fVar21 = fVar21 * *(float *)(param_1 + 0x2f);
    fVar15 = fVar17 * fVar17 + fVar22 * fVar22 + fVar23 * fVar23;
    if (fVar21 < SQRT(fVar15)) {
      if (fVar15 == 1.0) {
        local_108 = (float)param_1[0x5e];
        local_f0 = *(float *)(param_1 + 0x5f);
        fVar19 = (float)((ulonglong)param_1[0x5e] >> 0x20);
      }
      else {
        local_f0 = DAT_1468b5d98;
        local_108 = DAT_1468b5d90;
        fVar19 = DAT_1468b5d94;
        if (1e-08 <= fVar15) {
          auVar20 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
          fVar19 = auVar20._0_4_;
          fVar19 = fVar19 + fVar19 * (0.5 - fVar15 * 0.5 * fVar19 * fVar19);
          fVar19 = fVar19 + fVar19 * (0.5 - fVar15 * 0.5 * fVar19 * fVar19);
          local_108 = fVar17 * fVar19;
          local_f0 = fVar23 * fVar19;
          fVar19 = fVar22 * fVar19;
        }
      }
      local_f0 = local_f0 * fVar21;
      param_1[0x5e] = CONCAT44(fVar19 * fVar21,local_108 * fVar21);
      *(float *)(param_1 + 0x5f) = local_f0;
      fVar22 = *(float *)((longlong)param_1 + 0x2f4);
      fVar23 = *(float *)(param_1 + 0x5f);
    }
    *(float *)((longlong)param_1 + 0x2ac) = fVar22 * fVar16 + *(float *)((longlong)param_1 + 0x2ac);
    *(float *)(param_1 + 0x55) = fVar16 * *(float *)(param_1 + 0x5e) + *(float *)(param_1 + 0x55);
    *(float *)(param_1 + 0x56) = fVar23 * fVar16 + *(float *)(param_1 + 0x56);
  }
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x2b4);
  fVar15 = *(float *)((longlong)param_1 + 700);
  *(longlong *)((longlong)param_1 + 0x2b4) = param_1[0x55];
  *(int *)((longlong)param_1 + 700) = (int)param_1[0x56];
  if (((*pfVar8 == 0.0) && (*(float *)(param_1 + 0x5a) == 0.0)) &&
     (*(float *)((longlong)param_1 + 0x2d4) == 0.0)) {
    pfVar8 = (float *)(param_1 + 0x5e);
    pfVar10 = &local_f8;
  }
  else {
    uVar7 = FVector::Rotation(param_1 + 0x5e,local_e8);
    pfVar8 = (float *)FRotator::RotateVector(uVar7,local_dc,pfVar8);
    local_f8 = *(float *)((longlong)param_1 + 0x2b4) + *pfVar8;
    *(float *)((longlong)param_1 + 0x2b4) = local_f8;
    fVar21 = pfVar8[1];
    fVar22 = *(float *)(param_1 + 0x57);
    local_108 = (float)uVar6;
    local_f8 = local_f8 - local_108;
    *(float *)(param_1 + 0x57) = fVar21 + fVar22;
    local_f0 = pfVar8[2] + *(float *)((longlong)param_1 + 700);
    fStack_104 = (float)((ulonglong)uVar6 >> 0x20);
    local_f4 = (fVar21 + fVar22) - fStack_104;
    *(float *)((longlong)param_1 + 700) = local_f0;
    local_f0 = local_f0 - fVar15;
    if (((ABS(local_f8) <= 0.0001) && (ABS(local_f4) <= 0.0001)) && (ABS(local_f0) <= 0.0001)) {
      return;
    }
    pfVar10 = local_dc;
    pfVar8 = &local_f8;
  }
  plVar9 = (longlong *)FVector::Rotation(pfVar8,pfVar10);
  param_1[0x58] = *plVar9;
  *(int *)(param_1 + 0x59) = (int)plVar9[1];
  return;
}



// FUNCTION 143045d60 FUN_143045d60 body=541 status=ok
// SIG undefined FUN_143045d60(void)

void FUN_143045d60(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  float *pfVar9;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [8];
  float local_30;
  undefined1 local_2c [36];
  
  if ((0.0 < *(float *)(param_1 + 0x17c)) &&
     (plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x74), plVar5 != (longlong *)0x0)) {
    lVar6 = FWeakObjectPtr::Get(param_2 + 0x6c);
    uVar2 = *(undefined4 *)((longlong)plVar5 + 0xc);
    lVar7 = FUN_143036a00();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if ((((char)plVar5[0x172] != '\0') || ((lVar6 != 0 && (*(char *)(lVar6 + 0x128) == '\x03'))))
         && (cVar4 = FUN_14304e940(param_1,uVar2), cVar4 == '\0')) {
        lVar6 = *plVar5;
        uVar8 = FRotator::Vector(param_1 + 0x28c,local_38);
        (**(code **)(lVar6 + 0xa58))
                  (plVar5,*(undefined4 *)(param_1 + 600),param_2 + 0x20,uVar8,
                   *(undefined4 *)(param_1 + 0x1a4),1);
        FUN_1430585c0(param_1,uVar2);
      }
    }
    else {
      cVar4 = (**(code **)(*plVar5 + 0x400))(plVar5,*(undefined8 *)(param_2 + 0x80));
      if (cVar4 == '\0') {
        lVar6 = FUN_142e71b90();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          return;
        }
      }
      local_58 = *(undefined8 *)(param_2 + 0x20);
      local_50 = *(undefined4 *)(param_2 + 0x28);
      fVar1 = *(float *)(param_1 + 0x1a4);
      pfVar9 = (float *)FRotator::Vector(param_1 + 0x28c,local_2c);
      local_40 = fVar1 * pfVar9[2];
      local_48 = CONCAT44(fVar1 * pfVar9[1],fVar1 * *pfVar9);
      local_30 = local_40;
      (**(code **)(*plVar5 + 0x5f0))(plVar5,&local_48,&local_58,*(undefined8 *)(param_2 + 0x80));
      FUN_1430585c0(param_1,uVar2);
    }
  }
  return;
}



// FUNCTION 143045f80 FUN_143045f80 body=475 status=ok
// SIG undefined FUN_143045f80(void)

void FUN_143045f80(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  float local_20;
  float local_10;
  
  plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x74);
  lVar7 = FWeakObjectPtr::Get(param_2 + 0x6c);
  if (plVar6 != (longlong *)0x0) {
    lVar8 = FUN_143036a00();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (((char)plVar6[0x172] == '\0') &&
         (((lVar7 == 0 || (*(char *)(lVar7 + 0x128) != '\x03')) && ((char)plVar6[0x16d] == '\0'))))
      {
        return;
      }
      (**(code **)(*plVar6 + 0xa58))
                (plVar6,*(undefined4 *)(param_1 + 0xb0),param_2 + 0x20,param_3,
                 *(undefined4 *)(param_1 + 200),1);
    }
    else {
      cVar5 = (**(code **)(*plVar6 + 0x400))(plVar6,*(undefined8 *)(param_2 + 0x80));
      if (cVar5 == '\0') {
        lVar7 = FUN_142e71b90();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) {
          return;
        }
      }
      local_30 = *(undefined4 *)(param_2 + 0x28);
      local_38 = *(undefined8 *)(param_2 + 0x20);
      fVar1 = *(float *)(param_1 + 200);
      local_20 = fVar1 * param_3[2];
      local_28 = CONCAT44(fVar1 * param_3[1],fVar1 * *param_3);
      local_10 = local_20;
      (**(code **)(*plVar6 + 0x5f0))(plVar6,&local_28,&local_38,*(undefined8 *)(param_2 + 0x80));
    }
    uVar2 = *(undefined4 *)((longlong)plVar6 + 0xc);
    iVar3 = *(int *)(param_1 + 0x2a0);
    *(int *)(param_1 + 0x2a0) = iVar3 + 1;
    if (*(int *)(param_1 + 0x2a4) < iVar3 + 1) {
      TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_1 + 0x288,iVar3);
    }
    lVar7 = *(longlong *)(param_1 + 0x298);
    if (*(longlong *)(param_1 + 0x298) == 0) {
      lVar7 = param_1 + 0x288;
    }
    *(undefined4 *)(lVar7 + (longlong)iVar3 * 4) = uVar2;
  }
  return;
}



// FUNCTION 143046160 FUN_143046160 body=1392 status=ok
// SIG undefined FUN_143046160(void)

void FUN_143046160(longlong *param_1,float param_2,char param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  longlong lVar13;
  int iVar14;
  undefined8 local_res8;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  byte local_f8 [12];
  undefined4 local_ec;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_8c [100];
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  fVar1 = *(float *)(lVar6 + 0x790);
  _guard_xfg_dispatch_icall_nop(local_f8,0,0x90);
  lVar6 = 0;
  local_ec = 0x3f800000;
  local_res8 = 0;
  if (0 < (int)param_1[0x9b]) {
    FUN_140729f20(local_f8,(longlong)((int)param_1[0x9b] + -1) * 0x90 + param_1[0x9a]);
    local_res8 = FWeakObjectPtr::Get(local_8c);
  }
  lVar13 = lVar6;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar13 = param_1[4];
  }
  if (*(char *)(lVar13 + 0x128) == '\x03') {
    if ((param_3 == '\0') && ((*(byte *)(param_1[0x16] + 0xaa) & 1) != 0)) {
      (**(code **)(*param_1 + 0x2f0))(param_1,param_2,local_f8);
    }
    (**(code **)(*param_1 + 0x2f8))(param_1,param_2,local_f8);
  }
  (**(code **)(*param_1 + 0x300))(param_1,param_2,param_1 + 0x88);
  (**(code **)(*param_1 + 0x308))(param_1,param_1 + 0x88);
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar6 = param_1[4];
  }
  cVar4 = *(char *)(lVar6 + 0x128);
  if (param_3 == '\0') {
    (**(code **)(*param_1 + 0x390))();
    if (0 < (int)param_1[0x81]) {
      FUN_14305d5b0(param_1,param_1 + 0x9a);
    }
    iVar14 = 1;
    iVar11 = (int)param_1[0x7f] + -1;
    if (-1 < iVar11) {
      lVar13 = (longlong)iVar11 << 4;
      lVar6 = lVar13;
      do {
        lVar7 = param_1[0x7e];
        if (*(float *)(lVar13 + lVar7) <= fVar1) {
          iVar10 = (int)param_1[0x7f];
          iVar5 = (iVar10 - iVar11) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar6 + lVar7),(void *)((longlong)(iVar10 - iVar5) * 0x10 + lVar7),
                       (longlong)iVar5 << 4);
            iVar10 = (int)param_1[0x7f];
          }
          *(int *)(param_1 + 0x7f) = iVar10 + -1;
        }
        lVar6 = lVar6 + -0x10;
        lVar13 = lVar13 + -0x10;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
    iVar11 = (int)param_1[0xbd] + -1;
    fVar2 = *(float *)(param_1 + 0x19);
    if (-1 < iVar11) {
      lVar6 = (longlong)iVar11 * 8;
      lVar13 = lVar6;
      do {
        plVar8 = (longlong *)param_1[0xbc];
        if ((longlong *)param_1[0xbc] == (longlong *)0x0) {
          plVar8 = param_1 + 0x9c;
        }
        if (*(float *)((longlong)plVar8 + lVar6 + 4) <= fVar1 - fVar2) {
          iVar10 = (int)param_1[0xbd];
          iVar5 = (iVar10 - iVar11) + -1;
          if (0 < iVar5) {
            iVar5 = 1;
          }
          if (iVar5 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)plVar8 + lVar13),plVar8 + (iVar10 - iVar5),
                       (longlong)iVar5 << 3);
            iVar10 = (int)param_1[0xbd];
          }
          *(int *)(param_1 + 0xbd) = iVar10 + -1;
        }
        lVar13 = lVar13 + -8;
        lVar6 = lVar6 + -8;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
    iVar11 = (int)param_1[0x9b];
    lVar6 = (longlong)iVar11;
    if (0 < iVar11) {
      lVar13 = 0;
      do {
        pbVar12 = (byte *)(param_1[0x9a] + lVar13);
        lVar7 = FWeakObjectPtr::Get(pbVar12 + 0x74);
        if (lVar7 != 0) {
          if ((*pbVar12 & 1) == 0) {
            (**(code **)(*param_1 + 0x340))(param_1,pbVar12);
          }
          else {
            (**(code **)(*param_1 + 0x338))(param_1,pbVar12,iVar14 == iVar11);
          }
        }
        iVar14 = iVar14 + 1;
        lVar13 = lVar13 + 0x90;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  if (cVar4 != '\x03') {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x46);
  if ((lVar6 == 0) ||
     (cVar4 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                        (local_res8,param_1 + 0x46), cVar4 == '\0')) {
    *(undefined4 *)(param_1 + 0x49) = 0;
  }
  else {
    *(float *)(param_1 + 0x49) = param_2 + *(float *)(param_1 + 0x49);
  }
  if (fVar1 < *(float *)((longlong)param_1 + 0x214)) goto LAB_1430465df;
  bVar3 = false;
  if (((1.0 < ABS(*(float *)((longlong)param_1 + 0x1c4) - *(float *)((longlong)param_1 + 0x274))) ||
      (1.0 < ABS(*(float *)(param_1 + 0x39) - *(float *)(param_1 + 0x4f)))) ||
     (1.0 < ABS(*(float *)((longlong)param_1 + 0x1cc) - *(float *)((longlong)param_1 + 0x27c)))) {
    *(undefined8 *)((longlong)param_1 + 0x1c4) = *(undefined8 *)((longlong)param_1 + 0x274);
    *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)((longlong)param_1 + 0x27c);
    bVar3 = true;
  }
  if (((1.0 < ABS(*(float *)(param_1 + 0x3a) - *(float *)(param_1 + 0x59))) ||
      (1.0 < ABS(*(float *)((longlong)param_1 + 0x1d4) - *(float *)((longlong)param_1 + 0x2cc)))) ||
     (1.0 < ABS(*(float *)(param_1 + 0x3b) - *(float *)(param_1 + 0x5a)))) {
    param_1[0x3a] = param_1[0x59];
    *(int *)(param_1 + 0x3b) = (int)param_1[0x5a];
LAB_1430465bc:
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  else if (bVar3) goto LAB_1430465bc;
  *(float *)((longlong)param_1 + 0x214) = fVar1 + *(float *)(param_1[0x16] + 0x1b8);
LAB_1430465df:
  if ((((local_f8[0] & 1) != 0) && (param_1[0x28] != 0)) &&
     ((param_1[0xc1] != 0 &&
      ((lVar6 = FWeakObjectPtr::Get(param_1 + 0xc0), lVar6 != 0 &&
       (lVar6 = UObject::FindFunction(lVar6,param_1[0xc1]), lVar6 != 0)))))) {
    local_118 = local_res8;
    local_110 = local_d8;
    local_108 = local_d0;
    plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xc0);
    uVar9 = FUN_14178ac60(plVar8,param_1[0xc1]);
    (**(code **)(*plVar8 + 0x208))(plVar8,uVar9,&local_118);
  }
  if (param_3 == '\0') {
    (**(code **)(*param_1 + 0x310))(param_1);
  }
  return;
}



// FUNCTION 1430466d0 FUN_1430466d0 body=1781 status=ok
// SIG undefined FUN_1430466d0(void)

void FUN_1430466d0(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  float *pfVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte *pbVar13;
  longlong lVar14;
  byte *pbVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  longlong *local_res8;
  undefined8 in_stack_fffffffffffffeb8;
  undefined4 uVar25;
  undefined8 in_stack_fffffffffffffec0;
  undefined4 uVar26;
  float local_138;
  float local_134;
  float local_130;
  undefined8 local_128;
  float local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined1 local_102;
  byte local_f8 [4];
  undefined4 local_f4;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  fVar2 = *(float *)(lVar7 + 0x790);
  if (((byte)*(undefined4 *)((longlong)param_1 + 0xe4) & 0x11) == 1) {
    pfVar1 = (float *)((longlong)param_1 + 0x2b4);
    local_138 = *pfVar1 - *(float *)((longlong)param_1 + 0x254);
    local_130 = *(float *)((longlong)param_1 + 700) - *(float *)((longlong)param_1 + 0x25c);
    local_134 = *(float *)(param_1 + 0x57) - *(float *)(param_1 + 0x4b);
    fVar19 = local_138 * local_138 + local_134 * local_134 + local_130 * local_130;
    if (1e-08 < fVar19) {
      auVar22 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
      fVar21 = auVar22._0_4_;
      fVar21 = fVar21 + fVar21 * (0.5 - fVar19 * 0.5 * fVar21 * fVar21);
      fVar21 = fVar21 + fVar21 * (0.5 - fVar19 * 0.5 * fVar21 * fVar21);
      local_138 = local_138 * fVar21;
      local_res8 = (longlong *)CONCAT44(local_res8._4_4_,fVar21);
      local_134 = fVar21 * local_134;
      local_130 = fVar21 * local_130;
    }
    lVar7 = param_1[0x80];
    lVar14 = (longlong)(int)param_1[0x81] * 0x90 + lVar7;
    for (; lVar7 != lVar14; lVar7 = lVar7 + 0x90) {
      lVar8 = FWeakObjectPtr::Get(lVar7 + 0x74);
      if (lVar8 != 0) {
        (**(code **)(*param_1 + 0x300))(param_1);
      }
    }
    local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffffffffff00);
    _guard_xfg_dispatch_icall_nop(local_f8,0,0x90);
    pbVar13 = (byte *)param_1[0x7e];
    local_ec = 0x3f800000;
    pbVar15 = pbVar13 + (longlong)(int)param_1[0x7f] * 0x90;
    bVar17 = local_f8[0];
    fVar19 = local_d0;
    while( true ) {
      uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
      uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
      local_f8[0] = bVar17;
      local_d0 = fVar19;
      if (pbVar13 == pbVar15) break;
      lVar7 = FWeakObjectPtr::Get(pbVar13 + 0x74);
      uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffec0 >> 0x20);
      uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
      if (lVar7 != 0) {
        if ((*pbVar13 & 1) != 0) {
          local_ec = *(undefined4 *)(pbVar13 + 0xc);
          local_e8 = *(undefined4 *)(pbVar13 + 0x10);
          bVar17 = local_f8[0] ^ (*pbVar13 ^ local_f8[0]) & 3;
          local_f4 = *(undefined4 *)(pbVar13 + 4);
          local_d8 = *(undefined8 *)(pbVar13 + 0x20);
          uVar23 = (undefined4)local_d8;
          uVar24 = (undefined4)((ulonglong)local_d8 >> 0x20);
          fVar19 = *(float *)(pbVar13 + 0x28);
          local_e4 = *(undefined8 *)(pbVar13 + 0x14);
          local_f0 = local_f0 ^ (*(uint *)(pbVar13 + 8) ^ local_f0) & 1;
          local_dc = *(undefined4 *)(pbVar13 + 0x1c);
          local_c4 = *(undefined4 *)(pbVar13 + 0x34);
          local_b8 = *(undefined4 *)(pbVar13 + 0x40);
          local_ac = *(undefined4 *)(pbVar13 + 0x4c);
          local_a0 = *(undefined4 *)(pbVar13 + 0x58);
          local_98 = *(undefined4 *)(pbVar13 + 0x60);
          local_94 = *(undefined4 *)(pbVar13 + 100);
          local_90 = *(undefined4 *)(pbVar13 + 0x68);
          local_8c = *(undefined4 *)(pbVar13 + 0x6c);
          local_88 = *(undefined4 *)(pbVar13 + 0x70);
          local_84 = *(undefined4 *)(pbVar13 + 0x74);
          local_cc = *(undefined8 *)(pbVar13 + 0x2c);
          local_80 = *(undefined4 *)(pbVar13 + 0x78);
          local_c0 = *(undefined8 *)(pbVar13 + 0x38);
          local_78 = *(undefined8 *)(pbVar13 + 0x80);
          local_b4 = *(undefined8 *)(pbVar13 + 0x44);
          local_70 = *(undefined8 *)(pbVar13 + 0x88);
          local_a8 = *(undefined8 *)(pbVar13 + 0x50);
          local_9c = *(undefined4 *)(pbVar13 + 0x5c);
          local_res8 = (longlong *)CONCAT71(local_res8._1_7_,1);
          local_f8[0] = bVar17;
          local_d0 = fVar19;
          (**(code **)(*param_1 + 0x2f0))(param_1,pbVar13);
          goto LAB_143046908;
        }
        (**(code **)(*param_1 + 0x2f8))(param_1,pbVar13,&local_138);
      }
      pbVar13 = pbVar13 + 0x90;
      bVar17 = local_f8[0];
      fVar19 = local_d0;
    }
    uVar23 = (undefined4)local_d8;
    uVar24 = (undefined4)((ulonglong)local_d8 >> 0x20);
LAB_143046908:
    lVar7 = param_1[0x15];
    if ((lVar7 != 0) && (plVar4 = (longlong *)param_1[0x28], plVar4 != (longlong *)0x0)) {
      if (((bVar17 & 1) != 0) && (*(char *)(lVar7 + 0x1c8) != '\0')) {
        local_128 = CONCAT44(uVar24,uVar23);
        uVar11 = *(undefined8 *)(param_1[2] + 0x18);
        local_120 = fVar19;
        uVar9 = (**(code **)(*plVar4 + 0x148))(plVar4);
        FUN_142c264a0(uVar9,&local_128,*(undefined4 *)(lVar7 + 0x1cc),plVar4,
                      CONCAT44(uVar25,*(undefined4 *)(lVar7 + 0x1d0)),uVar11);
        uVar26 = (undefined4)((ulonglong)uVar11 >> 0x20);
      }
      if (*(char *)(lVar7 + 0x1c0) != '\0') {
        fVar19 = *(float *)(param_1 + 0x5b) - *(float *)((longlong)param_1 + 0x254);
        fVar21 = *(float *)((longlong)param_1 + 0x2dc) - *(float *)(param_1 + 0x4b);
        fVar20 = *(float *)(param_1 + 0x5c) - *(float *)((longlong)param_1 + 0x25c);
        plVar4 = (longlong *)param_1[0x28];
        pfVar10 = (float *)&local_d8;
        if ((bVar17 & 1) == 0) {
          pfVar10 = pfVar1;
        }
        local_128 = *(undefined8 *)pfVar10;
        local_120 = pfVar10[2];
        local_110 = CONCAT44(local_110._4_4_,*(undefined4 *)((longlong)param_1 + 0x25c));
        local_118 = *(longlong *)((longlong)param_1 + 0x254);
        uVar11 = (**(code **)(*plVar4 + 0x148))(plVar4);
        FUN_142db5a00(uVar11,&local_118,&local_128,
                      fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20 < 10.0,plVar4,
                      CONCAT44(uVar26,*(undefined4 *)(lVar7 + 0x1c4)));
      }
    }
    if (((char)local_res8 == '\0') && ((*(uint *)((longlong)param_1 + 0xe4) & 0x20000) != 0)) {
      *(undefined8 *)((longlong)param_1 + 0x254) = *(undefined8 *)pfVar1;
      *(undefined4 *)((longlong)param_1 + 0x25c) = *(undefined4 *)((longlong)param_1 + 700);
    }
  }
  uVar16 = *(uint *)((longlong)param_1 + 0xe4) & 1;
  if (uVar16 != 0) {
    iVar18 = 0;
    lVar7 = 0;
    iVar3 = *(int *)(param_1[0x15] + 0x1b8);
    if (0 < (longlong)iVar3) {
      lVar14 = 0;
      do {
        if (uVar16 == 0) break;
        lVar8 = param_1[0x15];
        fVar19 = *(float *)(lVar14 + *(longlong *)(lVar8 + 0x1b0)) +
                 *(float *)((longlong)param_1 + 0x224);
        if ((fVar19 < fVar2) && (*(float *)((longlong)param_1 + 0x244) <= fVar19)) {
          if ((lVar8 != 0) &&
             ((lVar8 = UObject::FindFunction
                                 (lVar8,*(undefined8 *)
                                         (*(longlong *)(lVar8 + 0x1b0) + 8 + (longlong)iVar18 * 0x10
                                         )), lVar8 != 0 && (*(char *)(lVar8 + 0x8c) == '\x01')))) {
            local_110 = *(longlong *)(lVar8 + 0x38);
            local_108 = 0xffffffff;
            local_104 = 0x101;
            local_102 = 0;
            local_118 = lVar8;
            FUN_140472e10(&local_118);
            lVar6 = local_110;
            if (local_110 != 0) {
              lVar12 = UObjectProperty::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                uVar11 = *(undefined8 *)(param_1[0x15] + 800);
                *(longlong **)(param_1[0x15] + 800) = param_1;
                local_res8 = param_1;
                (**(code **)(*(longlong *)param_1[0x15] + 0x208))
                          ((longlong *)param_1[0x15],lVar8,&local_res8);
                *(undefined8 *)(param_1[0x15] + 800) = uVar11;
              }
            }
          }
          uVar16 = *(uint *)((longlong)param_1 + 0xe4) & 1;
          if (uVar16 == 0) break;
        }
        iVar18 = iVar18 + 1;
        lVar7 = lVar7 + 1;
        lVar14 = lVar14 + 0x10;
      } while (lVar7 < iVar3);
    }
    uVar16 = *(uint *)((longlong)param_1 + 0xe4);
    if ((((uVar16 >> 0x10 & 1) == 0) && ((*(byte *)(param_1[0x15] + 0x1a9) & 0x40) != 0)) &&
       (fVar2 = *(float *)(param_1[0x15] + 0x1ac),
       fVar2 < *(float *)(param_1 + 0x46) || fVar2 == *(float *)(param_1 + 0x46))) {
      uVar16 = uVar16 | 0x10000;
      *(uint *)((longlong)param_1 + 0xe4) = uVar16;
    }
    if (((byte)uVar16 & 0x21) == 0x21) {
      (**(code **)(*param_1 + 0x2a0))(param_1,1);
    }
  }
  FUN_143061cf0(param_1);
  uVar16 = *(uint *)((longlong)param_1 + 0xe4);
  if ((((uVar16 >> 0x14 & 1) != 0) && ((uVar16 >> 0x13 & 1) == 0)) &&
     (*(uint *)((longlong)param_1 + 0xe4) = uVar16 | 0x80000, (uVar16 & 1) != 0)) {
    (**(code **)(*param_1 + 0x328))(param_1);
  }
  return;
}



// FUNCTION 143046dd0 FUN_143046dd0 body=77 status=ok
// SIG undefined FUN_143046dd0(void)

void FUN_143046dd0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 800);
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 800) = param_1;
  FUN_1430af550(*(undefined8 *)(param_1 + 0xa8),param_1,param_2);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 800) = uVar1;
  return;
}



// FUNCTION 143046e20 FUN_143046e20 body=2342 status=ok
// SIG undefined FUN_143046e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_143046e20(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,undefined4 param_6,undefined8 *param_7,byte param_8,float param_9,
                  float param_10,char param_11,int param_12)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  longlong lVar13;
  char cVar14;
  bool bVar16;
  float fVar17;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined8 local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  undefined8 *local_228;
  float local_220;
  undefined1 local_218;
  int local_210;
  char local_208 [8];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  uint local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8 [4];
  byte local_1a8 [4];
  undefined4 local_1a4;
  uint local_1a0;
  float local_19c;
  undefined4 local_198;
  undefined8 local_194;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118 [2];
  undefined1 local_108;
  byte local_104;
  undefined1 local_fc;
  undefined4 local_f8;
  longlong local_d0;
  longlong local_b0;
  ulonglong local_98;
  uint uVar15;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_1e0 = param_7;
  local_1f0 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b47760) && (_Init_thread_header(&DAT_146b47760), DAT_146b47760 == -1))
  {
    FName::FName(&DAT_146b47758,L"LightBeamTrace",1);
    _Init_thread_footer(&DAT_146b47760);
  }
  local_248 = (undefined8 *)param_1[0x28];
  FUN_1422ffb20(local_118,DAT_146b47758,local_208,1);
  local_108 = 1;
  local_104 = param_8 ^ 1;
  if ((param_8 == 0) && ((*(byte *)((longlong)param_1 + 0x1de) >> 4 & 1) != 0)) {
    local_f8 = (undefined4)param_1[0x40];
  }
  FUN_1426d3dd0(local_1c8);
  FUN_1426ea8d0(local_1c8,2);
  if ((int)param_1[0x45] != 0x20) {
    FUN_1426eac10(local_1c8,(int)param_1[0x45],1);
    local_fc = *(undefined1 *)((longlong)param_1 + 0x22c);
  }
  uVar12 = 0;
  plVar6 = (longlong *)param_1[0x86];
  if ((longlong *)param_1[0x86] == (longlong *)0x0) {
    plVar6 = param_1 + 0x82;
  }
  uVar10 = (longlong)(int)param_1[0x87] & 0x3fffffffffffffff;
  if ((longlong *)((longlong)plVar6 + (longlong)(int)param_1[0x87] * 4) < plVar6) {
    uVar10 = uVar12;
  }
  if (uVar10 != 0) {
    do {
      FCollisionQueryParams::AddIgnoredActor(local_118,(int)*plVar6);
      uVar12 = uVar12 + 1;
      plVar6 = (longlong *)((longlong)plVar6 + 4);
    } while (uVar12 != uVar10);
  }
  if ((param_1[0x1e] != 0) && (param_1[0x1e] != param_1[0x28])) {
    FCollisionQueryParams::AddIgnoredActor(local_118);
  }
  puVar8 = local_1e0;
  if (local_1e0 != (undefined8 *)0x0) {
    FCollisionQueryParams::AddIgnoredActor(local_118);
    lVar3 = FUN_142d39be0(puVar8);
    if (lVar3 != 0) {
      FCollisionQueryParams::AddIgnoredActor(local_118);
    }
  }
  pbVar7 = (byte *)*param_2;
  pbVar11 = pbVar7 + (longlong)(int)param_2[1] * 0x90;
  for (; pbVar7 != pbVar11; pbVar7 = pbVar7 + 0x90) {
    lVar3 = FWeakObjectPtr::Get(pbVar7 + 0x6c);
    if ((lVar3 != 0) && ((*pbVar7 & 1) != 0)) {
      FCollisionQueryParams::AddIgnoredActor(local_118);
      lVar3 = FUN_142d39be0(lVar3);
      if (lVar3 != 0) {
        FCollisionQueryParams::AddIgnoredActor(local_118);
      }
    }
    lVar3 = FWeakObjectPtr::Get(pbVar7 + 0x74);
    if (lVar3 != 0) {
      FUN_142301590(local_118);
    }
  }
  puVar8 = (undefined8 *)(*param_1 + 0x148);
  if (param_8 == 0) {
    if (param_11 == '\0') {
      fVar17 = 0.0;
      local_200 = (byte *)0x0;
      local_1f8 = 0;
      if (param_5 <= 0.0) {
        uVar4 = (*(code *)*puVar8)(param_1);
        local_238 = local_1c8;
        local_240 = local_118;
        local_248 = (undefined8 *)CONCAT44(local_248._4_4_,param_6);
        local_208[0] = UWorld::LineTraceMultiByChannel(uVar4,&local_200,param_3,local_1f0);
      }
      else {
        local_1d8 = (byte *)CONCAT44(param_5,2);
        uVar4 = (*(code *)*puVar8)();
        local_228 = local_1c8;
        local_230 = local_118;
        local_238 = &local_1d8;
        local_240 = (undefined8 *)CONCAT44(local_240._4_4_,param_6);
        local_248 = (undefined8 *)&DAT_1464aa810;
        local_208[0] = UWorld::SweepMultiByChannel(uVar4,&local_200,param_3,local_1f0);
      }
      cVar2 = local_208[0];
      if (0 < (int)local_1f8) {
        uVar15 = 0;
        local_1d8 = local_200 + (longlong)(int)local_1f8 * 0x90;
        pbVar7 = local_200;
        if (local_200 != local_1d8) {
          do {
            cVar14 = (char)uVar15;
            bVar16 = true;
            if ((*pbVar7 & 1) == 0) {
LAB_14304737b:
              fVar17 = *(float *)(pbVar7 + 0xc);
              local_1e8 = uVar15 & 0xff;
              if (!bVar16) {
                local_1e8 = 1;
              }
              lVar3 = FWeakObjectPtr::Get(pbVar7 + 0x6c);
              uVar4 = FWeakObjectPtr::Get(pbVar7 + 0x74);
              if (lVar3 != 0) {
                lVar9 = *param_2;
                lVar13 = (longlong)(int)param_2[1] * 0x90 + lVar9;
                for (; lVar9 != lVar13; lVar9 = lVar9 + 0x90) {
                  cVar2 = FUN_14058c1e0(lVar9 + 0x6c,lVar3);
                  if ((cVar2 != '\0') && (cVar2 = FUN_14058c1e0(lVar9 + 0x74,uVar4), cVar2 != '\0'))
                  {
                    uVar15 = local_1e8;
                    if (lVar9 != 0) goto LAB_14304744f;
                    break;
                  }
                }
              }
              iVar1 = (int)param_2[1];
              *(int *)(param_2 + 1) = iVar1 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
                TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                          (param_2,iVar1);
              }
              lVar3 = (longlong)iVar1 * 0x90;
              FUN_140729f20(*param_2 + lVar3,pbVar7);
              *(float *)(*param_2 + 0xc + lVar3) =
                   param_10 * *(float *)(*param_2 + 0xc + lVar3) + param_9;
              uVar15 = local_1e8;
            }
            else {
              uVar4 = FWeakObjectPtr::Get(pbVar7 + 0x74);
              uVar5 = FWeakObjectPtr::Get(pbVar7 + 0x6c);
              cVar2 = (**(code **)(*param_1 + 0x370))(param_1,uVar5,uVar4);
              if (cVar2 == '\0') {
                bVar16 = (*pbVar7 & 1) == 0;
                goto LAB_14304737b;
              }
              if ((*pbVar7 & 1) != 0) {
                iVar1 = (int)param_2[1];
                *(int *)(param_2 + 1) = iVar1 + 1;
                if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
                  TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                            (param_2,iVar1);
                }
                FUN_140729f20(*param_2 + (longlong)iVar1 * 0x90,pbVar7);
                *(float *)(*param_2 + 0xc + (longlong)iVar1 * 0x90) =
                     param_10 * *(float *)(pbVar7 + 0xc) + param_9;
                break;
              }
            }
LAB_14304744f:
            cVar14 = (char)uVar15;
            pbVar7 = pbVar7 + 0x90;
          } while (pbVar7 != local_1d8);
          cVar2 = local_208[0];
          if ((cVar14 != '\0') && (param_12 < 0x14)) {
            local_210 = param_12 + 1;
            local_218 = 0;
            local_220 = (1.0 - fVar17) * param_10;
            local_228 = (undefined8 *)CONCAT44(local_228._4_4_,fVar17 * param_10 + param_9);
            local_230 = (undefined8 *)((ulonglong)local_230 & 0xffffffffffffff00);
            local_238 = local_1e0;
            local_240 = (undefined8 *)CONCAT44(local_240._4_4_,param_6);
            local_248 = (undefined8 *)CONCAT44(local_248._4_4_,param_5);
            cVar2 = (**(code **)(*param_1 + 0x330))
                              (param_1,param_2,
                               local_200 + (longlong)((int)local_1f8 + -1) * 0x90 + 0x14,local_1f0);
          }
        }
      }
      if (local_200 != (byte *)0x0) {
        FMemory::Free(local_200);
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop(local_1a8,0,0x90);
      local_19c = 1.0;
      if (param_5 <= 0.0) {
        uVar4 = (*(code *)*puVar8)(param_1);
        local_238 = local_1c8;
        local_240 = local_118;
        local_248 = (undefined8 *)CONCAT44(local_248._4_4_,param_6);
        local_208[0] = UWorld::LineTraceSingleByChannel(uVar4,local_1a8,param_3,local_1f0);
      }
      else {
        local_200 = (byte *)CONCAT44(param_5,2);
        uVar4 = (*(code *)*puVar8)();
        local_228 = local_1c8;
        local_230 = local_118;
        local_238 = &local_200;
        local_240 = (undefined8 *)CONCAT44(local_240._4_4_,param_6);
        local_248 = (undefined8 *)&DAT_1464aa810;
        local_208[0] = UWorld::SweepSingleByChannel(uVar4,local_1a8,param_3,local_1f0);
      }
      cVar2 = local_208[0];
      if (local_208[0] != '\0') {
        iVar1 = (int)param_2[1];
        local_19c = local_19c * param_10 + param_9;
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_2,iVar1)
          ;
        }
        pbVar7 = (byte *)((longlong)iVar1 * 0x90 + *param_2);
        *pbVar7 = *pbVar7 ^ (*pbVar7 ^ local_1a8[0]) & 1;
        *pbVar7 = *pbVar7 ^ (local_1a8[0] ^ *pbVar7) & 2;
        *(undefined4 *)(pbVar7 + 4) = local_1a4;
        *(uint *)(pbVar7 + 8) = *(uint *)(pbVar7 + 8) ^ (*(uint *)(pbVar7 + 8) ^ local_1a0) & 1;
        *(float *)(pbVar7 + 0xc) = local_19c;
        *(undefined4 *)(pbVar7 + 0x10) = local_198;
        *(undefined8 *)(pbVar7 + 0x14) = local_194;
        *(undefined4 *)(pbVar7 + 0x1c) = local_18c;
        *(undefined8 *)(pbVar7 + 0x20) = local_188;
        *(undefined4 *)(pbVar7 + 0x28) = local_180;
        *(undefined8 *)(pbVar7 + 0x2c) = local_17c;
        *(undefined4 *)(pbVar7 + 0x34) = local_174;
        *(undefined8 *)(pbVar7 + 0x38) = local_170;
        *(undefined4 *)(pbVar7 + 0x40) = local_168;
        *(undefined8 *)(pbVar7 + 0x44) = local_164;
        *(undefined4 *)(pbVar7 + 0x4c) = local_15c;
        *(undefined8 *)(pbVar7 + 0x50) = local_158;
        *(undefined4 *)(pbVar7 + 0x58) = local_150;
        *(undefined4 *)(pbVar7 + 0x5c) = local_14c;
        *(undefined4 *)(pbVar7 + 0x60) = local_148;
        *(undefined4 *)(pbVar7 + 100) = local_144;
        *(undefined4 *)(pbVar7 + 0x68) = local_140;
        *(undefined4 *)(pbVar7 + 0x6c) = local_13c;
        *(undefined4 *)(pbVar7 + 0x70) = local_138;
        *(undefined4 *)(pbVar7 + 0x74) = local_134;
        *(undefined4 *)(pbVar7 + 0x78) = local_130;
        *(undefined8 *)(pbVar7 + 0x80) = local_128;
        *(undefined8 *)(pbVar7 + 0x88) = local_120;
        cVar2 = local_208[0];
      }
    }
  }
  else if (param_5 <= 0.0) {
    uVar4 = (*(code *)*puVar8)(param_1);
    local_240 = local_1c8;
    local_248 = local_118;
    cVar2 = UWorld::LineTraceTestByChannel(uVar4,param_3,local_1f0,param_6);
  }
  else {
    local_200 = (byte *)CONCAT44(param_5,2);
    uVar4 = (*(code *)*puVar8)();
    local_230 = local_1c8;
    local_238 = local_118;
    local_240 = &local_200;
    local_248 = (undefined8 *)CONCAT44(local_248._4_4_,param_6);
    cVar2 = UWorld::SweepTestByChannel(uVar4,param_3,local_1f0,&DAT_1464aa810);
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  return cVar2;
}



// FUNCTION 143047750 FUN_143047750 body=1605 status=ok
// SIG undefined FUN_143047750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_143047750(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             float param_5,undefined4 param_6,char param_7,byte param_8)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined1 local_168 [8];
  undefined8 local_160;
  float local_158;
  float local_154;
  undefined8 local_150;
  float local_148;
  float local_144;
  undefined8 local_130 [5];
  undefined8 local_108 [2];
  undefined1 local_f8;
  byte local_f4;
  undefined1 local_ec;
  undefined4 local_e8;
  longlong local_c0;
  longlong local_a0;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_160 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b477e0) && (_Init_thread_header(&DAT_146b477e0), DAT_146b477e0 == -1))
  {
    FName::FName(&DAT_146b477d8,L"LightProjectileTrace",1);
    _Init_thread_footer(&DAT_146b477e0);
  }
  uVar8 = 0;
  local_198 = (undefined8 *)uVar8;
  if ((*(byte *)(param_1[0x15] + 0x1a9) & 1) != 0) {
    local_198 = (undefined8 *)param_1[0x28];
  }
  FUN_1422ffb20(local_108,DAT_146b477d8,local_168,1);
  local_f8 = 1;
  local_f4 = param_8 ^ 1;
  if ((param_8 == 0) && ((*(byte *)((longlong)param_1 + 0xe9) & 1) != 0)) {
    local_e8 = (undefined4)param_1[0x47];
  }
  plVar7 = (longlong *)param_1[0x76];
  if ((longlong *)param_1[0x76] == (longlong *)0x0) {
    plVar7 = param_1 + 0x72;
  }
  uVar10 = (longlong)(int)param_1[0x77] & 0x3fffffffffffffff;
  if ((longlong *)((longlong)plVar7 + (longlong)(int)param_1[0x77] * 4) < plVar7) {
    uVar10 = uVar8;
  }
  uVar9 = uVar8;
  if (uVar10 != 0) {
    do {
      FCollisionQueryParams::AddIgnoredActor(local_108,(int)*plVar7);
      uVar9 = uVar9 + 1;
      plVar7 = (longlong *)((longlong)plVar7 + 4);
    } while (uVar9 != uVar10);
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x4c);
  if (lVar4 != 0) {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x4c);
    FCollisionQueryParams::AddIgnoredActor(local_108,uVar5);
  }
  if ((((*(uint *)((longlong)param_1 + 0xe4) & 0x10000) == 0) && (param_1[0x29] != 0)) &&
     (param_1[0x29] != param_1[0x28])) {
    FCollisionQueryParams::AddIgnoredActor(local_108);
    plVar7 = (longlong *)param_1[0x7c];
    if ((longlong *)param_1[0x7c] == (longlong *)0x0) {
      plVar7 = param_1 + 0x78;
    }
    uVar10 = (longlong)(int)param_1[0x7d] & 0x3fffffffffffffff;
    if ((longlong *)((longlong)plVar7 + (longlong)(int)param_1[0x7d] * 4) < plVar7) {
      uVar10 = uVar8;
    }
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        FCollisionQueryParams::AddIgnoredActor(local_108,(int)*plVar7);
        uVar9 = uVar9 + 1;
        plVar7 = (longlong *)((longlong)plVar7 + 4);
      } while (uVar9 != uVar10);
    }
  }
  if (param_7 != '\0') {
    plVar7 = (longlong *)param_1[0x4f];
    if ((longlong *)param_1[0x4f] == (longlong *)0x0) {
      plVar7 = param_1 + 0x4d;
    }
    uVar10 = (longlong)(int)param_1[0x50] & 0x3fffffffffffffff;
    if ((longlong *)((longlong)plVar7 + (longlong)(int)param_1[0x50] * 4) < plVar7) {
      uVar10 = uVar8;
    }
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        FCollisionQueryParams::AddIgnoredActor(local_108,(int)*plVar7);
        uVar9 = uVar9 + 1;
        plVar7 = (longlong *)((longlong)plVar7 + 4);
      } while (uVar9 != uVar10);
    }
    plVar7 = (longlong *)param_1[0x53];
    if ((longlong *)param_1[0x53] == (longlong *)0x0) {
      plVar7 = param_1 + 0x51;
    }
    uVar10 = (longlong)(int)param_1[0x54] & 0x3fffffffffffffff;
    if ((longlong *)((longlong)plVar7 + (longlong)(int)param_1[0x54] * 4) < plVar7) {
      uVar10 = uVar8;
    }
    if (uVar10 != 0) {
      do {
        FUN_142301530(local_108,(int)*plVar7);
        uVar8 = uVar8 + 1;
        plVar7 = (longlong *)((longlong)plVar7 + 4);
      } while (uVar8 != uVar10);
    }
  }
  FUN_1426d3dd0(local_130);
  FUN_1426ea8d0(local_130,2);
  if (*(int *)((longlong)param_1 + 0x24c) != 0x20) {
    FUN_1426eac10(local_130,*(int *)((longlong)param_1 + 0x24c),1);
    local_ec = (undefined1)param_1[0x4a];
  }
  lVar4 = param_1[0x15];
  fVar13 = 0.0;
  fVar12 = 0.0;
  fVar11 = 0.0;
  if (((*(byte *)(lVar4 + 0x318) & 1) != 0) &&
     ((*(char *)(lVar4 + 0x2f4) != '\0' || (*(char *)(lVar4 + 0x2f5) != '\0')))) {
    fVar11 = param_5;
    fVar12 = param_5;
    fVar13 = param_5;
    if ((*(char *)(lVar4 + 0x2f5) != '\0') && (*(longlong *)(lVar4 + 0x30) != 0)) {
      fVar13 = *(float *)(lVar4 + 0x60);
      fVar12 = *(float *)(lVar4 + 100);
      fVar11 = *(float *)(lVar4 + 0x68);
      pfVar6 = (float *)FUN_14281d030(*(longlong *)(lVar4 + 0x30),&local_150);
      fVar11 = (pfVar6[5] - pfVar6[2]) * 0.5 * fVar11;
      fVar12 = (pfVar6[4] - pfVar6[1]) * 0.5 * fVar12;
      fVar13 = (pfVar6[3] - *pfVar6) * 0.5 * fVar13;
    }
    fVar12 = fVar12 * *(float *)(param_1 + 0x8a);
  }
  if (param_8 == 0) {
    if (((fVar13 == 0.0) && (fVar12 == 0.0)) && (fVar11 == 0.0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      pcVar1 = *(code **)(*param_1 + 0x148);
      if (param_5 <= 0.0) {
        uVar5 = (*pcVar1)(param_1);
        local_188 = local_130;
        local_190 = local_108;
        local_198 = (undefined8 *)CONCAT44(local_198._4_4_,param_6);
        uVar3 = UWorld::LineTraceMultiByChannel(uVar5,local_160,param_3,param_4);
        goto LAB_143047cf9;
      }
      local_150._4_4_ = param_5;
      local_150._0_4_ = 2;
      uVar5 = (*pcVar1)();
    }
    else {
      local_150._0_4_ = 1;
      local_150._4_4_ = fVar13;
      local_148 = fVar12;
      local_144 = fVar11;
      uVar5 = (**(code **)(*param_1 + 0x148))();
    }
    local_178 = local_130;
    local_180 = local_108;
    local_188 = &local_150;
    local_190 = (undefined8 *)CONCAT44(local_190._4_4_,param_6);
    local_198 = (undefined8 *)&DAT_1464aa810;
    uVar3 = UWorld::SweepMultiByChannel(uVar5,local_160,param_3,param_4);
  }
  else {
    if (((fVar13 == 0.0) && (fVar12 == 0.0)) && (fVar11 == 0.0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      pcVar1 = *(code **)(*param_1 + 0x148);
      if (param_5 <= 0.0) {
        uVar5 = (*pcVar1)(param_1);
        local_190 = local_130;
        local_198 = local_108;
        uVar3 = UWorld::LineTraceTestByChannel(uVar5,param_3,param_4,param_6);
        goto LAB_143047cf9;
      }
      local_150._4_4_ = param_5;
      local_150._0_4_ = 2;
      uVar5 = (*pcVar1)();
      local_190 = &local_150;
    }
    else {
      local_160 = CONCAT44(fVar13,1);
      local_158 = fVar12;
      local_154 = fVar11;
      uVar5 = (**(code **)(*param_1 + 0x148))();
      local_190 = &local_160;
    }
    local_180 = local_130;
    local_188 = local_108;
    local_198 = (undefined8 *)CONCAT44(local_198._4_4_,param_6);
    uVar3 = UWorld::SweepTestByChannel(uVar5,param_3,param_4,&DAT_1464aa810);
  }
LAB_143047cf9:
  if (local_a0 != 0) {
    FMemory::Free();
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 143047da0 FUN_143047da0 body=1042 status=ok
// SIG undefined FUN_143047da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143047da0(longlong *param_1,float param_2,char param_3,longlong param_4)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_158 [40];
  longlong local_130;
  undefined8 local_128;
  float local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_110;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  longlong local_98 [4];
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar9 = (**(code **)(*param_1 + 0x148))();
  fVar3 = *(float *)(lVar9 + 0x790);
  lVar9 = param_1[0x16];
  if ((*(byte *)(lVar9 + 0xa8) & 1) != 0) {
    fVar4 = *(float *)(lVar9 + 0x9c);
    if (*(float *)(param_1 + 0x1b) < fVar4) {
      fVar14 = param_2 * *(float *)(lVar9 + 0xa4) + *(float *)(param_1 + 0x1b);
      if (fVar4 <= fVar14) {
        fVar14 = fVar4;
      }
      *(float *)(param_1 + 0x1b) = fVar14;
    }
  }
  (**(code **)(*param_1 + 0x2e0))(param_1);
  (**(code **)(*param_1 + 0x2e8))(param_1,param_2);
  if ((param_3 == '\0') && (*DAT_146b474f0 != 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((*(byte *)(param_1[0x16] + 0xa8) & 0x20) != 0) {
    plVar10 = (longlong *)FRotator::Vector((longlong)param_1 + 0x28c,local_d8);
    lVar9 = param_1[0x28];
    local_128 = *plVar10;
    local_120 = *(float *)(plVar10 + 1);
    local_e0 = *(undefined4 *)((longlong)param_1 + 0x27c);
    local_e8 = *(undefined8 *)((longlong)param_1 + 0x274);
    lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
    if (((lVar11 != 0) && (lVar9 != 0)) &&
       ((*(float *)((longlong)param_1 + 0x224) < 0.0001 ||
        (*(float *)((longlong)param_1 + 0x224) + 1.0 < fVar3)))) {
      local_100 = (float)local_128 * 1000.0;
      local_f8 = local_120 * 1000.0;
      local_fc = local_128._4_4_ * 1000.0;
      FUN_142d4d560(lVar11,&local_e8,&local_100,lVar9);
      *(float *)((longlong)param_1 + 0x224) = fVar3;
    }
  }
  if (!bVar7) {
    (**(code **)(*param_1 + 0x2c8))(param_1,param_3);
    (**(code **)(*param_1 + 0x2d0))(param_1,param_2,param_3);
    return;
  }
  *(float *)(param_1 + 0xbf) = param_2;
  plVar10 = (longlong *)FUN_143042160(local_c8,0,0xff);
  lVar9 = *plVar10;
  FWeakObjectPtr::operator=(&local_118,param_1);
  *(undefined4 *)(lVar9 + 0x10) = local_118;
  *(undefined4 *)(lVar9 + 0x14) = local_114;
  lVar9 = *plVar10;
  lVar8 = plVar10[2];
  lVar11 = plVar10[1];
  lVar13 = *(longlong *)(lVar9 + 0x20);
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 0x48) = *(int *)(lVar13 + 0x48) + 1;
    UNLOCK();
  }
  local_110 = lVar13;
  FUN_14305be80(lVar9,lVar11,(int)lVar8,1);
  plVar10 = param_1 + 0xbe;
  if (plVar10 == &local_110) {
    if (lVar13 == 0) goto LAB_143047ffb;
    LOCK();
    piVar1 = (int *)(lVar13 + 0x48);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    lVar9 = local_110;
  }
  else {
    lVar9 = *plVar10;
    *plVar10 = lVar13;
    if (lVar9 == 0) goto LAB_143047ffb;
    LOCK();
    piVar1 = (int *)(lVar9 + 0x48);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar5 == 1) {
    FGraphEvent::Recycle(lVar9);
  }
LAB_143047ffb:
  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | 0x10;
  local_70 = 1;
  local_78 = (longlong *)0x0;
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_98,0);
  lVar9 = *plVar10;
  plVar10 = local_98;
  if (local_78 != (longlong *)0x0) {
    plVar10 = local_78;
  }
  *plVar10 = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + 1;
    UNLOCK();
  }
  plVar10 = (longlong *)FUN_143041fe0(local_b0,local_98,0xff);
  lVar9 = *plVar10;
  FWeakObjectPtr::operator=(&local_108,param_1);
  *(undefined4 *)(lVar9 + 0x10) = local_108;
  *(undefined4 *)(lVar9 + 0x14) = local_104;
  lVar9 = *plVar10;
  lVar8 = plVar10[2];
  lVar11 = plVar10[1];
  lVar13 = *(longlong *)(lVar9 + 0x20);
  piVar1 = (int *)(lVar13 + 0x48);
  if (lVar13 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_130 = lVar13;
  FUN_14048b000(lVar9,lVar11,(int)lVar8,1);
  if (param_4 != 0) {
    lVar9 = lVar13;
    if (lVar13 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      lVar9 = local_130;
    }
    local_f0 = lVar13;
    puVar12 = (undefined8 *)FTickFunction::GetCompletionHandle(param_4,&local_128);
    FGraphEvent::DontCompleteUntil(*puVar12,&local_f0);
    lVar13 = lVar9;
    if (local_128 != 0) {
      LOCK();
      piVar2 = (int *)(local_128 + 0x48);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      lVar13 = local_130;
      if (iVar5 == 1) {
        FGraphEvent::Recycle();
        lVar13 = local_130;
      }
    }
  }
  if (lVar13 != 0) {
    LOCK();
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      FGraphEvent::Recycle(local_130);
    }
  }
  plVar10 = local_98;
  iVar5 = (int)local_70;
  if (local_78 != (longlong *)0x0) {
    plVar10 = local_78;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar10 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar10 + 0x48);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar10 = plVar10 + 1;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1430481c0 FUN_1430481c0 body=873 status=ok
// SIG undefined FUN_1430481c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1430481c0(longlong *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined **local_170;
  longlong local_168;
  longlong lStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  undefined ***local_138;
  longlong *local_128;
  longlong local_120 [7];
  longlong *local_e8;
  uint local_e0;
  longlong local_d8;
  longlong *local_c8;
  longlong local_c0 [7];
  longlong *local_88;
  int local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_60 [7];
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (((((longlong *)*param_1 == (longlong *)0x0) ||
       (lVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar4 == 0)) ||
      (iVar3 = FUN_1428cf800(lVar4), iVar3 == 3)) || (lVar4 = FUN_14304c8c0(lVar4), lVar4 == 0)) {
    return 0;
  }
  local_168 = *param_1;
  lStack_160 = param_1[1];
  local_158 = (undefined4)param_1[2];
  uStack_154 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_150 = (undefined4)param_1[3];
  uStack_14c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_170 = &PTR_LAB_145a5f490;
  local_138 = &local_170;
  local_148 = param_1[4];
  FUN_14303b5a0(lVar4,&local_68,&local_170);
  local_138 = (undefined ***)0x0;
  if (local_28 != (longlong *)0x0) {
    local_138 = (undefined ***)(**(code **)*local_28)(local_28,&local_170);
  }
  local_c8 = local_68;
  local_88 = (longlong *)0x0;
  if (local_138 != (undefined ***)0x0) {
    local_88 = (longlong *)(*(code *)**local_138)(local_138,local_c0);
  }
  local_80 = 0;
  local_78 = 0;
  plVar7 = local_88;
  plVar8 = local_c8;
  while (((-1 < local_80 && (local_80 < (int)plVar8[0x8c])) &&
         (((local_78 = *(longlong *)(plVar8[0x8b] + (longlong)local_80 * 8), local_78 == 0 ||
           (*(char *)(local_78 + 0xe0) == '\0')) ||
          ((plVar7 != (longlong *)0x0 &&
           (local_178 = local_78, cVar1 = (**(code **)(*plVar7 + 0x10))(plVar7,&local_178),
           plVar7 = local_88, plVar8 = local_c8, cVar1 == '\0'))))))) {
    local_80 = local_80 + 1;
  }
  if (local_138 != (undefined ***)0x0) {
    (*(code *)(*local_138)[4])
              (local_138,CONCAT71((int7)((ulonglong)&local_170 >> 8),local_138 != &local_170));
  }
  local_138 = (undefined ***)0x0;
  if (local_28 != (longlong *)0x0) {
    local_138 = (undefined ***)(**(code **)*local_28)(local_28,&local_170);
  }
  local_128 = local_68;
  local_e8 = (longlong *)0x0;
  if (local_138 != (undefined ***)0x0) {
    local_e8 = (longlong *)(*(code *)**local_138)(local_138,local_120);
  }
  uVar5 = 0xffffffff;
  local_d8 = 0;
  plVar7 = local_e8;
  plVar8 = local_128;
  do {
    local_e0 = (uint)uVar5;
    if (((int)local_e0 < 0) || ((int)plVar8[0x8c] <= (int)local_e0)) goto LAB_1430483fa;
    local_d8 = *(longlong *)(plVar8[0x8b] + (longlong)(int)local_e0 * 8);
    if ((local_d8 != 0) && (*(char *)(local_d8 + 0xe0) != '\0')) {
      if (plVar7 == (longlong *)0x0) {
LAB_1430483fa:
        if (local_138 != (undefined ***)0x0) {
          (*(code *)(*local_138)[4])
                    (local_138,CONCAT71((int7)((ulonglong)&local_170 >> 8),local_138 != &local_170))
          ;
          uVar5 = (ulonglong)local_e0;
          plVar7 = local_e8;
          plVar8 = local_128;
        }
        iVar3 = (int)uVar5;
        uVar6 = (undefined7)(uVar5 >> 8);
        if (local_80 != iVar3) {
          if ((local_80 < 0) || ((int)local_c8[0x8c] <= local_80)) {
            cVar1 = '\0';
          }
          else {
            cVar1 = '\x01';
          }
          if ((iVar3 < 0) || ((int)plVar8[0x8c] <= iVar3)) {
            cVar2 = '\0';
          }
          else {
            cVar2 = '\x01';
          }
          if (cVar1 != cVar2) {
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x20))(plVar7,CONCAT71(uVar6,plVar7 != local_120));
              local_e8 = (longlong *)0x0;
            }
            if (local_88 != (longlong *)0x0) {
              (**(code **)(*local_88 + 0x20))
                        (local_88,CONCAT71((int7)((ulonglong)local_c0 >> 8),local_88 != local_c0));
              local_88 = (longlong *)0x0;
            }
            if (local_28 != (longlong *)0x0) {
              (**(code **)(*local_28 + 0x20))
                        (local_28,CONCAT71((int7)((ulonglong)local_60 >> 8),local_28 != local_60));
            }
            return 1;
          }
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x20))(plVar7,CONCAT71(uVar6,plVar7 != local_120));
          local_e8 = (longlong *)0x0;
        }
        if (local_88 != (longlong *)0x0) {
          (**(code **)(*local_88 + 0x20))
                    (local_88,CONCAT71((int7)((ulonglong)local_c0 >> 8),local_88 != local_c0));
          local_88 = (longlong *)0x0;
        }
        if (local_28 == (longlong *)0x0) {
          return 0;
        }
        (**(code **)(*local_28 + 0x20))
                  (local_28,CONCAT71((int7)((ulonglong)local_60 >> 8),local_28 != local_60));
        return 0;
      }
      local_178 = local_d8;
      cVar1 = (**(code **)(*plVar7 + 0x10))(plVar7,&local_178);
      uVar5 = (ulonglong)local_e0;
      plVar7 = local_e8;
      plVar8 = local_128;
      if (cVar1 != '\0') goto LAB_1430483fa;
    }
    uVar5 = (ulonglong)(local_e0 + 1);
  } while( true );
}



// FUNCTION 143048530 FUN_143048530 body=393 status=ok
// SIG undefined FUN_143048530(void)

void FUN_143048530(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  ushort uVar4;
  longlong *plVar5;
  
  if ((*(byte *)(param_1 + 0x1d) >> 1 & 1) == 0) {
    plVar5 = *(longlong **)(param_1[0x15] + 0x170);
    plVar1 = plVar5 + *(int *)(param_1[0x15] + 0x178);
    if (plVar5 != plVar1) {
      while (((longlong *)*plVar5 == (longlong *)0x0 ||
             (cVar2 = (**(code **)(*(longlong *)*plVar5 + 0x278))(), cVar2 == '\0'))) {
        plVar5 = plVar5 + 1;
        if (plVar5 == plVar1) {
          return;
        }
      }
      plVar5 = *(longlong **)(param_1[0x15] + 0x170);
      plVar1 = plVar5 + *(int *)(param_1[0x15] + 0x178);
      for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
        if (((longlong *)*plVar5 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*(longlong *)*plVar5 + 0x280))(), cVar2 != '\0')) {
          uVar4 = *(ushort *)(param_1 + 0x1d);
          goto LAB_14304861e;
        }
      }
      uVar4 = *(ushort *)(param_1 + 0x1d);
      if (((((uVar4 >> 9 & 1) != 0) && (param_1[0x2a] != 0)) || (*(float *)(param_1 + 0x2b) != 0.0))
         || ((*(float *)((longlong)param_1 + 0x15c) != 0.0 || (*(float *)(param_1 + 0x2c) != 0.0))))
      {
LAB_14304861e:
        *(ushort *)(param_1 + 0x1d) = uVar4 | 2;
        uVar4 = *(ushort *)(param_1 + 0x30) | 2;
        if (uVar4 != *(ushort *)(param_1 + 0x30)) {
          if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
            lVar3 = param_1[4];
          }
          else {
            lVar3 = 0;
          }
          if (*(char *)(lVar3 + 0x128) == '\x03') {
            *(ushort *)(param_1 + 0x30) = uVar4;
            (**(code **)(*param_1 + 0x260))(param_1);
          }
        }
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)(lVar3 + 0x790);
        *(ushort *)(param_1 + 0x1d) = *(ushort *)(param_1 + 0x1d) & 0xfeef;
      }
    }
  }
  return;
}



// FUNCTION 1430486c0 FUN_1430486c0 body=166 status=ok
// SIG undefined FUN_1430486c0(void)

void FUN_1430486c0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_14222a250();
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x458);
  uVar2 = (longlong)*(int *)(param_1 + 0x460) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x460) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x298))();
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x460) = 0;
  if (*(int *)(param_1 + 0x464) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x458,0);
  }
  return;
}



// FUNCTION 143048770 FUN_143048770 body=57 status=ok
// SIG undefined FUN_143048770(void)

void FUN_143048770(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_142227350(*(longlong *)(param_1 + 0x180),0,1);
  }
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 1430487b0 FUN_1430487b0 body=40 status=ok
// SIG undefined FUN_1430487b0(void)

void FUN_1430487b0(longlong *param_1)

{
  if ((*(byte *)((longlong)param_1 + 0xe4) & 1) != 0) {
    (**(code **)(*param_1 + 0x380))();
    *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xfffffffe;
  }
  return;
}



// FUNCTION 1430487e0 FUN_1430487e0 body=102 status=ok
// SIG undefined FUN_1430487e0(void)

void FUN_1430487e0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_98 [144];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = FUN_140729f20(local_98,param_1 + 0x20);
  (*pcVar1)((int)uVar2 + lVar3,uVar4);
  return;
}



// FUNCTION 143048850 FUN_143048850 body=135 status=ok
// SIG undefined FUN_143048850(void)

undefined8 FUN_143048850(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_98 [144];
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = FUN_140729f20(local_98,param_1 + 0x20);
    (*pcVar1)((int)uVar2 + lVar3,uVar4);
    return 1;
  }
  return 0;
}



// FUNCTION 1430488e0 FUN_1430488e0 body=272 status=ok
// SIG undefined FUN_1430488e0(void)

void FUN_1430488e0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x290))(plVar3);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_145a5e4d8;
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
  plVar3 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar3;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar3 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar3;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1430489f0 FUN_1430489f0 body=278 status=ok
// SIG undefined FUN_1430489f0(void)

void FUN_1430489f0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  long lVar6;
  
  lVar6 = (int)param_1 + 0x10;
  plVar3 = (longlong *)FWeakObjectPtr::Get();
  if (plVar3 != (longlong *)0x0) {
    if (param_3 != 2) {
      AK::MemoryMgr::StartProfileThreadUsage(lVar6);
    }
    (**(code **)(*plVar3 + 0x288))(plVar3);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_145a5e4c8;
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
  plVar3 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar3;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar3 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar3;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 143048b10 FUN_143048b10 body=269 status=ok
// SIG undefined FUN_143048b10(void)

void FUN_143048b10(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x700))(plVar3,*(undefined4 *)(param_1 + 3));
  }
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_145a5f0e8;
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
  plVar3 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar3;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar3 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar3;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 143048c20 FUN_143048c20 body=282 status=ok
// SIG undefined FUN_143048c20(void)

void FUN_143048c20(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  long lVar6;
  
  lVar6 = (int)param_1 + 0x10;
  plVar3 = (longlong *)FWeakObjectPtr::Get();
  if (plVar3 != (longlong *)0x0) {
    if (param_3 != 2) {
      AK::MemoryMgr::StartProfileThreadUsage(lVar6);
    }
    (**(code **)(*plVar3 + 0x6f8))(plVar3,*(undefined4 *)(param_1 + 3));
  }
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_145a5f0d8;
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
  plVar3 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar3;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar3 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar3;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 143048d40 FUN_143048d40 body=312 status=ok
// SIG undefined FUN_143048d40(void)

void FUN_143048d40(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 2);
  plVar7 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    if ((int)plVar4[0x14] == -1) {
      (**(code **)(*plVar4 + 0x2b8))(plVar4);
    }
    else {
      lVar3 = plVar4[0x82];
      plVar4[0x82] = 0;
      if (lVar3 != 0) {
        LOCK();
        piVar1 = (int *)(lVar3 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_145a5e8d0;
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
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar5);
  if (plVar4 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar4 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar4 = plVar6;
    }
    TlsSetValue(*pDVar5,plVar4);
  }
  if ((int)plVar4[2] < 0x20) {
    plVar7 = (longlong *)plVar4[1];
  }
  else {
    if (*plVar4 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar5 + 2);
    }
    *plVar4 = plVar4[1];
    plVar4[1] = 0;
    *(undefined4 *)(plVar4 + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
  plVar4[1] = (longlong)param_1;
  return;
}



// FUNCTION 143048e80 FUN_143048e80 body=287 status=ok
// SIG undefined FUN_143048e80(void)

void FUN_143048e80(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  long lVar6;
  
  lVar6 = (int)param_1 + 0x10;
  plVar3 = (longlong *)FWeakObjectPtr::Get();
  if ((plVar3 != (longlong *)0x0) && ((int)plVar3[0x14] == -1)) {
    if (param_3 != 2) {
      AK::MemoryMgr::StartProfileThreadUsage(lVar6);
    }
    (**(code **)(*plVar3 + 0x2b0))(plVar3);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_145a5e8c0;
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
  plVar3 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar3;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar3 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar3;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1430491b0 FUN_1430491b0 body=255 status=ok
// SIG undefined FUN_1430491b0(void)

void FUN_1430491b0(longlong *param_1,float param_2)

{
  longlong lVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  byte local_98 [12];
  undefined4 local_8c;
  longlong local_84;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((*(byte *)((longlong)param_1 + 0xe4) & 4) == 0) {
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      lVar1 = param_1[4];
    }
    else {
      lVar1 = 0;
    }
    if (*(char *)(lVar1 + 0x128) == '\x03') {
      if (0.0 < param_2) {
        *(float *)(param_1 + 0x48) = param_2;
        return;
      }
      _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
      local_8c = 0x3f800000;
      FWeakObjectPtr::operator=(&local_res8,0);
      local_84 = param_1[0x55];
      local_98[0] = local_98[0] & 0xfe;
      local_2c = local_res8;
      local_28 = local_resc;
      local_7c = (undefined4)param_1[0x56];
      local_58 = DAT_1464aa7a0;
      local_64 = DAT_1464aa7a0;
      local_60 = DAT_1464aa798;
      local_6c = DAT_1464aa798;
      local_78 = local_84;
      local_70 = local_7c;
      (**(code **)(*param_1 + 0x308))(param_1,local_98);
    }
  }
  return;
}



// FUNCTION 1430492b0 FUN_1430492b0 body=113 status=ok
// SIG undefined FUN_1430492b0(void)

int * FUN_1430492b0(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x14) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(*param_1 + 0xc + (longlong)iVar1 * 0x14);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 143049330 FUN_143049330 body=185 status=ok
// SIG undefined FUN_143049330(void)

longlong FUN_143049330(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  if (param_2 == 0) {
    lVar6 = *(longlong *)(param_1 + 400);
  }
  else {
    plVar3 = (longlong *)FUN_14307d8a0(param_2,local_res8);
    lVar6 = *plVar3;
  }
  plVar5 = *(longlong **)(param_1 + 0x180);
  plVar3 = plVar5 + *(int *)(param_1 + 0x188);
  for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      plVar4 = *(longlong **)(lVar2 + 0x38);
      plVar1 = plVar4 + *(int *)(lVar2 + 0x40);
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 == lVar6) {
          return lVar2;
        }
      }
    }
  }
  if (param_3 == '\0') {
    return 0;
  }
  return *(longlong *)(param_1 + 0x178);
}



// FUNCTION 1430493f0 FUN_1430493f0 body=1001 status=ok
// SIG undefined FUN_1430493f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430493f0(longlong *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  undefined **local_178;
  longlong local_170;
  longlong lStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong local_150;
  undefined ***local_140;
  longlong local_138;
  longlong local_130 [7];
  longlong *local_f8;
  int local_f0;
  longlong local_e8;
  longlong local_d8;
  longlong local_d0 [7];
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong local_78;
  longlong local_70 [7];
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (((((longlong *)*param_1 != (longlong *)0x0) &&
       (lVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar4 != 0)) &&
      (iVar3 = FUN_1428cf800(lVar4), iVar3 != 3)) && (lVar4 = FUN_14304c8c0(lVar4), lVar4 != 0)) {
    local_170 = *param_1;
    lStack_168 = param_1[1];
    local_160 = (undefined4)param_1[2];
    uStack_15c = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_158 = (undefined4)param_1[3];
    uStack_154 = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_178 = &PTR_LAB_145a5f490;
    local_140 = &local_178;
    local_150 = param_1[4];
    FUN_14303b5a0(lVar4,&local_78,&local_178);
    local_140 = (undefined ***)0x0;
    if (local_38 != (longlong *)0x0) {
      local_140 = (undefined ***)(**(code **)*local_38)(local_38,&local_178);
    }
    local_138 = local_78;
    local_f8 = (longlong *)0x0;
    if (local_140 != (undefined ***)0x0) {
      local_f8 = (longlong *)(*(code *)**local_140)(local_140,local_130);
    }
    local_e8 = 0;
    plVar6 = local_f8;
    lVar4 = local_138;
    local_f0 = 0;
    while (((-1 < local_f0 && (local_f0 < *(int *)(lVar4 + 0x460))) &&
           (((local_e8 = *(longlong *)(*(longlong *)(lVar4 + 0x458) + (longlong)local_f0 * 8),
             local_e8 == 0 || (*(char *)(local_e8 + 0xe0) == '\0')) ||
            ((plVar6 != (longlong *)0x0 &&
             (local_188 = local_e8, cVar1 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_188),
             plVar6 = local_f8, lVar4 = local_138, cVar1 == '\0'))))))) {
      local_f0 = local_f0 + 1;
    }
    if (local_140 != (undefined ***)0x0) {
      (*(code *)(*local_140)[4])
                (local_140,CONCAT71((int7)((ulonglong)&local_178 >> 8),local_140 != &local_178));
    }
    local_140 = (undefined ***)0x0;
    if (local_38 != (longlong *)0x0) {
      local_140 = (undefined ***)(**(code **)*local_38)(local_38,&local_178);
    }
    local_d8 = local_78;
    local_98 = (longlong *)0x0;
    if (local_140 != (undefined ***)0x0) {
      local_98 = (longlong *)(*(code *)**local_140)(local_140,local_d0);
    }
    local_90 = -1;
    local_88 = 0;
    plVar6 = local_98;
    while (((-1 < local_90 && (local_90 < *(int *)(local_d8 + 0x460))) &&
           (((local_88 = *(longlong *)(*(longlong *)(local_d8 + 0x458) + (longlong)local_90 * 8),
             local_88 == 0 || (*(char *)(local_88 + 0xe0) == '\0')) ||
            ((plVar6 != (longlong *)0x0 &&
             (local_188 = local_88, cVar1 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_188),
             plVar6 = local_98, cVar1 == '\0'))))))) {
      local_90 = local_90 + 1;
    }
    plVar6 = local_f8;
    if (local_140 != (undefined ***)0x0) {
      (*(code *)(*local_140)[4])
                (local_140,CONCAT71((int7)((ulonglong)&local_178 >> 8),local_140 != &local_178));
      plVar6 = local_f8;
    }
LAB_143049650:
    lVar4 = local_e8;
    if (local_f0 != local_90) {
      if ((local_f0 < 0) || (*(int *)(local_138 + 0x460) <= local_f0)) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
      if ((local_90 < 0) || (*(int *)(local_d8 + 0x460) <= local_90)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      if (cVar1 == cVar2) goto LAB_143049760;
      local_188 = 0;
      if (((*(longlong *)(param_2 + 8) != 0) &&
          (lVar5 = FWeakObjectPtr::Get(param_2), plVar6 = local_f8, lVar5 != 0)) &&
         (lVar5 = UObject::FindFunction(lVar5,*(undefined8 *)(param_2 + 8)), plVar6 = local_f8,
         lVar5 != 0)) {
        local_180 = lVar4;
        plVar6 = (longlong *)FWeakObjectPtr::Get(param_2);
        uVar7 = FUN_14178ac60(plVar6,*(undefined8 *)(param_2 + 8));
        (**(code **)(*plVar6 + 0x208))(plVar6,uVar7,&local_180);
        plVar6 = local_f8;
      }
      local_e8 = 0;
      do {
        local_f0 = local_f0 + 1;
        if ((local_f0 < 0) || (*(int *)(local_138 + 0x460) <= local_f0)) break;
        local_e8 = *(longlong *)(*(longlong *)(local_138 + 0x458) + (longlong)local_f0 * 8);
      } while (((local_e8 == 0) || (*(char *)(local_e8 + 0xe0) == '\0')) ||
              ((plVar6 != (longlong *)0x0 &&
               (local_180 = local_e8, cVar1 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_180),
               plVar6 = local_f8, cVar1 == '\0'))));
      goto LAB_143049650;
    }
LAB_143049760:
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x20))
                (local_98,CONCAT71((int7)((ulonglong)local_d0 >> 8),local_98 != local_d0));
      local_98 = (longlong *)0x0;
      plVar6 = local_f8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,plVar6 != local_130);
      local_f8 = (longlong *)0x0;
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x20))
                (local_38,CONCAT71((int7)((ulonglong)local_70 >> 8),local_38 != local_70));
    }
  }
  return;
}



// FUNCTION 1430497e0 FUN_1430497e0 body=985 status=ok
// SIG undefined FUN_1430497e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430497e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  undefined **local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined ***local_140;
  longlong local_138;
  longlong local_130 [7];
  longlong *local_f8;
  int local_f0;
  longlong local_e8;
  longlong local_d8;
  longlong local_d0 [7];
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong local_78;
  longlong local_70 [7];
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (((((longlong *)*param_1 != (longlong *)0x0) &&
       (lVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar4 != 0)) &&
      (iVar3 = FUN_1428cf800(lVar4), iVar3 != 3)) && (lVar4 = FUN_14304ca20(lVar4), lVar4 != 0)) {
    local_170 = (undefined4)*param_1;
    uStack_16c = *(undefined4 *)((longlong)param_1 + 4);
    uStack_168 = (undefined4)param_1[1];
    uStack_164 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_160 = (undefined4)param_1[2];
    uStack_15c = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_158 = (undefined4)param_1[3];
    uStack_154 = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_178 = &PTR_LAB_145a5f4c0;
    local_140 = &local_178;
    FUN_14303b5a0(lVar4,&local_78,&local_178);
    local_140 = (undefined ***)0x0;
    if (local_38 != (longlong *)0x0) {
      local_140 = (undefined ***)(**(code **)*local_38)(local_38,&local_178);
    }
    local_138 = local_78;
    local_f8 = (longlong *)0x0;
    if (local_140 != (undefined ***)0x0) {
      local_f8 = (longlong *)(*(code *)**local_140)(local_140,local_130);
    }
    local_e8 = 0;
    plVar6 = local_f8;
    lVar4 = local_138;
    local_f0 = 0;
    while (((-1 < local_f0 && (local_f0 < *(int *)(lVar4 + 0x460))) &&
           (((local_e8 = *(longlong *)(*(longlong *)(lVar4 + 0x458) + (longlong)local_f0 * 8),
             local_e8 == 0 || ((*(byte *)(local_e8 + 0xe4) & 1) == 0)) ||
            ((plVar6 != (longlong *)0x0 &&
             (local_188 = local_e8, cVar1 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_188),
             plVar6 = local_f8, lVar4 = local_138, cVar1 == '\0'))))))) {
      local_f0 = local_f0 + 1;
    }
    if (local_140 != (undefined ***)0x0) {
      (*(code *)(*local_140)[4])
                (local_140,CONCAT71((int7)((ulonglong)&local_178 >> 8),local_140 != &local_178));
    }
    local_140 = (undefined ***)0x0;
    if (local_38 != (longlong *)0x0) {
      local_140 = (undefined ***)(**(code **)*local_38)(local_38,&local_178);
    }
    local_d8 = local_78;
    local_98 = (longlong *)0x0;
    if (local_140 != (undefined ***)0x0) {
      local_98 = (longlong *)(*(code *)**local_140)(local_140,local_d0);
    }
    local_90 = -1;
    local_88 = 0;
    plVar6 = local_98;
    while (((-1 < local_90 && (local_90 < *(int *)(local_d8 + 0x460))) &&
           (((local_88 = *(longlong *)(*(longlong *)(local_d8 + 0x458) + (longlong)local_90 * 8),
             local_88 == 0 || ((*(byte *)(local_88 + 0xe4) & 1) == 0)) ||
            ((plVar6 != (longlong *)0x0 &&
             (local_188 = local_88, cVar1 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_188),
             plVar6 = local_98, cVar1 == '\0'))))))) {
      local_90 = local_90 + 1;
    }
    plVar6 = local_f8;
    if (local_140 != (undefined ***)0x0) {
      (*(code *)(*local_140)[4])
                (local_140,CONCAT71((int7)((ulonglong)&local_178 >> 8),local_140 != &local_178));
      plVar6 = local_f8;
    }
LAB_143049a30:
    lVar4 = local_e8;
    if (local_f0 != local_90) {
      if ((local_f0 < 0) || (*(int *)(local_138 + 0x460) <= local_f0)) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
      if ((local_90 < 0) || (*(int *)(local_d8 + 0x460) <= local_90)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      if (cVar1 == cVar2) goto LAB_143049b40;
      local_188 = 0;
      if (((*(longlong *)(param_2 + 8) != 0) &&
          (lVar5 = FWeakObjectPtr::Get(param_2), plVar6 = local_f8, lVar5 != 0)) &&
         (lVar5 = UObject::FindFunction(lVar5,*(undefined8 *)(param_2 + 8)), plVar6 = local_f8,
         lVar5 != 0)) {
        local_180 = lVar4;
        plVar6 = (longlong *)FWeakObjectPtr::Get(param_2);
        uVar7 = FUN_14178ac60(plVar6,*(undefined8 *)(param_2 + 8));
        (**(code **)(*plVar6 + 0x208))(plVar6,uVar7,&local_180);
        plVar6 = local_f8;
      }
      local_e8 = 0;
      do {
        local_f0 = local_f0 + 1;
        if ((local_f0 < 0) || (*(int *)(local_138 + 0x460) <= local_f0)) break;
        local_e8 = *(longlong *)(*(longlong *)(local_138 + 0x458) + (longlong)local_f0 * 8);
      } while (((local_e8 == 0) || ((*(byte *)(local_e8 + 0xe4) & 1) == 0)) ||
              ((plVar6 != (longlong *)0x0 &&
               (local_180 = local_e8, cVar1 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_180),
               plVar6 = local_f8, cVar1 == '\0'))));
      goto LAB_143049a30;
    }
LAB_143049b40:
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x20))
                (local_98,CONCAT71((int7)((ulonglong)local_d0 >> 8),local_98 != local_d0));
      local_98 = (longlong *)0x0;
      plVar6 = local_f8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,plVar6 != local_130);
      local_f8 = (longlong *)0x0;
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x20))
                (local_38,CONCAT71((int7)((ulonglong)local_70 >> 8),local_38 != local_70));
    }
  }
  return;
}



// FUNCTION 143049bc0 FUN_143049bc0 body=1832 status=ok
// SIG undefined FUN_143049bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143049bc0(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  undefined8 *puVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_198 [32];
  longlong local_178;
  float local_170;
  longlong local_168;
  undefined4 local_160;
  longlong local_158;
  longlong local_150;
  float local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  float local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 local_100;
  uint local_f8 [2];
  longlong local_f0;
  longlong local_e8;
  int local_e0;
  int local_d8;
  char local_d4;
  int local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  undefined8 local_a8;
  char local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_158 = param_2;
  local_140 = param_1;
  lVar10 = FWeakObjectPtr::Get(param_2 + 0x34);
  local_138 = lVar10;
  if (lVar10 != 0) {
    lVar11 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar11 = *(longlong *)(lVar10 + 0x168);
      if (lVar11 == 0) {
        local_178 = _DAT_1468b5d90;
        local_170 = DAT_1468b5d98;
      }
      else {
        local_178 = *(longlong *)(lVar11 + 0x220);
        local_170 = *(float *)(lVar11 + 0x228);
      }
      fVar29 = (float)((ulonglong)local_178 >> 0x20);
      fVar30 = (float)local_178;
      goto LAB_143049d3c;
    }
  }
  lVar10 = FWeakObjectPtr::Get(param_2 + 0x34);
  if (lVar10 == 0) {
    return;
  }
  uVar14 = UDamageableInterface::GetPrivateStaticClass();
  plVar12 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar10,uVar14);
  if (plVar12 == (longlong *)0x0) {
    return;
  }
  plVar13 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,&local_150);
  local_170 = *(float *)(plVar13 + 1);
  lVar11 = *plVar13;
  fVar29 = (float)((ulonglong)lVar11 >> 0x20);
  lVar10 = (**(code **)(*plVar12 + 0x20))(plVar12);
  local_178._0_4_ = (float)lVar11;
  fVar30 = (float)local_178;
  local_178 = lVar11;
  local_138 = lVar10;
LAB_143049d3c:
  fVar6 = local_170;
  uVar14 = FWeakObjectPtr::Get(param_2 + 0x34);
  FAIDataProviderValue::BindData(param_1 + 0x60,uVar14,*(undefined4 *)(param_2 + 0x30));
  fVar25 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x60);
  fVar25 = fVar25 * fVar25;
  local_168 = FUN_1429d7ab0();
  lVar11 = *(longlong *)(param_2 + 0x58);
  if (local_168 != 0) {
    lVar15 = FUN_1429d7ab0();
    lVar20 = local_168;
    do {
      if (lVar20 == lVar15) goto LAB_143049da0;
      lVar20 = *(longlong *)(lVar20 + 0x30);
    } while (lVar20 != 0);
  }
  local_168 = 0;
LAB_143049da0:
  local_f8[0] = 5;
  local_a0 = '\0';
  local_178 = lVar11;
  FUN_14044bc80(&local_f0,&local_178,&local_168);
  FUN_14045a130(local_f8);
  if (local_d4 == '\0') {
LAB_143049df2:
    lVar11 = local_c8;
    if ((fVar25 <= 0.0) ||
       ((*(longlong *)(param_1 + 0x90) != 0 &&
        (cVar8 = FUN_142c48f90(*(longlong *)(param_1 + 0x90),local_c8,lVar10), cVar8 != '\0')))) {
LAB_143049eb4:
      cVar8 = FUN_1430529a0(param_1,lVar10,lVar11);
      if (cVar8 != '\0') {
        FWeakObjectPtr::operator=(&local_178,lVar11);
        FUN_140ae9440(param_2,&local_178);
      }
    }
    else {
      lVar20 = *(longlong *)(lVar11 + 0x168);
      if (lVar20 == 0) {
        local_128 = DAT_1468b5d98;
        plVar12 = &local_130;
        local_130 = _DAT_1468b5d90;
      }
      else {
        plVar12 = &local_168;
        local_160 = *(undefined4 *)(lVar20 + 0x228);
        local_168 = *(longlong *)(lVar20 + 0x220);
      }
      local_150 = *plVar12;
      local_148 = *(float *)(plVar12 + 1);
      fVar28 = (float)local_150 - fVar30;
      fVar26 = (float)((ulonglong)local_150 >> 0x20) - fVar29;
      fVar27 = local_148 - fVar6;
      if (fVar28 * fVar28 + fVar26 * fVar26 + fVar27 * fVar27 <= fVar25) goto LAB_143049eb4;
    }
    lVar10 = local_f0;
    iVar24 = local_d8 + 1;
    if (iVar24 < local_b8 + local_e0) {
      lVar11 = (longlong)iVar24 * 8;
      iVar23 = local_b8;
      iVar21 = local_e0;
      do {
        if (iVar24 < iVar21) {
          lVar20 = *(longlong *)(lVar11 + local_e8);
        }
        else {
          lVar20 = *(longlong *)(local_c0 + (longlong)(iVar24 - iVar21) * 8);
        }
        local_d0 = local_d0 + 1;
        if ((lVar20 != 0) &&
           (lVar15 = AActor::GetLevel(lVar20), iVar23 = local_b8, iVar21 = local_e0, lVar15 != 0)) {
          if ((local_f8[0] & 1) != 0) {
            iVar1 = *(int *)(lVar20 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar22 = iVar1 >> 0x1f & 0xffff;
              uVar9 = iVar1 + uVar22;
              lVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                       (longlong)(int)((uVar9 & 0xffff) - uVar22) * 0x18;
            }
            else {
              lVar16 = 0;
            }
            if ((*(uint *)(lVar16 + 8) >> 0x1d & 1) != 0) goto LAB_14304a085;
          }
          if (((local_f8[0] >> 1 & 1) == 0) ||
             (cVar8 = FOutputDevice::CanBeUsedOnAnyThread(lVar20), iVar23 = local_b8,
             iVar21 = local_e0, cVar8 != '\0')) {
            if ((local_f8[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar15 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar15 + 0x205) & 0x10) == 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              piVar2 = *(int **)(lVar15 + 600);
              if (((*(longlong *)(lVar15 + 0xc0) == 0) ||
                  (piVar17 = (int *)UWorld::GetActiveLevelCollection(), piVar17 == (int *)0x0)) ||
                 (piVar2 == piVar17)) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if ((bVar4) || (bVar4 = false, bVar5)) {
                bVar4 = true;
              }
              iVar23 = local_b8;
              iVar21 = local_e0;
              if ((!bVar3) || (!bVar4)) goto LAB_14304a085;
            }
            lVar15 = ULevel::GetWorld(lVar15);
            iVar23 = local_b8;
            iVar21 = local_e0;
            if (lVar15 == lVar10) {
              lVar15 = AActor::GetLevel(lVar20);
              if (lVar15 == *(longlong *)(lVar10 + 0x30)) goto LAB_14304a1d3;
              lVar15 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              iVar23 = local_b8;
              iVar21 = local_e0;
              if (!bVar3) goto LAB_14304a1d3;
            }
          }
        }
LAB_14304a085:
        iVar24 = iVar24 + 1;
        lVar11 = lVar11 + 8;
        if (iVar23 + iVar21 <= iVar24) break;
      } while( true );
    }
    local_c8 = 0;
    local_d4 = '\x01';
    param_1 = local_140;
    param_2 = local_158;
  }
LAB_14304a0af:
  if (local_a0 != '\0') {
    local_a0 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_f0,local_a8);
    if (local_c0 != 0) {
      FMemory::Free();
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
  }
  if (*(char *)(param_1 + 0x9b) != '\0') {
    local_120 = *(undefined8 *)(param_2 + 0x58);
    local_118 = &local_120;
    local_110 = FUN_14073d760(&local_120,DAT_146b348a0);
    puVar7 = local_118;
    local_108 = &local_120;
    local_100 = 0;
    puVar18 = (undefined8 *)FUN_14073d760(local_118,local_110);
    puVar19 = (undefined8 *)FUN_14073d760(local_108,local_100);
    lVar11 = local_138;
    lVar10 = local_158;
    for (; puVar18 != puVar19; puVar18 = (undefined8 *)FUN_14073d760(puVar7,*puVar18)) {
      lVar20 = *(longlong *)(puVar18[2] + 0x118);
      if (lVar20 != 0) {
        if ((0.0 < fVar25) &&
           ((*(longlong *)(param_1 + 0x90) == 0 ||
            (cVar8 = FUN_142c48f90(*(longlong *)(param_1 + 0x90),lVar20,lVar11), cVar8 == '\0')))) {
          lVar15 = *(longlong *)(lVar20 + 0x168);
          if (lVar15 == 0) {
            local_148 = DAT_1468b5d98;
            plVar12 = &local_150;
            local_150 = _DAT_1468b5d90;
          }
          else {
            plVar12 = &local_168;
            local_160 = *(undefined4 *)(lVar15 + 0x228);
            local_168 = *(longlong *)(lVar15 + 0x220);
          }
          local_128 = *(float *)(plVar12 + 1);
          fVar28 = (float)*plVar12 - fVar30;
          fVar27 = (float)((ulonglong)*plVar12 >> 0x20) - fVar29;
          fVar26 = local_128 - fVar6;
          if (fVar25 < fVar28 * fVar28 + fVar27 * fVar27 + fVar26 * fVar26) goto LAB_14304a285;
        }
        cVar8 = FUN_1430529a0(param_1,lVar11,lVar20);
        if (cVar8 != '\0') {
          FWeakObjectPtr::operator=(&local_178,lVar20);
          FUN_140ae9440(lVar10,&local_178);
        }
      }
LAB_14304a285:
    }
  }
  return;
LAB_14304a1d3:
  lVar10 = local_138;
  param_1 = local_140;
  param_2 = local_158;
  local_d8 = iVar24;
  local_c8 = lVar20;
  if (local_d4 != '\0') goto LAB_14304a0af;
  goto LAB_143049df2;
}



// FUNCTION 14304a2f0 FUN_14304a2f0 body=52 status=ok
// SIG undefined FUN_14304a2f0(void)

undefined8 FUN_14304a2f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_142e27720();
                    /* WARNING: Could not recover jumptable at 0x00014304a315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14304a330 FUN_14304a330 body=77 status=ok
// SIG undefined FUN_14304a330(void)

longlong * FUN_14304a330(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = (**(code **)(*param_1 + 0xf0))(param_1,param_3);
  lVar3 = 0;
  param_2[1] = 0;
  *param_2 = lVar1;
  if (lVar1 != 0) {
    uVar2 = UDamageableInterface::GetPrivateStaticClass();
    lVar3 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
  }
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 14304a380 FUN_14304a380 body=63 status=ok
// SIG undefined FUN_14304a380(void)

undefined8 FUN_14304a380(longlong param_1,char param_2)

{
  if (param_2 == '\x01') {
    return *(undefined8 *)(param_1 + 0x148);
  }
  if (param_2 == '\x02') {
    return *(undefined8 *)(param_1 + 0x140);
  }
  if (param_2 == '\x03') {
    return *(undefined8 *)(param_1 + 0xf0);
  }
  if (param_2 == '\x04') {
    return *(undefined8 *)(param_1 + 0x118);
  }
  return 0;
}



// FUNCTION 14304a3c0 FUN_14304a3c0 body=77 status=ok
// SIG undefined FUN_14304a3c0(void)

undefined8 FUN_14304a3c0(longlong param_1,char param_2)

{
  if (param_2 == '\x01') {
    return *(undefined8 *)(param_1 + 0x168);
  }
  if (param_2 == '\x02') {
    return *(undefined8 *)(param_1 + 0x140);
  }
  if (param_2 == '\x03') {
    return *(undefined8 *)(param_1 + 0x148);
  }
  if (param_2 != '\x04') {
    if (param_2 == '\x05') {
      return *(undefined8 *)(param_1 + 0x1c0);
    }
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x150);
}



// FUNCTION 14304a410 FUN_14304a410 body=465 status=ok
// SIG undefined FUN_14304a410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14304a410(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_2 != 0) {
    uVar3 = UDamageableInterface::GetPrivateStaticClass();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      local_b8 = 0x10000;
      local_c0 = 0;
      local_c8 = 0;
      local_a8 = 0;
      local_80 = (longlong *)0x0;
      local_78 = 0;
      local_60 = 0;
      local_58 = 0;
      local_b0 = 0;
      local_d8 = (longlong *)0x0;
      local_b4 = 0;
      local_a4 = 0x101;
      local_ac = 0;
      local_b2 = 0;
      (**(code **)(*plVar4 + 0xb0))(plVar4,&local_c8,0);
      FUN_143037b00(param_3,local_70);
      plVar4 = local_80;
      if (local_60 != 0) {
        FMemory::Free();
        plVar4 = local_80;
      }
      goto joined_r0x00014304a5bf;
    }
  }
  uVar8 = 0;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  FUN_14222dd40(param_2,&local_d8,1);
  if (*(int *)(param_3 + 0x2c) < (int)local_d0) {
    FUN_141f62110(param_3,local_d0 & 0xffffffff);
  }
  uVar7 = (ulonglong)((longlong)(local_d8 + (int)local_d0) + (7 - (longlong)local_d8)) >> 3;
  if (local_d8 + (int)local_d0 < local_d8) {
    uVar7 = uVar8;
  }
  plVar6 = local_d8;
  plVar4 = local_d8;
  if (uVar7 != 0) {
    do {
      if (*plVar6 != 0) {
        iVar1 = *(int *)(param_3 + 0x28);
        uVar2 = *(undefined4 *)(*plVar6 + 0xc);
        *(int *)(param_3 + 0x28) = iVar1 + 1;
        if (*(int *)(param_3 + 0x2c) < iVar1 + 1) {
          TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_3,iVar1);
        }
        lVar5 = *(longlong *)(param_3 + 0x20);
        if (*(longlong *)(param_3 + 0x20) == 0) {
          lVar5 = param_3;
        }
        *(undefined4 *)(lVar5 + (longlong)iVar1 * 4) = uVar2;
      }
      uVar8 = uVar8 + 1;
      plVar6 = plVar6 + 1;
      plVar4 = local_d8;
    } while (uVar8 != uVar7);
  }
joined_r0x00014304a5bf:
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  return;
}



// FUNCTION 14304a5f0 FUN_14304a5f0 body=42 status=ok
// SIG undefined FUN_14304a5f0(void)

longlong FUN_14304a5f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1c0);
  if (lVar2 != 0) {
    lVar1 = FUN_142d39be0(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 14304a620 FUN_14304a620 body=243 status=ok
// SIG undefined FUN_14304a620(void)

undefined8 * FUN_14304a620(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_28;
  float fStack_24;
  float fStack_20;
  
  *(undefined4 *)(param_2 + 1) = 0x3f800000;
  *param_2 = 0;
  if ((*(uint *)(param_1 + 0xe4) >> 4 & 1) != 0) {
    FUN_14304a960(param_1 + 0x1c0,&local_48);
    local_28 = *(float *)(param_1 + 0x1f0) * local_28;
    fStack_24 = *(float *)(param_1 + 500) * fStack_24;
    fStack_20 = *(float *)(param_1 + 0x1f8) * fStack_20;
    fVar1 = fStack_20 * fStack_44 - fStack_24 * fStack_40;
    fVar2 = local_28 * fStack_40 - fStack_20 * local_48;
    fVar3 = fStack_24 * local_48 - local_28 * fStack_44;
    fVar1 = fVar1 + fVar1;
    fVar2 = fVar2 + fVar2;
    fVar3 = fVar3 + fVar3;
    *param_2 = CONCAT44((fVar1 * fStack_40 - fVar3 * local_48) + fStack_3c * fVar2 + fStack_24,
                        (fVar3 * fStack_44 - fVar2 * fStack_40) + fStack_3c * fVar1 + local_28);
    *(float *)(param_2 + 1) = (fVar2 * local_48 - fVar1 * fStack_44) + fStack_3c * fVar3 + fStack_20
    ;
  }
  return param_2;
}



// FUNCTION 14304a720 FUN_14304a720 body=130 status=ok
// SIG undefined FUN_14304a720(void)

ulonglong FUN_14304a720(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((param_2 != 0) && (lVar1 = FUN_142df3510(param_2), lVar1 != 0)) {
    uVar2 = FUN_142dec940(lVar1,*(undefined8 *)(param_1 + 0x140));
    uVar3 = uVar2 & 0xffffffff;
    if ((int)uVar2 != 2) {
      return uVar2;
    }
    lVar1 = FUN_142d29780(param_2);
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x840) >> 3 & 1) != 0)) {
      uVar3 = 1;
    }
    return uVar3;
  }
  return 1;
}



// FUNCTION 14304a7b0 FUN_14304a7b0 body=429 status=ok
// SIG undefined FUN_14304a7b0(void)

undefined8 * FUN_14304a7b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if (param_2 - 1U < 5) {
    bVar4 = false;
    if (4 < param_2) {
      return (undefined8 *)0xffffffff;
    }
  }
  else {
    bVar4 = true;
  }
  puVar9 = (undefined8 *)0x0;
  iVar2 = *DAT_146b47618;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x478)) {
    puVar7 = *(undefined8 **)(param_1 + 0x470);
    puVar8 = puVar9;
    puVar10 = puVar9;
    puVar11 = puVar9;
    do {
      piVar3 = (int *)*puVar7;
      if ((bVar4) || (*piVar3 != DAT_1464aaa8c)) {
        if (piVar3[6] < iVar2) {
          return puVar11;
        }
      }
      else {
        iVar5 = iVar2 - piVar3[6];
        if (iVar2 - piVar3[6] < 1) {
          iVar5 = 0;
        }
        puVar8 = (undefined8 *)(ulonglong)(uint)((int)puVar8 + iVar5);
      }
      iVar5 = (int)puVar8;
      puVar11 = (undefined8 *)(ulonglong)((int)puVar11 + 1);
      puVar10 = (undefined8 *)((longlong)puVar10 + 1);
      puVar7 = puVar7 + 1;
    } while ((longlong)puVar10 < (longlong)*(int *)(param_1 + 0x478));
  }
  if (iVar2 <= iVar5) {
    return (undefined8 *)0xffffffff;
  }
  plVar1 = (longlong *)(param_1 + 0x470);
  uVar6 = FMemory::Malloc(0x98,0);
  iVar2 = *(int *)(param_1 + 0x478);
  *(int *)(param_1 + 0x478) = iVar2 + 1;
  if (*(int *)(param_1 + 0x47c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar6;
  puVar7 = *(undefined8 **)(*plVar1 + (longlong)iVar2 * 8);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    FTickFunction::FTickFunction(puVar7 + 6);
    puVar7[0x10] = 0;
    puVar7[6] = &PTR_FUN_145a5bf10;
    *(undefined4 *)(puVar7 + 0x11) = 0xffffffff;
    *(byte *)((longlong)puVar7 + 0x3c) = *(byte *)((longlong)puVar7 + 0x3c) & 0xfb | 2;
    *(undefined1 *)(puVar7 + 7) = 2;
    puVar7[0x12] = 0;
    *puVar7 = 0;
    *(undefined1 *)(puVar7 + 1) = 0;
    puVar9 = puVar7;
  }
  iVar2 = *(int *)(param_1 + 0x478);
  *(undefined4 *)puVar9 = 0;
  *(int *)(puVar9 + 0x11) = iVar2 + -1;
  puVar9[0x10] = param_1;
  *(undefined1 *)(puVar9 + 7) = 2;
  FTickFunction::AddPrerequisite(puVar9 + 6,param_1,param_1 + 0x28);
  uVar6 = AActor::GetLevel(param_1);
  FTickFunction::RegisterTickFunction(puVar9 + 6,uVar6);
  return (undefined8 *)(ulonglong)(*(int *)(param_1 + 0x478) - 1);
}



// FUNCTION 14304a960 FUN_14304a960 body=325 status=ok
// SIG undefined FUN_14304a960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14304a960(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  uVar1 = uRam00000001468b5b78;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *param_2 = _DAT_1468b5b70;
  param_2[1] = uVar1;
  uVar4 = uRam00000001468b5b8c;
  uVar3 = uRam00000001468b5b88;
  uVar2 = uRam00000001468b5b84;
  *(undefined4 *)(param_2 + 2) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 3) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
  uVar4 = uRam00000001468b5b9c;
  uVar3 = uRam00000001468b5b98;
  uVar2 = uRam00000001468b5b94;
  *(undefined4 *)(param_2 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar2;
  *(undefined4 *)(param_2 + 5) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar4;
  plVar10 = (longlong *)param_1[1];
  if ((plVar10 != (longlong *)0x0) ||
     ((*param_1 != 0 && (plVar10 = *(longlong **)(*param_1 + 0x168), plVar10 != (longlong *)0x0))))
  {
    iVar9 = 0;
    local_78 = 0;
    plVar7 = plVar10;
    if ((param_1[2] != 0) &&
       ((cVar5 = (**(code **)(*plVar10 + 0x440))(plVar10,param_1[2]), cVar5 == '\0' &&
        (iVar6 = UWorld::GetNumPlayerControllers(plVar10), 0 < iVar6)))) {
      do {
        plVar7 = (longlong *)UKWMeshArray::GetMeshByIndex(plVar10,iVar9);
        if ((plVar7 != (longlong *)0x0) &&
           (cVar5 = (**(code **)(*plVar7 + 0x440))(plVar7,param_1[2]), cVar5 != '\0')) break;
        iVar9 = iVar9 + 1;
        plVar7 = plVar10;
      } while (iVar9 < iVar6);
    }
    if (plVar7 != (longlong *)0x0) {
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x420))(plVar7,local_68,param_1[2],0);
      uVar1 = puVar8[1];
      *param_2 = *puVar8;
      param_2[1] = uVar1;
      uVar1 = puVar8[3];
      param_2[2] = puVar8[2];
      param_2[3] = uVar1;
      uVar1 = puVar8[5];
      param_2[4] = puVar8[4];
      param_2[5] = uVar1;
    }
  }
  return param_2;
}



// FUNCTION 14304aab0 FUN_14304aab0 body=183 status=ok
// SIG undefined FUN_14304aab0(void)

undefined8 * FUN_14304aab0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  
  plVar1 = (longlong *)*param_1;
  *param_2 = 0;
  if ((((plVar1 != (longlong *)0x0) && (local_res8 = 0, param_1[2] != 0)) &&
      ((lVar3 = param_1[1], lVar3 != 0 || (lVar3 = (**(code **)(*plVar1 + 0x3b8))(), lVar3 != 0))))
     && (lVar3 = FUN_14304df60(param_1,lVar3), lVar3 != 0)) {
    lVar4 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      puVar5 = (undefined8 *)FUN_1423b0980(lVar3,&local_res8,param_1[2]);
      *param_2 = *puVar5;
    }
  }
  return param_2;
}



// FUNCTION 14304ab70 FUN_14304ab70 body=63 status=ok
// SIG undefined FUN_14304ab70(void)

longlong FUN_14304ab70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x180);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      return plVar1[0x1f];
    }
  }
  return lVar2;
}



// FUNCTION 14304abb0 FUN_14304abb0 body=63 status=ok
// SIG undefined FUN_14304abb0(void)

longlong FUN_14304abb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      return plVar1[0x1f];
    }
  }
  return lVar2;
}



// FUNCTION 14304abf0 FUN_14304abf0 body=60 status=ok
// SIG undefined FUN_14304abf0(void)

longlong FUN_14304abf0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      return plVar1[0x1f];
    }
  }
  return lVar2;
}



// FUNCTION 14304ac30 FUN_14304ac30 body=97 status=ok
// SIG undefined FUN_14304ac30(void)

undefined8 FUN_14304ac30(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x21;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Retrieves all projectile targets",0x42);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14304aca0 FUN_14304aca0 body=97 status=ok
// SIG undefined FUN_14304aca0(void)

undefined8 FUN_14304aca0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x18;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Find Projectile Targets",0x30);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14304ad10 FUN_14304ad10 body=812 status=ok
// SIG undefined FUN_14304ad10(void)

longlong *
FUN_14304ad10(longlong param_1,longlong *param_2,uint param_3,longlong *param_4,char param_5,
             char *param_6)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  
  if (param_4 == (longlong *)0x0) {
    lVar6 = *(longlong *)(param_1 + 400);
  }
  else {
    plVar5 = (longlong *)FUN_14307d8a0(param_4,local_res8);
    lVar6 = *plVar5;
  }
  plVar13 = *(longlong **)(param_1 + 0x180);
  plVar5 = plVar13 + *(int *)(param_1 + 0x188);
  for (; plVar13 != plVar5; plVar13 = plVar13 + 1) {
    lVar8 = *plVar13;
    if (lVar8 != 0) {
      plVar10 = *(longlong **)(lVar8 + 0x38);
      plVar11 = plVar10 + *(int *)(lVar8 + 0x40);
      for (; plVar10 != plVar11; plVar10 = plVar10 + 1) {
        if (*plVar10 == lVar6) goto LAB_14304ad9e;
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x178);
LAB_14304ad9e:
  if (lVar8 == 0) {
LAB_14304b017:
    *param_2 = 0;
  }
  else {
    plVar13 = *(longlong **)(lVar8 + 0x48);
    lVar6 = 0;
    iVar2 = *(int *)(lVar8 + 0x50);
    plVar5 = (longlong *)0x0;
    if (plVar13 != plVar13 + (longlong)iVar2 * 6) {
      plVar11 = plVar13 + 2;
      do {
        if ((*(byte *)(plVar11 + -2) == param_3) &&
           (cVar4 = FUN_142c48f90(plVar11[-1],param_4,0), cVar4 != '\0')) {
          plVar12 = (longlong *)*plVar11;
          plVar10 = plVar12 + (longlong)(int)plVar11[1] * 3;
          for (; (plVar12 != plVar10 &&
                 ((cVar4 = FUN_142c48f90(*plVar12,param_4,0), cVar4 == '\0' ||
                  (plVar5 = plVar12 + 1, *plVar12 == 0)))); plVar12 = plVar12 + 3) {
          }
          if ((plVar5 != (longlong *)0x0) && (plVar11[-1] != 0)) break;
        }
        plVar10 = plVar11 + 4;
        plVar11 = plVar11 + 6;
      } while (plVar10 != plVar13 + (longlong)iVar2 * 6);
      if (plVar5 != (longlong *)0x0) {
        plVar13 = (longlong *)*plVar5;
        plVar5 = plVar13 + (longlong)(int)plVar5[1] * 3;
        if (plVar13 != plVar5) {
          do {
            cVar4 = FUN_142c48f90(*plVar13,param_4,0);
            if (cVar4 != '\0') {
              lVar6 = plVar13[1];
              *param_6 = (char)plVar13[2];
              if (*plVar13 != 0) break;
            }
            plVar13 = plVar13 + 3;
          } while (plVar13 != plVar5);
          if (lVar6 != 0) {
            lVar7 = FUN_142e20fc0();
            lVar8 = lVar6;
            while (lVar8 != lVar7) {
              lVar8 = *(longlong *)(lVar8 + 0x30);
              if (lVar8 == 0) {
                *param_2 = lVar6;
                return param_2;
              }
            }
            if (param_4 != (longlong *)0x0) {
              if (((param_5 != '\0') && (*param_6 == '\x02')) && (lVar8 = param_4[0x23], lVar8 != 0)
                 ) {
                lVar7 = APostProcessVolume::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  plVar5 = *(longlong **)(lVar8 + 0x4c0);
LAB_14304af89:
                  if (((plVar5 != (longlong *)0x0) &&
                      (cVar4 = (**(code **)(*plVar5 + 0x460))(plVar5), cVar4 != '\0')) &&
                     (fVar1 = *(float *)((longlong)plVar5 + 0x36c),
                     lVar8 = (**(code **)(*param_4 + 0x148))(param_4),
                     1.0 < *(float *)(lVar8 + 0x790) - fVar1)) goto LAB_14304b017;
                }
                else {
                  plVar5 = *(longlong **)(lVar8 + 0x168);
                  if (plVar5 != (longlong *)0x0) {
                    lVar8 = FUN_1429bed90();
                    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                        lVar8 + 0x88)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (bVar3) goto LAB_14304af89;
                  }
                }
              }
              lVar8 = param_4[0x23];
              if (lVar8 != 0) {
                uVar9 = FUN_1430a8880();
                plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar9);
                if ((plVar5 != (longlong *)0x0) &&
                   (cVar4 = (**(code **)(*plVar5 + 0x118))(plVar5,param_3,param_4,*param_6),
                   cVar4 == '\0')) goto LAB_14304b017;
              }
            }
          }
        }
      }
    }
    *param_2 = lVar6;
  }
  return param_2;
}



// FUNCTION 14304b040 FUN_14304b040 body=9 status=ok
// SIG undefined FUN_14304b040(void)

undefined4 FUN_14304b040(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x22c);
}



// FUNCTION 14304b050 FUN_14304b050 body=293 status=ok
// SIG undefined FUN_14304b050(void)

float * FUN_14304b050(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_28 [12];
  undefined1 local_1c [20];
  
  fVar1 = *(float *)(param_1 + 0x160);
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x158);
  param_2[2] = fVar1;
  if ((*(ushort *)(param_1 + 0xe8) >> 9 & 1) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x150);
    if (plVar3 == (longlong *)0x0) {
      fVar1 = *(float *)(param_1 + 300);
      *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x124);
      param_2[2] = fVar1;
    }
    else {
      uVar4 = FUN_142e79d90();
      lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)
                 (**(code **)(**(longlong **)(param_1 + 0x150) + 0x618))
                           (*(longlong **)(param_1 + 0x150),local_1c,0);
      }
      else {
        puVar6 = (undefined8 *)FUN_142dd0240(lVar5,local_28);
      }
      fVar2 = *(float *)(puVar6 + 1);
      *(undefined8 *)param_2 = *puVar6;
      fVar1 = *(float *)(param_1 + 0x158);
      param_2[2] = fVar2;
      if (((fVar1 != 0.0) || (*(float *)(param_1 + 0x15c) != 0.0)) ||
         (*(float *)(param_1 + 0x160) != 0.0)) {
        fVar2 = *(float *)(param_1 + 0x160);
        *param_2 = fVar1 + *param_2;
        fVar1 = *(float *)(param_1 + 0x15c);
        param_2[2] = fVar2 + param_2[2];
        param_2[1] = fVar1 + param_2[1];
        return param_2;
      }
    }
  }
  return param_2;
}



// FUNCTION 14304b180 FUN_14304b180 body=1374 status=ok
// SIG undefined FUN_14304b180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14304b180(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  longlong local_1e0;
  undefined **local_1d8 [7];
  undefined ***local_1a0;
  longlong local_198 [7];
  longlong *local_160;
  longlong local_158;
  longlong local_150 [7];
  longlong *local_118;
  int local_110;
  longlong *local_108;
  longlong local_f8;
  longlong local_f0 [7];
  longlong *local_b8;
  int local_b0;
  longlong *local_a8;
  longlong local_98;
  longlong local_90 [7];
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar12 = (longlong *)param_1[5];
  uVar14 = 0;
  uVar15 = (longlong)(int)param_1[6] & 0x1fffffffffffffff;
  if (plVar12 + (int)param_1[6] < plVar12) {
    uVar15 = uVar14;
  }
  local_1e8 = param_1;
  if (uVar15 != 0) {
    do {
      lVar13 = *plVar12;
      if (lVar13 != 0) {
        uVar6 = *(uint *)(lVar13 + 0xc);
        lVar7 = 0;
        if ((int)uVar6 < (int)DAT_1469e91c4) {
          uVar11 = uVar6 & 0xffff;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + 0xffff;
            uVar11 = uVar11 - 0x10000;
          }
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                  (longlong)(int)uVar11 * 0x18;
        }
        if ((((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) &&
            (lVar7 = *(longlong *)(lVar13 + 0x1a0), lVar7 != 0)) &&
           ((param_3 == '\0' || (*(char *)(lVar13 + 0x200) != '\0')))) {
          plVar10 = (longlong *)*param_2;
          iVar3 = (int)param_2[1];
          plVar1 = plVar10 + (longlong)iVar3 * 2;
          for (; local_1e0 = lVar7, plVar10 != plVar1; plVar10 = plVar10 + 2) {
            if (*plVar10 == lVar7) goto LAB_14304b2bc;
          }
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
          }
          plVar10 = (longlong *)(*param_2 + (longlong)iVar3 * 0x10);
          *plVar10 = 0;
          plVar10[1] = 0;
          *plVar10 = local_1e0;
LAB_14304b2bc:
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        }
      }
      plVar12 = plVar12 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar15);
  }
  uVar8 = (**(code **)(*local_1e8 + 0x148))(local_1e8);
  local_98 = FUN_14304ca20(uVar8);
  if (local_98 != 0) {
    local_1d8[0] = &PTR_FUN_145a5f430;
    local_1a0 = local_1d8;
    local_160 = (longlong *)0x0;
    local_160 = (longlong *)FUN_143065790(local_1d8,local_198);
    local_58 = (longlong *)0x0;
    if ((local_160 != (longlong *)0x0) &&
       (local_58 = (longlong *)(**(code **)*local_160)(local_160,local_90),
       local_160 != (longlong *)0x0)) {
      (**(code **)(*local_160 + 0x20))(local_160,local_160 != local_198);
      local_160 = (longlong *)0x0;
    }
    if (local_1a0 != (undefined ***)0x0) {
      (*(code *)(*local_1a0)[4])(local_1a0,local_1a0 != local_1d8);
    }
    local_1a0 = (undefined ***)0x0;
    if (local_58 != (longlong *)0x0) {
      local_1a0 = (undefined ***)(**(code **)*local_58)(local_58,local_1d8);
    }
    local_158 = local_98;
    local_118 = (longlong *)0x0;
    if (local_1a0 != (undefined ***)0x0) {
      local_118 = (longlong *)(*(code *)**local_1a0)(local_1a0,local_150);
    }
    local_108 = (longlong *)0x0;
    plVar12 = local_118;
    lVar13 = local_158;
    local_110 = 0;
    while (((-1 < local_110 && (local_110 < *(int *)(lVar13 + 0x460))) &&
           (((local_108 = *(longlong **)(*(longlong *)(lVar13 + 0x458) + (longlong)local_110 * 8),
             local_108 == (longlong *)0x0 || ((*(byte *)((longlong)local_108 + 0xe4) & 1) == 0)) ||
            ((plVar12 != (longlong *)0x0 &&
             (local_1e8 = local_108, cVar4 = (**(code **)(*plVar12 + 0x10))(plVar12,&local_1e8),
             plVar12 = local_118, lVar13 = local_158, cVar4 == '\0'))))))) {
      local_110 = local_110 + 1;
    }
    if (local_1a0 != (undefined ***)0x0) {
      (*(code *)(*local_1a0)[4])
                (local_1a0,CONCAT71((int7)((ulonglong)local_1d8 >> 8),local_1a0 != local_1d8));
    }
    local_1a0 = (undefined ***)0x0;
    if (local_58 != (longlong *)0x0) {
      local_1a0 = (undefined ***)(**(code **)*local_58)(local_58,local_1d8);
    }
    local_f8 = local_98;
    local_b8 = (longlong *)0x0;
    if (local_1a0 != (undefined ***)0x0) {
      local_b8 = (longlong *)(*(code *)**local_1a0)(local_1a0,local_f0);
    }
    local_b0 = -1;
    local_a8 = (longlong *)0x0;
    plVar12 = local_b8;
    while (((-1 < local_b0 && (local_b0 < *(int *)(local_f8 + 0x460))) &&
           (((local_a8 = *(longlong **)(*(longlong *)(local_f8 + 0x458) + (longlong)local_b0 * 8),
             local_a8 == (longlong *)0x0 || ((*(byte *)((longlong)local_a8 + 0xe4) & 1) == 0)) ||
            ((plVar12 != (longlong *)0x0 &&
             (local_1e8 = local_a8, cVar4 = (**(code **)(*plVar12 + 0x10))(plVar12,&local_1e8),
             plVar12 = local_b8, cVar4 == '\0'))))))) {
      local_b0 = local_b0 + 1;
    }
    plVar12 = local_118;
    lVar13 = local_158;
    if (local_1a0 != (undefined ***)0x0) {
      (*(code *)(*local_1a0)[4])
                (local_1a0,CONCAT71((int7)((ulonglong)local_1d8 >> 8),local_1a0 != local_1d8));
      plVar12 = local_118;
      lVar13 = local_158;
    }
LAB_14304b541:
    if (local_110 != local_b0) {
      if ((local_110 < 0) || (*(int *)(lVar13 + 0x460) <= local_110)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
      if ((local_b0 < 0) || (*(int *)(local_f8 + 0x460) <= local_b0)) {
        cVar5 = '\0';
      }
      else {
        cVar5 = '\x01';
      }
      if (cVar4 == cVar5) goto LAB_14304b65b;
      local_1e8 = (longlong *)local_108[0x2a];
      if (local_1e8 != (longlong *)0x0) {
        puVar9 = (undefined8 *)*param_2;
        iVar3 = (int)param_2[1];
        puVar2 = puVar9 + (longlong)iVar3 * 2;
        for (; puVar9 != puVar2; puVar9 = puVar9 + 2) {
          if ((longlong *)*puVar9 == local_1e8) goto LAB_14304b5e0;
        }
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
        }
        puVar9 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x10);
        *puVar9 = 0;
        puVar9[1] = 0;
        *puVar9 = local_1e8;
LAB_14304b5e0:
        *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
        plVar12 = local_118;
        lVar13 = local_158;
      }
      local_108 = (longlong *)0x0;
      do {
        local_110 = local_110 + 1;
        if ((local_110 < 0) || (*(int *)(lVar13 + 0x460) <= local_110)) break;
        local_108 = *(longlong **)(*(longlong *)(lVar13 + 0x458) + (longlong)local_110 * 8);
      } while (((local_108 == (longlong *)0x0) || ((*(byte *)((longlong)local_108 + 0xe4) & 1) == 0)
               ) || ((plVar12 != (longlong *)0x0 &&
                     (local_1e8 = local_108,
                     cVar4 = (**(code **)(*plVar12 + 0x10))(plVar12,&local_1e8), plVar12 = local_118
                     , lVar13 = local_158, cVar4 == '\0'))));
      goto LAB_14304b541;
    }
LAB_14304b65b:
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x20))
                (local_b8,CONCAT71((int7)((ulonglong)local_f0 >> 8),local_b8 != local_f0));
      local_b8 = (longlong *)0x0;
      plVar12 = local_118;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12,plVar12 != local_150);
      local_118 = (longlong *)0x0;
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x20))
                (local_58,CONCAT71((int7)((ulonglong)local_90 >> 8),local_58 != local_90));
    }
  }
  return;
}



// FUNCTION 14304b6e0 FUN_14304b6e0 body=33 status=ok
// SIG undefined FUN_14304b6e0(void)

longlong FUN_14304b6e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x150);
  if ((lVar1 == 0) && (lVar1 = 0, *(longlong *)(param_1 + 0xb0) != 0)) {
    return *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x80);
  }
  return lVar1;
}



// FUNCTION 14304b710 FUN_14304b710 body=33 status=ok
// SIG undefined FUN_14304b710(void)

longlong FUN_14304b710(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x170);
  if ((lVar1 == 0) && (lVar1 = 0, *(longlong *)(param_1 + 0xa8) != 0)) {
    return *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xd0);
  }
  return lVar1;
}



// FUNCTION 14304b740 FUN_14304b740 body=51 status=ok
// SIG undefined FUN_14304b740(void)

float FUN_14304b740(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x278) != 0) {
    fVar1 = (float)FUN_14307cb30();
    fVar2 = fVar2 * fVar1;
  }
  return fVar2;
}



// FUNCTION 14304b780 FUN_14304b780 body=329 status=ok
// SIG undefined FUN_14304b780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14304b780(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  local_res18 = *param_3;
  local_res1c = param_3[1];
  lVar3 = FWeakObjectPtr::Get(&local_res18);
  if (lVar3 != 0) {
    uVar4 = UDamageableInterface::GetPrivateStaticClass();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,param_2);
      return param_2;
    }
    lVar6 = FUN_1428dfc70();
    uVar1 = DAT_1468b5d98;
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = *(longlong *)(lVar3 + 0x168);
      if (lVar3 != 0) {
        uVar1 = *(undefined4 *)(lVar3 + 0x228);
        *param_2 = *(undefined8 *)(lVar3 + 0x220);
        *(undefined4 *)(param_2 + 1) = uVar1;
        return param_2;
      }
      *param_2 = _DAT_1468b5d90;
      *(undefined4 *)(param_2 + 1) = uVar1;
      return param_2;
    }
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 14304b8d0 FUN_14304b8d0 body=349 status=ok
// SIG undefined FUN_14304b8d0(void)

undefined8 * FUN_14304b8d0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  longlong lVar9;
  
  local_res18 = *param_3;
  local_res1c = param_3[1];
  lVar5 = FWeakObjectPtr::Get(&local_res18);
  if (lVar5 != 0) {
    uVar6 = UDamageableInterface::GetPrivateStaticClass();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7,param_2);
      return param_2;
    }
    lVar8 = FUN_1428dfc70();
    iVar3 = *(int *)(lVar8 + 0x90);
    lVar9 = (longlong)iVar3;
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar3) ||
       (lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88),
       *(longlong *)(lVar9 + (longlong)iVar3 * 8) != lVar8 + 0x88)) {
      uVar2 = (uint)lVar9 & 0xffffff00;
    }
    else {
      uVar2 = (uint)CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
    }
    if ((char)uVar2 != '\0') {
      lVar5 = *(longlong *)(lVar5 + 0x168);
      if (lVar5 == 0) {
        uVar11 = (undefined4)DAT_1468b5da0;
        uVar12 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        uVar4 = DAT_1468b5da8;
      }
      else {
        local_18 = *(float *)(lVar5 + 0x210);
        fStack_14 = *(float *)(lVar5 + 0x214);
        fStack_10 = *(float *)(lVar5 + 0x218);
        fStack_c = *(float *)(lVar5 + 0x21c);
        auVar1._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_14);
        auVar1._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_18);
        auVar1._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_10);
        auVar1._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_c);
        iVar3 = movmskps(uVar2,auVar1);
        if (iVar3 != 0) {
          *(float *)(lVar5 + 0x250) = local_18;
          *(float *)(lVar5 + 0x254) = fStack_14;
          *(float *)(lVar5 + 600) = fStack_10;
          *(float *)(lVar5 + 0x25c) = fStack_c;
          puVar10 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
          *(undefined8 *)(lVar5 + 0x260) = *puVar10;
          *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar10 + 1);
        }
        uVar11 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
        uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
        uVar4 = *(undefined4 *)(lVar5 + 0x268);
      }
      *param_2 = CONCAT44(uVar12,uVar11);
      *(undefined4 *)(param_2 + 1) = uVar4;
      return param_2;
    }
  }
  *param_2 = DAT_1468b5da0;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5da8;
  return param_2;
}



// FUNCTION 14304ba30 FUN_14304ba30 body=43 status=ok
// SIG undefined FUN_14304ba30(void)

float FUN_14304ba30(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x178);
  if (fVar1 < 0.0) {
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      return *(float *)(*(longlong *)(param_1 + 0xb0) + 0x30);
    }
    fVar1 = 1.0;
  }
  return fVar1;
}



// FUNCTION 14304ba60 FUN_14304ba60 body=9 status=ok
// SIG undefined FUN_14304ba60(void)

undefined4 FUN_14304ba60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x228);
}



// FUNCTION 14304ba70 FUN_14304ba70 body=232 status=ok
// SIG undefined FUN_14304ba70(void)

void FUN_14304ba70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b476e0) && (_Init_thread_header(&DAT_146b476e0), DAT_146b476e0 == -1))
  {
    uVar1 = FUN_1430a9310();
    FUN_1430a9310();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InitialProjectileGravity",1);
    DAT_146b476d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b476e0);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b476d8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b476d8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b476d8 + 0x30));
  }
  return;
}



// FUNCTION 14304bb60 FUN_14304bb60 body=1126 status=ok
// SIG undefined FUN_14304bb60(void)

void FUN_14304bb60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b47700) && (_Init_thread_header(&DAT_146b47700), DAT_146b47700 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ServerSourcePoint",1);
    DAT_146b476f8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47700);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b476f8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b476f8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b476f8 + 0x30));
  }
  if ((*piVar5 < DAT_146b47710) && (_Init_thread_header(&DAT_146b47710), DAT_146b47710 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ServerTargetPoint",1);
    DAT_146b47708 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47710);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47708 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47708 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47708 + 0x30));
  }
  if ((*piVar5 < DAT_146b47720) && (_Init_thread_header(&DAT_146b47720), DAT_146b47720 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ClientState",1);
    DAT_146b47718 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47720);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47718 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47718 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47718 + 0x30));
  }
  if ((*piVar5 < DAT_146b47730) && (_Init_thread_header(&DAT_146b47730), DAT_146b47730 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ModifierType",1);
    DAT_146b47728 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47730);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47728 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47728 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47728 + 0x30));
  }
  if ((*piVar5 < DAT_146b47740) && (_Init_thread_header(&DAT_146b47740), DAT_146b47740 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ModifierValue",1);
    DAT_146b47738 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47740);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47738 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47738 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47738 + 0x30));
  }
  if ((*piVar5 < DAT_146b47750) && (_Init_thread_header(&DAT_146b47750), DAT_146b47750 == -1)) {
    uVar1 = UScrollBar::GetPrivateStaticClass();
    UScrollBar::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DamageInterval",1);
    DAT_146b47748 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47750);
  }
  if (0 < *(int *)(DAT_146b47748 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47748 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b47748 + 0x30));
  }
  return;
}



// FUNCTION 14304bfd0 FUN_14304bfd0 body=1126 status=ok
// SIG undefined FUN_14304bfd0(void)

void FUN_14304bfd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b47770) && (_Init_thread_header(&DAT_146b47770), DAT_146b47770 == -1)) {
    uVar1 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SyncID",1);
    DAT_146b47768 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47770);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47768 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47768 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47768 + 0x30));
  }
  if ((*piVar5 < DAT_146b47780) && (_Init_thread_header(&DAT_146b47780), DAT_146b47780 == -1)) {
    uVar1 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InitialClientState",1);
    DAT_146b47778 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47780);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47778 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47778 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47778 + 0x30));
  }
  if ((*piVar5 < DAT_146b47790) && (_Init_thread_header(&DAT_146b47790), DAT_146b47790 == -1)) {
    uVar1 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AttachmentData",1);
    DAT_146b47788 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b47790);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47788 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47788 + 0x40) + (short)iVar3;
      local_24 = 0x100000000;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47788 + 0x30));
  }
  if ((*piVar5 < DAT_146b477a0) && (_Init_thread_header(&DAT_146b477a0), DAT_146b477a0 == -1)) {
    uVar1 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ExplodeData",1);
    DAT_146b47798 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b477a0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b47798 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b47798 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b47798 + 0x30));
  }
  if ((*piVar5 < DAT_146b477b0) && (_Init_thread_header(&DAT_146b477b0), DAT_146b477b0 == -1)) {
    uVar1 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ImpactInfo",1);
    DAT_146b477a8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b477b0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b477a8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b477a8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b477a8 + 0x30));
  }
  if ((*piVar5 < DAT_146b477c0) && (_Init_thread_header(&DAT_146b477c0), DAT_146b477c0 == -1)) {
    uVar1 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ShutdownID",1);
    DAT_146b477b8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b477c0);
  }
  if (0 < *(int *)(DAT_146b477b8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b477b8 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b477b8 + 0x30));
  }
  return;
}



// FUNCTION 14304c440 FUN_14304c440 body=390 status=ok
// SIG undefined FUN_14304c440(void)

longlong * FUN_14304c440(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if ((DAT_1464aaa8c != (int)param_1[0xa3]) &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    *(int *)(param_1 + 0xa3) = DAT_1464aaa8c;
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar5 != 0) {
      *(undefined4 *)(param_1 + 0xa5) = 0;
      if (0x7fffffff < *(uint *)((longlong)param_1 + 0x52c)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0xa4,0);
      }
      lVar5 = FUN_142d80ec0();
      if (lVar5 != 0) {
        puVar8 = *(undefined8 **)(lVar5 + 0x188);
        puVar9 = (undefined8 *)((longlong)*(int *)(lVar5 + 400) * 0x5c + (longlong)puVar8);
        if (puVar8 != puVar9) {
          puVar7 = puVar8 + 3;
          do {
            if (*(char *)(puVar7 + 8) != '\0') {
              plVar1 = param_1 + 0xa4;
              iVar2 = (int)param_1[0xa5];
              *(int *)(param_1 + 0xa5) = iVar2 + 1;
              if (*(int *)((longlong)param_1 + 0x52c) < iVar2 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
                ResizeGrow(plVar1,iVar2);
              }
              lVar5 = *plVar1;
              lVar6 = (longlong)iVar2 * 0x1c;
              *(undefined8 *)(lVar6 + lVar5) = 0;
              *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
              *(undefined8 *)(lVar6 + 0x10 + lVar5) = 0;
              *(undefined4 *)(lVar6 + 0x18 + lVar5) = 0;
              lVar5 = *plVar1;
              *(undefined8 *)(lVar6 + lVar5) = *puVar8;
              *(undefined4 *)(lVar6 + 8 + lVar5) = *(undefined4 *)(puVar8 + 1);
              lVar5 = *plVar1;
              *(undefined8 *)(lVar6 + 0xc + lVar5) = *puVar7;
              *(undefined4 *)(lVar6 + 0x14 + lVar5) = *(undefined4 *)(puVar7 + 1);
              *(undefined4 *)(lVar6 + 0x18 + *plVar1) = *(undefined4 *)(puVar7 + 7);
            }
            puVar8 = (undefined8 *)((longlong)puVar8 + 0x5c);
            puVar7 = (undefined8 *)((longlong)puVar7 + 0x5c);
          } while (puVar8 != puVar9);
        }
      }
    }
  }
  return param_1 + 0xa4;
}



// FUNCTION 14304c5d0 FUN_14304c5d0 body=740 status=ok
// SIG undefined FUN_14304c5d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14304c5d0(longlong *param_1,float *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_48;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  float local_20;
  
  uVar11 = (undefined4)_DAT_1468b5d90;
  uVar12 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
  *(undefined8 *)param_2 = _DAT_1468b5d90;
  fStack_40 = DAT_1468b5d98;
  plVar7 = (longlong *)*param_1;
  param_2[2] = DAT_1468b5d98;
  if (plVar7 == (longlong *)0x0) {
    return param_2;
  }
  lVar6 = param_1[1];
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*plVar7 + 0x3b8))();
    uVar11 = (undefined4)_DAT_1468b5d90;
    uVar12 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
    fStack_40 = DAT_1468b5d98;
  }
  if ((param_1[2] == 0) || (lVar6 == 0)) {
    lVar10 = param_1[1];
    if (lVar10 != 0) {
      uVar11 = *(undefined4 *)(lVar10 + 0x220);
      uVar12 = *(undefined4 *)(lVar10 + 0x224);
      fVar4 = *(float *)(lVar10 + 0x228);
      local_20 = fVar4;
      goto LAB_14304c709;
    }
    lVar10 = *(longlong *)(*param_1 + 0x168);
    if (lVar10 != 0) goto LAB_14304c67e;
    local_48 = CONCAT44(uVar12,uVar11);
LAB_14304c6fe:
    puVar8 = &local_48;
  }
  else {
    plVar7 = (longlong *)FUN_14304df60(param_1,lVar6);
    if (plVar7 == (longlong *)0x0) {
      lVar10 = *(longlong *)(*param_1 + 0x168);
      if (lVar10 == 0) {
        local_48 = _DAT_1468b5d90;
        fStack_40 = DAT_1468b5d98;
      }
      else {
LAB_14304c67e:
        fStack_40 = (float)*(undefined4 *)(lVar10 + 0x228);
        local_48 = *(undefined8 *)(lVar10 + 0x220);
      }
      goto LAB_14304c6fe;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x428))(plVar7,&local_28,param_1[2]);
  }
  uVar11 = (undefined4)*puVar8;
  uVar12 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  fVar4 = *(float *)(puVar8 + 1);
LAB_14304c709:
  *(ulonglong *)param_2 = CONCAT44(uVar12,uVar11);
  fVar1 = *(float *)(param_1 + 3);
  param_2[2] = fVar4;
  if (((0.0001 < ABS(fVar1)) || (0.0001 < ABS(*(float *)((longlong)param_1 + 0x1c)))) ||
     (0.0001 < ABS(*(float *)(param_1 + 4)))) {
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(*param_1 + 0x168);
      if (lVar6 == 0) {
        uVar11 = (undefined4)DAT_1468b5da0;
        uVar12 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        fStack_40 = (float)DAT_1468b5da8;
      }
      else {
        fVar4 = *(float *)(lVar6 + 0x210);
        local_48 = *(undefined8 *)(lVar6 + 0x210);
        fStack_40 = *(float *)(lVar6 + 0x218);
        fStack_3c = *(float *)(lVar6 + 0x21c);
        auVar3._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != *(float *)(lVar6 + 0x214));
        auVar3._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != fVar4);
        auVar3._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_40);
        auVar3._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_3c);
        iVar5 = movmskps((int)*param_1,auVar3);
        if (iVar5 != 0) {
          *(float *)(lVar6 + 0x250) = fVar4;
          *(float *)(lVar6 + 0x254) = *(float *)(lVar6 + 0x214);
          *(float *)(lVar6 + 600) = fStack_40;
          *(float *)(lVar6 + 0x25c) = fStack_3c;
          puVar8 = (undefined8 *)FQuat::Rotator(&local_48,&local_38);
          *(undefined8 *)(lVar6 + 0x260) = *puVar8;
          *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar8 + 1);
        }
        uVar11 = (undefined4)*(undefined8 *)(lVar6 + 0x260);
        uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x260) >> 0x20);
        fStack_40 = (float)*(undefined4 *)(lVar6 + 0x268);
      }
      local_48 = CONCAT44(uVar12,uVar11);
      local_30 = fStack_40;
      puVar8 = &local_38;
      local_38 = CONCAT44(uVar12,uVar11);
    }
    else {
      fVar1 = *(float *)(lVar6 + 0x210);
      local_48 = *(undefined8 *)(lVar6 + 0x210);
      fStack_40 = *(float *)(lVar6 + 0x218);
      fStack_3c = *(float *)(lVar6 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != *(float *)(lVar6 + 0x214));
      auVar2._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != fVar1);
      auVar2._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_40);
      auVar2._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_3c);
      iVar5 = movmskps(fVar4,auVar2);
      if (iVar5 != 0) {
        *(float *)(lVar6 + 0x250) = fVar1;
        *(float *)(lVar6 + 0x254) = *(float *)(lVar6 + 0x214);
        *(float *)(lVar6 + 600) = fStack_40;
        *(float *)(lVar6 + 0x25c) = fStack_3c;
        puVar8 = (undefined8 *)FQuat::Rotator(&local_48,&local_38);
        *(undefined8 *)(lVar6 + 0x260) = *puVar8;
        *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar8 + 1);
      }
      fStack_40 = (float)*(undefined4 *)(lVar6 + 0x268);
      puVar8 = &local_48;
      local_48 = *(undefined8 *)(lVar6 + 0x260);
    }
    local_28 = *puVar8;
    local_20 = *(float *)(puVar8 + 1);
    pfVar9 = (float *)FRotator::RotateVector(&local_28,&local_38,param_1 + 3);
    fVar4 = pfVar9[1];
    *param_2 = *pfVar9 + *param_2;
    fVar1 = pfVar9[2];
    param_2[1] = fVar4 + param_2[1];
    param_2[2] = fVar1 + param_2[2];
  }
  return param_2;
}



// FUNCTION 14304c8c0 FUN_14304c8c0 body=340 status=ok
// SIG undefined FUN_14304c8c0(void)

longlong FUN_14304c8c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  undefined8 uVar5;
  int local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [40];
  undefined1 local_20;
  ushort local_1e;
  uint local_1c;
  
  if ((((param_1 == 0) || (local_res10 = param_1, cVar2 = UWorld::IsGameWorld(), cVar2 == '\0')) ||
      ((*(uint *)(local_res10 + 0x830) & 0x400) != 0)) || (iVar3 = FUN_1428cf800(), iVar3 == 3)) {
    return 0;
  }
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_14678c6f0,local_res8,local_res10);
  if ((local_res8[0] == -1) || (lVar1 = DAT_14678c6f0 + (longlong)local_res8[0] * 0x18, lVar1 == 0))
  {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + 8);
  }
  FWeakObjectPtr::operator=(local_res20,uVar5);
  local_res18 = FWeakObjectPtr::Get(local_res20);
  if (local_res18 != 0) {
    return local_res18;
  }
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    return local_res18;
  }
  FActorSpawnParameters::FActorSpawnParameters(local_48);
  lVar1 = local_res10;
  local_1c = local_1c | 0x40;
  local_1e = local_1e | 8;
  local_20 = 1;
  uVar5 = AFGConveyorBeltHologram::GetPrivateStaticClass();
  local_res18 = UWorld::SpawnActor(lVar1,uVar5,0,0,local_48);
  local_58 = &local_res10;
  local_50 = &local_res18;
  FUN_1405c0510(&DAT_14678c6f0,local_res8,&local_58,0);
  return local_res18;
}



// FUNCTION 14304ca20 FUN_14304ca20 body=341 status=ok
// SIG undefined FUN_14304ca20(void)

longlong FUN_14304ca20(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  undefined8 uVar5;
  int local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [40];
  undefined1 local_20;
  ushort local_1e;
  uint local_1c;
  
  if (((param_1 == 0) || (local_res10 = param_1, cVar2 = UWorld::IsGameWorld(), cVar2 == '\0')) ||
     ((*(uint *)(local_res10 + 0x830) & 0x400) != 0)) {
    return 0;
  }
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_14678c6a0,local_res8);
  if ((local_res8[0] == -1) || (lVar1 = DAT_14678c6a0 + (longlong)local_res8[0] * 0x18, lVar1 == 0))
  {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + 8);
  }
  FWeakObjectPtr::operator=(local_res20,uVar5);
  local_res18 = FWeakObjectPtr::Get(local_res20);
  if (local_res18 != 0) {
    return local_res18;
  }
  iVar3 = FUN_1428cf800(local_res10);
  if (iVar3 != 3) {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      return local_res18;
    }
    FActorSpawnParameters::FActorSpawnParameters(local_48);
    lVar1 = local_res10;
    local_1c = local_1c | 0x40;
    local_1e = local_1e | 8;
    local_20 = 1;
    uVar5 = FUN_1430aee90();
    local_res18 = UWorld::SpawnActor(lVar1,uVar5,0,0,local_48);
    local_58 = &local_res10;
    local_50 = &local_res18;
    FUN_1405c0510(&DAT_14678c6a0,local_res8,&local_58,0);
  }
  return local_res18;
}



// FUNCTION 14304cb80 FUN_14304cb80 body=88 status=ok
// SIG undefined FUN_14304cb80(void)

float FUN_14304cb80(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = UWorld::GetWorldSettings(uVar1,0,0);
  if (lVar2 != 0) {
    fVar3 = *(float *)(lVar2 + 0x5e0);
    if (fVar3 <= 1.0) {
      fVar3 = 1.0;
    }
    return fVar3 * *(float *)((longlong)param_1 + 0x594);
  }
  return *(float *)((longlong)param_1 + 0x594) * 1.0;
}



// FUNCTION 14304cbe0 FUN_14304cbe0 body=51 status=ok
// SIG undefined FUN_14304cbe0(void)

float FUN_14304cbe0(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x1c4);
  if (*(longlong *)(param_1 + 0x278) != 0) {
    fVar1 = (float)FUN_14307cb30();
    fVar2 = fVar2 * fVar1;
  }
  return fVar2;
}



// FUNCTION 14304cc20 FUN_14304cc20 body=267 status=ok
// SIG undefined FUN_14304cc20(void)

undefined8 FUN_14304cc20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar4 = *(undefined1 *)(param_1 + 0x50);
  uVar5 = UEnum::GetPrivateStaticClass();
  lVar6 = FUN_141799410(uVar5,0,L"GbxWeapon.EWeaponSkeletalControlEvent",0);
  if (lVar6 == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0x764,L"Couldn\'t find enum \'%s\'",
               L"GbxWeapon.EWeaponSkeletalControlEvent");
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x764,L"Couldn\'t find enum \'%s\'",
               L"GbxWeapon.EWeaponSkeletalControlEvent");
  }
  FUN_1417373a0(lVar6,local_28,uVar4);
  puVar7 = (undefined8 *)FText::ToString(local_28);
  if (*(int *)(puVar7 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*puVar7;
  }
  FString::PrintfImpl(param_2,L"Event: %s",puVar8);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return param_2;
}



// FUNCTION 14304cd30 FUN_14304cd30 body=1084 status=ok
// SIG undefined FUN_14304cd30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14304cd30(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  longlong local_res18;
  undefined8 local_res20;
  int local_48;
  int local_44;
  longlong local_40;
  
  iVar15 = 0;
  iVar11 = *(int *)(param_1 + 0x490);
  fVar17 = *(float *)(param_3 + 0x790) - _DAT_14678c5bc;
  iVar16 = -1;
  local_res20 = param_4;
  if (0 < iVar11) {
    plVar1 = *(longlong **)(param_1 + 0x488);
    plVar14 = plVar1;
    do {
      lVar7 = *plVar14;
      if (lVar7 != 0) {
        uVar5 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar5 < (int)DAT_1469e91c4) {
          uVar10 = uVar5 & 0xffff;
          if ((int)uVar5 < 0) {
            uVar5 = uVar5 + 0xffff;
            uVar10 = uVar10 - 0x10000;
          }
          lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                  (longlong)(int)uVar10 * 0x18;
        }
        else {
          lVar9 = 0;
        }
        if (((byte)((uint)*(undefined4 *)(lVar9 + 8) >> 0x1d) & 1) == 0) {
          if (*(longlong *)(lVar7 + 0x6f0) == param_2) {
            iVar16 = (iVar11 - iVar15) + -1;
            if (0 < iVar16) {
              iVar16 = 1;
            }
            if (iVar16 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (plVar1 + (longlong)iVar15 * 2,plVar1 + (longlong)(iVar11 - iVar16) * 2,
                         (longlong)iVar16 << 4);
              iVar11 = *(int *)(param_1 + 0x490);
            }
            *(int *)(param_1 + 0x490) = iVar11 + -1;
            goto LAB_14304cea9;
          }
          if (*(float *)(plVar14 + 1) < fVar17) {
            fVar17 = *(float *)(plVar14 + 1);
            iVar16 = iVar15;
          }
        }
      }
      iVar15 = iVar15 + 1;
      plVar14 = plVar14 + 2;
    } while (iVar15 < iVar11);
    if (iVar16 != -1) {
      iVar15 = (iVar11 - iVar16) + -1;
      if (0 < iVar15) {
        iVar15 = 1;
      }
      if (iVar15 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (plVar1 + (longlong)iVar16 * 2,plVar1 + (longlong)(iVar11 - iVar15) * 2,
                   (longlong)iVar15 << 4);
        iVar11 = *(int *)(param_1 + 0x490);
      }
      *(int *)(param_1 + 0x490) = iVar11 + -1;
    }
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
  lVar7 = FUN_1417985e0(uVar6,param_1,0,0,0,0,0,0,0);
  if (lVar7 != 0) {
LAB_14304cea9:
    if (*(longlong *)(lVar7 + 0x6f0) != param_2) {
      FUN_14260ba10(lVar7);
      *(byte *)(lVar7 + 0x71a) = *(byte *)(lVar7 + 0x71a) & 0xbf;
      *(undefined4 *)(lVar7 + 0x794) = 0;
      *(byte *)(lVar7 + 0xba) = *(byte *)(lVar7 + 0xba) & 0xfd | 1;
      *(undefined8 *)(lVar7 + 0x858) = local_res20;
      *(undefined8 *)(lVar7 + 0x860) = param_5;
      UActorComponent::SetTickGroup(lVar7,*(undefined1 *)(param_1 + 0x30));
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ALightBeamManager::OnParticleSystemFinished",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res18,pwVar3 + 2,1);
      plVar1 = (longlong *)(lVar7 + 0x8a8);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = local_res18;
      if ((local_res18 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_40);
      }
      piVar12 = (int *)*plVar1;
      iVar11 = *(int *)(lVar7 + 0x8b0);
      for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar11 * 4; piVar13 = piVar13 + 4) {
        if ((((*piVar13 == local_48) && (piVar13[1] == local_44)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar13), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_48), cVar4 == '\0')))) &&
           (*(longlong *)(piVar13 + 2) == local_40)) {
          if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_14304d0b6;
          break;
        }
      }
      iVar11 = *(int *)(lVar7 + 0x8b0);
      *(int *)(lVar7 + 0x8b0) = iVar11 + 1;
      if (*(int *)(lVar7 + 0x8b4) < iVar11 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar11);
      }
      piVar12 = (int *)((longlong)iVar11 * 0x10 + *plVar1);
      *piVar12 = local_48;
      piVar12[1] = local_44;
      *(longlong *)(piVar12 + 2) = local_40;
LAB_14304d0b6:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      FUN_14260f940(lVar7,param_2);
      *(byte *)(lVar7 + 0x71a) = *(byte *)(lVar7 + 0x71a) & 0xfe;
    }
    *(byte *)(lVar7 + 0x24c) = *(byte *)(lVar7 + 0x24c) | 0x1c;
    *(uint *)(lVar7 + 0x398) = *(uint *)(lVar7 + 0x398) & 0xfffffffe;
    *(undefined8 *)(lVar7 + 0x858) = local_res20;
    *(undefined8 *)(lVar7 + 0x860) = param_5;
    FUN_142397970(lVar7,0);
    FUN_1423979a0(lVar7,0);
    FUN_142398e60(lVar7,0,0);
    FUN_142398ea0(lVar7,0);
    iVar11 = *(int *)(param_1 + 0x480);
    *(int *)(param_1 + 0x480) = iVar11 + 1;
    if (*(int *)(param_1 + 0x484) < iVar11 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x478,iVar11);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x478) + (longlong)iVar11 * 8) = lVar7;
  }
  return lVar7;
}



// FUNCTION 14304d170 FUN_14304d170 body=1035 status=ok
// SIG undefined FUN_14304d170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14304d170(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  longlong local_res18;
  undefined8 local_res20;
  int local_48;
  int local_44;
  longlong local_40;
  
  iVar15 = 0;
  iVar11 = *(int *)(param_1 + 0x4b8);
  fVar17 = *(float *)(param_3 + 0x790) - _DAT_14678c5b0;
  iVar16 = -1;
  local_res20 = param_4;
  if (0 < iVar11) {
    plVar1 = *(longlong **)(param_1 + 0x4b0);
    plVar14 = plVar1;
    do {
      lVar7 = *plVar14;
      if (lVar7 != 0) {
        uVar5 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar5 < (int)DAT_1469e91c4) {
          uVar10 = uVar5 & 0xffff;
          if ((int)uVar5 < 0) {
            uVar5 = uVar5 + 0xffff;
            uVar10 = uVar10 - 0x10000;
          }
          lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                  (longlong)(int)uVar10 * 0x18;
        }
        else {
          lVar9 = 0;
        }
        if (((byte)((uint)*(undefined4 *)(lVar9 + 8) >> 0x1d) & 1) == 0) {
          if (*(longlong *)(lVar7 + 0x6f0) == param_2) {
            iVar16 = (iVar11 - iVar15) + -1;
            if (0 < iVar16) {
              iVar16 = 1;
            }
            if (iVar16 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (plVar1 + (longlong)iVar15 * 2,plVar1 + (longlong)(iVar11 - iVar16) * 2,
                         (longlong)iVar16 << 4);
              iVar11 = *(int *)(param_1 + 0x4b8);
            }
            *(int *)(param_1 + 0x4b8) = iVar11 + -1;
            goto LAB_14304d2e9;
          }
          if (*(float *)(plVar14 + 1) < fVar17) {
            fVar17 = *(float *)(plVar14 + 1);
            iVar16 = iVar15;
          }
        }
      }
      iVar15 = iVar15 + 1;
      plVar14 = plVar14 + 2;
    } while (iVar15 < iVar11);
    if (iVar16 != -1) {
      iVar15 = (iVar11 - iVar16) + -1;
      if (0 < iVar15) {
        iVar15 = 1;
      }
      if (iVar15 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (plVar1 + (longlong)iVar16 * 2,plVar1 + (longlong)(iVar11 - iVar15) * 2,
                   (longlong)iVar15 << 4);
        iVar11 = *(int *)(param_1 + 0x4b8);
      }
      *(int *)(param_1 + 0x4b8) = iVar11 + -1;
    }
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
  lVar7 = FUN_1417985e0(uVar6,param_1,0,0,0,0,0,0,0);
  if (lVar7 != 0) {
LAB_14304d2e9:
    if (*(longlong *)(lVar7 + 0x6f0) != param_2) {
      FUN_14260ba10(lVar7);
      *(byte *)(lVar7 + 0x71a) = *(byte *)(lVar7 + 0x71a) & 0xbf;
      *(undefined4 *)(lVar7 + 0x794) = 0;
      *(undefined8 *)(lVar7 + 0x860) = param_5;
      *(byte *)(lVar7 + 0xba) = *(byte *)(lVar7 + 0xba) & 0xfd | 1;
      *(undefined8 *)(lVar7 + 0x858) = local_res20;
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&ALightProjectileManager::OnParticleSystemFinished",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res18,pwVar3 + 2,1);
      plVar1 = (longlong *)(lVar7 + 0x8a8);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = local_res18;
      if ((local_res18 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_40);
      }
      piVar12 = (int *)*plVar1;
      iVar11 = *(int *)(lVar7 + 0x8b0);
      for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar11 * 4; piVar13 = piVar13 + 4) {
        if ((((*piVar13 == local_48) && (piVar13[1] == local_44)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar13), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_48), cVar4 == '\0')))) &&
           (*(longlong *)(piVar13 + 2) == local_40)) {
          if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_14304d4e6;
          break;
        }
      }
      iVar11 = *(int *)(lVar7 + 0x8b0);
      *(int *)(lVar7 + 0x8b0) = iVar11 + 1;
      if (*(int *)(lVar7 + 0x8b4) < iVar11 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar11);
      }
      piVar12 = (int *)((longlong)iVar11 * 0x10 + *plVar1);
      *piVar12 = local_48;
      piVar12[1] = local_44;
      *(longlong *)(piVar12 + 2) = local_40;
LAB_14304d4e6:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      FUN_14260f940(lVar7,param_2);
      *(byte *)(lVar7 + 0x71a) = *(byte *)(lVar7 + 0x71a) & 0xfe;
    }
    *(undefined8 *)(lVar7 + 0x860) = param_5;
    *(byte *)(lVar7 + 0x24c) = *(byte *)(lVar7 + 0x24c) & 0xbf | 0x1c;
    *(undefined8 *)(lVar7 + 0x858) = local_res20;
    *(undefined1 *)(lVar7 + 0x978) = 1;
    iVar11 = *(int *)(param_1 + 0x4a8);
    *(int *)(param_1 + 0x4a8) = iVar11 + 1;
    if (*(int *)(param_1 + 0x4ac) < iVar11 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x4a0,iVar11);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar11 * 8) = lVar7;
  }
  return lVar7;
}



// FUNCTION 14304d580 FUN_14304d580 body=758 status=ok
// SIG undefined FUN_14304d580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14304d580(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
             longlong param_5)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_148 [32];
  undefined8 *local_128 [2];
  longlong local_118 [2];
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [24];
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar3 = (longlong *)param_1[0x28];
  if (plVar3 == (longlong *)0x0) {
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
    return param_2;
  }
  local_128[0] = param_4;
  local_f8 = FUN_142e79d90();
  lVar6 = (**(code **)(*plVar3 + 0x628))(plVar3,local_f8);
  uVar10 = DAT_1468b5d98;
  uVar11 = (undefined4)_DAT_1468b5d90;
  uVar12 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
  if (*(char *)(param_3 + 0xc) != '\0') {
    if ((lVar6 != 0) &&
       ((param_5 == 0 || (iVar5 = FUN_142dec940(param_5,param_1[0x28]), iVar5 == 2)))) {
      puVar7 = (undefined8 *)FUN_142dd0240(lVar6,local_118);
      uVar11 = (undefined4)*puVar7;
      uVar12 = (undefined4)((ulonglong)*puVar7 >> 0x20);
      uVar10 = *(undefined4 *)(puVar7 + 1);
    }
    goto LAB_14304d837;
  }
  if (param_5 == 0) goto LAB_14304d837;
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar9 = UBehaviorTreeManager::GetCurrent(uVar8);
  local_118[0] = lVar9;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (((lVar9 == 0) || (lVar4 == 0)) || (*(longlong *)(lVar4 + 0x38) == 0)) goto LAB_14304d837;
  uVar8 = FUN_1430b1980();
  lVar9 = FUN_14247f5b0(DAT_146b17150 + 0xcf8,uVar8);
  if (lVar9 == 0) goto LAB_14304d837;
  uVar2 = *(undefined4 *)(local_128[0] + 1);
  *(undefined8 *)(lVar9 + 0x30) = *local_128[0];
  *(undefined4 *)(lVar9 + 0x38) = uVar2;
  *(undefined8 *)(lVar9 + 0x3c) = DAT_1468b5da0;
  *(undefined4 *)(lVar9 + 0x44) = DAT_1468b5da8;
  *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(param_5 + 0x118);
  local_d8 = *(undefined8 *)(lVar4 + 0x38);
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0xffffffff;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_d0 = lVar9;
  FUN_142bef990(local_118[0],&local_108,&local_d8,2);
  if (*(int *)(local_108 + 8) < 1) {
    if ((lVar6 != 0) && (iVar5 = FUN_142dec940(param_5,param_1[0x28]), iVar5 == 2)) {
      puVar7 = (undefined8 *)FUN_142dd0240(lVar6,local_f0);
      goto LAB_14304d7ba;
    }
  }
  else {
    puVar7 = (undefined8 *)FUN_142be50e0(local_108,local_128,0);
LAB_14304d7ba:
    uVar10 = *(undefined4 *)(puVar7 + 1);
    uVar11 = (undefined4)*puVar7;
    uVar12 = (undefined4)((ulonglong)*puVar7 >> 0x20);
  }
  FUN_14248cf90(DAT_146b17150 + 0xcf8,lVar9);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_100 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  if (local_80 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&uStack_c0);
LAB_14304d837:
  *param_2 = CONCAT44(uVar12,uVar11);
  *(undefined4 *)(param_2 + 1) = uVar10;
  return param_2;
}



// FUNCTION 14304d880 FUN_14304d880 body=142 status=ok
// SIG undefined FUN_14304d880(void)

undefined8
FUN_14304d880(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             float param_5)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (param_4 != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      fVar1 = (float)FUN_142c98860(*(longlong *)(DAT_146b33f38 + 0x58) + 0x48,param_4);
    }
  }
  FMath::VRandCone(param_2,param_3,(fVar1 + param_5) * 0.017453292);
  return param_2;
}



// FUNCTION 14304d910 FUN_14304d910 body=570 status=ok
// SIG undefined FUN_14304d910(void)

undefined8 * FUN_14304d910(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  uVar9 = (undefined4)DAT_1468b5da0;
  uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
  *param_2 = DAT_1468b5da0;
  local_20 = DAT_1468b5da8;
  plVar7 = (longlong *)*param_1;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5da8;
  if (plVar7 != (longlong *)0x0) {
    lVar6 = param_1[1];
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*plVar7 + 0x3b8))();
      uVar9 = (undefined4)DAT_1468b5da0;
      uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_20 = DAT_1468b5da8;
    }
    if ((param_1[2] == 0) || (lVar6 == 0)) {
      lVar1 = param_1[1];
      if (lVar1 == 0) {
        lVar6 = *(longlong *)(*param_1 + 0x168);
        if (lVar6 == 0) {
          local_28 = CONCAT44(uVar10,uVar9);
        }
        else {
          local_18 = *(float *)(lVar6 + 0x210);
          fStack_14 = *(float *)(lVar6 + 0x214);
          fStack_10 = *(float *)(lVar6 + 0x218);
          fStack_c = *(float *)(lVar6 + 0x21c);
          auVar4._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != fStack_14);
          auVar4._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != local_18);
          auVar4._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_10);
          auVar4._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_c);
          iVar5 = movmskps((int)*param_1,auVar4);
          if (iVar5 != 0) {
            *(float *)(lVar6 + 0x250) = local_18;
            *(float *)(lVar6 + 0x254) = fStack_14;
            *(float *)(lVar6 + 600) = fStack_10;
            *(float *)(lVar6 + 0x25c) = fStack_c;
            puVar8 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
            *(undefined8 *)(lVar6 + 0x260) = *puVar8;
            *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar8 + 1);
          }
          local_28 = *(undefined8 *)(lVar6 + 0x260);
          local_20 = *(undefined4 *)(lVar6 + 0x268);
        }
        uVar9 = (undefined4)local_28;
        uVar10 = (undefined4)((ulonglong)local_28 >> 0x20);
      }
      else {
        local_18 = *(float *)(lVar1 + 0x210);
        fStack_14 = *(float *)(lVar1 + 0x214);
        fStack_10 = *(float *)(lVar1 + 0x218);
        fStack_c = *(float *)(lVar1 + 0x21c);
        auVar3._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
        auVar3._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
        auVar3._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
        auVar3._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
        iVar5 = movmskps((int)lVar6,auVar3);
        if (iVar5 != 0) {
          *(float *)(lVar1 + 0x250) = local_18;
          *(float *)(lVar1 + 0x254) = fStack_14;
          *(float *)(lVar1 + 600) = fStack_10;
          *(float *)(lVar1 + 0x25c) = fStack_c;
          puVar8 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
          *(undefined8 *)(lVar1 + 0x260) = *puVar8;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar8 + 1);
        }
        uVar9 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
        local_20 = *(undefined4 *)(lVar1 + 0x268);
      }
    }
    else {
      plVar7 = (longlong *)FUN_14304df60(param_1,lVar6);
      if (plVar7 == (longlong *)0x0) {
        lVar6 = *(longlong *)(*param_1 + 0x168);
        if (lVar6 == 0) {
          uVar9 = (undefined4)DAT_1468b5da0;
          uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_20 = DAT_1468b5da8;
        }
        else {
          local_18 = *(float *)(lVar6 + 0x210);
          fStack_14 = *(float *)(lVar6 + 0x214);
          fStack_10 = *(float *)(lVar6 + 0x218);
          fStack_c = *(float *)(lVar6 + 0x21c);
          auVar2._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != fStack_14);
          auVar2._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != local_18);
          auVar2._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_10);
          auVar2._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_c);
          iVar5 = movmskps((int)*param_1,auVar2);
          if (iVar5 != 0) {
            *(float *)(lVar6 + 0x250) = local_18;
            *(float *)(lVar6 + 0x254) = fStack_14;
            *(float *)(lVar6 + 600) = fStack_10;
            *(float *)(lVar6 + 0x25c) = fStack_c;
            puVar8 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
            *(undefined8 *)(lVar6 + 0x260) = *puVar8;
            *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar8 + 1);
          }
          uVar9 = (undefined4)*(undefined8 *)(lVar6 + 0x260);
          uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x260) >> 0x20);
          local_20 = *(undefined4 *)(lVar6 + 0x268);
        }
      }
      else {
        puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x430))(plVar7,&local_28,param_1[2]);
        uVar9 = (undefined4)*puVar8;
        uVar10 = (undefined4)((ulonglong)*puVar8 >> 0x20);
        local_20 = *(undefined4 *)(puVar8 + 1);
      }
    }
    *param_2 = CONCAT44(uVar10,uVar9);
    *(undefined4 *)(param_2 + 1) = local_20;
  }
  return param_2;
}



// FUNCTION 14304db50 FUN_14304db50 body=1030 status=ok
// SIG undefined FUN_14304db50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14304db50(longlong param_1,undefined8 *param_2,float param_3,int param_4,int param_5,
                       undefined8 *param_6,byte *param_7,byte *param_8)

{
  undefined4 uVar1;
  bool bVar2;
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
  int iVar30;
  int iVar31;
  float *pfVar32;
  float *pfVar33;
  undefined8 *puVar34;
  ulonglong uVar35;
  uint uVar36;
  float *pfVar37;
  byte *pbVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 local_148;
  float local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [64];
  undefined1 local_b8 [144];
  
  *param_6 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_6 + 1) = uVar1;
  iVar31 = *(int *)(param_1 + 0x38);
  if (iVar31 < 1) {
    uVar35 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),0xff);
  }
  else {
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      uVar35 = (ulonglong)*param_8;
    }
    else {
      iVar30 = rand();
      uVar36 = (uint)((float)iVar30 * 3.051851e-05 * (float)iVar31);
      uVar35 = (ulonglong)(byte)(iVar31 + -1);
      if ((int)uVar36 <= iVar31 + -1) {
        uVar35 = (ulonglong)uVar36 & 0xff;
      }
      *param_8 = (byte)uVar35;
      iVar31 = *(int *)(param_1 + 0x38);
    }
    if (iVar31 <= (int)uVar35) {
      *param_8 = 0;
      uVar35 = 0;
    }
    bVar2 = true;
    pfVar37 = (float *)(uVar35 * 0x1c + *(longlong *)(param_1 + 0x30));
    if (*(char *)(pfVar37 + 6) == '\0') {
      local_148 = *(undefined8 *)pfVar37;
      local_140 = pfVar37[2];
      fVar39 = (float)((ulonglong)local_148 >> 0x20);
      fVar44 = (float)local_148;
    }
    else {
      if (((*(byte *)(param_1 + 0x40) & 8) == 0) || (param_5 < 2)) {
        iVar31 = rand();
        fVar44 = (float)iVar31 * 3.051851e-05;
      }
      else {
        bVar2 = param_5 + -1 <= param_4;
        fVar44 = (float)param_4 / (float)(param_5 + -1);
      }
      fVar3 = (float)DAT_146b47350;
      fVar39 = DAT_146b47350._4_4_;
      fVar4 = DAT_146b47350._8_4_;
      auVar40._4_4_ = pfVar37[4] - pfVar37[1];
      auVar40._0_4_ = pfVar37[3] - *pfVar37;
      auVar40._8_4_ = pfVar37[5] - pfVar37[2];
      auVar40._12_4_ = 0;
      auVar40 = divps(auVar40,_DAT_146b47350);
      fVar41 = (pfVar37[3] - *pfVar37) - (float)(int)auVar40._0_4_ * fVar3;
      fVar42 = (pfVar37[4] - pfVar37[1]) - (float)(int)auVar40._4_4_ * fVar39;
      fVar43 = (pfVar37[5] - pfVar37[2]) - (float)(int)auVar40._8_4_ * fVar4;
      fVar41 = (float)(((uint)(fVar41 + fVar3) ^ (uint)fVar41) & -(uint)(0.0 <= fVar41) ^
                      (uint)(fVar41 + fVar3));
      fVar42 = (float)(((uint)(fVar42 + fVar39) ^ (uint)fVar42) & -(uint)(0.0 <= fVar42) ^
                      (uint)(fVar42 + fVar39));
      fVar43 = (float)(((uint)(fVar43 + fVar4) ^ (uint)fVar43) & -(uint)(0.0 <= fVar43) ^
                      (uint)(fVar43 + fVar4));
      fVar39 = (float)(((uint)(fVar42 - fVar39) ^ (uint)fVar42) &
                       -(uint)(fRam0000000146b47344 < fVar42) ^ (uint)fVar42) * fVar44 + pfVar37[1];
      local_140 = (float)(((uint)(fVar43 - fVar4) ^ (uint)fVar43) &
                          -(uint)(fRam0000000146b47348 < fVar43) ^ (uint)fVar43) * fVar44 +
                  pfVar37[2];
      fVar44 = (float)(((uint)(fVar41 - fVar3) ^ (uint)fVar41) & -(uint)(_DAT_146b47340 < fVar41) ^
                      (uint)fVar41) * fVar44 + *pfVar37;
      local_148 = CONCAT44(fVar39,fVar44);
    }
    if ((*(byte *)(param_1 + 0x40) & 4) != 0) {
      param_3 = param_3 * *(float *)(param_1 + 0x44);
      if (param_3 <= *(float *)(param_1 + 0x48)) {
        param_3 = *(float *)(param_1 + 0x48);
      }
      local_140 = local_140 * param_3;
      local_148 = CONCAT44(fVar39 * param_3,fVar44 * param_3);
    }
    pfVar32 = (float *)FRotationMatrix::FRotationMatrix(local_f8,&local_148);
    pfVar33 = (float *)FRotationMatrix::FRotationMatrix(local_b8,param_2);
    fVar44 = *pfVar32;
    fVar3 = pfVar32[1];
    fVar39 = pfVar32[2];
    fVar4 = pfVar32[3];
    fVar41 = pfVar32[4];
    fVar42 = pfVar32[5];
    fVar43 = pfVar32[6];
    fVar5 = pfVar32[7];
    fVar6 = pfVar32[8];
    fVar7 = pfVar32[9];
    fVar8 = pfVar32[10];
    fVar9 = pfVar32[0xb];
    fVar10 = pfVar32[0xc];
    fVar11 = pfVar32[0xd];
    fVar12 = pfVar32[0xe];
    fVar13 = pfVar32[0xf];
    fVar14 = pfVar33[4];
    fVar15 = pfVar33[5];
    fVar16 = pfVar33[6];
    fVar17 = pfVar33[7];
    fVar18 = *pfVar33;
    fVar19 = pfVar33[1];
    fVar20 = pfVar33[2];
    fVar21 = pfVar33[3];
    fVar22 = pfVar33[8];
    fVar23 = pfVar33[9];
    fVar24 = pfVar33[10];
    fVar25 = pfVar33[0xb];
    fVar26 = pfVar33[0xc];
    fVar27 = pfVar33[0xd];
    fVar28 = pfVar33[0xe];
    fVar29 = pfVar33[0xf];
    local_138 = fVar3 * fVar14 + fVar44 * fVar18 + fVar39 * fVar22 + fVar4 * fVar26;
    fStack_134 = fVar3 * fVar15 + fVar44 * fVar19 + fVar39 * fVar23 + fVar4 * fVar27;
    fStack_130 = fVar3 * fVar16 + fVar44 * fVar20 + fVar39 * fVar24 + fVar4 * fVar28;
    fStack_12c = fVar3 * fVar17 + fVar44 * fVar21 + fVar39 * fVar25 + fVar4 * fVar29;
    local_128 = fVar41 * fVar18 + fVar42 * fVar14 + fVar43 * fVar22 + fVar5 * fVar26;
    fStack_124 = fVar41 * fVar19 + fVar42 * fVar15 + fVar43 * fVar23 + fVar5 * fVar27;
    fStack_120 = fVar41 * fVar20 + fVar42 * fVar16 + fVar43 * fVar24 + fVar5 * fVar28;
    fStack_11c = fVar41 * fVar21 + fVar42 * fVar17 + fVar43 * fVar25 + fVar5 * fVar29;
    local_118 = fVar6 * fVar18 + fVar7 * fVar14 + fVar8 * fVar22 + fVar9 * fVar26;
    fStack_114 = fVar6 * fVar19 + fVar7 * fVar15 + fVar8 * fVar23 + fVar9 * fVar27;
    fStack_110 = fVar6 * fVar20 + fVar7 * fVar16 + fVar8 * fVar24 + fVar9 * fVar28;
    fStack_10c = fVar6 * fVar21 + fVar7 * fVar17 + fVar8 * fVar25 + fVar9 * fVar29;
    local_108 = fVar11 * fVar14 + fVar10 * fVar18 + fVar12 * fVar22 + fVar13 * fVar26;
    fStack_104 = fVar11 * fVar15 + fVar10 * fVar19 + fVar12 * fVar23 + fVar13 * fVar27;
    fStack_100 = fVar11 * fVar16 + fVar10 * fVar20 + fVar12 * fVar24 + fVar13 * fVar28;
    fStack_fc = fVar11 * fVar17 + fVar10 * fVar21 + fVar12 * fVar25 + fVar13 * fVar29;
    puVar34 = (undefined8 *)FMatrix::Rotator(&local_138,&local_148);
    *param_6 = *puVar34;
    *(undefined4 *)(param_6 + 1) = *(undefined4 *)(puVar34 + 1);
    pbVar38 = param_8;
    if (*(char *)((longlong)pfVar37 + 0x19) != '\0') {
      pbVar38 = (byte *)((longlong)pfVar37 + 0x1a);
    }
    *param_7 = *pbVar38;
    uVar35 = (ulonglong)*param_8;
    if (bVar2) {
      *param_8 = (byte)((longlong)(ulonglong)(*param_8 + 1) % (longlong)*(int *)(param_1 + 0x38));
    }
  }
  return uVar35;
}



// FUNCTION 14304df60 FUN_14304df60 body=178 status=ok
// SIG undefined FUN_14304df60(void)

longlong * FUN_14304df60(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((param_2 == (longlong *)0x0) ||
     (cVar1 = (**(code **)(*param_2 + 0x440))(param_2,*(undefined8 *)(param_1 + 0x10)),
     cVar1 != '\0')) {
    return param_2;
  }
  iVar2 = UWorld::GetNumPlayerControllers(param_2);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      plVar3 = (longlong *)UKWMeshArray::GetMeshByIndex(param_2,iVar4);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar3 + 0x440))(plVar3,*(undefined8 *)(param_1 + 0x10)),
         cVar1 != '\0')) {
        return plVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return (longlong *)0x0;
}



// FUNCTION 14304e020 FUN_14304e020 body=26 status=ok
// SIG undefined FUN_14304e020(void)

undefined4 FUN_14304e020(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  return *(undefined4 *)(lVar1 + 0x790);
}



// FUNCTION 14304e080 FUN_14304e080 body=1490 status=ok
// SIG undefined FUN_14304e080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14304e080(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar12 [16];
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
  float fVar49;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [208];
  
  FRotator::Quaternion(param_1 + 0x24,&local_f8);
  auVar9 = _DAT_14401b160;
  fVar32 = *(float *)(param_1 + 0x20);
  fVar36 = *(float *)(param_1 + 0x1c);
  fVar40 = *(float *)(param_1 + 0x18);
  fVar19 = (float)DAT_14401b160;
  fVar22 = DAT_14401b160._4_4_;
  fVar25 = DAT_14401b160._8_4_;
  fVar27 = DAT_14401b160._12_4_;
  pfVar7 = (float *)FUN_14304a960(param_1,local_d8);
  uVar5 = uRam0000000146b4739c;
  uVar4 = uRam0000000146b47398;
  uVar3 = uRam0000000146b47394;
  uVar2 = _DAT_146b47390;
  fVar18 = fRam0000000146b4738c;
  fVar17 = fRam0000000146b47388;
  fVar15 = fRam0000000146b47384;
  fVar11 = _DAT_146b47380;
  auVar8 = *(undefined1 (*) [16])(pfVar7 + 8);
  fVar33 = auVar8._0_4_;
  fVar37 = auVar8._4_4_;
  fVar41 = auVar8._8_4_;
  fVar42 = auVar8._12_4_;
  fVar10 = *pfVar7;
  fVar21 = pfVar7[1];
  fVar14 = pfVar7[2];
  fVar24 = pfVar7[3];
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = fVar18;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = (float)((uint)fVar11 & uVar2);
  param_2[9] = (float)((uint)fVar15 & uVar3);
  param_2[10] = (float)((uint)fVar17 & uVar4);
  param_2[0xb] = (float)((uint)fVar18 & uVar5);
  auVar8 = minps(auVar9,auVar8);
  auVar9._4_4_ = -(uint)(auVar8._4_4_ < fRam0000000146b473e4);
  auVar9._0_4_ = -(uint)(auVar8._0_4_ < _DAT_146b473e0);
  auVar9._8_4_ = -(uint)(auVar8._8_4_ < fRam0000000146b473e8);
  auVar9._12_4_ = -(uint)(auVar8._12_4_ < fRam0000000146b473ec);
  iVar6 = movmskps((int)pfVar7,auVar9);
  if (iVar6 == 0) {
    fVar40 = fVar33 * fVar40;
    fVar36 = fVar37 * fVar36;
    fVar32 = fVar41 * fVar32;
    fVar16 = fVar42 * 0.0;
    fVar20 = fStack_ec * fVar10 * _DAT_146b473c0;
    fVar23 = fStack_f0 * fVar10 * fRam0000000146b473c4;
    fVar26 = fStack_f4 * fVar10 * fRam0000000146b473c8;
    fVar13 = local_f8 * fVar10 * fRam0000000146b473cc;
    fVar11 = fStack_f0 * fVar21 * _DAT_146b473b0;
    fVar15 = fStack_ec * fVar21 * fRam0000000146b473b4;
    fVar17 = local_f8 * fVar21 * fRam0000000146b473b8;
    fVar18 = fStack_f4 * fVar21 * fRam0000000146b473bc;
    fVar28 = fStack_f4 * fVar14 * _DAT_146b473a0;
    fVar44 = local_f8 * fVar14 * fRam0000000146b473a4;
    fVar29 = fStack_ec * fVar14 * fRam0000000146b473a8;
    fVar30 = fStack_f0 * fVar14 * fRam0000000146b473ac;
    param_2[8] = fVar33 * fVar19;
    param_2[9] = fVar37 * fVar22;
    param_2[10] = fVar41 * fVar25;
    param_2[0xb] = fVar42 * fVar27;
    *param_2 = fVar20 + fVar24 * local_f8 + fVar11 + fVar28;
    param_2[1] = fVar23 + fVar24 * fStack_f4 + fVar15 + fVar44;
    param_2[2] = fVar26 + fVar24 * fStack_f0 + fVar17 + fVar29;
    param_2[3] = fVar13 + fVar24 * fStack_ec + fVar18 + fVar30;
    fVar27 = fVar32 * fVar21 - fVar36 * fVar14;
    fVar33 = fVar40 * fVar14 - fVar32 * fVar10;
    fVar37 = fVar36 * fVar10 - fVar40 * fVar21;
    fVar41 = fVar16 * fVar24 - fVar16 * fVar24;
    fVar27 = fVar27 + fVar27;
    fVar33 = fVar33 + fVar33;
    fVar37 = fVar37 + fVar37;
    fVar41 = fVar41 + fVar41;
    fVar19 = pfVar7[5];
    fVar22 = pfVar7[6];
    fVar25 = pfVar7[7];
    param_2[4] = (fVar37 * fVar21 - fVar33 * fVar14) + fVar24 * fVar27 + fVar40 + pfVar7[4];
    param_2[5] = (fVar27 * fVar14 - fVar37 * fVar10) + fVar24 * fVar33 + fVar36 + fVar19;
    param_2[6] = (fVar33 * fVar10 - fVar27 * fVar21) + fVar24 * fVar37 + fVar32 + fVar22;
    param_2[7] = (fVar41 * fVar24 - fVar41 * fVar24) + fVar24 * fVar41 + fVar16 + fVar25;
  }
  else {
    fVar13 = fVar21 + fVar21;
    fVar16 = fVar14 + fVar14;
    fVar20 = pfVar7[4];
    fVar23 = pfVar7[5];
    fVar26 = pfVar7[6];
    fVar28 = fVar10 * (fVar10 + fVar10);
    fVar44 = fVar24 * (fVar10 + fVar10);
    fVar30 = fVar37 * (fVar10 * fVar13 - fVar24 * fVar16);
    fVar34 = fVar41 * (fVar21 * fVar16 - fVar44);
    fVar38 = fVar33 * (fVar10 * fVar16 - fVar24 * fVar13);
    fVar47 = (fVar24 * fVar16 + fVar10 * fVar13) * fVar33;
    fVar48 = (fVar44 + fVar21 * fVar16) * fVar37;
    fVar49 = (fVar24 * fVar13 + fVar10 * fVar16) * fVar41;
    fVar44 = fStack_f4 + fStack_f4;
    fVar24 = fStack_f0 + fStack_f0;
    fVar10 = (float)((uint)((fVar11 - (fVar14 * fVar16 + fVar21 * fVar13)) * fVar33) & uVar2);
    fVar14 = (float)((uint)((fVar15 - (fVar14 * fVar16 + fVar28)) * fVar37) & uVar3);
    fVar13 = (float)((uint)((fVar17 - (fVar21 * fVar13 + fVar28)) * fVar41) & uVar4);
    fVar28 = (float)((uint)((fVar18 - (fVar28 + fVar28)) * fVar42) & uVar5);
    fVar29 = (local_f8 + local_f8) * local_f8;
    fVar21 = (local_f8 + local_f8) * fStack_ec;
    fVar43 = (fVar24 * fStack_ec + fVar44 * local_f8) * fVar19;
    fVar45 = (fVar21 + fVar24 * fStack_f4) * fVar22;
    fVar46 = (fVar44 * fStack_ec + fVar24 * local_f8) * fVar25;
    fVar31 = fVar22 * (fVar44 * local_f8 - fVar24 * fStack_ec);
    fVar35 = fVar25 * (fVar24 * fStack_f4 - fVar21);
    fVar39 = fVar19 * (fVar24 * local_f8 - fVar44 * fStack_ec);
    fVar21 = (float)((uint)((fVar11 - (fVar24 * fStack_f0 + fVar44 * fStack_f4)) * fVar19) & uVar2);
    fVar24 = (float)((uint)((fVar15 - (fVar24 * fStack_f0 + fVar29)) * fVar22) & uVar3);
    fVar16 = (float)((uint)((fVar17 - (fVar44 * fStack_f4 + fVar29)) * fVar25) & uVar4);
    fVar44 = (float)((uint)((fVar18 - (fVar29 + fVar29)) * fVar27) & uVar5);
    local_138 = fVar43 * fVar30 + fVar21 * fVar10 + fVar39 * fVar49 + fVar44 * fVar20;
    fStack_134 = fVar43 * fVar14 + fVar21 * fVar47 + fVar39 * fVar34 + fVar44 * fVar23;
    fStack_130 = fVar43 * fVar48 + fVar21 * fVar38 + fVar39 * fVar13 + fVar44 * fVar26;
    fStack_12c = fVar43 * fVar28 + fVar21 * fVar28 + fVar39 * fVar28 + fVar44 * fVar18;
    local_128 = fVar24 * fVar30 + fVar31 * fVar10 + fVar45 * fVar49 + fVar44 * fVar20;
    fStack_124 = fVar24 * fVar14 + fVar31 * fVar47 + fVar45 * fVar34 + fVar44 * fVar23;
    fStack_120 = fVar24 * fVar48 + fVar31 * fVar38 + fVar45 * fVar13 + fVar44 * fVar26;
    fStack_11c = fVar24 * fVar28 + fVar31 * fVar28 + fVar45 * fVar28 + fVar44 * fVar18;
    local_118 = fVar35 * fVar30 + fVar46 * fVar10 + fVar16 * fVar49 + fVar44 * fVar20;
    fStack_114 = fVar35 * fVar14 + fVar46 * fVar47 + fVar16 * fVar34 + fVar44 * fVar23;
    fStack_110 = fVar35 * fVar48 + fVar46 * fVar38 + fVar16 * fVar13 + fVar44 * fVar26;
    fStack_10c = fVar35 * fVar28 + fVar46 * fVar28 + fVar16 * fVar28 + fVar44 * fVar18;
    local_108 = fVar36 * fVar30 + fVar40 * fVar10 + fVar32 * fVar49 + fVar18 * fVar20;
    fStack_104 = fVar36 * fVar14 + fVar40 * fVar47 + fVar32 * fVar34 + fVar18 * fVar23;
    fStack_100 = fVar36 * fVar48 + fVar40 * fVar38 + fVar32 * fVar13 + fVar18 * fVar26;
    fStack_fc = fVar36 * fVar28 + fVar40 * fVar28 + fVar32 * fVar28 + fVar18 * fVar18;
    FMatrix::RemoveScaling(&local_138);
    fVar32 = (float)(-(uint)(_DAT_146b473e0 <= fVar33 * fVar19) & (_DAT_146b473d0 ^ (uint)fVar11) ^
                    _DAT_146b473d0);
    fVar36 = (float)(-(uint)(fRam0000000146b473e4 <= fVar37 * fVar22) &
                     (uRam0000000146b473d4 ^ (uint)fVar15) ^ uRam0000000146b473d4);
    fVar40 = (float)(-(uint)(fRam0000000146b473e8 <= fVar41 * fVar25) &
                     (uRam0000000146b473d8 ^ (uint)fVar17) ^ uRam0000000146b473d8);
    local_138 = local_138 * fVar32;
    fStack_134 = fStack_134 * fVar32;
    fStack_130 = fStack_130 * fVar32;
    fStack_120 = fStack_120 * fVar36;
    fStack_124 = fStack_124 * fVar36;
    local_128 = local_128 * fVar36;
    fStack_110 = fStack_110 * fVar40;
    local_118 = local_118 * fVar40;
    fStack_114 = fStack_114 * fVar40;
    FQuat::FQuat(&local_e8,&local_138);
    fVar10 = fRam0000000146b4737c;
    fVar40 = fRam0000000146b47378;
    fVar36 = fRam0000000146b47374;
    fVar32 = _DAT_146b47370;
    param_2[8] = fVar33 * fVar19;
    param_2[9] = fVar37 * fVar22;
    param_2[10] = fVar41 * fVar25;
    param_2[0xb] = fVar42 * fVar27;
    auVar12._0_4_ = local_e8 * local_e8 + fStack_e0 * fStack_e0;
    auVar12._4_4_ = fStack_e4 * fStack_e4 + fStack_dc * fStack_dc;
    auVar12._8_4_ = fStack_e0 * fStack_e0 + local_e8 * local_e8;
    auVar12._12_4_ = fStack_dc * fStack_dc + fStack_e4 * fStack_e4;
    fVar33 = auVar12._4_4_ + auVar12._0_4_;
    fVar37 = auVar12._8_4_ + auVar12._4_4_;
    fVar41 = auVar12._12_4_ + auVar12._8_4_;
    fVar42 = auVar12._0_4_ + auVar12._12_4_;
    auVar1._4_4_ = fVar37;
    auVar1._0_4_ = fVar33;
    auVar1._8_4_ = fVar41;
    auVar1._12_4_ = fVar42;
    auVar8 = rsqrtps(auVar12,auVar1);
    fVar19 = auVar8._0_4_;
    fVar22 = auVar8._4_4_;
    fVar25 = auVar8._8_4_;
    fVar27 = auVar8._12_4_;
    fVar19 = (fVar32 - fVar19 * fVar19 * fVar33 * fVar32) * fVar19 + fVar19;
    fVar22 = (fVar36 - fVar22 * fVar22 * fVar37 * fVar36) * fVar22 + fVar22;
    fVar25 = (fVar40 - fVar25 * fVar25 * fVar41 * fVar40) * fVar25 + fVar25;
    fVar27 = (fVar10 - fVar27 * fVar27 * fVar42 * fVar10) * fVar27 + fVar27;
    auVar8._4_4_ = fStack_104;
    auVar8._0_4_ = local_108;
    auVar8._8_4_ = fStack_100;
    fVar32 = (float)(((uint)(((fVar32 - fVar19 * fVar19 * fVar33 * fVar32) * fVar19 + fVar19) *
                            local_e8) ^ _DAT_146b47360) & -(uint)(1e-08 <= fVar33) ^ _DAT_146b47360)
    ;
    fVar36 = (float)(((uint)(((fVar36 - fVar22 * fVar22 * fVar37 * fVar36) * fVar22 + fVar22) *
                            fStack_e4) ^ uRam0000000146b47364) & -(uint)(1e-08 <= fVar37) ^
                    uRam0000000146b47364);
    fVar40 = (float)(((uint)(((fVar40 - fVar25 * fVar25 * fVar41 * fVar40) * fVar25 + fVar25) *
                            fStack_e0) ^ uRam0000000146b47368) & -(uint)(1e-08 <= fVar41) ^
                    uRam0000000146b47368);
    fVar19 = (float)(((uint)(((fVar10 - fVar27 * fVar27 * fVar42 * fVar10) * fVar27 + fVar27) *
                            fStack_dc) ^ uRam0000000146b4736c) & -(uint)(1e-08 <= fVar42) ^
                    uRam0000000146b4736c);
    auVar8._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 4) = auVar8;
    *param_2 = fVar32;
    param_2[1] = fVar36;
    param_2[2] = fVar40;
    param_2[3] = fVar19;
  }
  return param_2;
}



// FUNCTION 14304e660 FUN_14304e660 body=633 status=ok
// SIG undefined FUN_14304e660(void)

void FUN_14304e660(longlong *param_1,byte *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_d8;
  undefined4 local_d0;
  byte local_c8 [4];
  undefined4 local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  if ((*(byte *)(param_1 + 0x39) & 2) == 0) {
    if (((char)param_1[0x51] != '\0') && (lVar5 = FWeakObjectPtr::Get(param_2 + 0x6c), lVar5 != 0))
    {
      lVar6 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if (param_1[0x30] == 0) {
          return;
        }
        FUN_14238f290(param_1[0x30],lVar5,1);
        return;
      }
    }
  }
  else {
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x194);
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x18c);
    puVar4 = (undefined8 *)
             (**(code **)(*param_1 + 0x558))(param_1,&local_d8,param_2,param_3,param_4);
    *(undefined8 *)((longlong)param_1 + 0x18c) = *puVar4;
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar4 + 1);
    local_bc = *(undefined4 *)(param_2 + 0xc);
    local_b8 = *(undefined4 *)(param_2 + 0x10);
    local_c8[1] = 0;
    local_c8[2] = 0;
    local_c8[3] = 0;
    local_4c = 0;
    local_c8[0] = *param_2 & 3;
    local_b4 = *(undefined8 *)(param_2 + 0x14);
    local_c4 = *(undefined4 *)(param_2 + 4);
    local_a8 = *(undefined8 *)(param_2 + 0x20);
    local_c0 = *(uint *)(param_2 + 8) & 1;
    local_ac = *(undefined4 *)(param_2 + 0x1c);
    local_9c = *(undefined8 *)(param_2 + 0x2c);
    local_a0 = *(undefined4 *)(param_2 + 0x28);
    local_94 = *(undefined4 *)(param_2 + 0x34);
    local_88 = *(undefined4 *)(param_2 + 0x40);
    local_7c = *(undefined4 *)(param_2 + 0x4c);
    local_70 = *(undefined4 *)(param_2 + 0x58);
    local_68 = *(undefined4 *)(param_2 + 0x60);
    local_64 = *(undefined4 *)(param_2 + 100);
    local_60 = *(undefined4 *)(param_2 + 0x68);
    local_5c = *(undefined4 *)(param_2 + 0x6c);
    local_58 = *(undefined4 *)(param_2 + 0x70);
    local_90 = *(undefined8 *)(param_2 + 0x38);
    local_54 = *(undefined4 *)(param_2 + 0x74);
    local_84 = *(undefined8 *)(param_2 + 0x44);
    local_50 = *(undefined4 *)(param_2 + 0x78);
    local_48 = *(undefined8 *)(param_2 + 0x80);
    local_78 = *(undefined8 *)(param_2 + 0x50);
    local_40 = *(undefined8 *)(param_2 + 0x88);
    local_6c = *(undefined4 *)(param_2 + 0x5c);
    local_38 = uVar1;
    local_30 = uVar2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x3e,local_c8);
    local_d8 = *(undefined8 *)((longlong)param_1 + 0x18c);
    local_d0 = *(undefined4 *)((longlong)param_1 + 0x194);
    puVar4 = (undefined8 *)FUN_142391730(param_1,local_28,&local_d8);
    *(undefined8 *)((longlong)param_1 + 0x18c) = *puVar4;
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar4 + 1);
    if (*(float *)((longlong)param_1 + 0x1ec) * *(float *)((longlong)param_1 + 0x1ec) <=
        *(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
        *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) +
        *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194)) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x530))(param_1,param_2);
  return;
}



// FUNCTION 14304e8e0 FUN_14304e8e0 body=92 status=ok
// SIG undefined FUN_14304e8e0(void)

bool FUN_14304e8e0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res20 [8];
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)FUN_14304ad10(param_1,local_18,param_2,param_3,0,local_res20);
  if (*plVar2 != 0) {
    lVar3 = FUN_142e20fc0();
    lVar4 = *plVar2;
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) goto LAB_14304e930;
    }
  }
  lVar4 = 0;
LAB_14304e930:
  return lVar4 != 0;
}



// FUNCTION 14304e940 FUN_14304e940 body=71 status=ok
// SIG undefined FUN_14304e940(void)

undefined8 FUN_14304e940(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x5e0);
  if (*(int **)(param_1 + 0x5e0) == (int *)0x0) {
    piVar2 = (int *)(param_1 + 0x4e0);
  }
  piVar1 = piVar2 + (longlong)*(int *)(param_1 + 0x5e8) * 2;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 2) {
    if (*piVar2 == param_2) goto LAB_14304e980;
  }
  piVar2 = (int *)0x0;
LAB_14304e980:
  return CONCAT71((int7)((ulonglong)piVar2 >> 8),piVar2 != (int *)0x0);
}



// FUNCTION 14304e990 FUN_14304e990 body=180 status=ok
// SIG undefined FUN_14304e990(void)

ulonglong FUN_14304e990(longlong *param_1,longlong *param_2)

{
  ulonglong in_RAX;
  uint7 uVar1;
  char cVar2;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (uint7)(in_RAX >> 8);
    if ((*param_1 == 0) && (param_1[1] == 0)) {
      in_RAX = (ulonglong)uVar1 << 8;
    }
    else {
      in_RAX = CONCAT71(uVar1,1);
    }
    if ((*param_2 == 0) && (param_2[1] == 0)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if (((char)in_RAX == cVar2) &&
       (((char)in_RAX == '\0' ||
        ((((((*param_1 == *param_2 && (in_RAX = param_2[1], param_1[1] == in_RAX)) &&
            (*(float *)(param_2 + 3) == *(float *)(param_1 + 3))) &&
           ((*(float *)((longlong)param_2 + 0x1c) == *(float *)((longlong)param_1 + 0x1c) &&
            (*(float *)(param_2 + 4) == *(float *)(param_1 + 4))))) &&
          ((*(float *)((longlong)param_2 + 0x24) == *(float *)((longlong)param_1 + 0x24) &&
           ((*(float *)(param_2 + 5) == *(float *)(param_1 + 5) &&
            (*(float *)((longlong)param_2 + 0x2c) == *(float *)((longlong)param_1 + 0x2c))))))) &&
         ((*(float *)(param_2 + 6) == *(float *)(param_1 + 6) &&
          ((*(float *)((longlong)param_2 + 0x34) == *(float *)((longlong)param_1 + 0x34) &&
           (*(float *)(param_2 + 7) == *(float *)(param_1 + 7))))))))))) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14304ea50 FUN_14304ea50 body=42 status=ok
// SIG undefined FUN_14304ea50(void)

void FUN_14304ea50(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x2a8))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014304ea73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2b0))(param_2);
  return;
}



// FUNCTION 14304ea80 FUN_14304ea80 body=54 status=ok
// SIG undefined FUN_14304ea80(void)

void FUN_14304ea80(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x2d0))(param_2,param_1);
  (**(code **)(*param_2 + 0x2d8))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014304eaaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x290))(param_2);
  return;
}



// FUNCTION 14304eac0 FUN_14304eac0 body=188 status=ok
// SIG undefined FUN_14304eac0(void)

void FUN_14304eac0(longlong param_1,longlong param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x148);
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_1 + 200);
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_1 + 0x198);
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_1 + 0x188);
  *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_1 + 400);
  *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_1 + 0x150);
  FUN_142d979a0(&local_28,*(undefined4 *)(param_1 + 0x1a4));
  *(undefined8 *)(param_2 + 0xa8) = local_28;
  *(undefined8 *)(param_2 + 0xb0) = uStack_20;
  *(undefined8 *)(param_2 + 0xb8) = local_18;
  *(undefined8 *)(param_2 + 0xc0) = uStack_10;
  return;
}



// FUNCTION 14304eb80 FUN_14304eb80 body=491 status=ok
// SIG undefined FUN_14304eb80(void)

void FUN_14304eb80(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_1 + 0x170);
  *(uint *)(param_2 + 0x28) = (uint)*(ushort *)(param_1 + 0xe8);
  *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_1 + 0x178);
  *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(param_1 + 0x378);
  *(undefined1 *)(param_2 + 200) = *(undefined1 *)(param_1 + 0xe0);
  *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x198);
  FUN_142d979a0(&local_28,*(undefined4 *)(param_1 + 0x1a4));
  *(undefined8 *)(param_2 + 0x80) = local_28;
  *(undefined8 *)(param_2 + 0x88) = uStack_20;
  *(undefined8 *)(param_2 + 0x90) = local_18;
  *(undefined8 *)(param_2 + 0x98) = uStack_10;
  *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined8 *)(param_2 + 0xe4) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_2 + 0xec) = *(undefined8 *)(param_1 + 0x100);
  uVar5 = *(undefined8 *)(param_1 + 0x430);
  *(undefined8 *)(param_2 + 0xf4) = *(undefined8 *)(param_1 + 0x428);
  *(undefined8 *)(param_2 + 0xfc) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x440);
  *(undefined8 *)(param_2 + 0x104) = *(undefined8 *)(param_1 + 0x438);
  *(undefined8 *)(param_2 + 0x10c) = uVar5;
  uVar1 = *(undefined4 *)(param_1 + 0x44c);
  uVar3 = *(undefined4 *)(param_1 + 0x450);
  uVar4 = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(param_2 + 0x118) = uVar1;
  *(undefined4 *)(param_2 + 0x11c) = uVar3;
  *(undefined4 *)(param_2 + 0x120) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x458);
  *(byte *)(param_2 + 0x138) = *(byte *)(param_2 + 0x138) | 1;
  *(undefined4 *)(param_2 + 0x124) = uVar1;
  puVar8 = *(undefined4 **)(param_1 + 0xd0);
  puVar9 = puVar8 + (longlong)*(int *)(param_1 + 0xd8) * 4;
  for (; puVar8 != puVar9; puVar8 = puVar8 + 4) {
    lVar6 = FWeakObjectPtr::Get(puVar8);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x180) != '\0')) {
      iVar2 = *(int *)(param_2 + 0xd8);
      *(int *)(param_2 + 0xd8) = iVar2 + 1;
      if (*(int *)(param_2 + 0xdc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0xd0,iVar2);
      }
      puVar7 = (undefined4 *)((longlong)iVar2 * 0x10 + *(longlong *)(param_2 + 0xd0));
      *puVar7 = *puVar8;
      puVar7[1] = puVar8[1];
      puVar7[2] = puVar8[2];
      puVar7[3] = puVar8[3];
    }
  }
  *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xffffff68;
  return;
}



// FUNCTION 14304ed70 FUN_14304ed70 body=139 status=ok
// SIG undefined FUN_14304ed70(void)

void FUN_14304ed70(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (0.0 < *(float *)(lVar1 + 0x2e4)) {
    *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(lVar1 + 0x2dc);
    fVar3 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar1 + 0x2e4) * 0.008726646);
    *(float *)(param_1 + 0x388) = fVar3;
    return;
  }
  *(undefined4 *)(param_1 + 0x380) = (undefined4)DAT_1468b5d88;
  uVar2 = DAT_1468b5d88._4_4_;
  *(ushort *)(param_1 + 0xe8) = *(ushort *)(param_1 + 0xe8) & 0xffef;
  *(undefined4 *)(param_1 + 900) = uVar2;
  *(undefined4 *)(param_1 + 0x388) = 0x3f800000;
  return;
}



// FUNCTION 14304ee00 FUN_14304ee00 body=1949 status=ok
// SIG undefined FUN_14304ee00(void)

void FUN_14304ee00(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  float local_b8;
  
  if ((*(byte *)(param_2 + 0xe8) >> 1 & 1) != 0) {
    local_e8 = *(undefined8 *)(param_2 + 0x2d8);
    local_e0 = *(float *)(param_2 + 0x2e0);
    FUN_14304b050(param_2,&local_f8);
    fVar13 = *(float *)(param_2 + 0x2f4);
    fVar2 = *(float *)(param_2 + 0x2f0);
    fVar4 = local_f8 - *(float *)(param_2 + 0x118);
    fVar3 = *(float *)(param_2 + 0x2f8);
    fVar5 = local_f4 - *(float *)(param_2 + 0x11c);
    fVar1 = local_f0 - *(float *)(param_2 + 0x120);
    fVar6 = fVar2 * fVar2 + fVar13 * fVar13 + fVar3 * fVar3;
    if (fVar6 == 1.0) {
      local_b8 = (float)*(undefined8 *)(param_2 + 0x2f0);
      fVar12 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x2f0) >> 0x20);
      fVar17 = *(float *)(param_2 + 0x2f8);
    }
    else {
      fVar12 = DAT_1468b5d94;
      fVar17 = DAT_1468b5d98;
      local_b8 = DAT_1468b5d90;
      if (1e-08 <= fVar6) {
        auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar17 = auVar8._0_4_;
        fVar17 = fVar17 + fVar17 * (0.5 - fVar6 * 0.5 * fVar17 * fVar17);
        fVar17 = fVar17 + fVar17 * (0.5 - fVar6 * 0.5 * fVar17 * fVar17);
        local_b8 = fVar2 * fVar17;
        fVar12 = fVar13 * fVar17;
        fVar17 = fVar3 * fVar17;
      }
    }
    fVar13 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar1 * fVar1) * *(float *)(param_1 + 0x30);
    fVar15 = local_f4 - local_e8._4_4_;
    fVar14 = local_f0 - local_e0;
    *(ulonglong *)param_3 = CONCAT44(fVar12 * fVar13,local_b8 * fVar13);
    fVar11 = local_f8 - (float)local_e8;
    param_3[2] = fVar17 * fVar13;
    fVar10 = (float)local_e8 * 0.896 + *param_3 * 0.128 + fVar11 * -0.032 + local_f8 * 0.104;
    fVar9 = local_e8._4_4_ * 0.896 + param_3[1] * 0.128 + fVar15 * -0.032 + local_f4 * 0.104;
    fVar4 = fVar9 - local_e8._4_4_;
    fVar7 = local_e0 * 0.896 + param_3[2] * 0.128 + fVar14 * -0.032 + local_f0 * 0.104;
    fVar13 = fVar10 - (float)local_e8;
    fVar2 = fVar7 - local_e0;
    fVar6 = (float)local_e8 * 0.648 + *param_3 * 0.144 + fVar11 * -0.096 + local_f8 * 0.352;
    fVar10 = fVar6 - fVar10;
    fVar17 = local_e8._4_4_ * 0.648 + param_3[1] * 0.144 + fVar15 * -0.096 + local_f4 * 0.352;
    fVar9 = fVar17 - fVar9;
    fVar5 = local_e0 * 0.648 + param_3[2] * 0.144 + fVar14 * -0.096 + local_f0 * 0.352;
    fVar7 = fVar5 - fVar7;
    fVar1 = local_e0 * 0.352 + param_3[2] * 0.096 + fVar14 * -0.144 + local_f0 * 0.648;
    fVar12 = local_e8._4_4_ * 0.352 + param_3[1] * 0.096 + fVar15 * -0.144 + local_f4 * 0.648;
    fVar3 = (float)local_e8 * 0.352 + *param_3 * 0.096 + fVar11 * -0.144 + local_f8 * 0.648;
    fVar6 = fVar3 - fVar6;
    fVar17 = fVar12 - fVar17;
    fVar5 = fVar1 - fVar5;
    fVar16 = (float)local_e8 * 0.104 + *param_3 * 0.032 + fVar11 * -0.128 + local_f8 * 0.896;
    fVar15 = local_e8._4_4_ * 0.104 + param_3[1] * 0.032 + fVar15 * -0.128 + local_f4 * 0.896;
    fVar11 = local_e0 * 0.104 + param_3[2] * 0.032 + fVar14 * -0.128 + local_f0 * 0.896;
    fVar3 = fVar16 - fVar3;
    fVar12 = fVar15 - fVar12;
    fVar1 = fVar11 - fVar1;
    local_f8 = local_f8 - fVar16;
    local_f0 = local_f0 - fVar11;
    local_f4 = local_f4 - fVar15;
    param_3[3] = SQRT(*(float *)(param_2 + 0x2f0) * *(float *)(param_2 + 0x2f0) +
                      *(float *)(param_2 + 0x2f4) * *(float *)(param_2 + 0x2f4) +
                      *(float *)(param_2 + 0x2f8) * *(float *)(param_2 + 0x2f8)) *
                 (1.0 / (SQRT(fVar4 * fVar4 + fVar13 * fVar13 + fVar2 * fVar2) +
                         SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar7 * fVar7) +
                         SQRT(fVar17 * fVar17 + fVar6 * fVar6 + fVar5 * fVar5) +
                         SQRT(fVar12 * fVar12 + fVar3 * fVar3 + fVar1 * fVar1) +
                        SQRT(local_f4 * local_f4 + local_f8 * local_f8 + local_f0 * local_f0)));
  }
  return;
}



// FUNCTION 14304f5b0 FUN_14304f5b0 body=417 status=ok
// SIG undefined FUN_14304f5b0(void)

void FUN_14304f5b0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  
  param_3[2] = (uint)*(byte *)(param_2 + 0x185) * 0x1d89d8;
  fVar1 = *(float *)(param_2 + 0x2f4);
  fVar2 = *(float *)(param_2 + 0x2f0);
  fVar7 = *(float *)(param_2 + 0x2f8);
  fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar7 * fVar7;
  if (fVar4 == 1.0) {
    uVar3 = *(undefined8 *)(param_2 + 0x2f0);
    fVar7 = *(float *)(param_2 + 0x2f8);
  }
  else if (1e-08 <= fVar4) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar7 = fVar7 * fVar5;
    uVar3 = CONCAT44(fVar1 * fVar5,fVar2 * fVar5);
  }
  else {
    uVar3 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    fVar7 = DAT_1468b5d98;
  }
  *(undefined8 *)(param_3 + 3) = uVar3;
  param_3[5] = fVar7;
  *param_3 = 0xbf800000;
  param_3[1] = 0xbf800000;
  *(undefined8 *)(param_3 + 6) = DAT_1468b5da0;
  param_3[8] = DAT_1468b5da8;
  *(undefined8 *)(param_3 + 9) = DAT_1468b5da0;
  param_3[0xb] = DAT_1468b5da8;
  return;
}



// FUNCTION 14304f760 FUN_14304f760 body=1353 status=ok
// SIG undefined FUN_14304f760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14304f760(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  undefined1 auStack_278 [32];
  longlong *local_258 [2];
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  cVar10 = *(char *)((longlong)param_1 + 0x1dd) + '\x01';
  *(char *)((longlong)param_1 + 0x1dd) = cVar10;
  if (cVar10 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x1dd) = 1;
    cVar10 = '\x01';
  }
  plVar1 = *(longlong **)(param_2 + 8);
  if (plVar1 == (longlong *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = plVar1[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      cVar10 = *(char *)((longlong)param_1 + 0x1dd);
      lVar9 = plVar1[0x1f];
    }
  }
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0xe0);
  uVar12 = *(undefined4 *)(param_2 + 0xf8);
  *(char *)(param_1 + 0x1c) = cVar10;
  *(undefined4 *)(param_1 + 0x38) = uVar12;
  param_1[0x1d] = *(longlong *)(param_2 + 8);
  lVar8 = *(longlong *)(param_2 + 0x18);
  param_1[0x1e] = *(longlong *)(param_2 + 0x10);
  param_1[0x1f] = lVar8;
  lVar8 = *(longlong *)(param_2 + 0x28);
  param_1[0x20] = *(longlong *)(param_2 + 0x20);
  param_1[0x21] = lVar8;
  param_1[0x22] = *(longlong *)(param_2 + 0x30);
  lVar8 = *(longlong *)(param_2 + 0x40);
  param_1[0x23] = *(longlong *)(param_2 + 0x38);
  param_1[0x24] = lVar8;
  uVar12 = *(undefined4 *)(param_2 + 0x4c);
  uVar3 = *(undefined4 *)(param_2 + 0x50);
  uVar4 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 300) = uVar12;
  *(undefined4 *)(param_1 + 0x26) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar4;
  param_1[0x27] = *(longlong *)(param_2 + 0x58);
  param_1[0x28] = *(longlong *)(param_2 + 0x68);
  *(undefined2 *)((longlong)param_1 + 0x15c) = *(undefined2 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0xdc);
  uVar12 = FUN_142d9cad0(param_2 + 0xa8,0);
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x33] = *(longlong *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x88);
  param_1[0x30] = *(longlong *)(param_2 + 0x90);
  param_1[0x31] = *(longlong *)(param_2 + 0x98);
  lVar8 = *(longlong *)(param_2 + 0x70);
  param_1[0x29] = lVar8;
  if (lVar8 == 0) {
    param_1[0x29] = param_1[0x28];
  }
  param_1[0x2a] = 0;
  lVar8 = *(longlong *)(param_2 + 200);
  if (lVar8 != 0) {
    lVar7 = 0;
    if (lVar8 != *(longlong *)(lVar9 + 0x80)) {
      lVar7 = lVar8;
    }
    param_1[0x2a] = lVar7;
  }
  *(undefined2 *)((longlong)param_1 + 0x1de) = *(undefined2 *)((longlong)param_1 + 0x15c);
  if (*(longlong *)(lVar9 + 0xb8) != 0) {
    plVar5 = (longlong *)UCelLightData::GetPrivateStaticClass();
    plVar1 = *(longlong **)(lVar9 + 0xb8);
    for (plVar2 = plVar1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
      if (plVar2 == plVar5) {
        if (plVar1 != (longlong *)0x0) {
          if (*(float *)((longlong)param_1 + 0x17c) == 0.0) {
            if (plVar1 == (longlong *)0x0) {
              lVar8 = 0;
            }
            else {
              lVar8 = plVar1[0x1f];
              if (lVar8 == 0) {
                (**(code **)(*plVar1 + 0x368))(plVar1);
                lVar8 = plVar1[0x1f];
              }
            }
            uVar6 = FUN_142d0a300(local_248);
            uVar12 = FUN_142d27d00(lVar8,uVar6,param_1[0x29]);
            *(undefined4 *)((longlong)param_1 + 0x17c) = uVar12;
            FUN_1409c53c0(local_248);
          }
          if (*(float *)((longlong)param_1 + 0x1a4) == 0.0) {
            plVar1 = *(longlong **)(lVar9 + 0xb8);
            if (plVar1 == (longlong *)0x0) {
              lVar8 = 0;
            }
            else {
              lVar8 = plVar1[0x1f];
              if (lVar8 == 0) {
                (**(code **)(*plVar1 + 0x368))(plVar1);
                lVar8 = plVar1[0x1f];
              }
            }
            uVar6 = FUN_142d0a300(local_248);
            uVar12 = FUN_142d27fe0(lVar8,uVar6,param_1[0x29]);
            *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar12;
            FUN_1409c53c0(local_248);
          }
        }
        break;
      }
    }
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  fVar13 = *(float *)(param_2 + 0x7c);
  if (fVar13 <= 0.0) {
    fVar13 = *(float *)(lVar9 + 0xac);
  }
  *(float *)(param_1 + 0x19) = fVar13;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)((longlong)param_1 + 500) = *(undefined8 *)(param_2 + 0x104);
  param_1[0x3c] = *(longlong *)(param_2 + 0xd0);
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (((*(byte *)((longlong)param_1 + 0x1de) >> 4 & 1) != 0) &&
     ((longlong *)param_1[0x28] != (longlong *)0x0)) {
    uVar12 = (**(code **)(*(longlong *)param_1[0x28] + 0x6e0))();
    *(undefined4 *)(param_1 + 0x40) = uVar12;
  }
  lVar8 = *(longlong *)(param_2 + 0x110);
  if (lVar8 != 0) {
    param_1[0x7a] = lVar8;
    param_1[0x7b] = lVar8;
    local_258[0] = param_1;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar8 + 0x3e0,local_258);
    iVar11 = 1;
    lVar8 = param_1[0x7b];
    for (lVar7 = *(longlong *)(param_1[0x7b] + 0x3d0); lVar7 != 0;
        lVar7 = *(longlong *)(lVar7 + 0x3d0)) {
      param_1[0x7b] = lVar7;
      iVar11 = iVar11 + 1;
      lVar8 = lVar7;
    }
    if ((lVar8 != 0) && (*(int *)(*(longlong *)(lVar8 + 0xb0) + 0x18c) <= iVar11)) {
      *(ushort *)((longlong)param_1 + 0x1de) = *(ushort *)((longlong)param_1 + 0x1de) | 8;
    }
  }
  param_1[0x2c] = 0;
  if (*(longlong *)(lVar9 + 0x40) != 0) {
    lVar7 = UDungeonEventListener::GetPrivateStaticClass();
    for (lVar8 = *(longlong *)(lVar9 + 0x40); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar7) {
        if (((*(longlong *)(lVar9 + 0x40) != 0) &&
            (lVar8 = FUN_142db9260(*(undefined8 *)(lVar9 + 0x40),param_1), lVar8 != 0)) &&
           (lVar8 != *(longlong *)(lVar9 + 0x38))) {
          param_1[0x2c] = lVar8;
        }
        break;
      }
    }
  }
  param_1[0x2d] = 0;
  if (*(longlong *)(lVar9 + 0x50) != 0) {
    lVar7 = UDungeonEventListener::GetPrivateStaticClass();
    for (lVar8 = *(longlong *)(lVar9 + 0x50); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar7) {
        if (((*(longlong *)(lVar9 + 0x50) != 0) &&
            (lVar8 = FUN_142db9260(*(undefined8 *)(lVar9 + 0x50),param_1), lVar8 != 0)) &&
           (lVar8 != *(longlong *)(lVar9 + 0x48))) {
          param_1[0x2d] = lVar8;
        }
        break;
      }
    }
  }
  param_1[0x2e] = 0;
  if (*(longlong *)(lVar9 + 0x60) != 0) {
    lVar7 = UDungeonEventListener::GetPrivateStaticClass();
    for (lVar8 = *(longlong *)(lVar9 + 0x60); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar7) {
        if (*(longlong *)(lVar9 + 0x60) != 0) {
          lVar9 = FUN_142db93b0(*(undefined8 *)(lVar9 + 0x60),param_1);
          param_1[0x2e] = lVar9;
        }
        break;
      }
    }
  }
  uVar12 = *(undefined4 *)(param_2 + 0x11c);
  lVar9 = *(longlong *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)((longlong)param_1 + 0x604) = uVar12;
  param_1[0xc1] = lVar9;
  return;
}



// FUNCTION 14304fcb0 FUN_14304fcb0 body=1895 status=ok
// SIG undefined FUN_14304fcb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14304fcb0(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  ushort uVar11;
  ushort uVar12;
  undefined1 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  longlong local_290 [3];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 local_250;
  uint uStack_24c;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  pcVar1 = (char *)((longlong)param_1 + 0xec);
  *pcVar1 = *pcVar1 + '\x01';
  uVar13 = *(undefined1 *)((longlong)param_1 + 0xec);
  if (*pcVar1 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xec) = 1;
    uVar13 = 1;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  lVar14 = 0;
  if (plVar2 == (longlong *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = plVar2[0x1f];
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      uVar13 = *(undefined1 *)((longlong)param_1 + 0xec);
      lVar10 = plVar2[0x1f];
    }
  }
  uVar11 = *(ushort *)(param_2 + 0x28);
  *(ushort *)(param_1 + 0x1d) = uVar11;
  if ((((byte)uVar11 >> 1 & 1) != 0) && ((*(byte *)(lVar10 + 0x2d8) & 1) == 0)) {
    uVar11 = uVar11 & 0xfffd;
    *(ushort *)(param_1 + 0x1d) = uVar11;
  }
  if (*(longlong *)(param_2 + 0x48) != 0) {
    uVar12 = uVar11 | 0x200;
    uVar11 = uVar11 | 0x200;
    *(ushort *)(param_1 + 0x1d) = uVar12;
  }
  lVar15 = *(longlong *)(param_2 + 0xfc);
  param_1[0x85] = *(longlong *)(param_2 + 0xf4);
  param_1[0x86] = lVar15;
  uVar16 = *(undefined4 *)(param_2 + 0x108);
  uVar4 = *(undefined4 *)(param_2 + 0x10c);
  uVar5 = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x87) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)((longlong)param_1 + 0x43c) = uVar16;
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x444) = uVar5;
  lVar15 = *(longlong *)(param_2 + 0x11c);
  param_1[0x89] = *(longlong *)(param_2 + 0x114);
  param_1[0x8a] = lVar15;
  *(undefined4 *)(param_1 + 0x8b) = *(undefined4 *)(param_2 + 0x124);
  *(undefined1 *)(param_1 + 0x21) = uVar13;
  param_1[0x22] = *(longlong *)(param_2 + 8);
  uVar16 = *(undefined4 *)(param_2 + 0x18);
  param_1[0x23] = *(longlong *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = uVar16;
  uVar16 = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)((longlong)param_1 + 0x124) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 300) = uVar16;
  param_1[0x28] = *(longlong *)(param_2 + 0x38);
  param_1[0x29] = *(longlong *)(param_2 + 0x40);
  param_1[0x2a] = *(longlong *)(param_2 + 0x48);
  uVar16 = *(undefined4 *)(param_2 + 0x58);
  param_1[0x2b] = *(longlong *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x2c) = uVar16;
  *(ushort *)(param_1 + 0x30) = uVar11;
  *(undefined1 *)((longlong)param_1 + 0x182) = *(undefined1 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)(param_2 + 0xac);
  *(undefined1 *)((longlong)param_1 + 0x183) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined1 *)((longlong)param_1 + 0x184) = *(undefined1 *)(param_2 + 0xb1);
  iVar6 = rand();
  *(char *)((longlong)param_1 + 0x185) = (char)(int)((float)iVar6 * 0.007721183 + 1.0);
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x5c);
  param_1[0x32] = *(longlong *)(param_2 + 0x68);
  param_1[0x33] = *(longlong *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x78);
  uVar16 = FUN_142d9cad0(param_2 + 0x80,0);
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar16;
  *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(param_2 + 0xe0);
  lVar15 = *(longlong *)(param_2 + 0x60);
  param_1[0x2d] = lVar15;
  if ((lVar15 == 0) && (param_1[0x2d] = param_1[0x29], param_1[0x29] == 0)) {
    param_1[0x2d] = param_1[0x28];
  }
  param_1[0x2e] = 0;
  lVar15 = *(longlong *)(param_2 + 0xa0);
  if (lVar15 != 0) {
    lVar7 = lVar14;
    if (lVar15 != *(longlong *)(lVar10 + 0xd0)) {
      lVar7 = lVar15;
    }
    param_1[0x2e] = lVar7;
  }
  if ((*(byte *)(param_1 + 0x1d) & 1) != 0) {
    param_1[0x26] = *(longlong *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x34);
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  param_1[0x1e] = *(longlong *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x5c);
  param_1[0x1f] = *(longlong *)(param_2 + 0xe4);
  param_1[0x20] = *(longlong *)(param_2 + 0xec);
  param_1[0x17] = *(longlong *)(param_2 + 0x68);
  param_1[0x18] = param_1[0x33];
  if (param_1[0x33] != 0) {
    lVar7 = FUN_142e0d0b0();
    for (lVar15 = param_1[0x18]; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x30)) {
      if (lVar15 == lVar7) {
        if (param_1[0x18] != 0) goto LAB_14304ffe9;
        break;
      }
    }
  }
  param_1[0x18] = *(longlong *)(lVar10 + 0x210);
LAB_14304ffe9:
  param_1[0x6f] = *(longlong *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)((longlong)param_1 + 0x1a4);
  FUN_140a29610(param_1 + 0x1a,param_2 + 0xd0);
  fVar17 = *(float *)(param_2 + 0x78);
  *(float *)((longlong)param_1 + 0xb4) = fVar17;
  if (fVar17 <= 0.0) {
    fVar17 = (float)FUN_142c98860(lVar10 + 0x1d8,param_1[0x2d]);
    *(float *)((longlong)param_1 + 0xb4) = fVar17;
    if (fVar17 <= 0.0) goto LAB_143050064;
  }
  fVar17 = (float)FUN_142d3bb80(*(undefined8 *)(param_2 + 0x38));
  fVar17 = fVar17 * *(float *)((longlong)param_1 + 0xb4);
  *(float *)((longlong)param_1 + 0xb4) = fVar17;
LAB_143050064:
  *(float *)(param_1 + 0x34) = fVar17;
  if (*(longlong *)(lVar10 + 0x220) != 0) {
    plVar8 = (longlong *)UCelLightData::GetPrivateStaticClass();
    plVar2 = *(longlong **)(lVar10 + 0x220);
    for (plVar3 = plVar2; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
      if (plVar3 == plVar8) {
        if (plVar2 != (longlong *)0x0) {
          if (*(float *)(param_1 + 0x16) == 0.0) {
            if (plVar2 == (longlong *)0x0) {
              lVar15 = 0;
            }
            else {
              lVar15 = plVar2[0x1f];
              if (lVar15 == 0) {
                (**(code **)(*plVar2 + 0x368))(plVar2);
                lVar15 = plVar2[0x1f];
              }
            }
            uVar9 = FUN_142d0a300(local_248);
            uVar16 = FUN_142d27d00(lVar15,uVar9,param_1[0x2d]);
            *(undefined4 *)(param_1 + 0x31) = uVar16;
            *(undefined4 *)(param_1 + 0x16) = uVar16;
            FUN_1409c53c0(local_248);
          }
          if (*(float *)(param_1 + 0x19) == 0.0) {
            plVar2 = *(longlong **)(lVar10 + 0x220);
            if (plVar2 == (longlong *)0x0) {
              lVar15 = 0;
            }
            else {
              lVar15 = plVar2[0x1f];
              if (lVar15 == 0) {
                (**(code **)(*plVar2 + 0x368))(plVar2);
                lVar15 = plVar2[0x1f];
              }
            }
            uVar9 = FUN_142d0a300(local_248);
            uVar16 = FUN_142d27fe0(lVar15,uVar9,param_1[0x2d]);
            *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar16;
            *(undefined4 *)(param_1 + 0x19) = uVar16;
            FUN_1409c53c0(local_248);
          }
        }
        break;
      }
    }
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  local_278 = 0;
  local_250 = 0;
  uStack_260 = 0;
  uStack_258 = 0x3f800000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3e] = 0x3f800000;
  param_1[0x3f] = (ulonglong)uStack_24c << 0x20;
  uVar16 = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x204) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x20c) = uVar16;
  uVar16 = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x214) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar16;
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (((*(byte *)((longlong)param_1 + 0xe9) & 1) != 0) &&
     ((longlong *)param_1[0x28] != (longlong *)0x0)) {
    uVar16 = (**(code **)(*(longlong *)param_1[0x28] + 0x6e0))();
    *(undefined4 *)(param_1 + 0x47) = uVar16;
  }
  param_1[0x36] = 0;
  if (*(longlong *)(lVar10 + 0x88) != 0) {
    lVar7 = UDungeonEventListener::GetPrivateStaticClass();
    for (lVar15 = *(longlong *)(lVar10 + 0x88); lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x30))
    {
      if (lVar15 == lVar7) {
        if (*(longlong *)(lVar10 + 0x88) != 0) {
          local_298 = 0;
          local_290[0] = 0;
          FUN_142db92e0(*(undefined8 *)(lVar10 + 0x88),param_1,&local_298,local_290);
          if ((local_298 != 0) && (local_298 != *(longlong *)(lVar10 + 0x80))) {
            param_1[0x36] = local_298;
          }
          if (local_290[0] != 0) {
            param_1[0x37] = local_290[0];
          }
        }
        break;
      }
    }
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 == (longlong *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = plVar2[0x1f];
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar10 = plVar2[0x1f];
    }
  }
  if (*(longlong *)(lVar10 + 0x2a0) != 0) {
    lVar7 = UDungeonEventListener::GetPrivateStaticClass();
    for (lVar15 = *(longlong *)(lVar10 + 0x2a0); lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x30))
    {
      if (lVar15 == lVar7) {
        if (*(longlong *)(lVar10 + 0x2a0) != 0) {
          plVar2 = *(longlong **)(param_2 + 8);
          if (plVar2 == (longlong *)0x0) {
            lVar10 = 0;
          }
          else {
            lVar10 = plVar2[0x1f];
            if (lVar10 == 0) {
              (**(code **)(*plVar2 + 0x368))(plVar2);
              lVar10 = plVar2[0x1f];
            }
          }
          lVar10 = FUN_142db93b0(*(undefined8 *)(lVar10 + 0x2a0),param_1);
          if (lVar10 != 0) {
            plVar2 = *(longlong **)(param_2 + 8);
            if ((plVar2 != (longlong *)0x0) && (lVar14 = plVar2[0x1f], lVar14 == 0)) {
              (**(code **)(*plVar2 + 0x368))(plVar2);
              lVar14 = plVar2[0x1f];
            }
            *(longlong *)(lVar14 + 0x2a8) = lVar10;
          }
        }
        break;
      }
    }
  }
  lVar14 = *(longlong *)(param_2 + 0x130);
  uVar16 = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)((longlong)param_1 + 0x464) = uVar16;
  param_1[0x8d] = lVar14;
  *(uint *)((longlong)param_1 + 0xe4) =
       *(uint *)((longlong)param_1 + 0xe4) ^
       ((uint)*(byte *)(param_2 + 0x138) << 0x12 ^ *(uint *)((longlong)param_1 + 0xe4)) & 0x40000;
  return;
}



// FUNCTION 143050420 FUN_143050420 body=240 status=ok
// SIG undefined FUN_143050420(void)

void FUN_143050420(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *local_28;
  int local_20;
  
  FUN_14238fca0();
  if ((*(longlong *)(param_1 + 0x180) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar4 = FUN_1429f11d0();
    AActor::GetComponentsByClass(*(undefined8 *)(param_1 + 0x118),&local_28,uVar4);
    plVar1 = local_28 + local_20;
    for (plVar5 = local_28; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      plVar2 = (longlong *)*plVar5;
      if ((plVar2 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar2 + 0x400))(plVar2,0), cVar3 != '\0')) {
        *(longlong **)(param_1 + 0x180) = plVar2;
        break;
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    return;
  }
  FUN_1426aa280(*(longlong *)(param_1 + 0x180) + 0x3b0,1);
  return;
}



// FUNCTION 143050510 InitializeModule body=105 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FVoiceModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = IModuleInterface::vftable;
    FGCObject::FGCObject(puVar1 + 1);
    *puVar1 = &PTR__scalar_deleting_destructor__145a5a680;
    puVar1[1] = &PTR_LAB_145a5a6c0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143050580 FUN_143050580 body=2057 status=ok
// SIG undefined FUN_143050580(void)

void FUN_143050580(longlong *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  undefined8 local_res8;
  float local_78;
  float fStack_74;
  float local_68;
  float local_64;
  float local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  lVar13 = 0;
  lVar16 = lVar13;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar16 = param_1[4];
  }
  (**(code **)(*param_1 + 0x2b8))();
  plVar11 = (longlong *)param_1[0x1d];
  if (plVar11 == (longlong *)0x0) {
    lVar15 = 0;
  }
  else {
    lVar15 = plVar11[0x1f];
    if (lVar15 == 0) {
      (**(code **)(*plVar11 + 0x368))(plVar11);
      lVar15 = plVar11[0x1f];
    }
  }
  param_1[0x16] = lVar15;
  if (lVar15 == 0) {
    return;
  }
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar15 = param_1[0x16];
  *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)(lVar9 + 0x790);
  if ((*(byte *)(lVar15 + 0xa8) & 1) == 0) {
    fVar17 = *(float *)(lVar15 + 0x9c);
  }
  else {
    fVar17 = *(float *)(lVar15 + 0xa0);
    if (fVar17 <= 1.0) {
      fVar17 = 1.0;
    }
  }
  *(float *)(param_1 + 0x1b) = fVar17;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x244)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0xbd) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x5ec)) {
    TArray<FSkeletalMeshSkinningData_*,TInlineAllocator<32,TSizedDefaultAllocator<32>_>_>::ResizeTo
              ();
  }
  FWeakObjectPtr::operator=(&local_res8);
  *(undefined4 *)(param_1 + 0x46) = (undefined4)local_res8;
  *(undefined4 *)((longlong)param_1 + 0x234) = local_res8._4_4_;
  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) & 0xfffffffe;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x65,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x3f800000;
  param_1[0x79] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x3fc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x7e,0);
  }
  param_1[0x5c] = 0;
  param_1[0x44] = 0;
  local_res8 = 0;
  if ((*(byte *)((longlong)param_1 + 0x1de) >> 1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)((longlong)param_1 + 0x1fc);
  }
  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) & 0xfffffff1;
  if (0.0 < *(float *)(param_1 + 0x32)) {
LAB_1430507e7:
    *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | 2;
  }
  else {
    lVar15 = param_1[0x16];
    if (*(longlong *)(lVar15 + 0xb8) != 0) {
      lVar10 = UCelLightData::GetPrivateStaticClass();
      lVar15 = *(longlong *)(lVar15 + 0xb8);
      for (lVar9 = lVar15; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
        if (lVar9 == lVar10) {
          if (lVar15 != 0) {
            plVar11 = *(longlong **)(param_1[0x16] + 0xb8);
            if (plVar11 == (longlong *)0x0) {
              lVar15 = 0;
            }
            else {
              lVar15 = plVar11[0x1f];
              if (lVar15 == 0) {
                (**(code **)(*plVar11 + 0x368))(plVar11);
                lVar15 = plVar11[0x1f];
              }
            }
            lVar15 = FBufferReaderBase::Tell(lVar15);
            if (lVar15 != 0) goto LAB_1430507e7;
          }
          break;
        }
      }
    }
  }
  if (((byte)*(ushort *)((longlong)param_1 + 0x1de) >> 4 & 1) != 0) {
    lVar15 = lVar13;
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      lVar15 = param_1[4];
    }
    if (*(char *)(lVar15 + 0x128) != '\x03') {
      *(ushort *)((longlong)param_1 + 0x1de) = *(ushort *)((longlong)param_1 + 0x1de) & 0xffef;
    }
  }
  lVar15 = param_1[0x2c];
  if (lVar15 == 0) {
    lVar15 = *(longlong *)(param_1[0x16] + 0x38);
  }
  lVar9 = param_1[0x2d];
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1[0x16] + 0x48);
  }
  if (lVar9 != lVar15) {
    lVar13 = lVar9;
  }
  iVar7 = FUN_142235230(lVar16);
  if (iVar7 == 1) goto LAB_143050aae;
  bVar3 = false;
  if ((*(byte *)((longlong)param_1 + 0x1de) & 1) != 0) {
    plVar11 = (longlong *)param_1[0x1e];
    if (plVar11 == (longlong *)0x0) {
LAB_1430508dc:
      plVar11 = (longlong *)param_1[0x1e];
      if (plVar11 != (longlong *)0x0) {
        lVar9 = FUN_1429d7ab0();
        if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
            != lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) goto LAB_143050926;
      }
    }
    else {
      lVar9 = FUN_1430b3b80();
      if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1430508dc;
      plVar11 = (longlong *)(**(code **)(*plVar11 + 0x950))(plVar11);
LAB_143050926:
      if (((plVar11 != (longlong *)0x0) &&
          (cVar5 = (**(code **)(*plVar11 + 0x780))(plVar11), cVar5 != '\0')) &&
         (cVar5 = (**(code **)(*plVar11 + 0x778))(plVar11), cVar5 != '\0')) {
        uVar12 = (**(code **)(*param_1 + 0x148))(param_1);
        iVar7 = UEngine::GetNumGamePlayers(DAT_146b17150,uVar12);
        bVar3 = 1 < iVar7;
        lVar9 = lVar15;
        if (lVar13 != 0) {
          lVar9 = lVar13;
        }
        lVar13 = FUN_143041040(lVar16,lVar9,param_1,param_1[0x29],0);
        param_1[0x17] = lVar13;
        if (lVar13 != 0) {
          FTickFunction::AddPrerequisite(lVar13 + 0x30,param_1,param_1 + 0xb);
          bVar6 = (**(code **)(*plVar11 + 0x818))(plVar11);
          *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) & 0xfffffffb;
          *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | (bVar6 & 1) << 2;
          FUN_142397970(param_1[0x17],bVar3);
          FUN_142398ea0(param_1[0x17],param_1[0x28]);
        }
        goto LAB_143050a09;
      }
    }
    *(ushort *)((longlong)param_1 + 0x1de) = *(ushort *)((longlong)param_1 + 0x1de) & 0xfffe;
  }
LAB_143050a09:
  if (param_1[0x17] == 0) {
    lVar13 = FUN_143041040(lVar16,lVar15,param_1,param_1[0x29],0);
    param_1[0x17] = lVar13;
    if (lVar13 != 0) {
      FTickFunction::AddPrerequisite(lVar13 + 0x30,param_1,param_1 + 0xb);
    }
  }
  else if (bVar3) {
    lVar13 = FUN_143041040(lVar16,lVar15,param_1,param_1[0x29],0);
    param_1[0x18] = lVar13;
    if (lVar13 != 0) {
      FTickFunction::AddPrerequisite(lVar13 + 0x30,param_1,param_1 + 0xb);
      FUN_1423979a0(param_1[0x18],1);
      FUN_142398ea0(param_1[0x18],param_1[0x28]);
    }
  }
LAB_143050aae:
  if ((param_1[0x1f] == 0) && ((longlong *)param_1[0x1e] != (longlong *)0x0)) {
    lVar13 = (**(code **)(*(longlong *)param_1[0x1e] + 0x3b8))();
    param_1[0x1f] = lVar13;
  }
  if (((*(byte *)((longlong)param_1 + 0x1de) >> 1 & 1) != 0) &&
     ((longlong *)param_1[0x23] != (longlong *)0x0)) {
    if (param_1[0x24] == 0) {
      lVar13 = (**(code **)(*(longlong *)param_1[0x23] + 0x3b8))();
      param_1[0x24] = lVar13;
    }
    plVar11 = (longlong *)FUN_14304aab0(param_1 + 0x23,&local_res8);
    param_1[0x5c] = *plVar11;
  }
  if ((char)param_1[0x35] != '\0') {
    (**(code **)(*param_1 + 0x380))(param_1);
  }
  param_1[0x15] = (longlong)param_1;
  FUN_14288e3d0(param_1 + 0xb,1);
  if (*(char *)((longlong)param_1 + 0x65) == '\0') {
    uVar12 = AActor::GetLevel(lVar16);
    FTickFunction::RegisterTickFunction(param_1 + 0xb,uVar12);
  }
  plVar11 = (longlong *)(lVar16 + 0x458);
  puVar14 = (undefined8 *)*plVar11;
  iVar7 = *(int *)(lVar16 + 0x460);
  puVar1 = puVar14 + iVar7;
  for (; puVar14 != puVar1; puVar14 = puVar14 + 1) {
    if ((longlong *)*puVar14 == param_1) goto LAB_143050bae;
  }
  *(int *)(lVar16 + 0x460) = iVar7 + 1;
  if (*(int *)(lVar16 + 0x464) < iVar7 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11);
  }
  *(longlong **)(*plVar11 + (longlong)iVar7 * 8) = param_1;
LAB_143050bae:
  *(undefined1 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x20;
  if ((*(byte *)(param_1[0x16] + 0xa8) & 2) != 0) {
    uVar8 = FUN_142dd0770(param_1[0x28]);
    *(undefined4 *)(param_1 + 0x45) = uVar8;
    if ((*(byte *)(param_1[0x16] + 0xa8) & 4) != 0) {
      *(char *)((longlong)param_1 + 0x22c) = '\x01' << ((char)param_1[0x45] - 0x1cU & 0x1f);
    }
  }
  *(undefined4 *)(param_1 + 0x87) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x43c)) {
    FUN_141f62110(param_1 + 0x82,0);
  }
  if (param_1[0x28] != 0) {
    (**(code **)(*param_1 + 0x2d8))(param_1,param_1[0x28],param_1 + 0x82);
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,0,1,0);
  if ((char)param_1[0x1c] != '\0') {
    if (param_1[0x17] != 0) {
      FUN_1425fcab0(param_1[0x17],0);
    }
    if (param_1[0x18] != 0) {
      FUN_1425fcab0(param_1[0x18],0);
    }
    if ((*(byte *)(param_1[0x16] + 0xa8) & 0x20) != 0) {
      fVar2 = *(float *)(param_1 + 0x4e);
      lVar16 = param_1[0x4d];
      fVar17 = *(float *)((longlong)param_1 + 0x1fc);
      lVar13 = param_1[0x28];
      local_50 = *(undefined4 *)((longlong)param_1 + 0x264);
      local_58 = *(undefined8 *)((longlong)param_1 + 0x25c);
      lVar15 = (**(code **)(*param_1 + 0x148))(param_1);
      if (((lVar15 != 0) && (lVar13 != 0)) &&
         ((*(float *)((longlong)param_1 + 0x224) < 0.0001 ||
          (*(float *)((longlong)param_1 + 0x224) + 1.0 < fVar17)))) {
        local_78 = (float)lVar16;
        local_68 = local_78 * 1000.0;
        local_60 = fVar2 * 1000.0;
        fStack_74 = (float)((ulonglong)lVar16 >> 0x20);
        local_64 = fStack_74 * 1000.0;
        FUN_142d4d560(lVar15,&local_58,&local_68,lVar13);
        *(float *)((longlong)param_1 + 0x224) = fVar17;
      }
    }
  }
  return;
}



// FUNCTION 143050d90 FUN_143050d90 body=6254 status=ok
// SIG undefined FUN_143050d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143050d90(longlong *param_1)

{
  uint *puVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  wchar_t *pwVar20;
  undefined8 *puVar21;
  ushort uVar22;
  uint uVar23;
  uint *puVar24;
  byte bVar25;
  longlong *plVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  float *pfVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar37 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  uint local_res8;
  undefined4 uStackX_c;
  longlong local_res10;
  longlong local_res18;
  longlong *local_res20;
  longlong *in_stack_fffffffffffffe68;
  undefined8 local_178;
  float fStack_170;
  float fStack_16c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  float local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  plVar18 = (longlong *)0x0;
  plVar26 = plVar18;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar26 = (longlong *)param_1[4];
  }
  local_res20 = plVar26;
  (**(code **)(*param_1 + 0x2e0))();
  plVar14 = (longlong *)param_1[0x22];
  if (plVar14 == (longlong *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = plVar14[0x1f];
    if (lVar13 == 0) {
      (**(code **)(*plVar14 + 0x368))(plVar14);
      lVar13 = plVar14[0x1f];
    }
  }
  param_1[0x15] = lVar13;
  if (lVar13 == 0) {
    return;
  }
  uVar12 = *(uint *)((longlong)param_1 + 0xe4);
  *(uint *)((longlong)param_1 + 0xe4) = uVar12 & 0xffc753e3 | 1;
  if (((*(byte *)(lVar13 + 0x1a9) & 0x40) == 0) ||
     (uVar23 = 0x10000, 0.0 < *(float *)(lVar13 + 0x1ac))) {
    uVar23 = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)((longlong)param_1 + 0xe4) = uVar12 & 0xffc653e3 | 1 | uVar23;
  lVar13 = (**(code **)(*param_1 + 0x148))(param_1);
  fVar35 = *(float *)((longlong)param_1 + 0x17c);
  *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)(lVar13 + 0x790);
  *(short *)(param_1 + 0x1d) = (short)param_1[0x30];
  *(undefined4 *)(param_1 + 0x46) = 0;
  fVar32 = *(float *)(param_1[0x15] + 0x180);
  if (fVar32 <= 0.01) {
    fVar32 = 0.01;
  }
  *(float *)(param_1 + 0x45) = fVar32;
  if (fVar35 < 0.0) {
    fVar35 = *(float *)(param_1[0x15] + 0x15c);
  }
  *(float *)((longlong)param_1 + 0x2fc) = fVar35;
  if ((((longlong *)param_1[0x28] == (longlong *)0x0) ||
      (plVar14 = (longlong *)(**(code **)(*(longlong *)param_1[0x28] + 0x670))(),
      plVar14 == (longlong *)0x0)) || ((*(uint *)((longlong)plVar14 + 0x4cc) >> 1 & 1) == 0)) {
LAB_143050f2a:
    uVar12 = 0;
  }
  else {
    cVar9 = (**(code **)(*plVar14 + 0x768))(plVar14);
    uVar12 = 2;
    if (cVar9 == '\0') goto LAB_143050f2a;
  }
  *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xfffffffd;
  *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) | uVar12;
  uVar22 = *(ushort *)(param_1 + 0x1d);
  if ((uVar22 >> 8 & 1) != 0) {
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      plVar18 = (longlong *)param_1[4];
    }
    if ((char)plVar18[0x25] != '\x03') {
      uVar22 = uVar22 & 0xfeff;
      *(ushort *)(param_1 + 0x1d) = uVar22;
    }
  }
  if (((byte)uVar22 >> 1 & 1) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x22c) = *(undefined4 *)((longlong)param_1 + 0x224);
  }
  pfVar2 = (float *)(param_1 + 0x55);
  *(longlong *)pfVar2 = param_1[0x23];
  *(int *)(param_1 + 0x56) = (int)param_1[0x24];
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)((longlong)param_1 + 0x182);
  *(int *)(param_1 + 0x16) = (int)param_1[0x31];
  param_1[0x17] = param_1[0x32];
  *(int *)((longlong)param_1 + 0xb4) = (int)param_1[0x34];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)((longlong)param_1 + 0x1a4);
  param_1[0x18] = param_1[0x33];
  if (param_1[0x33] != 0) {
    lVar15 = FUN_142e0d0b0();
    for (lVar13 = param_1[0x18]; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x30)) {
      if (lVar13 == lVar15) {
        if (param_1[0x18] != 0) {
          lVar13 = param_1[0x15];
          goto LAB_143051035;
        }
        break;
      }
    }
  }
  lVar13 = param_1[0x15];
  param_1[0x18] = *(longlong *)(lVar13 + 0x210);
LAB_143051035:
  *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xffffbfff;
  uVar12 = *(uint *)((longlong)param_1 + 0xe4);
  if (0.0 < *(float *)((longlong)param_1 + 0xb4)) {
LAB_1430510de:
    *(uint *)((longlong)param_1 + 0xe4) = uVar12 | 0x4000;
  }
  else if (*(longlong *)(lVar13 + 0x220) != 0) {
    lVar16 = UCelLightData::GetPrivateStaticClass();
    for (lVar15 = *(longlong *)(lVar13 + 0x220); lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x30))
    {
      if (lVar15 == lVar16) {
        if (*(longlong *)(lVar13 + 0x220) != 0) {
          plVar18 = *(longlong **)(param_1[0x15] + 0x220);
          if (plVar18 == (longlong *)0x0) {
            lVar13 = 0;
          }
          else {
            lVar13 = plVar18[0x1f];
            if (lVar13 == 0) {
              (**(code **)(*plVar18 + 0x368))(plVar18);
              lVar13 = plVar18[0x1f];
            }
          }
          lVar13 = FBufferReaderBase::Tell(lVar13);
          if (lVar13 != 0) {
            uVar12 = *(uint *)((longlong)param_1 + 0xe4);
            goto LAB_1430510de;
          }
        }
        break;
      }
    }
  }
  if (((*(byte *)(param_1 + 0x1d) >> 2 & 1) != 0) && (lVar13 = param_1[0x29], lVar13 != 0)) {
    uVar17 = FUN_1430b1a30();
    plVar18 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar13,uVar17);
    if (plVar18 != (longlong *)0x0) {
      puVar19 = (undefined8 *)
                (**(code **)(*plVar18 + 0x10))
                          (plVar18,&local_158,*(undefined1 *)((longlong)param_1 + 0x184));
      *(undefined8 *)pfVar2 = *puVar19;
      *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(puVar19 + 1);
    }
  }
  lVar13 = param_1[0x15];
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x20;
  if ((*(byte *)(lVar13 + 0x1a9) & 2) != 0) {
    uVar10 = FUN_142dd0770(param_1[0x28]);
    lVar13 = param_1[0x15];
    *(undefined4 *)((longlong)param_1 + 0x24c) = uVar10;
    if ((*(byte *)(lVar13 + 0x1a9) & 4) != 0) {
      *(char *)(param_1 + 0x4a) = '\x01' << ((char)uVar10 - 0x1cU & 0x1f);
    }
  }
  param_1[0x5b] = *(longlong *)pfVar2;
  *(longlong *)((longlong)param_1 + 0x2b4) = *(longlong *)pfVar2;
  *(int *)(param_1 + 0x5c) = (int)param_1[0x56];
  *(int *)((longlong)param_1 + 700) = (int)param_1[0x56];
  *(undefined8 *)((longlong)param_1 + 0x2cc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x254) = *(undefined8 *)pfVar2;
  *(int *)((longlong)param_1 + 0x25c) = (int)param_1[0x56];
  if ((*(byte *)(param_1 + 0x1d) & 1) == 0) {
    local_178._0_4_ = *(float *)((longlong)param_1 + 0x124) - *pfVar2;
    local_178._4_4_ = *(float *)(param_1 + 0x25) - *(float *)((longlong)param_1 + 0x2ac);
    fStack_170 = *(float *)((longlong)param_1 + 300) - *(float *)(param_1 + 0x56);
    plVar18 = (longlong *)FVector::Rotation(&local_178,&local_158);
    lVar13 = param_1[0x15];
    local_148 = *plVar18;
    fVar32 = (float)local_148;
    fVar35 = (float)((ulonglong)local_148 >> 0x20);
    local_140 = *(float *)(plVar18 + 1);
  }
  else {
    local_148 = param_1[0x26];
    fVar32 = (float)local_148;
    fVar35 = (float)((ulonglong)local_148 >> 0x20);
    local_140 = *(float *)(param_1 + 0x27);
  }
  fVar43 = *(float *)(lVar13 + 0x14c);
  fVar55 = (float)(int)(fVar43 * 0.0027777778) * 360.0;
  if (ABS(fVar43) < ABS(fVar55)) {
    fVar55 = fVar43;
  }
  fVar43 = fVar43 - fVar55;
  if (fVar43 < 0.0) {
    fVar43 = fVar43 + 360.0;
  }
  if (fVar43 == 0.0) {
    fVar43 = *(float *)(lVar13 + 0x150);
    fVar55 = (float)(int)(fVar43 * 0.0027777778) * 360.0;
    if (ABS(fVar43) < ABS(fVar55)) {
      fVar55 = fVar43;
    }
    fVar43 = fVar43 - fVar55;
    if (fVar43 < 0.0) {
      fVar43 = fVar43 + 360.0;
    }
    if (fVar43 != 0.0) goto LAB_143051366;
    fVar43 = *(float *)(lVar13 + 0x154);
    fVar55 = (float)(int)(fVar43 * 0.0027777778) * 360.0;
    if (ABS(fVar43) < ABS(fVar55)) {
      fVar55 = fVar43;
    }
    fVar43 = fVar43 - fVar55;
    if (fVar43 < 0.0) {
      fVar43 = fVar43 + 360.0;
    }
    if (fVar43 != 0.0) goto LAB_143051366;
  }
  else {
LAB_143051366:
    fVar32 = (float)local_148 + *(float *)(lVar13 + 0x14c);
    fVar35 = local_148._4_4_ + *(float *)(lVar13 + 0x150);
    local_148 = CONCAT44(fVar35,fVar32);
    local_140 = local_140 + *(float *)(lVar13 + 0x154);
  }
  param_1[0x58] = CONCAT44(fVar35,fVar32);
  *(float *)(param_1 + 0x59) = local_140;
  puVar19 = (undefined8 *)FRotator::Vector(&local_148,&local_158);
  fVar32 = *(float *)(param_1 + 0x2f);
  *(undefined8 *)((longlong)param_1 + 0x2e4) = *puVar19;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = *(undefined4 *)(puVar19 + 1);
  fVar35 = *(float *)(param_1[0x15] + 0x144);
  local_130 = fVar35 * *(float *)((longlong)param_1 + 0x2ec) * fVar32;
  param_1[0x5e] =
       CONCAT44(fVar35 * *(float *)(param_1 + 0x5d) * fVar32,
                fVar35 * *(float *)((longlong)param_1 + 0x2e4) * fVar32);
  *(float *)(param_1 + 0x5f) = local_130;
  if ((char)param_1[0x1d] < '\0') goto LAB_14305204d;
  uVar10 = FRotator::Quaternion(&local_148,&local_158);
  fVar53 = fRam0000000146b47388;
  fVar51 = fRam0000000146b47384;
  fVar44 = _DAT_146b47380;
  fVar70 = DAT_1464aa790;
  fVar63 = DAT_1464aa788._4_4_;
  fVar55 = (float)DAT_1464aa788;
  fVar32 = *(float *)(param_1 + 0x56);
  fVar35 = *(float *)((longlong)param_1 + 0x2ac);
  fVar43 = *pfVar2;
  lVar13 = param_1[0x15];
  auVar3 = *(undefined1 (*) [16])(lVar13 + 0x60);
  auVar33._4_4_ = DAT_1464aa788._4_4_;
  auVar33._0_4_ = (float)DAT_1464aa788;
  auVar33._8_4_ = DAT_1464aa790;
  auVar33._12_4_ = 0;
  auVar33 = minps(auVar3,auVar33);
  auVar34._4_4_ = -(uint)(auVar33._4_4_ < fRam0000000146b473e4);
  auVar34._0_4_ = -(uint)(auVar33._0_4_ < _DAT_146b473e0);
  auVar34._8_4_ = -(uint)(auVar33._8_4_ < fRam0000000146b473e8);
  auVar34._12_4_ = -(uint)(auVar33._12_4_ < fRam0000000146b473ec);
  iVar11 = movmskps(uVar10,auVar34);
  if (iVar11 == 0) {
    fVar44 = *(float *)(lVar13 + 0x40);
    fVar51 = *(float *)(lVar13 + 0x44);
    fVar53 = *(float *)(lVar13 + 0x48);
    fVar38 = *(float *)(lVar13 + 0x4c);
    fVar40 = *(float *)(lVar13 + 0x50) * (float)DAT_1464aa788;
    fVar45 = *(float *)(lVar13 + 0x54) * DAT_1464aa788._4_4_;
    fVar57 = *(float *)(lVar13 + 0x58) * DAT_1464aa790;
    fVar36 = fVar38 * local_158 * _DAT_146b473c0 + fVar44 * fStack_14c +
             fVar53 * fStack_154 * _DAT_146b473b0 + fVar51 * fStack_150 * _DAT_146b473a0;
    fVar39 = fVar53 * local_158 * fRam0000000146b473c4 + fVar51 * fStack_14c +
             fVar38 * fStack_154 * fRam0000000146b473b4 + fVar44 * fStack_150 * fRam0000000146b473a4
    ;
    fVar47 = fVar51 * local_158 * fRam0000000146b473c8 + fVar53 * fStack_14c +
             fVar44 * fStack_154 * fRam0000000146b473b8 + fVar38 * fStack_150 * fRam0000000146b473a8
    ;
    fVar38 = fVar44 * local_158 * fRam0000000146b473cc + fVar38 * fStack_14c +
             fVar51 * fStack_154 * fRam0000000146b473bc + fVar53 * fStack_150 * fRam0000000146b473ac
    ;
    fVar44 = fVar57 * fStack_154 - fVar45 * fStack_150;
    fVar51 = fVar40 * fStack_150 - fVar57 * local_158;
    fVar53 = fVar45 * local_158 - fVar40 * fStack_154;
    fVar44 = fVar44 + fVar44;
    fVar51 = fVar51 + fVar51;
    fVar53 = fVar53 + fVar53;
    fVar43 = (fVar53 * fStack_154 - fVar51 * fStack_150) + fStack_14c * fVar44 + fVar40 + fVar43;
    fVar35 = (fVar44 * fStack_150 - fVar53 * local_158) + fStack_14c * fVar51 + fVar45 + fVar35;
    fVar32 = (fVar51 * local_158 - fVar44 * fStack_154) + fStack_14c * fVar53 + fVar57 + fVar32;
  }
  else {
    fVar38 = fStack_154 + fStack_154;
    fVar40 = fStack_150 + fStack_150;
    fVar45 = local_158 * (local_158 + local_158);
    fVar57 = fStack_14c * (local_158 + local_158);
    fVar67 = (float)DAT_1464aa788 * auVar3._0_4_;
    fVar68 = DAT_1464aa788._4_4_ * auVar3._4_4_;
    fVar69 = DAT_1464aa790 * auVar3._8_4_;
    fVar64 = (fStack_14c * fVar40 + local_158 * fVar38) * (float)DAT_1464aa788;
    fVar65 = (fVar57 + fStack_154 * fVar40) * DAT_1464aa788._4_4_;
    fVar66 = (fStack_14c * fVar38 + local_158 * fVar40) * DAT_1464aa790;
    fVar49 = DAT_1464aa788._4_4_ * (local_158 * fVar38 - fStack_14c * fVar40);
    fVar52 = DAT_1464aa790 * (fStack_154 * fVar40 - fVar57);
    fVar54 = (float)DAT_1464aa788 * (local_158 * fVar40 - fStack_14c * fVar38);
    fVar36 = (float)((uint)((_DAT_146b47380 - (fStack_150 * fVar40 + fStack_154 * fVar38)) *
                           (float)DAT_1464aa788) & _DAT_146b47390);
    fVar39 = (float)((uint)((fRam0000000146b47384 - (fStack_150 * fVar40 + fVar45)) *
                           DAT_1464aa788._4_4_) & uRam0000000146b47394);
    fVar41 = (float)((uint)((fRam0000000146b47388 - (fStack_154 * fVar38 + fVar45)) * DAT_1464aa790)
                    & uRam0000000146b47398);
    fVar42 = (float)((uint)((fRam0000000146b4738c - (fVar45 + fVar45)) * 0.0) & uRam0000000146b4739c
                    );
    fVar38 = *(float *)(lVar13 + 0x40);
    fVar40 = *(float *)(lVar13 + 0x44);
    fVar45 = *(float *)(lVar13 + 0x48);
    fVar57 = *(float *)(lVar13 + 0x4c);
    fVar46 = fVar40 + fVar40;
    fVar48 = fVar45 + fVar45;
    fVar50 = (fVar38 + fVar38) * fVar38;
    fVar47 = (fVar38 + fVar38) * fVar57;
    fVar60 = (fVar48 * fVar57 + fVar46 * fVar38) * *(float *)(lVar13 + 0x60);
    fVar61 = (fVar47 + fVar48 * fVar40) * *(float *)(lVar13 + 100);
    fVar62 = (fVar46 * fVar57 + fVar48 * fVar38) * *(float *)(lVar13 + 0x68);
    fVar56 = *(float *)(lVar13 + 100) * (fVar46 * fVar38 - fVar48 * fVar57);
    fVar58 = *(float *)(lVar13 + 0x68) * (fVar48 * fVar40 - fVar47);
    fVar59 = *(float *)(lVar13 + 0x60) * (fVar48 * fVar38 - fVar46 * fVar57);
    fVar57 = (float)((uint)((_DAT_146b47380 - (fVar48 * fVar45 + fVar46 * fVar40)) *
                           *(float *)(lVar13 + 0x60)) & _DAT_146b47390);
    fVar47 = (float)((uint)((fRam0000000146b47384 - (fVar48 * fVar45 + fVar50)) *
                           *(float *)(lVar13 + 100)) & uRam0000000146b47394);
    fVar46 = (float)((uint)((fRam0000000146b47388 - (fVar46 * fVar40 + fVar50)) *
                           *(float *)(lVar13 + 0x68)) & uRam0000000146b47398);
    fVar48 = (float)((uint)((fRam0000000146b4738c - (fVar50 + fVar50)) * *(float *)(lVar13 + 0x6c))
                    & uRam0000000146b4739c);
    fVar38 = *(float *)(lVar13 + 0x50);
    fVar40 = *(float *)(lVar13 + 0x54);
    fVar45 = *(float *)(lVar13 + 0x58);
    local_128 = fVar60 * fVar49 + fVar57 * fVar36 + fVar59 * fVar66 + fVar48 * fVar43;
    fStack_124 = fVar60 * fVar39 + fVar57 * fVar64 + fVar59 * fVar52 + fVar48 * fVar35;
    fStack_120 = fVar60 * fVar65 + fVar57 * fVar54 + fVar59 * fVar41 + fVar48 * fVar32;
    fStack_11c = fVar60 * fVar42 + fVar57 * fVar42 + fVar59 * fVar42 + fVar48 * fRam0000000146b4738c
    ;
    local_118 = fVar47 * fVar49 + fVar56 * fVar36 + fVar61 * fVar66 + fVar48 * fVar43;
    fStack_114 = fVar47 * fVar39 + fVar56 * fVar64 + fVar61 * fVar52 + fVar48 * fVar35;
    fStack_110 = fVar47 * fVar65 + fVar56 * fVar54 + fVar61 * fVar41 + fVar48 * fVar32;
    fStack_10c = fVar47 * fVar42 + fVar56 * fVar42 + fVar61 * fVar42 + fVar48 * fRam0000000146b4738c
    ;
    local_108 = fVar58 * fVar49 + fVar62 * fVar36 + fVar46 * fVar66 + fVar48 * fVar43;
    fStack_104 = fVar58 * fVar39 + fVar62 * fVar64 + fVar46 * fVar52 + fVar48 * fVar35;
    fStack_100 = fVar58 * fVar65 + fVar62 * fVar54 + fVar46 * fVar41 + fVar48 * fVar32;
    fStack_fc = fVar58 * fVar42 + fVar62 * fVar42 + fVar46 * fVar42 + fVar48 * fRam0000000146b4738c;
    local_f8 = fVar40 * fVar49 + fVar38 * fVar36 + fVar45 * fVar66 + fRam0000000146b4738c * fVar43;
    fStack_f4 = fVar40 * fVar39 + fVar38 * fVar64 + fVar45 * fVar52 + fRam0000000146b4738c * fVar35;
    fStack_f0 = fVar40 * fVar65 + fVar38 * fVar54 + fVar45 * fVar41 + fRam0000000146b4738c * fVar32;
    fStack_ec = fVar40 * fVar42 + fVar38 * fVar42 + fVar45 * fVar42 +
                fRam0000000146b4738c * fRam0000000146b4738c;
    FMatrix::RemoveScaling(&local_128);
    fVar32 = (float)(-(uint)(_DAT_146b473e0 <= fVar67) & (_DAT_146b473d0 ^ (uint)fVar44) ^
                    _DAT_146b473d0);
    fVar35 = (float)(-(uint)(fRam0000000146b473e4 <= fVar68) & (uRam0000000146b473d4 ^ (uint)fVar51)
                    ^ uRam0000000146b473d4);
    fVar43 = (float)(-(uint)(fRam0000000146b473e8 <= fVar69) & (uRam0000000146b473d8 ^ (uint)fVar53)
                    ^ uRam0000000146b473d8);
    local_128 = fVar32 * local_128;
    fStack_124 = fVar32 * fStack_124;
    fStack_120 = fVar32 * fStack_120;
    local_118 = fVar35 * local_118;
    fStack_114 = fVar35 * fStack_114;
    fStack_110 = fVar35 * fStack_110;
    fStack_104 = fStack_104 * fVar43;
    fStack_100 = fStack_100 * fVar43;
    local_108 = local_108 * fVar43;
    FQuat::FQuat(&local_178,&local_128);
    local_res8 = 0x322bcc77;
    auVar37._0_4_ = (float)local_178 * (float)local_178 + fStack_170 * fStack_170;
    auVar37._4_4_ = local_178._4_4_ * local_178._4_4_ + fStack_16c * fStack_16c;
    auVar37._8_4_ = fStack_170 * fStack_170 + (float)local_178 * (float)local_178;
    auVar37._12_4_ = fStack_16c * fStack_16c + local_178._4_4_ * local_178._4_4_;
    fVar51 = auVar37._4_4_ + auVar37._0_4_;
    fVar53 = auVar37._8_4_ + auVar37._4_4_;
    fVar38 = auVar37._12_4_ + auVar37._8_4_;
    fVar40 = auVar37._0_4_ + auVar37._12_4_;
    auVar5._4_4_ = fVar53;
    auVar5._0_4_ = fVar51;
    auVar5._8_4_ = fVar38;
    auVar5._12_4_ = fVar40;
    auVar33 = rsqrtps(auVar37,auVar5);
    fVar32 = auVar33._0_4_;
    fVar35 = auVar33._4_4_;
    fVar43 = auVar33._8_4_;
    fVar44 = auVar33._12_4_;
    fVar32 = (_DAT_146b47370 - fVar32 * fVar32 * fVar51 * _DAT_146b47370) * fVar32 + fVar32;
    fVar35 = (fRam0000000146b47374 - fVar35 * fVar35 * fVar53 * fRam0000000146b47374) * fVar35 +
             fVar35;
    fVar43 = (fRam0000000146b47378 - fVar43 * fVar43 * fVar38 * fRam0000000146b47378) * fVar43 +
             fVar43;
    fVar44 = (fRam0000000146b4737c - fVar44 * fVar44 * fVar40 * fRam0000000146b4737c) * fVar44 +
             fVar44;
    fVar36 = (float)(((uint)(((_DAT_146b47370 - fVar32 * fVar32 * fVar51 * _DAT_146b47370) * fVar32
                             + fVar32) * (float)local_178) ^ _DAT_146b47360) &
                     -(uint)(1e-08 <= fVar51) ^ _DAT_146b47360);
    fVar39 = (float)(((uint)(((fRam0000000146b47374 -
                              fVar35 * fVar35 * fVar53 * fRam0000000146b47374) * fVar35 + fVar35) *
                            local_178._4_4_) ^ uRam0000000146b47364) & -(uint)(1e-08 <= fVar53) ^
                    uRam0000000146b47364);
    fVar47 = (float)(((uint)(((fRam0000000146b47378 -
                              fVar43 * fVar43 * fVar38 * fRam0000000146b47378) * fVar43 + fVar43) *
                            fStack_170) ^ uRam0000000146b47368) & -(uint)(1e-08 <= fVar38) ^
                    uRam0000000146b47368);
    fVar38 = (float)(((uint)(((fRam0000000146b4737c -
                              fVar44 * fVar44 * fVar40 * fRam0000000146b4737c) * fVar44 + fVar44) *
                            fStack_16c) ^ uRam0000000146b4736c) & -(uint)(1e-08 <= fVar40) ^
                    uRam0000000146b4736c);
    fVar43 = local_f8;
    fVar35 = fStack_f4;
    fVar32 = fStack_f0;
  }
  fVar70 = fVar70 * auVar3._8_4_;
  local_158 = fVar36;
  fStack_154 = fVar39;
  fStack_150 = fVar47;
  fStack_14c = fVar38;
  FQuat::Rotator(&local_158,&local_138);
  lVar13 = param_1[0x15];
  if ((*(byte *)(lVar13 + 0x318) & 1) == 0) {
    cVar9 = *(char *)(lVar13 + 0x78);
  }
  else {
    cVar9 = '\0';
  }
  local_res18 = param_1[0x36];
  bVar6 = false;
  local_res8 = CONCAT31(local_res8._1_3_,cVar9);
  if (((local_res18 != 0) ||
      (local_res18 = *(longlong *)(lVar13 + 0x80),
      local_178 = (longlong *)CONCAT44(local_178._4_4_,(float)local_178), local_res18 != 0)) &&
     ((local_178 = (longlong *)CONCAT44(local_178._4_4_,(float)local_178), cVar9 != '\0' &&
      (local_178 = (longlong *)CONCAT44(local_178._4_4_,(float)local_178),
      (*(ushort *)(param_1 + 0x1d) >> 10 & 1) == 0)))) {
    plVar18 = (longlong *)param_1[0x28];
    bVar25 = 1;
    if (plVar18 != (longlong *)0x0) {
      if ((*(byte *)((longlong)param_1 + 0xe4) & 2) == 0) {
        cVar9 = (**(code **)(*plVar18 + 0x780))(plVar18);
        bVar25 = 1;
        if (cVar9 != '\0') {
          bVar25 = 2;
        }
      }
      else {
        bVar25 = 3;
      }
    }
    plVar14 = (longlong *)param_1[0x29];
    if ((longlong *)param_1[0x29] == (longlong *)0x0) {
      plVar14 = plVar18;
    }
    if (plVar14 != (longlong *)0x0) {
      lVar13 = (**(code **)(*plVar26 + 0x148))(plVar26);
      if (lVar13 == 0) {
        bVar6 = true;
        goto LAB_143051b5b;
      }
      iVar11 = DAT_14678c5a0;
      if ((*(byte *)(lVar13 + 0x830) & 2) != 0) {
        iVar11 = DAT_14678c5a0 + 1;
      }
      if ((bVar25 <= (byte)local_res8) && ((int)(uint)bVar25 <= iVar11)) {
        plVar18 = plVar26 + 0x99;
        local_res10 = CONCAT44(local_res10._4_4_,*(undefined4 *)((longlong)plVar14 + 0xc));
        FUN_1430492b0(plVar18,&local_res8);
        if (local_res8 == 0xffffffff) {
          lVar13 = 0;
        }
        else {
          lVar13 = *plVar18 + (longlong)(int)local_res8 * 0x14;
        }
        puVar24 = (uint *)(lVar13 + 4);
        if (lVar13 == 0) {
          puVar24 = (uint *)0x0;
        }
        if (puVar24 == (uint *)0x0) {
          local_178 = &local_res10;
          FUN_143037b80(plVar18,&local_res8,&local_178,0);
          puVar24 = (uint *)(*plVar18 + ((longlong)(int)local_res8 * 5 + 1) * 4);
        }
        if (*puVar24 < DAT_1464aaa8c - DAT_14678c5a4) {
          uVar12 = DAT_14678c5ac;
          if (bVar25 == 1) {
            uVar12 = DAT_14678c5a8;
          }
          puVar24[1] = uVar12;
        }
        else {
          puVar1 = puVar24 + 1;
          *puVar1 = *puVar1 - 1;
          if (*puVar1 == 0) {
            bVar6 = true;
            puVar24[1] = 2;
            *puVar24 = DAT_1464aaa8c;
            goto LAB_143051b5b;
          }
        }
        *puVar24 = DAT_1464aaa8c;
      }
    }
    bVar6 = false;
  }
LAB_143051b5b:
  lVar15 = local_res18;
  lVar13 = DAT_146b17150;
  if ((*(longlong *)(param_1[0x15] + 0x30) != 0) && (!bVar6)) {
    if (plVar26 == (longlong *)0x0) {
LAB_143051bad:
      lVar13 = 0;
    }
    else {
      uVar17 = FUN_142a232e0();
      lVar13 = FUN_1424723e0(lVar13 + 0xcf8,plVar26,uVar17);
      if (lVar13 == 0) goto LAB_143051bad;
      cVar9 = FUN_143038b40(lVar13);
      if (cVar9 == '\0') goto LAB_143051bad;
    }
    param_1[0x60] = lVar13;
    if (lVar13 != 0) {
      *(byte *)(lVar13 + 0x2ef) = *(byte *)(lVar13 + 0x2ef) & 0xbf;
      (**(code **)(*(longlong *)param_1[0x60] + 0x638))((longlong *)param_1[0x60],0);
      FUN_142397000(param_1[0x60],1,1);
      (**(code **)(*(longlong *)param_1[0x60] + 0x928))
                ((longlong *)param_1[0x60],*(undefined8 *)(param_1[0x15] + 0x30));
      local_178._0_4_ = fVar43;
      local_178._4_4_ = fVar35;
      fStack_170 = fVar32;
      FUN_142399750(param_1[0x60],&local_178,&local_138);
      local_178._0_4_ = fVar55 * auVar3._0_4_;
      local_178._4_4_ = fVar63 * auVar3._4_4_;
      fStack_170 = fVar70;
      fStack_150 = fVar70;
      (**(code **)(*(longlong *)param_1[0x60] + 0x3f8))((longlong *)param_1[0x60],&local_178);
      local_res8 = *(uint *)(param_1 + 99);
      local_res10 = param_1[0x60];
      *(uint *)(param_1 + 99) = local_res8 + 1;
      if (*(int *)((longlong)param_1 + 0x31c) < (int)(local_res8 + 1)) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x62,local_res8)
        ;
      }
      *(longlong *)(param_1[0x62] + (longlong)(int)local_res8 * 8) = local_res10;
    }
  }
  if ((lVar15 != 0) && (!bVar6)) {
    if ((*(byte *)((longlong)param_1 + 0xe4) & 2) == 0) {
      cVar9 = FUN_14305d9a0(param_1,pfVar2);
      if (cVar9 == '\0') goto LAB_143051f3e;
    }
    in_stack_fffffffffffffe68 = param_1;
    local_178._0_4_ = fVar43;
    local_178._4_4_ = fVar35;
    fStack_170 = fVar32;
    lVar13 = FUN_1430410e0(plVar26,lVar15,&local_178,&local_138,param_1,param_1[0x2d],0);
    param_1[0x61] = lVar13;
    if (lVar13 != 0) {
      local_158 = 133.31299;
      fStack_154 = 1.4013e-45;
      fStack_150 = 0.0;
      pwVar20 = _guard_xfg_dispatch_icall_nop(L"&ULightProjectile::OnParticleSystemFinished",L"::");
      pwVar8 = (wchar_t *)0x0;
      while (pwVar7 = pwVar20, pwVar7 != (wchar_t *)0x0) {
        pwVar20 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar8 = pwVar7;
      }
      FName::FName(&local_res8,pwVar8 + 2,1);
      FUN_1407260e0(param_1[0x61] + 0x8a8,param_1,&local_158,CONCAT44(uStackX_c,local_res8));
      iVar11 = (int)param_1[99];
      lVar13 = param_1[0x61];
      *(int *)(param_1 + 99) = iVar11 + 1;
      if (*(int *)((longlong)param_1 + 0x31c) < iVar11 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x62,iVar11);
      }
      *(longlong *)(param_1[0x62] + (longlong)iVar11 * 8) = lVar13;
      plVar26 = (longlong *)param_1[0x61];
      if (param_1[0x60] == 0) {
        uVar17 = *(undefined8 *)(param_1[0x15] + 0xc0);
        fStack_170 = (float)*(undefined8 *)(param_1[0x15] + 200);
        local_178._0_4_ = (float)uVar17;
        local_178._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
        fStack_150 = fStack_170;
        (**(code **)(*plVar26 + 0x3f8))(plVar26,&local_178);
      }
      else {
        FUN_142397000(plVar26,0,0,1);
        in_stack_fffffffffffffe68 =
             (longlong *)((ulonglong)in_stack_fffffffffffffe68 & 0xffffffffffffff00);
        FUN_142398770(param_1[0x61],param_1[0x15] + 0xa0,0,0,in_stack_fffffffffffffe68);
        FUN_142382f60(param_1[0x61],param_1[0x60],&DAT_146af29ec,
                      *(undefined8 *)(param_1[0x15] + 0x90));
      }
      lVar13 = param_1[0x61];
      *(longlong *)(lVar13 + 0x77c) = param_1[0x5e];
      *(int *)(lVar13 + 0x784) = (int)param_1[0x5f];
      FUN_1425fcab0(param_1[0x61],1);
      lVar13 = param_1[0x61];
      local_178._0_4_ = *(float *)(lVar13 + 0x220);
      local_178._4_4_ = *(float *)(lVar13 + 0x224);
      fStack_170 = *(float *)(lVar13 + 0x228);
      FUN_14260f1a0(lVar13,&local_178);
    }
  }
LAB_143051f3e:
  lVar13 = DAT_1468536c8;
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
  if ((((*(longlong *)(param_1[0x15] + 0x2a8) != 0) && (DAT_1468536c6 == '\0')) &&
      (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    uVar17 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_14059ce50(lVar13 + 8,&local_res8,uVar17,0);
    if (CONCAT44(uStackX_c,local_res8) != 0) {
      uVar28 = CONCAT44(uVar10,0x3f800000);
      FUN_1405aab70(CONCAT44(uStackX_c,local_res8),pfVar2,&DAT_1468b5da0,0,uVar28);
      local_158 = 0.0;
      fStack_154 = 0.0;
      fStack_150 = 0.0;
      fStack_14c = 0.0;
      lVar13 = FUN_1405a2d20(CONCAT44(uStackX_c,local_res8),&local_178,
                             *(undefined8 *)(param_1[0x15] + 0x2a8),0,uVar28 & 0xffffffff00000000,
                             &local_158);
      FUN_1405913a0(param_1 + 100,lVar13);
      *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(lVar13 + 0x10);
      FUN_140591060(&local_178);
      if (CONCAT44(fStack_154,local_158) != 0) {
        FMemory::Free();
      }
      if (CONCAT44(uStackX_c,local_res8) != 0) {
        FUN_1405a53f0();
      }
    }
  }
LAB_14305204d:
  uVar28 = 0;
  if ((char)param_1[0x1c] != '\0') {
    (**(code **)(*param_1 + 0x3c0))(param_1);
  }
  uVar12 = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(uint *)(param_1 + 0x4c) = local_res8;
  *(undefined4 *)((longlong)param_1 + 0x264) = uStackX_c;
  if ((((*(byte *)(param_1 + 0x1d) >> 1 & 1) != 0) ||
      (lVar13 = param_1[0x15], *(float *)(lVar13 + 0x15c) != 0.0)) ||
     (((*(byte *)(lVar13 + 0x318) & 1) != 0 && (*(char *)(lVar13 + 0x2f4) != '\0')))) {
    uVar12 = 0x1000;
  }
  *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xffffefff;
  *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) | uVar12;
  param_1[0x6b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0xc2c80000;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((*(int *)((longlong)param_1 + 0x284) < 0) && (*(int *)((longlong)param_1 + 0x284) != 0)) {
    TArray<float,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_1 + 0x4d,0);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  if ((*(int *)((longlong)param_1 + 0x2a4) < 0) && (*(int *)((longlong)param_1 + 0x2a4) != 0)) {
    TArray<float,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_1 + 0x51,0);
  }
  if ((*(byte *)(param_1 + 0x1d) >> 4 & 1) != 0) {
    (**(code **)(*param_1 + 0x338))(param_1);
  }
  *(undefined4 *)(param_1 + 0x77) = 0;
  if ((*(int *)((longlong)param_1 + 0x3bc) < 0) && (*(int *)((longlong)param_1 + 0x3bc) != 0)) {
    FUN_141f62110(param_1 + 0x72,0);
  }
  if ((param_1[0x28] != 0) && ((*(byte *)(param_1[0x15] + 0x1a9) & 1) != 0)) {
    (**(code **)(*param_1 + 0x330))(param_1,param_1[0x28],param_1 + 0x72);
  }
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if ((*(int *)((longlong)param_1 + 0x3ec) < 0) && (*(int *)((longlong)param_1 + 0x3ec) != 0)) {
    FUN_141f62110(param_1 + 0x78);
  }
  if ((((*(uint *)((longlong)param_1 + 0xe4) & 0x10000) == 0) &&
      (lVar13 = param_1[0x29], lVar13 != 0)) && (lVar13 != param_1[0x28])) {
    FUN_1430b1a30();
    lVar13 = UObjectBaseUtility::GetInterfaceAddress(lVar13);
    if (lVar13 == 0) {
      (**(code **)(*param_1 + 0x330))(param_1,param_1[0x29],param_1 + 0x78);
    }
  }
  lVar13 = param_1[0x15];
  if (0 < *(int *)(lVar13 + 0x178)) {
    plVar26 = *(longlong **)(lVar13 + 0x170);
    uVar27 = (longlong)*(int *)(lVar13 + 0x178) & 0x1fffffffffffffff;
    if (plVar26 + *(int *)(lVar13 + 0x178) < plVar26) {
      uVar27 = uVar28;
    }
    uVar30 = uVar28;
    uVar29 = uVar28;
    if (uVar27 != 0) {
      do {
        if ((longlong *)*plVar26 != (longlong *)0x0) {
          iVar11 = (**(code **)(*(longlong *)*plVar26 + 0x2a0))();
          uVar30 = (ulonglong)((int)uVar30 + (iVar11 + 3U & 0xfffffffc));
        }
        plVar26 = plVar26 + 1;
        uVar29 = uVar29 + 1;
      } while (uVar29 != uVar27);
      iVar11 = (int)uVar30;
      if (iVar11 != 0) {
        plVar26 = param_1 + 0x6d;
        iVar4 = (int)param_1[0x6e];
        if (iVar4 < iVar11) {
          *(int *)(param_1 + 0x6e) = iVar11;
          if (*(int *)((longlong)param_1 + 0x374) < iVar11) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar26);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar4 + *plVar26),0,(longlong)(iVar11 - iVar4));
        }
        else if (iVar11 < iVar4) {
          TArray<unsigned_char,FDefaultAllocator>::RemoveAtImpl(plVar26,uVar30,iVar4 - iVar11,0);
        }
      }
    }
    lVar13 = param_1[0x15];
    uVar30 = 0;
    plVar26 = *(longlong **)(lVar13 + 0x170);
    uVar27 = (longlong)*(int *)(lVar13 + 0x178) & 0x1fffffffffffffff;
    if (plVar26 + *(int *)(lVar13 + 0x178) < plVar26) {
      uVar27 = uVar30;
    }
    if (uVar27 != 0) {
      do {
        plVar18 = (longlong *)*plVar26;
        if (plVar18 != (longlong *)0x0) {
          iVar11 = (**(code **)(*plVar18 + 0x2a0))(plVar18);
          uVar12 = iVar11 + 3U & 0xfffffffc;
          if (uVar12 == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = (longlong)(int)uVar28 + param_1[0x6d];
          }
          uVar28 = (ulonglong)((int)uVar28 + uVar12);
          (**(code **)(*plVar18 + 0x290))(plVar18,param_1,lVar13);
        }
        plVar26 = plVar26 + 1;
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar27);
      lVar13 = param_1[0x15];
    }
  }
  pfVar31 = (float *)(param_1 + 0x5e);
  if ((*(int *)(lVar13 + 0x178) == 0) && (*(longlong *)(lVar13 + 0x288) != 0)) {
    local_130 = *(float *)(param_1 + 0x56);
    local_res8 = local_res8 & 0xffffff00;
    local_138 = *(undefined8 *)pfVar2;
    fVar32 = SQRT(*pfVar31 * *pfVar31 +
                  *(float *)((longlong)param_1 + 0x2f4) * *(float *)((longlong)param_1 + 0x2f4) +
                  *(float *)(param_1 + 0x5f) * *(float *)(param_1 + 0x5f));
    uVar17 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_14059b680(uVar17,&local_138,&local_178,&local_res8);
    if (((byte)local_res8 != '\0') && (0.0001 < fVar32)) {
      fVar35 = *(float *)((longlong)param_1 + 0x2f4);
      fVar43 = *pfVar31;
      fVar55 = *(float *)(param_1 + 0x5f);
      fVar63 = ((local_178._4_4_ - *(float *)((longlong)param_1 + 0x2dc)) * fVar35 +
                ((float)local_178 - *(float *)(param_1 + 0x5b)) * fVar43 +
               (fStack_170 - *(float *)(param_1 + 0x5c)) * fVar55) /
               (fVar43 * fVar43 + fVar35 * fVar35 + fVar55 * fVar55);
      lVar13 = (**(code **)(*param_1 + 0x148))(param_1);
      *(float *)(param_1 + 0x67) =
           SQRT(fVar63 * fVar35 * fVar63 * fVar35 + fVar63 * fVar43 * fVar63 * fVar43 +
                fVar63 * fVar55 * fVar63 * fVar55) * (1.0 / fVar32) + *(float *)(lVar13 + 0x790);
    }
    lVar13 = param_1[0x15];
  }
  else {
    *(undefined4 *)(param_1 + 0x67) = 0xbf800000;
  }
  if (((*(byte *)(lVar13 + 0x1d4) & 1) != 0) && (lVar13 = param_1[0x28], lVar13 != 0)) {
    uVar17 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_142d4d560(uVar17,pfVar2,pfVar31,lVar13);
  }
  plVar18 = local_res20;
  plVar26 = local_res20 + 0x8b;
  puVar21 = (undefined8 *)*plVar26;
  iVar11 = (int)local_res20[0x8c];
  puVar19 = puVar21 + iVar11;
  for (; puVar21 != puVar19; puVar21 = puVar21 + 1) {
    if ((longlong *)*puVar21 == param_1) goto LAB_1430525c2;
  }
  *(int *)(local_res20 + 0x8c) = iVar11 + 1;
  if (*(int *)((longlong)local_res20 + 0x464) < iVar11 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar26);
  }
  *(longlong **)(*plVar26 + (longlong)iVar11 * 8) = param_1;
  if (*DAT_146b47600 == 0) {
    FUN_143059080(param_1,1);
  }
  else {
    FUN_14303e050(plVar18,param_1);
  }
LAB_1430525c2:
  if (((param_1[0x15] != 0) && ((*(byte *)(param_1[0x15] + 0x318) & 1) != 0)) &&
     ((char)param_1[0x8b] == '\0')) {
    FUN_143041390(param_1);
  }
  return;
}



// FUNCTION 143052600 FUN_143052600 body=113 status=ok
// SIG undefined FUN_143052600(void)

undefined8 FUN_143052600(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_142d29780(param_2);
  if (lVar3 != 0) {
    return 1;
  }
  if (param_3 != (longlong *)0x0) {
    lVar3 = FUN_143036a00();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar2 = (**(code **)(*param_3 + 0x4f8))(param_3), iVar2 != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143052680 FUN_143052680 body=38 status=ok
// SIG undefined FUN_143052680(void)

ulonglong FUN_143052680(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    return (ulonglong)(cRam0000000000000128 == '\x03');
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x20) >> 8),
                  *(char *)(*(longlong *)(param_1 + 0x20) + 0x128) == '\x03');
}



// FUNCTION 1430526b0 FUN_1430526b0 body=210 status=ok
// SIG undefined FUN_1430526b0(void)

undefined8 FUN_1430526b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = FUN_142d29780(param_2);
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x660) & 4) == 0)) {
    bVar5 = lVar4 != 0;
    if ((lVar4 == 0) && (param_3 != (longlong *)0x0)) {
      lVar4 = FUN_143036a00();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (iVar3 = (**(code **)(*param_3 + 0x4f8))(param_3), iVar3 != 0)) {
        bVar5 = true;
      }
    }
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0xb0) + 0xa8);
    if ((((bVar1 & 0x10) != 0) && (!bVar5)) || (((bVar1 & 8) != 0 && (bVar5)))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143052790 FUN_143052790 body=210 status=ok
// SIG undefined FUN_143052790(void)

undefined8 FUN_143052790(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = FUN_142d29780(param_2);
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x660) & 4) == 0)) {
    bVar5 = lVar4 != 0;
    if ((lVar4 == 0) && (param_3 != (longlong *)0x0)) {
      lVar4 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (iVar3 = (**(code **)(*param_3 + 0x4f8))(param_3), iVar3 != 0)) {
        bVar5 = true;
      }
    }
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0xa8) + 0x1a9);
    if ((((bVar1 & 0x10) != 0) && (!bVar5)) || (((bVar1 & 8) != 0 && (bVar5)))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1430528b0 HasOverrideVelocity body=12 status=ok
// SIG undefined HasOverrideVelocity(void)

byte FRootMotionSourceGroup::HasOverrideVelocity(longlong param_1)

{
  return *(byte *)(param_1 + 0xe8) >> 1 & 1;
}



// FUNCTION 1430528c0 FUN_1430528c0 body=31 status=ok
// SIG undefined FUN_1430528c0(void)

undefined8 FUN_1430528c0(longlong param_1)

{
  if (((*(byte *)(param_1 + 0xe8) >> 1 & 1) != 0) && ((*(uint *)(param_1 + 0xe4) & 0x8000) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1430528e0 FUN_1430528e0 body=44 status=ok
// SIG undefined FUN_1430528e0(void)

undefined8 FUN_1430528e0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0xf0))();
  if (lVar2 != 0) {
    cVar1 = FUN_14307ebb0(lVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143052910 FUN_143052910 body=110 status=ok
// SIG undefined FUN_143052910(void)

undefined1 FUN_143052910(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar2 = FUN_1430aef40();
    for (lVar1 = *(longlong *)(param_1 + 8); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        if (*(longlong *)(param_1 + 8) == 0) {
          return 0;
        }
        if (((param_2 & 1) != 0) && (*(longlong *)(param_1 + 0x38) == 0)) {
          return 0;
        }
        if (((param_2 & 2) != 0) && (*(longlong *)(param_1 + 0x60) == 0)) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1430529a0 FUN_1430529a0 body=269 status=ok
// SIG undefined FUN_1430529a0(void)

undefined4 FUN_1430529a0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((param_3 != (longlong *)0x0) && (param_3 != param_2)) {
    uVar1 = FUN_142e79d90();
    lVar5 = (**(code **)(*param_3 + 0x628))(param_3,uVar1);
    if ((lVar5 != 0) &&
       (((lVar6 = FUN_142d29780(param_3), lVar6 == 0 || ((*(uint *)(lVar6 + 0x840) >> 3 & 1) == 0))
        && (cVar3 = FUN_142dd39e0(lVar5,param_2), cVar3 != '\0')))) {
      uVar1 = FUN_142df3580(param_3);
      uVar2 = FUN_142df3580(param_2);
      iVar4 = FUN_142df3570(uVar2,uVar1);
      if ((((*(char *)(param_1 + 0x98) != '\0') || (iVar4 != 2)) &&
          ((*(char *)(param_1 + 0x99) != '\0' || (iVar4 != 0)))) &&
         ((*(char *)(param_1 + 0x9a) != '\0' || (iVar4 != 1)))) {
        if (((*(char *)(param_1 + 0x9c) != '\0') &&
            (((iVar4 != 2 && (param_2 != (longlong *)0x0)) &&
             (lVar5 = FUN_14222e270(param_2), lVar5 == 0)))) &&
           (plVar7 = (longlong *)FUN_14222e2a0(param_2), plVar7 == param_3)) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143052ab0 FUN_143052ab0 body=37 status=ok
// SIG undefined FUN_143052ab0(void)

void FUN_143052ab0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x388))();
  return;
}



// FUNCTION 143052ae0 FUN_143052ae0 body=744 status=ok
// SIG undefined FUN_143052ae0(void)

longlong FUN_143052ae0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ushort uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined8 local_res8;
  float local_58;
  float fStack_54;
  float local_50;
  undefined1 local_48 [64];
  
  lVar4 = 0;
  local_res8 = 0;
  param_1[0x5c] = 0;
  if (*param_2 != 0) {
    *(ushort *)((longlong)param_1 + 0x1de) = *(ushort *)((longlong)param_1 + 0x1de) | 2;
    uVar7 = *(ushort *)((longlong)param_1 + 0x15c) | 2;
    if (uVar7 != *(ushort *)((longlong)param_1 + 0x15c)) {
      if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
        lVar4 = param_1[4];
      }
      if (*(char *)(lVar4 + 0x128) == '\x03') {
        *(ushort *)((longlong)param_1 + 0x15c) = uVar7;
        (**(code **)(*param_1 + 0x260))(param_1);
      }
    }
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar1 = param_1 + 0x23;
    *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(lVar4 + 0x790);
    lVar4 = param_2[1];
    *plVar1 = *param_2;
    param_1[0x24] = lVar4;
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar4 = param_2[3];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_1 + 0x25) = (int)param_2[2];
    *(undefined4 *)((longlong)param_1 + 300) = uVar2;
    *(int *)(param_1 + 0x26) = (int)lVar4;
    *(undefined4 *)((longlong)param_1 + 0x134) = uVar3;
    param_1[0x27] = param_2[4];
    if (param_1[0x24] == 0) {
      lVar4 = (**(code **)(*(longlong *)*plVar1 + 0x3b8))();
      param_1[0x24] = lVar4;
    }
    plVar5 = (longlong *)FUN_14304aab0(plVar1,&local_res8);
    param_1[0x5c] = *plVar5;
    plVar5 = (longlong *)FUN_14304c5d0(plVar1,&local_58);
    param_1[0x59] = *plVar5;
    *(int *)(param_1 + 0x5a) = (int)plVar5[1];
    *(longlong *)((longlong)param_1 + 700) = *plVar5;
    *(int *)((longlong)param_1 + 0x2c4) = (int)plVar5[1];
    if ((*(byte *)(param_1[0x16] + 0xaa) & 2) == 0) {
      local_58 = *(float *)((longlong)param_1 + 700) - *(float *)((longlong)param_1 + 0x274);
      fStack_54 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x4f);
      local_50 = *(float *)((longlong)param_1 + 0x2c4) - *(float *)((longlong)param_1 + 0x27c);
      fVar8 = fStack_54 * fStack_54 + local_58 * local_58 + local_50 * local_50;
      if (fVar8 != 1.0) {
        if (1e-08 <= fVar8) {
          auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
          fVar9 = auVar10._0_4_;
          fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
          fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
          local_58 = local_58 * fVar9;
          fStack_54 = fStack_54 * fVar9;
          local_50 = local_50 * fVar9;
        }
        else {
          local_58 = DAT_1468b5d90;
          local_50 = DAT_1468b5d98;
          fStack_54 = DAT_1468b5d94;
        }
      }
      *(ulonglong *)((longlong)param_1 + 0x2d4) = CONCAT44(fStack_54,local_58);
    }
    else {
      FUN_14304d910(plVar1,&local_58);
      local_58 = 0.0;
      puVar6 = (ulonglong *)FRotator::Vector(&local_58,local_48);
      local_50 = -*(float *)(puVar6 + 1);
      *(ulonglong *)((longlong)param_1 + 0x2d4) = *puVar6 ^ 0x8000000080000000;
    }
    *(float *)((longlong)param_1 + 0x2dc) = local_50;
    lVar4 = (**(code **)(*param_1 + 0x260))(param_1);
  }
  return lVar4;
}



// FUNCTION 143052e50 FUN_143052e50 body=359 status=ok
// SIG undefined FUN_143052e50(void)

undefined1
FUN_143052e50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar5 = FUN_142372d70(param_1,param_2,param_3,param_4,param_5,param_6);
  if (((*(char *)(param_1 + 0x29c) != '\0') && (lVar6 = *(longlong *)(param_1 + 0x178), lVar6 != 0))
     && (*(longlong *)(param_1 + 0x278) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x150);
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar6 + 0x220);
      uVar3 = *(undefined4 *)(lVar6 + 0x224);
      uVar4 = *(undefined4 *)(lVar6 + 0x228);
      local_20 = *(undefined4 *)(param_1 + 700);
      lVar6 = *(longlong *)(param_1 + 0x120);
      local_28 = *(undefined8 *)(param_1 + 0x2b4);
      local_38 = uVar2;
      uStack_34 = uVar3;
      local_30 = uVar4;
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0(param_1);
      }
      FUN_142db5a00(lVar6,&local_28,&local_38,*(char *)(param_1 + 0x2b2) == '\0',lVar1,
                    *(undefined4 *)(param_1 + 0x2a0));
      *(undefined4 *)(param_1 + 0x2b4) = uVar2;
      *(undefined4 *)(param_1 + 0x2b8) = uVar3;
      *(undefined4 *)(param_1 + 700) = uVar4;
      *(undefined1 *)(param_1 + 0x2b2) = 1;
      return uVar5;
    }
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 143052fc0 FUN_143052fc0 body=48 status=ok
// SIG undefined FUN_143052fc0(void)

undefined8 FUN_143052fc0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xf0))();
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x888))(plVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143052ff0 FUN_143052ff0 body=500 status=ok
// SIG undefined FUN_143052ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143052ff0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char local_res8 [8];
  
  if ((*param_1 == 0) && (param_1[1] == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  local_res8[0] = uVar3;
  (**(code **)(*param_2 + 0x58))(param_2,local_res8,1);
  if (local_res8[0] == '\0') {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      uVar2 = DAT_1468b5d98;
      param_1[3] = _DAT_1468b5d90;
      *(undefined4 *)(param_1 + 4) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x24) = DAT_1468b5da0;
      *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_1468b5da8;
      uVar2 = DAT_1464aa7b0;
      param_1[6] = DAT_1464aa7a8;
      *(undefined4 *)(param_1 + 7) = uVar2;
    }
  }
  else {
    (**(code **)(*param_2 + 0x30))(param_2,param_1);
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 1);
    (**(code **)(*param_2 + 0x40))(param_2,param_1 + 2);
    FUN_1406da970(param_2,param_1 + 3);
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,(longlong)param_1 + 0x24,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,(longlong)param_1 + 0x24,4);
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x24) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 5,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 5,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 5) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,(longlong)param_1 + 0x2c,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,(longlong)param_1 + 0x2c,4);
      }
      FUN_1406da970(param_2,param_1 + 6);
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x2c) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      FUN_1406da970(param_2,param_1 + 6);
    }
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 1430531f0 FUN_1430531f0 body=88 status=ok
// SIG undefined FUN_1430531f0(void)

void FUN_1430531f0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x2b0))();
  if (cVar1 != '\0') {
    lVar2 = FUN_14307d750(param_1,param_2);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_14307c550(lVar2,*(undefined1 *)(lVar2 + 0x690));
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x420))(plVar3);
      }
    }
  }
  return;
}



// FUNCTION 143053250 FUN_143053250 body=64 status=ok
// SIG undefined FUN_143053250(void)

void FUN_143053250(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2b0))();
  if (cVar1 != '\0') {
    lVar2 = FUN_14307d750(param_1,param_2);
    if (lVar2 != 0) {
      FUN_143071be0(lVar2);
    }
  }
  return;
}



// FUNCTION 143053290 FUN_143053290 body=88 status=ok
// SIG undefined FUN_143053290(void)

void FUN_143053290(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2b0))();
  if (cVar1 != '\0') {
    lVar2 = FUN_14307d750(param_1,param_2);
    if (lVar2 != 0) {
      FUN_14307fbc0(lVar2,(char)param_1[8],param_1[9],(char)param_1[10],
                    *(undefined4 *)((longlong)param_1 + 0x54));
    }
  }
  return;
}



// FUNCTION 1430532f0 FUN_1430532f0 body=233 status=ok
// SIG undefined FUN_1430532f0(void)

void FUN_1430532f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_140729f20(param_1 + 0x688,param_9);
  local_38 = *param_8;
  local_30 = *(undefined4 *)(param_8 + 1);
  local_28 = *param_7;
  local_20 = *(undefined4 *)(param_7 + 1);
  local_18 = *param_6;
  local_10 = *(undefined4 *)(param_6 + 1);
  FUN_14307fa10(param_1,param_2,param_3,param_4,param_5,&local_18,&local_28,&local_38,param_9);
  return;
}



// FUNCTION 1430533e0 FUN_1430533e0 body=74 status=ok
// SIG undefined FUN_1430533e0(void)

void FUN_1430533e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x460) = 0;
  if (*(int *)(param_1 + 0x464) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x458,0);
  }
  *(undefined4 *)(param_1 + 0x470) = 0;
  if (*(int *)(param_1 + 0x474) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x468,0);
    return;
  }
  return;
}



// FUNCTION 143053430 FUN_143053430 body=337 status=ok
// SIG undefined FUN_143053430(void)

void FUN_143053430(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar5;
  
  uVar5 = 0;
  plVar3 = *(longlong **)(param_1 + 0x458);
  uVar7 = (longlong)*(int *)(param_1 + 0x460) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x460) < plVar3) {
    uVar7 = uVar5;
  }
  uVar6 = uVar5;
  if (uVar7 != 0) {
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x298))();
      }
      plVar3 = plVar3 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  *(undefined4 *)(param_1 + 0x460) = 0;
  if (*(int *)(param_1 + 0x464) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x458,0);
  }
  *(undefined4 *)(param_1 + 0x488) = 0;
  if (*(int *)(param_1 + 0x48c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x480,0);
  }
  *(undefined4 *)(param_1 + 0x498) = 0;
  if (*(int *)(param_1 + 0x49c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x490,0);
  }
  uVar7 = uVar5;
  if (0 < *(int *)(param_1 + 0x5a8)) {
    do {
      iVar1 = *(int *)(param_1 + 0x5b8);
      lVar2 = *(longlong *)(param_1 + 0x5a0);
      *(int *)(param_1 + 0x5b8) = iVar1 + 1;
      if (*(int *)(param_1 + 0x5bc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x5b0,iVar1);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      *(undefined8 *)(*(longlong *)(param_1 + 0x5b0) + (longlong)iVar1 * 8) =
           *(undefined8 *)(uVar7 + lVar2);
      uVar7 = uVar7 + 0x18;
    } while ((int)uVar4 < *(int *)(param_1 + 0x5a8));
  }
  *(undefined4 *)(param_1 + 0x5a8) = 0;
  if (*(int *)(param_1 + 0x5ac) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x5a0,0);
  }
  return;
}



// FUNCTION 143053590 FUN_143053590 body=4499 status=ok
// SIG undefined FUN_143053590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143053590(longlong *param_1)

{
  undefined1 auVar1 [16];
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  wchar_t *pwVar10;
  ulonglong uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  wchar_t *pwVar21;
  undefined8 uVar22;
  int iVar23;
  undefined4 *puVar24;
  int *piVar25;
  longlong *plVar26;
  wchar_t *pwVar27;
  longlong *plVar28;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  longlong local_res8;
  ulonglong local_res10;
  longlong *in_stack_fffffffffffffe68;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  float local_160;
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
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [176];
  
  *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) | 0x10;
  pwVar27 = (wchar_t *)0x0;
  pwVar21 = pwVar27;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    pwVar21 = (wchar_t *)param_1[4];
  }
  if (((char)pwVar21[0x94] == '\x03') && (param_1[0x38] != 0)) {
    pwVar15 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAttachedActorDestroyed",L"::");
    pwVar21 = pwVar27;
    while (pwVar10 = pwVar15, pwVar10 != (wchar_t *)0x0) {
      pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
      pwVar21 = pwVar10;
    }
    FName::FName(&local_res10,pwVar21 + 2,1);
    uVar11 = local_res10;
    lVar17 = param_1[0x38];
    plVar26 = (longlong *)(lVar17 + 0x290);
    FWeakObjectPtr::operator=(&local_178,0);
    uStack_170 = 0;
    FWeakObjectPtr::operator=(&local_178,param_1);
    uStack_170 = uVar11;
    local_res8 = 0;
    if ((uVar11 != 0) && (lVar16 = FWeakObjectPtr::Get(&local_178), lVar16 != 0)) {
      UObject::FindFunction(lVar16,uStack_170);
    }
    piVar2 = (int *)*plVar26;
    iVar13 = *(int *)(lVar17 + 0x298);
    for (piVar25 = piVar2; piVar25 != piVar2 + (longlong)iVar13 * 4; piVar25 = piVar25 + 4) {
      if ((((float)*piVar25 == (float)local_178) &&
          (local_178._4_4_ = (float)((ulonglong)local_178 >> 0x20),
          bVar29 = (float)piVar25[1] == local_178._4_4_, bVar29)) ||
         ((cVar12 = FWeakObjectPtr::IsValid(piVar25), cVar12 == '\0' &&
          (cVar12 = FWeakObjectPtr::IsValid(&local_178), cVar12 == '\0')))) {
        bVar29 = true;
      }
      else {
        bVar29 = false;
      }
      if ((bVar29) && (*(ulonglong *)(piVar25 + 2) == uStack_170)) {
        bVar29 = true;
      }
      else {
        bVar29 = false;
      }
      if (bVar29) {
        if ((int)((longlong)piVar25 - (longlong)piVar2 >> 4) != -1) goto LAB_14305375d;
        break;
      }
    }
    iVar13 = *(int *)(lVar17 + 0x298);
    *(int *)(lVar17 + 0x298) = iVar13 + 1;
    if (*(int *)(lVar17 + 0x29c) < iVar13 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar26,iVar13);
    }
    puVar24 = (undefined4 *)((longlong)iVar13 * 0x10 + *plVar26);
    *puVar24 = (float)local_178;
    puVar24[1] = local_178._4_4_;
    *(ulonglong *)(puVar24 + 2) = uStack_170;
LAB_14305375d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar26);
    lVar17 = param_1[0x39];
    if (lVar17 != 0) {
      lVar16 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
        bVar29 = false;
      }
      else {
        bVar29 = true;
      }
      if (bVar29) {
        pwVar15 = _guard_xfg_dispatch_icall_nop
                            (L"&ThisClass::OnAttachedComponentCollisionChanged",L"::");
        pwVar21 = pwVar27;
        while (pwVar10 = pwVar15, pwVar10 != (wchar_t *)0x0) {
          pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
          pwVar21 = pwVar10;
        }
        FName::FName(&local_res10,pwVar21 + 2,1);
        uVar11 = local_res10;
        plVar26 = (longlong *)(lVar17 + 0x5b0);
        FWeakObjectPtr::operator=(&local_178,0);
        uStack_170 = 0;
        FWeakObjectPtr::operator=(&local_178,param_1);
        uStack_170 = uVar11;
        local_res8 = 0;
        if ((uVar11 != 0) && (lVar16 = FWeakObjectPtr::Get(&local_178), lVar16 != 0)) {
          UObject::FindFunction(lVar16,uStack_170);
        }
        piVar2 = (int *)*plVar26;
        iVar13 = *(int *)(lVar17 + 0x5b8);
        for (piVar25 = piVar2; piVar25 != piVar2 + (longlong)iVar13 * 4; piVar25 = piVar25 + 4) {
          if ((((float)*piVar25 == (float)local_178) &&
              (local_178._4_4_ = (float)((ulonglong)local_178 >> 0x20),
              bVar29 = (float)piVar25[1] == local_178._4_4_, bVar29)) ||
             ((cVar12 = FWeakObjectPtr::IsValid(piVar25), cVar12 == '\0' &&
              (cVar12 = FWeakObjectPtr::IsValid(&local_178), cVar12 == '\0')))) {
            bVar29 = true;
          }
          else {
            bVar29 = false;
          }
          if ((bVar29) && (*(ulonglong *)(piVar25 + 2) == uStack_170)) {
            bVar29 = true;
          }
          else {
            bVar29 = false;
          }
          if (bVar29) {
            if ((int)((longlong)piVar25 - (longlong)piVar2 >> 4) != -1) goto LAB_14305390c;
            break;
          }
        }
        iVar13 = *(int *)(lVar17 + 0x5b8);
        *(int *)(lVar17 + 0x5b8) = iVar13 + 1;
        if (*(int *)(lVar17 + 0x5bc) < iVar13 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar26,iVar13);
        }
        puVar24 = (undefined4 *)((longlong)iVar13 * 0x10 + *plVar26);
        *puVar24 = (float)local_178;
        puVar24[1] = local_178._4_4_;
        *(ulonglong *)(puVar24 + 2) = uStack_170;
LAB_14305390c:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar26);
        pwVar15 = _guard_xfg_dispatch_icall_nop
                            (L"&ThisClass::OnAttachedComponentUnregistered",L"::");
        pwVar21 = pwVar27;
        while (pwVar10 = pwVar15, pwVar10 != (wchar_t *)0x0) {
          pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
          pwVar21 = pwVar10;
        }
        FName::FName(&local_res10,pwVar21 + 2,1);
        uVar11 = local_res10;
        plVar26 = (longlong *)(lVar17 + 0x128);
        FWeakObjectPtr::operator=(&local_178,0);
        uStack_170 = 0;
        FWeakObjectPtr::operator=(&local_178,param_1);
        uStack_170 = uVar11;
        local_res8 = 0;
        if ((uVar11 != 0) && (lVar16 = FWeakObjectPtr::Get(&local_178), lVar16 != 0)) {
          UObject::FindFunction(lVar16,uStack_170);
        }
        piVar2 = (int *)*plVar26;
        iVar13 = *(int *)(lVar17 + 0x130);
        for (piVar25 = piVar2; piVar25 != piVar2 + (longlong)iVar13 * 4; piVar25 = piVar25 + 4) {
          if ((((float)*piVar25 == (float)local_178) &&
              (local_178._4_4_ = (float)((ulonglong)local_178 >> 0x20),
              bVar29 = (float)piVar25[1] == local_178._4_4_, bVar29)) ||
             ((cVar12 = FWeakObjectPtr::IsValid(piVar25), cVar12 == '\0' &&
              (cVar12 = FWeakObjectPtr::IsValid(&local_178), cVar12 == '\0')))) {
            bVar29 = true;
          }
          else {
            bVar29 = false;
          }
          if ((bVar29) && (*(ulonglong *)(piVar25 + 2) == uStack_170)) {
            bVar29 = true;
          }
          else {
            bVar29 = false;
          }
          if (bVar29) {
            if ((int)((longlong)piVar25 - (longlong)piVar2 >> 4) != -1) goto LAB_143053a6c;
            break;
          }
        }
        iVar13 = *(int *)(lVar17 + 0x130);
        *(int *)(lVar17 + 0x130) = iVar13 + 1;
        if (*(int *)(lVar17 + 0x134) < iVar13 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar26,iVar13);
        }
        puVar24 = (undefined4 *)((longlong)iVar13 * 0x10 + *plVar26);
        *puVar24 = (float)local_178;
        puVar24[1] = local_178._4_4_;
        *(ulonglong *)(puVar24 + 2) = uStack_170;
LAB_143053a6c:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar26);
        plVar26 = (longlong *)param_1[0x39];
        if (plVar26 != (longlong *)0x0) {
          lVar17 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
          if ((*(int *)(plVar26[2] + 0x90) < *(int *)(lVar17 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar26[2] + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8) !=
              lVar17 + 0x88)) {
            bVar29 = false;
          }
          else {
            bVar29 = true;
          }
          if ((bVar29) && (iVar13 = (**(code **)(*plVar26 + 0x4f8))(plVar26), iVar13 != 0)) {
            pwVar15 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAttachedActorFractured",L"::");
            pwVar21 = pwVar27;
            while (pwVar10 = pwVar15, pwVar10 != (wchar_t *)0x0) {
              pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
              pwVar21 = pwVar10;
            }
            FName::FName(&local_res10,pwVar21 + 2,1);
            plVar28 = plVar26 + 0x14d;
            FWeakObjectPtr::operator=(&local_178,0);
            uStack_170 = 0;
            FWeakObjectPtr::operator=(&local_178,param_1);
            uStack_170 = local_res10;
            local_res8 = 0;
            if ((local_res10 != 0) && (lVar17 = FWeakObjectPtr::Get(&local_178), lVar17 != 0)) {
              UObject::FindFunction(lVar17,uStack_170);
            }
            piVar2 = (int *)*plVar28;
            lVar17 = plVar26[0x14e];
            for (piVar25 = piVar2; piVar25 != piVar2 + (longlong)(int)lVar17 * 4;
                piVar25 = piVar25 + 4) {
              if ((((float)*piVar25 == (float)local_178) &&
                  (local_178._4_4_ = (float)((ulonglong)local_178 >> 0x20),
                  bVar29 = (float)piVar25[1] == local_178._4_4_, bVar29)) ||
                 ((cVar12 = FWeakObjectPtr::IsValid(piVar25), cVar12 == '\0' &&
                  (cVar12 = FWeakObjectPtr::IsValid(&local_178), cVar12 == '\0')))) {
                bVar29 = true;
              }
              else {
                bVar29 = false;
              }
              if ((bVar29) && (*(ulonglong *)(piVar25 + 2) == uStack_170)) {
                bVar29 = true;
              }
              else {
                bVar29 = false;
              }
              if (bVar29) {
                if ((int)((longlong)piVar25 - (longlong)piVar2 >> 4) != -1) goto LAB_143053c2c;
                break;
              }
            }
            iVar13 = (int)plVar26[0x14e];
            *(int *)(plVar26 + 0x14e) = iVar13 + 1;
            if (*(int *)((longlong)plVar26 + 0xa74) < iVar13 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar28,iVar13);
            }
            puVar24 = (undefined4 *)((longlong)iVar13 * 0x10 + *plVar28);
            *puVar24 = (float)local_178;
            puVar24[1] = local_178._4_4_;
            *(ulonglong *)(puVar24 + 2) = uStack_170;
LAB_143053c2c:
            TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar28);
          }
        }
      }
    }
  }
  lVar17 = param_1[0x15];
  if ((*(byte *)(lVar17 + 0x184) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(lVar17 + 0x188);
  }
  iVar13 = (int)param_1[99] + -1;
  lVar16 = (longlong)iVar13;
  if (-1 < iVar13) {
    do {
      lVar17 = *(longlong *)(param_1[0x62] + lVar16 * 8);
      if ((lVar17 != 0) && (lVar17 != param_1[0x61])) {
        lVar18 = AGFreezeCharacterCue::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
          bVar29 = false;
        }
        else {
          bVar29 = true;
        }
        if (bVar29) {
          FUN_143060d10(param_1,lVar17);
          FUN_142600fa0(lVar17);
        }
      }
      lVar16 = lVar16 + -1;
    } while (-1 < lVar16);
    lVar17 = param_1[0x15];
  }
  plVar26 = (longlong *)param_1[0x61];
  if (plVar26 != (longlong *)0x0) {
    if ((*(byte *)(lVar17 + 0x2c8) & 0x10) == 0) {
      local_res8 = 0;
      if (*(longlong *)(lVar17 + 0x2d0) != 0) {
        (**(code **)(*plVar26 + 0x958))(plVar26,*(undefined8 *)(lVar17 + 0x2d0),0);
      }
    }
    else {
      FUN_143060d10(param_1,plVar26);
      FUN_142600fa0(param_1[0x61]);
      if ((*(uint *)((longlong)param_1 + 0xe4) & 0x100000) != 0) {
        FUN_142608f20(param_1[0x61]);
      }
      param_1[0x61] = 0;
    }
  }
  if ((param_1[0x60] != 0) && ((*(byte *)(param_1[0x15] + 0x2c8) & 8) != 0)) {
    FUN_142359580();
    plVar26 = (longlong *)param_1[0x62];
    iVar13 = (int)param_1[99];
    for (plVar28 = plVar26; plVar28 != plVar26 + iVar13; plVar28 = plVar28 + 1) {
      if (*plVar28 == param_1[0x60]) {
        iVar23 = (int)((longlong)plVar28 - (longlong)plVar26 >> 3);
        if (iVar23 != -1) {
          iVar14 = (iVar13 - iVar23) + -1;
          if (0 < iVar14) {
            iVar14 = 1;
          }
          if (iVar14 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar26 + iVar23,plVar26 + (iVar13 - iVar14),(longlong)iVar14 << 3);
          }
          *(int *)(param_1 + 99) = (int)param_1[99] + -1;
        }
        break;
      }
    }
    param_1[0x60] = 0;
  }
  lVar17 = param_1[0x15];
  lVar16 = *(longlong *)(lVar17 + 0xf0);
  if (*(longlong *)(lVar17 + 0xf8) != 0) {
    lVar19 = UDungeonEventListener::GetPrivateStaticClass();
    for (lVar18 = *(longlong *)(lVar17 + 0xf8); lVar18 != 0; lVar18 = *(longlong *)(lVar18 + 0x30))
    {
      if (lVar18 == lVar19) {
        if ((*(longlong *)(lVar17 + 0xf8) != 0) &&
           (lVar17 = FUN_142db9260(*(undefined8 *)(param_1[0x15] + 0xf8),param_1), lVar17 != 0)) {
          lVar16 = lVar17;
        }
        break;
      }
    }
  }
  lVar17 = param_1[0x15];
  plVar26 = param_1 + 0x38;
  pfVar20 = (float *)FUN_14304e080(plVar26,&local_118);
  fVar50 = fRam0000000146b473e8;
  fVar41 = fRam0000000146b473e4;
  fVar40 = _DAT_146b473e0;
  fVar65 = fRam0000000146b47388;
  fVar64 = fRam0000000146b47384;
  fVar63 = _DAT_146b47380;
  auVar1 = *(undefined1 (*) [16])(lVar17 + 0x60);
  fVar3 = auVar1._0_4_;
  fVar5 = auVar1._4_4_;
  fVar7 = auVar1._8_4_;
  auVar30 = *(undefined1 (*) [16])(pfVar20 + 8);
  fVar4 = auVar30._0_4_;
  fVar6 = auVar30._4_4_;
  fVar8 = auVar30._8_4_;
  fVar9 = auVar30._12_4_;
  auVar30 = minps(auVar1,auVar30);
  auVar31._4_4_ = -(uint)(auVar30._4_4_ < fRam0000000146b473e4);
  auVar31._0_4_ = -(uint)(auVar30._0_4_ < _DAT_146b473e0);
  auVar31._8_4_ = -(uint)(auVar30._8_4_ < fRam0000000146b473e8);
  auVar31._12_4_ = -(uint)(auVar30._12_4_ < fRam0000000146b473ec);
  iVar13 = movmskps((int)plVar26,auVar31);
  if (iVar13 == 0) {
    fVar63 = *pfVar20;
    fVar64 = pfVar20[1];
    fVar65 = pfVar20[2];
    fVar40 = pfVar20[3];
    fVar41 = *(float *)(lVar17 + 0x40);
    fVar50 = *(float *)(lVar17 + 0x44);
    fVar35 = *(float *)(lVar17 + 0x48);
    fVar37 = *(float *)(lVar17 + 0x4c);
    fVar32 = *(float *)(lVar17 + 0x50) * fVar4;
    fVar45 = *(float *)(lVar17 + 0x54) * fVar6;
    fVar47 = *(float *)(lVar17 + 0x58) * fVar8;
    fVar48 = *(float *)(lVar17 + 0x5c) * fVar9;
    fVar33 = fVar37 * fVar63 * _DAT_146b473c0 + fVar41 * fVar40 + fVar64 * fVar35 * _DAT_146b473b0 +
             fVar65 * fVar50 * _DAT_146b473a0;
    fVar38 = fVar35 * fVar63 * fRam0000000146b473c4 + fVar50 * fVar40 +
             fVar64 * fVar37 * fRam0000000146b473b4 + fVar65 * fVar41 * fRam0000000146b473a4;
    fVar36 = fVar50 * fVar63 * fRam0000000146b473c8 + fVar35 * fVar40 +
             fVar64 * fVar41 * fRam0000000146b473b8 + fVar65 * fVar37 * fRam0000000146b473a8;
    fVar39 = fVar41 * fVar63 * fRam0000000146b473cc + fVar37 * fVar40 +
             fVar64 * fVar50 * fRam0000000146b473bc + fVar65 * fVar35 * fRam0000000146b473ac;
    fVar50 = fVar47 * fVar64 - fVar45 * fVar65;
    fVar35 = fVar32 * fVar65 - fVar47 * fVar63;
    fVar37 = fVar45 * fVar63 - fVar32 * fVar64;
    fVar44 = fVar48 * fVar40 - fVar48 * fVar40;
    fVar50 = fVar50 + fVar50;
    fVar35 = fVar35 + fVar35;
    fVar37 = fVar37 + fVar37;
    fVar44 = fVar44 + fVar44;
    fVar41 = (fVar37 * fVar64 - fVar35 * fVar65) + fVar50 * fVar40 + fVar32 + pfVar20[4];
    fVar65 = (fVar50 * fVar65 - fVar37 * fVar63) + fVar35 * fVar40 + fVar45 + pfVar20[5];
    fVar63 = (fVar35 * fVar63 - fVar50 * fVar64) + fVar37 * fVar40 + fVar47 + pfVar20[6];
    fVar64 = (fVar44 * fVar40 - fVar44 * fVar40) + fVar44 * fVar40 + fVar48 + pfVar20[7];
  }
  else {
    fVar35 = *pfVar20;
    fVar37 = pfVar20[1];
    fVar44 = pfVar20[2];
    fVar32 = pfVar20[3];
    fVar42 = fVar37 + fVar37;
    fVar46 = fVar44 + fVar44;
    fVar45 = pfVar20[4];
    fVar47 = pfVar20[5];
    fVar48 = pfVar20[6];
    fVar49 = (fVar35 + fVar35) * fVar35;
    fVar43 = (fVar35 + fVar35) * fVar32;
    fVar33 = *(float *)(lVar17 + 0x40);
    fVar38 = *(float *)(lVar17 + 0x44);
    fVar36 = *(float *)(lVar17 + 0x48);
    fVar39 = *(float *)(lVar17 + 0x4c);
    fVar60 = (fVar46 * fVar32 + fVar42 * fVar35) * fVar4;
    fVar61 = (fVar43 + fVar46 * fVar37) * fVar6;
    fVar62 = (fVar42 * fVar32 + fVar46 * fVar35) * fVar8;
    fVar51 = fVar6 * (fVar42 * fVar35 - fVar46 * fVar32);
    fVar53 = fVar8 * (fVar46 * fVar37 - fVar43);
    fVar55 = fVar4 * (fVar46 * fVar35 - fVar42 * fVar32);
    fVar32 = (float)((uint)((_DAT_146b47380 - (fVar46 * fVar44 + fVar42 * fVar37)) * fVar4) &
                    _DAT_146b47390);
    fVar43 = (float)((uint)((fRam0000000146b47384 - (fVar46 * fVar44 + fVar49)) * fVar6) &
                    uRam0000000146b47394);
    fVar42 = (float)((uint)((fRam0000000146b47388 - (fVar42 * fVar37 + fVar49)) * fVar8) &
                    uRam0000000146b47398);
    fVar46 = (float)((uint)((fRam0000000146b4738c - (fVar49 + fVar49)) * fVar9) &
                    uRam0000000146b4739c);
    fVar35 = fVar38 + fVar38;
    fVar37 = fVar36 + fVar36;
    fVar49 = fVar33 * (fVar33 + fVar33);
    fVar44 = fVar39 * (fVar33 + fVar33);
    fVar57 = (fVar39 * fVar37 + fVar33 * fVar35) * fVar3;
    fVar58 = (fVar44 + fVar38 * fVar37) * fVar5;
    fVar59 = (fVar39 * fVar35 + fVar33 * fVar37) * fVar7;
    fVar52 = fVar5 * (fVar33 * fVar35 - fVar39 * fVar37);
    fVar54 = fVar7 * (fVar38 * fVar37 - fVar44);
    fVar56 = fVar3 * (fVar33 * fVar37 - fVar39 * fVar35);
    fVar33 = (float)((uint)((_DAT_146b47380 - (fVar36 * fVar37 + fVar38 * fVar35)) * fVar3) &
                    _DAT_146b47390);
    fVar36 = (float)((uint)((fRam0000000146b47384 - (fVar36 * fVar37 + fVar49)) * fVar5) &
                    uRam0000000146b47394);
    fVar38 = (float)((uint)((fRam0000000146b47388 - (fVar38 * fVar35 + fVar49)) * fVar7) &
                    uRam0000000146b47398);
    fVar39 = (float)((uint)((fRam0000000146b4738c - (fVar49 + fVar49)) * auVar1._12_4_) &
                    uRam0000000146b4739c);
    fVar35 = *(float *)(lVar17 + 0x50);
    fVar37 = *(float *)(lVar17 + 0x54);
    fVar44 = *(float *)(lVar17 + 0x58);
    local_158 = fVar57 * fVar51 + fVar33 * fVar32 + fVar56 * fVar62 + fVar39 * fVar45;
    fStack_154 = fVar57 * fVar43 + fVar33 * fVar60 + fVar56 * fVar53 + fVar39 * fVar47;
    fStack_150 = fVar57 * fVar61 + fVar33 * fVar55 + fVar56 * fVar42 + fVar39 * fVar48;
    fStack_14c = fVar57 * fVar46 + fVar33 * fVar46 + fVar56 * fVar46 + fVar39 * fRam0000000146b4738c
    ;
    local_148 = fVar36 * fVar51 + fVar52 * fVar32 + fVar58 * fVar62 + fVar39 * fVar45;
    fStack_144 = fVar36 * fVar43 + fVar52 * fVar60 + fVar58 * fVar53 + fVar39 * fVar47;
    fStack_140 = fVar36 * fVar61 + fVar52 * fVar55 + fVar58 * fVar42 + fVar39 * fVar48;
    fStack_13c = fVar36 * fVar46 + fVar52 * fVar46 + fVar58 * fVar46 + fVar39 * fRam0000000146b4738c
    ;
    local_138 = fVar54 * fVar51 + fVar59 * fVar32 + fVar38 * fVar62 + fVar39 * fVar45;
    fStack_134 = fVar54 * fVar43 + fVar59 * fVar60 + fVar38 * fVar53 + fVar39 * fVar47;
    fStack_130 = fVar54 * fVar61 + fVar59 * fVar55 + fVar38 * fVar42 + fVar39 * fVar48;
    fStack_12c = fVar54 * fVar46 + fVar59 * fVar46 + fVar38 * fVar46 + fVar39 * fRam0000000146b4738c
    ;
    local_128 = fVar37 * fVar51 + fVar35 * fVar32 + fVar44 * fVar62 + fRam0000000146b4738c * fVar45;
    fStack_124 = fVar37 * fVar43 + fVar35 * fVar60 + fVar44 * fVar53 + fRam0000000146b4738c * fVar47
    ;
    fStack_120 = fVar37 * fVar61 + fVar35 * fVar55 + fVar44 * fVar42 + fRam0000000146b4738c * fVar48
    ;
    fStack_11c = fVar37 * fVar46 + fVar35 * fVar46 + fVar44 * fVar46 +
                 fRam0000000146b4738c * fRam0000000146b4738c;
    FMatrix::RemoveScaling(&local_158);
    fVar63 = (float)(-(uint)(fVar40 <= fVar3 * fVar4) & (_DAT_146b473d0 ^ (uint)fVar63) ^
                    _DAT_146b473d0);
    fVar64 = (float)(-(uint)(fVar41 <= fVar5 * fVar6) & (uRam0000000146b473d4 ^ (uint)fVar64) ^
                    uRam0000000146b473d4);
    fVar65 = (float)(-(uint)(fVar50 <= fVar7 * fVar8) & (uRam0000000146b473d8 ^ (uint)fVar65) ^
                    uRam0000000146b473d8);
    local_158 = local_158 * fVar63;
    fStack_154 = fStack_154 * fVar63;
    fStack_150 = fStack_150 * fVar63;
    fStack_144 = fStack_144 * fVar64;
    fStack_140 = fStack_140 * fVar64;
    local_148 = local_148 * fVar64;
    fStack_134 = fStack_134 * fVar65;
    fStack_130 = fStack_130 * fVar65;
    local_138 = local_138 * fVar65;
    FQuat::FQuat(&local_178,&local_158);
    local_res8 = CONCAT44(local_res8._4_4_,0x322bcc77);
    auVar34._0_4_ = (float)local_178 * (float)local_178 + (float)uStack_170 * (float)uStack_170;
    auVar34._4_4_ = local_178._4_4_ * local_178._4_4_ + uStack_170._4_4_ * uStack_170._4_4_;
    auVar34._8_4_ = (float)uStack_170 * (float)uStack_170 + (float)local_178 * (float)local_178;
    auVar34._12_4_ = uStack_170._4_4_ * uStack_170._4_4_ + local_178._4_4_ * local_178._4_4_;
    fVar50 = auVar34._4_4_ + auVar34._0_4_;
    fVar35 = auVar34._8_4_ + auVar34._4_4_;
    fVar37 = auVar34._12_4_ + auVar34._8_4_;
    fVar44 = auVar34._0_4_ + auVar34._12_4_;
    auVar30._4_4_ = fVar35;
    auVar30._0_4_ = fVar50;
    auVar30._8_4_ = fVar37;
    auVar30._12_4_ = fVar44;
    auVar30 = rsqrtps(auVar34,auVar30);
    fVar63 = auVar30._0_4_;
    fVar65 = auVar30._4_4_;
    fVar40 = auVar30._8_4_;
    fVar41 = auVar30._12_4_;
    fVar63 = (_DAT_146b47370 - fVar63 * fVar63 * fVar50 * _DAT_146b47370) * fVar63 + fVar63;
    fVar65 = (fRam0000000146b47374 - fVar65 * fVar65 * fVar35 * fRam0000000146b47374) * fVar65 +
             fVar65;
    fVar40 = (fRam0000000146b47378 - fVar40 * fVar40 * fVar37 * fRam0000000146b47378) * fVar40 +
             fVar40;
    fVar41 = (fRam0000000146b4737c - fVar41 * fVar41 * fVar44 * fRam0000000146b4737c) * fVar41 +
             fVar41;
    fVar64 = 0.0;
    fVar33 = (float)(((uint)(((_DAT_146b47370 - fVar63 * fVar63 * fVar50 * _DAT_146b47370) * fVar63
                             + fVar63) * (float)local_178) ^ _DAT_146b47360) &
                     -(uint)(1e-08 <= fVar50) ^ _DAT_146b47360);
    fVar38 = (float)(((uint)(((fRam0000000146b47374 -
                              fVar65 * fVar65 * fVar35 * fRam0000000146b47374) * fVar65 + fVar65) *
                            local_178._4_4_) ^ uRam0000000146b47364) & -(uint)(1e-08 <= fVar35) ^
                    uRam0000000146b47364);
    fVar36 = (float)(((uint)(((fRam0000000146b47378 -
                              fVar40 * fVar40 * fVar37 * fRam0000000146b47378) * fVar40 + fVar40) *
                            (float)uStack_170) ^ uRam0000000146b47368) & -(uint)(1e-08 <= fVar37) ^
                    uRam0000000146b47368);
    fVar39 = (float)(((uint)(((fRam0000000146b4737c -
                              fVar41 * fVar41 * fVar44 * fRam0000000146b4737c) * fVar41 + fVar41) *
                            uStack_170._4_4_) ^ uRam0000000146b4736c) & -(uint)(1e-08 <= fVar44) ^
                    uRam0000000146b4736c);
    fVar41 = local_128;
    fVar65 = fStack_124;
    fVar63 = fStack_120;
  }
  param_1[0x55] = CONCAT44(fVar65,fVar41);
  *(longlong *)((longlong)param_1 + 0x2b4) = CONCAT44(fVar65,fVar41);
  *(float *)(param_1 + 0x56) = fVar63;
  *(float *)((longlong)param_1 + 700) = fVar63;
  local_160 = fVar63;
  if (lVar16 != 0) {
    lVar17 = param_1[0x2d];
    local_118 = fVar33;
    fStack_114 = fVar38;
    fStack_110 = fVar36;
    fStack_10c = fVar39;
    FQuat::Rotator(&local_118,local_e8);
    local_168 = CONCAT44(fVar65,fVar41);
    pwVar21 = pwVar27;
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      pwVar21 = (wchar_t *)param_1[4];
    }
    in_stack_fffffffffffffe68 = param_1;
    local_160 = fVar63;
    plVar26 = (longlong *)FUN_1430410e0(pwVar21,lVar16,&local_168,local_e8,param_1,lVar17,0);
    if (plVar26 != (longlong *)0x0) {
      if (param_1[0x60] == 0) {
        local_168 = *(undefined8 *)(param_1[0x15] + 0x130);
        local_160 = (float)*(undefined8 *)(param_1[0x15] + 0x138);
        uStack_170 = CONCAT44(uStack_170._4_4_,local_160);
        (**(code **)(*plVar26 + 0x3f8))(plVar26,&local_168);
      }
      else {
        FUN_142397000(plVar26,0,0,1);
        in_stack_fffffffffffffe68 =
             (longlong *)((ulonglong)in_stack_fffffffffffffe68 & 0xffffffffffffff00);
        FUN_142398770(plVar26,param_1[0x15] + 0x110,0,0,in_stack_fffffffffffffe68);
        FUN_142382f60(plVar26,param_1[0x60],&DAT_146af29ec,*(undefined8 *)(param_1[0x15] + 0x100));
      }
      uStack_170 = uStack_170 & 0xffffffff00000000;
      local_178 = FUN_143055020;
      pwVar21 = _guard_xfg_dispatch_icall_nop(L"&ULightProjectile::OnParticleSystemFinished",L"::");
      while (pwVar15 = pwVar21, pwVar15 != (wchar_t *)0x0) {
        pwVar21 = _guard_xfg_dispatch_icall_nop(pwVar15 + 1,L"::");
        pwVar27 = pwVar15;
      }
      FName::FName(&local_res8,pwVar27 + 2,1);
      FUN_1407260e0(plVar26 + 0x115,param_1,&local_178,local_res8);
      iVar13 = (int)param_1[99];
      *(int *)(param_1 + 99) = iVar13 + 1;
      if (*(int *)((longlong)param_1 + 0x31c) < iVar13 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x62,iVar13);
      }
      *(longlong **)(param_1[0x62] + (longlong)iVar13 * 8) = plVar26;
      FUN_1425fcab0(plVar26,1);
    }
  }
  lVar17 = DAT_1468536c8;
  if ((((*(longlong *)(param_1[0x15] + 0x2c0) != 0) && (DAT_1468536c6 == '\0')) &&
      (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    uVar22 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_14059ce50(lVar17 + 8,&local_res8,uVar22,0);
    if (local_res8 != 0) {
      local_118 = fVar33;
      fStack_114 = fVar38;
      fStack_110 = fVar36;
      fStack_10c = fVar39;
      local_108 = fVar41;
      fStack_104 = fVar65;
      fStack_100 = fVar63;
      fStack_fc = fVar64;
      local_f8 = fVar3 * fVar4;
      fStack_f4 = fVar5 * fVar6;
      fStack_f0 = fVar7 * fVar8;
      fStack_ec = auVar1._12_4_ * fVar9;
      FUN_1405aac00(local_res8,&local_118,0x3f800000);
      local_178 = (code *)0x0;
      uStack_170 = 0;
      lVar17 = FUN_1405a2d20(local_res8,&local_118,*(undefined8 *)(param_1[0x15] + 0x2c0),0,
                             (ulonglong)in_stack_fffffffffffffe68 & 0xffffffff00000000,&local_178);
      FUN_1405913a0(param_1 + 0x68,lVar17);
      *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(lVar17 + 0x10);
      FUN_140591060(&local_118);
      if (local_178 != (code *)0x0) {
        FMemory::Free();
      }
      if (local_res8 != 0) {
        FUN_1405a53f0();
      }
    }
  }
  FUN_1405ac8f0(param_1 + 100,0,4);
  FUN_14303d3b0(param_1);
  uVar22 = *(undefined8 *)(param_1[0x15] + 800);
  *(longlong **)(param_1[0x15] + 800) = param_1;
  FUN_1430af170(param_1[0x15],param_1,param_1[0x38]);
  *(undefined8 *)(param_1[0x15] + 800) = uVar22;
  return;
}



// FUNCTION 143054730 FUN_143054730 body=18 status=ok
// SIG undefined FUN_143054730(void)

void FUN_143054730(longlong param_1)

{
  if ((*(byte *)(param_1 + 0xe4) & 1) != 0) {
    FUN_1430491b0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 143054750 FUN_143054750 body=56 status=ok
// SIG undefined FUN_143054750(void)

void FUN_143054750(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xe4) & 1) != 0) {
    iVar1 = (**(code **)(*param_2 + 0x4e8))(param_2);
    if (iVar1 == 0) {
      FUN_1430491b0(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 143054790 FUN_143054790 body=758 status=ok
// SIG undefined FUN_143054790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143054790(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int *piVar11;
  longlong *plVar12;
  bool bVar13;
  longlong local_res20;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  
  if (*(int *)(param_1 + 0x294) < *(int *)(param_1 + 0x28c)) {
    iVar6 = *(int *)(param_1 + 0x294) + 1;
    *(int *)(param_1 + 0x294) = iVar6;
    if (iVar6 == *(int *)(param_1 + 0x28c)) {
      if (*(char *)(param_1 + 0x298) == '\0') {
        *(undefined4 *)(param_1 + 0x1e4) = 0;
      }
      else {
        *(uint *)(param_1 + 0x1c8) = *(uint *)(param_1 + 0x1c8) & 0xfffffffd;
      }
      lVar9 = *(longlong *)(param_1 + 0x118);
      if (lVar9 != 0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGbxProjectileMovementComponent::OnHit",L"::");
        pwVar4 = (wchar_t *)0x0;
        while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar4 = pwVar3;
        }
        FName::FName(&local_res20,pwVar4 + 2,1);
        plVar12 = (longlong *)(lVar9 + 0x280);
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        FWeakObjectPtr::operator=(&local_38,param_1);
        local_30 = local_res20;
        if ((local_res20 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_38), lVar8 != 0)) {
          UObject::FindFunction(lVar8,local_30);
        }
        piVar1 = (int *)*plVar12;
        iVar6 = *(int *)(lVar9 + 0x288);
        for (piVar11 = piVar1; piVar11 != piVar1 + (longlong)iVar6 * 4; piVar11 = piVar11 + 4) {
          if ((((*piVar11 == (int)local_38) &&
               (local_38._4_4_ = (int)((ulonglong)local_38 >> 0x20),
               bVar13 = piVar11[1] == local_38._4_4_, bVar13)) ||
              ((cVar5 = FWeakObjectPtr::IsValid(piVar11), cVar5 == '\0' &&
               (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) &&
             (*(longlong *)(piVar11 + 2) == local_30)) {
            if ((int)((longlong)piVar11 - (longlong)piVar1 >> 4) != -1) goto LAB_143054931;
            break;
          }
        }
        iVar6 = *(int *)(lVar9 + 0x288);
        *(int *)(lVar9 + 0x288) = iVar6 + 1;
        if (*(int *)(lVar9 + 0x28c) < iVar6 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar6);
        }
        puVar10 = (undefined4 *)((longlong)iVar6 * 0x10 + *plVar12);
        *puVar10 = (int)local_38;
        puVar10[1] = local_38._4_4_;
        *(longlong *)(puVar10 + 2) = local_30;
LAB_143054931:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
      }
    }
    if ((*(char *)(param_1 + 0x2a4) != '\0') && (lVar9 = *(longlong *)(param_1 + 0x278), lVar9 != 0)
       ) {
      local_48 = *(undefined8 *)(param_2 + 0x20);
      lVar8 = lVar9;
      if (*(longlong *)(lVar9 + 0x150) != 0) {
        lVar8 = *(longlong *)(lVar9 + 0x150);
      }
      local_40 = *(undefined4 *)(param_2 + 0x28);
      uVar2 = *(undefined8 *)(*(longlong *)(lVar9 + 0x10) + 0x18);
      lVar9 = *(longlong *)(param_1 + 0x120);
      if (lVar9 == 0) {
        lVar9 = FUN_1423407b0(param_1);
      }
      FUN_142c264a0(lVar9,&local_48,*(undefined4 *)(param_1 + 0x2a8),lVar8,
                    *(undefined4 *)(param_1 + 0x2ac),uVar2);
    }
    if ((*(char *)(param_1 + 0x2b0) != '\0') && (lVar9 = *(longlong *)(param_1 + 0x278), lVar9 != 0)
       ) {
      lVar8 = lVar9;
      if (*(longlong *)(lVar9 + 0x150) != 0) {
        lVar8 = *(longlong *)(lVar9 + 0x150);
      }
      lVar9 = *(longlong *)(lVar9 + 0x168);
      if (lVar9 == 0) {
        local_48 = _DAT_1468b5d90;
        local_40 = DAT_1468b5d98;
      }
      else {
        local_48 = *(undefined8 *)(lVar9 + 0x220);
        local_40 = *(undefined4 *)(lVar9 + 0x228);
      }
      local_30 = CONCAT44(local_30._4_4_,local_40);
      lVar9 = *(longlong *)(param_1 + 0x120);
      local_38 = local_48;
      if (lVar9 == 0) {
        lVar9 = FUN_1423407b0(param_1);
      }
      FUN_142d4dc40(lVar9,&local_38,lVar8,0);
    }
  }
  return;
}



// FUNCTION 143054a90 FUN_143054a90 body=298 status=ok
// SIG undefined FUN_143054a90(void)

void FUN_143054a90(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar3 = param_1[0x15];
  if (lVar3 != 0) {
    lVar4 = param_1[0x2e];
    if ((lVar4 != 0) || (lVar4 = *(longlong *)(lVar3 + 0xd0), lVar4 != 0)) {
      lVar2 = (**(code **)(*param_1 + 0x148))();
      if (*(float *)(lVar3 + 0x140) + *(float *)((longlong)param_1 + 0x23c) <
          *(float *)(lVar2 + 0x790)) {
        lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar3 = param_1[0x28];
        *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)(lVar2 + 0x790);
        if ((lVar3 == 0) && ((*(uint *)(param_1 + 1) >> 4 & 1) == 0)) {
          lVar3 = param_1[4];
        }
        FUN_142d68ea0(lVar4,lVar3,param_2,0,&DAT_1466ad4f0,0);
      }
    }
    uVar1 = *(undefined8 *)(param_1[0x15] + 800);
    *(longlong **)(param_1[0x15] + 800) = param_1;
    local_18 = *param_3;
    local_10 = *(undefined4 *)(param_3 + 1);
    FUN_1430af6b0(param_1[0x15],param_1,param_2,&local_18);
    *(undefined8 *)(param_1[0x15] + 800) = uVar1;
  }
  return;
}



// FUNCTION 143054bc0 FUN_143054bc0 body=110 status=ok
// SIG undefined FUN_143054bc0(void)

void FUN_143054bc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_3 + 0x2b0) != 0) && ((*(byte *)(param_3 + 0x214) & 2) == 0)) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 800);
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 800) = param_1;
    FUN_1430af200(*(undefined8 *)(param_1 + 0xa8),param_1,param_2,*(byte *)(param_3 + 0x214) & 1);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 800) = uVar1;
  }
  return;
}



// FUNCTION 143054c30 FUN_143054c30 body=499 status=ok
// SIG undefined FUN_143054c30(void)

void FUN_143054c30(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 local_res8;
  byte *in_stack_00000028;
  byte local_98;
  undefined2 local_97;
  undefined1 local_95;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((0 < *(int *)(param_1 + 0x294)) &&
     ((*(float *)(param_1 + 0x1e4) == 0.0 || ((*(byte *)(param_1 + 0x1c8) & 2) == 0)))) {
    local_97 = 0;
    local_95 = 0;
    local_1c = 0;
    local_8c = *(undefined4 *)(in_stack_00000028 + 0xc);
    local_98 = *in_stack_00000028 & 3;
    local_88 = *(undefined4 *)(in_stack_00000028 + 0x10);
    local_94 = *(undefined4 *)(in_stack_00000028 + 4);
    local_84 = *(undefined8 *)(in_stack_00000028 + 0x14);
    local_90 = *(uint *)(in_stack_00000028 + 8) & 1;
    local_7c = *(undefined4 *)(in_stack_00000028 + 0x1c);
    local_78 = *(undefined8 *)(in_stack_00000028 + 0x20);
    local_70 = *(undefined4 *)(in_stack_00000028 + 0x28);
    local_64 = *(undefined4 *)(in_stack_00000028 + 0x34);
    local_58 = *(undefined4 *)(in_stack_00000028 + 0x40);
    local_4c = *(undefined4 *)(in_stack_00000028 + 0x4c);
    local_40 = *(undefined4 *)(in_stack_00000028 + 0x58);
    local_38 = *(undefined4 *)(in_stack_00000028 + 0x60);
    local_34 = *(undefined4 *)(in_stack_00000028 + 100);
    local_30 = *(undefined4 *)(in_stack_00000028 + 0x68);
    local_2c = *(undefined4 *)(in_stack_00000028 + 0x6c);
    local_6c = *(undefined8 *)(in_stack_00000028 + 0x2c);
    local_28 = *(undefined4 *)(in_stack_00000028 + 0x70);
    local_60 = *(undefined8 *)(in_stack_00000028 + 0x38);
    local_24 = *(undefined4 *)(in_stack_00000028 + 0x74);
    local_54 = *(undefined8 *)(in_stack_00000028 + 0x44);
    local_20 = *(undefined4 *)(in_stack_00000028 + 0x78);
    local_18 = *(undefined8 *)(in_stack_00000028 + 0x80);
    local_48 = *(undefined8 *)(in_stack_00000028 + 0x50);
    local_10 = *(undefined8 *)(in_stack_00000028 + 0x88);
    local_3c = *(undefined4 *)(in_stack_00000028 + 0x5c);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 600,&local_98);
    lVar1 = *(longlong *)(param_1 + 0x118);
    if (lVar1 != 0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGbxProjectileMovementComponent::OnHit",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 0x280,param_1,local_res8);
    }
    if ((*(char *)(param_1 + 0x298) == '\0') &&
       (*(float *)(param_1 + 0x1e8) <= 0.75 && *(float *)(param_1 + 0x1e8) != 0.75)) {
      *(undefined4 *)(param_1 + 0x1e8) = 0x3f400000;
    }
  }
  return;
}



// FUNCTION 143054e30 FUN_143054e30 body=455 status=ok
// SIG undefined FUN_143054e30(void)

void FUN_143054e30(longlong *param_1,byte *param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((param_1[0x15] != 0) && ((*param_2 & 1) != 0)) {
    if (param_3 == '\0') {
      if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
        lVar3 = param_1[4];
      }
      else {
        lVar3 = 0;
      }
      if (*(char *)(lVar3 + 0x128) == '\x03') {
        *(char *)(param_1 + 0x42) = param_4;
        *(undefined8 *)((longlong)param_1 + 0x214) = *(undefined8 *)(param_2 + 0x20);
        *(undefined4 *)((longlong)param_1 + 0x21c) = *(undefined4 *)(param_2 + 0x28);
        (**(code **)(*param_1 + 0x260))();
      }
    }
    if ((param_4 != '\0') &&
       ((lVar3 = param_1[0x2e], lVar3 != 0 ||
        ((param_1[0x15] != 0 && (lVar3 = *(longlong *)(param_1[0x15] + 0xd0), lVar3 != 0)))))) {
      lVar6 = param_1[0x28];
      if ((lVar6 == 0) && ((*(uint *)(param_1 + 1) >> 4 & 1) == 0)) {
        lVar6 = param_1[4];
      }
      FUN_142d68ea0(lVar3,lVar6,param_2,0,&DAT_1466ad4f0,0);
    }
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    uVar2 = FWeakObjectPtr::Get(param_2 + 0x6c);
    if (param_1[0x8d] != 0) {
      lVar3 = FWeakObjectPtr::Get(param_1 + 0x8c);
      if (lVar3 != 0) {
        lVar3 = UObject::FindFunction(lVar3,param_1[0x8d]);
        if (lVar3 != 0) {
          local_38 = uVar2;
          local_30 = uVar5;
          local_28 = uVar1;
          plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x8c);
          uVar5 = FUN_14178ac60(plVar4,param_1[0x8d]);
          (**(code **)(*plVar4 + 0x208))(plVar4,uVar5,&local_38);
        }
      }
    }
    uVar5 = *(undefined8 *)(param_1[0x15] + 800);
    *(longlong **)(param_1[0x15] + 800) = param_1;
    FUN_1430af3b0(param_1[0x15],param_1,param_2);
    *(undefined8 *)(param_1[0x15] + 800) = uVar5;
  }
  return;
}



// FUNCTION 143055000 thunk_FUN_1430593b0 body=5 status=ok
// SIG undefined thunk_FUN_1430593b0(void)

void thunk_FUN_1430593b0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  
  uVar5 = 0;
  if (0 < (int)param_1[0x90]) {
    lVar6 = param_1[0x8f];
    uVar4 = uVar5;
    uVar11 = uVar5;
    while (iVar10 = (int)uVar11, *(longlong **)(lVar6 + uVar4 * 8) != param_2) {
      uVar11 = (ulonglong)(iVar10 + 1);
      uVar4 = uVar4 + 1;
      if ((longlong)(int)param_1[0x90] <= (longlong)uVar4) {
        return;
      }
    }
    iVar8 = (int)param_1[0x90];
    iVar2 = (iVar8 - iVar10) + -1;
    if (0 < iVar2) {
      iVar2 = 1;
    }
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + (longlong)iVar10 * 8),
                 (void *)(lVar6 + (longlong)(iVar8 - iVar2) * 8),(longlong)iVar2 << 3);
      iVar8 = (int)param_1[0x90];
    }
    *(int *)(param_1 + 0x90) = iVar8 + -1;
    if (param_2 != (longlong *)0x0) {
      iVar10 = *(int *)((longlong)param_2 + 0xc);
      if (iVar10 < (int)DAT_1469e91c4) {
        uVar9 = iVar10 >> 0x1f & 0xffff;
        uVar3 = iVar10 + uVar9;
        uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
      }
      if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) {
        *(byte *)((longlong)param_2 + 0x719) = *(byte *)((longlong)param_2 + 0x719) & 0xfb;
        (**(code **)(*param_2 + 0x418))(param_2,&DAT_146532190);
        FUN_142359580(param_2);
        *(undefined4 *)(param_2 + 0xe7) = 0;
        if (*(int *)((longlong)param_2 + 0x73c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xe6,0);
        }
        *(undefined4 *)(param_2 + 0xe9) = 0;
        if (*(int *)((longlong)param_2 + 0x74c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xe8,0);
        }
        *(undefined4 *)(param_2 + 0xeb) = 0;
        if (*(int *)((longlong)param_2 + 0x75c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xea,0);
        }
        *(undefined4 *)(param_2 + 0xed) = 0;
        if (*(int *)((longlong)param_2 + 0x76c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xec,0);
        }
        *(byte *)(param_2 + 0xe3) = *(byte *)(param_2 + 0xe3) & 0xdf;
        *(undefined4 *)(param_2 + 0xe5) = 0;
        if (0x7fffffff < *(uint *)((longlong)param_2 + 0x72c)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::
          ResizeTo(param_2 + 0xe4,0);
        }
        FUN_1423971c0(param_2,0x7f7fffff);
        lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        iVar10 = (int)param_1[0x92];
        uVar1 = *(undefined4 *)(lVar6 + 0x790);
        *(int *)(param_1 + 0x92) = iVar10 + 1;
        if (*(int *)((longlong)param_1 + 0x494) < iVar10 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x91,iVar10);
        }
        puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + param_1[0x91]);
        *(undefined4 *)(puVar7 + 1) = uVar1;
        *puVar7 = param_2;
      }
    }
  }
  return;
}



// FUNCTION 143055010 thunk_FUN_1430595b0 body=5 status=ok
// SIG undefined thunk_FUN_1430595b0(void)

void thunk_FUN_1430595b0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  
  uVar5 = 0;
  if (0 < (int)param_1[0x95]) {
    lVar6 = param_1[0x94];
    uVar4 = uVar5;
    uVar11 = uVar5;
    while (iVar10 = (int)uVar11, *(longlong **)(lVar6 + uVar4 * 8) != param_2) {
      uVar11 = (ulonglong)(iVar10 + 1);
      uVar4 = uVar4 + 1;
      if ((longlong)(int)param_1[0x95] <= (longlong)uVar4) {
        return;
      }
    }
    iVar8 = (int)param_1[0x95];
    iVar2 = (iVar8 - iVar10) + -1;
    if (0 < iVar2) {
      iVar2 = 1;
    }
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + (longlong)iVar10 * 8),
                 (void *)(lVar6 + (longlong)(iVar8 - iVar2) * 8),(longlong)iVar2 << 3);
      iVar8 = (int)param_1[0x95];
    }
    *(int *)(param_1 + 0x95) = iVar8 + -1;
    if (param_2 != (longlong *)0x0) {
      iVar10 = *(int *)((longlong)param_2 + 0xc);
      if (iVar10 < (int)DAT_1469e91c4) {
        uVar9 = iVar10 >> 0x1f & 0xffff;
        uVar3 = iVar10 + uVar9;
        uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
      }
      if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) {
        *(byte *)((longlong)param_2 + 0x719) = *(byte *)((longlong)param_2 + 0x719) & 0xfb;
        (**(code **)(*param_2 + 0x418))(param_2,&DAT_146532190);
        FUN_142359580(param_2);
        *(undefined4 *)(param_2 + 0xe7) = 0;
        if (*(int *)((longlong)param_2 + 0x73c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xe6,0);
        }
        *(undefined4 *)(param_2 + 0xe9) = 0;
        if (*(int *)((longlong)param_2 + 0x74c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xe8,0);
        }
        *(undefined4 *)(param_2 + 0xeb) = 0;
        if (*(int *)((longlong)param_2 + 0x75c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xea,0);
        }
        *(undefined4 *)(param_2 + 0xed) = 0;
        if (*(int *)((longlong)param_2 + 0x76c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xec,0);
        }
        *(byte *)(param_2 + 0xe3) = *(byte *)(param_2 + 0xe3) & 0xdf;
        *(undefined4 *)(param_2 + 0xe5) = 0;
        if (0x7fffffff < *(uint *)((longlong)param_2 + 0x72c)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::
          ResizeTo(param_2 + 0xe4,0);
        }
        FUN_1423971c0(param_2,0x7f7fffff);
        lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        iVar10 = (int)param_1[0x97];
        uVar1 = *(undefined4 *)(lVar6 + 0x790);
        *(int *)(param_1 + 0x97) = iVar10 + 1;
        if (*(int *)((longlong)param_1 + 0x4bc) < iVar10 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x96,iVar10);
        }
        puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + param_1[0x96]);
        *(undefined4 *)(puVar7 + 1) = uVar1;
        *puVar7 = param_2;
      }
    }
  }
  return;
}



// FUNCTION 143055020 FUN_143055020 body=57 status=ok
// SIG undefined FUN_143055020(void)

void FUN_143055020(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (FUN_143060d10(), param_2 == *(longlong *)(param_1 + 0x308))) {
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  return;
}



// FUNCTION 143055150 FUN_143055150 body=358 status=ok
// SIG undefined FUN_143055150(void)

void FUN_143055150(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  byte local_98 [12];
  undefined4 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_2c [36];
  
  if ((param_1[0x15] == 0) ||
     (*(float *)((longlong)param_1 + 0x224) < *(float *)((longlong)param_1 + 0x234))) {
    if ((*(float *)((longlong)param_1 + 0x204) == 0.0) &&
       ((*(float *)(param_1 + 0x41) == 0.0 && (*(float *)((longlong)param_1 + 0x20c) == 0.0)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x80;
    }
    *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xffffff7f;
    *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) | uVar1;
  }
  else {
    *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xffffff7f;
    if (((*(byte *)((longlong)param_1 + 0xe4) & 4) == 0) &&
       (((*(float *)((longlong)param_1 + 0x204) != 0.0 || (*(float *)(param_1 + 0x41) != 0.0)) ||
        (*(float *)((longlong)param_1 + 0x20c) != 0.0)))) {
      _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
      local_8c = 0x3f800000;
      if ((char)param_1[0x40] == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = FWeakObjectPtr::Get(param_1 + 0x4c);
      }
      FWeakObjectPtr::operator=(local_2c,uVar2);
      local_84 = *(undefined8 *)((longlong)param_1 + 0x204);
      local_98[0] = local_98[0] ^ (*(byte *)(param_1 + 0x40) ^ local_98[0]) & 1;
      local_7c = *(undefined4 *)((longlong)param_1 + 0x20c);
      local_58 = DAT_1464aa7a0;
      local_64 = DAT_1464aa7a0;
      local_60 = DAT_1464aa798;
      local_6c = DAT_1464aa798;
      local_78 = local_84;
      local_70 = local_7c;
      (**(code **)(*param_1 + 0x308))(param_1,local_98);
      return;
    }
  }
  return;
}



// FUNCTION 1430552c0 FUN_1430552c0 body=1148 status=ok
// SIG undefined FUN_1430552c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430552c0(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined1 local_1d8 [8];
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined1 local_1a8 [32];
  undefined1 local_188 [12];
  undefined4 local_17c;
  undefined1 local_114 [28];
  undefined1 local_f8 [16];
  undefined1 local_e8;
  undefined1 local_e4;
  undefined1 local_dc;
  longlong local_b0;
  longlong local_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  if ((param_1[0x15] == 0) ||
     (*(float *)((longlong)param_1 + 0x224) < *(float *)((longlong)param_1 + 0x234))) {
    if ((DAT_1468b5d90 == *(float *)((longlong)param_1 + 0x214)) &&
       ((DAT_1468b5d94 == *(float *)(param_1 + 0x43) &&
        (DAT_1468b5d98 == *(float *)((longlong)param_1 + 0x21c))))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0x100;
    }
    *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xfffffeff;
    *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) | uVar5;
  }
  else {
    *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xfffffeff;
    local_1d0 = *(float *)((longlong)param_1 + 0x214);
    if (((local_1d0 != DAT_1468b5d90) || (DAT_1468b5d94 != *(float *)(param_1 + 0x43))) ||
       (DAT_1468b5d98 != *(float *)((longlong)param_1 + 0x21c))) {
      fVar9 = *(float *)(param_1 + 0x5b) - local_1d0;
      local_1b8 = *(float *)((longlong)param_1 + 0x21c);
      fVar11 = *(float *)(param_1 + 0x5c) - local_1b8;
      local_1bc = *(float *)(param_1 + 0x43);
      fVar13 = *(float *)((longlong)param_1 + 0x2dc) - local_1bc;
      fVar6 = fVar9 * fVar9 + fVar13 * fVar13 + fVar11 * fVar11;
      fVar10 = fVar9;
      fVar12 = fVar11;
      fVar7 = fVar13;
      if ((fVar6 != 1.0) &&
         (fVar10 = DAT_1468b5d90, fVar12 = DAT_1468b5d98, fVar7 = DAT_1468b5d94, 1e-08 <= fVar6)) {
        auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar7 = auVar8._0_4_;
        fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
        fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
        fVar10 = fVar9 * fVar7;
        fVar12 = fVar11 * fVar7;
        fVar7 = fVar13 * fVar7;
      }
      local_1c8 = local_1b8 - fVar12 * 32.0;
      local_1b8 = local_1b8 + fVar12 * 32.0;
      local_1cc = local_1bc - fVar7 * 32.0;
      local_1bc = local_1bc + fVar7 * 32.0;
      local_1c0 = fVar10 * 32.0 + local_1d0;
      local_1d0 = local_1d0 - fVar10 * 32.0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b477d0) && (_Init_thread_header(), DAT_146b477d0 == -1)) {
        FName::FName(&DAT_146b477c8,L"LightProjectileImpactTrace",1);
        _Init_thread_footer();
      }
      if ((*(byte *)(param_1[0x15] + 0x1a9) & 1) == 0) {
        local_1f8 = 0;
      }
      else {
        local_1f8 = param_1[0x28];
      }
      FUN_1422ffb20(local_f8,DAT_146b477c8,local_1d8,1);
      local_e8 = 1;
      local_e4 = 1;
      if ((((*(uint *)((longlong)param_1 + 0xe4) & 0x10000) == 0) && (param_1[0x29] != 0)) &&
         (param_1[0x29] != param_1[0x28])) {
        FCollisionQueryParams::AddIgnoredActor(local_f8);
      }
      FUN_1426d3dd0(local_1a8);
      FUN_1426ea8d0(local_1a8,2);
      if (*(int *)((longlong)param_1 + 0x24c) != 0x20) {
        FUN_1426eac10(local_1a8,*(int *)((longlong)param_1 + 0x24c),1);
        local_dc = (undefined1)param_1[0x4a];
      }
      _guard_xfg_dispatch_icall_nop(local_188,0,0x90);
      local_17c = 0x3f800000;
      bVar1 = *(byte *)(param_1[0x15] + 0x18c);
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      local_1e8 = local_1a8;
      local_1f0 = local_f8;
      local_1f8 = CONCAT44(local_1f8._4_4_,(uint)bVar1);
      cVar2 = UWorld::LineTraceSingleByChannel(uVar3,local_188,&local_1c0,&local_1d0);
      if ((cVar2 != '\0') && (lVar4 = FWeakObjectPtr::Get(local_114), lVar4 != 0)) {
        (**(code **)(*param_1 + 0x3b0))(param_1,local_188,0,(char)param_1[0x42]);
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
      if (local_b0 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 143055740 FUN_143055740 body=1054 status=ok
// SIG undefined FUN_143055740(void)

void FUN_143055740(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  ushort uVar9;
  longlong lVar10;
  uint uVar11;
  byte local_98 [12];
  undefined4 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_2c [36];
  
  if ((char)param_1[0x21] == *(char *)((longlong)param_1 + 0xea)) {
    if (param_1[0x15] != 0) {
      uVar9 = *(ushort *)(param_1 + 0x30);
      bVar3 = (byte)uVar9 >> 1 & 1;
      bVar8 = (byte)*(ushort *)(param_1 + 0x1d) >> 1 & 1;
      if (bVar3 != bVar8) {
        if (bVar3 == 0) {
          if (bVar8 != 0) {
            *(ushort *)(param_1 + 0x1d) = *(ushort *)(param_1 + 0x1d) & 0xfffd;
            if ((uVar9 & 2) != 0) {
              if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
                lVar7 = param_1[4];
              }
              else {
                lVar7 = 0;
              }
              if (*(char *)(lVar7 + 0x128) == '\x03') {
                *(ushort *)(param_1 + 0x30) = uVar9 & 0xfffd;
                (**(code **)(*param_1 + 0x260))(param_1);
              }
            }
          }
        }
        else {
          FUN_143048530(param_1);
        }
      }
      uVar9 = *(ushort *)(param_1 + 0x1d);
      bVar3 = (byte)((ushort)(short)param_1[0x30] >> 9) & 1;
      if (((byte)(uVar9 >> 9) & 1) != bVar3) {
        if (bVar3 == 0) {
          uVar9 = uVar9 & 0xfdff;
        }
        else {
          uVar9 = uVar9 | 0x200;
        }
        *(ushort *)(param_1 + 0x1d) = uVar9;
      }
      if ((char)param_1[0x1c] != *(char *)((longlong)param_1 + 0x182)) {
        *(char *)(param_1 + 0x1c) = *(char *)((longlong)param_1 + 0x182);
        (**(code **)(*param_1 + 0x3c0))(param_1);
      }
    }
  }
  else if (param_1[0x22] != 0) {
    lVar5 = FUN_1430aef40();
    lVar7 = param_1[0x22];
    lVar10 = lVar7;
    if (lVar7 != 0) {
      while (lVar10 != lVar5) {
        lVar10 = *(longlong *)(lVar10 + 0x30);
        if (lVar10 == 0) {
          return;
        }
      }
      if (lVar7 != 0) {
        *(char *)((longlong)param_1 + 0xea) = (char)param_1[0x21];
        (**(code **)(*param_1 + 0x2d8))(param_1);
        (**(code **)(*param_1 + 0x290))(param_1);
        uVar2 = *(uint *)((longlong)param_1 + 0xe4);
        uVar6 = 0;
        uVar11 = 0;
        if ((uVar2 & 0x40) != 0) {
          if ((param_1[0x15] == 0) || ((uVar2 & 1) == 0)) {
            if ((param_1[0x38] != 0) || (uVar4 = uVar11, param_1[0x39] != 0)) {
              uVar4 = 0x40;
            }
            *(uint *)((longlong)param_1 + 0xe4) = uVar2 & 0xffffffbf | uVar4;
          }
          else {
            *(uint *)((longlong)param_1 + 0xe4) = uVar2 & 0xffffffbf;
            if ((((uVar2 & 0x20) != 0) ||
                ((char)param_1[0x44] != *(char *)((longlong)param_1 + 0xeb))) ||
               ((char)param_1[0x44] != (char)param_1[0x21])) {
              if ((param_1[0x38] == 0) && (param_1[0x39] == 0)) {
                if ((uVar2 & 0x10) != 0) {
                  FUN_14305abd0(param_1);
                }
              }
              else if ((uVar2 & 0x10) == 0) {
                (**(code **)(*param_1 + 0x378))();
              }
              else {
                FUN_14303d3b0(param_1);
              }
            }
          }
        }
        uVar2 = *(uint *)((longlong)param_1 + 0xe4);
        if ((char)uVar2 < '\0') {
          if ((param_1[0x15] == 0) ||
             (*(float *)((longlong)param_1 + 0x224) < *(float *)((longlong)param_1 + 0x234))) {
            if ((*(float *)((longlong)param_1 + 0x204) != 0.0) ||
               ((*(float *)(param_1 + 0x41) != 0.0 || (*(float *)((longlong)param_1 + 0x20c) != 0.0)
                ))) {
              uVar11 = 0x80;
            }
            *(uint *)((longlong)param_1 + 0xe4) = uVar2 & 0xffffff7f | uVar11;
          }
          else {
            *(uint *)((longlong)param_1 + 0xe4) = uVar2 & 0xffffff7f;
            if (((uVar2 & 4) == 0) &&
               (((*(float *)((longlong)param_1 + 0x204) != 0.0 ||
                 (*(float *)(param_1 + 0x41) != 0.0)) ||
                (*(float *)((longlong)param_1 + 0x20c) != 0.0)))) {
              _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
              local_8c = 0x3f800000;
              if ((char)param_1[0x40] != '\0') {
                uVar6 = FWeakObjectPtr::Get(param_1 + 0x4c);
              }
              FWeakObjectPtr::operator=(local_2c,uVar6);
              local_84 = *(undefined8 *)((longlong)param_1 + 0x204);
              local_98[0] = local_98[0] ^ (*(byte *)(param_1 + 0x40) ^ local_98[0]) & 1;
              local_7c = *(undefined4 *)((longlong)param_1 + 0x20c);
              local_58 = DAT_1464aa7a0;
              local_64 = DAT_1464aa7a0;
              local_60 = DAT_1464aa798;
              local_6c = DAT_1464aa798;
              local_78 = local_84;
              local_70 = local_7c;
              (**(code **)(*param_1 + 0x308))(param_1,local_98);
            }
          }
        }
        if ((*(uint *)((longlong)param_1 + 0xe4) & 0x100) != 0) {
          FUN_1430552c0(param_1);
        }
        cVar1 = (char)param_1[0x44];
        if ((cVar1 == (char)param_1[0x21]) && (cVar1 != *(char *)((longlong)param_1 + 0xeb))) {
          *(char *)((longlong)param_1 + 0xeb) = cVar1;
          if ((*(byte *)((longlong)param_1 + 0xe4) & 1) != 0) {
            lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
            if (*(float *)(lVar7 + 0x790) != *(float *)((longlong)param_1 + 0x224)) {
                    /* WARNING: Could not recover jumptable at 0x000143055a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_1 + 0x2a0))(param_1,1);
              return;
            }
          }
          *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) | 0x20;
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143055b70 FUN_143055b70 body=106 status=ok
// SIG undefined FUN_143055b70(void)

void FUN_143055b70(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (char)param_1[0x44];
  if ((cVar1 == (char)param_1[0x21]) && (cVar1 != *(char *)((longlong)param_1 + 0xeb))) {
    *(char *)((longlong)param_1 + 0xeb) = cVar1;
    if ((*(byte *)((longlong)param_1 + 0xe4) & 1) != 0) {
      lVar2 = (**(code **)(*param_1 + 0x148))();
      if (*(float *)(lVar2 + 0x790) != *(float *)((longlong)param_1 + 0x224)) {
                    /* WARNING: Could not recover jumptable at 0x000143055bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2a0))(param_1,1);
        return;
      }
    }
    *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) | 0x20;
  }
  return;
}



// FUNCTION 143055be0 FUN_143055be0 body=570 status=ok
// SIG undefined FUN_143055be0(void)

void FUN_143055be0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 local_res10 [2];
  longlong local_38 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b477f0) && (_Init_thread_header(&DAT_146b477f0), DAT_146b477f0 == -1))
  {
    FName::FName(&DAT_146b477e8,"LightProjectiles",1);
    _Init_thread_footer(&DAT_146b477f0);
  }
  if ((((param_2 != 0) && (param_1 != (longlong *)0x0)) &&
      (cVar2 = (**(code **)(*param_1 + 0x740))(param_1,&DAT_146b477e8), cVar2 != '\0')) &&
     (lVar3 = FUN_14304ca20(DAT_146b19a68), lVar3 != 0)) {
    param_2 = param_2 + 0x98;
    local_res10[0] = 0;
    FString::PrintfImpl(local_38,L"Active Particles: %d",*(undefined4 *)(lVar3 + 0x4a8));
    FUN_1428a6fb0(param_2,local_38,local_res10);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    FDisplayDebugManager::SetDrawColor(param_2,&DAT_1464aa744);
    local_res10[0] = 0;
    FString::PrintfImpl(local_38,L"Active Projectiles: %d Batches: %d",
                        *(undefined4 *)(lVar3 + 0x460),*(undefined4 *)(lVar3 + 0x478));
    FUN_1428a6fb0(param_2,local_38,local_res10);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    iVar5 = 0;
    if (0 < *(int *)(lVar3 + 0x478)) {
      lVar6 = 0;
      do {
        puVar4 = &DAT_1464aa738;
        lVar1 = *(longlong *)(lVar6 + *(longlong *)(lVar3 + 0x470));
        if (*(char *)(lVar1 + 0x3f) != '\0') {
          puVar4 = &DAT_1464aa73c;
        }
        FDisplayDebugManager::SetDrawColor(param_2,puVar4);
        local_res10[0] = 0;
        FString::PrintfImpl(local_38,L"     Batch %d: Projectiles: %d Async: %d",iVar5,
                            *(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 4));
        FUN_1428a6fb0(param_2,local_38,local_res10);
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (iVar5 < *(int *)(lVar3 + 0x478));
    }
  }
  return;
}



// FUNCTION 143055e20 FUN_143055e20 body=188 status=ok
// SIG undefined FUN_143055e20(void)

void FUN_143055e20(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  AActor::OnSubobjectCreatedFromReplication();
  if (param_2 != 0) {
    lVar4 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar6 = (longlong *)(param_1 + 0x468);
      plVar2 = (longlong *)*plVar6;
      iVar1 = *(int *)(param_1 + 0x470);
      for (plVar5 = plVar2; plVar5 != plVar2 + iVar1; plVar5 = plVar5 + 1) {
        if (*plVar5 == param_2) {
          if ((int)((longlong)plVar5 - (longlong)plVar2 >> 3) != -1) {
            return;
          }
          break;
        }
      }
      *(int *)(param_1 + 0x470) = iVar1 + 1;
      if (*(int *)(param_1 + 0x474) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
      }
      *(longlong *)(*plVar6 + (longlong)iVar1 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 143055ee0 FUN_143055ee0 body=188 status=ok
// SIG undefined FUN_143055ee0(void)

void FUN_143055ee0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  AActor::OnSubobjectCreatedFromReplication();
  if (param_2 != 0) {
    lVar4 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar6 = (longlong *)(param_1 + 0x490);
      plVar2 = (longlong *)*plVar6;
      iVar1 = *(int *)(param_1 + 0x498);
      for (plVar5 = plVar2; plVar5 != plVar2 + iVar1; plVar5 = plVar5 + 1) {
        if (*plVar5 == param_2) {
          if ((int)((longlong)plVar5 - (longlong)plVar2 >> 3) != -1) {
            return;
          }
          break;
        }
      }
      *(int *)(param_1 + 0x498) = iVar1 + 1;
      if (*(int *)(param_1 + 0x49c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar6);
      }
      *(longlong *)(*plVar6 + (longlong)iVar1 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 143055fa0 FUN_143055fa0 body=321 status=ok
// SIG undefined FUN_143055fa0(void)

void FUN_143055fa0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  FUN_142237a20();
  if (param_2 != 0) {
    lVar1 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8
         ) != lVar1 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && (lVar1 = (longlong)*(int *)(param_1 + 0x470), *(int *)(param_1 + 0x470) != 0)) {
      iVar6 = 0;
      bVar7 = **(longlong **)(param_1 + 0x468) != param_2;
      lVar3 = 0;
      iVar4 = 0;
      do {
        lVar3 = lVar3 + 1;
        iVar5 = iVar4 + 1;
        if (lVar3 < lVar1) {
          plVar2 = (longlong *)(*(longlong *)(param_1 + 0x468) + lVar3 * 8);
          do {
            if (bVar7 != (*plVar2 != param_2)) break;
            iVar5 = iVar5 + 1;
            lVar3 = lVar3 + 1;
            plVar2 = plVar2 + 1;
          } while (lVar3 < lVar1);
        }
        if (bVar7 != false) {
          if (iVar6 != iVar4) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x468) + (longlong)iVar6 * 8),
                       (void *)(*(longlong *)(param_1 + 0x468) + (longlong)iVar4 * 8),
                       (longlong)(iVar5 - iVar4) << 3);
          }
          iVar6 = iVar6 + (iVar5 - iVar4);
        }
        bVar7 = (bool)(bVar7 ^ 1);
        iVar4 = iVar5;
      } while (lVar3 < lVar1);
      *(int *)(param_1 + 0x470) = iVar6;
    }
  }
  return;
}



// FUNCTION 1430560f0 FUN_1430560f0 body=321 status=ok
// SIG undefined FUN_1430560f0(void)

void FUN_1430560f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  FUN_142237a20();
  if (param_2 != 0) {
    lVar1 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8
         ) != lVar1 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && (lVar1 = (longlong)*(int *)(param_1 + 0x498), *(int *)(param_1 + 0x498) != 0)) {
      iVar6 = 0;
      bVar7 = **(longlong **)(param_1 + 0x490) != param_2;
      lVar3 = 0;
      iVar4 = 0;
      do {
        lVar3 = lVar3 + 1;
        iVar5 = iVar4 + 1;
        if (lVar3 < lVar1) {
          plVar2 = (longlong *)(*(longlong *)(param_1 + 0x490) + lVar3 * 8);
          do {
            if (bVar7 != (*plVar2 != param_2)) break;
            iVar5 = iVar5 + 1;
            lVar3 = lVar3 + 1;
            plVar2 = plVar2 + 1;
          } while (lVar3 < lVar1);
        }
        if (bVar7 != false) {
          if (iVar6 != iVar4) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x490) + (longlong)iVar6 * 8),
                       (void *)(*(longlong *)(param_1 + 0x490) + (longlong)iVar4 * 8),
                       (longlong)(iVar5 - iVar4) << 3);
          }
          iVar6 = iVar6 + (iVar5 - iVar4);
        }
        bVar7 = (bool)(bVar7 ^ 1);
        iVar4 = iVar5;
      } while (lVar3 < lVar1);
      *(int *)(param_1 + 0x498) = iVar6;
    }
  }
  return;
}



// FUNCTION 143056240 FUN_143056240 body=344 status=ok
// SIG undefined FUN_143056240(void)

void FUN_143056240(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined8 local_res8;
  
  pwVar6 = (wchar_t *)0x0;
  if (0 < *(int *)(param_1 + 0x408)) {
    plVar1 = (longlong *)(param_1 + 0x400);
    plVar2 = (longlong *)*plVar1;
    pwVar3 = pwVar6;
    pwVar8 = pwVar6;
    do {
      iVar5 = (int)pwVar3;
      if (*plVar2 == param_2) {
        pwVar3 = _guard_xfg_dispatch_icall_nop
                           (L"&ULightBeam::OnTrackedImpactParticleSystemFinished",L"::");
        while (pwVar8 = pwVar3, pwVar8 != (wchar_t *)0x0) {
          pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
          pwVar6 = pwVar8;
        }
        FName::FName(&local_res8,pwVar6 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0x8a8,param_1,local_res8);
        lVar7 = (longlong)iVar5 * 0x30;
        FUN_1405ac8f0(*plVar1 + 0x10 + lVar7,200,0);
        FUN_140591060(*plVar1 + 0x10 + lVar7);
        iVar4 = *(int *)(param_1 + 0x408);
        iVar5 = (iVar4 - iVar5) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar7),(void *)((longlong)(iVar4 - iVar5) * 0x30 + *plVar1),
                     (longlong)iVar5 * 0x30);
          iVar4 = *(int *)(param_1 + 0x408);
        }
        *(int *)(param_1 + 0x408) = iVar4 + -1;
        TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar1);
        return;
      }
      pwVar3 = (wchar_t *)(ulonglong)(iVar5 + 1);
      pwVar8 = (wchar_t *)((longlong)pwVar8 + 1);
      plVar2 = plVar2 + 6;
    } while ((longlong)pwVar8 < (longlong)*(int *)(param_1 + 0x408));
  }
  return;
}



// FUNCTION 1430563a0 FUN_1430563a0 body=45 status=ok
// SIG undefined FUN_1430563a0(void)

void FUN_1430563a0(longlong param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_1428cf800(), iVar1 != 3)) {
    FUN_14304ca20(param_1);
    FUN_14304c8c0(param_1);
  }
  return;
}



// FUNCTION 1430563d0 FUN_1430563d0 body=49 status=ok
// SIG undefined FUN_1430563d0(void)

void FUN_1430563d0(longlong param_1)

{
  if (param_1 != 0) {
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(&DAT_14678c6a0,param_1);
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(&DAT_14678c6f0,param_1);
  }
  return;
}



// FUNCTION 143056420 FUN_143056420 body=44 status=ok
// SIG undefined FUN_143056420(void)

void FUN_143056420(longlong *param_1)

{
  (**(code **)(*param_1 + 0x310))(param_1,(int)param_1[0x83]);
                    /* WARNING: Could not recover jumptable at 0x000143056445. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x318))(param_1);
  return;
}



// FUNCTION 143056450 FUN_143056450 body=328 status=ok
// SIG undefined FUN_143056450(void)

undefined8 FUN_143056450(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_1[3] != 0) {
    lVar2 = UMapBuildDataRegistry::GetPrivateStaticClass();
    for (lVar5 = param_1[3]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar2) {
        if (param_1[3] != 0) {
          if (*(longlong *)(param_2 + 0xe8) == 0) goto LAB_1430564ce;
          lVar3 = UMapBuildDataRegistry::GetPrivateStaticClass();
          lVar5 = *(longlong *)(param_2 + 0xe8);
          lVar2 = lVar5;
          goto joined_r0x0001430564bb;
        }
        break;
      }
    }
  }
  goto LAB_143056502;
joined_r0x0001430564bb:
  if (lVar2 == 0) goto LAB_1430564ce;
  if (lVar2 == lVar3) goto LAB_1430564d0;
  lVar2 = *(longlong *)(lVar2 + 0x30);
  goto joined_r0x0001430564bb;
LAB_1430564ce:
  lVar5 = 0;
LAB_1430564d0:
  if (param_1[3] != 0) {
    lVar4 = UMapBuildDataRegistry::GetPrivateStaticClass();
    lVar2 = param_1[3];
    for (lVar3 = lVar2; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar4) goto LAB_1430564f8;
    }
  }
  lVar2 = 0;
LAB_1430564f8:
  if (lVar5 != lVar2) {
    return 0;
  }
LAB_143056502:
  if ((param_1[4] != 0) && (*(longlong *)(param_2 + 0x1e0) != param_1[4])) {
    return 0;
  }
  cVar1 = (char)param_1[1];
  if (cVar1 != '\0') {
    if (cVar1 == '\x05') {
      lVar5 = *param_1;
      lVar2 = FUN_14304a380(param_2,3);
      if ((lVar2 != lVar5) && (lVar2 = FUN_14304a380(param_2,4), lVar2 != lVar5)) {
        return 0;
      }
    }
    else {
      if (cVar1 == '\x06') {
        lVar5 = FUN_14304a380(param_2,3);
        if (lVar5 != *param_1) {
          return 0;
        }
        lVar5 = FUN_14304a380(param_2,4);
        bVar6 = lVar5 == param_1[2];
      }
      else {
        lVar5 = FUN_14304a380(param_2);
        bVar6 = lVar5 == *param_1;
      }
      if (!bVar6) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1430565a0 FUN_1430565a0 body=337 status=ok
// SIG undefined FUN_1430565a0(void)

ulonglong FUN_1430565a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_2 == 0) goto LAB_1430566e4;
  cVar1 = (char)param_1[1];
  in_RAX = 0;
  if (cVar1 != '\0') {
    lVar5 = 0;
    if (cVar1 == '\x01') {
      lVar5 = *(longlong *)(param_2 + 0x168);
    }
    else if (cVar1 == '\x02') {
      lVar5 = *(longlong *)(param_2 + 0x140);
    }
    else if (cVar1 == '\x03') {
      lVar5 = *(longlong *)(param_2 + 0x148);
    }
    else if (cVar1 == '\x04') {
      lVar5 = *(longlong *)(param_2 + 0x150);
    }
    else if (cVar1 == '\x05') {
      lVar5 = *(longlong *)(param_2 + 0x1c0);
    }
    if (lVar5 != *param_1) goto LAB_1430566e4;
  }
  if (param_1[2] != 0) {
    in_RAX = FUN_1430aef40();
    for (uVar4 = param_1[2]; uVar4 != 0; uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
      if (uVar4 == in_RAX) {
        if (param_1[2] != 0) {
          if (*(longlong *)(param_2 + 0x110) == 0) goto LAB_143056686;
          in_RAX = FUN_1430aef40();
          uVar4 = *(ulonglong *)(param_2 + 0x110);
          uVar3 = uVar4;
          goto joined_r0x000143056676;
        }
        break;
      }
    }
  }
  goto LAB_1430566ba;
joined_r0x000143056676:
  if (uVar3 == 0) goto LAB_143056686;
  if (uVar3 == in_RAX) goto LAB_143056688;
  uVar3 = *(ulonglong *)(uVar3 + 0x30);
  goto joined_r0x000143056676;
LAB_143056686:
  uVar4 = 0;
LAB_143056688:
  if (param_1[2] != 0) {
    in_RAX = FUN_1430aef40();
    uVar3 = param_1[2];
    for (uVar2 = uVar3; uVar2 != 0; uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
      if (uVar2 == in_RAX) goto LAB_1430566b0;
    }
  }
  uVar3 = 0;
LAB_1430566b0:
  if (uVar4 != uVar3) goto LAB_1430566e4;
LAB_1430566ba:
  in_RAX = param_1[3];
  if ((in_RAX == 0) || (*(ulonglong *)(param_2 + 0xf0) == in_RAX)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_1430566e4:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143056700 FUN_143056700 body=2296 status=ok
// SIG undefined FUN_143056700(void)

void FUN_143056700(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined8 local_188;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  undefined1 local_158 [24];
  longlong local_140 [8];
  longlong *local_100;
  int local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined1 local_e0 [184];
  
  if (param_1[0x15] != 0) {
    iVar8 = rand();
    lVar5 = DAT_1468536c8;
    pfVar1 = (float *)(param_1[0x15] + 0x29c);
    if (((((float)iVar8 * 3.051851e-05 < *pfVar1 || (float)iVar8 * 3.051851e-05 == *pfVar1) &&
         (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
      local_1b0 = *(float *)(param_1 + 0x56) - *(float *)(param_1 + 0x5c);
      local_1b4 = *(float *)((longlong)param_1 + 0x2ac) - *(float *)((longlong)param_1 + 0x2dc);
      local_1b8 = *(float *)(param_1 + 0x55) - *(float *)(param_1 + 0x5b);
      fVar17 = *(float *)(param_1[0x15] + 0x298);
      fVar17 = fVar17 * fVar17;
      fVar12 = local_1b4 * local_1b4 + local_1b8 * local_1b8 + local_1b0 * local_1b0;
      if (fVar12 != 1.0) {
        if (1e-08 <= fVar12) {
          auVar15 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
          fVar14 = auVar15._0_4_;
          fVar14 = fVar14 + fVar14 * (0.5 - fVar12 * 0.5 * fVar14 * fVar14);
          fVar14 = fVar14 + fVar14 * (0.5 - fVar12 * 0.5 * fVar14 * fVar14);
          local_res10 = CONCAT44(local_res10._4_4_,fVar14);
          local_1b8 = fVar14 * local_1b8;
          local_1b4 = fVar14 * local_1b4;
          local_1b0 = fVar14 * local_1b0;
        }
        else {
          local_1b8 = DAT_1468b5d90;
          local_1b4 = DAT_1468b5d94;
          local_1b0 = DAT_1468b5d98;
        }
      }
      if ((0.0001 <= fVar17) &&
         (((0.0001 < ABS(local_1b8) || (0.0001 < ABS(local_1b4))) || (0.0001 < ABS(local_1b0))))) {
        uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
        UWorld::GetPlayerControllerIterator(uVar9,&local_100);
        while ((-1 < local_f8 && (local_f8 < (int)local_100[1]))) {
          plVar10 = (longlong *)FWeakObjectPtr::Get(*local_100 + (longlong)local_f8 * 8);
          uVar9 = local_188;
          if ((plVar10 == (longlong *)0x0) ||
             ((((*(uint *)((longlong)plVar10 + 0x4cc) >> 1 & 1) == 0 ||
               (cVar7 = (**(code **)(*plVar10 + 0x768))(plVar10), uVar9 = local_188, cVar7 == '\0'))
              || (plVar10[0x91] == 0)))) {
LAB_143056f71:
            local_188 = uVar9;
            local_f8 = local_f8 + 1;
          }
          else {
            lVar4 = *(longlong *)(plVar10[0x91] + 0x168);
            if (lVar4 == 0) {
              local_e8 = DAT_1468b5d98;
              puVar11 = &local_f0;
              local_f0 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
            }
            else {
              puVar11 = (undefined8 *)&local_198;
              local_198 = *(undefined4 *)(lVar4 + 0x220);
              local_190 = *(undefined4 *)(lVar4 + 0x228);
              uStack_194 = *(undefined4 *)(lVar4 + 0x224);
            }
            uVar9 = *puVar11;
            fVar16 = (float)uVar9;
            fVar12 = *(float *)(param_1 + 0x5b);
            fVar14 = *(float *)((longlong)param_1 + 0x2dc);
            fVar3 = *(float *)(puVar11 + 1);
            fVar2 = *(float *)(param_1 + 0x5c);
            local_188._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
            fVar6 = local_188._4_4_;
            local_180 = fVar3;
            if ((fVar14 - local_188._4_4_) * (fVar14 - local_188._4_4_) +
                (fVar12 - fVar16) * (fVar12 - fVar16) + (fVar2 - fVar3) * (fVar2 - fVar3) < fVar17)
            goto LAB_143056f71;
            if ((local_188._4_4_ - fVar14) * local_1b4 + (fVar16 - fVar12) * local_1b8 +
                (fVar3 - fVar2) * local_1b0 < 0.0) goto LAB_143056f71;
            fVar13 = ((local_188._4_4_ - fVar14) * local_1b4 + (fVar16 - fVar12) * local_1b8 +
                     (fVar3 - fVar2) * local_1b0) /
                     (local_1b4 * local_1b4 + local_1b8 * local_1b8 + local_1b0 * local_1b0);
            local_1a4 = local_1b4 * fVar13 + fVar14;
            local_1a0 = local_1b0 * fVar13 + fVar2;
            local_1a8 = local_1b8 * fVar13 + fVar12;
            if (fVar17 < (local_1a4 - local_188._4_4_) * (local_1a4 - local_188._4_4_) +
                         (local_1a8 - fVar16) * (local_1a8 - fVar16) +
                         (local_1a0 - fVar3) * (local_1a0 - fVar3)) goto LAB_143056f71;
            local_188 = uVar9;
            FVector::Rotation(&local_1b8,local_e0);
            if ((*(longlong *)(param_1[0x15] + 0x288) != 0) || (param_1[0x37] != 0)) {
              uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
              FUN_14059ce50(lVar5 + 8,&local_res10,uVar9,0);
              if (local_res10 != 0) {
                FUN_1405aab70(local_res10,&local_1a8,&DAT_1468b5da0,0,0x3f800000);
                if (param_1[0x37] != 0) {
                  local_140[0] = 0;
                  local_140[1] = 0;
                  FUN_1405a2d20(local_res10,local_158,param_1[0x37],0,0,local_140);
                  FUN_140591060(local_158);
                  if (local_140[0] != 0) {
                    FMemory::Free();
                  }
                }
                if (*(longlong *)(param_1[0x15] + 0x288) != 0) {
                  local_140[2] = 0;
                  local_140[3] = 0;
                  FUN_1405a2d20(local_res10,local_158,*(longlong *)(param_1[0x15] + 0x288),0,0,
                                local_140 + 2);
                  FUN_140591060(local_158);
                  if (local_140[2] != 0) {
                    FMemory::Free();
                  }
                }
                if (local_res10 != 0) {
                  FUN_1405a53f0();
                  local_res10 = 0;
                }
              }
            }
            fVar12 = SQRT(fVar17 - ((local_1a4 - fVar6) * (local_1a4 - fVar6) +
                                    (local_1a8 - fVar16) * (local_1a8 - fVar16) +
                                   (local_1a0 - fVar3) * (local_1a0 - fVar3)));
            if (*(longlong *)(param_1[0x15] + 0x280) != 0) {
              local_178 = local_1a8 - local_1b8 * fVar12;
              local_174 = local_1a4 - local_1b4 * fVar12;
              local_170 = local_1a0 - local_1b0 * fVar12;
              uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
              FUN_14059ce50(lVar5 + 8,&local_res18,uVar9,0);
              if (local_res18 != 0) {
                FUN_1405aab70(local_res18,&local_178,&DAT_1468b5da0,0,0x3f800000);
                local_140[4] = 0;
                local_140[5] = 0;
                FUN_1405a2d20(local_res18,local_158,*(undefined8 *)(param_1[0x15] + 0x280),0,0,
                              local_140 + 4);
                FUN_140591060(local_158);
                if (local_140[4] != 0) {
                  FMemory::Free();
                }
                if (local_res18 != 0) {
                  FUN_1405a53f0();
                  local_res18 = 0;
                }
              }
            }
            uVar9 = local_188;
            if (*(longlong *)(param_1[0x15] + 0x290) == 0) goto LAB_143056f71;
            local_168 = local_1b8 * fVar12 + local_1a8;
            local_164 = local_1b4 * fVar12 + local_1a4;
            local_160 = local_1b0 * fVar12 + local_1a0;
            uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
            FUN_14059ce50(lVar5 + 8,&local_res20,uVar9,0);
            uVar9 = local_188;
            if (local_res20 == 0) goto LAB_143056f71;
            FUN_1405aab70(local_res20,&local_168,&DAT_1468b5da0,0,0x3f800000);
            local_140[6] = 0;
            local_140[7] = 0;
            FUN_1405a2d20(local_res20,local_158,*(undefined8 *)(param_1[0x15] + 0x290),0,0,
                          local_140 + 6);
            FUN_140591060(local_158);
            if (local_140[6] != 0) {
              FMemory::Free();
            }
            uVar9 = local_188;
            if (local_res20 == 0) goto LAB_143056f71;
            FUN_1405a53f0();
            local_f8 = local_f8 + 1;
            local_res20 = 0;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143057000 FUN_143057000 body=429 status=ok
// SIG undefined FUN_143057000(void)

undefined8
FUN_143057000(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
             longlong param_5,undefined8 *param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  code *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  if ((param_4 != 0) && (*(char *)(param_4 + 0x62c) != '\0')) {
    plVar10 = *(longlong **)(param_5 + 0x20);
    plVar12 = plVar10 + (longlong)*(int *)(param_5 + 0x28) * 7;
    for (; plVar10 != plVar12; plVar10 = plVar10 + 7) {
      if (*plVar10 == DAT_146b47440) goto LAB_1430570e7;
    }
    puVar9 = (undefined8 *)FUN_142c62570(local_98,&DAT_146b47440,*(char *)(param_4 + 0x62c));
    iVar3 = *(int *)(param_5 + 0x28);
    *(int *)(param_5 + 0x28) = iVar3 + 1;
    if (*(int *)(param_5 + 0x2c) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_5 + 0x20,iVar3);
    }
    uVar8 = puVar9[1];
    lVar4 = *(longlong *)(param_5 + 0x20);
    lVar11 = (longlong)iVar3 * 0x38;
    *(undefined8 *)(lVar11 + lVar4) = *puVar9;
    ((undefined8 *)(lVar11 + lVar4))[1] = uVar8;
    uVar8 = puVar9[3];
    puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar4);
    *puVar1 = puVar9[2];
    puVar1[1] = uVar8;
    uVar5 = *(undefined4 *)((longlong)puVar9 + 0x24);
    uVar6 = *(undefined4 *)(puVar9 + 5);
    uVar7 = *(undefined4 *)((longlong)puVar9 + 0x2c);
    puVar2 = (undefined4 *)(lVar11 + 0x20 + lVar4);
    *puVar2 = *(undefined4 *)(puVar9 + 4);
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    *(undefined8 *)(lVar11 + 0x30 + lVar4) = puVar9[6];
  }
LAB_1430570e7:
  local_68 = 0;
  local_58 = 0;
  if (*(int *)(param_6 + 8) != 0) {
    plVar10 = (longlong *)param_6[6];
    if ((longlong *)param_6[6] == (longlong *)0x0) {
      plVar10 = param_6 + 2;
    }
    if (plVar10 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)*plVar10)(plVar10,local_88);
      (**(code **)(*plVar10 + 8))(plVar10);
      local_98[0] = (code *)*param_6;
      goto LAB_143057132;
    }
  }
  local_98[0] = FUN_1407c3030;
LAB_143057132:
  FUN_1430571b0(param_1,param_2,param_3,param_4,param_5,local_98,param_7,0);
  if (*(int *)(param_6 + 8) != 0) {
    plVar10 = (longlong *)param_6[6];
    if ((longlong *)param_6[6] == (longlong *)0x0) {
      plVar10 = param_6 + 2;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (param_6[6] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1430571b0 FUN_1430571b0 body=404 status=ok
// SIG undefined FUN_1430571b0(void)

undefined8 *
FUN_1430571b0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined1 param_7,undefined1 param_8)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_127 [7];
  longlong local_120;
  undefined1 local_118 [216];
  
  plVar7 = *(longlong **)(param_1 + 0x118);
  uVar6 = 0;
  if (plVar7 != (longlong *)0x0) {
    uVar3 = FUN_142e27720();
    lVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar3);
    if ((lVar4 != 0) &&
       (FUN_14304ad10(param_1,&local_120,param_3,param_4,param_7,local_127), local_120 != 0)) {
      lVar5 = FUN_142e20fc0();
      for (lVar1 = local_120; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar5) {
          if (*(int *)(param_6 + 8) != 0) {
            plVar7 = (longlong *)param_6[6];
            if ((longlong *)param_6[6] == (longlong *)0x0) {
              plVar7 = param_6 + 2;
            }
            if (plVar7 != (longlong *)0x0) {
              uVar6 = (**(code **)(*plVar7 + 8))();
            }
          }
          cVar2 = (*(code *)*param_6)(uVar6,&local_120);
          if (cVar2 != '\0') {
            uVar6 = FUN_1405e0fd0(local_118,param_5);
            FUN_142c7bb40(lVar4,param_2,local_120,uVar6,param_8);
            if (*(int *)(param_6 + 8) != 0) {
              plVar7 = (longlong *)param_6[6];
              if ((longlong *)param_6[6] == (longlong *)0x0) {
                plVar7 = param_6 + 2;
              }
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x10))(plVar7,0);
              }
            }
            goto LAB_14305728f;
          }
          break;
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_6 + 8) != 0) {
    plVar7 = (longlong *)param_6[6];
    if ((longlong *)param_6[6] == (longlong *)0x0) {
      plVar7 = param_6 + 2;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
LAB_14305728f:
  if (param_6[6] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 143057350 FUN_143057350 body=115 status=ok
// SIG undefined FUN_143057350(void)

void FUN_143057350(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong **)(param_1 + 0x140) != (longlong *)0x0) &&
     (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x670))(), lVar2 != 0)) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
      FUN_142e56590(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 1430573d0 FUN_1430573d0 body=1853 status=ok
// SIG undefined FUN_1430573d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430573d0(longlong *param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  float *pfVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  char cVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_228 [32];
  longlong *local_208;
  undefined1 local_200;
  int local_1f8 [4];
  longlong local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  code *local_1b8 [2];
  longlong local_1a8 [4];
  longlong *local_188;
  int local_178;
  longlong local_168 [5];
  byte local_140;
  byte local_13f;
  code *local_138 [2];
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  if (param_1[0x16] == 0) {
    return;
  }
  if ((param_1[0x2a] == 0) && (*(longlong *)(param_1[0x16] + 0x80) == 0)) {
    return;
  }
  lVar8 = FWeakObjectPtr::Get(param_2 + 0x6c);
  if ((lVar8 == 0) && (lVar8 = FWeakObjectPtr::Get(param_2 + 0x74), lVar8 == 0)) {
    return;
  }
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  fVar20 = *(float *)(lVar8 + 0x790);
  lVar8 = FWeakObjectPtr::Get(param_2 + 0x6c);
  bVar5 = false;
  bVar4 = false;
  local_1e8 = lVar8;
  if (fVar20 < *(float *)(param_1 + 0x79)) {
    if (fVar20 == *(float *)((longlong)param_1 + 0x3cc)) goto LAB_143057602;
    if ((int)param_1[0x81] == 0) {
      if (param_3 == '\0') {
        plVar11 = param_1 + 0x7e;
        lVar17 = *plVar11;
        lVar9 = (longlong)(int)param_1[0x7f];
        lVar16 = lVar17 + lVar9 * 0x10;
        if (lVar17 != lVar16) {
          pfVar13 = (float *)(lVar17 + 0xc);
          do {
            fVar23 = *(float *)(param_2 + 0x24) - pfVar13[-1];
            fVar22 = *(float *)(param_2 + 0x20) - pfVar13[-2];
            fVar21 = *(float *)(param_2 + 0x28) - *pfVar13;
            if (fVar23 * fVar23 + fVar22 * fVar22 + fVar21 * fVar21 < 16384.0) {
              return;
            }
            lVar17 = lVar17 + 0x10;
            pfVar13 = pfVar13 + 4;
          } while (lVar17 != lVar16);
        }
        iVar6 = (int)param_1[0x7f] + 1;
        *(int *)(param_1 + 0x7f) = iVar6;
        if (*(int *)((longlong)param_1 + 0x3fc) < iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11);
        }
        *(float *)(*plVar11 + lVar9 * 0x10) = fVar20 + *(float *)(param_1[0x16] + 0x88);
        lVar16 = *plVar11;
        *(undefined8 *)(lVar16 + 4 + lVar9 * 0x10) = *(undefined8 *)(param_2 + 0x20);
        *(undefined4 *)(lVar16 + 0xc + lVar9 * 0x10) = *(undefined4 *)(param_2 + 0x28);
      }
      else {
        fVar22 = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x78);
        fVar21 = *(float *)(param_2 + 0x20) - *(float *)((longlong)param_1 + 0x3bc);
        fVar20 = *(float *)(param_2 + 0x28) - *(float *)((longlong)param_1 + 0x3c4);
        if (fVar22 * fVar22 + fVar21 * fVar21 + fVar20 * fVar20 <= 16384.0) {
          return;
        }
      }
      goto LAB_143057602;
    }
  }
  else {
    *(float *)((longlong)param_1 + 0x3cc) = fVar20;
    *(float *)(param_1 + 0x79) = fVar20 + *(float *)(param_1[0x16] + 0x88);
LAB_143057602:
    bVar5 = true;
    bVar4 = true;
  }
  if (param_3 != '\0') {
    *(undefined8 *)((longlong)param_1 + 0x3bc) = *(undefined8 *)(param_2 + 0x20);
    *(undefined4 *)((longlong)param_1 + 0x3c4) = *(undefined4 *)(param_2 + 0x28);
  }
  local_1f8[0] = 0;
  if (param_3 == '\0') {
    if (lVar8 == 0) {
      lVar16 = FWeakObjectPtr::Get(param_2 + 0x74);
      if (lVar16 != 0) {
        local_1f8[0] = *(int *)(lVar16 + 0xc);
      }
    }
    else {
      local_1f8[0] = *(int *)(lVar8 + 0xc);
    }
  }
  cVar19 = '\0';
  iVar6 = (int)param_1[0x81] + -1;
  lVar16 = (longlong)iVar6;
  if (-1 < iVar6) {
    lVar17 = lVar16 * 0x30;
    do {
      lVar8 = param_1[0x80];
      if (*(int *)(lVar17 + 0x28 + lVar8) == local_1f8[0]) {
        if (*(longlong *)(lVar17 + 8 + lVar8) == 0) {
          cVar19 = '\x01';
        }
        else {
          lVar9 = FWeakObjectPtr::Get(param_2 + 100);
          bVar4 = bVar5;
          if (*(longlong *)(lVar17 + 8 + lVar8) == lVar9) {
            bVar5 = false;
            bVar4 = false;
          }
        }
      }
      lVar17 = lVar17 + -0x30;
      lVar16 = lVar16 + -1;
      lVar8 = local_1e8;
    } while (-1 < lVar16);
  }
  uStack_1c0 = local_1f8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_1c8 = param_1;
  puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar10 + 1) = (undefined4)local_1c8;
    *(undefined4 *)((longlong)puVar10 + 0xc) = local_1c8._4_4_;
    *(undefined4 *)(puVar10 + 2) = (undefined4)uStack_1c0;
    *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_1c0._4_4_;
  }
  local_b8 = (code *)&LAB_14303f760;
  if (!bVar4) goto LAB_143057926;
  local_13f = local_13f & 0xfe;
  local_140 = cVar19 << 4;
  local_e8 = 0;
  uStack_e0 = 0x3f80000000000000;
  local_168[0] = 0;
  local_168[1] = 0;
  local_168[2] = 0;
  local_168[3] = 0;
  local_168[4] = 0;
  local_108 = (longlong *)0x0;
  local_f8 = 0;
  local_138[0] = AK::MemoryMgr::StartProfileThreadUsage;
  local_d8 = 0x3f800000;
  local_d4 = 0x3f800000;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0x3f800000;
  if (((*(byte *)((longlong)param_1 + 0x1de) >> 1 & 1) != 0) ||
     ((0.0 < *(float *)((longlong)param_1 + 0x17c) && (lVar8 = FUN_142d29780(lVar8), lVar8 != 0))))
  {
    bVar18 = 0x20;
  }
  else {
    bVar18 = 0;
  }
  local_188 = (longlong *)0x0;
  local_178 = 0;
  local_140 = (local_140 ^ *(char *)(param_1[0x16] + 0x8c) << 2) & 8 ^ (local_140 & 0xdf | bVar18);
  if (local_78 == 0) {
LAB_143057821:
    local_1b8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar11 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar11 = local_88;
    }
    if (plVar11 == (longlong *)0x0) goto LAB_143057821;
    plVar11 = (longlong *)(**(code **)*plVar11)(plVar11,local_1a8);
    (**(code **)(*plVar11 + 8))(plVar11);
    local_1b8[0] = local_b8;
  }
  FGenericPlatformMemory::MemswapGreaterThan8(local_1b8,local_138,0x50);
  if (local_178 != 0) {
    plVar11 = local_1a8;
    if (local_188 != (longlong *)0x0) {
      plVar11 = local_188;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_13f = local_13f | 1;
  lVar8 = param_1[0x28];
  if (((lVar8 == 0) && (lVar8 = param_1[0x29], lVar8 == 0)) &&
     (lVar8 = 0, (*(uint *)(param_1 + 1) >> 4 & 1) == 0)) {
    lVar8 = param_1[4];
  }
  lVar16 = param_1[0x2a];
  if (lVar16 == 0) {
    if (param_1[0x16] == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(longlong *)(param_1[0x16] + 0x80);
    }
  }
  local_208 = local_168;
  local_200 = 0;
  FUN_142d68ea0(lVar16,lVar8,param_2,0);
  if (local_f8 != 0) {
    plVar11 = local_128;
    if (local_108 != (longlong *)0x0) {
      plVar11 = local_108;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_168[2] != 0) {
    FMemory::Free();
  }
  if (local_168[0] != 0) {
    FMemory::Free();
  }
LAB_143057926:
  iVar6 = (int)param_1[0x81] + -1;
  if (-1 < iVar6) {
    plVar11 = param_1 + 0x80;
    lVar16 = (longlong)iVar6 * 0x30;
    lVar8 = lVar16;
    do {
      lVar17 = *plVar11;
      if (*(longlong *)(lVar17 + lVar16) == 0) {
LAB_143057a12:
        FUN_140591060(lVar17 + 0x10 + lVar8);
        iVar3 = (int)param_1[0x81];
        iVar15 = (iVar3 - iVar6) + -1;
        if (0 < iVar15) {
          iVar15 = 1;
        }
        if (iVar15 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar11 + lVar8),
                     (void *)((longlong)(iVar3 - iVar15) * 0x30 + *plVar11),(longlong)iVar15 * 0x30)
          ;
          iVar3 = (int)param_1[0x81];
        }
        *(int *)(param_1 + 0x81) = iVar3 + -1;
        TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar11);
      }
      else {
        uVar7 = *(uint *)(*(longlong *)(lVar17 + lVar16) + 0xc);
        if ((int)uVar7 < (int)DAT_1469e91c4) {
          uVar14 = uVar7 & 0xffff;
          if ((int)uVar7 < 0) {
            uVar7 = uVar7 + 0xffff;
            uVar14 = uVar14 - 0x10000;
          }
          lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                  (longlong)(int)uVar14 * 0x18;
        }
        else {
          lVar9 = 0;
        }
        if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) != 0) goto LAB_143057a12;
        if (*(int *)(lVar17 + 0x28 + lVar16) == local_1f8[0]) {
          uVar1 = *(undefined8 *)(param_2 + 0x20);
          uVar2 = *(undefined4 *)(param_2 + 0x28);
          plVar12 = (longlong *)FVector::Rotation(param_2 + 0x2c,&local_1c8);
          local_200 = 0;
          local_1e8 = *plVar12;
          local_1e0 = (undefined4)plVar12[1];
          local_208 = (longlong *)0x0;
          local_1d8 = uVar1;
          local_1d0 = uVar2;
          FUN_142399680(*(undefined8 *)(lVar17 + lVar16),&local_1d8,&local_1e8,0);
        }
      }
      lVar8 = lVar8 + -0x30;
      lVar16 = lVar16 + -0x30;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  if (local_78 != 0) {
    plVar11 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar11 = local_88;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143057b10 FUN_143057b10 body=319 status=ok
// SIG undefined FUN_143057b10(void)

undefined8
FUN_143057b10(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
             longlong param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 local_68 [64];
  
  if ((param_4 != 0) && (*(char *)(param_4 + 0x62c) != '\0')) {
    plVar12 = *(longlong **)(param_5 + 0x20);
    plVar11 = plVar12 + (longlong)*(int *)(param_5 + 0x28) * 7;
    for (; plVar12 != plVar11; plVar12 = plVar12 + 7) {
      if (*plVar12 == DAT_146b47440) goto LAB_143057c0d;
    }
    puVar9 = (undefined8 *)FUN_142c62570(local_68,&DAT_146b47440,*(char *)(param_4 + 0x62c));
    iVar3 = *(int *)(param_5 + 0x28);
    *(int *)(param_5 + 0x28) = iVar3 + 1;
    if (*(int *)(param_5 + 0x2c) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_5 + 0x20,iVar3);
    }
    uVar8 = puVar9[1];
    lVar4 = *(longlong *)(param_5 + 0x20);
    lVar10 = (longlong)iVar3 * 0x38;
    *(undefined8 *)(lVar10 + lVar4) = *puVar9;
    ((undefined8 *)(lVar10 + lVar4))[1] = uVar8;
    uVar8 = puVar9[3];
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar4);
    *puVar1 = puVar9[2];
    puVar1[1] = uVar8;
    uVar5 = *(undefined4 *)((longlong)puVar9 + 0x24);
    uVar6 = *(undefined4 *)(puVar9 + 5);
    uVar7 = *(undefined4 *)((longlong)puVar9 + 0x2c);
    puVar2 = (undefined4 *)(lVar10 + 0x20 + lVar4);
    *puVar2 = *(undefined4 *)(puVar9 + 4);
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    *(undefined8 *)(lVar10 + 0x30 + lVar4) = puVar9[6];
  }
LAB_143057c0d:
  FUN_143057e40(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 143057c50 FUN_143057c50 body=489 status=ok
// SIG undefined FUN_143057c50(void)

undefined8
FUN_143057c50(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
             float param_5,float param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 local_128 [32];
  longlong local_108;
  int local_100;
  int local_fc;
  undefined1 local_58 [64];
  
  FUN_142c62180(local_128);
  if (param_5 != 1.0) {
    puVar8 = (undefined8 *)FUN_142c62590(local_58,&DAT_146b2fcd8);
    iVar7 = local_100;
    lVar9 = (longlong)local_100;
    local_100 = local_100 + 1;
    if (local_fc < local_100) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_108,iVar7);
    }
    uVar6 = puVar8[1];
    lVar9 = lVar9 * 0x38;
    *(undefined8 *)(lVar9 + local_108) = *puVar8;
    ((undefined8 *)(lVar9 + local_108))[1] = uVar6;
    uVar6 = puVar8[3];
    puVar1 = (undefined8 *)(lVar9 + 0x10 + local_108);
    *puVar1 = puVar8[2];
    puVar1[1] = uVar6;
    uVar6 = puVar8[5];
    puVar1 = (undefined8 *)(lVar9 + 0x20 + local_108);
    *puVar1 = puVar8[4];
    puVar1[1] = uVar6;
    *(undefined8 *)(lVar9 + 0x30 + local_108) = puVar8[6];
  }
  if (0.0 < param_6) {
    puVar8 = (undefined8 *)FUN_142c62590(local_58,&DAT_146b2fcb8);
    iVar7 = local_100;
    lVar9 = (longlong)local_100;
    local_100 = local_100 + 1;
    if (local_fc < local_100) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_108,iVar7);
    }
    uVar6 = puVar8[1];
    lVar9 = lVar9 * 0x38;
    *(undefined8 *)(lVar9 + local_108) = *puVar8;
    ((undefined8 *)(lVar9 + local_108))[1] = uVar6;
    uVar6 = puVar8[3];
    puVar1 = (undefined8 *)(lVar9 + 0x10 + local_108);
    *puVar1 = puVar8[2];
    puVar1[1] = uVar6;
    uVar3 = *(undefined4 *)((longlong)puVar8 + 0x24);
    uVar4 = *(undefined4 *)(puVar8 + 5);
    uVar5 = *(undefined4 *)((longlong)puVar8 + 0x2c);
    puVar2 = (undefined4 *)(lVar9 + 0x20 + local_108);
    *puVar2 = *(undefined4 *)(puVar8 + 4);
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    *(undefined8 *)(lVar9 + 0x30 + local_108) = puVar8[6];
  }
  if ((param_4 != 0) && (*(char *)(param_4 + 0x62c) != '\0')) {
    puVar8 = (undefined8 *)FUN_142c62570(local_58,&DAT_146b47440);
    iVar7 = local_100;
    lVar9 = (longlong)local_100;
    local_100 = local_100 + 1;
    if (local_fc < local_100) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_108,iVar7);
    }
    uVar6 = puVar8[1];
    lVar9 = lVar9 * 0x38;
    *(undefined8 *)(lVar9 + local_108) = *puVar8;
    ((undefined8 *)(lVar9 + local_108))[1] = uVar6;
    uVar6 = puVar8[3];
    puVar1 = (undefined8 *)(lVar9 + 0x10 + local_108);
    *puVar1 = puVar8[2];
    puVar1[1] = uVar6;
    uVar3 = *(undefined4 *)((longlong)puVar8 + 0x24);
    uVar4 = *(undefined4 *)(puVar8 + 5);
    uVar5 = *(undefined4 *)((longlong)puVar8 + 0x2c);
    puVar2 = (undefined4 *)(lVar9 + 0x20 + local_108);
    *puVar2 = *(undefined4 *)(puVar8 + 4);
    puVar2[1] = uVar3;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    *(undefined8 *)(lVar9 + 0x30 + local_108) = puVar8[6];
  }
  FUN_143057e40(param_1,param_2,param_3,param_4,local_128,param_7,param_8);
  FUN_142c63c50(local_128);
  return param_2;
}



// FUNCTION 143057e40 FUN_143057e40 body=259 status=ok
// SIG undefined FUN_143057e40(void)

undefined8 *
FUN_143057e40(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             longlong param_5,undefined1 param_6,undefined1 param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  longlong local_e8;
  undefined1 local_e0 [200];
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_142e27720();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if ((lVar3 != 0) &&
       (FUN_14304ad10(param_1,&local_e8,param_3,param_4,param_6,local_res8), local_e8 != 0)) {
      lVar4 = FUN_142e20fc0();
      lVar5 = local_e8;
      do {
        if (lVar5 == lVar4) {
          *(undefined1 *)(param_5 + 0x31) = local_res8[0];
          uVar2 = FUN_1405e0fd0(local_e0);
          FUN_142c7bb40(lVar3,param_2,local_e8,uVar2,param_7);
          return param_2;
        }
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 143057f50 FUN_143057f50 body=245 status=ok
// SIG undefined FUN_143057f50(void)

void FUN_143057f50(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x478))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x470) + (longlong)param_2 * 8);
    uVar7 = 0;
    plVar6 = *(longlong **)(lVar3 + 0x20);
    uVar8 = (longlong)*(int *)(lVar3 + 0x28) & 0x1fffffffffffffff;
    if (plVar6 + *(int *)(lVar3 + 0x28) < plVar6) {
      uVar8 = uVar7;
    }
    if (uVar8 != 0) {
      do {
        plVar4 = (longlong *)*plVar6;
        if ((plVar4 != (longlong *)0x0) && ((int)plVar4[0x14] == param_2)) {
          (**(code **)(*plVar4 + 0x2b8))();
        }
        plVar6 = plVar6 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar8);
    }
    *(undefined4 *)(lVar3 + 0x28) = 0;
    if (0x7fffffff < *(uint *)(lVar3 + 0x2c)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar3 + 0x20,0);
    }
    lVar5 = *(longlong *)(lVar3 + 0x90);
    *(undefined8 *)(lVar3 + 0x90) = 0;
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  return;
}



// FUNCTION 143058050 FUN_143058050 body=86 status=ok
// SIG undefined FUN_143058050(void)

void FUN_143058050(longlong param_1)

{
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x38,param_1 + 0x30);
    UObjectBaseUtility::MarkPackageDirty(param_1);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1430580b0 FUN_1430580b0 body=153 status=ok
// SIG undefined FUN_1430580b0(void)

void FUN_1430580b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x218) != 0) {
    lVar3 = UCelLightData::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_1 + 0x218);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) {
        if (lVar1 != 0) {
          *(longlong *)(param_1 + 0x220) = lVar1;
          *(undefined8 *)(param_1 + 0x218) = 0;
        }
        break;
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x198)) {
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  if (0.0 < *(float *)(param_1 + 0x164)) {
    *(float *)(param_1 + 0x168) = *(float *)(param_1 + 0x164);
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  return;
}



// FUNCTION 143058150 FUN_143058150 body=141 status=ok
// SIG undefined FUN_143058150(void)

void FUN_143058150(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  *(undefined8 *)((longlong)param_1 + 0x18c) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(param_2 + 1);
  (**(code **)(*param_1 + 0x470))();
  plVar1 = (longlong *)param_1[0x30];
  if ((plVar1 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*plVar1 + 0x400))(plVar1,0), cVar2 != '\0')) {
    local_18 = *(undefined8 *)((longlong)param_1 + 0x18c);
    local_10 = *(undefined4 *)((longlong)param_1 + 0x194);
    FUN_142717fd0(param_1[0x30],&local_18,0,0);
  }
  return;
}



// FUNCTION 1430581e0 FUN_1430581e0 body=109 status=ok
// SIG undefined FUN_1430581e0(void)

void FUN_1430581e0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[0xbe];
  param_1[0xbe] = 0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) & 0xffffffef;
  if ((*(byte *)(param_1 + 0x3d) & 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014305822f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x278))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143058246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2d0))(param_1,(int)param_1[0xbf],0);
  return;
}



// FUNCTION 143058250 FUN_143058250 body=94 status=ok
// SIG undefined FUN_143058250(void)

void FUN_143058250(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[0x82];
  param_1[0x82] = 0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  (**(code **)(*param_1 + 800))(param_1);
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x244) = *(undefined4 *)(lVar3 + 0x790);
  return;
}



// FUNCTION 1430582b0 FUN_1430582b0 body=213 status=ok
// SIG undefined FUN_1430582b0(void)

void FUN_1430582b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  if (*(char *)(param_1 + 0x500) != '\0') {
    uVar5 = 0;
    *(undefined1 *)(param_1 + 0x500) = 0;
    if (0 < *(int *)(param_1 + 0x460)) {
      plVar1 = (longlong *)(param_1 + 0x458);
      uVar6 = uVar5;
      uVar7 = uVar5;
      uVar9 = uVar5;
      do {
        lVar3 = *(longlong *)(*plVar1 + uVar5 * 8);
        if (lVar3 == 0) {
          uVar7 = (ulonglong)((int)uVar7 - 1);
          uVar6 = uVar6 - 1;
        }
        else if ((longlong)uVar6 < 0) {
          *(longlong *)(*plVar1 + (uVar6 + uVar5) * 8) = lVar3;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar5 = uVar5 + 1;
      } while ((int)uVar8 < *(int *)(param_1 + 0x460));
      if ((int)uVar7 < 0) {
        iVar2 = *(int *)(param_1 + 0x460);
        iVar4 = *(int *)(param_1 + 0x460) + (int)uVar7;
        if (iVar2 < iVar4) {
          *(int *)(param_1 + 0x460) = iVar4;
          if (*(int *)(param_1 + 0x464) < iVar4) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar2 * 8),0,(longlong)(iVar4 - iVar2) << 3);
          return;
        }
        if ((iVar4 < iVar2) && (iVar4 != iVar2)) {
          *(int *)(param_1 + 0x460) = iVar4;
        }
      }
    }
  }
  return;
}



// FUNCTION 143058390 FUN_143058390 body=211 status=ok
// SIG undefined FUN_143058390(void)

void FUN_143058390(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x598) = 0;
  if ((*(char *)(param_1 + 0x590) != '\0') &&
     (*(undefined1 *)(param_1 + 0x590) = 0, 0 < *(int *)(param_1 + 0x460))) {
    plVar1 = (longlong *)(param_1 + 0x458);
    uVar6 = uVar5;
    uVar7 = uVar5;
    uVar9 = uVar5;
    do {
      lVar3 = *(longlong *)(*plVar1 + uVar7 * 8);
      if (lVar3 == 0) {
        uVar6 = (ulonglong)((int)uVar6 - 1);
        uVar5 = uVar5 - 1;
      }
      else if ((longlong)uVar5 < 0) {
        *(longlong *)(*plVar1 + (uVar5 + uVar7) * 8) = lVar3;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar7 = uVar7 + 1;
    } while ((int)uVar8 < *(int *)(param_1 + 0x460));
    if ((int)uVar6 < 0) {
      iVar2 = *(int *)(param_1 + 0x460);
      iVar4 = *(int *)(param_1 + 0x460) + (int)uVar6;
      if (iVar2 < iVar4) {
        *(int *)(param_1 + 0x460) = iVar4;
        if (*(int *)(param_1 + 0x464) < iVar4) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + (longlong)iVar2 * 8),0,(longlong)(iVar4 - iVar2) << 3);
        return;
      }
      if ((iVar4 < iVar2) && (iVar4 != iVar2)) {
        *(int *)(param_1 + 0x460) = iVar4;
      }
    }
  }
  return;
}



// FUNCTION 143058470 FUN_143058470 body=326 status=ok
// SIG undefined FUN_143058470(void)

void FUN_143058470(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  undefined4 local_res10;
  undefined4 local_res14;
  
  param_2 = param_2 + 0x34;
  lVar6 = FWeakObjectPtr::Get(param_2);
  if (lVar6 != 0) {
    uVar7 = UDamageableInterface::GetPrivateStaticClass();
    lVar6 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
    if (lVar6 != 0) {
      uVar7 = FWeakObjectPtr::Get(param_2);
      uVar8 = FUN_1430a7780();
      *param_3 = uVar8;
      plVar2 = param_3 + 2;
      *(undefined4 *)(param_3 + 1) = 1;
      iVar10 = *(int *)(param_3 + 3);
      if (iVar10 < 8) {
        *(undefined4 *)(param_3 + 3) = 8;
        if (*(int *)((longlong)param_3 + 0x1c) < 8) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar10);
        }
      }
      else if ((8 < iVar10) && (iVar1 = iVar10 + -8, iVar1 != 0)) {
        iVar5 = (iVar10 - iVar1) + -8;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar2 + 8),(void *)((longlong)iVar10 + *plVar2),(longlong)iVar5);
          iVar10 = *(int *)(param_3 + 3);
        }
        *(int *)(param_3 + 3) = iVar10 - iVar1;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar2);
      }
      puVar3 = (undefined4 *)*plVar2;
      FWeakObjectPtr::operator=(&local_res10,uVar7);
      *puVar3 = local_res10;
      puVar3[1] = local_res14;
      return;
    }
  }
  lVar6 = FWeakObjectPtr::Get(param_2);
  if (lVar6 != 0) {
    lVar9 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      UEnvQueryItemType_Actor::SetContextHelper(param_3,lVar6);
    }
  }
  return;
}



// FUNCTION 1430585c0 FUN_1430585c0 body=122 status=ok
// SIG undefined FUN_1430585c0(void)

void FUN_1430585c0(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  uVar1 = *(undefined4 *)(lVar3 + 0x790);
  lVar3 = param_1[0xbd];
  iVar2 = (int)lVar3 + 1;
  *(int *)(param_1 + 0xbd) = iVar2;
  if (*(int *)((longlong)param_1 + 0x5ec) < iVar2) {
    FUN_14157a330(param_1 + 0x9c);
  }
  plVar4 = (longlong *)param_1[0xbc];
  if ((longlong *)param_1[0xbc] == (longlong *)0x0) {
    plVar4 = param_1 + 0x9c;
  }
  plVar4[(int)lVar3] = CONCAT44(uVar1,param_2);
  return;
}



// FUNCTION 143058640 FUN_143058640 body=628 status=ok
// SIG undefined FUN_143058640(void)

void FUN_143058640(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined1 local_78 [96];
  
  fVar9 = 1.0;
  fVar4 = *(float *)(param_1 + 0x5e);
  if (((fVar4 == 0.0) && (*(float *)((longlong)param_1 + 0x2f4) == 0.0)) &&
     (*(float *)(param_1 + 0x5f) == 0.0)) {
    local_80 = (float)DAT_1464aa7a0;
    puVar3 = &local_88;
    local_88 = DAT_1464aa798;
  }
  else {
    fVar6 = *(float *)((longlong)param_1 + 0x2f4);
    fVar1 = *(float *)(param_1 + 0x5f);
    fVar5 = fVar6 * fVar6 + fVar4 * fVar4 + fVar1 * fVar1;
    if (fVar5 == 1.0) {
      local_98 = param_1[0x5e];
      local_90 = (float)(int)param_1[0x5f];
    }
    else if (1e-08 <= fVar5) {
      auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar7 = auVar8._0_4_;
      fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
      fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
      local_98 = CONCAT44(fVar6 * fVar7,fVar4 * fVar7);
      local_90 = fVar1 * fVar7;
    }
    else {
      local_90 = (float)DAT_1468b5d98;
      local_98 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    puVar3 = &local_98;
  }
  local_88 = *puVar3;
  local_80 = *(float *)(puVar3 + 1);
  fVar4 = (float)((ulonglong)local_88 >> 0x20);
  if ((fVar4 == 0.0) && (local_80 == 0.0)) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 1.0;
    fVar9 = 0.0;
  }
  local_90 = fVar9 * (float)local_88 - fVar6 * fVar4;
  local_98 = CONCAT44(fVar6 * local_80,-(fVar9 * local_80));
  iVar2 = rand();
  puVar3 = (undefined8 *)
           FVector::RotateAngleAxis(&local_98,local_78,(float)iVar2 * 0.010986663,&local_88);
  local_98 = *puVar3;
  local_90 = *(float *)(puVar3 + 1);
  (**(code **)(*param_1 + 0x358))(param_1,param_2,param_3,&local_98,param_4);
  return;
}



// FUNCTION 1430588c0 FUN_1430588c0 body=823 status=ok
// SIG undefined FUN_1430588c0(void)

undefined8
FUN_1430588c0(longlong *param_1,longlong param_2,longlong param_3,float *param_4,char *param_5)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_res20 [8];
  longlong local_38;
  longlong *local_30;
  
  if (((*param_4 == 0.0) && (param_4[1] == 0.0)) && (param_4[2] == 0.0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    return 0;
  }
  *(int *)((longlong)param_1 + 0x35c) = *(int *)((longlong)param_1 + 0x35c) + 1;
  (**(code **)(*param_1 + 0x2c0))(0,&local_38,1);
  *(byte *)(local_38 + 0x138) = *(byte *)(local_38 + 0x138) & 0xfe;
  *(longlong *)(local_38 + 8) = param_1[0x22];
  *(undefined8 *)(local_38 + 0x10) = *(undefined8 *)(param_2 + 0x14);
  *(undefined4 *)(local_38 + 0x18) = *(undefined4 *)(param_2 + 0x1c);
  fVar3 = param_4[2];
  fVar4 = *(float *)(param_2 + 0x1c);
  *(ulonglong *)(local_38 + 0x1c) =
       CONCAT44(param_4[1] * 1000.0 + *(float *)(param_2 + 0x18),
                *param_4 * 1000.0 + *(float *)(param_2 + 0x14));
  *(float *)(local_38 + 0x24) = fVar3 * 1000.0 + fVar4;
  if (param_3 != 0) {
    lVar10 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    lVar10 = param_3;
    if (bVar9) goto LAB_1430589eb;
  }
  lVar10 = 0;
LAB_1430589eb:
  lVar13 = local_38;
  *(longlong *)(local_38 + 0x38) = lVar10;
  if ((*(longlong *)(local_38 + 0x38) == 0) && (param_3 != 0)) {
    uVar11 = FUN_140a63ba0(param_3);
    *(undefined8 *)(lVar13 + 0x38) = uVar11;
  }
  *(longlong *)(local_38 + 0x40) = param_3;
  *(longlong *)(local_38 + 0x60) = param_3;
  *(float *)(local_38 + 0x5c) = *(float *)(param_1 + 0x16) * *(float *)(param_5 + 4);
  *(uint *)(local_38 + 0x28) = *(uint *)(local_38 + 0x28) | 0x20;
  *(longlong *)(local_38 + 0xb8) = param_1[0x6f];
  if (*(longlong *)(param_5 + 0x18) != 0) {
    lVar12 = FUN_142e49950();
    lVar10 = *(longlong *)(param_5 + 0x18);
    for (lVar13 = lVar10; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x30)) {
      if (lVar13 == lVar12) {
        if (lVar10 != 0) {
          *(longlong *)(local_38 + 0x68) = lVar10;
        }
        break;
      }
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar10 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar10 != 0) {
    if (*param_5 == '\x03') {
      fVar3 = *(float *)(lVar10 + 0x44);
    }
    else {
      fVar3 = *(float *)(lVar10 + 0x40);
    }
    *(float *)(local_38 + 0xa8) = fVar3 * *(float *)(local_38 + 0xa8);
  }
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar13 = param_1[4];
  }
  else {
    lVar13 = 0;
  }
  FUN_14303af10(lVar13,local_res20,local_38);
  lVar13 = FWeakObjectPtr::Get(local_res20);
  if (lVar13 != 0) {
    uVar6 = *(undefined4 *)(param_2 + 0x6c);
    uVar7 = *(undefined4 *)(param_2 + 0x70);
    lVar13 = FWeakObjectPtr::Get(local_res20);
    uVar8 = *(undefined4 *)((longlong)param_1 + 0x35c);
    *(undefined4 *)(lVar13 + 0x260) = uVar6;
    *(undefined4 *)(lVar13 + 0x264) = uVar7;
    *(undefined4 *)(lVar13 + 0x35c) = uVar8;
  }
  if ((lVar10 != 0) && (lVar10 = FUN_142d821e0(lVar10,param_5), lVar10 != 0)) {
    if ((param_3 == 0) && ((*(uint *)(param_1 + 1) >> 4 & 1) == 0)) {
      param_3 = param_1[4];
    }
    FUN_142d68ea0(lVar10,param_3,param_2,1,&DAT_1466ad4f0,0);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return 1;
}



// FUNCTION 143058c00 FUN_143058c00 body=521 status=ok
// SIG undefined FUN_143058c00(void)

ulonglong FUN_143058c00(longlong *param_1,longlong param_2,longlong param_3,char *param_4)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined8 local_68;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_48 [64];
  
  local_68 = *(undefined8 *)(param_2 + 0x14);
  local_60 = *(float *)(param_2 + 0x1c);
  uVar1 = (**(code **)(*param_1 + 0x368))(local_68,&local_58,param_4,&local_68,param_3);
  if (((local_58 == 0.0) && (local_54 == 0.0)) && (local_50 == 0.0)) {
    if ((*param_4 == '\x03') && (param_4[0xd] != '\0')) {
      uVar1 = (**(code **)(*param_1 + 0x360))
                        (param_1,param_2,*(undefined8 *)(param_3 + 0x118),param_4);
      return uVar1;
    }
    return uVar1 & 0xffffffffffffff00;
  }
  local_58 = local_58 - *(float *)(param_2 + 0x14);
  local_54 = local_54 - *(float *)(param_2 + 0x18);
  local_60 = local_50 - *(float *)(param_2 + 0x1c);
  fVar2 = local_54 * local_54 + local_58 * local_58 + local_60 * local_60;
  if (fVar2 != 1.0) {
    if (fVar2 < 1e-08) {
      local_60 = DAT_1468b5d98;
      local_68 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_143058d99;
    }
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    local_58 = local_58 * fVar3;
    local_54 = local_54 * fVar3;
    local_60 = local_60 * fVar3;
  }
  local_68 = CONCAT44(local_54,local_58);
LAB_143058d99:
  (**(code **)(*param_1 + 0x370))
            (param_1,local_48,&local_68,*(undefined8 *)(param_3 + 0x118),
             *(undefined4 *)(param_4 + 0x10));
  uVar1 = (**(code **)(*param_1 + 0x358))
                    (param_1,param_2,*(undefined8 *)(param_3 + 0x118),local_48,param_4);
  return uVar1;
}



// FUNCTION 143058e10 FUN_143058e10 body=146 status=ok
// SIG undefined FUN_143058e10(void)

void FUN_143058e10(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  FUN_14223a2c0();
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x4b5) != '\0') {
      FTickFunction::UnRegisterTickFunction(param_1 + 0x4a8);
    }
  }
  else if ((*(byte *)(param_1 + 0x4b4) & 2) != 0) {
    *(longlong *)(param_1 + 0x4f8) = param_1;
    FUN_14288e3d0(param_1 + 0x4a8,*(byte *)(param_1 + 0x4b4) >> 2 & 1);
    FTickFunction::AddPrerequisite(param_1 + 0x4a8,param_1,param_1 + 0x28);
    uVar1 = AActor::GetLevel(param_1);
    FTickFunction::RegisterTickFunction(param_1 + 0x4a8,uVar1);
    return;
  }
  return;
}



// FUNCTION 143058eb0 FUN_143058eb0 body=341 status=ok
// SIG undefined FUN_143058eb0(void)

void FUN_143058eb0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  FUN_14223a2c0();
  if (param_2 == '\0') {
    uVar3 = 0;
    plVar2 = *(longlong **)(param_1 + 0x470);
    uVar4 = (longlong)*(int *)(param_1 + 0x478) & 0x1fffffffffffffff;
    if (plVar2 + *(int *)(param_1 + 0x478) < plVar2) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      do {
        if (*(char *)(*plVar2 + 0x3d) != '\0') {
          FTickFunction::UnRegisterTickFunction(*plVar2 + 0x30);
        }
        plVar2 = plVar2 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar4);
    }
    if (*(char *)(param_1 + 0x545) != '\0') {
      FTickFunction::UnRegisterTickFunction(param_1 + 0x538);
    }
  }
  else {
    uVar1 = AActor::GetLevel(param_1);
    plVar2 = *(longlong **)(param_1 + 0x470);
    uVar3 = 0;
    uVar4 = (longlong)*(int *)(param_1 + 0x478) & 0x1fffffffffffffff;
    if (plVar2 + *(int *)(param_1 + 0x478) < plVar2) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      do {
        FTickFunction::RegisterTickFunction(*plVar2 + 0x30,uVar1);
        uVar3 = uVar3 + 1;
        plVar2 = plVar2 + 1;
      } while (uVar3 != uVar4);
    }
    if ((*(byte *)(param_1 + 0x544) & 2) != 0) {
      *(longlong *)(param_1 + 0x588) = param_1;
      FUN_14288e3d0(param_1 + 0x538,*(byte *)(param_1 + 0x544) >> 2 & 1);
      FTickFunction::AddPrerequisite(param_1 + 0x538,param_1,param_1 + 0x28);
      FTickFunction::RegisterTickFunction(param_1 + 0x538,uVar1);
    }
  }
  return;
}



// FUNCTION 143059010 FUN_143059010 body=103 status=ok
// SIG undefined FUN_143059010(void)

void FUN_143059010(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      local_res10[0] = param_2;
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x28,local_res10);
    }
  }
  return;
}



// FUNCTION 143059080 FUN_143059080 body=267 status=ok
// SIG undefined FUN_143059080(void)

void FUN_143059080(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x55) != '\0') {
      FUN_14288e3d0(param_1 + 0x48,0);
      FTickFunction::UnRegisterTickFunction(param_1 + 0x48);
      uVar3 = 0;
      plVar4 = *(longlong **)(param_1 + 0x310);
      uVar5 = (longlong)*(int *)(param_1 + 0x318) & 0x1fffffffffffffff;
      if (plVar4 + *(int *)(param_1 + 0x318) < plVar4) {
        uVar5 = uVar3;
      }
      if (uVar5 != 0) {
        do {
          lVar1 = *plVar4;
          if ((lVar1 != 0) && (*(longlong *)(lVar1 + 400) == 0)) {
            FTickFunction::RemovePrerequisite(lVar1 + 0x30,param_1,param_1 + 0x48);
          }
          plVar4 = plVar4 + 1;
          uVar3 = uVar3 + 1;
        } while (uVar3 != uVar5);
      }
    }
    return;
  }
  *(longlong *)(param_1 + 0x98) = param_1;
  FUN_14288e3d0(param_1 + 0x48,1);
  if (*(char *)(param_1 + 0x55) == '\0') {
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar2 = 0;
    }
    uVar2 = AActor::GetLevel(uVar2);
    FTickFunction::RegisterTickFunction(param_1 + 0x48,uVar2);
  }
  FUN_14305b2c0(param_1,param_1 + 0x48);
  return;
}



// FUNCTION 143059190 FUN_143059190 body=540 status=ok
// SIG undefined FUN_143059190(void)

void FUN_143059190(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  float fVar10;
  undefined8 local_res8;
  
  *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xfffffbff;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  plVar9 = (longlong *)0x0;
  if (((longlong *)param_1[0x84] != (longlong *)0x0) &&
     (plVar9 = param_1, (longlong *)param_1[0x84] != param_1 + 9)) {
    plVar9 = (longlong *)param_1[4];
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar6 == 0) {
    fVar10 = 3.4028235e+38;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    fVar10 = *(float *)(lVar6 + 0x790) - 0.1;
  }
  iVar5 = (int)param_1[99] + -1;
  lVar6 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      lVar1 = *(longlong *)(param_1[0x62] + lVar6 * 8);
      if (lVar1 != 0) {
        if (param_1[0x84] != 0) {
          FTickFunction::RemovePrerequisite(lVar1 + 0x30,plVar9);
        }
        lVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pwVar8 = _guard_xfg_dispatch_icall_nop
                             (L"&ULightProjectile::OnParticleSystemFinished",L"::");
          pwVar4 = (wchar_t *)0x0;
          while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
            pwVar4 = pwVar3;
          }
          FName::FName(&local_res8,pwVar4 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 0x8a8,param_1,local_res8);
          if (((*(uint *)((longlong)param_1 + 0xe4) & 0x200000) != 0) ||
             (*(float *)(lVar1 + 0x36c) <= fVar10 && fVar10 != *(float *)(lVar1 + 0x36c))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          FUN_142600fa0(lVar1);
          if (bVar2) {
            FUN_142608f20(lVar1);
          }
        }
        else {
          FUN_142359580(lVar1);
        }
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  FUN_1405ac8f0(param_1 + 100,0,4);
  FUN_1405ac8f0(param_1 + 0x68,0,4);
  *(undefined4 *)(param_1 + 99) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x31c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x62,0);
    return;
  }
  return;
}



// FUNCTION 1430593b0 FUN_1430593b0 body=512 status=ok
// SIG undefined FUN_1430593b0(void)

void FUN_1430593b0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  
  uVar5 = 0;
  if (0 < (int)param_1[0x90]) {
    lVar6 = param_1[0x8f];
    uVar4 = uVar5;
    uVar11 = uVar5;
    while (iVar10 = (int)uVar11, *(longlong **)(lVar6 + uVar4 * 8) != param_2) {
      uVar11 = (ulonglong)(iVar10 + 1);
      uVar4 = uVar4 + 1;
      if ((longlong)(int)param_1[0x90] <= (longlong)uVar4) {
        return;
      }
    }
    iVar8 = (int)param_1[0x90];
    iVar2 = (iVar8 - iVar10) + -1;
    if (0 < iVar2) {
      iVar2 = 1;
    }
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + (longlong)iVar10 * 8),
                 (void *)(lVar6 + (longlong)(iVar8 - iVar2) * 8),(longlong)iVar2 << 3);
      iVar8 = (int)param_1[0x90];
    }
    *(int *)(param_1 + 0x90) = iVar8 + -1;
    if (param_2 != (longlong *)0x0) {
      iVar10 = *(int *)((longlong)param_2 + 0xc);
      if (iVar10 < (int)DAT_1469e91c4) {
        uVar9 = iVar10 >> 0x1f & 0xffff;
        uVar3 = iVar10 + uVar9;
        uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
      }
      if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) {
        *(byte *)((longlong)param_2 + 0x719) = *(byte *)((longlong)param_2 + 0x719) & 0xfb;
        (**(code **)(*param_2 + 0x418))(param_2,&DAT_146532190);
        FUN_142359580(param_2);
        *(undefined4 *)(param_2 + 0xe7) = 0;
        if (*(int *)((longlong)param_2 + 0x73c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xe6,0);
        }
        *(undefined4 *)(param_2 + 0xe9) = 0;
        if (*(int *)((longlong)param_2 + 0x74c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xe8,0);
        }
        *(undefined4 *)(param_2 + 0xeb) = 0;
        if (*(int *)((longlong)param_2 + 0x75c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xea,0);
        }
        *(undefined4 *)(param_2 + 0xed) = 0;
        if (*(int *)((longlong)param_2 + 0x76c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xec,0);
        }
        *(byte *)(param_2 + 0xe3) = *(byte *)(param_2 + 0xe3) & 0xdf;
        *(undefined4 *)(param_2 + 0xe5) = 0;
        if (0x7fffffff < *(uint *)((longlong)param_2 + 0x72c)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::
          ResizeTo(param_2 + 0xe4,0);
        }
        FUN_1423971c0(param_2,0x7f7fffff);
        lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        iVar10 = (int)param_1[0x92];
        uVar1 = *(undefined4 *)(lVar6 + 0x790);
        *(int *)(param_1 + 0x92) = iVar10 + 1;
        if (*(int *)((longlong)param_1 + 0x494) < iVar10 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x91,iVar10);
        }
        puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + param_1[0x91]);
        *(undefined4 *)(puVar7 + 1) = uVar1;
        *puVar7 = param_2;
      }
    }
  }
  return;
}



// FUNCTION 1430595b0 FUN_1430595b0 body=512 status=ok
// SIG undefined FUN_1430595b0(void)

void FUN_1430595b0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  
  uVar5 = 0;
  if (0 < (int)param_1[0x95]) {
    lVar6 = param_1[0x94];
    uVar4 = uVar5;
    uVar11 = uVar5;
    while (iVar10 = (int)uVar11, *(longlong **)(lVar6 + uVar4 * 8) != param_2) {
      uVar11 = (ulonglong)(iVar10 + 1);
      uVar4 = uVar4 + 1;
      if ((longlong)(int)param_1[0x95] <= (longlong)uVar4) {
        return;
      }
    }
    iVar8 = (int)param_1[0x95];
    iVar2 = (iVar8 - iVar10) + -1;
    if (0 < iVar2) {
      iVar2 = 1;
    }
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + (longlong)iVar10 * 8),
                 (void *)(lVar6 + (longlong)(iVar8 - iVar2) * 8),(longlong)iVar2 << 3);
      iVar8 = (int)param_1[0x95];
    }
    *(int *)(param_1 + 0x95) = iVar8 + -1;
    if (param_2 != (longlong *)0x0) {
      iVar10 = *(int *)((longlong)param_2 + 0xc);
      if (iVar10 < (int)DAT_1469e91c4) {
        uVar9 = iVar10 >> 0x1f & 0xffff;
        uVar3 = iVar10 + uVar9;
        uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
      }
      if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) {
        *(byte *)((longlong)param_2 + 0x719) = *(byte *)((longlong)param_2 + 0x719) & 0xfb;
        (**(code **)(*param_2 + 0x418))(param_2,&DAT_146532190);
        FUN_142359580(param_2);
        *(undefined4 *)(param_2 + 0xe7) = 0;
        if (*(int *)((longlong)param_2 + 0x73c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xe6,0);
        }
        *(undefined4 *)(param_2 + 0xe9) = 0;
        if (*(int *)((longlong)param_2 + 0x74c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xe8,0);
        }
        *(undefined4 *)(param_2 + 0xeb) = 0;
        if (*(int *)((longlong)param_2 + 0x75c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xea,0);
        }
        *(undefined4 *)(param_2 + 0xed) = 0;
        if (*(int *)((longlong)param_2 + 0x76c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2 + 0xec,0);
        }
        *(byte *)(param_2 + 0xe3) = *(byte *)(param_2 + 0xe3) & 0xdf;
        *(undefined4 *)(param_2 + 0xe5) = 0;
        if (0x7fffffff < *(uint *)((longlong)param_2 + 0x72c)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::
          ResizeTo(param_2 + 0xe4,0);
        }
        FUN_1423971c0(param_2,0x7f7fffff);
        lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        iVar10 = (int)param_1[0x97];
        uVar1 = *(undefined4 *)(lVar6 + 0x790);
        *(int *)(param_1 + 0x97) = iVar10 + 1;
        if (*(int *)((longlong)param_1 + 0x4bc) < iVar10 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x96,iVar10);
        }
        puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + param_1[0x96]);
        *(undefined4 *)(puVar7 + 1) = uVar1;
        *puVar7 = param_2;
      }
    }
  }
  return;
}



// FUNCTION 1430597b0 FUN_1430597b0 body=71 status=ok
// SIG undefined FUN_1430597b0(void)

void FUN_1430597b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_2);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_2);
    if (*(char *)(lVar1 + 0xe0) != '\0') {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001430597ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x278))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143059800 FUN_143059800 body=437 status=ok
// SIG undefined FUN_143059800(void)

void FUN_143059800(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  plVar8 = *(longlong **)(param_1 + 0x458);
  plVar1 = plVar8 + *(int *)(param_1 + 0x460);
  if (plVar8 != plVar1) {
    lVar9 = 0;
    do {
      plVar3 = (longlong *)*plVar8;
      if (plVar3 != (longlong *)0x0) {
        if (param_2[3] != 0) {
          lVar4 = UMapBuildDataRegistry::GetPrivateStaticClass();
          lVar7 = param_2[3];
          lVar6 = lVar7;
          if (lVar7 != 0) {
LAB_143059867:
            if (lVar6 != lVar4) goto code_r0x00014305986c;
            if (lVar7 != 0) {
              lVar7 = lVar9;
              if (plVar3[0x1d] != 0) {
                lVar4 = UMapBuildDataRegistry::GetPrivateStaticClass();
                for (lVar6 = plVar3[0x1d];
                    (lVar7 = lVar9, lVar6 != 0 && (lVar7 = plVar3[0x1d], lVar6 != lVar4));
                    lVar6 = *(longlong *)(lVar6 + 0x30)) {
                }
              }
              lVar6 = lVar9;
              if (param_2[3] != 0) {
                lVar5 = UMapBuildDataRegistry::GetPrivateStaticClass();
                for (lVar4 = param_2[3];
                    (lVar6 = lVar9, lVar4 != 0 && (lVar6 = param_2[3], lVar4 != lVar5));
                    lVar4 = *(longlong *)(lVar4 + 0x30)) {
                }
              }
              if (lVar7 == lVar6) goto LAB_1430598e2;
              goto LAB_143059990;
            }
          }
        }
LAB_1430598e2:
        if ((param_2[4] == 0) || (plVar3[0x3c] == param_2[4])) {
          cVar2 = (char)param_2[1];
          if (cVar2 != '\0') {
            if (cVar2 != '\x05') {
              if (cVar2 == '\x06') {
                if ((plVar3[0x1e] == *param_2) && (plVar3[0x23] == param_2[2])) goto LAB_143059984;
              }
              else {
                if (cVar2 == '\x01') {
                  lVar7 = plVar3[0x29];
                }
                else if (cVar2 == '\x02') {
                  lVar7 = plVar3[0x28];
                }
                else if (cVar2 == '\x03') {
                  lVar7 = plVar3[0x1e];
                }
                else {
                  lVar7 = lVar9;
                  if (cVar2 == '\x04') {
                    lVar7 = plVar3[0x23];
                  }
                }
                if (lVar7 == *param_2) goto LAB_143059984;
              }
              goto LAB_143059990;
            }
            if ((plVar3[0x1e] != *param_2) && (plVar3[0x23] != *param_2)) goto LAB_143059990;
          }
LAB_143059984:
          (**(code **)(*plVar3 + 0x278))(plVar3);
        }
      }
LAB_143059990:
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  return;
code_r0x00014305986c:
  lVar6 = *(longlong *)(lVar6 + 0x30);
  if (lVar6 == 0) goto LAB_1430598e2;
  goto LAB_143059867;
}



// FUNCTION 1430599c0 FUN_1430599c0 body=43 status=ok
// SIG undefined FUN_1430599c0(void)

void FUN_1430599c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_30 = 3;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = param_2;
  local_18 = param_3;
  FUN_143059800(0,&local_38);
  return;
}



// FUNCTION 1430599f0 FUN_1430599f0 body=43 status=ok
// SIG undefined FUN_1430599f0(void)

void FUN_1430599f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_30 = 5;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = param_2;
  local_18 = param_3;
  FUN_143059800(0,&local_38);
  return;
}



// FUNCTION 143059a20 FUN_143059a20 body=140 status=ok
// SIG undefined FUN_143059a20(void)

void FUN_143059a20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x3e0);
  iVar5 = *(int *)(param_1 + 1000);
  plVar3 = plVar1;
  if (plVar1 != plVar1 + iVar5) {
    while (*plVar3 != param_2) {
      plVar3 = plVar3 + 1;
      if (plVar3 == plVar1 + iVar5) {
        return;
      }
    }
    iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
    if (iVar2 != -1) {
      iVar4 = (iVar5 - iVar2) + -1;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop(plVar1 + iVar2,plVar1 + (iVar5 - iVar4),(longlong)iVar4 << 3);
        iVar5 = *(int *)(param_1 + 1000);
      }
      *(int *)(param_1 + 1000) = iVar5 + -1;
    }
  }
  return;
}



// FUNCTION 143059ab0 FUN_143059ab0 body=773 status=ok
// SIG undefined FUN_143059ab0(void)

void FUN_143059ab0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  wchar_t *pwVar4;
  uint uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t *pwVar10;
  undefined8 local_res8;
  
  if ((*(byte *)(param_1 + 0xe4) & 0x10) == 0) {
    return;
  }
  pwVar10 = (wchar_t *)0x0;
  pwVar8 = pwVar10;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    pwVar8 = *(wchar_t **)(param_1 + 0x20);
  }
  if ((char)pwVar8[0x94] != '\x03') {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x1c0);
  if (lVar2 == 0) goto LAB_143059bc7;
  if ((*(byte *)(lVar2 + 0x94) & 2) == 0) {
    iVar1 = *(int *)(lVar2 + 0xc);
    pwVar8 = pwVar10;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar9;
      pwVar8 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18);
    }
    if ((*(uint *)(pwVar8 + 4) >> 0x1d & 1) != 0) goto LAB_143059b53;
    bVar3 = false;
  }
  else {
LAB_143059b53:
    bVar3 = true;
  }
  if (!bVar3) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAttachedActorDestroyed",L"::");
    pwVar8 = pwVar10;
    while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar8 = pwVar4;
    }
    FName::FName(&local_res8,pwVar8 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x1c0) + 0x290,param_1,local_res8);
  }
LAB_143059bc7:
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  if (lVar2 != 0) {
    lVar7 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar1 = *(int *)(lVar2 + 0xc);
      pwVar8 = pwVar10;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar9 = iVar1 >> 0x1f & 0xffff;
        uVar5 = iVar1 + uVar9;
        pwVar8 = (wchar_t *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                 (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18);
      }
      if ((*(uint *)(pwVar8 + 4) >> 0x1d & 1) == 0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop
                           (L"&ThisClass::OnAttachedComponentCollisionChanged",L"::");
        pwVar8 = pwVar10;
        while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar8 = pwVar4;
        }
        FName::FName(&local_res8,pwVar8 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar2 + 0x5b0,param_1,local_res8);
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAttachedComponentUnregistered",L"::")
        ;
        pwVar8 = pwVar10;
        while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar8 = pwVar4;
        }
        FName::FName(&local_res8,pwVar8 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar2 + 0x128,param_1,local_res8);
        lVar7 = UGGameModeButtonListItemContent::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAttachedActorFractured",L"::");
          while (pwVar6 = pwVar8, pwVar6 != (wchar_t *)0x0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
            pwVar10 = pwVar6;
          }
          FName::FName(&local_res8,pwVar10 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar2 + 0xa68,param_1,local_res8);
        }
      }
    }
  }
  return;
}



// FUNCTION 143059dc0 FUN_143059dc0 body=87 status=ok
// SIG undefined FUN_143059dc0(void)

void FUN_143059dc0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (((((longlong *)*param_1 != (longlong *)0x0) &&
       (lVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar2 != 0)) &&
      (iVar1 = FUN_1428cf800(lVar2), iVar1 != 3)) && (lVar2 = FUN_14304c8c0(lVar2), lVar2 != 0)) {
    FUN_143059800(lVar2,param_1);
  }
  return;
}



// FUNCTION 143059e20 FUN_143059e20 body=108 status=ok
// SIG undefined FUN_143059e20(void)

void FUN_143059e20(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar1 = FUN_14304c8c0(uVar2);
    if (lVar1 != 0) {
      local_30 = 3;
      local_28 = 0;
      uStack_20 = 0;
      local_38 = param_1;
      local_18 = param_2;
      FUN_143059800(lVar1,&local_38);
    }
  }
  return;
}



// FUNCTION 143059e90 FUN_143059e90 body=87 status=ok
// SIG undefined FUN_143059e90(void)

void FUN_143059e90(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (((((longlong *)*param_1 != (longlong *)0x0) &&
       (lVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar2 != 0)) &&
      (iVar1 = FUN_1428cf800(lVar2), iVar1 != 3)) && (lVar2 = FUN_14304ca20(lVar2), lVar2 != 0)) {
    FUN_143059ef0(lVar2,param_1);
  }
  return;
}



// FUNCTION 143059ef0 FUN_143059ef0 body=384 status=ok
// SIG undefined FUN_143059ef0(void)

void FUN_143059ef0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  plVar8 = *(longlong **)(param_1 + 0x458);
  plVar1 = plVar8 + *(int *)(param_1 + 0x460);
  if (plVar8 != plVar1) {
    lVar9 = 0;
    do {
      plVar3 = (longlong *)*plVar8;
      if (plVar3 != (longlong *)0x0) {
        cVar2 = (char)param_2[1];
        if (cVar2 != '\0') {
          if (cVar2 == '\x01') {
            lVar7 = plVar3[0x2d];
          }
          else if (cVar2 == '\x02') {
            lVar7 = plVar3[0x28];
          }
          else if (cVar2 == '\x03') {
            lVar7 = plVar3[0x29];
          }
          else if (cVar2 == '\x04') {
            lVar7 = plVar3[0x2a];
          }
          else {
            lVar7 = lVar9;
            if (cVar2 == '\x05') {
              lVar7 = plVar3[0x38];
            }
          }
          if (lVar7 != *param_2) goto LAB_14305a04b;
        }
        if (param_2[2] != 0) {
          lVar4 = FUN_1430aef40();
          lVar7 = param_2[2];
          lVar6 = lVar7;
          if (lVar7 != 0) {
LAB_143059fb2:
            if (lVar6 != lVar4) goto code_r0x000143059fb7;
            if (lVar7 != 0) {
              lVar7 = lVar9;
              if (plVar3[0x22] != 0) {
                lVar4 = FUN_1430aef40();
                for (lVar6 = plVar3[0x22];
                    (lVar7 = lVar9, lVar6 != 0 && (lVar7 = plVar3[0x22], lVar6 != lVar4));
                    lVar6 = *(longlong *)(lVar6 + 0x30)) {
                }
              }
              lVar6 = lVar9;
              if (param_2[2] != 0) {
                lVar5 = FUN_1430aef40();
                for (lVar4 = param_2[2];
                    (lVar6 = lVar9, lVar4 != 0 && (lVar6 = param_2[2], lVar4 != lVar5));
                    lVar4 = *(longlong *)(lVar4 + 0x30)) {
                }
              }
              if (lVar7 == lVar6) goto LAB_14305a026;
              goto LAB_14305a04b;
            }
          }
        }
LAB_14305a026:
        if ((param_2[3] == 0) || (plVar3[0x1e] == param_2[3])) {
          (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        }
      }
LAB_14305a04b:
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  return;
code_r0x000143059fb7:
  lVar6 = *(longlong *)(lVar6 + 0x30);
  if (lVar6 == 0) goto LAB_14305a026;
  goto LAB_143059fb2;
}



// FUNCTION 14305a070 FUN_14305a070 body=304 status=ok
// SIG undefined FUN_14305a070(void)

byte FUN_14305a070(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  float fVar8;
  
  bVar1 = FUN_14223b1f0();
  cVar2 = FUN_1423f2b70(param_2,0,*(undefined4 *)((longlong)param_1 + 0x49c));
  if (cVar2 != '\0') {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar4 == 0) {
      fVar8 = -1.0;
    }
    else {
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      fVar8 = *(float *)(lVar4 + 0x790) - 0.5;
    }
    uVar5 = 0;
    plVar6 = (longlong *)param_1[0x8d];
    uVar7 = (longlong)(int)param_1[0x8e] & 0x1fffffffffffffff;
    if (plVar6 + (int)param_1[0x8e] < plVar6) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) {
      do {
        lVar4 = *plVar6;
        if ((lVar4 != 0) &&
           ((*(char *)(lVar4 + 0x48) == '\0' || (fVar8 < *(float *)(lVar4 + 0x4c))))) {
          cVar2 = FUN_1423f2b70(param_2,*(int *)(lVar4 + 0x40) + 1,*(undefined4 *)(lVar4 + 0x44));
          if (cVar2 != '\0') {
            bVar3 = FUN_1423fb1a0(param_2,lVar4,param_3,param_4);
            bVar1 = bVar1 | bVar3;
          }
        }
        plVar6 = plVar6 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar7);
    }
    return bVar1;
  }
  return bVar1;
}



// FUNCTION 14305a1a0 FUN_14305a1a0 body=304 status=ok
// SIG undefined FUN_14305a1a0(void)

byte FUN_14305a1a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  float fVar8;
  
  bVar1 = FUN_14223b1f0();
  cVar2 = FUN_1423f2b70(param_2,0,(int)param_1[0xa6]);
  if (cVar2 != '\0') {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar4 == 0) {
      fVar8 = -1.0;
    }
    else {
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      fVar8 = *(float *)(lVar4 + 0x790) - 0.5;
    }
    uVar5 = 0;
    plVar6 = (longlong *)param_1[0x92];
    uVar7 = (longlong)(int)param_1[0x93] & 0x1fffffffffffffff;
    if (plVar6 + (int)param_1[0x93] < plVar6) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) {
      do {
        lVar4 = *plVar6;
        if ((lVar4 != 0) &&
           ((*(char *)(lVar4 + 0x38) == '\0' || (fVar8 < *(float *)(lVar4 + 0x3c))))) {
          cVar2 = FUN_1423f2b70(param_2,*(int *)(lVar4 + 0x30) + 1,*(undefined4 *)(lVar4 + 0x34));
          if (cVar2 != '\0') {
            bVar3 = FUN_1423fb1a0(param_2,lVar4,param_3,param_4);
            bVar1 = bVar1 | bVar3;
          }
        }
        plVar6 = plVar6 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar7);
    }
    return bVar1;
  }
  return bVar1;
}



// FUNCTION 14305a2d0 FUN_14305a2d0 body=13 status=ok
// SIG undefined FUN_14305a2d0(void)

void FUN_14305a2d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x17c);
  return;
}



// FUNCTION 14305a2e0 FUN_14305a2e0 body=476 status=ok
// SIG undefined FUN_14305a2e0(void)

void FUN_14305a2e0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 local_res8;
  
  plVar1 = (longlong *)(param_1 + 0x400);
  plVar12 = (longlong *)*plVar1;
  plVar11 = plVar12 + (longlong)*(int *)(param_1 + 0x408) * 6;
  for (; plVar12 != plVar11; plVar12 = plVar12 + 6) {
    lVar13 = *plVar12;
    if (lVar13 != 0) {
      iVar6 = *(int *)(lVar13 + 0xc);
      if (iVar6 < (int)DAT_1469e91c4) {
        uVar9 = iVar6 >> 0x1f & 0xffff;
        uVar5 = iVar6 + uVar9;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
        lVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pwVar8 = _guard_xfg_dispatch_icall_nop
                             (L"&ULightBeam::OnTrackedImpactParticleSystemFinished",L"::");
          pwVar4 = (wchar_t *)0x0;
          while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
            pwVar4 = pwVar3;
          }
          FName::FName(&local_res8,pwVar4 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar13 + 0x8a8,param_1,local_res8);
          FUN_142600fa0(lVar13);
        }
      }
    }
    FUN_1405ac8f0(plVar12 + 2,200,0);
  }
  iVar6 = *(int *)(param_1 + 0x40c);
  iVar10 = *(int *)(param_1 + 0x408);
  if (iVar6 < 0) {
    if (iVar10 != 0) {
      lVar13 = *plVar1 + 0x10;
      do {
        FUN_140591060(lVar13);
        lVar13 = lVar13 + 0x30;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      iVar6 = *(int *)(param_1 + 0x40c);
    }
    *(undefined4 *)(param_1 + 0x408) = 0;
    if (iVar6 == 0) {
      return;
    }
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar1,0);
    return;
  }
  if (iVar10 != 0) {
    lVar13 = *plVar1 + 0x10;
    do {
      FUN_140591060(lVar13);
      lVar13 = lVar13 + 0x30;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x408) = 0;
  return;
}



// FUNCTION 14305a4c0 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x400);
  if (param_3 < 0x41) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 4);
    pvVar1 = *(void **)((longlong)param_1 + 0x400);
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
        *(void **)((longlong)param_1 + 0x400) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 4);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x400) = uVar2;
  return;
}



// FUNCTION 14305a570 FUN_14305a570 body=115 status=ok
// SIG undefined FUN_14305a570(void)

void FUN_14305a570(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x41) {
      iVar1 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>::ResizeAllocation
              (param_1,0,iVar1,0x10);
  }
  *(int *)(param_1 + 0x40c) = iVar1;
  return;
}



// FUNCTION 14305a5f0 ResizeGrow body=137 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FLinearColor,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (uVar1 < 0x41) {
    iVar2 = 0x40;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x40c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
    iVar2 = (int)(uVar3 >> 4);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x40c) = iVar2;
  TInlineAllocator<64,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>::ResizeAllocation
            (param_1,param_2,iVar2,0x10);
  return;
}



// FUNCTION 14305a680 FUN_14305a680 body=74 status=ok
// SIG undefined FUN_14305a680(void)

void FUN_14305a680(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    FUN_143043a70();
    *(undefined1 *)(param_2 + 0x38) = 1;
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    *(float *)(param_2 + 0x3c) = *(float *)(lVar1 + 0x790) + 0.2;
  }
  return;
}



// FUNCTION 14305a6d0 FUN_14305a6d0 body=1062 status=ok
// SIG undefined FUN_14305a6d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14305a6d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  undefined8 local_148;
  float local_140;
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_120 [12];
  undefined1 local_114 [12];
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 local_98;
  ulonglong local_88;
  
  fVar13 = DAT_1468b5d98;
  fVar11 = DAT_1468b5d94;
  fVar10 = DAT_1468b5d90;
  uVar5 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (param_1[0x28] != 0) {
    local_88 = uVar5;
    uVar6 = (**(code **)(*param_1 + 0x148))();
    uVar7 = UBehaviorTreeManager::GetCurrent(uVar6);
    uVar5 = uVar7;
    if (DAT_146b33f38 == 0) {
      uVar5 = FUN_142d7ebe0();
    }
    lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (((uVar7 != 0) && (lVar4 != 0)) && (*(longlong *)(lVar4 + 0x38) != 0)) {
      uVar6 = FUN_1430b1980();
      lVar8 = FUN_14247f5b0(DAT_146b17150 + 0xcf8,uVar6);
      uVar5 = 0;
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(param_2 + 0x14);
        *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(param_2 + 0x1c);
        puVar9 = (undefined8 *)FVector::Rotation(param_2 + 0x2c,local_120);
        *(undefined8 *)(lVar8 + 0x3c) = *puVar9;
        *(undefined4 *)(lVar8 + 0x44) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(lVar8 + 0x48) = param_1[0x28];
        local_108 = *(undefined8 *)(lVar4 + 0x38);
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0xffffffff;
        local_bc = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_100 = lVar8;
        FUN_142bef990(uVar7,&local_130,&local_108,0);
        puVar9 = (undefined8 *)FUN_142be50e0(local_130,local_114,0);
        local_148 = *puVar9;
        local_140 = *(float *)(puVar9 + 1);
        FUN_14248cf90(DAT_146b17150 + 0xcf8,lVar8);
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_128 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar2 = (int *)((longlong)local_128 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_128 + 8))(local_128,1);
            }
          }
        }
        if (local_a0 != 0) {
          FMemory::Free();
        }
        local_a8 = 0;
        if (local_b0 != 0) {
          FMemory::Free();
        }
        uVar5 = TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                          (&uStack_f0);
        fVar10 = (float)local_148;
        fVar11 = local_148._4_4_;
        fVar13 = local_140;
      }
    }
    if (((fVar10 != DAT_1468b5d90) || (fVar11 != DAT_1468b5d94)) || (fVar13 != DAT_1468b5d98)) {
      local_168 = fVar10 - *(float *)(param_2 + 0x14);
      local_164 = fVar11 - *(float *)(param_2 + 0x18);
      local_160 = fVar13 - *(float *)(param_2 + 0x1c);
      fVar10 = local_164 * local_164 + local_168 * local_168 + local_160 * local_160;
      if (fVar10 != 1.0) {
        if (1e-08 <= fVar10) {
          auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
          fVar11 = auVar12._0_4_;
          fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
          fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
          local_168 = local_168 * fVar11;
          local_164 = local_164 * fVar11;
          local_160 = local_160 * fVar11;
        }
        else {
          local_168 = DAT_1468b5d90;
          local_164 = DAT_1468b5d94;
          local_160 = DAT_1468b5d98;
        }
      }
      local_178 = 0x3f800000;
      (**(code **)(*param_1 + 0x370))(param_1,&local_158,&local_168,param_1[0x28]);
      fVar10 = SQRT(*(float *)(param_1 + 0x5e) * *(float *)(param_1 + 0x5e) +
                    *(float *)((longlong)param_1 + 0x2f4) * *(float *)((longlong)param_1 + 0x2f4) +
                    *(float *)(param_1 + 0x5f) * *(float *)(param_1 + 0x5f));
      if (lVar4 != 0) {
        fVar10 = fVar10 * *(float *)(lVar4 + 0x40);
      }
      param_1[0x5e] = CONCAT44(local_154 * fVar10,local_158 * fVar10);
      *(float *)(param_1 + 0x5f) = local_150 * fVar10;
      return CONCAT71((uint7)(uint3)((uint)(local_150 * fVar10) >> 8),1);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 14305ab00 FUN_14305ab00 body=174 status=ok
// SIG undefined FUN_14305ab00(void)

void FUN_14305ab00(longlong *param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  *(float *)((longlong)param_1 + 0x18c) = param_2 * *(float *)((longlong)param_1 + 0x18c);
  *(float *)(param_1 + 0x32) = param_2 * *(float *)(param_1 + 0x32);
  *(float *)((longlong)param_1 + 0x194) = param_2 * *(float *)((longlong)param_1 + 0x194);
  (**(code **)(*param_1 + 0x470))();
  plVar1 = (longlong *)param_1[0x30];
  if ((plVar1 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*plVar1 + 0x400))(plVar1,0), cVar2 != '\0')) {
    local_18 = *(undefined8 *)((longlong)param_1 + 0x18c);
    local_10 = *(undefined4 *)((longlong)param_1 + 0x194);
    FUN_142717fd0(param_1[0x30],&local_18,0,0);
  }
  return;
}



// FUNCTION 14305abb0 FUN_14305abb0 body=28 status=ok
// SIG undefined FUN_14305abb0(void)

void FUN_14305abb0(longlong *param_1,float param_2)

{
  if (param_2 != *(float *)(param_1 + 0x19)) {
    *(float *)(param_1 + 0x19) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014305abc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))();
    return;
  }
  return;
}



// FUNCTION 14305abd0 FUN_14305abd0 body=175 status=ok
// SIG undefined FUN_14305abd0(void)

void FUN_14305abd0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((*(uint *)(param_1 + 0xe4) >> 3 & 1) != (uint)param_2) {
    *(uint *)(param_1 + 0xe4) = (uint)param_2 * 8 | *(uint *)(param_1 + 0xe4) & 0xfffffff7;
    uVar3 = 0;
    plVar1 = *(longlong **)(param_1 + 0x310);
    uVar2 = (longlong)*(int *)(param_1 + 0x318) & 0x1fffffffffffffff;
    if (plVar1 + *(int *)(param_1 + 0x318) < plVar1) {
      uVar2 = uVar3;
    }
    if (uVar2 != 0) {
      do {
        if (*plVar1 != 0) {
          FUN_142397540(*plVar1,*(uint *)(param_1 + 0xe4) >> 3 & 0xffffff01,1);
        }
        plVar1 = plVar1 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar2);
    }
  }
  return;
}



// FUNCTION 14305ac80 FUN_14305ac80 body=963 status=ok
// SIG undefined FUN_14305ac80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14305ac80(longlong *param_1,char param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined **local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined ***local_138;
  longlong local_128;
  longlong local_120 [7];
  longlong *local_e8;
  int local_e0;
  longlong local_d8;
  longlong local_c8;
  longlong local_c0 [7];
  longlong *local_88;
  int local_80;
  longlong local_78;
  longlong local_68;
  longlong local_60 [7];
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (((((longlong *)*param_1 != (longlong *)0x0) &&
       (lVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar4 != 0)) &&
      (iVar3 = FUN_1428cf800(lVar4), iVar3 != 3)) && (lVar4 = FUN_14304ca20(lVar4), lVar4 != 0)) {
    local_168 = (undefined4)*param_1;
    uStack_164 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_160 = (undefined4)param_1[1];
    uStack_15c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_158 = (undefined4)param_1[2];
    uStack_154 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_150 = (undefined4)param_1[3];
    uStack_14c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_170 = &PTR_LAB_145a5f4c0;
    local_138 = &local_170;
    FUN_14303b5a0(lVar4,&local_68,&local_170);
    local_138 = (undefined ***)0x0;
    if (local_28 != (longlong *)0x0) {
      local_138 = (undefined ***)(**(code **)*local_28)(local_28,&local_170);
    }
    local_128 = local_68;
    local_e8 = (longlong *)0x0;
    if (local_138 != (undefined ***)0x0) {
      local_e8 = (longlong *)(*(code *)**local_138)(local_138,local_120);
    }
    local_e0 = 0;
    local_d8 = 0;
    plVar5 = local_e8;
    lVar4 = local_128;
    while (((-1 < local_e0 && (local_e0 < *(int *)(lVar4 + 0x460))) &&
           (((local_d8 = *(longlong *)(*(longlong *)(lVar4 + 0x458) + (longlong)local_e0 * 8),
             local_d8 == 0 || ((*(byte *)(local_d8 + 0xe4) & 1) == 0)) ||
            ((plVar5 != (longlong *)0x0 &&
             (local_178 = local_d8, cVar1 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_178),
             plVar5 = local_e8, lVar4 = local_128, cVar1 == '\0'))))))) {
      local_e0 = local_e0 + 1;
    }
    if (local_138 != (undefined ***)0x0) {
      (*(code *)(*local_138)[4])
                (local_138,CONCAT71((int7)((ulonglong)&local_170 >> 8),local_138 != &local_170));
    }
    local_138 = (undefined ***)0x0;
    if (local_28 != (longlong *)0x0) {
      local_138 = (undefined ***)(**(code **)*local_28)(local_28,&local_170);
    }
    local_c8 = local_68;
    local_88 = (longlong *)0x0;
    if (local_138 != (undefined ***)0x0) {
      local_88 = (longlong *)(*(code *)**local_138)(local_138,local_c0);
    }
    local_80 = -1;
    local_78 = 0;
    plVar5 = local_88;
    while (((-1 < local_80 && (local_80 < *(int *)(local_c8 + 0x460))) &&
           (((local_78 = *(longlong *)(*(longlong *)(local_c8 + 0x458) + (longlong)local_80 * 8),
             local_78 == 0 || ((*(byte *)(local_78 + 0xe4) & 1) == 0)) ||
            ((plVar5 != (longlong *)0x0 &&
             (local_178 = local_78, cVar1 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_178),
             plVar5 = local_88, cVar1 == '\0'))))))) {
      local_80 = local_80 + 1;
    }
    lVar4 = local_128;
    if (local_138 != (undefined ***)0x0) {
      (*(code *)(*local_138)[4])
                (local_138,CONCAT71((int7)((ulonglong)&local_170 >> 8),local_138 != &local_170));
      lVar4 = local_128;
    }
LAB_14305aef0:
    if (local_e0 != local_80) {
      if ((local_e0 < 0) || (*(int *)(lVar4 + 0x460) <= local_e0)) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
      if ((local_80 < 0) || (*(int *)(local_c8 + 0x460) <= local_80)) {
        cVar2 = '\0';
      }
      else {
        cVar2 = '\x01';
      }
      if (cVar1 == cVar2) goto LAB_14305afc0;
      if (param_2 == '\0') {
        FUN_143043a10(local_d8);
      }
      else {
        FUN_143048530();
      }
      local_d8 = 0;
      lVar4 = local_128;
      do {
        local_e0 = local_e0 + 1;
        if ((local_e0 < 0) || (*(int *)(lVar4 + 0x460) <= local_e0)) break;
        local_d8 = *(longlong *)(*(longlong *)(lVar4 + 0x458) + (longlong)local_e0 * 8);
      } while (((local_d8 == 0) || ((*(byte *)(local_d8 + 0xe4) & 1) == 0)) ||
              ((local_e8 != (longlong *)0x0 &&
               (local_178 = local_d8, cVar1 = (**(code **)(*local_e8 + 0x10))(local_e8,&local_178),
               lVar4 = local_128, cVar1 == '\0'))));
      goto LAB_14305aef0;
    }
LAB_14305afc0:
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x20))
                (local_88,CONCAT71((int7)((ulonglong)local_c0 >> 8),local_88 != local_c0));
      local_88 = (longlong *)0x0;
    }
    if (local_e8 != (longlong *)0x0) {
      (**(code **)(*local_e8 + 0x20))(local_e8,local_e8 != local_120);
      local_e8 = (longlong *)0x0;
    }
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x20))
                (local_28,CONCAT71((int7)((ulonglong)local_60 >> 8),local_28 != local_60));
    }
  }
  return;
}



// FUNCTION 14305b050 FUN_14305b050 body=261 status=ok
// SIG undefined FUN_14305b050(void)

void FUN_14305b050(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ushort uVar4;
  
  lVar3 = 0;
  lVar2 = lVar3;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar2 = param_1[4];
  }
  if (*(char *)(lVar2 + 0x128) == '\x03') {
    lVar1 = param_3[1];
    lVar2 = *param_3;
    *(ushort *)(param_1 + 0x1d) = *(ushort *)(param_1 + 0x1d) | 0x200;
    param_1[0x2b] = lVar2;
    *(int *)(param_1 + 0x2c) = (int)lVar1;
    param_1[0x2a] = param_2;
    uVar4 = *(ushort *)(param_1 + 0x30) | 0x200;
    if (uVar4 != *(ushort *)(param_1 + 0x30)) {
      lVar2 = lVar3;
      if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
        lVar2 = param_1[4];
      }
      if (*(char *)(lVar2 + 0x128) == '\x03') {
        *(ushort *)(param_1 + 0x30) = uVar4;
        (**(code **)(*param_1 + 0x260))(param_1);
        param_2 = param_1[0x2a];
      }
    }
    if ((param_2 == 0) && (((byte)*(ushort *)(param_1 + 0x1d) >> 1 & 1) != 0)) {
      *(ushort *)(param_1 + 0x1d) = *(ushort *)(param_1 + 0x1d) & 0xfffd;
      if ((*(ushort *)(param_1 + 0x30) & 2) != 0) {
        if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
          lVar3 = param_1[4];
        }
        if (*(char *)(lVar3 + 0x128) == '\x03') {
          *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) & 0xfffd;
          (**(code **)(*param_1 + 0x260))(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14305b160 FUN_14305b160 body=231 status=ok
// SIG undefined FUN_14305b160(void)

void FUN_14305b160(longlong *param_1,float *param_2)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar3 = lVar4;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar3 = param_1[4];
  }
  if (*(char *)(lVar3 + 0x128) == '\x03') {
    param_1[0x2a] = 0;
    if (((*(float *)(param_1 + 0x2b) == *param_2) &&
        (*(float *)((longlong)param_1 + 0x15c) == param_2[1])) &&
       (*(float *)(param_1 + 0x2c) == param_2[2])) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    fVar1 = param_2[2];
    lVar3 = *(longlong *)param_2;
    *(ushort *)(param_1 + 0x1d) = *(ushort *)(param_1 + 0x1d) & 0xfdff;
    param_1[0x2b] = lVar3;
    *(float *)(param_1 + 0x2c) = fVar1;
    if ((*(ushort *)(param_1 + 0x30) & 0x200) != 0) {
      if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
        lVar4 = param_1[4];
      }
      if (*(char *)(lVar4 + 0x128) == '\x03') {
        *(ushort *)(param_1 + 0x30) = *(ushort *)(param_1 + 0x30) & 0xfdff;
        (**(code **)(*param_1 + 0x260))(param_1);
      }
    }
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00014305b23a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x260))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14305b250 FUN_14305b250 body=9 status=ok
// SIG undefined FUN_14305b250(void)

void FUN_14305b250(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x228) = param_2;
  return;
}



// FUNCTION 14305b260 FUN_14305b260 body=94 status=ok
// SIG undefined FUN_14305b260(void)

void FUN_14305b260(longlong *param_1,char param_2,char param_3)

{
  longlong lVar1;
  
  if (param_2 != (char)param_1[0x1c]) {
    *(char *)(param_1 + 0x1c) = param_2;
    if (param_3 != '\0') {
      if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
        lVar1 = param_1[4];
      }
      else {
        lVar1 = 0;
      }
      if (*(char *)(lVar1 + 0x128) == '\x03') {
        *(char *)((longlong)param_1 + 0x182) = param_2;
        (**(code **)(*param_1 + 0x260))();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014305b2b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3c0))(param_1);
    return;
  }
  return;
}



// FUNCTION 14305b2c0 FUN_14305b2c0 body=328 status=ok
// SIG undefined FUN_14305b2c0(void)

void FUN_14305b2c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if (param_2 != *(longlong *)(param_1 + 0x420)) {
    uVar4 = 0;
    if (*(longlong *)(param_1 + 0x420) != 0) {
      lVar3 = param_1;
      if (param_2 != param_1 + 0x48) {
        lVar3 = *(longlong *)(param_1 + 0x20);
      }
      plVar5 = *(longlong **)(param_1 + 0x310);
      uVar6 = (longlong)*(int *)(param_1 + 0x318) & 0x1fffffffffffffff;
      if (plVar5 + *(int *)(param_1 + 0x318) < plVar5) {
        uVar6 = uVar4;
      }
      uVar2 = uVar4;
      if (uVar6 != 0) {
        do {
          lVar1 = *plVar5;
          if ((lVar1 != 0) && (*(longlong *)(lVar1 + 400) == 0)) {
            FTickFunction::RemovePrerequisite(lVar1 + 0x30,lVar3,*(undefined8 *)(param_1 + 0x420));
          }
          plVar5 = plVar5 + 1;
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar6);
      }
    }
    *(longlong *)(param_1 + 0x420) = param_2;
    if (param_2 != 0) {
      lVar3 = param_1;
      if (param_2 != param_1 + 0x48) {
        lVar3 = *(longlong *)(param_1 + 0x20);
      }
      plVar5 = *(longlong **)(param_1 + 0x310);
      uVar6 = (longlong)*(int *)(param_1 + 0x318) & 0x1fffffffffffffff;
      if (plVar5 + *(int *)(param_1 + 0x318) < plVar5) {
        uVar6 = uVar4;
      }
      if (uVar6 != 0) {
        do {
          lVar1 = *plVar5;
          if ((lVar1 != 0) && (*(longlong *)(lVar1 + 400) == 0)) {
            FTickFunction::AddPrerequisite(lVar1 + 0x30,lVar3,*(undefined8 *)(param_1 + 0x420));
          }
          plVar5 = plVar5 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar6);
      }
    }
  }
  return;
}



// FUNCTION 14305b410 FUN_14305b410 body=27 status=ok
// SIG undefined FUN_14305b410(void)

void FUN_14305b410(longlong *param_1,longlong param_2)

{
  if (param_2 != param_1[0x25]) {
    param_1[0x25] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014305b423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))();
    return;
  }
  return;
}



// FUNCTION 14305b430 FUN_14305b430 body=2533 status=ok
// SIG undefined FUN_14305b430(void)

void FUN_14305b430(longlong param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 local_98 [8];
  float local_90;
  undefined1 local_88 [16];
  longlong *local_78;
  longlong local_70;
  undefined1 local_60;
  
  *(undefined1 *)(param_1 + 0x178) = 0;
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xdf;
    plVar11 = *(longlong **)(param_1 + 0x188);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x3b0))(plVar11,0);
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
    if (*(longlong *)(param_1 + 0x180) != 0) {
      FUN_142227350(*(longlong *)(param_1 + 0x180),0,1);
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    return;
  }
  plVar11 = *(longlong **)(param_1 + 0x118);
  lVar2 = (**(code **)(*plVar11 + 0x688))(plVar11);
  if (*(float *)(param_1 + 0x1a8) <= 0.0 && *(float *)(param_1 + 0x1a8) != 0.0) {
    if (*(longlong *)(param_1 + 0x310) != 0) {
      lVar3 = UInputKeySelector::GetPrivateStaticClass();
      lVar8 = *(longlong *)(param_1 + 0x310);
      for (lVar6 = lVar8; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar3) goto LAB_14305b4c0;
      }
    }
    lVar8 = 0;
LAB_14305b4c0:
    plVar12 = (longlong *)0x0;
    if ((*(byte *)(param_1 + 0x328) & 8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x118);
      if (lVar6 == 0) {
LAB_14305b519:
        if (lVar2 != 0) {
          uVar4 = FUN_1430a8880();
          plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
          if ((plVar5 != (longlong *)0x0) &&
             (lVar6 = (**(code **)(*plVar5 + 0xf0))(plVar5,0), lVar6 != 0)) goto LAB_14305b54e;
        }
      }
      else {
        lVar3 = FUN_1430b3b80();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_14305b519;
LAB_14305b54e:
        lVar6 = FUN_14307cf20(lVar6,*(undefined1 *)(lVar6 + 0x690));
        plVar12 = (longlong *)0x0;
        if (lVar6 != 0) {
          lVar3 = FUN_1430bf300();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            lVar8 = *(longlong *)(lVar6 + 0x920);
            plVar12 = *(longlong **)(lVar6 + 0x938);
          }
        }
      }
    }
    if (lVar8 != 0) {
      lVar3 = FUN_1428dfc70();
      lVar6 = lVar8;
      do {
        if (lVar6 == lVar3) {
          FActorSpawnParameters::FActorSpawnParameters(local_88);
          local_60 = 1;
          local_78 = plVar11;
          local_70 = lVar2;
          lVar3 = FUN_1428dfc70();
          lVar6 = lVar8;
          goto LAB_14305b7a1;
        }
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
    if (plVar12 != (longlong *)0x0) {
      plVar7 = (longlong *)FUN_1430aef40();
      plVar5 = plVar12;
      do {
        if (plVar5 == plVar7) {
          lVar6 = plVar12[0x1f];
          if (lVar6 == 0) {
            (**(code **)(*plVar12 + 0x368))(plVar12);
            lVar6 = plVar12[0x1f];
          }
          *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar6 + 0x144);
          *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar6 + 0x148);
          *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar6 + 0x158);
          *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar6 + 0x15c);
          puVar9 = (undefined8 *)FRotator::Vector(lVar6 + 0x14c,local_98);
          *(undefined8 *)(param_1 + 0x1bc) = *puVar9;
          *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(puVar9 + 1);
          *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(lVar6 + 0x180);
          if (*(longlong *)(param_1 + 0x1f8) == 0) goto LAB_14305bbe9;
          lVar10 = FUN_1430a85e0();
          lVar8 = *(longlong *)(param_1 + 0x1f8);
          lVar3 = lVar8;
          if (lVar8 == 0) goto LAB_14305bbe9;
          goto LAB_14305bbd0;
        }
        plVar5 = (longlong *)plVar5[6];
      } while (plVar5 != (longlong *)0x0);
    }
    uVar13 = FUN_142c98860(param_1 + 0x200,plVar11);
    *(undefined4 *)(param_1 + 0x1a8) = uVar13;
    uVar13 = FUN_142c98860(param_1 + 0x238,plVar11);
    *(undefined4 *)(param_1 + 0x1ac) = uVar13;
    uVar13 = FUN_142c98860(param_1 + 0x270,plVar11);
    *(undefined4 *)(param_1 + 0x1b0) = uVar13;
    uVar13 = FUN_142c98860(param_1 + 0x2a8,plVar11);
    *(undefined4 *)(param_1 + 0x1b4) = uVar13;
    *(undefined8 *)(param_1 + 0x1bc) = *(undefined8 *)(param_1 + 0x2e0);
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x2e8);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1f0);
    goto LAB_14305b676;
  }
  goto LAB_14305b6d6;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_14305b7a1:
    if (lVar6 == lVar3) goto LAB_14305b7b1;
  }
  lVar8 = 0;
LAB_14305b7b1:
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(param_1);
  }
  lVar6 = FUN_142550d00(lVar6,lVar8,0,local_88);
  if (lVar6 != 0) {
    lVar8 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar8 = FUN_14307c290(lVar6);
      if (lVar8 == 0) {
LAB_14305ba4b:
        uVar13 = FUN_142c98860(param_1 + 0x200,plVar11);
        *(undefined4 *)(param_1 + 0x1a8) = uVar13;
        uVar13 = FUN_142c98860(param_1 + 0x238,plVar11);
        *(undefined4 *)(param_1 + 0x1ac) = uVar13;
        uVar13 = FUN_142c98860(param_1 + 0x270,plVar11);
        *(undefined4 *)(param_1 + 0x1b0) = uVar13;
        uVar13 = FUN_142c98860(param_1 + 0x2a8,plVar11);
        *(undefined4 *)(param_1 + 0x1b4) = uVar13;
        *(undefined8 *)(param_1 + 0x1bc) = *(undefined8 *)(param_1 + 0x2e0);
        *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x2e8);
        *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1f0);
LAB_14305bacf:
        *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_1 + 0x2ec);
        *(undefined1 *)(param_1 + 0x1c9) = *(undefined1 *)(param_1 + 0x2ed);
        *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x2f0);
        *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x2f4);
        *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x2f8);
        *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x2fc);
        *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x300);
        *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x304);
        *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x308);
      }
      else {
        lVar3 = FUN_1430a9310();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_14305ba4b;
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar8 + 0x1c0);
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar8 + 0x1c4);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar8 + 0x268);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar8 + 0x1dc);
        fVar17 = *(float *)(lVar8 + 0x194);
        fVar18 = *(float *)(lVar8 + 400);
        fVar19 = *(float *)(lVar8 + 0x18c);
        fVar14 = fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17;
        if (fVar14 == 1.0) {
          fVar19 = (float)*(undefined8 *)(lVar8 + 0x18c);
          fVar18 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x18c) >> 0x20);
          fVar17 = *(float *)(lVar8 + 0x194);
        }
        else if (1e-08 <= fVar14) {
          auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
          fVar15 = auVar16._0_4_;
          fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
          fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
          fVar19 = fVar19 * fVar15;
          fVar18 = fVar18 * fVar15;
          fVar17 = fVar17 * fVar15;
          local_90 = fVar17;
        }
        else {
          local_90 = DAT_1468b5d98;
          fVar19 = DAT_1468b5d90;
          fVar18 = DAT_1468b5d94;
          fVar17 = DAT_1468b5d98;
        }
        *(ulonglong *)(param_1 + 0x1bc) = CONCAT44(fVar18,fVar19);
        *(float *)(param_1 + 0x1c4) = fVar17;
        *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(lVar6 + 0xcc);
        if (*(longlong *)(param_1 + 0x1f8) != 0) {
          lVar3 = FUN_1430a85e0();
          for (lVar8 = *(longlong *)(param_1 + 0x1f8); lVar8 != 0;
              lVar8 = *(longlong *)(lVar8 + 0x30)) {
            if (lVar8 == lVar3) {
              if (*(longlong *)(param_1 + 0x1f8) != 0) goto LAB_14305bb1b;
              break;
            }
          }
        }
        if ((*(byte *)(param_1 + 0x328) & 0x10) != 0) goto LAB_14305bacf;
      }
LAB_14305bb1b:
      FUN_142227350(lVar6,0,1);
    }
  }
  goto LAB_14305b6c2;
joined_r0x00014305bc71:
  if (lVar6 == 0) goto LAB_14305bc81;
  if (lVar6 == lVar8) goto LAB_14305bc83;
  lVar6 = *(longlong *)(lVar6 + 0x30);
  goto joined_r0x00014305bc71;
LAB_14305bc81:
  lVar2 = 0;
LAB_14305bc83:
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(param_1);
  }
  plVar11 = (longlong *)FUN_142550d00(lVar6,lVar2,0,local_88);
  if (plVar11 == (longlong *)0x0) {
LAB_14305bce4:
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_1430a85e0();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14305bce4;
  }
  *(longlong **)(param_1 + 0x180) = plVar11;
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x448))(plVar11,*(undefined8 *)(param_1 + 0x118));
    if (*(longlong *)(param_1 + 0x318) != 0) {
      FUN_1430428e0(param_1);
    }
    *(undefined1 *)(param_1 + 0x178) = 1;
    lVar2 = FUN_14307c290(*(undefined8 *)(param_1 + 0x180));
    if (lVar2 != 0) {
      lVar6 = FUN_1430a9310();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (0.0 < *(float *)(param_1 + 0x1a8) || *(float *)(param_1 + 0x1a8) == 0.0) {
          *(undefined4 *)(lVar2 + 0x1c4) = *(undefined4 *)(param_1 + 0x1ac);
          *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(param_1 + 0x1b0);
          *(undefined4 *)(lVar2 + 0x1dc) = *(undefined4 *)(param_1 + 0x1b4);
        }
        *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(lVar2 + 0x178);
      }
    }
  }
  goto LAB_14305b735;
  while (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0) {
LAB_14305bbd0:
    if (lVar3 == lVar10) {
      if (lVar8 != 0) goto LAB_14305b676;
      break;
    }
  }
LAB_14305bbe9:
  if ((*(byte *)(param_1 + 0x328) & 0x10) != 0) {
    *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(lVar6 + 0x18c);
    *(bool *)(param_1 + 0x1c9) = 0.0 < *(float *)(lVar6 + 0x194);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(lVar6 + 0x194);
    goto LAB_14305b6c2;
  }
LAB_14305b676:
  *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_1 + 0x2ec);
  *(undefined1 *)(param_1 + 0x1c9) = *(undefined1 *)(param_1 + 0x2ed);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x2f0);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x2f4);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x2f8);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x2fc);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x300);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x304);
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x308);
LAB_14305b6c2:
  FUN_143040510(param_1 + 0x1c8);
LAB_14305b6d6:
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    lVar8 = FUN_1430a85e0();
    for (lVar6 = *(longlong *)(param_1 + 0x1f8); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar8) {
        if (*(longlong *)(param_1 + 0x1f8) != 0) {
          if (*(longlong *)(param_1 + 0x180) != 0) goto LAB_14305b735;
          FActorSpawnParameters::FActorSpawnParameters(local_88);
          local_60 = 1;
          local_78 = plVar11;
          local_70 = lVar2;
          if (*(longlong *)(param_1 + 0x1f8) == 0) goto LAB_14305bc81;
          lVar8 = FUN_1430a85e0();
          lVar2 = *(longlong *)(param_1 + 0x1f8);
          lVar6 = lVar2;
          goto joined_r0x00014305bc71;
        }
        break;
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x318) != 0) && (*(longlong *)(param_1 + 0x188) == 0)) {
    FUN_1430428e0(param_1);
  }
  if (0.0 < *(float *)(param_1 + 0x1a8) || *(float *)(param_1 + 0x1a8) == 0.0) {
    *(undefined1 *)(param_1 + 0x178) = 1;
  }
LAB_14305b735:
  if ((*(char *)(param_1 + 0x178) != '\0') && (*(longlong *)(param_1 + 0x180) == 0)) {
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xdf;
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 0x20;
    return;
  }
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xdf;
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_1 + 0x3c);
  return;
}



// FUNCTION 14305be20 FUN_14305be20 body=90 status=ok
// SIG undefined FUN_14305be20(void)

void FUN_14305be20(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_142378a50();
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x2b2) = 0;
    uVar2 = *(undefined4 *)(lVar1 + 0x224);
    uVar3 = *(undefined4 *)(lVar1 + 0x228);
    *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(lVar1 + 0x220);
    *(undefined4 *)(param_1 + 0x2b8) = uVar2;
    *(undefined4 *)(param_1 + 700) = uVar3;
  }
  return;
}



// FUNCTION 14305be80 FUN_14305be80 body=691 status=ok
// SIG undefined FUN_14305be80(void)

void FUN_14305be80(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146b47530 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146b47530 != 0x1000)) ||
     (uVar3 = DAT_146b47538, iVar4 != 0)) {
    uVar3 = DAT_146b47534 | DAT_146b47530;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14305c087;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14305c087:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14305c140 FUN_14305c140 body=614 status=ok
// SIG undefined FUN_14305c140(void)

void FUN_14305c140(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 8) = 2;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14305c2f7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14305c2f7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14305c3b0 FUN_14305c3b0 body=691 status=ok
// SIG undefined FUN_14305c3b0(void)

void FUN_14305c3b0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x1c) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146b476b0 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146b476b0 != 0x1000)) ||
     (uVar3 = DAT_146b476b8, iVar4 != 0)) {
    uVar3 = DAT_146b476b4 | DAT_146b476b0;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14305c5b7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14305c5b7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14305c670 FUN_14305c670 body=691 status=ok
// SIG undefined FUN_14305c670(void)

void FUN_14305c670(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146b475d8 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146b475d8 != 0x1000)) ||
     (uVar3 = DAT_146b475e0, iVar4 != 0)) {
    uVar3 = DAT_146b475dc | DAT_146b475d8;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14305c877;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14305c877:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14305c930 FUN_14305c930 body=10 status=ok
// SIG undefined FUN_14305c930(void)

void FUN_14305c930(longlong param_1,undefined1 *param_2)

{
  if ((*(byte *)(param_1 + 0x40) & 2) != 0) {
    *param_2 = 0;
  }
  return;
}



// FUNCTION 14305c940 FUN_14305c940 body=62 status=ok
// SIG undefined FUN_14305c940(void)

char FUN_14305c940(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_142379760();
  if (((cVar2 == '\0') && (*(char *)(param_1 + 0x2b1) != '\0')) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168), lVar1 != 0)) {
    cVar2 = *(longlong *)(lVar1 + 400) != 0;
  }
  return cVar2;
}



// FUNCTION 14305c980 FUN_14305c980 body=472 status=ok
// SIG undefined FUN_14305c980(void)

void FUN_14305c980(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  uVar1 = *(uint *)(param_1 + 0x3d);
  if ((uVar1 & 0x10) != 0) {
    *(uint *)(param_1 + 0x3d) = uVar1 | 0x20;
    if (param_1[0x7a] != 0) {
      FUN_143059a20(param_1[0x7a],param_1);
      param_1[0x7a] = 0;
      param_1[0x7b] = 0;
    }
    FUN_14305cce0(param_1);
    return;
  }
  *(uint *)(param_1 + 0x3d) = uVar1 & 0xffffffdf;
  bVar3 = false;
  *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + 1;
  iVar6 = *(int *)((longlong)param_1 + 0x3c);
  iVar5 = (int)param_1[6] + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar10 = lVar8 << 4;
    bVar3 = false;
    do {
      if (((*(int *)(lVar10 + 8 + param_1[5]) == 0) ||
          (plVar9 = *(longlong **)(lVar10 + param_1[5]), plVar9 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar9 + 0x40))(), cVar4 == '\0')) {
        bVar3 = true;
      }
      lVar10 = lVar10 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)((longlong)param_1 + 0x3c);
  }
  *(int *)((longlong)param_1 + 0x3c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 5,0);
  }
  plVar9 = (longlong *)0x0;
  if (param_1[0x7a] != 0) {
    FUN_143059a20(param_1[0x7a],param_1);
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
  }
  FUN_14305cce0(param_1);
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  (**(code **)(*param_1 + 0x260))(param_1);
  (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar9 = (longlong *)param_1[4];
  }
  FUN_14288e3d0(param_1 + 0xb,0);
  *(undefined1 *)(param_1 + 9) = 1;
  lVar8 = (**(code **)(*plVar9 + 0x148))(plVar9);
  *(float *)((longlong)param_1 + 0x4c) = *(float *)(lVar8 + 0x790) + 0.2;
  puVar2 = (undefined8 *)plVar9[0x8b];
  puVar7 = puVar2;
  if (puVar2 != puVar2 + (int)plVar9[0x8c]) {
    while ((longlong *)*puVar7 != param_1) {
      puVar7 = puVar7 + 1;
      if (puVar7 == puVar2 + (int)plVar9[0x8c]) {
        return;
      }
    }
    iVar6 = (int)((longlong)puVar7 - (longlong)puVar2 >> 3);
    if (iVar6 != -1) {
      puVar2[iVar6] = 0;
      *(undefined1 *)(plVar9 + 0xa0) = 1;
    }
  }
  return;
}



// FUNCTION 14305cb60 FUN_14305cb60 body=380 status=ok
// SIG undefined FUN_14305cb60(void)

void FUN_14305cb60(longlong *param_1,char param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_18;
  
  *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xfffffc1e;
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    *(undefined4 *)((longlong)param_1 + 0x234) = *(undefined4 *)(lVar2 + 0x790);
  }
  FWeakObjectPtr::operator=(param_1 + 0x8c,0);
  plVar5 = (longlong *)0x0;
  param_1[0x8d] = 0;
  (**(code **)(*param_1 + 0x380))(param_1);
  plVar3 = plVar5;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar3 = (longlong *)param_1[4];
  }
  if ((char)plVar3[0x25] == '\x03') {
    *(char *)(param_1 + 0x44) = (char)param_1[0x21];
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  if ((param_2 == '\0') || (uVar4 = 0x400, (int)param_1[99] < 1)) {
    uVar4 = 0;
  }
  *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) & 0xfffffbff | uVar4;
  if (uVar4 == 0) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
    local_18 = local_18 & 0xffffff00;
    param_1[0x85] = local_48;
    param_1[0x86] = lStack_40;
    *(undefined4 *)(param_1 + 0x87) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x43c) = uStack_34;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)((longlong)param_1 + 0x444) = 0;
    auVar1._12_4_ = 0;
    auVar1._0_12_ = ZEXT812(0x3f80000000000000) << 0x20;
    *(undefined1 (*) [16])(param_1 + 0x89) = auVar1;
    *(uint *)(param_1 + 0x8b) = local_18;
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      plVar5 = (longlong *)param_1[4];
    }
    FUN_143043a70(plVar5,param_1);
    *(undefined1 *)(param_1 + 7) = 1;
    lVar2 = (**(code **)(*plVar5 + 0x148))(plVar5);
    *(float *)((longlong)param_1 + 0x3c) = *(float *)(lVar2 + 0x790) + 0.2;
  }
  return;
}



// FUNCTION 14305cce0 FUN_14305cce0 body=101 status=ok
// SIG undefined FUN_14305cce0(void)

void FUN_14305cce0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 1000) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3e0) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x3ec)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x3e0,0);
  }
  return;
}



// FUNCTION 14305cd50 FUN_14305cd50 body=100 status=ok
// SIG undefined FUN_14305cd50(void)

void FUN_14305cd50(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((param_1[0x24] == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  lVar1 = param_1[0x24];
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  (**(code **)(*param_1 + 0x468))(param_1,param_2,*(undefined4 *)(lVar1 + 0x7b0),&DAT_1468b5d90);
  return;
}



// FUNCTION 14305cdc0 FUN_14305cdc0 body=531 status=ok
// SIG undefined FUN_14305cdc0(void)

void FUN_14305cdc0(longlong param_1,byte *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte local_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  if ((*(longlong *)(param_1 + 0x188) != 0) && (0 < *(int *)(param_1 + 0x198))) {
    FUN_142608f20();
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x280))(*(longlong **)(param_1 + 0x188),1);
    lVar2 = *(longlong *)(param_1 + 400);
    lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x198) * 0xc;
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0xc) {
      FUN_142399750(*(undefined8 *)(param_1 + 0x188),lVar2,&DAT_1468b5da0);
      (**(code **)(**(longlong **)(param_1 + 0x188) + 0x350))
                (*(longlong **)(param_1 + 0x188),*(undefined4 *)(param_1 + 0x1ec),2);
    }
    *(undefined4 *)(param_1 + 0x198) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x19c)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 400,0);
    }
  }
  local_9c = *(undefined4 *)(param_2 + 0xc);
  local_98 = *(undefined4 *)(param_2 + 0x10);
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_2c = 0;
  local_a8[0] = *param_2 & 3;
  local_94 = *(undefined8 *)(param_2 + 0x14);
  local_a4 = *(undefined4 *)(param_2 + 4);
  local_88 = *(undefined8 *)(param_2 + 0x20);
  local_a0 = *(uint *)(param_2 + 8) & 1;
  local_8c = *(undefined4 *)(param_2 + 0x1c);
  local_7c = *(undefined8 *)(param_2 + 0x2c);
  local_80 = *(undefined4 *)(param_2 + 0x28);
  local_74 = *(undefined4 *)(param_2 + 0x34);
  local_68 = *(undefined4 *)(param_2 + 0x40);
  local_5c = *(undefined4 *)(param_2 + 0x4c);
  local_50 = *(undefined4 *)(param_2 + 0x58);
  local_48 = *(undefined4 *)(param_2 + 0x60);
  local_44 = *(undefined4 *)(param_2 + 100);
  local_40 = *(undefined4 *)(param_2 + 0x68);
  local_3c = *(undefined4 *)(param_2 + 0x6c);
  local_38 = *(undefined4 *)(param_2 + 0x70);
  local_70 = *(undefined8 *)(param_2 + 0x38);
  local_34 = *(undefined4 *)(param_2 + 0x74);
  local_64 = *(undefined8 *)(param_2 + 0x44);
  local_30 = *(undefined4 *)(param_2 + 0x78);
  local_28 = *(undefined8 *)(param_2 + 0x80);
  local_58 = *(undefined8 *)(param_2 + 0x50);
  local_20 = *(undefined8 *)(param_2 + 0x88);
  local_4c = *(undefined4 *)(param_2 + 0x5c);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x330,local_a8);
  return;
}



// FUNCTION 14305cfe0 FUN_14305cfe0 body=1204 status=ok
// SIG undefined FUN_14305cfe0(void)

void FUN_14305cfe0(longlong *param_1,longlong param_2,char param_3,int param_4,float param_5,
                  float param_6,float param_7,char param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  longlong local_148;
  longlong *local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_120;
  float local_114;
  undefined1 local_110 [24];
  undefined1 local_f8 [224];
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    lVar3 = FUN_1430aef40();
    lVar5 = param_2;
    do {
      if (lVar5 == lVar3) {
        if (param_4 < 1) {
          return;
        }
        (**(code **)(*param_1 + 0x2c0))(param_1,&local_148,1);
        *(longlong *)(local_148 + 8) = param_2;
        uVar4 = FVector::Rotation(param_1 + 0x5e,local_110);
        uVar4 = FRotationMatrix::FRotationMatrix(local_f8,uVar4);
        FMatrix::GetUnitAxes(uVar4,&local_158,&local_138,&local_168);
        iVar6 = 0;
        do {
          fVar13 = local_150;
          fVar7 = local_160;
          fVar11 = local_164;
          fVar9 = local_168;
          if (param_3 == '\0') {
            uVar4 = __libm_sse2_sincosf4_();
            fVar8 = (float)uVar4;
            fVar12 = (float)((ulonglong)uVar4 >> 0x20);
            fVar10 = fVar9 * fVar8 + local_138 * fVar12;
            fVar11 = local_134 * fVar12 + fVar11 * fVar8;
            fVar9 = local_130 * fVar12 + fVar7 * fVar8;
            fVar12 = local_154 * extraout_XMM0_Dd;
            fVar8 = local_158 * extraout_XMM0_Dd + extraout_XMM0_Dc * fVar10;
            fVar13 = fVar13 * extraout_XMM0_Dd + extraout_XMM0_Dc * fVar9;
            fVar7 = extraout_XMM0_Dc;
          }
          else {
            uVar4 = __libm_sse2_sincosf_(param_6 * 0.017453292);
            fVar8 = (float)uVar4;
            fVar12 = (float)((ulonglong)uVar4 >> 0x20);
            fVar11 = local_134 * fVar12 + fVar11 * fVar8;
            fVar10 = fVar9 * fVar8 + local_138 * fVar12;
            fVar9 = local_130 * fVar12 + fVar7 * fVar8;
            if (param_4 < 2) {
              fVar7 = 0.0;
            }
            else {
              fVar7 = (float)iVar6 / (float)(param_4 + -1);
            }
            __libm_sse2_sincosf_
                      ((param_5 * 0.008726646 - param_5 * -0.008726646) * fVar7 +
                       param_5 * -0.008726646);
            fVar8 = local_158 * extraout_XMM0_Db + extraout_XMM0_Da * fVar10;
            fVar12 = local_154 * extraout_XMM0_Db;
            fVar13 = fVar13 * extraout_XMM0_Db + extraout_XMM0_Da * fVar9;
            fVar7 = extraout_XMM0_Da;
          }
          local_120 = fVar9 * param_7 + *(float *)(param_1 + 0x56);
          *(ulonglong *)(local_148 + 0x10) =
               CONCAT44(fVar11 * param_7 + *(float *)((longlong)param_1 + 0x2ac),
                        fVar10 * param_7 + *(float *)(param_1 + 0x55));
          *(float *)(local_148 + 0x18) = local_120;
          local_114 = fVar9 * param_7 + *(float *)(param_1 + 0x56) + fVar13 * 100.0;
          *(ulonglong *)(local_148 + 0x1c) =
               CONCAT44(fVar11 * param_7 + *(float *)((longlong)param_1 + 0x2ac) +
                        (fVar12 + fVar7 * fVar11) * 100.0,
                        fVar10 * param_7 + *(float *)(param_1 + 0x55) + fVar8 * 100.0);
          *(float *)(local_148 + 0x24) = local_114;
          FUN_143040a20(param_1,local_148);
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_4);
        if (param_8 != '\0') {
          (**(code **)(*param_1 + 0x2a0))(param_1,0);
        }
        if (local_140 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = local_140 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return;
        }
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar2 = (int *)((longlong)local_140 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return;
        }
        (**(code **)(*local_140 + 8))(local_140,1);
        return;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14305d4a0 FUN_14305d4a0 body=46 status=ok
// SIG undefined FUN_14305d4a0(void)

void FUN_14305d4a0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xf0))();
  if (lVar1 != 0) {
    FUN_14308e980(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 14305d4d0 FUN_14305d4d0 body=167 status=ok
// SIG undefined FUN_14305d4d0(void)

void FUN_14305d4d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_18;
  longlong local_10;
  
  if ((*param_2 != 0) && (plVar4 = *(longlong **)(param_1 + 0x118), plVar4 != (longlong *)0x0)) {
    uVar5 = FUN_142e27720();
    lVar6 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
    if (lVar6 != 0) {
      local_18 = *param_2;
      local_10 = param_2[1];
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      FUN_142c84750(lVar6,&local_18);
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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



// FUNCTION 14305d580 FUN_14305d580 body=40 status=ok
// SIG undefined FUN_14305d580(void)

void FUN_14305d580(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xf0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014305d59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x8a8))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14305d5b0 FUN_14305d5b0 body=665 status=ok
// SIG undefined FUN_14305d5b0(void)

void FUN_14305d5b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 local_res20;
  
  iVar11 = *(int *)(param_1 + 0x408) + -1;
  if (-1 < iVar11) {
    plVar1 = (longlong *)(param_1 + 0x400);
    lVar12 = (longlong)iVar11 * 0x30;
    lVar13 = lVar12;
    do {
      iVar2 = (int)param_2[1];
      plVar14 = (longlong *)(*plVar1 + lVar13);
      if ((int)plVar14[5] == 0) {
        if (iVar2 < 1) goto LAB_14305d6e3;
        iVar6 = iVar2 + -1;
LAB_14305d698:
        lVar10 = (longlong)iVar6 * 0x90 + *param_2;
        if (((lVar10 == 0) ||
            ((lVar8 = FWeakObjectPtr::Get(lVar10 + 0x6c), lVar8 == 0 &&
             (lVar8 = FWeakObjectPtr::Get(lVar10 + 0x74), lVar8 == 0)))) ||
           ((plVar14[1] != 0 && (lVar10 = FWeakObjectPtr::Get(lVar10 + 100), plVar14[1] != lVar10)))
           ) goto LAB_14305d6e3;
      }
      else {
        iVar6 = 0;
        if (0 < iVar2 + -1) {
          lVar10 = 0;
          do {
            lVar8 = *param_2;
            if (((*(byte *)(lVar8 + lVar10) & 1) != 0) &&
               (((lVar7 = FWeakObjectPtr::Get(lVar8 + 0x6c + lVar10), lVar7 != 0 ||
                 (lVar7 = FWeakObjectPtr::Get(lVar8 + 0x74 + lVar10), lVar7 != 0)) &&
                (*(int *)(lVar7 + 0xc) == (int)plVar14[5])))) goto LAB_14305d698;
            iVar6 = iVar6 + 1;
            lVar10 = lVar10 + 0x90;
          } while (iVar6 < (int)param_2[1] + -1);
        }
LAB_14305d6e3:
        lVar10 = *plVar14;
        if (lVar10 != 0) {
          lVar8 = AGFreezeCharacterCue::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pwVar9 = _guard_xfg_dispatch_icall_nop
                               (L"&ULightBeam::OnTrackedImpactParticleSystemFinished",L"::");
            pwVar5 = (wchar_t *)0x0;
            while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
              pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
              pwVar5 = pwVar4;
            }
            FName::FName(&local_res20,pwVar5 + 2,1);
            TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar10 + 0x8a8,param_1,local_res20);
            FUN_142600fa0(lVar10);
          }
        }
        FUN_1405ac8f0(plVar14 + 2,200,0);
        FUN_140591060(*plVar1 + 0x10 + lVar12);
        iVar2 = *(int *)(param_1 + 0x408);
        iVar6 = (iVar2 - iVar11) + -1;
        if (0 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar12),(void *)((longlong)(iVar2 - iVar6) * 0x30 + *plVar1)
                     ,(longlong)iVar6 * 0x30);
          iVar2 = *(int *)(param_1 + 0x408);
        }
        *(int *)(param_1 + 0x408) = iVar2 + -1;
        TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      lVar12 = lVar12 + -0x30;
      lVar13 = lVar13 + -0x30;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  return;
}



// FUNCTION 14305d850 FUN_14305d850 body=166 status=ok
// SIG undefined FUN_14305d850(void)

void FUN_14305d850(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  longlong local_res20;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_142e27720();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if ((lVar3 != 0) &&
       (FUN_14304ad10(param_1,&local_res20,param_2,param_3,0,local_res8), local_res20 != 0)) {
      lVar4 = FUN_142e20fc0();
      lVar5 = local_res20;
      do {
        if (lVar5 == lVar4) {
          FUN_142c84570(lVar3,local_res20);
          return;
        }
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
  }
  return;
}



// FUNCTION 14305d900 FUN_14305d900 body=150 status=ok
// SIG undefined FUN_14305d900(void)

undefined8 FUN_14305d900(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x3b8) != '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x3b8) = 1;
  if (*(longlong *)(param_1 + 0x118) == param_2) {
LAB_14305d978:
    uVar3 = 1;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x3e0);
    plVar1 = plVar4 + *(int *)(param_1 + 1000);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      if ((*plVar4 != 0) && (cVar2 = FUN_14305d900(*plVar4,param_2), cVar2 != '\0'))
      goto LAB_14305d978;
    }
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0x3b8) = 0;
  return uVar3;
}



// FUNCTION 14305d9a0 FUN_14305d9a0 body=830 status=ok
// SIG undefined FUN_14305d9a0(void)

undefined8 FUN_14305d9a0(longlong *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar7 = 0;
  if ((*(longlong *)(param_1[0x15] + 0x70) != 0) && (DAT_146b47330 == 0)) {
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      lVar7 = param_1[4];
    }
    puVar6 = (undefined8 *)FUN_14304c440(lVar7);
    if (*(int *)(puVar6 + 1) == 0) {
      return 0;
    }
    lVar7 = UGameplayTask_WaitDelay::GetPrivateStaticClass();
    lVar7 = *(longlong *)(lVar7 + 0xf8);
    if (lVar7 != 0) {
      lVar8 = UGameplayTask_WaitDelay::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (lVar8 = *(longlong *)(param_1[0x15] + 0x70),
         *(int *)(lVar7 + 0x40) != *(int *)(lVar7 + 0x6c))) {
        lVar10 = *(longlong *)(lVar7 + 0x78);
        if (*(longlong *)(lVar7 + 0x78) == 0) {
          lVar10 = lVar7 + 0x70;
        }
        iVar5 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                                  (longlong)*(int *)(lVar7 + 0x80) - 1U) * 4);
        if (iVar5 != -1) {
          lVar7 = *(longlong *)(lVar7 + 0x38);
          do {
            lVar10 = (longlong)iVar5;
            if (*(longlong *)(lVar7 + lVar10 * 0x28) == lVar8) {
              if (iVar5 == -1) {
                return 1;
              }
              lVar7 = lVar7 + lVar10 * 0x28;
              if (lVar7 == 0) {
                return 1;
              }
              if (lVar7 == -8) {
                return 1;
              }
              if (*(float *)(lVar7 + 0x10) <= 0.0) {
                return 1;
              }
              fVar16 = 1.0;
              if (((*(byte *)((longlong)param_1 + 0xe4) & 2) != 0) &&
                 (0.0 < *(float *)(lVar7 + 0x1c))) {
                fVar16 = *(float *)(lVar7 + 0x1c) + 1.0;
              }
              lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
              if (param_1[0x61] == 0) {
                bVar3 = false;
              }
              else {
                fVar11 = *(float *)(lVar8 + 0x790) - 0.25;
                pfVar2 = (float *)(param_1[0x61] + 0x36c);
                bVar3 = fVar11 < *pfVar2 || fVar11 == *pfVar2;
              }
              pfVar2 = (float *)*puVar6;
              if (pfVar2 == pfVar2 + (longlong)*(int *)(puVar6 + 1) * 7) {
                return 0;
              }
              pfVar9 = pfVar2 + 5;
              do {
                fVar13 = pfVar9[-5] - *param_2;
                fVar12 = pfVar9[-4] - param_2[1];
                fVar14 = pfVar9[-3] - param_2[2];
                fVar15 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14);
                fVar11 = 1.0 / fVar15;
                if ((bVar3) ||
                   (fVar13 * fVar11 * pfVar9[-2] + fVar12 * fVar11 * pfVar9[-1] +
                    fVar14 * fVar11 * *pfVar9 < 0.0)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if (fVar15 < *(float *)(lVar7 + 0xc)) {
                  return 1;
                }
                if ((bVar4) && (fVar15 * pfVar9[1] < fVar16 * *(float *)(lVar7 + 0x10))) {
                  return 1;
                }
                if (-0.342 < fVar12 * fVar11 * *(float *)((longlong)param_1 + 0x2f4) +
                             fVar13 * fVar11 * *(float *)(param_1 + 0x5e) +
                             fVar14 * fVar11 * *(float *)(param_1 + 0x5f)) {
                  return 1;
                }
                pfVar1 = pfVar9 + 2;
                pfVar9 = pfVar9 + 7;
              } while (pfVar1 != pfVar2 + (longlong)*(int *)(puVar6 + 1) * 7);
              return 0;
            }
            iVar5 = *(int *)(lVar7 + 0x20 + lVar10 * 0x28);
          } while (iVar5 != -1);
        }
      }
    }
  }
  return 1;
}



// FUNCTION 14305dce0 FUN_14305dce0 body=377 status=ok
// SIG undefined FUN_14305dce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14305dce0(longlong *param_1)

{
  float *pfVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  
  FUN_1422406d0();
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar5 != 0) &&
     (fVar11 = *(float *)(lVar5 + 0x790), _DAT_14678c5c4 < fVar11 - *(float *)(param_1 + 0x93))) {
    iVar9 = (int)param_1[0x92] + -1;
    *(float *)(param_1 + 0x93) = fVar11;
    fVar11 = fVar11 - _DAT_14678c5c0;
    if (-1 < iVar9) {
      lVar10 = (longlong)iVar9 << 4;
      lVar5 = lVar10;
      do {
        pfVar1 = (float *)(param_1[0x91] + 8 + lVar10);
        if (*pfVar1 <= fVar11 && fVar11 != *pfVar1) {
          plVar3 = *(longlong **)(param_1[0x91] + lVar10);
          if (plVar3 != (longlong *)0x0) {
            uVar4 = *(uint *)((longlong)plVar3 + 0xc);
            if ((int)uVar4 < (int)DAT_1469e91c4) {
              uVar8 = uVar4 & 0xffff;
              if ((int)uVar4 < 0) {
                uVar4 = uVar4 + 0xffff;
                uVar8 = uVar8 - 0x10000;
              }
              lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                      (longlong)(int)uVar8 * 0x18;
            }
            else {
              lVar6 = 0;
            }
            if (((byte)((uint)*(undefined4 *)(lVar6 + 8) >> 0x1d) & 1) == 0) {
              (**(code **)(*plVar3 + 0x3b0))(plVar3,0);
            }
          }
          iVar2 = (int)param_1[0x92];
          iVar7 = (iVar2 - iVar9) + -1;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar5 + param_1[0x91]),
                       (void *)((longlong)(iVar2 - iVar7) * 0x10 + param_1[0x91]),
                       (longlong)iVar7 << 4);
            iVar2 = (int)param_1[0x92];
          }
          *(int *)(param_1 + 0x92) = iVar2 + -1;
        }
        lVar5 = lVar5 + -0x10;
        lVar10 = lVar10 + -0x10;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  return;
}



// FUNCTION 14305de60 FUN_14305de60 body=1279 status=ok
// SIG undefined FUN_14305de60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14305de60(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  longlong *plVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint *puVar20;
  float fVar21;
  longlong local_res8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  float fVar3;
  
  FUN_1422406d0();
  lVar10 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar10 != 0) {
    uVar18 = 0;
    fVar21 = *(float *)(lVar10 + 0x790);
    if (_DAT_14678c5b8 < fVar21 - *(float *)(param_1 + 0x98)) {
      iVar16 = (int)param_1[0x97] + -1;
      *(float *)(param_1 + 0x98) = fVar21;
      fVar21 = fVar21 - _DAT_14678c5b4;
      if (-1 < iVar16) {
        lVar17 = (longlong)iVar16 << 4;
        lVar10 = lVar17;
        do {
          pfVar1 = (float *)(lVar17 + 8 + param_1[0x96]);
          if (*pfVar1 <= fVar21 && fVar21 != *pfVar1) {
            plVar4 = *(longlong **)(lVar17 + param_1[0x96]);
            if (plVar4 != (longlong *)0x0) {
              uVar8 = *(uint *)((longlong)plVar4 + 0xc);
              uVar11 = uVar18;
              if ((int)uVar8 < (int)DAT_1469e91c4) {
                uVar15 = uVar8 & 0xffff;
                if ((int)uVar8 < 0) {
                  uVar8 = uVar8 + 0xffff;
                  uVar15 = uVar15 - 0x10000;
                }
                uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                         (longlong)(int)uVar15 * 0x18;
              }
              if (((byte)((uint)*(undefined4 *)(uVar11 + 8) >> 0x1d) & 1) == 0) {
                (**(code **)(*plVar4 + 0x3b0))(plVar4,0);
              }
            }
            iVar9 = (int)param_1[0x97];
            iVar14 = (iVar9 - iVar16) + -1;
            if (0 < iVar14) {
              iVar14 = 1;
            }
            if (iVar14 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar10 + param_1[0x96]),
                         (void *)((longlong)(iVar9 - iVar14) * 0x10 + param_1[0x96]),
                         (longlong)iVar14 << 4);
              iVar9 = (int)param_1[0x97];
            }
            *(int *)(param_1 + 0x97) = iVar9 + -1;
          }
          lVar10 = lVar10 + -0x10;
          lVar17 = lVar17 + -0x10;
          iVar16 = iVar16 + -1;
        } while (-1 < iVar16);
      }
      plVar4 = param_1 + 0x99;
      puStack_58 = (uint *)(param_1 + 0x9b);
      iVar16 = (int)param_1[0x9e];
      uVar8 = DAT_1464aaa8c + DAT_14678c5a4 * -2;
      local_a8 = 0x100000000;
      local_98._4_4_ = 0;
      uStack_90 = 0;
      if (iVar16 != 0) {
        puVar20 = (uint *)param_1[0x9d];
        if ((uint *)param_1[0x9d] == (uint *)0x0) {
          puVar20 = puStack_58;
        }
        uVar15 = *puVar20;
        uVar11 = uVar18;
        uVar19 = uVar18;
        while (uVar15 == 0) {
          iVar9 = (int)uVar11;
          uStack_90 = (int)uVar19 + 0x20;
          uVar19 = (ulonglong)uStack_90;
          uVar11 = (ulonglong)(iVar9 + 1U);
          uVar6 = (ulonglong)local_a8 >> 0x20;
          local_a8 = CONCAT44((int)uVar6,iVar9 + 1U);
          if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_14305e09f;
          uVar15 = puVar20[(longlong)iVar9 + 1];
        }
        uVar15 = -uVar15 & uVar15;
        iVar9 = 0x1f;
        if (uVar15 != 0) {
          for (; uVar15 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        local_a8 = CONCAT44(uVar15,(undefined4)local_a8);
        if (uVar15 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        local_98._4_4_ = (uStack_90 - iVar9) + 0x1f;
        if (iVar16 < local_98._4_4_) {
LAB_14305e09f:
          local_98._4_4_ = iVar16;
        }
      }
      auStack_50._4_4_ = local_98._4_4_;
      auStack_50._0_4_ = 0xffffffff;
      auStack_50._8_4_ = uStack_90;
      auStack_50._12_4_ = iStack_8c;
      uStack_60 = local_a8;
      local_70 = 0;
      local_40._0_4_ = SUB84(plVar4,0);
      local_40._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
      uStack_90 = 0xffffffff;
      iStack_8c = local_98._4_4_;
      uStack_a0 = local_a8;
      local_88._8_4_ = (undefined4)local_40;
      local_88._0_8_ = auStack_50._8_8_;
      local_88._12_4_ = local_40._4_4_;
      bVar5 = local_98._4_4_ < (int)param_1[0x9e];
      local_78 = plVar4;
      local_68 = plVar4;
      local_40 = plVar4;
      local_98 = puStack_58;
      if (bVar5) {
        do {
          if (*(uint *)(*plVar4 + 4 + (longlong)iStack_8c * 0x14) < uVar8) {
            FUN_1425f02e0(local_88._8_8_);
            local_70 = CONCAT11(local_70._1_1_,1);
          }
          uStack_90 = uStack_90 & ~uStack_a0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
        } while (iStack_8c < (int)local_98[6]);
        if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
          TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
          ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
        }
      }
    }
    FUN_14304c440(param_1);
    uVar12 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar10 = UWorld::GetWorldSettings(uVar12,0,0);
    if (lVar10 == 0) {
      fVar21 = 1.0;
    }
    else {
      fVar21 = *(float *)(lVar10 + 0x5e0);
      if (fVar21 <= 1.0) {
        fVar21 = 1.0;
      }
    }
    iVar16 = (int)param_1[0xb5];
    lVar10 = (longlong)iVar16;
    fVar21 = fVar21 * *(float *)((longlong)param_1 + 0x594);
    if (0 < iVar16) {
      do {
        fVar2 = *(float *)(param_1 + 0xb3);
        fVar3 = *(float *)(param_1 + 0xb3);
        lVar17 = param_1[0xb4];
        plVar4 = *(longlong **)(uVar18 + lVar17);
        if (plVar4 == (longlong *)0x0) {
LAB_14305e237:
          *(undefined4 *)(uVar18 + 0x10 + lVar17) = 2;
        }
        else {
          cVar7 = (**(code **)(*plVar4 + 0x20))(plVar4,*(undefined4 *)(uVar18 + 8 + lVar17));
          if (cVar7 == '\0') goto LAB_14305e237;
          if (fVar3 <= fVar21 && fVar21 != fVar2) {
LAB_14305e220:
            FUN_14303af10(param_1,&local_res8,*(undefined8 *)(uVar18 + lVar17));
            *(undefined4 *)(uVar18 + 0x10 + lVar17) = 1;
          }
          else {
            lVar13 = (**(code **)(*param_1 + 0x148))(param_1);
            if (*(float *)(uVar18 + 0xc + lVar17) <= *(float *)(lVar13 + 0x8c8)) goto LAB_14305e220;
            *(undefined4 *)(uVar18 + 0x10 + lVar17) = 0;
          }
        }
        uVar18 = uVar18 + 0x18;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      iVar16 = (int)param_1[0xb5];
    }
    iVar9 = iVar16 + -1;
    if (-1 < iVar9) {
      lVar17 = (longlong)iVar9 * 0x18;
      lVar13 = (longlong)iVar16 * 0x18;
      lVar10 = lVar17;
      do {
        local_res8 = param_1[0xb4];
        if (*(int *)(lVar10 + 0x10 + local_res8) != 0) {
          iVar16 = (int)param_1[0xb7];
          *(int *)(param_1 + 0xb7) = iVar16 + 1;
          if (*(int *)((longlong)param_1 + 0x5bc) < iVar16 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xb6,iVar16)
            ;
          }
          *(undefined8 *)(param_1[0xb6] + (longlong)iVar16 * 8) =
               *(undefined8 *)(lVar10 + local_res8);
          iVar16 = (int)param_1[0xb5];
          iVar14 = (iVar16 - iVar9) + -1;
          if (iVar14 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[0xb4] + lVar17),(void *)(lVar13 + param_1[0xb4]),
                       (longlong)iVar14 * 0x18);
            iVar16 = (int)param_1[0xb5];
          }
          *(int *)(param_1 + 0xb5) = iVar16 + -1;
        }
        lVar13 = lVar13 + -0x18;
        lVar17 = lVar17 + -0x18;
        lVar10 = lVar10 + -0x18;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  FUN_143063420(param_1);
  return;
}



// FUNCTION 14305e360 FUN_14305e360 body=238 status=ok
// SIG undefined FUN_14305e360(void)

void FUN_14305e360(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if ((char)param_1[0x1c] == '\0') {
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x148))();
  fVar3 = *(float *)(param_1 + 0x2f);
  fVar1 = *(float *)(lVar2 + 0x790);
  fVar4 = fVar3;
  if (fVar3 < 0.0) {
    if (param_1[0x16] != 0) {
      fVar4 = *(float *)(param_1[0x16] + 0x30);
      goto LAB_14305e3c1;
    }
LAB_14305e3c6:
    if (fVar3 < 0.0) {
      if (param_1[0x16] == 0) {
        fVar3 = 1.0;
      }
      else {
        fVar3 = *(float *)(param_1[0x16] + 0x30);
      }
    }
    if (fVar3 + *(float *)((longlong)param_1 + 0x1fc) <= fVar1) {
      if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
        lVar2 = param_1[4];
      }
      else {
        lVar2 = 0;
      }
      if (*(char *)(lVar2 + 0x128) == '\x03') {
        (**(code **)(*param_1 + 0x278))(param_1);
      }
      goto LAB_14305e431;
    }
  }
  else {
LAB_14305e3c1:
    if (0.0 < fVar4) goto LAB_14305e3c6;
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,param_2,0,param_3);
LAB_14305e431:
  *(float *)((longlong)param_1 + 0x204) = fVar1;
  return;
}



// FUNCTION 14305e450 FUN_14305e450 body=1514 status=ok
// SIG undefined FUN_14305e450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14305e450(longlong *param_1,float param_2,longlong *param_3)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  undefined4 local_178;
  undefined4 local_174;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_164;
  longlong local_160;
  longlong local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined8 uStack_114;
  uint local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  longlong local_a8 [4];
  longlong *local_88;
  undefined8 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar16 = 0;
  lVar15 = lVar16;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar15 = param_1[4];
  }
  uVar5 = *(uint *)((longlong)param_1 + 0xe4);
  if ((uVar5 & 1) == 0) {
    if ((uVar5 >> 10 & 1) == 0) {
      return;
    }
    if ((uVar5 >> 0xb & 1) != 0) {
      (**(code **)(*param_1 + 0x2e0))();
      uStack_11c = 0;
      uStack_118 = 0;
      uStack_114 = 0x3f80000000000000;
      uStack_120 = 0;
      local_108 = local_108 & 0xffffff00;
      param_1[0x85] = local_138;
      param_1[0x86] = lStack_130;
      *(undefined4 *)(param_1 + 0x87) = local_128;
      *(undefined4 *)((longlong)param_1 + 0x43c) = uStack_124;
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)((longlong)param_1 + 0x444) = 0;
      auVar7._12_4_ = 0;
      auVar7._0_12_ = ZEXT812(0x3f80000000000000) << 0x20;
      *(undefined1 (*) [16])(param_1 + 0x89) = auVar7;
      *(uint *)(param_1 + 0x8b) = local_108;
      FUN_14305a680(lVar15,param_1);
      return;
    }
    *(uint *)((longlong)param_1 + 0xe4) = uVar5 | 0x800;
    return;
  }
  *(float *)(param_1 + 0x46) = param_2 + *(float *)(param_1 + 0x46);
  lVar11 = (**(code **)(*param_1 + 0x148))();
  fVar17 = *(float *)(param_1 + 0x45);
  bVar8 = false;
  fVar3 = *(float *)(lVar11 + 0x790);
  if ((0.0 < fVar17) && (*(float *)(param_1 + 0x45) = fVar17 - param_2, fVar17 - param_2 <= 0.0)) {
    *(uint *)((longlong)param_1 + 0xe4) = *(uint *)((longlong)param_1 + 0xe4) | 0x1000;
    bVar8 = true;
    if (fVar17 < param_2) {
      param_2 = fVar17;
    }
    *(undefined4 *)(param_1 + 0x45) = 0xbdcccccd;
  }
  FUN_143063770(param_1,param_2);
  if ((*(float *)(param_1 + 0x67) < fVar3) && (0.0 < *(float *)(param_1 + 0x67))) {
    FUN_143056700(param_1);
    *(undefined4 *)(param_1 + 0x67) = 0xbf800000;
  }
  if ((bVar8) || (0.0 < *(float *)(param_1 + 0x45) || *(float *)(param_1 + 0x45) == 0.0)) {
    if ((0.0 < *(float *)(param_1 + 0x48)) &&
       (fVar17 = *(float *)(param_1 + 0x48) - param_2, *(float *)(param_1 + 0x48) = fVar17,
       fVar17 <= 0.0)) {
      FUN_1430491b0(param_1,0);
    }
    uVar5 = *(uint *)((longlong)param_1 + 0xe4);
    uVar14 = (ulonglong)uVar5;
    if (((uVar5 & 1) != 0) && ((uVar5 & 0x10) != 0)) {
      if (((int)param_1[99] < 1) || (lVar11 = *(longlong *)param_1[0x62], lVar11 == 0)) {
        lVar11 = FUN_14304e080(param_1 + 0x38,&local_138);
        uVar5 = *(uint *)((longlong)param_1 + 0xe4);
        uVar18 = *(undefined4 *)(lVar11 + 0x10);
        uVar19 = *(undefined4 *)(lVar11 + 0x14);
        uVar10 = *(undefined4 *)(lVar11 + 0x18);
        uStack_dc = *(undefined4 *)(lVar11 + 0x1c);
        local_144 = uVar18;
        uStack_140 = uVar19;
        local_13c = uVar10;
        local_e8 = uVar18;
        uStack_e4 = uVar19;
        uStack_e0 = uVar10;
      }
      else {
        uVar18 = *(undefined4 *)(lVar11 + 0x220);
        uVar19 = *(undefined4 *)(lVar11 + 0x224);
        uVar10 = *(undefined4 *)(lVar11 + 0x228);
        uStack_ec = *(undefined4 *)(lVar11 + 0x22c);
        local_150 = uVar18;
        uStack_14c = uVar19;
        local_148 = uVar10;
        local_f8 = uVar18;
        uStack_f4 = uVar19;
        uStack_f0 = uVar10;
      }
      uVar14 = (ulonglong)uVar5;
      param_1[0x55] = CONCAT44(uVar19,uVar18);
      *(ulonglong *)((longlong)param_1 + 0x2b4) = CONCAT44(uVar19,uVar18);
      *(undefined4 *)(param_1 + 0x56) = uVar10;
      *(undefined4 *)((longlong)param_1 + 700) = uVar10;
    }
    if (((byte)uVar14 & 0x11) == 1) {
      if (*DAT_146b47598 != 0) {
        *(float *)(param_1 + 0x83) = param_2;
        if (param_3 != param_1 + 9) {
          iVar4 = *(int *)(lVar15 + 0x468);
          if (iVar4 < 0) {
            return;
          }
          if (*(int *)(lVar15 + 0x478) <= iVar4) {
            return;
          }
          lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x470) + (longlong)iVar4 * 8);
          iVar4 = *(int *)(lVar15 + 0x28);
          *(int *)(lVar15 + 0x28) = iVar4 + 1;
          if (*(int *)(lVar15 + 0x2c) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar15 + 0x20,iVar4);
          }
          *(longlong **)(*(longlong *)(lVar15 + 0x20) + (longlong)iVar4 * 8) = param_1;
          return;
        }
        plVar12 = (longlong *)FUN_143042760(local_d8,0,0xff);
        lVar15 = *plVar12;
        FWeakObjectPtr::operator=(&local_178,param_1);
        *(undefined4 *)(lVar15 + 0x10) = local_178;
        *(undefined4 *)(lVar15 + 0x14) = local_174;
        lVar15 = *plVar12;
        lVar9 = plVar12[2];
        lVar16 = plVar12[1];
        lVar11 = *(longlong *)(lVar15 + 0x20);
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 0x48) = *(int *)(lVar11 + 0x48) + 1;
          UNLOCK();
        }
        local_170 = lVar11;
        FUN_14305c670(lVar15,lVar16,(int)lVar9,1);
        plVar12 = param_1 + 0x82;
        if (plVar12 == &local_170) {
          if (lVar11 == 0) goto LAB_14305e825;
          LOCK();
          piVar1 = (int *)(lVar11 + 0x48);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          lVar15 = local_170;
        }
        else {
          lVar15 = *plVar12;
          *plVar12 = lVar11;
          if (lVar15 == 0) goto LAB_14305e825;
          LOCK();
          piVar1 = (int *)(lVar15 + 0x48);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
        }
        if (iVar4 == 1) {
          FGraphEvent::Recycle(lVar15);
        }
LAB_14305e825:
        local_88 = (longlong *)0x0;
        local_80 = 1;
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_a8,0);
        lVar15 = *plVar12;
        plVar12 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar12 = local_88;
        }
        *plVar12 = lVar15;
        if (lVar15 != 0) {
          LOCK();
          *(int *)(lVar15 + 0x48) = *(int *)(lVar15 + 0x48) + 1;
          UNLOCK();
        }
        plVar12 = (longlong *)FUN_1430425e0(local_c0,local_a8,0xff);
        lVar15 = *plVar12;
        FWeakObjectPtr::operator=(&local_168,param_1);
        *(undefined4 *)(lVar15 + 0x10) = local_168;
        *(undefined4 *)(lVar15 + 0x14) = local_164;
        lVar15 = *plVar12;
        lVar9 = plVar12[2];
        lVar16 = plVar12[1];
        lVar11 = *(longlong *)(lVar15 + 0x20);
        piVar1 = (int *)(lVar11 + 0x48);
        if (lVar11 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_180 = lVar11;
        FUN_14048b000(lVar15,lVar16,(int)lVar9,1);
        if (param_3 != (longlong *)0x0) {
          lVar15 = lVar11;
          if (lVar11 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            lVar15 = local_180;
          }
          local_160 = lVar11;
          puVar13 = (undefined8 *)FTickFunction::GetCompletionHandle(param_3,&local_158);
          FGraphEvent::DontCompleteUntil(*puVar13,&local_160);
          lVar11 = lVar15;
          if (local_158 != 0) {
            LOCK();
            piVar2 = (int *)(local_158 + 0x48);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            lVar11 = local_180;
            if (iVar4 == 1) {
              FGraphEvent::Recycle();
              lVar11 = local_180;
            }
          }
        }
        if (lVar11 != 0) {
          LOCK();
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            FGraphEvent::Recycle(local_180);
          }
        }
        FUN_14158cb50(local_a8);
        return;
      }
      (**(code **)(*param_1 + 0x310))(param_1,param_2);
      (**(code **)(*param_1 + 0x318))(param_1);
    }
    else {
      if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
        lVar16 = param_1[4];
      }
      if ((((*(char *)(lVar16 + 0x128) != '\x03') && ((uVar14 & 8) == 0)) && (param_1[0x38] == 0))
         && (param_1[0x39] == 0)) {
        FUN_14305abd0(param_1,CONCAT71((int7)(uVar14 >> 8),1));
      }
    }
    (**(code **)(*param_1 + 800))(param_1);
  }
  else {
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      lVar16 = param_1[4];
    }
    if (*(char *)(lVar16 + 0x128) == '\x03') {
      uVar6 = *(undefined8 *)(param_1[0x15] + 800);
      *(longlong **)(param_1[0x15] + 800) = param_1;
      FUN_1430af510(param_1[0x15],param_1);
      *(undefined8 *)(param_1[0x15] + 800) = uVar6;
      if ((*(byte *)((longlong)param_1 + 0xe4) & 1) != 0) {
        (**(code **)(*param_1 + 0x2a0))(param_1,0);
      }
    }
  }
  *(float *)((longlong)param_1 + 0x244) = fVar3;
  return;
}



// FUNCTION 14305ea40 FUN_14305ea40 body=435 status=ok
// SIG undefined FUN_14305ea40(void)

void FUN_14305ea40(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  float local_78;
  float fStack_74;
  float local_70;
  undefined8 local_68;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (((*(byte *)(param_2 + 0x1d) >> 1 & 1) != 0) &&
     (plVar2 = (longlong *)param_2[0x28], plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x648))(plVar2,&local_48,local_18);
    FRotator::Vector(local_18,&local_78);
    local_60 = local_70;
    local_38 = local_48;
    local_28 = param_2[0x55];
    local_30 = local_40;
    local_20 = (undefined4)param_2[0x56];
    UKismetMathLibrary::FindClosestPointOnLine(&local_58,&local_28,&local_38,&local_68);
    fVar1 = *(float *)(param_1 + 0x30);
    lVar5 = 0;
    local_54 = fVar1 * fStack_74 + local_54;
    local_58 = local_78 * fVar1 + local_58;
    local_60 = local_70 * fVar1 + local_50;
    local_68 = CONCAT44(local_54,local_58);
    lVar4 = lVar5;
    if ((*(uint *)(param_2 + 1) >> 4 & 1) == 0) {
      lVar4 = param_2[4];
    }
    if (*(char *)(lVar4 + 0x128) == '\x03') {
      param_2[0x2a] = 0;
      if (((local_58 == *(float *)(param_2 + 0x2b)) &&
          (local_54 == *(float *)((longlong)param_2 + 0x15c))) &&
         (local_60 == *(float *)(param_2 + 0x2c))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      *(ushort *)(param_2 + 0x1d) = *(ushort *)(param_2 + 0x1d) & 0xfdff;
      param_2[0x2b] = local_68;
      *(float *)(param_2 + 0x2c) = local_60;
      if ((*(ushort *)(param_2 + 0x30) & 0x200) != 0) {
        if ((*(uint *)(param_2 + 1) >> 4 & 1) == 0) {
          lVar5 = param_2[4];
        }
        if (*(char *)(lVar5 + 0x128) == '\x03') {
          *(ushort *)(param_2 + 0x30) = *(ushort *)(param_2 + 0x30) & 0xfdff;
          (**(code **)(*param_2 + 0x260))(param_2);
        }
      }
      if (bVar3) {
        (**(code **)(*param_2 + 0x260))(param_2);
      }
    }
  }
  return;
}



// FUNCTION 14305ec00 FUN_14305ec00 body=584 status=ok
// SIG undefined FUN_14305ec00(void)

void FUN_14305ec00(undefined8 param_1,longlong param_2,undefined1 *param_3,float *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_c4;
  float local_b8;
  float local_b4;
  float local_b0;
  
  if ((*(byte *)(param_2 + 0xe8) >> 1 & 1) != 0) {
    fVar9 = *(float *)(param_2 + 0x2e0);
    uVar1 = *(undefined8 *)(param_2 + 0x2d8);
    fVar6 = (float)uVar1;
    FUN_14304b050(param_2,&local_b8);
    fVar5 = *(float *)(param_3 + 0x38) * param_4[3];
    fStack_c4 = (float)((ulonglong)uVar1 >> 0x20);
    if (fVar5 < 1.0) {
      fVar2 = fVar5 * fVar5;
      fVar8 = fVar2 * fVar5;
      fVar3 = fVar8 - fVar2;
      fVar7 = fVar2 * 3.0 - (fVar8 + fVar8);
      fVar4 = ((fVar8 + fVar8) - fVar2 * 3.0) + 1.0;
      fVar10 = 1.0 / *(float *)(param_3 + 0x34);
      fVar5 = (fVar8 - (fVar2 + fVar2)) + fVar5;
      fVar2 = fVar5 * *param_4 + fVar6 * fVar4 + fVar3 * (local_b8 - fVar6) + local_b8 * fVar7;
      fVar6 = fVar5 * param_4[1] + fStack_c4 * fVar4 + fVar3 * (local_b4 - fStack_c4) +
              local_b4 * fVar7;
      fVar9 = fVar5 * param_4[2] + fVar4 * fVar9 + fVar3 * (local_b0 - fVar9) + fVar7 * local_b0;
      *param_3 = 1;
      *(ulonglong *)(param_3 + 0x10) =
           CONCAT44((fVar6 - *(float *)(param_3 + 8)) * fVar10,
                    (fVar2 - *(float *)(param_3 + 4)) * fVar10);
      *(ulonglong *)(param_3 + 4) = CONCAT44(fVar6,fVar2);
      *(float *)(param_3 + 0x18) = (fVar9 - *(float *)(param_3 + 0xc)) * fVar10;
      *(float *)(param_3 + 0xc) = fVar9;
    }
  }
  return;
}



// FUNCTION 14305ee50 FUN_14305ee50 body=1356 status=ok
// SIG undefined FUN_14305ee50(void)

void FUN_14305ee50(longlong param_1,longlong *param_2,longlong param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_res10 [8];
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  
  if ((*(byte *)(param_2 + 0x1d) >> 1 & 1) != 0) {
    FUN_14304b050(param_2,&local_b8);
    local_d8 = (float)local_b8 - *(float *)(param_3 + 4);
    local_d4 = local_b8._4_4_ - *(float *)(param_3 + 8);
    local_d0 = local_b0 - *(float *)(param_3 + 0xc);
    fVar14 = SQRT(local_d4 * local_d4 + local_d8 * local_d8 + local_d0 * local_d0);
    if (0.0001 < fVar14) {
      fVar9 = 1.0 / fVar14;
      local_d8 = fVar9 * local_d8;
      local_d4 = fVar9 * local_d4;
      local_d0 = fVar9 * local_d0;
    }
    fVar9 = *(float *)(param_1 + 0x58);
    fVar15 = 1.0;
    fVar10 = *(float *)(param_3 + 0x38) -
             (*(float *)((longlong)param_2 + 0x22c) - *(float *)((longlong)param_2 + 0x224));
    if ((0.0 < fVar9) && (fVar10 < fVar9)) {
      local_res10[0] = *(undefined1 *)(param_1 + 0x5c);
      fVar15 = (float)UKismetMathLibrary::Ease
                                (0,0x3f800000,fVar10 / fVar9,local_res10,
                                 *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    }
    fVar9 = *(float *)(param_1 + 0x3c);
    fVar10 = 0.0;
    if ((0.0 < fVar9) && (fVar14 < fVar9)) {
      fVar10 = *param_4;
      if (fVar14 < *param_4) {
        *param_4 = fVar14;
        fVar9 = *(float *)(param_1 + 0x3c);
        fVar10 = fVar14;
      }
      fVar1 = *(float *)(param_1 + 0x40);
      if (fVar9 <= fVar1) {
        fVar10 = 1.0;
      }
      else {
        local_res10[0] = *(undefined1 *)(param_1 + 0x48);
        fVar9 = (fVar10 - fVar1) / (fVar9 - fVar1);
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        fVar10 = (float)UKismetMathLibrary::Ease
                                  (0,0x3f800000,1.0 - fVar9,local_res10,
                                   *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      }
      fVar15 = (*(float *)(param_1 + 0x44) - fVar15) * fVar10 + fVar15;
      if (((*(float *)(param_3 + 0x28) != 0.0) || (*(float *)(param_3 + 0x2c) != 0.0)) ||
         (*(float *)(param_3 + 0x30) != 0.0)) {
        if (*(float *)(param_1 + 0x40) <= fVar14 && fVar14 != *(float *)(param_1 + 0x40)) {
          fVar9 = 1.0 - fVar10;
          *(float *)(param_3 + 0x28) = *(float *)(param_3 + 0x28) * fVar9;
          *(float *)(param_3 + 0x2c) = fVar9 * *(float *)(param_3 + 0x2c);
          *(float *)(param_3 + 0x30) = fVar9 * *(float *)(param_3 + 0x30);
        }
        else {
          *(ulonglong *)(param_3 + 0x28) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          *(float *)(param_3 + 0x30) = DAT_1468b5d98;
        }
      }
    }
    fVar9 = *(float *)(param_3 + 0x34);
    fVar1 = *(float *)(param_1 + 0x30);
    fVar2 = *(float *)(param_1 + 0x34);
    FVector::Rotation(&local_d8,&local_a8);
    FVector::Rotation(param_3 + 0x10,&local_c8);
    if ((*(char *)(param_1 + 0x54) != '\0') && (fVar10 == 1.0)) {
      fVar10 = *(float *)(param_3 + 0x10);
      fVar3 = *(float *)(param_3 + 0x18);
      fVar4 = *(float *)(param_3 + 0x14);
      fVar11 = fVar10 * fVar10 + fVar4 * fVar4 + fVar3 * fVar3;
      if (fVar11 == 1.0) {
        local_b8 = *(undefined8 *)(param_3 + 0x10);
        local_b0 = *(float *)(param_3 + 0x18);
        fVar8 = (float)((ulonglong)local_b8 >> 0x20);
        fVar12 = local_b0;
        fVar16 = (float)local_b8;
      }
      else {
        fVar8 = DAT_1468b5d94;
        fVar12 = DAT_1468b5d98;
        fVar16 = DAT_1468b5d90;
        if (1e-08 <= fVar11) {
          auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
          fVar12 = auVar13._0_4_;
          fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
          fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
          fVar16 = fVar10 * fVar12;
          fVar8 = fVar4 * fVar12;
          fVar12 = fVar3 * fVar12;
        }
      }
      fVar10 = fVar8 * local_d4 + fVar16 * local_d8 + fVar12 * local_d0;
      bVar5 = (byte)*(ushort *)(param_2 + 0x1d) >> 1 & 1;
      if (((bVar5 == 0) || ((*(uint *)((longlong)param_2 + 0xe4) & 0x8000) == 0)) && (0.0 <= fVar10)
         ) {
        *(uint *)((longlong)param_2 + 0xe4) = *(uint *)((longlong)param_2 + 0xe4) | 0x8000;
      }
      if (((bVar5 != 0) && ((*(uint *)((longlong)param_2 + 0xe4) & 0x8000) != 0)) && (fVar10 <= 0.0)
         ) {
        *(ushort *)(param_2 + 0x1d) = *(ushort *)(param_2 + 0x1d) & 0xfffd;
        if ((*(ushort *)(param_2 + 0x30) & 2) == 0) {
          return;
        }
        if ((*(uint *)(param_2 + 1) >> 4 & 1) == 0) {
          lVar6 = param_2[4];
        }
        else {
          lVar6 = 0;
        }
        if (*(char *)(lVar6 + 0x128) != '\x03') {
          return;
        }
        *(ushort *)(param_2 + 0x30) = *(ushort *)(param_2 + 0x30) & 0xfffd;
        (**(code **)(*param_2 + 0x260))(param_2);
        return;
      }
    }
    local_c4 = FMath::FixedTurn(local_c4,local_a4,fVar9 * fVar2 * fVar15);
    local_c8 = FMath::FixedTurn(local_c8,local_a8,fVar9 * fVar1 * fVar15);
    fVar9 = SQRT(*(float *)(param_3 + 0x10) * *(float *)(param_3 + 0x10) +
                 *(float *)(param_3 + 0x14) * *(float *)(param_3 + 0x14) +
                 *(float *)(param_3 + 0x18) * *(float *)(param_3 + 0x18));
    pfVar7 = (float *)FRotator::Vector(&local_c8,&local_b8);
    local_b0 = fVar9 * pfVar7[2];
    *(ulonglong *)(param_3 + 0x10) = CONCAT44(fVar9 * pfVar7[1],fVar9 * *pfVar7);
    *(float *)(param_3 + 0x18) = local_b0;
    if ((0.0 < *(float *)(param_1 + 0x68)) && (fVar14 <= *(float *)(param_1 + 0x68))) {
      FUN_143043a10(param_2);
    }
  }
  return;
}



// FUNCTION 14305f3a0 OnDeleteEdges body=83 status=ok
// SIG undefined OnDeleteEdges(void)

void UEditableMeshAdapter::OnDeleteEdges(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\LightProjectile/LightProjectileMoveModifier.h"
             ,0x2a,L"Pure virtual not implemented (%s)",L"ULightProjectileMoveModifier::Tick");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxWeapon\\Public\\LightProjectile/LightProjectileMoveModifier.h"
             ,0x2a,L"Pure virtual not implemented (%s)",L"ULightProjectileMoveModifier::Tick");
  return;
}



// FUNCTION 14305f400 FUN_14305f400 body=2099 status=ok
// SIG undefined FUN_14305f400(void)

void FUN_14305f400(longlong param_1,longlong *param_2,longlong param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8 [2];
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  
  fVar20 = *(float *)(param_3 + 0x38);
  if (fVar20 < *(float *)(param_1 + 0x4c)) {
    return;
  }
  fVar8 = *(float *)(param_1 + 0x50);
  local_res8[0] = 1.0;
  if ((0.0 < fVar8) && (fVar20 - *(float *)(param_1 + 0x4c) < fVar8)) {
    if (*(char *)(param_1 + 0x54) != '\0') {
      fVar8 = fVar8 * *(float *)(param_2 + 0x45);
    }
    local_res8[0] = (float)CONCAT31(0x3f8000,*(undefined1 *)(param_1 + 0x58));
    local_res8[0] =
         (float)UKismetMathLibrary::Ease
                          (param_1,0x3f800000,fVar20 / fVar8,local_res8,
                           *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  }
  if ((local_res8[0] <= 0.0) || (*(float *)(param_3 + 0x38) < *(float *)(param_1 + 0x30) + *param_4)
     ) goto LAB_14305f875;
  *param_4 = *(float *)(param_3 + 0x38);
  srand((uint)param_4[2]);
  fVar20 = *(float *)(param_1 + 0x3c);
  if (0.0 <= fVar20) {
    if (180.0 <= fVar20) {
      fVar20 = 180.0;
    }
  }
  else {
    fVar20 = 0.0;
  }
  fVar8 = param_4[1];
  if (0.0 <= fVar8) {
    fVar20 = fVar8 - fVar20;
  }
  else {
    fVar20 = 0.0;
    fVar8 = 360.0;
  }
  if ((*(byte *)(param_2 + 0x1d) >> 1 & 1) != 0) {
    pfVar5 = (float *)FUN_14304b050(param_2,&local_d8);
    fVar17 = *pfVar5 - *(float *)(param_3 + 4);
    fVar18 = pfVar5[1] - *(float *)(param_3 + 8);
    local_e0 = pfVar5[2] - *(float *)(param_3 + 0xc);
    local_e8 = CONCAT44(fVar18,fVar17);
    fVar9 = fVar18 * fVar18 + fVar17 * fVar17 + local_e0 * local_e0;
    if (*(float *)(param_1 + 0x48) <= SQRT(fVar9) && SQRT(fVar9) != *(float *)(param_1 + 0x48)) {
      if (((*(byte *)(param_2 + 0x1d) >> 1 & 1) == 0) ||
         ((*(uint *)((longlong)param_2 + 0xe4) & 0x8000) == 0)) {
        puVar6 = &local_e8;
        local_e8 = CONCAT44((fVar18 + *(float *)((longlong)param_2 + 0x2f4)) * 0.5,
                            (fVar17 + *(float *)(param_2 + 0x5e)) * 0.5);
        local_e0 = (local_e0 + *(float *)(param_2 + 0x5f)) * 0.5;
      }
      else {
        local_d0 = local_e0;
        puVar6 = &local_d8;
        local_d8 = local_e8;
      }
      fVar9 = *(float *)(puVar6 + 1);
      *(undefined8 *)(param_4 + 3) = *puVar6;
      param_4[5] = fVar9;
      fVar9 = param_4[4];
      fVar17 = param_4[3];
      fVar18 = param_4[5];
      fVar10 = fVar17 * fVar17 + fVar9 * fVar9 + fVar18 * fVar18;
      if (1e-08 < fVar10) {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = CONCAT44(0,fVar10);
        auVar16._8_8_ = 0;
        auVar16._0_8_ = CONCAT44(0,fVar10);
        auVar16 = rsqrtss(auVar13,auVar16);
        fVar19 = auVar16._0_4_;
        fVar19 = fVar19 + fVar19 * (0.5 - fVar10 * 0.5 * fVar19 * fVar19);
        fVar19 = fVar19 + fVar19 * (0.5 - fVar10 * 0.5 * fVar19 * fVar19);
        param_4[3] = fVar17 * fVar19;
        param_4[4] = fVar9 * fVar19;
        param_4[5] = fVar18 * fVar19;
      }
    }
    else {
      param_4[1] = 0.0;
      if (fVar9 == 1.0) {
LAB_14305f686:
        local_e8 = CONCAT44(fVar18,fVar17);
      }
      else {
        if (1e-08 <= fVar9) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = CONCAT44(0,fVar9);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = CONCAT44(0,fVar9);
          auVar16 = rsqrtss(auVar12,auVar3);
          fVar10 = auVar16._0_4_;
          fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
          fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
          fVar17 = fVar17 * fVar10;
          fVar18 = fVar18 * fVar10;
          local_e0 = local_e0 * fVar10;
          goto LAB_14305f686;
        }
        local_e0 = DAT_1468b5d98;
        local_e8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      *(undefined8 *)(param_4 + 3) = local_e8;
      param_4[5] = local_e0;
    }
  }
  iVar4 = rand();
  fVar20 = (float)iVar4 * 3.051851e-05 * (fVar8 - fVar20) + fVar20;
  param_4[1] = fVar20;
  if (360.0 < fVar20) {
    do {
      fVar20 = fVar20 - 360.0;
    } while (360.0 < fVar20);
    param_4[1] = fVar20;
  }
  fVar8 = *(float *)(param_1 + 0x38);
  uVar7 = __libm_sse2_sincosf_(fVar20);
  param_4[0xb] = 0.0;
  param_4[9] = (float)uVar7 * fVar8;
  param_4[10] = (float)((ulonglong)uVar7 >> 0x20) * fVar8;
  param_4[2] = (float)(int)(fVar20 * 193632.0 + (float)(int)param_4[2]);
LAB_14305f875:
  fVar20 = param_4[7];
  if (param_4[10] != fVar20) {
    fVar20 = (float)FMath::FixedTurn();
    fVar8 = (float)(int)(fVar20 * 0.0027777778) * 360.0;
    if (ABS(fVar20) < ABS(fVar8)) {
      fVar8 = fVar20;
    }
    fVar20 = fVar20 - fVar8;
    if (fVar20 < 0.0) {
      fVar20 = fVar20 + 360.0;
    }
    if (180.0 < fVar20) {
      fVar20 = fVar20 - 360.0;
    }
    param_4[7] = fVar20;
  }
  fVar8 = param_4[6];
  if (param_4[9] != fVar8) {
    fVar8 = (float)FMath::FixedTurn();
    fVar20 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
    if (ABS(fVar8) < ABS(fVar20)) {
      fVar20 = fVar8;
    }
    fVar8 = fVar8 - fVar20;
    if (fVar8 < 0.0) {
      fVar8 = fVar8 + 360.0;
    }
    if (180.0 < fVar8) {
      fVar8 = fVar8 - 360.0;
    }
    param_4[6] = fVar8;
    fVar20 = param_4[7];
  }
  pfVar5 = (float *)FVector::Rotation(param_4 + 3,&local_d8);
  local_c8 = CONCAT44(fVar20 * local_res8[0] + pfVar5[1],fVar8 * local_res8[0] + *pfVar5);
  *(undefined8 *)pfVar5 = local_c8;
  local_c0 = pfVar5[2];
  fVar18 = SQRT(*(float *)(param_3 + 0x10) * *(float *)(param_3 + 0x10) +
                *(float *)(param_3 + 0x14) * *(float *)(param_3 + 0x14) +
                *(float *)(param_3 + 0x18) * *(float *)(param_3 + 0x18));
  pfVar5 = (float *)FRotator::Vector(&local_c8,&local_d8);
  fVar20 = pfVar5[1];
  fVar8 = *pfVar5;
  fVar9 = pfVar5[2];
  fVar17 = fVar8 * fVar8 + fVar20 * fVar20 + fVar9 * fVar9;
  if (fVar17 == 1.0) {
    local_e8 = *(undefined8 *)pfVar5;
    local_e0 = pfVar5[2];
    fVar10 = (float)((ulonglong)local_e8 >> 0x20);
    local_d0 = local_e0;
    fVar19 = (float)local_e8;
  }
  else {
    fVar10 = DAT_1468b5d94;
    local_d0 = DAT_1468b5d98;
    fVar19 = DAT_1468b5d90;
    if (1e-08 <= fVar17) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = CONCAT44(0,fVar17);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = CONCAT44(0,fVar17);
      auVar16 = rsqrtss(auVar14,auVar2);
      fVar11 = auVar16._0_4_;
      fVar11 = fVar11 + fVar11 * (0.5 - fVar17 * 0.5 * fVar11 * fVar11);
      fVar11 = fVar11 + fVar11 * (0.5 - fVar17 * 0.5 * fVar11 * fVar11);
      fVar19 = fVar8 * fVar11;
      fVar10 = fVar20 * fVar11;
      local_d0 = fVar9 * fVar11;
    }
  }
  local_d0 = local_d0 * fVar18;
  *(ulonglong *)(param_3 + 0x10) = CONCAT44(fVar10 * fVar18,fVar19 * fVar18);
  *(float *)(param_3 + 0x18) = local_d0;
  if (*(char *)(param_1 + 0x40) != '\0') {
    uVar7 = (**(code **)(*param_2 + 0x148))(param_2);
    fVar20 = (float)FUN_1428cc5b0(uVar7);
    fVar9 = fVar20 * *(float *)(param_1 + 0x44) * *(float *)(param_3 + 0x34) + param_4[5];
    param_4[5] = fVar9;
    fVar20 = param_4[4];
    fVar8 = param_4[3];
    fVar17 = fVar8 * fVar8 + fVar20 * fVar20 + fVar9 * fVar9;
    if (1e-08 < fVar17) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = CONCAT44(0,fVar17);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = CONCAT44(0,fVar17);
      auVar16 = rsqrtss(auVar15,auVar1);
      fVar18 = auVar16._0_4_;
      fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
      fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
      param_4[3] = fVar8 * fVar18;
      param_4[4] = fVar20 * fVar18;
      param_4[5] = fVar9 * fVar18;
    }
  }
  return;
}



// FUNCTION 14305fc40 FUN_14305fc40 body=4065 status=ok
// SIG undefined FUN_14305fc40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14305fc40(longlong *param_1)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  DWORD DVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong **pplVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_6c8 [32];
  longlong *local_6a8;
  undefined1 *local_6a0;
  longlong *local_698;
  undefined1 *local_690;
  longlong *local_688;
  undefined1 local_678 [8];
  undefined8 local_670;
  float local_668;
  undefined8 local_660;
  float local_658;
  undefined8 local_650;
  undefined4 local_648;
  float local_640;
  float local_63c;
  float local_638;
  float local_630;
  float local_62c;
  float local_628;
  float local_624;
  float local_620;
  float local_61c;
  float local_618;
  float local_614;
  float local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined4 local_5f8;
  undefined8 local_5f0;
  float local_5e8;
  undefined8 local_5e0;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined8 local_5d0;
  float local_5c8;
  undefined1 local_5c0 [16];
  undefined8 local_5b0;
  undefined4 local_5a8;
  float local_5a0;
  float local_59c;
  float local_598;
  longlong *local_590 [2];
  float local_580;
  undefined8 local_578;
  undefined4 local_570;
  undefined8 local_568;
  float local_560;
  undefined8 local_558;
  float local_550;
  longlong local_548 [4];
  undefined1 local_528 [12];
  undefined1 local_51c [12];
  undefined1 local_510 [12];
  undefined1 local_504 [12];
  byte local_4f8 [12];
  undefined4 local_4ec;
  undefined4 local_4e4;
  undefined4 local_4e0;
  float local_4dc;
  undefined1 local_468 [24];
  undefined1 local_450 [144];
  undefined1 local_3c0 [144];
  undefined1 local_330 [144];
  undefined1 local_2a0 [144];
  undefined1 local_210 [152];
  undefined1 local_178 [20];
  undefined1 local_164;
  longlong local_130;
  longlong local_110;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_6c8;
  FUN_142357eb0();
  if ((char)param_1[0x2f] == '\0') {
    return;
  }
  cVar9 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar9 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar10 = GetCurrentThreadId(), DVar10 != DAT_1468c21c0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  plVar17 = (longlong *)0x0;
  plVar13 = plVar17;
  if (param_1[0x30] != 0) {
    plVar13 = (longlong *)FUN_14307c290();
    (**(code **)(*plVar13 + 0x450))(plVar13,param_1[0x34]);
    (**(code **)(*plVar13 + 0x280))(plVar13,0);
  }
  plVar4 = (longlong *)param_1[0x23];
  plVar14 = (longlong *)(**(code **)(*plVar4 + 0x688))(plVar4);
  plVar18 = (longlong *)param_1[0x23];
  if (plVar18 == (longlong *)0x0) {
LAB_14305fd92:
    plVar18 = plVar17;
    if (plVar14 != (longlong *)0x0) {
      uVar16 = FUN_1430a8880();
      plVar17 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar14,uVar16);
      if (plVar17 != (longlong *)0x0) {
        plVar18 = (longlong *)(**(code **)(*plVar17 + 0xf0))(plVar17,0);
      }
      goto LAB_14305fdc1;
    }
  }
  else {
    lVar15 = FUN_1430b3b80();
    if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
        lVar15 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14305fd92;
LAB_14305fdc1:
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x648))(plVar14,&local_5f0,&local_600);
      goto LAB_14305fdf1;
    }
  }
  (**(code **)(*plVar4 + 0x648))(plVar4,&local_5f0,&local_600);
LAB_14305fdf1:
  local_650 = local_600;
  local_648 = local_5f8;
  if (((*(uint *)(param_1 + 0x65) & 1) == 0) || (plVar18 == (longlong *)0x0)) {
    if (((*(uint *)(param_1 + 0x65) & 2) == 0) || (plVar14 == (longlong *)0x0)) {
      plVar17 = (longlong *)FUN_14222b250(plVar4,param_1[100],0);
      if (plVar17 == (longlong *)0x0) {
        local_660 = local_5f0;
        local_658 = local_5e8;
        local_650 = local_600;
        local_648 = local_5f8;
      }
      else {
        puVar20 = (undefined8 *)(**(code **)(*plVar17 + 0x428))(plVar17,local_528,param_1[100]);
        local_660 = *puVar20;
        local_658 = *(float *)(puVar20 + 1);
        if ((*(byte *)(param_1 + 0x65) & 4) != 0) {
          puVar20 = (undefined8 *)(**(code **)(*plVar17 + 0x430))(plVar17,local_51c,param_1[100]);
          local_650 = *puVar20;
          local_648 = *(undefined4 *)(puVar20 + 1);
        }
      }
    }
    else {
      local_660 = local_5f0;
      local_658 = local_5e8;
    }
  }
  else {
    local_608 = 0;
    if (param_1[100] == 0) {
      (**(code **)(*plVar18 + 0x928))(plVar18,&local_660,&local_5b0);
    }
    else {
      (**(code **)(*plVar18 + 0x938))(plVar18,param_1[100],&local_660,&local_5b0);
    }
    if ((*(byte *)(param_1 + 0x65) & 4) != 0) {
      local_650 = local_5b0;
      local_648 = local_5a8;
    }
  }
  fVar26 = 1.0;
  if ((((*(byte *)(param_1 + 0x65) & 8) != 0) && (plVar18 != (longlong *)0x0)) &&
     (lVar15 = FUN_14307cf20(plVar18,(char)plVar18[0xd2]), lVar15 != 0)) {
    lVar19 = FUN_1430bf300();
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) + (longlong)*(int *)(lVar19 + 0x90) * 8
         ) != lVar19 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      fVar26 = (float)FUN_14306cf90(lVar15);
    }
  }
  fVar24 = *(float *)(param_1 + 0x3e);
  fVar25 = 0.0;
  fVar23 = fVar26 * *(float *)(param_1 + 0x35);
  local_5e0 = (code *)CONCAT44(local_5e0._4_4_,fVar26 * *(float *)((longlong)param_1 + 0x1ac));
  if (fVar24 <= 0.0) {
    fVar24 = *(float *)(param_1 + 0x37);
  }
  local_62c = fVar24;
  FRotator::Vector(&local_650,local_5c0);
  local_6a0 = local_5c0;
  local_690 = (undefined1 *)CONCAT44(local_690._4_4_,fVar24);
  local_698 = (longlong *)CONCAT44(local_698._4_4_,fVar23);
  local_6a8 = &local_660;
  plVar17 = plVar4;
  if (plVar14 != (longlong *)0x0) {
    plVar17 = plVar14;
  }
  (**(code **)(*param_1 + 0x3f8))(param_1,plVar17,&local_5f0,&local_600);
  _guard_xfg_dispatch_icall_nop(local_4f8,0,0x90);
  local_4ec = 0x3f800000;
  if (param_1[0x30] == 0) {
    lVar15 = param_1[0x24];
    if (lVar15 == 0) {
      lVar15 = FUN_1423407b0(param_1);
    }
    fVar26 = (float)FUN_1428cc5b0(lVar15);
    local_598 = fVar23 * *(float *)((longlong)param_1 + 0x1c4);
    fVar26 = fVar26 * *(float *)((longlong)param_1 + 0x1b4);
    local_59c = fVar23 * *(float *)(param_1 + 0x38);
    local_5a0 = fVar23 * *(float *)((longlong)param_1 + 0x1bc);
    local_628 = fVar26;
    uVar16 = FVector::Rotation(local_5c0,local_510);
    FRotator::RotateVector(uVar16,&local_640,&local_5a0);
    local_670 = local_660;
    local_668 = local_658;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b476f0) &&
       (_Init_thread_header(&DAT_146b476f0), DAT_146b476f0 == -1)) {
      FName::FName(&DAT_146b476e8,L"TrajectometerTrace",1);
      _Init_thread_footer(&DAT_146b476f0);
    }
    local_6a8 = plVar4;
    FUN_1422ffb20(local_178,DAT_146b476e8,local_678,1);
    local_164 = 0;
    FUN_1426d3dd0(local_548);
    FUN_1426ea8d0(local_548,2);
    iVar11 = FUN_142dd0770(plVar4);
    if (iVar11 != 0x20) {
      FUN_1426eac10(local_548,iVar11,1);
    }
    if (param_1[0x31] != 0) {
      if (bVar7) {
        FUN_142608f20();
        (**(code **)(*(longlong *)param_1[0x31] + 0x280))((longlong *)param_1[0x31],1);
      }
      else {
        uVar12 = *(uint *)((longlong)param_1 + 0x19c);
        if ((int)uVar12 < (int)(*(float *)(param_1 + 0x3e) / *(float *)((longlong)param_1 + 0x1ec)))
        {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(param_1 + 0x32);
          uVar12 = *(uint *)((longlong)param_1 + 0x19c);
        }
        *(undefined4 *)(param_1 + 0x33) = 0;
        if (0x7fffffff < uVar12) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(param_1 + 0x32,0);
        }
      }
    }
    local_630 = 0.0;
    if (0.0 < fVar24) {
      do {
        if (((local_4f8[0] & 1) == 0) || ((local_4f8[0] & 2) != 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) break;
        if (param_1[0x31] != 0) {
          if (bVar7) {
            FUN_142399750(param_1[0x31],&local_670,&DAT_1468b5da0);
            (**(code **)(*(longlong *)param_1[0x31] + 0x350))
                      ((longlong *)param_1[0x31],*(undefined4 *)((longlong)param_1 + 0x1ec),2);
          }
          else {
            iVar11 = (int)param_1[0x33];
            *(int *)(param_1 + 0x33) = iVar11 + 1;
            if (*(int *)((longlong)param_1 + 0x19c) < iVar11 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x32,iVar11);
            }
            lVar15 = param_1[0x32];
            *(undefined8 *)(lVar15 + (longlong)iVar11 * 0xc) = local_670;
            *(float *)(lVar15 + 8 + (longlong)iVar11 * 0xc) = local_668;
          }
        }
        fVar25 = 0.0;
        fVar24 = *(float *)(param_1 + 0x36);
        fVar23 = 0.0;
        local_5c8 = local_668;
        local_5d0 = local_670;
        if (0.0 < fVar24) {
          fVar26 = local_63c * local_63c + local_640 * local_640 + local_638 * local_638;
          local_61c = local_638;
          local_620 = local_63c;
          local_624 = local_640;
          if ((fVar26 != 1.0) &&
             (local_61c = DAT_1468b5d98, local_620 = DAT_1468b5d94, local_624 = DAT_1468b5d90,
             1e-08 <= fVar26)) {
            auVar22 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
            local_580 = auVar22._0_4_;
            local_580 = local_580 + local_580 * (0.5 - fVar26 * 0.5 * local_580 * local_580);
            local_580 = local_580 + local_580 * (0.5 - fVar26 * 0.5 * local_580 * local_580);
            local_61c = local_580 * local_638;
            local_620 = local_580 * local_63c;
            local_624 = local_580 * local_640;
          }
          fVar25 = fVar24 * local_624;
          fVar26 = fVar24 * local_61c + local_628;
          fVar23 = fVar24 * local_620;
        }
        fVar24 = *(float *)((longlong)param_1 + 0x1ec);
        local_640 = fVar25 * fVar24 + local_640;
        local_63c = fVar23 * fVar24 + local_63c;
        local_638 = fVar26 * fVar24 + local_638;
        if ((0.0 < (float)local_5e0) &&
           (fVar26 = local_640 * local_640 + local_63c * local_63c + local_638 * local_638,
           (float)local_5e0 < SQRT(fVar26))) {
          local_618 = local_640;
          local_614 = local_63c;
          local_610 = local_638;
          if ((fVar26 != 1.0) &&
             (local_618 = DAT_1468b5d90, local_614 = DAT_1468b5d94, local_610 = DAT_1468b5d98,
             1e-08 <= fVar26)) {
            auVar22 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
            fVar23 = auVar22._0_4_;
            fVar23 = fVar23 + fVar23 * (0.5 - fVar26 * 0.5 * fVar23 * fVar23);
            fVar23 = fVar23 + fVar23 * (0.5 - fVar26 * 0.5 * fVar23 * fVar23);
            local_608 = CONCAT44(local_608._4_4_,fVar23);
            local_618 = local_640 * fVar23;
            local_614 = fVar23 * local_63c;
            local_610 = local_638 * fVar23;
          }
          local_640 = (float)local_5e0 * local_618;
          local_63c = (float)local_5e0 * local_614;
          local_638 = (float)local_5e0 * local_610;
        }
        lVar15 = param_1[0x24];
        bVar3 = *(byte *)(param_1 + 0x39);
        local_668 = local_668 + fVar24 * local_638;
        local_670 = CONCAT44(local_670._4_4_ + fVar24 * local_63c,
                             (float)local_670 + fVar24 * local_640);
        if (*(char *)((longlong)param_1 + 0x1c9) == '\0') {
          if (lVar15 == 0) {
            lVar15 = FUN_1423407b0(param_1);
          }
          local_698 = local_548;
          local_6a0 = local_178;
          local_6a8 = (longlong *)CONCAT44(local_6a8._4_4_,(uint)bVar3);
          cVar9 = UWorld::LineTraceSingleByChannel(lVar15,local_4f8,&local_5d0);
        }
        else {
          if (lVar15 == 0) {
            lVar15 = FUN_1423407b0(param_1);
          }
          local_688 = local_548;
          local_698 = param_1 + 0x3b;
          local_690 = local_178;
          local_6a0 = (undefined1 *)CONCAT44(local_6a0._4_4_,(uint)bVar3);
          local_6a8 = (longlong *)&DAT_1464aa810;
          cVar9 = UWorld::SweepSingleByChannel(lVar15,local_4f8,&local_5d0);
        }
        if (cVar9 != '\0') {
          local_668 = local_4dc;
          local_670 = CONCAT44(local_4e0,local_4e4);
        }
        local_630 = local_630 + *(float *)((longlong)param_1 + 0x1ec);
        fVar26 = local_628;
      } while (local_630 < local_62c);
    }
    if (param_1[0x31] != 0) {
      if (bVar7) {
        FUN_142399750(param_1[0x31],&local_670,&DAT_1468b5da0);
        (**(code **)(*(longlong *)param_1[0x31] + 0x350))
                  ((longlong *)param_1[0x31],*(undefined4 *)((longlong)param_1 + 0x1ec),2);
      }
      else {
        iVar11 = (int)param_1[0x33];
        *(int *)(param_1 + 0x33) = iVar11 + 1;
        if (*(int *)((longlong)param_1 + 0x19c) < iVar11 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x32,iVar11);
        }
        lVar15 = param_1[0x32];
        *(undefined8 *)(lVar15 + (longlong)iVar11 * 0xc) = local_670;
        *(float *)(lVar15 + 8 + (longlong)iVar11 * 0xc) = local_668;
      }
    }
    if (local_110 != 0) {
      FMemory::Free();
    }
    if (local_130 != 0) {
      FMemory::Free();
    }
  }
  else {
    puVar20 = (undefined8 *)FVector::Rotation(local_5c0,local_504);
    local_6a0 = (undefined1 *)CONCAT71(local_6a0._1_7_,1);
    local_6a8 = (longlong *)0x0;
    local_578 = *puVar20;
    local_570 = *(undefined4 *)(puVar20 + 1);
    local_568 = local_660;
    local_560 = local_658;
    FUN_14223ca30(param_1[0x30],&local_568,&local_578,0);
    FUN_142235020(param_1[0x30]);
    (**(code **)(*plVar13 + 0x430))(plVar13);
    local_5c8 = fVar23 * *(float *)((longlong)param_1 + 0x1c4);
    local_558 = CONCAT44(fVar23 * *(float *)(param_1 + 0x38),
                         fVar23 * *(float *)((longlong)param_1 + 0x1bc));
    local_550 = local_5c8;
    (**(code **)(*plVar13 + 0x518))(plVar13,&local_558);
    lVar15 = param_1[0x30];
    fVar26 = *(float *)((longlong)param_1 + 0x1ec);
    plVar17 = (longlong *)FUN_14307c290(lVar15);
    if (plVar17 != (longlong *)0x0) {
      FUN_14223c460(lVar15);
      _guard_xfg_dispatch_icall_nop((void *)(lVar15 + 0x688),0,0x90);
      *(undefined4 *)(lVar15 + 0x694) = 0x3f800000;
      if (*(longlong *)(lVar15 + 0x680) != 0) {
        FUN_142608f20();
        (**(code **)(**(longlong **)(lVar15 + 0x680) + 0x280))(*(longlong **)(lVar15 + 0x680),1);
        (**(code **)(**(longlong **)(lVar15 + 0x680) + 0x350))
                  (*(longlong **)(lVar15 + 0x680),fVar26,2);
      }
      if (0.0 < fVar24) {
        do {
          if (((*(byte *)(lVar15 + 0x688) & 1) == 0) || ((*(byte *)(lVar15 + 0x688) & 2) != 0)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) break;
          if (*(longlong *)(lVar15 + 0x680) != 0) {
            pbVar2 = (byte *)(*(longlong *)(lVar15 + 0x680) + 0x71a);
            *pbVar2 = *pbVar2 | 0x80;
            (**(code **)(**(longlong **)(lVar15 + 0x680) + 0x350))
                      (*(longlong **)(lVar15 + 0x680),fVar26,2);
          }
          (**(code **)(*plVar17 + 0x350))(plVar17,fVar26,2);
          fVar25 = fVar25 + fVar26;
        } while (fVar25 < fVar24);
      }
      FUN_140729f20(local_4f8,lVar15 + 0x688);
      if (*(longlong *)(lVar15 + 0x680) != 0) {
        pbVar2 = (byte *)(*(longlong *)(lVar15 + 0x680) + 0x71a);
        *pbVar2 = *pbVar2 | 0x80;
        (**(code **)(**(longlong **)(lVar15 + 0x680) + 0x350))
                  (*(longlong **)(lVar15 + 0x680),fVar26,2);
      }
      FUN_14223c460(lVar15,0);
    }
    (**(code **)(*plVar13 + 0x288))(plVar13);
  }
  if (bVar7) {
    uVar16 = FUN_140729f20(local_450,local_4f8);
    FUN_14305cdc0(param_1,uVar16);
  }
  else {
    uStack_5d8 = 0;
    local_5e0 = FUN_14305cdc0;
    uVar16 = FUN_140729f20(local_3c0,local_4f8);
    uVar16 = FUN_140729f20(local_330,uVar16);
    plVar13 = (longlong *)FMemory::Realloc(0,0xc0,0);
    local_590[0] = plVar13;
    if (plVar13 != (longlong *)0x0) {
      uVar16 = FUN_140729f20(local_2a0,uVar16);
      uVar16 = FUN_140729f20(local_210,uVar16);
      *plVar13 = (longlong)&PTR_FUN_145a5f3a0;
      FWeakObjectPtr::operator=(plVar13 + 1,param_1);
      *(float *)(plVar13 + 2) = (float)local_5e0;
      *(undefined4 *)((longlong)plVar13 + 0x14) = local_5e0._4_4_;
      *(undefined4 *)(plVar13 + 3) = uStack_5d8;
      *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_5d4;
      FUN_140729f20(plVar13 + 4,uVar16);
      lVar15 = FDelegateHandle::GenerateNewID();
      plVar13[0x16] = lVar15;
      *plVar13 = (longlong)&PTR_FUN_145a5f3e8;
    }
    plVar17 = (longlong *)FUN_141d29000(local_468,0,0xff);
    lVar15 = *plVar17;
    pplVar21 = (longlong **)(lVar15 + 0x10);
    *pplVar21 = (longlong *)0x0;
    *(undefined4 *)(lVar15 + 0x18) = 0;
    if ((local_590 != pplVar21) && (plVar13 != (longlong *)0x0)) {
      (**(code **)(*plVar13 + 0x30))(plVar13,pplVar21);
    }
    *(undefined4 *)(lVar15 + 0x20) = 2;
    lVar15 = *plVar17;
    lVar8 = plVar17[2];
    lVar19 = plVar17[1];
    lVar5 = *(longlong *)(lVar15 + 0x30);
    piVar1 = (int *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      plVar13 = local_590[0];
    }
    local_5e0 = (code *)lVar5;
    FUN_1409691d0(lVar15,lVar19,(int)lVar8,1);
    if (lVar5 != 0) {
      LOCK();
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar13 = local_590[0];
      if (iVar11 == 1) {
        FGraphEvent::Recycle(local_5e0);
        plVar13 = local_590[0];
      }
    }
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x28))(plVar13,0);
      lVar15 = FMemory::Realloc(plVar13,0,0);
      if (lVar15 != 0) {
        FMemory::Free(lVar15);
      }
    }
  }
  return;
}



// FUNCTION 143060c30 FUN_143060c30 body=67 status=ok
// SIG undefined FUN_143060c30(void)

void FUN_143060c30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FUN_143060d10();
    FUN_142600fa0(*(undefined8 *)(param_1 + 0x308));
    FUN_142608f20(*(undefined8 *)(param_1 + 0x308));
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  return;
}



// FUNCTION 143060c80 FUN_143060c80 body=144 status=ok
// SIG undefined FUN_143060c80(void)

void FUN_143060c80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x30);
  plVar3 = plVar1;
  if (plVar1 != plVar1 + iVar5) {
    while (*plVar3 != param_2) {
      plVar3 = plVar3 + 1;
      if (plVar3 == plVar1 + iVar5) {
        return;
      }
    }
    iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
    if (iVar2 != -1) {
      iVar4 = (iVar5 - iVar2) + -1;
      if (0 < iVar4) {
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop(plVar1 + iVar2,plVar1 + (iVar5 - iVar4),(longlong)iVar4 << 3);
        iVar5 = *(int *)(param_1 + 0x30);
      }
      *(int *)(param_1 + 0x30) = iVar5 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 143060d10 FUN_143060d10 body=260 status=ok
// SIG undefined FUN_143060d10(void)

void FUN_143060d10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 local_res8;
  
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ULightProjectile::OnParticleSystemFinished",L"::");
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(&local_res8,pwVar3 + 2,1);
  TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0x8a8,param_1,local_res8);
  plVar1 = *(longlong **)(param_1 + 0x310);
  iVar8 = *(int *)(param_1 + 0x318);
  plVar6 = plVar1;
  if (plVar1 != plVar1 + iVar8) {
    while (*plVar6 != param_2) {
      plVar6 = plVar6 + 1;
      if (plVar6 == plVar1 + iVar8) {
        return;
      }
    }
    iVar4 = (int)((longlong)plVar6 - (longlong)plVar1 >> 3);
    if (iVar4 != -1) {
      iVar7 = (iVar8 - iVar4) + -1;
      if (0 < iVar7) {
        iVar7 = 1;
      }
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop(plVar1 + iVar4,plVar1 + (iVar8 - iVar7),(longlong)iVar7 << 3);
        iVar8 = *(int *)(param_1 + 0x318);
      }
      *(int *)(param_1 + 0x318) = iVar8 + -1;
    }
  }
  return;
}



// FUNCTION 143060e20 FUN_143060e20 body=1388 status=ok
// SIG undefined FUN_143060e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143060e20(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  byte bVar12;
  longlong *plVar13;
  int iVar14;
  float fVar15;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined4 local_240 [2];
  undefined8 local_238;
  longlong local_230;
  undefined1 local_228 [8];
  longlong local_220;
  longlong *local_218;
  longlong *local_210;
  undefined4 *local_208;
  undefined **local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  longlong local_1c0;
  uint local_198;
  longlong local_110;
  longlong *local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  bVar12 = (byte)*(undefined2 *)((longlong)param_1 + 0x1de);
  if (((((bVar12 >> 1 & 1) != 0) && ((bVar12 >> 3 & 1) == 0)) &&
      (*(longlong *)(param_1[0x16] + 0x198) != 0)) &&
     ((int)param_1[0x7d] < *(int *)(param_1[0x16] + 0x188))) {
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    fVar15 = *(float *)(param_1[0x16] + 0x1a8) + *(float *)(param_1 + 0x43);
    if (fVar15 <= *(float *)((longlong)param_1 + 0x21c)) {
      fVar15 = *(float *)((longlong)param_1 + 0x21c);
    }
    if ((fVar15 <= *(float *)(lVar7 + 0x790)) && (lVar3 = param_1[0x23], lVar3 != 0)) {
      *(float *)((longlong)param_1 + 0x21c) =
           *(float *)(lVar7 + 0x790) + *(float *)(param_1[0x16] + 0x1ac);
      uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar7 = UBehaviorTreeManager::GetCurrent(uVar8);
      if (lVar7 != 0) {
        uVar8 = FUN_1430b1980();
        lVar9 = FUN_14247f5b0(DAT_146b17150 + 0xcf8,uVar8);
        if (lVar9 != 0) {
          puVar10 = (undefined8 *)FUN_14304c5d0(param_1 + 0x23,local_c8);
          iVar14 = 0;
          local_238 = 0;
          *(undefined8 *)(lVar9 + 0x30) = *puVar10;
          *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(puVar10 + 1);
          *(undefined8 *)(lVar9 + 0x3c) = *(undefined8 *)((longlong)param_1 + 0x28c);
          *(undefined4 *)(lVar9 + 0x44) = *(undefined4 *)((longlong)param_1 + 0x294);
          *(longlong *)(lVar9 + 0x48) = param_1[0x28];
          lVar4 = param_1[0x16];
          local_b8 = *(undefined8 *)(lVar4 + 0x198);
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          local_80 = 0;
          local_78 = 0;
          local_70 = 0xffffffff;
          local_6c = 0;
          local_60 = 0;
          local_58 = 0;
          local_50 = 0;
          local_48 = 0;
          local_b0 = lVar9;
          if (*(longlong *)(lVar4 + 0x1a0) != 0) {
            local_240[0] = *(undefined4 *)(lVar4 + 0x1b0);
            local_210 = &local_230;
            local_208 = local_240;
            local_230 = *(longlong *)(lVar4 + 0x1a0);
            FUN_1417e05c0(&uStack_a0,&local_238,&local_210,0);
          }
          FUN_142bef990(lVar7,&local_220,&local_b8,3);
          if (0 < *(int *)(local_220 + 8)) {
            do {
              lVar7 = FUN_142be4ff0(local_220,iVar14);
              if (((lVar7 != 0) &&
                  ((param_1[0x7b] == 0 ||
                   (cVar6 = FUN_14305d900(param_1[0x7b],lVar7), cVar6 == '\0')))) &&
                 ((param_1[0x7b] != 0 || (cVar6 = FUN_14305d900(param_1,lVar7), cVar6 == '\0')))) {
                FUN_140aec950(&local_1f8);
                (**(code **)(*param_1 + 0x298))(param_1,&local_1f8);
                lVar4 = param_1[0x16];
                if (*(longlong *)(lVar4 + 400) != 0) {
                  lVar11 = UMapBuildDataRegistry::GetPrivateStaticClass();
                  lVar4 = *(longlong *)(lVar4 + 400);
                  for (lVar5 = lVar4; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
                    if (lVar5 == lVar11) {
                      if (lVar4 != 0) {
                        local_1f0 = *(longlong **)(param_1[0x16] + 400);
                      }
                      break;
                    }
                  }
                }
                plVar1 = local_1f0;
                local_198 = local_198 | 2;
                local_1e8 = lVar3;
                local_1c0 = lVar7;
                local_e8 = param_1;
                uVar8 = FUN_1423123a0(param_1);
                if (((param_1 == (longlong *)0x0) || (plVar1 == (longlong *)0x0)) ||
                   ((plVar13 = plVar1, plVar1[0x1f] == 0 &&
                    ((**(code **)(*plVar1 + 0x368))(plVar1), plVar13 = local_1f0, plVar1[0x1f] == 0)
                    ))) {
LAB_1430611ff:
                  lVar7 = 0;
                }
                else {
                  if (plVar13 == (longlong *)0x0) {
                    lVar7 = 0;
                  }
                  else {
                    lVar7 = plVar13[0x1f];
                    if (lVar7 == 0) {
                      (**(code **)(*plVar13 + 0x368))(plVar13);
                      lVar7 = plVar13[0x1f];
                    }
                  }
                  lVar7 = FUN_143040340(uVar8,lVar7 + 0x28);
                  if (lVar7 == 0) goto LAB_1430611ff;
                  (*(code *)local_1f8[1])(&local_1f8,lVar7);
                }
                FWeakObjectPtr::operator=(local_228,lVar7);
                lVar7 = FWeakObjectPtr::Get(local_228);
                if (lVar7 != 0) {
                  local_1f8 = &PTR_FUN_14422f7d8;
                  if ((int)param_1[0x7d] < *(int *)(param_1[0x16] + 0x188)) {
                    FWeakObjectPtr::operator=(local_e0,0);
                    local_248 = 0;
                    local_d8 = 0;
                    if (local_110 != 0) {
                      FMemory::Free();
                    }
                    goto LAB_14306126f;
                  }
                }
                local_1f8 = &PTR_FUN_14422f7d8;
                FWeakObjectPtr::operator=(local_e0,0);
                local_248 = 0;
                local_d8 = 0;
                if (local_110 != 0) {
                  FMemory::Free();
                }
                break;
              }
LAB_14306126f:
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)(local_220 + 8));
          }
          FUN_14248cf90(DAT_146b17150 + 0xcf8,lVar9);
          if (local_218 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_218 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_218)(local_218);
              LOCK();
              piVar2 = (int *)((longlong)local_218 + 0xc);
              iVar14 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*local_218 + 8))(local_218,1);
              }
            }
          }
          if (local_50 != 0) {
            FMemory::Free();
          }
          local_58 = 0;
          if (local_60 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (&uStack_a0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1430613b0 FUN_1430613b0 body=707 status=ok
// SIG undefined FUN_1430613b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430613b0(longlong param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 uVar8;
  float *pfVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_98;
  float local_94;
  float local_90;
  undefined8 local_88;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [8];
  float local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [64];
  
  FUN_14237b4b0();
  if ((*(char *)(param_1 + 0x280) != '\0') && (lVar10 = *(longlong *)(param_1 + 0x178), lVar10 != 0)
     ) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
      lVar10 = *(longlong *)(param_1 + 0x178);
    }
    fVar11 = *(float *)(lVar10 + 0x210);
    local_88 = *(undefined8 *)(lVar10 + 0x210);
    fStack_80 = *(float *)(lVar10 + 0x218);
    fStack_7c = *(float *)(lVar10 + 0x21c);
    fVar19 = *(float *)(lVar5 + 0x7b0);
    auVar13._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != *(float *)(lVar10 + 0x214));
    auVar13._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != fVar11);
    auVar13._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_80);
    auVar13._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_7c);
    iVar4 = movmskps((int)lVar5,auVar13);
    if (iVar4 != 0) {
      *(float *)(lVar10 + 0x250) = fVar11;
      *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
      *(float *)(lVar10 + 600) = fStack_80;
      *(float *)(lVar10 + 0x25c) = fStack_7c;
      puVar6 = (undefined8 *)FQuat::Rotator(&local_88,local_78);
      *(undefined8 *)(lVar10 + 0x260) = *puVar6;
      *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar6 + 1);
    }
    fStack_80 = *(float *)(lVar10 + 0x268);
    uVar1 = *(undefined8 *)(lVar10 + 0x260);
    fVar20 = (float)uVar1;
    pfVar7 = (float *)FRotator::Quaternion(param_1 + 0x228,local_58);
    uVar8 = FVector::Rotation(param_1 + 0x18c,local_78);
    pfVar9 = (float *)FRotator::Quaternion(uVar8,local_48);
    fVar11 = *pfVar7;
    fVar16 = pfVar7[1];
    fVar15 = pfVar7[2];
    fVar14 = pfVar7[3];
    fVar17 = *pfVar9;
    fVar18 = pfVar9[1];
    fVar2 = pfVar9[2];
    fVar3 = pfVar9[3];
    local_68 = fVar14 * fVar17 * _DAT_146b473c0 + fVar3 * fVar11 + fVar15 * fVar18 * _DAT_146b473b0
               + fVar16 * fVar2 * _DAT_146b473a0;
    fStack_64 = fVar15 * fVar17 * fRam0000000146b473c4 + fVar3 * fVar16 +
                fVar14 * fVar18 * fRam0000000146b473b4 + fVar11 * fVar2 * fRam0000000146b473a4;
    fStack_60 = fVar16 * fVar17 * fRam0000000146b473c8 + fVar3 * fVar15 +
                fVar11 * fVar18 * fRam0000000146b473b8 + fVar14 * fVar2 * fRam0000000146b473a8;
    fStack_5c = fVar11 * fVar17 * fRam0000000146b473cc + fVar3 * fVar14 +
                fVar16 * fVar18 * fRam0000000146b473bc + fVar15 * fVar2 * fRam0000000146b473ac;
    FQuat::Rotator(&local_68,&local_98);
    local_98 = local_98 - fVar20;
    local_88._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    fVar11 = (float)DAT_146b47350;
    fVar16 = DAT_146b47350._4_4_;
    fVar15 = DAT_146b47350._8_4_;
    auVar12._4_4_ = local_94 - local_88._4_4_;
    auVar12._0_4_ = local_98;
    auVar12._8_4_ = local_90 - fStack_80;
    auVar12._12_4_ = 0;
    auVar13 = divps(auVar12,_DAT_146b47350);
    local_98 = local_98 - (float)(int)auVar13._0_4_ * fVar11;
    fVar17 = (local_94 - local_88._4_4_) - (float)(int)auVar13._4_4_ * fVar16;
    fVar18 = (local_90 - fStack_80) - (float)(int)auVar13._8_4_ * fVar15;
    fVar14 = (float)(((uint)(local_98 + fVar11) ^ (uint)local_98) & -(uint)(0.0 <= local_98) ^
                    (uint)(local_98 + fVar11));
    fVar17 = (float)(((uint)(fVar17 + fVar16) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                    (uint)(fVar17 + fVar16));
    fVar18 = (float)(((uint)(fVar18 + fVar15) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                    (uint)(fVar18 + fVar15));
    fVar14 = (float)(((uint)(fVar14 - fVar11) ^ (uint)fVar14) & -(uint)(_DAT_146b47340 < fVar14) ^
                    (uint)fVar14);
    fVar17 = (float)(((uint)(fVar17 - fVar16) ^ (uint)fVar17) &
                     -(uint)(fRam0000000146b47344 < fVar17) ^ (uint)fVar17);
    fVar18 = (float)(((uint)(fVar18 - fVar15) ^ (uint)fVar18) &
                     -(uint)(fRam0000000146b47348 < fVar18) ^ (uint)fVar18);
    fVar19 = fVar19 * *(float *)(param_1 + 0x284);
    fVar11 = -fVar19;
    fVar16 = fVar11;
    if ((fVar11 <= fVar14) && (fVar16 = fVar14, fVar19 <= fVar14)) {
      fVar16 = fVar19;
    }
    fVar15 = fVar11;
    if ((fVar11 <= fVar17) && (fVar15 = fVar17, fVar19 <= fVar17)) {
      fVar15 = fVar19;
    }
    if ((fVar11 <= fVar18) && (fVar11 = fVar18, fVar19 <= fVar18)) {
      fVar11 = fVar19;
    }
    fStack_80 = fStack_80 + fVar11;
    local_88 = CONCAT44(local_88._4_4_ + fVar15,fVar20 + fVar16);
    local_70 = fStack_80;
    FUN_142399b90(*(undefined8 *)(param_1 + 0x178),&local_88,0,0,0);
  }
  return;
}



// FUNCTION 143061680 FUN_143061680 body=1638 status=ok
// SIG undefined FUN_143061680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143061680(longlong *param_1)

{
  float *pfVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (param_1[0x17] == 0) {
    return;
  }
  pfVar1 = (float *)(param_1 + 0x5d);
  uVar8 = (undefined4)param_1[0x5e];
  uVar9 = (undefined4)param_1[0x54];
  local_a8 = param_1[0x53];
  uVar13 = (undefined4)local_a8;
  uVar14 = (undefined4)((ulonglong)local_a8 >> 0x20);
  uVar15 = (undefined4)*(undefined8 *)pfVar1;
  uVar16 = (undefined4)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
  local_a0 = uVar9;
  if ((((*(byte *)(param_1 + 0x3d) & 4) != 0) && (param_1[0x28] != 0)) &&
     (plVar7 = *(longlong **)(param_1[0x28] + 0x490), plVar7 != (longlong *)0x0)) {
    lVar5 = FUN_1429e18b0();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((*(byte *)(param_1[0x17] + 0x398) & 1) == 0) {
        if ((*(byte *)(param_1 + 0x3d) & 8) == 0) {
          plVar7 = (longlong *)(**(code **)(*plVar7 + 0xec8))(plVar7,&local_98,param_1 + 0x53);
          local_a8 = *plVar7;
          uVar13 = (undefined4)local_a8;
          uVar14 = (undefined4)((ulonglong)local_a8 >> 0x20);
          uVar9 = (undefined4)plVar7[1];
          local_a0 = uVar9;
        }
      }
      else {
        puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0xec8))(plVar7,&local_98,pfVar1);
        uVar15 = (undefined4)*puVar6;
        uVar16 = (undefined4)((ulonglong)*puVar6 >> 0x20);
        uVar8 = *(undefined4 *)(puVar6 + 1);
      }
    }
  }
  FRotator::Quaternion(param_1 + 0x56,&local_98);
  local_88 = local_98;
  uStack_80 = uStack_90;
  local_78._8_4_ = local_a0;
  local_78._0_8_ = local_a8;
  local_78._12_4_ = 0;
  local_68._4_4_ = DAT_1464aa788._4_4_;
  local_68._0_4_ = (undefined4)DAT_1464aa788;
  local_68._8_4_ = DAT_1464aa790;
  local_68._12_4_ = 0;
  local_b8 = 0;
  FUN_142399d60(param_1[0x17],&local_88,0,0);
  local_a8 = CONCAT44(uVar14,uVar13);
  local_a0 = uVar9;
  (**(code **)(*(longlong *)param_1[0x17] + 0x8f0))
            ((longlong *)param_1[0x17],*(undefined8 *)(param_1[0x16] + 0x70),&local_a8,0);
  local_a0 = *(undefined4 *)((longlong)param_1 + 0x2ac);
  local_a8 = *(longlong *)((longlong)param_1 + 0x2a4);
  (**(code **)(*(longlong *)param_1[0x17] + 0x8f8))
            ((longlong *)param_1[0x17],*(undefined8 *)(param_1[0x16] + 0x70),&local_a8,0);
  local_a8 = CONCAT44(uVar16,uVar15);
  local_a0 = uVar8;
  (**(code **)(*(longlong *)param_1[0x17] + 0x908))
            ((longlong *)param_1[0x17],*(undefined8 *)(param_1[0x16] + 0x70),&local_a8,0);
  local_a0 = *(undefined4 *)((longlong)param_1 + 0x2fc);
  local_a8 = *(longlong *)((longlong)param_1 + 0x2f4);
  (**(code **)(*(longlong *)param_1[0x17] + 0x910))
            ((longlong *)param_1[0x17],*(undefined8 *)(param_1[0x16] + 0x70),&local_a8,0);
  cVar3 = (**(code **)(*param_1 + 0x318))(param_1);
  plVar7 = (longlong *)param_1[0x17];
  lVar5 = param_1[0x16];
  if (cVar3 == '\0') {
    (**(code **)(*plVar7 + 0x900))(plVar7,*(undefined8 *)(lVar5 + 0x70),0,0);
    lVar5 = param_1[0x16];
    fVar10 = 0.0;
  }
  else {
    fVar12 = *(float *)(param_1 + 0x5e) - *(float *)((longlong)param_1 + 0x27c);
    fVar11 = *(float *)((longlong)param_1 + 0x2ec) - *(float *)(param_1 + 0x4f);
    fVar10 = *pfVar1 - *(float *)((longlong)param_1 + 0x274);
    fVar10 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12);
    (**(code **)(*plVar7 + 0x900))
              (plVar7,*(undefined8 *)(lVar5 + 0x70),fVar10 * *(float *)(lVar5 + 0x68));
    lVar5 = param_1[0x16];
    fVar10 = fVar10 * *(float *)(lVar5 + 0x6c);
  }
  (**(code **)(*(longlong *)param_1[0x17] + 0x918))
            ((longlong *)param_1[0x17],*(undefined8 *)(lVar5 + 0x70),fVar10,0);
  if (param_1[0x18] != 0) {
    FRotator::Quaternion(param_1 + 99,&local_98);
    local_88 = local_98;
    uStack_80 = uStack_90;
    local_78._12_4_ = 0;
    local_78._0_12_ = *(undefined1 (*) [12])(param_1 + 0x60);
    local_68._4_4_ = DAT_1464aa788._4_4_;
    local_68._0_4_ = (undefined4)DAT_1464aa788;
    local_68._8_4_ = DAT_1464aa790;
    local_68._12_4_ = 0;
    local_b8 = 0;
    FUN_142399d60(param_1[0x18],&local_88,0,0);
    local_a0 = (undefined4)param_1[0x61];
    local_a8 = param_1[0x60];
    (**(code **)(*(longlong *)param_1[0x18] + 0x8f0))
              ((longlong *)param_1[0x18],*(undefined8 *)(param_1[0x16] + 0x70),&local_a8,0);
    local_a0 = *(undefined4 *)((longlong)param_1 + 0x314);
    local_a8 = *(longlong *)((longlong)param_1 + 0x30c);
    (**(code **)(*(longlong *)param_1[0x18] + 0x8f8))
              ((longlong *)param_1[0x18],*(undefined8 *)(param_1[0x16] + 0x70),&local_a8,0);
    local_a0 = (undefined4)param_1[0x5e];
    local_a8 = *(longlong *)pfVar1;
    (**(code **)(*(longlong *)param_1[0x18] + 0x908))
              ((longlong *)param_1[0x18],*(undefined8 *)(param_1[0x16] + 0x70),&local_a8,0);
    local_a0 = *(undefined4 *)((longlong)param_1 + 0x2fc);
    local_a8 = *(longlong *)((longlong)param_1 + 0x2f4);
    (**(code **)(*(longlong *)param_1[0x18] + 0x910))
              ((longlong *)param_1[0x18],*(undefined8 *)(param_1[0x16] + 0x70),&local_a8,0);
    plVar7 = (longlong *)param_1[0x18];
    lVar5 = param_1[0x16];
    if (cVar3 == '\0') {
      (**(code **)(*plVar7 + 0x900))(plVar7,*(undefined8 *)(lVar5 + 0x70),0,0);
      lVar5 = param_1[0x16];
      fVar10 = 0.0;
    }
    else {
      fVar10 = *(float *)((longlong)param_1 + 0x2ec) - *(float *)((longlong)param_1 + 0x304);
      fVar10 = SQRT(fVar10 * fVar10 +
                    (*pfVar1 - *(float *)(param_1 + 0x60)) * (*pfVar1 - *(float *)(param_1 + 0x60))
                    + (*(float *)(param_1 + 0x5e) - *(float *)(param_1 + 0x61)) *
                      (*(float *)(param_1 + 0x5e) - *(float *)(param_1 + 0x61)));
      (**(code **)(*plVar7 + 0x900))
                (plVar7,*(undefined8 *)(lVar5 + 0x70),fVar10 * *(float *)(lVar5 + 0x68));
      lVar5 = param_1[0x16];
      fVar10 = fVar10 * *(float *)(lVar5 + 0x6c);
    }
    (**(code **)(*(longlong *)param_1[0x18] + 0x918))
              ((longlong *)param_1[0x18],*(undefined8 *)(lVar5 + 0x70),fVar10,0);
  }
  if ((*(byte *)((longlong)param_1 + 0x1de) & 1) == 0) {
    return;
  }
  if (param_1[0x17] == 0) {
    return;
  }
  plVar7 = (longlong *)param_1[0x1e];
  if (plVar7 == (longlong *)0x0) {
LAB_143061c5b:
    plVar7 = (longlong *)param_1[0x1e];
    if (plVar7 != (longlong *)0x0) {
      lVar5 = FUN_1429d7ab0();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_143061c9d;
    }
  }
  else {
    lVar5 = FUN_1430b3b80();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_143061c5b;
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x950))(plVar7);
LAB_143061c9d:
    if ((plVar7 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar7 + 0x818))(plVar7), cVar3 != '\0')) {
      uVar4 = 4;
      goto LAB_143061cbb;
    }
  }
  uVar4 = 0;
LAB_143061cbb:
  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) & 0xfffffffb;
  *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | uVar4;
  return;
}



// FUNCTION 143061cf0 FUN_143061cf0 body=1898 status=ok
// SIG undefined FUN_143061cf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143061cf0(longlong param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
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
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 local_res8;
  undefined4 uStackX_c;
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
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined8 local_e8;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [176];
  
  if ((*(byte *)(param_1 + 0xe4) & 0x10) == 0) {
    uVar13 = FRotator::Quaternion(param_1 + 0x2c0,&local_108);
    fVar41 = fRam0000000146b473e8;
    fVar40 = fRam0000000146b473e4;
    fVar38 = _DAT_146b473e0;
    fVar36 = fRam0000000146b47388;
    fVar29 = fRam0000000146b47384;
    fVar25 = _DAT_146b47380;
    fVar11 = DAT_1464aa790;
    fVar10 = DAT_1464aa788._4_4_;
    fVar9 = (float)DAT_1464aa788;
    fVar54 = *(float *)(param_1 + 700);
    fVar55 = *(float *)(param_1 + 0x2b8);
    fVar56 = *(float *)(param_1 + 0x2b4);
    lVar2 = *(longlong *)(param_1 + 0xa8);
    auVar1 = *(undefined1 (*) [16])(lVar2 + 0x60);
    fVar4 = auVar1._0_4_;
    fVar5 = auVar1._4_4_;
    fVar6 = auVar1._8_4_;
    auVar18._4_4_ = DAT_1464aa788._4_4_;
    auVar18._0_4_ = (float)DAT_1464aa788;
    auVar18._8_4_ = DAT_1464aa790;
    auVar18._12_4_ = 0;
    auVar18 = minps(auVar1,auVar18);
    auVar19._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146b473e4);
    auVar19._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146b473e0);
    auVar19._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146b473e8);
    auVar19._12_4_ = -(uint)(auVar18._12_4_ < fRam0000000146b473ec);
    iVar14 = movmskps(uVar13,auVar19);
    if (iVar14 == 0) {
      fVar25 = *(float *)(lVar2 + 0x40);
      fVar29 = *(float *)(lVar2 + 0x44);
      fVar36 = *(float *)(lVar2 + 0x48);
      fVar38 = *(float *)(lVar2 + 0x4c);
      fVar40 = *(float *)(lVar2 + 0x50) * (float)DAT_1464aa788;
      fVar41 = *(float *)(lVar2 + 0x54) * DAT_1464aa788._4_4_;
      fVar26 = *(float *)(lVar2 + 0x58) * DAT_1464aa790;
      fVar27 = *(float *)(lVar2 + 0x5c) * 0.0;
      fVar28 = local_108 * fVar38 * _DAT_146b473c0 + fStack_fc * fVar25 +
               fStack_104 * fVar36 * _DAT_146b473b0 + fStack_100 * fVar29 * _DAT_146b473a0;
      fVar30 = local_108 * fVar36 * fRam0000000146b473c4 + fStack_fc * fVar29 +
               fStack_104 * fVar38 * fRam0000000146b473b4 +
               fStack_100 * fVar25 * fRam0000000146b473a4;
      fVar20 = local_108 * fVar29 * fRam0000000146b473c8 + fStack_fc * fVar36 +
               fStack_104 * fVar25 * fRam0000000146b473b8 +
               fStack_100 * fVar38 * fRam0000000146b473a8;
      fVar22 = local_108 * fVar25 * fRam0000000146b473cc + fStack_fc * fVar38 +
               fStack_104 * fVar29 * fRam0000000146b473bc +
               fStack_100 * fVar36 * fRam0000000146b473ac;
      fVar25 = fVar26 * fStack_104 - fVar41 * fStack_100;
      fVar29 = fVar40 * fStack_100 - fVar26 * local_108;
      fVar36 = fVar41 * local_108 - fVar40 * fStack_104;
      fVar38 = fVar27 * fStack_fc - fVar27 * fStack_fc;
      fVar25 = fVar25 + fVar25;
      fVar29 = fVar29 + fVar29;
      fVar36 = fVar36 + fVar36;
      fVar38 = fVar38 + fVar38;
      fVar56 = (fVar36 * fStack_104 - fVar29 * fStack_100) + fVar25 * fStack_fc + fVar40 + fVar56;
      fVar55 = (fVar25 * fStack_100 - fVar36 * local_108) + fVar29 * fStack_fc + fVar41 + fVar55;
      fVar54 = (fVar29 * local_108 - fVar25 * fStack_104) + fVar36 * fStack_fc + fVar26 + fVar54;
      fVar25 = (fVar38 * fStack_fc - fVar38 * fStack_fc) + fVar38 * fStack_fc + fVar27 + 0.0;
    }
    else {
      fVar26 = fStack_104 + fStack_104;
      fVar28 = fStack_100 + fStack_100;
      fVar51 = fVar4 * (float)DAT_1464aa788;
      fVar52 = fVar5 * DAT_1464aa788._4_4_;
      fVar53 = fVar6 * DAT_1464aa790;
      fVar30 = (local_108 + local_108) * local_108;
      fVar27 = (local_108 + local_108) * fStack_fc;
      fVar48 = (fVar28 * fStack_fc + fVar26 * local_108) * (float)DAT_1464aa788;
      fVar49 = (fVar27 + fVar28 * fStack_104) * DAT_1464aa788._4_4_;
      fVar50 = (fVar26 * fStack_fc + fVar28 * local_108) * DAT_1464aa790;
      fVar34 = DAT_1464aa788._4_4_ * (fVar26 * local_108 - fVar28 * fStack_fc);
      fVar37 = DAT_1464aa790 * (fVar28 * fStack_104 - fVar27);
      fVar39 = (float)DAT_1464aa788 * (fVar28 * local_108 - fVar26 * fStack_fc);
      fVar20 = (float)((uint)((_DAT_146b47380 - (fVar28 * fStack_100 + fVar26 * fStack_104)) *
                             (float)DAT_1464aa788) & _DAT_146b47390);
      fVar22 = (float)((uint)((fRam0000000146b47384 - (fVar28 * fStack_100 + fVar30)) *
                             DAT_1464aa788._4_4_) & uRam0000000146b47394);
      fVar23 = (float)((uint)((fRam0000000146b47388 - (fVar26 * fStack_104 + fVar30)) *
                             DAT_1464aa790) & uRam0000000146b47398);
      fVar24 = (float)((uint)((fRam0000000146b4738c - (fVar30 + fVar30)) * 0.0) &
                      uRam0000000146b4739c);
      fVar26 = *(float *)(lVar2 + 0x40);
      fVar27 = *(float *)(lVar2 + 0x44);
      fVar28 = *(float *)(lVar2 + 0x48);
      fVar30 = *(float *)(lVar2 + 0x4c);
      fVar31 = fVar27 + fVar27;
      fVar33 = fVar28 + fVar28;
      fVar35 = fVar26 * (fVar26 + fVar26);
      fVar32 = (fVar26 + fVar26) * fVar30;
      fVar45 = (fVar33 * fVar30 + fVar31 * fVar26) * fVar4;
      fVar46 = (fVar32 + fVar33 * fVar27) * fVar5;
      fVar47 = (fVar31 * fVar30 + fVar33 * fVar26) * fVar6;
      fVar42 = fVar5 * (fVar31 * fVar26 - fVar33 * fVar30);
      fVar43 = fVar6 * (fVar33 * fVar27 - fVar32);
      fVar44 = fVar4 * (fVar33 * fVar26 - fVar31 * fVar30);
      fVar30 = (float)((uint)((_DAT_146b47380 - (fVar28 * fVar33 + fVar27 * fVar31)) * fVar4) &
                      _DAT_146b47390);
      fVar32 = (float)((uint)((fRam0000000146b47384 - (fVar28 * fVar33 + fVar35)) * fVar5) &
                      uRam0000000146b47394);
      fVar31 = (float)((uint)((fRam0000000146b47388 - (fVar27 * fVar31 + fVar35)) * fVar6) &
                      uRam0000000146b47398);
      fVar33 = (float)((uint)((fRam0000000146b4738c - (fVar35 + fVar35)) * auVar1._12_4_) &
                      uRam0000000146b4739c);
      fVar26 = *(float *)(lVar2 + 0x50);
      fVar27 = *(float *)(lVar2 + 0x54);
      fVar28 = *(float *)(lVar2 + 0x58);
      local_148 = fVar45 * fVar34 + fVar30 * fVar20 + fVar44 * fVar50 + fVar33 * fVar56;
      fStack_144 = fVar45 * fVar22 + fVar30 * fVar48 + fVar44 * fVar37 + fVar33 * fVar55;
      fStack_140 = fVar45 * fVar49 + fVar30 * fVar39 + fVar44 * fVar23 + fVar33 * fVar54;
      fStack_13c = fVar45 * fVar24 + fVar30 * fVar24 + fVar44 * fVar24 +
                   fVar33 * fRam0000000146b4738c;
      local_138 = fVar32 * fVar34 + fVar42 * fVar20 + fVar46 * fVar50 + fVar33 * fVar56;
      fStack_134 = fVar32 * fVar22 + fVar42 * fVar48 + fVar46 * fVar37 + fVar33 * fVar55;
      fStack_130 = fVar32 * fVar49 + fVar42 * fVar39 + fVar46 * fVar23 + fVar33 * fVar54;
      fStack_12c = fVar32 * fVar24 + fVar42 * fVar24 + fVar46 * fVar24 +
                   fVar33 * fRam0000000146b4738c;
      local_128 = fVar43 * fVar34 + fVar47 * fVar20 + fVar31 * fVar50 + fVar33 * fVar56;
      fStack_124 = fVar43 * fVar22 + fVar47 * fVar48 + fVar31 * fVar37 + fVar33 * fVar55;
      fStack_120 = fVar43 * fVar49 + fVar47 * fVar39 + fVar31 * fVar23 + fVar33 * fVar54;
      fStack_11c = fVar43 * fVar24 + fVar47 * fVar24 + fVar31 * fVar24 +
                   fVar33 * fRam0000000146b4738c;
      local_118 = fVar27 * fVar34 + fVar26 * fVar20 + fVar28 * fVar50 +
                  fRam0000000146b4738c * fVar56;
      fStack_114 = fVar27 * fVar22 + fVar26 * fVar48 + fVar28 * fVar37 +
                   fRam0000000146b4738c * fVar55;
      fStack_110 = fVar27 * fVar49 + fVar26 * fVar39 + fVar28 * fVar23 +
                   fRam0000000146b4738c * fVar54;
      fStack_10c = fVar27 * fVar24 + fVar26 * fVar24 + fVar28 * fVar24 +
                   fRam0000000146b4738c * fRam0000000146b4738c;
      FMatrix::RemoveScaling(&local_148);
      fVar54 = (float)(-(uint)(fVar38 <= fVar51) & (_DAT_146b473d0 ^ (uint)fVar25) ^ _DAT_146b473d0)
      ;
      fVar55 = (float)(-(uint)(fVar40 <= fVar52) & (uRam0000000146b473d4 ^ (uint)fVar29) ^
                      uRam0000000146b473d4);
      fVar56 = (float)(-(uint)(fVar41 <= fVar53) & (uRam0000000146b473d8 ^ (uint)fVar36) ^
                      uRam0000000146b473d8);
      local_148 = local_148 * fVar54;
      fStack_144 = fStack_144 * fVar54;
      fStack_140 = fStack_140 * fVar54;
      fStack_134 = fStack_134 * fVar55;
      fStack_130 = fStack_130 * fVar55;
      local_138 = local_138 * fVar55;
      fStack_124 = fStack_124 * fVar56;
      fStack_120 = fStack_120 * fVar56;
      local_128 = local_128 * fVar56;
      FQuat::FQuat(&local_e8,&local_148);
      local_res8 = 0x322bcc77;
      auVar21._0_4_ = (float)local_e8 * (float)local_e8 + fStack_e0 * fStack_e0;
      auVar21._4_4_ = local_e8._4_4_ * local_e8._4_4_ + fStack_dc * fStack_dc;
      auVar21._8_4_ = fStack_e0 * fStack_e0 + (float)local_e8 * (float)local_e8;
      auVar21._12_4_ = fStack_dc * fStack_dc + local_e8._4_4_ * local_e8._4_4_;
      fVar36 = auVar21._4_4_ + auVar21._0_4_;
      fVar38 = auVar21._8_4_ + auVar21._4_4_;
      fVar40 = auVar21._12_4_ + auVar21._8_4_;
      fVar41 = auVar21._0_4_ + auVar21._12_4_;
      auVar7._4_4_ = fVar38;
      auVar7._0_4_ = fVar36;
      auVar7._8_4_ = fVar40;
      auVar7._12_4_ = fVar41;
      auVar18 = rsqrtps(auVar21,auVar7);
      fVar54 = auVar18._0_4_;
      fVar55 = auVar18._4_4_;
      fVar56 = auVar18._8_4_;
      fVar29 = auVar18._12_4_;
      fVar54 = (_DAT_146b47370 - fVar54 * fVar54 * fVar36 * _DAT_146b47370) * fVar54 + fVar54;
      fVar55 = (fRam0000000146b47374 - fVar55 * fVar55 * fVar38 * fRam0000000146b47374) * fVar55 +
               fVar55;
      fVar56 = (fRam0000000146b47378 - fVar56 * fVar56 * fVar40 * fRam0000000146b47378) * fVar56 +
               fVar56;
      fVar29 = (fRam0000000146b4737c - fVar29 * fVar29 * fVar41 * fRam0000000146b4737c) * fVar29 +
               fVar29;
      fVar25 = 0.0;
      fVar28 = (float)(((uint)(((_DAT_146b47370 - fVar54 * fVar54 * fVar36 * _DAT_146b47370) *
                                fVar54 + fVar54) * (float)local_e8) ^ _DAT_146b47360) &
                       -(uint)(1e-08 <= fVar36) ^ _DAT_146b47360);
      fVar30 = (float)(((uint)(((fRam0000000146b47374 -
                                fVar55 * fVar55 * fVar38 * fRam0000000146b47374) * fVar55 + fVar55)
                              * local_e8._4_4_) ^ uRam0000000146b47364) & -(uint)(1e-08 <= fVar38) ^
                      uRam0000000146b47364);
      fVar20 = (float)(((uint)(((fRam0000000146b47378 -
                                fVar56 * fVar56 * fVar40 * fRam0000000146b47378) * fVar56 + fVar56)
                              * fStack_e0) ^ uRam0000000146b47368) & -(uint)(1e-08 <= fVar40) ^
                      uRam0000000146b47368);
      fVar22 = (float)(((uint)(((fRam0000000146b4737c -
                                fVar29 * fVar29 * fVar41 * fRam0000000146b4737c) * fVar29 + fVar29)
                              * fStack_dc) ^ uRam0000000146b4736c) & -(uint)(1e-08 <= fVar41) ^
                      uRam0000000146b4736c);
      fVar56 = local_118;
      fVar55 = fStack_114;
      fVar54 = fStack_110;
    }
    local_108 = fVar28;
    fStack_104 = fVar30;
    fStack_100 = fVar20;
    fStack_fc = fVar22;
    FQuat::Rotator(&local_108,local_d8);
    if ((*(char *)(param_1 + 0x458) == '\0') || (*(float *)(param_1 + 0x450) == 1.0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    uVar16 = 0;
    plVar15 = *(longlong **)(param_1 + 0x310);
    uVar17 = (longlong)*(int *)(param_1 + 0x318) & 0x1fffffffffffffff;
    if (plVar15 + *(int *)(param_1 + 0x318) < plVar15) {
      uVar17 = uVar16;
    }
    if (uVar17 != 0) {
      do {
        plVar3 = (longlong *)*plVar15;
        if (((plVar3 != (longlong *)0x0) && (plVar3[0x32] == 0)) &&
           (local_f8 = fVar56, local_f4 = fVar55, local_f0 = fVar54,
           FUN_142399750(plVar3,&local_f8,local_d8), bVar8)) {
          lVar2 = *(longlong *)(param_1 + 0xa8);
          fStack_100 = *(float *)(lVar2 + 0x68);
          local_e8 = CONCAT44(*(float *)(lVar2 + 100) * *(float *)(param_1 + 0x450),
                              *(undefined4 *)(lVar2 + 0x60));
          fStack_e0 = fStack_100;
          (**(code **)(*plVar3 + 0x3f8))(plVar3,&local_e8);
        }
        plVar15 = plVar15 + 1;
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar17);
    }
    cVar12 = FUN_14059ee90(param_1 + 800);
    if (cVar12 != '\0') {
      FUN_14058f8a0(&local_res8,param_1 + 800);
      if (CONCAT44(uStackX_c,local_res8) != 0) {
        local_148 = fVar28;
        fStack_144 = fVar30;
        fStack_140 = fVar20;
        fStack_13c = fVar22;
        local_138 = fVar56;
        fStack_134 = fVar55;
        fStack_130 = fVar54;
        fStack_12c = fVar25;
        local_128 = fVar4 * fVar9;
        fStack_124 = fVar5 * fVar10;
        fStack_120 = fVar6 * fVar11;
        fStack_11c = auVar1._12_4_ * 0.0;
        FUN_1405aac00(CONCAT44(uStackX_c,local_res8),&local_148,0x3f800000);
      }
      FUN_143062a30(param_1);
      if (CONCAT44(uStackX_c,local_res8) != 0) {
        FUN_1405a53f0();
      }
    }
  }
  return;
}



// FUNCTION 143062460 FUN_143062460 body=1485 status=ok
// SIG undefined FUN_143062460(void)

void FUN_143062460(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_88;
  float local_80;
  
  bVar6 = *(byte *)((longlong)param_1 + 0x1de) >> 1 & 1;
  if ((bVar6 != 0) && (plVar1 = (longlong *)param_1[0x23], plVar1 != (longlong *)0x0)) {
    uVar3 = FUN_142e79d90();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    if (((param_1[0x28] != 0) && ((lVar4 != 0 && (cVar2 = FUN_142dd3a70(lVar4), cVar2 == '\0')))) ||
       ((lVar4 = FUN_142d29780(param_1[0x23]), lVar4 != 0 &&
        ((*(uint *)(lVar4 + 0x840) >> 3 & 1) != 0)))) {
      FUN_14303fca0(param_1);
    }
  }
  if ((param_1[0x23] == 0) && ((bVar6 != 0 || (*(char *)(param_1[0x16] + 0xa9) == '\x01')))) {
                    /* WARNING: Could not recover jumptable at 0x000143062526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x278))(param_1);
    return;
  }
  if ((param_1[0x7a] != 0) &&
     (((*(byte *)((longlong)param_1 + 0x1de) >> 1 & 1) == 0 ||
      ((fVar8 = *(float *)(param_1[0x16] + 0x1b4), 0.0 < fVar8 &&
       (fVar9 = *(float *)((longlong)param_1 + 700) - *(float *)((longlong)param_1 + 0x274),
       fVar7 = *(float *)((longlong)param_1 + 0x2c4) - *(float *)((longlong)param_1 + 0x27c),
       fVar8 * fVar8 <=
       (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x4f)) *
       (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x4f)) + fVar9 * fVar9 + fVar7 * fVar7))))
     )) {
    (**(code **)(*param_1 + 0x278))(param_1);
    return;
  }
  if (bVar6 == 0) {
    return;
  }
  if ((((*(byte *)(param_1 + 0x3d) & 1) != 0) && (*(char *)(param_1[0x16] + 0xa9) != '\x01')) &&
     ((*(byte *)(param_1[0x16] + 0xaa) & 8) != 0)) {
    uVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x39c);
    uVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x394);
    cVar2 = (**(code **)(*param_1 + 0x378))(param_1,uVar5,uVar3);
    if (cVar2 == '\0') {
      if (*(char *)(param_1[0x16] + 0xa9) != '\x02') {
        (**(code **)(*param_1 + 0x278))(param_1);
        return;
      }
      FUN_14303fca0();
    }
  }
  if (0.0 < *(float *)(param_1 + 0x1a)) {
    fVar8 = *(float *)((longlong)param_1 + 0x284);
    fVar7 = *(float *)(param_1 + 0x50);
    local_80 = *(float *)(param_1 + 0x51);
    fVar9 = fVar7 * fVar7 + fVar8 * fVar8 + local_80 * local_80;
    if (fVar9 == 1.0) {
      local_88 = param_1[0x50];
      local_80 = *(float *)(param_1 + 0x51);
    }
    else if (1e-08 <= fVar9) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar11._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      local_80 = local_80 * fVar10;
      local_88 = CONCAT44(fVar8 * fVar10,fVar7 * fVar10);
    }
    else {
      local_80 = DAT_1468b5d98;
      local_88 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    fVar8 = (float)FMath::PointDistToLine
                             ((longlong)param_1 + 700,&local_88,(longlong)param_1 + 0x274);
    if (*(float *)(param_1 + 0x1a) <= fVar8) goto LAB_1430629f4;
  }
  if (*(float *)((longlong)param_1 + 0xd4) <= 0.0) {
    return;
  }
  fVar13 = *(float *)((longlong)param_1 + 700) - *(float *)((longlong)param_1 + 0x274);
  fVar12 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x4f);
  fVar14 = *(float *)((longlong)param_1 + 0x2c4) - *(float *)((longlong)param_1 + 0x27c);
  fVar10 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
  fVar8 = fVar12;
  fVar7 = fVar13;
  fVar9 = fVar14;
  if ((fVar10 != 1.0) &&
     (fVar8 = DAT_1468b5d94, fVar7 = DAT_1468b5d90, fVar9 = DAT_1468b5d98, 1e-08 <= fVar10)) {
    auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    fVar9 = auVar11._0_4_;
    fVar9 = fVar9 + fVar9 * (0.5 - fVar10 * 0.5 * fVar9 * fVar9);
    fVar9 = fVar9 + fVar9 * (0.5 - fVar10 * 0.5 * fVar9 * fVar9);
    fVar8 = fVar12 * fVar9;
    fVar7 = fVar13 * fVar9;
    fVar9 = fVar14 * fVar9;
  }
  fVar10 = *(float *)((longlong)param_1 + 0x284);
  fVar12 = *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x50) + fVar10 * fVar10 +
           *(float *)(param_1 + 0x51) * *(float *)(param_1 + 0x51);
  if (fVar12 == 1.0) {
    local_88 = param_1[0x50];
    local_80 = *(float *)(param_1 + 0x51);
    fVar13 = (float)((ulonglong)local_88 >> 0x20);
    fVar14 = local_80;
    fVar15 = (float)local_88;
  }
  else {
    fVar13 = DAT_1468b5d94;
    fVar14 = DAT_1468b5d98;
    fVar15 = DAT_1468b5d90;
    if (1e-08 <= fVar12) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar14 = auVar11._0_4_;
      fVar14 = fVar14 + fVar14 * (0.5 - fVar12 * 0.5 * fVar14 * fVar14);
      fVar14 = fVar14 + fVar14 * (0.5 - fVar12 * 0.5 * fVar14 * fVar14);
      fVar15 = *(float *)(param_1 + 0x50) * fVar14;
      fVar13 = fVar10 * fVar14;
      fVar14 = *(float *)(param_1 + 0x51) * fVar14;
    }
  }
  fVar10 = _guard_xfg_dispatch_icall_nop(*(float *)((longlong)param_1 + 0xd4) * 0.017453292);
  if (fVar10 < fVar8 * fVar13 + fVar7 * fVar15 + fVar9 * fVar14) {
    return;
  }
LAB_1430629f4:
  (**(code **)(*param_1 + 0x278))(param_1);
  return;
}



// FUNCTION 143062a30 FUN_143062a30 body=476 status=ok
// SIG undefined FUN_143062a30(void)

void FUN_143062a30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong local_res10;
  undefined1 local_48 [64];
  
  cVar2 = FUN_14059ee90(param_1 + 800);
  if ((((cVar2 != '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) != 0)) &&
     (FUN_14058f8a0(&local_res10,param_1 + 800), lVar1 = local_res10, local_res10 != 0)) {
    pfVar3 = (float *)FUN_14059d7c0(local_res10,local_48);
    fVar9 = *(float *)(lVar1 + 0x120) - *pfVar3;
    fVar7 = *(float *)(lVar1 + 0x124) - pfVar3[1];
    fVar11 = *(float *)(lVar1 + 0x128) - pfVar3[2];
    fVar4 = fVar9 * fVar9 + fVar7 * fVar7 + fVar11 * fVar11;
    fVar8 = fVar7;
    fVar10 = fVar9;
    fVar5 = fVar11;
    if ((fVar4 != 1.0) &&
       (fVar8 = DAT_1468b5d94, fVar10 = DAT_1468b5d90, fVar5 = DAT_1468b5d98, 1e-08 <= fVar4)) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar8 = fVar7 * fVar5;
      fVar10 = fVar9 * fVar5;
      fVar5 = fVar11 * fVar5;
    }
    FUN_1405aaa50(local_res10,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b8),
                  fVar8 * *(float *)(param_1 + 0x2f4) + fVar10 * *(float *)(param_1 + 0x2f0) +
                  fVar5 * *(float *)(param_1 + 0x2f8),0,4,0);
    if (local_res10 != 0) {
      FUN_1405a53f0();
    }
  }
  return;
}



// FUNCTION 143062c10 FUN_143062c10 body=512 status=ok
// SIG undefined FUN_143062c10(void)

void FUN_143062c10(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float local_48;
  float fStack_44;
  float local_40;
  
  if (((*(byte *)(param_1 + 0x1de) >> 1 & 1) == 0) || ((*(byte *)(param_1 + 0x1e8) & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_3 + 0x20);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_3 + 0x28);
    local_48 = *(float *)(param_1 + 0x2e8) - *(float *)(param_3 + 0x44);
    fStack_44 = *(float *)(param_1 + 0x2ec) - *(float *)(param_3 + 0x48);
    local_40 = *(float *)(param_1 + 0x2f0) - *(float *)(param_3 + 0x4c);
  }
  else {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 700);
      uVar1 = *(undefined8 *)(param_1 + 0x2d4);
      *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x2c4);
      local_40 = *(float *)(param_1 + 0x2dc);
      goto LAB_143062dec;
    }
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x1d0);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x1d8);
    local_48 = *(float *)(param_1 + 0x1d0) - *(float *)(param_1 + 0x1c4);
    fStack_44 = *(float *)(param_1 + 0x1d4) - *(float *)(param_1 + 0x1c8);
    local_40 = *(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x1cc);
  }
  fVar2 = fStack_44 * fStack_44 + local_48 * local_48 + local_40 * local_40;
  if (fVar2 != 1.0) {
    if (1e-08 <= fVar2) {
      auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
      fVar3 = auVar4._0_4_;
      fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
      fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
      fStack_44 = fStack_44 * fVar3;
      local_48 = local_48 * fVar3;
      local_40 = local_40 * fVar3;
    }
    else {
      local_48 = DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
      fStack_44 = DAT_1468b5d94;
    }
  }
  uVar1 = CONCAT44(fStack_44,local_48);
LAB_143062dec:
  *(undefined8 *)(param_1 + 0x2f4) = uVar1;
  *(float *)(param_1 + 0x2fc) = local_40;
  return;
}



// FUNCTION 143062e10 FUN_143062e10 body=287 status=ok
// SIG undefined FUN_143062e10(void)

void FUN_143062e10(longlong *param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(float *)(param_2 + 4) != *(float *)((longlong)param_1 + 0x17c)) {
    *(float *)((longlong)param_1 + 0x17c) = *(float *)(param_2 + 4);
    (**(code **)(*param_1 + 0x260))();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    lVar3 = FUN_142e49950();
    lVar1 = *(longlong *)(param_2 + 8);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) {
        if (lVar1 != 0) {
          param_1[0x30] = lVar1;
        }
        break;
      }
    }
  }
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 != 0) {
    if ((param_1[0x16] == 0) || (lVar1 != *(longlong *)(param_1[0x16] + 0x80))) {
      param_1[0x2a] = lVar1;
    }
    else {
      param_1[0x2a] = 0;
    }
  }
  if (*param_2 != (char)param_1[0x35]) {
    *(char *)(param_1 + 0x35) = *param_2;
    (**(code **)(*param_1 + 0x260))(param_1);
    (**(code **)(*param_1 + 0x380))(param_1);
  }
  if (*(float *)(param_2 + 0x28) != *(float *)(param_1 + 0x38)) {
    *(float *)(param_1 + 0x38) = *(float *)(param_2 + 0x28);
    (**(code **)(*param_1 + 0x260))(param_1);
    (**(code **)(*param_1 + 0x388))(param_1);
  }
  FUN_140a29610(param_1 + 0x36,param_2 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x1ec) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 500) = *(undefined8 *)(param_2 + 0x2c);
  return;
}



// FUNCTION 143062f30 FUN_143062f30 body=1155 status=ok
// SIG undefined FUN_143062f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143062f30(longlong param_1,float param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [48];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar4 = *(longlong *)(param_1 + 0x150);
  if (lVar4 == 0) {
    *(ushort *)(param_1 + 0xe8) = *(ushort *)(param_1 + 0xe8) & 0xffef;
  }
  else {
    bVar3 = *(float *)(*(longlong *)(param_1 + 0xa8) + 0x15c) == 0.0;
    if ((*(byte *)(param_1 + 0xe9) & 1) == 0) {
      lVar4 = *(longlong *)(lVar4 + 0x168);
      if (lVar4 == 0) {
        local_f8 = _DAT_1468b5d90;
        local_f0 = DAT_1468b5d98;
      }
      else {
        local_f8 = *(ulonglong *)(lVar4 + 0x220);
        local_f0 = *(float *)(lVar4 + 0x228);
      }
      fVar6 = (float)local_f8;
      fVar9 = (float)(local_f8 >> 0x20);
      fVar11 = local_f0;
    }
    else {
      lVar4 = FUN_142231870(lVar4,local_a8,*(undefined4 *)(param_1 + 0x238));
      fVar6 = *(float *)(lVar4 + 0x10);
      fVar9 = *(float *)(lVar4 + 0x14);
      fVar11 = *(float *)(lVar4 + 0x18);
    }
    local_e8 = (fVar6 + *(float *)(param_1 + 0x158)) - *(float *)(param_1 + 0x2a8);
    local_e4 = (fVar9 + *(float *)(param_1 + 0x15c)) - *(float *)(param_1 + 0x2ac);
    local_e0 = (fVar11 + *(float *)(param_1 + 0x160)) - *(float *)(param_1 + 0x2b0);
    fVar6 = SQRT(local_e8 * local_e8 + local_e4 * local_e4 + local_e0 * local_e0);
    if (0.0001 < fVar6) {
      fVar6 = 1.0 / fVar6;
      local_e8 = fVar6 * local_e8;
      local_e4 = fVar6 * local_e4;
      local_e0 = fVar6 * local_e0;
    }
    if (bVar3) {
      fVar6 = local_e4 * *(float *)(param_1 + 0x2e8) + local_e8 * *(float *)(param_1 + 0x2e4) +
              local_e0 * *(float *)(param_1 + 0x2ec);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x2e4);
      local_b8 = *(undefined4 *)(param_1 + 0x2ec);
      local_c0._0_4_ = (float)uVar2;
      fVar6 = (float)((ulonglong)uVar2 >> 0x20);
      fVar9 = fVar6 * fVar6 + (float)local_c0 * (float)local_c0;
      if (1e-08 < fVar9) {
        auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar11 = auVar12._0_4_;
        fVar11 = fVar11 + fVar11 * (0.5 - fVar9 * 0.5 * fVar11 * fVar11);
        fVar11 = fVar11 + fVar11 * (0.5 - fVar9 * 0.5 * fVar11 * fVar11);
        local_c0._0_4_ = (float)local_c0 * fVar11;
        fVar6 = fVar6 * fVar11;
      }
      fVar10 = local_e8 * local_e8 + local_e4 * local_e4;
      fVar9 = local_e8;
      fVar11 = local_e4;
      if (1e-08 < fVar10) {
        auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = auVar12._0_4_;
        fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
        fVar11 = fVar11 + fVar11 * (0.5 - fVar10 * 0.5 * fVar11 * fVar11);
        fVar9 = local_e8 * fVar11;
        fVar11 = local_e4 * fVar11;
      }
      fVar6 = (float)local_c0 * fVar9 + fVar6 * fVar11;
      local_c0 = uVar2;
    }
    if (*(float *)(param_1 + 0x388) <= fVar6) {
      FVector::Rotation(&local_e8,&local_d0);
      pfVar1 = (float *)(param_1 + 0x2f0);
      FVector::Rotation(pfVar1,&local_f8);
      uVar7 = FMath::FixedTurn(local_f8._4_4_,local_cc,param_2 * *(float *)(param_1 + 0x380));
      if (bVar3) {
        uVar8 = local_f8 & 0xffffffff;
        local_f8._4_4_ = uVar7;
        local_f8._0_4_ = FMath::FixedTurn(uVar8,local_d0,param_2 * *(float *)(param_1 + 900));
        uVar7 = local_f8._4_4_;
      }
      local_f8._4_4_ = uVar7;
      fVar9 = SQRT(*pfVar1 * *pfVar1 + *(float *)(param_1 + 0x2f4) * *(float *)(param_1 + 0x2f4) +
                   *(float *)(param_1 + 0x2f8) * *(float *)(param_1 + 0x2f8));
      pfVar5 = (float *)FRotator::Vector(&local_f8,&local_c0);
      fVar6 = pfVar5[2];
      *(ulonglong *)pfVar1 = CONCAT44(fVar9 * pfVar5[1],fVar9 * *pfVar5);
      *(float *)(param_1 + 0x2f8) = fVar9 * fVar6;
    }
    else {
      *(ushort *)(param_1 + 0xe8) = *(ushort *)(param_1 + 0xe8) & 0xffef;
    }
  }
  return;
}



// FUNCTION 1430633c0 FUN_1430633c0 body=94 status=ok
// SIG undefined FUN_1430633c0(void)

void FUN_1430633c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
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
      *(longlong *)(param_1 + 0x278) = lVar1;
    }
  }
  return;
}



// FUNCTION 143063420 FUN_143063420 body=846 status=ok
// SIG undefined FUN_143063420(void)

void FUN_143063420(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *pvVar10;
  ulonglong uVar11;
  uint uVar12;
  void *pvVar14;
  ulonglong uVar15;
  int iVar16;
  void *pvVar17;
  int local_res10;
  longlong local_60;
  void *local_58;
  int local_50;
  ulonglong uVar13;
  
  local_res10 = 0;
  iVar1 = *DAT_146b47618;
  if (0 < *(int *)(param_1 + 0x478)) {
    lVar7 = (longlong)(*(int *)(param_1 + 0x478) + -1);
    local_58 = (void *)0x0;
    local_60 = lVar7;
    do {
      uVar11 = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x470) + (longlong)local_58 * 8);
      if (*(char *)(lVar2 + 8) != '\0') {
        iVar16 = *(int *)(lVar2 + 0x18);
        *(undefined1 *)(lVar2 + 8) = 0;
        uVar8 = uVar11;
        uVar9 = uVar11;
        uVar13 = uVar11;
        uVar15 = uVar11;
        if (0 < iVar16) {
          do {
            lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + uVar9 * 8);
            if (lVar7 == 0) {
              uVar15 = (ulonglong)((int)uVar15 - 1);
              uVar8 = uVar8 - 1;
            }
            else if ((longlong)uVar8 < 0) {
              *(longlong *)(*(longlong *)(lVar2 + 0x10) + (uVar9 + uVar8) * 8) = lVar7;
            }
            iVar16 = *(int *)(lVar2 + 0x18);
            uVar12 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar12;
            uVar9 = uVar9 + 1;
          } while ((int)uVar12 < iVar16);
          if ((int)uVar15 < 0) {
            iVar6 = iVar16 + (int)uVar15;
            if (iVar16 < iVar6) {
              *(int *)(lVar2 + 0x18) = iVar6;
              if (*(int *)(lVar2 + 0x1c) < iVar6) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x10);
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar16 * 8),0,
                         (longlong)(iVar6 - iVar16) << 3);
            }
            else if ((iVar6 < iVar16) && (iVar6 != iVar16)) {
              *(int *)(lVar2 + 0x18) = iVar6;
            }
          }
          iVar16 = *(int *)(lVar2 + 0x18);
        }
        lVar7 = local_60;
        if (iVar16 == 0) {
          *(undefined4 *)(lVar2 + 4) = 0;
          FUN_14288e3d0(lVar2 + 0x30,0);
        }
      }
      if (0 < *(int *)(lVar2 + 0x18)) {
        uVar12 = iVar1 - *(int *)(lVar2 + 0x18);
        uVar8 = (ulonglong)uVar12;
        if ((int)uVar12 < 1) {
          uVar8 = uVar11;
        }
        iVar16 = (int)uVar8;
        lVar3 = lVar7;
        lVar5 = local_60;
        pvVar14 = local_58;
        pvVar17 = local_58;
        while ((local_58 = pvVar14, 0 < iVar16 &&
               (uVar11 = 0, lVar7 = lVar3, local_60 = lVar5, (longlong)local_58 < lVar3))) {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x470) + lVar3 * 8);
          pvVar14 = local_58;
          if (((*(int *)(lVar3 + 0x18) < iVar1) || (*(char *)(lVar3 + 8) != '\0')) &&
             (uVar9 = uVar11, local_58 = pvVar17, 0 < *(int *)(lVar3 + 0x18))) {
            do {
              lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar9);
              lVar7 = lVar5;
              if (lVar4 != 0) {
                *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + uVar9) = 0;
                *(undefined1 *)(lVar3 + 8) = 1;
                *(int *)(lVar4 + 0xa0) = local_res10;
                iVar16 = *(int *)(lVar2 + 0x18);
                *(int *)(lVar2 + 0x18) = iVar16 + 1;
                if (*(int *)(lVar2 + 0x1c) < iVar16 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (lVar2 + 0x10,iVar16);
                }
                *(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar16 * 8) = lVar4;
                FUN_14305b2c0(lVar4,lVar2 + 0x30);
                uVar12 = (int)uVar8 - 1;
                uVar8 = (ulonglong)uVar12;
                pvVar14 = local_58;
                pvVar17 = local_58;
                if (uVar12 == 0) break;
              }
              uVar12 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar12;
              pvVar14 = local_58;
              uVar9 = uVar9 + 8;
              pvVar17 = local_58;
            } while ((int)uVar12 < *(int *)(lVar3 + 0x18));
          }
          local_58 = pvVar17;
          iVar16 = (int)uVar8;
          lVar3 = lVar7 + -1;
          local_60 = lVar7;
          lVar5 = lVar3;
          pvVar17 = local_58;
        }
      }
      local_res10 = local_res10 + 1;
      local_58 = (void *)((longlong)local_58 + 1);
    } while (local_res10 < *(int *)(param_1 + 0x478));
  }
  pvVar17 = (void *)0x0;
  if (0 < *(int *)(param_1 + 0x488)) {
    local_50 = *(int *)(param_1 + 0x488);
    lVar7 = (longlong)local_50;
    pvVar14 = *(void **)(param_1 + 0x480);
    local_58 = (void *)0x0;
    pvVar10 = pvVar17;
    if (local_50 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,local_50,0);
      pvVar10 = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,pvVar14,lVar7 << 3);
    }
    iVar1 = local_50;
    *(undefined4 *)(param_1 + 0x488) = 0;
    if ((*(int *)(param_1 + 0x48c) < 0) && (*(int *)(param_1 + 0x48c) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x480,0);
    }
    if (0 < iVar1) {
      do {
        FUN_14303e050(param_1,*(undefined8 *)((longlong)pvVar10 + (longlong)pvVar17 * 8));
        pvVar17 = (void *)((longlong)pvVar17 + 1);
      } while ((longlong)pvVar17 < (longlong)iVar1);
    }
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
  }
  return;
}


