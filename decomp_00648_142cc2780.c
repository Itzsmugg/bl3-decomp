// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142cc2780 FUN_142cc2780 body=260 status=ok
// SIG undefined FUN_142cc2780(void)

undefined8 * FUN_142cc2780(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_58 [16];
  undefined1 local_48 [64];
  
  if ((longlong *)param_1[0x120] == (longlong *)0x0) {
LAB_142cc2811:
    (**(code **)(*param_1 + 0x738))(param_1,&local_68);
    local_78 = local_68;
    local_74 = local_64;
  }
  else {
    cVar5 = (**(code **)(*(longlong *)param_1[0x120] + 0x560))();
    if (cVar5 == '\0') {
      cVar5 = (**(code **)(*(longlong *)param_1[0x120] + 0x558))();
      if ((cVar5 == '\0') &&
         (((lVar6 = param_1[0x120], *(char *)(lVar6 + 0x248) != '\x06' ||
           (*(char *)(lVar6 + 0x249) != '\0')) || (*(longlong *)(lVar6 + 0x178) == 0))))
      goto LAB_142cc2811;
    }
    local_78 = 0;
    lVar6 = (**(code **)(*param_1 + 0x738))(param_1,local_58);
    local_74 = *(undefined4 *)(lVar6 + 4);
  }
  local_70 = 0;
  puVar7 = (undefined8 *)FRotationMatrix::FRotationMatrix(local_48,&local_78);
  uVar1 = puVar7[1];
  uVar2 = puVar7[2];
  uVar3 = puVar7[3];
  *param_2 = *puVar7;
  param_2[1] = uVar1;
  uVar1 = puVar7[4];
  uVar4 = puVar7[5];
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar2 = puVar7[6];
  uVar3 = puVar7[7];
  param_2[4] = uVar1;
  param_2[5] = uVar4;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  return param_2;
}



// FUNCTION 142cc2890 FUN_142cc2890 body=283 status=ok
// SIG undefined FUN_142cc2890(void)

longlong * FUN_142cc2890(longlong param_1,longlong *param_2)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  void *local_28;
  undefined8 local_20;
  
  *param_2 = 0;
  param_2[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Pawn Slot:",0x16);
  if ((*(byte *)(param_1 + 0x38) & 2) != 0) {
    local_28 = (void *)0x0;
    local_20 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    _Src = local_28;
    FGenericPlatformString::Memcpy(local_28,L" [Detach]",0x14);
    if (((int)local_20 != 0) && (iVar3 = (int)local_20 + -1, iVar3 != 0)) {
      iVar1 = (int)param_2[1];
      iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar3;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142cc29c0 FUN_142cc29c0 body=438 status=ok
// SIG undefined FUN_142cc29c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142cc29c0(longlong param_1,float *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined4 in_EAX;
  int iVar6;
  undefined8 *puVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_68;
  float local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [16];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  plVar4 = *(longlong **)(param_1 + 0xa30);
  if ((plVar4 == (longlong *)0x0) ||
     ((*(int *)(param_1 + 0xa28) == 0 && (*(int *)(param_1 + 0xa2c) == 0)))) {
    if (*(char *)(param_1 + 0xa20) == '\0') {
      FUN_142697910(param_1);
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x168);
      local_54 = *(undefined4 *)(param_1 + 0x464);
      local_5c = 0;
      if (lVar10 == 0) {
        uVar11 = (undefined4)DAT_1468b5da0;
        uVar12 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_48 = DAT_1468b5da8;
      }
      else {
        local_28 = *(float *)(lVar10 + 0x210);
        fStack_24 = *(float *)(lVar10 + 0x214);
        fStack_20 = *(float *)(lVar10 + 0x218);
        fStack_1c = *(float *)(lVar10 + 0x21c);
        auVar5._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != fStack_24);
        auVar5._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != local_28);
        auVar5._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_20);
        auVar5._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_1c);
        iVar6 = movmskps(in_EAX,auVar5);
        lVar9 = lVar10;
        if (iVar6 != 0) {
          *(float *)(lVar10 + 0x250) = local_28;
          *(float *)(lVar10 + 0x254) = fStack_24;
          *(float *)(lVar10 + 600) = fStack_20;
          *(float *)(lVar10 + 0x25c) = fStack_1c;
          puVar7 = (undefined8 *)FQuat::Rotator(&local_28,local_44);
          *(undefined8 *)(lVar10 + 0x260) = *puVar7;
          *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar7 + 1);
          lVar9 = *(longlong *)(param_1 + 0x168);
        }
        uVar11 = (undefined4)*(undefined8 *)(lVar10 + 0x260);
        uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x260) >> 0x20);
        puVar1 = (undefined4 *)(lVar10 + 0x268);
        lVar10 = lVar9;
        local_48 = *puVar1;
      }
      local_50 = CONCAT44(uVar12,uVar11);
      if (lVar10 == 0) {
        local_68 = _DAT_1468b5d90;
        local_60 = DAT_1468b5d98;
      }
      else {
        local_68 = *(undefined8 *)(lVar10 + 0x220);
        local_60 = *(float *)(lVar10 + 0x228);
      }
      pfVar8 = (float *)FRotator::RotateVector(&local_50,local_38,&local_5c);
      fVar2 = pfVar8[1];
      fVar3 = pfVar8[2];
      *param_2 = (float)local_68 + *pfVar8;
      param_2[1] = (float)((ulonglong)local_68 >> 0x20) + fVar2;
      param_2[2] = local_60 + fVar3;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x428))(plVar4,param_2,*(undefined8 *)(param_1 + 0xa28));
  }
  return param_2;
}



// FUNCTION 142cc2b80 FUN_142cc2b80 body=188 status=ok
// SIG undefined FUN_142cc2b80(void)

ulonglong FUN_142cc2b80(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  lVar2 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  uVar3 = uVar6;
  if (((lVar2 != 0) && (uVar3 = FUN_142698570(lVar2), uVar3 != 0)) &&
     (uVar3 != *(ulonglong *)(DAT_146b17150 + 0x6c8))) {
    return uVar3;
  }
  iVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (0 < iVar1) {
    do {
      if ((uVar3 != 0) && (uVar3 != *(ulonglong *)(DAT_146b17150 + 0x6c8))) {
        return uVar3;
      }
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x560))(param_1,uVar6);
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      iVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
    } while ((int)uVar5 < iVar1);
  }
  return uVar3;
}



// FUNCTION 142cc2c40 FUN_142cc2c40 body=25 status=ok
// SIG undefined FUN_142cc2c40(void)

void FUN_142cc2c40(longlong param_1,undefined8 param_2)

{
  FUN_142ab6190(param_2,"GameStage",*(undefined4 *)(param_1 + 0x1a4));
  return;
}



// FUNCTION 142cc2c60 FUN_142cc2c60 body=181 status=ok
// SIG undefined FUN_142cc2c60(void)

void FUN_142cc2c60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  uVar4 = *(uint *)(param_1 + 0x1a4);
  plVar1 = (longlong *)(param_2 + 0x30);
  FUN_140a6ec50(plVar1,5);
  FUN_140a78ce0(plVar1,"GameStage",9);
  FUN_140a6ec50(plVar1,6);
  lVar2 = *plVar1;
  puVar5 = *(undefined1 **)(lVar2 + 0x18);
  if (*(undefined1 **)(lVar2 + 0x20) < puVar5 + 0xb) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar2,0xb);
    puVar5 = *(undefined1 **)(lVar2 + 0x18);
  }
  *(undefined1 **)(lVar2 + 0x18) = puVar5 + 0xb;
  puVar3 = puVar5;
  if ((int)uVar4 < 0) {
    *puVar5 = 0x2d;
    uVar4 = ~uVar4 + 1;
    puVar3 = puVar5 + 1;
  }
  lVar2 = rapidjson::internal::u32toa(uVar4,puVar3);
  *(longlong *)(*plVar1 + 0x18) = *(longlong *)(*plVar1 + 0x18) + (lVar2 - (longlong)puVar5) + -0xb;
  return;
}



// FUNCTION 142cc2d20 FUN_142cc2d20 body=214 status=ok
// SIG undefined FUN_142cc2d20(void)

undefined8 *
FUN_142cc2d20(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res20 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  if (param_4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    FUN_142cbf590();
    puVar3 = (undefined8 *)0x0;
    if (local_res20[0] != -1) {
      puVar3 = (undefined8 *)((longlong)local_res20[0] * 0x5c + *param_1);
    }
    puVar2 = (undefined8 *)((longlong)puVar3 + 0x3c);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    if (puVar2 == (undefined8 *)0x0) {
      local_38 = param_3;
      local_30 = FUN_142cbab40(param_1,local_28,param_3,param_4);
      FUN_142cb08f0(param_1,local_res20,&local_38,0);
      puVar2 = (undefined8 *)(*param_1 + (longlong)local_res20[0] * 0x5c + 0x3c);
    }
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    param_2[2] = puVar2[2];
  }
  return param_2;
}



// FUNCTION 142cc2e00 FUN_142cc2e00 body=190 status=ok
// SIG undefined FUN_142cc2e00(void)

undefined8
FUN_142cc2e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar5 = FUN_142dd0030(param_3);
  if (lVar5 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(lVar5 + 0x168);
  if (lVar1 == 0) {
    uVar7 = (undefined4)DAT_1468b5da0;
    uVar8 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    uVar4 = DAT_1468b5da8;
  }
  else {
    local_18 = *(float *)(lVar1 + 0x210);
    fStack_14 = *(float *)(lVar1 + 0x214);
    fStack_10 = *(float *)(lVar1 + 0x218);
    fStack_c = *(float *)(lVar1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
    auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
    auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
    auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
    iVar3 = movmskps((int)lVar5,auVar2);
    if (iVar3 != 0) {
      *(float *)(lVar1 + 0x250) = local_18;
      *(float *)(lVar1 + 0x254) = fStack_14;
      *(float *)(lVar1 + 600) = fStack_10;
      *(float *)(lVar1 + 0x25c) = fStack_c;
      puVar6 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
      *(undefined8 *)(lVar1 + 0x260) = *puVar6;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
    }
    uVar7 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    uVar4 = *(undefined4 *)(lVar1 + 0x268);
  }
  *param_4 = CONCAT44(uVar8,uVar7);
  *(undefined4 *)(param_4 + 1) = uVar4;
  return CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
}



// FUNCTION 142cc2ec0 FUN_142cc2ec0 body=210 status=ok
// SIG undefined FUN_142cc2ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [12] FUN_142cc2ec0(undefined1 *param_1,undefined1 (*param_2) [12])

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar6 = FUN_142cb7670(param_1[1]);
  uVar7 = FUN_142cb7670(*param_1);
  *(ulonglong *)*param_2 = CONCAT44(uVar6,uVar7);
  *(undefined4 *)(*param_2 + 8) = 0;
  fVar3 = (float)DAT_146b30e60;
  fVar4 = DAT_146b30e60._4_4_;
  fVar5 = DAT_146b30e60._8_4_;
  auVar8._12_4_ = 0;
  auVar8._0_12_ = *param_2;
  auVar8 = divps(auVar8,_DAT_146b30e60);
  fVar9 = *(float *)*param_2 - (float)(int)auVar8._0_4_ * fVar3;
  fVar10 = *(float *)(*param_2 + 4) - (float)(int)auVar8._4_4_ * fVar4;
  fVar11 = *(float *)(*param_2 + 8) - (float)(int)auVar8._8_4_ * fVar5;
  fVar9 = (float)(((uint)(fVar3 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                 (uint)(fVar3 + fVar9));
  fVar10 = (float)(((uint)(fVar4 + fVar10) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                  (uint)(fVar4 + fVar10));
  fVar11 = (float)(((uint)(fVar5 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                  (uint)(fVar5 + fVar11));
  bVar1 = fRam0000000146b30e54 < fVar10;
  bVar2 = fRam0000000146b30e58 < fVar11;
  *(uint *)*param_2 =
       ((uint)(fVar9 - fVar3) ^ (uint)fVar9) & -(uint)(_DAT_146b30e50 < fVar9) ^ (uint)fVar9;
  *(uint *)(*param_2 + 8) = ((uint)(fVar11 - fVar5) ^ (uint)fVar11) & -(uint)bVar2 ^ (uint)fVar11;
  *(uint *)(*param_2 + 4) = ((uint)(fVar10 - fVar4) ^ (uint)fVar10) & -(uint)bVar1 ^ (uint)fVar10;
  return param_2;
}



// FUNCTION 142cc3020 FUN_142cc3020 body=802 status=ok
// SIG undefined FUN_142cc3020(void)

uint FUN_142cc3020(byte *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (uint)*param_1;
  switch(*param_1) {
  case 1:
  case 2:
    uVar1 = *(uint *)(param_1 + 8) ^ *(uint *)(param_1 + 4);
    uVar4 = uVar3 - uVar1 ^ uVar1 >> 0xd;
    uVar3 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
    uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xd;
    uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar1 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 0x10;
    uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar1 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 10;
    uVar3 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xf;
    break;
  case 3:
    uVar1 = *(uint *)(param_1 + 0x10) ^ *(uint *)(param_1 + 0xc);
    uVar4 = uVar3 - uVar1 ^ uVar1 >> 0xd;
    uVar3 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
    uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xd;
    uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar1 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 0x10;
    uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar1 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 10;
    uVar3 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xf;
    break;
  case 4:
  case 5:
    uVar3 = FCrc::MemCrc_DEPRECATED(param_1 + 0x14,0xc);
    uVar4 = *param_1 - uVar3 ^ uVar3 >> 0xd;
    uVar1 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
    uVar5 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xd;
    uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar5 >> 0xc;
    uVar3 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar1 = (uVar4 - uVar3) - uVar5 ^ uVar5 >> 3;
    uVar3 = (uVar3 - uVar1) - uVar5 ^ uVar1 << 10;
    uVar3 = (uVar5 - uVar3) - uVar1 ^ uVar3 >> 0xf;
    break;
  case 6:
    uVar1 = FCrc::MemCrc32(param_1 + 0x20,0xc);
    uVar4 = uVar3 - uVar1 ^ uVar1 >> 0xd;
    uVar3 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
    uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xd;
    uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar1 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 0x10;
    uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar1 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 10;
    uVar3 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xf;
  }
  uVar1 = FCrc::MemCrc_DEPRECATED(param_1 + 0x2c,0xc);
  uVar3 = uVar3 - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar5 = (uVar1 - uVar4) - uVar3 ^ uVar4 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar5 >> 0xc;
  uVar1 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 0x10;
  uVar4 = (uVar5 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar3 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xf;
  iVar2 = uVar3 - param_1[0x38];
  uVar1 = 0x9e3779b9 - uVar3 ^ iVar2 * 0x100;
  uVar4 = (param_1[0x38] - uVar1) - iVar2 ^ uVar1 >> 0xd;
  uVar3 = (iVar2 - uVar1) - uVar4 ^ uVar4 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  return (uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}



// FUNCTION 142cc3360 FUN_142cc3360 body=460 status=ok
// SIG undefined FUN_142cc3360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_142cc3360(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 local_78 [8];
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined1 local_60 [20];
  undefined1 local_4c [8];
  char local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FDifficultyFloat::FDifficultyFloat(local_70);
  puVar2 = (undefined4 *)FUN_142caac20(param_1 + 0x28,local_4c,param_3);
  cVar1 = *(char *)(puVar2 + 2);
  if (cVar1 == '\0') {
    uVar5 = *puVar2;
  }
  else if (cVar1 == '\x02') {
    uVar5 = *puVar2;
  }
  else if (cVar1 == '\x01') {
    uVar5 = FUN_142c49730(puVar2);
  }
  else {
    uVar5 = 0;
  }
  FUN_14246fd50(local_70,uVar5);
  puVar3 = *(undefined1 **)(param_1 + 0x60);
  puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x68) * 0x40;
  if (puVar3 != puVar4) {
    do {
      puVar2 = (undefined4 *)FUN_142caac20(puVar3 + 8,local_4c,param_3);
      cVar1 = *(char *)(puVar2 + 2);
      if (cVar1 == '\0') {
        uVar5 = *puVar2;
      }
      else if (cVar1 == '\x02') {
        uVar5 = *puVar2;
      }
      else if (cVar1 == '\x01') {
        uVar5 = FUN_142c49730(puVar2);
      }
      else {
        uVar5 = 0;
      }
      local_88 = local_78;
      FUN_142470da0(local_70,local_60,*puVar3,uVar5);
      switch(local_44) {
      case '\0':
        if (local_44 == '\0') {
          local_44 = -1;
        }
        break;
      case '\x01':
        if (local_44 == '\x01') {
          local_44 = -1;
        }
        break;
      case '\x02':
        if (local_44 == '\x02') {
          local_44 = -1;
        }
        break;
      case '\x03':
      case '\x04':
        if (local_44 == '\x03') {
          local_44 = -1;
        }
        break;
      case '\x05':
        if (local_44 == '\x03') {
          local_44 = -1;
        }
      }
      puVar3 = puVar3 + 0x40;
    } while (puVar3 != puVar4);
  }
  *(undefined1 *)(param_2 + 2) = 0xff;
  uVar5 = FUN_14247f5a0(local_70);
  param_2[1] = uVar5;
  *param_2 = local_6c;
  *(undefined1 *)(param_2 + 2) = 2;
  thunk_FUN_142478640(local_70);
  return param_2;
}



// FUNCTION 142cc3550 FUN_142cc3550 body=1108 status=ok
// SIG undefined FUN_142cc3550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Switch with 1 destination removed at 0x000142cc391b : 6 cases all go to same destination
    */

float * FUN_142cc3550(longlong param_1,float *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  float *pfVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [24];
  longlong local_c0;
  int local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *(undefined1 *)(param_2 + 2) = 0xff;
  }
  else {
    bVar3 = false;
    fVar15 = 0.0;
    bVar2 = false;
    pfVar5 = (float *)FUN_142caac20(param_1 + 0x30,&local_c0);
    cVar4 = *(char *)(pfVar5 + 2);
    if (cVar4 == '\0') {
      fVar9 = *pfVar5;
    }
    else if (cVar4 == '\x02') {
      fVar9 = *pfVar5;
    }
    else if (cVar4 == '\x01') {
      fVar9 = (float)FUN_142c49730(pfVar5);
    }
    else {
      fVar9 = 0.0;
    }
    pfVar5 = (float *)FUN_142caac20(param_1 + 0xd8,&local_c0,param_3);
    cVar4 = *(char *)(pfVar5 + 2);
    if (cVar4 == '\0') {
      fVar10 = *pfVar5;
    }
    else if (cVar4 == '\x02') {
      fVar10 = *pfVar5;
    }
    else if (cVar4 == '\x01') {
      fVar10 = (float)FUN_142c49730(pfVar5);
    }
    else {
      fVar10 = 0.0;
    }
    pfVar5 = (float *)FUN_142caac20(param_1 + 0x110,&local_c0,param_3);
    cVar4 = *(char *)(pfVar5 + 2);
    if (cVar4 == '\0') {
      fVar11 = *pfVar5;
    }
    else if (cVar4 == '\x02') {
      fVar11 = *pfVar5;
    }
    else if (cVar4 == '\x01') {
      fVar11 = (float)FUN_142c49730(pfVar5);
    }
    else {
      fVar11 = 0.0;
    }
    if ((DAT_146b17150 == 0) ||
       (lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_3,0), lVar6 == 0)) {
      lVar6 = DAT_146b19a68;
    }
    UWorld::GetPlayerControllerIterator(lVar6,&local_c0);
    while( true ) {
      if ((local_b8 < 0) || (*(int *)(local_c0 + 8) <= local_b8)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar6 = FWeakObjectPtr::Get();
      if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x488), lVar6 != 0)) {
        uVar7 = FUN_142e1a5a0();
        lVar6 = AGameStateBase::OnRep_GameModeClass(lVar6,uVar7);
        if (lVar6 == 0) {
LAB_142cc3787:
          lVar6 = 0;
        }
        else {
          lVar8 = FUN_142e1a5a0();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_142cc3787;
        }
        if (lVar6 != 0) {
          FUN_142d62190(lVar6,local_d8,*(undefined8 *)(param_1 + 0x28));
          cVar4 = FUN_142d52a00();
          if (cVar4 != '\0') {
            uVar7 = FUN_142d52a20(local_d8);
            FArchive::operator<<(uVar7);
            cVar4 = FUN_142d76760();
            if (cVar4 == '\0') {
              bVar2 = true;
              uVar7 = FUN_142d52a20(local_d8);
              uVar7 = FArchive::operator<<(uVar7);
              fVar12 = (float)FUN_142d5fed0(uVar7);
              uVar7 = FUN_142d52a20(local_d8);
              lVar6 = FArchive::operator<<(uVar7);
              fVar14 = fVar9 * *(float *)(lVar6 + 0x20);
              FUN_142d52a20(local_d8);
              lVar6 = FArchive::operator<<();
              fVar13 = fVar14 - *(float *)(lVar6 + 0x14);
              if (((0.0 < fVar13) && (0.0 <= fVar12)) && (fVar12 <= fVar14)) {
                fVar13 = (fVar14 - fVar12) / fVar13;
                if (1.0 <= fVar13) {
                  fVar13 = 1.0;
                }
                if (0.0 <= fVar13) {
                  bVar3 = true;
                  fVar15 = fVar15 + (fVar11 - fVar10) * fVar13 + fVar10;
                }
              }
            }
          }
        }
      }
      local_b8 = local_b8 + 1;
    }
    if (bVar2) {
      if (!bVar3) {
        pfVar5 = (float *)FUN_142caac20(param_1 + 0x68,&local_c0,param_3);
        cVar4 = *(char *)(pfVar5 + 2);
        if ((cVar4 == '\0') || (cVar4 == '\x02')) {
          fVar15 = *pfVar5;
        }
        else if (cVar4 == '\x01') {
          fVar15 = (float)FUN_142c49730(pfVar5);
        }
        else {
          fVar15 = 0.0;
        }
      }
    }
    else {
      pfVar5 = (float *)FUN_142caac20(param_1 + 0xa0,&local_c0,param_3);
      cVar4 = *(char *)(pfVar5 + 2);
      if (cVar4 == '\0') {
        fVar15 = *pfVar5;
      }
      else if (cVar4 == '\x02') {
        fVar15 = *pfVar5;
      }
      else if (cVar4 == '\x01') {
        fVar15 = (float)FUN_142c49730(pfVar5);
      }
      else {
        fVar15 = 0.0;
      }
    }
    *(undefined1 *)(param_2 + 2) = 0xff;
    FUN_140a393e0(param_2);
    *param_2 = fVar15;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return param_2;
}



// FUNCTION 142cc39c0 FUN_142cc39c0 body=163 status=ok
// SIG undefined FUN_142cc39c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142cc39c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  FUN_142caac20(param_1 + 0x28);
  FUN_142caac20(param_1 + 0x68,local_38,param_3);
  cVar1 = *(char *)(param_1 + 0x60);
  if (cVar1 == '\0') {
    FUN_142cb5680(param_2,local_38);
  }
  else if (cVar1 == '\x01') {
    FUN_142cb5800(param_2,local_38);
  }
  else if (cVar1 == '\x02') {
    FUN_142cb5500(param_2,local_38);
  }
  else if (cVar1 == '\x03') {
    FUN_142cb5990(param_2,local_38);
  }
  return param_2;
}



// FUNCTION 142cc3a70 FUN_142cc3a70 body=403 status=ok
// SIG undefined FUN_142cc3a70(void)

undefined8 FUN_142cc3a70(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res10;
  
  local_res10 = 0;
  if ((((param_2 != 0) && (cVar1 = FUN_142ccd9e0(), cVar1 != '\0')) &&
      (lVar3 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10), lVar6 = local_res10
      , lVar3 != 0)) && (local_res10 != 0)) {
    lVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = FUN_1428dfc70();
      for (lVar4 = *(longlong *)(lVar6 + 0x30); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar5) goto LAB_142cc3b50;
      }
      lVar4 = FUN_1428dfc70();
      if (lVar4 != 0) {
        do {
          if (lVar4 == *(longlong *)(lVar6 + 0x30)) goto LAB_142cc3b50;
          lVar4 = *(longlong *)(lVar4 + 0x30);
        } while (lVar4 != 0);
      }
    }
    else {
      lVar4 = FUN_142dfd5b0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar6 = FUN_142dd0030(lVar3);
        *param_3 = lVar6;
        return 1;
      }
    }
  }
  return 0;
LAB_142cc3b50:
  lVar6 = UBlackboardKeyType_Object::GetValue(lVar6,lVar3);
  if (lVar6 != 0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142cc3b97;
  }
  lVar6 = 0;
LAB_142cc3b97:
  *param_3 = lVar6;
  return 1;
}



// FUNCTION 142cc3c10 FUN_142cc3c10 body=570 status=ok
// SIG undefined FUN_142cc3c10(void)

undefined8 FUN_142cc3c10(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float extraout_XMM0_Da;
  longlong local_res10;
  
  local_res10 = 0;
  if ((((param_2 != (longlong *)0x0) && (cVar1 = FUN_142ccd9e0(), cVar1 != '\0')) &&
      (lVar5 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10), lVar7 = local_res10
      , lVar5 != 0)) && (local_res10 != 0)) {
    lVar6 = UBlackboardKeyType_Bool::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar1 = UBlackboardKeyType_Bool::GetValue(lVar7,lVar5);
      *param_3 = cVar1 != '\0';
      return 1;
    }
    lVar6 = UBlackboardKeyType_Int::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar4 = FUN_141776080(lVar7,lVar5);
      *param_3 = iVar4 != 0;
      return 1;
    }
    lVar6 = UBlackboardKeyType_Float::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_142bbf1b0(lVar7,lVar5);
      *param_3 = 0.5 <= ABS(extraout_XMM0_Da);
      return 1;
    }
    lVar6 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar7 = UBlackboardKeyType_Object::GetValue(lVar7,lVar5);
      *param_3 = lVar7 != 0;
      return 1;
    }
    lVar6 = FUN_142dfd690();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar7 = (**(code **)(*param_2 + 0x148))(param_2);
      if (lVar7 != 0) {
        uVar3 = FUN_142d3d1b0(lVar5,*(undefined4 *)(lVar7 + 0x8c8));
        *param_3 = uVar3;
        return 1;
      }
      uVar3 = FUN_142d3d1b0(lVar5,0);
      *param_3 = uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cc3e50 FUN_142cc3e50 body=193 status=ok
// SIG undefined FUN_142cc3e50(void)

undefined8 FUN_142cc3e50(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_res10;
  
  local_res10 = 0;
  if (param_2 != 0) {
    cVar4 = FUN_142ccd9e0();
    if (cVar4 != '\0') {
      lVar5 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10);
      lVar3 = local_res10;
      if ((lVar5 != 0) && (local_res10 != 0)) {
        lVar6 = UBlackboardKeyType_Class::GetPrivateStaticClass();
        lVar1 = *(longlong *)(lVar3 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uVar7 = UEnvQueryItemType_Actor::GetActor(lVar3,lVar5);
          *param_3 = uVar7;
          return 1;
        }
      }
    }
  }
  *param_3 = 0;
  return 0;
}



// FUNCTION 142cc3f20 FUN_142cc3f20 body=271 status=ok
// SIG undefined FUN_142cc3f20(void)

ulonglong FUN_142cc3f20(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  bool bVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint7 uVar7;
  longlong local_res10;
  
  local_res10 = 0;
  if ((((param_2 != 0) && (in_RAX = FUN_142ccd9e0(), (char)in_RAX != '\0')) &&
      (uVar3 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10), lVar6 = local_res10
      , in_RAX = uVar3, uVar3 != 0)) && (local_res10 != 0)) {
    uVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    lVar5 = uVar4 + 0x88;
    piVar1 = (int *)(uVar4 + 0x90);
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *piVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar6 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)*piVar1 * 8) != lVar5)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      in_RAX = FUN_1429ff160();
      for (uVar4 = *(ulonglong *)(lVar6 + 0x30); uVar4 != 0; uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
        if (uVar4 == in_RAX) {
          lVar5 = UBlackboardKeyType_Object::GetValue(lVar6,uVar3);
          lVar6 = 0;
          if (lVar5 != 0) {
            lVar6 = FUN_1429ff160();
            uVar7 = (uint7)((ulonglong)(lVar6 + 0x88) >> 8);
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              lVar6 = (ulonglong)uVar7 << 8;
              bVar2 = false;
            }
            else {
              lVar6 = CONCAT71(uVar7,1);
              bVar2 = true;
            }
            if (bVar2) goto LAB_142cc401a;
          }
          lVar5 = 0;
LAB_142cc401a:
          *param_3 = lVar5;
          return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142cc4030 FUN_142cc4030 body=191 status=ok
// SIG undefined FUN_142cc4030(void)

undefined8 FUN_142cc4030(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res10;
  
  local_res10 = 0;
  if (param_2 != 0) {
    cVar4 = FUN_142ccd9e0();
    if (cVar4 != '\0') {
      lVar6 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10);
      lVar3 = local_res10;
      if ((lVar6 != 0) && (local_res10 != 0)) {
        lVar7 = UBlackboardKeyType_Enum::GetPrivateStaticClass();
        lVar1 = *(longlong *)(lVar3 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uVar5 = TProperty_Numeric<unsigned_char>::GetSignedIntPropertyValue(lVar3,lVar6);
          *param_3 = uVar5;
          return 1;
        }
      }
    }
  }
  *param_3 = 0;
  return 0;
}



// FUNCTION 142cc40f0 FUN_142cc40f0 body=600 status=ok
// SIG undefined FUN_142cc40f0(void)

undefined8 FUN_142cc40f0(longlong param_1,longlong *param_2,float *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float extraout_XMM0_Da;
  undefined4 uVar7;
  float fVar8;
  longlong local_res10;
  
  local_res10 = 0;
  if ((((param_2 == (longlong *)0x0) || (cVar1 = FUN_142ccd9e0(), cVar1 == '\0')) ||
      (lVar4 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10), lVar6 = local_res10
      , lVar4 == 0)) || (local_res10 == 0)) {
    return 0;
  }
  lVar5 = UBlackboardKeyType_Float::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    lVar5 = UBlackboardKeyType_Int::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar3 = FUN_141776080(lVar6,lVar4);
      *param_3 = (float)iVar3;
      return 1;
    }
    lVar5 = UBlackboardKeyType_Bool::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar1 = UBlackboardKeyType_Bool::GetValue(lVar6,lVar4);
      if (cVar1 != '\0') {
        *param_3 = 1.0;
        return 1;
      }
    }
    else {
      lVar5 = UBlackboardKeyType_Object::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        lVar5 = FUN_142dfd690();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          return 0;
        }
        lVar6 = (**(code **)(*param_2 + 0x148))(param_2);
        fVar8 = 0.0;
        if (lVar6 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(lVar6 + 0x8c8);
        }
        cVar1 = FUN_142d3d1b0(lVar4,uVar7);
        if (cVar1 != '\0') {
          fVar8 = 1.0;
        }
        *param_3 = fVar8;
        return 1;
      }
      lVar6 = UBlackboardKeyType_Object::GetValue(lVar6,lVar4);
      if (lVar6 != 0) {
        *param_3 = 1.0;
        return 1;
      }
    }
    *param_3 = 0.0;
    return 1;
  }
  FUN_142bbf1b0(lVar6,lVar4);
  *param_3 = extraout_XMM0_Da;
  return 1;
}



// FUNCTION 142cc4350 FUN_142cc4350 body=29 status=ok
// SIG undefined FUN_142cc4350(void)

ulonglong FUN_142cc4350(float *param_1,ulonglong param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *(char *)(param_1 + 2);
  if ((cVar2 == '\0') || (cVar2 == '\x02')) {
    return (ulonglong)(uint)*param_1;
  }
  if (cVar2 != '\x01') {
    return param_2;
  }
  fVar1 = param_1[1];
  if (ABS(fVar1) <= 1e-08) {
    return (ulonglong)(uint)*param_1;
  }
  iVar3 = rand();
  return (ulonglong)(uint)(((float)iVar3 * fVar1 * 6.103702e-05 - fVar1) + *param_1);
}



// FUNCTION 142cc4370 FUN_142cc4370 body=557 status=ok
// SIG undefined FUN_142cc4370(void)

undefined8 FUN_142cc4370(longlong param_1,longlong *param_2,uint *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined4 uVar8;
  longlong local_res10;
  
  local_res10 = 0;
  if ((((param_2 != (longlong *)0x0) && (cVar1 = FUN_142ccd9e0(), cVar1 != '\0')) &&
      (lVar4 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10), lVar6 = local_res10
      , lVar4 != 0)) && (local_res10 != 0)) {
    lVar5 = UBlackboardKeyType_Int::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar3 = FUN_141776080(lVar6,lVar4);
      *param_3 = uVar3;
      return 1;
    }
    lVar5 = UBlackboardKeyType_Float::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      fVar7 = (float)FUN_142bbf1b0(lVar6,lVar4);
      *param_3 = (int)ROUND(fVar7 * 2.0 + 0.5) >> 1;
      return 1;
    }
    lVar5 = UBlackboardKeyType_Bool::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar1 = UBlackboardKeyType_Bool::GetValue(lVar6,lVar4);
      *param_3 = (uint)(cVar1 != '\0');
      return 1;
    }
    lVar5 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = UBlackboardKeyType_Object::GetValue(lVar6,lVar4);
      *param_3 = (uint)(lVar6 != 0);
      return 1;
    }
    lVar5 = FUN_142dfd690();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = (**(code **)(*param_2 + 0x148))(param_2);
      if (lVar6 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(lVar6 + 0x8c8);
      }
      cVar1 = FUN_142d3d1b0(lVar4,uVar8);
      *param_3 = (uint)(cVar1 != '\0');
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cc45a0 FUN_142cc45a0 body=63 status=ok
// SIG undefined FUN_142cc45a0(void)

int FUN_142cc45a0(float *param_1,int param_2)

{
  char cVar1;
  float fVar2;
  
  cVar1 = *(char *)(param_1 + 2);
  if ((cVar1 != '\0') && (cVar1 != '\x02')) {
    if (cVar1 == '\x01') {
      fVar2 = (float)FUN_142c49730();
      return (int)fVar2;
    }
    return (int)(float)param_2;
  }
  return (int)*param_1;
}



// FUNCTION 142cc45e0 FUN_142cc45e0 body=906 status=ok
// SIG undefined FUN_142cc45e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_142cc45e0(longlong param_1,longlong param_2,float *param_3,longlong *param_4,undefined1 *param_5
             )

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_408 [32];
  longlong *local_3e8;
  float local_3e0;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  *(ulonglong *)param_3 = CONCAT44(DAT_1466ad120._4_4_,(float)DAT_1466ad120);
  param_3[2] = DAT_1466ad128;
  *param_4 = 0;
  *param_5 = 1;
  if (param_2 == 0) {
    return 0;
  }
  FUN_142dc1ad0(local_3d8);
  cVar4 = FUN_142cc5430(param_1,param_2,local_3d8);
  if (cVar4 == '\0') {
    local_3e8 = (longlong *)0x0;
    cVar4 = FUN_142ccd9e0(param_1,param_2);
    if (((cVar4 != '\0') &&
        (lVar7 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_3e8), plVar3 = local_3e8,
        lVar7 != 0)) && (local_3e8 != (longlong *)0x0)) {
      lVar8 = UBlackboardKeyType_Object::GetPrivateStaticClass();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar9 = FUN_1429ff160();
        for (lVar8 = plVar3[6]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
          if (lVar8 == lVar9) {
            lVar7 = UBlackboardKeyType_Object::GetValue(plVar3,lVar7);
            if (lVar7 != 0) {
              lVar8 = FUN_1429ff160();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                fVar1 = *(float *)(lVar7 + 0x224);
                fVar2 = *(float *)(lVar7 + 0x228);
                *param_3 = *(float *)(lVar7 + 0x220);
                param_3[1] = fVar1;
                param_3[2] = fVar2;
                *param_4 = *(longlong *)(lVar7 + 0x118);
              }
            }
            goto LAB_142cc48e7;
          }
        }
      }
    }
    cVar4 = FUN_142cc3a70(param_1,param_2,param_4);
    if (cVar4 == '\0') {
      local_3e8 = (longlong *)0x0;
      cVar4 = FUN_142ccd9e0(param_1,param_2);
      if ((cVar4 != '\0') &&
         (lVar7 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_3e8), plVar3 = local_3e8
         , lVar7 != 0)) {
        if (local_3e8 != (longlong *)0x0) {
          lVar8 = UBlackboardKeyType_Object::GetPrivateStaticClass();
          if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            puVar6 = (undefined8 *)UBlackboardKeyType_Rotator::GetValue(&local_3e8,plVar3,lVar7);
            *(undefined8 *)param_3 = *puVar6;
            param_3[2] = *(float *)(puVar6 + 1);
            goto LAB_142cc48e7;
          }
        }
        (**(code **)(*plVar3 + 0x2c0))(plVar3,param_2,lVar7,param_3);
      }
    }
    else if (*param_4 != 0) {
      lVar7 = *(longlong *)(*param_4 + 0x168);
      if (lVar7 == 0) {
        local_3e8 = _DAT_1468b5d90;
        local_3e0 = DAT_1468b5d98;
      }
      else {
        local_3e8 = *(longlong **)(lVar7 + 0x220);
        local_3e0 = *(float *)(lVar7 + 0x228);
      }
      *(longlong **)param_3 = local_3e8;
      param_3[2] = local_3e0;
    }
  }
  else {
    puVar6 = (undefined8 *)FUN_142dcd3a0(local_3d8,&local_3e8,param_5);
    *(undefined8 *)param_3 = *puVar6;
    param_3[2] = *(float *)(puVar6 + 1);
    lVar7 = FUN_142dd0030(local_3d8);
    *param_4 = lVar7;
  }
LAB_142cc48e7:
  if (((((-(float)DAT_1466ad120 < *param_3) && (*param_3 < (float)DAT_1466ad120)) &&
       (-DAT_1466ad120._4_4_ < param_3[1])) &&
      ((param_3[1] < DAT_1466ad120._4_4_ && (-DAT_1466ad128 < param_3[2])))) &&
     (param_3[2] < DAT_1466ad128)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142cc4970 FUN_142cc4970 body=340 status=ok
// SIG undefined FUN_142cc4970(void)

undefined8 FUN_142cc4970(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong local_res10;
  
  local_res10 = 0;
  if (param_2 != 0) {
    cVar1 = FUN_142ccd9e0();
    if (cVar1 != '\0') {
      lVar3 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10);
      lVar6 = local_res10;
      if ((lVar3 != 0) && (local_res10 != 0)) {
        lVar4 = FUN_142c35df0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          puVar5 = (undefined8 *)UBlackboardKeyType_Name::GetValue(&local_res10,lVar6,lVar3);
          *param_3 = *puVar5;
          return 1;
        }
        lVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = UBlackboardKeyType_Object::GetValue(lVar6,lVar3);
          if (lVar6 != 0) {
            *param_3 = *(undefined8 *)(lVar6 + 0x18);
            return 1;
          }
          *param_3 = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142cc4ad0 FUN_142cc4ad0 body=111 status=ok
// SIG undefined FUN_142cc4ad0(void)

undefined8 * FUN_142cc4ad0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x01') {
    *param_2 = *param_1;
    return param_2;
  }
  if (cVar1 != -1) {
    if ((cVar1 != '\0') && (cVar1 != '\x02')) {
      FUN_142c48df0(param_2,0,0);
      return param_2;
    }
    FUN_142c48df0(param_2,0,*(undefined4 *)param_1);
    return param_2;
  }
  *param_2 = *param_3;
  return param_2;
}



// FUNCTION 142cc4b40 FUN_142cc4b40 body=285 status=ok
// SIG undefined FUN_142cc4b40(void)

undefined8 FUN_142cc4b40(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_res10;
  
  local_res10 = 0;
  if (param_2 != 0) {
    cVar2 = FUN_142ccd9e0();
    if (cVar2 != '\0') {
      lVar4 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10);
      lVar1 = local_res10;
      if ((lVar4 != 0) && (local_res10 != 0)) {
        lVar5 = UBlackboardKeyType_Object::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          uVar6 = UBlackboardKeyType_Object::GetValue(lVar1,lVar4);
          *param_3 = uVar6;
          return 1;
        }
        lVar5 = FUN_142dfd5b0();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          uVar6 = FUN_142dd0030(lVar4);
          *param_3 = uVar6;
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142cc4c60 FUN_142cc4c60 body=230 status=ok
// SIG undefined FUN_142cc4c60(void)

ulonglong FUN_142cc4c60(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *local_res10;
  undefined1 local_18 [16];
  
  local_res10 = (longlong *)0x0;
  if ((param_2 != 0) && (in_RAX = FUN_142ccd9e0(), (char)in_RAX != '\0')) {
    lVar4 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10);
    plVar3 = local_res10;
    in_RAX = 0;
    if (lVar4 != 0) {
      if (local_res10 != (longlong *)0x0) {
        lVar5 = FUN_142c361d0();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          puVar6 = (undefined8 *)UBlackboardKeyType_Rotator::GetValue(local_18,plVar3,lVar4);
          *param_3 = *puVar6;
          uVar1 = *(undefined4 *)(puVar6 + 1);
          *(undefined4 *)(param_3 + 1) = uVar1;
          return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
        }
      }
      uVar7 = (**(code **)(*plVar3 + 0x2c8))(plVar3,param_2,lVar4,param_3);
      return uVar7;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142cc4d50 FUN_142cc4d50 body=1751 status=ok
// SIG undefined FUN_142cc4d50(void)

undefined8 FUN_142cc4d50(longlong param_1,longlong param_2,longlong *param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  void *pvVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  void *pvVar13;
  int iVar14;
  longlong local_res10;
  float local_a8;
  float local_a4;
  float local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  void *local_58;
  int local_50;
  void *local_48;
  int local_40;
  
  local_res10 = 0;
  if ((((param_2 == 0) || (cVar4 = FUN_142ccd9e0(), cVar4 == '\0')) ||
      (lVar8 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10),
      lVar11 = local_res10, lVar8 == 0)) || (local_res10 == 0)) {
    return 0;
  }
  lVar9 = FUN_142c36340();
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
      != lVar9 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    plVar10 = (longlong *)UBlackboardKeyType_String::GetValue(&local_48,lVar11,lVar8);
    if (param_3 != plVar10) {
      if (*param_3 != 0) {
        FMemory::Free();
      }
      *param_3 = *plVar10;
      *plVar10 = 0;
      *(int *)(param_3 + 1) = (int)plVar10[1];
      *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar10 + 0xc);
      plVar10[1] = 0;
    }
  }
  else {
    lVar9 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar11 = UBlackboardKeyType_Object::GetValue(lVar11,lVar8);
      if (lVar11 == 0) {
        local_98 = (void *)0x0;
        local_90 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        FGenericPlatformString::Memcpy(local_98,&DAT_143f3edc8,10);
      }
      else {
        local_res10 = *(longlong *)(lVar11 + 0x18);
        FName::ToString(&local_res10,&local_98);
      }
      FString::operator=(param_3,&local_98);
      local_48 = local_98;
    }
    else {
      lVar9 = UBlackboardKeyType_Object::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) {
        return 0;
      }
      UBlackboardKeyType_Rotator::GetValue(&local_a8,lVar11,lVar8);
      if (((0.0001 < ABS(local_a8)) || (0.0001 < ABS(local_a4))) || (0.0001 < ABS(local_a0))) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        FString::PrintfImpl(&local_78,L"V(0)");
      }
      else {
        local_98 = (void *)0x0;
        local_90 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        pvVar13 = local_98;
        FGenericPlatformString::Memcpy(local_98,&DAT_144063a8c,6);
        bVar5 = true;
        iVar12 = 0;
        if (1e-08 < ABS(local_a8)) {
          FString::PrintfImpl(&local_68,L"X=%.2f",(double)local_a8);
          pvVar3 = local_68;
          uVar2 = local_90;
          iVar14 = iVar12;
          if (local_60 != 0) {
            iVar14 = local_60 + -1;
          }
          if (iVar14 != 0) {
            iVar7 = (int)local_90;
            lVar11 = (longlong)(int)local_90;
            iVar6 = (uint)((int)local_90 == 0) + iVar14 + (int)local_90;
            local_90 = CONCAT44(local_90._4_4_,iVar6);
            if (local_90._4_4_ < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,uVar2 & 0xffffffff);
              pvVar13 = local_98;
            }
            pvVar1 = (void *)((longlong)pvVar13 + (lVar11 - (ulonglong)(iVar7 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar14 * 2);
            *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar1) = 0;
          }
          if (local_68 != (void *)0x0) {
            FMemory::Free(local_68);
          }
          bVar5 = false;
        }
        if (1e-08 < ABS(local_a4)) {
          if (!bVar5) {
            local_88 = (void *)0x0;
            local_80 = 3;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
            pvVar3 = local_88;
            FGenericPlatformString::Memcpy(local_88,&DAT_144063aa8,6);
            uVar2 = local_90;
            if (((int)local_80 != 0) && (iVar14 = (int)local_80 + -1, iVar14 != 0)) {
              iVar7 = (int)local_90;
              lVar11 = (longlong)(int)local_90;
              iVar6 = (uint)((int)local_90 == 0) + (int)local_90 + iVar14;
              local_90 = CONCAT44(local_90._4_4_,iVar6);
              if (local_90._4_4_ < iVar6) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,uVar2 & 0xffffffff);
                pvVar13 = local_98;
              }
              pvVar1 = (void *)((longlong)pvVar13 + (lVar11 - (ulonglong)(iVar7 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar14 * 2);
              *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar1) = 0;
            }
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
          }
          FString::PrintfImpl(&local_58,L"Y=%.2f",(double)local_a4);
          pvVar3 = local_58;
          uVar2 = local_90;
          iVar14 = iVar12;
          if (local_50 != 0) {
            iVar14 = local_50 + -1;
          }
          if (iVar14 != 0) {
            iVar7 = (int)local_90;
            lVar11 = (longlong)(int)local_90;
            iVar6 = (uint)((int)local_90 == 0) + (int)local_90 + iVar14;
            local_90 = CONCAT44(local_90._4_4_,iVar6);
            if (local_90._4_4_ < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,uVar2 & 0xffffffff);
              pvVar13 = local_98;
            }
            pvVar1 = (void *)((longlong)pvVar13 + (lVar11 - (ulonglong)(iVar7 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar14 * 2);
            *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar1) = 0;
          }
          if (local_58 != (void *)0x0) {
            FMemory::Free(local_58);
          }
          bVar5 = false;
        }
        if (1e-08 < ABS(local_a0)) {
          if (!bVar5) {
            local_88 = (void *)0x0;
            local_80 = 3;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
            pvVar3 = local_88;
            FGenericPlatformString::Memcpy(local_88,&DAT_144063aa8,6);
            uVar2 = local_90;
            if (((int)local_80 != 0) && (iVar14 = (int)local_80 + -1, iVar14 != 0)) {
              iVar7 = (int)local_90;
              lVar11 = (longlong)(int)local_90;
              iVar6 = (uint)((int)local_90 == 0) + iVar14 + (int)local_90;
              local_90 = CONCAT44(local_90._4_4_,iVar6);
              if (local_90._4_4_ < iVar6) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,uVar2 & 0xffffffff);
                pvVar13 = local_98;
              }
              pvVar1 = (void *)((longlong)pvVar13 + (lVar11 - (ulonglong)(iVar7 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar14 * 2);
              *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar1) = 0;
            }
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
          }
          FString::PrintfImpl(&local_48,L"Z=%.2f",(double)local_a0);
          pvVar3 = local_48;
          uVar2 = local_90;
          if (local_40 != 0) {
            iVar12 = local_40 + -1;
          }
          if (iVar12 != 0) {
            iVar14 = (int)local_90;
            lVar11 = (longlong)(int)local_90;
            iVar7 = (uint)((int)local_90 == 0) + (int)local_90 + iVar12;
            local_90 = CONCAT44(local_90._4_4_,iVar7);
            if (local_90._4_4_ < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,uVar2 & 0xffffffff);
              pvVar13 = local_98;
            }
            pvVar1 = (void *)((longlong)pvVar13 + (lVar11 - (ulonglong)(iVar14 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
            *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
          }
          if (local_48 != (void *)0x0) {
            FMemory::Free(local_48);
          }
        }
        local_88 = (void *)0x0;
        local_80 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        pvVar3 = local_88;
        FGenericPlatformString::Memcpy(local_88,&DAT_144063ad0,4);
        uVar2 = local_90;
        if (((int)local_80 != 0) && (iVar12 = (int)local_80 + -1, iVar12 != 0)) {
          iVar14 = (int)local_90;
          lVar11 = (longlong)(int)local_90;
          iVar7 = (uint)((int)local_90 == 0) + (int)local_90 + iVar12;
          local_90 = CONCAT44(local_90._4_4_,iVar7);
          if (local_90._4_4_ < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,uVar2 & 0xffffffff);
            pvVar13 = local_98;
          }
          pvVar1 = (void *)((longlong)pvVar13 + (lVar11 - (ulonglong)(iVar14 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar12 * 2);
          *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar1) = 0;
        }
        if (pvVar3 != (void *)0x0) {
          FMemory::Free(pvVar3);
        }
        local_70 = (int)local_90;
        local_6c = local_90._4_4_;
        local_78 = pvVar13;
      }
      FString::operator=(param_3,&local_78);
      local_48 = local_78;
    }
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142cc5430 FUN_142cc5430 body=179 status=ok
// SIG undefined FUN_142cc5430(void)

undefined8 FUN_142cc5430(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_res10;
  
  local_res10 = 0;
  if (param_2 != 0) {
    cVar3 = FUN_142ccd9e0();
    if (cVar3 != '\0') {
      puVar4 = (undefined *)FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10);
      lVar2 = local_res10;
      if ((puVar4 != (undefined *)0x0) && (local_res10 != 0)) {
        lVar5 = FUN_142dfd5b0();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar6 = 1;
          goto LAB_142cc54c5;
        }
      }
    }
  }
  uVar6 = 0;
  puVar4 = &DAT_146b30fb0;
LAB_142cc54c5:
  FUN_142cb3d70(param_3,puVar4);
  return uVar6;
}



// FUNCTION 142cc54f0 FUN_142cc54f0 body=322 status=ok
// SIG undefined FUN_142cc54f0(void)

ulonglong FUN_142cc54f0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *local_res10;
  undefined1 local_28 [12];
  undefined1 local_1c [20];
  
  local_res10 = (longlong *)0x0;
  if ((param_2 != 0) && (in_RAX = FUN_142ccd9e0(), (char)in_RAX != '\0')) {
    lVar4 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10);
    plVar3 = local_res10;
    in_RAX = 0;
    if (lVar4 != 0) {
      if (local_res10 != (longlong *)0x0) {
        lVar5 = UBlackboardKeyType_Object::GetPrivateStaticClass();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          puVar6 = (undefined8 *)UBlackboardKeyType_Rotator::GetValue(local_28,plVar3,lVar4);
        }
        else {
          lVar5 = FUN_142c361d0();
          if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_142cc5604;
          uVar7 = UBlackboardKeyType_Rotator::GetValue(local_28,plVar3,lVar4);
          puVar6 = (undefined8 *)FRotator::Vector(uVar7,local_1c);
        }
        *param_3 = *puVar6;
        uVar1 = *(undefined4 *)(puVar6 + 1);
        *(undefined4 *)(param_3 + 1) = uVar1;
        return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      }
LAB_142cc5604:
      uVar8 = (**(code **)(*plVar3 + 0x2c0))(plVar3,param_2,lVar4,param_3);
      return uVar8;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142cc5660 FUN_142cc5660 body=147 status=ok
// SIG undefined FUN_142cc5660(void)

float * FUN_142cc5660(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_18 [16];
  
  cVar3 = FUN_142314560(*(undefined8 *)(param_1 + 0x10));
  if (cVar3 != '\0') {
    FUN_142311f90(*(undefined8 *)(param_1 + 0x10),0,&local_28,local_18);
    fVar1 = *(float *)(param_1 + 8);
    *param_2 = local_28 + *(float *)(param_1 + 4);
    fVar2 = *(float *)(param_1 + 0xc);
    param_2[1] = local_24 + fVar1;
    param_2[2] = local_20 + fVar2;
    return param_2;
  }
  fVar1 = *(float *)(param_1 + 0xc);
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 4);
  param_2[2] = fVar1;
  return param_2;
}



// FUNCTION 142cc5700 FUN_142cc5700 body=594 status=ok
// SIG undefined FUN_142cc5700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cc5700(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar1 = FUN_1423407b0(), lVar1 != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
    if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x540), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x6f8))(plVar2,param_1);
      return;
    }
  }
  local_a8 = 0;
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar1 = FUN_1423407b0(param_1), lVar1 != 0)) {
    local_a0 = FUN_142cc5700;
    lVar1 = *(longlong *)(param_1 + 0x120);
    uStack_98 = 0;
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_a0;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_a0._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_98;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_94;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar1;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,&local_a8,&local_88,0x3dcccccd);
    if (local_28 != 0) {
      plVar4 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar4 = local_38;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 142cc5960 FUN_142cc5960 body=59 status=ok
// SIG undefined FUN_142cc5960(void)

undefined4 FUN_142cc5960(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_14233f450();
    if ((iVar1 == 3) ||
       (((iVar1 == 2 && (param_2 != 0)) && ((*(uint *)(param_2 + 0x2c) & 0x800) != 0)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cc59a0 FUN_142cc59a0 body=896 status=ok
// SIG undefined FUN_142cc59a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142cc59a0(ulonglong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res8 [2];
  float local_res10 [2];
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  float local_130;
  undefined4 local_128;
  float local_124;
  float local_120;
  undefined1 local_118 [12];
  float local_10c;
  float local_fc;
  float local_e4;
  
  plVar1 = *(longlong **)(*param_1 + 0xfd8);
  uVar5 = (**(code **)(*plVar1 + 0x148))(plVar1);
  local_res8[0] = 0.0;
  local_res10[0] = 0.0;
  (**(code **)(*plVar1 + 0x578))(plVar1,local_res8,local_res10);
  local_120 = local_res10[0];
  local_124 = local_res8[0];
  lVar2 = plVar1[0x2d];
  if (lVar2 == 0) {
    local_148 = _DAT_1468b5d90;
    local_140 = DAT_1468b5d98;
  }
  else {
    local_148 = *(undefined8 *)(lVar2 + 0x220);
    local_140 = *(float *)(lVar2 + 0x228);
  }
  fVar4 = local_140;
  uVar3 = local_148;
  local_138 = local_148;
  local_138._0_4_ = (float)local_148;
  local_138._0_4_ = *(float *)((longlong)param_1 + 0x9c) - (float)local_138;
  local_138._4_4_ = (float)((ulonglong)local_148 >> 0x20);
  local_130 = local_140;
  uVar6 = param_1[1];
  fVar9 = *(float *)((longlong)param_1 + 0xa4) - local_140;
  fVar7 = local_res8[0] + *(float *)(uVar6 + 0x4c4);
  fVar8 = local_res10[0] + *(float *)(uVar6 + 0x4c8);
  if ((*(float *)(param_1 + 0x14) - local_138._4_4_) *
      (*(float *)(param_1 + 0x14) - local_138._4_4_) + (float)local_138 * (float)local_138 <=
      fVar7 * fVar7) {
    uVar6 = 0;
    if (ABS(fVar9) <= fVar8) {
LAB_142cc5ce4:
      return CONCAT71((int7)(uVar6 >> 8),1);
    }
    uVar6 = 0;
    if (ABS(fVar9) <= fVar8 + fVar8) {
      local_138 = uVar3;
      _guard_xfg_dispatch_icall_nop(local_118,0,0x90);
      local_10c = 1.0;
      local_148 = uVar3;
      if ((0.0 <= fVar9) || (local_124 <= local_120)) {
        local_140 = fVar4 - local_120;
        local_128 = 3;
        uVar6 = UWorld::SweepSingleByChannel
                          (uVar5,local_118,&local_138,&local_148,&DAT_1464aa810,0,&local_128,
                           &DAT_146aefe90,&DAT_146aefe68);
        if ((0.95 <= local_e4) || (uVar6 = *param_1, local_e4 < *(float *)(uVar6 + 0x244)))
        goto LAB_142cc5ce8;
      }
      else {
        local_124 = local_120;
        local_140 = fVar4 - local_120;
        local_128 = 3;
        uVar5 = UWorld::SweepSingleByChannel
                          (uVar5,local_118,&local_138,&local_148,&DAT_1464aa810,0,&local_128,
                           &DAT_146aefe90,&DAT_146aefe68);
        fVar9 = *(float *)((longlong)param_1 + 0xa4) - local_fc;
        uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),local_10c < 1.0);
        if (local_10c >= 1.0) goto LAB_142cc5ce8;
      }
      if ((fVar9 < 0.0) &&
         (-fVar9 < SQRT(1.0 / (local_e4 * local_e4) - 1.0) * local_res8[0] + local_res10[0]))
      goto LAB_142cc5ce4;
    }
  }
LAB_142cc5ce8:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 142cc5d20 FUN_142cc5d20 body=51 status=ok
// SIG undefined FUN_142cc5d20(void)

undefined8 FUN_142cc5d20(longlong param_1,byte param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (*(char *)(param_1 + 0x108) == '\0') {
    return CONCAT71((int7)(uVar1 * 0x3c >> 8),*(char *)(uVar1 * 0x3c + 0x54 + param_1) != '\0');
  }
  if ((*(char *)(param_1 + 0x109 + uVar1 * 2) == -1) &&
     (*(char *)(param_1 + 0x10a + uVar1 * 2) == -1)) {
    return 0;
  }
  return 1;
}



// FUNCTION 142cc5d60 FUN_142cc5d60 body=65 status=ok
// SIG undefined FUN_142cc5d60(void)

undefined1 FUN_142cc5d60(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_2 != 0) {
    cVar1 = FUN_142ccd9e0();
    if (cVar1 != '\0') {
      uVar2 = FUN_142bbfcf0(param_2,*(undefined1 *)(param_1 + 9));
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142cc5db0 FUN_142cc5db0 body=31 status=ok
// SIG undefined FUN_142cc5db0(void)

undefined8 FUN_142cc5db0(longlong *param_1,longlong *param_2)

{
  if ((param_2 != (longlong *)0x0) &&
     ((((char)param_1[1] != '\0' && ((char)param_2[1] != '\0')) || (*param_1 == *param_2)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142cc5dd0 FUN_142cc5dd0 body=1961 status=ok
// SIG undefined FUN_142cc5dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc5dd0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
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
  undefined1 auStack_198 [32];
  undefined4 local_178;
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
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  FUN_14224ffa0(&local_118,param_1[0x33],param_1[0x35],0);
  uVar4 = FUN_14224ffa0(&local_e8,param_1[0x34],param_1[0x35],0);
  fVar32 = fRam0000000146b30e98;
  fVar26 = fRam0000000146b30e94;
  fVar24 = _DAT_146b30e90;
  fVar28 = local_c8._0_4_;
  fVar29 = local_c8._4_4_;
  fVar30 = local_c8._8_4_;
  fVar31 = local_c8._12_4_;
  auVar12._4_4_ = -(uint)(fRam0000000146b31354 < (float)((uint)fVar29 & uRam0000000146b30f34));
  auVar12._0_4_ = -(uint)(_DAT_146b31350 < (float)((uint)fVar28 & _DAT_146b30f30));
  auVar12._8_4_ = -(uint)(fRam0000000146b31358 < (float)((uint)fVar30 & uRam0000000146b30f38));
  auVar12._12_4_ = -(uint)(fRam0000000146b3135c < (float)((uint)fVar31 & uRam0000000146b30f3c));
  iVar5 = movmskps(uVar4,auVar12);
  fVar33 = _DAT_1468b5b70;
  fVar35 = fRam00000001468b5b74;
  fVar37 = fRam00000001468b5b78;
  fVar39 = fRam00000001468b5b7c;
  fVar11 = _DAT_1468b5b90;
  fVar13 = fRam00000001468b5b94;
  fVar15 = fRam00000001468b5b98;
  fVar17 = fRam00000001468b5b9c;
  fVar43 = _DAT_1468b5b80;
  fVar44 = fRam00000001468b5b84;
  fVar45 = fRam00000001468b5b88;
  fVar14 = fRam00000001468b5b8c;
  if (iVar5 != 0) {
    fVar33 = local_e8 * _DAT_146b31360;
    fVar35 = fStack_e4 * fRam0000000146b31364;
    fVar37 = fStack_e0 * fRam0000000146b31368;
    fVar39 = fStack_dc * fRam0000000146b3136c;
    auVar12 = rcpps(in_XMM2,local_c8);
    fVar11 = auVar12._0_4_;
    fVar13 = auVar12._4_4_;
    fVar15 = auVar12._8_4_;
    fVar17 = auVar12._12_4_;
    fVar11 = (fVar11 + fVar11) - fVar28 * fVar11 * fVar11;
    fVar13 = (fVar13 + fVar13) - fVar29 * fVar13 * fVar13;
    fVar15 = (fVar15 + fVar15) - fVar30 * fVar15 * fVar15;
    fVar17 = (fVar17 + fVar17) - fVar31 * fVar17 * fVar17;
    fVar11 = (fVar11 + fVar11) - fVar28 * fVar11 * fVar11;
    fVar13 = (fVar13 + fVar13) - fVar29 * fVar13 * fVar13;
    fVar15 = (fVar15 + fVar15) - fVar30 * fVar15 * fVar15;
    fVar17 = (fVar17 + fVar17) - fVar31 * fVar17 * fVar17;
    fVar11 = (float)(((uint)fVar11 &
                      -(uint)((float)((uint)fVar28 & _DAT_146b30f30) <= _DAT_146b31350) ^
                     (uint)fVar11) & _DAT_146b30ea0);
    fVar13 = (float)(((uint)fVar13 &
                      -(uint)((float)((uint)fVar29 & uRam0000000146b30f34) <= fRam0000000146b31354)
                     ^ (uint)fVar13) & uRam0000000146b30ea4);
    fVar15 = (float)(((uint)fVar15 &
                      -(uint)((float)((uint)fVar30 & uRam0000000146b30f38) <= fRam0000000146b31358)
                     ^ (uint)fVar15) & uRam0000000146b30ea8);
    fVar17 = (float)(((uint)fVar17 &
                      -(uint)((float)((uint)fVar31 & uRam0000000146b30f3c) <= fRam0000000146b3135c)
                     ^ (uint)fVar17) & uRam0000000146b30eac);
    local_d8 = local_d8 * fVar11;
    fStack_d4 = fStack_d4 * fVar13;
    fStack_d0 = fStack_d0 * fVar15;
    fStack_cc = fStack_cc * fVar17;
    fVar28 = fStack_d0 * fVar35 - fStack_d4 * fVar37;
    fVar29 = local_d8 * fVar37 - fStack_d0 * fVar33;
    fVar30 = fStack_d4 * fVar33 - local_d8 * fVar35;
    fVar31 = fStack_cc * fVar39 - fStack_cc * fVar39;
    fVar28 = fVar28 + fVar28;
    fVar29 = fVar29 + fVar29;
    fVar30 = fVar30 + fVar30;
    fVar31 = fVar31 + fVar31;
    fVar43 = (float)((uint)(0.0 - ((fVar30 * fVar35 - fVar29 * fVar37) + fVar28 * fVar39 + local_d8)
                           ) & _DAT_146b30ea0);
    fVar44 = (float)((uint)(0.0 - ((fVar28 * fVar37 - fVar30 * fVar33) + fVar29 * fVar39 + fStack_d4
                                  )) & uRam0000000146b30ea4);
    fVar45 = (float)((uint)(0.0 - ((fVar29 * fVar33 - fVar28 * fVar35) + fVar30 * fVar39 + fStack_d0
                                  )) & uRam0000000146b30ea8);
    fVar14 = (float)((uint)(0.0 - ((fVar31 * fVar39 - fVar31 * fVar39) + fVar31 * fVar39 + fStack_cc
                                  )) & uRam0000000146b30eac);
  }
  fVar28 = local_f8._0_4_;
  fVar29 = local_f8._4_4_;
  fVar30 = local_f8._8_4_;
  auVar2._4_4_ = fVar13;
  auVar2._0_4_ = fVar11;
  auVar2._8_4_ = fVar15;
  auVar2._12_4_ = fVar17;
  auVar12 = minps(local_f8,auVar2);
  auVar8._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146b30ef4);
  auVar8._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146b30ef0);
  auVar8._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146b30ef8);
  auVar8._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146b30efc);
  iVar5 = movmskps(iVar5,auVar8);
  if (iVar5 == 0) {
    fVar31 = local_108 * fVar11;
    fVar24 = fStack_104 * fVar13;
    fVar26 = fStack_100 * fVar15;
    fStack_fc = fStack_fc * fVar17;
    fVar20 = fVar37 * fStack_114 * _DAT_146b30eb0 +
             local_118 * fVar39 + fVar33 * fStack_10c * _DAT_146b30ed0 +
             fVar35 * fStack_110 * _DAT_146b30ec0;
    fVar21 = fVar37 * local_118 * fRam0000000146b30eb4 +
             fStack_114 * fVar39 + fVar33 * fStack_110 * fRam0000000146b30ed4 +
             fVar35 * fStack_10c * fRam0000000146b30ec4;
    fVar22 = fVar37 * fStack_10c * fRam0000000146b30eb8 +
             fStack_110 * fVar39 + fVar33 * fStack_114 * fRam0000000146b30ed8 +
             fVar35 * local_118 * fRam0000000146b30ec8;
    fVar23 = fVar37 * fStack_110 * fRam0000000146b30ebc +
             fStack_10c * fVar39 + fVar33 * local_118 * fRam0000000146b30edc +
             fVar35 * fStack_114 * fRam0000000146b30ecc;
    fVar32 = fVar26 * fVar35 - fVar24 * fVar37;
    fVar16 = fVar31 * fVar37 - fVar26 * fVar33;
    fVar18 = fVar24 * fVar33 - fVar31 * fVar35;
    fVar19 = fStack_fc * fVar39 - fStack_fc * fVar39;
    fVar32 = fVar32 + fVar32;
    fVar16 = fVar16 + fVar16;
    fVar18 = fVar18 + fVar18;
    fVar19 = fVar19 + fVar19;
    fVar43 = fVar43 + (fVar18 * fVar35 - fVar16 * fVar37) + fVar32 * fVar39 + fVar31;
    fVar44 = fVar44 + (fVar32 * fVar37 - fVar18 * fVar33) + fVar16 * fVar39 + fVar24;
    fVar45 = fVar45 + (fVar16 * fVar33 - fVar32 * fVar35) + fVar18 * fVar39 + fVar26;
    fVar14 = fVar14 + (fVar19 * fVar39 - fVar19 * fVar39) + fVar19 * fVar39 + fStack_fc;
  }
  else {
    fVar14 = fVar35 + fVar35;
    fVar16 = fVar37 + fVar37;
    fVar31 = fVar33 * (fVar33 + fVar33);
    fVar18 = (float)((uint)(fVar11 * (_DAT_146b30e90 - (fVar37 * fVar16 + fVar35 * fVar14))) &
                    _DAT_146b30ea0);
    fVar19 = (float)((uint)(fVar13 * (fRam0000000146b30e94 - (fVar37 * fVar16 + fVar31))) &
                    uRam0000000146b30ea4);
    fVar20 = (float)((uint)(fVar15 * (fRam0000000146b30e98 - (fVar35 * fVar14 + fVar31))) &
                    uRam0000000146b30ea8);
    fVar21 = (float)((uint)(fVar17 * (fRam0000000146b30e9c - (fVar31 + fVar31))) &
                    uRam0000000146b30eac);
    fVar37 = (fVar33 + fVar33) * fVar39;
    fVar40 = fVar11 * (fVar16 * fVar39 + fVar14 * fVar33);
    fVar41 = fVar13 * (fVar37 + fVar16 * fVar35);
    fVar42 = fVar15 * (fVar14 * fVar39 + fVar16 * fVar33);
    fVar31 = (fVar14 * fVar33 - fVar16 * fVar39) * fVar13;
    fVar35 = (fVar16 * fVar35 - fVar37) * fVar15;
    fVar39 = (fVar16 * fVar33 - fVar14 * fVar39) * fVar11;
    fVar14 = fStack_114 + fStack_114;
    fVar16 = fStack_110 + fStack_110;
    fVar33 = local_118 * (local_118 + local_118);
    fVar22 = (float)((uint)(fVar28 * (_DAT_146b30e90 - (fStack_110 * fVar16 + fStack_114 * fVar14)))
                    & _DAT_146b30ea0);
    fVar23 = (float)((uint)(fVar29 * (fRam0000000146b30e94 - (fStack_110 * fVar16 + fVar33))) &
                    uRam0000000146b30ea4);
    fVar25 = (float)((uint)(fVar30 * (fRam0000000146b30e98 - (fStack_114 * fVar14 + fVar33))) &
                    uRam0000000146b30ea8);
    fVar27 = (float)((uint)(local_f8._12_4_ * (fRam0000000146b30e9c - (fVar33 + fVar33))) &
                    uRam0000000146b30eac);
    fVar37 = (local_118 + local_118) * fStack_10c;
    fVar34 = fVar28 * (fVar16 * fStack_10c + fVar14 * local_118);
    fVar36 = fVar29 * (fVar37 + fVar16 * fStack_114);
    fVar38 = fVar30 * (fVar14 * fStack_10c + fVar16 * local_118);
    fVar33 = (fVar14 * local_118 - fVar16 * fStack_10c) * fVar29;
    fVar37 = (fVar16 * fStack_114 - fVar37) * fVar30;
    fVar14 = (fVar16 * local_118 - fVar14 * fStack_10c) * fVar28;
    local_158 = fVar22 * fVar18 + fVar34 * fVar31 + fVar14 * fVar42 + fVar27 * fVar43;
    fStack_154 = fVar22 * fVar40 + fVar34 * fVar19 + fVar14 * fVar35 + fVar27 * fVar44;
    fStack_150 = fVar22 * fVar39 + fVar34 * fVar41 + fVar14 * fVar20 + fVar27 * fVar45;
    fStack_14c = fVar22 * fVar21 + fVar34 * fVar21 + fVar14 * fVar21 + fVar27 * fRam0000000146b30e9c
    ;
    local_148 = fVar33 * fVar18 + fVar23 * fVar31 + fVar36 * fVar42 + fVar27 * fVar43;
    fStack_144 = fVar33 * fVar40 + fVar23 * fVar19 + fVar36 * fVar35 + fVar27 * fVar44;
    fStack_140 = fVar33 * fVar39 + fVar23 * fVar41 + fVar36 * fVar20 + fVar27 * fVar45;
    fStack_13c = fVar33 * fVar21 + fVar23 * fVar21 + fVar36 * fVar21 + fVar27 * fRam0000000146b30e9c
    ;
    local_138 = fVar38 * fVar18 + fVar37 * fVar31 + fVar25 * fVar42 + fVar27 * fVar43;
    fStack_134 = fVar38 * fVar40 + fVar37 * fVar19 + fVar25 * fVar35 + fVar27 * fVar44;
    fStack_130 = fVar38 * fVar39 + fVar37 * fVar41 + fVar25 * fVar20 + fVar27 * fVar45;
    fStack_12c = fVar38 * fVar21 + fVar37 * fVar21 + fVar25 * fVar21 + fVar27 * fRam0000000146b30e9c
    ;
    local_128 = fRam0000000146b30e9c * fVar43 +
                local_108 * fVar18 + fStack_104 * fVar31 + fStack_100 * fVar42;
    fStack_124 = fRam0000000146b30e9c * fVar44 +
                 local_108 * fVar40 + fStack_104 * fVar19 + fStack_100 * fVar35;
    fStack_120 = fRam0000000146b30e9c * fVar45 +
                 local_108 * fVar39 + fStack_104 * fVar41 + fStack_100 * fVar20;
    fStack_11c = fRam0000000146b30e9c * fRam0000000146b30e9c +
                 local_108 * fVar21 + fStack_104 * fVar21 + fStack_100 * fVar21;
    FMatrix::RemoveScaling(&local_158);
    fVar31 = (float)((_DAT_146b30ee0 ^ (uint)fVar24) & -(uint)(_DAT_146b30ef0 <= fVar28 * fVar11) ^
                    _DAT_146b30ee0);
    fVar24 = (float)((uRam0000000146b30ee4 ^ (uint)fVar26) &
                     -(uint)(fRam0000000146b30ef4 <= fVar29 * fVar13) ^ uRam0000000146b30ee4);
    fVar26 = (float)((uRam0000000146b30ee8 ^ (uint)fVar32) &
                     -(uint)(fRam0000000146b30ef8 <= fVar30 * fVar15) ^ uRam0000000146b30ee8);
    fStack_150 = fStack_150 * fVar31;
    fStack_154 = fStack_154 * fVar31;
    local_158 = local_158 * fVar31;
    local_148 = local_148 * fVar24;
    fStack_144 = fVar24 * fStack_144;
    fStack_140 = fStack_140 * fVar24;
    fStack_130 = fVar26 * fStack_130;
    fStack_134 = fVar26 * fStack_134;
    local_138 = local_138 * fVar26;
    FQuat::FQuat(&local_168,&local_158);
    local_178 = 0x322bcc77;
    auVar10._0_4_ = local_168 * local_168 + fStack_160 * fStack_160;
    auVar10._4_4_ = fStack_164 * fStack_164 + fStack_15c * fStack_15c;
    auVar10._8_4_ = fStack_160 * fStack_160 + local_168 * local_168;
    auVar10._12_4_ = fStack_15c * fStack_15c + fStack_164 * fStack_164;
    auVar9._0_4_ = auVar10._4_4_ + auVar10._0_4_;
    auVar9._4_4_ = auVar10._8_4_ + auVar10._4_4_;
    auVar9._8_4_ = auVar10._12_4_ + auVar10._8_4_;
    auVar9._12_4_ = auVar10._0_4_ + auVar10._12_4_;
    auVar12 = rsqrtps(auVar10,auVar9);
    fVar31 = auVar12._0_4_;
    fVar24 = auVar12._4_4_;
    fVar26 = auVar12._8_4_;
    fVar32 = auVar12._12_4_;
    fVar31 = (_DAT_146b30e80 - fVar31 * fVar31 * auVar9._0_4_ * _DAT_146b30e80) * fVar31 + fVar31;
    fVar24 = (fRam0000000146b30e84 - fVar24 * fVar24 * auVar9._4_4_ * fRam0000000146b30e84) * fVar24
             + fVar24;
    fVar26 = (fRam0000000146b30e88 - fVar26 * fVar26 * auVar9._8_4_ * fRam0000000146b30e88) * fVar26
             + fVar26;
    fVar32 = (fRam0000000146b30e8c - fVar32 * fVar32 * auVar9._12_4_ * fRam0000000146b30e8c) *
             fVar32 + fVar32;
    fVar14 = 0.0;
    fVar20 = (float)(((uint)((fVar31 + (_DAT_146b30e80 -
                                       fVar31 * fVar31 * auVar9._0_4_ * _DAT_146b30e80) * fVar31) *
                            local_168) ^ _DAT_146b30e70) & -(uint)(1e-08 <= auVar9._0_4_) ^
                    _DAT_146b30e70);
    fVar21 = (float)(((uint)((fVar24 + (fRam0000000146b30e84 -
                                       fVar24 * fVar24 * auVar9._4_4_ * fRam0000000146b30e84) *
                                       fVar24) * fStack_164) ^ uRam0000000146b30e74) &
                     -(uint)(1e-08 <= auVar9._4_4_) ^ uRam0000000146b30e74);
    fVar22 = (float)(((uint)((fVar26 + (fRam0000000146b30e88 -
                                       fVar26 * fVar26 * auVar9._8_4_ * fRam0000000146b30e88) *
                                       fVar26) * fStack_160) ^ uRam0000000146b30e78) &
                     -(uint)(1e-08 <= auVar9._8_4_) ^ uRam0000000146b30e78);
    fVar23 = (float)(((uint)((fVar32 + (fRam0000000146b30e8c -
                                       fVar32 * fVar32 * auVar9._12_4_ * fRam0000000146b30e8c) *
                                       fVar32) * fStack_15c) ^ uRam0000000146b30e7c) &
                     -(uint)(1e-08 <= auVar9._12_4_) ^ uRam0000000146b30e7c);
    fVar43 = local_128;
    fVar44 = fStack_124;
    fVar45 = fStack_120;
  }
  *(float *)(param_1 + 0x42) = fVar20;
  *(float *)((longlong)param_1 + 0x214) = fVar21;
  *(float *)(param_1 + 0x43) = fVar22;
  *(float *)((longlong)param_1 + 0x21c) = fVar23;
  *(float *)(param_1 + 0x44) = fVar43;
  *(float *)((longlong)param_1 + 0x224) = fVar44;
  *(float *)(param_1 + 0x45) = fVar45;
  *(float *)((longlong)param_1 + 0x22c) = fVar14;
  *(float *)(param_1 + 0x46) = fVar28 * fVar11;
  *(float *)((longlong)param_1 + 0x234) = fVar29 * fVar13;
  *(float *)(param_1 + 0x47) = fVar30 * fVar15;
  *(float *)((longlong)param_1 + 0x23c) = local_f8._12_4_ * fVar17;
  param_1[0x95] = CONCAT44(fStack_104,local_108);
  *(float *)(param_1 + 0x96) = fStack_100;
  plVar6 = (longlong *)FUN_14224ffa0(&local_158,param_1[0x32],param_1[0x35],0);
  lVar1 = plVar6[1];
  param_1[0x36] = *plVar6;
  param_1[0x37] = lVar1;
  lVar1 = plVar6[3];
  param_1[0x38] = plVar6[2];
  param_1[0x39] = lVar1;
  lVar1 = plVar6[5];
  param_1[0x3a] = plVar6[4];
  param_1[0x3b] = lVar1;
  lVar7 = _DAT_1464aa818;
  lVar1 = param_1[0x23];
  param_1[0x36] = _DAT_1464aa810;
  param_1[0x37] = lVar7;
  if (lVar1 != 0) {
    lVar7 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(lVar1 + 0x4d0) != 0)) {
      (**(code **)(*param_1 + 0x410))(param_1);
      *(int *)(param_1 + 0x4a) = (int)param_1[0x4c];
      *(int *)((longlong)param_1 + 0x254) = (int)param_1[0x4c];
    }
  }
  return;
}



// FUNCTION 142cc6580 FUN_142cc6580 body=159 status=ok
// SIG undefined FUN_142cc6580(void)

void FUN_142cc6580(longlong param_1,float param_2,float param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
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
      *(float *)(param_1 + 0x260) = (param_2 + *(float *)(lVar1 + 0x464)) - param_3;
      *(float *)(param_1 + 0x25c) = (param_2 + *(float *)(lVar1 + 0x568)) - param_3;
    }
  }
  return;
}



// FUNCTION 142cc6620 FUN_142cc6620 body=581 status=ok
// SIG undefined FUN_142cc6620(void)

void FUN_142cc6620(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  void *_Src;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined2 *local_68;
  int local_60;
  int local_5c;
  longlong local_58 [2];
  longlong local_48 [2];
  
  if (param_3 != 0) {
    local_res10 = param_2;
    uVar3 = UObjectBaseUtility::GetOutermost(param_3);
    puVar4 = (undefined8 *)UObjectBaseUtility::GetPathName(param_3,local_58,uVar3);
    iVar8 = *(int *)(puVar4 + 1);
    local_68 = (undefined2 *)*puVar4;
    *puVar4 = 0;
    local_60 = *(int *)(puVar4 + 1);
    local_5c = *(int *)((longlong)puVar4 + 0xc);
    puVar4[1] = 0;
    iVar7 = local_60;
    if (local_5c < (int)((2 - (uint)(iVar8 != 0)) + local_60)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
      iVar7 = local_60;
    }
    local_60 = (2 - (uint)(iVar7 != 0)) + iVar7;
    if (local_5c < local_60) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar7);
    }
    iVar1 = local_5c;
    iVar8 = local_60;
    puVar6 = local_68;
    lVar5 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
    local_68[lVar5] = 0x2e;
    local_68[lVar5 + 1] = 0;
    puVar4 = (undefined8 *)FName::ToString(&local_res10,local_48);
    if (iVar8 < 2) {
      puVar9 = (undefined2 *)*puVar4;
      *puVar4 = 0;
      iVar8 = *(int *)(puVar4 + 1);
      puVar4[1] = 0;
      if (puVar6 != (undefined2 *)0x0) {
        FMemory::Free(puVar6);
      }
    }
    else {
      iVar7 = *(int *)(puVar4 + 1) + -1;
      if (*(int *)(puVar4 + 1) == 0) {
        iVar7 = 0;
      }
      if ((iVar8 != 0) || (iVar2 = 1, iVar7 == 0)) {
        iVar2 = 0;
      }
      local_68 = puVar6;
      local_60 = iVar8;
      local_5c = iVar1;
      if (iVar1 < iVar2 + iVar7 + iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
      }
      iVar1 = local_60;
      _Src = (void *)*puVar4;
      puVar9 = local_68;
      iVar8 = local_60;
      if (iVar7 != 0) {
        lVar5 = (longlong)local_60;
        local_60 = local_60 + (uint)(local_60 == 0) + iVar7;
        if (local_5c < local_60) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar1);
        }
        iVar8 = local_60;
        puVar9 = local_68;
        puVar6 = local_68 + (lVar5 - (ulonglong)(iVar1 != 0));
        _guard_xfg_dispatch_icall_nop(puVar6,_Src,(longlong)iVar7 * 2);
        puVar6[iVar7] = 0;
      }
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    puVar6 = &DAT_143f3eda8;
    if (iVar8 != 0) {
      puVar6 = puVar9;
    }
    puVar4 = (undefined8 *)FName::FName(local_res8,puVar6,1);
    *param_1 = *puVar4;
    if (puVar9 != (undefined2 *)0x0) {
      FMemory::Free(puVar9);
    }
    *(undefined2 *)(param_1 + 1) = 0xff01;
    return;
  }
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0xff01;
  return;
}



// FUNCTION 142cc6870 FUN_142cc6870 body=127 status=ok
// SIG undefined FUN_142cc6870(void)

void FUN_142cc6870(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  if (param_1[0x129] != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x670))();
    if ((plVar2 == (longlong *)0x0) || ((*(uint *)((longlong)plVar2 + 0x4cc) >> 1 & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    if (((plVar2 == (longlong *)0x0) || ((*(uint *)((longlong)plVar2 + 0x4cc) >> 1 & 1) == 0)) ||
       (cVar1 = (**(code **)(*plVar2 + 0x768))(), cVar1 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    FUN_142cc6e80(param_1[0x129],uVar3,uVar4);
    return;
  }
  return;
}



// FUNCTION 142cc68f0 FUN_142cc68f0 body=1419 status=ok
// SIG undefined FUN_142cc68f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cc68f0(longlong param_1,char param_2,byte param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  char cVar15;
  byte bVar16;
  char cVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  char local_a8;
  char local_a7 [7];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (((*(byte *)(param_1 + 200) & 0x20) != 0) && (*(longlong *)(param_1 + 0x178) != 0)) {
    plVar8 = (longlong *)FUN_142e1a3f0();
    plVar1 = *(longlong **)(param_1 + 0x178);
    for (plVar20 = plVar1; plVar20 != (longlong *)0x0; plVar20 = (longlong *)plVar20[6]) {
      if (plVar20 == plVar8) {
        if (plVar1 == (longlong *)0x0) {
          return;
        }
        lVar9 = UBlueprintGeneratedClass::GetPrivateStaticClass();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) {
          return;
        }
        lVar9 = plVar1[0x1f];
        if (lVar9 == 0) {
          (**(code **)(*plVar1 + 0x368))(plVar1);
          lVar9 = plVar1[0x1f];
          if (lVar9 == 0) {
            return;
          }
        }
        lVar21 = *(longlong *)(param_1 + 0x118);
        if (lVar21 != 0) {
          lVar10 = AHeoCon::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            uVar18 = *(undefined8 *)(lVar21 + 0x168);
            goto LAB_142cc6a3f;
          }
        }
        lVar21 = 0;
        uVar18 = 0;
LAB_142cc6a3f:
        if (lVar21 == 0) {
          return;
        }
        cVar15 = '\0';
        local_a8 = '\0';
        if (param_2 == '\0') {
          return;
        }
        local_98 = uVar18;
        iVar7 = FUN_14233f450(param_1);
        if ((iVar7 != 3) && (param_3 == 0)) {
          return;
        }
        lVar10 = *(longlong *)(param_1 + 0x180);
        if ((lVar10 == 0) && (lVar11 = *(longlong *)(lVar9 + 0x460), lVar11 != 0)) {
          local_b8 = 0xff800000;
          local_c0 = 0;
          local_c8 = (longlong *)0x0;
          lVar11 = FUN_1417987a0(lVar11,lVar21,*(undefined8 *)(lVar11 + 0x18),0xefb7ffd6);
          *(longlong *)(param_1 + 0x180) = lVar11;
          lVar10 = 0;
          if (lVar11 != 0) {
            puVar12 = (undefined8 *)FUN_14238d0c0(lVar11,local_78);
            uVar4 = puVar12[1];
            *(undefined8 *)(param_1 + 0x1e0) = *puVar12;
            *(undefined8 *)(param_1 + 0x1e8) = uVar4;
            uVar13 = *(undefined4 *)((longlong)puVar12 + 0x14);
            uVar2 = *(undefined4 *)(puVar12 + 3);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x1c);
            *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(puVar12 + 2);
            *(undefined4 *)(param_1 + 500) = uVar13;
            *(undefined4 *)(param_1 + 0x1f8) = uVar2;
            *(undefined4 *)(param_1 + 0x1fc) = uVar3;
            uVar13 = *(undefined4 *)((longlong)puVar12 + 0x24);
            uVar2 = *(undefined4 *)(puVar12 + 5);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x2c);
            *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(puVar12 + 4);
            *(undefined4 *)(param_1 + 0x204) = uVar13;
            *(undefined4 *)(param_1 + 0x208) = uVar2;
            *(undefined4 *)(param_1 + 0x20c) = uVar3;
            FUN_142397000(*(undefined8 *)(param_1 + 0x180),0,1,0);
            local_a0 = 0;
            FUN_142399e30(*(undefined8 *)(param_1 + 0x180),uVar18,0);
            FUN_14234b150(*(undefined8 *)(param_1 + 0x180));
            (**(code **)(**(longlong **)(param_1 + 0x180) + 0x3d0))
                      (*(longlong **)(param_1 + 0x180),param_1);
            FUN_142ca58c0(*(undefined8 *)(param_1 + 0x180),*(undefined8 *)(lVar21 + 0x4c0));
            FUN_142cc5dd0(param_1);
            iVar7 = *(int *)(param_1 + 0x450);
            uVar18 = *(undefined8 *)(param_1 + 0x180);
            *(int *)(param_1 + 0x450) = iVar7 + 1;
            if (*(int *)(param_1 + 0x454) < iVar7 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x448,iVar7);
            }
            local_a8 = '\x01';
            *(undefined8 *)(*(longlong *)(param_1 + 0x448) + (longlong)iVar7 * 8) = uVar18;
            puVar12 = (undefined8 *)FUN_14238d0c0(*(undefined8 *)(param_1 + 0x180),local_78);
            iVar7 = *(int *)(param_1 + 0x468);
            *(int *)(param_1 + 0x468) = iVar7 + 1;
            if (*(int *)(param_1 + 0x46c) < iVar7 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
              ResizeGrow((longlong *)(param_1 + 0x460),iVar7);
            }
            puVar14 = (undefined8 *)((longlong)iVar7 * 0x40 + *(longlong *)(param_1 + 0x460));
            *puVar14 = *(undefined8 *)(param_1 + 0x180);
            uVar18 = puVar12[1];
            puVar14[2] = *puVar12;
            puVar14[3] = uVar18;
            uVar18 = puVar12[3];
            puVar14[4] = puVar12[2];
            puVar14[5] = uVar18;
            uVar13 = *(undefined4 *)((longlong)puVar12 + 0x24);
            uVar2 = *(undefined4 *)(puVar12 + 5);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x2c);
            *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(puVar12 + 4);
            *(undefined4 *)((longlong)puVar14 + 0x34) = uVar13;
            *(undefined4 *)(puVar14 + 7) = uVar2;
            *(undefined4 *)((longlong)puVar14 + 0x3c) = uVar3;
            lVar10 = *(longlong *)(param_1 + 0x180);
            cVar15 = local_a8;
          }
        }
        cVar17 = cVar15;
        local_a7[0] = cVar15;
        if (lVar10 != 0) {
          *(byte *)(lVar10 + 0x970) = *(byte *)(lVar10 + 0x970) & 0xfe;
          bVar16 = param_3 ^ 1;
          *(byte *)(lVar10 + 0x970) = *(byte *)(lVar10 + 0x970) | bVar16;
          uVar13 = 0x1c;
          if (param_3 != 0) {
            uVar13 = 4;
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x1370) = uVar13;
          FUN_1423bb6e0(*(undefined8 *)(param_1 + 0x180),bVar16);
          FUN_142cac7c0(*(undefined8 *)(param_1 + 0x180),bVar16);
          if (param_3 == 0) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x180) + 0x878) = 2;
          }
          else if (*(longlong *)(lVar9 + 0x460) == 0) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x180) + 0x878) = 0;
          }
          else {
            *(undefined1 *)(*(longlong *)(param_1 + 0x180) + 0x878) =
                 *(undefined1 *)(*(longlong *)(lVar9 + 0x460) + 0x878);
          }
          FUN_1423ba690(*(undefined8 *)(param_1 + 0x180),(param_3 ^ 1) + 1);
          cVar17 = local_a8;
        }
        if ((param_3 != 0) && (*(char *)(param_1 + 0x458) == '\0')) {
          *(undefined1 *)(param_1 + 0x458) = 1;
          local_88 = 0;
          local_80 = 0;
          cVar6 = UBlueprintGeneratedClass::GetGeneratedClassesHierarchy(plVar1,&local_88);
          lVar9 = local_88;
          if (cVar6 != '\0') {
            local_a0 = (longlong)((int)local_80 + -1);
            if (-1 < (int)local_80 + -1) {
              do {
                uVar19 = 0;
                lVar10 = *(longlong *)(*(longlong *)(lVar9 + local_a0 * 8) + 0x238);
                if (lVar10 != 0) {
                  plVar20 = *(longlong **)(lVar10 + 0x28);
                  uVar22 = (longlong)*(int *)(lVar10 + 0x30) & 0x1fffffffffffffff;
                  if (plVar20 + *(int *)(lVar10 + 0x30) < plVar20) {
                    uVar22 = uVar19;
                  }
                  if (uVar22 != 0) {
                    do {
                      lVar9 = *plVar20;
                      if ((lVar9 != 0) &&
                         (lVar10 = *(longlong *)(lVar9 + 0x28), cVar17 = local_a8, lVar10 != 0)) {
                        lVar11 = FUN_1429ff160();
                        for (; cVar17 = local_a8, lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)
                            ) {
                          if (lVar10 == lVar11) {
                            local_c8 = plVar1;
                            FUN_142cbedf0(param_1,lVar9,lVar21,local_98);
                            local_a8 = '\x01';
                            cVar17 = '\x01';
                            break;
                          }
                        }
                      }
                      plVar20 = plVar20 + 1;
                      uVar19 = uVar19 + 1;
                      lVar9 = local_88;
                    } while (uVar19 != uVar22);
                  }
                }
                local_a0 = local_a0 + -1;
                cVar15 = local_a7[0];
              } while (-1 < local_a0);
            }
          }
          if (lVar9 != 0) {
            FMemory::Free(lVar9);
          }
        }
        if (cVar17 == '\0') {
          return;
        }
        local_98 = *(undefined8 *)(param_1 + 0x490);
        local_90 = *(undefined4 *)(param_1 + 0x498);
        FUN_142ccf1e0(param_1,&local_98);
        local_a7[0] = cVar15;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x380,local_a7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142cc6e80 FUN_142cc6e80 body=881 status=ok
// SIG undefined FUN_142cc6e80(void)

void FUN_142cc6e80(longlong *param_1,char param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  longlong local_res20;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_60;
  longlong *local_58;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_1[0x2f] != 0) {
    lVar4 = FUN_142e1a3f0();
    for (lVar5 = param_1[0x2f]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar4) {
        if (param_1[0x2f] != 0) {
          FUN_142cc68f0(param_1,param_2,param_3);
        }
        break;
      }
    }
  }
  (**(code **)(*param_1 + 0x358))(param_1,param_2);
  plVar6 = (longlong *)param_1[0x23];
  plVar13 = (longlong *)0x0;
  if (plVar6 != (longlong *)0x0) {
    lVar5 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_res20 = plVar6[0x2d];
      goto LAB_142cc6f55;
    }
  }
  local_res20 = 0;
  plVar6 = plVar13;
LAB_142cc6f55:
  plVar11 = plVar13;
  if (plVar6 != (longlong *)0x0) {
    plVar11 = (longlong *)plVar6[0x98];
  }
  if ((plVar11 != (longlong *)0x0) && (local_78 = FUN_1423ac7e0(), local_78 != 0)) {
    local_58 = (longlong *)0x0;
    local_4c = 0;
    plVar6 = (longlong *)FUN_142268ae0(*(undefined8 *)(local_78 + 0x10));
    if (plVar6 != (longlong *)0x0) {
      plVar7 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6);
      lVar5 = local_78;
      iVar10 = (int)plVar7[1];
      plVar6 = plVar13;
      plVar11 = plVar13;
      plVar15 = plVar13;
      if (0 < iVar10) {
        do {
          lVar4 = *(longlong *)(*plVar7 + -8 + (longlong)(iVar10 - (int)plVar6) * 8);
          if (lVar4 != 0) {
            lVar8 = FUN_142c5c8b0();
            for (lVar1 = *(longlong *)(lVar4 + 0x70); lVar1 != 0;
                lVar1 = *(longlong *)(lVar1 + 0x30)) {
              if (lVar1 == lVar8) {
                iVar10 = *(int *)(lVar4 + 0x44);
                iVar12 = (int)plVar13;
                local_50 = iVar12 + 1;
                if ((int)plVar11 < (int)local_50) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_58,plVar13);
                  plVar11 = (longlong *)(ulonglong)local_4c;
                  plVar15 = local_58;
                }
                plVar13 = (longlong *)(ulonglong)local_50;
                plVar15[iVar12] = iVar10 + lVar5;
                break;
              }
            }
          }
          iVar10 = (int)plVar7[1];
          uVar14 = (int)plVar6 + 1;
          plVar6 = (longlong *)(ulonglong)uVar14;
        } while ((int)uVar14 < iVar10);
        if (0 < (int)plVar13) {
          param_1[0xaa] = *plVar15;
        }
        if (plVar15 != (longlong *)0x0) {
          FMemory::Free(plVar15);
        }
      }
    }
  }
  plVar6 = (longlong *)param_1[0x8c];
  plVar13 = plVar6 + (longlong)(int)param_1[0x8d] * 8;
  for (; plVar6 != plVar13; plVar6 = plVar6 + 8) {
    plVar11 = (longlong *)*plVar6;
    if (plVar11 != (longlong *)0x0) {
      if ((param_2 == '\0') || (local_res20 == 0)) {
        (**(code **)(*plVar11 + 0x418))(plVar11,&DAT_14653218c);
      }
      else {
        uVar2 = *(undefined4 *)((longlong)plVar6 + 0x24);
        local_70 = (undefined4)plVar6[5];
        *(int *)((longlong)plVar11 + 0x1ec) = (int)plVar6[4];
        *(undefined4 *)(plVar11 + 0x3e) = uVar2;
        *(undefined4 *)((longlong)plVar11 + 500) = local_70;
        local_48 = (undefined4)plVar6[2];
        uStack_44 = *(undefined4 *)((longlong)plVar6 + 0x14);
        uStack_40 = (undefined4)plVar6[3];
        uStack_3c = *(undefined4 *)((longlong)plVar6 + 0x1c);
        puVar9 = (undefined8 *)FQuat::Rotator(&local_48,&local_58);
        lVar5 = *plVar6;
        *(undefined8 *)(lVar5 + 0x1f8) = *puVar9;
        *(undefined4 *)(lVar5 + 0x200) = *(undefined4 *)(puVar9 + 1);
        uVar2 = *(undefined4 *)((longlong)plVar6 + 0x34);
        local_60 = (undefined4)plVar6[7];
        lVar5 = *plVar6;
        *(int *)(lVar5 + 0x204) = (int)plVar6[6];
        *(undefined4 *)(lVar5 + 0x208) = uVar2;
        *(undefined4 *)(lVar5 + 0x20c) = local_60;
        FUN_142382f60(*plVar6,local_res20,&DAT_146af29ec,0);
      }
      (**(code **)(*(longlong *)*plVar6 + 0x358))((longlong *)*plVar6,1);
    }
  }
  local_78 = param_1[0x92];
  local_70 = (undefined4)param_1[0x93];
  FUN_142ccf1e0(param_1,&local_78);
  return;
}



// FUNCTION 142cc7200 FUN_142cc7200 body=36 status=ok
// SIG undefined FUN_142cc7200(void)

void FUN_142cc7200(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x408))(param_2);
  FUN_142ccf590(param_1,uVar1);
  return;
}



// FUNCTION 142cc7230 FUN_142cc7230 body=550 status=ok
// SIG undefined FUN_142cc7230(void)

void FUN_142cc7230(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  longlong *plVar16;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x418))();
  if ((plVar8 != param_1) && (plVar8 != (longlong *)0x0)) {
    puVar9 = (undefined4 *)(**(code **)(*plVar8 + 0x410))(plVar8,&local_28);
    lVar12 = *param_1;
    uVar6 = puVar9[1];
    uVar2 = puVar9[2];
    uVar3 = puVar9[3];
    *(undefined4 *)(param_1 + 0x32) = *puVar9;
    *(undefined4 *)((longlong)param_1 + 0x194) = uVar6;
    *(undefined4 *)(param_1 + 0x33) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x19c) = uVar3;
    uVar6 = (**(code **)(*plVar8 + 0x400))(plVar8);
    (**(code **)(lVar12 + 0x3f8))(param_1,uVar6);
    (**(code **)(*param_1 + 0x428))(param_1,plVar8);
    if ((char)param_1[0x3a] != '\0') {
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      pwVar10 = (wchar_t *)0x0;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar13 = iVar1 >> 0x1f & 0xffff;
        uVar7 = iVar1 + uVar13;
        pwVar10 = (wchar_t *)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                  (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18);
      }
      if ((*(uint *)(pwVar10 + 4) >> 0x1d & 1) == 0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop
                            (L"&ThisClass::OnInheritedBalanceSourceLevelChanged",L"::");
        pwVar10 = (wchar_t *)0x0;
        while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar10 = pwVar4;
        }
        FName::FName(&local_res10,pwVar10 + 2,1);
        plVar16 = plVar8 + 0x38;
        FWeakObjectPtr::operator=(&local_28,0);
        local_20 = 0;
        FWeakObjectPtr::operator=(&local_28,param_1);
        local_20 = local_res10;
        if ((local_res10 != 0) && (lVar12 = FWeakObjectPtr::Get(&local_28), lVar12 != 0)) {
          UObject::FindFunction(lVar12,local_20);
        }
        piVar14 = (int *)*plVar16;
        lVar12 = plVar8[0x39];
        for (piVar15 = piVar14; piVar15 != piVar14 + (longlong)(int)lVar12 * 4;
            piVar15 = piVar15 + 4) {
          if ((((*piVar15 == local_28) && (piVar15[1] == local_24)) ||
              ((cVar5 = FWeakObjectPtr::IsValid(piVar15), cVar5 == '\0' &&
               (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
             (*(longlong *)(piVar15 + 2) == local_20)) {
            if ((int)((longlong)piVar15 - (longlong)piVar14 >> 4) != -1) goto LAB_142cc743d;
            break;
          }
        }
        iVar1 = (int)plVar8[0x39];
        *(int *)(plVar8 + 0x39) = iVar1 + 1;
        if (*(int *)((longlong)plVar8 + 0x1cc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar1);
        }
        piVar14 = (int *)((longlong)iVar1 * 0x10 + *plVar16);
        *piVar14 = local_28;
        piVar14[1] = local_24;
        *(longlong *)(piVar14 + 2) = local_20;
LAB_142cc743d:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
      }
    }
  }
  return;
}



// FUNCTION 142cc7460 AreAllCharactersVisible body=8 status=ok
// SIG undefined AreAllCharactersVisible(void)

bool FAdvTextRun::AreAllCharactersVisible(longlong param_1)

{
  return *(int *)(param_1 + 0x10) == 0;
}



// FUNCTION 142cc7470 FUN_142cc7470 body=22 status=ok
// SIG undefined FUN_142cc7470(void)

bool FUN_142cc7470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = USequencerScriptingRangeExtensions::HasEnd(param_3);
  return cVar1 == '\0';
}



// FUNCTION 142cc74a0 FUN_142cc74a0 body=61 status=ok
// SIG undefined FUN_142cc74a0(void)

undefined8 FUN_142cc74a0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = (longlong *)(param_1 + -0x8b8);
  cVar2 = (**(code **)(*plVar1 + 0x818))(plVar1);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*plVar1 + 0x778))(plVar1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cc74e0 FUN_142cc74e0 body=60 status=ok
// SIG undefined FUN_142cc74e0(void)

longlong FUN_142cc74e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint7 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x900);
  uVar3 = (uint7)((ulonglong)lVar1 >> 8);
  if ((((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x1778), lVar2 != 0)) &&
      ((*(byte *)(lVar1 + 0x18cc) & 2) == 0)) &&
     (((*(longlong *)(lVar1 + 0x178) != 0 && (lVar2 != 0)) &&
      ((*(byte *)(lVar2 + 0x2c) & 0x80) != 0)))) {
    return CONCAT71(uVar3,1);
  }
  return (ulonglong)uVar3 << 8;
}



// FUNCTION 142cc7560 FUN_142cc7560 body=144 status=ok
// SIG undefined FUN_142cc7560(void)

undefined8 FUN_142cc7560(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0xfd8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x9d0))();
    if (((cVar1 != '\0') && (*(char *)(param_1 + 0x10b8) == '\0')) &&
       ((*(longlong *)(param_1 + 0x1778) == 0 ||
        (((*(byte *)(param_1 + 0x18cc) & 2) != 0 || (*(longlong *)(param_1 + 0x178) == 0)))))) {
      if (((*(char *)(param_1 + 0x248) != '\x06') || (*(char *)(param_1 + 0x249) != '\x02')) &&
         (*(char *)(param_1 + 0x248) != '\0')) {
        cVar1 = FUN_1407c3030(param_1 + 0xcd8);
        if (cVar1 == '\0') {
          cVar1 = FUN_1407c3030(param_1 + 0x8b0);
          if (cVar1 == '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142cc75f0 FUN_142cc75f0 body=118 status=ok
// SIG undefined FUN_142cc75f0(void)

undefined1
FUN_142cc75f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  lVar1 = FUN_142ceef80();
  if (lVar1 != 0) {
    plVar4 = (longlong *)FUN_142ceef80(param_1);
    cVar2 = (**(code **)(*plVar4 + 0x468))(plVar4,param_2,param_3,param_4);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  uVar3 = FUN_14269ca80(param_1,param_2,param_3,param_4);
  return uVar3;
}



// FUNCTION 142cc7670 FUN_142cc7670 body=57 status=ok
// SIG undefined FUN_142cc7670(void)

undefined1 FUN_142cc7670(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142cdb060();
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1778) != 0)) &&
      ((*(byte *)(lVar1 + 0x18cc) & 2) == 0)) && (*(longlong *)(lVar1 + 0x178) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142cc76b0 FUN_142cc76b0 body=148 status=ok
// SIG undefined FUN_142cc76b0(void)

undefined8 FUN_142cc76b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_142cdb060();
  if (lVar1 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x1778) == 0) {
    return 0;
  }
  if ((*(byte *)(lVar1 + 0x18cc) & 2) != 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x178) == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = FUN_142e07420();
  lVar3 = param_2;
  while (lVar3 != lVar2) {
    lVar3 = *(longlong *)(lVar3 + 0x30);
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1778) + 0x10);
  lVar2 = FUN_142e07420();
  lVar3 = param_2;
  do {
    if (lVar3 == lVar2) goto LAB_142cc7732;
    lVar3 = *(longlong *)(lVar3 + 0x30);
  } while (lVar3 != 0);
  param_2 = 0;
LAB_142cc7732:
  if (lVar1 != param_2) {
    return 0;
  }
  return 1;
}



// FUNCTION 142cc7750 FUN_142cc7750 body=8 status=ok
// SIG undefined FUN_142cc7750(void)

bool FUN_142cc7750(longlong param_1)

{
  return *(char *)(param_1 + 8) != -1;
}



// FUNCTION 142cc7760 FUN_142cc7760 body=75 status=ok
// SIG undefined FUN_142cc7760(void)

undefined4 FUN_142cc7760(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FRuntimeFloatCurve::GetRichCurve(param_1 + 0xa8);
  iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if (iVar1 < 1) {
    plVar2 = (longlong *)FRuntimeFloatCurve::GetRichCurve(param_1 + 0x410);
    iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    if (iVar1 < 1) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142cc77b0 FUN_142cc77b0 body=147 status=ok
// SIG undefined FUN_142cc77b0(void)

void FUN_142cc77b0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_18 [16];
  
  FUN_142314720();
  if ((*(byte *)((longlong)param_1 + 0x56c) & 8) == 0) {
    *(undefined1 *)(param_1 + 0x148) = 1;
    uVar1 = (**(code **)(*param_1 + 0x9b0))(param_1);
    FWeakObjectPtr::operator=((longlong)param_1 + 0xa44,uVar1);
    lVar2 = (**(code **)(*param_1 + 0x308))(param_1,local_18);
    *(uint *)(param_1 + 0x15c) = *(uint *)(lVar2 + 8) ^ 0x80000000;
    FUN_140729f20(param_1 + 0x14a,param_2);
    *(char *)((longlong)param_1 + 0xae4) = (char)param_1[0x147];
  }
  *(undefined1 *)(param_1 + 0x147) = 0;
  return;
}



// FUNCTION 142cc7850 FUN_142cc7850 body=34 status=ok
// SIG undefined FUN_142cc7850(void)

undefined8 * FUN_142cc7850(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  FUN_142cc6620();
  return param_1;
}



// FUNCTION 142cc7880 FUN_142cc7880 body=343 status=ok
// SIG undefined FUN_142cc7880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142cc7880(byte *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined *local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined2 local_c3;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  longlong local_90;
  undefined8 local_88;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_d0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_c3 = 0;
  local_b8 = 0;
  local_c4 = param_8;
  local_d8 = DAT_146b31420;
  local_c8 = 0x10000;
  local_b4 = 0x101;
  FCollisionQueryParams::AddIgnoredActor(&local_d8,param_3);
  local_e8 = &DAT_146aefe68;
  local_f0 = &local_d8;
  local_f8 = param_7;
  local_100 = 2;
  local_108 = &DAT_1464aa810;
  local_bc = param_4;
  cVar1 = UWorld::SweepSingleByChannel(param_2,param_1,param_5,param_6);
  if ((((cVar1 != '\0') && ((*param_1 & 1) != 0)) && (0.0 < *(float *)(param_1 + 0xc))) &&
     (*(float *)(param_1 + 0xc) <= 1.0)) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x74);
    if (lVar2 != 0) {
      uVar3 = 1;
      goto LAB_142cc7992;
    }
  }
  uVar3 = 0;
LAB_142cc7992:
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 142cc79e0 FUN_142cc79e0 body=20 status=ok
// SIG undefined FUN_142cc79e0(void)

void FUN_142cc79e0(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FCollisionQueryParams::AddIgnoredActor(param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 142cc7a00 FUN_142cc7a00 body=170 status=ok
// SIG undefined FUN_142cc7a00(void)

undefined8 FUN_142cc7a00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((*(longlong *)(param_1 + 8) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10), lVar1 == 0)) {
    return 0;
  }
  lVar2 = FUN_142e07420();
  lVar4 = lVar1;
  while (lVar4 != lVar2) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    if (lVar4 == 0) {
      return 0;
    }
  }
  lVar2 = 0;
  lVar4 = lVar2;
  if (*(longlong *)(param_2 + 8) != 0) {
    lVar3 = FUN_142e07420();
    for (lVar5 = *(longlong *)(param_2 + 8);
        (lVar4 = lVar2, lVar5 != 0 && (lVar4 = *(longlong *)(param_2 + 8), lVar5 != lVar3));
        lVar5 = *(longlong *)(lVar5 + 0x30)) {
    }
  }
  lVar3 = FUN_142e07420();
  lVar5 = lVar1;
  do {
    lVar6 = lVar1;
    if (lVar5 == lVar3) break;
    lVar5 = *(longlong *)(lVar5 + 0x30);
    lVar6 = lVar2;
  } while (lVar5 != 0);
  if (lVar4 != lVar6) {
    return 0;
  }
  return 1;
}



// FUNCTION 142cc7ab0 FUN_142cc7ab0 body=191 status=ok
// SIG undefined FUN_142cc7ab0(void)

void FUN_142cc7ab0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  FUN_142ca6010();
  lVar2 = *(longlong *)(param_1 + 0x440);
  if ((lVar2 != 0) && (lVar4 = FUN_1423ac7e0(lVar2), lVar4 == param_1)) {
    iVar1 = *(int *)(lVar2 + 0xc);
    lVar5 = 0;
    lVar4 = lVar5;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      lVar4 = operator_new(0x1a0);
      if (lVar4 != 0) {
        lVar5 = FUN_142c8c3f0(lVar4);
      }
      FUN_14227bd60(param_1,lVar5,0);
      FUN_142cac300(lVar2,lVar5);
    }
  }
  return;
}



// FUNCTION 142cc7b70 FUN_142cc7b70 body=177 status=ok
// SIG undefined FUN_142cc7b70(void)

undefined1 FUN_142cc7b70(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_res18;
  undefined8 local_res20;
  
  if (param_3 != 0) {
    cVar1 = FUN_142ccd9e0(param_1,param_3);
    if (cVar1 != '\0') {
      lVar2 = FUN_142cc1e20(param_3,*(undefined1 *)(param_1 + 9),&local_res20);
      if (lVar2 != 0) {
        cVar1 = FUN_142ccd9e0(param_2,param_3);
        if (cVar1 != '\0') {
          lVar3 = FUN_142cc1e20(param_3,*(undefined1 *)(param_2 + 9),&local_res18);
          if (lVar3 != 0) {
            (**(code **)(*local_res18 + 0x308))(local_res18,param_3,lVar3,local_res20,lVar2);
            FUN_142bb5c50(param_3,*(undefined1 *)(param_1 + 9));
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142cc7c30 FUN_142cc7c30 body=700 status=ok
// SIG undefined FUN_142cc7c30(void)

void FUN_142cc7c30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong local_38;
  int local_30;
  int local_2c;
  
  FUN_142ca61c0();
  lVar6 = FUN_142269f40(param_1);
  if (lVar6 != 0) {
    lVar7 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142cc7c93;
  }
  lVar6 = 0;
LAB_142cc7c93:
  lVar7 = 0;
  iVar12 = 0;
  local_38 = 0;
  iVar13 = 0;
  local_2c = 0;
  param_1[0xa7] = lVar6;
  plVar8 = (longlong *)FUN_142268ae0(param_1[2]);
  if (plVar8 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8);
    iVar11 = 0;
    iVar10 = (int)plVar8[1];
    if (0 < iVar10) {
      do {
        lVar6 = *(longlong *)(*plVar8 + -8 + (longlong)(iVar10 - iVar11) * 8);
        if (lVar6 != 0) {
          lVar9 = FUN_142c5c8b0();
          for (lVar2 = *(longlong *)(lVar6 + 0x70); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30))
          {
            if (lVar2 == lVar9) {
              iVar10 = *(int *)(lVar6 + 0x44);
              local_30 = iVar13 + 1;
              if (iVar12 < local_30) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,iVar13);
                lVar7 = local_38;
                iVar12 = local_2c;
              }
              *(longlong *)(lVar7 + (longlong)iVar13 * 8) = (longlong)iVar10 + (longlong)param_1;
              iVar13 = local_30;
              break;
            }
          }
        }
        iVar10 = (int)plVar8[1];
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar10);
    }
  }
  plVar8 = param_1 + 0x11a;
  if (plVar8 == &local_38) {
    if (lVar7 != 0) {
      FMemory::Free(lVar7);
    }
  }
  else {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    *plVar8 = lVar7;
    *(int *)(param_1 + 0x11b) = iVar13;
    *(int *)((longlong)param_1 + 0x8dc) = iVar12;
  }
  if ((int)param_1[0x11b] < 1) {
    *(undefined1 *)((longlong)param_1 + 0x631) = 0;
  }
  lVar6 = param_1[0x88];
  plVar8 = param_1 + 0x11d;
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x12b0) != '\0')) {
    plVar8 = (longlong *)(lVar6 + 0x12b8);
  }
  if (plVar8 != (longlong *)0x0) {
    lVar6 = param_1[4];
    if (lVar6 != 0) {
      lVar7 = FUN_142a07000();
      lVar6 = *(longlong *)(lVar6 + 0x10);
      if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
    lVar6 = param_1[0x72];
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*param_1 + 0x308))(param_1);
      param_1[0x72] = lVar6;
    }
    plVar1 = (longlong *)(lVar6 + 0x688);
    *(int *)(lVar6 + 0x660) = (int)*plVar8;
    uVar3 = *(undefined4 *)((longlong)plVar8 + 0xc);
    lVar7 = plVar8[2];
    uVar4 = *(undefined4 *)((longlong)plVar8 + 0x14);
    *(int *)(lVar6 + 0x668) = (int)plVar8[1];
    *(undefined4 *)(lVar6 + 0x66c) = uVar3;
    *(int *)(lVar6 + 0x670) = (int)lVar7;
    *(undefined4 *)(lVar6 + 0x674) = uVar4;
    *(longlong *)(lVar6 + 0x678) = plVar8[3];
    if (plVar1 != plVar8 + 4) {
      iVar12 = (int)plVar8[5];
      _Src = (void *)plVar8[4];
      *(int *)(lVar6 + 0x690) = iVar12;
      if ((iVar12 == 0) && (*(int *)(lVar6 + 0x694) == 0)) {
        *(undefined4 *)(lVar6 + 0x694) = 0;
      }
      else {
        TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(plVar1,iVar12);
        _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar12 << 5);
      }
    }
    *(undefined4 *)(lVar6 + 0x680) = *(undefined4 *)((longlong)plVar8 + 0x34);
    *(int *)(lVar6 + 0x684) = (int)plVar8[6];
    *(undefined4 *)(lVar6 + 0x664) = *(undefined4 *)((longlong)plVar8 + 4);
  }
  return;
}



// FUNCTION 142cc7ef0 FUN_142cc7ef0 body=105 status=ok
// SIG undefined FUN_142cc7ef0(void)

void FUN_142cc7ef0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x8d0);
  uVar2 = (longlong)*(int *)(param_1 + 0x8d8) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x8d8) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_142c58be0();
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 142cc7f60 FUN_142cc7f60 body=463 status=ok
// SIG undefined FUN_142cc7f60(void)

void FUN_142cc7f60(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar5 = param_1[0x88];
  if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x12f0) == 0)) {
LAB_142cc7fb5:
    cVar2 = '\0';
  }
  else {
    lVar3 = FUN_142ca1c50();
    if ((lVar3 == 0) ||
       (*(longlong *)(lVar5 + 0x1300) == *(longlong *)(*(longlong *)(lVar5 + 0x12f0) + 0x18)))
    goto LAB_142cc7fb5;
    cVar2 = '\x01';
  }
  lVar5 = param_1[0x88];
  *(char *)((longlong)param_1 + 0x8e4) = cVar2;
  if (((cVar2 == '\0') || (lVar5 == 0)) || (*(longlong *)(lVar5 + 0x12f0) == 0)) {
    (**(code **)(*param_1 + 0x348))(param_1,param_2);
    goto LAB_142cc8051;
  }
  lVar3 = FUN_142ca1c50();
  if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0xa48), lVar3 == 0)) {
LAB_142cc802a:
    lVar3 = 0;
  }
  else {
    lVar4 = UMonkeyAnim::StaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142cc802a;
  }
  (**(code **)(*param_1 + 0x350))(param_1,lVar3);
LAB_142cc8051:
  if ((lVar5 != 0) && (lVar3 = *(longlong *)(lVar5 + 0x12f0), lVar3 != 0)) {
    if (*(char *)((longlong)param_1 + 0x8e4) == '\0') {
      FUN_142ca3f90(lVar3,lVar5);
      lVar3 = *(longlong *)(lVar5 + 0x12f0);
    }
    *(undefined8 *)(lVar5 + 0x1300) = *(undefined8 *)(lVar3 + 0x18);
  }
  if (*(char *)((longlong)param_1 + 0x631) != '\0') {
    FUN_142cd92a0(param_1,param_2);
  }
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    lVar3 = FUN_142a07000();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1423b2d70(param_1[4],1);
    }
  }
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  *(undefined4 *)(lVar5 + 0x6b0) = 0xffffffff;
  *(undefined8 *)(lVar5 + 0x6a8) = 0;
  return;
}



// FUNCTION 142cc8130 FUN_142cc8130 body=87 status=ok
// SIG undefined FUN_142cc8130(void)

void FUN_142cc8130(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x778))();
  if ((cVar1 == '\0') && (iVar2 = FUN_142235230(param_1), iVar2 == 3)) {
                    /* WARNING: Could not recover jumptable at 0x000142cc817a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x9a0))(param_1);
    return;
  }
  return;
}



// FUNCTION 142cc8190 FUN_142cc8190 body=141 status=ok
// SIG undefined FUN_142cc8190(void)

void FUN_142cc8190(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x778))();
  if ((cVar1 == '\0') && (iVar2 = FUN_142235230(param_1), iVar2 == 3)) {
    (**(code **)(*param_1 + 0x9a8))(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 142cc8220 FUN_142cc8220 body=120 status=ok
// SIG undefined FUN_142cc8220(void)

void FUN_142cc8220(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((((uint)*(byte *)(param_1 + 7) ^ *(uint *)(param_2 + 0x398)) & 1) == 0) &&
     (lVar1 = *(longlong *)(param_2 + 0x118), lVar1 != 0)) {
    lVar3 = FUN_1429d7ab0();
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
      (**(code **)(*param_1 + 0x2b0))(param_1,lVar1);
    }
  }
  return;
}



// FUNCTION 142cc82a0 thunk_FUN_142ccbbf0 body=5 status=ok
// SIG undefined thunk_FUN_142ccbbf0(void)

void thunk_FUN_142ccbbf0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  longlong *plStackX_10;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 *apuStack_78 [2];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined4 uStack_38;
  
  lVar1 = *(longlong *)(*param_1 + 0xfd8);
  if ((1 < *(byte *)(lVar1 + 0x128)) && (param_2 != (longlong *)0x0)) {
    param_1[0x26] = (longlong)param_2;
  }
  lVar2 = param_1[1];
  bVar8 = false;
  uStack_98 = SUB84(param_1,0);
  uStack_94 = (undefined4)((ulonglong)param_1 >> 0x20);
  lVar7 = lVar2;
  plStackX_10 = param_2;
  if (param_2 == (longlong *)0x0) {
LAB_142ccbd15:
    bVar8 = (bool)((byte)((uint)*(undefined4 *)(lVar7 + 0x28) >> 0x19) & 1);
    if ((*(char *)(lVar1 + 0x128) != '\x03') && ((*(uint *)(lVar7 + 0x2c) & 0x2000) == 0))
    goto LAB_142ccbd9b;
    uStack_48 = 0;
    uStack_38 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x20,auStack_68);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar6 + 1) = uStack_98;
      *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_94;
      puVar6[2] = &plStackX_10;
      *puVar6 = &PTR_FUN_143f4d0b0;
      puVar6[3] = param_3;
    }
    apuStack_78[0] = &LAB_142cbb430;
  }
  else {
    uVar4 = FUN_142e79d90();
    lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    lVar7 = param_1[1];
    if (lVar5 == 0) goto LAB_142ccbd15;
    if ((*(char *)(lVar5 + 0x269) == '\0') || (cVar3 = FUN_1407c3030(lVar5 + 0x3a0), cVar3 != '\0'))
    goto LAB_142ccbd9b;
    bVar8 = (*(uint *)(param_1[1] + 0x28) & 0x4000000) != 0;
    if (bVar8) {
      *(undefined1 *)(param_1 + 0x27) = 1;
    }
    if ((*(char *)(lVar1 + 0x128) != '\x03') && ((*(uint *)(param_1[1] + 0x2c) & 0x2000) == 0))
    goto LAB_142ccbd9b;
    uStack_48 = 0;
    uStack_38 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x20,auStack_68);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar6 + 1) = uStack_98;
      *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_94;
      puVar6[2] = &plStackX_10;
      *puVar6 = &PTR_FUN_143f4d0b0;
      puVar6[3] = param_3;
    }
    apuStack_78[0] = &LAB_142cbb540;
  }
  uVar4 = FUN_14247f500();
  FUN_14247d5a0(uVar4,*param_1,apuStack_78);
LAB_142ccbd9b:
  lVar1 = param_1[1];
  if ((lVar1 != 0) && (lVar1 == lVar2)) {
    if (((*(uint *)((longlong)param_1 + 0x15c) & 0x20) == 0) &&
       ((((*(uint *)(lVar1 + 0x28) & 0x8000) != 0 && ((longlong *)param_1[0x11] != (longlong *)0x0))
        && (plStackX_10 == (longlong *)param_1[0x11])))) {
      *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) | 0x20;
    }
    else if (bVar8 == false) {
      return;
    }
    FUN_142cd34e0(param_1,*(uint *)(lVar1 + 0x28) >> 3 & 0xffffff01,0);
  }
  return;
}



// FUNCTION 142cc82b0 FUN_142cc82b0 body=400 status=ok
// SIG undefined FUN_142cc82b0(void)

void FUN_142cc82b0(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  
  if ((*(byte *)((longlong)param_1 + 0x15c) & 1) == 0) {
    local_50 = *(float *)(param_2 + 0x40);
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    lVar3 = *param_1;
    fVar5 = *(float *)(lVar3 + 400);
    fVar1 = *(float *)(lVar3 + 0x18c);
    fVar2 = *(float *)(lVar3 + 0x194);
    fVar6 = fVar1 * fVar1 + fVar5 * fVar5 + fVar2 * fVar2;
    if (fVar6 == 1.0) {
      local_48 = *(undefined8 *)(lVar3 + 0x18c);
      local_40 = *(float *)(lVar3 + 0x194);
      fVar7 = (float)((ulonglong)local_48 >> 0x20);
      fVar8 = local_40;
      fVar10 = (float)local_48;
    }
    else {
      fVar7 = DAT_1468b5d94;
      fVar8 = DAT_1468b5d98;
      fVar10 = DAT_1468b5d90;
      if (1e-08 <= fVar6) {
        auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar8 = auVar9._0_4_;
        fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
        fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
        fVar10 = fVar1 * fVar8;
        fVar7 = fVar5 * fVar8;
        fVar8 = fVar2 * fVar8;
      }
    }
    local_58._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    local_58._0_4_ = (float)uVar4;
    fVar5 = local_58._4_4_ * fVar7 + (float)local_58 * fVar10 + fVar8 * local_50;
    if (fVar5 < *(float *)((longlong)param_1 + 0x10c) ||
        fVar5 == *(float *)((longlong)param_1 + 0x10c)) {
      local_58 = uVar4;
      uVar4 = FWeakObjectPtr::Get(param_2 + 0x6c);
      FUN_142ccbbf0(param_1,uVar4,&local_58);
    }
  }
  return;
}



// FUNCTION 142cc8440 FUN_142cc8440 body=97 status=ok
// SIG undefined FUN_142cc8440(void)

void FUN_142cc8440(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((*(uint *)(param_1 + 0x15c) & 1) == 0) &&
      ((*(uint *)(*(longlong *)(param_1 + 8) + 0x28) & 0x8000) != 0)) &&
     ((*(uint *)(param_1 + 0x15c) & 0x20) == 0)) {
    lVar1 = FWeakObjectPtr::Get(param_2 + 0x6c);
    if ((*(longlong *)(param_1 + 0x88) != 0) && (lVar1 == *(longlong *)(param_1 + 0x88))) {
      FUN_142ccbbf0(param_1,lVar1,param_2 + 0x38);
    }
  }
  return;
}



// FUNCTION 142cc84b0 FUN_142cc84b0 body=90 status=ok
// SIG undefined FUN_142cc84b0(void)

void FUN_142cc84b0(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_142235230(param_2);
  if (iVar2 != 3) {
    lVar3 = FUN_142cebba0(param_2);
    if (lVar3 != 0) {
      bVar1 = *(byte *)(param_1 + 0x38);
      if ((bVar1 & 2) != 0) {
        FUN_142cf4960(lVar3,0);
        bVar1 = *(byte *)(param_1 + 0x38);
      }
      if ((bVar1 & 4) != 0) {
        FUN_142cf4910(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 142cc8510 FUN_142cc8510 body=39 status=ok
// SIG undefined FUN_142cc8510(void)

void FUN_142cc8510(longlong param_1)

{
  if ((((*(byte *)(param_1 + 0x15c) & 1) == 0) &&
      (*(char *)(*(longlong *)(param_1 + 8) + 0x68) == '\0')) &&
     (*(char *)(*(longlong *)(param_1 + 8) + 0x390) == '\x02')) {
    FUN_142cd34e0(param_1,1,0);
    return;
  }
  return;
}



// FUNCTION 142cc85a0 FUN_142cc85a0 body=91 status=ok
// SIG undefined FUN_142cc85a0(void)

void FUN_142cc85a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_142cbb520;
  uVar2 = FUN_14247f500();
  FUN_14247d5a0(uVar2,*param_1,local_58);
  return;
}



// FUNCTION 142cc8600 FUN_142cc8600 body=106 status=ok
// SIG undefined FUN_142cc8600(void)

void FUN_142cc8600(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  *(undefined8 *)(param_1 + 0xd40) = 0;
  *(undefined8 *)(param_1 + 0xd58) = 0;
  *(undefined8 *)(param_1 + 0xd68) = 0;
  *(undefined4 *)(param_1 + 0xd50) = 0;
  if (*(int *)(param_1 + 0xd54) < 8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0xd48,8);
  }
  plVar1 = *(longlong **)(param_1 + 0x900);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xb30))(plVar1,param_2);
  }
  return;
}



// FUNCTION 142cc8670 FUN_142cc8670 body=42 status=ok
// SIG undefined FUN_142cc8670(void)

void FUN_142cc8670(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  puVar1 = (undefined8 *)FUN_142295480(param_2,local_18);
  FUN_142ccd100(param_1,*puVar1);
  return;
}



// FUNCTION 142cc86a0 FUN_142cc86a0 body=388 status=ok
// SIG undefined FUN_142cc86a0(void)

void FUN_142cc86a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar6 = param_5;
  if (param_5 == 0) {
    puVar8 = (undefined8 *)FUN_142295480(param_2,&param_5);
    FUN_142ccd100(param_1,*puVar8);
    return;
  }
  plVar7 = (longlong *)FUN_142295480(param_2,&param_5);
  plVar1 = (longlong *)(param_1 + 0xd48);
  lVar3 = *plVar1;
  iVar2 = *(int *)(param_1 + 0xd50);
  lVar11 = (longlong)iVar2;
  lVar4 = *plVar7;
  lVar12 = lVar3 + lVar11 * 0x10;
  lVar10 = lVar3;
  do {
    if (lVar10 == lVar12) {
      iVar9 = -1;
LAB_142cc8720:
      if (iVar9 == -1) {
        *(int *)(param_1 + 0xd50) = iVar2 + 1;
        if (*(int *)(param_1 + 0xd54) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2,lVar12,lVar11,lVar4);
        }
        plVar7 = (longlong *)(*plVar1 + lVar11 * 0x10);
        *plVar7 = lVar6;
        plVar7[1] = lVar4;
      }
      else {
        lVar12 = (longlong)iVar9 * 0x10;
        *(longlong *)(lVar12 + lVar3) = lVar6;
        iVar2 = *(int *)(param_1 + 0xd50);
        lVar6 = (longlong)iVar9;
        while (lVar6 < iVar2 + -1) {
          if (lVar6 != lVar6 + 1) {
            lVar4 = *plVar1;
            uVar5 = *(undefined8 *)(lVar12 + lVar4);
            puVar8 = (undefined8 *)(lVar12 + lVar4);
            lVar3 = lVar4 + lVar12;
            *puVar8 = *(undefined8 *)(lVar4 + 0x10 + lVar12);
            *(undefined8 *)(lVar3 + 0x10) = uVar5;
            uVar5 = puVar8[1];
            puVar8[1] = *(undefined8 *)(lVar3 + 0x18);
            *(undefined8 *)(lVar3 + 0x18) = uVar5;
          }
          lVar12 = lVar12 + 0x10;
          lVar6 = lVar6 + 1;
        }
      }
      if (*(int *)(param_1 + 0xd50) != 0) {
        *(undefined8 *)(param_1 + 0xd40) =
             *(undefined8 *)(*plVar1 + -0x10 + (longlong)*(int *)(param_1 + 0xd50) * 0x10);
        return;
      }
      *(undefined8 *)(param_1 + 0xd40) = 0;
      return;
    }
    if (*(longlong *)(lVar10 + 8) == lVar4) {
      iVar9 = (int)(lVar10 - lVar3 >> 4);
      goto LAB_142cc8720;
    }
    lVar10 = lVar10 + 0x10;
  } while( true );
}



// FUNCTION 142cc8830 FUN_142cc8830 body=90 status=ok
// SIG undefined FUN_142cc8830(void)

void FUN_142cc8830(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_142392e90();
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  cVar1 = FUN_1428cdc10(lVar2);
  if (cVar1 == '\0') {
    return;
  }
  FUN_142cc5700(param_1);
  return;
}



// FUNCTION 142cc8890 FUN_142cc8890 body=140 status=ok
// SIG undefined FUN_142cc8890(void)

void FUN_142cc8890(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_142393140();
  plVar3 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar2 = FUN_1423407b0(param_1);
    if (lVar2 == 0) goto LAB_142cc88e5;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  lVar2 = UWorld::GetGameState<APVPGameState>(lVar2);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x540);
  }
LAB_142cc88e5:
  plVar1 = *(longlong **)(param_1 + 0x7c8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x910))(plVar1,param_1);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x6f0))(plVar3,param_1);
  }
  return;
}



// FUNCTION 142cc8920 FUN_142cc8920 body=259 status=ok
// SIG undefined FUN_142cc8920(void)

void FUN_142cc8920(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar2 = FUN_142340f30();
  if (iVar2 != 3) {
    iVar2 = (int)param_1[0xfe] + -1;
    lVar3 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        plVar4 = *(longlong **)(param_1[0xfd] + lVar3 * 8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x418))(plVar4,&DAT_146532190);
          plVar4 = *(longlong **)(param_1[0xfd] + lVar3 * 8);
          (**(code **)(*plVar4 + 0x3b0))(plVar4,0);
        }
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
    }
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  FUN_142393140(param_1,param_2);
  plVar4 = (longlong *)0x0;
  if (param_1[0x24] == 0) {
    lVar3 = FUN_1423407b0(param_1);
    if (lVar3 == 0) goto LAB_142cc89e7;
  }
  lVar3 = param_1[0x24];
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  lVar3 = UWorld::GetGameState<APVPGameState>(lVar3);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x540);
  }
LAB_142cc89e7:
  plVar1 = (longlong *)param_1[0xf9];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x910))(plVar1,param_1);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x6f0))(plVar4,param_1);
  }
  return;
}



// FUNCTION 142cc8a30 thunk_FUN_142ccc2e0 body=5 status=ok
// SIG undefined thunk_FUN_142ccc2e0(void)

void thunk_FUN_142ccc2e0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uStack_38;
  float fStack_30;
  float fStack_20;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x400))();
  uStack_38 = *(undefined8 *)((longlong)param_1 + 0x49c);
  fStack_30 = fVar1 + *(float *)((longlong)param_1 + 0x4a4);
  fStack_20 = fStack_30;
  FUN_142ccf1e0(param_1,&uStack_38);
  *(undefined4 *)((longlong)param_1 + 0x24c) = *(undefined4 *)((longlong)param_1 + 0x254);
  fVar2 = (float)(**(code **)(*param_1 + 0x408))(param_1);
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(float *)(param_1 + 0x4a) = fVar2 - fVar1;
  return;
}



// FUNCTION 142cc8a40 FUN_142cc8a40 body=236 status=ok
// SIG undefined FUN_142cc8a40(void)

void FUN_142cc8a40(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_e8;
  undefined4 local_e4;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_d8 [12];
  undefined4 local_cc;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_e0 = 1;
  local_de = 1;
  local_74 = 0xffffffff;
  local_70 = 0;
  local_6c = 0xffffffff;
  local_68 = 0;
  local_64 = 0xffffffff;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  _guard_xfg_dispatch_icall_nop(local_d8,0,0x90);
  local_cc = 0x3f800000;
  local_48 = 0;
  local_38 = 0;
  local_44 = param_3;
  local_40 = param_4;
  local_3c = param_2;
  (**(code **)(*(longlong *)(param_1 + -0x8b8) + 0x9c0))
            ((longlong *)(param_1 + -0x8b8),*(undefined8 *)(param_1 + 0xc0),&local_e8,1);
  return;
}



// FUNCTION 142cc8b30 FUN_142cc8b30 body=425 status=ok
// SIG undefined FUN_142cc8b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cc8b30(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined1 local_180;
  undefined4 local_170;
  undefined1 local_168 [12];
  undefined4 local_15c;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined1 local_104 [8];
  undefined1 local_fc [20];
  undefined1 local_e8 [16];
  longlong local_d8 [5];
  undefined1 local_b0;
  byte local_af;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (param_1[1] != 0) {
    lVar1 = param_1[-0xc];
    _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
    local_15c = 0x3f800000;
    FWeakObjectPtr::operator=(local_fc,lVar1);
    (**(code **)(*param_1 + 0x18))(param_1,param_2,&local_154,local_e8);
    local_148 = local_154;
    local_170 = 0xbf800000;
    local_140 = local_14c;
    local_134 = 0xbf800000;
    local_13c = 0;
    FWeakObjectPtr::operator=(local_104,param_1[2]);
    local_af = local_af & 0xfe;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_188 = local_d8;
    local_180 = 0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_d8[2] = 0;
    local_d8[3] = 0;
    local_d8[4] = 0;
    local_b0 = 0x40;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0x3f800000;
    local_48 = 0x3f800000;
    local_44 = 0x3f800000;
    local_40 = 0;
    local_38 = 0;
    local_34 = 0x3f800000;
    FUN_142d68ea0(param_1[1],lVar1,local_168,0);
    if (local_68 != 0) {
      plVar2 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar2 = local_78;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_d8[2] != 0) {
      FMemory::Free();
    }
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142cc8d40 ExtraActionOnDamaged_Implementation body=10 status=ok
// SIG undefined ExtraActionOnDamaged_Implementation(void)

void ATTLFlareWeapon::ExtraActionOnDamaged_Implementation(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142cc8d43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x9c8))();
  return;
}



// FUNCTION 142cc8d50 FUN_142cc8d50 body=8 status=ok
// SIG undefined FUN_142cc8d50(void)

void FUN_142cc8d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_142ccf590(param_1,param_4);
  return;
}



// FUNCTION 142cc8d60 FUN_142cc8d60 body=54 status=ok
// SIG undefined FUN_142cc8d60(void)

void FUN_142cc8d60(longlong *param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  *(undefined1 *)(param_1 + 0x147) = 1;
  if ((*(byte *)((longlong)param_1 + 0x56c) & 8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142cc8d89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x9a0))(param_1);
    return;
  }
  return;
}



// FUNCTION 142cc8da0 FUN_142cc8da0 body=900 status=ok
// SIG undefined FUN_142cc8da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc8da0(longlong param_1,undefined1 *param_2,char param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  uint local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined4 local_18c;
  undefined1 local_188;
  undefined1 local_180 [4];
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 local_154;
  undefined4 local_14c;
  undefined1 local_148;
  undefined1 local_144 [4];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 local_108 [192];
  ulonglong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if ((*(undefined1 **)(param_1 + 0x420) != param_2) || (param_3 == '\0')) {
    puVar7 = (undefined1 *)0x0;
    puVar2 = puVar7;
    if (param_3 != '\0') {
      puVar2 = param_2;
    }
    *(undefined1 **)(param_1 + 0x420) = puVar2;
    lVar4 = *(longlong *)(param_2 + 0x3d8);
    if (lVar4 == 0) {
      uVar3 = FUN_1421f9b60();
      lVar4 = UObjectBaseUtility::GetTypedOuter(param_2,uVar3);
      if (lVar4 == 0) {
        lVar4 = UPhysicsConstraintComponent::GetPrivateStaticClass();
      }
    }
    local_1c8 = *(undefined8 *)(lVar4 + 0x18);
    if (*(longlong *)(param_1 + 8) != 0) {
      if (param_3 == '\0') {
        FUN_142cf3f20(*(longlong *)(param_1 + 8),1);
      }
      else {
        FUN_142cff920();
      }
      uVar3 = *(undefined8 *)(param_1 + 8);
      local_144[0] = 0;
      local_140 = 0xffffffff;
      uStack_138 = 0xffffffff;
      local_120 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_110 = DAT_1468b5d98;
      local_118 = _DAT_1468b5d90;
      local_10c = 0;
      local_180[0] = 0;
      local_17c = 0xffffffff;
      uStack_174 = 0xffffffff;
      local_15c = 0;
      local_16c = 0;
      uStack_164 = 0;
      local_14c = DAT_1468b5d98;
      local_154 = _DAT_1468b5d90;
      local_148 = 0;
      local_1c0 = local_1c0 & 0xffffff00;
      uStack_1bc = 0xffffffff;
      uStack_1b8 = 0;
      uStack_1b4 = 0xffffffff;
      uStack_1b0 = 0;
      local_19c = 0;
      uStack_1ac = 0;
      uStack_1a4 = 0;
      local_18c = DAT_1468b5d98;
      local_194 = _DAT_1468b5d90;
      local_188 = 0;
      FUN_142cff0b0(uVar3,&local_1c0,0);
      FUN_142cff0b0(uVar3,local_180,1);
      FUN_142cff0b0(uVar3,local_144,2);
      if (param_3 == '\0') {
        FUN_142dbb5d0(*(longlong *)(param_1 + 8) + 0x8b0,&local_1c8);
      }
      else {
        FUN_142dafbc0();
      }
      if (param_3 == '\0') {
        FUN_142dbb5d0(*(longlong *)(param_1 + 8) + 0x948,&local_1c8);
      }
      else {
        FUN_142dafbc0();
      }
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      if (param_3 == '\0') {
        FUN_142dbb5d0(*(longlong *)(param_1 + 0x18) + 0x290,&local_1c8);
      }
      else {
        FUN_142dafbc0();
      }
      if (param_3 == '\0') {
        FUN_142dbb5d0(*(longlong *)(param_1 + 0x18) + 0x3d0,&local_1c8);
      }
      else {
        FUN_142dafbc0();
      }
    }
    plVar6 = (longlong *)(param_1 + -0x8f8);
    uVar3 = ULevelSequencePlayer::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar3);
    if (lVar4 != 0) {
      if (param_3 == '\0') {
        FUN_142dbb5d0(lVar4 + 0x178,&local_1c8);
      }
      else {
        FUN_142dafbc0();
      }
    }
    if (param_3 == '\0') {
      FUN_142db61a0(param_1 + 0x428,1);
    }
    else {
      FUN_142d9dd10();
      local_3c = 0;
      local_48 = 0;
      local_40 = 0;
      if (plVar6 != (longlong *)0x0) {
        FUN_140725150(plVar6,local_108,0);
      }
      puVar2 = local_108;
      if (local_48 != 0) {
        puVar2 = puVar7;
      }
      plVar6 = (longlong *)((ulonglong)puVar2 | local_48);
      puVar2 = (undefined1 *)((longlong)local_40 & 0x1fffffffffffffff);
      if (plVar6 + local_40 < plVar6) {
        puVar2 = puVar7;
      }
      if (puVar2 != (undefined1 *)0x0) {
        do {
          plVar1 = (longlong *)*plVar6;
          if (plVar1 != (longlong *)0x0) {
            FUN_142db9760(param_1 + 0x428,plVar1);
            puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x4d0))(plVar1);
            local_1c0 = (uint)*puVar5;
            uStack_1bc = (undefined4)((ulonglong)*puVar5 >> 0x20);
            uStack_1b8 = (undefined4)puVar5[1];
            uStack_1b4 = (undefined4)((ulonglong)puVar5[1] >> 0x20);
            uStack_1b0 = *(undefined4 *)(puVar5 + 2);
            uStack_1ac = *(undefined8 *)((longlong)puVar5 + 0x14);
            uStack_1a4 = CONCAT44(uStack_1a4._4_4_,*(undefined4 *)((longlong)puVar5 + 0x1c));
            FCollisionResponseContainer::SetResponse(&local_1c0,2);
            FCollisionResponseContainer::SetResponse(&local_1c0,0);
            FCollisionResponseContainer::SetResponse(&local_1c0,1);
            FCollisionResponseContainer::SetResponse(&local_1c0,7);
            (**(code **)(*plVar1 + 0x840))(plVar1,&local_1c0);
          }
          plVar6 = plVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (puVar7 != puVar2);
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142cc9130 FUN_142cc9130 body=285 status=ok
// SIG undefined FUN_142cc9130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc9130(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_142cfe7f0(*param_1);
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe;
    cVar3 = FUN_142cf3980(*param_1);
    if (cVar3 != '\0') {
      thunk_FUN_142cfe5a0(*param_1);
    }
    iVar4 = FUN_14233f450(*param_1);
    if (iVar4 == 3) {
      (**(code **)(*(longlong *)*param_1 + 0x260))();
      *(undefined4 *)(*param_1 + 0x203c) = 0xffffffff;
    }
    iVar4 = FUN_14233f450(*param_1);
    if (1 < iVar4) {
      plVar1 = (longlong *)*param_1;
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 4;
      (**(code **)(*plVar1 + 0x5a0))(plVar1,*(undefined1 *)((longlong)plVar1 + 0x4b2),0);
      lVar2 = *param_1;
      *(undefined8 *)(lVar2 + 0x18c) = _DAT_1468b5d90;
      *(undefined4 *)(lVar2 + 0x194) = DAT_1468b5d98;
      *(uint *)(*param_1 + 0x4b4) = *(uint *)(*param_1 + 0x4b4) | 0x20;
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfd;
      }
    }
    local_28 = 0;
    local_18 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_142cbb4f0;
    uVar6 = FUN_14247f500();
    FUN_14247d5a0(uVar6,*param_1,local_58);
  }
  return;
}



// FUNCTION 142cc9250 FUN_142cc9250 body=106 status=ok
// SIG undefined FUN_142cc9250(void)

void FUN_142cc9250(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((char)param_1[0x148] != '\0') {
    uVar1 = FWeakObjectPtr::Get((longlong)param_1 + 0xa44);
    (**(code **)(*param_1 + 0x9a8))
              (param_1,param_1 + 0x14a,(int)param_1[0x15c],
               *(undefined1 *)((longlong)param_1 + 0xae4),uVar1);
    _guard_xfg_dispatch_icall_nop(param_1 + 0x148,0,0xa8);
  }
  return;
}



// FUNCTION 142cc92c0 FUN_142cc92c0 body=432 status=ok
// SIG undefined FUN_142cc92c0(void)

void FUN_142cc92c0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  lVar4 = param_2[0x14] + 7 >> 3;
  if ((int)param_1[0x11] == 0) {
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x12,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x12,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x12) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,(longlong)param_1 + 0x94,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,(longlong)param_1 + 0x94,4);
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x94) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    lVar4 = lVar4 + -8;
    if ((lVar4 < *(int *)((longlong)param_1 + 0x94)) &&
       (*(int *)((longlong)param_1 + 0x8c) < *(int *)((longlong)param_1 + 0x94))) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo();
    }
  }
  local_10 = (int)lVar4;
  local_18 = (void *)0x0;
  local_c = 0;
  if (0 < local_10) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_18,0);
  }
  iVar2 = local_10;
  _Src = local_18;
  (**(code **)(*param_2 + 0x50))(param_2,local_18,lVar4);
  if (iVar2 != 0) {
    iVar3 = (int)param_1[0x11];
    if (*(int *)((longlong)param_1 + 0x8c) < iVar3 + iVar2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x10);
      iVar3 = (int)param_1[0x11];
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar3 + param_1[0x10]),_Src,(longlong)iVar2);
    *(int *)(param_1 + 0x11) = (int)param_1[0x11] + iVar2;
  }
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) | 4;
  (**(code **)(*param_1 + 0x318))(param_1);
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 142cc9470 FUN_142cc9470 body=43 status=ok
// SIG undefined FUN_142cc9470(void)

undefined8 FUN_142cc9470(undefined8 param_1,longlong *param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = 0;
  if (local_18 != 0) {
    local_10 = param_2[1];
  }
  FUN_142cd0120(param_1,&local_18);
  return 1;
}



// FUNCTION 142cc94a0 FUN_142cc94a0 body=314 status=ok
// SIG undefined FUN_142cc94a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc94a0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [16];
  
  if (param_1[0x1b] == 0) {
    FUN_1422279d0(param_1,&DAT_146532190);
    lVar1 = param_1[0x2d];
    local_28 = *(float *)(lVar1 + 0x220);
    fStack_24 = *(float *)(lVar1 + 0x224);
    fStack_20 = *(float *)(lVar1 + 0x228);
    plVar5 = (longlong *)FUN_142436c50(local_18,&local_28,param_1);
    lVar1 = param_1[0x2d];
    param_1[0x16] = *plVar5;
    lVar3 = plVar5[1];
    *(int *)(param_1 + 0x17) = (int)lVar3;
    local_28 = *(float *)(lVar1 + 0x210);
    fStack_24 = *(float *)(lVar1 + 0x214);
    fStack_20 = *(float *)(lVar1 + 0x218);
    fStack_1c = *(float *)(lVar1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_24);
    auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_28);
    auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_20);
    auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1c);
    iVar4 = movmskps((int)lVar3,auVar2);
    if (iVar4 != 0) {
      *(float *)(lVar1 + 0x250) = local_28;
      *(float *)(lVar1 + 0x254) = fStack_24;
      *(float *)(lVar1 + 600) = fStack_20;
      *(float *)(lVar1 + 0x25c) = fStack_1c;
      puVar6 = (undefined8 *)FQuat::Rotator(&local_28,local_18);
      *(undefined8 *)(lVar1 + 0x260) = *puVar6;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
    }
    *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)(lVar1 + 0x260);
    *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(lVar1 + 0x268);
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x308))(param_1,local_18);
    param_1[0x13] = *plVar5;
    *(int *)(param_1 + 0x14) = (int)plVar5[1];
    *(undefined8 *)((longlong)param_1 + 0xa4) = _DAT_1468b5d90;
    *(undefined4 *)((longlong)param_1 + 0xac) = DAT_1468b5d98;
  }
  FUN_142237790(param_1);
  return;
}



// FUNCTION 142cc95e0 FUN_142cc95e0 body=66 status=ok
// SIG undefined FUN_142cc95e0(void)

void FUN_142cc95e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  plVar2 = (longlong *)FUN_142dcdcd0(lVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142cc9615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x700))(plVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 142cc9630 FUN_142cc9630 body=39 status=ok
// SIG undefined FUN_142cc9630(void)

void FUN_142cc9630(longlong *param_1)

{
  FUN_1426a2e70();
  (**(code **)(*param_1 + 0xa28))(param_1);
  FUN_142cc6870(param_1);
  return;
}



// FUNCTION 142cc9660 FUN_142cc9660 body=40 status=ok
// SIG undefined FUN_142cc9660(void)

void FUN_142cc9660(longlong param_1,undefined4 param_2)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_resc = *(undefined4 *)(param_1 + 0x1a8);
  local_res8 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1b0,&local_res8);
  return;
}



// FUNCTION 142cc9690 FUN_142cc9690 body=95 status=ok
// SIG undefined FUN_142cc9690(void)

void FUN_142cc9690(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)((longlong)param_1 + 0x763) != param_2) {
    (**(code **)(*param_1 + 0x918))(param_1,*(char *)((longlong)param_1 + 0x763));
    lVar1 = param_1[0x24];
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    plVar2 = (longlong *)FUN_142dcdcd0(lVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142cc96e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x700))(plVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142cc96f0 FUN_142cc96f0 body=74 status=ok
// SIG undefined FUN_142cc96f0(void)

void FUN_142cc96f0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x77c) != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    plVar2 = (longlong *)FUN_142dcdcd0(lVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142cc972d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x700))(plVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142cc9740 FUN_142cc9740 body=78 status=ok
// SIG undefined FUN_142cc9740(void)

void FUN_142cc9740(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x900) != 0) {
    FUN_142cfe440();
  }
  if ((*(longlong *)(param_1 + 0x478) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x478) + 0x484) & 4) == 0)) {
    FUN_142cd8330(param_1);
    return;
  }
  FUN_142ccc5d0(param_1);
  return;
}



// FUNCTION 142cc9790 FUN_142cc9790 body=12 status=ok
// SIG undefined FUN_142cc9790(void)

uint FUN_142cc9790(longlong param_1)

{
  return *(uint *)(param_1 + 0x15c) >> 7 & 0xffffff01;
}



// FUNCTION 142cc97a0 FUN_142cc97a0 body=6 status=ok
// SIG undefined FUN_142cc97a0(void)

void FUN_142cc97a0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



// FUNCTION 142cc97b0 FUN_142cc97b0 body=203 status=ok
// SIG undefined FUN_142cc97b0(void)

void FUN_142cc97b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x7e8);
  iVar5 = *(int *)(param_1 + 0x7f0);
  plVar3 = plVar1;
  do {
    if (plVar3 == plVar1 + iVar5) {
LAB_142cc9846:
      if ((*(int *)(param_1 + 0x7f0) == 0) &&
         (TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x7d8,0), *(char *)(param_1 + 2000) != '\0')) {
        FUN_142ccfee0(param_1,1);
      }
      return;
    }
    if ((*plVar3 != 0) && (*plVar3 == param_2)) {
      iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
      if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x7f0))) {
        iVar4 = (iVar5 - iVar2) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop(plVar1 + iVar2,plVar1 + (iVar2 + 1),(longlong)iVar4 << 3);
          iVar5 = *(int *)(param_1 + 0x7f0);
        }
        *(int *)(param_1 + 0x7f0) = iVar5 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x7e8);
      }
      goto LAB_142cc9846;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 142cc9880 FUN_142cc9880 body=511 status=ok
// SIG undefined FUN_142cc9880(void)

undefined8 FUN_142cc9880(longlong param_1,char *param_2,longlong param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_78;
  float fStack_74;
  float local_70;
  undefined1 local_68 [12];
  undefined1 local_5c [84];
  
  if ((*(byte *)(param_3 + 0x10c) & 2) != 0) {
    if ((*(byte *)(param_3 + 0x10c) & 1) == 0) {
      lVar5 = 0x90;
      lVar4 = 0x14c;
    }
    else {
      lVar5 = 0xcc;
      lVar4 = 0x188;
    }
    lVar1 = *(longlong *)(param_1 + 0x58);
    if (*param_2 != '\0') {
      lVar5 = lVar4;
    }
    fStack_74 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
    local_70 = (*(float *)(param_2 + lVar5 + 0x14) - *(float *)(param_1 + 4)) -
               *(float *)(param_1 + 0x20);
    _local_78 = CONCAT44(fStack_74 - *(float *)(param_1 + 0x1c),
                         (float)*(undefined8 *)(param_2 + 0x28) - *(float *)(param_1 + 0x18));
    pfVar3 = (float *)FVector::Rotation(&local_78,local_68);
    fVar8 = *pfVar3;
    fVar6 = (float)(int)(fVar8 * 0.0027777778) * 360.0;
    if (ABS(fVar8) < ABS(fVar6)) {
      fVar6 = fVar8;
    }
    fVar8 = fVar8 - fVar6;
    if (fVar8 < 0.0) {
      fVar8 = fVar8 + 360.0;
    }
    if (180.0 < fVar8) {
      fVar8 = fVar8 - 360.0;
    }
    pfVar3 = (float *)FVector::Rotation(param_1 + 0xc,local_5c);
    fVar6 = *pfVar3;
    fVar7 = (float)(int)(fVar6 * 0.0027777778) * 360.0;
    if (ABS(fVar6) < ABS(fVar7)) {
      fVar7 = fVar6;
    }
    fVar6 = fVar6 - fVar7;
    if (fVar6 < 0.0) {
      fVar6 = fVar6 + 360.0;
    }
    if (180.0 < fVar6) {
      fVar6 = fVar6 - 360.0;
    }
    pfVar3 = (float *)(lVar1 + 0x1a4);
    if (*pfVar3 <= ABS(fVar8 - fVar6) && ABS(fVar8 - fVar6) != *pfVar3) {
      if (param_4 == (undefined1 *)0x0) {
        return 0;
      }
      *param_4 = 2;
      return 0;
    }
  }
  if (((*(byte *)(param_3 + 0x10c) & 1) != 0) &&
     (cVar2 = FUN_142cbb730(param_1,param_2), cVar2 == '\0')) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 3;
    }
    return 0;
  }
  return 1;
}



// FUNCTION 142cc9a80 FUN_142cc9a80 body=32 status=ok
// SIG undefined FUN_142cc9a80(void)

void FUN_142cc9a80(longlong *param_1)

{
  FUN_1423168d0();
                    /* WARNING: Could not recover jumptable at 0x000142cc9a99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa28))(param_1);
  return;
}



// FUNCTION 142cc9aa0 FUN_142cc9aa0 body=615 status=ok
// SIG undefined FUN_142cc9aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cc9aa0(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  undefined1 local_1a0;
  undefined4 local_190;
  undefined1 local_188 [20];
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined1 local_124 [8];
  undefined4 local_11c;
  undefined4 local_118;
  longlong local_f8 [5];
  undefined1 local_d0;
  byte local_cf;
  code *local_c8;
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  if (param_3 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
    lVar3 = FWeakObjectPtr::Get(param_4 + 0x1d);
    lVar1 = *(longlong *)(param_1 + 0x4c8);
    if ((((lVar3 == 0) ||
         ((*(char *)(param_4 + 0x28) == '\0' && (lVar3 == *(longlong *)(DAT_146b17150 + 0x6c8)))))
        && (lVar1 != 0)) &&
       (((*(byte *)(lVar1 + 0x420) & 1) != 0 && ((*(byte *)(lVar1 + 0x420) & 2) == 0)))) {
      lVar3 = FWeakObjectPtr::Get(lVar1 + 0x484);
    }
    if (lVar3 == 0) {
      uVar4 = FWeakObjectPtr::Get(param_4);
      uVar5 = FWeakObjectPtr::Get(param_4 + 0x21);
      lVar3 = FUN_142cbf780(param_1,uVar5,uVar4);
      if (lVar3 == 0) {
        if (*(longlong **)(param_1 + 0x4c8) == (longlong *)0x0) {
          return;
        }
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x560))();
        if (cVar2 == '\0') {
          return;
        }
        lVar3 = *(longlong *)(DAT_146b17150 + 0x6c8);
        if (lVar3 == 0) {
          return;
        }
      }
    }
    FUN_140729f20(local_188,param_4 + 4);
    local_174 = *param_2;
    local_11c = *param_4;
    local_118 = param_4[1];
    local_16c = *(undefined4 *)(param_2 + 1);
    local_190 = 0xbf800000;
    local_154 = 0xbf800000;
    local_15c = 0;
    local_168 = local_174;
    local_160 = local_16c;
    FWeakObjectPtr::operator=(local_124,lVar3);
    local_cf = local_cf & 0xfe;
    local_c8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_1a0 = 0;
    local_d0 = 0x40;
    if (*(char *)((longlong)param_4 + 10) == '\0') {
      local_d0 = 0x42;
    }
    local_f8[0] = 0;
    local_1a8 = local_f8;
    local_f8[1] = 0;
    local_f8[2] = 0;
    local_f8[3] = 0;
    local_f8[4] = 0;
    local_98 = (longlong *)0x0;
    local_88 = 0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0x3f800000;
    local_68 = 0x3f800000;
    local_64 = 0x3f800000;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0x3f800000;
    FUN_142d68ea0(param_3,param_1,local_188,*(undefined1 *)((longlong)param_4 + 9));
    if (local_88 != 0) {
      plVar6 = local_b8;
      if (local_98 != (longlong *)0x0) {
        plVar6 = local_98;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_f8[2] != 0) {
      FMemory::Free();
    }
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142cc9d10 FUN_142cc9d10 body=790 status=ok
// SIG undefined FUN_142cc9d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cc9d10(longlong param_1,undefined4 *param_2,float param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_268 [32];
  undefined1 local_248;
  undefined1 local_240;
  undefined4 local_238;
  longlong *local_230;
  undefined8 *local_228;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  float local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8 [192];
  longlong local_108 [5];
  undefined1 local_e0;
  byte local_df;
  code *local_d8;
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_58;
  
  if (param_4 != 0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_268;
    lVar2 = (**(code **)(*(longlong *)(param_1 + 0x8b8) + 0x50))();
    if ((lVar2 == 0) || (cVar1 = FUN_1405cd930(lVar2), cVar1 == '\0')) {
      FUN_142cc9aa0(param_1,param_5,param_4,param_6);
    }
    else {
      FWeakObjectPtr::operator=(&local_218,param_1);
      FWeakObjectPtr::operator=(&local_210,param_4);
      local_1d8 = *param_5;
      local_1e8 = local_218;
      local_1e4 = local_214;
      local_1e0 = local_210;
      local_1dc = local_20c;
      local_1d0 = (undefined4)param_5[1];
      FUN_142cb20b0(local_1c8,param_6);
      plVar3 = (longlong *)FMemory::Realloc(0,0xf0,0);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_GetPoolName_145853ed0;
        *(undefined4 *)(plVar3 + 1) = local_1e8;
        *(undefined4 *)((longlong)plVar3 + 0xc) = local_1e4;
        *(undefined4 *)(plVar3 + 2) = local_1e0;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_1dc;
        plVar3[3] = local_1d8;
        *(undefined4 *)(plVar3 + 4) = local_1d0;
        FUN_142cb20b0(plVar3 + 5,local_1c8);
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar3[0x1d] = lVar2;
        *plVar3 = (longlong)&PTR_GetPoolName_145853f18;
      }
      local_df = local_df & 0xfe;
      local_d8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_e0 = 0x40;
      if (*(char *)(param_6 + 10) == '\0') {
        local_e0 = 0x42;
      }
      local_88 = 0;
      uStack_80 = 0x3f80000000000000;
      local_68 = 0;
      local_108[0] = 0;
      local_108[1] = 0;
      local_108[2] = 0;
      local_108[3] = 0;
      local_108[4] = 0;
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      local_78 = 0x3f800000;
      local_74 = 0x3f800000;
      local_70 = 0;
      local_64 = 0x3f800000;
      local_1f8 = 0;
      local_1f0 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_1f8);
      }
      local_208 = *param_2;
      local_228 = &local_1f8;
      local_204 = param_2[1];
      local_230 = local_108;
      local_200 = (float)param_2[2] - param_3;
      local_248 = *(undefined1 *)(param_6 + 9);
      local_238 = 3;
      local_240 = 0;
      FUN_142d689b0(param_4,param_1,param_2,&local_208);
      if (local_98 != 0) {
        plVar4 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar4 = local_a8;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_108[2] != 0) {
        FMemory::Free();
      }
      if (local_108[0] != 0) {
        FMemory::Free();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar2 = FMemory::Realloc(plVar3,0,0);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 142cca030 FUN_142cca030 body=1655 status=ok
// SIG undefined FUN_142cca030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cca030(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  float fVar30;
  undefined8 local_res10;
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1e8;
  float local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  float local_1a8;
  byte local_198 [4];
  undefined4 local_194;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  byte local_f8;
  undefined4 local_f4;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
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
  undefined1 local_68;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (param_2 != 0) {
    lVar13 = 0;
    lVar2 = param_1[0x98];
    if ((param_4 != '\0') && (lVar11 = FUN_1423ac7e0(lVar2), lVar11 != 0)) {
      lVar12 = UMonkeyAnim::StaticClass();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        _guard_xfg_dispatch_icall_nop(local_198,0,0x90);
        iVar1 = *(int *)(lVar2 + 0xc);
        local_18c = 0x3f800000;
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar15 = iVar1 >> 0x1f & 0xffff;
          uVar10 = iVar1 + uVar15;
          lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                   (longlong)(int)((uVar10 & 0xffff) - uVar15) * 0x18;
        }
        if ((*(uint *)(lVar13 + 8) >> 0x1d & 1) == 0) {
          puVar14 = (undefined8 *)
                    (**(code **)(param_1[0x117] + 0x38))
                              (param_1 + 0x117,&local_1f8,*(undefined4 *)(param_3 + 0xac));
          puVar16 = *(undefined8 **)(lVar11 + 0x8d0);
          local_res10 = *puVar14;
          puVar14 = puVar16 + *(int *)(lVar11 + 0x8d8);
          for (; puVar16 != puVar14; puVar16 = puVar16 + 1) {
            cVar9 = FUN_142c58bf0(*puVar16,&local_res10,local_198);
            if (cVar9 != '\0') {
              if (((local_198[0] & 1) == 0) || ((local_198[0] & 2) != 0)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
              if (bVar8) {
                FUN_142cb20b0(local_108,param_3);
                local_ec = local_18c;
                local_f8 = local_f8 ^ (local_f8 ^ local_198[0]) & 3;
                local_f4 = local_194;
                local_e4 = local_184;
                local_d8 = local_178;
                local_cc = local_16c;
                local_c0 = local_160;
                local_f0 = local_f0 ^ (local_f0 ^ local_190) & 1;
                local_dc = local_17c;
                local_d0 = local_170;
                local_c4 = local_164;
                local_b8 = local_158;
                local_ac = local_14c;
                local_a0 = local_140;
                local_98 = local_138;
                local_94 = local_134;
                local_90 = local_130;
                local_8c = local_12c;
                local_88 = local_128;
                local_84 = local_124;
                local_80 = local_120;
                local_b4 = local_154;
                local_78 = local_118;
                local_a8 = local_148;
                local_70 = local_110;
                local_e8 = local_188;
                local_9c = local_13c;
                local_68 = 1;
                FUN_142cc9aa0(param_1,&local_e4,param_2,local_108);
                return;
              }
              break;
            }
          }
        }
      }
    }
    lVar13 = param_1[0x2d];
    if (lVar13 == 0) {
      local_1f8 = _DAT_1468b5d90;
      local_1f0 = DAT_1468b5d98;
    }
    else {
      local_1f8 = *(undefined8 *)(lVar13 + 0x220);
      local_1f0 = *(float *)(lVar13 + 0x228);
    }
    lVar13 = param_1[0x9a];
    local_1e8 = local_1f8;
    local_1e0 = local_1f0;
    if (lVar13 != 0) {
      uVar10 = *(uint *)(lVar13 + 0x230) & _DAT_146b30f30;
      uVar15 = *(uint *)(lVar13 + 0x234) & uRam0000000146b30f34;
      auVar24._4_4_ = uVar15;
      auVar24._0_4_ = uVar10;
      uVar22 = *(uint *)(lVar13 + 0x238) & uRam0000000146b30f38;
      auVar17._12_4_ = *(uint *)(lVar13 + 0x23c) & uRam0000000146b30f3c;
      auVar24._8_4_ = uVar22;
      auVar24._12_4_ = auVar17._12_4_;
      auVar25._4_4_ = uVar22;
      auVar25._0_4_ = uVar15;
      auVar25._8_4_ = uVar10;
      auVar25._12_4_ = auVar17._12_4_;
      auVar25 = minps(auVar24,auVar25);
      auVar17._4_4_ = uVar10;
      auVar17._0_4_ = uVar22;
      auVar17._8_4_ = uVar15;
      auVar25 = minps(auVar25,auVar17);
      local_res10 = CONCAT44(local_res10._4_4_,auVar25._0_4_);
      local_1e0 = local_1f0 + auVar25._0_4_ * *(float *)(lVar13 + 0x710) * -0.95;
    }
    local_1c8 = 0;
    (**(code **)(param_1[0x117] + 0x18))
              (param_1 + 0x117,*(undefined4 *)(param_3 + 0xac),&local_1b0,&local_1c8);
    local_res10 = 0;
    if (local_1c8 != 0) {
      local_1e8 = CONCAT44(local_1ac,local_1b0);
      local_1e0 = local_1a8;
      if ((lVar13 == 0) ||
         (cVar9 = (**(code **)(*param_1 + 0x780))(param_1), local_1a8 = local_1e0, cVar9 == '\0')) {
        fVar30 = 16.0;
        if (lVar13 != 0) {
          uVar10 = *(uint *)(lVar13 + 0x230) & _DAT_146b30f30;
          uVar15 = *(uint *)(lVar13 + 0x234) & uRam0000000146b30f34;
          auVar27._4_4_ = uVar15;
          auVar27._0_4_ = uVar10;
          uVar22 = *(uint *)(lVar13 + 0x238) & uRam0000000146b30f38;
          auVar20._12_4_ = *(uint *)(lVar13 + 0x23c) & uRam0000000146b30f3c;
          auVar27._8_4_ = uVar22;
          auVar27._12_4_ = auVar20._12_4_;
          auVar5._4_4_ = uVar22;
          auVar5._0_4_ = uVar15;
          auVar5._8_4_ = uVar10;
          auVar5._12_4_ = auVar20._12_4_;
          auVar25 = minps(auVar27,auVar5);
          auVar20._4_4_ = uVar10;
          auVar20._0_4_ = uVar22;
          auVar20._8_4_ = uVar15;
          auVar25 = minps(auVar25,auVar20);
          fVar23 = auVar25._0_4_ * *(float *)(lVar13 + 0x710) * 0.125;
          fVar30 = 16.0;
          if (16.0 < fVar23) {
            fVar30 = fVar23;
          }
        }
        local_1e0 = fVar30 + local_1a8;
        if (lVar13 != 0) {
          lVar2 = param_1[0x2d];
          if (lVar2 == 0) {
            local_1b8 = DAT_1468b5d98;
            puVar14 = &local_1c0;
            local_1c0 = _DAT_1468b5d90;
          }
          else {
            local_1f8 = *(undefined8 *)(lVar2 + 0x220);
            puVar14 = &local_1f8;
            local_1f0 = *(float *)(lVar2 + 0x228);
          }
          uVar10 = *(uint *)(lVar13 + 0x230) & _DAT_146b30f30;
          uVar15 = *(uint *)(lVar13 + 0x234) & uRam0000000146b30f34;
          auVar28._4_4_ = uVar15;
          auVar28._0_4_ = uVar10;
          uVar22 = *(uint *)(lVar13 + 0x238) & uRam0000000146b30f38;
          auVar21._12_4_ = *(uint *)(lVar13 + 0x23c) & uRam0000000146b30f3c;
          local_1d0 = *(float *)(puVar14 + 1);
          auVar28._8_4_ = uVar22;
          auVar28._12_4_ = auVar21._12_4_;
          auVar6._4_4_ = uVar22;
          auVar6._0_4_ = uVar15;
          auVar6._8_4_ = uVar10;
          auVar6._12_4_ = auVar21._12_4_;
          auVar25 = minps(auVar28,auVar6);
          auVar21._4_4_ = uVar10;
          auVar21._0_4_ = uVar22;
          auVar21._8_4_ = uVar15;
          minps(auVar25,auVar21);
        }
      }
      else {
        lVar11 = param_1[0x2d];
        if (lVar11 == 0) {
          local_1f8 = _DAT_1468b5d90;
          local_1f0 = DAT_1468b5d98;
        }
        else {
          local_1f8 = *(undefined8 *)(lVar11 + 0x220);
          local_1f0 = *(float *)(lVar11 + 0x228);
        }
        uVar10 = _DAT_146b30f30 & *(uint *)(lVar13 + 0x230);
        uVar15 = uRam0000000146b30f34 & *(uint *)(lVar13 + 0x234);
        auVar26._4_4_ = uVar15;
        auVar26._0_4_ = uVar10;
        uVar22 = uRam0000000146b30f38 & *(uint *)(lVar13 + 0x238);
        auVar18._12_4_ = uRam0000000146b30f3c & *(uint *)(lVar13 + 0x23c);
        local_1d8 = local_1f8;
        auVar26._8_4_ = uVar22;
        auVar26._12_4_ = auVar18._12_4_;
        auVar18._4_4_ = uVar10;
        auVar18._0_4_ = uVar22;
        auVar18._8_4_ = uVar15;
        local_1d0 = local_1f0;
        auVar3._4_4_ = uVar22;
        auVar3._0_4_ = uVar15;
        auVar3._8_4_ = uVar10;
        auVar3._12_4_ = auVar18._12_4_;
        auVar25 = minps(auVar26,auVar3);
        auVar25 = minps(auVar25,auVar18);
        local_1e0 = (local_1f0 - auVar25._0_4_ * *(float *)(lVar13 + 0x710)) + 32.0;
        local_48 = *(undefined8 *)(lVar2 + 0x220);
        uStack_40 = *(undefined8 *)(lVar2 + 0x228);
        if (lVar11 == 0) {
          local_1d8 = _DAT_1468b5d90;
          puVar14 = &local_1d8;
          local_1d0 = DAT_1468b5d98;
        }
        else {
          local_1f8 = *(undefined8 *)(lVar11 + 0x220);
          puVar14 = &local_1f8;
          local_1f0 = *(float *)(lVar11 + 0x228);
        }
        uVar10 = _DAT_146b30f30 & *(uint *)(lVar13 + 0x230);
        uVar15 = uRam0000000146b30f34 & *(uint *)(lVar13 + 0x234);
        uVar22 = uRam0000000146b30f38 & *(uint *)(lVar13 + 0x238);
        uVar29 = uRam0000000146b30f3c & *(uint *)(lVar13 + 0x23c);
        local_1b8 = *(float *)(puVar14 + 1);
        auVar19._4_4_ = uVar15;
        auVar19._0_4_ = uVar10;
        auVar19._8_4_ = uVar22;
        auVar19._12_4_ = uVar29;
        auVar4._4_4_ = uVar22;
        auVar4._0_4_ = uVar15;
        auVar4._8_4_ = uVar10;
        auVar4._12_4_ = uVar29;
        auVar25 = minps(auVar19,auVar4);
        auVar7._4_4_ = uVar10;
        auVar7._0_4_ = uVar22;
        auVar7._8_4_ = uVar15;
        auVar7._12_4_ = uVar29;
        minps(auVar25,auVar7);
      }
    }
    FUN_142cc9d10(param_1,&local_1e8);
  }
  return;
}



// FUNCTION 142cca6b0 FUN_142cca6b0 body=990 status=ok
// SIG undefined FUN_142cca6b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cca6b0(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_res8;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined2 local_100;
  undefined1 local_fe;
  undefined4 local_fc;
  undefined1 local_f8 [4];
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined1 local_a4 [8];
  undefined1 local_9c [8];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  lVar9 = *(longlong *)(param_1 + 0x900);
  if (lVar9 == 0) {
    return;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x9a8) <= param_2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x9a0) + (longlong)param_2 * 8);
  }
  else {
    local_res8 = 0;
    lVar8 = 0;
  }
  if (((*(char *)(lVar9 + 0x248) == '\x06') && (*(char *)(lVar9 + 0x249) == '\0')) &&
     (*(longlong *)(lVar9 + 0x178) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    if (*(longlong *)(param_1 + 0x980) == 0) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x4c0);
    pcVar7 = "R_Hand";
    if (param_2 != 0) {
      pcVar7 = "L_Hand";
    }
    puVar6 = (undefined8 *)FName::FName(&local_res8,pcVar7,1);
    cVar4 = FUN_142cc0d90(uVar2,*puVar6,&local_118);
    if (cVar4 == '\0') {
      return;
    }
    local_108 = 0xffffffff;
    local_104 = 0;
    local_100 = 1;
    local_fe = 1;
    local_94 = 0xffffffff;
    local_90 = 0;
    local_8c = 0xffffffff;
    local_88 = 0;
    local_84 = 0xffffffff;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    _guard_xfg_dispatch_icall_nop(local_f8,0,0x90);
    local_ec = 0x3f800000;
    local_120 = local_110 - 20.0;
    local_68 = 0;
    local_5c = 0;
    local_64 = param_3;
    local_60 = param_4;
    local_58 = lVar8;
    FUN_142cc9d10(param_1,&local_128,0x43160000,*(undefined8 *)(param_1 + 0x980),&local_118,
                  &local_108);
    return;
  }
  if (*(longlong *)(param_1 + 0x988) == 0) {
    return;
  }
  lVar9 = *(longlong *)(lVar9 + 0x1358);
  if (lVar9 != 0) {
    lVar5 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142cca7ab;
  }
  lVar9 = 0;
LAB_142cca7ab:
  lVar5 = FUN_142cbf780(param_1,0,lVar9);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(DAT_146b17150 + 0x6c8);
  }
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    local_128 = _DAT_1468b5d90;
    local_120 = (float)DAT_1468b5d98;
  }
  else {
    local_128 = *(undefined8 *)(lVar1 + 0x220);
    local_120 = *(float *)(lVar1 + 0x228);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x4c0);
  pcVar7 = "R_Hand";
  local_110 = local_120;
  local_118 = local_128;
  if (param_2 != 0) {
    pcVar7 = "L_Hand";
  }
  puVar6 = (undefined8 *)FName::FName(&local_res8,pcVar7,1);
  FUN_142cc0d90(uVar2,*puVar6,&local_118);
  _guard_xfg_dispatch_icall_nop(&local_108,0,0x90);
  local_fc = 0x3f800000;
  FWeakObjectPtr::operator=(local_9c,lVar9);
  local_e8 = local_118;
  local_f4 = local_118;
  local_120 = -1.0;
  local_e0 = local_110;
  local_ec = local_110;
  local_d4 = 0xbf800000;
  local_dc = 0;
  FWeakObjectPtr::operator=(local_a4,lVar5);
  FUN_1405cd7d0(param_1,param_3,param_4,lVar8,CONCAT44(uVar10,param_2));
  FUN_142d68ea0(*(undefined8 *)(param_1 + 0x988),param_1,&local_108,0,&DAT_1466ad4f0,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  FUN_1405c53e0(param_1);
  return;
}



// FUNCTION 142ccaa90 FUN_142ccaa90 body=529 status=ok
// SIG undefined FUN_142ccaa90(void)

void FUN_142ccaa90(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_c8 [12];
  undefined4 local_bc;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined8 local_34;
  int local_2c;
  undefined8 local_28;
  
  iVar1 = (int)param_1[0x133];
  if (((char)param_1[0x12e] == '\0') || (iVar1 < 1)) {
    local_d8 = 0xffffffff;
    local_d4 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_d0 = 1;
    local_ce = 1;
    local_64 = 0xffffffff;
    local_5c = 0xffffffff;
    local_54 = 0xffffffff;
    _guard_xfg_dispatch_icall_nop(local_c8,0,0x90);
    local_bc = 0x3f800000;
    local_38 = 0;
    local_34 = 0x3f800000;
    local_28 = 0;
    if (iVar1 < 1) {
      local_2c = 0;
    }
    else {
      iVar3 = rand();
      iVar3 = (int)((float)iVar3 * 3.051851e-05 * (float)iVar1);
      local_2c = iVar1 + -1;
      if (iVar3 <= iVar1 + -1) {
        local_2c = iVar3;
      }
    }
    (**(code **)(*param_1 + 0x9c0))(param_1,param_1[0x12d],&local_d8,1);
  }
  else {
    iVar3 = 0;
    uVar4 = 1;
    do {
      local_d8 = 0xffffffff;
      local_d4 = 0;
      local_d0 = 1;
      local_64 = 0xffffffff;
      local_60 = 0;
      local_5c = 0xffffffff;
      local_58 = 0;
      local_54 = 0xffffffff;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      _guard_xfg_dispatch_icall_nop(local_c8,0,0x90);
      local_bc = 0x3f800000;
      local_38 = 0;
      local_34 = 0x3f800000;
      local_28 = 0;
      local_ce = uVar4;
      local_2c = iVar3;
      (**(code **)(*param_1 + 0x9c0))(param_1,param_1[0x12d],&local_d8,1);
      iVar3 = iVar3 + 1;
      uVar4 = 0;
    } while (iVar3 < iVar1);
  }
  lVar2 = FUN_1405c6c00();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x128) != 0)) {
    FUN_1405cfc80(param_1);
  }
  iVar1 = FUN_142235230(param_1);
  if (iVar1 != 3) {
    FUN_142e35cf0(param_1);
  }
  return;
}



// FUNCTION 142ccacb0 FUN_142ccacb0 body=1829 status=ok
// SIG undefined FUN_142ccacb0(void)

void FUN_142ccacb0(longlong *param_1,longlong param_2,float param_3,char param_4,longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar13;
  char *pcVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  char *pcVar17;
  char *pcVar18;
  int iVar19;
  float fVar20;
  ulonglong in_stack_fffffffffffffc38;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined2 local_3a0;
  undefined1 local_39e;
  undefined1 local_398 [12];
  undefined4 local_38c;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined1 local_308;
  undefined8 local_304;
  ulonglong local_2fc;
  undefined4 local_2f4;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined2 local_2e0;
  undefined1 local_2de;
  undefined1 local_2d8 [12];
  undefined4 local_2cc;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined1 local_248;
  undefined8 local_244;
  undefined8 local_23c;
  undefined4 local_234;
  undefined **local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  void *local_208;
  int local_200;
  undefined4 local_1fc;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined4 local_1f4;
  byte local_1f0;
  undefined1 local_1e8 [24];
  undefined1 local_1d0 [24];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  void *local_128;
  int local_120;
  undefined1 local_118;
  undefined1 local_117;
  undefined4 local_114;
  byte local_110;
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  char *pcVar12;
  
  if (param_5 == 0) {
    param_5 = param_1[300];
  }
  if (param_5 != 0) {
    iVar4 = *(int *)(param_5 + 0x38);
    fVar20 = 0.0;
    pcVar12 = (char *)0x0;
    pcVar17 = (char *)0xffffffff;
    pcVar13 = pcVar12;
    pcVar18 = (char *)0xffffffff;
    if (3 < iVar4) {
      pcVar14 = (char *)0x2;
      pcVar10 = (char *)(*(longlong *)(param_5 + 0x30) + 0x28);
      pfVar5 = (float *)(*(longlong *)(param_5 + 0x30) + 0x54);
      do {
        fVar3 = *(float *)(pcVar10 + -0x24);
        if (((fVar3 < param_3) || ((param_4 != '\0' && (pcVar10[-0x28] != '\0')))) &&
           (fVar20 < fVar3)) {
          pcVar13 = pcVar10 + -0x28;
          pcVar17 = pcVar12;
          fVar20 = fVar3;
        }
        fVar3 = pfVar5[-10];
        iVar19 = (int)pcVar14;
        if (((fVar3 < param_3) || ((param_4 != '\0' && (*pcVar10 != '\0')))) && (fVar20 < fVar3)) {
          pcVar17 = (char *)(ulonglong)(iVar19 - 1);
          pcVar13 = pcVar10;
          fVar20 = fVar3;
        }
        fVar3 = *pfVar5;
        if (((fVar3 < param_3) || ((param_4 != '\0' && (pcVar10[0x28] != '\0')))) &&
           (fVar20 < fVar3)) {
          pcVar13 = pcVar10 + 0x28;
          pcVar17 = pcVar14;
          fVar20 = fVar3;
        }
        fVar3 = pfVar5[10];
        if (((fVar3 < param_3) || ((param_4 != '\0' && (pcVar10[0x50] != '\0')))) &&
           (fVar20 < fVar3)) {
          pcVar13 = pcVar10 + 0x50;
          pcVar17 = (char *)(ulonglong)(iVar19 + 1);
          fVar20 = fVar3;
        }
        pcVar10 = pcVar10 + 0xa0;
        pfVar5 = pfVar5 + 0x28;
        uVar11 = (int)pcVar12 + 4;
        pcVar12 = (char *)(ulonglong)uVar11;
        pcVar14 = (char *)(ulonglong)(iVar19 + 4);
        pcVar18 = pcVar17;
      } while ((int)uVar11 < iVar4 + -3);
    }
    uVar16 = SUB84(pcVar18,0);
    if ((int)pcVar12 < iVar4) {
      pcVar17 = (char *)(*(longlong *)(param_5 + 0x30) + (longlong)(int)pcVar12 * 0x28);
      do {
        fVar3 = *(float *)(pcVar17 + 4);
        if (((fVar3 < param_3) || ((param_4 != '\0' && (*pcVar17 != '\0')))) && (fVar20 < fVar3)) {
          pcVar13 = pcVar17;
          pcVar18 = pcVar12;
          fVar20 = fVar3;
        }
        uVar16 = SUB84(pcVar18,0);
        pcVar17 = pcVar17 + 0x28;
        uVar11 = (int)pcVar12 + 1;
        pcVar12 = (char *)(ulonglong)uVar11;
      } while ((int)uVar11 < iVar4);
    }
    if (pcVar13 != (char *)0x0) {
      if (*(longlong *)(pcVar13 + 0x18) != 0) {
        lVar6 = FUN_142e20fc0();
        for (lVar7 = *(longlong *)(pcVar13 + 0x18); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30))
        {
          if (lVar7 == lVar6) {
            if (*(longlong *)(pcVar13 + 0x18) != 0) {
              FUN_142e27720();
              lVar7 = (**(code **)(*param_1 + 0x628))(param_1);
              if (lVar7 != 0) {
                FUN_142c62180(local_148);
                local_220 = local_140;
                local_218 = local_138;
                local_208 = (void *)0x0;
                local_210 = local_130;
                local_117 = 2;
                local_228 = &PTR_FUN_143ff6170;
                local_200 = local_120;
                if (local_120 == 0) {
                  local_1fc = 0;
                }
                else {
                  TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy
                            (&local_208,local_120,0);
                  _guard_xfg_dispatch_icall_nop(local_208,local_128,(longlong)local_120 * 0x38);
                }
                local_1f8 = local_118;
                local_1f0 = local_1f0 ^ (local_1f0 ^ local_110) & 7;
                local_1f4 = local_114;
                local_1f7 = local_117;
                FUN_1405e0d90(local_1e8,local_108);
                FUN_1405e0d90(local_1d0,local_f0);
                FUN_1405e0d90(local_1b8,local_d8);
                FUN_1405e0d90(local_1a0,local_c0);
                local_188 = local_a8;
                local_184 = local_a4;
                local_180 = local_a0;
                local_178 = local_98;
                local_170 = local_90;
                local_17c = local_9c;
                local_168 = local_88;
                if (local_88 != 0) {
                  LOCK();
                  *(int *)(local_88 + 0xc) = *(int *)(local_88 + 0xc) + 1;
                  UNLOCK();
                }
                FUN_142c7bb40(lVar7,local_160,*(undefined8 *)(pcVar13 + 0x18),&local_228,
                              in_stack_fffffffffffffc38 & 0xffffffffffffff00);
                if (local_158 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_158 + 1;
                  lVar7 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar7 == 1) {
                    (**(code **)*local_158)(local_158);
                    LOCK();
                    piVar2 = (int *)((longlong)local_158 + 0xc);
                    iVar4 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      (**(code **)(*local_158 + 8))(local_158);
                    }
                  }
                }
                FUN_142c63c50(local_148);
              }
            }
            break;
          }
        }
      }
      if (*(longlong *)(pcVar13 + 8) != 0) {
        if (pcVar13[0x10] == '\0') {
          FUN_142d68ea0(*(longlong *)(pcVar13 + 8),param_1,param_2,0,&DAT_1466ad4f0,0,pcVar18);
        }
        else {
          iVar4 = (int)param_1[0x133];
          if (((char)param_1[0x12e] == '\0') || (iVar4 < 1)) {
            local_3a8 = 0xffffffff;
            local_3a4 = 0;
            local_3a0 = 1;
            local_39e = 1;
            local_334 = 0xffffffff;
            local_330 = 0;
            local_32c = 0xffffffff;
            local_328 = 0;
            local_324 = 0xffffffff;
            local_320 = 0;
            local_318 = 0;
            local_310 = 0;
            _guard_xfg_dispatch_icall_nop(local_398,0,0x90);
            local_38c = 0x3f800000;
            local_308 = 0;
            local_304 = 0x3f800000;
            local_2fc = 0;
            local_2f4 = 0;
            FUN_140729f20(local_398,param_2);
            uVar8 = FWeakObjectPtr::Get(param_2 + 0x6c);
            FWeakObjectPtr::operator=(&local_3a8,uVar8);
            if (iVar4 < 1) {
              local_2fc = local_2fc & 0xffffffff00000000;
            }
            else {
              iVar19 = rand();
              iVar9 = (int)((float)iVar19 * 3.051851e-05 * (float)iVar4);
              iVar19 = iVar4 + -1;
              if (iVar9 <= iVar4 + -1) {
                iVar19 = iVar9;
              }
              local_2fc = CONCAT44(local_2fc._4_4_,iVar19);
            }
            (**(code **)(*param_1 + 0x9c0))(param_1,*(undefined8 *)(pcVar13 + 8),&local_3a8,0);
          }
          else {
            iVar19 = 0;
            uVar15 = 1;
            do {
              local_2e4 = 0;
              local_270 = 0;
              local_268 = 0;
              local_260 = 0;
              local_250 = 0;
              local_2e8 = 0xffffffff;
              local_2e0 = 1;
              local_274 = 0xffffffff;
              local_26c = 0xffffffff;
              local_264 = 0xffffffff;
              local_258 = 0;
              _guard_xfg_dispatch_icall_nop(local_2d8,0,0x90);
              local_2cc = 0x3f800000;
              local_23c = 0;
              local_234 = 0;
              local_248 = 0;
              local_244 = 0x3f800000;
              local_2de = uVar15;
              FUN_140729f20(local_2d8,param_2);
              uVar8 = FWeakObjectPtr::Get(param_2 + 0x6c);
              FWeakObjectPtr::operator=(&local_2e8,uVar8);
              local_23c = CONCAT44(local_23c._4_4_,iVar19);
              (**(code **)(*param_1 + 0x9c0))(param_1,*(undefined8 *)(pcVar13 + 8),&local_2e8,0);
              iVar19 = iVar19 + 1;
              uVar15 = 0;
            } while (iVar19 < iVar4);
            uVar16 = SUB84(pcVar18,0);
          }
        }
      }
      if (*(longlong *)(pcVar13 + 0x20) != 0) {
        FUN_1405cfc80(param_1);
      }
      local_78 = *(undefined8 *)pcVar13;
      uStack_70 = *(undefined8 *)(pcVar13 + 8);
      local_68 = *(undefined4 *)(pcVar13 + 0x10);
      uStack_64 = *(undefined4 *)(pcVar13 + 0x14);
      uStack_60 = *(undefined4 *)(pcVar13 + 0x18);
      uStack_5c = *(undefined4 *)(pcVar13 + 0x1c);
      local_58 = *(undefined8 *)(pcVar13 + 0x20);
      local_50 = uVar16;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x136,&local_78);
      iVar4 = FUN_142235230(param_1);
      if (iVar4 != 3) {
        FUN_142e35d30(param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 142ccb3f0 FUN_142ccb3f0 body=175 status=ok
// SIG undefined FUN_142ccb3f0(void)

void FUN_142ccb3f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  
  if (*(char *)(param_1 + 0x763) != '\0') {
    if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar2 = FUN_1423407b0(), lVar2 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x120);
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_1);
      }
      lVar2 = UWorld::GetGameState<APVPGameState>(lVar2);
      if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x540), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x718))(plVar1,param_2,param_1);
      }
    }
    if (param_2 != (longlong *)0x0) {
      uVar3 = FUN_142e035e0();
      local_res8 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
      if (local_res8 != 0) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x7a0,&local_res8);
      }
    }
    return;
  }
  return;
}



// FUNCTION 142ccb4a0 FUN_142ccb4a0 body=162 status=ok
// SIG undefined FUN_142ccb4a0(void)

void FUN_142ccb4a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar2 = FUN_1423407b0();
    if (lVar2 == 0) goto LAB_142ccb502;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  lVar2 = UWorld::GetGameState<APVPGameState>(lVar2);
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x540), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x720))(plVar1,param_2,param_1);
  }
LAB_142ccb502:
  if (param_2 != (longlong *)0x0) {
    uVar3 = FUN_142e035e0();
    local_res8 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
    if (local_res8 != 0) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x7b0,&local_res8);
    }
  }
  return;
}



// FUNCTION 142ccb550 FUN_142ccb550 body=184 status=ok
// SIG undefined FUN_142ccb550(void)

void FUN_142ccb550(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  thunk_FUN_1426a43a0();
  (**(code **)(*param_1 + 0xa28))(param_1);
  if (param_2 != 0) {
    if ((*(uint *)(param_2 + 0x4cc) >> 1 & 1) == 0) {
      FUN_142ccc5d0(param_1);
    }
    else {
      FUN_142cd8330();
    }
  }
  if (param_1[0x129] != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x670))(param_1);
    if ((plVar2 == (longlong *)0x0) || ((*(uint *)((longlong)plVar2 + 0x4cc) >> 1 & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    if (((plVar2 == (longlong *)0x0) || ((*(uint *)((longlong)plVar2 + 0x4cc) >> 1 & 1) == 0)) ||
       (cVar1 = (**(code **)(*plVar2 + 0x768))(plVar2), cVar1 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    FUN_142cc6e80(param_1[0x129],uVar3,uVar4);
    return;
  }
  return;
}



// FUNCTION 142ccb610 FUN_142ccb610 body=135 status=ok
// SIG undefined FUN_142ccb610(void)

void FUN_142ccb610(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_1422383f0();
  if (*(char *)(param_1 + 0xbb4) == '\0') {
    *(float *)(param_1 + 0xbb0) = *(float *)(param_1 + 0xbc4) * *(float *)(param_1 + 0x464);
  }
  if (*(char *)(param_1 + 0xbc0) == '\0') {
    *(float *)(param_1 + 0xbbc) = *(float *)(param_1 + 0xbc4) * *(float *)(param_1 + 0x568);
  }
  if (((*(uint *)(param_1 + 8) >> 5 & 1) == 0) && (*(longlong *)(param_1 + 0x4c0) != 0)) {
    uVar1 = FUN_142d9ccd0(param_1 + 0x9e8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x900) + 0x318) = uVar1;
  }
  return;
}



// FUNCTION 142ccb6a0 FUN_142ccb6a0 body=102 status=ok
// SIG undefined FUN_142ccb6a0(void)

void FUN_142ccb6a0(longlong param_1)

{
  undefined1 local_18 [16];
  
  FUN_142394440();
  if (((*(int *)(param_1 + 0x778) == 0 && *(int *)(param_1 + 0x774) == 0) &&
      *(int *)(param_1 + 0x770) == 0) && *(int *)(param_1 + 0x76c) == 0) {
    FGuid::NewGuid(local_18);
  }
  if ((0.0 < *(float *)(param_1 + 0x764)) && (ABS(*(float *)(param_1 + 0x768)) <= 1e-08)) {
    *(undefined4 *)(param_1 + 0x768) = 0x43c80000;
  }
  return;
}



// FUNCTION 142ccb710 FUN_142ccb710 body=119 status=ok
// SIG undefined FUN_142ccb710(void)

void FUN_142ccb710(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  FUN_142317410();
  uVar1 = FUN_142e1b450();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0x129] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x3f8))(plVar2);
  }
  if ((param_1[0x120] != 0) && (param_1[0x98] != 0)) {
    uVar1 = FUN_1423ac7e0();
    (**(code **)(*(longlong *)param_1[0x120] + 0xb28))((longlong *)param_1[0x120],uVar1);
  }
  FUN_142ccc5d0(param_1);
  return;
}



// FUNCTION 142ccb790 FUN_142ccb790 body=170 status=ok
// SIG undefined FUN_142ccb790(void)

void FUN_142ccb790(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = param_1[0x23];
  if (lVar1 != 0) {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
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
      *(undefined8 *)((longlong)param_1 + 0x49c) = *(undefined8 *)(lVar1 + 0x53c);
      *(undefined4 *)((longlong)param_1 + 0x4a4) = *(undefined4 *)(lVar1 + 0x544);
      if (*(longlong *)(lVar1 + 0x4c8) != 0) {
        (**(code **)(*param_1 + 0x3d0))(param_1);
      }
    }
  }
  param_1[0x92] = *(longlong *)((longlong)param_1 + 0x49c);
  *(undefined4 *)(param_1 + 0x93) = *(undefined4 *)((longlong)param_1 + 0x4a4);
  return;
}



// FUNCTION 142ccb840 FUN_142ccb840 body=64 status=ok
// SIG undefined FUN_142ccb840(void)

void FUN_142ccb840(undefined8 param_1)

{
  undefined1 local_res10 [24];
  
  FUN_1426a4710();
  if (DAT_146b17150 != (longlong *)0x0) {
    FWeakObjectPtr::operator=(local_res10,param_1);
    (**(code **)(*DAT_146b17150 + 0x4f0))(DAT_146b17150,local_res10);
  }
  return;
}



// FUNCTION 142ccb880 FUN_142ccb880 body=66 status=ok
// SIG undefined FUN_142ccb880(void)

void FUN_142ccb880(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  FUN_1423945d0();
  if (((*(int *)(param_1 + 0x778) == 0 && *(int *)(param_1 + 0x774) == 0) &&
      *(int *)(param_1 + 0x770) == 0) && *(int *)(param_1 + 0x76c) == 0) {
    puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x76c) = *puVar2;
    *(undefined8 *)(param_1 + 0x774) = uVar1;
  }
  return;
}



// FUNCTION 142ccb8d0 FUN_142ccb8d0 body=252 status=ok
// SIG undefined FUN_142ccb8d0(void)

void FUN_142ccb8d0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_142349c80();
  if (*(int *)(param_1 + 0x270) == 0) {
    iVar1 = *(int *)(param_1 + 0x270);
    *(int *)(param_1 + 0x270) = iVar1 + 1;
    if (*(int *)(param_1 + 0x274) < iVar1 + 1) {
      TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x268,iVar1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x280);
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x2c + *(longlong *)(param_1 + 0x268));
    *puVar3 = *(undefined8 *)(param_1 + 0x278);
    puVar3[1] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x290);
    puVar3[2] = *(undefined8 *)(param_1 + 0x288);
    puVar3[3] = uVar2;
    puVar3[4] = *(undefined8 *)(param_1 + 0x298);
    *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(param_1 + 0x2a0);
  }
  if (*(int *)(param_1 + 0x2b0) == 0) {
    iVar1 = *(int *)(param_1 + 0x2b0);
    *(int *)(param_1 + 0x2b0) = iVar1 + 1;
    if (*(int *)(param_1 + 0x2b4) < iVar1 + 1) {
      FUN_141a09b60(param_1 + 0x2a8,iVar1);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x2c0);
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x3c + *(longlong *)(param_1 + 0x2a8));
    *puVar3 = *(undefined8 *)(param_1 + 0x2b8);
    puVar3[1] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x2d0);
    puVar3[2] = *(undefined8 *)(param_1 + 0x2c8);
    puVar3[3] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x2e0);
    puVar3[4] = *(undefined8 *)(param_1 + 0x2d8);
    puVar3[5] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x2e8);
    *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(param_1 + 0x2f0);
  }
  return;
}



// FUNCTION 142ccb9d0 FUN_142ccb9d0 body=60 status=ok
// SIG undefined FUN_142ccb9d0(void)

void FUN_142ccb9d0(longlong param_1)

{
  uint *puVar1;
  
  FUN_142317540();
  if (((DAT_146b31428 == 2) && (*(char *)(param_1 + 0x128) == '\x01')) &&
     (*(longlong *)(param_1 + 0x900) != 0)) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x900) + 0x4b4);
    *puVar1 = *puVar1 | 0x80;
  }
  return;
}



// FUNCTION 142ccba10 FUN_142ccba10 body=96 status=ok
// SIG undefined FUN_142ccba10(void)

void FUN_142ccba10(longlong *param_1)

{
  char cVar1;
  
  if ((((DAT_146b31428 == 2) && ((char)param_1[0x25] == '\x01')) && (param_1[0x120] != 0)) &&
     ((*(byte *)((longlong)param_1 + 0x56c) & 1) != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x990))();
    if (cVar1 != '\0') {
      *(uint *)((longlong)param_1 + 0x56c) = *(uint *)((longlong)param_1 + 0x56c) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x000142ccba63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1[0x120] + 0x770))((longlong *)param_1[0x120],1);
      return;
    }
  }
  return;
}



// FUNCTION 142ccba90 FUN_142ccba90 body=340 status=ok
// SIG undefined FUN_142ccba90(void)

char FUN_142ccba90(longlong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  
  if (((((*(byte *)(param_1 + 3) & 1) == 0) && (param_1[1] != 0)) && (*param_1 != 0)) &&
     (param_1[2] != 0)) {
    lVar3 = *(longlong *)(*param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    if (lVar3 != 0) {
      FUN_142cb3ac0((longlong)param_1 + 0x44);
      if ((*(int *)((longlong)param_1 + 0x244) == -1) ||
         (((char)param_1[0x1a] == '\0' && (*(char *)((longlong)param_1 + 0x18c) == '\0')))) {
        cVar2 = FUN_142cd0f00(param_1);
        if ((cVar2 != '\0') && ((*(byte *)(param_1 + 3) & 1) == 0)) {
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfd;
        }
      }
      else {
        *(int *)(param_1 + 4) = *(int *)((longlong)param_1 + 0x244);
        FUN_142cbd0e0(param_1,(longlong)param_1 + 0x44);
        lVar3 = *(longlong *)(*param_1 + 0x120);
        if (lVar3 == 0) {
          lVar3 = FUN_1423407b0();
        }
        uVar1 = *(undefined4 *)(lVar3 + 0x790);
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 2;
        *(undefined4 *)((longlong)param_1 + 0x464) = uVar1;
        FUN_142cb3ac0((longlong)param_1 + 0x24c);
        if (*(float *)(param_1 + 0x8c) == 0.0) {
          *(undefined4 *)(param_1 + 0x8c) = uVar1;
        }
      }
    }
    _guard_xfg_dispatch_icall_nop(param_1 + 0x8e,0,0x278);
    FUN_142cbf3d0(param_1,param_1 + 0x8e);
    return (*DAT_146b31418 != 0) + '\x01';
  }
  return '\0';
}



// FUNCTION 142ccbbf0 FUN_142ccbbf0 body=541 status=ok
// SIG undefined FUN_142ccbbf0(void)

void FUN_142ccbbf0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  longlong *local_res10;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar1 = *(longlong *)(*param_1 + 0xfd8);
  if ((1 < *(byte *)(lVar1 + 0x128)) && (param_2 != (longlong *)0x0)) {
    param_1[0x26] = (longlong)param_2;
  }
  lVar2 = param_1[1];
  bVar8 = false;
  local_98 = SUB84(param_1,0);
  uStack_94 = (undefined4)((ulonglong)param_1 >> 0x20);
  lVar7 = lVar2;
  local_res10 = param_2;
  if (param_2 == (longlong *)0x0) {
LAB_142ccbd15:
    bVar8 = (bool)((byte)((uint)*(undefined4 *)(lVar7 + 0x28) >> 0x19) & 1);
    if ((*(char *)(lVar1 + 0x128) != '\x03') && ((*(uint *)(lVar7 + 0x2c) & 0x2000) == 0))
    goto LAB_142ccbd9b;
    local_48 = 0;
    local_38 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar6 + 1) = local_98;
      *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_94;
      puVar6[2] = &local_res10;
      *puVar6 = &PTR_FUN_143f4d0b0;
      puVar6[3] = param_3;
    }
    local_78[0] = &LAB_142cbb430;
  }
  else {
    uVar4 = FUN_142e79d90();
    lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    lVar7 = param_1[1];
    if (lVar5 == 0) goto LAB_142ccbd15;
    if ((*(char *)(lVar5 + 0x269) == '\0') || (cVar3 = FUN_1407c3030(lVar5 + 0x3a0), cVar3 != '\0'))
    goto LAB_142ccbd9b;
    bVar8 = (*(uint *)(param_1[1] + 0x28) & 0x4000000) != 0;
    if (bVar8) {
      *(undefined1 *)(param_1 + 0x27) = 1;
    }
    if ((*(char *)(lVar1 + 0x128) != '\x03') && ((*(uint *)(param_1[1] + 0x2c) & 0x2000) == 0))
    goto LAB_142ccbd9b;
    local_48 = 0;
    local_38 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar6 + 1) = local_98;
      *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_94;
      puVar6[2] = &local_res10;
      *puVar6 = &PTR_FUN_143f4d0b0;
      puVar6[3] = param_3;
    }
    local_78[0] = &LAB_142cbb540;
  }
  uVar4 = FUN_14247f500();
  FUN_14247d5a0(uVar4,*param_1,local_78);
LAB_142ccbd9b:
  lVar1 = param_1[1];
  if ((lVar1 != 0) && (lVar1 == lVar2)) {
    if (((*(uint *)((longlong)param_1 + 0x15c) & 0x20) == 0) &&
       ((((*(uint *)(lVar1 + 0x28) & 0x8000) != 0 && ((longlong *)param_1[0x11] != (longlong *)0x0))
        && (local_res10 == (longlong *)param_1[0x11])))) {
      *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) | 0x20;
    }
    else if (bVar8 == false) {
      return;
    }
    FUN_142cd34e0(param_1,*(uint *)(lVar1 + 0x28) >> 3 & 0xffffff01,0);
  }
  return;
}



// FUNCTION 142ccbe10 FUN_142ccbe10 body=245 status=ok
// SIG undefined FUN_142ccbe10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ccbe10(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  
  (**(code **)(*param_1 + 0xa18))();
  if (*(char *)((longlong)param_1 + 0xbdc) != '\0') {
    fVar10 = *(float *)(param_1 + 0x176);
    *(int *)((longlong)param_1 + 0x464) = (int)param_1[0x17b];
    goto LAB_142ccbeb5;
  }
  if ((*(byte *)((longlong)param_1 + 0x56c) & 1) == 0) {
    if (*(char *)((longlong)param_1 + 0xbb4) == '\0') goto LAB_142ccbe9d;
    plVar1 = (longlong *)param_1[2];
    lVar3 = plVar1[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar3 = plVar1[0x1f];
    }
    fVar10 = *(float *)(lVar3 + 0xbb0);
  }
  else if ((char)param_1[0x178] == '\0') {
LAB_142ccbe9d:
    fVar10 = *(float *)((longlong)param_1 + 0xbc4) * *(float *)((longlong)param_1 + 0x464);
  }
  else {
    fVar10 = *(float *)((longlong)param_1 + 0xbbc);
  }
  *(float *)(param_1 + 0x176) = fVar10;
LAB_142ccbeb5:
  lVar3 = param_1[0x9a];
  *(float *)(param_1 + 0x177) = fVar10;
  if (lVar3 != 0) {
    uVar4 = *(uint *)(lVar3 + 0x230) & _DAT_146b30f30;
    uVar5 = *(uint *)(lVar3 + 0x234) & uRam0000000146b30f34;
    uVar6 = *(uint *)(lVar3 + 0x238) & uRam0000000146b30f38;
    uVar7 = *(uint *)(lVar3 + 0x23c) & uRam0000000146b30f3c;
    auVar8._4_4_ = uVar5;
    auVar8._0_4_ = uVar4;
    auVar8._8_4_ = uVar6;
    auVar8._12_4_ = uVar7;
    auVar9._4_4_ = uVar6;
    auVar9._0_4_ = uVar5;
    auVar9._8_4_ = uVar4;
    auVar9._12_4_ = uVar7;
    auVar9 = minps(auVar8,auVar9);
    auVar2._4_4_ = uVar4;
    auVar2._0_4_ = uVar6;
    auVar2._8_4_ = uVar5;
    auVar2._12_4_ = uVar7;
    auVar9 = minps(auVar9,auVar2);
    *(float *)(param_1 + 0x177) = auVar9._0_4_ * *(float *)(lVar3 + 0x710) + fVar10;
  }
  return;
}



// FUNCTION 142ccbf30 FUN_142ccbf30 body=720 status=ok
// SIG undefined FUN_142ccbf30(void)

void FUN_142ccbf30(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong local_res10;
  ulonglong local_res18;
  undefined4 local_res20 [2];
  longlong local_148;
  undefined4 local_140 [2];
  longlong local_138 [18];
  longlong local_a8;
  byte local_50;
  longlong local_48;
  longlong local_38;
  
  if ((*(byte *)((longlong)param_2 + 0xdc) & 1) == 0) {
    if ((int)param_1[7] == 0) {
      iVar5 = 0;
      if ((*(byte *)((longlong)param_2 + 0xdd) & 2) != 0) {
        plVar1 = (longlong *)param_2[1];
        uVar2 = local_res18 >> 0x10;
        local_res18 = local_res18 & 0xffffffffffff0000;
        if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_res18,2);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_res18,2);
          }
        }
        else {
          local_res18 = CONCAT62((int6)uVar2,*(undefined2 *)*plVar1);
          *plVar1 = *plVar1 + 2;
        }
        if ((ushort)local_res18 != 0) {
          do {
            local_140[0] = 0;
            (**(code **)(*param_2 + 0x68))(param_2,local_140);
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)(ushort)local_res18);
        }
      }
      local_148 = 0;
      (**(code **)(*param_2 + 0x30))(param_2,&local_148);
      plVar1 = (longlong *)param_2[1];
      local_res20[0] = 0;
      if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res20,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res20,4);
        }
      }
      else {
        local_res20[0] = *(undefined4 *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      plVar1 = (longlong *)param_2[1];
      uVar2 = local_res10 >> 8;
      local_res10 = local_res10 & 0xffffffffffffff00;
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_res10,1);
      }
      else {
        local_res10 = CONCAT71((int7)uVar2,*(undefined1 *)*plVar1);
        *plVar1 = *plVar1 + 1;
      }
      param_1 = param_1 + 0xd;
      cVar3 = FWeakObjectPtr::IsValid(param_1);
      if ((cVar3 != '\0') && (local_148 != 0)) {
        if ((char)local_res10 == DAT_146b30e40) {
          uVar4 = FWeakObjectPtr::Get(param_1);
          FUN_142dc7980(uVar4,local_148,local_res20[0]);
          return;
        }
        if ((char)local_res10 == DAT_1466ad050) {
          uVar4 = FWeakObjectPtr::Get(param_1);
          FUN_142dc7ef0(uVar4,local_148,local_res20[0]);
        }
      }
    }
  }
  else if ((int)param_1[7] == 0) {
    local_res18 = 0;
    (**(code **)(*param_2 + 0x30))(param_2,&local_res18);
    local_res10 = local_res18;
    FWeakObjectPtr::operator=(param_1 + 0xd);
    if (local_res10 != 0) {
      FWeakObjectPtr::operator=(param_1 + 0xd);
      FUN_142ddbd70(local_res10,param_1);
      if ((int)param_1[7] != 0) {
        FUN_1423e4ec0(local_138,param_1,0);
        local_50 = local_50 | 0x20;
        (**(code **)(local_138[0] + 0x30))(local_138,&local_res10);
        (**(code **)(*param_1 + 0x2c8))(param_1,local_res20,local_138,0);
        if (local_38 != 0) {
          FMemory::Free();
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
        if (local_a8 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(local_138);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142ccc200 FUN_142ccc200 body=214 status=ok
// SIG undefined FUN_142ccc200(void)

void FUN_142ccc200(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_res10;
  longlong local_18;
  longlong local_10;
  
  if (((*(byte *)((longlong)param_2 + 0xdc) & 1) != 0) && ((int)param_1[7] == 0)) {
    (**(code **)(*param_2 + 0x30))(param_2,&local_res10);
    if (local_res10 != 0) {
      uVar2 = UDamageableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(local_res10,uVar2);
      if (local_10 != 0) {
        local_18 = local_res10;
        cVar1 = (**(code **)(*param_1 + 0x300))(param_1,&local_18);
        if (((cVar1 != '\0') && (param_1[0xd] != 0)) && (param_1[0xe] != 0)) goto LAB_142ccc29b;
      }
    }
    *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 0x20;
    return;
  }
LAB_142ccc29b:
  if ((((int)param_1[7] != 0) && ((*(byte *)(param_1 + 0xf) & 1) != 0)) &&
     (cVar1 = (**(code **)(*param_2 + 0xa0))(param_2), cVar1 == '\0')) {
    (**(code **)(*param_1 + 0x308))(param_1,param_2);
  }
  return;
}



// FUNCTION 142ccc2e0 FUN_142ccc2e0 body=146 status=ok
// SIG undefined FUN_142ccc2e0(void)

void FUN_142ccc2e0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 local_38;
  float local_30;
  float local_20;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x400))();
  local_38 = *(undefined8 *)((longlong)param_1 + 0x49c);
  local_30 = fVar1 + *(float *)((longlong)param_1 + 0x4a4);
  local_20 = local_30;
  FUN_142ccf1e0(param_1,&local_38);
  *(undefined4 *)((longlong)param_1 + 0x24c) = *(undefined4 *)((longlong)param_1 + 0x254);
  fVar2 = (float)(**(code **)(*param_1 + 0x408))(param_1);
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(float *)(param_1 + 0x4a) = fVar2 - fVar1;
  return;
}



// FUNCTION 142ccc380 FUN_142ccc380 body=588 status=ok
// SIG undefined FUN_142ccc380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ccc380(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar1 = FUN_1423407b0(), lVar1 != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
    if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x540), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x6e8))(plVar2,param_1);
      return;
    }
  }
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar1 = FUN_1423407b0(param_1), lVar1 != 0)) {
    local_98 = FUN_142ccc380;
    lVar1 = *(longlong *)(param_1 + 0x120);
    uStack_90 = 0;
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_8c;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar1;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0x7c0,&local_88,0x3e4ccccd);
    if (local_28 != 0) {
      plVar4 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar4 = local_38;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 142ccc5d0 FUN_142ccc5d0 body=469 status=ok
// SIG undefined FUN_142ccc5d0(void)

void FUN_142ccc5d0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  code *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  code *local_58 [6];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  plVar2 = (longlong *)FUN_142d80ec0(uVar1);
  if (plVar2 != (longlong *)0x0) {
    piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
    if (*piVar4 < DAT_146b31570) {
      _Init_thread_header(&DAT_146b31570);
      if (DAT_146b31570 == -1) {
        FName::FName(&DAT_146b31568,L"AllActors",1);
        _Init_thread_footer(&DAT_146b31570);
      }
    }
    if (*piVar4 < DAT_146b31580) {
      _Init_thread_header(&DAT_146b31580);
      if (DAT_146b31580 == -1) {
        DAT_146b31578 = FUN_142d84420(plVar2,DAT_146b31568);
        _Init_thread_footer(&DAT_146b31580);
      }
    }
    local_28 = 0;
    local_18 = 0;
    local_58[0] = AK::MemoryMgr::StartProfileThreadUsage;
    local_78 = 0;
    local_68 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_98);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f3f130;
    }
    local_a8[0] = (code *)&LAB_142cbb5f0;
    (**(code **)(*plVar2 + 0x288))(plVar2,param_1,DAT_146b31568,local_a8,0,local_58,0);
    local_78 = 0;
    local_68 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_98);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f3f130;
    }
    local_a8[0] = FUN_142cbb460;
    FUN_142d8e4e0(plVar2,param_1,local_a8);
  }
  return;
}



// FUNCTION 142ccc7b0 FUN_142ccc7b0 body=525 status=ok
// SIG undefined FUN_142ccc7b0(void)

void FUN_142ccc7b0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_142ccc8df;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_142ccc8df:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x5c + *param_1;
        uVar5 = FUN_142cc3020(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x58) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x54) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 142ccc9c0 FUN_142ccc9c0 body=188 status=ok
// SIG undefined FUN_142ccc9c0(void)

void FUN_142ccc9c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = FUN_142340f30();
  if (iVar2 != 3) {
    plVar1 = (longlong *)param_1[0xfd];
    plVar3 = plVar1;
    if (plVar1 != plVar1 + (int)param_1[0xfe]) {
      while ((*plVar3 == 0 || (*(longlong *)(*plVar3 + 0x118) != param_2))) {
        plVar3 = plVar3 + 1;
        if (plVar3 == plVar1 + (int)param_1[0xfe]) {
          return;
        }
      }
      iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
      if ((-1 < iVar2) && (iVar2 < (int)param_1[0xfe])) {
        (**(code **)(*(longlong *)plVar1[iVar2] + 0x418))((longlong *)plVar1[iVar2],&DAT_146532190);
        plVar1 = *(longlong **)((longlong)iVar2 * 8 + param_1[0xfd]);
        (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
        (**(code **)(*param_1 + 0x260))(param_1);
      }
    }
  }
  return;
}



// FUNCTION 142ccca80 FUN_142ccca80 body=228 status=ok
// SIG undefined FUN_142ccca80(void)

void FUN_142ccca80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  iVar3 = FUN_142340f30();
  if ((iVar3 != 3) && (param_2 != 0)) {
    lVar1 = *(longlong *)(param_2 + 0x118);
    iVar3 = FUN_142340f30(param_1);
    if (iVar3 != 3) {
      plVar2 = (longlong *)param_1[0xfd];
      plVar4 = plVar2;
      if (plVar2 != plVar2 + (int)param_1[0xfe]) {
        while ((*plVar4 == 0 || (*(longlong *)(*plVar4 + 0x118) != lVar1))) {
          plVar4 = plVar4 + 1;
          if (plVar4 == plVar2 + (int)param_1[0xfe]) {
            return;
          }
        }
        iVar3 = (int)((longlong)plVar4 - (longlong)plVar2 >> 3);
        if ((-1 < iVar3) && (iVar3 < (int)param_1[0xfe])) {
          (**(code **)(*(longlong *)plVar2[iVar3] + 0x418))
                    ((longlong *)plVar2[iVar3],&DAT_146532190);
          plVar2 = *(longlong **)((longlong)iVar3 * 8 + param_1[0xfd]);
          (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
          (**(code **)(*param_1 + 0x260))(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142cccb70 FUN_142cccb70 body=160 status=ok
// SIG undefined FUN_142cccb70(void)

void FUN_142cccb70(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = (int)param_1[2];
  plVar4 = (longlong *)param_1[1];
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    plVar4 = param_1;
  }
  plVar2 = plVar4;
  if (plVar4 != plVar4 + iVar5) {
    while (*plVar2 != param_2) {
      plVar2 = plVar2 + 1;
      if (plVar2 == plVar4 + iVar5) {
        return;
      }
    }
    iVar1 = (int)((longlong)plVar2 - (longlong)plVar4 >> 3);
    if (iVar1 != -1) {
      iVar3 = (iVar5 - iVar1) + -1;
      if (0 < iVar3) {
        iVar3 = 1;
      }
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop(plVar4 + iVar1,plVar4 + (iVar5 - iVar3),(longlong)iVar3 << 3);
        iVar5 = (int)param_1[2];
      }
      *(int *)(param_1 + 2) = iVar5 + -1;
      FUN_1409574f0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142cccc10 FUN_142cccc10 body=156 status=ok
// SIG undefined FUN_142cccc10(void)

void FUN_142cccc10(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (0 < iVar1) {
    lVar4 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(param_1 + 8) == 0) {
        lVar5 = param_1;
      }
      if (*(longlong *)(lVar4 + lVar5) == 0) {
        iVar2 = (iVar1 - iVar3) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar5 + (longlong)iVar3 * 8),
                     (void *)(lVar5 + (longlong)(iVar1 - iVar2) * 8),(longlong)iVar2 << 3);
        }
        iVar1 = *(int *)(param_1 + 0x10) + -1;
        *(int *)(param_1 + 0x10) = iVar1;
      }
      else {
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      }
    } while (iVar3 < iVar1);
  }
  return;
}



// FUNCTION 142ccccb0 FUN_142ccccb0 body=763 status=ok
// SIG undefined FUN_142ccccb0(void)

ulonglong FUN_142ccccb0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong in_RAX;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int local_res8 [2];
  int local_res20 [2];
  int local_1a8 [2];
  longlong *local_1a0;
  int local_198;
  undefined4 local_194;
  longlong local_190;
  undefined8 local_188;
  undefined **local_178 [18];
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined **local_c8 [19];
  undefined1 local_30;
  
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffffd;
  if ((int)param_1[0x11] != 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar6 = param_2[0x15];
  local_190 = 0;
  local_188 = 0;
  local_1a0 = (longlong *)0x0;
  FArchive::FArchive(local_178);
  local_e8 = 0;
  local_178[0] = &PTR_FUN_143f4a100;
  local_e0 = &local_190;
  local_d8 = 0;
  FArchive::SetIsSaving(local_178,1);
  FArchive::SetIsPersistent(local_178,1);
  FArchiveProxy::FArchiveProxy(local_c8,local_178);
  local_30 = 0;
  local_c8[0] = &PTR_FUN_143f4a5b0;
  (**(code **)(*param_3 + 0xa8))(param_3,local_c8);
  plVar1 = (longlong *)param_2[1];
  local_res8[0] = (int)local_188;
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  local_1a0 = (longlong *)0x0;
  local_194 = 0;
  local_198 = local_res8[0] * 2;
  if (0 < local_198) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
  }
  plVar1 = local_1a0;
  local_1a8[0] = local_198;
  cVar3 = FUN_141645020(1,local_1a0,local_1a8,local_190,local_res8[0],0xf);
  if (cVar3 == '\0') {
    uVar5 = 0;
  }
  else {
    plVar2 = (longlong *)param_2[1];
    local_res20[0] = local_1a8[0];
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res20,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res20,4);
      }
    }
    else {
      local_res20[0] = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    lVar6 = ((longlong)((ulonglong)((uint)(lVar6 >> 0x3f) & 7) + lVar6) >> 3) -
            (param_2[0x14] + 7 >> 3);
    if (lVar6 < local_res20[0]) {
      (**(code **)(*param_2 + 0x50))(param_2,plVar1,lVar6);
      iVar4 = ((int)param_1[0x11] - (int)lVar6) + local_res20[0];
      *(int *)(param_1 + 0x11) = iVar4;
      if (*(int *)((longlong)param_1 + 0x8c) < iVar4) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x10);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)param_1[0x10],(void *)((longlong)(int)lVar6 + (longlong)plVar1),
                 (longlong)(int)param_1[0x11]);
      local_1a0 = param_1;
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[5] + 0x17f0,&local_1a0);
    }
    else {
      (**(code **)(*param_2 + 0x50))(param_2,plVar1);
      *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) | 2;
    }
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_1a0,param_2,1);
    uVar5 = 1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FArchive::~FArchive(local_c8);
  FArchive::~FArchive(local_178);
  if (local_190 != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 142cccfb0 FUN_142cccfb0 body=146 status=ok
// SIG undefined FUN_142cccfb0(void)

undefined1 FUN_142cccfb0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 local_118 [144];
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  FUN_1423e4ec0(local_118,param_1,0);
  local_30 = local_30 | 0x20;
  uVar1 = FUN_142ccccb0(param_1,local_118,param_2);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(local_118);
  return uVar1;
}



// FUNCTION 142ccd050 FUN_142ccd050 body=176 status=ok
// SIG undefined FUN_142ccd050(void)

void FUN_142ccd050(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 142ccd100 FUN_142ccd100 body=344 status=ok
// SIG undefined FUN_142ccd100(void)

void FUN_142ccd100(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  lVar1 = (longlong)*(int *)(param_1 + 0xd50);
  iVar6 = 0;
  if (*(int *)(param_1 + 0xd50) != 0) {
    iVar6 = 0;
    bVar7 = *(longlong *)(*(longlong *)(param_1 + 0xd48) + 8) != param_2;
    lVar5 = 0;
    iVar3 = 0;
    do {
      lVar5 = lVar5 + 1;
      iVar4 = iVar3 + 1;
      if (lVar5 < lVar1) {
        lVar2 = lVar5 * 0x10 + *(longlong *)(param_1 + 0xd48);
        do {
          if (bVar7 != (*(longlong *)(lVar2 + 8) != param_2)) break;
          iVar4 = iVar4 + 1;
          lVar5 = lVar5 + 1;
          lVar2 = lVar2 + 0x10;
        } while (lVar5 < lVar1);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar3) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0xd48)),
                     (void *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xd48)),
                     (longlong)(iVar4 - iVar3) << 4);
        }
        iVar6 = iVar6 + (iVar4 - iVar3);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar3 = iVar4;
    } while (lVar5 < lVar1);
    *(int *)(param_1 + 0xd50) = iVar6;
  }
  if (*(int *)(param_1 + 0xd50) == 0) {
    *(undefined8 *)(param_1 + 0xd40) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0xd40) =
       *(undefined8 *)(*(longlong *)(param_1 + 0xd48) + -0x10 + (longlong)iVar6 * 0x10);
  return;
}



// FUNCTION 142ccd260 FUN_142ccd260 body=8 status=ok
// SIG undefined FUN_142ccd260(void)

void FUN_142ccd260(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0xbf800000;
  return;
}



// FUNCTION 142ccd270 FUN_142ccd270 body=12 status=ok
// SIG undefined FUN_142ccd270(void)

void FUN_142ccd270(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xd58) = 0;
  return;
}



// FUNCTION 142ccd280 FUN_142ccd280 body=69 status=ok
// SIG undefined FUN_142ccd280(void)

void FUN_142ccd280(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_142ccd050();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x118);
  }
  if (lVar1 != 0) {
    *(bool *)(param_1 + 0x108) = *(byte *)(lVar1 + 0x128) < 2;
  }
  return;
}



// FUNCTION 142ccd2d0 FUN_142ccd2d0 body=425 status=ok
// SIG undefined FUN_142ccd2d0(void)

/* WARNING: Removing unreachable block (ram,0x000142ccd410) */

longlong * FUN_142ccd2d0(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong local_res8;
  
  if (param_4 == (longlong *)0x0) {
    param_4 = (longlong *)0x0;
  }
  else {
    lVar3 = FUN_142c2de20();
    if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_4 = (longlong *)param_4[0xad];
    }
    else {
      lVar3 = FUN_1428dfc70();
      if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar3 = FUN_14222e260(param_4);
        if (lVar3 != 0) {
          lVar4 = FUN_142c2de20();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            param_4 = *(longlong **)(lVar3 + 0x568);
            goto LAB_142ccd419;
          }
        }
        uVar5 = FUN_142c36280();
        param_4 = (longlong *)(**(code **)(*param_4 + 0x628))(param_4,uVar5);
      }
      else {
        lVar3 = FUN_142c36280();
        if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
            != lVar3 + 0x88)) {
          param_4 = (longlong *)0x0;
        }
      }
    }
  }
LAB_142ccd419:
  cVar2 = FUN_142cc4b40(param_1 + 0x50,param_4,&local_res8);
  if (cVar2 == '\0') {
    local_res8 = 0;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  if (local_res8 != 0) {
    *(undefined4 *)(param_2 + 2) = 1;
    FUN_1407eebb0(param_2,0);
    plVar6 = (longlong *)param_2[1];
    if ((longlong *)param_2[1] == (longlong *)0x0) {
      plVar6 = param_2;
    }
    *plVar6 = local_res8;
  }
  return param_2;
}



// FUNCTION 142ccd480 FUN_142ccd480 body=720 status=ok
// SIG undefined FUN_142ccd480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void * FUN_142ccd480(longlong param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined1 *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar5 = UAnimNotifyState::GetPrivateStaticClass();
    lVar9 = *(longlong *)(param_1 + 0x50);
    for (lVar7 = lVar9; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar5) {
        if (lVar9 != 0) {
          plVar11 = (longlong *)0x0;
          if (lVar9 != 0) {
            plVar6 = (longlong *)UAnimNotifyState::GetPrivateStaticClass();
            for (plVar1 = *(longlong **)(param_1 + 0x50);
                (plVar11 = (longlong *)0x0, plVar1 != (longlong *)0x0 &&
                (plVar11 = *(longlong **)(param_1 + 0x50), plVar1 != plVar6));
                plVar1 = (longlong *)plVar1[6]) {
            }
          }
          lVar9 = plVar11[0x1f];
          if (lVar9 == 0) {
            (**(code **)(*plVar11 + 0x368))(plVar11);
            lVar9 = plVar11[0x1f];
            if (lVar9 == 0) goto LAB_142ccd746;
          }
          lVar7 = UAnimNotifyState::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) || (*(longlong *)(lVar9 + 0x28) == 0)) {
LAB_142ccd746:
            *(undefined8 *)((longlong)param_2 + 8) = 0;
            *(undefined8 *)((longlong)param_2 + 0x10) = 0;
            return param_2;
          }
          FUN_142ca0820(*(longlong *)(lVar9 + 0x28),&local_60,param_3,param_4);
          local_70 = (undefined1 *)0x0;
          plVar11 = &local_60;
          if (local_58 != (longlong *)0x0) {
            plVar11 = local_58;
          }
          local_68 = 0;
          plVar1 = plVar11 + local_50;
          puVar10 = local_70;
          plVar6 = local_58;
          do {
            local_70 = puVar10;
            local_58 = plVar6;
            if (plVar11 == plVar1) {
              *(undefined8 *)((longlong)param_2 + 8) = 0;
              if (puVar10 == (undefined1 *)0x0) {
                _guard_xfg_dispatch_icall_nop(param_2,local_78,8);
              }
              if (*(longlong *)((longlong)param_2 + 8) != 0) {
                FMemory::Free();
                plVar6 = local_58;
                puVar10 = local_70;
              }
              *(undefined1 **)((longlong)param_2 + 8) = puVar10;
              *(int *)((longlong)param_2 + 0x10) = (int)local_68;
              *(int *)((longlong)param_2 + 0x14) = local_68._4_4_;
              local_68 = 0;
              local_70 = (undefined1 *)0x0;
              if (plVar6 != (longlong *)0x0) {
                FMemory::Free(plVar6);
                return param_2;
              }
              return param_2;
            }
            lVar9 = *plVar11;
            if (lVar9 == 0) {
LAB_142ccd611:
              uVar8 = FUN_142e34d30();
              lVar9 = FUN_142caab80(lVar9,uVar8);
              if (lVar9 != 0) {
                lVar7 = FUN_142e34d30();
                if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) goto LAB_142ccd663;
              }
            }
            else {
              lVar7 = FUN_142e34d30();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_142ccd611;
LAB_142ccd663:
              lVar9 = FUN_142ca1cf0(lVar9,*(undefined8 *)(param_1 + 0x50));
              uVar3 = local_68;
              if (lVar9 != 0) {
                lVar7 = (longlong)(int)local_68;
                iVar4 = (int)local_68 + 1;
                local_68 = CONCAT44(local_68._4_4_,iVar4);
                if (local_68._4_4_ < iVar4) {
                  FUN_1407eebb0(local_78,uVar3 & 0xffffffff);
                }
                puVar10 = local_78;
                if (local_70 != (undefined1 *)0x0) {
                  puVar10 = local_70;
                }
                *(longlong *)(puVar10 + lVar7 * 8) = lVar9;
              }
            }
            plVar11 = plVar11 + 1;
            puVar10 = local_70;
            plVar6 = local_58;
          } while( true );
        }
        break;
      }
    }
  }
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  return param_2;
}



// FUNCTION 142ccd750 FUN_142ccd750 body=261 status=ok
// SIG undefined FUN_142ccd750(void)

longlong * FUN_142ccd750(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_4 != 0) {
    lVar2 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_2[1] = 0;
      param_2[2] = 1;
      FUN_1407eebb0(param_2,0);
      plVar3 = (longlong *)param_2[1];
      if ((longlong *)param_2[1] == (longlong *)0x0) {
        plVar3 = param_2;
      }
      *plVar3 = param_4;
      return param_2;
    }
    lVar2 = FUN_14291fb80();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_142cb2580(param_2,*(undefined8 *)(param_4 + 0x488));
      return param_2;
    }
  }
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 142ccd860 FUN_142ccd860 body=376 status=ok
// SIG undefined FUN_142ccd860(void)

longlong FUN_142ccd860(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (*param_2 == '\x01') {
    return *(longlong *)(param_2 + 8);
  }
  if (((*param_2 == '\x02') && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x178), plVar1 != (longlong *)0x0)) {
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar4 = plVar1[0x1f];
      if (lVar4 == 0) {
        return 0;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x460);
    if (lVar4 != 0) {
      pcVar7 = *(char **)(lVar4 + 0xeb8);
      pcVar6 = pcVar7 + (longlong)*(int *)(lVar4 + 0xec0) * 0x10;
      for (; pcVar7 != pcVar6; pcVar7 = pcVar7 + 0x10) {
        lVar4 = *(longlong *)(pcVar7 + 8);
        if (((lVar4 != 0) && (*pcVar7 != '\0')) &&
           (lVar2 = *(longlong *)(param_2 + 0x10), *(int *)(lVar4 + 0x90) != *(int *)(lVar4 + 0xbc))
           ) {
          lVar5 = *(longlong *)(lVar4 + 200);
          if (*(longlong *)(lVar4 + 200) == 0) {
            lVar5 = lVar4 + 0xc0;
          }
          iVar3 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                   (longlong)*(int *)(lVar4 + 0xd0) - 1U) * 4);
          if (iVar3 != -1) {
            lVar4 = *(longlong *)(lVar4 + 0x88);
            do {
              lVar5 = (longlong)iVar3;
              if (*(longlong *)(lVar4 + lVar5 * 0x18) == lVar2) {
                if (((iVar3 != -1) && (lVar4 = lVar4 + lVar5 * 0x18, lVar4 != 0)) &&
                   (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) {
                  return lVar4;
                }
                break;
              }
              iVar3 = *(int *)(lVar4 + 0x10 + lVar5 * 0x18);
            } while (iVar3 != -1);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142ccd9e0 FUN_142ccd9e0 body=118 status=ok
// SIG undefined FUN_142ccd9e0(void)

bool FUN_142ccd9e0(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  if (*param_1 == 0) {
    *(undefined1 *)((longlong)param_1 + 9) = 0xff;
    return *(char *)((longlong)param_1 + 9) != -1;
  }
  if ((*(char *)((longlong)param_1 + 9) != -1) && ((char)param_1[1] == '\0')) {
    plVar2 = (longlong *)FUN_142bbd600(param_2);
    if ((plVar2 != (longlong *)0x0) && (*plVar2 == *param_1)) goto LAB_142ccda44;
  }
  uVar1 = FUN_142bbd6b0(param_2,param_1);
  *(undefined1 *)((longlong)param_1 + 9) = uVar1;
LAB_142ccda44:
  return *(char *)((longlong)param_1 + 9) != -1;
}



// FUNCTION 142ccda60 FUN_142ccda60 body=60 status=ok
// SIG undefined FUN_142ccda60(void)

ulonglong FUN_142ccda60(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_142ccd9e0();
  if ((char)uVar1 != '\0') {
    *param_3 = *(undefined1 *)(param_1 + 9);
    return 1;
  }
  *param_3 = 0xff;
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142ccdaa0 FUN_142ccdaa0 body=27 status=ok
// SIG undefined FUN_142ccdaa0(void)

undefined8 FUN_142ccdaa0(longlong param_1,undefined8 param_2)

{
  FUN_142caac20(param_1 + 8);
  return param_2;
}



// FUNCTION 142ccdac0 FUN_142ccdac0 body=487 status=ok
// SIG undefined FUN_142ccdac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_142ccdac0(longlong param_1,float *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  puVar2 = (undefined4 *)FUN_142caac20(param_1 + 8,local_88);
  fVar9 = 0.0;
  cVar1 = *(char *)(puVar2 + 2);
  if (cVar1 == '\0') {
    uVar4 = *puVar2;
  }
  else if (cVar1 == '\x02') {
    uVar4 = *puVar2;
  }
  else if (cVar1 == '\x01') {
    uVar4 = FUN_142c49730(puVar2);
  }
  else {
    uVar4 = 0;
  }
  puVar2 = (undefined4 *)FUN_142caac20(param_1 + 0x40,local_88,param_3);
  cVar1 = *(char *)(puVar2 + 2);
  if (cVar1 == '\0') {
    uVar5 = *puVar2;
  }
  else if (cVar1 == '\x02') {
    uVar5 = *puVar2;
  }
  else if (cVar1 == '\x01') {
    uVar5 = FUN_142c49730(puVar2);
  }
  else {
    uVar5 = 0;
  }
  puVar2 = (undefined4 *)FUN_142caac20(param_1 + 0x78,local_88,param_3);
  cVar1 = *(char *)(puVar2 + 2);
  if (cVar1 == '\0') {
    uVar6 = *puVar2;
  }
  else if (cVar1 == '\x02') {
    uVar6 = *puVar2;
  }
  else if (cVar1 == '\x01') {
    uVar6 = FUN_142c49730(puVar2);
  }
  else {
    uVar6 = 0;
  }
  puVar2 = (undefined4 *)FUN_142caac20(param_1 + 0xb0,local_88,param_3);
  cVar1 = *(char *)(puVar2 + 2);
  if (cVar1 == '\0') {
    uVar7 = *puVar2;
  }
  else if (cVar1 == '\x02') {
    uVar7 = *puVar2;
  }
  else if (cVar1 == '\x01') {
    uVar7 = FUN_142c49730(puVar2);
  }
  else {
    uVar7 = 0;
  }
  pfVar3 = (float *)FUN_142caac20(param_1 + 0xe8,local_88,param_3);
  cVar1 = *(char *)(pfVar3 + 2);
  if ((cVar1 == '\0') || (cVar1 == '\x02')) {
    fVar9 = *pfVar3;
  }
  else if (cVar1 == '\x01') {
    fVar9 = (float)FUN_142c49730(pfVar3);
  }
  fVar8 = (float)FUN_142c98900(uVar4,uVar5,uVar6,uVar7);
  *(undefined1 *)(param_2 + 2) = 0xff;
  FUN_140a393e0(param_2);
  *param_2 = fVar8 * fVar9;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 142ccdcb0 FUN_142ccdcb0 body=52 status=ok
// SIG undefined FUN_142ccdcb0(void)

undefined8 FUN_142ccdcb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0xffffffffffffffff;
  FUN_142df1760(param_1 + 8,param_2,param_3,0,local_res8);
  return param_2;
}



// FUNCTION 142ccdcf0 FUN_142ccdcf0 body=631 status=ok
// SIG undefined FUN_142ccdcf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_142ccdcf0(longlong param_1,float *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  int iVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  pfVar4 = (float *)FUN_142caac20(param_1 + 8,local_88);
  auVar10 = ZEXT816(0);
  cVar1 = *(char *)(pfVar4 + 2);
  if (cVar1 == '\0') {
    fVar7 = *pfVar4;
  }
  else if (cVar1 == '\x02') {
    fVar7 = *pfVar4;
  }
  else if (cVar1 == '\x01') {
    fVar7 = (float)FUN_142c49730(pfVar4);
  }
  else {
    fVar7 = 0.0;
  }
  pfVar4 = (float *)FUN_142caac20(param_1 + 0x40,local_88,param_3);
  cVar1 = *(char *)(pfVar4 + 2);
  if (cVar1 == '\0') {
    fVar12 = *pfVar4;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
  }
  else if (cVar1 == '\x02') {
    fVar12 = *pfVar4;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
  }
  else if (cVar1 == '\x01') {
    uVar8 = FUN_142c49730();
    fVar12 = (float)uVar8;
    uVar13 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar14 = (undefined4)extraout_XMM0_Qb;
    uVar15 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  }
  else {
    fVar12 = 0.0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
  }
  if (*(char *)(param_1 + 0x78) == '\0') {
    iVar6 = rand();
    fVar11 = (float)iVar6 * 3.051851e-05 * (fVar12 - fVar7) + fVar7;
  }
  else {
    iVar6 = (int)fVar12 + (1 - (int)fVar7);
    if (iVar6 < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = rand();
      iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)iVar6);
      iVar2 = iVar6 + -1;
      if (iVar3 <= iVar6 + -1) {
        iVar2 = iVar3;
      }
    }
    fVar11 = (float)(iVar2 + (int)fVar7);
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    cVar1 = *(char *)(param_1 + 0xf8);
    fVar9 = fVar11;
    if (cVar1 == '\0') goto LAB_142ccdf2d;
  }
  else {
    pfVar4 = (float *)FUN_142caac20(param_1 + 0x80,local_88,param_3);
    cVar1 = *(char *)(pfVar4 + 2);
    if (cVar1 == '\0') {
      fVar7 = *pfVar4;
    }
    else if (cVar1 == '\x02') {
      fVar7 = *pfVar4;
    }
    else if (cVar1 == '\x01') {
      fVar7 = (float)FUN_142c49730(pfVar4);
    }
    else {
      fVar7 = 0.0;
    }
    cVar1 = *(char *)(param_1 + 0xf8);
  }
  fVar9 = fVar7;
  if (cVar1 == '\0') {
    auVar10._4_4_ = uVar13;
    auVar10._0_4_ = fVar12;
    auVar10._8_4_ = uVar14;
    auVar10._12_4_ = uVar15;
  }
  else {
    puVar5 = (uint *)FUN_142caac20(param_1 + 0xc0,local_88,param_3);
    cVar1 = (char)puVar5[2];
    if (cVar1 == '\0') {
      auVar10 = ZEXT416(*puVar5);
    }
    else if (cVar1 == '\x02') {
      auVar10 = ZEXT416(*puVar5);
    }
    else if (cVar1 == '\x01') {
      uVar8 = FUN_142c49730(puVar5);
      auVar10._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar10._0_8_ = uVar8;
      auVar10._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    }
  }
  if (*(char *)(param_1 + 0x78) != '\0') {
    fVar9 = (float)(int)fVar9;
    auVar10 = ZEXT416((uint)(float)(int)auVar10._0_4_);
  }
  if (fVar9 <= fVar11) {
    if (fVar11 <= auVar10._0_4_) {
      auVar10._0_4_ = fVar11;
    }
    fVar9 = auVar10._0_4_;
  }
LAB_142ccdf2d:
  *param_2 = fVar9;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 142ccdf70 FUN_142ccdf70 body=427 status=ok
// SIG undefined FUN_142ccdf70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142ccdf70(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  char local_38;
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 8) = 0xff;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return param_1;
  }
  if (*(longlong *)(lVar1 + 0x28) == 0) {
    return param_1;
  }
  lVar3 = FUN_142dfb450();
  lVar1 = *(longlong *)(lVar1 + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      return param_1;
    }
    if (lVar1 == lVar3) break;
    lVar1 = *(longlong *)(lVar1 + 0x30);
  }
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return param_1;
  }
  local_48 = param_2[1];
  if (*(longlong *)(lVar1 + 0x28) == 0) {
    return param_1;
  }
  lVar4 = FUN_142dfb450();
  lVar3 = *(longlong *)(lVar1 + 0x28);
  while( true ) {
    if (lVar3 == 0) {
      return param_1;
    }
    if (lVar3 == lVar4) break;
    lVar3 = *(longlong *)(lVar3 + 0x30);
  }
  if (local_48 == 0) {
    return param_1;
  }
  if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
    lVar3 = *(longlong *)(lVar1 + 0x70);
    if (*(longlong *)(lVar1 + 0x70) == 0) {
      lVar3 = lVar1 + 0x68;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)local_48 >> 0x20) + (int)local_48) &
                             (longlong)*(int *)(lVar1 + 0x78) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar7 = (longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar2 * 0x18) == local_48) {
          if (iVar2 != -1) goto LAB_142cce0a3;
          break;
        }
        iVar2 = (int)plVar7[2];
      } while (iVar2 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
LAB_142cce0a3:
  plVar5 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (((plVar5 != (longlong *)0x0) && (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)) &&
     (local_30[0] = plVar5, FUN_142cb25e0(&local_40,local_30), local_38 == '\0')) {
    uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,local_30,param_3);
    FUN_140a2f480(param_1,uVar6);
    *(int *)(local_40 + 0x28) = *(int *)(local_40 + 0x28) + -1;
  }
  return param_1;
}



// FUNCTION 142cce120 FUN_142cce120 body=103 status=ok
// SIG undefined FUN_142cce120(void)

void FUN_142cce120(longlong *param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 local_res18 [2];
  
  if ((char)param_1[0x25] == '\x03') {
    local_res18[0] = param_3;
    if (param_2 == '\0') {
      FUN_142dbb5d0(param_1 + 0x163,local_res18);
    }
    else {
      FUN_142dafbc0();
    }
    lVar1 = *param_1;
    uVar2 = FUN_1407c3030(param_1 + 0x163);
    (**(code **)(lVar1 + 0x310))(param_1,uVar2);
  }
  return;
}



// FUNCTION 142cce190 FUN_142cce190 body=230 status=ok
// SIG undefined FUN_142cce190(void)

void FUN_142cce190(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((param_1[0x143] != 0) && (lVar2 = FUN_1423ac7e0(), lVar2 != 0)) {
    lVar3 = AGGameMode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(lVar2 + 0x530) == '\0')) {
      param_1[0x1a8] = 0;
      param_1[0x1ab] = 0;
      param_1[0x1ad] = 0;
      *(undefined4 *)(param_1 + 0x1aa) = 0;
      if (*(int *)((longlong)param_1 + 0xd54) < 8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1a9,8);
      }
    }
  }
  (**(code **)(*param_1 + 0x308))(param_1,&local_18);
  FUN_14231bcd0(param_1);
  lVar2 = param_1[0x120];
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x18c) = local_18;
    *(undefined4 *)(lVar2 + 0x194) = local_10;
  }
  return;
}



// FUNCTION 142cce280 FUN_142cce280 body=706 status=ok
// SIG undefined FUN_142cce280(void)

void FUN_142cce280(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_res8;
  ulonglong local_38;
  float fStack_30;
  float fStack_2c;
  ulonglong local_28;
  undefined4 local_20;
  
  plVar1 = *(longlong **)(*param_1 + 0xfd8);
  if (0.0 < *(float *)(param_1 + 0x22)) {
    *(float *)(*param_1 + 0x234) = *(float *)(param_1 + 0x22);
    *(undefined4 *)(param_1 + 0x22) = 0;
  }
  if (1 < *(byte *)(plVar1 + 0x25)) {
    if ((*(uint *)((longlong)param_1 + 0x15c) & 0x10) != 0) {
      *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) & 0xffffffef;
      FUN_142350510(*param_1,2);
      plVar2 = (longlong *)*param_1;
      if ((char)plVar2[0x49] == '\x01') {
        (**(code **)(*plVar2 + 0x5a0))(plVar2,*(undefined1 *)((longlong)plVar2 + 0x4b2),0);
      }
    }
    if ((*(byte *)(param_1[1] + 0x28) & 0x20) != 0) {
      lVar10 = plVar1[0x2d];
      if (lVar10 == 0) {
        uVar11 = (undefined4)DAT_1468b5da0;
        uVar12 = (undefined4)(DAT_1468b5da0 >> 0x20);
        local_38 = DAT_1468b5da0;
        fStack_30 = (float)DAT_1468b5da8;
      }
      else {
        fVar5 = *(float *)(lVar10 + 0x210);
        local_38 = *(ulonglong *)(lVar10 + 0x210);
        fStack_30 = *(float *)(lVar10 + 0x218);
        fStack_2c = *(float *)(lVar10 + 0x21c);
        auVar3._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != *(float *)(lVar10 + 0x214));
        auVar3._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != fVar5);
        auVar3._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_30);
        auVar3._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_2c);
        iVar8 = movmskps((int)param_1[1],auVar3);
        if (iVar8 != 0) {
          *(float *)(lVar10 + 0x250) = fVar5;
          *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
          *(float *)(lVar10 + 600) = fStack_30;
          *(float *)(lVar10 + 0x25c) = fStack_2c;
          puVar9 = (undefined8 *)FQuat::Rotator(&local_38,&local_28);
          *(undefined8 *)(lVar10 + 0x260) = *puVar9;
          *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar9 + 1);
        }
        local_38 = *(ulonglong *)(lVar10 + 0x260);
        fStack_30 = *(float *)(lVar10 + 0x268);
        uVar11 = (undefined4)DAT_1468b5da0;
        uVar12 = (undefined4)(DAT_1468b5da0 >> 0x20);
      }
      local_20 = fStack_30;
      local_28 = local_38;
      if ((float)local_38 != 0.0) {
        lVar10 = plVar1[0x2d];
        if (lVar10 == 0) {
          local_38 = CONCAT44(uVar12,uVar11);
          fStack_30 = (float)DAT_1468b5da8;
        }
        else {
          fVar5 = *(float *)(lVar10 + 0x210);
          local_38 = *(ulonglong *)(lVar10 + 0x210);
          fVar6 = *(float *)(lVar10 + 0x218);
          fStack_2c = *(float *)(lVar10 + 0x21c);
          auVar4._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != *(float *)(lVar10 + 0x214));
          auVar4._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != fVar5);
          auVar4._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fVar6);
          auVar4._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_2c);
          iVar8 = movmskps(fStack_30,auVar4);
          if (iVar8 != 0) {
            *(float *)(lVar10 + 0x250) = fVar5;
            *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
            *(float *)(lVar10 + 600) = fVar6;
            *(float *)(lVar10 + 0x25c) = fStack_2c;
            fStack_30 = fVar6;
            puVar9 = (undefined8 *)FQuat::Rotator(&local_38,&local_28);
            *(undefined8 *)(lVar10 + 0x260) = *puVar9;
            *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar9 + 1);
          }
          local_38 = *(ulonglong *)(lVar10 + 0x260);
          fStack_30 = *(float *)(lVar10 + 0x268);
        }
        local_28 = local_38 & 0xffffffff00000000;
        local_20 = fStack_30;
        AActor::SetActorRotation(plVar1,&local_28,0);
      }
    }
    if ((char)plVar1[0x25] == '\x03') {
      lVar10 = param_1[1];
      if ((*(uint *)(lVar10 + 0x28) & 0x100) != 0) {
        local_res8 = *(undefined8 *)(*(longlong *)(lVar10 + 0x10) + 0x18);
        FUN_142dbb5d0(*param_1 + 0xd70,&local_res8);
        lVar10 = param_1[1];
      }
      if (((*(uint *)(lVar10 + 0x28) & 0x8000000) != 0) || ((*(byte *)(lVar10 + 0x2c) & 0x20) != 0))
      {
        FUN_142d8f3b0(plVar1,*(undefined8 *)(*(longlong *)(lVar10 + 0x10) + 0x18));
        lVar10 = param_1[1];
      }
      if ((*(byte *)(lVar10 + 0x2c) & 0x10) != 0) {
        FUN_142d8f4f0(plVar1,*(undefined8 *)(*(longlong *)(lVar10 + 0x10) + 0x18));
      }
      cVar7 = (**(code **)(*plVar1 + 0x780))(plVar1);
      if (cVar7 == '\0') {
        lVar10 = param_1[1];
        if ((*(byte *)(lVar10 + 0x2c) & 4) != 0) {
          FUN_142d8f260(plVar1,*(undefined8 *)(*(longlong *)(lVar10 + 0x10) + 0x18));
          lVar10 = param_1[1];
        }
        FUN_142d8f7b0(plVar1,*(undefined8 *)(*(longlong *)(lVar10 + 0x10) + 0x18));
      }
    }
  }
  return;
}



// FUNCTION 142cce550 FUN_142cce550 body=1319 status=ok
// SIG undefined FUN_142cce550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 * FUN_142cce550(float *param_1,undefined2 *param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  int *piVar12;
  float fVar13;
  undefined1 auStack_248 [32];
  undefined4 *local_228;
  undefined4 local_220;
  undefined4 *local_218;
  undefined8 *local_210;
  undefined *local_208;
  char local_1f8;
  undefined2 local_1f4;
  undefined1 local_1f2;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  float local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  byte local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  float local_190;
  undefined4 local_188;
  float local_184;
  byte local_178 [12];
  float local_16c;
  undefined4 local_164;
  undefined4 uStack_160;
  float local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_104 [12];
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  longlong local_a0;
  undefined8 local_98;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_1a0 = param_1;
  _guard_xfg_dispatch_icall_nop(local_178,0,0x90);
  local_1b0 = *param_3;
  local_1a8 = *(float *)(param_3 + 1);
  local_194 = *(undefined4 *)(param_3 + 2);
  local_198 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_190 = *(float *)((longlong)param_3 + 0x14) - param_1[1];
  local_e0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_184 = *param_1;
  local_80 = 0;
  local_78 = 0;
  local_d0 = 0;
  local_d4 = 0;
  local_cc = 0;
  local_d2 = 0;
  local_c8 = 0;
  local_16c = 1.0;
  local_188 = 2;
  local_d8 = 0x10000;
  local_c4 = 0x101;
  local_e8 = DAT_146b31420;
  FCollisionQueryParams::AddIgnoredActor(&local_e8,*(undefined8 *)(param_1 + 0x18));
  local_cc = *(undefined1 *)(param_1 + 0x10);
  local_1f8 = '\0';
  iVar6 = 1;
  while( true ) {
    local_208 = &DAT_146aefe68;
    local_210 = &local_e8;
    local_218 = &local_188;
    local_220 = 2;
    local_228 = &DAT_1464aa810;
    cVar4 = UWorld::SweepSingleByChannel
                      (*(undefined8 *)(param_1 + 0x12),local_178,&local_1b0,&local_198);
    if ((((cVar4 != '\0') && ((local_178[0] & 1) != 0)) && (0.0 < local_16c)) &&
       ((local_16c <= 1.0 && (lVar7 = FWeakObjectPtr::Get(local_104), lVar7 != 0)))) break;
    if ((local_178[0] & 2) == 0) {
      if (local_1f8 == '\0') {
        uVar5 = 9;
        uVar11 = 0x12;
      }
      else {
        uVar5 = 10;
        uVar11 = 0x13;
      }
      if (param_4 != '\0') {
        uVar5 = uVar11;
      }
      *(undefined1 *)param_2 = uVar5;
      *(undefined1 *)((longlong)param_2 + 1) = 1;
      if (local_80 != 0) {
        FMemory::Free();
      }
      if (local_a0 == 0) {
        return param_2;
      }
      FMemory::Free();
      return param_2;
    }
    local_1f8 = '\x01';
    plVar8 = (longlong *)FWeakObjectPtr::Get(local_104);
    if (plVar8 == (longlong *)0x0) break;
    iVar2 = *(int *)((longlong)plVar8 + 0xc);
    uVar9 = FUN_142311640(&local_e8);
    piVar12 = (int *)((ulonglong)(*(longlong *)(uVar9 + 0x20) != 0) - 1 & uVar9 |
                     *(ulonglong *)(uVar9 + 0x20));
    piVar1 = piVar12 + *(int *)(uVar9 + 0x28);
    for (; piVar12 != piVar1; piVar12 = piVar12 + 1) {
      param_1 = local_1a0;
      if (*piVar12 == iVar2) goto LAB_142cce7e3;
    }
    FUN_142301530(&local_e8,iVar2);
    cVar4 = FUN_142390bd0(plVar8);
    if (((cVar4 != '\0') && (lVar7 = (**(code **)(*plVar8 + 0x6d0))(plVar8,local_f8,1), lVar7 != 0))
       && (lVar7 = FWeakObjectPtr::Get(lVar7 + 0x138), lVar7 != 0)) {
      FUN_142301530(&local_e8,*(undefined4 *)(lVar7 + 0xc));
    }
    local_1a8 = local_15c;
    local_1b0 = CONCAT44(uStack_160,local_164);
    bVar3 = 0x13 < iVar6;
    param_1 = local_1a0;
    iVar6 = iVar6 + 1;
    if (bVar3) break;
  }
LAB_142cce7e3:
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  local_1f0 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  local_1e4 = DAT_1468b5d90;
  local_1dc = (float)DAT_1468b5d98;
  uStack_1e0 = DAT_1468b5d94;
  local_1e8 = DAT_1468b5d98;
  local_1d0 = DAT_1468b5d98;
  local_1c4 = DAT_1468b5d98;
  local_1d8 = local_1f0;
  local_1cc = local_1f0;
  FWeakObjectPtr::operator=(&local_1c0,0);
  local_1f0 = *param_3;
  local_1e8 = *(undefined4 *)(param_3 + 1);
  local_1b8 = local_1b8 & 0xfe;
  local_1dc = (param_1[1] - *param_1) + local_15c;
  local_1e4 = local_164;
  uStack_1e0 = uStack_160;
  local_1d8 = local_158;
  local_1d0 = local_150;
  uVar10 = FWeakObjectPtr::Get(local_104);
  FWeakObjectPtr::operator=(&local_1c0,uVar10);
  local_1cc = local_140;
  local_1c4 = local_138;
  local_1f4 = 1;
  local_1f2 = 1;
  iVar6 = FUN_142cbc9f0(param_1,param_3,&local_1f4);
  if (iVar6 == 0) {
    fVar13 = ABS(local_1dc - *(float *)((longlong)param_3 + 0x14));
    if (fVar13 < *(float *)(*(longlong *)(param_1 + 0x14) + 0x4c) ||
        fVar13 == *(float *)(*(longlong *)(param_1 + 0x14) + 0x4c)) {
      *param_3 = local_1f0;
      *(undefined4 *)(param_3 + 1) = local_1e8;
      *(ulonglong *)((longlong)param_3 + 0xc) = CONCAT44(uStack_1e0,local_1e4);
      *(float *)((longlong)param_3 + 0x14) = local_1dc;
      param_3[3] = local_1d8;
      *(undefined4 *)(param_3 + 4) = local_1d0;
      *(undefined8 *)((longlong)param_3 + 0x24) = local_1cc;
      *(undefined4 *)((longlong)param_3 + 0x2c) = local_1c4;
      *(undefined4 *)(param_3 + 6) = local_1c0;
      *(undefined4 *)((longlong)param_3 + 0x34) = local_1bc;
      *(byte *)(param_3 + 7) = *(byte *)(param_3 + 7) & 0xfe;
      *(byte *)(param_3 + 7) = *(byte *)(param_3 + 7) | local_1b8 & 1;
      *(undefined1 *)((longlong)param_2 + 1) = 0;
    }
    else {
      uVar5 = 0xd;
      if (param_4 != '\0') {
        uVar5 = 0x16;
      }
      *(undefined1 *)param_2 = uVar5;
      *(undefined1 *)((longlong)param_2 + 1) = 1;
    }
  }
  else if (iVar6 == 2) {
    uVar5 = 0xb;
    if (param_4 != '\0') {
      uVar5 = 0x14;
    }
    *(undefined1 *)param_2 = uVar5;
    *(undefined1 *)((longlong)param_2 + 1) = 1;
  }
  else if (iVar6 == 3) {
    uVar5 = 0xc;
    if (param_4 != '\0') {
      uVar5 = 0x15;
    }
    *(undefined1 *)param_2 = uVar5;
    *(undefined1 *)((longlong)param_2 + 1) = 1;
  }
  else {
    *param_2 = 0x100;
  }
  return param_2;
}



// FUNCTION 142ccea80 FUN_142ccea80 body=136 status=ok
// SIG undefined FUN_142ccea80(void)

void FUN_142ccea80(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  FUN_142e35660(local_28,&local_28);
  cVar1 = (**(code **)(*param_1 + 0x778))(param_1);
  if (cVar1 == '\0') {
    local_20 = *(undefined4 *)(param_2 + 1);
    local_28 = *param_2;
    (**(code **)(*param_1 + 0x960))(param_1,&local_28,param_3,param_4);
  }
  return;
}



// FUNCTION 142cceb10 FUN_142cceb10 body=58 status=ok
// SIG undefined FUN_142cceb10(void)

void FUN_142cceb10(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x6e0) = 1;
  FUN_142cba430((void *)(param_1 + 0x470));
  *(undefined1 *)(param_1 + 0x6e0) = 0;
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x470),0,0x68);
  return;
}



// FUNCTION 142cceb50 FUN_142cceb50 body=315 status=ok
// SIG undefined FUN_142cceb50(void)

undefined8 FUN_142cceb50(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int *piVar2;
  longlong local_38 [4];
  undefined1 local_18;
  uint local_14;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar2 < DAT_146b31480) {
    _Init_thread_header(&DAT_146b31480);
    if (DAT_146b31480 == -1) {
      DAT_146b31478 = FBlackboardKeySelector::StaticStruct();
      _Init_thread_footer(&DAT_146b31480);
    }
  }
  if (*piVar2 < DAT_146b31490) {
    _Init_thread_header(&DAT_146b31490);
    if (DAT_146b31490 == -1) {
      DAT_146b31488 = *(longlong *)(DAT_146b31478 + 0x18);
      _Init_thread_footer(&DAT_146b31490);
    }
  }
  if (*(longlong *)(param_2 + 0x18) == DAT_146b31488) {
    local_14 = local_14 & 0xfffffffe;
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_18 = 0xff;
    FUN_141725e50(DAT_146b31478,param_3,local_38,0);
    *param_1 = local_38[2];
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 142ccec90 FUN_142ccec90 body=225 status=ok
// SIG undefined FUN_142ccec90(void)

ulonglong FUN_142ccec90(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = 0;
  if ((*param_2 == 10) &&
     (uVar1 = FAnimNode_Root::StaticStruct(), param_2[3] == *(longlong *)(uVar1 + 0x18))) {
    local_48 = 0;
    local_18 = 0x3f800000;
    local_28 = 0;
    uStack_20 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    uVar2 = FAnimNode_Root::StaticStruct();
    FUN_141725e50(uVar2,param_3,&local_58,0);
    param_1[2] = CONCAT44(uStack_44,local_48);
    param_1[3] = uStack_40;
    *param_1 = local_58;
    param_1[4] = local_38;
    param_1[5] = uStack_30;
    *(undefined1 *)(param_1 + 1) = local_50;
    param_1[6] = local_28;
    param_1[7] = uStack_20;
    param_1[8] = CONCAT44(uStack_14,local_18);
    return 1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142cced80 FUN_142cced80 body=231 status=ok
// SIG undefined FUN_142cced80(void)

void FUN_142cced80(longlong *param_1,int *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  byte bVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  
  cVar5 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar5 != '\0') {
    lVar6 = FUN_142cefa30();
    if (param_3 < *(float *)(lVar6 + 0x58) || param_3 == *(float *)(lVar6 + 0x58)) {
      iVar1 = *param_2;
      fVar2 = (float)param_2[1];
      fVar3 = (float)param_2[2];
      fVar4 = (float)param_2[3];
      if ((*(byte *)(param_1 + 0x32d) & 1) == 0) {
        local_28 = (undefined4)*(undefined8 *)(param_2 + 4);
        uStack_24 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
        *(int *)(param_1 + 0x32e) = iVar1;
        *(float *)((longlong)param_1 + 0x1974) = fVar2;
        *(float *)(param_1 + 0x32f) = fVar3;
        *(float *)((longlong)param_1 + 0x197c) = fVar4;
        *(undefined4 *)(param_1 + 0x330) = local_28;
        *(undefined4 *)((longlong)param_1 + 0x1984) = uStack_24;
        *(undefined4 *)(param_1 + 0x331) = 0;
        *(undefined4 *)((longlong)param_1 + 0x198c) = 0;
        if ((((fVar2 == 0.0) && (fVar3 == 0.0)) && (fVar4 == 0.0)) || (iVar1 == -1)) {
          bVar7 = 0;
        }
        else {
          bVar7 = 2;
        }
        *(byte *)(param_1 + 0x32d) = *(byte *)(param_1 + 0x32d) & 0xfd | bVar7;
      }
      FUN_142cb6f80(param_1 + 0x32a);
      return;
    }
    FUN_142cffa30(lVar6,param_2,param_3);
  }
  return;
}



// FUNCTION 142ccee70 FUN_142ccee70 body=192 status=ok
// SIG undefined FUN_142ccee70(void)

void FUN_142ccee70(undefined1 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_2;
  fVar2 = (float)(int)(fVar1 * 0.0027777778) * 360.0;
  if (ABS(fVar1) < ABS(fVar2)) {
    fVar2 = fVar1;
  }
  fVar1 = fVar1 - fVar2;
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 360.0;
  }
  *param_1 = (char)(int)(fVar1 * 0.7083333);
  fVar1 = param_2[1];
  fVar2 = (float)(int)(fVar1 * 0.0027777778) * 360.0;
  if (ABS(fVar1) < ABS(fVar2)) {
    fVar2 = fVar1;
  }
  fVar1 = fVar1 - fVar2;
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 360.0;
  }
  param_1[1] = (char)(int)(fVar1 * 0.7083333);
  return;
}



// FUNCTION 142ccef30 FUN_142ccef30 body=71 status=ok
// SIG undefined FUN_142ccef30(void)

void FUN_142ccef30(longlong param_1,byte param_2)

{
  char cVar1;
  
  if (param_2 != (*(byte *)(param_1 + 0x80) & 1)) {
    if ((param_2 == 0) && (cVar1 = FUN_1407c3030(param_1 + 0xb18), cVar1 != '\0')) {
      return;
    }
    FUN_14223c560(param_1,param_2);
  }
  return;
}



// FUNCTION 142ccef80 FUN_142ccef80 body=36 status=ok
// SIG undefined FUN_142ccef80(void)

void FUN_142ccef80(undefined1 *param_1)

{
  *param_1 = 1;
  FWeakObjectPtr::operator=(param_1 + 4);
  FUN_14044af00(param_1 + 4,0);
  return;
}



// FUNCTION 142ccefb0 FUN_142ccefb0 body=36 status=ok
// SIG undefined FUN_142ccefb0(void)

void FUN_142ccefb0(undefined1 *param_1)

{
  *param_1 = 2;
  FWeakObjectPtr::operator=(param_1 + 4);
  FUN_14044af00(param_1 + 4,0);
  return;
}



// FUNCTION 142ccefe0 FUN_142ccefe0 body=36 status=ok
// SIG undefined FUN_142ccefe0(void)

void FUN_142ccefe0(undefined1 *param_1)

{
  *param_1 = 3;
  FWeakObjectPtr::operator=(param_1 + 0xc);
  FUN_14044af00(param_1 + 0xc,0);
  return;
}



// FUNCTION 142ccf010 FUN_142ccf010 body=323 status=ok
// SIG undefined FUN_142ccf010(void)

undefined8 FUN_142ccf010(undefined1 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  *param_1 = 5;
  fVar7 = param_2[2];
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar7 * fVar7;
  if (fVar4 == 1.0) {
    uVar3 = *(undefined8 *)param_2;
    fVar7 = param_2[2];
  }
  else if (1e-08 <= fVar4) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar7 = fVar7 * fVar5;
    uVar3 = CONCAT44(fVar2 * fVar5,fVar1 * fVar5);
  }
  else {
    uVar3 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    fVar7 = DAT_1468b5d98;
  }
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  *(float *)(param_1 + 0x1c) = fVar7;
  return CONCAT71((uint7)(uint3)((uint)fVar7 >> 8),1);
}



// FUNCTION 142ccf160 FUN_142ccf160 body=21 status=ok
// SIG undefined FUN_142ccf160(void)

undefined8 FUN_142ccf160(undefined1 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *param_1 = 4;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 142ccf180 FUN_142ccf180 body=21 status=ok
// SIG undefined FUN_142ccf180(void)

undefined8 FUN_142ccf180(undefined1 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *param_1 = 6;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 142ccf1a0 SetAdditiveLootTable body=11 status=ok
// SIG undefined SetAdditiveLootTable(void)

void UCharacterConfigComponent::SetAdditiveLootTable(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x180) = *param_2;
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  return;
}



// FUNCTION 142ccf1b0 FUN_142ccf1b0 body=33 status=ok
// SIG undefined FUN_142ccf1b0(void)

void FUN_142ccf1b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x210) = *param_2;
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x220) = param_2[2];
  *(undefined8 *)(param_1 + 0x228) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x230) = param_2[4];
  *(undefined8 *)(param_1 + 0x238) = uVar1;
  return;
}



// FUNCTION 142ccf1e0 FUN_142ccf1e0 body=504 status=ok
// SIG undefined FUN_142ccf1e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ccf1e0(longlong param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  uVar4 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x490) = *param_2;
  *(undefined4 *)(param_1 + 0x498) = uVar4;
  plVar11 = *(longlong **)(param_1 + 0x460);
  plVar10 = plVar11 + (longlong)*(int *)(param_1 + 0x468) * 8;
  for (; plVar11 != plVar10; plVar11 = plVar11 + 8) {
    lVar5 = *plVar11;
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 400) != 0)) {
      fVar7 = *(float *)(plVar11 + 5);
      fVar2 = *(float *)(param_1 + 0x498);
      *(ulonglong *)(lVar5 + 0x1ec) =
           CONCAT44(*(float *)((longlong)plVar11 + 0x24) + *(float *)(param_1 + 0x494),
                    *(float *)(plVar11 + 4) + *(float *)(param_1 + 0x490));
      *(float *)(lVar5 + 500) = fVar7 + fVar2;
      lVar5 = *plVar11;
      pfVar1 = (float *)(lVar5 + 0x280);
      if ((*(float *)(lVar5 + 0x1f8) != *pfVar1) ||
         ((*(float *)(lVar5 + 0x1fc) != *(float *)(lVar5 + 0x284) ||
          (*(float *)(lVar5 + 0x200) != *(float *)(lVar5 + 0x288))))) {
        uVar3 = *(undefined8 *)*(undefined1 (*) [12])(lVar5 + 0x1f8);
        fVar2 = (float)DAT_146b30e60;
        fVar7 = DAT_146b30e60._4_4_;
        fVar8 = DAT_146b30e60._8_4_;
        auVar12._12_4_ = 0;
        auVar12._0_12_ = *(undefined1 (*) [12])(lVar5 + 0x1f8);
        auVar12 = divps(auVar12,_DAT_146b30e60);
        fVar13 = (float)uVar3 - (float)(int)auVar12._0_4_ * fVar2;
        fVar14 = (float)((ulonglong)uVar3 >> 0x20) - (float)(int)auVar12._4_4_ * fVar7;
        fVar15 = *(float *)(lVar5 + 0x200) - (float)(int)auVar12._8_4_ * fVar8;
        fVar13 = (float)(((uint)(fVar13 + fVar2) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                        (uint)(fVar13 + fVar2));
        fVar14 = (float)(((uint)(fVar14 + fVar7) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                        (uint)(fVar14 + fVar7));
        fVar15 = (float)(((uint)(fVar15 + fVar8) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                        (uint)(fVar15 + fVar8));
        bVar6 = fRam0000000146b30e58 < fVar15;
        *(ulonglong *)pfVar1 =
             CONCAT44(((uint)(fVar14 - fVar7) ^ (uint)fVar14) &
                      -(uint)(fRam0000000146b30e54 < fVar14) ^ (uint)fVar14,
                      ((uint)(fVar13 - fVar2) ^ (uint)fVar13) & -(uint)(_DAT_146b30e50 < fVar13) ^
                      (uint)fVar13);
        *(uint *)(lVar5 + 0x288) =
             ((uint)(fVar15 - fVar8) ^ (uint)fVar15) & -(uint)bVar6 ^ (uint)fVar15;
        puVar9 = (undefined8 *)FRotator::Quaternion(pfVar1,local_18);
        uVar3 = puVar9[1];
        *(undefined8 *)(lVar5 + 0x270) = *puVar9;
        *(undefined8 *)(lVar5 + 0x278) = uVar3;
      }
      local_28 = *(undefined8 *)(lVar5 + 0x270);
      uStack_20 = *(undefined8 *)(lVar5 + 0x278);
      FUN_14239b520(lVar5,*(undefined8 *)(lVar5 + 400),*(undefined8 *)(lVar5 + 0x198),0,&local_28,0)
      ;
    }
  }
  return;
}



// FUNCTION 142ccf3e0 FUN_142ccf3e0 body=22 status=ok
// SIG undefined FUN_142ccf3e0(void)

void FUN_142ccf3e0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x410) = *param_2;
  *(undefined4 *)(param_1 + 0x418) = uVar1;
  return;
}



// FUNCTION 142ccf400 FUN_142ccf400 body=17 status=ok
// SIG undefined FUN_142ccf400(void)

void FUN_142ccf400(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x908);
  if (plVar1 != (longlong *)0x0) {
    iVar3 = FUN_14233f450();
    if ((iVar3 == 3) && (cVar2 = FText::EqualTo(plVar1 + 0x4f,param_2,0), cVar2 == '\0')) {
      (**(code **)(*plVar1 + 0x260))(plVar1);
      FText::operator=(plVar1 + 0x4f,param_2);
      plVar1[0x4e] = 0;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar1 + 0x4b,0);
    }
    return;
  }
  return;
}



// FUNCTION 142ccf420 FUN_142ccf420 body=111 status=ok
// SIG undefined FUN_142ccf420(void)

void FUN_142ccf420(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = FText::FromString(local_28);
  if (*(longlong *)(param_1 + 0x908) != 0) {
    FUN_142ddc620(*(longlong *)(param_1 + 0x908),uVar5);
  }
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
  return;
}



// FUNCTION 142ccf490 FUN_142ccf490 body=17 status=ok
// SIG undefined FUN_142ccf490(void)

void FUN_142ccf490(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x908);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (param_2 != plVar1[0x4e])) {
    (**(code **)(*plVar1 + 0x260))(plVar1);
    plVar1[0x4e] = param_2;
    uVar3 = FUN_1404b03b0();
    FText::operator=(plVar1 + 0x4f,uVar3);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar1 + 0x4b,0);
  }
  return;
}



// FUNCTION 142ccf4b0 FUN_142ccf4b0 body=61 status=ok
// SIG undefined FUN_142ccf4b0(void)

void FUN_142ccf4b0(longlong param_1,float param_2,float param_3)

{
  *(float *)(param_1 + 0x924) = param_2;
  if (0.0 < param_3) {
    *(float *)(param_1 + 0x928) = ABS(param_2 - *(float *)(param_1 + 0x920)) / param_3;
    return;
  }
  *(undefined4 *)(param_1 + 0x928) = 0xbf800000;
  return;
}



// FUNCTION 142ccf4f0 FUN_142ccf4f0 body=146 status=ok
// SIG undefined FUN_142ccf4f0(void)

void FUN_142ccf4f0(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  local_20 = DAT_1468b5da8;
  local_28 = (float)(param_2 & 0xffff) * 0.005493164;
  local_24 = (float)(param_2 >> 0x10) * 0.005493164;
  puVar1 = (undefined8 *)FRotator::Vector(&local_28,local_18);
  *(undefined8 *)(param_1 + 0x144) = *puVar1;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(puVar1 + 1);
  *(undefined8 *)(param_1 + 0x150) = *param_3;
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_3 + 1);
  return;
}



// FUNCTION 142ccf590 FUN_142ccf590 body=158 status=ok
// SIG undefined FUN_142ccf590(void)

void FUN_142ccf590(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 local_res18;
  int local_res1c;
  longlong *local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    if (param_2 < 2) {
      param_2 = 1;
    }
    if (param_2 != (int)param_1[0x35]) {
      (**(code **)(*param_1 + 0x260))(param_1);
      local_10 = (undefined4)param_1[0x35];
      *(int *)(param_1 + 0x35) = param_2;
      if (*(char *)((longlong)param_1 + 0x1a1) == '\0') {
        local_res18 = local_10;
        local_res1c = param_2;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x36,&local_res18);
        local_c = (undefined4)param_1[0x35];
        local_18 = param_1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x38,&local_18);
      }
    }
  }
  return;
}



// FUNCTION 142ccf630 FUN_142ccf630 body=25 status=ok
// SIG undefined FUN_142ccf630(void)

void FUN_142ccf630(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x17b) = param_2;
  *(undefined1 *)((longlong)param_1 + 0xbdc) = 1;
                    /* WARNING: Could not recover jumptable at 0x000142ccf642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x768))();
  return;
}



// FUNCTION 142ccf650 FUN_142ccf650 body=155 status=ok
// SIG undefined FUN_142ccf650(void)

void FUN_142ccf650(longlong param_1,byte param_2,char *param_3)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)param_2 * 0x3c;
  *(char *)(lVar1 + 0x54 + param_1) = *param_3;
  *(undefined4 *)(lVar1 + 0x58 + param_1) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(lVar1 + 0x5c + param_1) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(lVar1 + 0x60 + param_1) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(lVar1 + 100 + param_1) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)(lVar1 + 0x68 + param_1) = *(undefined8 *)(param_3 + 0x14);
  *(undefined4 *)(lVar1 + 0x70 + param_1) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined8 *)(lVar1 + 0x74 + param_1) = *(undefined8 *)(param_3 + 0x20);
  *(undefined4 *)(lVar1 + 0x7c + param_1) = *(undefined4 *)(param_3 + 0x28);
  *(undefined8 *)(lVar1 + 0x80 + param_1) = *(undefined8 *)(param_3 + 0x2c);
  *(undefined4 *)(lVar1 + 0x88 + param_1) = *(undefined4 *)(param_3 + 0x34);
  *(char *)(lVar1 + 0x8c + param_1) = param_3[0x38];
  if ((*param_3 == '\0') && (param_2 == 0)) {
    *(undefined4 *)(param_1 + 0x50) = 0xbf800000;
  }
  return;
}



// FUNCTION 142ccf6f0 FUN_142ccf6f0 body=239 status=ok
// SIG undefined FUN_142ccf6f0(void)

void FUN_142ccf6f0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  undefined8 local_10;
  
  if ((*(longlong *)(param_1 + 0x180) != 0) &&
     (((byte)*(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x398) & 1) != param_2)) {
    FUN_1423974c0();
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_14238b380(*(undefined8 *)(param_1 + 0x180),1,&local_18);
    plVar1 = local_18 + (int)local_10;
    for (plVar5 = local_18; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        lVar4 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_1423974c0(lVar2,param_2);
        }
      }
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 142ccf7e0 FUN_142ccf7e0 body=31 status=ok
// SIG undefined FUN_142ccf7e0(void)

void FUN_142ccf7e0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (undefined8 *)(param_1 + 0x42c)) {
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0x42c) = *param_2;
    *(undefined4 *)(param_1 + 0x434) = uVar1;
    *(undefined1 *)(param_1 + 0x438) = 1;
  }
  return;
}



// FUNCTION 142ccf800 FUN_142ccf800 body=31 status=ok
// SIG undefined FUN_142ccf800(void)

void FUN_142ccf800(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (undefined8 *)(param_1 + 0x41c)) {
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0x41c) = *param_2;
    *(undefined4 *)(param_1 + 0x424) = uVar1;
    *(undefined1 *)(param_1 + 0x428) = 1;
  }
  return;
}



// FUNCTION 142ccf820 FUN_142ccf820 body=1361 status=ok
// SIG undefined FUN_142ccf820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Switch with 1 destination removed at 0x000142ccfa95 : 6 cases all go to same destination
    */
/* WARNING: Switch with 1 destination removed at 0x000142ccfaf0 : 6 cases all go to same destination
    */

void FUN_142ccf820(float *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  ulonglong local_78;
  char local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  cVar3 = *(char *)(param_1 + 2);
  switch(cVar3) {
  case '\0':
    bVar12 = cVar3 == '\0';
    break;
  case '\x01':
    bVar12 = cVar3 == '\x01';
    break;
  case '\x02':
    bVar12 = cVar3 == '\x02';
    break;
  case '\x03':
  case '\x04':
  case '\x05':
    bVar12 = cVar3 == '\x03';
    break;
  default:
    goto switchD_142ccf863_default;
  }
  if (bVar12) {
    *(undefined1 *)(param_1 + 2) = 0xff;
  }
switchD_142ccf863_default:
  FUN_141f803d0(param_2,&local_58);
  if (local_58._4_1_ != '\0') {
    *param_1 = (float)local_58;
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
  FUN_142cb25e0(&local_78,param_2 + 1);
  if (local_70 != '\0') {
    return;
  }
  lVar8 = *param_2;
  if (lVar8 != 0) {
    lVar5 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) {
      if (*(longlong *)(lVar8 + 0x70) != 0) {
        lVar6 = FAnimNode_RefPose::StaticStruct();
        lVar5 = *(longlong *)(lVar8 + 0x70);
        lVar9 = lVar5;
        if (lVar5 != 0) {
          do {
            if (lVar9 == lVar6) {
              if (param_2[1] != 0) {
                uVar7 = FUN_142caac20(param_2[1],&local_68,param_3);
                FUN_140a2f480(param_1,uVar7);
                goto LAB_142ccfce3;
              }
              break;
            }
            lVar9 = *(longlong *)(lVar9 + 0x30);
          } while (lVar9 != 0);
          if (lVar5 != 0) {
            lVar6 = FUN_142e57c50();
            lVar5 = *(longlong *)(lVar8 + 0x70);
            lVar9 = lVar5;
            if (lVar5 != 0) {
              do {
                if (lVar9 == lVar6) {
                  if (param_2[1] != 0) {
                    local_58 = 0xffffffffffffffff;
                    local_88 = &local_58;
                    FUN_142df1760(param_2[1],&local_68,param_3);
                    FUN_140a2f480(param_1,&local_68);
                    goto LAB_142ccfce3;
                  }
                  break;
                }
                lVar9 = *(longlong *)(lVar9 + 0x30);
              } while (lVar9 != 0);
              if (lVar5 != 0) {
                lVar6 = FUN_14294e020();
                lVar5 = *(longlong *)(lVar8 + 0x70);
                lVar9 = lVar5;
                if (lVar5 != 0) {
                  do {
                    if (lVar9 == lVar6) {
                      if (param_2[1] != 0) {
                        fVar14 = *(float *)(param_2[1] + 4);
                        fVar13 = (float)FUN_14247f5a0();
                        param_1[1] = fVar13;
                        *param_1 = fVar14;
                        *(undefined1 *)(param_1 + 2) = 2;
                        goto LAB_142ccfce3;
                      }
                      break;
                    }
                    lVar9 = *(longlong *)(lVar9 + 0x30);
                  } while (lVar9 != 0);
                  if (lVar5 != 0) {
                    lVar6 = FUN_14294e080();
                    lVar5 = *(longlong *)(lVar8 + 0x70);
                    lVar9 = lVar5;
                    if (lVar5 != 0) {
                      do {
                        if (lVar9 == lVar6) {
                          if (param_2[1] != 0) {
                            iVar4 = *(int *)(param_2[1] + 4);
                            iVar10 = IStreamingManager::GetNumWantingResources();
                            *param_1 = (float)iVar4;
                            param_1[1] = (float)iVar10;
                            *(undefined1 *)(param_1 + 2) = 2;
                            goto LAB_142ccfce3;
                          }
                          break;
                        }
                        lVar9 = *(longlong *)(lVar9 + 0x30);
                      } while (lVar9 != 0);
                      if (lVar5 != 0) {
                        lVar6 = FPoseDriverTransform::StaticStruct();
                        lVar5 = *(longlong *)(lVar8 + 0x70);
                        lVar9 = lVar5;
                        if (lVar5 != 0) {
                          do {
                            if (lVar9 == lVar6) {
                              if (param_2[1] != 0) {
                                uVar7 = FUN_142df1610(param_2[1],&local_68,param_3);
                                FUN_140a2f480(param_1,uVar7);
                                FUN_140a393e0(&local_68);
                                goto LAB_142ccfce3;
                              }
                              break;
                            }
                            lVar9 = *(longlong *)(lVar9 + 0x30);
                          } while (lVar9 != 0);
                          if (lVar5 != 0) {
                            lVar5 = FSubmixEffectConvolutionReverbSettings::StaticStruct();
                            for (lVar8 = *(longlong *)(lVar8 + 0x70); lVar8 != 0;
                                lVar8 = *(longlong *)(lVar8 + 0x30)) {
                              if (lVar8 == lVar5) {
                                if (param_2[1] != 0) {
                                  fVar14 = (float)FUN_142d9cad0(param_2[1],param_3);
                                  goto LAB_142ccfcd0;
                                }
                                break;
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
      goto LAB_142ccfce3;
    }
  }
  plVar1 = (longlong *)*param_2;
  if (((plVar1 != (longlong *)0x0) &&
      (cVar3 = UObjectBaseUtility::IsA<UObjectProperty>(plVar1), cVar3 != '\0')) &&
     (plVar1[0xe] != 0)) {
    lVar5 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    for (lVar8 = plVar1[0xe]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar5) {
        lVar8 = (**(code **)(*plVar1 + 0x378))(plVar1,param_2[1]);
        if ((lVar8 != 0) && (cVar3 = FUN_140c61a20(lVar8), cVar3 != '\0')) {
          uStack_60 = 0;
          uStack_50 = 0;
          local_68 = param_3;
          local_58 = param_3;
          uVar7 = FUN_142caae50(&local_68,lVar8,&local_58);
          FUN_140a2f480(param_1,uVar7);
          FUN_140a393e0(&local_68);
          goto LAB_142ccfce3;
        }
        break;
      }
    }
  }
  plVar1 = (longlong *)*param_2;
  if (((plVar1 != (longlong *)0x0) &&
      (cVar3 = UObjectBaseUtility::IsA<UClassProperty>(plVar1), cVar3 != '\0')) &&
     (plVar1[0xf] != 0)) {
    lVar5 = UAnimNotifyState::GetPrivateStaticClass();
    for (lVar8 = plVar1[0xf]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar5) {
        lVar8 = (**(code **)(*plVar1 + 0x378))(plVar1,param_2[1]);
        if ((lVar8 != 0) && (cVar3 = FUN_140c619d0(lVar8), cVar3 != '\0')) {
          lVar9 = UAnimNotifyState::GetPrivateStaticClass();
          lVar5 = lVar8;
          goto LAB_142ccfcb5;
        }
        break;
      }
    }
  }
LAB_142ccfce3:
  iVar4 = *(int *)(local_78 + 0x28);
  iVar10 = (iVar4 - (iVar4 + -1)) + -1;
  if (iVar10 != 0) {
    uVar2 = *(ulonglong *)(local_78 + 0x20);
    uVar11 = (ulonglong)(uVar2 != 0) - 1;
    _guard_xfg_dispatch_icall_nop
              ((void *)((local_78 & uVar11 | uVar2) + (longlong)(iVar4 + -1) * 8),
               (void *)((local_78 & uVar11 | uVar2) + (longlong)iVar4 * 8),(longlong)iVar10 << 3);
    iVar4 = *(int *)(local_78 + 0x28);
  }
  *(int *)(local_78 + 0x28) = iVar4 + -1;
  return;
  while (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 != 0) {
LAB_142ccfcb5:
    if (lVar5 == lVar9) {
      fVar14 = (float)FUN_142c988a0(lVar8,param_3);
LAB_142ccfcd0:
      FUN_140a393e0(param_1);
      *param_1 = fVar14;
      *(undefined1 *)(param_1 + 2) = 0;
      break;
    }
  }
  goto LAB_142ccfce3;
}



// FUNCTION 142ccfdc0 FUN_142ccfdc0 body=236 status=ok
// SIG undefined FUN_142ccfdc0(void)

void FUN_142ccfdc0(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong local_118 [18];
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  local_res10 = param_2;
  FWeakObjectPtr::operator=(param_1 + 0xd);
  if (local_res10 != 0) {
    FWeakObjectPtr::operator=(param_1 + 0xd);
    FUN_142ddbd70(local_res10,param_1);
    if ((int)param_1[7] != 0) {
      FUN_1423e4ec0(local_118,param_1,0);
      local_30 = local_30 | 0x20;
      (**(code **)(local_118[0] + 0x30))(local_118,&local_res10);
      (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,local_118,0);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_118);
    }
  }
  return;
}



// FUNCTION 142ccfeb0 FUN_142ccfeb0 body=45 status=ok
// SIG undefined FUN_142ccfeb0(void)

void FUN_142ccfeb0(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    uVar2 = FUN_142df36d0(*param_2);
    FUN_142df2ca0(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 142ccfee0 FUN_142ccfee0 body=145 status=ok
// SIG undefined FUN_142ccfee0(void)

void FUN_142ccfee0(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar2 = FUN_142340f30();
  if (iVar2 != 3) {
    cVar1 = *(char *)((longlong)param_1 + 0x763);
    *(undefined1 *)((longlong)param_1 + 0x763) = param_2;
    (**(code **)(*param_1 + 0x260))(param_1);
    if (*(char *)((longlong)param_1 + 0x763) != cVar1) {
      (**(code **)(*param_1 + 0x918))(param_1);
      lVar3 = param_1[0x24];
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      plVar4 = (longlong *)FUN_142dcdcd0(lVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x700))(plVar4,param_1);
      }
    }
  }
  return;
}



// FUNCTION 142ccff80 FUN_142ccff80 body=130 status=ok
// SIG undefined FUN_142ccff80(void)

void FUN_142ccff80(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar2 = FUN_142340f30();
  if (iVar2 != 3) {
    cVar1 = *(char *)((longlong)param_1 + 0x77c);
    *(undefined1 *)((longlong)param_1 + 0x77c) = param_2;
    (**(code **)(*param_1 + 0x260))(param_1);
    if (*(char *)((longlong)param_1 + 0x77c) != cVar1) {
      lVar3 = param_1[0x24];
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      plVar4 = (longlong *)FUN_142dcdcd0(lVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x700))(plVar4,param_1);
      }
    }
  }
  return;
}



// FUNCTION 142cd0010 FUN_142cd0010 body=118 status=ok
// SIG undefined FUN_142cd0010(void)

void FUN_142cd0010(longlong param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 == '\0') {
    FUN_142dbb5d0(param_1 + 0x4b8,local_res18);
  }
  else {
    FUN_142dafbc0();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    cVar1 = FUN_1407c3030(param_1 + 0x4b8);
    if (cVar1 != '\0') {
      FUN_142397540(*(undefined8 *)(param_1 + 0x188),1,2);
      return;
    }
    FUN_142397540(*(undefined8 *)(param_1 + 0x188),0,2);
  }
  return;
}



// FUNCTION 142cd0090 FUN_142cd0090 body=139 status=ok
// SIG undefined FUN_142cd0090(void)

void FUN_142cd0090(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(longlong *)(param_1 + 0x9d0) = param_2;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_2 + 0x9d8);
    plVar3 = (longlong *)*plVar1;
    iVar2 = *(int *)(param_2 + 0x9e0);
    for (plVar4 = plVar3; plVar4 != plVar3 + iVar2; plVar4 = plVar4 + 1) {
      if (*plVar4 == param_1) {
        if ((int)((longlong)plVar4 - (longlong)plVar3 >> 3) != -1) {
          return;
        }
        break;
      }
    }
    *(int *)(param_2 + 0x9e0) = iVar2 + 1;
    if (*(int *)(param_2 + 0x9e4) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(longlong *)((longlong)iVar2 * 8 + *plVar1) = param_1;
  }
  return;
}



// FUNCTION 142cd0120 FUN_142cd0120 body=288 status=ok
// SIG undefined FUN_142cd0120(void)

void FUN_142cd0120(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong local_res8;
  longlong *local_res10 [3];
  longlong local_118 [18];
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  lVar1 = *param_2;
  param_1[0xd] = lVar1;
  plVar3 = (longlong *)param_2[1];
  param_1[0xe] = (longlong)plVar3;
  if ((int)param_1[7] == 0) {
LAB_142cd01fe:
    *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffff9 | 1;
    return;
  }
  if (lVar1 == 0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar3 + 0x18))();
    if (cVar2 != '\0') {
      local_res8 = param_1[0xd];
      *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffff7;
      FUN_1423e4ec0(local_118,param_1,0);
      (**(code **)(local_118[0] + 0x30))(local_118,&local_res8);
      local_30 = local_30 | 0x20;
      (**(code **)(*param_1 + 0x2c8))(param_1,local_res10,local_118,0);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_118);
      goto LAB_142cd01fe;
    }
  }
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) | 8;
  local_res10[0] = param_1;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1[5] + 0x17f0,local_res10);
  return;
}



// FUNCTION 142cd0240 FUN_142cd0240 body=139 status=ok
// SIG undefined FUN_142cd0240(void)

void FUN_142cd0240(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x8d0);
  uVar2 = (longlong)*(int *)(param_1 + 0x8d8) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x8d8) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_142c58b30(*plVar1,param_2,param_3);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 142cd02d0 FUN_142cd02d0 body=8 status=ok
// SIG undefined FUN_142cd02d0(void)

void FUN_142cd02d0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xd58) = param_2;
  return;
}



// FUNCTION 142cd02e0 FUN_142cd02e0 body=174 status=ok
// SIG undefined FUN_142cd02e0(void)

void FUN_142cd02e0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0x598) != 0) &&
     ((*(longlong *)(param_1 + 0x588) != param_2 || (*(longlong *)(param_1 + 0x590) != param_3)))) {
    uVar3 = 0;
    *(longlong *)(param_1 + 0x588) = param_2;
    *(longlong *)(param_1 + 0x590) = param_3;
    uVar2 = uVar3;
    if (param_2 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x568) = uVar2;
    if (param_3 != 0) {
      uVar3 = *(undefined8 *)(param_3 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x570) = uVar3;
    uVar1 = FUN_142dd35a0(*(longlong *)(param_1 + 0x598),*(undefined8 *)(param_1 + 0x578));
    *(undefined1 *)(param_1 + 0x5a0) = uVar1;
    uVar1 = FUN_142dd35a0(*(undefined8 *)(param_1 + 0x598),*(undefined8 *)(param_1 + 0x580));
    *(undefined1 *)(param_1 + 0x5a1) = uVar1;
    FUN_142e3d180(param_1);
    return;
  }
  return;
}



// FUNCTION 142cd0390 FUN_142cd0390 body=17 status=ok
// SIG undefined FUN_142cd0390(void)

void FUN_142cd0390(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x908);
  if (lVar1 == 0) {
    return;
  }
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (*(longlong *)(lVar1 + 0x1b0) == 0)) {
    FUN_142df2e20(lVar1,param_2);
  }
  return;
}



// FUNCTION 142cd03b0 FUN_142cd03b0 body=45 status=ok
// SIG undefined FUN_142cd03b0(void)

void FUN_142cd03b0(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x30) = param_2;
  if (param_2 != 0) {
    *(ushort *)(param_1 + 0x28) =
         (*(short *)(param_2 + 0x40) + -1 + *(short *)(param_2 + 0x44) & -*(short *)(param_2 + 0x44)
         ) + 1;
    return;
  }
  *(undefined2 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 142cd03e0 FUN_142cd03e0 body=7 status=ok
// SIG undefined FUN_142cd03e0(void)

void FUN_142cd03e0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x40c) = param_2;
  return;
}



// FUNCTION 142cd03f0 FUN_142cd03f0 body=85 status=ok
// SIG undefined FUN_142cd03f0(void)

undefined8 FUN_142cd03f0(longlong param_1,void *param_2,void *param_3)

{
  if (param_3 != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(param_2,param_3,(ulonglong)*(ushort *)(param_1 + 0x28) - 1);
    *(undefined1 *)(((ulonglong)*(ushort *)(param_1 + 0x28) - 1) + (longlong)param_2) = 1;
    return 1;
  }
  _guard_xfg_dispatch_icall_nop(param_2,0,(ulonglong)*(ushort *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 142cd0450 FUN_142cd0450 body=193 status=ok
// SIG undefined FUN_142cd0450(void)

undefined1 FUN_142cd0450(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)UBlackboardKeyType_Bool::GetPrivateStaticClass();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    cVar1 = FUN_142ccd9e0(param_1,param_2);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 1) != '\0')) && (lVar4 != 0)) {
      uVar2 = FUN_142bb3d50(param_2,*param_1,lVar4);
      *(undefined1 *)((longlong)param_1 + 9) = uVar2;
    }
    if (*(char *)((longlong)param_1 + 9) != -1) {
      FUN_1409f2510(param_2,*(char *)((longlong)param_1 + 9),param_3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cd0520 FUN_142cd0520 body=191 status=ok
// SIG undefined FUN_142cd0520(void)

undefined1 FUN_142cd0520(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)UBlackboardKeyType_Class::GetPrivateStaticClass();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    cVar1 = FUN_142ccd9e0(param_1,param_2);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 1) != '\0')) && (lVar4 != 0)) {
      uVar2 = FUN_142bb3d50(param_2,*param_1,lVar4);
      *(undefined1 *)((longlong)param_1 + 9) = uVar2;
    }
    if (*(char *)((longlong)param_1 + 9) != -1) {
      FUN_142baf4d0(param_2,*(char *)((longlong)param_1 + 9),param_3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cd05e0 FUN_142cd05e0 body=193 status=ok
// SIG undefined FUN_142cd05e0(void)

undefined1 FUN_142cd05e0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)UBlackboardKeyType_Enum::GetPrivateStaticClass();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    cVar1 = FUN_142ccd9e0(param_1,param_2);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 1) != '\0')) && (lVar4 != 0)) {
      uVar2 = FUN_142bb3d50(param_2,*param_1,lVar4);
      *(undefined1 *)((longlong)param_1 + 9) = uVar2;
    }
    if (*(char *)((longlong)param_1 + 9) != -1) {
      FUN_142baf8a0(param_2,*(char *)((longlong)param_1 + 9),param_3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cd06b0 FUN_142cd06b0 body=353 status=ok
// SIG undefined FUN_142cd06b0(void)

undefined8 FUN_142cd06b0(undefined8 *param_1,longlong param_2,char param_3,float param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    if ((*(longlong **)(param_2 + 0x118) == (longlong *)0x0) ||
       (lVar4 = (**(code **)(**(longlong **)(param_2 + 0x118) + 0x148))(), lVar4 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(lVar4 + 0x790);
    }
    FUN_142d2e640(&local_58);
    if ((param_4 <= 0.0) || (param_3 == '\0')) {
      FUN_142d48b30(&local_58,uVar6,param_3,0);
    }
    else {
      FUN_142d48b20(&local_58,uVar6,param_4);
    }
    plVar5 = (longlong *)FUN_142dfd690();
    lVar4 = plVar5[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar4 = plVar5[0x1f];
    }
    cVar1 = FUN_142ccd9e0(param_1,param_2);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 1) != '\0')) && (lVar4 != 0)) {
      uVar2 = FUN_142bb3d50(param_2,*param_1,lVar4);
      *(undefined1 *)((longlong)param_1 + 9) = uVar2;
    }
    if (*(char *)((longlong)param_1 + 9) == -1) {
      uVar3 = 0;
    }
    else {
      local_48 = local_58;
      local_40 = local_50;
      FUN_142cb0d90(param_2,*(char *)((longlong)param_1 + 9),&local_48);
      uVar3 = 1;
    }
  }
  return uVar3;
}



// FUNCTION 142cd0820 FUN_142cd0820 body=191 status=ok
// SIG undefined FUN_142cd0820(void)

undefined1 FUN_142cd0820(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)UBlackboardKeyType_Float::GetPrivateStaticClass();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    cVar1 = FUN_142ccd9e0(param_1,param_2);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 1) != '\0')) && (lVar4 != 0)) {
      uVar2 = FUN_142bb3d50(param_2,*param_1,lVar4);
      *(undefined1 *)((longlong)param_1 + 9) = uVar2;
    }
    if (*(char *)((longlong)param_1 + 9) != -1) {
      FUN_142bafc40(param_2,*(char *)((longlong)param_1 + 9),param_3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cd08e0 FUN_142cd08e0 body=191 status=ok
// SIG undefined FUN_142cd08e0(void)

undefined1 FUN_142cd08e0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)UBlackboardKeyType_Int::GetPrivateStaticClass();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    cVar1 = FUN_142ccd9e0(param_1,param_2);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 1) != '\0')) && (lVar4 != 0)) {
      uVar2 = FUN_142bb3d50(param_2,*param_1,lVar4);
      *(undefined1 *)((longlong)param_1 + 9) = uVar2;
    }
    if (*(char *)((longlong)param_1 + 9) != -1) {
      FUN_142baffe0(param_2,*(char *)((longlong)param_1 + 9),param_3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cd09a0 FUN_142cd09a0 body=191 status=ok
// SIG undefined FUN_142cd09a0(void)

undefined1 FUN_142cd09a0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)FUN_142c35df0();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    cVar1 = FUN_142ccd9e0(param_1,param_2);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 1) != '\0')) && (lVar4 != 0)) {
      uVar2 = FUN_142bb3d50(param_2,*param_1,lVar4);
      *(undefined1 *)((longlong)param_1 + 9) = uVar2;
    }
    if (*(char *)((longlong)param_1 + 9) != -1) {
      FUN_142bb0380(param_2,*(char *)((longlong)param_1 + 9),param_3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cd0a60 FUN_142cd0a60 body=191 status=ok
// SIG undefined FUN_142cd0a60(void)

undefined1 FUN_142cd0a60(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)UBlackboardKeyType_Object::GetPrivateStaticClass();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    cVar1 = FUN_142ccd9e0(param_1,param_2);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 1) != '\0')) && (lVar4 != 0)) {
      uVar2 = FUN_142bb3d50(param_2,*param_1,lVar4);
      *(undefined1 *)((longlong)param_1 + 9) = uVar2;
    }
    if (*(char *)((longlong)param_1 + 9) != -1) {
      FUN_140725870(param_2,*(char *)((longlong)param_1 + 9),param_3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cd0b20 FUN_142cd0b20 body=215 status=ok
// SIG undefined FUN_142cd0b20(void)

undefined8 FUN_142cd0b20(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)FUN_142c361d0();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    cVar1 = FUN_142ccd9e0(param_1,param_2);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 1) != '\0')) && (lVar4 != 0)) {
      uVar2 = FUN_142bb3d50(param_2,*param_1,lVar4);
      *(undefined1 *)((longlong)param_1 + 9) = uVar2;
    }
    if (*(char *)((longlong)param_1 + 9) != -1) {
      local_18 = *param_3;
      local_10 = *(undefined4 *)(param_3 + 1);
      FUN_14074ace0(param_2,*(char *)((longlong)param_1 + 9),&local_18);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cd0c00 FUN_142cd0c00 body=259 status=ok
// SIG undefined FUN_142cd0c00(void)

undefined8 FUN_142cd0c00(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  plVar3 = (longlong *)FString::FString(local_38,param_3);
  if (param_2 != 0) {
    plVar4 = (longlong *)FUN_142c36340();
    lVar6 = plVar4[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar6 = plVar4[0x1f];
    }
    cVar1 = FUN_142ccd9e0(param_1,param_2);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 1) != '\0')) && (lVar6 != 0)) {
      uVar2 = FUN_142bb3d50(param_2,*param_1,lVar6);
      *(undefined1 *)((longlong)param_1 + 9) = uVar2;
    }
    if (*(char *)((longlong)param_1 + 9) != -1) {
      uVar5 = FString::FString(local_28,plVar3);
      FUN_142bb0720(param_2,*(undefined1 *)((longlong)param_1 + 9),uVar5);
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      uVar5 = 1;
      goto LAB_142cd0cde;
    }
  }
  if (*plVar3 != 0) {
    FMemory::Free();
  }
  uVar5 = 0;
LAB_142cd0cde:
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 142cd0d10 FUN_142cd0d10 body=221 status=ok
// SIG undefined FUN_142cd0d10(void)

undefined1 FUN_142cd0d10(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_748 [912];
  undefined1 local_3b8 [912];
  
  uVar1 = FUN_140726d20(local_748,param_3);
  if (param_2 != 0) {
    plVar4 = (longlong *)FUN_142dfd5b0();
    lVar5 = plVar4[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar5 = plVar4[0x1f];
    }
    cVar2 = FUN_142ccd9e0(param_1,param_2);
    if (((cVar2 == '\0') && (*(char *)(param_1 + 1) != '\0')) && (lVar5 != 0)) {
      uVar3 = FUN_142bb3d50(param_2,*param_1,lVar5);
      *(undefined1 *)((longlong)param_1 + 9) = uVar3;
    }
    if (*(char *)((longlong)param_1 + 9) != -1) {
      uVar1 = FUN_140726d20(local_3b8,uVar1);
      FUN_142cb1140(param_2,*(undefined1 *)((longlong)param_1 + 9),uVar1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cd0df0 FUN_142cd0df0 body=215 status=ok
// SIG undefined FUN_142cd0df0(void)

undefined8 FUN_142cd0df0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)UBlackboardKeyType_Object::GetPrivateStaticClass();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    cVar1 = FUN_142ccd9e0(param_1,param_2);
    if (((cVar1 == '\0') && (*(char *)(param_1 + 1) != '\0')) && (lVar4 != 0)) {
      uVar2 = FUN_142bb3d50(param_2,*param_1,lVar4);
      *(undefined1 *)((longlong)param_1 + 9) = uVar2;
    }
    if (*(char *)((longlong)param_1 + 9) != -1) {
      local_18 = *param_3;
      local_10 = *(undefined4 *)(param_3 + 1);
      FUN_14074b0b0(param_2,*(char *)((longlong)param_1 + 9),&local_18);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cd0ed0 FUN_142cd0ed0 body=41 status=ok
// SIG undefined FUN_142cd0ed0(void)

void FUN_142cd0ed0(longlong param_1,undefined8 *param_2)

{
  if (0.0 < *(float *)(param_1 + 0x338)) {
    *(undefined8 *)(param_1 + 0x474) = *param_2;
    *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_2 + 1);
    *(undefined1 *)(param_1 + 0x470) = 0;
  }
  return;
}



// FUNCTION 142cd0f00 FUN_142cd0f00 body=682 status=ok
// SIG undefined FUN_142cd0f00(void)

undefined8 FUN_142cd0f00(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 local_d8;
  float local_d0;
  undefined4 local_c8 [4];
  undefined1 local_b8 [176];
  
  lVar4 = param_1[2];
  lVar6 = *(longlong *)(*param_1 + 0x120);
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0();
  }
  fVar7 = *(float *)(lVar6 + 0x790) - *(float *)((longlong)param_1 + 0x464);
  pfVar1 = (float *)(lVar4 + 0x19c);
  if (fVar7 < *pfVar1 || fVar7 == *pfVar1) {
    if ((*(byte *)(param_1 + 3) & 2) == 0) {
      return 0;
    }
    _guard_xfg_dispatch_icall_nop(local_b8,0,0x68);
    FUN_142cbf3d0(param_1,local_b8);
    if (((*(byte *)(param_1 + 3) & 2) != 0) && (lVar6 = param_1[1], lVar6 != 0)) {
      iVar3 = (int)param_1[4];
      if ((-1 < iVar3) &&
         (((iVar3 < *(int *)(lVar6 + 0x38) &&
           (lVar6 = (longlong)iVar3 * 0x110 + *(longlong *)(lVar6 + 0x30), lVar6 != 0)) &&
          (cVar5 = FUN_142cc9880(local_b8,(longlong)param_1 + 0x24c,lVar6,0), cVar5 != '\0')))) {
        if ((*(byte *)(lVar6 + 0x10c) & 1) == 0) {
          fVar7 = *(float *)((longlong)param_1 + 0x254);
          fVar2 = *(float *)(param_1 + 0x4a);
          fVar9 = fVar2 * fVar2 + fVar7 * fVar7;
          if (fVar9 == 1.0) {
            fVar12 = fVar7;
            fVar8 = fVar2;
            fVar10 = 0.0;
            if (*(float *)(param_1 + 0x4b) == 0.0) {
              local_d8 = param_1[0x4a];
              local_d0 = *(float *)(param_1 + 0x4b);
              fVar12 = (float)((ulonglong)local_d8 >> 0x20);
              fVar8 = (float)local_d8;
              fVar10 = local_d0;
            }
          }
          else {
            fVar12 = DAT_1468b5d94;
            fVar8 = DAT_1468b5d90;
            fVar10 = DAT_1468b5d98;
            if (1e-08 <= fVar9) {
              auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
              fVar12 = auVar11._0_4_;
              fVar12 = fVar12 + fVar12 * (0.5 - fVar9 * 0.5 * fVar12 * fVar12);
              fVar12 = fVar12 + fVar12 * (0.5 - fVar9 * 0.5 * fVar12 * fVar12);
              fVar8 = fVar2 * fVar12;
              fVar12 = fVar7 * fVar12;
              fVar10 = 0.0;
            }
          }
          (**(code **)(**(longlong **)(*param_1 + 0x220) + 0x788))
                    (*(longlong **)(*param_1 + 0x220),local_c8);
          local_c8[0] = 0;
          FRotator::Vector(local_c8,&local_d8);
          fVar8 = (float)local_d8 * fVar8;
          fVar12 = local_d8._4_4_ * fVar12;
          fVar10 = local_d0 * fVar10;
          fVar7 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar4 + 0x198) * 0.017453292);
          if (fVar12 + fVar8 + fVar10 < fVar7) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 142cd11b0 FUN_142cd11b0 body=8 status=ok
// SIG undefined FUN_142cd11b0(void)

undefined1 FUN_142cd11b0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x855);
}



// FUNCTION 142cd11c0 FUN_142cd11c0 body=23 status=ok
// SIG undefined FUN_142cd11c0(void)

bool FUN_142cd11c0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x7a0))();
  return cVar1 == '\0';
}



// FUNCTION 142cd11e0 FUN_142cd11e0 body=291 status=ok
// SIG undefined FUN_142cd11e0(void)

void FUN_142cd11e0(longlong *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_18;
  int local_10;
  
  if (param_2 != *(char *)((longlong)param_1 + 0x763)) {
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      plVar4 = (longlong *)FWeakObjectPtr::Get();
      if (plVar4 == (longlong *)0x0) {
LAB_142cd12e4:
        local_10 = local_10 + 1;
      }
      else {
        lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((!bVar1) || (cVar2 = (**(code **)(*plVar4 + 0x768))(), cVar2 == '\0'))
        goto LAB_142cd12e4;
        cVar2 = FUN_142d869e0(param_1,plVar4);
        if (param_2 == '\0') {
          if (cVar2 != '\0') {
            (**(code **)(*param_1 + 0x8f8))(param_1,plVar4);
          }
          goto LAB_142cd12e4;
        }
        if (cVar2 == '\0') goto LAB_142cd12e4;
        (**(code **)(*param_1 + 0x8f0))(param_1,plVar4);
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}



// FUNCTION 142cd1310 FUN_142cd1310 body=510 status=ok
// SIG undefined FUN_142cd1310(void)

ulonglong FUN_142cd1310(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *in_RAX;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a0;
  longlong local_98;
  longlong *plStack_90;
  float local_58;
  undefined4 uStack_54;
  
  if (((((longlong *)*param_1 != (longlong *)0x0) &&
       (in_RAX = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x5c0))(), (char)in_RAX != '\0'))
      && (in_RAX = (longlong *)(**(code **)(*(longlong *)*param_1 + 0xc48))(), (char)in_RAX != '\0')
      ) && (param_2 != (longlong *)0x0)) {
    in_RAX = (longlong *)FUN_142e07420();
    plVar9 = param_2;
    do {
      if (plVar9 == in_RAX) {
        lVar10 = param_2[0x1f];
        if (lVar10 == 0) {
          (**(code **)(*param_2 + 0x368))(param_2);
          lVar10 = param_2[0x1f];
        }
        in_RAX = (longlong *)FUN_142cc5960(*param_1,lVar10);
        if (((char)in_RAX != '\0') && ((*(byte *)((longlong)param_1 + 0x15c) & 4) == 0)) {
          FUN_142cbd4f0(param_1,&local_b8,param_2,param_3);
          iVar7 = FUN_14233f450(*param_1);
          if (iVar7 == 3) {
            plVar9 = (longlong *)*param_1;
            local_98 = 0;
            uStack_54 = 0;
            lVar5 = param_3[4];
            uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
            local_a0 = local_b0 * 100.0;
            lVar10 = *param_3;
            lVar2 = param_3[1];
            lVar3 = param_3[2];
            lVar4 = param_3[3];
            plStack_90 = param_2;
            local_58 = local_a0;
            (**(code **)(*plVar9 + 0x260))(plVar9);
            lVar6 = plVar9[0x31a];
            plVar9[0x31a] = local_98;
            plVar9[0x31b] = (longlong)plStack_90;
            plVar9[0x31c] = lVar10;
            plVar9[0x31d] = lVar2;
            plVar9[0x31e] = lVar3;
            plVar9[799] = lVar4;
            *(int *)(plVar9 + 800) = (int)lVar5;
            *(undefined4 *)((longlong)plVar9 + 0x1904) = uVar1;
            *(float *)(plVar9 + 0x321) = local_b8 * 100.0;
            *(float *)((longlong)plVar9 + 0x190c) = local_b4 * 100.0;
            plVar9[0x322] = CONCAT44(uStack_54,local_58);
            *(char *)(plVar9 + 0x31a) = (char)lVar6 + '\x01';
          }
          uVar8 = FUN_142cd15c0(param_1,param_2,param_3,&local_b8,param_4);
          return uVar8;
        }
        break;
      }
      plVar9 = (longlong *)plVar9[6];
    } while (plVar9 != (longlong *)0x0);
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142cd1510 FUN_142cd1510 body=161 status=ok
// SIG undefined FUN_142cd1510(void)

void FUN_142cd1510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 *param_8)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar1 = FUN_142cdb060();
  if (lVar1 == 0) {
    return;
  }
  local_28 = *param_8;
  local_20 = *(undefined4 *)(param_8 + 1);
  FUN_142d00740(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,&local_28);
  return;
}



// FUNCTION 142cd15c0 FUN_142cd15c0 body=4525 status=ok
// SIG undefined FUN_142cd15c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_142cd15c0(longlong *param_1,longlong *param_2,float *param_3,undefined8 *param_4,
             longlong param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  bool bVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  float *pfVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 uVar19;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong *local_res10;
  longlong *local_158;
  char local_150 [8];
  longlong *local_148;
  float local_140;
  float local_138 [2];
  undefined8 local_130;
  undefined8 uStack_128;
  longlong **local_108;
  longlong *plStack_100;
  float *local_f8;
  longlong **pplStack_f0;
  char *local_e8;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined1 *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  
  if (param_2 != (longlong *)0x0) {
    local_res10 = param_2;
    plVar9 = (longlong *)FUN_142e07420();
    for (plVar15 = local_res10; plVar15 != (longlong *)0x0; plVar15 = (longlong *)plVar15[6]) {
      if (plVar15 == plVar9) {
        if (param_1[1] != 0) {
          *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) | 4;
          FUN_142cd36a0(param_1);
          *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) & 0xfffffffb;
        }
        lVar12 = *param_1;
        local_158 = *(longlong **)(lVar12 + 0xfd8);
        _guard_xfg_dispatch_icall_nop(param_1 + 1,0,0x158);
        *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) | 1;
        uStack_128 = &local_res10;
        *param_1 = lVar12;
        local_d8 = 0;
        local_c8 = 0;
        local_130 = param_1;
        puVar10 = (undefined8 *)FUN_140438ef0(0x18,&local_f8);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar10 + 1) = (undefined4)local_130;
          *(undefined4 *)((longlong)puVar10 + 0xc) = local_130._4_4_;
          *(undefined4 *)(puVar10 + 2) = (undefined4)uStack_128;
          *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_128._4_4_;
        }
        local_108 = (longlong **)FUN_142cbb640;
        uVar11 = FUN_14247f500();
        FUN_14247d5a0(uVar11,*param_1,&local_108);
        *(longlong **)(param_1[1] + 0x898) = local_158;
        param_1[2] = param_5;
        (**(code **)(*(longlong *)param_1[1] + 0x2b8))((longlong *)param_1[1],local_158);
        plVar15 = local_158;
        if (((*(uint *)(param_1[1] + 0x28) & 0x8000000) != 0) && ((char)local_158[0x25] == '\x03'))
        {
          uVar11 = FUN_142e79d90();
          lVar12 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar11);
          if (lVar12 != 0) {
            FUN_142ddcd30(lVar12,1,DAT_146b31400);
          }
        }
        lVar12 = *(longlong *)(*(longlong *)(*param_1 + 0xfd8) + 0x168);
        if (lVar12 == 0) {
          local_148 = (longlong *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          local_140 = DAT_1468b5d98;
        }
        else {
          local_148 = *(longlong **)(lVar12 + 0x220);
          local_140 = *(float *)(lVar12 + 0x228);
        }
        pfVar1 = (float *)((longlong)param_1 + 0xcc);
        *(longlong **)pfVar1 = local_148;
        *(float *)((longlong)param_1 + 0xd4) = local_140;
        puVar10 = (undefined8 *)FUN_142cbd1b0(param_1,&local_130);
        *(undefined8 *)((longlong)param_1 + 0x114) = *puVar10;
        *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)(puVar10 + 1);
        uVar20 = FUN_142c98860(param_1[1] + 0x3d0,local_158);
        *(undefined4 *)((longlong)param_1 + 0xfc) = uVar20;
        uVar20 = FUN_142c98860(param_1[1] + 0x488,local_158);
        lVar18 = param_1[1];
        lVar12 = *param_1;
        *(undefined4 *)(param_1 + 0x20) = uVar20;
        cVar8 = *(char *)(lVar12 + 0x248);
        if (0.0 < *(float *)(lVar18 + 0x314)) {
          *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(lVar12 + 0x234);
          *(undefined4 *)(lVar12 + 0x234) = *(undefined4 *)(lVar18 + 0x314);
          lVar18 = param_1[1];
        }
        if (((*(uint *)(lVar18 + 0x28) & 0x800000) != 0) && (*(char *)(lVar18 + 0x68) == '\x02')) {
          *(undefined1 *)(*param_1 + 0xea1) = 1;
          lVar18 = param_1[1];
        }
        uVar20 = FUN_142c98860(lVar18 + 0x548,local_158);
        *(undefined4 *)(param_1 + 5) = uVar20;
        uVar20 = FUN_142c98860(param_1[1] + 0x4d8,local_158);
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar20;
        uVar20 = FUN_142c98860(param_1[1] + 0x510,local_158);
        *(undefined4 *)(param_1 + 6) = uVar20;
        uVar20 = FUN_142c98860(param_1[1] + 0x580,local_158);
        *(undefined4 *)((longlong)param_1 + 0x34) = uVar20;
        uVar20 = FUN_142c98860(param_1[1] + 0x5b8,local_158);
        *(undefined4 *)(param_1 + 7) = uVar20;
        uVar20 = FUN_142c98860(param_1[1] + 0x698,local_158);
        *(undefined4 *)(param_1 + 8) = uVar20;
        uVar20 = FUN_142c98860(param_1[1] + 0x660,local_158);
        *(undefined4 *)((longlong)param_1 + 0x44) = uVar20;
        FUN_142c98860(param_1[1] + 0x628);
        *(undefined4 *)(param_1 + 9) = extraout_XMM0_Da;
        if (*(byte *)(local_158 + 0x25) < 2) goto LAB_142cd241e;
        fVar21 = *param_3;
        if (fVar21 <= 0.0) {
          fVar21 = (float)FUN_142c98860(param_1[1] + 0x70);
        }
        *(float *)(param_1 + 3) = fVar21;
        *(float *)((longlong)param_1 + 0x1c) = fVar21;
        *(undefined4 *)(param_1 + 4) = 0;
        fVar21 = param_3[1];
        if (fVar21 <= 0.0) {
          fVar21 = (float)FUN_142c98860(param_1[1] + 0x30);
        }
        *(float *)((longlong)param_1 + 0x4c) = fVar21;
        fVar21 = param_3[2];
        if (fVar21 <= 0.0) {
          fVar21 = (float)FUN_142c98860(param_1[1] + 0x770);
        }
        *(float *)((longlong)param_1 + 0x54) = fVar21;
        uVar4 = *(uint *)(param_1[1] + 0x28);
        if ((uVar4 >> 0x10 & 1) == 0) {
          if ((uVar4 >> 0xd & 1) != 0) {
            uVar20 = FUN_142c98860(param_1[1] + 0x398);
            if (&local_148 != (longlong **)((longlong)param_1 + 0x104)) {
              *(undefined4 *)((longlong)param_1 + 0x104) = uVar20;
              goto LAB_142cd1a35;
            }
          }
        }
        else if (&local_148 != (longlong **)((longlong)param_1 + 0x104)) {
          *(undefined4 *)((longlong)param_1 + 0x104) = 0;
LAB_142cd1a35:
          *(undefined1 *)(param_1 + 0x21) = 1;
        }
        lVar12 = param_1[1];
        if (*(int *)(lVar12 + 0x28) < 0) {
          uVar20 = FUN_142c98860(lVar12 + 0x7e8,local_158);
          *(undefined4 *)(param_1 + 0x18) = uVar20;
          uVar20 = FUN_142c98860(param_1[1] + 0x820,local_158);
          *(undefined4 *)((longlong)param_1 + 0xc4) = uVar20;
          uVar20 = FUN_142c98860(param_1[1] + 0x858);
          lVar12 = param_1[1];
          *(undefined4 *)(param_1 + 0x19) = uVar20;
        }
        if ((*(byte *)(lVar12 + 0x2c) & 0x40) != 0) {
          (**(code **)(*local_158 + 0x8e0))(local_158);
          lVar12 = param_1[1];
        }
        plVar15 = local_158;
        fVar21 = *(float *)(lVar12 + 0x7d8);
        if (0.0 <= fVar21) {
          if (360.0 <= fVar21) {
            fVar21 = 360.0;
          }
        }
        else {
          fVar21 = 0.0;
        }
        fVar21 = _guard_xfg_dispatch_icall_nop(fVar21 * 0.008726646);
        *(float *)((longlong)param_1 + 0x10c) = -fVar21;
        if ((char)plVar15[0x25] != '\x03') goto LAB_142cd1c2f;
        if ((*(uint *)(lVar12 + 0x28) & 0x100) != 0) {
          local_148 = *(longlong **)(*(longlong *)(lVar12 + 0x10) + 0x18);
          FUN_142dafbc0(*param_1 + 0xd70);
          lVar12 = param_1[1];
          plVar15 = local_158;
        }
        if (((*(uint *)(lVar12 + 0x28) & 0x8000000) != 0) ||
           ((*(byte *)(lVar12 + 0x2c) & 0x20) != 0)) {
          FUN_142d8eaf0(plVar15);
          lVar12 = param_1[1];
          plVar15 = local_158;
        }
        if ((*(byte *)(lVar12 + 0x2c) & 0x10) != 0) {
          FUN_142d8ec30(plVar15);
          plVar15 = local_158;
        }
        cVar6 = (**(code **)(*plVar15 + 0x780))(plVar15);
        if (cVar6 != '\0') goto LAB_142cd1c2f;
        lVar12 = param_1[1];
        if ((*(uint *)(lVar12 + 0x2c) & 4) != 0) {
          FUN_142d8e990(local_158,*(undefined8 *)(*(longlong *)(lVar12 + 0x10) + 0x18),
                        (byte)(*(uint *)(lVar12 + 0x2c) >> 3) & 1);
          lVar12 = param_1[1];
        }
        if ((lVar12 == 0) || (plVar15 = *(longlong **)(lVar12 + 0x10), plVar15 == (longlong *)0x0))
        goto LAB_142cd1bde;
        plVar13 = (longlong *)FUN_142e07420();
        plVar9 = plVar15;
        goto LAB_142cd1bd0;
      }
    }
  }
  return 0;
  while (plVar9 = (longlong *)plVar9[6], plVar9 != (longlong *)0x0) {
LAB_142cd1bd0:
    if (plVar9 == plVar13) goto LAB_142cd1be0;
  }
LAB_142cd1bde:
  plVar15 = (longlong *)0x0;
LAB_142cd1be0:
  if (local_res10 != (longlong *)0x0) {
    plVar13 = (longlong *)FUN_142e07420();
    for (plVar9 = local_res10; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[6]) {
      plVar16 = local_res10;
      if (plVar9 == plVar13) goto LAB_142cd1c10;
    }
  }
  plVar16 = (longlong *)0x0;
LAB_142cd1c10:
  if (plVar15 != plVar16) goto LAB_142cd25b5;
  FUN_142d8eef0(local_158,*(undefined8 *)(*(longlong *)(param_1[1] + 0x10) + 0x18));
LAB_142cd1c2f:
  pfVar14 = (float *)(param_1 + 0x15);
  *(undefined8 *)pfVar14 = *param_4;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_4 + 1);
  if (((*(uint *)(param_1[1] + 0x28) & 0x800000) == 0) &&
     (*(float *)((longlong)param_1 + 0x54) != 0.0)) {
    FVector::Rotation(pfVar14,&local_148);
    local_148 = (longlong *)CONCAT44(local_148._4_4_,*(undefined4 *)((longlong)param_1 + 0x54));
    puVar10 = (undefined8 *)FRotator::Vector(&local_148,&local_130);
    *(undefined8 *)pfVar14 = *puVar10;
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(puVar10 + 1);
  }
  (**(code **)(*(longlong *)*param_1 + 0xc58))();
  pfVar2 = (float *)((longlong)param_1 + 0xb4);
  *(undefined8 *)pfVar2 = *(undefined8 *)pfVar14;
  *(int *)((longlong)param_1 + 0xbc) = (int)param_1[0x16];
  lVar12 = *(longlong *)(param_3 + 4);
  param_1[0x11] = lVar12;
  if (lVar12 == 0) {
    fVar24 = (float)*(undefined8 *)(param_3 + 6);
    fVar22 = (float)((ulonglong)*(undefined8 *)(param_3 + 6) >> 0x20);
    fVar21 = param_3[8];
  }
  else {
    lVar12 = *(longlong *)(lVar12 + 0x168);
    if (lVar12 == 0) {
      local_148 = (longlong *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_140 = DAT_1468b5d98;
      fVar24 = DAT_1468b5d90;
      fVar22 = DAT_1468b5d94;
      fVar21 = DAT_1468b5d98;
    }
    else {
      local_148 = *(longlong **)(lVar12 + 0x220);
      local_140 = *(float *)(lVar12 + 0x228);
      fVar24 = *(float *)(lVar12 + 0x220);
      fVar22 = *(float *)(lVar12 + 0x224);
      fVar21 = local_140;
    }
  }
  uStack_128 = (longlong **)CONCAT44(uStack_128._4_4_,fVar21);
  pfVar3 = (float *)(param_1 + 0x12);
  local_130 = (longlong *)CONCAT44(fVar22,fVar24);
  *(longlong **)pfVar3 = local_130;
  *(float *)(param_1 + 0x13) = fVar21;
  if (((*pfVar3 == 0.0) && (*(float *)((longlong)param_1 + 0x94) == 0.0)) &&
     (*(float *)(param_1 + 0x13) == 0.0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (!bVar7) {
    lVar12 = param_1[1];
    fVar21 = *(float *)(lVar12 + 0x7a8);
    if ((*(uint *)(lVar12 + 0x28) & 0x200000) != 0) {
      local_138[0] = 0.0;
      local_148 = (longlong *)((ulonglong)local_148 & 0xffffffff00000000);
      (**(code **)(*local_158 + 0x570))(local_158,local_138,&local_148,0);
      lVar12 = param_1[1];
      fVar21 = fVar21 - local_138[0];
    }
    if (((*(uint *)(lVar12 + 0x28) & 0x400000) != 0) &&
       (plVar15 = (longlong *)param_1[0x11], plVar15 != (longlong *)0x0)) {
      local_138[0] = 0.0;
      local_148 = (longlong *)((ulonglong)local_148 & 0xffffffff00000000);
      (**(code **)(*plVar15 + 0x570))(plVar15,local_138,&local_148,0);
      fVar21 = fVar21 - local_138[0];
    }
    if (fVar21 != 0.0) {
      *(float *)((longlong)param_1 + 0x94) =
           fVar21 * *(float *)((longlong)param_1 + 0xac) + *(float *)((longlong)param_1 + 0x94);
      *(float *)(param_1 + 0x13) = fVar21 * *(float *)(param_1 + 0x16) + *(float *)(param_1 + 0x13);
      *pfVar3 = fVar21 * *pfVar14 + *pfVar3;
    }
  }
  if ((*(uint *)(param_1[1] + 0x28) & 0x800000) == 0) {
    *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) & 0xfffffdff;
    FUN_142cb68f0(param_1);
    if ((*(uint *)(param_1[1] + 0x28) & 0x10000) == 0) {
      fVar21 = *(float *)((longlong)param_1 + 0x1c);
      fVar24 = fVar21 * *(float *)((longlong)param_1 + 0xbc);
      uStack_128 = (longlong **)CONCAT44(uStack_128._4_4_,fVar24);
      param_1[0x1b] = CONCAT44(fVar21 * *(float *)(param_1 + 0x17),fVar21 * *pfVar2);
      *(float *)(param_1 + 0x1c) = fVar24;
      if ((*(byte *)(param_1[1] + 0x28) & 0x40) != 0) {
        lVar12 = *param_1;
        *(ulonglong *)(lVar12 + 0x18c) =
             CONCAT44(fVar21 * *(float *)(param_1 + 0x17),fVar21 * *pfVar2);
        *(float *)(lVar12 + 0x194) = fVar24;
      }
    }
    else {
      lVar12 = *param_1;
      param_1[0x1b] = *(longlong *)((longlong)param_1 + 0xe4);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0xec);
      *(longlong *)(lVar12 + 0x18c) = *(longlong *)((longlong)param_1 + 0xe4);
      *(undefined4 *)(lVar12 + 0x194) = *(undefined4 *)((longlong)param_1 + 0xec);
    }
    param_1[0x1e] = param_1[0x1b];
    *(int *)(param_1 + 0x1f) = (int)param_1[0x1c];
  }
  else {
    if ((*(byte *)((longlong)local_158 + 0x56c) & 1) != 0) {
      lVar12 = local_158[0x9a];
      auVar27._0_4_ = *(uint *)(lVar12 + 0x230) & _DAT_146b30f30;
      auVar27._4_4_ = *(uint *)(lVar12 + 0x234) & uRam0000000146b30f34;
      auVar27._8_4_ = *(uint *)(lVar12 + 0x238) & uRam0000000146b30f38;
      auVar27._12_4_ = *(uint *)(lVar12 + 0x23c) & uRam0000000146b30f3c;
      fVar21 = *(float *)(lVar12 + 0x710);
      auVar28._4_4_ = auVar27._8_4_;
      auVar28._0_4_ = auVar27._4_4_;
      auVar28._8_4_ = auVar27._0_4_;
      auVar28._12_4_ = auVar27._12_4_;
      auVar28 = minps(auVar27,auVar28);
      auVar5._4_4_ = auVar27._0_4_;
      auVar5._0_4_ = auVar27._8_4_;
      auVar5._8_4_ = auVar27._4_4_;
      auVar5._12_4_ = auVar27._12_4_;
      auVar28 = minps(auVar28,auVar5);
      lVar12 = UClass::GetDefaultObject<UDamageType>(local_158[2]);
      local_148 = (longlong *)CONCAT44(local_148._4_4_,auVar28._0_4_);
      *(float *)((longlong)param_1 + 0xd4) =
           (*(float *)(*(longlong *)(lVar12 + 0x4d0) + 0x710) - fVar21) * auVar28._0_4_ +
           *(float *)((longlong)param_1 + 0xd4);
    }
    *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) | 0x200;
    param_1[0x1e] = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    *(float *)(param_1 + 0x1f) = DAT_1468b5d98;
    lVar12 = (**(code **)(*local_158 + 0x148))();
    if (lVar12 == 0) {
      uVar20 = 0xc61c4000;
    }
    else {
      uVar11 = (**(code **)(*local_158 + 0x148))();
      uVar20 = FUN_1428cc5b0(uVar11);
    }
    *(undefined4 *)(param_1 + 0xb) = uVar20;
    if (*(float *)((longlong)param_1 + 0x54) == 0.0) {
      pfVar14 = (float *)FVector::Rotation(pfVar2,&local_130);
      fVar21 = *pfVar14;
      fVar24 = (float)(int)(fVar21 * 0.0027777778) * 360.0;
      if (ABS(fVar21) < ABS(fVar24)) {
        fVar24 = fVar21;
      }
      fVar21 = fVar21 - fVar24;
      if (fVar21 < 0.0) {
        fVar21 = fVar21 + 360.0;
      }
      if (180.0 < fVar21) {
        fVar21 = fVar21 - 360.0;
      }
      *(float *)((longlong)param_1 + 0x54) = fVar21;
    }
    if (((*pfVar3 == 0.0) && (*(float *)((longlong)param_1 + 0x94) == 0.0)) &&
       (*(float *)(param_1 + 0x13) == 0.0)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      fVar21 = *(float *)(param_1 + 0x17);
      fVar24 = *pfVar2;
      fVar22 = fVar24 * fVar24 + fVar21 * fVar21;
      if (fVar22 == 1.0) {
        if (*(float *)((longlong)param_1 + 0xbc) == 0.0) {
          local_148 = *(longlong **)pfVar2;
          local_140 = *(float *)((longlong)param_1 + 0xbc);
          fVar25 = (float)((ulonglong)local_148 >> 0x20);
          fVar23 = local_140;
          fVar26 = local_148._0_4_;
        }
        else {
LAB_142cd20b7:
          fVar25 = fVar21;
          fVar23 = 0.0;
          fVar26 = fVar24;
        }
      }
      else {
        fVar25 = DAT_1468b5d94;
        fVar23 = DAT_1468b5d98;
        fVar26 = DAT_1468b5d90;
        if (1e-08 <= fVar22) {
          auVar28 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
          fVar25 = auVar28._0_4_;
          fVar25 = fVar25 + fVar25 * (0.5 - fVar22 * 0.5 * fVar25 * fVar25);
          fVar25 = fVar25 + fVar25 * (0.5 - fVar22 * 0.5 * fVar25 * fVar25);
          local_148 = (longlong *)CONCAT44(local_148._4_4_,fVar25);
          fVar21 = fVar25 * fVar21;
          fVar24 = fVar25 * fVar24;
          goto LAB_142cd20b7;
        }
      }
      fVar21 = *(float *)((longlong)param_1 + 0x1c);
      fVar24 = *(float *)((longlong)param_1 + 0x4c);
      fVar22 = fVar21 * fVar23 * fVar24 + *(float *)((longlong)param_1 + 0xd4);
      uStack_128 = (longlong **)CONCAT44(uStack_128._4_4_,fVar22);
      *(ulonglong *)pfVar3 =
           CONCAT44(fVar21 * fVar25 * fVar24 + *(float *)(param_1 + 0x1a),
                    fVar24 * fVar21 * fVar26 + *pfVar1);
      *(float *)(param_1 + 0x13) = fVar22;
    }
    FUN_1424b51e0(&local_108);
    fVar24 = *(float *)((longlong)param_1 + 0x54) * 0.011111111;
    fVar21 = 0.0;
    if ((0.0 <= fVar24) && (fVar21 = fVar24, 1.0 <= fVar24)) {
      fVar21 = 1.0;
    }
    FUN_1424d11a0(&local_108,pfVar1,pfVar3,(int)param_1[0xb],
                  *(undefined4 *)((longlong)param_1 + 0x1c),fVar21);
    plVar15 = (longlong *)FUN_1424beb60(&local_108,&local_130,pfVar1,pfVar3);
    lVar12 = plVar15[1];
    param_1[0xd] = *plVar15;
    param_1[0xe] = lVar12;
    lVar12 = plVar15[3];
    param_1[0xf] = plVar15[2];
    param_1[0x10] = lVar12;
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_1 + 0x84);
    param_1[0x1b] = *(longlong *)((longlong)param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x7c);
  }
  *(undefined8 *)((longlong)param_1 + 0x9c) = *(undefined8 *)pfVar3;
  *(int *)((longlong)param_1 + 0xa4) = (int)param_1[0x13];
  cVar6 = *(char *)(param_1[1] + 0x68);
  if (cVar6 == '\0') {
    plVar15 = (longlong *)*param_1;
    if (*(char *)((longlong)plVar15 + 0x4b2) == '\x02') {
      *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) | 0x10;
      FUN_142350510();
      plVar15 = (longlong *)*param_1;
    }
    if ((char)plVar15[0x49] != '\x03') {
      uVar19 = *(undefined1 *)((longlong)plVar15 + 0x4b2);
      goto LAB_142cd2323;
    }
  }
  else {
    if (cVar6 == '\x01') {
      plVar15 = (longlong *)*param_1;
      uVar19 = 5;
    }
    else {
      if (cVar6 != '\x02') {
        if (cVar6 == '\x03') {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_146b315c0) && (_Init_thread_header(&DAT_146b315c0), DAT_146b315c0 == -1)) {
            FName::FName(&DAT_146b315b8,L"ControlledMove",1);
            _Init_thread_footer(&DAT_146b315c0);
          }
          FUN_142cff920(*param_1,1,DAT_146b315b8);
        }
        goto LAB_142cd232f;
      }
      plVar15 = (longlong *)*param_1;
      uVar19 = 3;
    }
LAB_142cd2323:
    (**(code **)(*plVar15 + 0x5a0))(plVar15,uVar19,0);
  }
LAB_142cd232f:
  if ((param_1[1] != 0) && (plVar15 = *(longlong **)(param_1[1] + 0x10), plVar15 != (longlong *)0x0)
     ) {
    plVar13 = (longlong *)FUN_142e07420();
    plVar9 = plVar15;
    do {
      if (plVar9 == plVar13) goto LAB_142cd2360;
      plVar9 = (longlong *)plVar9[6];
    } while (plVar9 != (longlong *)0x0);
  }
  plVar15 = (longlong *)0x0;
LAB_142cd2360:
  if (local_res10 != (longlong *)0x0) {
    plVar13 = (longlong *)FUN_142e07420();
    for (plVar9 = local_res10; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[6]) {
      plVar16 = local_res10;
      if (plVar9 == plVar13) goto LAB_142cd2394;
    }
  }
  plVar16 = (longlong *)0x0;
LAB_142cd2394:
  if (plVar15 == plVar16) {
    lVar12 = param_1[1];
    if (lVar12 != 0) {
      if ((*(uint *)(lVar12 + 0x28) & 0x30) != 0) {
        FUN_142cd87d0(param_1,pfVar2,1);
        lVar12 = param_1[1];
      }
      if ((lVar12 != 0) && (plVar15 = *(longlong **)(lVar12 + 0x10), plVar15 != (longlong *)0x0)) {
        plVar13 = (longlong *)FUN_142e07420();
        plVar9 = plVar15;
        do {
          if (plVar9 == plVar13) goto LAB_142cd23e5;
          plVar9 = (longlong *)plVar9[6];
        } while (plVar9 != (longlong *)0x0);
      }
    }
    plVar15 = (longlong *)0x0;
LAB_142cd23e5:
    if (local_res10 != (longlong *)0x0) {
      plVar13 = (longlong *)FUN_142e07420();
      for (plVar9 = local_res10; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[6]) {
        plVar16 = local_res10;
        if (plVar9 == plVar13) goto LAB_142cd2410;
      }
    }
    plVar16 = (longlong *)0x0;
LAB_142cd2410:
    if (plVar15 == plVar16) {
LAB_142cd241e:
      lVar12 = param_1[1];
      if ((((char)local_158[0x25] == '\x03') || ((*(uint *)(lVar12 + 0x2c) & 0x1000) != 0)) &&
         (*(longlong *)(lVar12 + 0x7b8) != 0)) {
        lVar17 = FUN_142e20fc0();
        for (lVar18 = *(longlong *)(lVar12 + 0x7b8); lVar18 != 0;
            lVar18 = *(longlong *)(lVar18 + 0x30)) {
          if (lVar18 == lVar17) {
            if (*(longlong *)(lVar12 + 0x7b8) != 0) {
              FUN_142e27720();
              plVar15 = (longlong *)AGameStateBase::OnRep_GameModeClass(local_158);
              if (plVar15 != (longlong *)0x0) {
                lVar12 = FUN_142e27720();
                if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
                    lVar12 + 0x88)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (bVar7) {
                  uStack_128 = &local_148;
                  local_d8 = 0;
                  local_c8 = 0;
                  local_148 = plVar15;
                  local_130 = param_1;
                  puVar10 = (undefined8 *)FUN_140438ef0(0x18,&local_f8);
                  if (puVar10 != (undefined8 *)0x0) {
                    *puVar10 = &PTR_FUN_143f77c18;
                    *(undefined4 *)(puVar10 + 1) = (undefined4)local_130;
                    *(undefined4 *)((longlong)puVar10 + 0xc) = local_130._4_4_;
                    *(undefined4 *)(puVar10 + 2) = (undefined4)uStack_128;
                    *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_128._4_4_;
                  }
                  local_108 = (longlong **)&LAB_142cbb630;
                  uVar11 = FUN_14247f500();
                  FUN_14247d5a0(uVar11,*param_1,&local_108);
                }
              }
            }
            break;
          }
        }
      }
      *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) & 0xfffffffe;
      if ((param_1[1] != 0) &&
         (plVar15 = *(longlong **)(param_1[1] + 0x10), plVar15 != (longlong *)0x0)) {
        plVar13 = (longlong *)FUN_142e07420();
        plVar9 = plVar15;
        do {
          if (plVar9 == plVar13) goto LAB_142cd2580;
          plVar9 = (longlong *)plVar9[6];
        } while (plVar9 != (longlong *)0x0);
      }
      plVar15 = (longlong *)0x0;
LAB_142cd2580:
      if (local_res10 != (longlong *)0x0) {
        plVar13 = (longlong *)FUN_142e07420();
        for (plVar9 = local_res10; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[6]) {
          plVar16 = local_res10;
          if (plVar9 == plVar13) goto LAB_142cd25b0;
        }
      }
      plVar16 = (longlong *)0x0;
LAB_142cd25b0:
      if (plVar15 == plVar16) {
        if (((cVar8 == '\x03') && (lVar12 = param_1[1], *(char *)(lVar12 + 0x68) == '\x02')) &&
           (*(longlong *)(lVar12 + 0x7b8) != 0)) {
          lVar18 = FUN_142e20fc0();
          for (lVar12 = *(longlong *)(lVar12 + 0x7b8); (lVar12 != 0 && (lVar12 != lVar18));
              lVar12 = *(longlong *)(lVar12 + 0x30)) {
          }
        }
        local_108 = &local_158;
        local_150[0] = '\0';
        pplStack_f0 = &local_res10;
        local_e8 = local_150;
        local_88 = 0;
        local_78 = 0;
        plStack_100 = param_1;
        local_f8 = param_3;
        puVar10 = (undefined8 *)FUN_140438ef0(0x30,local_a8);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &PTR_FUN_143f4d098;
          puVar10[1] = local_108;
          puVar10[2] = plStack_100;
          puVar10[3] = local_f8;
          puVar10[4] = pplStack_f0;
          puVar10[5] = local_e8;
        }
        local_b8[0] = &LAB_142cbb6a0;
        uVar11 = FUN_14247f500();
        FUN_14247d5a0(uVar11,*param_1,local_b8);
        if (local_150[0] != '\0') {
          return 1;
        }
        if ((char)local_158[0x25] != '\x03') {
          return 1;
        }
        if ((*(uint *)(param_1[1] + 0x28) & 0x8000000) == 0) {
          return 1;
        }
        cVar8 = FUN_142cd3fc0(param_1);
        if (cVar8 != '\0') {
          return 1;
        }
        FUN_142cd34e0(param_1,*(uint *)(param_1[1] + 0x28) >> 3 & 0xffffff01,1);
        return 0;
      }
    }
  }
LAB_142cd25b5:
  *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) & 0xfffffffe;
  return 1;
}



// FUNCTION 142cd2770 FUN_142cd2770 body=221 status=ok
// SIG undefined FUN_142cd2770(void)

void FUN_142cd2770(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  float fStack_24;
  float fStack_20;
  
  if (((*(byte *)(param_1 + 3) & 1) == 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
    if (cVar4 != '\0') {
      fVar1 = *(float *)(param_2 + 1);
      lVar3 = *param_1;
      bVar5 = *(byte *)(param_1 + 3);
      iVar2 = *(int *)(lVar3 + 0x203c);
      if ((bVar5 & 1) == 0) {
        fStack_24 = (float)*param_2;
        fStack_20 = (float)((ulonglong)*param_2 >> 0x20);
        *(int *)(param_1 + 4) = iVar2;
        *(float *)((longlong)param_1 + 0x24) = fStack_24;
        *(float *)(param_1 + 5) = fStack_20;
        *(float *)((longlong)param_1 + 0x2c) = fVar1;
        *(undefined4 *)(param_1 + 6) = 0;
        *(undefined4 *)((longlong)param_1 + 0x34) = 0;
        *(undefined4 *)(param_1 + 7) = 0;
        *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
        if ((((fStack_24 == 0.0) && (fStack_20 == 0.0)) && (fVar1 == 0.0)) || (iVar2 == -1)) {
          bVar6 = 0;
        }
        else {
          bVar6 = 2;
        }
        bVar5 = bVar5 & 0xfd | bVar6;
        *(byte *)(param_1 + 3) = bVar5;
      }
      if ((bVar5 & 2) != 0) {
        *(undefined1 *)(param_1 + 8) = *(undefined1 *)(lVar3 + 0x2038);
        *(undefined1 *)(lVar3 + 0x3f4) = 0;
        FUN_142cd2850(param_1);
      }
    }
  }
  return;
}



// FUNCTION 142cd2850 FUN_142cd2850 body=3015 status=ok
// SIG undefined FUN_142cd2850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cd2850(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_468 [32];
  undefined4 *local_448;
  undefined4 local_440;
  undefined8 *local_438;
  uint *local_430;
  undefined *local_428;
  char local_418 [16];
  undefined8 local_408;
  float local_400;
  undefined8 local_3f8;
  float local_3f0;
  undefined8 local_3e8;
  float fStack_3e0;
  float fStack_3dc;
  undefined8 local_3d8;
  float local_3d0;
  undefined4 local_3c8 [2];
  longlong local_3c0;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  float local_398;
  longlong local_390;
  undefined8 local_388;
  float local_380;
  float local_378;
  float local_374;
  float local_370;
  float local_368;
  float local_364;
  float local_360;
  undefined1 local_358 [16];
  undefined4 local_348;
  undefined4 local_344;
  float local_340;
  float local_338;
  float local_334;
  float local_330;
  longlong *local_320;
  longlong *plStack_318;
  undefined4 *local_310;
  longlong *plStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  byte local_2e8 [12];
  float local_2dc;
  undefined1 local_284 [16];
  undefined1 local_274 [28];
  ulonglong local_258;
  undefined4 local_250;
  longlong local_248;
  undefined1 local_240 [120];
  undefined1 local_1c8 [120];
  undefined8 local_150;
  float local_148;
  undefined8 local_144;
  float local_13c;
  undefined8 local_138;
  float local_130;
  undefined8 local_12c;
  float local_124;
  uint local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined2 local_103;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined8 local_e8;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  if (plVar4[0x1fb] == 0) {
    return;
  }
  lVar12 = param_1[1];
  if (lVar12 == 0) {
    return;
  }
  uVar16 = 0;
  local_3c0 = 0;
  if ((*(byte *)(param_1 + 3) & 2) != 0) {
    iVar6 = (int)param_1[4];
    local_3c0 = 0;
    if ((-1 < iVar6) && (iVar6 < *(int *)(lVar12 + 0x38))) {
      local_3c0 = (longlong)iVar6 * 0x110 + *(longlong *)(lVar12 + 0x30);
    }
  }
  if (local_3c0 == 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x5a0))(plVar4,6,1);
  lVar12 = local_3c0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
  param_1[7] = 0;
  local_388 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  local_380 = DAT_1468b5d98;
  local_390 = 0;
  local_3c8[0] = 0;
  local_418[0] = '\0';
  if (*(longlong *)(local_3c0 + 8) != 0) {
    lVar8 = FUN_142e20fc0();
    for (lVar11 = *(longlong *)(lVar12 + 8); lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
      if (lVar11 == lVar8) {
        if (*(longlong *)(lVar12 + 8) != 0) {
          plStack_318 = &local_3c0;
          local_310 = local_3c8;
          local_e8 = 0;
          plStack_308 = &local_390;
          local_d8 = 0;
          local_300 = &local_388;
          uStack_2f8 = local_418;
          local_320 = param_1;
          puVar9 = (undefined8 *)FUN_140438ef0(0x38,&local_108);
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = &PTR_FUN_1442e7fc0;
            puVar9[1] = local_320;
            puVar9[2] = plStack_318;
            puVar9[3] = local_310;
            puVar9[4] = plStack_308;
            *(undefined4 *)(puVar9 + 5) = (undefined4)local_300;
            *(undefined4 *)((longlong)puVar9 + 0x2c) = local_300._4_4_;
            *(undefined4 *)(puVar9 + 6) = (undefined4)uStack_2f8;
            *(undefined4 *)((longlong)puVar9 + 0x34) = uStack_2f8._4_4_;
          }
          local_118 = 0x42cbb450;
          uStack_114 = 1;
          uVar14 = FUN_14247f500();
          FUN_14247d5a0(uVar14,*param_1,&local_118);
        }
        break;
      }
    }
  }
  lVar12 = *(longlong *)(*param_1 + 0xfd8);
  lVar11 = *(longlong *)(lVar12 + 0x168);
  lVar8 = *(longlong *)(lVar12 + 0x948);
  lVar12 = *(longlong *)(lVar12 + 0x4c0);
  if (lVar11 == 0) {
    local_400 = DAT_1468b5d98;
    puVar9 = &local_408;
    local_408 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  else {
    puVar9 = &local_3f8;
    local_3f0 = *(float *)(lVar11 + 0x228);
    local_3f8 = *(undefined8 *)(lVar11 + 0x220);
  }
  uVar14 = *puVar9;
  local_400 = *(float *)(puVar9 + 1);
  FUN_142cc5660(param_1 + 4,&local_3f8);
  local_3b8 = (float)local_3f8 - (float)uVar14;
  local_3b0 = local_3f0 - local_400;
  local_3b4 = local_3f8._4_4_ - (float)((ulonglong)uVar14 >> 0x20);
  fVar17 = local_3b4 * local_3b4 + local_3b8 * local_3b8;
  if (fVar17 == 1.0) {
    local_3e8 = CONCAT44(local_3b4,local_3b8);
    fStack_3e0 = local_3b0;
    if (local_3b0 == 0.0) goto LAB_142cd2bd6;
  }
  else {
    if (fVar17 < 1e-08) {
      fStack_3e0 = DAT_1468b5d98;
      local_3e8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_142cd2bd6;
    }
    auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar18 = auVar19._0_4_;
    fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
    fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
    local_3e8 = CONCAT44(fVar18 * local_3b4,fVar18 * local_3b8);
  }
  fStack_3e0 = 0.0;
LAB_142cd2bd6:
  local_408 = uVar14;
  FVector::Rotation(&local_3e8,local_358);
  FRotator::RotateVector(local_358,&local_378,&local_388);
  local_368 = local_3b8 - local_378;
  local_364 = local_3b4 - local_374;
  local_360 = local_3b0 - local_370;
  FRotator::UnrotateVector(local_358,&local_338,&local_368);
  local_3d8 = lVar12;
  if (lVar12 == 0) {
    local_3d0 = (float)((uint)local_3d0 & 0xfffffff8);
  }
  else {
    bVar2 = *(byte *)(lVar12 + 0x24c);
    uVar15 = ((uint)(bVar2 >> 2) ^ (uint)local_3d0) & 7 ^ (uint)local_3d0;
    if (((byte)uVar15 & 7) != 7) {
      uVar16 = 8;
    }
    local_3d0 = (float)(uVar16 | uVar15 & 0xfffffff7);
    *(byte *)(lVar12 + 0x24c) = bVar2 | 0x1c;
    if ((uVar16 != 0) && (*(longlong *)(lVar12 + 400) != 0)) {
      if ((bVar2 & 1) == 0) {
        FUN_140942fb0(lVar12,0,0);
      }
      local_400 = *(float *)(lVar12 + 0x228);
      fVar17 = *(float *)(lVar12 + 0x210);
      local_3e8 = *(undefined8 *)(lVar12 + 0x210);
      fStack_3e0 = *(float *)(lVar12 + 0x218);
      fStack_3dc = *(float *)(lVar12 + 0x21c);
      *(undefined4 *)(lVar12 + 0x1ec) = *(undefined4 *)(lVar12 + 0x220);
      *(undefined4 *)(lVar12 + 0x1f0) = *(undefined4 *)(lVar12 + 0x224);
      *(float *)(lVar12 + 500) = local_400;
      auVar19._4_4_ = -(uint)(*(float *)(lVar12 + 0x254) != *(float *)(lVar12 + 0x214));
      auVar19._0_4_ = -(uint)(*(float *)(lVar12 + 0x250) != fVar17);
      auVar19._8_4_ = -(uint)(*(float *)(lVar12 + 600) != fStack_3e0);
      auVar19._12_4_ = -(uint)(*(float *)(lVar12 + 0x25c) != fStack_3dc);
      iVar6 = movmskps(local_400,auVar19);
      if (iVar6 != 0) {
        *(float *)(lVar12 + 0x250) = fVar17;
        *(float *)(lVar12 + 0x254) = *(float *)(lVar12 + 0x214);
        *(float *)(lVar12 + 600) = fStack_3e0;
        *(float *)(lVar12 + 0x25c) = fStack_3dc;
        puVar9 = (undefined8 *)FQuat::Rotator(&local_3e8,&local_408);
        *(undefined8 *)(lVar12 + 0x260) = *puVar9;
        *(undefined4 *)(lVar12 + 0x268) = *(undefined4 *)(puVar9 + 1);
      }
      *(undefined8 *)(lVar12 + 0x1f8) = *(undefined8 *)(lVar12 + 0x260);
      *(undefined4 *)(lVar12 + 0x200) = *(undefined4 *)(lVar12 + 0x268);
      *(undefined4 *)(lVar12 + 0x204) = *(undefined4 *)(lVar12 + 0x230);
      *(undefined4 *)(lVar12 + 0x208) = *(undefined4 *)(lVar12 + 0x234);
      *(undefined4 *)(lVar12 + 0x20c) = *(undefined4 *)(lVar12 + 0x238);
    }
  }
  local_408 = local_3f8;
  local_400 = local_3f0;
  local_448 = (undefined4 *)CONCAT71(local_448._1_7_,1);
  FUN_1423990b0(*(undefined8 *)(*param_1 + 0x178),&local_408,0,0);
  FUN_14237fa30(&local_3d8);
  plVar4 = (longlong *)*param_1;
  cVar5 = (**(code **)(*plVar4 + 0x5c0))(plVar4);
  if (cVar5 != '\0') {
    local_118 = local_118 & 0xfffffff8;
    uStack_114 = 0;
    uStack_110 = 0;
    local_a8 = CONCAT44(0xffffffff,(undefined4)local_a8);
    local_a0 = 0;
    local_9c = 0xffffffff;
    local_98 = 0;
    local_94 = 0xffffffff;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    _guard_xfg_dispatch_icall_nop(&local_108,0,0x90);
    local_fc = 0x3f800000;
    local_448 = (undefined4 *)0x0;
    local_3f8 = *(undefined8 *)(plVar4[0x2f] + 0x220);
    local_3f0 = *(float *)(plVar4[0x2f] + 0x228);
    (**(code **)(*plVar4 + 0x870))(plVar4,&local_3f8,&local_118,0);
    if (((byte)local_118 & 3) == 3) {
      puVar1 = (uint *)(plVar4 + 0x82);
      *puVar1 = *puVar1 & 0xfffffff8;
      *puVar1 = *puVar1 | local_118 & 7;
      *(undefined4 *)((longlong)plVar4 + 0x414) = uStack_114;
      *(undefined4 *)(plVar4 + 0x83) = uStack_110;
      FUN_140729f20(plVar4 + 0x84,&local_108);
      (**(code **)(*plVar4 + 0x5e0))(plVar4);
      FUN_14234fb40(plVar4,puVar1);
    }
  }
  if (lVar8 == 0) {
    local_3d8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_3d0 = DAT_1468b5d98;
  }
  else {
    local_400 = *(float *)(lVar8 + 0x4a4);
    uVar14 = *(undefined8 *)(lVar8 + 0x49c);
    pfVar10 = (float *)FRotator::UnrotateVector(local_358,&local_3f8,&local_3b8);
    local_3d0 = local_400 - pfVar10[2];
    local_3d8 = CONCAT44((float)((ulonglong)uVar14 >> 0x20) - pfVar10[1],(float)uVar14 - *pfVar10);
  }
  local_3f8 = local_3d8;
  local_3f0 = local_3d0;
  if (lVar12 == 0) {
    puVar9 = (undefined8 *)&DAT_1468b5d90;
  }
  else {
    puVar9 = (undefined8 *)(lVar12 + 0x1ec);
  }
  lVar12 = *param_1;
  uVar14 = *puVar9;
  fVar17 = *(float *)(puVar9 + 1);
  lVar11 = *(longlong *)(lVar12 + 0x178);
  if (lVar11 == 0) {
    local_408._0_4_ = 0x7f7fffff;
    local_408._4_4_ = 0x7f7fffff;
    local_400 = 3.4028235e+38;
  }
  else {
    local_408._0_4_ = *(undefined4 *)(lVar11 + 0x220);
    local_408._4_4_ = *(undefined4 *)(lVar11 + 0x224);
    local_400 = *(float *)(lVar11 + 0x228);
  }
  local_3a0 = (undefined4)local_408;
  uStack_39c = local_408._4_4_;
  local_398 = local_400;
  local_348 = (undefined4)local_408;
  local_344 = local_408._4_4_;
  local_340 = local_400 - *(float *)(lVar12 + 0x234);
  local_3e8 = uVar14;
  fStack_3e0 = fVar17;
  (**(code **)(**(longlong **)(lVar12 + 0xfd8) + 0x578))
            (*(longlong **)(lVar12 + 0xfd8),&local_3a8,&local_3a4);
  _guard_xfg_dispatch_icall_nop(local_2e8,0,0x90);
  lVar12 = *param_1;
  local_400 = (float)local_3a4;
  local_2dc = 1.0;
  local_408 = CONCAT44(local_3a8,3);
  uVar3 = *(undefined1 *)(*(longlong *)(lVar12 + 0x180) + 0x302);
  if (lVar12 == 0) {
    lVar11 = 0;
    lVar12 = 0;
  }
  else {
    lVar11 = *(longlong *)(lVar12 + 0x120);
    if (lVar11 == 0) {
      lVar11 = FUN_1423407b0(lVar12);
      lVar12 = *param_1;
    }
  }
  local_118 = (uint)DAT_146b31420;
  uStack_114 = (undefined4)((ulonglong)DAT_146b31420 >> 0x20);
  uStack_110 = 0;
  uStack_10c = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_108 = 0x10000;
  local_100 = 0;
  local_f4 = 0x101;
  local_fc = local_fc & 0xffffff00;
  local_103 = 0;
  local_f8 = 0;
  local_104 = 1;
  FCollisionQueryParams::AddIgnoredActor(&local_118,*(undefined8 *)(lVar12 + 0xfd8));
  local_fc = CONCAT31(local_fc._1_3_,uVar3);
  local_428 = &DAT_146aefe68;
  local_430 = &local_118;
  local_438 = &local_408;
  local_440 = 2;
  local_448 = &DAT_1464aa810;
  cVar5 = UWorld::SweepSingleByChannel(lVar11,local_2e8,&local_3a0,&local_348);
  if ((((cVar5 != '\0') && ((local_2e8[0] & 1) != 0)) && (0.0 < local_2dc)) && (local_2dc <= 1.0)) {
    FWeakObjectPtr::Get(local_274);
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  lVar12 = FWeakObjectPtr::Get(local_284);
  if ((lVar12 != 0) && (lVar11 = FUN_1405c6c50(*(undefined8 *)(*param_1 + 0xfd8)), lVar11 != 0)) {
    uVar7 = FUN_1426bd9f0(lVar12);
    uVar13 = FUN_142db9220(uVar7);
    *(undefined8 *)(lVar11 + 0x230) = uVar13;
  }
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(local_240);
  FRuntimeFloatCurve::FRuntimeFloatCurve(local_1c8);
  local_148 = local_3f0 + local_330;
  local_250 = local_3c8[0];
  local_258 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c);
  local_150 = CONCAT44(local_3f8._4_4_ + local_334,(float)local_3f8 + local_338);
  local_400 = fStack_3e0 + local_330;
  local_144 = CONCAT44(local_3e8._4_4_ + local_334,(float)local_3e8 + local_338);
  local_130 = local_3d0;
  local_248 = 0;
  if (local_418[0] != '\0') {
    local_248 = local_390;
  }
  local_138 = local_3d8;
  local_13c = local_400;
  local_12c = uVar14;
  local_124 = fVar17;
  FRuntimeFloatCurve::operator=(local_240,local_3c0 + 0x18);
  FRuntimeFloatCurve::operator=(local_1c8,local_3c0 + 0x90);
  FUN_142d00de0(*param_1,&local_258);
  local_e8 = 0;
  local_d8 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,&local_108);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_118 = 0x42cbb5b0;
  uStack_114 = 1;
  uVar14 = FUN_14247f500();
  FUN_14247d5a0(uVar14,*param_1,&local_118);
  FRichCurve::~FRichCurve(local_1c8);
  FRichCurve::~FRichCurve(local_240);
  return;
}



// FUNCTION 142cd3420 FUN_142cd3420 body=187 status=ok
// SIG undefined FUN_142cd3420(void)

ulonglong FUN_142cd3420(longlong *param_1,longlong param_2)

{
  byte bVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  float local_18;
  float local_14;
  float local_10;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
    if ((char)in_RAX != '\0') {
      if (param_1[1] != 0) {
        bVar1 = (byte)*(undefined2 *)(param_2 + 0x44);
        FUN_142cd36a0(param_1,bVar1 & 1,bVar1 >> 1 & 1);
      }
      local_18 = *(float *)(param_2 + 0x38) * 0.01;
      local_10 = *(float *)(param_2 + 0x40) * 0.01;
      local_14 = *(float *)(param_2 + 0x3c) * 0.01;
      uVar2 = FUN_142cd15c0(param_1,*(undefined8 *)(param_2 + 8),param_2 + 0x10,&local_18,0);
      return uVar2;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142cd34e0 FUN_142cd34e0 body=359 status=ok
// SIG undefined FUN_142cd34e0(void)

void FUN_142cd34e0(longlong *param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong local_18;
  
  lVar1 = param_1[1];
  if ((*param_1 == 0) ||
     ((iVar4 = FUN_14233f450(), iVar4 != 3 &&
      (((iVar4 != 2 || (lVar1 == 0)) || ((*(uint *)(lVar1 + 0x2c) & 0x800) == 0)))))) {
    if ((*(uint *)((longlong)param_1 + 0x15c) & 0x100) == 0) {
      return;
    }
    iVar4 = FUN_14233f450(*param_1);
    if (iVar4 < 2) {
      return;
    }
  }
  if ((((longlong *)*param_1 != (longlong *)0x0) &&
      (cVar3 = (**(code **)(*(longlong *)*param_1 + 0x5c0))(), cVar3 != '\0')) &&
     ((*(byte *)((longlong)param_1 + 0x15c) & 2) == 0)) {
    iVar4 = FUN_14233f450(*param_1);
    if (iVar4 == 3) {
      plVar2 = (longlong *)*param_1;
      local_18 = (ulonglong)(ushort)((ushort)param_3 * 2 | (ushort)param_2) << 0x20;
      (**(code **)(*plVar2 + 0x260))(plVar2);
      lVar1 = plVar2[0x31a];
      plVar2[0x31a] = 0;
      plVar2[0x31b] = 0;
      plVar2[0x31c] = 0;
      plVar2[0x31d] = 0;
      plVar2[0x31e] = 0;
      plVar2[799] = 0;
      plVar2[800] = 0;
      plVar2[0x321] = 0;
      plVar2[0x322] = local_18;
      *(char *)(plVar2 + 0x31a) = (char)lVar1 + '\x01';
    }
    FUN_142cd36a0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 142cd3650 FUN_142cd3650 body=71 status=ok
// SIG undefined FUN_142cd3650(void)

void FUN_142cd3650(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_142cdb060();
  if (lVar1 != 0) {
    FUN_142d01010(lVar1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 142cd36a0 FUN_142cd36a0 body=1061 status=ok
// SIG undefined FUN_142cd36a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cd36a0(longlong *param_1,char param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  byte bVar8;
  longlong *local_res8 [2];
  char local_res18 [8];
  longlong local_res20;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_a0;
  char local_98;
  undefined1 local_97;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar3 = *param_1;
  local_97 = (undefined1)param_1[0x27];
  plVar7 = *(longlong **)(lVar3 + 0xfd8);
  local_90 = param_1[0x26];
  local_88 = *(undefined8 *)(lVar3 + 0x18c);
  local_80 = *(undefined4 *)(lVar3 + 0x194);
  if (param_1[1] == 0) {
    return;
  }
  if ((*(uint *)((longlong)param_1 + 0x15c) & 2) != 0) {
    return;
  }
  *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) | 2;
  local_res8[0] = plVar7;
  local_res18[0] = param_3;
  local_98 = param_3;
  if (((*(uint *)(param_1[1] + 0x28) & 0x8000000) != 0) && ((char)plVar7[0x25] == '\x03')) {
    FUN_142e79d90();
    lVar3 = (**(code **)(*plVar7 + 0x628))(plVar7);
    if (lVar3 != 0) {
      FUN_142ddcd30(lVar3,0,DAT_146b31400);
    }
  }
  FUN_142cce280(param_1);
  uStack_c0 = SUB84(param_1,0);
  uStack_bc = (undefined4)((ulonglong)param_1 >> 0x20);
  if (*(byte *)(local_res8[0] + 0x25) < 2) goto LAB_142cd3931;
  if (param_2 != '\0') {
    lVar3 = *param_1;
    *(undefined8 *)(lVar3 + 0x18c) = _DAT_1468b5d90;
    *(undefined4 *)(lVar3 + 0x194) = DAT_1468b5d98;
    lVar3 = *param_1;
    *(undefined8 *)(lVar3 + 0x350) = _DAT_1468b5d90;
    *(undefined4 *)(lVar3 + 0x358) = DAT_1468b5d98;
    *(uint *)(*param_1 + 0x4b4) = *(uint *)(*param_1 + 0x4b4) | 0x20;
  }
  if (((*(byte *)(param_1[1] + 0x28) & 4) != 0) || (local_res18[0] != '\0')) {
    cVar2 = *(char *)(param_1[1] + 0x68);
    plVar7 = (longlong *)*param_1;
    if ((cVar2 != '\x01') || ((char)plVar7[0x49] != '\x05')) {
      if ((cVar2 != '\x03') || (cVar2 = FUN_142cf3960(), cVar2 == '\0')) goto LAB_142cd3825;
      plVar7 = (longlong *)*param_1;
    }
    bVar8 = *(byte *)(plVar7 + 0x96);
    if (bVar8 - 1 < 2) {
      bVar8 = 3;
    }
    (**(code **)(*plVar7 + 0x5a0))(plVar7,bVar8,0);
  }
LAB_142cd3825:
  if ((char)local_res8[0][0x25] == '\x03') {
    if (((local_res18[0] == '\0') && ((*(uint *)((longlong)param_1 + 0x15c) & 0xa00) == 0)) &&
       (lVar3 = param_1[1], *(longlong *)(lVar3 + 2000) != 0)) {
      lVar4 = FUN_142e20fc0();
      for (lVar3 = *(longlong *)(lVar3 + 2000); (lVar3 != 0 && (lVar3 != lVar4));
          lVar3 = *(longlong *)(lVar3 + 0x30)) {
      }
    }
    FUN_142e27720();
    lVar3 = AGameStateBase::OnRep_GameModeClass(local_res8[0]);
    if (lVar3 != 0) {
      lVar4 = FUN_142e27720();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_48 = 0;
        local_38 = 0;
        local_res20 = lVar3;
        puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_68);
        if (puVar5 != (undefined8 *)0x0) {
          puVar5[1] = local_res18;
          *(undefined4 *)(puVar5 + 2) = uStack_c0;
          *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_bc;
          *puVar5 = &PTR_FUN_143f4d0b0;
          puVar5[3] = &local_res20;
        }
        local_78[0] = &LAB_142cbb4c0;
        uVar6 = FUN_14247f500();
        FUN_14247d5a0(uVar6,*param_1,local_78);
      }
    }
  }
LAB_142cd3931:
  if (((char)local_res8[0][0x25] != '\x03') && ((*(uint *)(param_1[1] + 0x2c) & 0x1000) != 0)) {
    FUN_142e27720();
    lVar3 = AGameStateBase::OnRep_GameModeClass(local_res8[0]);
    if (lVar3 != 0) {
      lVar4 = FUN_142e27720();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_48 = 0;
        local_38 = 0;
        local_res20 = lVar3;
        puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_68);
        if (puVar5 != (undefined8 *)0x0) {
          puVar5[1] = local_res18;
          *(undefined4 *)(puVar5 + 2) = uStack_c0;
          *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_bc;
          *puVar5 = &PTR_FUN_143f4d0b0;
          puVar5[3] = &local_res20;
        }
        local_78[0] = &LAB_142cbb620;
        uVar6 = FUN_14247f500();
        FUN_14247d5a0(uVar6,*param_1,local_78);
      }
    }
  }
  local_a0 = param_1[1];
  lVar3 = *param_1;
  _guard_xfg_dispatch_icall_nop(param_1 + 1,0,0x158);
  *param_1 = lVar3;
  local_48 = 0;
  local_38 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x30,local_68);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f4d098;
    puVar5[1] = local_res8;
    puVar5[2] = &local_a0;
    puVar5[3] = local_res18;
    puVar5[4] = param_1;
    puVar5[5] = &local_98;
  }
  local_78[0] = &LAB_142cbb510;
  uVar6 = FUN_14247f500();
  FUN_14247d5a0(uVar6,*param_1,local_78);
  return;
}



// FUNCTION 142cd3ad0 FUN_142cd3ad0 body=76 status=ok
// SIG undefined FUN_142cd3ad0(void)

void FUN_142cd3ad0(longlong *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
    if (cVar1 != '\0') {
      bVar2 = (byte)*(undefined2 *)(param_2 + 0x44);
      FUN_142cd36a0(param_1,bVar2 & 1,bVar2 >> 1 & 1);
    }
  }
  return;
}



// FUNCTION 142cd3b20 FUN_142cd3b20 body=1002 status=ok
// SIG undefined FUN_142cd3b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142cd3b20(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  uint local_120 [2];
  undefined1 local_118 [192];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_138 = (longlong *)0x0;
  uVar6 = local_48;
  if (param_2 == 0) {
LAB_142cd3eea:
    return uVar6 & 0xffffffffffffff00;
  }
  if (param_3 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)param_3[0x1f];
    if (plVar5 == (longlong *)0x0) {
      (**(code **)(*param_3 + 0x368))(param_3);
      plVar5 = (longlong *)param_3[0x1f];
    }
  }
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x290))(plVar5,&local_130);
  plVar5 = (longlong *)*plVar5;
  if (plVar5 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = plVar5[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar8 = plVar5[0x1f];
    }
  }
  uVar6 = FUN_142ccd9e0(param_1,param_2);
  if ((((char)uVar6 == '\0') && (*(char *)(param_1 + 1) != '\0')) && (lVar8 != 0)) {
    uVar6 = FUN_142bb3d50(param_2,*param_1,lVar8);
    *(char *)((longlong)param_1 + 9) = (char)uVar6;
  }
  if (((*(char *)((longlong)param_1 + 9) == -1) ||
      (uVar6 = FUN_142cc1e20(param_2,*(char *)((longlong)param_1 + 9),&local_138), uVar6 == 0)) ||
     ((local_138 == (longlong *)0x0 ||
      (uVar6 = (**(code **)(*local_138 + 0x318))(local_138,uVar6,param_4,param_3),
      (char)uVar6 == '\0')))) goto LAB_142cd3eea;
  FUN_142bc3660(param_2,*(undefined1 *)((longlong)param_1 + 9));
  uVar7 = FUN_142bbbf70(param_2);
  uVar6 = uVar7;
  if (((uVar7 == 0) || ((*(byte *)(uVar7 + 0x48) & 1) == 0)) ||
     (uVar6 = FUN_142bc1e70(param_2,*(undefined1 *)((longlong)param_1 + 9)), (char)uVar6 == '\0'))
  goto LAB_142cd3eea;
  lVar8 = *(longlong *)(param_2 + 0x120);
  if (((lVar8 != 0) || (lVar8 = FUN_1423407b0(param_2), lVar8 != 0)) &&
     (lVar8 = *(longlong *)(lVar8 + 0x150), lVar8 != 0)) {
    lVar9 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142cd3cec;
  }
  lVar8 = 0;
LAB_142cd3cec:
  uVar6 = UAISystem::CreateBlackboardDataToComponentsIterator(lVar8,local_120,uVar7);
  do {
    uVar7 = (ulonglong)local_120[0];
    do {
      iVar11 = (int)uVar7;
      if (iVar11 < local_50) {
        uVar6 = (ulonglong)iVar11;
        puVar10 = local_118;
        if (local_58 != (undefined1 *)0x0) {
          puVar10 = local_58;
        }
        if (*(int *)(puVar10 + uVar6 * 0x18 + 0x10) == -1) goto LAB_142cd3d2c;
        uVar6 = CONCAT71((int7)(int3)(uVar7 >> 8),1);
      }
      else {
LAB_142cd3d2c:
        uVar6 = uVar6 & 0xffffffffffffff00;
      }
      if ((char)uVar6 == '\0') {
        if (local_58 != (undefined1 *)0x0) {
          uVar6 = FMemory::Free(local_58);
        }
        goto LAB_142cd3eea;
      }
      puVar10 = local_118;
      if (local_58 != (undefined1 *)0x0) {
        puVar10 = local_58;
      }
      lVar8 = FWeakObjectPtr::Get(**(longlong **)(puVar10 + (longlong)iVar11 * 0x18) +
                                  ((longlong)*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if (((lVar8 != 0) && (cVar3 = FUN_142bcaf00(param_2,lVar8), cVar3 != '\0')) &&
         ((lVar9 = FUN_142bbbf70(lVar8), lVar9 != 0 &&
          (cVar3 = UBlackboardData::GetKeyID(lVar9,param_1), cVar3 != -1)))) {
        local_138 = (longlong *)0x0;
        lVar9 = FUN_142cc1e20(lVar8,cVar3,&local_138);
        if ((lVar9 != 0) &&
           (cVar4 = (**(code **)(*local_138 + 0x318))(local_138,lVar9,param_4,param_3),
           cVar4 != '\0')) {
          FUN_142bc3660(lVar8,cVar3);
        }
      }
      puVar10 = local_118;
      if (local_58 != (undefined1 *)0x0) {
        puVar10 = local_58;
      }
      lVar8 = (longlong)(int)local_120[0];
      iVar11 = *(int *)(puVar10 + lVar8 * 0x18 + 0x14);
      *(int *)(puVar10 + lVar8 * 0x18 + 0x10) = iVar11;
      puVar1 = (undefined8 *)(puVar10 + lVar8 * 0x18);
      while (iVar11 != -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + (longlong)iVar11 * 0x18);
        lVar8 = *(longlong *)*puVar1;
        local_130 = *(undefined4 *)(lVar8 + (longlong)iVar11 * 0x18);
        local_12c = *(undefined4 *)(lVar8 + 4 + (longlong)iVar11 * 0x18);
        local_128 = *(undefined4 *)(puVar1 + 1);
        local_124 = *(undefined4 *)((longlong)puVar1 + 0xc);
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_130,&local_128);
        if (cVar3 != '\0') break;
        iVar11 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar11;
      }
      uVar7 = (ulonglong)(int)local_120[0];
      puVar10 = local_118;
      if (local_58 != (undefined1 *)0x0) {
        puVar10 = local_58;
      }
      uVar6 = uVar7;
    } while ((*(int *)(puVar10 + uVar7 * 0x18 + 0x10) != -1) ||
            (uVar6 = (ulonglong)(local_50 - 1U), (int)(local_50 - 1U) <= (int)local_120[0]));
    local_120[0] = local_120[0] + 1;
    uVar6 = UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard
                      (local_120);
  } while( true );
}



// FUNCTION 142cd3f10 FUN_142cd3f10 body=166 status=ok
// SIG undefined FUN_142cd3f10(void)

undefined1 FUN_142cd3f10(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *local_res10;
  
  if (param_2 != 0) {
    cVar1 = FUN_142ccd9e0();
    if (cVar1 != '\0') {
      cVar1 = FUN_142bbfcf0(param_2,*(undefined1 *)(param_1 + 9));
      if (cVar1 != '\0') {
        local_res10 = (longlong *)0x0;
        cVar1 = FUN_142ccd9e0(param_1,param_2);
        if (cVar1 != '\0') {
          lVar2 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_res10);
          if ((lVar2 != 0) && (local_res10 != (longlong *)0x0)) {
            cVar1 = (**(code **)(*local_res10 + 0x310))(local_res10,lVar2,param_3);
            if (cVar1 != '\0') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142cd3fc0 FUN_142cd3fc0 body=1582 status=ok
// SIG undefined FUN_142cd3fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142cd3fc0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  float **ppfVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 local_148;
  float local_140;
  float local_138;
  float local_134;
  undefined8 local_130;
  float local_128;
  undefined8 local_120;
  float local_118;
  undefined8 local_110;
  float local_108;
  float local_100;
  float local_fc;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float fStack_e0;
  float fStack_dc;
  float *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float *local_b8 [22];
  
  local_b8[0] = (float *)(DAT_1468387a8 ^ (ulonglong)auStack_178);
  if ((((param_1[0x11] == 0) && (*(float *)((longlong)param_1 + 0x9c) == 0.0)) &&
      (*(float *)(param_1 + 0x14) == 0.0)) && (*(float *)((longlong)param_1 + 0xa4) == 0.0)) {
    return 0;
  }
  local_134 = 0.0;
  local_138 = 0.0;
  local_fc = 0.0;
  local_100 = 0.0;
  (**(code **)(**(longlong **)(*param_1 + 0xfd8) + 0x578))
            (*(longlong **)(*param_1 + 0xfd8),&local_134,&local_138);
  plVar2 = (longlong *)param_1[0x11];
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x9c);
  local_f0 = *(float *)((longlong)param_1 + 0xa4);
  local_f8 = uVar1;
  if (plVar2 == (longlong *)0x0) {
    lVar10 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x578))(plVar2,&local_fc,&local_100);
    local_f0 = local_f0 - local_100;
    lVar10 = param_1[0x11];
  }
  fVar21 = local_f0 + local_138;
  fVar22 = *(float *)(param_1[1] + 0x7dc);
  local_f0 = fVar21;
  if (lVar10 != 0) {
    fVar22 = fVar22 + local_fc + local_134;
  }
  cVar5 = *(char *)(param_1[1] + 0x7e0);
  local_130 = *(ulonglong *)((longlong)param_1 + 0xb4);
  local_128 = *(float *)((longlong)param_1 + 0xbc);
  local_140 = DAT_1468b5da8;
  local_148 = DAT_1468b5da0;
  if (cVar5 == '\0') {
    if (lVar10 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x168);
      if (lVar10 != 0) {
        fVar3 = *(float *)(lVar10 + 0x210);
        local_e8 = *(undefined8 *)(lVar10 + 0x210);
        fStack_e0 = *(float *)(lVar10 + 0x218);
        fStack_dc = *(float *)(lVar10 + 0x21c);
        auVar14._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != *(float *)(lVar10 + 0x214));
        auVar14._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != fVar3);
        auVar14._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_e0);
        auVar14._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_dc);
        iVar6 = movmskps(local_128,auVar14);
        if (iVar6 != 0) {
          *(float *)(lVar10 + 0x250) = fVar3;
          *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
          *(float *)(lVar10 + 600) = fStack_e0;
          *(float *)(lVar10 + 0x25c) = fStack_dc;
          puVar7 = (undefined8 *)FQuat::Rotator(&local_e8,&local_110);
          *(undefined8 *)(lVar10 + 0x260) = *puVar7;
          *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar7 + 1);
        }
        local_140 = *(float *)(lVar10 + 0x268);
        local_148 = *(ulonglong *)(lVar10 + 0x260);
      }
      local_120 = local_148 & 0xffffffff00000000;
      local_118 = local_140;
      puVar9 = (ulonglong *)FRotator::Vector(&local_120,&local_110);
      local_130 = *puVar9;
      local_128 = *(float *)(puVar9 + 1);
    }
  }
  else {
    if (cVar5 == '\x01') {
      if (lVar10 == 0) goto LAB_142cd4312;
      lVar10 = *(longlong *)(lVar10 + 0x168);
      if (lVar10 != 0) {
        fVar3 = *(float *)(lVar10 + 0x210);
        local_e8 = *(undefined8 *)(lVar10 + 0x210);
        fStack_e0 = *(float *)(lVar10 + 0x218);
        fStack_dc = *(float *)(lVar10 + 0x21c);
        auVar13._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != *(float *)(lVar10 + 0x214));
        auVar13._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != fVar3);
        auVar13._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_e0);
        auVar13._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_dc);
        iVar6 = movmskps(local_128,auVar13);
        if (iVar6 != 0) {
          *(float *)(lVar10 + 0x250) = fVar3;
          *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
          *(float *)(lVar10 + 600) = fStack_e0;
          *(float *)(lVar10 + 0x25c) = fStack_dc;
          puVar7 = (undefined8 *)FQuat::Rotator(&local_e8,&local_110);
          *(undefined8 *)(lVar10 + 0x260) = *puVar7;
          *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar7 + 1);
        }
        local_140 = *(float *)(lVar10 + 0x268);
        local_148 = *(ulonglong *)(lVar10 + 0x260);
      }
      local_120 = local_148 & 0xffffffff00000000;
      local_118 = local_140;
      puVar8 = (undefined4 *)FRotator::Vector(&local_120,&local_110);
      uVar15 = *puVar8;
      uVar17 = puVar8[1];
      local_128 = (float)puVar8[2];
    }
    else {
      if (cVar5 != '\x02') goto LAB_142cd4312;
      uVar15 = *(undefined4 *)((longlong)param_1 + 0xb4);
      uVar17 = (undefined4)param_1[0x17];
      local_128 = *(float *)((longlong)param_1 + 0xbc);
    }
    local_128 = -local_128;
    local_108 = local_128;
    local_130 = CONCAT44(uVar17,uVar15) ^ 0x8000000080000000;
  }
LAB_142cd4312:
  fVar4 = local_f0;
  fVar3 = local_128;
  ppfVar11 = &local_d8;
  local_d8 = (float *)0x4234000000000000;
  uStack_d0 = 0x42b40000c2340000;
  local_c8 = 0x43070000c2b40000;
  uStack_c0 = 0x43340000c3070000;
  fVar21 = fVar21 - local_128 * fVar22;
  local_140 = fVar21;
  while( true ) {
    fVar18 = *(float *)ppfVar11 * 0.5;
    if (fVar18 < 0.0) {
      fVar12 = fVar18 * 0.15915494 - 0.5;
    }
    else {
      fVar12 = fVar18 * 0.15915494 + 0.5;
    }
    fVar18 = fVar18 - (float)(int)fVar12 * 6.2831855;
    if (fVar18 <= 1.5707964) {
      if (-1.5707964 <= fVar18) {
        fVar12 = 1.0;
      }
      else {
        fVar12 = -1.0;
        fVar18 = -3.1415927 - fVar18;
      }
    }
    else {
      fVar12 = -1.0;
      fVar18 = 3.1415927 - fVar18;
    }
    fVar16 = fVar18 * fVar18;
    fVar18 = (((((2.7525562e-06 - fVar16 * 2.3889859e-08) * fVar16 - 0.00019840874) * fVar16 +
               0.008333331) * fVar16 - 0.16666667) * fVar16 + 1.0) * fVar18;
    fVar12 = (((((2.4760495e-05 - fVar16 * 2.6051615e-07) * fVar16 - 0.0013888378) * fVar16 +
               0.041666638) * fVar16 - 0.5) * fVar16 + 1.0) * fVar12;
    fVar16 = (fVar18 + fVar18) * (float)local_130;
    fVar19 = -(fVar18 * local_130._4_4_) + -(fVar18 * local_130._4_4_);
    fVar20 = (fVar12 * fVar19 + (float)local_130) - fVar18 * fVar16;
    fVar16 = fVar12 * fVar16 + local_130._4_4_ + fVar18 * fVar19;
    fVar12 = (float)local_f8 - fVar20 * fVar22;
    fVar18 = local_f8._4_4_ - fVar16 * fVar22;
    local_148 = CONCAT44(fVar18,fVar12);
    if (param_1[0x11] == 0) {
      puVar7 = &local_120;
      local_120 = CONCAT44(fVar16 * 1000.0 + fVar18,fVar20 * 1000.0 + fVar12);
      local_118 = fVar3 * 1000.0 + fVar21;
    }
    else {
      local_e8 = uVar1;
      puVar7 = &local_e8;
      fStack_e0 = fVar4;
    }
    local_110 = *puVar7;
    local_108 = *(float *)(puVar7 + 1);
    local_158 = &local_110;
    cVar5 = FUN_142cd7d70(param_1,local_134,local_138,&local_148);
    if (cVar5 != '\0') break;
    ppfVar11 = (float **)((longlong)ppfVar11 + 4);
    if (ppfVar11 == local_b8) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142cd45f0 FUN_142cd45f0 body=52 status=ok
// SIG undefined FUN_142cd45f0(void)

bool FUN_142cd45f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_4 == 0) {
    uVar2 = USequencerScriptingRangeExtensions::HasEnd(param_3);
    return (bool)uVar2;
  }
  if (param_4 != 1) {
    return false;
  }
  cVar1 = USequencerScriptingRangeExtensions::HasEnd(param_3);
  return cVar1 == '\0';
}



// FUNCTION 142cd4630 FUN_142cd4630 body=40 status=ok
// SIG undefined FUN_142cd4630(void)

bool FUN_142cd4630(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2d8))();
  return (param_4 == 1) == (bool)cVar1;
}



// FUNCTION 142cd4660 FUN_142cd4660 body=109 status=ok
// SIG undefined FUN_142cd4660(void)

undefined1 FUN_142cd4660(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = 0;
    cVar1 = FUN_142ccd9e0();
    if (cVar1 != '\0') {
      lVar3 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),local_res10);
      if ((lVar3 != 0) && (*(char *)(local_res10[0] + 0x2a) == '\0')) {
        uVar2 = FUN_142bcef30(local_res10[0],param_2,lVar3,0);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 142cd46d0 FUN_142cd46d0 body=2925 status=ok
// SIG undefined FUN_142cd46d0(void)

void FUN_142cd46d0(longlong *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined4 uVar8;
  char cVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float local_198;
  float fStack_194;
  float local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_130 [10];
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  
  plVar3 = (longlong *)*param_1;
  plVar4 = (longlong *)plVar3[0x1fb];
  if ((*(byte *)((longlong)plVar4 + 0x56c) & 8) != 0) {
    if (*(char *)((longlong)plVar3 + 0x1944) == '\0') {
      return;
    }
    *(float *)(param_1 + 10) = param_2 + *(float *)(param_1 + 10);
    return;
  }
  *(float *)(param_1 + 10) = param_2 + *(float *)(param_1 + 10);
  if ((*(uint *)((longlong)param_1 + 0x15c) & 0x20) != 0) {
    return;
  }
  plVar17 = (longlong *)param_1[1];
  if (plVar17 == (longlong *)0x0) {
    return;
  }
  if ((*(uint *)((longlong)param_1 + 0x15c) & 2) != 0) {
    return;
  }
  if (*(byte *)(plVar4 + 0x25) < 2) {
LAB_142cd5131:
    (**(code **)(*plVar17 + 0x2c8))(plVar17,*param_1,param_1 + 0x1e,param_2);
    fVar19 = DAT_1468b5d98;
    uVar8 = DAT_1468b5d94;
    if ((char)plVar4[0x25] == '\x02') {
      uVar11 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      lVar12 = *param_1;
      if ((ulonglong *)local_130 != (ulonglong *)(lVar12 + 0x1918)) {
        uVar5 = CONCAT44(DAT_1468b5d98,DAT_1468b5d94);
        uVar6 = CONCAT44(DAT_1468b5d90,DAT_1468b5d98);
        *(ulonglong *)(lVar12 + 0x1918) = CONCAT44(DAT_1468b5d90,local_130[0]) & 0xffffffffffffff00;
        *(undefined8 *)(lVar12 + 0x1920) = uVar5;
        *(undefined8 *)(lVar12 + 0x1928) = uVar11;
        *(undefined8 *)(lVar12 + 0x1930) = uVar6;
        *(ulonglong *)(lVar12 + 0x1938) = CONCAT44(fVar19,uVar8);
        *(undefined1 *)(lVar12 + 0x1940) = 1;
      }
      lVar12 = *param_1;
      if (((param_1[1] == 0) || ((*(byte *)((longlong)param_1 + 0x15c) & 2) != 0)) ||
         ((*(uint *)(param_1[1] + 0x28) & 0x10000) == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
      }
      *(undefined1 *)(lVar12 + 0x1918) = uVar10;
      *(undefined8 *)(lVar12 + 0x1928) = *(undefined8 *)((longlong)param_1 + 0xb4);
      *(undefined4 *)(lVar12 + 0x1930) = *(undefined4 *)((longlong)param_1 + 0xbc);
      *(undefined8 *)(lVar12 + 0x191c) = *(undefined8 *)((longlong)param_1 + 0xe4);
      *(undefined4 *)(lVar12 + 0x1924) = *(undefined4 *)((longlong)param_1 + 0xec);
      *(longlong *)(lVar12 + 0x1934) = param_1[0x1e];
      *(int *)(lVar12 + 0x193c) = (int)param_1[0x1f];
    }
  }
  else {
    cVar9 = (**(code **)(*plVar3 + 0xc48))(plVar3);
    if (cVar9 == '\0') {
      uVar11 = 1;
      uVar18 = 1;
    }
    else {
      if (((char)plVar4[0x25] == '\x03') &&
         (cVar9 = (**(code **)(*plVar4 + 0x778))(plVar4), cVar9 == '\0')) {
        if ((param_1[1] == 0) ||
           (((*(byte *)((longlong)param_1 + 0x15c) & 2) != 0 ||
            ((*(uint *)(param_1[1] + 0x28) & 0x10000) == 0)))) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          *(undefined8 *)((longlong)param_1 + 0xb4) = *(undefined8 *)((longlong)param_1 + 0x144);
          *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_1 + 0x14c);
          *(longlong *)((longlong)param_1 + 0xe4) = param_1[0x2a];
          *(int *)((longlong)param_1 + 0xec) = (int)param_1[0x2b];
        }
      }
      cVar9 = (**(code **)(*(longlong *)*param_1 + 0xc68))();
      if (cVar9 != '\0') {
        *(undefined4 *)(param_1 + 10) = 0;
      }
      fVar19 = *(float *)((longlong)param_1 + 0x4c);
      if ((fVar19 <= 0.0) ||
         (*(float *)(param_1 + 10) <= fVar19 && fVar19 != *(float *)(param_1 + 10))) {
        lVar12 = param_1[1];
        bVar7 = false;
LAB_142cd483d:
        local_178 = *(longlong **)((longlong)param_1 + 0xb4);
        uStack_170 = (float *)CONCAT44(uStack_170._4_4_,*(undefined4 *)((longlong)param_1 + 0xbc));
        if ((((*(uint *)((longlong)param_1 + 0x15c) & 0x40) == 0) && (bVar7)) &&
           ((*(uint *)(lVar12 + 0x28) & 0x1000) != 0)) {
          plVar3 = (longlong *)*param_1;
          *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) | 0x40;
          if ((char)plVar3[0x49] == '\x05') {
            (**(code **)(*plVar3 + 0x5a0))(plVar3,3);
            lVar12 = param_1[1];
          }
        }
        if (((*(uint *)(lVar12 + 0x28) & 0x8000) == 0) ||
           (cVar9 = FUN_142cc59a0(param_1), cVar9 == '\0')) {
          uVar18 = *(uint *)((longlong)param_1 + 0x15c);
          if ((uVar18 & 0x40) == 0) {
            FUN_142cd6280(param_1,param_2);
            lVar12 = param_1[1];
            if ((*(uint *)(lVar12 + 0x28) & 0x10000) != 0) {
              FUN_142cd5910(param_1,param_2);
              lVar12 = param_1[1];
            }
            if ((*(byte *)(lVar12 + 0x2c) & 2) == 0) {
              if (*(int *)(lVar12 + 0x28) < 0) {
                FUN_142cd68b0(param_1,param_2);
              }
            }
            else {
              FUN_142cd7510(param_1,param_2);
            }
            lVar12 = param_1[1];
            fVar19 = *(float *)(lVar12 + 0x310);
            if (0.0 < fVar19) {
              if (0.0 < *(float *)((longlong)param_1 + 0x24)) {
                fVar19 = _guard_xfg_dispatch_icall_nop(*(float *)((longlong)param_1 + 0x24),-fVar19)
                ;
                *(float *)(param_1 + 10) = (fVar19 - 1.0) * param_2 + *(float *)(param_1 + 10);
              }
              else {
                *(undefined4 *)(param_1 + 10) = *(undefined4 *)((longlong)param_1 + 0x4c);
              }
            }
            uVar18 = *(uint *)((longlong)param_1 + 0x15c);
            if ((uVar18 >> 9 & 1) == 0) {
              if ((*(uint *)(lVar12 + 0x28) & 0x10000) == 0) {
                fVar19 = *(float *)((longlong)param_1 + 0x1c);
                local_180 = fVar19 * *(float *)((longlong)param_1 + 0xbc);
                param_1[0x1e] =
                     CONCAT44(fVar19 * *(float *)(param_1 + 0x17),
                              fVar19 * *(float *)((longlong)param_1 + 0xb4));
                *(float *)(param_1 + 0x1f) = local_180;
              }
            }
            else {
              if ((char)plVar4[0x25] == '\x03') {
                if ((uVar18 >> 10 & 1) == 0) {
                  FUN_1424be5e0(param_1 + 0xd,&local_140,*(float *)(param_1 + 10) - param_2);
                  FUN_1424be5e0(param_1 + 0xd,&local_150,(int)param_1[10]);
                  local_148 = local_148 - local_138;
                  fVar20 = (local_150 - local_140) * (local_150 - local_140) +
                           (local_14c - local_13c) * (local_14c - local_13c) + local_148 * local_148
                  ;
                  fVar19 = local_148;
                  if ((fVar20 != 1.0) && (fVar19 = DAT_1468b5d98, 1e-08 <= fVar20)) {
                    auVar21 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
                    fVar19 = auVar21._0_4_;
                    fVar19 = fVar19 + fVar19 * (0.5 - fVar20 * 0.5 * fVar19 * fVar19);
                    fVar19 = (fVar19 + fVar19 * (0.5 - fVar20 * 0.5 * fVar19 * fVar19)) * local_148;
                  }
                  lVar12 = param_1[1];
                  fVar20 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar12 + 0x7ac) * 0.017453292);
                  if ((fVar19 <= fVar20) &&
                     (*(uint *)((longlong)param_1 + 0x15c) =
                           *(uint *)((longlong)param_1 + 0x15c) | 0x400,
                     *(longlong *)(lVar12 + 0x7c8) != 0)) {
                    lVar15 = FUN_142e20fc0();
                    for (lVar16 = *(longlong *)(lVar12 + 0x7c8); lVar16 != 0;
                        lVar16 = *(longlong *)(lVar16 + 0x30)) {
                      if (lVar16 == lVar15) {
                        if (*(longlong *)(lVar12 + 0x7c8) != 0) {
                          uVar11 = FUN_142e27720();
                          lVar12 = AGameStateBase::OnRep_GameModeClass(plVar4,uVar11);
                          if (lVar12 != 0) {
                            lVar16 = FUN_142e27720();
                            if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                 *(int *)(lVar16 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
                              bVar7 = false;
                            }
                            else {
                              bVar7 = true;
                            }
                            if ((bVar7) &&
                               (FUN_142c7bae0(lVar12,local_e8,*(undefined8 *)(param_1[1] + 0x7c8)),
                               local_e0 != (longlong *)0x0)) {
                              LOCK();
                              plVar3 = local_e0 + 1;
                              lVar12 = *plVar3;
                              *(int *)plVar3 = (int)*plVar3 + -1;
                              UNLOCK();
                              if ((int)lVar12 == 1) {
                                (**(code **)*local_e0)(local_e0);
                                LOCK();
                                piVar1 = (int *)((longlong)local_e0 + 0xc);
                                iVar2 = *piVar1;
                                *piVar1 = *piVar1 + -1;
                                UNLOCK();
                                if (iVar2 == 1) {
                                  (**(code **)(*local_e0 + 8))(local_e0,1);
                                }
                              }
                            }
                          }
                        }
                        break;
                      }
                    }
                  }
                }
                if (((((*(uint *)((longlong)param_1 + 0x15c) >> 0xb & 1) == 0) &&
                     (lVar12 = param_1[1], (*(uint *)(lVar12 + 0x28) & 0x1000) == 0)) &&
                    (fVar19 = *(float *)((longlong)param_1 + 0x4c) - *(float *)(lVar12 + 0x7b0),
                    fVar19 < *(float *)(param_1 + 10) || fVar19 == *(float *)(param_1 + 10))) &&
                   (*(uint *)((longlong)param_1 + 0x15c) =
                         *(uint *)((longlong)param_1 + 0x15c) | 0x800,
                   *(longlong *)(lVar12 + 2000) != 0)) {
                  lVar15 = FUN_142e20fc0();
                  lVar12 = *(longlong *)(lVar12 + 2000);
                  lVar16 = lVar12;
                  if (lVar12 != 0) {
                    do {
                      if (lVar16 == lVar15) {
                        if (lVar12 != 0) {
                          local_f8 = FUN_142e27720();
                          lVar12 = AGameStateBase::OnRep_GameModeClass(plVar4,local_f8);
                          if (lVar12 != 0) {
                            lVar16 = FUN_142e27720();
                            if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) <
                                 *(int *)(lVar16 + 0x90)) ||
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                                 (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
                              bVar7 = false;
                            }
                            else {
                              bVar7 = true;
                            }
                            if ((bVar7) &&
                               (FUN_142c7bae0(lVar12,local_d8,*(undefined8 *)(param_1[1] + 2000)),
                               local_d0 != (longlong *)0x0)) {
                              LOCK();
                              plVar3 = local_d0 + 1;
                              lVar12 = *plVar3;
                              *(int *)plVar3 = (int)*plVar3 + -1;
                              UNLOCK();
                              if ((int)lVar12 == 1) {
                                (**(code **)*local_d0)(local_d0);
                                LOCK();
                                piVar1 = (int *)((longlong)local_d0 + 0xc);
                                iVar2 = *piVar1;
                                *piVar1 = *piVar1 + -1;
                                UNLOCK();
                                if (iVar2 == 1) {
                                  (**(code **)(*local_d0 + 8))(local_d0,1);
                                }
                              }
                            }
                          }
                        }
                        goto LAB_142cd4fa4;
                      }
                      lVar16 = *(longlong *)(lVar16 + 0x30);
                    } while (lVar16 != 0);
                    uVar18 = *(uint *)((longlong)param_1 + 0x15c);
                    goto LAB_142cd4ff6;
                  }
                }
              }
LAB_142cd4fa4:
              uVar18 = *(uint *)((longlong)param_1 + 0x15c);
            }
          }
          else if (*(char *)(*param_1 + 0x248) != '\x03') {
            lVar12 = param_1[1];
            *(uint *)((longlong)param_1 + 0x15c) = uVar18 | 0x20;
            goto LAB_142cd4b38;
          }
LAB_142cd4ff6:
          if (((((uVar18 >> 9 & 1) == 0) && ((char)plVar4[0x25] == '\x03')) &&
              ((uVar18 >> 10 & 1) == 0)) &&
             (lVar12 = param_1[1], *(longlong *)(lVar12 + 0x7c8) != 0)) {
            lVar15 = FUN_142e20fc0();
            lVar12 = *(longlong *)(lVar12 + 0x7c8);
            for (lVar16 = lVar12; lVar16 != 0; lVar16 = *(longlong *)(lVar16 + 0x30)) {
              if (lVar16 == lVar15) {
                if ((lVar12 != 0) &&
                   (*(float *)(*param_1 + 0x194) <= 0.0 && *(float *)(*param_1 + 0x194) != 0.0)) {
                  *(uint *)((longlong)param_1 + 0x15c) =
                       *(uint *)((longlong)param_1 + 0x15c) | 0x400;
                  local_f0 = FUN_142e27720();
                  lVar12 = AGameStateBase::OnRep_GameModeClass(plVar4,local_f0);
                  if (lVar12 != 0) {
                    lVar16 = FUN_142e27720();
                    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
                      bVar7 = false;
                    }
                    else {
                      bVar7 = true;
                    }
                    if ((bVar7) &&
                       (FUN_142c7bae0(lVar12,local_c8,*(undefined8 *)(param_1[1] + 0x7c8)),
                       local_c0 != (longlong *)0x0)) {
                      LOCK();
                      plVar3 = local_c0 + 1;
                      lVar12 = *plVar3;
                      *(int *)plVar3 = (int)*plVar3 + -1;
                      UNLOCK();
                      if ((int)lVar12 == 1) {
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
                  }
                }
                break;
              }
            }
          }
          plVar17 = (longlong *)param_1[1];
          if ((*(byte *)(plVar17 + 5) & 0x30) != 0) {
            FUN_142cd87d0(param_1,&local_178,0);
            plVar17 = (longlong *)param_1[1];
          }
          goto LAB_142cd5131;
        }
        *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) | 0x20;
        lVar16 = param_1[1];
        if (((char)plVar4[0x25] == '\x03') &&
           (plVar3 = (longlong *)param_1[0x11], plVar3 != (longlong *)0x0)) {
          uVar11 = FUN_142e79d90();
          lVar12 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar11);
          if ((lVar12 != 0) && (cVar9 = FUN_140a36de0(lVar12), cVar9 != '\0')) {
            lVar12 = *(longlong *)(param_1[0x11] + 0x168);
            if (lVar12 == 0) {
              local_108 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
              puVar14 = &local_108;
              local_100 = DAT_1468b5d98;
            }
            else {
              puVar14 = (undefined8 *)&local_168;
              local_168 = *(undefined4 *)(lVar12 + 0x220);
              local_160 = *(undefined4 *)(lVar12 + 0x228);
              uStack_164 = *(undefined4 *)(lVar12 + 0x224);
            }
            lVar12 = plVar4[0x2d];
            if (lVar12 == 0) {
              local_188 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
              puVar13 = &local_188;
              local_180 = DAT_1468b5d98;
            }
            else {
              puVar13 = (undefined8 *)&local_15c;
              local_15c = *(undefined4 *)(lVar12 + 0x220);
              local_154 = *(undefined4 *)(lVar12 + 0x228);
              uStack_158 = *(undefined4 *)(lVar12 + 0x224);
            }
            local_180 = *(float *)(puVar13 + 1);
            local_198 = (float)*puVar14;
            local_198 = (float)*puVar13 - local_198;
            local_190 = local_180 - *(float *)(puVar14 + 1);
            fStack_194 = (float)((ulonglong)*puVar14 >> 0x20);
            fStack_194 = (float)((ulonglong)*puVar13 >> 0x20) - fStack_194;
            fVar19 = local_198 * local_198 + fStack_194 * fStack_194 + local_190 * local_190;
            if (fVar19 == 1.0) {
LAB_142cd4ab4:
            }
            else {
              if (1e-08 <= fVar19) {
                auVar21 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
                fVar20 = auVar21._0_4_;
                fVar20 = fVar20 + fVar20 * (0.5 - fVar19 * 0.5 * fVar20 * fVar20);
                fVar20 = fVar20 + fVar20 * (0.5 - fVar19 * 0.5 * fVar20 * fVar20);
                local_198 = local_198 * fVar20;
                fStack_194 = fStack_194 * fVar20;
                local_190 = local_190 * fVar20;
                goto LAB_142cd4ab4;
              }
              local_190 = DAT_1468b5d98;
              _local_198 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
            }
            uStack_170 = &local_198;
            local_88 = 0;
            local_78 = 0;
            local_178 = param_1;
            puVar14 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = &PTR_FUN_143f77c18;
              *(undefined4 *)(puVar14 + 1) = (undefined4)local_178;
              *(undefined4 *)((longlong)puVar14 + 0xc) = local_178._4_4_;
              *(undefined4 *)(puVar14 + 2) = (undefined4)uStack_170;
              *(undefined4 *)((longlong)puVar14 + 0x14) = uStack_170._4_4_;
            }
            local_b8[0] = &LAB_142cbb4d0;
            uVar11 = FUN_14247f500();
            FUN_14247d5a0(uVar11,*param_1,local_b8);
          }
        }
        lVar12 = param_1[1];
        if (lVar12 == 0) {
          return;
        }
        if (lVar12 != lVar16) {
          return;
        }
LAB_142cd4b38:
        uVar18 = *(uint *)(lVar12 + 0x28) >> 3 & 0xffffff01;
      }
      else {
        lVar12 = param_1[1];
        bVar7 = true;
        if ((*(uint *)(lVar12 + 0x28) >> 0xc & 1) != 0) goto LAB_142cd483d;
        uVar18 = (uint)((byte)(*(uint *)(lVar12 + 0x28) >> 3) & 1);
      }
      uVar11 = 0;
    }
    FUN_142cd34e0(param_1,uVar18,uVar11);
  }
  return;
}



// FUNCTION 142cd5240 FUN_142cd5240 body=95 status=ok
// SIG undefined FUN_142cd5240(void)

void FUN_142cd5240(longlong *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  if ((((param_1[1] != 0) && (*param_1 != 0)) && (param_1[2] != 0)) &&
     ((*(byte *)(param_1 + 3) & 1) != 0)) {
    iVar2 = FUN_14233f450();
    if (((iVar2 == 1) && ((*(byte *)(param_1 + 3) & 1) != 0)) &&
       (fVar1 = *(float *)(param_1 + 7), *(float *)(param_1 + 7) = param_2 + fVar1,
       *(float *)((longlong)param_1 + 0x3c) <= param_2 + fVar1)) {
      FUN_142cc9130(param_1);
    }
  }
  return;
}



// FUNCTION 142cd52a0 FUN_142cd52a0 body=381 status=ok
// SIG undefined FUN_142cd52a0(void)

void FUN_142cd52a0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_res8 [8];
  longlong local_128;
  longlong local_120;
  undefined1 local_118 [144];
  longlong local_88;
  longlong local_70;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  FUN_1423fde20();
  uVar2 = *(uint *)(param_1 + 0xf);
  if ((uVar2 & 8) != 0) {
    local_128 = param_1[0xd];
    local_120 = 0;
    if (local_128 != 0) {
      local_120 = param_1[0xe];
    }
    FUN_142cd0120(param_1,&local_128);
    uVar2 = *(uint *)(param_1 + 0xf);
  }
  if ((((uVar2 & 2) == 0) && (0 < (int)param_1[0x11])) && ((int)param_1[7] == 0)) {
    FUN_1423e4ec0(local_118,param_1,0);
    plVar1 = param_1 + 0x10;
    local_30 = local_30 | 0x20;
    iVar3 = (int)((longlong)(local_70 + (ulonglong)((uint)(local_70 >> 0x3f) & 7)) >> 3);
    iVar4 = (int)param_1[0x11];
    if (iVar3 <= (int)param_1[0x11]) {
      iVar4 = iVar3;
    }
    FBitWriter::Serialize(local_118,*plVar1,(longlong)iVar4);
    if (iVar4 != 0) {
      iVar3 = (int)param_1[0x11];
      if (iVar3 - iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)*plVar1,(void *)(*plVar1 + (longlong)iVar4),(longlong)(iVar3 - iVar4));
        iVar3 = (int)param_1[0x11];
      }
      *(int *)(param_1 + 0x11) = iVar3 - iVar4;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    if ((int)param_1[0x11] == 0) {
      *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) | 2;
    }
    (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,local_118,0);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_118);
  }
  return;
}



// FUNCTION 142cd5420 FUN_142cd5420 body=27 status=ok
// SIG undefined FUN_142cd5420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cd5420(longlong *param_1,float param_2)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *apuStack_58 [2];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  undefined4 uStack_18;
  
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    fVar1 = *(float *)(param_1 + 7);
    *(float *)(param_1 + 7) = param_2 + fVar1;
    if (*(float *)((longlong)param_1 + 0x3c) <= param_2 + fVar1) {
      FUN_142cfe7f0(*param_1);
      if ((*(byte *)(param_1 + 3) & 1) != 0) {
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe;
        cVar4 = FUN_142cf3980(*param_1);
        if (cVar4 != '\0') {
          thunk_FUN_142cfe5a0(*param_1);
        }
        iVar5 = FUN_14233f450(*param_1);
        if (iVar5 == 3) {
          (**(code **)(*(longlong *)*param_1 + 0x260))();
          *(undefined4 *)(*param_1 + 0x203c) = 0xffffffff;
        }
        iVar5 = FUN_14233f450(*param_1);
        if (1 < iVar5) {
          plVar2 = (longlong *)*param_1;
          *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 4;
          (**(code **)(*plVar2 + 0x5a0))(plVar2,*(undefined1 *)((longlong)plVar2 + 0x4b2),0);
          lVar3 = *param_1;
          *(undefined8 *)(lVar3 + 0x18c) = _DAT_1468b5d90;
          *(undefined4 *)(lVar3 + 0x194) = DAT_1468b5d98;
          *(uint *)(*param_1 + 0x4b4) = *(uint *)(*param_1 + 0x4b4) | 0x20;
          if ((*(byte *)(param_1 + 3) & 1) == 0) {
            *(undefined4 *)(param_1 + 0x8c) = 0;
            *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfd;
          }
        }
        uStack_28 = 0;
        uStack_18 = 0;
        puVar6 = (undefined8 *)FUN_140438ef0(0x10,auStack_48);
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[1] = param_1;
          *puVar6 = &PTR_FUN_143f77b70;
        }
        apuStack_58[0] = &LAB_142cbb4f0;
        uVar7 = FUN_14247f500();
        FUN_14247d5a0(uVar7,*param_1,apuStack_58);
      }
      return;
    }
  }
  return;
}



// FUNCTION 142cd5440 FUN_142cd5440 body=1218 status=ok
// SIG undefined FUN_142cd5440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cd5440(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_738 [32];
  undefined1 local_718;
  undefined8 local_708;
  float local_700;
  undefined8 local_6f8;
  float fStack_6f0;
  float fStack_6ec;
  undefined1 local_6e8 [16];
  undefined1 local_6d8 [16];
  undefined8 local_6b8;
  float fStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  float fStack_6a4;
  undefined4 local_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  uint local_684;
  undefined1 local_680;
  undefined4 local_67c;
  undefined1 local_678 [1496];
  longlong local_a0;
  longlong local_90;
  undefined8 local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_738;
  FUN_142357eb0();
  plVar12 = *(longlong **)(param_1 + 0x118);
  if (plVar12 == (longlong *)0x0) {
LAB_142cd54ba:
    plVar12 = (longlong *)0x0;
  }
  else {
    lVar7 = FUN_1429d7ab0();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142cd54ba;
  }
  fVar13 = param_2 + *(float *)(param_1 + 0x248);
  *(float *)(param_1 + 0x248) = fVar13;
  if ((*(longlong *)(param_1 + 0x180) == 0) || (plVar12 == (longlong *)0x0)) goto LAB_142cd58a3;
  if (*(float *)(param_1 + 0x240) <= 0.0) {
    fVar13 = 1.0;
  }
  else {
    fVar13 = fVar13 / *(float *)(param_1 + 0x240);
    if (1.0 <= fVar13) {
      fVar13 = 1.0;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x244)) {
    fVar13 = _guard_xfg_dispatch_icall_nop(1.0 - fVar13,*(float *)(param_1 + 0x244) + 1.0);
    fVar13 = 1.0 - fVar13;
  }
  *(float *)(param_1 + 0x254) =
       (*(float *)(param_1 + 0x250) - *(float *)(param_1 + 0x24c)) * fVar13 +
       *(float *)(param_1 + 0x24c);
  plVar8 = (longlong *)(**(code **)(*plVar12 + 0x670))(plVar12);
  if (plVar8 == (longlong *)0x0) {
LAB_142cd55bd:
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar7 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142cd55bd;
  }
  local_6b8 = 0;
  fStack_6b0 = 0.0;
  uStack_6ac = 0;
  local_684 = local_684 & 0xfffffffe | 2;
  local_6a0 = 0x42b40000;
  local_688 = 0x3faaaaab;
  uStack_6a8 = 0;
  fStack_6a4 = 0.0;
  local_698 = 0x42b40000;
  uStack_694 = 0x44000000;
  uStack_690 = 0;
  uStack_68c = 0x4a000000;
  local_680 = 0;
  local_67c = 0;
  FUN_142741540(local_678);
  local_70 = local_70 & 0xfffffffe;
  local_78 = 0;
  local_700 = *(float *)(*(longlong *)(param_1 + 0x180) + 0x228);
  local_6b8 = *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x220);
  fStack_6b0 = local_700;
  if (*(char *)(param_1 + 0x438) == '\0') {
    if (plVar8 == (longlong *)0x0) {
      fStack_6f0 = DAT_1468b5da8;
      puVar10 = &local_6f8;
      local_6f8 = DAT_1468b5da0;
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x720))(plVar8,&local_6f8);
    }
    local_700 = *(float *)(puVar10 + 1);
    puVar9 = &local_708;
    local_708 = *puVar10;
  }
  else {
    fStack_6f0 = *(float *)(param_1 + 0x434);
    puVar9 = &local_6f8;
    local_6f8 = *(undefined8 *)(param_1 + 0x42c);
  }
  fStack_6a4 = *(float *)(puVar9 + 1);
  uStack_6ac = (undefined4)*puVar9;
  uStack_6a8 = (undefined4)((ulonglong)*puVar9 >> 0x20);
  if ((plVar8 != (longlong *)0x0) &&
     (uVar5 = (**(code **)(*plVar8 + 0x768))(plVar8), (char)uVar5 != '\0')) {
    if (*(char *)(param_1 + 0x40c) == '\0') {
      lVar7 = plVar8[0xa5];
      if (lVar7 != 0) {
        lVar11 = FUN_142e54ac0();
        lVar1 = *(longlong *)(lVar7 + 0x10);
        if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
            lVar11 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_142dc5670(lVar7,lVar1,&local_6b8);
        }
      }
    }
    else {
      lVar7 = plVar12[0x2d];
      if (lVar7 == 0) {
        uStack_6ac = (undefined4)DAT_1468b5da0;
        uStack_6a8 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_700 = DAT_1468b5da8;
      }
      else {
        fVar13 = *(float *)(lVar7 + 0x210);
        local_6f8 = *(undefined8 *)(lVar7 + 0x210);
        fStack_6f0 = *(float *)(lVar7 + 0x218);
        fStack_6ec = *(float *)(lVar7 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != *(float *)(lVar7 + 0x214));
        auVar2._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != fVar13);
        auVar2._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_6f0);
        auVar2._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_6ec);
        iVar6 = movmskps(uVar5,auVar2);
        if (iVar6 != 0) {
          *(float *)(lVar7 + 0x250) = fVar13;
          *(float *)(lVar7 + 0x254) = *(float *)(lVar7 + 0x214);
          *(float *)(lVar7 + 600) = fStack_6f0;
          *(float *)(lVar7 + 0x25c) = fStack_6ec;
          puVar10 = (undefined8 *)FQuat::Rotator(&local_6f8,&local_708);
          *(undefined8 *)(lVar7 + 0x260) = *puVar10;
          *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar10 + 1);
        }
        uStack_6ac = (undefined4)*(undefined8 *)(lVar7 + 0x260);
        uStack_6a8 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x260) >> 0x20);
        local_700 = *(float *)(lVar7 + 0x268);
      }
      local_708 = CONCAT44(uStack_6a8,uStack_6ac);
      fStack_6a4 = local_700;
    }
  }
  FUN_142cb7f20(param_1,local_6e8,&local_6b8);
  if (*(char *)(param_1 + 0x428) != '\0') {
    local_6d8._12_4_ = 0;
    local_6d8._0_12_ = *(undefined1 (*) [12])(param_1 + 0x41c);
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_718 = 0;
    FUN_142399d60(*(longlong *)(param_1 + 0x180),local_6e8,0,0);
  }
  cVar4 = (**(code **)(*plVar12 + 0x778))(plVar12);
  if (cVar4 != '\0') {
    FUN_142cdac20(param_1,param_2);
    FUN_142cda840(param_1);
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
LAB_142cd58a3:
  if ((&local_708 != (undefined8 *)(param_1 + 0x41c)) && (*(char *)(param_1 + 0x428) != '\0')) {
    *(undefined1 *)(param_1 + 0x428) = 0;
  }
  if ((&local_708 != (undefined8 *)(param_1 + 0x42c)) && (*(char *)(param_1 + 0x438) != '\0')) {
    *(undefined1 *)(param_1 + 0x438) = 0;
  }
  return;
}



// FUNCTION 142cd5910 FUN_142cd5910 body=2409 status=ok
// SIG undefined FUN_142cd5910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cd5910(longlong *param_1,float param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined1 (*pauVar5) [12];
  undefined8 *puVar6;
  longlong *plVar7;
  float *pfVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_b8;
  float fStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  float local_a0;
  undefined1 local_98 [144];
  
  fVar24 = 0.0;
  plVar1 = *(longlong **)(*param_1 + 0xfd8);
  plVar7 = (longlong *)plVar1[0x92];
  if (((plVar7 != (longlong *)0x0) && ((*(uint *)((longlong)plVar7 + 0x4cc) >> 1 & 1) != 0)) &&
     (cVar3 = (**(code **)(*plVar7 + 0x768))(), cVar3 != '\0')) {
    lVar9 = param_1[1];
    fVar23 = 0.0;
    fVar25 = 0.0;
    if (*(char *)(lVar9 + 0x4d0) == '\x01') {
      if (*(float *)((longlong)param_1 + 0x13c) <= 0.0) {
        fVar23 = *(float *)(param_1 + 6);
      }
      else {
        fVar23 = *(float *)((longlong)param_1 + 0x2c);
      }
      fVar23 = ABS(*(float *)((longlong)param_1 + 0x13c)) * fVar23 * param_2;
    }
    if (*(char *)(lVar9 + 0x4d1) == '\x01') {
      fVar25 = param_2 * *(float *)(param_1 + 5) * *(float *)(param_1 + 0x28);
    }
    if ((*(uint *)(lVar9 + 0x28) & 0x20000) == 0) {
      (**(code **)(*(longlong *)plVar1[0x92] + 0x7a8))((longlong *)plVar1[0x92],local_98,&local_a8);
      pauVar5 = (undefined1 (*) [12])FVector::Rotation((longlong)param_1 + 0xb4,&local_b8);
      fVar12 = DAT_146b30e60._12_4_;
      auVar10._12_4_ = 0;
      auVar10._0_12_ = *pauVar5;
      auVar10 = divps(auVar10,_DAT_146b30e60);
      fVar26 = (float)DAT_146b30e60;
      fVar21 = DAT_146b30e60._4_4_;
      fVar15 = DAT_146b30e60._8_4_;
      fVar16 = (float)*(undefined8 *)*pauVar5 - (float)(int)auVar10._0_4_ * fVar26;
      fVar19 = (float)((ulonglong)*(undefined8 *)*pauVar5 >> 0x20) -
               (float)(int)auVar10._4_4_ * fVar21;
      fVar20 = *(float *)(*pauVar5 + 8) - (float)(int)auVar10._8_4_ * fVar15;
      fVar22 = 0.0 - (float)(int)auVar10._12_4_ * fVar12;
      fVar16 = (float)(((uint)(fVar16 + fVar26) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                      (uint)(fVar16 + fVar26));
      fVar19 = (float)(((uint)(fVar19 + fVar21) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                      (uint)(fVar19 + fVar21));
      fStack_b0 = (float)(((uint)(fVar20 + fVar15) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                         (uint)(fVar20 + fVar15));
      fVar20 = (float)(((uint)(fVar22 + fVar12) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                      (uint)(fVar22 + fVar12));
      fVar16 = (float)(((uint)(fVar16 - fVar26) ^ (uint)fVar16) & -(uint)(_DAT_146b30e50 < fVar16) ^
                      (uint)fVar16);
      fVar19 = (float)(((uint)(fVar19 - fVar21) ^ (uint)fVar19) &
                       -(uint)(fRam0000000146b30e54 < fVar19) ^ (uint)fVar19);
      fStack_b0 = (float)(((uint)(fStack_b0 - fVar15) ^ (uint)fStack_b0) &
                          -(uint)(fRam0000000146b30e58 < fStack_b0) ^ (uint)fStack_b0);
      uStack_ac = ((uint)(fVar20 - fVar12) ^ (uint)fVar20) & -(uint)(fRam0000000146b30e5c < fVar20)
                  ^ (uint)fVar20;
      local_b8 = CONCAT44(fVar19,fVar16);
      fVar19 = local_a8._4_4_ - fVar19;
      fVar12 = (float)(int)(fVar19 * 0.0027777778) * 360.0;
      if (ABS(fVar19) < ABS(fVar12)) {
        fVar12 = fVar19;
      }
      fVar19 = fVar19 - fVar12;
      if (fVar19 < 0.0) {
        fVar19 = fVar19 + 360.0;
      }
      if (180.0 < fVar19) {
        fVar19 = fVar19 - 360.0;
      }
      fVar25 = fVar25 + fVar19;
      if (*(char *)(param_1[1] + 0x68) != '\0') {
        fVar16 = (float)local_a8 - fVar16;
        fVar12 = (float)(int)(fVar16 * 0.0027777778) * 360.0;
        if (ABS(fVar16) < ABS(fVar12)) {
          fVar12 = fVar16;
        }
        fVar16 = fVar16 - fVar12;
        if (fVar16 < 0.0) {
          fVar16 = fVar16 + 360.0;
        }
        if (180.0 < fVar16) {
          fVar16 = fVar16 - 360.0;
        }
        fVar23 = fVar23 + fVar16;
      }
    }
    fVar12 = (float)(int)(fVar23 * 0.0027777778) * 360.0;
    if (ABS(fVar23) < ABS(fVar12)) {
      fVar12 = fVar23;
    }
    fVar12 = fVar23 - fVar12;
    if (fVar12 < 0.0) {
      fVar12 = fVar12 + 360.0;
    }
    if (fVar12 == 0.0) {
      fVar12 = (float)(int)(fVar25 * 0.0027777778) * 360.0;
      if (ABS(fVar25) < ABS(fVar12)) {
        fVar12 = fVar25;
      }
      fVar12 = fVar25 - fVar12;
      if (fVar12 < 0.0) {
        fVar12 = fVar12 + 360.0;
      }
      if (fVar12 != 0.0) goto LAB_142cd5c17;
    }
    else {
LAB_142cd5c17:
      pauVar5 = (undefined1 (*) [12])
                FVector::Rotation((undefined8 *)((longlong)param_1 + 0xb4),local_98);
      local_a8 = *(undefined8 *)*pauVar5;
      local_a0 = *(float *)(*pauVar5 + 8);
      auVar11._12_4_ = 0;
      auVar11._0_12_ = *pauVar5;
      auVar10 = divps(auVar11,_DAT_146b30e60);
      fVar19 = (float)DAT_146b30e60;
      fVar20 = DAT_146b30e60._4_4_;
      fVar26 = DAT_146b30e60._8_4_;
      fVar12 = (float)local_a8 - (float)(int)auVar10._0_4_ * fVar19;
      fVar16 = (float)((ulonglong)local_a8 >> 0x20) - (float)(int)auVar10._4_4_ * fVar20;
      fVar21 = local_a0 - (float)(int)auVar10._8_4_ * fVar26;
      fVar12 = (float)(((uint)(fVar12 + fVar19) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar19));
      fVar16 = (float)(((uint)(fVar16 + fVar20) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                      (uint)(fVar16 + fVar20));
      fStack_b0 = (float)(((uint)(fVar21 + fVar26) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                         (uint)(fVar21 + fVar26));
      fStack_b0 = (float)(((uint)(fStack_b0 - fVar26) ^ (uint)fStack_b0) &
                          -(uint)(fRam0000000146b30e58 < fStack_b0) ^ (uint)fStack_b0);
      fVar23 = (float)(((uint)(fVar12 - fVar19) ^ (uint)fVar12) & -(uint)(_DAT_146b30e50 < fVar12) ^
                      (uint)fVar12) + fVar23;
      fVar25 = (float)(((uint)(fVar16 - fVar20) ^ (uint)fVar16) &
                       -(uint)(fRam0000000146b30e54 < fVar16) ^ (uint)fVar16) + fVar25;
      local_b8 = CONCAT44(fVar25,fVar23);
      if (*(char *)(param_1[1] + 0x68) == '\0') {
        local_b8 = (ulonglong)(uint)fVar25 << 0x20;
      }
      else if (fVar23 <= *(float *)(param_1 + 8)) {
        if (fVar23 < -*(float *)((longlong)param_1 + 0x44)) {
          local_b8 = CONCAT44(fVar25,-*(float *)((longlong)param_1 + 0x44));
        }
      }
      else {
        local_b8 = CONCAT44(fVar25,*(float *)(param_1 + 8));
      }
      puVar6 = (undefined8 *)FRotator::Vector(&local_b8,local_98);
      *(undefined8 *)((longlong)param_1 + 0xb4) = *puVar6;
      *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(puVar6 + 1);
    }
    fVar25 = *(float *)((longlong)param_1 + 0x1c);
    fVar23 = *(float *)(param_1 + 4);
    local_a0 = fVar25 * *(float *)((longlong)param_1 + 0xbc);
    *(ulonglong *)((longlong)param_1 + 0xe4) =
         CONCAT44(fVar25 * *(float *)(param_1 + 0x17),fVar25 * *(float *)((longlong)param_1 + 0xb4))
    ;
    *(float *)((longlong)param_1 + 0xec) = local_a0;
    if (fVar23 != 0.0) {
      fVar26 = *(float *)((longlong)param_1 + 0xbc) * DAT_1464aa798._4_4_ -
               *(float *)(param_1 + 0x17) * DAT_1464aa7a0;
      fVar21 = *(float *)((longlong)param_1 + 0xb4) * DAT_1464aa7a0 -
               *(float *)((longlong)param_1 + 0xbc) * (float)DAT_1464aa798;
      fVar20 = *(float *)(param_1 + 0x17) * (float)DAT_1464aa798 -
               *(float *)((longlong)param_1 + 0xb4) * DAT_1464aa798._4_4_;
      fVar19 = fVar21 * fVar21 + fVar26 * fVar26 + fVar20 * fVar20;
      fVar25 = fVar20;
      fVar12 = fVar26;
      fVar16 = fVar21;
      if ((fVar19 != 1.0) &&
         (fVar25 = DAT_1468b5d98, fVar12 = DAT_1468b5d90, fVar16 = DAT_1468b5d94, 1e-08 <= fVar19))
      {
        auVar17._8_8_ = 0;
        auVar17._0_8_ = CONCAT44(0,fVar19);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = CONCAT44(0,fVar19);
        auVar10 = rsqrtss(auVar17,auVar13);
        fVar16 = auVar10._0_4_;
        fVar16 = fVar16 + fVar16 * (0.5 - fVar19 * 0.5 * fVar16 * fVar16);
        fVar16 = fVar16 + fVar16 * (0.5 - fVar19 * 0.5 * fVar16 * fVar16);
        fVar25 = fVar16 * fVar20;
        fVar12 = fVar16 * fVar26;
        fVar16 = fVar16 * fVar21;
      }
      *(float *)((longlong)param_1 + 0xe4) = fVar23 * fVar12 + *(float *)((longlong)param_1 + 0xe4);
      *(float *)(param_1 + 0x1d) = fVar23 * fVar16 + *(float *)(param_1 + 0x1d);
      *(float *)((longlong)param_1 + 0xec) = fVar23 * fVar25 + *(float *)((longlong)param_1 + 0xec);
    }
  }
  lVar9 = param_1[1];
  if (((lVar9 == 0) || (*(char *)(lVar9 + 0x4d1) == '\x02')) || (*(char *)(lVar9 + 0x4d0) == '\x02')
     ) {
LAB_142cd5f2f:
    bVar2 = false;
  }
  else {
    if ((*(uint *)(lVar9 + 0x2c) & 0x800) == 0) {
      plVar7 = (longlong *)FRuntimeFloatCurve::GetRichCurve(lVar9 + 0xa8);
      iVar4 = (**(code **)(*plVar7 + 8))(plVar7);
      if (0 < iVar4) goto LAB_142cd5f2f;
    }
    bVar2 = true;
  }
  cVar3 = (**(code **)(*plVar1 + 0x778))(plVar1);
  if ((cVar3 != '\0') || ((char)plVar1[0x25] != '\x03')) goto LAB_142cd60df;
  if (bVar2) {
    fVar25 = *(float *)((longlong)param_1 + 0x1c);
    local_a0 = fVar25 * *(float *)((longlong)param_1 + 0xbc);
    fVar24 = local_a0;
    lVar9 = CONCAT44(fVar25 * *(float *)(param_1 + 0x17),
                     fVar25 * *(float *)((longlong)param_1 + 0xb4));
  }
  else {
    lVar9 = param_1[1];
    if ((lVar9 != 0) && ((*(uint *)(lVar9 + 0x28) & 0x10000) != 0)) {
      if (*(char *)(lVar9 + 0x4d1) == '\x02') {
        fVar24 = *(float *)(param_1 + 5);
      }
      fVar24 = *(float *)((longlong)param_1 + 0x1c) + fVar24;
      if (0.0001 <= fVar24) {
        fVar25 = *(float *)(param_1 + 0x1d);
        fVar23 = *(float *)((longlong)param_1 + 0xe4);
        fStack_b0 = *(float *)((longlong)param_1 + 0xec);
        fVar12 = fVar23 * fVar23 + fVar25 * fVar25 + fStack_b0 * fStack_b0;
        if (fVar12 <= fVar24 * fVar24) {
          local_b8 = *(longlong *)((longlong)param_1 + 0xe4);
          fStack_b0 = *(float *)((longlong)param_1 + 0xec);
          fVar24 = fStack_b0;
          lVar9 = local_b8;
        }
        else {
          auVar14._8_8_ = 0;
          auVar14._0_8_ = CONCAT44(0,fVar12);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = CONCAT44(0,fVar12);
          auVar10 = rsqrtss(auVar18,auVar14);
          fVar16 = auVar10._0_4_;
          fVar16 = fVar16 + fVar16 * (0.5 - fVar12 * 0.5 * fVar16 * fVar16);
          fVar24 = (fVar16 + fVar16 * (0.5 - fVar12 * 0.5 * fVar16 * fVar16)) * fVar24;
          fStack_b0 = fStack_b0 * fVar24;
          local_b8 = CONCAT44(fVar25 * fVar24,fVar23 * fVar24);
          fVar24 = fStack_b0;
          lVar9 = local_b8;
        }
        goto LAB_142cd60d1;
      }
    }
    fStack_b0 = DAT_1468b5d98;
    local_b8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    fVar24 = DAT_1468b5d98;
    lVar9 = local_b8;
  }
LAB_142cd60d1:
  *(longlong *)((longlong)param_1 + 0xe4) = lVar9;
  *(float *)((longlong)param_1 + 0xec) = fVar24;
LAB_142cd60df:
  (**(code **)(*(longlong *)*param_1 + 0xc60))();
  if ((char)plVar1[0x25] == '\x02') {
    pfVar8 = (float *)FVector::Rotation((longlong)param_1 + 0xb4,local_98);
    fStack_b0 = (float)DAT_1468b5da8;
    local_b8 = CONCAT44((float)((int)ROUND(pfVar8[1] * 182.04445 + pfVar8[1] * 182.04445 + 0.5) >> 1
                               & 0xffff) * 0.005493164,
                        (float)((int)ROUND(*pfVar8 * 182.04445 + *pfVar8 * 182.04445 + 0.5) >> 1 &
                               0xffff) * 0.005493164);
    puVar6 = (undefined8 *)FRotator::Vector(&local_b8,local_98);
    *(undefined8 *)((longlong)param_1 + 0xb4) = *puVar6;
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(puVar6 + 1);
    if (!bVar2) {
      local_a0 = *(float *)((longlong)param_1 + 0xec);
      local_a8 = *(undefined8 *)((longlong)param_1 + 0xe4);
      puVar6 = (undefined8 *)
               (**(code **)(*(longlong *)*param_1 + 0x918))((longlong *)*param_1,local_98,&local_a8)
      ;
      *(undefined8 *)((longlong)param_1 + 0xe4) = *puVar6;
      *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)(puVar6 + 1);
    }
  }
  param_1[0x1e] = *(longlong *)((longlong)param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)((longlong)param_1 + 0xec);
  if (*(char *)(param_1[1] + 0x68) != '\0') {
    *(float *)(param_1 + 0x1f) = *(float *)(param_1 + 0x1f) - *(float *)(param_1 + 9);
  }
  return;
}



// FUNCTION 142cd6280 FUN_142cd6280 body=1575 status=ok
// SIG undefined FUN_142cd6280(void)

void FUN_142cd6280(longlong *param_1,float param_2)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res10 [2];
  longlong *local_res18;
  float *local_res20;
  float fStack_b4;
  
  lVar8 = *param_1;
  local_res20 = local_res10;
  lVar2 = *(longlong *)(lVar8 + 0xfd8);
  local_res10[0] = param_2;
  local_res18 = param_1;
  if (*(char *)(lVar8 + 0x248) == '\x05') {
    uVar10 = *(undefined8 *)(lVar8 + 0x178);
    lVar8 = FUN_14238cd00(uVar10);
    if (lVar8 == 0) {
      fVar17 = 0.0;
    }
    else {
      lVar8 = FUN_14238cd00(uVar10);
      fVar17 = *(float *)(lVar8 + 0x498) * 0.5;
    }
  }
  else {
    fVar17 = *(float *)(lVar8 + 0x270);
  }
  lVar8 = param_1[1];
  if (((*(uint *)(lVar8 + 0x28) & 0x10000) == 0) || (*(char *)(lVar8 + 0x4d0) != '\x02')) {
    fVar16 = *(float *)(param_1 + 3);
    plVar9 = (longlong *)FRuntimeFloatCurve::GetRichCurve(lVar8 + 0xa8);
    iVar6 = (**(code **)(*plVar9 + 8))(plVar9);
    if (0 < iVar6) {
      if (((*(byte *)(param_1[1] + 0x28) & 1) == 0) || (*(float *)((longlong)param_1 + 0x4c) <= 0.0)
         ) {
        fVar13 = *(float *)(param_1 + 10);
      }
      else {
        fVar13 = *(float *)(param_1 + 10) / *(float *)((longlong)param_1 + 0x4c);
        if (1.0 <= fVar13) {
          fVar13 = 1.0;
        }
      }
      fVar13 = (float)FRichCurve::Eval(plVar9,fVar13,0x3f800000);
      fVar16 = fVar16 * fVar13;
    }
    fVar13 = (float)(**(code **)(*(longlong *)*param_1 + 0xc50))
                              ((longlong *)*param_1,param_1[1],fVar16);
    fVar16 = fVar13;
    if ((*(byte *)((longlong)param_1 + 0x15c) & 8) != 0) {
      fVar16 = (float)FMath::FInterpConstantTo
                                (*(undefined4 *)((longlong)param_1 + 0x1c),fVar13,local_res10[0],
                                 *(undefined4 *)(*param_1 + 0x2b0));
      *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) & 0xfffffff7;
      uVar7 = 0;
      if (1e-08 < ABS(fVar16 - fVar13)) {
        uVar7 = 8;
      }
      *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) | uVar7;
    }
    *(float *)((longlong)param_1 + 0x1c) = fVar16;
    lVar8 = param_1[1];
    if (((*(uint *)(lVar8 + 0x28) & 0x4000) != 0) && (*(char *)(lVar8 + 0x68) == '\0')) {
      lVar3 = *param_1;
      *(float *)((longlong)param_1 + 0x24) = fVar16;
      fVar13 = fVar16;
      if (((byte)*(undefined4 *)(lVar3 + 0x410) & 3) == 3) {
        fVar18 = (float)*(undefined8 *)((longlong)param_1 + 0xb4);
        fStack_b4 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xb4) >> 0x20);
        fVar13 = fVar18 * fVar18 + fStack_b4 * fStack_b4;
        if (1e-08 < fVar13) {
          auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
          fVar14 = auVar15._0_4_;
          fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
          fVar14 = fVar14 + fVar14 * (0.5 - fVar13 * 0.5 * fVar14 * fVar14);
          fVar18 = fVar18 * fVar14;
          fStack_b4 = fStack_b4 * fVar14;
        }
        if ((0.0001 < ABS(fVar18)) || (0.0001 < ABS(fStack_b4))) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          fVar13 = 0.0;
        }
        else {
          fVar13 = fStack_b4 * *(float *)(lVar3 + 0x45c) + fVar18 * *(float *)(lVar3 + 0x458) +
                   *(float *)(lVar3 + 0x460) * 0.0;
        }
        uVar10 = FRuntimeFloatCurve::GetRichCurve(lVar8 + 0x318);
        fVar13 = (float)FRichCurve::Eval(uVar10,fVar13,0x3f800000);
        fVar13 = fVar13 * fVar16;
        fVar16 = *(float *)((longlong)param_1 + 0x24);
      }
      *(float *)((longlong)param_1 + 0x1c) = fVar13;
      if (fVar16 != 0.0) {
        *(float *)((longlong)param_1 + 0x24) = fVar13 / fVar16;
      }
    }
  }
  else {
    plVar9 = *(longlong **)(lVar2 + 0x490);
    if (plVar9 != (longlong *)0x0) {
      lVar8 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (cVar5 = (**(code **)(*plVar9 + 0x768))(plVar9), cVar5 != '\0')) {
        fVar16 = *(float *)((longlong)param_1 + 0x13c);
        fVar13 = *(float *)(param_1 + 3);
        if (fVar16 != 0.0) {
          if (fVar16 <= 0.0) {
            fVar18 = *(float *)(param_1 + 6);
          }
          else {
            fVar18 = *(float *)((longlong)param_1 + 0x2c);
          }
          fVar13 = (fVar18 - fVar13) * ABS(fVar16) + fVar13;
        }
        uVar11 = FUN_142cb4700(&local_res18,fVar13);
        uVar11 = (**(code **)(*(longlong *)*param_1 + 0xc50))
                           ((longlong *)*param_1,param_1[1],uVar11);
        uVar12 = FUN_142cb4700(&local_res18,(int)param_1[3]);
        fVar13 = (float)(**(code **)(*(longlong *)*param_1 + 0xc50))
                                  ((longlong *)*param_1,param_1[1],uVar12);
        fVar16 = local_res10[0];
        if (*(float *)((longlong)param_1 + 0x13c) == 0.0) {
          FUN_142cb49f0(&local_res20,(longlong)param_1 + 0x1c,fVar17,fVar13);
          fVar13 = *(float *)((longlong)param_1 + 0x1c);
        }
        else {
          fVar13 = *(float *)((longlong)param_1 + 0x1c) - fVar13;
          fVar13 = *(float *)((longlong)param_1 + 0x1c) -
                   (fVar13 - ABS(fVar13) * *(float *)((longlong)param_1 + 0x13c)) * local_res10[0] *
                   fVar17;
          *(float *)((longlong)param_1 + 0x1c) = fVar13;
        }
        uVar11 = FMath::FInterpConstantTo(fVar13,uVar11,fVar16,*(undefined4 *)(*param_1 + 0x2b0));
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar11;
      }
    }
  }
  if (((*(uint *)(param_1[1] + 0x28) & 0x10000) == 0) || (*(char *)(param_1[1] + 0x4d1) != '\x02'))
  {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    plVar9 = *(longlong **)(lVar2 + 0x490);
    if (plVar9 != (longlong *)0x0) {
      lVar8 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (((*(uint *)((longlong)plVar9 + 0x4cc) >> 1 & 1) == 0) ||
           (cVar5 = (**(code **)(*plVar9 + 0x768))(plVar9), cVar5 == '\0')) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          uVar11 = FUN_142cb4700(&local_res18,*(float *)(param_1 + 5) * *(float *)(param_1 + 0x28));
          uVar11 = (**(code **)(*(longlong *)*param_1 + 0xc50))
                             ((longlong *)*param_1,param_1[1],uVar11);
          fVar16 = local_res10[0];
          pfVar1 = (float *)(param_1 + 4);
          if (*(float *)(param_1 + 0x28) == 0.0) {
            FUN_142cb49f0(&local_res20,pfVar1,fVar17,0);
            fVar13 = *pfVar1;
          }
          else {
            fVar13 = *pfVar1;
            fVar13 = fVar13 - (fVar13 - ABS(fVar13) * *(float *)(param_1 + 0x28)) * local_res10[0] *
                              fVar17;
            *pfVar1 = fVar13;
          }
          fVar17 = (float)FMath::FInterpConstantTo
                                    (fVar13,uVar11,fVar16,*(undefined4 *)(*param_1 + 0x2b0));
          *pfVar1 = fVar17;
          return;
        }
      }
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 142cd68b0 FUN_142cd68b0 body=2772 status=ok
// SIG undefined FUN_142cd68b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cd68b0(longlong *param_1,float param_2)

{
  float *pfVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  byte bVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_2f8 [32];
  undefined4 *local_2d8;
  float local_2d0;
  undefined4 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  undefined8 local_2a8;
  float local_2a0;
  undefined8 local_298;
  float local_290;
  undefined4 local_288;
  float local_284;
  undefined1 local_280 [8];
  undefined8 local_278;
  float local_270;
  undefined8 local_268;
  float local_260;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  float local_244;
  undefined1 local_230 [40];
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [12];
  undefined4 local_1cc;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined1 local_148 [72];
  longlong local_100;
  longlong local_e0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  plVar2 = *(longlong **)(*param_1 + 0xfd8);
  cVar6 = (**(code **)(*plVar2 + 0x780))(plVar2);
  lVar3 = *param_1;
  if (cVar6 == '\0') {
    local_2a0 = *(float *)(lVar3 + 0x194);
    puVar8 = &local_2a8;
    local_2a8 = *(undefined8 *)(lVar3 + 0x18c);
  }
  else {
    puVar8 = (undefined8 *)AMAU_BehaviorPlayer::GetVelocityAnimation(lVar3,&local_278);
  }
  uVar9 = *puVar8;
  fVar12 = (float)((ulonglong)uVar9 >> 0x20);
  local_270 = *(float *)(puVar8 + 1);
  local_278._0_4_ = (float)uVar9;
  if ((((float)local_278 == 0.0) && (fVar12 == 0.0)) && (local_270 == 0.0)) {
    return;
  }
  if (*(float *)(param_1 + 10) <= *(float *)(param_1 + 0x19) &&
      *(float *)(param_1 + 0x19) != *(float *)(param_1 + 10)) {
    return;
  }
  fVar15 = fVar12 * fVar12 + (float)local_278 * (float)local_278;
  if (fVar15 == 1.0) {
    fVar16 = local_270;
    fVar19 = fVar12;
    fVar17 = (float)local_278;
    if (local_270 != 0.0) {
LAB_142cd6aaf:
      fVar16 = 0.0;
      fVar19 = fVar12;
      fVar17 = (float)local_278;
    }
  }
  else {
    fVar16 = DAT_1468b5d98;
    fVar19 = DAT_1468b5d94;
    fVar17 = DAT_1468b5d90;
    if (1e-08 <= fVar15) {
      auVar18 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
      fVar16 = auVar18._0_4_;
      fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
      fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
      fVar12 = fVar12 * fVar16;
      local_278._0_4_ = (float)local_278 * fVar16;
      goto LAB_142cd6aaf;
    }
  }
  fVar12 = *(float *)((longlong)param_1 + 0xc4);
  pfVar1 = (float *)((longlong)param_1 + 0x9c);
  fVar15 = *(float *)(param_1 + 0x18);
  fVar20 = fVar12 * fVar19 * param_2 + *(float *)(param_1 + 0x14);
  fVar19 = fVar12 * fVar17 * param_2 + *pfVar1;
  fVar16 = fVar12 * fVar16 * param_2 + *(float *)((longlong)param_1 + 0xa4);
  local_298 = CONCAT44(fVar20,fVar19);
  fVar12 = fVar16;
  if (0.0 < fVar15) {
    fVar22 = fVar20 - *(float *)((longlong)param_1 + 0x94);
    fVar21 = fVar19 - *(float *)(param_1 + 0x12);
    fVar17 = fVar21 * fVar21 + fVar22 * fVar22;
    if (fVar15 * fVar15 < fVar17) {
      fVar16 = fVar16 - *(float *)(param_1 + 0x13);
      fVar12 = fVar21;
      fVar20 = fVar22;
      if ((fVar17 != 1.0) && (fVar12 = DAT_1468b5d90, fVar20 = DAT_1468b5d94, 1e-08 <= fVar17)) {
        auVar18 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
        fVar19 = auVar18._0_4_;
        fVar16 = 0.5 - fVar17 * 0.5 * fVar19 * fVar19;
        fVar19 = fVar19 + fVar19 * fVar16;
        fVar19 = fVar19 + fVar19 * (0.5 - fVar17 * 0.5 * fVar19 * fVar19);
        fVar12 = fVar19 * fVar21;
        fVar20 = fVar19 * fVar22;
      }
      fVar19 = fVar15 * fVar12 + *(float *)(param_1 + 0x12);
      fVar20 = *(float *)((longlong)param_1 + 0x94) + fVar15 * fVar20;
      local_298 = CONCAT44(fVar20,fVar19);
      fVar12 = *(float *)((longlong)param_1 + 0xa4);
    }
  }
  local_288 = 0;
  local_284 = 0.0;
  local_290 = fVar12;
  local_278 = uVar9;
  (**(code **)(*plVar2 + 0x578))(plVar2,fVar16,&local_284);
  uVar9 = (**(code **)(*plVar2 + 0x148))(plVar2);
  uVar13 = local_288;
  fVar15 = (float)local_298;
  uVar5 = (ulonglong)local_298 >> 0x20;
  bVar11 = *(byte *)(param_1[1] + 0x2c) & 1;
  if (bVar11 == 0) {
    local_270 = *(float *)((longlong)param_1 + 0xa4);
    local_278 = *(undefined8 *)pfVar1;
    local_268 = local_298;
    fVar12 = local_284;
    local_260 = local_290;
  }
  else {
    local_270 = fVar12 + local_284;
    local_2a0 = fVar12 - local_284 * 2.0;
    local_278 = CONCAT44(fVar20,fVar19);
    local_268 = CONCAT44(fVar20,fVar19);
    fVar12 = 1.0;
    local_260 = local_2a0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b315d0) && (_Init_thread_header(&DAT_146b315d0), DAT_146b315d0 == -1))
  {
    FName::FName(&DAT_146b315c8,"CMTargetControl",1);
    _Init_thread_footer(&DAT_146b315d0);
  }
  local_2d8 = (undefined4 *)0x0;
  FUN_1422ffb20(local_148,DAT_146b315c8,local_280,0);
  FUN_1426d3dd0(local_230);
  FUN_1426ea8d0(local_230,0,0);
  FCollisionResponseContainer::SetResponse(local_230,0,2);
  FCollisionResponseContainer::SetResponse(local_230,1,2);
  FCollisionResponseContainer::SetResponse(local_230,7,2);
  _guard_xfg_dispatch_icall_nop(local_1d8,0,0x90);
  local_2b8 = local_230;
  local_24c = uVar13;
  local_2c0 = local_148;
  local_248 = uVar13;
  local_2c8 = &local_250;
  local_2d0 = 0.0;
  local_2d8 = &DAT_1464aa810;
  local_1cc = 0x3f800000;
  local_250 = 1;
  local_244 = fVar12;
  cVar6 = UWorld::SweepSingleByChannel(uVar9,local_1d8,&local_278,&local_268);
  if (bVar11 == 0) {
    if (cVar6 == '\0') {
      local_2a8 = local_268;
      local_2a0 = local_260;
    }
    else {
      fVar12 = local_19c * local_19c + local_1a0 * local_1a0;
      if (fVar12 == 1.0) {
        fVar15 = local_1a0;
        fVar16 = local_19c;
        if (local_198 != 0.0) {
LAB_142cd6f54:
          local_198 = 0.0;
          fVar15 = local_1a0;
          fVar16 = local_19c;
        }
      }
      else {
        local_198 = DAT_1468b5d98;
        fVar15 = DAT_1468b5d90;
        fVar16 = DAT_1468b5d94;
        if (1e-08 <= fVar12) {
          auVar18 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
          fVar15 = auVar18._0_4_;
          fVar15 = fVar15 + fVar15 * (0.5 - fVar12 * 0.5 * fVar15 * fVar15);
          fVar15 = fVar15 + fVar15 * (0.5 - fVar12 * 0.5 * fVar15 * fVar15);
          local_1a0 = local_1a0 * fVar15;
          local_19c = local_19c * fVar15;
          goto LAB_142cd6f54;
        }
      }
      local_2a0 = local_1bc + local_198;
      local_2a8 = CONCAT44(local_1c0 + fVar16,local_1c4 + fVar15);
    }
    fVar19 = (float)local_2a8;
    fVar20 = (float)((ulonglong)local_2a8 >> 0x20);
    local_298 = local_2a8;
    local_290 = local_2a0;
    fVar15 = fVar19;
    fVar12 = fVar20;
  }
  else {
    if ((cVar6 == '\0') || (local_198 < *(float *)(*param_1 + 0x244))) goto LAB_142cd72ba;
    local_290 = local_1bc - 1.0;
    fVar12 = (float)uVar5;
  }
  if (((ABS(fVar19 - *pfVar1) <= 0.0001) && (ABS(fVar20 - *(float *)(param_1 + 0x14)) <= 0.0001)) &&
     (ABS(local_290 - *(float *)((longlong)param_1 + 0xa4)) <= 0.0001)) goto LAB_142cd72ba;
  *(ulonglong *)pfVar1 = CONCAT44(fVar12,fVar15);
  *(float *)((longlong)param_1 + 0xa4) = local_290;
  if ((*(uint *)((longlong)param_1 + 0x15c) & 0x200) == 0) {
    lVar3 = plVar2[0x2d];
    if (lVar3 == 0) {
      uVar13 = (undefined4)DAT_1468b5da0;
      uVar14 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_2a0 = (float)DAT_1468b5da8;
    }
    else {
      local_208 = *(float *)(lVar3 + 0x210);
      fStack_204 = *(float *)(lVar3 + 0x214);
      fStack_200 = *(float *)(lVar3 + 0x218);
      fStack_1fc = *(float *)(lVar3 + 0x21c);
      auVar18._4_4_ = -(uint)(*(float *)(lVar3 + 0x254) != fStack_204);
      auVar18._0_4_ = -(uint)(*(float *)(lVar3 + 0x250) != local_208);
      auVar18._8_4_ = -(uint)(*(float *)(lVar3 + 600) != fStack_200);
      auVar18._12_4_ = -(uint)(*(float *)(lVar3 + 0x25c) != fStack_1fc);
      iVar7 = movmskps(local_290,auVar18);
      if (iVar7 != 0) {
        *(float *)(lVar3 + 0x250) = local_208;
        *(float *)(lVar3 + 0x254) = fStack_204;
        *(float *)(lVar3 + 600) = fStack_200;
        *(float *)(lVar3 + 0x25c) = fStack_1fc;
        puVar8 = (undefined8 *)FQuat::Rotator(&local_208,local_1e8);
        *(undefined8 *)(lVar3 + 0x260) = *puVar8;
        *(undefined4 *)(lVar3 + 0x268) = *(undefined4 *)(puVar8 + 1);
      }
      uVar13 = (undefined4)*(undefined8 *)(lVar3 + 0x260);
      uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x260) >> 0x20);
      local_2a0 = (float)*(undefined4 *)(lVar3 + 0x268);
    }
    local_2a8 = CONCAT44(uVar14,uVar13);
    local_298 = local_2a8;
    local_290 = local_2a0;
    FRotator::Vector(&local_298,&local_250);
    lVar3 = plVar2[0x2d];
    if (lVar3 == 0) {
      local_2a8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_2a0 = DAT_1468b5d98;
    }
    else {
      local_2a8 = *(undefined8 *)(lVar3 + 0x220);
      local_2a0 = *(float *)(lVar3 + 0x228);
    }
    fVar12 = *pfVar1 - (float)local_2a8;
    local_290 = *(float *)((longlong)param_1 + 0xa4) - local_2a0;
    fVar15 = *(float *)(param_1 + 0x14) - (float)((ulonglong)local_2a8 >> 0x20);
    if (*(char *)(param_1[1] + 0x68) == '\0') {
      local_290 = 0.0;
    }
    fVar16 = fVar15 * fVar15 + fVar12 * fVar12 + local_290 * local_290;
    if (fVar16 == 1.0) {
LAB_142cd728d:
      local_298 = CONCAT44(fVar15,fVar12);
    }
    else {
      if (1e-08 <= fVar16) {
        auVar18 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
        fVar19 = auVar18._0_4_;
        fVar19 = fVar19 + fVar19 * (0.5 - fVar16 * 0.5 * fVar19 * fVar19);
        fVar19 = fVar19 + fVar19 * (0.5 - fVar16 * 0.5 * fVar19 * fVar19);
        fVar12 = fVar12 * fVar19;
        fVar15 = fVar15 * fVar19;
        local_290 = fVar19 * local_290;
        goto LAB_142cd728d;
      }
      local_290 = DAT_1468b5d98;
      local_298 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    *(undefined8 *)((longlong)param_1 + 0xb4) = local_298;
    *(float *)((longlong)param_1 + 0xbc) = local_290;
  }
  else {
    FUN_1424b51e0(&local_208);
    fVar12 = *(float *)((longlong)param_1 + 0x54) * 0.011111111;
    local_2d0 = 0.0;
    if ((0.0 <= fVar12) && (local_2d0 = fVar12, 1.0 <= fVar12)) {
      local_2d0 = 1.0;
    }
    local_2d8 = (undefined4 *)CONCAT44(local_2d8._4_4_,*(undefined4 *)((longlong)param_1 + 0x1c));
    FUN_1424d11a0(&local_208,(longlong)param_1 + 0xcc,pfVar1,(int)param_1[0xb]);
    puVar10 = (undefined4 *)FUN_1424beb60(&local_208,&local_250,(longlong)param_1 + 0xcc,pfVar1);
    uVar13 = puVar10[1];
    uVar14 = puVar10[2];
    uVar4 = puVar10[3];
    *(undefined4 *)(param_1 + 0xd) = *puVar10;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar13;
    *(undefined4 *)(param_1 + 0xe) = uVar14;
    *(undefined4 *)((longlong)param_1 + 0x74) = uVar4;
    uVar13 = puVar10[5];
    uVar14 = puVar10[6];
    uVar4 = puVar10[7];
    *(undefined4 *)(param_1 + 0xf) = puVar10[4];
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar13;
    *(undefined4 *)(param_1 + 0x10) = uVar14;
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_1 + 0x84);
  }
  FUN_142cc85a0(param_1);
LAB_142cd72ba:
  if (local_e0 != 0) {
    FMemory::Free();
  }
  if (local_100 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142cd7390 FUN_142cd7390 body=132 status=ok
// SIG undefined FUN_142cd7390(void)

ulonglong FUN_142cd7390(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong local_res10;
  
  local_res10 = 0;
  if (param_2 != 0) {
    in_RAX = FUN_142ccd9e0();
    if ((char)in_RAX != '\0') {
      lVar1 = FUN_142cc1e20(param_2,*(undefined1 *)((longlong)param_1 + 9),&local_res10);
      in_RAX = 0;
      if (lVar1 != 0) {
        *(undefined8 *)(param_3 + 0x10) = *param_1;
        *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(local_res10 + 0x10);
        *(undefined1 *)(param_3 + 0x20) = *(undefined1 *)((longlong)param_1 + 9);
        return 1;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142cd7420 FUN_142cd7420 body=234 status=ok
// SIG undefined FUN_142cd7420(void)

undefined8 * FUN_142cd7420(float *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == -1) {
    *param_2 = 0;
    param_2[1] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"No value resolved",0x24);
    return param_2;
  }
  if (cVar1 == '\0') {
    FString::PrintfImpl(param_2,&DAT_14584c904,(double)*param_1);
    return param_2;
  }
  if (cVar1 == '\x01') {
    FUN_142c4b1d0();
    return param_2;
  }
  if (cVar1 == '\x02') {
    FString::PrintfImpl(param_2,L"(Value=%g, BaseValue=%g)",(double)*param_1,(double)param_1[1]);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"No string representation of value",0x44);
  return param_2;
}



// FUNCTION 142cd7510 FUN_142cd7510 body=1567 status=ok
// SIG undefined FUN_142cd7510(void)

void FUN_142cd7510(longlong *param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8 [2];
  undefined4 local_res18 [4];
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined1 local_c8 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_98 [112];
  
  lVar10 = *param_1;
  lVar3 = *(longlong *)(lVar10 + 0xfd8);
  uVar2 = *(uint *)((longlong)param_1 + 0x15c);
  lVar12 = param_1[1];
  if ((0.0 < *(float *)(lVar12 + 0x894)) &&
     (plVar4 = (longlong *)param_1[0x11], plVar4 != (longlong *)0x0)) {
    lVar10 = plVar4[0x2d];
    if (lVar10 == 0) {
      local_d0 = DAT_1468b5d98;
      puVar11 = &local_d8;
      local_d8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      puVar11 = &local_e8;
      local_e0 = (float)*(undefined4 *)(lVar10 + 0x228);
      local_e8 = *(undefined8 *)(lVar10 + 0x220);
    }
    local_f8 = *puVar11;
    fVar13 = (float)local_f8;
    fVar15 = (float)((ulonglong)local_f8 >> 0x20);
    fVar19 = *(float *)(puVar11 + 1);
    fVar18 = *(float *)(lVar12 + 0x7a8);
    local_f0 = fVar19;
    if ((*(uint *)(lVar12 + 0x28) & 0x200000) != 0) {
      local_res8[0] = 0.0;
      local_res18[0] = 0;
      (**(code **)(*plVar4 + 0x570))(plVar4,local_res8,local_res18,0);
      lVar12 = param_1[1];
      fVar18 = fVar18 - local_res8[0];
    }
    if ((*(uint *)(lVar12 + 0x28) & 0x400000) != 0) {
      local_res8[0] = 0.0;
      local_res18[0] = 0;
      (**(code **)(*(longlong *)param_1[0x11] + 0x570))
                ((longlong *)param_1[0x11],local_res8,local_res18,0);
      fVar18 = fVar18 - local_res8[0];
    }
    fVar14 = (float)local_f8;
    fVar16 = local_f8._4_4_;
    if (fVar18 != 0.0) {
      fVar15 = local_f8._4_4_ + fVar18 * *(float *)(param_1 + 0x17);
      fVar14 = (float)local_f8 + fVar18 * *(float *)((longlong)param_1 + 0xb4);
      fVar19 = local_f0 + fVar18 * *(float *)((longlong)param_1 + 0xbc);
      local_f8 = CONCAT44(fVar15,fVar14);
      fVar13 = fVar14;
      fVar16 = fVar15;
      local_f0 = fVar19;
    }
    pfVar1 = (float *)((longlong)param_1 + 0x9c);
    fVar16 = fVar16 - *(float *)(param_1 + 0x14);
    fVar20 = local_f0 - *(float *)((longlong)param_1 + 0xa4);
    fVar14 = fVar14 - *pfVar1;
    fVar18 = SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar20 * fVar20);
    if (10.0 < fVar18) {
      param_2 = param_2 * *(float *)(param_1[1] + 0x894);
      if (fVar18 <= param_2) {
        *(ulonglong *)pfVar1 = CONCAT44(fVar15,fVar13);
        *(float *)((longlong)param_1 + 0xa4) = fVar19;
      }
      else if (0.0 < param_2) {
        fVar18 = 1.0 / fVar18;
        *pfVar1 = fVar18 * fVar14 * param_2 + *pfVar1;
        *(float *)(param_1 + 0x14) = fVar18 * fVar16 * param_2 + *(float *)(param_1 + 0x14);
        *(float *)((longlong)param_1 + 0xa4) =
             fVar18 * fVar20 * param_2 + *(float *)((longlong)param_1 + 0xa4);
      }
      if ((*(uint *)((longlong)param_1 + 0x15c) & 0x200) != 0) {
        FUN_1424b51e0(&local_b8);
        fVar18 = *(float *)((longlong)param_1 + 0x54) * 0.011111111;
        if (0.0 <= fVar18) {
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
        }
        else {
          fVar18 = 0.0;
        }
        FUN_1424d11a0(&local_b8,(longlong)param_1 + 0xcc,pfVar1,(int)param_1[0xb],
                      *(undefined4 *)((longlong)param_1 + 0x1c),fVar18);
        puVar9 = (undefined4 *)FUN_1424beb60(&local_b8,local_98,(longlong)param_1 + 0xcc,pfVar1);
        uVar5 = puVar9[1];
        uVar6 = puVar9[2];
        uVar7 = puVar9[3];
        *(undefined4 *)(param_1 + 0xd) = *puVar9;
        *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
        *(undefined4 *)(param_1 + 0xe) = uVar6;
        *(undefined4 *)((longlong)param_1 + 0x74) = uVar7;
        uVar5 = puVar9[5];
        uVar6 = puVar9[6];
        uVar7 = puVar9[7];
        *(undefined4 *)(param_1 + 0xf) = puVar9[4];
        *(undefined4 *)((longlong)param_1 + 0x7c) = uVar5;
        *(undefined4 *)(param_1 + 0x10) = uVar6;
        *(undefined4 *)((longlong)param_1 + 0x84) = uVar7;
        *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_1 + 0x84);
      }
    }
    lVar10 = FUN_142cc85a0(param_1);
  }
  if (((~(byte)(uVar2 >> 9) & 1) != 0) &&
     (((*(float *)((longlong)param_1 + 0x9c) != 0.0 || (*(float *)(param_1 + 0x14) != 0.0)) ||
      (*(float *)((longlong)param_1 + 0xa4) != 0.0)))) {
    lVar12 = *(longlong *)(lVar3 + 0x168);
    if (lVar12 == 0) {
      local_d0 = DAT_1468b5da8;
      puVar11 = &local_d8;
      local_d8 = DAT_1468b5da0;
    }
    else {
      local_b8 = *(float *)(lVar12 + 0x210);
      fStack_b4 = *(float *)(lVar12 + 0x214);
      fStack_b0 = *(float *)(lVar12 + 0x218);
      fStack_ac = *(float *)(lVar12 + 0x21c);
      auVar17._4_4_ = -(uint)(*(float *)(lVar12 + 0x254) != fStack_b4);
      auVar17._0_4_ = -(uint)(*(float *)(lVar12 + 0x250) != local_b8);
      auVar17._8_4_ = -(uint)(*(float *)(lVar12 + 600) != fStack_b0);
      auVar17._12_4_ = -(uint)(*(float *)(lVar12 + 0x25c) != fStack_ac);
      iVar8 = movmskps((int)lVar10,auVar17);
      if (iVar8 != 0) {
        *(float *)(lVar12 + 0x250) = local_b8;
        *(float *)(lVar12 + 0x254) = fStack_b4;
        *(float *)(lVar12 + 600) = fStack_b0;
        *(float *)(lVar12 + 0x25c) = fStack_ac;
        puVar11 = (undefined8 *)FQuat::Rotator(&local_b8,local_c8);
        *(undefined8 *)(lVar12 + 0x260) = *puVar11;
        *(undefined4 *)(lVar12 + 0x268) = *(undefined4 *)(puVar11 + 1);
      }
      local_e0 = (float)*(undefined4 *)(lVar12 + 0x268);
      puVar11 = &local_e8;
      local_e8 = *(undefined8 *)(lVar12 + 0x260);
    }
    local_f8 = *puVar11;
    local_f0 = *(float *)(puVar11 + 1);
    FRotator::Vector(&local_f8,&local_d8);
    lVar10 = *(longlong *)(lVar3 + 0x168);
    if (lVar10 == 0) {
      local_e8._0_4_ = DAT_1468b5d90;
      local_e8._4_4_ = DAT_1468b5d94;
      local_e0 = DAT_1468b5d98;
    }
    else {
      local_e8._0_4_ = *(float *)(lVar10 + 0x220);
      local_e8._4_4_ = *(float *)(lVar10 + 0x224);
      local_e0 = *(float *)(lVar10 + 0x228);
    }
    fVar18 = *(float *)((longlong)param_1 + 0x9c) - (float)local_e8;
    local_f0 = *(float *)((longlong)param_1 + 0xa4) - local_e0;
    fVar19 = *(float *)(param_1 + 0x14) - local_e8._4_4_;
    if (*(char *)(param_1[1] + 0x68) == '\0') {
      local_f0 = 0.0;
    }
    fVar13 = fVar19 * fVar19 + fVar18 * fVar18 + local_f0 * local_f0;
    if (fVar13 != 1.0) {
      if (1e-08 <= fVar13) {
        auVar17 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar15 = auVar17._0_4_;
        fVar15 = fVar15 + fVar15 * (0.5 - fVar13 * 0.5 * fVar15 * fVar15);
        fVar15 = fVar15 + fVar15 * (0.5 - fVar13 * 0.5 * fVar15 * fVar15);
        fVar18 = fVar18 * fVar15;
        fVar19 = fVar19 * fVar15;
        local_f0 = fVar15 * local_f0;
      }
      else {
        local_f0 = DAT_1468b5d98;
        fVar18 = DAT_1468b5d90;
        fVar19 = DAT_1468b5d94;
      }
    }
    fVar13 = *(float *)(param_1[1] + 0x890);
    local_f8 = CONCAT44(fVar19,fVar18);
    fVar15 = 0.0;
    if ((0.0 <= fVar13) && (fVar15 = fVar13, 360.0 <= fVar13)) {
      fVar15 = 360.0;
    }
    fVar19 = local_d8._4_4_ * fVar19;
    fVar18 = (float)local_d8 * fVar18;
    fVar16 = local_d0 * local_f0;
    fVar13 = _guard_xfg_dispatch_icall_nop(fVar15 * 0.008726646);
    if (fVar13 <= fVar19 + fVar18 + fVar16) {
      *(undefined8 *)((longlong)param_1 + 0xb4) = local_f8;
      *(float *)((longlong)param_1 + 0xbc) = local_f0;
    }
  }
  return;
}



// FUNCTION 142cd7b30 FUN_142cd7b30 body=571 status=ok
// SIG undefined FUN_142cd7b30(void)

longlong * FUN_142cd7b30(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong in_stack_fffffffffffffe50;
  uint uVar7;
  longlong local_188;
  int local_180;
  undefined4 local_17c;
  undefined **local_178 [18];
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined **local_c8 [19];
  undefined1 local_30;
  
  if ((((param_1[0xd] != 0) && (param_1[0xe] != 0)) &&
      (iVar2 = (**(code **)(*(longlong *)param_1[0xe] + 0x10))(), iVar2 == 3)) &&
     (((iVar2 = (int)param_1[0x11], 0 < iVar2 && (iVar2 == *(int *)((longlong)param_1 + 0x94))) &&
      ((*(byte *)(param_1 + 0xf) & 4) != 0)))) {
    local_180 = (int)param_1[0x12];
    plVar5 = (longlong *)0x0;
    local_17c = 0;
    local_188 = 0;
    iVar6 = local_180;
    if (0 < local_180) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_188);
      iVar2 = (int)param_1[0x11];
      iVar6 = (int)param_1[0x12];
    }
    uVar7 = 0;
    cVar1 = FUN_14165b8a0(1,local_188,iVar6,param_1[0x10],iVar2,
                          in_stack_fffffffffffffe50 & 0xffffffffffffff00,0xf);
    if (cVar1 != '\0') {
      FArchive::FArchive(local_178);
      local_e8 = 0;
      local_178[0] = &PTR_FUN_143f4a3a0;
      local_e0 = &local_188;
      local_d8 = 0x7fffffffffffffff;
      FArchive::SetIsLoading(local_178,1);
      FArchive::SetIsPersistent(local_178,1);
      uVar3 = (**(code **)(*param_1 + 0x310))(param_1);
      uVar4 = GetTransientPackage();
      FUN_1417846f0(uVar4,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      plVar5 = (longlong *)FUN_1417985e0(uVar3,uVar4,0,0,0,0,uVar7 & 0xffffff00,0,0);
      FArchiveProxy::FArchiveProxy(local_c8,local_178);
      local_30 = 1;
      local_c8[0] = &PTR_FUN_143f4a5b0;
      (**(code **)(*plVar5 + 0xa8))(plVar5,local_c8);
      *(undefined4 *)(param_1 + 0x11) = 0;
      if (*(int *)((longlong)param_1 + 0x8c) != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
      }
      FArchive::~FArchive(local_c8);
      FArchive::~FArchive(local_178);
    }
    if (local_188 != 0) {
      FMemory::Free();
    }
    return plVar5;
  }
  return (longlong *)0x0;
}



// FUNCTION 142cd7d70 FUN_142cd7d70 body=1401 status=ok
// SIG undefined FUN_142cd7d70(void)

ulonglong FUN_142cd7d70(longlong *param_1,undefined4 param_2,float param_3,float *param_4,
                       float *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 *local_148 [2];
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined4 local_108;
  undefined1 local_f8 [12];
  undefined4 local_ec;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  
  plVar1 = *(longlong **)(*param_1 + 0xfd8);
  uVar6 = (**(code **)(*plVar1 + 0x148))(plVar1);
  local_198 = *(undefined8 *)param_4;
  local_190 = param_4[2];
  fVar12 = *param_5 - (float)local_198;
  fVar13 = param_5[1] - (float)((ulonglong)local_198 >> 0x20);
  local_1a0 = param_5[2] - local_190;
  fVar9 = fVar13 * fVar13 + fVar12 * fVar12;
  if (fVar9 == 1.0) {
    local_1a8 = CONCAT44(fVar13,fVar12);
    if (local_1a0 != 0.0) {
LAB_142cd7eef:
      local_1a0 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar9) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar11._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      local_1a8 = CONCAT44(fVar13 * fVar10,fVar12 * fVar10);
      goto LAB_142cd7eef;
    }
    local_1a0 = DAT_1468b5d98;
    local_1a8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  FVector::Rotation(&local_1a8,&local_178);
  local_1a8 = local_178;
  local_1a0 = local_170;
  cVar4 = FUN_142546cc0(uVar6,plVar1,&local_198,&local_1a8);
  if (cVar4 == '\0') {
    fVar9 = param_3 * 0.5;
    local_190 = fVar9 + param_4[2];
    fVar13 = param_5[1] - (fVar9 + param_4[1]);
    fVar12 = *param_5 - (fVar9 + *param_4);
    local_198 = CONCAT44(fVar9 + param_4[1],fVar9 + *param_4);
    local_1a0 = param_5[2] - local_190;
    fVar9 = fVar13 * fVar13 + fVar12 * fVar12;
    if (fVar9 == 1.0) {
      local_1a8 = CONCAT44(fVar13,fVar12);
      if (local_1a0 != 0.0) {
LAB_142cd8064:
        local_1a0 = 0.0;
      }
    }
    else {
      if (1e-08 <= fVar9) {
        auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar10 = auVar11._0_4_;
        fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
        fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
        local_1a8 = CONCAT44(fVar10 * fVar13,fVar10 * fVar12);
        goto LAB_142cd8064;
      }
      local_1a0 = DAT_1468b5d98;
      local_1a8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    puVar7 = (undefined8 *)FVector::Rotation(&local_1a8,&local_168);
    local_178 = *puVar7;
    local_170 = *(float *)(puVar7 + 1);
    local_188 = *puVar7;
    local_180 = *(float *)(puVar7 + 1);
    uVar8 = FUN_142546cc0(uVar6,plVar1,&local_198,&local_188);
    if ((char)uVar8 != '\0') goto LAB_142cd80b7;
LAB_142cd8170:
    uVar8 = uVar8 & 0xffffffffffffff00;
  }
  else {
LAB_142cd80b7:
    _guard_xfg_dispatch_icall_nop(local_f8,0,0x90);
    uStack_160 = (undefined8 *)CONCAT44(uStack_160._4_4_,param_3);
    local_1a0 = local_190 - param_3 * 1.5;
    local_1a8 = local_198;
    local_ec = 0x3f800000;
    local_168 = (longlong *)CONCAT44(param_2,3);
    uVar8 = UWorld::SweepSingleByChannel
                      (uVar6,local_f8,&local_198,&local_1a8,&DAT_1464aa810,0,&local_168,
                       &DAT_146aefe90,&DAT_146aefe68);
    plVar2 = (longlong *)param_1[1];
    if ((char)uVar8 == '\0') {
      if ((*(uint *)(plVar2 + 5) & 0x10000000) != 0) goto LAB_142cd8170;
    }
    else {
      local_190 = local_dc;
      local_198 = CONCAT44(local_e0,local_e4);
    }
    (**(code **)(*plVar2 + 0x2c0))(plVar2,plVar1,&local_198);
    lVar3 = plVar1[0x2d];
    if (lVar3 == 0) {
      local_180 = DAT_1468b5d98;
      puVar7 = &local_188;
      local_188 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      puVar7 = &local_1a8;
      local_1a0 = (float)*(undefined4 *)(lVar3 + 0x228);
      local_1a8 = *(undefined8 *)(lVar3 + 0x220);
    }
    local_158 = *puVar7;
    local_150 = *(undefined4 *)(puVar7 + 1);
    local_188 = local_178;
    local_180 = local_170;
    local_1a8 = local_198;
    local_1a0 = local_190;
    bVar5 = FUN_14223ca30(plVar1,&local_1a8,&local_188,0,0,1);
    if (bVar5 != 0) {
      uStack_160 = &local_158;
      local_118 = 0;
      local_108 = 0;
      local_168 = param_1;
      puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_138);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar7 + 1) = (undefined4)local_168;
        *(undefined4 *)((longlong)puVar7 + 0xc) = local_168._4_4_;
        *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_160;
        *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_160._4_4_;
      }
      local_148[0] = &LAB_142cbb5d0;
      uVar6 = FUN_14247f500();
      FUN_14247d5a0(uVar6,*param_1,local_148);
    }
    uVar8 = (ulonglong)bVar5;
  }
  return uVar8;
}



// FUNCTION 142cd82f0 thunk_FUN_14231ffd0 body=5 status=ok
// SIG undefined thunk_FUN_14231ffd0(void)

void thunk_FUN_14231ffd0(longlong param_1)

{
  uint *puVar1;
  
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x4c8) + 0x4b4);
    *puVar1 = *puVar1 & 0xfffff7ff;
  }
  return;
}



// FUNCTION 142cd8300 BeginDestroy body=35 status=ok
// SIG undefined BeginDestroy(void)

void UPawnAction_Move::BeginDestroy(undefined8 param_1)

{
  FUN_14231fff0();
  FUN_142cd8330(param_1);
  FUN_142cc6870(param_1);
  return;
}



// FUNCTION 142cd8330 FUN_142cd8330 body=101 status=ok
// SIG undefined FUN_142cd8330(void)

void FUN_142cd8330(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int local_res8 [8];
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_14622c9a0,local_res8,uVar3);
  if (((local_res8[0] != -1) && (lVar1 = DAT_14622c9a0 + (longlong)local_res8[0] * 0x18, lVar1 != 0)
      ) && (plVar2 = *(longlong **)(lVar1 + 8), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142cd8388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x290))(plVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 142cd83a0 FUN_142cd83a0 body=51 status=ok
// SIG undefined FUN_142cd83a0(void)

void FUN_142cd83a0(longlong param_1)

{
  FUN_142cae7e0();
  *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(*(longlong *)(param_1 + 0x6c8) + 0x5c4);
  *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(*(longlong *)(param_1 + 0x6c8) + 0x5c8);
  return;
}



// FUNCTION 142cd83e0 FUN_142cd83e0 body=643 status=ok
// SIG undefined FUN_142cd83e0(void)

void FUN_142cd83e0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  
  lVar1 = param_1[0x118];
  lVar4 = param_1[0xa7];
  lVar3 = *(longlong *)(lVar4 + 0xd68);
  if ((char)param_1[0xa6] == '\0') {
    if (((lVar3 == 0) && (lVar3 = *(longlong *)(lVar4 + 0xd58), lVar3 == 0)) &&
       (lVar3 = *(longlong *)(lVar4 + 0xd40), lVar3 == 0)) {
      lVar3 = *(longlong *)(lVar4 + 0xd60);
    }
  }
  else if ((lVar3 == 0) && (lVar3 = *(longlong *)(lVar4 + 0xd58), lVar3 == 0)) {
    lVar4 = param_1[4];
    if (lVar4 != 0) {
      lVar3 = FUN_142a07000();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_1423b2d70(param_1[4],1);
      }
    }
    lVar4 = param_1[0x72];
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*param_1 + 0x308))(param_1);
      param_1[0x72] = lVar4;
    }
    lVar3 = *(longlong *)(lVar4 + 0x6a8);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1[0xa7] + 0xd60);
    }
  }
  param_1[0x118] = lVar3;
  if (lVar1 == lVar3) {
    if (*(float *)((longlong)param_1 + 0x934) < 1.0) {
      uVar6 = FMath::FInterpConstantTo
                        (*(float *)((longlong)param_1 + 0x934),0x3f800000,param_2,
                         (int)param_1[0x128]);
      *(undefined4 *)((longlong)param_1 + 0x934) = uVar6;
    }
  }
  else {
    param_1[0x119] = lVar1;
    *(undefined4 *)((longlong)param_1 + 0x934) = 0;
    if ((lVar3 == 0) || (*(char *)(lVar3 + 0x70) == '\0')) {
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x70) == '\0')) {
        uVar6 = *(undefined4 *)((longlong)param_1 + 0x944);
      }
      else {
        uVar6 = *(undefined4 *)(lVar1 + 0x6c);
      }
    }
    else {
      uVar6 = *(undefined4 *)(lVar3 + 0x6c);
    }
    *(undefined4 *)(param_1 + 0x128) = uVar6;
    if ((lVar3 == 0) || (*(char *)(lVar3 + 0x68) == '\0')) {
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x68) == '\0')) {
        uVar6 = (undefined4)param_1[0x129];
      }
      else {
        uVar6 = *(undefined4 *)(lVar1 + 100);
      }
    }
    else {
      uVar6 = *(undefined4 *)(lVar3 + 100);
    }
    *(undefined4 *)((longlong)param_1 + 0x93c) = uVar6;
    if (((lVar3 == 0) || (cVar5 = *(char *)(lVar3 + 0x60), cVar5 == '\0')) &&
       ((lVar1 == 0 || (cVar5 = *(char *)(lVar1 + 0x61), cVar5 == '\0')))) {
      cVar5 = '\x02';
    }
    *(char *)(param_1 + 0x127) = cVar5;
  }
  switch((char)param_1[0x127]) {
  case '\x02':
    uVar6 = 0x3f800000;
    goto LAB_142cd8602;
  case '\x03':
    uVar6 = 0;
LAB_142cd8602:
    uVar6 = FMath::FInterpConstantTo
                      ((int)param_1[0x126],uVar6,param_2,*(undefined4 *)((longlong)param_1 + 0x93c))
    ;
    *(undefined4 *)(param_1 + 0x126) = uVar6;
    break;
  case '\x04':
    *(undefined4 *)(param_1 + 0x126) = 0;
    *(undefined1 *)(param_1 + 0x127) = 2;
    break;
  case '\x05':
    *(undefined1 *)(param_1 + 0x127) = 3;
    goto LAB_142cd863f;
  case '\x06':
    *(undefined1 *)(param_1 + 0x127) = 1;
LAB_142cd863f:
    *(undefined4 *)(param_1 + 0x126) = 0x3f800000;
    break;
  case '\a':
    *(undefined4 *)(param_1 + 0x126) = 0;
    *(undefined1 *)(param_1 + 0x127) = 1;
  }
  return;
}


