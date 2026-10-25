// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1422f9890 FUN_1422f9890 body=7 status=ok
// SIG undefined FUN_1422f9890(void)

void FUN_1422f9890(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf0) = param_2;
  return;
}



// FUNCTION 1422f98a0 FUN_1422f98a0 body=398 status=ok
// SIG undefined FUN_1422f98a0(void)

void FUN_1422f98a0(undefined8 param_1,longlong param_2,uint param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_4 != '\0') {
switchD_1422f9937_caseD_0:
    uVar2 = FUN_1404a0ce0();
    *(undefined8 *)(param_2 + 0x30) = uVar2;
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aef9a8) && (_Init_thread_header(&DAT_146aef9a8), DAT_146aef9a8 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.UI.CompositeMode");
    lVar4 = 0;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146aef9a0 = lVar4;
    _Init_thread_footer(&DAT_146aef9a8);
  }
  if (((((DAT_146ab632a != '\0') && (DAT_146aef9a0 != 0)) && (*(int *)(DAT_146aef9a0 + 4) != 0)) &&
      (((cVar1 = FUN_141ee41d0(), cVar1 != '\0' && (param_3 < 0xc)) &&
       ((0x984U >> (param_3 & 0x1f) & 1) != 0)))) || (param_3 < 0xe)) {
    switch(param_3) {
    case 0:
    case 1:
    case 5:
    case 6:
      goto switchD_1422f9937_caseD_0;
    case 2:
    case 7:
    case 8:
    case 0xb:
      uVar2 = FUN_141b33040();
      *(undefined8 *)(param_2 + 0x30) = uVar2;
      return;
    case 3:
      uVar2 = FUN_141b9d480();
      *(undefined8 *)(param_2 + 0x30) = uVar2;
      return;
    case 4:
      uVar2 = FUN_141abdd70();
      *(undefined8 *)(param_2 + 0x30) = uVar2;
      return;
    case 9:
      uVar2 = FUN_1420b6160();
      *(undefined8 *)(param_2 + 0x30) = uVar2;
      return;
    default:
      uVar2 = FUN_1420b62a0();
      *(undefined8 *)(param_2 + 0x30) = uVar2;
      break;
    case 0xd:
      uVar2 = FUN_1422f2710();
      *(undefined8 *)(param_2 + 0x30) = uVar2;
      return;
    }
  }
  return;
}



// FUNCTION 1422f9a70 SetCurrentTime body=22 status=ok
// SIG undefined SetCurrentTime(void)

void UCameraAnimInst::SetCurrentTime(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x38) / *(float *)(param_1 + 0x50);
  AdvanceAnim(fVar1,param_2 - fVar1,1);
  return;
}



// FUNCTION 1422f9a90 SetDuration body=61 status=ok
// SIG undefined SetDuration(void)

void UCameraAnimInst::SetDuration(longlong param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(uint *)(param_1 + 0x3c) = uVar1 & 0xffffffef | 8;
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x40);
    }
    if (0.0 < param_2) {
      *(float *)(param_1 + 0x60) = param_2 - *(float *)(param_1 + 0x44);
      return;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1422f9ad0 FUN_1422f9ad0 body=52 status=ok
// SIG undefined FUN_1422f9ad0(void)

void FUN_1422f9ad0(longlong *param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 uStackX_8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_b8;
  undefined1 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined1 *apuStack_58 [2];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  undefined4 uStack_18;
  
  if ((param_2 & 0xff) == (*(uint *)((longlong)param_1 + 0x494) & 1)) {
    return;
  }
  *(uint *)((longlong)param_1 + 0x494) =
       *(uint *)((longlong)param_1 + 0x494) & 0xfffffffe | param_2 & 0xff;
  if ((param_2 & 1) == 0) {
    FUN_1422f7ea0();
    return;
  }
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = UWorld::GetAudioDevice(uVar1);
  if (lVar2 != 0) {
    FUN_1422e0480(&uStack_c8,param_1);
    uVar4 = (uint)uStack_b0;
    uStack_28 = 0;
    uStack_18 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x70,auStack_48);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1450377e0;
      puVar3[1] = lVar2;
      *(undefined4 *)(puVar3 + 3) = uStack_c0;
      *(undefined4 *)(puVar3 + 2) = uStack_c8;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_c4;
      *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) & 0xfffffffe;
      *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) | ((uVar4 ^ uStack_b8) & 1 ^ uVar4) & 1;
      *(undefined1 *)((longlong)puVar3 + 0x24) = uStack_b4;
      puVar3[5] = uStack_b0;
      puVar3[6] = uStack_a8;
      *(undefined4 *)(puVar3 + 7) = uStack_a0;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_9c;
      *(undefined4 *)(puVar3 + 8) = uStack_98;
      *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_94;
      *(undefined4 *)(puVar3 + 9) = uStack_90;
      *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_8c;
      puVar3[10] = uStack_88;
      puVar3[0xb] = uStack_80;
      *(undefined4 *)(puVar3 + 0xc) = uStack_78;
      puVar3[0xd] = uStack_70;
    }
    apuStack_58[0] = &LAB_1422e7400;
    FUN_1422f8a30(apuStack_58,uStackX_8);
  }
  return;
}



// FUNCTION 1422f9b10 FUN_1422f9b10 body=168 status=ok
// SIG undefined FUN_1422f9b10(void)

void FUN_1422f9b10(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 uStackX_8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_b8;
  undefined1 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined1 *apuStack_58 [2];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  undefined4 uStack_18;
  
  if ((((((((*(uint *)(param_1 + 0x97) ^ *param_2) & 1) != 0) ||
         ((float)param_2[1] != *(float *)((longlong)param_1 + 0x4bc))) ||
        ((float)param_2[2] != *(float *)(param_1 + 0x98))) ||
       (((float)param_2[3] != *(float *)((longlong)param_1 + 0x4c4) ||
        ((float)param_2[4] != *(float *)(param_1 + 0x99))))) ||
      (((float)param_2[5] != *(float *)((longlong)param_1 + 0x4cc) ||
       (((float)param_2[6] != *(float *)(param_1 + 0x9a) ||
        ((float)param_2[7] != *(float *)((longlong)param_1 + 0x4d4))))))) ||
     ((float)param_2[8] != *(float *)(param_1 + 0x9b))) {
    uVar6 = param_2[1];
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    *(uint *)(param_1 + 0x97) = *param_2;
    *(uint *)((longlong)param_1 + 0x4bc) = uVar6;
    *(uint *)(param_1 + 0x98) = uVar1;
    *(uint *)((longlong)param_1 + 0x4c4) = uVar2;
    uVar6 = param_2[5];
    uVar1 = param_2[6];
    uVar2 = param_2[7];
    *(uint *)(param_1 + 0x99) = param_2[4];
    *(uint *)((longlong)param_1 + 0x4cc) = uVar6;
    *(uint *)(param_1 + 0x9a) = uVar1;
    *(uint *)((longlong)param_1 + 0x4d4) = uVar2;
    *(uint *)(param_1 + 0x9b) = param_2[8];
    if ((*(byte *)((longlong)param_1 + 0x494) & 1) != 0) {
      uVar3 = (**(code **)(*param_1 + 0x148))();
      lVar4 = UWorld::GetAudioDevice(uVar3);
      if (lVar4 != 0) {
        FUN_1422e0480(&uStack_c8,param_1);
        uVar6 = (uint)uStack_b0;
        uStack_28 = 0;
        uStack_18 = 0;
        puVar5 = (undefined8 *)FUN_140438ef0(0x70,auStack_48);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &PTR_FUN_1450377e0;
          puVar5[1] = lVar4;
          *(undefined4 *)(puVar5 + 3) = uStack_c0;
          *(undefined4 *)(puVar5 + 2) = uStack_c8;
          *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_c4;
          *(uint *)(puVar5 + 4) = *(uint *)(puVar5 + 4) & 0xfffffffe;
          *(uint *)(puVar5 + 4) = *(uint *)(puVar5 + 4) | ((uVar6 ^ uStack_b8) & 1 ^ uVar6) & 1;
          *(undefined1 *)((longlong)puVar5 + 0x24) = uStack_b4;
          puVar5[5] = uStack_b0;
          puVar5[6] = uStack_a8;
          *(undefined4 *)(puVar5 + 7) = uStack_a0;
          *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_9c;
          *(undefined4 *)(puVar5 + 8) = uStack_98;
          *(undefined4 *)((longlong)puVar5 + 0x44) = uStack_94;
          *(undefined4 *)(puVar5 + 9) = uStack_90;
          *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_8c;
          puVar5[10] = uStack_88;
          puVar5[0xb] = uStack_80;
          *(undefined4 *)(puVar5 + 0xc) = uStack_78;
          puVar5[0xd] = uStack_70;
        }
        apuStack_58[0] = &LAB_1422e73f0;
        FUN_1422f8a30(apuStack_58,uStackX_8);
      }
      return;
    }
  }
  return;
}



// FUNCTION 1422f9bc0 SetMixSettings body=321 status=ok
// SIG undefined SetMixSettings(void)

void FAudioEffectsManager::SetMixSettings
               (longlong param_1,longlong param_2,char param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  double *pdVar3;
  
  if (((param_2 != 0) &&
      ((lVar1 = *(longlong *)(param_1 + 0x140), param_2 != lVar1 || (param_4 != '\0')))) &&
     ((lVar1 == 0 || ((param_3 != '\0' || (*(float *)(lVar1 + 0x2c) < *(float *)(param_2 + 0x2c)))))
     )) {
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x1b0);
    *(double *)(param_1 + 0x148) = DAT_1468b5a78;
    pdVar3 = (double *)(param_1 + 0x1b8);
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      *pdVar3 = 0.0;
      *(undefined8 *)(param_1 + 0x1c0) = 0x3f80000044160000;
      *(undefined8 *)(param_1 + 0x1c8) = 0x447a00003f800000;
      *(undefined8 *)(param_1 + 0x1d0) = 0x3f8000003f800000;
      *(undefined4 *)(param_1 + 0x1d8) = 0x44fa0000;
      *(undefined4 *)(param_1 + 0x1dc) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1e0) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1e4) = 0x461c4000;
      *(undefined4 *)(param_1 + 0x1e8) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1ec) = 0x3f800000;
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *pdVar3 = *(double *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x1c0) = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 0x1d0) = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0x1e0) = uVar2;
      *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x60);
    }
    *pdVar3 = (double)*(float *)(param_2 + 0x7c) + DAT_1468b5a78;
    FAudioEQEffect::ClampValues();
    *(undefined1 *)(param_1 + 499) = 1;
    *(longlong *)(param_1 + 0x140) = param_2;
  }
  return;
}



// FUNCTION 1422f9d10 SetPlaySpace body=165 status=ok
// SIG undefined SetPlaySpace(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UCameraAnimInst::SetPlaySpace(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_48 [64];
  
  *(char *)(param_1 + 0x78) = param_2;
  if (param_2 == '\x02') {
    puVar1 = (undefined8 *)FRotationMatrix::FRotationMatrix(local_48,param_3);
    local_88 = *puVar1;
    uStack_80 = puVar1[1];
    local_78 = puVar1[2];
    uStack_70 = puVar1[3];
    uVar2 = *(undefined4 *)(puVar1 + 4);
    uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
    uVar4 = *(undefined4 *)(puVar1 + 5);
    uVar5 = *(undefined4 *)((longlong)puVar1 + 0x2c);
    uVar6 = *(undefined4 *)(puVar1 + 6);
    uVar7 = *(undefined4 *)((longlong)puVar1 + 0x34);
    uVar8 = *(undefined4 *)(puVar1 + 7);
    uVar9 = *(undefined4 *)((longlong)puVar1 + 0x3c);
  }
  else {
    local_88 = _DAT_1464aa7d0;
    uStack_80 = _DAT_1464aa7d8;
    local_78 = _DAT_1464aa7e0;
    uStack_70 = _DAT_1464aa7e8;
    uVar2 = DAT_1464aa7f0;
    uVar3 = DAT_1464aa7f4;
    uVar4 = DAT_1464aa7f8;
    uVar5 = uRam00000001464aa7fc;
    uVar6 = _DAT_1464aa800;
    uVar7 = uRam00000001464aa804;
    uVar8 = uRam00000001464aa808;
    uVar9 = _DAT_1464aa80c;
  }
  *(undefined8 *)(param_1 + 0x80) = local_88;
  *(undefined8 *)(param_1 + 0x88) = uStack_80;
  *(undefined8 *)(param_1 + 0x90) = local_78;
  *(undefined8 *)(param_1 + 0x98) = uStack_70;
  *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uVar3,uVar2);
  *(ulonglong *)(param_1 + 0xa8) = CONCAT44(uVar5,uVar4);
  *(ulonglong *)(param_1 + 0xb0) = CONCAT44(uVar7,uVar6);
  *(ulonglong *)(param_1 + 0xb8) = CONCAT44(uVar9,uVar8);
  return;
}



// FUNCTION 1422f9dc0 FUN_1422f9dc0 body=163 status=ok
// SIG undefined FUN_1422f9dc0(void)

void FUN_1422f9dc0(longlong *param_1,float param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 *local_res8;
  undefined1 local_res10 [8];
  undefined1 **local_res18;
  
  if (param_2 != *(float *)(param_1 + 0x92)) {
    *(float *)(param_1 + 0x92) = param_2;
    local_res10[0] = 0;
    lVar2 = (**(code **)(*param_1 + 0x148))();
    puVar1 = (undefined8 *)(lVar2 + 0x730);
    local_res8 = local_res10;
    if (0 < *(int *)(lVar2 + 0x738) - *(int *)(lVar2 + 0x764)) {
      TSparseArray<TSetElement<UClass_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Compact(puVar1);
      local_res18 = &local_res8;
      FUN_1422deca0(*puVar1,(longlong)(*(int *)(lVar2 + 0x738) - *(int *)(lVar2 + 0x764)),
                    local_res10[0],&local_res18);
    }
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Rehash(puVar1);
    if ((*(byte *)((longlong)param_1 + 0x494) & 1) != 0) {
      FUN_1422fb860(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1422f9e70 FUN_1422f9e70 body=157 status=ok
// SIG undefined FUN_1422f9e70(void)

void FUN_1422f9e70(longlong *param_1,uint *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 uStackX_8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_b8;
  undefined1 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined1 *apuStack_58 [2];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  undefined4 uStack_18;
  
  if (((((*param_2 & 1) != (*(uint *)(param_1 + 0x93) & 1)) ||
       (*(longlong *)(param_2 + 2) != param_1[0x94])) ||
      (*(longlong *)(param_2 + 4) != param_1[0x95])) ||
     ((*(float *)(param_1 + 0x96) != (float)param_2[6] ||
      (*(float *)((longlong)param_1 + 0x4b4) != (float)param_2[7])))) {
    *(uint *)(param_1 + 0x93) = *(uint *)(param_1 + 0x93) & 0xfffffffe | *param_2 & 1;
    *(char *)((longlong)param_1 + 0x49c) = (char)param_2[1];
    param_1[0x94] = *(longlong *)(param_2 + 2);
    param_1[0x95] = *(longlong *)(param_2 + 4);
    *(uint *)(param_1 + 0x96) = param_2[6];
    *(uint *)((longlong)param_1 + 0x4b4) = param_2[7];
    if ((*(byte *)((longlong)param_1 + 0x494) & 1) != 0) {
      uVar1 = (**(code **)(*param_1 + 0x148))();
      lVar2 = UWorld::GetAudioDevice(uVar1);
      if (lVar2 != 0) {
        FUN_1422e0480(&uStack_c8,param_1);
        uVar4 = (uint)uStack_b0;
        uStack_28 = 0;
        uStack_18 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x70,auStack_48);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_FUN_1450377e0;
          puVar3[1] = lVar2;
          *(undefined4 *)(puVar3 + 3) = uStack_c0;
          *(undefined4 *)(puVar3 + 2) = uStack_c8;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_c4;
          *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) & 0xfffffffe;
          *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) | ((uVar4 ^ uStack_b8) & 1 ^ uVar4) & 1;
          *(undefined1 *)((longlong)puVar3 + 0x24) = uStack_b4;
          puVar3[5] = uStack_b0;
          puVar3[6] = uStack_a8;
          *(undefined4 *)(puVar3 + 7) = uStack_a0;
          *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_9c;
          *(undefined4 *)(puVar3 + 8) = uStack_98;
          *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_94;
          *(undefined4 *)(puVar3 + 9) = uStack_90;
          *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_8c;
          puVar3[10] = uStack_88;
          puVar3[0xb] = uStack_80;
          *(undefined4 *)(puVar3 + 0xc) = uStack_78;
          puVar3[0xd] = uStack_70;
        }
        apuStack_58[0] = &LAB_1422e73f0;
        FUN_1422f8a30(apuStack_58,uStackX_8);
      }
      return;
    }
  }
  return;
}



// FUNCTION 1422f9f10 FUN_1422f9f10 body=756 status=ok
// SIG undefined FUN_1422f9f10(void)

void FUN_1422f9f10(longlong param_1,uint *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong local_res10;
  longlong local_48 [4];
  
  local_res10 = local_res10 & 0xffffffff00000000;
  if (((*param_2 & 1) != 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0x18), *(longlong *)(param_2 + 2) != lVar1 ||
      (param_3 != '\0')))) {
    bVar6 = lVar1 == 0;
    if (bVar6) {
      local_48[0] = 0;
      local_48[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Memcpy(local_48[0],L"None",10);
      plVar4 = local_48;
    }
    else {
      local_res10 = *(ulonglong *)(lVar1 + 0x18);
      FName::ToString(&local_res10,local_48 + 2);
      plVar4 = local_48 + 2;
    }
    lVar1 = *plVar4;
    *plVar4 = 0;
    plVar4[1] = 0;
    if ((bVar6) && (local_48[0] != 0)) {
      FMemory::Free();
    }
    if ((!bVar6) && (local_48[2] != 0)) {
      FMemory::Free();
    }
    bVar6 = *(longlong *)(param_2 + 2) == 0;
    if (bVar6) {
      local_48[0] = 0;
      local_48[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Memcpy(local_48[0],L"None",10);
      plVar4 = local_48;
    }
    else {
      local_res10 = *(ulonglong *)(*(longlong *)(param_2 + 2) + 0x18);
      FName::ToString(&local_res10,local_48 + 2);
      plVar4 = local_48 + 2;
    }
    lVar2 = *plVar4;
    *plVar4 = 0;
    plVar4[1] = 0;
    if ((bVar6) && (local_48[0] != 0)) {
      FMemory::Free();
    }
    if ((!bVar6) && (local_48[2] != 0)) {
      FMemory::Free();
    }
    *(uint *)(param_1 + 0x120) =
         *(uint *)(param_1 + 0x120) ^ (*(uint *)(param_1 + 0x120) ^ *param_2) & 1;
    *(byte *)(param_1 + 0x124) = (byte)param_2[1];
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 4);
    *(uint *)(param_1 + 0x138) = param_2[6];
    *(uint *)(param_1 + 0x13c) = param_2[7];
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x88);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x9c);
    *(double *)(param_1 + 0x20) = DAT_1468b5a78;
    lVar5 = *(longlong *)(param_2 + 2);
    if (lVar5 != 0) {
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(lVar5 + 0x28);
      *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(lVar5 + 0x2c);
      *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(lVar5 + 0x30);
      *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(lVar5 + 0x34);
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(lVar5 + 0x38);
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar5 + 0x3c);
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(lVar5 + 0x40);
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(lVar5 + 0x44);
      *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(lVar5 + 0x48);
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar5 + 0x4c);
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(lVar5 + 0x50);
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(lVar5 + 0x54);
    }
    *(undefined1 *)(param_1 + 0x1f2) = 1;
    dVar3 = DAT_1468b5a78;
    if (param_3 == '\0') {
      dVar3 = (double)(float)param_2[7] + DAT_1468b5a78;
    }
    *(double *)(param_1 + 0xe0) = dVar3;
    *(uint *)(param_1 + 0xe8) = param_2[6];
    lVar5 = *(longlong *)(param_2 + 2);
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
      lVar5 = *(longlong *)(param_2 + 2);
    }
    *(longlong *)(param_1 + 0x18) = lVar5;
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  return;
}



// FUNCTION 1422fa210 SetScale body=6 status=ok
// SIG undefined SetScale(void)

void UCameraAnimInst::SetScale(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



// FUNCTION 1422fa220 SetUseThreadedAudio body=20 status=ok
// SIG undefined SetUseThreadedAudio(void)

void FAudioThread::SetUseThreadedAudio(char param_1)

{
  if ((DAT_146aef581 == '\0') || (param_1 != '\0')) {
    DAT_146aef580 = param_1;
  }
  return;
}



// FUNCTION 1422fa240 FUN_1422fa240 body=493 status=ok
// SIG undefined FUN_1422fa240(void)

undefined8 FUN_1422fa240(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  ulonglong uVar11;
  uint uVar12;
  bool bVar13;
  
  plVar8 = *(longlong **)(param_1 + 0x90);
  plVar1 = plVar8 + *(int *)(param_1 + 0x98);
  do {
    if (plVar8 == plVar1) {
      return 1;
    }
    if (((*plVar8 != 0) && (uVar2 = *(uint *)(*plVar8 + 0x3c), *(longlong *)(param_1 + 0x70) != 0))
       && (uVar2 != 0xffffffff)) {
      uVar12 = uVar2 & 0xffffff;
      if (((int)uVar12 < *(int *)(param_1 + 0x68)) &&
         (cVar10 = (char)(uVar2 >> 0x18),
         *(char *)((ulonglong)uVar12 + *(longlong *)(param_1 + 0x60)) == cVar10)) {
        *(char *)(param_1 + 0x7c) = *(char *)(param_1 + 0x7c) + -1;
        if (*(char *)(param_1 + 0x7c) != '\0') {
          uVar5 = FUN_1428742c0(DAT_146b17150);
          if ((*(char *)(param_1 + 0x7c) == '\x01') && (*(int *)(param_1 + 0xa4) == -1)) {
            plVar9 = *(longlong **)(param_1 + 0x90);
            uVar7 = 0;
            uVar11 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
            if (plVar9 + *(int *)(param_1 + 0x98) < plVar9) {
              uVar11 = 0;
            }
            if (uVar11 != 0) {
              do {
                lVar3 = *plVar9;
                if (lVar3 != 0) {
                  bVar13 = *(uint *)(lVar3 + 0x3c) != uVar5;
                  if (!bVar13) {
                    *(uint *)(param_1 + 0xa8) = uVar5;
                  }
                  FUN_1422d8290(lVar3,bVar13);
                }
                plVar9 = plVar9 + 1;
                uVar7 = uVar7 + 1;
              } while (uVar7 != uVar11);
            }
          }
          if ((*(char *)(param_1 + 0x7d) != '\0') && (uVar5 == uVar2)) {
            *(char *)(param_1 + 0x7d) = *(char *)(param_1 + 0x7d) + -1;
            goto LAB_1422fa3f2;
          }
        }
        uVar11 = (ulonglong)uVar12;
        *(char *)(uVar11 + *(longlong *)(param_1 + 0x60)) = cVar10 + '\x01';
        puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 0x90) + uVar11 * 8);
        FUN_1422da700(puVar6);
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x90) + uVar11 * 8) = 0;
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
        puVar6 = (undefined8 *)operator_new(0x10);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          *(uint *)(puVar6 + 1) = uVar12;
          puVar4 = *(undefined8 **)(param_1 + 0x80);
          *(undefined8 **)(param_1 + 0x80) = puVar6;
          *puVar4 = puVar6;
        }
      }
    }
LAB_1422fa3f2:
    plVar8 = plVar8 + 1;
  } while( true );
}



// FUNCTION 1422fa430 FUN_1422fa430 body=412 status=ok
// SIG undefined FUN_1422fa430(void)

undefined8 FUN_1422fa430(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  
  uVar5 = (uint)param_2;
  if ((*(longlong *)(param_1 + 0x70) == 0) || (uVar5 == 0xffffffff)) {
    return 0;
  }
  uVar10 = uVar5 & 0xffffff;
  if (*(int *)(param_1 + 0x68) <= (int)uVar10) {
    return 0;
  }
  cVar9 = (char)((ulonglong)param_2 >> 0x18);
  if (*(char *)((ulonglong)uVar10 + *(longlong *)(param_1 + 0x60)) == cVar9) {
    *(char *)(param_1 + 0x7c) = *(char *)(param_1 + 0x7c) + -1;
    if (*(char *)(param_1 + 0x7c) != '\0') {
      uVar3 = FUN_1428742c0(DAT_146b17150);
      if ((*(char *)(param_1 + 0x7c) == '\x01') && (*(int *)(param_1 + 0xa4) == -1)) {
        plVar8 = *(longlong **)(param_1 + 0x90);
        uVar6 = 0;
        uVar7 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
        if (plVar8 + *(int *)(param_1 + 0x98) < plVar8) {
          uVar7 = 0;
        }
        if (uVar7 != 0) {
          do {
            lVar1 = *plVar8;
            if (lVar1 != 0) {
              bVar11 = *(uint *)(lVar1 + 0x3c) != uVar3;
              if (!bVar11) {
                *(uint *)(param_1 + 0xa8) = uVar3;
              }
              FUN_1422d8290(lVar1,bVar11);
            }
            plVar8 = plVar8 + 1;
            uVar6 = uVar6 + 1;
          } while (uVar6 != uVar7);
        }
      }
      if ((*(char *)(param_1 + 0x7d) != '\0') && (uVar3 == uVar5)) {
        *(char *)(param_1 + 0x7d) = *(char *)(param_1 + 0x7d) + -1;
        return 1;
      }
    }
    uVar7 = (ulonglong)uVar10;
    *(char *)(uVar7 + *(longlong *)(param_1 + 0x60)) = cVar9 + '\x01';
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x90) + uVar7 * 8);
    FUN_1422da700(puVar4);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x90) + uVar7 * 8) = 0;
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    puVar4 = (undefined8 *)operator_new(0x10);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      *(uint *)(puVar4 + 1) = uVar10;
      puVar2 = *(undefined8 **)(param_1 + 0x80);
      *(undefined8 **)(param_1 + 0x80) = puVar4;
      *puVar2 = puVar4;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1422fa5d0 FUN_1422fa5d0 body=808 status=ok
// SIG undefined FUN_1422fa5d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1422fa5d0(void)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined2 *local_78;
  undefined8 local_70;
  longlong *local_68;
  int local_60;
  longlong *local_58;
  int local_50;
  
  if (DAT_146aef580 == '\0') {
    return;
  }
  DAT_146aef581 = 1;
  puVar3 = (undefined8 *)operator_new(0x10);
  puVar8 = (undefined8 *)0x0;
  if (puVar3 == (undefined8 *)0x0) goto LAB_1422fa7d2;
  *puVar3 = &PTR_FUN_145034970;
  uVar4 = FUN_1415ab270(1);
  puVar3[1] = uVar4;
  uVar4 = FUN_14178e3a0();
  FUN_1422dd700(uVar4,local_res18,puVar3,&LAB_1422f4fd0);
  uVar4 = FUN_14178e330();
  FUN_1422dd700(uVar4,local_res20,puVar3,&LAB_1422f4fc0);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_60 = 3;
  local_68 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[1] = (longlong)puVar3;
    plVar5[2] = (longlong)&LAB_1422f4fd0;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_1464b5830,local_88,&local_68);
    plVar5 = local_68;
    if (local_60 != 0) {
      if (local_68 == (longlong *)0x0) goto LAB_1422fa71f;
      (**(code **)(*local_68 + 0x28))(local_68,0);
      local_68 = (longlong *)FMemory::Realloc(plVar5,0,0);
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
LAB_1422fa71f:
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_50 = 3;
  puVar8 = puVar3;
  local_58 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[1] = (longlong)puVar3;
    plVar5[2] = (longlong)&LAB_1422f4fc0;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_1464b5848,local_80,&local_58);
    plVar5 = local_58;
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_1422fa7d2;
      (**(code **)(*local_58 + 0x28))(local_58,0);
      local_58 = (longlong *)FMemory::Realloc(plVar5,0,0);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
LAB_1422fa7d2:
  iVar2 = *DAT_146aef620;
  local_res8 = 0xfc;
  DAT_146aef588 = puVar8;
  lVar6 = FName::GetComparisonNameEntry(&local_res8);
  if (lVar6 == 0) {
    local_78 = (undefined2 *)0x0;
    local_70 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar6,&local_78);
  }
  puVar7 = &DAT_143f3eda8;
  if ((int)local_70 != 0) {
    puVar7 = local_78;
  }
  DAT_1468b4ff0 = FUN_1415d42a0(DAT_146aef588,puVar7,0,2 - (uint)(iVar2 != 0),0xffffffffffffffff);
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  (**(code **)(*(longlong *)DAT_146aef588[1] + 0x20))((longlong *)DAT_146aef588[1],0xffffffff,0);
  local_res10 = 0;
  FAudioCommandFence::BeginFence(&local_res10);
  FAudioCommandFence::Wait(&local_res10,0);
  _DAT_146aef98c = _DAT_146aef98c + 1;
  if (*DAT_146aef608 != 0) {
    FAudioThread::SuspendAudioThread();
  }
  if (local_res10 != 0) {
    LOCK();
    piVar1 = (int *)(local_res10 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(local_res10);
    }
  }
  return;
}



// FUNCTION 1422fa900 Stop body=108 status=ok
// SIG undefined Stop(void)

void UCameraAnimInst::Stop(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if ((param_2 != '\0') || (*(float *)(param_1 + 0x44) <= 0.0)) {
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (plVar1[5] != 0) {
      (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x28) = 0;
    }
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 1;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else if ((*(uint *)(param_1 + 0x3c) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x10;
    return;
  }
  return;
}



// FUNCTION 1422fa970 FUN_1422fa970 body=622 status=ok
// SIG undefined FUN_1422fa970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422fa970(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [24];
  longlong local_58 [4];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if ((DAT_146aef581 != '\0') || (DAT_146aef584 != 0)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    (**(code **)(*DAT_1468b1f88 + 0xd8))(DAT_1468b1f88,0,0);
    local_78 = 0;
    FAudioCommandFence::BeginFence(&local_78);
    FAudioCommandFence::Wait(&local_78,0);
    plVar8 = (longlong *)TGraphTask<FReturnGraphTask>::CreateTask(local_70,0,2);
    *(undefined4 *)(*plVar8 + 0x10) = 1;
    lVar5 = *plVar8;
    lVar7 = plVar8[2];
    lVar6 = plVar8[1];
    lVar10 = *(longlong *)(lVar5 + 0x18);
    piVar1 = (int *)(lVar10 + 0x48);
    if (lVar10 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_80 = lVar10;
    FUN_1404458a0(lVar5,lVar6,(int)lVar7,1);
    plVar9 = (longlong *)FTaskGraphInterface::Get();
    local_38 = (longlong *)0x0;
    local_30 = 1;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_58,0)
    ;
    plVar8 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar8 = local_38;
    }
    *plVar8 = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      lVar10 = local_80;
    }
    (**(code **)(*plVar9 + 0x48))(plVar9,local_58,0x102);
    plVar8 = local_58;
    iVar4 = (int)local_30;
    if (local_38 != (longlong *)0x0) {
      plVar8 = local_38;
    }
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar8 != 0) {
        LOCK();
        piVar2 = (int *)(*plVar8 + 0x48);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle();
        }
      }
      lVar10 = local_80;
      plVar8 = plVar8 + 1;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    (**(code **)(*DAT_1468b4ff0 + 0x20))();
    DAT_146aef581 = '\0';
    if (DAT_1468b4ff0 != (longlong *)0x0) {
      (**(code **)(*DAT_1468b4ff0 + 0x28))(DAT_1468b4ff0,1);
    }
    DAT_1468b4ff0 = (longlong *)0x0;
    if (DAT_146aef588 != (longlong *)0x0) {
      (**(code **)(*DAT_146aef588 + 0x28))(DAT_146aef588,1);
    }
    DAT_146aef588 = (longlong *)0x0;
    if (lVar10 != 0) {
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FGraphEvent::Recycle(local_80);
      }
    }
    if (local_78 != 0) {
      LOCK();
      piVar1 = (int *)(local_78 + 0x48);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FGraphEvent::Recycle(local_78);
      }
    }
  }
  return;
}



// FUNCTION 1422fabe0 FUN_1422fabe0 body=138 status=ok
// SIG undefined FUN_1422fabe0(void)

void FUN_1422fabe0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x90);
  uVar2 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x98) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_1422d9d20(*plVar1,param_2,param_3);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 1422fac70 SuspendAudioThread body=127 status=ok
// SIG undefined SuspendAudioThread(void)

void FAudioThread::SuspendAudioThread(void)

{
  int *piVar1;
  int iVar2;
  longlong local_res10 [3];
  
  if (DAT_146aef581 != '\0') {
    local_res10[0] = 0;
    FAudioCommandFence::BeginFence(local_res10);
    FAudioCommandFence::Wait(local_res10,0);
    DAT_146aef584 = DAT_1468c21cc;
    DAT_1468c21cc = 0;
    DAT_146aef582 = 1;
    DAT_146aef581 = '\0';
    if (local_res10[0] != 0) {
      LOCK();
      piVar1 = (int *)(local_res10[0] + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(local_res10[0]);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1422facf0 FUN_1422facf0 body=539 status=ok
// SIG undefined FUN_1422facf0(void)

void FUN_1422facf0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  UObject::TagSubobjects();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = UObject::GetPrivateStaticClass();
    lVar6 = *(longlong *)(param_1 + 0x30);
    lVar4 = lVar6;
    if (lVar6 != 0) {
LAB_1422fad24:
      if (lVar4 != lVar2) goto code_r0x0001422fad29;
      if (lVar6 != 0) {
        if (lVar6 != 0) {
          lVar4 = UObject::GetPrivateStaticClass();
          for (lVar6 = *(longlong *)(param_1 + 0x30); (lVar6 != 0 && (lVar6 != lVar4));
              lVar6 = *(longlong *)(lVar6 + 0x30)) {
          }
        }
        if (*(longlong *)(param_1 + 0x30) == 0) {
LAB_1422fad8e:
          lVar6 = 0;
        }
        else {
          lVar2 = UObject::GetPrivateStaticClass();
          lVar6 = *(longlong *)(param_1 + 0x30);
          lVar4 = lVar6;
          while( true ) {
            if (lVar4 == 0) goto LAB_1422fad8e;
            if (lVar4 == lVar2) break;
            lVar4 = *(longlong *)(lVar4 + 0x30);
          }
        }
        *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | param_2;
        if (*(longlong *)(param_1 + 0x30) == 0) {
LAB_1422fadbe:
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)UObject::GetPrivateStaticClass();
          plVar7 = *(longlong **)(param_1 + 0x30);
          plVar1 = plVar7;
          while( true ) {
            if (plVar1 == (longlong *)0x0) goto LAB_1422fadbe;
            if (plVar1 == plVar5) break;
            plVar1 = (longlong *)plVar1[6];
          }
        }
        (**(code **)(*plVar7 + 0x1a8))(plVar7,param_2);
      }
    }
  }
LAB_1422fadcf:
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = UObject::GetPrivateStaticClass();
    lVar6 = *(longlong *)(param_1 + 0x28);
    lVar4 = lVar6;
    if (lVar6 != 0) {
      while (lVar4 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      if (lVar6 != 0) {
        if (lVar6 != 0) {
          lVar2 = UObject::GetPrivateStaticClass();
          lVar6 = *(longlong *)(param_1 + 0x28);
          for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar2) goto LAB_1422fae40;
          }
        }
        lVar6 = 0;
LAB_1422fae40:
        if (*(longlong *)(param_1 + 0x30) != 0) {
          lVar3 = UObject::GetPrivateStaticClass();
          lVar4 = *(longlong *)(param_1 + 0x30);
          for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
            if (lVar2 == lVar3) goto LAB_1422fae68;
          }
        }
        lVar4 = 0;
LAB_1422fae68:
        if (lVar6 != lVar4) {
          if (*(longlong *)(param_1 + 0x28) != 0) {
            lVar4 = UObject::GetPrivateStaticClass();
            for (lVar6 = *(longlong *)(param_1 + 0x28); (lVar6 != 0 && (lVar6 != lVar4));
                lVar6 = *(longlong *)(lVar6 + 0x30)) {
            }
            if (*(longlong *)(param_1 + 0x28) != 0) {
              lVar2 = UObject::GetPrivateStaticClass();
              lVar6 = *(longlong *)(param_1 + 0x28);
              for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
                if (lVar4 == lVar2) goto LAB_1422faec6;
              }
            }
          }
          lVar6 = 0;
LAB_1422faec6:
          *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | param_2;
          if (*(longlong *)(param_1 + 0x28) != 0) {
            plVar5 = (longlong *)UObject::GetPrivateStaticClass();
            plVar7 = *(longlong **)(param_1 + 0x28);
            for (plVar1 = plVar7; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
              if (plVar1 == plVar5) goto LAB_1422faef2;
            }
          }
          plVar7 = (longlong *)0x0;
LAB_1422faef2:
          (**(code **)(*plVar7 + 0x1a8))(plVar7,param_2);
        }
      }
    }
  }
  return;
code_r0x0001422fad29:
  lVar4 = *(longlong *)(lVar4 + 0x30);
  if (lVar4 == 0) goto LAB_1422fadcf;
  goto LAB_1422fad24;
}



// FUNCTION 1422faf30 TrackResource body=141 status=ok
// SIG undefined TrackResource(void)

void FAudioDeviceManager::TrackResource(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int local_res8 [2];
  undefined1 local_res10 [8];
  longlong local_res18;
  int *local_18;
  longlong *local_10;
  
  local_res8[0] = (int)param_1[0x14];
  *(int *)(param_1 + 0x14) = local_res8[0] + 1;
  *(int *)(param_3 + 8) = local_res8[0];
  *(int *)(param_2 + 0x1d8) = local_res8[0];
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = local_res18;
  local_18 = local_res8;
  local_10 = &local_res18;
  FUN_14058d980(param_1 + 2,local_res10,&local_18,0);
  return;
}



// FUNCTION 1422fafd0 FUN_1422fafd0 body=116 status=ok
// SIG undefined FUN_1422fafd0(void)

void FUN_1422fafd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x90);
  uVar2 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x98) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        UChaosGameplayEventDispatcher::UnRegisterForBreakEvents(*plVar1,param_2);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 1422fb050 FUN_1422fb050 body=117 status=ok
// SIG undefined FUN_1422fb050(void)

void FUN_1422fb050(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  plVar2 = *(longlong **)(param_1 + 0x90);
  uVar3 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x98) < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  return;
}



// FUNCTION 1422fb0d0 Update body=1276 status=ok
// SIG undefined Update(void)

void FAudioEffectsManager::Update(longlong *param_1)

{
  double *pdVar1;
  double dVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  
  pdVar1 = (double *)(param_1 + 0xc);
  dVar2 = (double)param_1[0x1c] - (double)param_1[4];
  if ((dVar2 <= 0.0) ||
     (fVar5 = (float)((DAT_1468b5a78 - (double)param_1[4]) / dVar2), 1.0 <= fVar5)) {
    *pdVar1 = (double)param_1[0x1c];
    param_1[0xd] = param_1[0x1d];
    param_1[0xe] = param_1[0x1e];
    param_1[0xf] = param_1[0x1f];
    param_1[0x10] = param_1[0x20];
    param_1[0x11] = param_1[0x21];
    param_1[0x12] = param_1[0x22];
    param_1[0x13] = param_1[0x23];
    uVar3 = 0;
    if (((char)param_1[0x3e] == '\0') && (*(char *)((longlong)param_1 + 0x1f2) == '\0'))
    goto LAB_1422fb34f;
  }
  else if (0.0 < fVar5) {
    *pdVar1 = DAT_1468b5a78;
    fVar4 = 1.0 - fVar5;
    uVar3 = 1;
    *(float *)(param_1 + 0xd) = fVar4 * *(float *)(param_1 + 5) + fVar5 * *(float *)(param_1 + 0x1d)
    ;
    *(float *)((longlong)param_1 + 0x6c) =
         fVar4 * *(float *)((longlong)param_1 + 0x2c) + fVar5 * *(float *)((longlong)param_1 + 0xec)
    ;
    *(float *)(param_1 + 0xe) = fVar4 * *(float *)(param_1 + 6) + fVar5 * *(float *)(param_1 + 0x1e)
    ;
    *(float *)((longlong)param_1 + 0x74) =
         fVar4 * *(float *)((longlong)param_1 + 0x34) + fVar5 * *(float *)((longlong)param_1 + 0xf4)
    ;
    *(float *)(param_1 + 0xf) = fVar4 * *(float *)(param_1 + 7) + fVar5 * *(float *)(param_1 + 0x1f)
    ;
    *(float *)((longlong)param_1 + 0x7c) =
         fVar4 * *(float *)((longlong)param_1 + 0x3c) + fVar5 * *(float *)((longlong)param_1 + 0xfc)
    ;
    *(float *)(param_1 + 0x10) =
         fVar4 * *(float *)(param_1 + 8) + fVar5 * *(float *)(param_1 + 0x20);
    *(float *)((longlong)param_1 + 0x84) =
         fVar4 * *(float *)((longlong)param_1 + 0x44) +
         fVar5 * *(float *)((longlong)param_1 + 0x104);
    *(float *)(param_1 + 0x11) =
         fVar4 * *(float *)(param_1 + 9) + fVar5 * *(float *)(param_1 + 0x21);
    *(float *)((longlong)param_1 + 0x8c) =
         fVar4 * *(float *)((longlong)param_1 + 0x4c) +
         fVar5 * *(float *)((longlong)param_1 + 0x10c);
    *(float *)(param_1 + 0x12) =
         fVar4 * *(float *)(param_1 + 10) + fVar5 * *(float *)(param_1 + 0x22);
    *(float *)((longlong)param_1 + 0x94) =
         fVar4 * *(float *)((longlong)param_1 + 0x54) +
         fVar5 * *(float *)((longlong)param_1 + 0x114);
    *(float *)(param_1 + 0x13) =
         fVar4 * *(float *)(param_1 + 0xb) + fVar5 * *(float *)(param_1 + 0x23);
  }
  else {
    uVar3 = 1;
    *pdVar1 = (double)param_1[4];
    param_1[0xd] = param_1[5];
    param_1[0xe] = param_1[6];
    param_1[0xf] = param_1[7];
    param_1[0x10] = param_1[8];
    param_1[0x11] = param_1[9];
    param_1[0x12] = param_1[10];
    param_1[0x13] = param_1[0xb];
  }
  *(undefined1 *)(param_1 + 0x3e) = uVar3;
  param_1[0x14] = (longlong)*pdVar1;
  param_1[0x15] = param_1[0xd];
  *(undefined1 *)((longlong)param_1 + 0x1f2) = 0;
  param_1[0x16] = param_1[0xe];
  param_1[0x17] = param_1[0xf];
  *(int *)(param_1 + 0x18) = (int)param_1[0x10];
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_1 + 0x84);
  *(int *)(param_1 + 0x19) = (int)param_1[0x11];
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_1 + 0x8c);
  *(int *)(param_1 + 0x1a) = (int)param_1[0x12];
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_1 + 0x94);
  *(int *)(param_1 + 0x1b) = (int)param_1[0x13];
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_1 + 0x9c);
  (**(code **)(*param_1 + 8))();
LAB_1422fb34f:
  pdVar1 = (double *)(param_1 + 0x30);
  dVar2 = (double)param_1[0x37] - (double)param_1[0x29];
  if ((dVar2 <= 0.0) ||
     (fVar5 = (float)((DAT_1468b5a78 - (double)param_1[0x29]) / dVar2), 1.0 <= fVar5)) {
    uVar3 = 0;
    *pdVar1 = (double)param_1[0x37];
    param_1[0x31] = param_1[0x38];
    param_1[0x32] = param_1[0x39];
    param_1[0x33] = param_1[0x3a];
    *(int *)(param_1 + 0x34) = (int)param_1[0x3b];
    *(undefined4 *)((longlong)param_1 + 0x1a4) = *(undefined4 *)((longlong)param_1 + 0x1dc);
    *(int *)(param_1 + 0x35) = (int)param_1[0x3c];
    *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)((longlong)param_1 + 0x1e4);
    param_1[0x36] = param_1[0x3d];
    if ((*(char *)((longlong)param_1 + 0x1f1) == '\0') &&
       (*(char *)((longlong)param_1 + 499) == '\0')) {
      return;
    }
  }
  else if (0.0 < fVar5) {
    *pdVar1 = DAT_1468b5a78;
    uVar3 = 1;
    *(float *)(param_1 + 0x31) =
         (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x2a)) * fVar5 +
         *(float *)(param_1 + 0x2a);
    *(float *)((longlong)param_1 + 0x194) =
         (*(float *)((longlong)param_1 + 0x1cc) - *(float *)((longlong)param_1 + 0x15c)) * fVar5 +
         *(float *)((longlong)param_1 + 0x15c);
    *(float *)(param_1 + 0x34) =
         (*(float *)(param_1 + 0x3b) - *(float *)(param_1 + 0x2d)) * fVar5 +
         *(float *)(param_1 + 0x2d);
    *(float *)((longlong)param_1 + 0x1ac) =
         (*(float *)((longlong)param_1 + 0x1e4) - *(float *)((longlong)param_1 + 0x174)) * fVar5 +
         *(float *)((longlong)param_1 + 0x174);
    *(float *)((longlong)param_1 + 0x18c) =
         (*(float *)((longlong)param_1 + 0x1c4) - *(float *)((longlong)param_1 + 0x154)) * fVar5 +
         *(float *)((longlong)param_1 + 0x154);
    *(float *)(param_1 + 0x33) =
         (*(float *)(param_1 + 0x3a) - *(float *)(param_1 + 0x2c)) * fVar5 +
         *(float *)(param_1 + 0x2c);
    *(float *)((longlong)param_1 + 0x1a4) =
         (*(float *)((longlong)param_1 + 0x1dc) - *(float *)((longlong)param_1 + 0x16c)) * fVar5 +
         *(float *)((longlong)param_1 + 0x16c);
    *(float *)(param_1 + 0x36) =
         (*(float *)(param_1 + 0x3d) - *(float *)(param_1 + 0x2f)) * fVar5 +
         *(float *)(param_1 + 0x2f);
    *(float *)(param_1 + 0x32) =
         (*(float *)(param_1 + 0x39) - *(float *)(param_1 + 0x2b)) * fVar5 +
         *(float *)(param_1 + 0x2b);
    *(float *)((longlong)param_1 + 0x19c) =
         (*(float *)((longlong)param_1 + 0x1d4) - *(float *)((longlong)param_1 + 0x164)) * fVar5 +
         *(float *)((longlong)param_1 + 0x164);
    *(float *)(param_1 + 0x35) =
         (*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x2e)) * fVar5 +
         *(float *)(param_1 + 0x2e);
    *(float *)((longlong)param_1 + 0x1b4) =
         (*(float *)((longlong)param_1 + 0x1ec) - *(float *)((longlong)param_1 + 0x17c)) * fVar5 +
         *(float *)((longlong)param_1 + 0x17c);
  }
  else {
    uVar3 = 1;
    *pdVar1 = (double)param_1[0x29];
    param_1[0x31] = param_1[0x2a];
    param_1[0x32] = param_1[0x2b];
    param_1[0x33] = param_1[0x2c];
    *(int *)(param_1 + 0x34) = (int)param_1[0x2d];
    *(undefined4 *)((longlong)param_1 + 0x1a4) = *(undefined4 *)((longlong)param_1 + 0x16c);
    *(int *)(param_1 + 0x35) = (int)param_1[0x2e];
    *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)((longlong)param_1 + 0x174);
    param_1[0x36] = param_1[0x2f];
  }
  *(undefined1 *)((longlong)param_1 + 0x1f1) = uVar3;
  *(undefined1 *)((longlong)param_1 + 499) = 0;
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



// FUNCTION 1422fb5d0 Update body=91 status=ok
// SIG undefined Update(void)

void UCameraAnimInst::Update
               (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               float param_5,float param_6)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x48) = param_4;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(uint *)(param_1 + 0x3c) = uVar1 & 0xffffffef | 8;
    }
    *(undefined4 *)(param_1 + 0x50) = param_2;
    *(undefined4 *)(param_1 + 0x54) = param_3;
    *(undefined4 *)(param_1 + 0x40) = param_4;
    *(float *)(param_1 + 0x44) = param_5;
    if (0.0 < param_6) {
      *(float *)(param_1 + 0x60) = param_6 - param_5;
      return;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1422fb630 FUN_1422fb630 body=176 status=ok
// SIG undefined FUN_1422fb630(void)

void FUN_1422fb630(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (DAT_146531ac8 != 0) {
    FAudioCommandFence::Wait(param_1 + 0x110,0);
  }
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x90);
  uVar2 = (longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x98) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_1422daec0(*plVar1,param_2);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  if (DAT_146531ac8 != 0) {
    FAudioCommandFence::BeginFence(param_1 + 0x110);
  }
  return;
}



// FUNCTION 1422fb6e0 UpdateAlpha body=132 status=ok
// SIG undefined UpdateAlpha(void)

void UCameraModifier::UpdateAlpha(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x278))();
  if (fVar1 == 0.0) {
    fVar3 = *(float *)((longlong)param_1 + 0x3c);
  }
  else {
    fVar3 = *(float *)(param_1 + 7);
  }
  if (fVar3 <= 0.0) {
    *(float *)(param_1 + 8) = fVar1;
    return;
  }
  fVar2 = *(float *)(param_1 + 8);
  if (fVar1 < fVar2) {
    fVar2 = fVar2 - param_2 / fVar3;
    if (fVar2 <= fVar1) {
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 8) = fVar2;
    return;
  }
  fVar2 = param_2 / fVar3 + fVar2;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 8) = fVar2;
  return;
}



// FUNCTION 1422fb770 FUN_1422fb770 body=18 status=ok
// SIG undefined FUN_1422fb770(void)

ulonglong FUN_1422fb770(longlong *param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001422fb77b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)*param_1 + 8))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1422fb790 FUN_1422fb790 body=202 status=ok
// SIG undefined FUN_1422fb790(void)

void FUN_1422fb790(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 local_res8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x2a8);
  for (iVar3 = *(int *)(param_1 + 0x2b0); iVar3 != 0; iVar3 = iVar3 + -1) {
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  if (*(int *)(param_1 + 0x2b4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2a8,0);
  }
  *(byte *)(param_1 + 0x204) = *(byte *)(param_1 + 0x204) & 0xfd;
  lVar2 = *(longlong *)(param_1 + 0x30);
  do {
    if (lVar2 == 0) {
LAB_1422fb83d:
      *(byte *)(param_1 + 0x204) = *(byte *)(param_1 + 0x204) | 2;
      return;
    }
    if ((*(uint *)(lVar2 + 0xb4) & 0x10000080) != 0) {
      local_res8 = 0;
      FUN_1422e6c50(param_1,&local_res8,lVar2,*(undefined8 *)(param_1 + 0xf8),
                    *(undefined8 *)(lVar2 + 0xf8));
      goto LAB_1422fb83d;
    }
    lVar2 = *(longlong *)(lVar2 + 0x30);
  } while( true );
}



// FUNCTION 1422fb860 FUN_1422fb860 body=303 status=ok
// SIG undefined FUN_1422fb860(void)

void FUN_1422fb860(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 local_res8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = UWorld::GetAudioDevice(uVar1);
  if (lVar2 != 0) {
    FUN_1422e0480(&local_c8,param_1);
    uVar4 = (uint)local_b0;
    local_28 = 0;
    local_18 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x70,local_48);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1450377e0;
      puVar3[1] = lVar2;
      *(undefined4 *)(puVar3 + 3) = local_c0;
      *(undefined4 *)(puVar3 + 2) = local_c8;
      *(undefined4 *)((longlong)puVar3 + 0x14) = local_c4;
      *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) & 0xfffffffe;
      *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) | ((uVar4 ^ local_b8) & 1 ^ uVar4) & 1;
      *(undefined1 *)((longlong)puVar3 + 0x24) = local_b4;
      puVar3[5] = local_b0;
      puVar3[6] = local_a8;
      *(undefined4 *)(puVar3 + 7) = local_a0;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = local_9c;
      *(undefined4 *)(puVar3 + 8) = local_98;
      *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_94;
      *(undefined4 *)(puVar3 + 9) = uStack_90;
      *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_8c;
      puVar3[10] = local_88;
      puVar3[0xb] = uStack_80;
      *(undefined4 *)(puVar3 + 0xc) = local_78;
      puVar3[0xd] = local_70;
    }
    local_58[0] = &LAB_1422e73f0;
    FUN_1422f8a30(local_58,local_res8);
  }
  return;
}



// FUNCTION 1422fb990 FUN_1422fb990 body=1670 status=ok
// SIG undefined FUN_1422fb990(void)

void FUN_1422fb990(longlong param_1)

{
  uint uVar1;
  int *piVar2;
  BOOL BVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  uint *puVar15;
  longlong *plVar16;
  int iVar17;
  bool bVar18;
  int local_res20 [2];
  int local_180 [2];
  int local_178;
  uint uStack_174;
  uint *puStack_170;
  undefined4 local_168;
  uint uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  uint uStack_154;
  uint *puStack_150;
  undefined4 local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  ulonglong local_130;
  int local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 uStack_108;
  longlong *local_f8;
  undefined8 uStack_f0;
  uint *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  longlong *local_c8;
  char local_c0;
  char cStack_bf;
  int local_b8;
  int local_b4;
  int local_b0;
  longlong local_a8;
  LPCRITICAL_SECTION local_a0;
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xf8);
  local_a0 = lpCriticalSection;
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uStack_174 = 1;
  plVar16 = (longlong *)(param_1 + 0x10);
  local_178 = 0;
  uVar1 = *(uint *)(param_1 + 0x38);
  puVar15 = (uint *)(param_1 + 0x20);
  uStack_164 = 0;
  iStack_160 = 0;
  if (uVar1 != 0) {
    puVar14 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar14 = puVar15;
    }
    uVar8 = *puVar14;
    iStack_160 = 0;
    local_178 = 0;
    while (uVar8 == 0) {
      lVar9 = (longlong)local_178;
      iStack_160 = iStack_160 + 0x20;
      iVar5 = local_178 + 1;
      bVar18 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_178;
      local_178 = iVar5;
      if (bVar18) goto LAB_1422fba95;
      uVar8 = puVar14[lVar9 + 1];
    }
    uStack_174 = -uVar8 & uVar8;
    local_b8 = 0x1f;
    if (uStack_174 != 0) {
      for (; uStack_174 >> local_b8 == 0; local_b8 = local_b8 + -1) {
      }
    }
    if (uStack_174 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - local_b8;
    }
    uStack_164 = (iStack_160 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_164) {
LAB_1422fba95:
      uStack_164 = uVar1;
    }
  }
  local_168 = 0xffffffff;
  uStack_114 = *(uint *)(param_1 + 0x38);
  uStack_120 = CONCAT44(uStack_174,local_178);
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_164;
  uStack_108 = CONCAT44(uStack_15c,iStack_160);
  local_128 = (int)uStack_114 >> 5;
  uStack_124 = (undefined4)((ulonglong)plVar16 >> 0x20);
  uStack_118 = -1 << ((byte)uStack_114 & 0x1f);
  uStack_110 = uStack_114 & 0xffffffe0;
  uStack_10c = uStack_164;
  iStack_90 = local_178;
  uStack_8c = uStack_174;
  puStack_170 = puVar15;
  local_138 = plVar16;
  local_88 = puVar15;
  local_78 = uStack_108;
  local_98 = plVar16;
  uVar8 = uStack_114;
  if (uStack_114 != uVar1) {
    puVar14 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar14 = puVar15;
    }
    uVar8 = puVar14[local_128] & uStack_118;
    while (uVar8 == 0) {
      lVar9 = (longlong)local_128;
      uStack_110 = uStack_110 + 0x20;
      iVar5 = local_128 + 1;
      bVar18 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_128;
      local_128 = iVar5;
      if (bVar18) goto LAB_1422fbb7f;
      uVar8 = puVar14[lVar9 + 1];
      uStack_118 = 0xffffffff;
    }
    uVar8 = -uVar8 & uVar8;
    local_b4 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> local_b4 == 0; local_b4 = local_b4 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - local_b4;
    }
    uStack_114 = (uStack_110 - iVar5) + 0x1f;
    uVar8 = uStack_114;
    if ((int)uVar1 < (int)uStack_114) {
LAB_1422fbb7f:
      uStack_114 = uVar1;
      uVar8 = uVar1;
    }
  }
  while (((uStack_7c != uVar8 || (local_88 != puVar15)) || (local_98 != plVar16))) {
    FStreamingWaveData::UpdateStreamingStatus
              (*(undefined8 *)(*local_98 + 8 + (longlong)(int)uStack_7c * 0x18));
    uStack_80 = uStack_80 & ~uStack_8c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
  }
  FAudioStreamingManager::ProcessPendingAsyncFileResults(param_1);
  plVar11 = *(longlong **)(param_1 + 0x60);
  local_130 = 0;
  uVar12 = (longlong)*(int *)(param_1 + 0x68) & 0x1fffffffffffffff;
  if (plVar11 + *(int *)(param_1 + 0x68) < plVar11) {
    uVar12 = 0;
  }
  if (uVar12 != 0) {
    do {
      lVar9 = *plVar11;
      plVar7 = *(longlong **)(lVar9 + 0x10);
      if ((plVar7 != (longlong *)0x0) && (lVar13 = *plVar7, lVar13 != 0)) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(plVar16,local_res20,lVar13);
        plVar7 = (longlong *)0x0;
        if (local_res20[0] != -1) {
          plVar7 = (longlong *)(*plVar16 + (longlong)local_res20[0] * 0x18);
        }
        plVar4 = plVar7 + 1;
        if (plVar7 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          bVar18 = *(int *)(*plVar4 + 8) == 0;
          if (bVar18) {
            *(int *)(*plVar4 + 8) = 0;
          }
          UNLOCK();
          if (bVar18) {
            local_a8 = *plVar4;
            plVar4 = (longlong *)FAudioStreamingManager::GetWaveRequest(param_1,lVar13);
            plVar7 = *(longlong **)(lVar9 + 0x18);
            if (plVar7 != (longlong *)0x0) {
              iVar5 = (**(code **)(*plVar7 + 0x30))(plVar7);
              if ((-1 < iVar5) && (iVar5 < **(int **)(lVar13 + 0x1e8))) {
                piVar2 = (int *)*plVar4;
                iVar6 = (int)plVar4[1];
                for (piVar10 = piVar2; piVar10 != piVar2 + iVar6; piVar10 = piVar10 + 1) {
                  if (*piVar10 == iVar5) {
                    if ((int)((longlong)piVar10 - (longlong)piVar2 >> 2) != -1) goto LAB_1422fbd19;
                    break;
                  }
                }
                *(int *)(plVar4 + 1) = iVar6 + 1;
                if (*(int *)((longlong)plVar4 + 0xc) < iVar6 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar4,iVar6);
                }
                *(int *)((longlong)iVar6 * 4 + *plVar4) = iVar5;
LAB_1422fbd19:
                piVar2 = (int *)*plVar4;
                iVar17 = (iVar5 + 1) % **(int **)(lVar13 + 0x1e8);
                iVar6 = (int)plVar4[1];
                for (piVar10 = piVar2; piVar10 != piVar2 + iVar6; piVar10 = piVar10 + 1) {
                  if (*piVar10 == iVar17) {
                    if ((int)((longlong)piVar10 - (longlong)piVar2 >> 2) != -1) goto LAB_1422fbd7a;
                    break;
                  }
                }
                *(int *)(plVar4 + 1) = iVar6 + 1;
                if (*(int *)((longlong)plVar4 + 0xc) < iVar6 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar4);
                }
                *(int *)((longlong)iVar6 * 4 + *plVar4) = iVar17;
LAB_1422fbd7a:
                piVar10 = *(int **)(local_a8 + 0x28);
                piVar2 = piVar10 + *(int *)(local_a8 + 0x30);
                for (; piVar10 != piVar2; piVar10 = piVar10 + 1) {
                  if (*piVar10 == iVar5) {
                    piVar2 = *(int **)(*(longlong *)(*(longlong *)(lVar13 + 0x1e8) + 0x10) +
                                      (longlong)iVar5 * 8);
                    iVar5 = (**(code **)(*plVar7 + 0x38))(plVar7);
                    plVar16 = local_138;
                    if (iVar5 <= *piVar2 / 2) goto LAB_1422fbddc;
                    break;
                  }
                }
                *(undefined1 *)(plVar4 + 2) = 1;
                plVar16 = local_138;
              }
            }
          }
        }
      }
LAB_1422fbddc:
      plVar11 = plVar11 + 1;
      local_130 = local_130 + 1;
      lpCriticalSection = local_a0;
    } while (local_130 != uVar12);
  }
  local_f8 = (longlong *)(param_1 + 0x70);
  uStack_154 = 1;
  iVar5 = *(int *)(param_1 + 0x98);
  puStack_150 = (uint *)(param_1 + 0x80);
  local_158 = 0;
  iStack_144 = 0;
  iStack_140 = 0;
  if (iVar5 != 0) {
    puVar15 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar15 = puStack_150;
    }
    uVar1 = *puVar15;
    while (uVar1 == 0) {
      lVar9 = (longlong)local_158;
      iStack_140 = iStack_140 + 0x20;
      iVar6 = local_158 + 1;
      bVar18 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_158;
      local_158 = iVar6;
      if (bVar18) goto LAB_1422fbeb5;
      uVar1 = puVar15[lVar9 + 1];
    }
    uStack_154 = -uVar1 & uVar1;
    local_b0 = 0x1f;
    if (uStack_154 != 0) {
      for (; uStack_154 >> local_b0 == 0; local_b0 = local_b0 + -1) {
      }
    }
    if (uStack_154 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - local_b0;
    }
    iStack_144 = (iStack_140 - iVar6) + 0x1f;
    if (iVar5 < iStack_144) {
LAB_1422fbeb5:
      iStack_144 = iVar5;
    }
  }
  local_148 = 0xffffffff;
  uStack_e0 = CONCAT44(iStack_144,0xffffffff);
  auStack_58._8_4_ = iStack_140;
  auStack_58._0_8_ = uStack_e0;
  auStack_58._12_4_ = uStack_13c;
  uStack_f0 = CONCAT44(uStack_154,local_158);
  local_c0 = '\0';
  cStack_bf = '\0';
  local_48._0_4_ = SUB84(local_f8,0);
  local_48._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
  local_d8._8_4_ = (undefined4)local_48;
  local_d8._0_8_ = auStack_58._8_8_;
  local_d8._12_4_ = local_48._4_4_;
  iVar5 = iStack_144;
  local_e8 = puStack_150;
  local_c8 = local_f8;
  local_70 = local_f8;
  uStack_68 = uStack_f0;
  puStack_60 = puStack_150;
  local_48 = local_f8;
  if (iStack_144 < *(int *)(param_1 + 0x98)) {
    do {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(plVar16,local_180,*(undefined8 *)(*local_f8 + (longlong)iVar5 * 0x28));
      if (((local_180[0] != -1) && (lVar9 = *plVar16 + (longlong)local_180[0] * 0x18, lVar9 != 0))
         && (lVar9 = *(longlong *)(lVar9 + 8), lVar9 != 0)) {
        LOCK();
        bVar18 = *(int *)(lVar9 + 8) == 0;
        if (bVar18) {
          *(int *)(lVar9 + 8) = 0;
        }
        UNLOCK();
        if (bVar18) {
          lVar13 = (longlong)iVar5 * 0x28 + *local_f8;
          TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(lVar9 + 0x38,lVar13 + 8);
          *(undefined1 *)(lVar9 + 0x48) = *(undefined1 *)(lVar13 + 0x18);
          FStreamingWaveData::UpdateStreamingStatus(lVar9);
          TSet<TTuple<USoundWave_*,FWaveRequest>,TDefaultMapHashableKeyFuncs<USoundWave_*,FWaveRequest,0>,FDefaultSetAllocator>
          ::Remove(local_d8._8_8_,uStack_e0._4_4_);
          local_c0 = '\x01';
        }
      }
      uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
      iVar5 = uStack_e0._4_4_;
    } while (uStack_e0._4_4_ < (int)local_e8[6]);
    if ((local_c0 != '\0') && (cStack_bf != '\0')) {
      TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_c8,(int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34),1);
    }
  }
  FAudioStreamingManager::ProcessPendingAsyncFileResults(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001422fc00f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1422fc020 UpdateStreamingStatus body=254 status=ok
// SIG undefined UpdateStreamingStatus(void)

ulonglong FStreamingWaveData::UpdateStreamingStatus(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  if (*param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar4 = 1;
  LOCK();
  iVar3 = (int)param_1[1];
  if (iVar3 == 0) {
    *(int *)(param_1 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  local_18 = 0;
  local_10 = 0;
  local_28 = 0;
  local_20 = 0;
  cVar2 = HasPendingRequests(param_1,&local_18,&local_28);
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else if (iVar3 == 1) {
    lVar5 = param_1[2];
    lVar6 = (longlong)(int)param_1[3] * 0x20 + lVar5;
    for (; lVar5 != lVar6; lVar5 = lVar5 + 0x20) {
      puVar1 = *(undefined8 **)(lVar5 + 8);
      if ((puVar1 != (undefined8 *)0x0) && (*(char *)((longlong)puVar1 + 0x71) != '\0')) {
        (**(code **)*puVar1)(puVar1,1);
        *(undefined8 *)(lVar5 + 8) = 0;
      }
    }
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    UNLOCK();
    uVar4 = 0;
    TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 5,param_1 + 7);
  }
  else if (iVar3 == 0) {
    FUN_1422e5630(param_1,&local_18,&local_28);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 1422fc1b0 FUN_1422fc1b0 body=119 status=ok
// SIG undefined FUN_1422fc1b0(void)

undefined1 FUN_1422fc1b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aefa10) {
    _Init_thread_header(&DAT_146aefa10);
    if (DAT_146aefa10 == -1) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&DAT_146aefa0c,L"Kismet",L"bPersistentUberGraphFrame",&DAT_1468e2360);
      _Init_thread_footer(&DAT_146aefa10);
    }
  }
  return DAT_146aefa0c;
}



// FUNCTION 1422fc230 VolumeToMilliBels body=99 status=ok
// SIG undefined VolumeToMilliBels(void)

longlong FAudioEffectsManager::VolumeToMilliBels(undefined8 param_1,float param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  if (param_2 <= 0.0) {
    return -10000;
  }
  fVar3 = ::_guard_xfg_dispatch_icall_nop(param_2);
  lVar1 = (longlong)(fVar3 * 2000.0);
  if (lVar1 < -10000) {
    return -10000;
  }
  lVar2 = (longlong)param_3;
  if (lVar1 < param_3) {
    lVar2 = lVar1;
  }
  return lVar2;
}



// FUNCTION 1422fc2a0 Wait body=828 status=ok
// SIG undefined Wait(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FAudioCommandFence::Wait(longlong *param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  longlong lVar7;
  char cVar8;
  BOOL BVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  longlong local_70 [4];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((DAT_146aef581 != '\0') && (FUN_1422ed880(&DAT_146aef6c0), DAT_146aef581 != '\0')) {
    FUN_1422ed880(&DAT_146aef6c0);
  }
  if (*param_1 != 0) {
    puVar1 = (ulonglong *)(*param_1 + 8);
    LOCK();
    uVar10 = *puVar1;
    if (uVar10 == 0) {
      *puVar1 = 0;
      uVar10 = 0;
    }
    UNLOCK();
    if ((uVar10 >> 0x1a & 1) == 0) {
      QueryPerformanceCounter(&local_80);
      dVar6 = (double)local_80.QuadPart * DAT_1468b02f8;
      plVar11 = (longlong *)FUN_1415ab270(0);
      plVar12 = (longlong *)FTaskGraphInterface::Get();
      local_50 = (longlong *)0x0;
      local_48 = 1;
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_70,0);
      lVar5 = *param_1;
      plVar13 = local_70;
      if (local_50 != (longlong *)0x0) {
        plVar13 = local_50;
      }
      *plVar13 = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar12 + 0x50))(plVar12,plVar11,local_70,2);
      plVar13 = local_70;
      iVar4 = (int)local_48;
      if (local_50 != (longlong *)0x0) {
        plVar13 = local_50;
      }
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        if (*plVar13 != 0) {
          LOCK();
          piVar2 = (int *)(*plVar13 + 0x48);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar13 = plVar13 + 1;
      }
      if (local_50 != (longlong *)0x0) {
        FMemory::Free();
      }
      do {
        cVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,0x23);
        QueryPerformanceCounter(&local_78);
        if ((0.036 < (float)((double)local_78.QuadPart * DAT_1468b02f8 - dVar6)) &&
           (DAT_146aef5a8 == 1)) {
          BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
          if (BVar9 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
          }
          local_90 = 0;
          local_88 = 8;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
          lVar5 = local_90;
          FGenericPlatformString::Memcpy(local_90,L"NoStats",0x10);
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
          BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
          if (BVar9 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
          }
          local_a0 = 0;
          local_98 = 8;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,0);
          lVar7 = local_a0;
          FGenericPlatformString::Memcpy(local_a0,L"NoStats");
          local_a0 = 0;
          local_98 = 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
          if (lVar7 != 0) {
            FMemory::Free(lVar7);
          }
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
      } while (cVar8 == '\0');
      BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
      if (BVar9 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
      }
      _DAT_146aef598 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aef698);
      FUN_1415b5910(plVar11);
      return;
    }
  }
  lVar5 = *param_1;
  *param_1 = 0;
  if (lVar5 != 0) {
    LOCK();
    piVar2 = (int *)(lVar5 + 0x48);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return;
}



// FUNCTION 1422fc5e0 FUN_1422fc5e0 body=482 status=ok
// SIG undefined FUN_1422fc5e0(void)

int * FUN_1422fc5e0(longlong param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  FUN_142301d00(param_1,local_38);
  bVar12 = false;
  *param_2 = local_38[0];
  puVar1 = (undefined4 *)*param_3;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_30 + 2) = 0;
  *(undefined4 *)local_30 = uVar2;
  *(undefined4 *)((longlong)local_30 + 4) = uVar3;
  *(undefined4 *)(local_30 + 1) = uVar4;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar5;
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  iVar10 = *(int *)(param_1 + 0x808) - *(int *)(param_1 + 0x82c);
  if (iVar10 != 1) {
    FUN_14230eab0(param_1,local_res8,local_30);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      lVar8 = *(longlong *)(param_1 + 0x800);
      if (*(longlong *)(param_1 + 0x800) == 0) {
        lVar8 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x20 + lVar8),local_30,0x18);
      FUN_14231a4e0(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_1422fc799;
    }
  }
  cVar6 = FUN_142308570(param_1,iVar10,0);
  if (cVar6 == '\0') {
    iVar10 = (int)(*local_30 >> 4);
    uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar11 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
    uVar7 = (iVar10 - uVar9) - uVar11 ^ uVar11 >> 0xc;
    uVar9 = (uVar9 - uVar7) - uVar11 ^ uVar7 << 0x10;
    uVar11 = (uVar11 - uVar9) - uVar7 ^ uVar9 >> 5;
    uVar7 = (uVar7 - uVar9) - uVar11 ^ uVar11 >> 3;
    uVar9 = (uVar9 - uVar7) - uVar11 ^ uVar7 << 10;
    uVar7 = ((uVar11 - uVar9) - uVar7 ^ uVar9 >> 0xf ^ (uint)local_30[1]) &
            *(int *)(param_1 + 0x8b8) - 1U;
    *(uint *)((longlong)local_30 + 0x1c) = uVar7;
    lVar8 = *(longlong *)(param_1 + 0x8b0);
    if (*(longlong *)(param_1 + 0x8b0) == 0) {
      lVar8 = param_1 + 0x830;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          (lVar8 + ((longlong)*(int *)(param_1 + 0x8b8) - 1U & (longlong)(int)uVar7) * 4);
    lVar8 = *(longlong *)(param_1 + 0x8b0);
    if (*(longlong *)(param_1 + 0x8b0) == 0) {
      lVar8 = param_1 + 0x830;
    }
    *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x8b8) - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1422fc799:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1422fc7d0 FUN_1422fc7d0 body=489 status=ok
// SIG undefined FUN_1422fc7d0(void)

int * FUN_1422fc7d0(longlong param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  FUN_142301d00(param_1,local_38);
  puVar1 = (undefined4 *)*param_3;
  bVar13 = false;
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *param_2 = local_38[0];
  *(undefined4 *)local_30 = uVar3;
  *(undefined4 *)((longlong)local_30 + 4) = uVar4;
  *(undefined4 *)(local_30 + 1) = uVar5;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar6;
  *(undefined4 *)(local_30 + 2) = *puVar2;
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  iVar11 = *(int *)(param_1 + 0x808) - *(int *)(param_1 + 0x82c);
  if (iVar11 != 1) {
    FUN_14230eab0(param_1,local_res8,local_30);
    bVar13 = local_res8[0] != -1;
    if (bVar13) {
      lVar9 = *(longlong *)(param_1 + 0x800);
      if (*(longlong *)(param_1 + 0x800) == 0) {
        lVar9 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x20 + lVar9),local_30,0x18);
      FUN_14231a4e0(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_1422fc991;
    }
  }
  cVar7 = FUN_142308570(param_1,iVar11,0);
  if (cVar7 == '\0') {
    iVar11 = (int)(*local_30 >> 4);
    uVar10 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar12 = -(uVar10 + iVar11) ^ uVar10 >> 0xd;
    uVar8 = (iVar11 - uVar10) - uVar12 ^ uVar12 >> 0xc;
    uVar10 = (uVar10 - uVar8) - uVar12 ^ uVar8 << 0x10;
    uVar12 = (uVar12 - uVar10) - uVar8 ^ uVar10 >> 5;
    uVar8 = (uVar8 - uVar10) - uVar12 ^ uVar12 >> 3;
    uVar10 = (uVar10 - uVar8) - uVar12 ^ uVar8 << 10;
    uVar8 = ((uVar12 - uVar10) - uVar8 ^ uVar10 >> 0xf ^ (uint)local_30[1]) &
            *(int *)(param_1 + 0x8b8) - 1U;
    *(uint *)((longlong)local_30 + 0x1c) = uVar8;
    lVar9 = *(longlong *)(param_1 + 0x8b0);
    if (*(longlong *)(param_1 + 0x8b0) == 0) {
      lVar9 = param_1 + 0x830;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          (lVar9 + ((longlong)*(int *)(param_1 + 0x8b8) - 1U & (longlong)(int)uVar8) * 4);
    lVar9 = *(longlong *)(param_1 + 0x8b0);
    if (*(longlong *)(param_1 + 0x8b0) == 0) {
      lVar9 = param_1 + 0x830;
    }
    *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0x8b8) - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1422fc991:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1422fc9c0 FUN_1422fc9c0 body=808 status=ok
// SIG undefined FUN_1422fc9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1422fc9c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             PxHeightFieldGeometry *param_5,PxTransform *param_6,longlong param_7,int param_8)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStackY_138 [32];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_1468387a8 ^ (ulonglong)auStackY_138;
  lVar1 = 0;
  fVar10 = -3.4e+38;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  if (0 < (longlong)param_8) {
    do {
      physx::PxMeshQuery::getTriangle
                (param_5,param_6,*(uint *)(param_7 + lVar1 * 4),(PxTriangle *)&local_f8,(uint *)0x0,
                 (uint *)0x0);
      fVar9 = (local_e8 - local_f4) * (local_d8 - local_f0) -
              (local_e4 - local_f0) * (local_dc - local_f4);
      fVar7 = (local_ec - local_f8) * (local_dc - local_f4) -
              (local_e8 - local_f4) * (local_e0 - local_f8);
      fVar5 = (local_e4 - local_f0) * (local_e0 - local_f8) -
              (local_ec - local_f8) * (local_d8 - local_f0);
      fVar2 = fVar5 * fVar5 + fVar9 * fVar9 + fVar7 * fVar7;
      fVar6 = fVar5;
      fVar8 = fVar7;
      fVar3 = fVar9;
      if ((fVar2 != 1.0) &&
         (fVar6 = DAT_1468b5d94, fVar8 = DAT_1468b5d98, fVar3 = DAT_1468b5d90, 1e-08 <= fVar2)) {
        auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
        fVar3 = auVar4._0_4_;
        fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
        fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
        fVar6 = fVar5 * fVar3;
        fVar8 = fVar7 * fVar3;
        fVar3 = fVar9 * fVar3;
      }
      fVar2 = (fVar6 * *(float *)(param_4 + 0x14) + fVar3 * *(float *)(param_4 + 0x10) +
              fVar8 * *(float *)(param_4 + 0x18)) -
              (local_f4 * fVar6 + local_f8 * fVar3 + local_f0 * fVar8);
      if (fVar10 < fVar2) {
        *param_1 = CONCAT44(fVar6,fVar3);
        *(float *)(param_1 + 1) = fVar8;
        fVar10 = fVar2;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_8);
  }
  return param_1;
}



// FUNCTION 1422fccf0 FUN_1422fccf0 body=808 status=ok
// SIG undefined FUN_1422fccf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1422fccf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             PxTriangleMeshGeometry *param_5,PxTransform *param_6,longlong param_7,int param_8)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStackY_138 [32];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_1468387a8 ^ (ulonglong)auStackY_138;
  lVar1 = 0;
  fVar10 = -3.4e+38;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  if (0 < (longlong)param_8) {
    do {
      physx::PxMeshQuery::getTriangle
                (param_5,param_6,*(uint *)(param_7 + lVar1 * 4),(PxTriangle *)&local_f8,(uint *)0x0,
                 (uint *)0x0);
      fVar9 = (local_e8 - local_f4) * (local_d8 - local_f0) -
              (local_e4 - local_f0) * (local_dc - local_f4);
      fVar7 = (local_ec - local_f8) * (local_dc - local_f4) -
              (local_e8 - local_f4) * (local_e0 - local_f8);
      fVar5 = (local_e4 - local_f0) * (local_e0 - local_f8) -
              (local_ec - local_f8) * (local_d8 - local_f0);
      fVar2 = fVar5 * fVar5 + fVar9 * fVar9 + fVar7 * fVar7;
      fVar6 = fVar5;
      fVar8 = fVar7;
      fVar3 = fVar9;
      if ((fVar2 != 1.0) &&
         (fVar6 = DAT_1468b5d94, fVar8 = DAT_1468b5d98, fVar3 = DAT_1468b5d90, 1e-08 <= fVar2)) {
        auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
        fVar3 = auVar4._0_4_;
        fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
        fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
        fVar6 = fVar5 * fVar3;
        fVar8 = fVar7 * fVar3;
        fVar3 = fVar9 * fVar3;
      }
      fVar2 = (fVar6 * *(float *)(param_4 + 0x14) + fVar3 * *(float *)(param_4 + 0x10) +
              fVar8 * *(float *)(param_4 + 0x18)) -
              (local_f4 * fVar6 + local_f8 * fVar3 + local_f0 * fVar8);
      if (fVar10 < fVar2) {
        *param_1 = CONCAT44(fVar6,fVar3);
        *(float *)(param_1 + 1) = fVar8;
        fVar10 = fVar2;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_8);
  }
  return param_1;
}



// FUNCTION 1422fd020 FUN_1422fd020 body=1092 status=ok
// SIG undefined FUN_1422fd020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1422fd020(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,uint param_5,
             undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  char cVar4;
  longlong **pplVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined1 auStack_8278 [32];
  undefined8 *local_8258;
  undefined1 *local_8250;
  uint local_8248;
  undefined8 *local_8240;
  undefined8 local_8238;
  undefined8 local_8230;
  undefined1 local_8228;
  uint local_8218;
  undefined8 local_8210;
  undefined8 local_8208;
  undefined8 local_8200;
  undefined4 uStack_81f8;
  undefined4 uStack_81f4;
  undefined8 local_81f0;
  undefined4 local_81e8;
  undefined4 uStack_81e4;
  undefined4 uStack_81e0;
  undefined4 uStack_81dc;
  undefined2 local_81d8;
  undefined1 local_81d6;
  undefined1 local_81d0 [28];
  undefined1 local_81b4;
  byte local_81b3;
  char local_81b1;
  longlong *local_81b0 [3];
  undefined4 local_8198;
  undefined1 local_8194;
  int *local_8188;
  undefined4 local_8170;
  undefined4 uStack_816c;
  undefined4 uStack_8168;
  undefined4 uStack_8164;
  undefined8 local_8158;
  undefined8 local_8150;
  undefined4 local_8148;
  undefined2 local_8144;
  undefined1 local_8142;
  undefined4 local_8140;
  undefined1 local_813c;
  undefined4 local_8138;
  undefined2 local_8134;
  longlong local_8110;
  undefined8 local_8108;
  longlong local_80f0;
  undefined8 local_80e8;
  undefined1 local_80d8 [48];
  undefined **local_80a8;
  undefined8 local_80a0;
  undefined8 uStack_8098;
  undefined4 local_8090;
  char local_8080;
  undefined1 *local_8078;
  undefined8 local_8070;
  undefined1 local_8068 [32768];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1422fd03f;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_8278;
  local_8208 = param_7;
  local_8210 = param_8;
  local_8218 = param_5;
  if ((*param_2 != 0) && (2 < *param_2 - 2U)) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x970);
  cVar7 = '\0';
  local_81f0 = param_4;
  if (lVar2 != 0) {
    cVar4 = FUN_142498210(lVar2,*(undefined4 *)(param_6 + 4),1);
    cVar7 = '\0';
    if (cVar4 != '\0') {
      cVar7 = '\x01';
    }
  }
  local_8248 = CONCAT31(local_8248._1_3_,1);
  local_8250 = (undefined1 *)local_8210;
  local_8258 = param_6;
  FUN_142309ff0(&local_8200,param_5 & 0xff,*(undefined1 *)((longlong)param_6 + 0x11),local_8208);
  iVar1 = *(int *)(param_6 + 3);
  local_8170 = (undefined4)local_8200;
  uStack_816c = local_8200._4_4_;
  uStack_8168 = uStack_81f8;
  uStack_8164 = uStack_81f4;
  if (iVar1 == 0) {
LAB_1422fd119:
    local_81d8 = 0x17;
  }
  else if (iVar1 == 1) {
    local_81d8 = 0x15;
  }
  else {
    if (iVar1 != 2) goto LAB_1422fd119;
    local_81d8 = 0x16;
  }
  local_81d6 = 0;
  local_81e8 = (undefined4)local_8200;
  uStack_81e4 = local_8200._4_4_;
  uStack_81e0 = uStack_81f8;
  uStack_81dc = uStack_81f4;
  FUN_142300030(local_81d0);
  local_81b3 = local_81b3 | 1;
  pplVar5 = local_81b0 + 1;
  uVar6 = 0;
  local_81b4 = 1;
  do {
    uVar6 = uVar6 + 3;
    pplVar5[-1] = (longlong *)0x0;
    *pplVar5 = (longlong *)0x0;
    pplVar5[1] = (longlong *)0x0;
    pplVar5 = pplVar5 + 3;
  } while (uVar6 < 3);
  pcVar3 = *(char **)(param_1 + 0x218);
  local_81b1 = cVar7;
  local_81b0[0] = (longlong *)FUN_1426e2530();
  if (local_81b0[0] != (longlong *)0x0) {
    (**(code **)(*local_81b0[0] + 0x348))
              (local_81b0[0],
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
               ,0x33);
  }
  local_8090 = 0xffffffff;
  local_68 = 0;
  local_8078 = local_8068;
  local_60 = 0;
  local_8250 = local_81d0;
  local_80a8 = &PTR_processTouches_14503e5c8;
  local_80a0 = 0;
  uStack_8098 = 0;
  local_8080 = '\0';
  local_8258 = (undefined8 *)&local_81e8;
  local_8070 = 0x200;
  (**(code **)(*local_81b0[0] + 0x300))(local_81b0[0],param_2,param_3,&local_80a8);
  if (local_8080 != '\0') {
LAB_1422fd3f3:
    if (local_68 != 0) {
      FMemory::Free();
    }
    uVar6 = 0;
    local_80a8 = &PTR__purecall_14503d320;
    pplVar5 = local_81b0;
    do {
      if (*pplVar5 != (longlong *)0x0) {
        (**(code **)(**pplVar5 + 0x350))();
      }
      *pplVar5 = (longlong *)0x0;
      uVar6 = uVar6 + 1;
      pplVar5 = pplVar5 + 1;
    } while (uVar6 < 3);
    return 1;
  }
  if ((*(char *)(param_6 + 2) != '\0') && (*pcVar3 != '\0')) {
    local_81b0[2] = (longlong *)FUN_1426e2530(pcVar3,2);
    if (local_81b0[2] != (longlong *)0x0) {
      (**(code **)(*local_81b0[2] + 0x348))
                (local_81b0[2],
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
                 ,0x33);
    }
    local_8250 = local_81d0;
    local_8258 = (undefined8 *)&local_81e8;
    (**(code **)(*local_81b0[2] + 0x300))(local_81b0[2],param_2,param_3,&local_80a8);
    if (local_8080 != '\0') goto LAB_1422fd3f3;
  }
  uVar6 = 0;
  if (cVar7 != '\0') {
    local_8198 = 3;
    local_8138 = 0;
    local_8194 = 0;
    local_8150 = 0;
    local_8110 = 0;
    local_8108 = 0;
    local_80f0 = 0;
    local_80e8 = 0;
    local_8148 = 0x10000;
    local_8140 = 0;
    local_8200 = 0;
    local_8158 = 0;
    local_8144 = 0;
    local_8134 = 0x101;
    local_813c = 0;
    local_8142 = 0;
    bVar8 = *(char *)((longlong)param_6 + 0x16) == '\0';
    local_8240 = param_6;
    local_8188 = param_2;
    if (bVar8) {
      FUN_1423007f0(&local_8158,param_6);
      local_8240 = &local_8158;
    }
    local_8142 = bVar8;
    local_8250 = (undefined1 *)P2UTransform(local_80d8,param_3);
    local_8228 = 1;
    local_8230 = local_8210;
    local_8238 = local_8208;
    local_8248 = local_8218;
    local_8258 = (undefined8 *)&local_8198;
    FUN_1424a5540(lVar2,*(undefined4 *)(param_6 + 4),local_81f0,0);
    if (local_80f0 != 0) {
      FMemory::Free();
    }
    if (local_8110 != 0) {
      FMemory::Free();
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  local_80a8 = &PTR__purecall_14503d320;
  pplVar5 = local_81b0;
  do {
    if (*pplVar5 != (longlong *)0x0) {
      (**(code **)(**pplVar5 + 0x350))();
    }
    *pplVar5 = (longlong *)0x0;
    uVar6 = uVar6 + 1;
    pplVar5 = pplVar5 + 1;
  } while (uVar6 < 3);
  return 0;
}



// FUNCTION 1422fd470 FUN_1422fd470 body=1044 status=ok
// SIG undefined FUN_1422fd470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1422fd470(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,uint param_5,
             longlong param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  char cVar4;
  longlong **pplVar5;
  uint uVar6;
  char cVar7;
  undefined1 auStack_8278 [32];
  undefined4 *local_8258;
  undefined1 *local_8250;
  uint local_8248;
  longlong local_8240;
  undefined8 local_8238;
  undefined8 local_8230;
  undefined1 local_8228;
  uint local_8218;
  undefined8 local_8210;
  undefined8 local_8208;
  undefined8 local_8200;
  undefined4 uStack_81f8;
  undefined4 uStack_81f4;
  undefined8 local_81f0;
  undefined4 local_81e8;
  undefined4 uStack_81e4;
  undefined4 uStack_81e0;
  undefined4 uStack_81dc;
  undefined2 local_81d8;
  undefined1 local_81d6;
  longlong *local_81d0 [3];
  undefined1 local_81b8 [28];
  undefined1 local_819c;
  char local_8199;
  undefined4 local_8198;
  undefined1 local_8194;
  int *local_8188;
  undefined4 local_8170;
  undefined4 uStack_816c;
  undefined4 uStack_8168;
  undefined4 uStack_8164;
  undefined8 local_8158;
  undefined8 local_8150;
  undefined4 local_8148;
  undefined2 local_8144;
  undefined1 local_8142;
  undefined4 local_8140;
  undefined1 local_813c;
  undefined4 local_8138;
  undefined2 local_8134;
  longlong local_8110;
  undefined8 local_8108;
  longlong local_80f0;
  undefined8 local_80e8;
  undefined1 local_80d8 [48];
  undefined **local_80a8;
  undefined8 local_80a0;
  undefined8 uStack_8098;
  undefined4 local_8090;
  char local_8080;
  undefined1 *local_8078;
  undefined8 local_8070;
  undefined1 local_8068 [32768];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1422fd48f;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_8278;
  local_8208 = param_7;
  local_8210 = param_8;
  local_8218 = param_5;
  if ((*param_2 != 0) && (2 < *param_2 - 2U)) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x970);
  cVar7 = '\0';
  local_81f0 = param_4;
  if (lVar2 != 0) {
    cVar4 = FUN_142498210(lVar2,*(undefined4 *)(param_6 + 0x20),1);
    cVar7 = '\0';
    if (cVar4 != '\0') {
      cVar7 = '\x01';
    }
  }
  local_8248 = local_8248 & 0xffffff00;
  local_8250 = (undefined1 *)local_8210;
  local_8258 = (undefined4 *)param_6;
  FUN_142309ff0(&local_8200,param_5 & 0xff,*(undefined1 *)(param_6 + 0x11),local_8208);
  iVar1 = *(int *)(param_6 + 0x18);
  local_8170 = (undefined4)local_8200;
  uStack_816c = local_8200._4_4_;
  uStack_8168 = uStack_81f8;
  uStack_8164 = uStack_81f4;
  if (iVar1 == 0) {
LAB_1422fd569:
    local_81d8 = 0x17;
  }
  else if (iVar1 == 1) {
    local_81d8 = 0x15;
  }
  else {
    if (iVar1 != 2) goto LAB_1422fd569;
    local_81d8 = 0x16;
  }
  local_81d6 = 0;
  local_81e8 = (undefined4)local_8200;
  uStack_81e4 = local_8200._4_4_;
  uStack_81e0 = uStack_81f8;
  uStack_81dc = uStack_81f4;
  FUN_142300030(local_81b8);
  uVar6 = 0;
  local_819c = 1;
  pplVar5 = local_81d0 + 1;
  local_8199 = cVar7;
  do {
    uVar6 = uVar6 + 3;
    pplVar5[-1] = (longlong *)0x0;
    *pplVar5 = (longlong *)0x0;
    pplVar5[1] = (longlong *)0x0;
    pplVar5 = pplVar5 + 3;
  } while (uVar6 < 3);
  pcVar3 = *(char **)(param_1 + 0x218);
  local_81d0[0] = (longlong *)FUN_1426e2530();
  if (local_81d0[0] != (longlong *)0x0) {
    (**(code **)(*local_81d0[0] + 0x348))
              (local_81d0[0],
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
               ,0x33);
  }
  local_8090 = 0xffffffff;
  local_68 = 0;
  local_8078 = local_8068;
  local_60 = 0;
  local_8250 = local_81b8;
  local_80a8 = &PTR_processTouches_14503e5c8;
  local_80a0 = 0;
  uStack_8098 = 0;
  local_8080 = '\0';
  local_8258 = &local_81e8;
  local_8070 = 0x200;
  (**(code **)(*local_81d0[0] + 0x300))(local_81d0[0],param_2,param_3,&local_80a8);
  if (local_8080 != '\0') {
LAB_1422fd814:
    if (local_68 != 0) {
      FMemory::Free();
    }
    uVar6 = 0;
    local_80a8 = &PTR__purecall_14503d320;
    pplVar5 = local_81d0;
    do {
      if (*pplVar5 != (longlong *)0x0) {
        (**(code **)(**pplVar5 + 0x350))();
      }
      *pplVar5 = (longlong *)0x0;
      uVar6 = uVar6 + 1;
      pplVar5 = pplVar5 + 1;
    } while (uVar6 < 3);
    return 1;
  }
  if ((*(char *)(param_6 + 0x10) != '\0') && (*pcVar3 != '\0')) {
    local_81d0[2] = (longlong *)FUN_1426e2530(pcVar3,2);
    if (local_81d0[2] != (longlong *)0x0) {
      (**(code **)(*local_81d0[2] + 0x348))
                (local_81d0[2],
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
                 ,0x33);
    }
    local_8250 = local_81b8;
    local_8258 = &local_81e8;
    (**(code **)(*local_81d0[2] + 0x300))(local_81d0[2],param_2,param_3,&local_80a8);
    if (local_8080 != '\0') goto LAB_1422fd814;
  }
  if (cVar7 != '\0') {
    local_8198 = 3;
    local_8158 = 0;
    local_8138 = 0;
    local_8194 = 0;
    local_8150 = 0;
    local_8110 = 0;
    local_8108 = 0;
    local_80f0 = 0;
    local_80e8 = 0;
    local_8148 = 0x10000;
    local_8140 = 0;
    local_8200 = 0;
    local_8144 = 0;
    local_8134 = 0x101;
    local_813c = 0;
    local_8142 = 0;
    local_8188 = param_2;
    local_8250 = (undefined1 *)P2UTransform(local_80d8,param_3);
    local_8228 = 0;
    local_8230 = local_8210;
    local_8238 = local_8208;
    local_8240 = param_6;
    local_8248 = local_8218;
    local_8258 = &local_8198;
    FUN_1424a5540(lVar2,*(undefined4 *)(param_6 + 0x20),local_81f0,0);
    if (local_80f0 != 0) {
      FMemory::Free();
    }
    if (local_8110 != 0) {
      FMemory::Free();
    }
  }
  uVar6 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  local_80a8 = &PTR__purecall_14503d320;
  pplVar5 = local_81d0;
  do {
    if (*pplVar5 != (longlong *)0x0) {
      (**(code **)(**pplVar5 + 0x350))();
    }
    *pplVar5 = (longlong *)0x0;
    uVar6 = uVar6 + 1;
    pplVar5 = pplVar5 + 1;
  } while (uVar6 < 3);
  return 0;
}



// FUNCTION 1422fd890 FUN_1422fd890 body=1140 status=ok
// SIG undefined FUN_1422fd890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1422fd890(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,uint param_5,
             longlong param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  longlong **pplVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 *puVar11;
  char cVar12;
  int *piVar13;
  undefined1 auStack_8288 [32];
  undefined4 *local_8268;
  undefined1 *local_8260;
  uint local_8258;
  longlong local_8250;
  undefined8 local_8248;
  undefined8 local_8240;
  undefined1 local_8238;
  undefined8 local_8228;
  uint local_8220;
  int *local_8218;
  undefined8 local_8210;
  undefined8 local_8208;
  undefined8 local_8200;
  undefined4 local_81f8;
  undefined4 uStack_81f4;
  undefined4 uStack_81f0;
  undefined4 uStack_81ec;
  undefined2 local_81e8;
  undefined1 local_81e6;
  longlong *local_81e0 [3];
  undefined4 local_81c8;
  undefined4 uStack_81c4;
  undefined4 uStack_81c0;
  undefined4 uStack_81bc;
  undefined1 local_81b8 [28];
  undefined1 local_819c;
  char local_8199;
  undefined4 local_8198;
  undefined1 local_8194;
  int *local_8188;
  undefined4 local_8170;
  undefined4 uStack_816c;
  undefined4 uStack_8168;
  undefined4 uStack_8164;
  undefined8 local_8158;
  undefined8 local_8150;
  undefined4 local_8148;
  undefined2 local_8144;
  undefined1 local_8142;
  undefined4 local_8140;
  undefined1 local_813c;
  undefined4 local_8138;
  undefined2 local_8134;
  longlong local_8110;
  undefined8 local_8108;
  longlong local_80f0;
  undefined8 local_80e8;
  undefined1 local_80d8 [48];
  undefined **local_80a8;
  undefined8 local_80a0;
  undefined8 uStack_8098;
  undefined4 local_8090;
  undefined1 local_8080;
  undefined1 *local_8078;
  undefined8 local_8070;
  undefined1 local_8068 [16384];
  undefined1 local_4068 [16384];
  undefined1 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_8288;
  uVar7 = 0;
  local_8208 = param_8;
  local_8220 = param_5;
  local_8200 = param_7;
  if ((*param_2 != 0) && (2 < *param_2 - 2U)) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x970);
  cVar12 = '\0';
  local_8228 = param_4;
  local_8218 = param_2;
  local_8210 = param_3;
  if (lVar3 != 0) {
    cVar6 = FUN_142498210(lVar3,*(undefined4 *)(param_6 + 0x20),1);
    cVar12 = '\0';
    if (cVar6 != '\0') {
      cVar12 = '\x01';
    }
  }
  local_8258 = CONCAT31(local_8258._1_3_,1);
  local_8260 = (undefined1 *)local_8208;
  local_8268 = (undefined4 *)param_6;
  FUN_142309ff0(&local_81c8,param_5 & 0xff,*(undefined1 *)(param_6 + 0x11),local_8200);
  iVar1 = *(int *)(param_6 + 0x18);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      local_81e8 = 5;
      goto LAB_1422fd99b;
    }
    if (iVar1 == 2) {
      local_81e8 = 6;
      goto LAB_1422fd99b;
    }
  }
  local_81e8 = 7;
LAB_1422fd99b:
  local_81e6 = 0;
  local_81f8 = local_81c8;
  uStack_81f4 = uStack_81c4;
  uStack_81f0 = uStack_81c0;
  uStack_81ec = uStack_81bc;
  local_8170 = local_81c8;
  uStack_816c = uStack_81c4;
  uStack_8168 = uStack_81c0;
  uStack_8164 = uStack_81bc;
  FUN_142300030(local_81b8);
  uVar10 = 0;
  local_819c = 1;
  pplVar8 = local_81e0 + 1;
  local_8199 = cVar12;
  do {
    uVar10 = uVar10 + 3;
    pplVar8[-1] = (longlong *)0x0;
    *pplVar8 = (longlong *)0x0;
    pplVar8[1] = (longlong *)0x0;
    pplVar8 = pplVar8 + 3;
  } while (uVar10 < 3);
  pcVar4 = *(char **)(param_1 + 0x218);
  plVar9 = (longlong *)FUN_1426e2530();
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x348))
              (plVar9,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
               ,0x33);
  }
  local_8078 = local_8068;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_8260 = local_81b8;
  local_80a8 = &PTR_processTouches_14503e5c8;
  local_80a0 = 0;
  uStack_8098 = 0;
  local_8090 = 0xffffffff;
  local_8268 = &local_81f8;
  local_8080 = 0;
  local_8070 = 0x200;
  local_81e0[0] = plVar9;
  (**(code **)(*plVar9 + 0x300))(plVar9,param_2,local_8210,&local_80a8);
  iVar1 = (int)local_60;
  if ((int)local_60 == 0) {
    (**(code **)(*plVar9 + 0x350))(plVar9);
    local_81e0[0] = (longlong *)0x0;
  }
  piVar13 = local_8218;
  iVar2 = (int)local_60;
  if ((*(char *)(param_6 + 0x10) != '\0') && (*pcVar4 != '\0')) {
    plVar9 = (longlong *)FUN_1426e2530(pcVar4,2);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x348))
                (plVar9,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
                 ,0x33);
    }
    piVar13 = local_8218;
    local_8260 = local_81b8;
    local_8268 = &local_81f8;
    local_81e0[2] = plVar9;
    (**(code **)(*plVar9 + 0x300))(plVar9,local_8218,local_8210,&local_80a8);
    iVar2 = (int)local_60;
    if ((int)local_60 == iVar1) {
      (**(code **)(*plVar9 + 0x350))(plVar9);
      local_81e0[2] = (longlong *)0x0;
      iVar2 = (int)local_60;
    }
  }
  uVar5 = local_8228;
  uVar10 = 0;
  if (0 < iVar2) {
    puVar11 = local_4068;
    if (local_68 != (undefined1 *)0x0) {
      puVar11 = local_68;
    }
    uVar7 = FUN_142308620(iVar2,puVar11,&local_81c8,local_8228);
  }
  if (cVar12 != '\0') {
    local_8228 = 0;
    local_8158 = 0;
    local_8138 = 0;
    local_8198 = 3;
    local_8194 = 0;
    local_8150 = 0;
    local_8110 = 0;
    local_8108 = 0;
    local_80f0 = 0;
    local_80e8 = 0;
    local_8148 = 0x10000;
    local_8140 = 0;
    local_8144 = 0;
    local_8134 = 0x101;
    local_813c = 0;
    local_8142 = 0;
    local_8188 = piVar13;
    local_8260 = (undefined1 *)P2UTransform(local_80d8,local_8210);
    local_8238 = 1;
    local_8240 = local_8208;
    local_8248 = local_8200;
    local_8250 = param_6;
    local_8258 = local_8220;
    local_8268 = &local_8198;
    FUN_1424a5540(lVar3,*(undefined4 *)(param_6 + 0x20),uVar5,1);
    if (local_80f0 != 0) {
      FMemory::Free();
    }
    if (local_8110 != 0) {
      FMemory::Free();
    }
  }
  if (local_68 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  local_80a8 = &PTR__purecall_14503d320;
  pplVar8 = local_81e0;
  do {
    if (*pplVar8 != (longlong *)0x0) {
      (**(code **)(**pplVar8 + 0x350))();
    }
    *pplVar8 = (longlong *)0x0;
    uVar10 = uVar10 + 1;
    pplVar8 = pplVar8 + 1;
  } while (uVar10 < 3);
  return uVar7;
}



// FUNCTION 1422fdd10 FUN_1422fdd10 body=1136 status=ok
// SIG undefined FUN_1422fdd10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422fdd10(longlong param_1,longlong param_2,char param_3)

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
  undefined1 auStack_178 [32];
  char local_158;
  longlong *local_150;
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  undefined4 local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  int local_120;
  int local_11c;
  longlong *local_118;
  int iStack_110;
  uint uStack_10c;
  uint *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 uStack_e8;
  uint *puStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined1 local_c8 [128];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  *(undefined4 *)(param_2 + 0x88) = 0;
  local_158 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x8c)) {
    FUN_1407418a0(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_144 = 1;
  local_150 = (longlong *)(param_1 + 0x2b0);
  local_128 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_140 = (uint *)(param_1 + 0x2c0);
  local_11c = 0;
  iVar13 = 0;
  local_148 = 0;
  uStack_134 = 0;
  iStack_130 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_140;
    }
    uVar12 = *puVar10;
    iStack_130 = 0;
    local_148 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_148;
      iStack_130 = iStack_130 + 0x20;
      iVar5 = local_148 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
      local_148 = iVar5;
      if (bVar3) goto LAB_1422fde30;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_144 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_134 = (iStack_130 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_134) {
LAB_1422fde30:
      uStack_134 = uVar1;
    }
  }
  local_138 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_e8 = CONCAT44(uStack_144,local_148);
  uStack_100 = 0xffffffff;
  uStack_fc = uStack_134;
  local_f8 = CONCAT44(uStack_12c,iStack_130);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_110 = local_148;
  uStack_10c = uStack_144;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_140;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1422fdefd;
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
LAB_1422fdefd:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_108 = puStack_140;
  local_f0 = local_150;
  puStack_e0 = puStack_140;
  uStack_d0 = local_f8;
  local_118 = local_150;
  uStack_d8 = uStack_100;
  uStack_d4 = uStack_fc;
  while( true ) {
    if ((uStack_fc == uVar12) && (local_108 == puStack_140)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_118 == local_150)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_118 + (longlong)(int)uStack_fc * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_1429ff160();
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
        iVar2 = *(int *)(param_2 + 0x88);
        *(int *)(param_2 + 0x88) = iVar2 + 1;
        if (*(int *)(param_2 + 0x8c) < iVar2 + 1) {
          TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x80);
        if (*(longlong *)(param_2 + 0x80) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_158 != '\0') && (lVar7 != 0)) {
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
        local_120 = iVar13 + 1;
        if (iVar5 < local_120) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128,iVar13);
          plVar11 = local_128;
          iVar5 = local_11c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_120;
      }
    }
    uStack_100 = uStack_100 & ~uStack_10c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_110);
  }
  if (local_158 != '\0') {
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
          FUN_1422fdd10(*(longlong *)(*plVar14 + 0x2d8),local_c8,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 0x88);
            if (*(int *)(param_2 + 0x8c) < (int)local_40 + iVar5) {
              FUN_1407418a0(param_2);
              iVar5 = *(int *)(param_2 + 0x88);
            }
            _Src = local_c8;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0x80);
            if (*(longlong *)(param_2 + 0x80) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + iVar13;
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



// FUNCTION 1422fe180 FUN_1422fe180 body=450 status=ok
// SIG undefined FUN_1422fe180(void)

void FUN_1422fe180(undefined8 *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
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
joined_r0x0001422fe1aa:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar8 * 2;
        iVar12 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if (*(byte *)(param_1 + ((longlong)iVar9 + 2) * 3) <
              *(byte *)(param_1 + (longlong)iVar12 * 3)) {
            iVar12 = iVar9;
          }
          iVar12 = iVar12 + 1;
        }
        pbVar1 = (byte *)(param_1 + (longlong)iVar12 * 3);
        pbVar2 = (byte *)(param_1 + (longlong)iVar8 * 3);
        if (*(byte *)(param_1 + (longlong)iVar8 * 3) < *pbVar1) {
          if (pbVar2 != pbVar1) {
            uVar5 = *(undefined8 *)(pbVar1 + 8);
            uVar6 = *(undefined8 *)pbVar2;
            uVar7 = *(undefined8 *)(pbVar2 + 8);
            uVar3 = *(undefined8 *)(pbVar2 + 0x10);
            *(undefined8 *)pbVar2 = *(undefined8 *)pbVar1;
            *(undefined8 *)(pbVar2 + 8) = uVar5;
            *(undefined8 *)(pbVar2 + 0x10) = *(undefined8 *)(pbVar1 + 0x10);
            *(undefined8 *)pbVar1 = uVar6;
            *(undefined8 *)(pbVar1 + 8) = uVar7;
            *(undefined8 *)(pbVar1 + 0x10) = uVar3;
          }
          iVar9 = iVar12 * 2 + 1;
          iVar8 = iVar12;
          goto joined_r0x0001422fe1aa;
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
            if (*(byte *)(param_1 + ((longlong)iVar4 + 2) * 3) <
                *(byte *)(param_1 + (longlong)iVar9 * 3)) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          pbVar1 = (byte *)(param_1 + (longlong)iVar9 * 3);
          pbVar2 = (byte *)(param_1 + (longlong)iVar8 * 3);
          if (*pbVar1 <= *(byte *)(param_1 + (longlong)iVar8 * 3)) break;
          if (pbVar2 != pbVar1) {
            uVar5 = *(undefined8 *)(pbVar1 + 8);
            uVar6 = *(undefined8 *)pbVar2;
            uVar7 = *(undefined8 *)(pbVar2 + 8);
            uVar3 = *(undefined8 *)(pbVar2 + 0x10);
            *(undefined8 *)pbVar2 = *(undefined8 *)pbVar1;
            *(undefined8 *)(pbVar2 + 8) = uVar5;
            *(undefined8 *)(pbVar2 + 0x10) = *(undefined8 *)(pbVar1 + 0x10);
            *(undefined8 *)pbVar1 = uVar6;
            *(undefined8 *)(pbVar1 + 8) = uVar7;
            *(undefined8 *)(pbVar1 + 0x10) = uVar3;
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



// FUNCTION 1422fe350 FUN_1422fe350 body=1199 status=ok
// SIG undefined FUN_1422fe350(void)

void FUN_1422fe350(undefined8 *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
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
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined8 *puVar27;
  bool bVar28;
  byte *pbVar29;
  byte *pbVar30;
  
  iVar23 = (param_2 + -2) / 2;
  if (-1 < iVar23) {
    iVar24 = iVar23 * 2 + 1;
    iVar3 = iVar24;
    iVar26 = iVar23;
joined_r0x0001422fe399:
    do {
      if (iVar24 < param_2) {
        iVar24 = iVar23 * 2;
        iVar25 = iVar24 + 1;
        if (iVar24 + 2 < param_2) {
          fVar1 = *(float *)((longlong)(param_1 + ((longlong)iVar24 + 2) * 0x12) + 0xc);
          fVar2 = *(float *)((longlong)param_1 + (longlong)iVar25 * 0x90 + 0xc);
          if (fVar1 == fVar2) {
            bVar28 = true;
            if ((*(byte *)(param_1 + ((longlong)iVar24 + 2) * 0x12) & 1) !=
                (*(byte *)(param_1 + (longlong)iVar25 * 0x12) & 1)) {
              bVar28 = (bool)(*(byte *)(param_1 + (longlong)iVar25 * 0x12) & 1);
            }
          }
          else {
            bVar28 = fVar1 < fVar2;
          }
          if (bVar28 != false) {
            iVar25 = iVar24;
          }
          iVar25 = iVar25 + 1;
        }
        pbVar30 = (byte *)(param_1 + (longlong)iVar23 * 0x12);
        pbVar29 = (byte *)(param_1 + (longlong)iVar25 * 0x12);
        if (*(float *)(pbVar30 + 0xc) == *(float *)(pbVar29 + 0xc)) {
          bVar28 = true;
          if ((*pbVar30 & 1) != (*pbVar29 & 1)) {
            bVar28 = (bool)(*pbVar29 & 1);
          }
        }
        else {
          bVar28 = *(float *)(pbVar30 + 0xc) < *(float *)(pbVar29 + 0xc);
        }
        if (bVar28 != false) {
          if (pbVar30 != pbVar29) {
            uVar4 = *(undefined8 *)(pbVar29 + 8);
            uVar5 = *(undefined8 *)pbVar30;
            uVar6 = *(undefined8 *)(pbVar30 + 8);
            uVar7 = *(undefined8 *)(pbVar30 + 0x10);
            uVar8 = *(undefined8 *)(pbVar30 + 0x18);
            uVar9 = *(undefined8 *)(pbVar30 + 0x20);
            uVar10 = *(undefined8 *)(pbVar30 + 0x28);
            uVar11 = *(undefined8 *)(pbVar30 + 0x30);
            uVar12 = *(undefined8 *)(pbVar30 + 0x38);
            uVar13 = *(undefined8 *)(pbVar30 + 0x40);
            uVar14 = *(undefined8 *)(pbVar30 + 0x48);
            uVar15 = *(undefined8 *)(pbVar30 + 0x50);
            uVar16 = *(undefined8 *)(pbVar30 + 0x58);
            uVar17 = *(undefined8 *)(pbVar30 + 0x60);
            uVar18 = *(undefined8 *)(pbVar30 + 0x68);
            uVar19 = *(undefined8 *)(pbVar30 + 0x70);
            uVar20 = *(undefined8 *)(pbVar30 + 0x78);
            uVar21 = *(undefined8 *)(pbVar30 + 0x80);
            uVar22 = *(undefined8 *)(pbVar30 + 0x88);
            *(undefined8 *)pbVar30 = *(undefined8 *)pbVar29;
            *(undefined8 *)(pbVar30 + 8) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x18);
            *(undefined8 *)(pbVar30 + 0x10) = *(undefined8 *)(pbVar29 + 0x10);
            *(undefined8 *)(pbVar30 + 0x18) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x28);
            *(undefined8 *)(pbVar30 + 0x20) = *(undefined8 *)(pbVar29 + 0x20);
            *(undefined8 *)(pbVar30 + 0x28) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x38);
            *(undefined8 *)(pbVar30 + 0x30) = *(undefined8 *)(pbVar29 + 0x30);
            *(undefined8 *)(pbVar30 + 0x38) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x48);
            *(undefined8 *)(pbVar30 + 0x40) = *(undefined8 *)(pbVar29 + 0x40);
            *(undefined8 *)(pbVar30 + 0x48) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x58);
            *(undefined8 *)(pbVar30 + 0x50) = *(undefined8 *)(pbVar29 + 0x50);
            *(undefined8 *)(pbVar30 + 0x58) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x68);
            *(undefined8 *)(pbVar30 + 0x60) = *(undefined8 *)(pbVar29 + 0x60);
            *(undefined8 *)(pbVar30 + 0x68) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x78);
            *(undefined8 *)(pbVar30 + 0x70) = *(undefined8 *)(pbVar29 + 0x70);
            *(undefined8 *)(pbVar30 + 0x78) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x88);
            *(undefined8 *)(pbVar30 + 0x80) = *(undefined8 *)(pbVar29 + 0x80);
            *(undefined8 *)(pbVar30 + 0x88) = uVar4;
            *(undefined8 *)pbVar29 = uVar5;
            *(undefined8 *)(pbVar29 + 8) = uVar6;
            *(undefined8 *)(pbVar29 + 0x10) = uVar7;
            *(undefined8 *)(pbVar29 + 0x18) = uVar8;
            *(undefined8 *)(pbVar29 + 0x20) = uVar9;
            *(undefined8 *)(pbVar29 + 0x28) = uVar10;
            *(undefined8 *)(pbVar29 + 0x30) = uVar11;
            *(undefined8 *)(pbVar29 + 0x38) = uVar12;
            *(undefined8 *)(pbVar29 + 0x40) = uVar13;
            *(undefined8 *)(pbVar29 + 0x48) = uVar14;
            *(undefined8 *)(pbVar29 + 0x50) = uVar15;
            *(undefined8 *)(pbVar29 + 0x58) = uVar16;
            *(undefined8 *)(pbVar29 + 0x60) = uVar17;
            *(undefined8 *)(pbVar29 + 0x68) = uVar18;
            *(undefined8 *)(pbVar29 + 0x70) = uVar19;
            *(undefined8 *)(pbVar29 + 0x78) = uVar20;
            *(undefined8 *)(pbVar29 + 0x80) = uVar21;
            *(undefined8 *)(pbVar29 + 0x88) = uVar22;
          }
          iVar24 = iVar25 * 2 + 1;
          iVar23 = iVar25;
          goto joined_r0x0001422fe399;
        }
      }
      iVar24 = iVar3 + -2;
      iVar23 = iVar26 + -1;
      iVar3 = iVar24;
      iVar26 = iVar23;
    } while (-1 < iVar23);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar27 = param_1 + (longlong)param_2 * 0x12;
    do {
      if (param_1 != puVar27) {
        uVar4 = puVar27[1];
        uVar5 = *param_1;
        uVar6 = param_1[1];
        uVar7 = param_1[2];
        uVar8 = param_1[3];
        uVar9 = param_1[4];
        uVar10 = param_1[5];
        uVar11 = param_1[6];
        uVar12 = param_1[7];
        uVar13 = param_1[8];
        uVar14 = param_1[9];
        uVar15 = param_1[10];
        uVar16 = param_1[0xb];
        uVar17 = param_1[0xc];
        uVar18 = param_1[0xd];
        uVar19 = param_1[0xe];
        uVar20 = param_1[0xf];
        uVar21 = param_1[0x10];
        uVar22 = param_1[0x11];
        *param_1 = *puVar27;
        param_1[1] = uVar4;
        uVar4 = puVar27[3];
        param_1[2] = puVar27[2];
        param_1[3] = uVar4;
        uVar4 = puVar27[5];
        param_1[4] = puVar27[4];
        param_1[5] = uVar4;
        uVar4 = puVar27[7];
        param_1[6] = puVar27[6];
        param_1[7] = uVar4;
        uVar4 = puVar27[9];
        param_1[8] = puVar27[8];
        param_1[9] = uVar4;
        uVar4 = puVar27[0xb];
        param_1[10] = puVar27[10];
        param_1[0xb] = uVar4;
        uVar4 = puVar27[0xd];
        param_1[0xc] = puVar27[0xc];
        param_1[0xd] = uVar4;
        uVar4 = puVar27[0xf];
        param_1[0xe] = puVar27[0xe];
        param_1[0xf] = uVar4;
        uVar4 = puVar27[0x11];
        param_1[0x10] = puVar27[0x10];
        param_1[0x11] = uVar4;
        *puVar27 = uVar5;
        puVar27[1] = uVar6;
        puVar27[2] = uVar7;
        puVar27[3] = uVar8;
        puVar27[4] = uVar9;
        puVar27[5] = uVar10;
        puVar27[6] = uVar11;
        puVar27[7] = uVar12;
        puVar27[8] = uVar13;
        puVar27[9] = uVar14;
        puVar27[10] = uVar15;
        puVar27[0xb] = uVar16;
        puVar27[0xc] = uVar17;
        puVar27[0xd] = uVar18;
        puVar27[0xe] = uVar19;
        puVar27[0xf] = uVar20;
        puVar27[0x10] = uVar21;
        puVar27[0x11] = uVar22;
      }
      iVar23 = 0;
      if (1 < param_2) {
        do {
          iVar3 = iVar23 * 2;
          iVar24 = iVar3 + 1;
          if (iVar3 + 2 < param_2) {
            fVar1 = *(float *)((longlong)(param_1 + ((longlong)iVar3 + 2) * 0x12) + 0xc);
            fVar2 = *(float *)((longlong)param_1 + (longlong)iVar24 * 0x90 + 0xc);
            if (fVar1 == fVar2) {
              bVar28 = true;
              if ((*(byte *)(param_1 + ((longlong)iVar3 + 2) * 0x12) & 1) !=
                  (*(byte *)(param_1 + (longlong)iVar24 * 0x12) & 1)) {
                bVar28 = (bool)(*(byte *)(param_1 + (longlong)iVar24 * 0x12) & 1);
              }
            }
            else {
              bVar28 = fVar1 < fVar2;
            }
            if (bVar28 != false) {
              iVar24 = iVar3;
            }
            iVar24 = iVar24 + 1;
          }
          pbVar30 = (byte *)(param_1 + (longlong)iVar23 * 0x12);
          pbVar29 = (byte *)(param_1 + (longlong)iVar24 * 0x12);
          if (*(float *)(pbVar30 + 0xc) == *(float *)(pbVar29 + 0xc)) {
            bVar28 = true;
            if ((*pbVar30 & 1) != (*pbVar29 & 1)) {
              bVar28 = (bool)(*pbVar29 & 1);
            }
          }
          else {
            bVar28 = *(float *)(pbVar30 + 0xc) < *(float *)(pbVar29 + 0xc);
          }
          if (bVar28 == false) break;
          if (pbVar30 != pbVar29) {
            uVar4 = *(undefined8 *)(pbVar29 + 8);
            uVar5 = *(undefined8 *)pbVar30;
            uVar6 = *(undefined8 *)(pbVar30 + 8);
            uVar7 = *(undefined8 *)(pbVar30 + 0x10);
            uVar8 = *(undefined8 *)(pbVar30 + 0x18);
            uVar9 = *(undefined8 *)(pbVar30 + 0x20);
            uVar10 = *(undefined8 *)(pbVar30 + 0x28);
            uVar11 = *(undefined8 *)(pbVar30 + 0x30);
            uVar12 = *(undefined8 *)(pbVar30 + 0x38);
            uVar13 = *(undefined8 *)(pbVar30 + 0x40);
            uVar14 = *(undefined8 *)(pbVar30 + 0x48);
            uVar15 = *(undefined8 *)(pbVar30 + 0x50);
            uVar16 = *(undefined8 *)(pbVar30 + 0x58);
            uVar17 = *(undefined8 *)(pbVar30 + 0x60);
            uVar18 = *(undefined8 *)(pbVar30 + 0x68);
            uVar19 = *(undefined8 *)(pbVar30 + 0x70);
            uVar20 = *(undefined8 *)(pbVar30 + 0x78);
            uVar21 = *(undefined8 *)(pbVar30 + 0x80);
            uVar22 = *(undefined8 *)(pbVar30 + 0x88);
            *(undefined8 *)pbVar30 = *(undefined8 *)pbVar29;
            *(undefined8 *)(pbVar30 + 8) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x18);
            *(undefined8 *)(pbVar30 + 0x10) = *(undefined8 *)(pbVar29 + 0x10);
            *(undefined8 *)(pbVar30 + 0x18) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x28);
            *(undefined8 *)(pbVar30 + 0x20) = *(undefined8 *)(pbVar29 + 0x20);
            *(undefined8 *)(pbVar30 + 0x28) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x38);
            *(undefined8 *)(pbVar30 + 0x30) = *(undefined8 *)(pbVar29 + 0x30);
            *(undefined8 *)(pbVar30 + 0x38) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x48);
            *(undefined8 *)(pbVar30 + 0x40) = *(undefined8 *)(pbVar29 + 0x40);
            *(undefined8 *)(pbVar30 + 0x48) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x58);
            *(undefined8 *)(pbVar30 + 0x50) = *(undefined8 *)(pbVar29 + 0x50);
            *(undefined8 *)(pbVar30 + 0x58) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x68);
            *(undefined8 *)(pbVar30 + 0x60) = *(undefined8 *)(pbVar29 + 0x60);
            *(undefined8 *)(pbVar30 + 0x68) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x78);
            *(undefined8 *)(pbVar30 + 0x70) = *(undefined8 *)(pbVar29 + 0x70);
            *(undefined8 *)(pbVar30 + 0x78) = uVar4;
            uVar4 = *(undefined8 *)(pbVar29 + 0x88);
            *(undefined8 *)(pbVar30 + 0x80) = *(undefined8 *)(pbVar29 + 0x80);
            *(undefined8 *)(pbVar30 + 0x88) = uVar4;
            *(undefined8 *)pbVar29 = uVar5;
            *(undefined8 *)(pbVar29 + 8) = uVar6;
            *(undefined8 *)(pbVar29 + 0x10) = uVar7;
            *(undefined8 *)(pbVar29 + 0x18) = uVar8;
            *(undefined8 *)(pbVar29 + 0x20) = uVar9;
            *(undefined8 *)(pbVar29 + 0x28) = uVar10;
            *(undefined8 *)(pbVar29 + 0x30) = uVar11;
            *(undefined8 *)(pbVar29 + 0x38) = uVar12;
            *(undefined8 *)(pbVar29 + 0x40) = uVar13;
            *(undefined8 *)(pbVar29 + 0x48) = uVar14;
            *(undefined8 *)(pbVar29 + 0x50) = uVar15;
            *(undefined8 *)(pbVar29 + 0x58) = uVar16;
            *(undefined8 *)(pbVar29 + 0x60) = uVar17;
            *(undefined8 *)(pbVar29 + 0x68) = uVar18;
            *(undefined8 *)(pbVar29 + 0x70) = uVar19;
            *(undefined8 *)(pbVar29 + 0x78) = uVar20;
            *(undefined8 *)(pbVar29 + 0x80) = uVar21;
            *(undefined8 *)(pbVar29 + 0x88) = uVar22;
          }
          iVar23 = iVar24;
        } while (iVar24 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar27 = puVar27 + -0x12;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1422fe800 FUN_1422fe800 body=816 status=ok
// SIG undefined FUN_1422fe800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1422fe800(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar13;
  byte *pbVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  byte *pbVar12;
  byte *pbVar14;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x18 + -0x18;
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar17 = _guard_xfg_dispatch_icall_nop(fVar17);
    local_328 = (undefined4)(longlong)(fVar17 + fVar17);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar16 = &local_338;
    do {
      pbVar11 = (byte *)*plVar16;
      pbVar10 = (byte *)plVar16[1];
      lVar1 = plVar16[2];
      local_348._0_4_ = (int)lVar1;
      lVar9 = ((longlong)pbVar10 - (longlong)pbVar11) / 0x18 + 1;
      pbVar15 = pbVar11;
      if ((int)local_348 != 0) {
LAB_1422fe8f0:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          pbVar11 = pbVar15 + (lVar9 >> 1) * 0x18;
          if (pbVar11 != pbVar15) {
            uVar3 = *(undefined4 *)(pbVar15 + 4);
            uVar4 = *(undefined4 *)(pbVar15 + 8);
            uVar5 = *(undefined4 *)(pbVar15 + 0xc);
            uVar6 = *(undefined8 *)pbVar11;
            uVar7 = *(undefined8 *)(pbVar11 + 8);
            uVar2 = *(undefined8 *)(pbVar11 + 0x10);
            *(undefined4 *)pbVar11 = *(undefined4 *)pbVar15;
            *(undefined4 *)(pbVar11 + 4) = uVar3;
            *(undefined4 *)(pbVar11 + 8) = uVar4;
            *(undefined4 *)(pbVar11 + 0xc) = uVar5;
            *(undefined8 *)(pbVar11 + 0x10) = *(undefined8 *)(pbVar15 + 0x10);
            *(undefined8 *)pbVar15 = uVar6;
            *(undefined8 *)(pbVar15 + 8) = uVar7;
            *(undefined8 *)(pbVar15 + 0x10) = uVar2;
          }
          pbVar13 = pbVar10 + 0x18;
          pbVar11 = pbVar15;
LAB_1422fe940:
          pbVar12 = pbVar11;
          pbVar11 = pbVar12 + 0x18;
          if (pbVar11 <= pbVar10) goto code_r0x0001422fe949;
          goto LAB_1422fe952;
        }
        for (; pbVar13 = pbVar15, pbVar11 = pbVar15, pbVar15 < pbVar10; pbVar10 = pbVar10 + -0x18) {
          while (pbVar12 = pbVar13, pbVar11 = pbVar11 + 0x18, pbVar11 <= pbVar10) {
            pbVar13 = pbVar11;
            if (*pbVar11 <= *pbVar12) {
              pbVar13 = pbVar12;
            }
          }
          if (pbVar12 != pbVar10) {
            uVar6 = *(undefined8 *)(pbVar10 + 8);
            uVar7 = *(undefined8 *)pbVar12;
            uVar8 = *(undefined8 *)(pbVar12 + 8);
            uVar2 = *(undefined8 *)(pbVar12 + 0x10);
            *(undefined8 *)pbVar12 = *(undefined8 *)pbVar10;
            *(undefined8 *)(pbVar12 + 8) = uVar6;
            *(undefined8 *)(pbVar12 + 0x10) = *(undefined8 *)(pbVar10 + 0x10);
            *(undefined8 *)pbVar10 = uVar7;
            *(undefined8 *)(pbVar10 + 8) = uVar8;
            *(undefined8 *)(pbVar10 + 0x10) = uVar2;
          }
        }
        goto LAB_1422fea7f;
      }
LAB_1422fea70:
      local_348 = lVar1;
      FUN_1422fe180(pbVar11,lVar9,param_3,param_4);
LAB_1422fea7f:
      plVar16 = plVar16 + -3;
    } while (&local_338 <= plVar16);
  }
  return;
code_r0x0001422fe949:
  if (*pbVar11 <= *pbVar15) goto LAB_1422fe940;
LAB_1422fe952:
  do {
    pbVar14 = pbVar13;
    pbVar13 = pbVar14 + -0x18;
    if (pbVar13 <= pbVar15) break;
  } while (*pbVar15 <= *pbVar13);
  if (pbVar11 <= pbVar13) {
    if (pbVar11 != pbVar13) {
      uVar3 = *(undefined4 *)(pbVar14 + -0x14);
      uVar4 = *(undefined4 *)(pbVar14 + -0x10);
      uVar5 = *(undefined4 *)(pbVar14 + -0xc);
      uVar6 = *(undefined8 *)pbVar11;
      uVar7 = *(undefined8 *)(pbVar12 + 0x20);
      uVar2 = *(undefined8 *)(pbVar12 + 0x28);
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar13;
      *(undefined4 *)(pbVar12 + 0x1c) = uVar3;
      *(undefined4 *)(pbVar12 + 0x20) = uVar4;
      *(undefined4 *)(pbVar12 + 0x24) = uVar5;
      *(undefined8 *)(pbVar12 + 0x28) = *(undefined8 *)(pbVar14 + -8);
      *(undefined8 *)pbVar13 = uVar6;
      *(undefined8 *)(pbVar14 + -0x10) = uVar7;
      *(undefined8 *)(pbVar14 + -8) = uVar2;
    }
    goto LAB_1422fe940;
  }
  if (pbVar15 != pbVar13) {
    uVar3 = *(undefined4 *)(pbVar14 + -0x14);
    uVar4 = *(undefined4 *)(pbVar14 + -0x10);
    uVar5 = *(undefined4 *)(pbVar14 + -0xc);
    uVar6 = *(undefined8 *)pbVar15;
    uVar7 = *(undefined8 *)(pbVar15 + 8);
    uVar2 = *(undefined8 *)(pbVar15 + 0x10);
    *(undefined4 *)pbVar15 = *(undefined4 *)pbVar13;
    *(undefined4 *)(pbVar15 + 4) = uVar3;
    *(undefined4 *)(pbVar15 + 8) = uVar4;
    *(undefined4 *)(pbVar15 + 0xc) = uVar5;
    *(undefined8 *)(pbVar15 + 0x10) = *(undefined8 *)(pbVar14 + -8);
    *(undefined8 *)pbVar13 = uVar6;
    *(undefined8 *)(pbVar14 + -0x10) = uVar7;
    *(undefined8 *)(pbVar14 + -8) = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar9 = (longlong)(pbVar13 + (-0x18 - (longlong)pbVar15)) / 6 +
          ((longlong)(pbVar13 + (-0x18 - (longlong)pbVar15)) >> 0x3f);
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)pbVar10 - (longlong)pbVar11) / 0x18) {
    if (pbVar11 < pbVar10) {
      *plVar16 = (longlong)pbVar11;
      plVar16[1] = (longlong)pbVar10;
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (pbVar13 <= pbVar15 + 0x18) goto LAB_1422fea7f;
    pbVar10 = pbVar14 + -0x30;
    pbVar11 = pbVar15;
  }
  else {
    if (pbVar15 + 0x18 < pbVar13) {
      *plVar16 = (longlong)pbVar15;
      plVar16[1] = (longlong)(pbVar14 + -0x30);
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (pbVar10 <= pbVar11) goto LAB_1422fea7f;
  }
  lVar9 = ((longlong)pbVar10 - (longlong)pbVar11) / 0x18 + 1;
  pbVar15 = pbVar11;
  if ((int)local_348 == 0) goto LAB_1422fea70;
  goto LAB_1422fe8f0;
}



// FUNCTION 1422feb30 FUN_1422feb30 body=1655 status=ok
// SIG undefined FUN_1422feb30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1422feb30(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  byte *pbVar1;
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
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  byte *pbVar28;
  bool bVar29;
  longlong lVar30;
  longlong lVar31;
  int iVar32;
  byte *pbVar33;
  byte *pbVar34;
  byte *pbVar35;
  undefined1 (*pauVar37) [16];
  float fVar38;
  undefined1 auStack_3c8 [48];
  undefined8 local_398;
  longlong local_388;
  longlong lStack_380;
  undefined4 local_378;
  undefined1 local_370 [744];
  ulonglong local_88;
  byte *pbVar36;
  
  if (param_2 < 2) {
    return;
  }
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  lStack_380 = param_2 * 0x90 + -0x90 + param_1;
  fVar38 = (float)(longlong)param_2;
  if ((longlong)param_2 < 0) {
    fVar38 = fVar38 + 1.8446744e+19;
  }
  local_388 = param_1;
  fVar38 = _guard_xfg_dispatch_icall_nop(fVar38);
  local_378 = (undefined4)(longlong)(fVar38 + fVar38);
  _guard_xfg_dispatch_icall_nop(local_370,0,0x2e8);
  pauVar37 = (undefined1 (*) [16])&local_388;
LAB_1422febf0:
  local_398 = *(undefined8 *)pauVar37[1];
  pbVar1 = SUB168(*pauVar37,0);
  pbVar33 = SUB168(*pauVar37,8);
  lVar30 = (longlong)pbVar33 - (longlong)pbVar1;
  iVar32 = (int)local_398;
  while( true ) {
    lVar31 = lVar30 / 0x90 + 1;
    if (iVar32 == 0) break;
    if (lVar31 < 9) goto joined_r0x0001422ff075;
    if (lVar31 < 0) {
      lVar31 = lVar30 / 0x90 + 2;
    }
    pbVar28 = pbVar1 + (lVar31 >> 1) * 0x90;
    if (pbVar28 != pbVar1) {
      uVar9 = *(undefined8 *)(pbVar1 + 8);
      uVar2 = *(undefined4 *)pbVar28;
      uVar3 = *(undefined4 *)(pbVar28 + 4);
      uVar4 = *(undefined4 *)(pbVar28 + 8);
      uVar5 = *(undefined4 *)(pbVar28 + 0xc);
      uVar10 = *(undefined8 *)(pbVar28 + 0x10);
      uVar11 = *(undefined8 *)(pbVar28 + 0x18);
      uVar12 = *(undefined8 *)(pbVar28 + 0x20);
      uVar13 = *(undefined8 *)(pbVar28 + 0x28);
      uVar14 = *(undefined8 *)(pbVar28 + 0x30);
      uVar15 = *(undefined8 *)(pbVar28 + 0x38);
      uVar16 = *(undefined8 *)(pbVar28 + 0x40);
      uVar17 = *(undefined8 *)(pbVar28 + 0x48);
      uVar18 = *(undefined8 *)(pbVar28 + 0x50);
      uVar19 = *(undefined8 *)(pbVar28 + 0x58);
      uVar20 = *(undefined8 *)(pbVar28 + 0x60);
      uVar21 = *(undefined8 *)(pbVar28 + 0x68);
      uVar22 = *(undefined8 *)(pbVar28 + 0x70);
      uVar23 = *(undefined8 *)(pbVar28 + 0x78);
      uVar24 = *(undefined8 *)(pbVar28 + 0x80);
      uVar25 = *(undefined8 *)(pbVar28 + 0x88);
      *(undefined8 *)pbVar28 = *(undefined8 *)pbVar1;
      *(undefined8 *)(pbVar28 + 8) = uVar9;
      uVar9 = *(undefined8 *)(pbVar1 + 0x18);
      *(undefined8 *)(pbVar28 + 0x10) = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)(pbVar28 + 0x18) = uVar9;
      uVar9 = *(undefined8 *)(pbVar1 + 0x28);
      *(undefined8 *)(pbVar28 + 0x20) = *(undefined8 *)(pbVar1 + 0x20);
      *(undefined8 *)(pbVar28 + 0x28) = uVar9;
      uVar9 = *(undefined8 *)(pbVar1 + 0x38);
      *(undefined8 *)(pbVar28 + 0x30) = *(undefined8 *)(pbVar1 + 0x30);
      *(undefined8 *)(pbVar28 + 0x38) = uVar9;
      uVar9 = *(undefined8 *)(pbVar1 + 0x48);
      *(undefined8 *)(pbVar28 + 0x40) = *(undefined8 *)(pbVar1 + 0x40);
      *(undefined8 *)(pbVar28 + 0x48) = uVar9;
      uVar9 = *(undefined8 *)(pbVar1 + 0x58);
      *(undefined8 *)(pbVar28 + 0x50) = *(undefined8 *)(pbVar1 + 0x50);
      *(undefined8 *)(pbVar28 + 0x58) = uVar9;
      uVar9 = *(undefined8 *)(pbVar1 + 0x68);
      *(undefined8 *)(pbVar28 + 0x60) = *(undefined8 *)(pbVar1 + 0x60);
      *(undefined8 *)(pbVar28 + 0x68) = uVar9;
      *(undefined1 (*) [16])(pbVar28 + 0x70) = *(undefined1 (*) [16])(pbVar1 + 0x70);
      uVar6 = *(undefined4 *)(pbVar1 + 0x84);
      uVar7 = *(undefined4 *)(pbVar1 + 0x88);
      uVar8 = *(undefined4 *)(pbVar1 + 0x8c);
      *(undefined4 *)(pbVar28 + 0x80) = *(undefined4 *)(pbVar1 + 0x80);
      *(undefined4 *)(pbVar28 + 0x84) = uVar6;
      *(undefined4 *)(pbVar28 + 0x88) = uVar7;
      *(undefined4 *)(pbVar28 + 0x8c) = uVar8;
      *(undefined4 *)pbVar1 = uVar2;
      *(undefined4 *)(pbVar1 + 4) = uVar3;
      *(undefined4 *)(pbVar1 + 8) = uVar4;
      *(undefined4 *)(pbVar1 + 0xc) = uVar5;
      *(undefined8 *)(pbVar1 + 0x10) = uVar10;
      *(undefined8 *)(pbVar1 + 0x18) = uVar11;
      *(undefined8 *)(pbVar1 + 0x20) = uVar12;
      *(undefined8 *)(pbVar1 + 0x28) = uVar13;
      *(undefined8 *)(pbVar1 + 0x30) = uVar14;
      *(undefined8 *)(pbVar1 + 0x38) = uVar15;
      *(undefined8 *)(pbVar1 + 0x40) = uVar16;
      *(undefined8 *)(pbVar1 + 0x48) = uVar17;
      *(undefined8 *)(pbVar1 + 0x50) = uVar18;
      *(undefined8 *)(pbVar1 + 0x58) = uVar19;
      *(undefined8 *)(pbVar1 + 0x60) = uVar20;
      *(undefined8 *)(pbVar1 + 0x68) = uVar21;
      *(undefined8 *)(pbVar1 + 0x70) = uVar22;
      *(undefined8 *)(pbVar1 + 0x78) = uVar23;
      *(undefined8 *)(pbVar1 + 0x80) = uVar24;
      *(undefined8 *)(pbVar1 + 0x88) = uVar25;
    }
    pbVar28 = pbVar33 + 0x90;
    pbVar35 = pbVar1;
LAB_1422fed20:
    do {
      pbVar36 = pbVar35;
      pbVar35 = pbVar36 + 0x90;
      if (pbVar33 < pbVar35) break;
      if (*(float *)(pbVar1 + 0xc) == *(float *)(pbVar36 + 0x9c)) {
        bVar29 = (bool)(*pbVar35 & 1);
        if ((bool)(*pbVar1 & 1) == bVar29) break;
      }
      else {
        bVar29 = *(float *)(pbVar1 + 0xc) < *(float *)(pbVar36 + 0x9c);
      }
    } while (bVar29 == false);
    do {
      pbVar34 = pbVar28;
      pbVar28 = pbVar34 + -0x90;
      if (pbVar28 <= pbVar1) break;
      if (*(float *)(pbVar34 + -0x84) == *(float *)(pbVar1 + 0xc)) {
        bVar29 = (bool)(*pbVar1 & 1);
        if ((bool)(*pbVar28 & 1) == bVar29) break;
      }
      else {
        bVar29 = *(float *)(pbVar34 + -0x84) < *(float *)(pbVar1 + 0xc);
      }
    } while (bVar29 == false);
    if (pbVar35 <= pbVar28) {
      if (pbVar35 != pbVar28) {
        uVar9 = *(undefined8 *)(pbVar34 + -0x88);
        uVar2 = *(undefined4 *)pbVar35;
        uVar3 = *(undefined4 *)(pbVar36 + 0x94);
        uVar4 = *(undefined4 *)(pbVar36 + 0x98);
        uVar5 = *(undefined4 *)(pbVar36 + 0x9c);
        uVar10 = *(undefined8 *)(pbVar36 + 0xa0);
        uVar11 = *(undefined8 *)(pbVar36 + 0xa8);
        uVar12 = *(undefined8 *)(pbVar36 + 0xb0);
        uVar13 = *(undefined8 *)(pbVar36 + 0xb8);
        uVar14 = *(undefined8 *)(pbVar36 + 0xc0);
        uVar15 = *(undefined8 *)(pbVar36 + 200);
        uVar16 = *(undefined8 *)(pbVar36 + 0xd0);
        uVar17 = *(undefined8 *)(pbVar36 + 0xd8);
        uVar18 = *(undefined8 *)(pbVar36 + 0xe0);
        uVar19 = *(undefined8 *)(pbVar36 + 0xe8);
        uVar20 = *(undefined8 *)(pbVar36 + 0xf0);
        uVar21 = *(undefined8 *)(pbVar36 + 0xf8);
        uVar22 = *(undefined8 *)(pbVar36 + 0x100);
        uVar23 = *(undefined8 *)(pbVar36 + 0x108);
        uVar24 = *(undefined8 *)(pbVar36 + 0x110);
        uVar25 = *(undefined8 *)(pbVar36 + 0x118);
        *(undefined8 *)pbVar35 = *(undefined8 *)pbVar28;
        *(undefined8 *)(pbVar36 + 0x98) = uVar9;
        uVar9 = *(undefined8 *)(pbVar34 + -0x78);
        *(undefined8 *)(pbVar36 + 0xa0) = *(undefined8 *)(pbVar34 + -0x80);
        *(undefined8 *)(pbVar36 + 0xa8) = uVar9;
        uVar9 = *(undefined8 *)(pbVar34 + -0x68);
        *(undefined8 *)(pbVar36 + 0xb0) = *(undefined8 *)(pbVar34 + -0x70);
        *(undefined8 *)(pbVar36 + 0xb8) = uVar9;
        uVar9 = *(undefined8 *)(pbVar34 + -0x58);
        *(undefined8 *)(pbVar36 + 0xc0) = *(undefined8 *)(pbVar34 + -0x60);
        *(undefined8 *)(pbVar36 + 200) = uVar9;
        uVar9 = *(undefined8 *)(pbVar34 + -0x48);
        *(undefined8 *)(pbVar36 + 0xd0) = *(undefined8 *)(pbVar34 + -0x50);
        *(undefined8 *)(pbVar36 + 0xd8) = uVar9;
        uVar9 = *(undefined8 *)(pbVar34 + -0x38);
        *(undefined8 *)(pbVar36 + 0xe0) = *(undefined8 *)(pbVar34 + -0x40);
        *(undefined8 *)(pbVar36 + 0xe8) = uVar9;
        uVar9 = *(undefined8 *)(pbVar34 + -0x28);
        *(undefined8 *)(pbVar36 + 0xf0) = *(undefined8 *)(pbVar34 + -0x30);
        *(undefined8 *)(pbVar36 + 0xf8) = uVar9;
        *(undefined1 (*) [16])(pbVar36 + 0x100) = *(undefined1 (*) [16])(pbVar34 + -0x20);
        uVar6 = *(undefined4 *)(pbVar34 + -0xc);
        uVar7 = *(undefined4 *)(pbVar34 + -8);
        uVar8 = *(undefined4 *)(pbVar34 + -4);
        *(undefined4 *)(pbVar36 + 0x110) = *(undefined4 *)(pbVar34 + -0x10);
        *(undefined4 *)(pbVar36 + 0x114) = uVar6;
        *(undefined4 *)(pbVar36 + 0x118) = uVar7;
        *(undefined4 *)(pbVar36 + 0x11c) = uVar8;
        *(undefined4 *)pbVar28 = uVar2;
        *(undefined4 *)(pbVar34 + -0x8c) = uVar3;
        *(undefined4 *)(pbVar34 + -0x88) = uVar4;
        *(undefined4 *)(pbVar34 + -0x84) = uVar5;
        *(undefined8 *)(pbVar34 + -0x80) = uVar10;
        *(undefined8 *)(pbVar34 + -0x78) = uVar11;
        *(undefined8 *)(pbVar34 + -0x70) = uVar12;
        *(undefined8 *)(pbVar34 + -0x68) = uVar13;
        *(undefined8 *)(pbVar34 + -0x60) = uVar14;
        *(undefined8 *)(pbVar34 + -0x58) = uVar15;
        *(undefined8 *)(pbVar34 + -0x50) = uVar16;
        *(undefined8 *)(pbVar34 + -0x48) = uVar17;
        *(undefined8 *)(pbVar34 + -0x40) = uVar18;
        *(undefined8 *)(pbVar34 + -0x38) = uVar19;
        *(undefined8 *)(pbVar34 + -0x30) = uVar20;
        *(undefined8 *)(pbVar34 + -0x28) = uVar21;
        *(undefined8 *)(pbVar34 + -0x20) = uVar22;
        *(undefined8 *)(pbVar34 + -0x18) = uVar23;
        *(undefined8 *)(pbVar34 + -0x10) = uVar24;
        *(undefined8 *)(pbVar34 + -8) = uVar25;
      }
      goto LAB_1422fed20;
    }
    if (pbVar1 != pbVar28) {
      uVar9 = *(undefined8 *)(pbVar34 + -0x88);
      uVar2 = *(undefined4 *)pbVar1;
      uVar3 = *(undefined4 *)(pbVar1 + 4);
      uVar4 = *(undefined4 *)(pbVar1 + 8);
      uVar5 = *(undefined4 *)(pbVar1 + 0xc);
      uVar10 = *(undefined8 *)(pbVar1 + 0x10);
      uVar11 = *(undefined8 *)(pbVar1 + 0x18);
      uVar12 = *(undefined8 *)(pbVar1 + 0x20);
      uVar13 = *(undefined8 *)(pbVar1 + 0x28);
      uVar14 = *(undefined8 *)(pbVar1 + 0x30);
      uVar15 = *(undefined8 *)(pbVar1 + 0x38);
      uVar16 = *(undefined8 *)(pbVar1 + 0x40);
      uVar17 = *(undefined8 *)(pbVar1 + 0x48);
      uVar18 = *(undefined8 *)(pbVar1 + 0x50);
      uVar19 = *(undefined8 *)(pbVar1 + 0x58);
      uVar20 = *(undefined8 *)(pbVar1 + 0x60);
      uVar21 = *(undefined8 *)(pbVar1 + 0x68);
      uVar22 = *(undefined8 *)(pbVar1 + 0x70);
      uVar23 = *(undefined8 *)(pbVar1 + 0x78);
      uVar24 = *(undefined8 *)(pbVar1 + 0x80);
      uVar25 = *(undefined8 *)(pbVar1 + 0x88);
      *(undefined8 *)pbVar1 = *(undefined8 *)pbVar28;
      *(undefined8 *)(pbVar1 + 8) = uVar9;
      uVar9 = *(undefined8 *)(pbVar34 + -0x78);
      *(undefined8 *)(pbVar1 + 0x10) = *(undefined8 *)(pbVar34 + -0x80);
      *(undefined8 *)(pbVar1 + 0x18) = uVar9;
      uVar9 = *(undefined8 *)(pbVar34 + -0x68);
      *(undefined8 *)(pbVar1 + 0x20) = *(undefined8 *)(pbVar34 + -0x70);
      *(undefined8 *)(pbVar1 + 0x28) = uVar9;
      uVar9 = *(undefined8 *)(pbVar34 + -0x58);
      *(undefined8 *)(pbVar1 + 0x30) = *(undefined8 *)(pbVar34 + -0x60);
      *(undefined8 *)(pbVar1 + 0x38) = uVar9;
      uVar9 = *(undefined8 *)(pbVar34 + -0x48);
      *(undefined8 *)(pbVar1 + 0x40) = *(undefined8 *)(pbVar34 + -0x50);
      *(undefined8 *)(pbVar1 + 0x48) = uVar9;
      uVar9 = *(undefined8 *)(pbVar34 + -0x38);
      *(undefined8 *)(pbVar1 + 0x50) = *(undefined8 *)(pbVar34 + -0x40);
      *(undefined8 *)(pbVar1 + 0x58) = uVar9;
      uVar9 = *(undefined8 *)(pbVar34 + -0x28);
      *(undefined8 *)(pbVar1 + 0x60) = *(undefined8 *)(pbVar34 + -0x30);
      *(undefined8 *)(pbVar1 + 0x68) = uVar9;
      *(undefined1 (*) [16])(pbVar1 + 0x70) = *(undefined1 (*) [16])(pbVar34 + -0x20);
      uVar6 = *(undefined4 *)(pbVar34 + -0xc);
      uVar7 = *(undefined4 *)(pbVar34 + -8);
      uVar8 = *(undefined4 *)(pbVar34 + -4);
      *(undefined4 *)(pbVar1 + 0x80) = *(undefined4 *)(pbVar34 + -0x10);
      *(undefined4 *)(pbVar1 + 0x84) = uVar6;
      *(undefined4 *)(pbVar1 + 0x88) = uVar7;
      *(undefined4 *)(pbVar1 + 0x8c) = uVar8;
      *(undefined4 *)pbVar28 = uVar2;
      *(undefined4 *)(pbVar34 + -0x8c) = uVar3;
      *(undefined4 *)(pbVar34 + -0x88) = uVar4;
      *(undefined4 *)(pbVar34 + -0x84) = uVar5;
      *(undefined8 *)(pbVar34 + -0x80) = uVar10;
      *(undefined8 *)(pbVar34 + -0x78) = uVar11;
      *(undefined8 *)(pbVar34 + -0x70) = uVar12;
      *(undefined8 *)(pbVar34 + -0x68) = uVar13;
      *(undefined8 *)(pbVar34 + -0x60) = uVar14;
      *(undefined8 *)(pbVar34 + -0x58) = uVar15;
      *(undefined8 *)(pbVar34 + -0x50) = uVar16;
      *(undefined8 *)(pbVar34 + -0x48) = uVar17;
      *(undefined8 *)(pbVar34 + -0x40) = uVar18;
      *(undefined8 *)(pbVar34 + -0x38) = uVar19;
      *(undefined8 *)(pbVar34 + -0x30) = uVar20;
      *(undefined8 *)(pbVar34 + -0x28) = uVar21;
      *(undefined8 *)(pbVar34 + -0x20) = uVar22;
      *(undefined8 *)(pbVar34 + -0x18) = uVar23;
      *(undefined8 *)(pbVar34 + -0x10) = uVar24;
      *(undefined8 *)(pbVar34 + -8) = uVar25;
    }
    iVar32 = iVar32 + -1;
    lVar30 = (longlong)(pbVar28 + (-0x90 - (longlong)pbVar1)) / 0x12 +
             ((longlong)(pbVar28 + (-0x90 - (longlong)pbVar1)) >> 0x3f);
    if ((lVar30 >> 3) - (lVar30 >> 0x3f) < ((longlong)pbVar33 - (longlong)pbVar35) / 0x90) {
      if (pbVar35 < pbVar33) {
        *(byte **)*pauVar37 = pbVar35;
        *(byte **)(*pauVar37 + 8) = pbVar33;
        *(int *)pauVar37[1] = iVar32;
        pauVar37 = (undefined1 (*) [16])(pauVar37[1] + 8);
      }
      if (pbVar28 <= pbVar1 + 0x90) goto LAB_1422feffb;
      pbVar33 = pbVar34 + -0x120;
      pbVar35 = pbVar1;
    }
    else {
      if (pbVar1 + 0x90 < pbVar28) {
        *(byte **)*pauVar37 = pbVar1;
        *(byte **)(*pauVar37 + 8) = pbVar34 + -0x120;
        *(int *)pauVar37[1] = iVar32;
        pauVar37 = (undefined1 (*) [16])(pauVar37[1] + 8);
      }
      if (pbVar33 <= pbVar35) goto LAB_1422feffb;
    }
    lVar30 = (longlong)pbVar33 - (longlong)pbVar35;
    pbVar1 = pbVar35;
  }
  FUN_1422fe350(pbVar1,lVar31,param_3,param_4);
  goto LAB_1422feffb;
joined_r0x0001422ff075:
  for (; pbVar35 = pbVar1, pbVar28 = pbVar1, pbVar1 < pbVar33; pbVar33 = pbVar33 + -0x90) {
    while (pbVar36 = pbVar35, pbVar28 = pbVar28 + 0x90, pbVar28 <= pbVar33) {
      if (*(float *)(pbVar36 + 0xc) == *(float *)(pbVar28 + 0xc)) {
        bVar29 = true;
        if ((*pbVar36 & 1) != (*pbVar28 & 1)) {
          bVar29 = (bool)(*pbVar28 & 1);
        }
      }
      else {
        bVar29 = *(float *)(pbVar36 + 0xc) < *(float *)(pbVar28 + 0xc);
      }
      pbVar35 = pbVar28;
      if (bVar29 == false) {
        pbVar35 = pbVar36;
      }
    }
    if (pbVar36 != pbVar33) {
      uVar9 = *(undefined8 *)(pbVar33 + 8);
      uVar10 = *(undefined8 *)pbVar36;
      uVar11 = *(undefined8 *)(pbVar36 + 8);
      uVar12 = *(undefined8 *)(pbVar36 + 0x10);
      uVar13 = *(undefined8 *)(pbVar36 + 0x18);
      uVar14 = *(undefined8 *)(pbVar36 + 0x20);
      uVar15 = *(undefined8 *)(pbVar36 + 0x28);
      uVar16 = *(undefined8 *)(pbVar36 + 0x30);
      uVar17 = *(undefined8 *)(pbVar36 + 0x38);
      uVar18 = *(undefined8 *)(pbVar36 + 0x40);
      uVar19 = *(undefined8 *)(pbVar36 + 0x48);
      uVar20 = *(undefined8 *)(pbVar36 + 0x50);
      uVar21 = *(undefined8 *)(pbVar36 + 0x58);
      uVar22 = *(undefined8 *)(pbVar36 + 0x60);
      uVar23 = *(undefined8 *)(pbVar36 + 0x68);
      uVar24 = *(undefined8 *)(pbVar36 + 0x70);
      uVar25 = *(undefined8 *)(pbVar36 + 0x78);
      uVar26 = *(undefined8 *)(pbVar36 + 0x80);
      uVar27 = *(undefined8 *)(pbVar36 + 0x88);
      *(undefined8 *)pbVar36 = *(undefined8 *)pbVar33;
      *(undefined8 *)(pbVar36 + 8) = uVar9;
      uVar9 = *(undefined8 *)(pbVar33 + 0x18);
      *(undefined8 *)(pbVar36 + 0x10) = *(undefined8 *)(pbVar33 + 0x10);
      *(undefined8 *)(pbVar36 + 0x18) = uVar9;
      uVar9 = *(undefined8 *)(pbVar33 + 0x28);
      *(undefined8 *)(pbVar36 + 0x20) = *(undefined8 *)(pbVar33 + 0x20);
      *(undefined8 *)(pbVar36 + 0x28) = uVar9;
      uVar9 = *(undefined8 *)(pbVar33 + 0x38);
      *(undefined8 *)(pbVar36 + 0x30) = *(undefined8 *)(pbVar33 + 0x30);
      *(undefined8 *)(pbVar36 + 0x38) = uVar9;
      uVar9 = *(undefined8 *)(pbVar33 + 0x48);
      *(undefined8 *)(pbVar36 + 0x40) = *(undefined8 *)(pbVar33 + 0x40);
      *(undefined8 *)(pbVar36 + 0x48) = uVar9;
      uVar9 = *(undefined8 *)(pbVar33 + 0x58);
      *(undefined8 *)(pbVar36 + 0x50) = *(undefined8 *)(pbVar33 + 0x50);
      *(undefined8 *)(pbVar36 + 0x58) = uVar9;
      uVar9 = *(undefined8 *)(pbVar33 + 0x68);
      *(undefined8 *)(pbVar36 + 0x60) = *(undefined8 *)(pbVar33 + 0x60);
      *(undefined8 *)(pbVar36 + 0x68) = uVar9;
      *(undefined1 (*) [16])(pbVar36 + 0x70) = *(undefined1 (*) [16])(pbVar33 + 0x70);
      uVar9 = *(undefined8 *)(pbVar33 + 0x88);
      *(undefined8 *)(pbVar36 + 0x80) = *(undefined8 *)(pbVar33 + 0x80);
      *(undefined8 *)(pbVar36 + 0x88) = uVar9;
      *(undefined8 *)pbVar33 = uVar10;
      *(undefined8 *)(pbVar33 + 8) = uVar11;
      *(undefined8 *)(pbVar33 + 0x10) = uVar12;
      *(undefined8 *)(pbVar33 + 0x18) = uVar13;
      *(undefined8 *)(pbVar33 + 0x20) = uVar14;
      *(undefined8 *)(pbVar33 + 0x28) = uVar15;
      *(undefined8 *)(pbVar33 + 0x30) = uVar16;
      *(undefined8 *)(pbVar33 + 0x38) = uVar17;
      *(undefined8 *)(pbVar33 + 0x40) = uVar18;
      *(undefined8 *)(pbVar33 + 0x48) = uVar19;
      *(undefined8 *)(pbVar33 + 0x50) = uVar20;
      *(undefined8 *)(pbVar33 + 0x58) = uVar21;
      *(undefined8 *)(pbVar33 + 0x60) = uVar22;
      *(undefined8 *)(pbVar33 + 0x68) = uVar23;
      *(undefined8 *)(pbVar33 + 0x70) = uVar24;
      *(undefined8 *)(pbVar33 + 0x78) = uVar25;
      *(undefined8 *)(pbVar33 + 0x80) = uVar26;
      *(undefined8 *)(pbVar33 + 0x88) = uVar27;
    }
  }
LAB_1422feffb:
  pauVar37 = (undefined1 (*) [16])(pauVar37[-2] + 8);
  if (pauVar37 < (undefined1 (*) [16])&local_388) {
    return;
  }
  goto LAB_1422febf0;
}



// FUNCTION 1422ff1b0 NewObject<UCanvas> body=146 status=ok
// SIG undefined NewObject<UCanvas>(void)

void NewObject<UCanvas>(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                       undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = UCanvas::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 1422ff250 FUN_1422ff250 body=58 status=ok
// SIG undefined FUN_1422ff250(void)

undefined8 * FUN_1422ff250(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_1440f1c20;
  (**(code **)(*(longlong *)param_1[0x8e] + 0x830))((longlong *)param_1[0x8e],4,2);
  return param_1;
}



// FUNCTION 1422ff290 FUN_1422ff290 body=1157 status=ok
// SIG undefined FUN_1422ff290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1422ff290(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_1426850b0();
  *param_1 = &PTR_FUN_14503d650;
  param_1[0x8b] = &PTR_LAB_14503dfa8;
  param_1[0x9c] = 0;
  param_1[0xa2] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  FRootMotionSourceGroup::FRootMotionSourceGroup(param_1 + 0xba);
  *(undefined1 *)(param_1 + 0xda) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 0;
  uVar7 = uRam0000000146aefa5c;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  *(uint *)((longlong)param_1 + 0x6ec) = uVar7;
  uVar7 = uRam0000000146aefa54 & uRam0000000146aefb24;
  uVar8 = uRam0000000146aefa58 & uRam0000000146aefb28;
  uVar9 = uRam0000000146aefa5c & uRam0000000146aefb2c;
  *(uint *)(param_1 + 0xe0) = _DAT_146aefa50 & _DAT_146aefb20;
  *(uint *)((longlong)param_1 + 0x704) = uVar7;
  *(uint *)(param_1 + 0xe1) = uVar8;
  *(uint *)((longlong)param_1 + 0x70c) = uVar9;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xeb] = 0;
  FRootMotionSourceGroup::FRootMotionSourceGroup(param_1 + 0xed);
  pvVar3 = ThreadLocalStoragePointer;
  uVar6 = (ulonglong)_tls_index;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar6 * 8);
  *(undefined1 *)(param_1 + 0x113) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8ac) = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146aefd00) {
    _Init_thread_header(&DAT_146aefd00);
    if (DAT_146aefd00 == -1) {
      FName::FName(&DAT_146aefce0,L"Characters",1);
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146aefce8,L"Characters",L"SpriteCategory",L"Characters");
      atexit(FUN_143ea8d30);
      _Init_thread_footer(&DAT_146aefd00);
    }
  }
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfffffffa;
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 2;
  uVar2 = DAT_146aefb00;
  uVar4 = FUN_142912e90();
  lVar5 = FUN_141752410(param_1,uVar2,uVar4,uVar4,1,0,0);
  param_1[0x9a] = lVar5;
  *(undefined4 *)(lVar5 + 0x714) = 0x42080000;
  *(undefined4 *)(lVar5 + 0x710) = 0x42b00000;
  (**(code **)(*(longlong *)param_1[0x9a] + 0x640))((longlong *)param_1[0x9a],DAT_146aefc78);
  *(undefined1 *)(param_1[0x9a] + 0x303) = 0;
  FUN_142398900(param_1[0x9a],1);
  *(byte *)(param_1[0x9a] + 0x2ef) = *(byte *)(param_1[0x9a] + 0x2ef) & 0xfb;
  FUN_14234fe40(param_1[0x9a],0);
  *(byte *)(param_1[0x9a] + 0x700) = *(byte *)(param_1[0x9a] + 0x700) | 4;
  param_1[0x2d] = param_1[0x9a];
  *(undefined4 *)(param_1 + 0xae) = 0;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
  *(uint *)((longlong)param_1 + 0x56c) = *(uint *)((longlong)param_1 + 0x56c) & 0xfffffbff | 0x100;
  param_1[0xb0] = 1;
  *(undefined4 *)(param_1 + 0xa7) = 0x3f800000;
  uVar2 = DAT_146aefaf8;
  uVar4 = UMediaSoundComponent::GetPrivateStaticClass();
  lVar5 = FUN_141752410(param_1,uVar2,uVar4,uVar4,1,0,0);
  param_1[0x99] = lVar5;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x178) = param_1[0x9a];
    *(float *)(param_1 + 0xad) = *(float *)(param_1[0x99] + 0x2e4) * 0.8;
  }
  uVar2 = DAT_146aefaf0;
  uVar4 = FUN_142a07000();
  lVar5 = FUN_141752410(param_1,uVar2,uVar4,uVar4,0,0,0);
  param_1[0x98] = lVar5;
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x2f8) = *(byte *)(lVar5 + 0x2f8) | 0x10;
    *(byte *)(param_1[0x98] + 0x2f8) = *(byte *)(param_1[0x98] + 0x2f8) | 0x20;
    *(byte *)(param_1[0x98] + 0x2f0) = *(byte *)(param_1[0x98] + 0x2f0) & 0xdf;
    *(undefined1 *)(param_1[0x98] + 0x878) = 1;
    *(byte *)(param_1[0x98] + 0x2f1) = *(byte *)(param_1[0x98] + 0x2f1) | 0x80;
    *(byte *)(param_1[0x98] + 0x2f1) = *(byte *)(param_1[0x98] + 0x2f1) | 0x20;
    *(undefined1 *)(param_1[0x98] + 0x38) = 0;
    FUN_142399e30(param_1[0x98],param_1[0x9a],0);
    if (*(int *)(lVar1 + 0x38) < DAT_146aefd10) {
      _Init_thread_header(&DAT_146aefd10);
      if (DAT_146aefd10 == -1) {
        FName::FName(&DAT_146aefd08,L"CharacterMesh",1);
        _Init_thread_footer(&DAT_146aefd10);
      }
    }
    (**(code **)(*(longlong *)param_1[0x98] + 0x640))((longlong *)param_1[0x98],DAT_146aefd08);
    FUN_1423974f0(param_1[0x98],0);
    FUN_14234fe40(param_1[0x98],0);
  }
  uVar2 = _DAT_1464aa818;
  param_1[0xaa] = _DAT_1464aa810;
  param_1[0xab] = uVar2;
  param_1[0x114] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x115) = 0x3f800000;
  return param_1;
}



// FUNCTION 1422ff720 FUN_1422ff720 body=884 status=ok
// SIG undefined FUN_1422ff720(void)

undefined8 * FUN_1422ff720(undefined8 *param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  param_1[3] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  if (param_2 == (longlong *)0x0) {
    return param_1;
  }
  plVar2 = (longlong *)UNodeMappingContainer::GetPrivateStaticClass();
  plVar4 = param_2;
  while (plVar4 != plVar2) {
    plVar4 = (longlong *)plVar4[6];
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  *param_1 = param_2;
  plVar2 = (longlong *)UNodeMappingContainer::GetPrivateStaticClass();
  plVar4 = param_2;
  do {
    plVar6 = param_2;
    if (plVar4 == plVar2) break;
    plVar4 = (longlong *)plVar4[6];
    plVar6 = (longlong *)0x0;
  } while (plVar4 != (longlong *)0x0);
  lVar5 = plVar6[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar5 = plVar6[0x1f];
    if (lVar5 == 0) {
      return param_1;
    }
  }
  lVar3 = UNodeMappingContainer::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *(uint *)(param_1 + 1) =
         *(uint *)(param_1 + 1) ^ (*(uint *)(lVar5 + 0x28) ^ *(uint *)(param_1 + 1)) & 1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(lVar5 + 0x2c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar5 + 0x30);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(lVar5 + 0x34);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar5 + 0x38);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(lVar5 + 0x3c);
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(lVar5 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar5 + 0x44);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar5 + 0x48);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(lVar5 + 0x4c);
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(lVar5 + 0x50);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(lVar5 + 0x54);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(lVar5 + 0x58);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(lVar5 + 0x5c);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(lVar5 + 0x60);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(lVar5 + 100);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar5 + 0x68);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(lVar5 + 0x6c);
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(lVar5 + 0x70);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(lVar5 + 0x74);
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(lVar5 + 0x78);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(lVar5 + 0x7c);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(lVar5 + 0x80);
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(lVar5 + 0x84);
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(lVar5 + 0x88);
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(lVar5 + 0x8c);
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(lVar5 + 0x90);
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(lVar5 + 0x94);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(lVar5 + 0x98);
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(lVar5 + 0x9c);
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(lVar5 + 0xa0);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(lVar5 + 0xa4);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(lVar5 + 0xa8);
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(lVar5 + 0xac);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(lVar5 + 0xb0);
    *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(lVar5 + 0xb4);
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(lVar5 + 0xb8);
    param_1[0x14] = *(undefined8 *)(lVar5 + 0xc0);
    *(uint *)(param_1 + 0x15) =
         *(uint *)(param_1 + 0x15) ^ (*(uint *)(lVar5 + 200) ^ *(uint *)(param_1 + 0x15)) & 1;
    *(ushort *)((longlong)param_1 + 0xac) = *(ushort *)((longlong)param_1 + 0xac) & 0xfffc;
    param_1[0x19] = 0;
    *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
    param_1[0x1e] = 0;
    param_1[0x20] = local_48;
    param_1[0x21] = uStack_40;
    param_1[0x16] = 0;
    param_1[0x22] = local_38;
    param_1[0x23] = uStack_30;
    *(undefined4 *)(param_1 + 0x17) = 0;
    param_1[0x24] = local_28;
    param_1[0x25] = uStack_20;
    param_1[0x18] = 0;
    param_1[0x26] = local_18;
    param_1[0x27] = uStack_10;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0x1f) = 0;
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
    param_1[0x28] = 0;
    *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(lVar5 + 0x168);
    *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)(lVar5 + 0x16c);
    param_1[0x2a] = *(undefined8 *)(lVar5 + 0x170);
  }
  return param_1;
}



// FUNCTION 1422ffaa0 FUN_1422ffaa0 body=113 status=ok
// SIG undefined FUN_1422ffaa0(void)

undefined8 * FUN_1422ffaa0(undefined8 *param_1)

{
  param_1[3] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  return param_1;
}



// FUNCTION 1422ffb20 FUN_1422ffb20 body=183 status=ok
// SIG undefined FUN_1422ffb20(void)

undefined8 *
FUN_1422ffb20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             longlong param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  param_1[1] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0x11) = param_4;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x12) = 1;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_5 != 0) {
    iVar1 = *(int *)(param_1 + 0xe);
    uVar2 = *(undefined4 *)(param_5 + 0xc);
    *(int *)(param_1 + 0xe) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0x74) < iVar1 + 1) {
      TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_1 + 0xb,iVar1);
    }
    puVar3 = (undefined8 *)param_1[0xd];
    if ((undefined8 *)param_1[0xd] == (undefined8 *)0x0) {
      puVar3 = param_1 + 0xb;
    }
    *(undefined4 *)((longlong)puVar3 + (longlong)iVar1 * 4) = uVar2;
    param_1[1] = *(undefined8 *)(param_5 + 0x18);
  }
  return param_1;
}



// FUNCTION 1422ffbe0 FCollisionResponseTemplate body=106 status=ok
// SIG undefined FCollisionResponseTemplate(void)

undefined8 * FCollisionResponseTemplate::FCollisionResponseTemplate(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 5,0);
  FGenericPlatformString::Memcpy(param_1[5],L"Needs description",0x24);
  *(undefined1 *)(param_1 + 7) = 1;
  FUN_1426d3dd0((longlong)param_1 + 0x39);
  return param_1;
}



// FUNCTION 1422ffc50 FUN_1422ffc50 body=182 status=ok
// SIG undefined FUN_1422ffc50(void)

undefined8 * FUN_1422ffc50(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_14503e058;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xbf800000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0xffffffffffffffff;
  Scalability::FQualityLevels::SetDefaults();
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
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
  return param_1;
}



// FUNCTION 1422ffd10 FUN_1422ffd10 body=197 status=ok
// SIG undefined FUN_1422ffd10(void)

void * FUN_1422ffd10(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                    undefined8 *param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x90);
  uVar1 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  uVar1 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)((longlong)param_1 + 0x20) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x28) = uVar1;
  uVar1 = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)((longlong)param_1 + 0x2c) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  uVar1 = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)((longlong)param_1 + 0x38) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x40) = uVar1;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x6c,param_2);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x74,param_3);
  return param_1;
}



// FUNCTION 1422ffde0 FUN_1422ffde0 body=580 status=ok
// SIG undefined FUN_1422ffde0(void)

uint * FUN_1422ffde0(uint *param_1,byte *param_2,byte param_3,longlong param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  pcVar1 = (char *)(param_4 + 1);
  param_1[2] = 0;
  uVar2 = 1;
  do {
    if (pcVar1[-1] == '\x02') {
      *param_1 = *param_1 | uVar2;
    }
    else if (pcVar1[-1] == '\x01') {
      param_1[1] = param_1[1] | uVar2;
    }
    if (*pcVar1 == '\x02') {
      *param_1 = *param_1 | uVar2 << 1;
    }
    else if (*pcVar1 == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 1;
    }
    if (pcVar1[1] == '\x02') {
      *param_1 = *param_1 | uVar2 << 2;
    }
    else if (pcVar1[1] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 2;
    }
    if (pcVar1[2] == '\x02') {
      *param_1 = *param_1 | uVar2 << 3;
    }
    else if (pcVar1[2] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 3;
    }
    if (pcVar1[3] == '\x02') {
      *param_1 = *param_1 | uVar2 << 4;
    }
    else if (pcVar1[3] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 4;
    }
    if (pcVar1[4] == '\x02') {
      *param_1 = *param_1 | uVar2 << 5;
    }
    else if (pcVar1[4] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 5;
    }
    if (pcVar1[5] == '\x02') {
      *param_1 = *param_1 | uVar2 << 6;
    }
    else if (pcVar1[5] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 6;
    }
    if (pcVar1[6] == '\x02') {
      *param_1 = *param_1 | uVar2 << 7;
    }
    else if (pcVar1[6] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 7;
    }
    if (pcVar1[7] == '\x02') {
      *param_1 = *param_1 | uVar2 << 8;
    }
    else if (pcVar1[7] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 8;
    }
    if (pcVar1[8] == '\x02') {
      *param_1 = *param_1 | uVar2 << 9;
    }
    else if (pcVar1[8] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 9;
    }
    if (pcVar1[9] == '\x02') {
      *param_1 = *param_1 | uVar2 << 10;
    }
    else if (pcVar1[9] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 10;
    }
    if (pcVar1[10] == '\x02') {
      *param_1 = *param_1 | uVar2 << 0xb;
    }
    else if (pcVar1[10] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 0xb;
    }
    if (pcVar1[0xb] == '\x02') {
      *param_1 = *param_1 | uVar2 << 0xc;
    }
    else if (pcVar1[0xb] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 0xc;
    }
    if (pcVar1[0xc] == '\x02') {
      *param_1 = *param_1 | uVar2 << 0xd;
    }
    else if (pcVar1[0xc] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 0xd;
    }
    if (pcVar1[0xd] == '\x02') {
      *param_1 = *param_1 | uVar2 << 0xe;
    }
    else if (pcVar1[0xd] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 0xe;
    }
    if (pcVar1[0xe] == '\x02') {
      *param_1 = *param_1 | uVar2 << 0xf;
    }
    else if (pcVar1[0xe] == '\x01') {
      param_1[1] = param_1[1] | uVar2 << 0xf;
    }
    uVar3 = uVar3 + 0x10;
    uVar2 = uVar2 << 0x10 | uVar2 >> 0x10;
    pcVar1 = pcVar1 + 0x10;
  } while (uVar3 < 0x20);
  param_1[2] = ((uint)param_3 << 5 | (uint)*param_2) << 0x17;
  return param_1;
}



// FUNCTION 142300030 FUN_142300030 body=362 status=ok
// SIG undefined FUN_142300030(void)

undefined8 * FUN_142300030(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  
  uVar5 = 0;
  *param_1 = &PTR_FUN_14503e530;
  if ((*(char *)(param_2 + 0x25) == '\0') &&
     (*(undefined1 *)(param_2 + 0x25) = 1, 1 < *(int *)(param_2 + 0x50))) {
    piVar1 = (int *)(param_2 + 0x28);
    piVar6 = *(int **)(param_2 + 0x48);
    if (*(int **)(param_2 + 0x48) == (int *)0x0) {
      piVar6 = piVar1;
    }
    AlgoImpl::
    IntroSortInternal<unsigned_int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,TLess<unsigned_int>_>_>
              (piVar6,(longlong)*(int *)(param_2 + 0x50),local_res8[0],local_res8);
    piVar6 = *(int **)(param_2 + 0x48);
    piVar4 = piVar6;
    if (piVar6 == (int *)0x0) {
      piVar4 = piVar1;
    }
    piVar7 = piVar4 + 1;
    uVar8 = (ulonglong)((longlong)(piVar4 + *(int *)(param_2 + 0x50)) + (3 - (longlong)piVar7)) >> 2
    ;
    if (piVar4 + *(int *)(param_2 + 0x50) < piVar7) {
      uVar8 = uVar5;
    }
    if (uVar8 != 0) {
      do {
        if (*piVar4 != *piVar7) {
          piVar4 = piVar4 + 1;
          *piVar4 = *piVar7;
        }
        piVar7 = piVar7 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar8);
      piVar6 = *(int **)(param_2 + 0x48);
    }
    iVar2 = *(int *)(param_2 + 0x50);
    if (piVar6 == (int *)0x0) {
      piVar6 = piVar1;
    }
    iVar3 = (int)((longlong)piVar4 - (longlong)piVar6 >> 2) + 1;
    if (iVar2 < iVar3) {
      *(int *)(param_2 + 0x50) = iVar3;
      if (*(int *)(param_2 + 0x54) < iVar3) {
        TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(piVar1);
      }
      piVar6 = *(int **)(param_2 + 0x48);
      if (*(int **)(param_2 + 0x48) == (int *)0x0) {
        piVar6 = piVar1;
      }
      _guard_xfg_dispatch_icall_nop(piVar6 + iVar2,0,(longlong)(iVar3 - iVar2) << 2);
    }
    else if ((iVar3 < iVar2) && (iVar3 != iVar2)) {
      *(int *)(param_2 + 0x50) = iVar3;
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[1] = param_2 + 0x28;
  param_1[2] = param_2 + 0x58;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)((longlong)param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 1423001a0 FQuatRotationMatrix body=366 status=ok
// SIG undefined FQuatRotationMatrix(void)

float * FQuatRotationMatrix::FQuatRotationMatrix(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2[3];
  fVar2 = param_2[2];
  fVar5 = fVar2 + fVar2;
  fVar3 = param_2[1];
  fVar4 = *param_2;
  fVar6 = fVar3 + fVar3;
  fVar8 = fVar4 * (fVar4 + fVar4);
  fVar7 = fVar1 * (fVar4 + fVar4);
  *param_1 = 1.0 - (fVar2 * fVar5 + fVar3 * fVar6);
  param_1[4] = fVar4 * fVar6 - fVar1 * fVar5;
  param_1[8] = fVar1 * fVar6 + fVar4 * fVar5;
  param_1[0xc] = DAT_1468b5d90;
  param_1[1] = fVar1 * fVar5 + fVar4 * fVar6;
  param_1[9] = fVar3 * fVar5 - fVar7;
  param_1[5] = 1.0 - (fVar2 * fVar5 + fVar8);
  fVar2 = DAT_1468b5d94;
  param_1[2] = fVar4 * fVar5 - fVar1 * fVar6;
  param_1[6] = fVar7 + fVar3 * fVar5;
  param_1[0xd] = fVar2;
  param_1[10] = 1.0 - (fVar3 * fVar6 + fVar8);
  fVar1 = DAT_1468b5d98;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xe] = fVar1;
  param_1[0xf] = 1.0;
  return param_1;
}



// FUNCTION 142300310 FUN_142300310 body=183 status=ok
// SIG undefined FUN_142300310(void)

undefined8 * FUN_142300310(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_14503cdb8;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 6) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3e4ccccd;
  return param_1;
}



// FUNCTION 1423003d0 UCanvasRenderTarget2D body=88 status=ok
// SIG undefined UCanvasRenderTarget2D(void)

undefined8 * UCanvasRenderTarget2D::UCanvasRenderTarget2D(undefined8 *param_1)

{
  FUN_142861a20();
  *param_1 = &PTR__scalar_deleting_destructor__14503d338;
  param_1[5] = &PTR_LAB_14503d610;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x1f,0);
  *(uint *)((longlong)param_1 + 0xbc) = *(uint *)((longlong)param_1 + 0xbc) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return param_1;
}



// FUNCTION 142300430 UCheatManager body=104 status=ok
// SIG undefined UCheatManager(void)

undefined8 * UCheatManager::UCheatManager(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14503e0f0;
  param_1[6] = 0;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffb;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar1 = FUN_1429238e0();
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 8) = 0x41b80000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x41a80000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x461c4000;
  *(undefined4 *)(param_1 + 9) = 0x41f00000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 2;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffd;
  return param_1;
}



// FUNCTION 1423004a0 UCollisionProfile body=264 status=ok
// SIG undefined UCollisionProfile(void)

undefined8 * UCollisionProfile::UCollisionProfile(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings();
  *param_1 = &PTR__scalar_deleting_destructor__14503d058;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FName::FName(local_res8,L"Collision",1);
  param_1[6] = local_res8[0];
  return param_1;
}



// FUNCTION 1423005b0 ~TArray<FCollisionResponseTemplate,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TArray<FCollisionResponseTemplate,FDefaultAllocator>(void)

void TArray<FCollisionResponseTemplate,FDefaultAllocator>::
     ~TArray<FCollisionResponseTemplate,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
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



// FUNCTION 142300620 FUN_142300620 body=143 status=ok
// SIG undefined FUN_142300620(void)

void FUN_142300620(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x58;
    do {
      if (*(longlong *)(lVar1 + 0x118) != 0) {
        FMemory::Free();
      }
      *(undefined ***)(lVar1 + -8) = &PTR__scalar_deleting_destructor__144080980;
      FUN_14074e760(lVar1 + 0x90);
      FUN_14074e810(lVar1);
      lVar1 = lVar1 + 0x188;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1423006b0 ~TSparseArray<TSetElement<TTuple<FOverlapKey,int>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_> body=122 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FOverlapKey,int>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>(void)

void TSparseArray<TSetElement<TTuple<FOverlapKey,int>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FOverlapKey,int>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
               (longlong param_1)

{
  *(undefined4 *)(param_1 + 0x808) = 0;
  if (*(int *)(param_1 + 0x80c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TInlineAllocator<64,FDefaultAllocator>_>
    ::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x828) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x82c) = 0;
  *(undefined4 *)(param_1 + 0x820) = 0;
  if (*(int *)(param_1 + 0x824) != 0) {
    *(undefined4 *)(param_1 + 0x824) = 0;
    TBitArray<TInlineAllocator<2,FDefaultAllocator>_>::Realloc(param_1 + 0x810,0);
  }
  if (*(longlong *)(param_1 + 0x818) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x800) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142300730 FUN_142300730 body=180 status=ok
// SIG undefined FUN_142300730(void)

void FUN_142300730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14503e058;
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1423007f0 FUN_1423007f0 body=360 status=ok
// SIG undefined FUN_1423007f0(void)

undefined8 * FUN_1423007f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  puVar1 = param_1 + 5;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x13) = *(undefined1 *)((longlong)param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x16) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  if (puVar1 != param_2 + 5) {
    iVar2 = *(int *)(param_2 + 10);
    puVar4 = (undefined8 *)param_2[9];
    *(int *)(param_1 + 10) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x54) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    }
    else {
      TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy(puVar1,iVar2);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = param_2 + 5;
      }
      puVar3 = (undefined8 *)param_1[9];
      if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
        puVar3 = puVar1;
      }
      _guard_xfg_dispatch_icall_nop(puVar3,puVar4,(longlong)iVar2 << 2);
    }
  }
  puVar1 = param_1 + 0xb;
  if (puVar1 != param_2 + 0xb) {
    iVar2 = *(int *)(param_2 + 0xe);
    puVar4 = (undefined8 *)param_2[0xd];
    *(int *)(param_1 + 0xe) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x74) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x74) = 0;
    }
    else {
      TArray<unsigned_int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy(puVar1,iVar2);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = param_2 + 0xb;
      }
      puVar3 = (undefined8 *)param_1[0xd];
      if ((undefined8 *)param_1[0xd] == (undefined8 *)0x0) {
        puVar3 = puVar1;
      }
      _guard_xfg_dispatch_icall_nop(puVar3,puVar4,(longlong)iVar2 << 2);
    }
  }
  return param_1;
}



// FUNCTION 142300960 FUN_142300960 body=598 status=ok
// SIG undefined FUN_142300960(void)

void FUN_142300960(undefined8 *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(longlong *)*param_1 != 0) &&
     (plVar4 = *(longlong **)(*(longlong *)*param_1 + 0x118), plVar4 != (longlong *)0x0)) {
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      do {
        if (plVar4 == (longlong *)param_1[1]) {
          return;
        }
        lVar3 = (**(code **)(*plVar4 + 0x6f0))(plVar4);
        if ((lVar3 == 0) || (plVar4 = *(longlong **)(lVar3 + 0x118), plVar4 == (longlong *)0x0))
        break;
        lVar3 = FUN_1429d7ab0();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      } while (bVar1);
    }
  }
  *(undefined8 *)(param_1[1] + 0x4d8) = *(undefined8 *)*param_1;
  *(undefined8 *)(param_1[1] + 0x4e0) = *(undefined8 *)param_1[2];
  if (*(longlong *)(param_1[1] + 0x4c8) != 0) {
    if ((*(longlong **)*param_1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(**(longlong **)*param_1 + 0x400))(), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if ((*(char *)param_1[3] != '\0') &&
       (FUN_14231a7f0(*(longlong *)(param_1[1] + 0x4c8) + 0x30), cVar2 == '\0')) {
      FUN_142301a70(*(longlong *)(param_1[1] + 0x4c8) + 0x30);
    }
    lVar3 = param_1[1];
    if (*(longlong *)*param_1 == 0) {
      *(undefined8 *)(lVar3 + 0x4e0) = 0;
      *(undefined1 *)(param_1[1] + 0x501) = 0;
      lVar3 = *(longlong *)(param_1[1] + 0x4c8);
      *(uint *)(lVar3 + 0x410) = *(uint *)(lVar3 + 0x410) & 0xfffffff8;
      *(undefined8 *)(lVar3 + 0x414) = 0;
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + 0x420),0,0x90);
      *(undefined4 *)(lVar3 + 0x42c) = 0x3f800000;
      cVar2 = '\0';
      lVar3 = *(longlong *)(param_1[1] + 0x4c8);
    }
    else {
      if (*(char *)(lVar3 + 0x565) == '\0') {
        (**(code **)(**(longlong **)(lVar3 + 0x4c8) + 0x608))();
        lVar3 = param_1[1];
      }
      lVar3 = *(longlong *)(lVar3 + 0x4c8);
    }
    FUN_14288e3d0(lVar3 + 0x5b8,cVar2);
    lVar3 = param_1[1];
    if ((byte)(*(char *)(lVar3 + 0x128) - 2U) < 2) {
      *(bool *)(lVar3 + 0x500) = *(longlong *)(lVar3 + 0x4d8) != 0;
    }
  }
  if (*(char *)param_1[4] != '\0') {
    (**(code **)(*(longlong *)param_1[1] + 0x850))();
  }
  return;
}



// FUNCTION 142300bd0 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FDynamicHitBuffer<physx::PxOverlapHit>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x1008] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_14503d320;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8050);
  }
  return param_1;
}



// FUNCTION 142300c20 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FDynamicHitBuffer<physx::PxRaycastHit>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x200c] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_14503d2f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10070);
  }
  return param_1;
}



// FUNCTION 142300c70 FUN_142300c70 body=43 status=ok
// SIG undefined FUN_142300c70(void)

undefined8 * FUN_142300c70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14503d2f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142300ca0 FUN_142300ca0 body=43 status=ok
// SIG undefined FUN_142300ca0(void)

undefined8 * FUN_142300ca0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14503d320;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142300cd0 FUN_142300cd0 body=97 status=ok
// SIG undefined FUN_142300cd0(void)

undefined8 * FUN_142300cd0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14503d640;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142300d40 FUN_142300d40 body=246 status=ok
// SIG undefined FUN_142300d40(void)

longlong FUN_142300d40(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x888) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x768) = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x800);
  FUN_14074e810(param_1 + 0x770);
  FUN_142300620(param_1 + 0x710);
  *(undefined ***)(param_1 + 0x5d0) = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x668);
  FUN_14074e810(param_1 + 0x5d8);
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8b0);
  }
  return param_1;
}



// FUNCTION 142300e40 FUN_142300e40 body=43 status=ok
// SIG undefined FUN_142300e40(void)

undefined8 * FUN_142300e40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14503cd78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142300e70 FUN_142300e70 body=52 status=ok
// SIG undefined FUN_142300e70(void)

undefined8 FUN_142300e70(undefined8 param_1,ulonglong param_2)

{
  FUN_142300730();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 142300eb0 `scalar_deleting_destructor' body=131 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FPerformanceTrackingChart::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x2d] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143fcfdf8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 142300f40 FUN_142300f40 body=43 status=ok
// SIG undefined FUN_142300f40(void)

undefined8 * FUN_142300f40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14503cd78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142300f70 FUN_142300f70 body=43 status=ok
// SIG undefined FUN_142300f70(void)

undefined8 * FUN_142300f70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142300fa0 FUN_142300fa0 body=43 status=ok
// SIG undefined FUN_142300fa0(void)

undefined8 * FUN_142300fa0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142300fd0 FUN_142300fd0 body=52 status=ok
// SIG undefined FUN_142300fd0(void)

undefined8 FUN_142300fd0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 142301010 `scalar_deleting_destructor' body=139 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCanvasRenderTarget2D::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_141edd5f0(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1423010a0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCheatManager::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142301100 `scalar_deleting_destructor' body=255 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCollisionProfile::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TArray<FCollisionResponseTemplate,FDefaultAllocator>::
  ~TArray<FCollisionResponseTemplate,FDefaultAllocator>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 142301200 Add body=304 status=ok
// SIG undefined Add(void)

int TBitArray<TInlineAllocator<2,FDefaultAllocator>_>::Add
              (longlong param_1,char param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = iVar2 + param_3;
  *(int *)(param_1 + 0x10) = iVar4;
  if (*(int *)(param_1 + 0x14) < iVar4) {
    uVar3 = (int)(iVar4 + 0x1f + (iVar4 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    if (uVar3 < 3) {
      iVar5 = 2;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x14) + 0x1f;
      lVar7 = 4;
      if (((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5 != 0) || (4 < uVar3)) {
        lVar7 = (longlong)(int)uVar3 + 0x10 + ((ulonglong)((longlong)(int)uVar3 * 3) >> 3);
      }
      uVar6 = FMemory::QuantizeSize(lVar7 * 4,0);
      iVar4 = *(int *)(param_1 + 0x10);
      iVar5 = (int)(uVar6 >> 2);
      if (iVar5 < (int)uVar3) {
        iVar5 = 0x7fffffff;
      }
    }
    *(int *)(param_1 + 0x14) = iVar5 << 5;
    Realloc(param_1,iVar4 - param_3);
  }
  if (param_3 == 1) {
    lVar7 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar7 = param_1;
    }
    lVar8 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5);
    uVar3 = *(uint *)(lVar7 + lVar8 * 4);
    puVar1 = (uint *)(lVar7 + lVar8 * 4);
    uVar9 = 1 << ((byte)iVar2 & 0x1f);
    if (param_2 == '\0') {
      *puVar1 = ~uVar9 & uVar3;
    }
    else {
      *puVar1 = uVar9 | uVar3;
    }
  }
  else {
    FUN_1406f6580(param_1,iVar2,param_3,param_2);
  }
  return iVar2;
}



// FUNCTION 142301330 AddIgnoredActor body=81 status=ok
// SIG undefined AddIgnoredActor(void)

void FCollisionQueryParams::AddIgnoredActor(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  if (*(int *)(param_1 + 0x74) < iVar1 + 1) {
    TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (param_1 + 0x58,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar2 = param_1 + 0x58;
  }
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = param_2;
  return;
}



// FUNCTION 142301390 AddIgnoredActor body=95 status=ok
// SIG undefined AddIgnoredActor(void)

void FCollisionQueryParams::AddIgnoredActor(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    iVar2 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = iVar2 + 1;
    if (*(int *)(param_1 + 0x74) < iVar2 + 1) {
      TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_1 + 0x58,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x68);
    if (*(longlong *)(param_1 + 0x68) == 0) {
      lVar3 = param_1 + 0x58;
    }
    *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = uVar1;
  }
  return;
}



// FUNCTION 1423013f0 AddIgnoredActors body=155 status=ok
// SIG undefined AddIgnoredActors(void)

void FCollisionQueryParams::AddIgnoredActors(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = 0;
  if (0 < (int)param_2[1]) {
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar5 + *param_2) != 0) {
        iVar1 = *(int *)(param_1 + 0x70);
        uVar2 = *(undefined4 *)(*(longlong *)(lVar5 + *param_2) + 0xc);
        *(int *)(param_1 + 0x70) = iVar1 + 1;
        if (*(int *)(param_1 + 0x74) < iVar1 + 1) {
          TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (param_1 + 0x58,iVar1);
        }
        lVar3 = *(longlong *)(param_1 + 0x68);
        if (*(longlong *)(param_1 + 0x68) == 0) {
          lVar3 = param_1 + 0x58;
        }
        *(undefined4 *)(lVar3 + (longlong)iVar1 * 4) = uVar2;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142301490 FUN_142301490 body=152 status=ok
// SIG undefined FUN_142301490(void)

void FUN_142301490(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      lVar3 = FWeakObjectPtr::Get();
      if (lVar3 != 0) {
        iVar1 = *(int *)(param_1 + 0x70);
        uVar2 = *(undefined4 *)(lVar3 + 0xc);
        *(int *)(param_1 + 0x70) = iVar1 + 1;
        if (*(int *)(param_1 + 0x74) < iVar1 + 1) {
          TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (param_1 + 0x58,iVar1);
        }
        lVar3 = *(longlong *)(param_1 + 0x68);
        if (*(longlong *)(param_1 + 0x68) == 0) {
          lVar3 = param_1 + 0x58;
        }
        *(undefined4 *)(lVar3 + (longlong)iVar1 * 4) = uVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_2 + 8));
  }
  return;
}



// FUNCTION 142301530 FUN_142301530 body=81 status=ok
// SIG undefined FUN_142301530(void)

void FUN_142301530(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar1 + 1;
  if (*(int *)(param_1 + 0x54) < iVar1 + 1) {
    TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar2 = param_1 + 0x28;
  }
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = param_2;
  return;
}



// FUNCTION 142301590 FUN_142301590 body=128 status=ok
// SIG undefined FUN_142301590(void)

void FUN_142301590(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_2 != (longlong *)0x0) &&
     (iVar2 = (**(code **)(*param_2 + 0x4e8))(), (iVar2 - 1U & 0xfffffffd) == 0)) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
    iVar2 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar2 + 1;
    if (*(int *)(param_1 + 0x54) < iVar2 + 1) {
      TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_1 + 0x28,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar3 = param_1 + 0x28;
    }
    *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = uVar1;
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
  return;
}



// FUNCTION 142301610 FUN_142301610 body=174 status=ok
// SIG undefined FUN_142301610(void)

void FUN_142301610(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  
  if ((param_2 != (longlong *)0x0) &&
     (iVar2 = (**(code **)(*param_2 + 0x4e8))(param_2), (iVar2 - 1U & 0xfffffffd) == 0)) {
    iVar2 = *(int *)((longlong)param_2 + 0xc);
    if (*(int *)(param_1 + 0x50) != 0) {
      piVar3 = *(int **)(param_1 + 0x48);
      if (*(int **)(param_1 + 0x48) == (int *)0x0) {
        piVar3 = (int *)(param_1 + 0x28);
      }
      if (*piVar3 == iVar2) {
        return;
      }
    }
    iVar1 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar1 + 1;
    if (*(int *)(param_1 + 0x54) < iVar1 + 1) {
      TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_1 + 0x28,iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar4 = param_1 + 0x28;
    }
    *(int *)(lVar4 + (longlong)iVar1 * 4) = iVar2;
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
  return;
}



// FUNCTION 1423016c0 FUN_1423016c0 body=207 status=ok
// SIG undefined FUN_1423016c0(void)

void FUN_1423016c0(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  plVar6 = (longlong *)*param_2;
  uVar7 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar6 + (int)param_2[1] < plVar6) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      plVar2 = (longlong *)*plVar6;
      if ((plVar2 != (longlong *)0x0) &&
         (iVar3 = (**(code **)(*plVar2 + 0x4e8))(plVar2), (iVar3 - 1U & 0xfffffffd) == 0)) {
        uVar1 = *(undefined4 *)((longlong)plVar2 + 0xc);
        iVar3 = *(int *)(param_1 + 0x50);
        *(int *)(param_1 + 0x50) = iVar3 + 1;
        if (*(int *)(param_1 + 0x54) < iVar3 + 1) {
          TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                    (param_1 + 0x28,iVar3);
        }
        lVar4 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar4 = param_1 + 0x28;
        }
        *(undefined4 *)(lVar4 + (longlong)iVar3 * 4) = uVar1;
        *(undefined1 *)(param_1 + 0x25) = 0;
      }
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar7);
  }
  return;
}



// FUNCTION 142301790 FUN_142301790 body=727 status=ok
// SIG undefined FUN_142301790(void)

undefined8
FUN_142301790(byte *param_1,undefined8 param_2,int param_3,longlong param_4,undefined4 param_5,
             undefined8 param_6,longlong *param_7,float *param_8,float *param_9,undefined8 param_10,
             undefined8 param_11,float param_12,undefined1 param_13,undefined1 param_14)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  byte *pbVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_res18 [2];
  
  lVar3 = (longlong)param_3;
  if (*(int *)((longlong)param_7 + 0xc) < (int)param_7[1] + param_3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
              (param_7);
  }
  uVar6 = 0;
  bVar7 = 0;
  fVar8 = (param_9[1] - param_8[1]) * (param_9[1] - param_8[1]) +
          (*param_9 - *param_8) * (*param_9 - *param_8) +
          (param_9[2] - param_8[2]) * (param_9[2] - param_8[2]);
  if ((fVar8 != 1.0) && (1e-08 <= fVar8)) {
    auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar9 = auVar10._0_4_;
    fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
    local_res18[0] = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
  }
  if (0 < param_3) {
    do {
      if (*(float *)(param_4 + 0x34) <= param_12) {
        uVar1 = FindFaceIndex(param_4);
        *(undefined4 *)(param_4 + 0x10) = uVar1;
        lVar5 = param_7[1];
        iVar2 = (int)lVar5 + 1;
        *(int *)(param_7 + 1) = iVar2;
        if (*(int *)((longlong)param_7 + 0xc) < iVar2) {
          TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_7);
        }
        lVar5 = (longlong)(int)lVar5 * 0x90;
        _Dst = (void *)(*param_7 + lVar5);
        *(undefined4 *)((longlong)_Dst + 0x68) = 0;
        *(undefined4 *)((longlong)_Dst + 0x70) = 0;
        *(undefined4 *)((longlong)_Dst + 0x78) = 0;
        *(undefined4 *)((longlong)_Dst + 0x84) = 0;
        *(undefined4 *)((longlong)_Dst + 0x8c) = 0;
        _guard_xfg_dispatch_icall_nop(_Dst,0,0x90);
        *(undefined4 *)((longlong)_Dst + 0xc) = 0x3f800000;
        pbVar4 = (byte *)(*param_7 + lVar5);
        iVar2 = FUN_142309120(param_2,param_4,pbVar4,param_5,param_6,param_8,param_9,param_10,
                              param_11,param_13,param_14);
        if (iVar2 == 0) {
          bVar7 = bVar7 | *pbVar4 & 1;
        }
        else {
          *(int *)(param_7 + 1) = (int)param_7[1] + -1;
          uVar6 = 1;
        }
      }
      param_4 = param_4 + 0x40;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  FUN_1422feb30(*param_7,(longlong)(int)param_7[1],local_res18[0]._0_1_,local_res18);
  *param_1 = bVar7;
  return uVar6;
}



// FUNCTION 142301a70 FUN_142301a70 body=655 status=ok
// SIG undefined FUN_142301a70(void)

void FUN_142301a70(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x24e) == '\x02')) {
    if ((*(byte *)(param_2 + 0x3c) & 2) != 0) {
      FTickFunction::AddPrerequisite(param_1,param_2,param_2 + 0x30);
    }
    lVar5 = *(longlong *)(param_2 + 0x118);
    if (lVar5 != 0) {
      if ((*(byte *)(lVar5 + 0x34) & 2) != 0) {
        FTickFunction::AddPrerequisite(param_1,lVar5,lVar5 + 0x28);
      }
      uStack_84 = 1;
      plVar2 = (longlong *)(lVar5 + 0x2b0);
      uVar3 = *(uint *)(lVar5 + 0x2d8);
      puVar1 = (uint *)(lVar5 + 0x2c0);
      local_88 = 0;
      uStack_74 = 0;
      iStack_70 = 0;
      if (uVar3 != 0) {
        puVar11 = *(uint **)(lVar5 + 0x2d0);
        if (*(uint **)(lVar5 + 0x2d0) == (uint *)0x0) {
          puVar11 = puVar1;
        }
        uVar4 = *puVar11;
        iStack_70 = 0;
        local_88 = 0;
        while (uVar4 == 0) {
          lVar9 = (longlong)local_88;
          iStack_70 = iStack_70 + 0x20;
          iVar7 = local_88 + 1;
          bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
          local_88 = iVar7;
          if (bVar6) goto LAB_142301bad;
          uVar4 = puVar11[lVar9 + 1];
        }
        uStack_84 = -uVar4 & uVar4;
        iVar7 = 0x1f;
        if (uStack_84 != 0) {
          for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uStack_84 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_74 = (iStack_70 - iVar7) + 0x1f;
        if ((int)uVar3 < (int)uStack_74) {
LAB_142301bad:
          uStack_74 = uVar3;
        }
      }
      uVar4 = *(uint *)(lVar5 + 0x2d8);
      uStack_50 = 0xffffffff;
      uStack_4c = uStack_74;
      local_48 = CONCAT44(uStack_6c,iStack_70);
      uStack_38 = CONCAT44(uStack_84,local_88);
      uVar10 = uVar4 & 0xffffffe0;
      iStack_60 = local_88;
      uStack_5c = uStack_84;
      local_58 = puVar1;
      local_40 = plVar2;
      puStack_30 = puVar1;
      uStack_20 = local_48;
      uStack_28 = uStack_50;
      uStack_24 = uStack_4c;
      uStack_74 = uVar4;
      if (uVar4 != uVar3) {
        puVar11 = *(uint **)(lVar5 + 0x2d0);
        if (*(uint **)(lVar5 + 0x2d0) == (uint *)0x0) {
          puVar11 = puVar1;
        }
        uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
        iVar7 = (int)uVar4 >> 5;
        while (uVar8 == 0) {
          uVar10 = uVar10 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_142301c74;
          uVar8 = puVar11[(longlong)iVar7 + 1];
          iVar7 = iVar7 + 1;
        }
        uVar8 = -uVar8 & uVar8;
        iVar7 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uVar8 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_74 = (uVar10 - iVar7) + 0x1f;
        if ((int)uVar3 < (int)uStack_74) {
LAB_142301c74:
          uStack_74 = uVar3;
        }
      }
      while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
        lVar5 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
        if ((lVar5 != 0) &&
           (((*(byte *)(lVar5 + 0x3c) & 2) != 0 && ((*(byte *)(lVar5 + 0xb9) & 0x10) != 0)))) {
          FTickFunction::AddPrerequisite(param_1,lVar5,lVar5 + 0x30);
        }
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
      }
    }
  }
  return;
}



// FUNCTION 142301d00 FUN_142301d00 body=307 status=ok
// SIG undefined FUN_142301d00(void)

int * FUN_142301d00(longlong param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x82c) == 0) {
    iVar5 = *(int *)(param_1 + 0x808);
    *(int *)(param_1 + 0x808) = iVar5 + 1;
    if (*(int *)(param_1 + 0x80c) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TInlineAllocator<64,FDefaultAllocator>_>
      ::ResizeGrow(param_1,iVar5);
    }
    TBitArray<TInlineAllocator<2,FDefaultAllocator>_>::Add(param_1 + 0x810,0,1);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x828);
    lVar4 = *(longlong *)(param_1 + 0x800);
    if (*(longlong *)(param_1 + 0x800) == 0) {
      lVar4 = param_1;
    }
    iVar3 = *(int *)(lVar4 + 4 + (longlong)iVar5 * 0x20);
    iVar1 = *(int *)(param_1 + 0x82c) + -1;
    *(int *)(param_1 + 0x828) = iVar3;
    *(int *)(param_1 + 0x82c) = iVar1;
    if (iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x800);
      if (*(longlong *)(param_1 + 0x800) == 0) {
        lVar4 = param_1;
      }
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  *param_2 = iVar5;
  lVar4 = *(longlong *)(param_1 + 0x818);
  if (*(longlong *)(param_1 + 0x818) == 0) {
    lVar4 = param_1 + 0x810;
  }
  puVar2 = (uint *)(lVar4 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
  lVar4 = *(longlong *)(param_1 + 0x800);
  if (*(longlong *)(param_1 + 0x800) == 0) {
    lVar4 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar4 + (longlong)iVar5 * 0x20;
  return param_2;
}



// FUNCTION 142301e40 FUN_142301e40 body=1129 status=ok
// SIG undefined FUN_142301e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double * FUN_142301e40(longlong param_1,double *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  undefined4 uVar28;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88 [2];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  fVar27 = (float)param_3;
  uVar28 = (undefined4)((ulonglong)param_3 >> 0x20);
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[10] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  *(undefined4 *)(param_2 + 0xd) = 0;
  *(undefined2 *)((longlong)param_2 + 0x6c) = 0;
  uVar9 = DAT_146b17160;
  uVar7 = DAT_146ac3af8;
  uVar6 = DAT_146ac3ad4;
  uVar13 = (ulonglong)DAT_146b17160;
  QueryPerformanceCounter(local_88);
  dVar3 = (double)CONCAT44(local_88[0].s.HighPart,local_88[0].s.LowPart) * DAT_1468b02f8 +
          16777216.0;
  if (0.0 < *(double *)(param_1 + 0x10)) {
    fVar27 = (float)(dVar3 - *(double *)(param_1 + 0x10));
    uVar28 = 0;
  }
  *(double *)(param_1 + 0x10) = dVar3;
  dVar24 = (double)fVar27;
  param_2[1] = dVar24;
  dVar21 = DAT_1468b5a88;
  param_2[2] = DAT_1468b5a88;
  param_2[3] = DAT_1468b5a90;
  param_2[8] = DAT_146afeff0;
  param_2[9] = DAT_146af2460;
  if ((*DAT_146aefbc0 != 0) && (dVar21 < dVar24)) {
    fVar27 = (float)(dVar24 - dVar21);
    uVar28 = 0;
  }
  *param_2 = (double)fVar27;
  uVar15 = DAT_146ac3afc;
  if (DAT_146ac3afc <= uVar6) {
    uVar15 = uVar6;
  }
  uVar4 = uVar9;
  if (uVar9 <= uVar15) {
    uVar4 = uVar15;
  }
  uVar17 = (ulonglong)uVar4;
  dVar21 = (double)uVar17 * DAT_1468b02f8;
  fVar20 = (float)FUN_142698f20();
  uVar15 = uVar9;
  if (uVar9 == 0) {
    uVar4 = uVar6;
    if (uVar6 <= DAT_146ac3afc) {
      uVar4 = DAT_146ac3afc;
    }
    fVar23 = fVar27;
    if (fVar27 <= (float)dVar21) {
      fVar23 = (float)dVar21;
    }
    uVar15 = (uint)(longlong)((double)fVar23 / DAT_1468b02f8);
    uVar17 = (longlong)((double)fVar23 / DAT_1468b02f8) & 0xffffffff;
    if (uVar15 <= uVar4) {
      uVar17 = (ulonglong)uVar4;
    }
  }
  param_2[2] = DAT_1468b5a88;
  dVar24 = (double)(float)((double)DAT_146ac3afc * DAT_1468b02f8);
  param_2[4] = dVar24;
  dVar25 = (double)(float)((double)uVar6 * DAT_1468b02f8);
  param_2[5] = dVar25;
  dVar26 = (double)(float)((double)uVar7 * DAT_1468b02f8);
  param_2[6] = dVar26;
  dVar21 = (double)uVar13 * DAT_1468b02f8;
  param_2[7] = (double)(float)dVar21;
  param_2[0xb] = DAT_1469e6870;
  *(undefined4 *)(param_2 + 0xc) = DAT_1469e6878;
  *(undefined4 *)((longlong)param_2 + 100) = DAT_1469e687c;
  if ((fVar27 < DAT_146531bb8) || (DAT_146531bb8 <= 0.0)) {
    *(undefined1 *)(param_2 + 0xd) = 1;
    if (fVar20 * 0.001 < fVar27) {
      dVar22 = (double)(fVar20 * 0.001);
      if (dVar22 <= dVar24) {
        *(undefined1 *)((longlong)param_2 + 0x69) = 1;
      }
      if (dVar22 <= dVar25) {
        *(undefined1 *)((longlong)param_2 + 0x6a) = 1;
      }
      if (dVar22 <= dVar26) {
        *(undefined1 *)((longlong)param_2 + 0x6b) = 1;
      }
      if (uVar9 == 0) {
        if ((dVar22 <= dVar26 || (dVar22 <= dVar25 || dVar22 <= dVar24)) || (uVar15 != (uint)uVar17)
           ) goto LAB_1423020ee;
      }
      else if ((double)(float)dVar21 < dVar22) goto LAB_1423020ee;
      *(undefined1 *)((longlong)param_2 + 0x6c) = 1;
    }
  }
LAB_1423020ee:
  fVar20 = (float)FUN_142696f10();
  if (((fVar20 * 0.001 <= fVar27) &&
      (dVar21 = *(double *)(param_1 + 0x20), fVar20 = (float)FUN_1426973e0(),
      fVar20 * 0.001 <= (float)(dVar3 - dVar21))) &&
     (fVar20 = (float)FEnginePerformanceTargets::GetHitchToNonHitchRatio(),
     fVar20 * *(float *)(param_1 + 0x18) < fVar27)) {
    fVar20 = (float)uVar17 - 0.25;
    if ((float)DAT_146ac3afc < fVar20) {
      if ((float)uVar6 < fVar20) {
        if ((float)uVar7 < fVar20) {
          if (uVar15 == (uint)uVar17) {
            *(undefined1 *)((longlong)param_2 + 0x6d) = 5;
            uVar14 = 5;
          }
          else {
            *(undefined1 *)((longlong)param_2 + 0x6d) = 1;
            uVar14 = 1;
          }
        }
        else {
          *(undefined1 *)((longlong)param_2 + 0x6d) = 4;
          uVar14 = 4;
        }
      }
      else {
        *(undefined1 *)((longlong)param_2 + 0x6d) = 3;
        uVar14 = 3;
      }
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x6d) = 2;
      uVar14 = 2;
    }
    lVar8 = DAT_146b17150;
    bVar5 = false;
    plVar19 = (longlong *)(DAT_146b17150 + 0xaf8);
    *(int *)(DAT_146b17150 + 0xb0c) = *(int *)(DAT_146b17150 + 0xb0c) + 1;
    iVar12 = *(int *)(lVar8 + 0xb0c);
    iVar11 = *(int *)(lVar8 + 0xb00) + -1;
    lVar16 = (longlong)iVar11;
    if (-1 < iVar11) {
      lVar18 = lVar16 << 4;
      bVar5 = false;
      do {
        lVar1 = *plVar19;
        if (((*(int *)(lVar18 + 8 + lVar1) == 0) ||
            (plVar2 = *(longlong **)(lVar18 + lVar1), plVar2 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar2 + 0x40))(plVar2,uVar14,CONCAT44(uVar28,fVar27)),
           cVar10 == '\0')) {
          bVar5 = true;
        }
        lVar18 = lVar18 + -0x10;
        lVar16 = lVar16 + -1;
      } while (-1 < lVar16);
      iVar12 = *(int *)(lVar8 + 0xb0c);
    }
    *(int *)(lVar8 + 0xb0c) = iVar12 + -1;
    if (bVar5) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar19,0);
    }
    *(double *)(param_1 + 0x20) = dVar3;
  }
  *(float *)(param_1 + 0x18) = fVar27;
  param_2[10] = 100.0;
  FUN_142874670(DAT_146b17150,local_88);
  if (local_88[0].s.LowPart - 3 < 2) {
    param_2[10] = (double)((float)local_88[0]._4_4_ * 100.0);
  }
  return param_2;
}



// FUNCTION 1423022b0 FUN_1423022b0 body=476 status=ok
// SIG undefined FUN_1423022b0(void)

void FUN_1423022b0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  float fVar8;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined1 local_b8 [12];
  undefined4 local_ac;
  
  if (param_3[1] != 0) {
    plVar4 = (longlong *)UDamageType::GetPrivateStaticClass();
    plVar6 = (longlong *)param_3[1];
    for (plVar3 = plVar6; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
      if (plVar3 == plVar4) goto LAB_142302301;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_142302301:
  lVar5 = plVar6[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar5 = plVar6[0x1f];
  }
  fVar1 = *(float *)(lVar5 + 0x2c);
  if ((3.0 < fVar1) && (*(longlong *)(param_1 + 0x4c8) != 0)) {
    _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
    local_ac = 0x3f800000;
    (**(code **)(*param_3 + 0x18))(param_3,param_1,param_4,local_b8,&local_d8);
    local_e0 = local_d0 * fVar1;
    bVar7 = ~(byte)(*(uint *)(lVar5 + 0x28) >> 1) & 1;
    fVar8 = local_e0;
    if ((bVar7 == 0) && (fVar2 = *(float *)(*(longlong *)(param_1 + 0x4c8) + 0x318), 1e-08 < fVar2))
    {
      fVar8 = local_e0 / fVar2;
    }
    plVar6 = *(longlong **)(param_1 + 0x4c8);
    plVar3 = (longlong *)plVar6[2];
    lVar5 = plVar3[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      plVar6 = *(longlong **)(param_1 + 0x4c8);
      lVar5 = plVar3[0x1f];
    }
    if ((*(float *)(lVar5 + 0x238) < *(float *)((longlong)plVar6 + 0x194)) && (0.0 < fVar8)) {
      local_e0 = local_e0 * 0.5;
    }
    local_c8 = CONCAT44(local_d4 * fVar1,local_d8 * fVar1);
    local_c0 = local_e0;
    (**(code **)(*plVar6 + 0x7c0))(local_c8,&local_c8,bVar7);
  }
  return;
}



// FUNCTION 142302490 FUN_142302490 body=99 status=ok
// SIG undefined FUN_142302490(void)

void FUN_142302490(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if ((((*(longlong *)(param_1 + 0x4c8) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x4c8) + 0x248) != '\0')) &&
      (plVar2 = (longlong *)FUN_1426973f0(), plVar2 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar2 + 0x598))(plVar2,param_1), cVar1 == '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x638))(*(longlong **)(param_1 + 0x4c8),plVar2);
  }
  return;
}



// FUNCTION 142302500 FUN_142302500 body=529 status=ok
// SIG undefined FUN_142302500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142302500(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2[2];
  *(ulonglong *)param_1 =
       CONCAT44((param_2[1] - param_1[1]) * param_3 + param_1[1],
                (*param_2 - *param_1) * param_3 + *param_1);
  param_1[2] = (fVar1 - param_1[2]) * param_3 + param_1[2];
  fVar1 = (float)DAT_146aefae0;
  fVar4 = DAT_146aefae0._4_4_;
  fVar3 = DAT_146aefae0._8_4_;
  auVar5._4_4_ = param_2[4] - param_1[4];
  auVar5._0_4_ = param_2[3] - param_1[3];
  auVar5._8_4_ = param_2[5] - param_1[5];
  auVar5._12_4_ = 0;
  auVar5 = divps(auVar5,_DAT_146aefae0);
  fVar6 = (param_2[3] - param_1[3]) - (float)(int)auVar5._0_4_ * fVar1;
  fVar7 = (param_2[4] - param_1[4]) - (float)(int)auVar5._4_4_ * fVar4;
  fVar8 = (param_2[5] - param_1[5]) - (float)(int)auVar5._8_4_ * fVar3;
  fVar6 = (float)(((uint)(fVar6 + fVar1) ^ (uint)fVar6) & -(uint)(0.0 <= fVar6) ^
                 (uint)(fVar6 + fVar1));
  fVar7 = (float)(((uint)(fVar7 + fVar4) ^ (uint)fVar7) & -(uint)(0.0 <= fVar7) ^
                 (uint)(fVar7 + fVar4));
  fVar8 = (float)(((uint)(fVar8 + fVar3) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                 (uint)(fVar8 + fVar3));
  bVar2 = fRam0000000146aefad8 < fVar8;
  *(ulonglong *)(param_1 + 3) =
       CONCAT44((float)(((uint)(fVar7 - fVar4) ^ (uint)fVar7) &
                        -(uint)(fRam0000000146aefad4 < fVar7) ^ (uint)fVar7) * param_3 + param_1[4],
                (float)(((uint)(fVar6 - fVar1) ^ (uint)fVar6) & -(uint)(_DAT_146aefad0 < fVar6) ^
                       (uint)fVar6) * param_3 + param_1[3]);
  param_1[5] = (float)(((uint)(fVar8 - fVar3) ^ (uint)fVar8) & -(uint)bVar2 ^ (uint)fVar8) * param_3
               + param_1[5];
  param_1[6] = (param_2[6] - param_1[6]) * param_3 + param_1[6];
  param_1[9] = (param_2[9] - param_1[9]) * param_3 + param_1[9];
  param_1[10] = (param_2[10] - param_1[10]) * param_3 + param_1[10];
  param_1[0xb] = (param_2[0xb] - param_1[0xb]) * param_3 + param_1[0xb];
  fVar4 = param_1[0xd];
  fVar1 = param_2[400];
  param_1[0x191] = (param_2[0x191] - param_1[0x191]) * param_3 + param_1[0x191];
  param_1[400] = (fVar1 - param_1[400]) * param_3 + param_1[400];
  param_1[0xc] = (param_2[0xc] - param_1[0xc]) * param_3 + param_1[0xc];
  fVar4 = (float)((((uint)param_2[0xd] | (uint)fVar4) ^ (uint)fVar4) & 1 ^ (uint)fVar4);
  param_1[0xd] = fVar4;
  param_1[0xd] = (float)((((uint)param_2[0xd] | (uint)fVar4) ^ (uint)fVar4) & 2 ^ (uint)fVar4);
  return;
}



// FUNCTION 142302720 FUN_142302720 body=640 status=ok
// SIG undefined FUN_142302720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142302720(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58 [5];
  undefined4 local_30;
  longlong local_28 [2];
  
  plVar4 = (longlong *)0x0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar4 = (longlong *)param_1[4];
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  puVar2 = (undefined8 *)FPaths::BugItDir(&local_98);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(local_28,L"%s%s/%s_",puVar6,puVar5,puVar5);
  if (local_98 != 0) {
    FMemory::Free();
  }
  local_78 = (undefined2 *)0x0;
  local_70 = 0;
  local_98 = 0;
  local_90 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,&DAT_14503abe8,8);
  uVar3 = FUN_1415c3d50();
  FFileHelper::GenerateNextBitmapFilename(local_28,&local_98,&local_78,uVar3);
  if (local_98 != 0) {
    FMemory::Free();
  }
  puVar5 = &DAT_143f3eda8;
  if ((int)local_70 != 0) {
    puVar5 = local_78;
  }
  FString::PrintfImpl(&local_98,L"BUGSCREENSHOTWITHHUDINFO %s",puVar5);
  (**(code **)(*plVar4 + 0xd28))(plVar4,&local_88,&local_98,1);
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  (**(code **)(*plVar4 + 0x7a8))(plVar4,&local_68,local_58 + 4);
  if (plVar4[0x91] != 0) {
    lVar1 = *(longlong *)(plVar4[0x91] + 0x168);
    if (lVar1 == 0) {
      local_88 = _DAT_1468b5d90;
      local_80 = DAT_1468b5d98;
    }
    else {
      local_88 = *(longlong *)(lVar1 + 0x220);
      local_80 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_68 = local_88;
    local_60 = local_80;
  }
  local_90 = CONCAT44(local_90._4_4_,local_60);
  local_80 = local_30;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_88 = local_58[4];
  local_98 = local_68;
  (**(code **)(*param_1 + 0x3c8))(param_1,&local_98,&local_88,local_58 + 2,local_58);
  (**(code **)(*param_1 + 0x3f8))(param_1,param_2,&local_78,local_58 + 2,local_58);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423029a0 FUN_1423029a0 body=104 status=ok
// SIG undefined FUN_1423029a0(void)

void FUN_1423029a0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  local_30 = param_7;
  local_38 = CONCAT44(param_6,param_5);
  local_28 = CONCAT44(param_3,param_2);
  local_20 = param_4;
  local_10 = param_4;
  (**(code **)(*param_1 + 0x3f0))(param_2,&local_28,&local_38);
  return;
}



// FUNCTION 142302a10 FUN_142302a10 body=383 status=ok
// SIG undefined FUN_142302a10(void)

void FUN_142302a10(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  double dVar3;
  float local_38;
  float fStack_34;
  float fStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  undefined8 local_18;
  float local_10;
  
  pwVar2 = L"";
  if (*(int *)(param_2 + 1) == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)*param_2;
  }
  fStack_24 = 0.0;
  fStack_20 = 0.0;
  dVar3 = _wtof(pwVar1);
  local_28 = (float)dVar3;
  pwVar1 = _guard_xfg_dispatch_icall_nop(pwVar1,L",");
  if (pwVar1 != (wchar_t *)0x0) {
    dVar3 = _wtof(pwVar1 + 1);
    fStack_24 = (float)dVar3;
    pwVar1 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L",");
    if (pwVar1 != (wchar_t *)0x0) {
      dVar3 = _wtof(pwVar1 + 1);
      fStack_20 = (float)dVar3;
    }
  }
  if (*(int *)(param_3 + 1) != 0) {
    pwVar2 = (wchar_t *)*param_3;
  }
  fStack_34 = 0.0;
  fStack_30 = 0.0;
  dVar3 = _wtof(pwVar2);
  local_38 = (float)dVar3;
  pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar2,L",");
  if (pwVar2 != (wchar_t *)0x0) {
    dVar3 = _wtof(pwVar2 + 1);
    fStack_34 = (float)dVar3;
    pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L",");
    if (pwVar2 != (wchar_t *)0x0) {
      dVar3 = _wtof(pwVar2 + 1);
      fStack_30 = (float)dVar3;
    }
  }
  local_18 = CONCAT44(fStack_34,local_38);
  local_10 = fStack_30;
  fStack_30 = fStack_20;
  local_38 = local_28;
  fStack_34 = fStack_24;
  (**(code **)(*param_1 + 0x3f0))(param_1,&local_38,&local_18);
  return;
}



// FUNCTION 142302b90 BugItStringCreator body=521 status=ok
// SIG undefined BugItStringCreator(void)

void UCheatManager::BugItStringCreator
               (undefined8 param_1,float *param_2,float *param_3,longlong *param_4,longlong *param_5
               )

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  dVar3 = (double)param_3[2];
  dVar4 = (double)param_3[1];
  dVar5 = (double)*param_3;
  dVar8 = (double)param_2[2];
  dVar9 = dVar5;
  dVar10 = dVar4;
  dVar11 = dVar3;
  FString::PrintfImpl(&local_98,L"BugItGo %f %f %f %f %f %f",(double)fVar2,(double)fVar1,dVar8,dVar5
                      ,dVar4,dVar3);
  if (param_4 == &local_98) {
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_4 != 0) {
      FMemory::Free();
    }
    *param_4 = local_98;
    *(undefined4 *)(param_4 + 1) = (undefined4)local_90;
    *(undefined4 *)((longlong)param_4 + 0xc) = local_90._4_4_;
  }
  FString::PrintfImpl(&local_78,L"P=%f Y=%f R=%f",dVar5,dVar4,dVar3,dVar9,dVar10,dVar11);
  puVar6 = &DAT_143f3eda8;
  if (local_70 != 0) {
    puVar6 = local_78;
  }
  FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)fVar2,(double)fVar1,dVar8,dVar9,
                      dVar10,dVar11);
  puVar7 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar7 = local_88;
  }
  FString::PrintfImpl(&local_98,L"?BugLoc=%s?BugRot=%s",puVar7,puVar6,dVar8,dVar9,dVar10,dVar11);
  if (param_5 == &local_98) {
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_5 != 0) {
      FMemory::Free();
    }
    *param_5 = local_98;
    *(undefined4 *)(param_5 + 1) = (undefined4)local_90;
    *(undefined4 *)((longlong)param_5 + 0xc) = local_90._4_4_;
    local_90 = 0;
    local_98 = 0;
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142302da0 FUN_142302da0 body=299 status=ok
// SIG undefined FUN_142302da0(void)

void FUN_142302da0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_28;
  undefined8 local_20;
  
  (**(code **)(*param_1 + 0x2b0))();
  plVar2 = (longlong *)0x0;
  plVar3 = plVar2;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar3 = (longlong *)param_1[4];
  }
  plVar1 = (longlong *)plVar3[0x91];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x500))(plVar1,param_2,param_3,0,0);
    local_28 = *param_3;
    local_20 = CONCAT44(local_20._4_4_,(int)param_3[1]);
    (**(code **)(*plVar1 + 0x7b0))(plVar1,&local_28,0);
  }
  (**(code **)(*plVar3 + 0x728))(plVar3,param_3,1);
  (**(code **)(*param_1 + 0x2b0))(param_1);
  local_28 = 0;
  local_20 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"BugItGo: Ghost mode is ON",0x34);
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar2 = (longlong *)param_1[4];
  }
  (**(code **)(*plVar2 + 0xc60))(plVar2,&local_28,0,0);
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142302ed0 FUN_142302ed0 body=59 status=ok
// SIG undefined FUN_142302ed0(void)

void FUN_142302ed0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x53c) = *param_2;
  *(undefined4 *)(param_1 + 0x544) = uVar1;
  puVar3 = (undefined8 *)FRotator::Quaternion(param_3,local_18);
  uVar2 = puVar3[1];
  *(undefined8 *)(param_1 + 0x550) = *puVar3;
  *(undefined8 *)(param_1 + 0x558) = uVar2;
  return;
}



// FUNCTION 142302f10 FUN_142302f10 body=1955 status=ok
// SIG undefined FUN_142302f10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142302f10(longlong *param_1,float *param_2,float *param_3,longlong *param_4)

{
  longlong *plVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *pfVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
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
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_b8 [32];
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  
  fVar13 = fRam0000000146aefb7c;
  fVar12 = fRam0000000146aefb78;
  fVar11 = fRam0000000146aefb74;
  fVar10 = _DAT_146aefb70;
  fVar9 = DAT_1468b5d98;
  local_88 = *(undefined8 *)(param_3 + 4);
  uStack_80 = *(undefined8 *)(param_3 + 6);
  local_78._0_4_ = _DAT_146aefa50 & _DAT_146aefb20;
  local_78._4_4_ = uRam0000000146aefa54 & uRam0000000146aefb24;
  local_78._8_4_ = uRam0000000146aefa58 & uRam0000000146aefb28;
  local_78._12_4_ = uRam0000000146aefa5c & uRam0000000146aefb2c;
  local_c8 = param_3[8];
  local_c4 = param_3[9];
  local_c0 = param_3[10];
  fVar32 = *param_3;
  fVar2 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  *(undefined1 *)(param_2 + 6) = 0;
  fVar23 = fVar32 * fVar32 + fVar6 * fVar6;
  fVar25 = fVar2 * fVar2 + fVar7 * fVar7;
  fVar27 = fVar6 * fVar6 + fVar32 * fVar32;
  fVar29 = fVar7 * fVar7 + fVar2 * fVar2;
  fVar31 = fVar25 + fVar23;
  fVar25 = fVar27 + fVar25;
  fVar27 = fVar29 + fVar27;
  fVar23 = fVar23 + fVar29;
  auVar22._4_4_ = fVar25;
  auVar22._0_4_ = fVar31;
  auVar22._8_4_ = fVar27;
  auVar22._12_4_ = fVar23;
  auVar22 = rsqrtps(local_78,auVar22);
  fVar24 = auVar22._0_4_;
  fVar26 = auVar22._4_4_;
  fVar28 = auVar22._8_4_;
  fVar30 = auVar22._12_4_;
  fVar24 = (fVar10 - fVar24 * fVar24 * fVar31 * fVar10) * fVar24 + fVar24;
  fVar26 = (fVar11 - fVar26 * fVar26 * fVar25 * fVar11) * fVar26 + fVar26;
  fVar28 = (fVar12 - fVar28 * fVar28 * fVar27 * fVar12) * fVar28 + fVar28;
  fVar30 = (fVar13 - fVar30 * fVar30 * fVar23 * fVar13) * fVar30 + fVar30;
  fVar29 = ABS(local_c4);
  local_98 = ((uint)(((fVar10 - fVar24 * fVar24 * fVar31 * fVar10) * fVar24 + fVar24) * fVar32) ^
             _DAT_146aefb60) & -(uint)(_DAT_146aefc90 <= fVar31) ^ _DAT_146aefb60;
  uStack_94 = ((uint)(((fVar11 - fVar26 * fVar26 * fVar25 * fVar11) * fVar26 + fVar26) * fVar2) ^
              uRam0000000146aefb64) & -(uint)(fRam0000000146aefc94 <= fVar25) ^ uRam0000000146aefb64
  ;
  uStack_90 = ((uint)(((fVar12 - fVar28 * fVar28 * fVar27 * fVar12) * fVar28 + fVar28) * fVar6) ^
              uRam0000000146aefb68) & -(uint)(fRam0000000146aefc98 <= fVar27) ^ uRam0000000146aefb68
  ;
  uStack_8c = ((uint)(((fVar13 - fVar30 * fVar30 * fVar23 * fVar13) * fVar30 + fVar30) * fVar7) ^
              uRam0000000146aefb6c) & -(uint)(fRam0000000146aefc9c <= fVar23) ^ uRam0000000146aefb6c
  ;
  *(undefined8 *)(param_2 + 3) = _DAT_1468b5d90;
  param_2[5] = fVar9;
  *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 3);
  param_2[2] = fVar9;
  fVar32 = local_c4;
  if (ABS(local_c8) <= fVar29) {
    fVar29 = ABS(local_c8);
    fVar32 = local_c8;
  }
  if (ABS(local_c0) < fVar29) {
    fVar32 = local_c0;
  }
  uVar17 = 0;
  uVar20 = uVar17;
  uVar21 = uVar17;
  if (0 < (int)param_1[1]) {
    do {
      lVar4 = *param_1;
      plVar5 = *(longlong **)(lVar4 + 0x50 + uVar21);
      plVar1 = plVar5 + *(int *)(lVar4 + 0x58 + uVar21);
      plVar16 = plVar5;
      if (plVar5 != plVar1) {
LAB_1423030b0:
        if (*plVar16 == 0) goto code_r0x0001423030b9;
        plVar18 = (longlong *)*param_4;
        plVar16 = plVar18 + (int)param_4[1];
        for (; plVar18 != plVar16; plVar18 = plVar18 + 1) {
          if (plVar5 != plVar1) {
            plVar15 = plVar5;
            do {
              if (*plVar15 == *plVar18) goto LAB_1423030c2;
              plVar15 = plVar15 + 1;
            } while (plVar15 != plVar1);
          }
        }
        bVar8 = false;
        goto LAB_1423030c4;
      }
LAB_1423030c2:
      bVar8 = true;
LAB_1423030c4:
      if (bVar8) {
        pfVar14 = (float *)FUN_142305000((longlong)(int)uVar20 * 0xb0 + lVar4,local_b8,&local_98,
                                         fVar32);
        if (*(char *)(param_2 + 6) == '\0') {
          if (*(char *)(pfVar14 + 6) != '\0') {
            fVar2 = pfVar14[1];
            fVar6 = pfVar14[2];
            fVar7 = pfVar14[3];
            uVar3 = *(undefined8 *)(pfVar14 + 4);
            fVar29 = pfVar14[6];
            *param_2 = *pfVar14;
            param_2[1] = fVar2;
            param_2[2] = fVar6;
            param_2[3] = fVar7;
            *(undefined8 *)(param_2 + 4) = uVar3;
            param_2[6] = fVar29;
          }
        }
        else if (*(char *)(pfVar14 + 6) != '\0') {
          fVar29 = *param_2;
          if (*pfVar14 <= *param_2) {
            fVar29 = *pfVar14;
          }
          fVar2 = pfVar14[1];
          if (param_2[1] <= pfVar14[1]) {
            fVar2 = param_2[1];
          }
          *param_2 = fVar29;
          fVar29 = pfVar14[2];
          if (param_2[2] <= pfVar14[2]) {
            fVar29 = param_2[2];
          }
          param_2[1] = fVar2;
          fVar2 = pfVar14[3];
          if (pfVar14[3] <= param_2[3]) {
            fVar2 = param_2[3];
          }
          param_2[2] = fVar29;
          fVar29 = pfVar14[4];
          if (pfVar14[4] <= param_2[4]) {
            fVar29 = param_2[4];
          }
          param_2[3] = fVar2;
          fVar2 = pfVar14[5];
          if (pfVar14[5] <= param_2[5]) {
            fVar2 = param_2[5];
          }
          param_2[4] = fVar29;
          param_2[5] = fVar2;
        }
      }
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      uVar21 = uVar21 + 0xb0;
    } while ((int)uVar19 < (int)param_1[1]);
  }
  uVar20 = uVar17;
  uVar21 = uVar17;
  if (0 < (int)param_1[3]) {
    do {
      lVar4 = param_1[2];
      plVar5 = *(longlong **)(lVar4 + 0x50 + uVar21);
      plVar1 = plVar5 + *(int *)(lVar4 + 0x58 + uVar21);
      plVar16 = plVar5;
      if (plVar5 != plVar1) {
LAB_142303202:
        if (*plVar16 == 0) goto code_r0x00014230320b;
        plVar18 = (longlong *)*param_4;
        plVar16 = plVar18 + (int)param_4[1];
        for (; plVar18 != plVar16; plVar18 = plVar18 + 1) {
          if (plVar5 != plVar1) {
            plVar15 = plVar5;
            do {
              if (*plVar15 == *plVar18) goto LAB_142303214;
              plVar15 = plVar15 + 1;
            } while (plVar15 != plVar1);
          }
        }
        bVar8 = false;
        goto LAB_142303216;
      }
LAB_142303214:
      bVar8 = true;
LAB_142303216:
      if (bVar8) {
        pfVar14 = (float *)FUN_142303f10((longlong)(int)uVar20 * 0xe0 + lVar4,local_b8,&local_98,
                                         fVar32);
        if (*(char *)(param_2 + 6) == '\0') {
          if (*(char *)(pfVar14 + 6) != '\0') {
            fVar2 = pfVar14[1];
            fVar6 = pfVar14[2];
            fVar7 = pfVar14[3];
            uVar3 = *(undefined8 *)(pfVar14 + 4);
            fVar29 = pfVar14[6];
            *param_2 = *pfVar14;
            param_2[1] = fVar2;
            param_2[2] = fVar6;
            param_2[3] = fVar7;
            *(undefined8 *)(param_2 + 4) = uVar3;
            param_2[6] = fVar29;
          }
        }
        else if (*(char *)(pfVar14 + 6) != '\0') {
          fVar29 = *pfVar14;
          if (*param_2 <= *pfVar14) {
            fVar29 = *param_2;
          }
          fVar2 = pfVar14[1];
          if (param_2[1] <= pfVar14[1]) {
            fVar2 = param_2[1];
          }
          *param_2 = fVar29;
          fVar29 = pfVar14[2];
          if (param_2[2] <= pfVar14[2]) {
            fVar29 = param_2[2];
          }
          param_2[1] = fVar2;
          fVar2 = pfVar14[3];
          if (pfVar14[3] <= param_2[3]) {
            fVar2 = param_2[3];
          }
          param_2[2] = fVar29;
          fVar29 = pfVar14[4];
          if (pfVar14[4] <= param_2[4]) {
            fVar29 = param_2[4];
          }
          param_2[3] = fVar2;
          fVar2 = pfVar14[5];
          if (pfVar14[5] <= param_2[5]) {
            fVar2 = param_2[5];
          }
          param_2[4] = fVar29;
          param_2[5] = fVar2;
        }
      }
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      uVar21 = uVar21 + 0xe0;
    } while ((int)uVar19 < (int)param_1[3]);
  }
  uVar20 = uVar17;
  uVar21 = uVar17;
  if (0 < (int)param_1[5]) {
    do {
      lVar4 = param_1[4];
      plVar5 = *(longlong **)(lVar4 + 0x50 + uVar21);
      plVar1 = plVar5 + *(int *)(lVar4 + 0x58 + uVar21);
      plVar16 = plVar5;
      if (plVar5 != plVar1) {
LAB_142303352:
        if (*plVar16 == 0) goto code_r0x00014230335b;
        plVar18 = (longlong *)*param_4;
        plVar16 = plVar18 + (int)param_4[1];
        for (; plVar18 != plVar16; plVar18 = plVar18 + 1) {
          if (plVar5 != plVar1) {
            plVar15 = plVar5;
            do {
              if (*plVar15 == *plVar18) goto LAB_142303364;
              plVar15 = plVar15 + 1;
            } while (plVar15 != plVar1);
          }
        }
        bVar8 = false;
        goto LAB_142303366;
      }
LAB_142303364:
      bVar8 = true;
LAB_142303366:
      if (bVar8) {
        pfVar14 = (float *)FUN_1423055b0((longlong)(int)uVar20 * 0xd0 + lVar4,local_b8,&local_98,
                                         fVar32);
        if (*(char *)(param_2 + 6) == '\0') {
          if (*(char *)(pfVar14 + 6) != '\0') {
            fVar2 = pfVar14[1];
            fVar6 = pfVar14[2];
            fVar7 = pfVar14[3];
            uVar3 = *(undefined8 *)(pfVar14 + 4);
            fVar29 = pfVar14[6];
            *param_2 = *pfVar14;
            param_2[1] = fVar2;
            param_2[2] = fVar6;
            param_2[3] = fVar7;
            *(undefined8 *)(param_2 + 4) = uVar3;
            param_2[6] = fVar29;
          }
        }
        else if (*(char *)(pfVar14 + 6) != '\0') {
          fVar29 = *pfVar14;
          if (*param_2 <= *pfVar14) {
            fVar29 = *param_2;
          }
          fVar2 = pfVar14[1];
          if (param_2[1] <= pfVar14[1]) {
            fVar2 = param_2[1];
          }
          *param_2 = fVar29;
          fVar29 = pfVar14[2];
          if (param_2[2] <= pfVar14[2]) {
            fVar29 = param_2[2];
          }
          param_2[1] = fVar2;
          fVar2 = pfVar14[3];
          if (pfVar14[3] <= param_2[3]) {
            fVar2 = param_2[3];
          }
          param_2[2] = fVar29;
          fVar29 = pfVar14[4];
          if (pfVar14[4] <= param_2[4]) {
            fVar29 = param_2[4];
          }
          param_2[3] = fVar2;
          fVar2 = pfVar14[5];
          if (pfVar14[5] <= param_2[5]) {
            fVar2 = param_2[5];
          }
          param_2[4] = fVar29;
          param_2[5] = fVar2;
        }
      }
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      uVar21 = uVar21 + 0xd0;
    } while ((int)uVar19 < (int)param_1[5]);
  }
  uVar20 = uVar17;
  uVar21 = uVar17;
  if (0 < (int)param_1[7]) {
    do {
      lVar4 = param_1[6];
      plVar5 = *(longlong **)(lVar4 + 0x50 + uVar21);
      plVar1 = plVar5 + *(int *)(lVar4 + 0x58 + uVar21);
      plVar16 = plVar5;
      if (plVar5 != plVar1) {
LAB_1423034a2:
        if (*plVar16 == 0) goto code_r0x0001423034ab;
        plVar18 = (longlong *)*param_4;
        plVar16 = plVar18 + (int)param_4[1];
        for (; plVar18 != plVar16; plVar18 = plVar18 + 1) {
          if (plVar5 != plVar1) {
            plVar15 = plVar5;
            do {
              if (*plVar15 == *plVar18) goto LAB_1423034b4;
              plVar15 = plVar15 + 1;
            } while (plVar15 != plVar1);
          }
        }
        bVar8 = false;
        goto LAB_1423034b6;
      }
LAB_1423034b4:
      bVar8 = true;
LAB_1423034b6:
      if (bVar8) {
        pfVar14 = (float *)FUN_1423045a0((longlong)(int)uVar20 * 0xd0 + lVar4,local_b8,&local_98,
                                         &local_c8);
        if (*(char *)(param_2 + 6) == '\0') {
          if (*(char *)(pfVar14 + 6) != '\0') {
            fVar2 = pfVar14[1];
            fVar6 = pfVar14[2];
            fVar7 = pfVar14[3];
            uVar3 = *(undefined8 *)(pfVar14 + 4);
            fVar29 = pfVar14[6];
            *param_2 = *pfVar14;
            param_2[1] = fVar2;
            param_2[2] = fVar6;
            param_2[3] = fVar7;
            *(undefined8 *)(param_2 + 4) = uVar3;
            param_2[6] = fVar29;
          }
        }
        else if (*(char *)(pfVar14 + 6) != '\0') {
          fVar29 = *param_2;
          if (*pfVar14 <= *param_2) {
            fVar29 = *pfVar14;
          }
          fVar2 = pfVar14[1];
          if (param_2[1] <= pfVar14[1]) {
            fVar2 = param_2[1];
          }
          *param_2 = fVar29;
          fVar29 = pfVar14[2];
          if (param_2[2] <= pfVar14[2]) {
            fVar29 = param_2[2];
          }
          param_2[1] = fVar2;
          fVar2 = pfVar14[3];
          if (pfVar14[3] <= param_2[3]) {
            fVar2 = param_2[3];
          }
          param_2[2] = fVar29;
          fVar29 = pfVar14[4];
          if (pfVar14[4] <= param_2[4]) {
            fVar29 = param_2[4];
          }
          param_2[3] = fVar2;
          fVar2 = pfVar14[5];
          if (pfVar14[5] <= param_2[5]) {
            fVar2 = param_2[5];
          }
          param_2[4] = fVar29;
          param_2[5] = fVar2;
        }
      }
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      uVar21 = uVar21 + 0xd0;
    } while ((int)uVar19 < (int)param_1[7]);
  }
  if (0 < (int)param_1[9]) {
    do {
      pfVar14 = (float *)FUN_142305cc0((longlong)(int)uVar17 * 0x88 + param_1[8],local_b8,&local_98,
                                       fVar32);
      if (*(char *)(param_2 + 6) == '\0') {
        if (*(char *)(pfVar14 + 6) != '\0') {
          fVar2 = pfVar14[1];
          fVar6 = pfVar14[2];
          fVar7 = pfVar14[3];
          uVar3 = *(undefined8 *)(pfVar14 + 4);
          fVar29 = pfVar14[6];
          *param_2 = *pfVar14;
          param_2[1] = fVar2;
          param_2[2] = fVar6;
          param_2[3] = fVar7;
          *(undefined8 *)(param_2 + 4) = uVar3;
          param_2[6] = fVar29;
        }
      }
      else if (*(char *)(pfVar14 + 6) != '\0') {
        fVar29 = *param_2;
        if (*pfVar14 <= *param_2) {
          fVar29 = *pfVar14;
        }
        fVar2 = pfVar14[1];
        if (param_2[1] <= pfVar14[1]) {
          fVar2 = param_2[1];
        }
        *param_2 = fVar29;
        fVar29 = pfVar14[2];
        if (param_2[2] <= pfVar14[2]) {
          fVar29 = param_2[2];
        }
        param_2[1] = fVar2;
        fVar2 = pfVar14[3];
        if (pfVar14[3] <= param_2[3]) {
          fVar2 = param_2[3];
        }
        param_2[2] = fVar29;
        fVar29 = pfVar14[4];
        if (pfVar14[4] <= param_2[4]) {
          fVar29 = param_2[4];
        }
        param_2[3] = fVar2;
        fVar2 = pfVar14[5];
        if (pfVar14[5] <= param_2[5]) {
          fVar2 = param_2[5];
        }
        param_2[4] = fVar29;
        param_2[5] = fVar2;
      }
      uVar19 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar19;
    } while ((int)uVar19 < (int)param_1[9]);
  }
  return param_2;
code_r0x0001423030b9:
  plVar16 = plVar16 + 1;
  if (plVar16 == plVar1) goto LAB_1423030c2;
  goto LAB_1423030b0;
code_r0x00014230320b:
  plVar16 = plVar16 + 1;
  if (plVar16 == plVar1) goto LAB_142303214;
  goto LAB_142303202;
code_r0x00014230335b:
  plVar16 = plVar16 + 1;
  if (plVar16 == plVar1) goto LAB_142303364;
  goto LAB_142303352;
code_r0x0001423034ab:
  plVar16 = plVar16 + 1;
  if (plVar16 == plVar1) goto LAB_1423034b4;
  goto LAB_1423034a2;
}



// FUNCTION 1423036c0 FUN_1423036c0 body=2124 status=ok
// SIG undefined FUN_1423036c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423036c0(longlong *param_1,undefined8 *param_2,float *param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
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
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  float local_100;
  undefined1 local_f8 [32];
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  
  if (param_4 != 0) {
    lVar3 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_142302f10(param_1,param_2,param_3,param_4 + 0x920);
      return param_2;
    }
  }
  local_c8 = *(undefined8 *)(param_3 + 4);
  uStack_c0 = *(undefined8 *)(param_3 + 6);
  cVar2 = '\0';
  local_b8._0_4_ = _DAT_146aefa50 & _DAT_146aefb20;
  local_b8._4_4_ = uRam0000000146aefa54 & uRam0000000146aefb24;
  local_b8._8_4_ = uRam0000000146aefa58 & uRam0000000146aefb28;
  local_b8._12_4_ = uRam0000000146aefa5c & uRam0000000146aefb2c;
  fVar21 = *param_3;
  fVar19 = param_3[1];
  fVar20 = param_3[2];
  fVar18 = param_3[3];
  local_100 = (float)((uint)local_100 & 0xffffff00);
  fVar8 = fVar21 * fVar21 + fVar20 * fVar20;
  fVar11 = fVar19 * fVar19 + fVar18 * fVar18;
  fVar13 = fVar20 * fVar20 + fVar21 * fVar21;
  fVar15 = fVar18 * fVar18 + fVar19 * fVar19;
  local_128 = param_3[8];
  local_124 = param_3[9];
  local_120 = param_3[10];
  fVar17 = fVar11 + fVar8;
  fVar11 = fVar13 + fVar11;
  fVar13 = fVar15 + fVar13;
  fVar8 = fVar8 + fVar15;
  auVar7._4_4_ = fVar11;
  auVar7._0_4_ = fVar17;
  auVar7._8_4_ = fVar13;
  auVar7._12_4_ = fVar8;
  auVar7 = rsqrtps(local_b8,auVar7);
  fVar9 = auVar7._0_4_;
  fVar12 = auVar7._4_4_;
  fVar14 = auVar7._8_4_;
  fVar16 = auVar7._12_4_;
  fStack_10c = DAT_1468b5d90;
  local_118 = DAT_1468b5d90;
  fStack_114 = DAT_1468b5d94;
  fVar9 = (_DAT_146aefb70 - fVar9 * fVar9 * fVar17 * _DAT_146aefb70) * fVar9 + fVar9;
  fVar12 = (fRam0000000146aefb74 - fVar12 * fVar12 * fVar11 * fRam0000000146aefb74) * fVar12 +
           fVar12;
  fVar14 = (fRam0000000146aefb78 - fVar14 * fVar14 * fVar13 * fRam0000000146aefb78) * fVar14 +
           fVar14;
  fVar16 = (fRam0000000146aefb7c - fVar16 * fVar16 * fVar8 * fRam0000000146aefb7c) * fVar16 + fVar16
  ;
  fVar15 = ABS(local_128);
  fVar10 = ABS(local_124);
  local_108 = CONCAT44(DAT_1468b5d98,DAT_1468b5d94);
  fStack_110 = DAT_1468b5d98;
  local_d8 = ((uint)(((_DAT_146aefb70 - fVar9 * fVar9 * fVar17 * _DAT_146aefb70) * fVar9 + fVar9) *
                    fVar21) ^ _DAT_146aefb60) & -(uint)(_DAT_146aefc90 <= fVar17) ^ _DAT_146aefb60;
  uStack_d4 = ((uint)(((fRam0000000146aefb74 - fVar12 * fVar12 * fVar11 * fRam0000000146aefb74) *
                       fVar12 + fVar12) * fVar19) ^ uRam0000000146aefb64) &
              -(uint)(fRam0000000146aefc94 <= fVar11) ^ uRam0000000146aefb64;
  uStack_d0 = ((uint)(((fRam0000000146aefb78 - fVar14 * fVar14 * fVar13 * fRam0000000146aefb78) *
                       fVar14 + fVar14) * fVar20) ^ uRam0000000146aefb68) &
              -(uint)(fRam0000000146aefc98 <= fVar13) ^ uRam0000000146aefb68;
  uStack_cc = ((uint)(((fRam0000000146aefb7c - fVar16 * fVar16 * fVar8 * fRam0000000146aefb7c) *
                       fVar16 + fVar16) * fVar18) ^ uRam0000000146aefb6c) &
              -(uint)(fRam0000000146aefc9c <= fVar8) ^ uRam0000000146aefb6c;
  fVar21 = local_128;
  if (fVar10 < fVar15) {
    fVar21 = local_124;
  }
  if (fVar10 <= fVar15) {
    fVar15 = fVar10;
  }
  if (ABS(local_120) < fVar15) {
    fVar21 = local_120;
  }
  iVar6 = 0;
  iVar5 = 0;
  fVar9 = DAT_1468b5d98;
  fVar18 = DAT_1468b5d90;
  fVar12 = DAT_1468b5d94;
  fVar15 = DAT_1468b5d90;
  fVar19 = DAT_1468b5d94;
  fVar20 = DAT_1468b5d98;
  if (0 < (int)param_1[1]) {
    do {
      pfVar4 = (float *)FUN_142305000((longlong)iVar5 * 0xb0 + *param_1,local_f8,&local_d8,fVar21);
      if (cVar2 == '\0') {
        if (*(char *)(pfVar4 + 6) != '\0') {
          local_108 = *(undefined8 *)(pfVar4 + 4);
          fVar15 = *pfVar4;
          fVar19 = pfVar4[1];
          fVar20 = pfVar4[2];
          fVar18 = pfVar4[3];
          local_100 = pfVar4[6];
          cVar2 = SUB41(local_100,0);
          fVar9 = (float)((ulonglong)local_108 >> 0x20);
          fVar12 = (float)local_108;
          local_118 = fVar15;
          fStack_114 = fVar19;
          fStack_110 = fVar20;
          fStack_10c = fVar18;
        }
      }
      else if (*(char *)(pfVar4 + 6) != '\0') {
        fVar14 = *pfVar4;
        if (fVar14 < fVar15) {
          fVar15 = fVar14;
          local_118 = fVar14;
        }
        fVar14 = pfVar4[1];
        if (fVar14 < fVar19) {
          fVar19 = fVar14;
          fStack_114 = fVar14;
        }
        fVar14 = pfVar4[2];
        if (fVar14 < fVar20) {
          fVar20 = fVar14;
          fStack_110 = fVar14;
        }
        fVar14 = pfVar4[3];
        if (fVar18 < fVar14) {
          fVar18 = fVar14;
          fStack_10c = fVar14;
        }
        fVar14 = pfVar4[4];
        if (fVar12 < fVar14) {
          local_108 = CONCAT44(local_108._4_4_,fVar14);
          fVar12 = fVar14;
        }
        fVar14 = pfVar4[5];
        if (fVar9 < fVar14) {
          local_108 = CONCAT44(fVar14,(float)local_108);
          fVar9 = fVar14;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[1]);
  }
  iVar5 = 0;
  if (0 < (int)param_1[3]) {
    do {
      pfVar4 = (float *)FUN_142303f10((longlong)iVar5 * 0xe0 + param_1[2],local_f8,&local_d8,fVar21)
      ;
      if (cVar2 == '\0') {
        if (*(char *)(pfVar4 + 6) != '\0') {
          local_108 = *(undefined8 *)(pfVar4 + 4);
          fVar15 = *pfVar4;
          fVar19 = pfVar4[1];
          fVar20 = pfVar4[2];
          fVar18 = pfVar4[3];
          local_100 = pfVar4[6];
          cVar2 = SUB41(local_100,0);
          fVar9 = (float)((ulonglong)local_108 >> 0x20);
          fVar12 = (float)local_108;
          local_118 = fVar15;
          fStack_114 = fVar19;
          fStack_110 = fVar20;
          fStack_10c = fVar18;
        }
      }
      else if (*(char *)(pfVar4 + 6) != '\0') {
        fVar14 = *pfVar4;
        if (fVar14 < fVar15) {
          fVar15 = fVar14;
          local_118 = fVar14;
        }
        fVar14 = pfVar4[1];
        if (fVar14 < fVar19) {
          fVar19 = fVar14;
          fStack_114 = fVar14;
        }
        fVar14 = pfVar4[2];
        if (fVar14 < fVar20) {
          fVar20 = fVar14;
          fStack_110 = fVar14;
        }
        fVar14 = pfVar4[3];
        if (fVar18 < fVar14) {
          fVar18 = fVar14;
          fStack_10c = fVar14;
        }
        fVar14 = pfVar4[4];
        if (fVar12 < fVar14) {
          local_108 = CONCAT44(local_108._4_4_,fVar14);
          fVar12 = fVar14;
        }
        fVar14 = pfVar4[5];
        if (fVar9 < fVar14) {
          local_108 = CONCAT44(fVar14,(float)local_108);
          fVar9 = fVar14;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[3]);
  }
  iVar5 = 0;
  if (0 < (int)param_1[5]) {
    do {
      pfVar4 = (float *)FUN_1423055b0((longlong)iVar5 * 0xd0 + param_1[4],local_f8,&local_d8,fVar21)
      ;
      if (cVar2 == '\0') {
        if (*(char *)(pfVar4 + 6) != '\0') {
          local_108 = *(undefined8 *)(pfVar4 + 4);
          fVar15 = *pfVar4;
          fVar19 = pfVar4[1];
          fVar20 = pfVar4[2];
          fVar18 = pfVar4[3];
          local_100 = pfVar4[6];
          cVar2 = SUB41(local_100,0);
          fVar9 = (float)((ulonglong)local_108 >> 0x20);
          fVar12 = (float)local_108;
          local_118 = fVar15;
          fStack_114 = fVar19;
          fStack_110 = fVar20;
          fStack_10c = fVar18;
        }
      }
      else if (*(char *)(pfVar4 + 6) != '\0') {
        fVar14 = *pfVar4;
        if (fVar14 < fVar15) {
          fVar15 = fVar14;
          local_118 = fVar14;
        }
        fVar14 = pfVar4[1];
        if (fVar14 < fVar19) {
          fVar19 = fVar14;
          fStack_114 = fVar14;
        }
        fVar14 = pfVar4[2];
        if (fVar14 < fVar20) {
          fVar20 = fVar14;
          fStack_110 = fVar14;
        }
        fVar14 = pfVar4[3];
        if (fVar18 < fVar14) {
          fVar18 = fVar14;
          fStack_10c = fVar14;
        }
        fVar14 = pfVar4[4];
        if (fVar12 < fVar14) {
          local_108 = CONCAT44(local_108._4_4_,fVar14);
          fVar12 = fVar14;
        }
        fVar14 = pfVar4[5];
        if (fVar9 < fVar14) {
          local_108 = CONCAT44(fVar14,(float)local_108);
          fVar9 = fVar14;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[5]);
  }
  iVar5 = 0;
  if (0 < (int)param_1[7]) {
    do {
      pfVar4 = (float *)FUN_1423045a0((longlong)iVar5 * 0xd0 + param_1[6],local_f8,&local_d8,
                                      &local_128);
      if (cVar2 == '\0') {
        if (*(char *)(pfVar4 + 6) != '\0') {
          local_108 = *(undefined8 *)(pfVar4 + 4);
          fVar15 = *pfVar4;
          fVar19 = pfVar4[1];
          fVar20 = pfVar4[2];
          fVar18 = pfVar4[3];
          local_100 = pfVar4[6];
          cVar2 = SUB41(local_100,0);
          fVar9 = (float)((ulonglong)local_108 >> 0x20);
          fVar12 = (float)local_108;
          local_118 = fVar15;
          fStack_114 = fVar19;
          fStack_110 = fVar20;
          fStack_10c = fVar18;
        }
      }
      else if (*(char *)(pfVar4 + 6) != '\0') {
        fVar14 = *pfVar4;
        if (fVar14 < fVar15) {
          fVar15 = fVar14;
          local_118 = fVar14;
        }
        fVar14 = pfVar4[1];
        if (fVar14 < fVar19) {
          fVar19 = fVar14;
          fStack_114 = fVar14;
        }
        fVar14 = pfVar4[2];
        if (fVar14 < fVar20) {
          fVar20 = fVar14;
          fStack_110 = fVar14;
        }
        fVar14 = pfVar4[3];
        if (fVar18 < fVar14) {
          fVar18 = fVar14;
          fStack_10c = fVar14;
        }
        fVar14 = pfVar4[4];
        if (fVar12 < fVar14) {
          local_108 = CONCAT44(local_108._4_4_,fVar14);
          fVar12 = fVar14;
        }
        fVar14 = pfVar4[5];
        if (fVar9 < fVar14) {
          local_108 = CONCAT44(fVar14,(float)local_108);
          fVar9 = fVar14;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[7]);
  }
  if (0 < (int)param_1[9]) {
    do {
      pfVar4 = (float *)FUN_142305cc0((longlong)iVar6 * 0x88 + param_1[8],local_f8,&local_d8,fVar21)
      ;
      if (cVar2 == '\0') {
        if (*(char *)(pfVar4 + 6) != '\0') {
          local_108 = *(undefined8 *)(pfVar4 + 4);
          fVar15 = *pfVar4;
          fVar19 = pfVar4[1];
          fVar20 = pfVar4[2];
          fVar18 = pfVar4[3];
          local_100 = pfVar4[6];
          cVar2 = SUB41(local_100,0);
          fVar9 = (float)((ulonglong)local_108 >> 0x20);
          fVar12 = (float)local_108;
          local_118 = fVar15;
          fStack_114 = fVar19;
          fStack_110 = fVar20;
          fStack_10c = fVar18;
        }
      }
      else if (*(char *)(pfVar4 + 6) != '\0') {
        fVar14 = *pfVar4;
        if (fVar14 < fVar15) {
          fVar15 = fVar14;
          local_118 = fVar14;
        }
        fVar14 = pfVar4[1];
        if (fVar14 < fVar19) {
          fVar19 = fVar14;
          fStack_114 = fVar14;
        }
        fVar14 = pfVar4[2];
        if (fVar14 < fVar20) {
          fVar20 = fVar14;
          fStack_110 = fVar14;
        }
        fVar14 = pfVar4[3];
        if (fVar18 < fVar14) {
          fVar18 = fVar14;
          fStack_10c = fVar14;
        }
        fVar14 = pfVar4[4];
        if (fVar12 < fVar14) {
          local_108 = CONCAT44(local_108._4_4_,fVar14);
          fVar12 = fVar14;
        }
        fVar14 = pfVar4[5];
        if (fVar9 < fVar14) {
          local_108 = CONCAT44(fVar14,(float)local_108);
          fVar9 = fVar14;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_1[9]);
  }
  *param_2 = CONCAT44(fStack_114,local_118);
  param_2[1] = CONCAT44(fStack_10c,fStack_110);
  param_2[2] = local_108;
  *(float *)(param_2 + 3) = local_100;
  return param_2;
}



// FUNCTION 142303f10 FUN_142303f10 body=1678 status=ok
// SIG undefined FUN_142303f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142303f10(longlong param_1,undefined8 param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  float local_178;
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
  ulonglong local_128;
  float local_120;
  undefined8 local_11c;
  float local_114;
  undefined1 local_110;
  float local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar6 = FRotator::Quaternion(param_1 + 0xbc,&local_138);
  fVar5 = fRam0000000146aefa58;
  fVar4 = fRam0000000146aefa54;
  fVar42 = _DAT_146aefa50;
  auVar9 = *(undefined1 (*) [16])(param_3 + 8);
  fVar11 = auVar9._0_4_;
  fVar21 = auVar9._4_4_;
  fVar14 = auVar9._8_4_;
  fVar24 = auVar9._12_4_;
  fVar13 = *param_3;
  fVar15 = param_3[1];
  fVar16 = param_3[2];
  fVar17 = param_3[3];
  auVar8._4_4_ = DAT_1464aa788._4_4_;
  auVar8._0_4_ = (float)DAT_1464aa788;
  auVar8._8_4_ = DAT_1464aa790;
  auVar8._12_4_ = 0;
  auVar9 = minps(auVar8,auVar9);
  auVar10._4_4_ = -(uint)(auVar9._4_4_ < fRam0000000146aefb84);
  auVar10._0_4_ = -(uint)(auVar9._0_4_ < _DAT_146aefb80);
  auVar10._8_4_ = -(uint)(auVar9._8_4_ < fRam0000000146aefb88);
  auVar10._12_4_ = -(uint)(auVar9._12_4_ < fRam0000000146aefb8c);
  iVar7 = movmskps(uVar6,auVar10);
  fVar39 = param_4 * *(float *)(param_1 + 0xb0);
  fVar40 = param_4 * *(float *)(param_1 + 0xb4);
  fVar41 = param_4 * *(float *)(param_1 + 0xb8);
  local_f8 = local_138;
  fStack_f4 = fStack_134;
  fStack_f0 = fStack_130;
  fStack_ec = fStack_12c;
  local_d8._4_4_ = DAT_1464aa788._4_4_;
  local_d8._0_4_ = (float)DAT_1464aa788;
  fStack_d0 = DAT_1464aa790;
  fStack_cc = 0.0;
  local_e8._4_4_ = fVar40;
  local_e8._0_4_ = fVar39;
  fStack_e0 = fVar41;
  fStack_dc = 0.0;
  if (iVar7 == 0) {
    fVar39 = fVar39 * fVar11;
    fVar40 = fVar40 * fVar21;
    fVar41 = fVar41 * fVar14;
    fVar42 = fVar24 * 0.0;
    local_d8._4_4_ = DAT_1464aa788._4_4_ * fVar21;
    local_d8._0_4_ = (float)DAT_1464aa788 * fVar11;
    fStack_d0 = DAT_1464aa790 * fVar14;
    fStack_cc = fVar24 * 0.0;
    local_f8 = fStack_12c * fVar13 * _DAT_146aefb50 + fVar17 * local_138 +
               fStack_130 * fVar15 * _DAT_146aefb40 + fStack_134 * fVar16 * _DAT_146aefb30;
    fStack_f4 = fStack_130 * fVar13 * fRam0000000146aefb54 + fVar17 * fStack_134 +
                fStack_12c * fVar15 * fRam0000000146aefb44 +
                local_138 * fVar16 * fRam0000000146aefb34;
    fStack_f0 = fStack_134 * fVar13 * fRam0000000146aefb58 + fVar17 * fStack_130 +
                local_138 * fVar15 * fRam0000000146aefb48 +
                fStack_12c * fVar16 * fRam0000000146aefb38;
    fStack_ec = local_138 * fVar13 * fRam0000000146aefb5c + fVar17 * fStack_12c +
                fStack_134 * fVar15 * fRam0000000146aefb4c +
                fStack_130 * fVar16 * fRam0000000146aefb3c;
    fVar11 = fVar41 * fVar15 - fVar40 * fVar16;
    fVar21 = fVar39 * fVar16 - fVar41 * fVar13;
    fVar14 = fVar40 * fVar13 - fVar39 * fVar15;
    fVar24 = fVar42 * fVar17 - fVar42 * fVar17;
    fVar11 = fVar11 + fVar11;
    fVar21 = fVar21 + fVar21;
    fVar14 = fVar14 + fVar14;
    fVar24 = fVar24 + fVar24;
    local_e8._4_4_ = (fVar11 * fVar16 - fVar14 * fVar13) + fVar17 * fVar21 + fVar40 + param_3[5];
    local_e8._0_4_ = (fVar14 * fVar15 - fVar21 * fVar16) + fVar17 * fVar11 + fVar39 + param_3[4];
    fStack_e0 = (fVar21 * fVar13 - fVar11 * fVar15) + fVar17 * fVar14 + fVar41 + param_3[6];
    fStack_dc = (fVar24 * fVar17 - fVar24 * fVar17) + fVar17 * fVar24 + fVar42 + param_3[7];
  }
  else {
    fVar18 = fVar15 + fVar15;
    fVar22 = fVar16 + fVar16;
    fVar1 = param_3[4];
    fVar2 = param_3[5];
    fVar3 = param_3[6];
    fVar25 = (fVar13 + fVar13) * fVar13;
    fVar19 = (fVar13 + fVar13) * fVar17;
    fVar36 = fVar11 * (float)DAT_1464aa788;
    fVar37 = fVar21 * DAT_1464aa788._4_4_;
    fVar38 = fVar14 * DAT_1464aa790;
    fVar20 = fStack_134 + fStack_134;
    fVar23 = fStack_130 + fStack_130;
    fVar33 = (fVar22 * fVar17 + fVar18 * fVar13) * fVar11;
    fVar34 = (fVar19 + fVar22 * fVar15) * fVar21;
    fVar35 = (fVar18 * fVar17 + fVar22 * fVar13) * fVar14;
    fVar26 = fVar21 * (fVar18 * fVar13 - fVar22 * fVar17);
    fVar27 = fVar14 * (fVar22 * fVar15 - fVar19);
    fVar28 = fVar11 * (fVar22 * fVar13 - fVar18 * fVar17);
    fVar19 = local_138 * (local_138 + local_138);
    fVar11 = (float)((uint)((_DAT_146aefa50 - (fVar22 * fVar16 + fVar18 * fVar15)) * fVar11) &
                    _DAT_146aefb20);
    fVar13 = (float)((uint)((fRam0000000146aefa54 - (fVar22 * fVar16 + fVar25)) * fVar21) &
                    uRam0000000146aefb24);
    fVar15 = (float)((uint)((fRam0000000146aefa58 - (fVar18 * fVar15 + fVar25)) * fVar14) &
                    uRam0000000146aefb28);
    fVar17 = (float)((uint)((fRam0000000146aefa5c - (fVar25 + fVar25)) * fVar24) &
                    uRam0000000146aefb2c);
    fVar21 = (local_138 + local_138) * fStack_12c;
    fVar30 = (fVar23 * fStack_12c + fVar20 * local_138) * (float)DAT_1464aa788;
    fVar31 = (fVar21 + fVar23 * fStack_134) * DAT_1464aa788._4_4_;
    fVar32 = (fVar20 * fStack_12c + fVar23 * local_138) * DAT_1464aa790;
    fVar22 = DAT_1464aa788._4_4_ * (fVar20 * local_138 - fVar23 * fStack_12c);
    fVar25 = DAT_1464aa790 * (fVar23 * fStack_134 - fVar21);
    fVar29 = (float)DAT_1464aa788 * (fVar23 * local_138 - fVar20 * fStack_12c);
    fVar21 = (float)((uint)((_DAT_146aefa50 - (fStack_130 * fVar23 + fStack_134 * fVar20)) *
                           (float)DAT_1464aa788) & _DAT_146aefb20);
    fVar14 = (float)((uint)((fRam0000000146aefa54 - (fStack_130 * fVar23 + fVar19)) *
                           DAT_1464aa788._4_4_) & uRam0000000146aefb24);
    fVar16 = (float)((uint)((fRam0000000146aefa58 - (fStack_134 * fVar20 + fVar19)) * DAT_1464aa790)
                    & uRam0000000146aefb28);
    fVar18 = (float)((uint)((fRam0000000146aefa5c - (fVar19 + fVar19)) * 0.0) & uRam0000000146aefb2c
                    );
    local_178 = fVar30 * fVar26 + fVar21 * fVar11 + fVar29 * fVar35 + fVar18 * fVar1;
    fStack_174 = fVar30 * fVar13 + fVar21 * fVar33 + fVar29 * fVar27 + fVar18 * fVar2;
    fStack_170 = fVar30 * fVar34 + fVar21 * fVar28 + fVar29 * fVar15 + fVar18 * fVar3;
    fStack_16c = fVar30 * fVar17 + fVar21 * fVar17 + fVar29 * fVar17 + fVar18 * fRam0000000146aefa5c
    ;
    local_168 = fVar14 * fVar26 + fVar22 * fVar11 + fVar31 * fVar35 + fVar18 * fVar1;
    fStack_164 = fVar14 * fVar13 + fVar22 * fVar33 + fVar31 * fVar27 + fVar18 * fVar2;
    fStack_160 = fVar14 * fVar34 + fVar22 * fVar28 + fVar31 * fVar15 + fVar18 * fVar3;
    fStack_15c = fVar14 * fVar17 + fVar22 * fVar17 + fVar31 * fVar17 + fVar18 * fRam0000000146aefa5c
    ;
    local_158 = fVar25 * fVar26 + fVar32 * fVar11 + fVar16 * fVar35 + fVar18 * fVar1;
    fStack_154 = fVar25 * fVar13 + fVar32 * fVar33 + fVar16 * fVar27 + fVar18 * fVar2;
    fStack_150 = fVar25 * fVar34 + fVar32 * fVar28 + fVar16 * fVar15 + fVar18 * fVar3;
    fStack_14c = fVar25 * fVar17 + fVar32 * fVar17 + fVar16 * fVar17 + fVar18 * fRam0000000146aefa5c
    ;
    local_148 = fVar40 * fVar26 + fVar39 * fVar11 + fVar41 * fVar35 + fRam0000000146aefa5c * fVar1;
    fStack_144 = fVar40 * fVar13 + fVar39 * fVar33 + fVar41 * fVar27 + fRam0000000146aefa5c * fVar2;
    fStack_140 = fVar40 * fVar34 + fVar39 * fVar28 + fVar41 * fVar15 + fRam0000000146aefa5c * fVar3;
    fStack_13c = fVar40 * fVar17 + fVar39 * fVar17 + fVar41 * fVar17 +
                 fRam0000000146aefa5c * fRam0000000146aefa5c;
    FMatrix::RemoveScaling(&local_178);
    fVar11 = (float)(-(uint)(_DAT_146aefb80 <= fVar36) & (_DAT_146aefa40 ^ (uint)fVar42) ^
                    _DAT_146aefa40);
    fVar21 = (float)(-(uint)(fRam0000000146aefb84 <= fVar37) & (uRam0000000146aefa44 ^ (uint)fVar4)
                    ^ uRam0000000146aefa44);
    fVar14 = (float)(-(uint)(fRam0000000146aefb88 <= fVar38) & (uRam0000000146aefa48 ^ (uint)fVar5)
                    ^ uRam0000000146aefa48);
    local_178 = local_178 * fVar11;
    fStack_174 = fStack_174 * fVar11;
    fStack_170 = fStack_170 * fVar11;
    fStack_164 = fStack_164 * fVar21;
    fStack_160 = fStack_160 * fVar21;
    local_168 = local_168 * fVar21;
    fStack_154 = fStack_154 * fVar14;
    fStack_150 = fStack_150 * fVar14;
    local_158 = local_158 * fVar14;
    FQuat::FQuat(&local_138,&local_178);
    local_188 = 0x322bcc77;
    local_d8._4_4_ = fVar37;
    local_d8._0_4_ = fVar36;
    fStack_d0 = fVar38;
    fStack_cc = fVar24 * 0.0;
    auVar12._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
    auVar12._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
    auVar12._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
    auVar12._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
    fVar13 = auVar12._4_4_ + auVar12._0_4_;
    fVar15 = auVar12._8_4_ + auVar12._4_4_;
    fVar16 = auVar12._12_4_ + auVar12._8_4_;
    fVar17 = auVar12._0_4_ + auVar12._12_4_;
    auVar9._4_4_ = fVar15;
    auVar9._0_4_ = fVar13;
    auVar9._8_4_ = fVar16;
    auVar9._12_4_ = fVar17;
    auVar9 = rsqrtps(auVar12,auVar9);
    fVar11 = auVar9._0_4_;
    fVar21 = auVar9._4_4_;
    fVar14 = auVar9._8_4_;
    fVar24 = auVar9._12_4_;
    fVar11 = (_DAT_146aefb70 - fVar11 * fVar11 * fVar13 * _DAT_146aefb70) * fVar11 + fVar11;
    fVar21 = (fRam0000000146aefb74 - fVar21 * fVar21 * fVar15 * fRam0000000146aefb74) * fVar21 +
             fVar21;
    fVar14 = (fRam0000000146aefb78 - fVar14 * fVar14 * fVar16 * fRam0000000146aefb78) * fVar14 +
             fVar14;
    fVar24 = (fRam0000000146aefb7c - fVar24 * fVar24 * fVar17 * fRam0000000146aefb7c) * fVar24 +
             fVar24;
    local_e8._4_4_ = fStack_144;
    local_e8._0_4_ = local_148;
    fStack_e0 = fStack_140;
    local_f8 = (float)(((uint)(((_DAT_146aefb70 - fVar11 * fVar11 * fVar13 * _DAT_146aefb70) *
                                fVar11 + fVar11) * local_138) ^ _DAT_146aefb60) &
                       -(uint)(1e-08 <= fVar13) ^ _DAT_146aefb60);
    fStack_f4 = (float)(((uint)(((fRam0000000146aefb74 -
                                 fVar21 * fVar21 * fVar15 * fRam0000000146aefb74) * fVar21 + fVar21)
                               * fStack_134) ^ uRam0000000146aefb64) & -(uint)(1e-08 <= fVar15) ^
                       uRam0000000146aefb64);
    fStack_f0 = (float)(((uint)(((fRam0000000146aefb78 -
                                 fVar14 * fVar14 * fVar16 * fRam0000000146aefb78) * fVar14 + fVar14)
                               * fStack_130) ^ uRam0000000146aefb68) & -(uint)(1e-08 <= fVar16) ^
                       uRam0000000146aefb68);
    fStack_ec = (float)(((uint)(((fRam0000000146aefb7c -
                                 fVar24 * fVar24 * fVar17 * fRam0000000146aefb7c) * fVar24 + fVar24)
                               * fStack_12c) ^ uRam0000000146aefb6c) & -(uint)(1e-08 <= fVar17) ^
                       uRam0000000146aefb6c);
    fStack_dc = 0.0;
  }
  param_4 = param_4 * 0.5;
  local_110 = 1;
  fVar21 = param_4 * *(float *)(param_1 + 200);
  fVar11 = param_4 * *(float *)(param_1 + 0xcc);
  fStack_130 = param_4 * *(float *)(param_1 + 0xd0);
  local_120 = -fStack_130;
  local_128 = CONCAT44(fVar11,fVar21) ^ 0x8000000080000000;
  local_11c = CONCAT44(fVar11,fVar21);
  local_114 = fStack_130;
  local_100 = local_120;
  FBox::TransformBy(&local_128,param_2,&local_f8);
  return param_2;
}



// FUNCTION 1423045a0 FUN_1423045a0 body=2653 status=ok
// SIG undefined FUN_1423045a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1423045a0(longlong param_1,undefined8 param_2,float *param_3,undefined1 (*param_4) [12])

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  int iVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  float fVar50;
  float fVar51;
  undefined1 auStack_188 [32];
  undefined4 local_168;
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
  undefined1 local_f8 [8];
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  fVar29 = fRam0000000146aefa58;
  fVar26 = fRam0000000146aefa54;
  fVar21 = _DAT_146aefa50;
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  fVar48 = *(float *)*param_4;
  auVar9 = *(undefined1 (*) [16])(param_3 + 8);
  fVar1 = auVar9._0_4_;
  fVar2 = auVar9._4_4_;
  fVar3 = auVar9._8_4_;
  fVar51 = auVar9._12_4_;
  fVar13 = *param_3;
  fVar19 = param_3[1];
  fVar17 = param_3[2];
  fVar20 = param_3[3];
  fVar50 = *(float *)(*param_4 + 8);
  fVar49 = *(float *)(*param_4 + 4);
  auVar11._12_4_ = 0;
  auVar11._0_12_ = *param_4;
  auVar9 = minps(auVar11,auVar9);
  auVar10._4_4_ = -(uint)(auVar9._4_4_ < fRam0000000146aefb84);
  auVar10._0_4_ = -(uint)(auVar9._0_4_ < _DAT_146aefb80);
  auVar10._8_4_ = -(uint)(auVar9._8_4_ < fRam0000000146aefb88);
  auVar10._12_4_ = -(uint)(auVar9._12_4_ < fRam0000000146aefb8c);
  iVar7 = movmskps((int)local_c8,auVar10);
  if (iVar7 == 0) {
    fVar21 = DAT_1468b5d90 * fVar1;
    fVar34 = DAT_1468b5d94 * fVar2;
    fVar23 = DAT_1468b5d98 * fVar3;
    fVar24 = fVar51 * 0.0;
    fVar36 = DAT_1464aa81c * fVar13 * _DAT_146aefb50 + fVar20 * DAT_1464aa810 +
             DAT_1464aa818 * fVar19 * _DAT_146aefb40 + DAT_1464aa814 * fVar17 * _DAT_146aefb30;
    fVar16 = DAT_1464aa818 * fVar13 * fRam0000000146aefb54 + fVar20 * DAT_1464aa814 +
             DAT_1464aa81c * fVar19 * fRam0000000146aefb44 +
             DAT_1464aa810 * fVar17 * fRam0000000146aefb34;
    fVar18 = DAT_1464aa814 * fVar13 * fRam0000000146aefb58 + fVar20 * DAT_1464aa818 +
             DAT_1464aa810 * fVar19 * fRam0000000146aefb48 +
             DAT_1464aa81c * fVar17 * fRam0000000146aefb38;
    fVar22 = DAT_1464aa810 * fVar13 * fRam0000000146aefb5c + fVar20 * DAT_1464aa81c +
             DAT_1464aa814 * fVar19 * fRam0000000146aefb4c +
             DAT_1464aa818 * fVar17 * fRam0000000146aefb3c;
    fVar26 = fVar23 * fVar19 - fVar34 * fVar17;
    fVar29 = fVar21 * fVar17 - fVar23 * fVar13;
    fVar32 = fVar34 * fVar13 - fVar21 * fVar19;
    fVar33 = fVar24 * fVar20 - fVar24 * fVar20;
    fVar26 = fVar26 + fVar26;
    fVar29 = fVar29 + fVar29;
    fVar32 = fVar32 + fVar32;
    fVar33 = fVar33 + fVar33;
    fVar21 = (fVar32 * fVar19 - fVar29 * fVar17) + fVar26 * fVar20 + fVar21 + param_3[4];
    fVar17 = (fVar26 * fVar17 - fVar32 * fVar13) + fVar29 * fVar20 + fVar34 + param_3[5];
    fVar13 = (fVar29 * fVar13 - fVar26 * fVar19) + fVar32 * fVar20 + fVar23 + param_3[6];
    fVar19 = (fVar33 * fVar20 - fVar33 * fVar20) + fVar33 * fVar20 + fVar24 + param_3[7];
    uVar8 = 0;
  }
  else {
    fVar32 = param_3[4];
    fVar33 = param_3[5];
    fVar36 = param_3[6];
    fVar16 = fVar19 + fVar19;
    fVar18 = fVar17 + fVar17;
    fVar22 = fVar13 * (fVar13 + fVar13);
    fVar34 = fVar20 * (fVar13 + fVar13);
    fVar45 = (fVar20 * fVar18 + fVar13 * fVar16) * fVar1;
    fVar46 = (fVar34 + fVar19 * fVar18) * fVar2;
    fVar47 = (fVar20 * fVar16 + fVar13 * fVar18) * fVar3;
    fVar24 = fVar2 * (fVar13 * fVar16 - fVar20 * fVar18);
    fVar27 = fVar3 * (fVar19 * fVar18 - fVar34);
    fVar30 = fVar1 * (fVar13 * fVar18 - fVar20 * fVar16);
    fVar34 = DAT_1464aa814 + DAT_1464aa814;
    fVar20 = DAT_1464aa818 + DAT_1464aa818;
    fVar13 = (float)((uint)((_DAT_146aefa50 - (fVar17 * fVar18 + fVar19 * fVar16)) * fVar1) &
                    _DAT_146aefb20);
    fVar17 = (float)((uint)((fRam0000000146aefa54 - (fVar17 * fVar18 + fVar22)) * fVar2) &
                    uRam0000000146aefb24);
    fVar16 = (float)((uint)((fRam0000000146aefa58 - (fVar19 * fVar16 + fVar22)) * fVar3) &
                    uRam0000000146aefb28);
    fVar22 = (float)((uint)((fRam0000000146aefa5c - (fVar22 + fVar22)) * fVar51) &
                    uRam0000000146aefb2c);
    fVar23 = DAT_1464aa810 * (DAT_1464aa810 + DAT_1464aa810);
    fVar19 = (DAT_1464aa810 + DAT_1464aa810) * DAT_1464aa81c;
    fVar35 = (fVar20 * DAT_1464aa81c + fVar34 * DAT_1464aa810) * fVar48;
    fVar38 = (fVar19 + fVar20 * DAT_1464aa814) * fVar49;
    fVar40 = (fVar34 * DAT_1464aa81c + fVar20 * DAT_1464aa810) * fVar50;
    fVar25 = fVar49 * (fVar34 * DAT_1464aa810 - fVar20 * DAT_1464aa81c);
    fVar28 = fVar50 * (fVar20 * DAT_1464aa814 - fVar19);
    fVar31 = fVar48 * (fVar20 * DAT_1464aa810 - fVar34 * DAT_1464aa81c);
    fVar19 = (float)((uint)((_DAT_146aefa50 - (DAT_1464aa818 * fVar20 + DAT_1464aa814 * fVar34)) *
                           fVar48) & _DAT_146aefb20);
    fVar20 = (float)((uint)((fRam0000000146aefa54 - (DAT_1464aa818 * fVar20 + fVar23)) * fVar49) &
                    uRam0000000146aefb24);
    fVar18 = (float)((uint)((fRam0000000146aefa58 - (DAT_1464aa814 * fVar34 + fVar23)) * fVar50) &
                    uRam0000000146aefb28);
    fVar34 = (float)((uint)((fRam0000000146aefa5c - (fVar23 + fVar23)) * 0.0) & uRam0000000146aefb2c
                    );
    local_108 = fVar35 * fVar24 + fVar19 * fVar13 + fVar31 * fVar47 + fVar34 * fVar32;
    fStack_104 = fVar35 * fVar17 + fVar19 * fVar45 + fVar31 * fVar27 + fVar34 * fVar33;
    fStack_100 = fVar35 * fVar46 + fVar19 * fVar30 + fVar31 * fVar16 + fVar34 * fVar36;
    fStack_fc = fVar35 * fVar22 + fVar19 * fVar22 + fVar31 * fVar22 + fVar34 * fRam0000000146aefa5c;
    local_f8._4_4_ = fVar20 * fVar17 + fVar25 * fVar45 + fVar38 * fVar27 + fVar34 * fVar33;
    local_f8._0_4_ = fVar20 * fVar24 + fVar25 * fVar13 + fVar38 * fVar47 + fVar34 * fVar32;
    uStack_f0._0_4_ = fVar20 * fVar46 + fVar25 * fVar30 + fVar38 * fVar16 + fVar34 * fVar36;
    uStack_f0._4_4_ =
         fVar20 * fVar22 + fVar25 * fVar22 + fVar38 * fVar22 + fVar34 * fRam0000000146aefa5c;
    local_e8 = fVar28 * fVar24 + fVar40 * fVar13 + fVar18 * fVar47 + fVar34 * fVar32;
    fStack_e4 = fVar28 * fVar17 + fVar40 * fVar45 + fVar18 * fVar27 + fVar34 * fVar33;
    fStack_e0 = fVar28 * fVar46 + fVar40 * fVar30 + fVar18 * fVar16 + fVar34 * fVar36;
    fStack_dc = fVar28 * fVar22 + fVar40 * fVar22 + fVar18 * fVar22 + fVar34 * fRam0000000146aefa5c;
    local_d8 = DAT_1468b5d94 * fVar24 + DAT_1468b5d90 * fVar13 + DAT_1468b5d98 * fVar47 +
               fRam0000000146aefa5c * fVar32;
    fStack_d4 = DAT_1468b5d94 * fVar17 + DAT_1468b5d90 * fVar45 + DAT_1468b5d98 * fVar27 +
                fRam0000000146aefa5c * fVar33;
    fStack_d0 = DAT_1468b5d94 * fVar46 + DAT_1468b5d90 * fVar30 + DAT_1468b5d98 * fVar16 +
                fRam0000000146aefa5c * fVar36;
    fStack_cc = DAT_1468b5d94 * fVar22 + DAT_1468b5d90 * fVar22 + DAT_1468b5d98 * fVar22 +
                fRam0000000146aefa5c * fRam0000000146aefa5c;
    FMatrix::RemoveScaling(&local_108);
    auVar9 = _local_f8;
    fVar13 = (float)(-(uint)(_DAT_146aefb80 <= fVar48 * fVar1) & (_DAT_146aefa40 ^ (uint)fVar21) ^
                    _DAT_146aefa40);
    fVar17 = (float)(-(uint)(fRam0000000146aefb84 <= fVar49 * fVar2) &
                     (uRam0000000146aefa44 ^ (uint)fVar26) ^ uRam0000000146aefa44);
    fVar20 = (float)(-(uint)(fRam0000000146aefb88 <= fVar50 * fVar3) &
                     (uRam0000000146aefa48 ^ (uint)fVar29) ^ uRam0000000146aefa48);
    local_108 = local_108 * fVar13;
    fStack_104 = fStack_104 * fVar13;
    fStack_100 = fStack_100 * fVar13;
    fVar13 = (float)uStack_f0 * fVar17;
    fVar19 = (float)local_f8._0_4_ * fVar17;
    auVar6._4_8_ = uStack_f0;
    auVar6._0_4_ = (float)local_f8._4_4_ * fVar17;
    local_f8 = (undefined1  [8])(auVar6._0_8_ << 0x20);
    uStack_f0._4_4_ = auVar9._12_4_;
    uStack_f0._0_4_ = fVar13;
    fStack_e4 = fStack_e4 * fVar20;
    fStack_e0 = fStack_e0 * fVar20;
    local_e8 = local_e8 * fVar20;
    local_f8._0_4_ = fVar19;
    uVar8 = FQuat::FQuat(&local_118,&local_108);
    local_168 = 0x322bcc77;
    auVar14._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
    auVar14._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
    auVar14._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
    auVar14._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
    fVar26 = auVar14._4_4_ + auVar14._0_4_;
    fVar29 = auVar14._8_4_ + auVar14._4_4_;
    fVar32 = auVar14._12_4_ + auVar14._8_4_;
    fVar33 = auVar14._0_4_ + auVar14._12_4_;
    auVar9._4_4_ = fVar29;
    auVar9._0_4_ = fVar26;
    auVar9._8_4_ = fVar32;
    auVar9._12_4_ = fVar33;
    auVar9 = rsqrtps(auVar14,auVar9);
    fVar13 = auVar9._0_4_;
    fVar17 = auVar9._4_4_;
    fVar20 = auVar9._8_4_;
    fVar21 = auVar9._12_4_;
    fVar13 = (_DAT_146aefb70 - fVar13 * fVar13 * fVar26 * _DAT_146aefb70) * fVar13 + fVar13;
    fVar17 = (fRam0000000146aefb74 - fVar17 * fVar17 * fVar29 * fRam0000000146aefb74) * fVar17 +
             fVar17;
    fVar20 = (fRam0000000146aefb78 - fVar20 * fVar20 * fVar32 * fRam0000000146aefb78) * fVar20 +
             fVar20;
    fVar21 = (fRam0000000146aefb7c - fVar21 * fVar21 * fVar33 * fRam0000000146aefb7c) * fVar21 +
             fVar21;
    fVar19 = 0.0;
    fVar36 = (float)(((uint)(((_DAT_146aefb70 - fVar13 * fVar13 * fVar26 * _DAT_146aefb70) * fVar13
                             + fVar13) * local_118) ^ _DAT_146aefb60) & -(uint)(1e-08 <= fVar26) ^
                    _DAT_146aefb60);
    fVar16 = (float)(((uint)(((fRam0000000146aefb74 -
                              fVar17 * fVar17 * fVar29 * fRam0000000146aefb74) * fVar17 + fVar17) *
                            fStack_114) ^ uRam0000000146aefb64) & -(uint)(1e-08 <= fVar29) ^
                    uRam0000000146aefb64);
    fVar18 = (float)(((uint)(((fRam0000000146aefb78 -
                              fVar20 * fVar20 * fVar32 * fRam0000000146aefb78) * fVar20 + fVar20) *
                            fStack_110) ^ uRam0000000146aefb68) & -(uint)(1e-08 <= fVar32) ^
                    uRam0000000146aefb68);
    fVar22 = (float)(((uint)(((fRam0000000146aefb7c -
                              fVar21 * fVar21 * fVar33 * fRam0000000146aefb7c) * fVar21 + fVar21) *
                            fStack_10c) ^ uRam0000000146aefb6c) & -(uint)(1e-08 <= fVar33) ^
                    uRam0000000146aefb6c);
    fVar21 = local_d8;
    fVar17 = fStack_d4;
    fVar13 = fStack_d0;
  }
  fVar34 = fRam0000000146aefb88;
  fVar33 = fRam0000000146aefb84;
  fVar32 = _DAT_146aefb80;
  fVar29 = fRam0000000146aefa58;
  fVar26 = fRam0000000146aefa54;
  fVar20 = _DAT_146aefa50;
  fVar51 = fVar51 * 0.0;
  fVar50 = fVar50 * fVar3;
  fVar49 = fVar49 * fVar2;
  fVar48 = fVar48 * fVar1;
  auVar9 = *(undefined1 (*) [16])(param_1 + 0xb0);
  fVar1 = auVar9._0_4_;
  fVar2 = auVar9._4_4_;
  fVar3 = auVar9._8_4_;
  auVar5._4_4_ = fVar49;
  auVar5._0_4_ = fVar48;
  auVar5._8_4_ = fVar50;
  auVar5._12_4_ = fVar51;
  auVar11 = minps(auVar9,auVar5);
  auVar12._4_4_ = -(uint)(auVar11._4_4_ < fRam0000000146aefb84);
  auVar12._0_4_ = -(uint)(auVar11._0_4_ < _DAT_146aefb80);
  auVar12._8_4_ = -(uint)(auVar11._8_4_ < fRam0000000146aefb88);
  auVar12._12_4_ = -(uint)(auVar11._12_4_ < fRam0000000146aefb8c);
  iVar7 = movmskps(uVar8,auVar12);
  if (iVar7 == 0) {
    fVar20 = *(float *)(param_1 + 0x90);
    fVar26 = *(float *)(param_1 + 0x94);
    fVar29 = *(float *)(param_1 + 0x98);
    fVar32 = *(float *)(param_1 + 0x9c);
    fVar33 = *(float *)(param_1 + 0xa0) * fVar48;
    fVar34 = *(float *)(param_1 + 0xa4) * fVar49;
    fVar23 = *(float *)(param_1 + 0xa8) * fVar50;
    fVar24 = *(float *)(param_1 + 0xac) * fVar51;
    local_108 = fVar36 * fVar32 * _DAT_146aefb50 + fVar20 * fVar22 +
                fVar16 * fVar29 * _DAT_146aefb40 + fVar18 * fVar26 * _DAT_146aefb30;
    fStack_104 = fVar36 * fVar29 * fRam0000000146aefb54 + fVar26 * fVar22 +
                 fVar16 * fVar32 * fRam0000000146aefb44 + fVar18 * fVar20 * fRam0000000146aefb34;
    fStack_100 = fVar36 * fVar26 * fRam0000000146aefb58 + fVar29 * fVar22 +
                 fVar16 * fVar20 * fRam0000000146aefb48 + fVar18 * fVar32 * fRam0000000146aefb38;
    fStack_fc = fVar36 * fVar20 * fRam0000000146aefb5c + fVar32 * fVar22 +
                fVar16 * fVar26 * fRam0000000146aefb4c + fVar18 * fVar29 * fRam0000000146aefb3c;
    fVar20 = fVar23 * fVar16 - fVar34 * fVar18;
    fVar26 = fVar33 * fVar18 - fVar23 * fVar36;
    fVar29 = fVar34 * fVar36 - fVar33 * fVar16;
    fVar32 = fVar24 * fVar22 - fVar24 * fVar22;
    fVar20 = fVar20 + fVar20;
    fVar26 = fVar26 + fVar26;
    fVar29 = fVar29 + fVar29;
    fVar32 = fVar32 + fVar32;
    local_f8._4_4_ = (fVar20 * fVar18 - fVar29 * fVar36) + fVar22 * fVar26 + fVar34 + fVar17;
    local_f8._0_4_ = (fVar29 * fVar16 - fVar26 * fVar18) + fVar22 * fVar20 + fVar33 + fVar21;
    uStack_f0._0_4_ = (fVar26 * fVar36 - fVar20 * fVar16) + fVar22 * fVar29 + fVar23 + fVar13;
    uStack_f0._4_4_ = (fVar32 * fVar22 - fVar32 * fVar22) + fVar22 * fVar32 + fVar24 + fVar19;
  }
  else {
    fVar19 = fVar16 + fVar16;
    fVar24 = fVar18 + fVar18;
    fVar27 = (fVar36 + fVar36) * fVar36;
    fVar23 = (fVar36 + fVar36) * fVar22;
    fVar42 = (fVar24 * fVar22 + fVar19 * fVar36) * fVar48;
    fVar43 = (fVar23 + fVar24 * fVar16) * fVar49;
    fVar44 = (fVar19 * fVar22 + fVar24 * fVar36) * fVar50;
    fVar31 = fVar49 * (fVar19 * fVar36 - fVar24 * fVar22);
    fVar38 = fVar50 * (fVar24 * fVar16 - fVar23);
    fVar40 = fVar48 * (fVar24 * fVar36 - fVar19 * fVar22);
    fVar22 = (float)((uint)((_DAT_146aefa50 - (fVar24 * fVar18 + fVar19 * fVar16)) * fVar48) &
                    _DAT_146aefb20);
    fVar23 = (float)((uint)((fRam0000000146aefa54 - (fVar24 * fVar18 + fVar27)) * fVar49) &
                    uRam0000000146aefb24);
    fVar25 = (float)((uint)((fRam0000000146aefa58 - (fVar19 * fVar16 + fVar27)) * fVar50) &
                    uRam0000000146aefb28);
    fVar28 = (float)((uint)((fRam0000000146aefa5c - (fVar27 + fVar27)) * fVar51) &
                    uRam0000000146aefb2c);
    fVar19 = *(float *)(param_1 + 0x90);
    fVar36 = *(float *)(param_1 + 0x94);
    fVar16 = *(float *)(param_1 + 0x98);
    fVar18 = *(float *)(param_1 + 0x9c);
    fVar27 = fVar36 + fVar36;
    fVar30 = fVar16 + fVar16;
    fVar35 = (fVar19 + fVar19) * fVar19;
    fVar24 = (fVar19 + fVar19) * fVar18;
    fVar37 = (fVar30 * fVar18 + fVar27 * fVar19) * fVar1;
    fVar39 = (fVar24 + fVar30 * fVar36) * fVar2;
    fVar41 = (fVar27 * fVar18 + fVar30 * fVar19) * fVar3;
    fVar45 = fVar2 * (fVar27 * fVar19 - fVar30 * fVar18);
    fVar46 = fVar3 * (fVar30 * fVar36 - fVar24);
    fVar47 = fVar1 * (fVar30 * fVar19 - fVar27 * fVar18);
    fVar18 = (float)((uint)((_DAT_146aefa50 - (fVar30 * fVar16 + fVar27 * fVar36)) * fVar1) &
                    _DAT_146aefb20);
    fVar24 = (float)((uint)((fRam0000000146aefa54 - (fVar30 * fVar16 + fVar35)) * fVar2) &
                    uRam0000000146aefb24);
    fVar27 = (float)((uint)((fRam0000000146aefa58 - (fVar27 * fVar36 + fVar35)) * fVar3) &
                    uRam0000000146aefb28);
    fVar30 = (float)((uint)((fRam0000000146aefa5c - (fVar35 + fVar35)) * auVar9._12_4_) &
                    uRam0000000146aefb2c);
    fVar19 = *(float *)(param_1 + 0xa0);
    fVar36 = *(float *)(param_1 + 0xa4);
    fVar16 = *(float *)(param_1 + 0xa8);
    local_158 = fVar37 * fVar31 + fVar18 * fVar22 + fVar47 * fVar44 + fVar30 * fVar21;
    fStack_154 = fVar37 * fVar23 + fVar18 * fVar42 + fVar47 * fVar38 + fVar30 * fVar17;
    fStack_150 = fVar37 * fVar43 + fVar18 * fVar40 + fVar47 * fVar25 + fVar30 * fVar13;
    fStack_14c = fVar37 * fVar28 + fVar18 * fVar28 + fVar47 * fVar28 + fVar30 * fRam0000000146aefa5c
    ;
    local_148 = fVar24 * fVar31 + fVar45 * fVar22 + fVar39 * fVar44 + fVar30 * fVar21;
    fStack_144 = fVar24 * fVar23 + fVar45 * fVar42 + fVar39 * fVar38 + fVar30 * fVar17;
    fStack_140 = fVar24 * fVar43 + fVar45 * fVar40 + fVar39 * fVar25 + fVar30 * fVar13;
    fStack_13c = fVar24 * fVar28 + fVar45 * fVar28 + fVar39 * fVar28 + fVar30 * fRam0000000146aefa5c
    ;
    local_138 = fVar46 * fVar31 + fVar41 * fVar22 + fVar27 * fVar44 + fVar30 * fVar21;
    fStack_134 = fVar46 * fVar23 + fVar41 * fVar42 + fVar27 * fVar38 + fVar30 * fVar17;
    fStack_130 = fVar46 * fVar43 + fVar41 * fVar40 + fVar27 * fVar25 + fVar30 * fVar13;
    fStack_12c = fVar46 * fVar28 + fVar41 * fVar28 + fVar27 * fVar28 + fVar30 * fRam0000000146aefa5c
    ;
    local_128 = fVar36 * fVar31 + fVar19 * fVar22 + fVar16 * fVar44 + fRam0000000146aefa5c * fVar21;
    fStack_124 = fVar36 * fVar23 + fVar19 * fVar42 + fVar16 * fVar38 + fRam0000000146aefa5c * fVar17
    ;
    fStack_120 = fVar36 * fVar43 + fVar19 * fVar40 + fVar16 * fVar25 + fRam0000000146aefa5c * fVar13
    ;
    fStack_11c = fVar36 * fVar28 + fVar19 * fVar28 + fVar16 * fVar28 +
                 fRam0000000146aefa5c * fRam0000000146aefa5c;
    FMatrix::RemoveScaling(&local_158);
    fVar13 = (float)(-(uint)(fVar32 <= fVar1 * fVar48) & (_DAT_146aefa40 ^ (uint)fVar20) ^
                    _DAT_146aefa40);
    fVar19 = (float)(-(uint)(fVar33 <= fVar2 * fVar49) & (uRam0000000146aefa44 ^ (uint)fVar26) ^
                    uRam0000000146aefa44);
    fVar17 = (float)(-(uint)(fVar34 <= fVar3 * fVar50) & (uRam0000000146aefa48 ^ (uint)fVar29) ^
                    uRam0000000146aefa48);
    local_158 = local_158 * fVar13;
    fStack_154 = fStack_154 * fVar13;
    fStack_150 = fStack_150 * fVar13;
    fStack_140 = fStack_140 * fVar19;
    fStack_144 = fStack_144 * fVar19;
    local_148 = local_148 * fVar19;
    fStack_130 = fStack_130 * fVar17;
    local_138 = local_138 * fVar17;
    fStack_134 = fStack_134 * fVar17;
    FQuat::FQuat(&local_118,&local_158);
    local_168 = 0x322bcc77;
    auVar15._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
    auVar15._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
    auVar15._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
    auVar15._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
    fVar21 = auVar15._4_4_ + auVar15._0_4_;
    fVar26 = auVar15._8_4_ + auVar15._4_4_;
    fVar29 = auVar15._12_4_ + auVar15._8_4_;
    fVar32 = auVar15._0_4_ + auVar15._12_4_;
    auVar4._4_4_ = fVar26;
    auVar4._0_4_ = fVar21;
    auVar4._8_4_ = fVar29;
    auVar4._12_4_ = fVar32;
    auVar11 = rsqrtps(auVar15,auVar4);
    fVar13 = auVar11._0_4_;
    fVar19 = auVar11._4_4_;
    fVar17 = auVar11._8_4_;
    fVar20 = auVar11._12_4_;
    fVar13 = (_DAT_146aefb70 - fVar13 * fVar13 * fVar21 * _DAT_146aefb70) * fVar13 + fVar13;
    fVar19 = (fRam0000000146aefb74 - fVar19 * fVar19 * fVar26 * fRam0000000146aefb74) * fVar19 +
             fVar19;
    fVar17 = (fRam0000000146aefb78 - fVar17 * fVar17 * fVar29 * fRam0000000146aefb78) * fVar17 +
             fVar17;
    fVar20 = (fRam0000000146aefb7c - fVar20 * fVar20 * fVar32 * fRam0000000146aefb7c) * fVar20 +
             fVar20;
    local_f8._4_4_ = fStack_124;
    local_f8._0_4_ = local_128;
    uStack_f0._0_4_ = fStack_120;
    local_108 = (float)(((uint)(((_DAT_146aefb70 - fVar13 * fVar13 * fVar21 * _DAT_146aefb70) *
                                 fVar13 + fVar13) * local_118) ^ _DAT_146aefb60) &
                        -(uint)(1e-08 <= fVar21) ^ _DAT_146aefb60);
    fStack_104 = (float)(((uint)(((fRam0000000146aefb74 -
                                  fVar19 * fVar19 * fVar26 * fRam0000000146aefb74) * fVar19 + fVar19
                                 ) * fStack_114) ^ uRam0000000146aefb64) & -(uint)(1e-08 <= fVar26)
                        ^ uRam0000000146aefb64);
    fStack_100 = (float)(((uint)(((fRam0000000146aefb78 -
                                  fVar17 * fVar17 * fVar29 * fRam0000000146aefb78) * fVar17 + fVar17
                                 ) * fStack_110) ^ uRam0000000146aefb68) & -(uint)(1e-08 <= fVar29)
                        ^ uRam0000000146aefb68);
    fStack_fc = (float)(((uint)(((fRam0000000146aefb7c -
                                 fVar20 * fVar20 * fVar32 * fRam0000000146aefb7c) * fVar20 + fVar20)
                               * fStack_10c) ^ uRam0000000146aefb6c) & -(uint)(1e-08 <= fVar32) ^
                       uRam0000000146aefb6c);
    uStack_f0._4_4_ = 0;
  }
  fStack_dc = auVar9._12_4_ * fVar51;
  fStack_e0 = fVar3 * fVar50;
  fStack_e4 = fVar2 * fVar49;
  local_e8 = fVar1 * fVar48;
  FBox::TransformBy(param_1 + 0x70,param_2,&local_108);
  return param_2;
}



// FUNCTION 142305000 FUN_142305000 body=1445 status=ok
// SIG undefined FUN_142305000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142305000(longlong param_1,undefined8 *param_2,float *param_3,float param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 in_EAX;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar10 [16];
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  fVar18 = fRam0000000146aefa58;
  fVar17 = fRam0000000146aefa54;
  fVar16 = _DAT_146aefa50;
  fVar8 = *param_3;
  fVar9 = param_3[1];
  fVar12 = param_3[2];
  fVar13 = param_3[3];
  auVar1 = *(undefined1 (*) [16])(param_3 + 8);
  fVar21 = auVar1._0_4_;
  fVar24 = auVar1._4_4_;
  fVar27 = auVar1._8_4_;
  fVar38 = (float)((uint)_DAT_146aefa50 & _DAT_146aefb20);
  fVar39 = (float)((uint)fRam0000000146aefa54 & uRam0000000146aefb24);
  fVar40 = (float)((uint)fRam0000000146aefa58 & uRam0000000146aefb28);
  auVar6._4_4_ = fVar39;
  auVar6._0_4_ = fVar38;
  auVar6._8_4_ = fVar40;
  auVar6._12_4_ = (uint)fRam0000000146aefa5c & uRam0000000146aefb2c;
  auVar6 = minps(auVar6,auVar1);
  auVar7._4_4_ = -(uint)(auVar6._4_4_ < fRam0000000146aefb84);
  auVar7._0_4_ = -(uint)(auVar6._0_4_ < _DAT_146aefb80);
  auVar7._8_4_ = -(uint)(auVar6._8_4_ < fRam0000000146aefb88);
  auVar7._12_4_ = -(uint)(auVar6._12_4_ < fRam0000000146aefb8c);
  iVar5 = movmskps(in_EAX,auVar7);
  fVar35 = param_4 * *(float *)(param_1 + 0xa0);
  fVar36 = param_4 * *(float *)(param_1 + 0xa4);
  fVar37 = param_4 * *(float *)(param_1 + 0xa8);
  if (iVar5 == 0) {
    fVar21 = fVar21 * fVar35;
    fVar24 = fVar24 * fVar36;
    fVar27 = fVar27 * fVar37;
    fVar16 = fVar27 * fVar9 - fVar24 * fVar12;
    fVar17 = fVar21 * fVar12 - fVar27 * fVar8;
    fVar18 = fVar24 * fVar8 - fVar21 * fVar9;
    fVar16 = fVar16 + fVar16;
    fVar17 = fVar17 + fVar17;
    fVar18 = fVar18 + fVar18;
    local_b8 = (fVar18 * fVar9 - fVar17 * fVar12) + fVar13 * fVar16 + fVar21 + param_3[4];
    fStack_b4 = (fVar16 * fVar12 - fVar18 * fVar8) + fVar13 * fVar17 + fVar24 + param_3[5];
    fStack_b0 = (fVar17 * fVar8 - fVar16 * fVar9) + fVar13 * fVar18 + fVar27 + param_3[6];
  }
  else {
    fVar11 = fVar9 + fVar9;
    fVar14 = fVar12 + fVar12;
    fVar2 = param_3[4];
    fVar3 = param_3[5];
    fVar4 = param_3[6];
    fVar15 = (fVar8 + fVar8) * fVar8;
    fVar29 = fVar13 * (fVar8 + fVar8);
    fVar32 = (fVar13 * fVar14 + fVar11 * fVar8) * fVar21;
    fVar33 = (fVar29 + fVar14 * fVar9) * fVar24;
    fVar34 = (fVar13 * fVar11 + fVar14 * fVar8) * fVar27;
    fVar19 = fVar24 * (fVar11 * fVar8 - fVar13 * fVar14);
    fVar22 = fVar27 * (fVar14 * fVar9 - fVar29);
    fVar25 = fVar21 * (fVar14 * fVar8 - fVar13 * fVar11);
    fVar8 = (float)((uint)((_DAT_146aefa50 - (fVar14 * fVar12 + fVar11 * fVar9)) * fVar21) &
                   _DAT_146aefb20);
    fVar12 = (float)((uint)((fRam0000000146aefa54 - (fVar14 * fVar12 + fVar15)) * fVar24) &
                    uRam0000000146aefb24);
    fVar11 = (float)((uint)((fRam0000000146aefa58 - (fVar11 * fVar9 + fVar15)) * fVar27) &
                    uRam0000000146aefb28);
    fVar15 = (float)((uint)((fRam0000000146aefa5c - (fVar15 + fVar15)) * auVar1._12_4_) &
                    uRam0000000146aefb2c);
    fVar28 = (fRam0000000146aefa5c * 0.0 + 0.0) * fVar38;
    fVar30 = (fRam0000000146aefa5c * 0.0 + 0.0) * fVar39;
    fVar31 = (fRam0000000146aefa5c * 0.0 + 0.0) * fVar40;
    fVar20 = fVar39 * (0.0 - fRam0000000146aefa5c * 0.0);
    fVar23 = fVar40 * (0.0 - fRam0000000146aefa5c * 0.0);
    fVar26 = fVar38 * (0.0 - fRam0000000146aefa5c * 0.0);
    fVar9 = (float)((uint)((_DAT_146aefa50 - 0.0) * fVar38) & _DAT_146aefb20);
    fVar13 = (float)((uint)((fRam0000000146aefa54 - 0.0) * fVar39) & uRam0000000146aefb24);
    fVar14 = (float)((uint)((fRam0000000146aefa58 - 0.0) * fVar40) & uRam0000000146aefb28);
    fVar29 = (float)((uint)((fRam0000000146aefa5c - 0.0) *
                           (float)((uint)fRam0000000146aefa5c & uRam0000000146aefb2c)) &
                    uRam0000000146aefb2c);
    local_e8 = fVar28 * fVar19 + fVar9 * fVar8 + fVar26 * fVar34 + fVar29 * fVar2;
    fStack_e4 = fVar28 * fVar12 + fVar9 * fVar32 + fVar26 * fVar22 + fVar29 * fVar3;
    fStack_e0 = fVar28 * fVar33 + fVar9 * fVar25 + fVar26 * fVar11 + fVar29 * fVar4;
    fStack_dc = fVar28 * fVar15 + fVar9 * fVar15 + fVar26 * fVar15 + fVar29 * fRam0000000146aefa5c;
    local_d8 = fVar13 * fVar19 + fVar20 * fVar8 + fVar30 * fVar34 + fVar29 * fVar2;
    fStack_d4 = fVar13 * fVar12 + fVar20 * fVar32 + fVar30 * fVar22 + fVar29 * fVar3;
    fStack_d0 = fVar13 * fVar33 + fVar20 * fVar25 + fVar30 * fVar11 + fVar29 * fVar4;
    fStack_cc = fVar13 * fVar15 + fVar20 * fVar15 + fVar30 * fVar15 + fVar29 * fRam0000000146aefa5c;
    local_c8 = fVar23 * fVar19 + fVar31 * fVar8 + fVar14 * fVar34 + fVar29 * fVar2;
    fStack_c4 = fVar23 * fVar12 + fVar31 * fVar32 + fVar14 * fVar22 + fVar29 * fVar3;
    fStack_c0 = fVar23 * fVar33 + fVar31 * fVar25 + fVar14 * fVar11 + fVar29 * fVar4;
    fStack_bc = fVar23 * fVar15 + fVar31 * fVar15 + fVar14 * fVar15 + fVar29 * fRam0000000146aefa5c;
    local_b8 = fVar36 * fVar19 + fVar35 * fVar8 + fVar37 * fVar34 + fRam0000000146aefa5c * fVar2;
    fStack_b4 = fVar36 * fVar12 + fVar35 * fVar32 + fVar37 * fVar22 + fRam0000000146aefa5c * fVar3;
    fStack_b0 = fVar36 * fVar33 + fVar35 * fVar25 + fVar37 * fVar11 + fRam0000000146aefa5c * fVar4;
    fStack_ac = fVar36 * fVar15 + fVar35 * fVar15 + fVar37 * fVar15 +
                fRam0000000146aefa5c * fRam0000000146aefa5c;
    FMatrix::RemoveScaling(&local_e8);
    fVar21 = (float)(-(uint)(_DAT_146aefb80 <= fVar21 * fVar38) & (_DAT_146aefa40 ^ (uint)fVar16) ^
                    _DAT_146aefa40);
    fVar24 = (float)(-(uint)(fRam0000000146aefb84 <= fVar24 * fVar39) &
                     (uRam0000000146aefa44 ^ (uint)fVar17) ^ uRam0000000146aefa44);
    fVar27 = (float)(-(uint)(fRam0000000146aefb88 <= fVar27 * fVar40) &
                     (uRam0000000146aefa48 ^ (uint)fVar18) ^ uRam0000000146aefa48);
    local_e8 = local_e8 * fVar21;
    fStack_e4 = fStack_e4 * fVar21;
    fStack_e0 = fStack_e0 * fVar21;
    fStack_d0 = fStack_d0 * fVar24;
    fStack_d4 = fStack_d4 * fVar24;
    local_d8 = local_d8 * fVar24;
    fStack_c0 = fStack_c0 * fVar27;
    local_c8 = local_c8 * fVar27;
    fStack_c4 = fStack_c4 * fVar27;
    FQuat::FQuat(&local_f8,&local_e8);
    auVar10._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
    auVar10._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
    auVar10._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
    auVar10._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
    auVar1._4_4_ = auVar10._8_4_ + auVar10._4_4_;
    auVar1._0_4_ = auVar10._4_4_ + auVar10._0_4_;
    auVar1._8_4_ = auVar10._12_4_ + auVar10._8_4_;
    auVar1._12_4_ = auVar10._0_4_ + auVar10._12_4_;
    rsqrtps(auVar10,auVar1);
  }
  param_4 = param_4 * *(float *)(param_1 + 0xac);
  *(undefined1 *)(param_2 + 3) = 1;
  *param_2 = CONCAT44(fStack_b4 - param_4,local_b8 - param_4);
  *(float *)(param_2 + 1) = fStack_b0 - param_4;
  *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(param_4 + fStack_b4,param_4 + local_b8);
  *(float *)((longlong)param_2 + 0x14) = param_4 + fStack_b0;
  return param_2;
}



// FUNCTION 1423055b0 FUN_1423055b0 body=1804 status=ok
// SIG undefined FUN_1423055b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423055b0(longlong param_1,undefined8 *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  uVar4 = FRotator::Quaternion(param_1 + 0xbc,&local_f8);
  fVar30 = fRam0000000146aefa58;
  fVar26 = fRam0000000146aefa54;
  fVar22 = _DAT_146aefa50;
  auVar10 = *(undefined1 (*) [16])(param_3 + 8);
  fVar23 = auVar10._0_4_;
  fVar27 = auVar10._4_4_;
  fVar31 = auVar10._8_4_;
  fVar8 = *param_3;
  fVar16 = param_3[1];
  fVar11 = param_3[2];
  fVar12 = param_3[3];
  auVar6._4_4_ = DAT_1464aa788._4_4_;
  auVar6._0_4_ = (float)DAT_1464aa788;
  auVar6._8_4_ = DAT_1464aa790;
  auVar6._12_4_ = 0;
  auVar6 = minps(auVar6,auVar10);
  fVar38 = param_4 * *(float *)(param_1 + 0xb0);
  fVar39 = param_4 * *(float *)(param_1 + 0xb4);
  fVar40 = param_4 * *(float *)(param_1 + 0xb8);
  auVar7._4_4_ = -(uint)(auVar6._4_4_ < fRam0000000146aefb84);
  auVar7._0_4_ = -(uint)(auVar6._0_4_ < _DAT_146aefb80);
  auVar7._8_4_ = -(uint)(auVar6._8_4_ < fRam0000000146aefb88);
  auVar7._12_4_ = -(uint)(auVar6._12_4_ < fRam0000000146aefb8c);
  iVar5 = movmskps(uVar4,auVar7);
  if (iVar5 == 0) {
    fVar38 = fVar38 * fVar23;
    fVar39 = fVar39 * fVar27;
    fVar40 = fVar40 * fVar31;
    fVar22 = fVar40 * fVar16 - fVar39 * fVar11;
    fVar26 = fVar38 * fVar11 - fVar40 * fVar8;
    fVar30 = fVar39 * fVar8 - fVar38 * fVar16;
    fVar22 = fVar22 + fVar22;
    fVar26 = fVar26 + fVar26;
    fVar30 = fVar30 + fVar30;
    fVar23 = (float)DAT_1464aa788 * fVar23;
    fVar27 = DAT_1464aa788._4_4_ * fVar27;
    fVar31 = DAT_1464aa790 * fVar31;
    local_b8 = (fVar30 * fVar16 - fVar26 * fVar11) + fVar22 * fVar12 + fVar38 + param_3[4];
    fStack_b4 = (fVar22 * fVar11 - fVar30 * fVar8) + fVar26 * fVar12 + fVar39 + param_3[5];
    fStack_b0 = (fVar26 * fVar8 - fVar22 * fVar16) + fVar30 * fVar12 + fVar40 + param_3[6];
    fVar22 = fVar8 * fStack_ec * _DAT_146aefb50 + fVar12 * local_f8 +
             fVar16 * fStack_f0 * _DAT_146aefb40 + fVar11 * fStack_f4 * _DAT_146aefb30;
    fVar26 = fVar8 * fStack_f0 * fRam0000000146aefb54 + fVar12 * fStack_f4 +
             fVar16 * fStack_ec * fRam0000000146aefb44 + fVar11 * local_f8 * fRam0000000146aefb34;
    fVar30 = fVar8 * fStack_f4 * fRam0000000146aefb58 + fVar12 * fStack_f0 +
             fVar16 * local_f8 * fRam0000000146aefb48 + fVar11 * fStack_ec * fRam0000000146aefb38;
    fVar8 = fVar8 * local_f8 * fRam0000000146aefb5c + fVar12 * fStack_ec +
            fVar16 * fStack_f4 * fRam0000000146aefb4c + fVar11 * fStack_f0 * fRam0000000146aefb3c;
  }
  else {
    fVar1 = param_3[4];
    fVar2 = param_3[5];
    fVar3 = param_3[6];
    fVar13 = fVar16 + fVar16;
    fVar17 = fVar11 + fVar11;
    fVar19 = (fVar8 + fVar8) * fVar8;
    fVar14 = (fVar8 + fVar8) * fVar12;
    fVar15 = fStack_f4 + fStack_f4;
    fVar18 = fStack_f0 + fStack_f0;
    fVar35 = (fVar17 * fVar12 + fVar13 * fVar8) * fVar23;
    fVar36 = (fVar14 + fVar17 * fVar16) * fVar27;
    fVar37 = (fVar13 * fVar12 + fVar17 * fVar8) * fVar31;
    fVar21 = fVar27 * (fVar13 * fVar8 - fVar17 * fVar12);
    fVar24 = fVar31 * (fVar17 * fVar16 - fVar14);
    fVar28 = fVar23 * (fVar17 * fVar8 - fVar13 * fVar12);
    fVar20 = (local_f8 + local_f8) * local_f8;
    fVar8 = (float)((uint)((_DAT_146aefa50 - (fVar17 * fVar11 + fVar13 * fVar16)) * fVar23) &
                   _DAT_146aefb20);
    fVar11 = (float)((uint)((fRam0000000146aefa54 - (fVar17 * fVar11 + fVar19)) * fVar27) &
                    uRam0000000146aefb24);
    fVar13 = (float)((uint)((fRam0000000146aefa58 - (fVar13 * fVar16 + fVar19)) * fVar31) &
                    uRam0000000146aefb28);
    fVar17 = (float)((uint)((fRam0000000146aefa5c - (fVar19 + fVar19)) * auVar10._12_4_) &
                    uRam0000000146aefb2c);
    fVar16 = (local_f8 + local_f8) * fStack_ec;
    fVar32 = (fVar18 * fStack_ec + fVar15 * local_f8) * (float)DAT_1464aa788;
    fVar33 = (fVar16 + fVar18 * fStack_f4) * DAT_1464aa788._4_4_;
    fVar34 = (fVar15 * fStack_ec + fVar18 * local_f8) * DAT_1464aa790;
    fVar19 = DAT_1464aa788._4_4_ * (fVar15 * local_f8 - fVar18 * fStack_ec);
    fVar25 = DAT_1464aa790 * (fVar18 * fStack_f4 - fVar16);
    fVar29 = (float)DAT_1464aa788 * (fVar18 * local_f8 - fVar15 * fStack_ec);
    fVar16 = (float)((uint)((_DAT_146aefa50 - (fVar18 * fStack_f0 + fVar15 * fStack_f4)) *
                           (float)DAT_1464aa788) & _DAT_146aefb20);
    fVar12 = (float)((uint)((fRam0000000146aefa54 - (fVar18 * fStack_f0 + fVar20)) *
                           DAT_1464aa788._4_4_) & uRam0000000146aefb24);
    fVar14 = (float)((uint)((fRam0000000146aefa58 - (fVar15 * fStack_f4 + fVar20)) * DAT_1464aa790)
                    & uRam0000000146aefb28);
    fVar15 = (float)((uint)((fRam0000000146aefa5c - (fVar20 + fVar20)) * 0.0) & uRam0000000146aefb2c
                    );
    local_e8 = fVar32 * fVar21 + fVar16 * fVar8 + fVar29 * fVar37 + fVar15 * fVar1;
    fStack_e4 = fVar32 * fVar11 + fVar16 * fVar35 + fVar29 * fVar24 + fVar15 * fVar2;
    fStack_e0 = fVar32 * fVar36 + fVar16 * fVar28 + fVar29 * fVar13 + fVar15 * fVar3;
    fStack_dc = fVar32 * fVar17 + fVar16 * fVar17 + fVar29 * fVar17 + fVar15 * fRam0000000146aefa5c;
    local_d8 = fVar12 * fVar21 + fVar19 * fVar8 + fVar33 * fVar37 + fVar15 * fVar1;
    fStack_d4 = fVar12 * fVar11 + fVar19 * fVar35 + fVar33 * fVar24 + fVar15 * fVar2;
    fStack_d0 = fVar12 * fVar36 + fVar19 * fVar28 + fVar33 * fVar13 + fVar15 * fVar3;
    fStack_cc = fVar12 * fVar17 + fVar19 * fVar17 + fVar33 * fVar17 + fVar15 * fRam0000000146aefa5c;
    local_c8 = fVar25 * fVar21 + fVar34 * fVar8 + fVar14 * fVar37 + fVar15 * fVar1;
    fStack_c4 = fVar25 * fVar11 + fVar34 * fVar35 + fVar14 * fVar24 + fVar15 * fVar2;
    fStack_c0 = fVar25 * fVar36 + fVar34 * fVar28 + fVar14 * fVar13 + fVar15 * fVar3;
    fStack_bc = fVar25 * fVar17 + fVar34 * fVar17 + fVar14 * fVar17 + fVar15 * fRam0000000146aefa5c;
    local_b8 = fVar39 * fVar21 + fVar38 * fVar8 + fVar40 * fVar37 + fRam0000000146aefa5c * fVar1;
    fStack_b4 = fVar39 * fVar11 + fVar38 * fVar35 + fVar40 * fVar24 + fRam0000000146aefa5c * fVar2;
    fStack_b0 = fVar39 * fVar36 + fVar38 * fVar28 + fVar40 * fVar13 + fRam0000000146aefa5c * fVar3;
    fStack_ac = fVar39 * fVar17 + fVar38 * fVar17 + fVar40 * fVar17 +
                fRam0000000146aefa5c * fRam0000000146aefa5c;
    local_f8 = fVar23 * (float)DAT_1464aa788;
    fStack_f4 = fVar27 * DAT_1464aa788._4_4_;
    fStack_f0 = fVar31 * DAT_1464aa790;
    fStack_ec = auVar10._12_4_ * 0.0;
    FMatrix::RemoveScaling(&local_e8);
    fVar31 = fStack_f0;
    fVar27 = fStack_f4;
    fVar23 = local_f8;
    fVar8 = (float)(-(uint)(_DAT_146aefb80 <= local_f8) & (_DAT_146aefa40 ^ (uint)fVar22) ^
                   _DAT_146aefa40);
    fVar16 = (float)(-(uint)(fRam0000000146aefb84 <= fStack_f4) &
                     (uRam0000000146aefa44 ^ (uint)fVar26) ^ uRam0000000146aefa44);
    fVar11 = (float)(-(uint)(fRam0000000146aefb88 <= fStack_f0) &
                     (uRam0000000146aefa48 ^ (uint)fVar30) ^ uRam0000000146aefa48);
    local_e8 = local_e8 * fVar8;
    fStack_e4 = fStack_e4 * fVar8;
    fStack_e0 = fStack_e0 * fVar8;
    fStack_d4 = fStack_d4 * fVar16;
    fStack_d0 = fStack_d0 * fVar16;
    local_d8 = local_d8 * fVar16;
    fStack_c4 = fStack_c4 * fVar11;
    fStack_c0 = fStack_c0 * fVar11;
    local_c8 = local_c8 * fVar11;
    FQuat::FQuat(&local_f8,&local_e8);
    auVar9._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
    auVar9._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
    auVar9._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
    auVar9._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
    fVar22 = auVar9._4_4_ + auVar9._0_4_;
    fVar26 = auVar9._8_4_ + auVar9._4_4_;
    fVar30 = auVar9._12_4_ + auVar9._8_4_;
    fVar38 = auVar9._0_4_ + auVar9._12_4_;
    auVar10._4_4_ = fVar26;
    auVar10._0_4_ = fVar22;
    auVar10._8_4_ = fVar30;
    auVar10._12_4_ = fVar38;
    auVar10 = rsqrtps(auVar9,auVar10);
    fVar8 = auVar10._0_4_;
    fVar16 = auVar10._4_4_;
    fVar11 = auVar10._8_4_;
    fVar12 = auVar10._12_4_;
    fVar8 = (_DAT_146aefb70 - fVar8 * fVar8 * fVar22 * _DAT_146aefb70) * fVar8 + fVar8;
    fVar16 = (fRam0000000146aefb74 - fVar16 * fVar16 * fVar26 * fRam0000000146aefb74) * fVar16 +
             fVar16;
    fVar11 = (fRam0000000146aefb78 - fVar11 * fVar11 * fVar30 * fRam0000000146aefb78) * fVar11 +
             fVar11;
    fVar12 = (fRam0000000146aefb7c - fVar12 * fVar12 * fVar38 * fRam0000000146aefb7c) * fVar12 +
             fVar12;
    fVar22 = (float)(((uint)(((_DAT_146aefb70 - fVar8 * fVar8 * fVar22 * _DAT_146aefb70) * fVar8 +
                             fVar8) * local_f8) ^ _DAT_146aefb60) & -(uint)(1e-08 <= fVar22) ^
                    _DAT_146aefb60);
    fVar26 = (float)(((uint)(((fRam0000000146aefb74 -
                              fVar16 * fVar16 * fVar26 * fRam0000000146aefb74) * fVar16 + fVar16) *
                            fStack_f4) ^ uRam0000000146aefb64) & -(uint)(1e-08 <= fVar26) ^
                    uRam0000000146aefb64);
    fVar30 = (float)(((uint)(((fRam0000000146aefb78 -
                              fVar11 * fVar11 * fVar30 * fRam0000000146aefb78) * fVar11 + fVar11) *
                            fStack_f0) ^ uRam0000000146aefb68) & -(uint)(1e-08 <= fVar30) ^
                    uRam0000000146aefb68);
    fVar8 = (float)(((uint)(((fRam0000000146aefb7c - fVar12 * fVar12 * fVar38 * fRam0000000146aefb7c
                             ) * fVar12 + fVar12) * fStack_ec) ^ uRam0000000146aefb6c) &
                    -(uint)(1e-08 <= fVar38) ^ uRam0000000146aefb6c);
  }
  fVar23 = fVar23 * 0.0;
  fVar27 = fVar27 * 0.0;
  fVar31 = fVar31 * 1.0;
  *(undefined1 *)(param_2 + 3) = 1;
  fVar11 = fVar31 * fVar26 - fVar27 * fVar30;
  fVar12 = fVar23 * fVar30 - fVar31 * fVar22;
  fVar38 = fVar27 * fVar22 - fVar23 * fVar26;
  fVar11 = fVar11 + fVar11;
  fVar12 = fVar12 + fVar12;
  fVar38 = fVar38 + fVar38;
  fVar40 = param_4 * *(float *)(param_1 + 200);
  fVar16 = param_4 * 0.5 * *(float *)(param_1 + 0xcc);
  fVar39 = ABS((fVar38 * fVar26 - fVar12 * fVar30) + fVar8 * fVar11 + fVar23) * fVar16;
  fVar23 = ABS((fVar11 * fVar30 - fVar38 * fVar22) + fVar8 * fVar12 + fVar27) * fVar16;
  fVar16 = ABS((fVar12 * fVar22 - fVar11 * fVar26) + fVar8 * fVar38 + fVar31) * fVar16;
  *param_2 = CONCAT44((fStack_b4 - fVar23) - fVar40,(local_b8 - fVar39) - fVar40);
  *(float *)(param_2 + 1) = (fStack_b0 - fVar16) - fVar40;
  *(ulonglong *)((longlong)param_2 + 0xc) =
       CONCAT44(fVar23 + fStack_b4 + fVar40,fVar39 + local_b8 + fVar40);
  *(float *)((longlong)param_2 + 0x14) = fVar16 + fStack_b0 + fVar40;
  return param_2;
}



// FUNCTION 142305cc0 FUN_142305cc0 body=1796 status=ok
// SIG undefined FUN_142305cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142305cc0(longlong param_1,undefined8 *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  uVar4 = FRotator::Quaternion(param_1 + 0x6c,&local_f8);
  fVar30 = fRam0000000146aefa58;
  fVar26 = fRam0000000146aefa54;
  fVar22 = _DAT_146aefa50;
  auVar10 = *(undefined1 (*) [16])(param_3 + 8);
  fVar23 = auVar10._0_4_;
  fVar27 = auVar10._4_4_;
  fVar31 = auVar10._8_4_;
  fVar8 = *param_3;
  fVar16 = param_3[1];
  fVar11 = param_3[2];
  fVar12 = param_3[3];
  auVar6._4_4_ = DAT_1464aa788._4_4_;
  auVar6._0_4_ = (float)DAT_1464aa788;
  auVar6._8_4_ = DAT_1464aa790;
  auVar6._12_4_ = 0;
  auVar6 = minps(auVar6,auVar10);
  fVar38 = param_4 * *(float *)(param_1 + 0x60);
  fVar39 = param_4 * *(float *)(param_1 + 100);
  fVar40 = param_4 * *(float *)(param_1 + 0x68);
  auVar7._4_4_ = -(uint)(auVar6._4_4_ < fRam0000000146aefb84);
  auVar7._0_4_ = -(uint)(auVar6._0_4_ < _DAT_146aefb80);
  auVar7._8_4_ = -(uint)(auVar6._8_4_ < fRam0000000146aefb88);
  auVar7._12_4_ = -(uint)(auVar6._12_4_ < fRam0000000146aefb8c);
  iVar5 = movmskps(uVar4,auVar7);
  if (iVar5 == 0) {
    fVar38 = fVar23 * fVar38;
    fVar39 = fVar27 * fVar39;
    fVar40 = fVar31 * fVar40;
    fVar22 = fVar40 * fVar16 - fVar39 * fVar11;
    fVar26 = fVar38 * fVar11 - fVar40 * fVar8;
    fVar30 = fVar39 * fVar8 - fVar38 * fVar16;
    fVar22 = fVar22 + fVar22;
    fVar26 = fVar26 + fVar26;
    fVar30 = fVar30 + fVar30;
    fVar23 = (float)DAT_1464aa788 * fVar23;
    fVar27 = DAT_1464aa788._4_4_ * fVar27;
    fVar31 = DAT_1464aa790 * fVar31;
    local_b8 = (fVar30 * fVar16 - fVar26 * fVar11) + fVar22 * fVar12 + fVar38 + param_3[4];
    fStack_b4 = (fVar22 * fVar11 - fVar30 * fVar8) + fVar26 * fVar12 + fVar39 + param_3[5];
    fStack_b0 = (fVar26 * fVar8 - fVar22 * fVar16) + fVar30 * fVar12 + fVar40 + param_3[6];
    fVar22 = fVar8 * fStack_ec * _DAT_146aefb50 + fVar12 * local_f8 +
             fVar16 * fStack_f0 * _DAT_146aefb40 + fVar11 * fStack_f4 * _DAT_146aefb30;
    fVar26 = fVar8 * fStack_f0 * fRam0000000146aefb54 + fVar12 * fStack_f4 +
             fVar16 * fStack_ec * fRam0000000146aefb44 + fVar11 * local_f8 * fRam0000000146aefb34;
    fVar30 = fVar8 * fStack_f4 * fRam0000000146aefb58 + fVar12 * fStack_f0 +
             fVar16 * local_f8 * fRam0000000146aefb48 + fVar11 * fStack_ec * fRam0000000146aefb38;
    fVar8 = fVar8 * local_f8 * fRam0000000146aefb5c + fVar12 * fStack_ec +
            fVar16 * fStack_f4 * fRam0000000146aefb4c + fVar11 * fStack_f0 * fRam0000000146aefb3c;
  }
  else {
    fVar1 = param_3[4];
    fVar2 = param_3[5];
    fVar3 = param_3[6];
    fVar13 = fVar16 + fVar16;
    fVar17 = fVar11 + fVar11;
    fVar19 = (fVar8 + fVar8) * fVar8;
    fVar14 = (fVar8 + fVar8) * fVar12;
    fVar15 = fStack_f4 + fStack_f4;
    fVar18 = fStack_f0 + fStack_f0;
    fVar35 = (fVar17 * fVar12 + fVar13 * fVar8) * fVar23;
    fVar36 = (fVar14 + fVar17 * fVar16) * fVar27;
    fVar37 = (fVar13 * fVar12 + fVar17 * fVar8) * fVar31;
    fVar21 = fVar27 * (fVar13 * fVar8 - fVar17 * fVar12);
    fVar24 = fVar31 * (fVar17 * fVar16 - fVar14);
    fVar28 = fVar23 * (fVar17 * fVar8 - fVar13 * fVar12);
    fVar20 = (local_f8 + local_f8) * local_f8;
    fVar8 = (float)((uint)((_DAT_146aefa50 - (fVar17 * fVar11 + fVar13 * fVar16)) * fVar23) &
                   _DAT_146aefb20);
    fVar11 = (float)((uint)((fRam0000000146aefa54 - (fVar17 * fVar11 + fVar19)) * fVar27) &
                    uRam0000000146aefb24);
    fVar13 = (float)((uint)((fRam0000000146aefa58 - (fVar13 * fVar16 + fVar19)) * fVar31) &
                    uRam0000000146aefb28);
    fVar17 = (float)((uint)((fRam0000000146aefa5c - (fVar19 + fVar19)) * auVar10._12_4_) &
                    uRam0000000146aefb2c);
    fVar16 = (local_f8 + local_f8) * fStack_ec;
    fVar32 = (fVar18 * fStack_ec + fVar15 * local_f8) * (float)DAT_1464aa788;
    fVar33 = (fVar16 + fVar18 * fStack_f4) * DAT_1464aa788._4_4_;
    fVar34 = (fVar15 * fStack_ec + fVar18 * local_f8) * DAT_1464aa790;
    fVar19 = DAT_1464aa788._4_4_ * (fVar15 * local_f8 - fVar18 * fStack_ec);
    fVar25 = DAT_1464aa790 * (fVar18 * fStack_f4 - fVar16);
    fVar29 = (float)DAT_1464aa788 * (fVar18 * local_f8 - fVar15 * fStack_ec);
    fVar16 = (float)((uint)((_DAT_146aefa50 - (fVar18 * fStack_f0 + fVar15 * fStack_f4)) *
                           (float)DAT_1464aa788) & _DAT_146aefb20);
    fVar12 = (float)((uint)((fRam0000000146aefa54 - (fVar18 * fStack_f0 + fVar20)) *
                           DAT_1464aa788._4_4_) & uRam0000000146aefb24);
    fVar14 = (float)((uint)((fRam0000000146aefa58 - (fVar15 * fStack_f4 + fVar20)) * DAT_1464aa790)
                    & uRam0000000146aefb28);
    fVar15 = (float)((uint)((fRam0000000146aefa5c - (fVar20 + fVar20)) * 0.0) & uRam0000000146aefb2c
                    );
    local_e8 = fVar32 * fVar21 + fVar16 * fVar8 + fVar29 * fVar37 + fVar15 * fVar1;
    fStack_e4 = fVar32 * fVar11 + fVar16 * fVar35 + fVar29 * fVar24 + fVar15 * fVar2;
    fStack_e0 = fVar32 * fVar36 + fVar16 * fVar28 + fVar29 * fVar13 + fVar15 * fVar3;
    fStack_dc = fVar32 * fVar17 + fVar16 * fVar17 + fVar29 * fVar17 + fVar15 * fRam0000000146aefa5c;
    local_d8 = fVar12 * fVar21 + fVar19 * fVar8 + fVar33 * fVar37 + fVar15 * fVar1;
    fStack_d4 = fVar12 * fVar11 + fVar19 * fVar35 + fVar33 * fVar24 + fVar15 * fVar2;
    fStack_d0 = fVar12 * fVar36 + fVar19 * fVar28 + fVar33 * fVar13 + fVar15 * fVar3;
    fStack_cc = fVar12 * fVar17 + fVar19 * fVar17 + fVar33 * fVar17 + fVar15 * fRam0000000146aefa5c;
    local_c8 = fVar25 * fVar21 + fVar34 * fVar8 + fVar14 * fVar37 + fVar15 * fVar1;
    fStack_c4 = fVar25 * fVar11 + fVar34 * fVar35 + fVar14 * fVar24 + fVar15 * fVar2;
    fStack_c0 = fVar25 * fVar36 + fVar34 * fVar28 + fVar14 * fVar13 + fVar15 * fVar3;
    fStack_bc = fVar25 * fVar17 + fVar34 * fVar17 + fVar14 * fVar17 + fVar15 * fRam0000000146aefa5c;
    local_b8 = fVar39 * fVar21 + fVar38 * fVar8 + fVar40 * fVar37 + fRam0000000146aefa5c * fVar1;
    fStack_b4 = fVar39 * fVar11 + fVar38 * fVar35 + fVar40 * fVar24 + fRam0000000146aefa5c * fVar2;
    fStack_b0 = fVar39 * fVar36 + fVar38 * fVar28 + fVar40 * fVar13 + fRam0000000146aefa5c * fVar3;
    fStack_ac = fVar39 * fVar17 + fVar38 * fVar17 + fVar40 * fVar17 +
                fRam0000000146aefa5c * fRam0000000146aefa5c;
    local_f8 = fVar23 * (float)DAT_1464aa788;
    fStack_f4 = fVar27 * DAT_1464aa788._4_4_;
    fStack_f0 = fVar31 * DAT_1464aa790;
    fStack_ec = auVar10._12_4_ * 0.0;
    FMatrix::RemoveScaling(&local_e8);
    fVar31 = fStack_f0;
    fVar27 = fStack_f4;
    fVar23 = local_f8;
    fVar8 = (float)(-(uint)(_DAT_146aefb80 <= local_f8) & (_DAT_146aefa40 ^ (uint)fVar22) ^
                   _DAT_146aefa40);
    fVar16 = (float)(-(uint)(fRam0000000146aefb84 <= fStack_f4) &
                     (uRam0000000146aefa44 ^ (uint)fVar26) ^ uRam0000000146aefa44);
    fVar11 = (float)(-(uint)(fRam0000000146aefb88 <= fStack_f0) &
                     (uRam0000000146aefa48 ^ (uint)fVar30) ^ uRam0000000146aefa48);
    local_e8 = local_e8 * fVar8;
    fStack_e0 = fStack_e0 * fVar8;
    fStack_e4 = fStack_e4 * fVar8;
    fStack_d0 = fStack_d0 * fVar16;
    fStack_d4 = fStack_d4 * fVar16;
    local_d8 = local_d8 * fVar16;
    fStack_c0 = fStack_c0 * fVar11;
    local_c8 = local_c8 * fVar11;
    fStack_c4 = fStack_c4 * fVar11;
    FQuat::FQuat(&local_f8,&local_e8);
    auVar9._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
    auVar9._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
    auVar9._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
    auVar9._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
    fVar22 = auVar9._4_4_ + auVar9._0_4_;
    fVar26 = auVar9._8_4_ + auVar9._4_4_;
    fVar30 = auVar9._12_4_ + auVar9._8_4_;
    fVar38 = auVar9._0_4_ + auVar9._12_4_;
    auVar10._4_4_ = fVar26;
    auVar10._0_4_ = fVar22;
    auVar10._8_4_ = fVar30;
    auVar10._12_4_ = fVar38;
    auVar10 = rsqrtps(auVar9,auVar10);
    fVar8 = auVar10._0_4_;
    fVar16 = auVar10._4_4_;
    fVar11 = auVar10._8_4_;
    fVar12 = auVar10._12_4_;
    fVar8 = (_DAT_146aefb70 - fVar8 * fVar8 * fVar22 * _DAT_146aefb70) * fVar8 + fVar8;
    fVar16 = (fRam0000000146aefb74 - fVar16 * fVar16 * fVar26 * fRam0000000146aefb74) * fVar16 +
             fVar16;
    fVar11 = (fRam0000000146aefb78 - fVar11 * fVar11 * fVar30 * fRam0000000146aefb78) * fVar11 +
             fVar11;
    fVar12 = (fRam0000000146aefb7c - fVar12 * fVar12 * fVar38 * fRam0000000146aefb7c) * fVar12 +
             fVar12;
    fVar22 = (float)(((uint)(((_DAT_146aefb70 - fVar8 * fVar8 * fVar22 * _DAT_146aefb70) * fVar8 +
                             fVar8) * local_f8) ^ _DAT_146aefb60) & -(uint)(1e-08 <= fVar22) ^
                    _DAT_146aefb60);
    fVar26 = (float)(((uint)(((fRam0000000146aefb74 -
                              fVar16 * fVar16 * fVar26 * fRam0000000146aefb74) * fVar16 + fVar16) *
                            fStack_f4) ^ uRam0000000146aefb64) & -(uint)(1e-08 <= fVar26) ^
                    uRam0000000146aefb64);
    fVar30 = (float)(((uint)(((fRam0000000146aefb78 -
                              fVar11 * fVar11 * fVar30 * fRam0000000146aefb78) * fVar11 + fVar11) *
                            fStack_f0) ^ uRam0000000146aefb68) & -(uint)(1e-08 <= fVar30) ^
                    uRam0000000146aefb68);
    fVar8 = (float)(((uint)(((fRam0000000146aefb7c - fVar12 * fVar12 * fVar38 * fRam0000000146aefb7c
                             ) * fVar12 + fVar12) * fStack_ec) ^ uRam0000000146aefb6c) &
                    -(uint)(1e-08 <= fVar38) ^ uRam0000000146aefb6c);
  }
  fVar23 = fVar23 * 0.0;
  fVar27 = fVar27 * 0.0;
  fVar31 = fVar31 * 1.0;
  *(undefined1 *)(param_2 + 3) = 1;
  fVar11 = fVar31 * fVar26 - fVar27 * fVar30;
  fVar12 = fVar23 * fVar30 - fVar31 * fVar22;
  fVar38 = fVar27 * fVar22 - fVar23 * fVar26;
  fVar11 = fVar11 + fVar11;
  fVar12 = fVar12 + fVar12;
  fVar38 = fVar38 + fVar38;
  fVar40 = param_4 * *(float *)(param_1 + 0x7c);
  fVar16 = param_4 * 0.5 * *(float *)(param_1 + 0x80);
  param_4 = param_4 * *(float *)(param_1 + 0x78);
  fVar39 = ABS((fVar38 * fVar26 - fVar12 * fVar30) + fVar8 * fVar11 + fVar23) * fVar16;
  fVar23 = ABS((fVar11 * fVar30 - fVar38 * fVar22) + fVar8 * fVar12 + fVar27) * fVar16;
  fVar16 = ABS((fVar12 * fVar22 - fVar11 * fVar26) + fVar8 * fVar38 + fVar31) * fVar16;
  *param_2 = CONCAT44((fStack_b4 - fVar23) - param_4,(local_b8 - fVar39) - param_4);
  *(float *)(param_2 + 1) = (fStack_b0 - fVar16) - param_4;
  *(ulonglong *)((longlong)param_2 + 0xc) =
       CONCAT44(fVar23 + fStack_b4 + fVar40,fVar39 + local_b8 + fVar40);
  *(float *)((longlong)param_2 + 0x14) = fVar16 + fStack_b0 + fVar40;
  return param_2;
}



// FUNCTION 1423063d0 FUN_1423063d0 body=1063 status=ok
// SIG undefined FUN_1423063d0(void)

void FUN_1423063d0(longlong param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  FUN_1423036c0(param_1,&local_c8,param_3,0);
  if (*(int *)(param_1 + 8) == 0) {
    if ((*(int *)(param_1 + 0x28) == 0) && (*(int *)(param_1 + 0x18) == 0)) {
      fVar16 = 0.0;
      lVar10 = (longlong)*(int *)(param_1 + 0x38);
      if (0 < lVar10) {
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x60);
        do {
          lVar8 = (longlong)*(int *)(puVar7 + 1);
          if (0 < lVar8) {
            fVar3 = *param_3;
            fVar4 = param_3[1];
            fVar5 = param_3[2];
            fVar6 = param_3[3];
            pfVar9 = (float *)*puVar7;
            fVar17 = fVar16;
            do {
              pfVar1 = pfVar9 + 2;
              pfVar2 = pfVar9 + 1;
              fVar16 = *pfVar9;
              pfVar9 = pfVar9 + 3;
              fVar16 = fVar16 * param_3[8];
              fVar14 = *pfVar2 * param_3[9];
              fVar15 = *pfVar1 * param_3[10];
              fVar11 = fVar15 * fVar4 - fVar14 * fVar5;
              fVar12 = fVar16 * fVar5 - fVar15 * fVar3;
              fVar13 = fVar14 * fVar3 - fVar16 * fVar4;
              fVar11 = fVar11 + fVar11;
              fVar12 = fVar12 + fVar12;
              fVar13 = fVar13 + fVar13;
              fVar16 = ((fVar13 * fVar4 - fVar12 * fVar5) + fVar6 * fVar11 + fVar16 + param_3[4]) -
                       (local_c8 + fStack_bc) * 0.5;
              fVar14 = ((fVar11 * fVar5 - fVar13 * fVar3) + fVar6 * fVar12 + fVar14 + param_3[5]) -
                       (fStack_c4 + fStack_b8) * 0.5;
              fVar11 = ((fVar12 * fVar3 - fVar11 * fVar4) + fVar6 * fVar13 + fVar15 + param_3[6]) -
                       (fStack_c0 + fStack_b4) * 0.5;
              fVar16 = fVar14 * fVar14 + fVar16 * fVar16 + fVar11 * fVar11;
              if (fVar16 <= fVar17) {
                fVar16 = fVar17;
              }
              lVar8 = lVar8 + -1;
              fVar17 = fVar16;
            } while (lVar8 != 0);
          }
          puVar7 = puVar7 + 0x1a;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      *(ulonglong *)(param_2 + 3) =
           CONCAT44((fStack_b8 - fStack_c4) * 0.5,(fStack_bc - local_c8) * 0.5);
      param_2[5] = (fStack_b4 - fStack_c0) * 0.5;
      *(ulonglong *)param_2 = CONCAT44(fStack_c4 + param_2[4],local_c8 + param_2[3]);
      param_2[6] = SQRT(fVar16);
      param_2[2] = fStack_c0 + param_2[5];
      return;
    }
  }
  else if ((((*(int *)(param_1 + 8) == 1) && (*(int *)(param_1 + 0x28) == 0)) &&
           (*(int *)(param_1 + 0x18) == 0)) && (*(int *)(param_1 + 0x38) == 0)) {
    *(ulonglong *)(param_2 + 3) =
         CONCAT44((fStack_b8 - fStack_c4) * 0.5,(fStack_bc - local_c8) * 0.5);
    param_2[5] = (fStack_b4 - fStack_c0) * 0.5;
    *(ulonglong *)param_2 = CONCAT44(fStack_c4 + param_2[4],local_c8 + param_2[3]);
    param_2[2] = fStack_c0 + param_2[5];
    fVar16 = param_2[3];
    goto LAB_1423067c7;
  }
  fStack_bc = fStack_bc - local_c8;
  fStack_b4 = fStack_b4 - fStack_c0;
  fStack_b8 = fStack_b8 - fStack_c4;
  *param_2 = fStack_bc * 0.5 + local_c8;
  param_2[1] = fStack_b8 * 0.5 + fStack_c4;
  param_2[2] = fStack_b4 * 0.5 + fStack_c0;
  param_2[3] = fStack_bc * 0.5;
  fVar16 = SQRT((fStack_bc * fStack_bc + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4) * 0.25);
  *(ulonglong *)(param_2 + 4) = CONCAT44(fStack_b4 * 0.5,fStack_b8 * 0.5);
LAB_1423067c7:
  param_2[6] = fVar16;
  return;
}



// FUNCTION 142306800 FUN_142306800 body=265 status=ok
// SIG undefined FUN_142306800(void)

uint FUN_142306800(int *param_1,longlong param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = (uint)param_1[3] >> 0x17 & 0x1f;
  uVar3 = 1 << ((byte)(*(uint *)(param_2 + 0xc) >> 0x17) & 0x1f);
  uVar4 = 0;
  if (*param_1 == 0) {
    uVar2 = param_1[1];
    if ((uVar3 & uVar2) != 0) {
      if (param_3 != '\0') {
        uVar6 = *(uint *)(param_2 + 4);
        uVar4 = 2 - (uVar5 != 0);
        goto LAB_1423068d6;
      }
      uVar4 = 2;
    }
    uVar6 = *(uint *)(param_2 + 4);
  }
  else {
    uVar6 = *(uint *)(param_2 + 4);
    uVar5 = 1 << (sbyte)uVar5;
    uVar4 = 2;
    if ((uVar6 & uVar5 & 0xfffffff) == 0) {
      uVar1 = 0;
      if ((*(uint *)(param_2 + 8) & uVar5 & 0xfffffff) != 0) {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 2;
    }
    uVar2 = param_1[1];
    if (((uVar2 & uVar3 & 0xfffffff) == 0) && (uVar4 = 0, (param_1[2] & uVar3 & 0xfffffff) != 0)) {
      uVar4 = 1;
    }
    if (uVar1 <= uVar4) {
      uVar4 = uVar1;
    }
  }
LAB_1423068d6:
  if ((((param_1[3] & uVar6 | *(uint *)(param_2 + 0xc) & uVar2) & 0xf0000000) != 0) && (uVar4 == 2))
  {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 142306910 FUN_142306910 body=959 status=ok
// SIG undefined FUN_142306910(void)

float * FUN_142306910(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = DAT_1464aaa4c;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    fVar4 = *(float *)(param_1 + 0x24) * 0.5;
    fVar7 = 1.0;
    fVar3 = (1.0 / *(float *)(param_1 + 0x30)) * fVar4;
    fVar5 = 1.0 / (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x28));
    if (fVar3 != 0.0) {
      fVar7 = 1.0 / fVar3;
    }
    fVar2 = 1.0;
    if (fVar4 != 0.0) {
      fVar2 = 1.0 / fVar4;
    }
    fVar1 = *(float *)(param_1 + 0x28);
    fVar6 = -fVar5;
    *param_2 = fVar2;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    fVar2 = fVar5 * fVar1 + 1.0;
    fVar5 = 1.0;
    param_2[4] = 0.0;
    param_2[5] = fVar7;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    param_2[10] = fVar6;
    param_2[0xb] = 0.0;
    param_2[0xc] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xe] = fVar2;
    param_2[0xf] = 1.0;
    if (fVar3 != 0.0) {
      fVar5 = 1.0 / fVar3;
    }
    fVar3 = 1.0;
    if (fVar4 != 0.0) {
      fVar3 = 1.0 / fVar4;
    }
    *param_3 = fVar3;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    param_3[4] = 0.0;
    param_3[5] = fVar5;
    param_3[6] = 0.0;
    param_3[7] = 0.0;
    param_3[8] = 0.0;
    param_3[9] = 0.0;
    param_3[10] = fVar6;
    param_3[0xb] = 0.0;
    param_3[0xc] = 0.0;
    param_3[0xd] = 0.0;
    param_3[0xe] = fVar2;
    param_3[0xf] = 1.0;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x18);
    if (fVar4 <= 0.001) {
      fVar4 = 0.001;
    }
    fVar5 = _guard_xfg_dispatch_icall_nop(fVar4 * 0.008726646);
    fVar4 = *(float *)(param_1 + 0x30);
    *param_2 = 1.0 / fVar5;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = (1.0 / fVar5) * fVar4;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    param_2[10] = 0.0;
    param_2[0xb] = 1.0;
    param_2[0xc] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xe] = fVar3;
    param_2[0xf] = 0.0;
    fVar4 = *(float *)(param_1 + 0x1c);
    if (fVar4 <= 0.001) {
      fVar4 = 0.001;
    }
    fVar5 = _guard_xfg_dispatch_icall_nop(fVar4 * 0.008726646);
    fVar4 = *(float *)(param_1 + 0x30);
    *param_3 = 1.0 / fVar5;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    param_3[4] = 0.0;
    param_3[5] = (1.0 / fVar5) * fVar4;
    param_3[6] = 0.0;
    param_3[7] = 0.0;
    param_3[8] = 0.0;
    param_3[9] = 0.0;
    param_3[10] = 0.0;
    param_3[0xb] = 1.0;
    param_3[0xc] = 0.0;
    param_3[0xd] = 0.0;
    param_3[0xe] = fVar3;
    param_3[0xf] = 0.0;
  }
  fVar3 = *(float *)(param_1 + 0x640);
  if ((fVar3 != 0.0) || (*(float *)(param_1 + 0x644) != 0.0)) {
    fVar3 = -0.5 - ((fVar3 + fVar3) - 1.0) * 0.5;
    fVar4 = -0.5 - ((*(float *)(param_1 + 0x644) + *(float *)(param_1 + 0x644)) - 1.0) * 0.5;
    param_2[8] = fVar3;
    param_3[8] = fVar3;
    param_2[9] = fVar4;
    param_3[9] = fVar4;
  }
  return param_2;
}



// FUNCTION 142306cd0 FUN_142306cd0 body=1522 status=ok
// SIG undefined FUN_142306cd0(void)

void FUN_142306cd0(longlong param_1,char *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_c8 [16];
  float local_b8 [6];
  undefined8 uStack_a0;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  uVar2 = DAT_1464aaa4c;
  if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
    fVar10 = *(float *)(param_1 + 0x18);
    if (fVar10 <= 0.001) {
      fVar10 = 0.001;
    }
    iVar4 = *(int *)(param_4 + 0x128) - *(int *)(param_4 + 0x120);
    fVar12 = *(float *)(param_1 + 0x1c);
    if (fVar12 <= 0.001) {
      fVar12 = 0.001;
    }
    iVar7 = *(int *)(param_4 + 300) - *(int *)(param_4 + 0x124);
    fVar16 = *(float *)(param_4 + 0xd0);
    if (fVar16 <= 0.001) {
      fVar16 = 0.001;
    }
    if ((((iVar7 < iVar4) && (*param_2 == '\x02')) || (*param_2 == '\x01')) ||
       (cVar8 = *(char *)(param_1 + 0x38), cVar8 == '\x01')) {
      cVar8 = *(char *)(param_1 + 0x38);
      fVar14 = 1.0;
      fVar11 = (float)iVar4 / (float)iVar7;
    }
    else {
      fVar11 = 1.0;
      fVar14 = (float)iVar7 / (float)iVar4;
    }
    if (cVar8 == '\x01') {
      fVar12 = *(float *)(param_1 + 0x24) * 0.5;
      fVar16 = 1.0;
      fVar10 = *(float *)(param_1 + 0x28);
      fVar11 = fVar12 / fVar11;
      fVar12 = fVar12 * fVar14;
      fVar14 = 1.0 / (*(float *)(param_1 + 0x2c) - fVar10);
      if (fVar11 != 0.0) {
        fVar16 = 1.0 / fVar11;
      }
      fVar9 = 1.0;
      if (fVar12 != 0.0) {
        fVar9 = 1.0 / fVar12;
      }
      fVar15 = 1.0;
      fVar13 = -fVar14;
      *(float *)(param_4 + 0x50) = fVar9;
      *(undefined4 *)(param_4 + 0x54) = 0;
      *(undefined4 *)(param_4 + 0x58) = 0;
      *(undefined4 *)(param_4 + 0x5c) = 0;
      fVar10 = fVar14 * fVar10 + 1.0;
      *(undefined4 *)(param_4 + 0x60) = 0;
      *(float *)(param_4 + 100) = fVar16;
      *(undefined4 *)(param_4 + 0x68) = 0;
      *(undefined4 *)(param_4 + 0x6c) = 0;
      *(undefined4 *)(param_4 + 0x70) = 0;
      *(undefined4 *)(param_4 + 0x74) = 0;
      *(float *)(param_4 + 0x78) = fVar13;
      *(undefined4 *)(param_4 + 0x7c) = 0;
      *(undefined4 *)(param_4 + 0x80) = 0;
      *(undefined4 *)(param_4 + 0x84) = 0;
      *(float *)(param_4 + 0x88) = fVar10;
      *(undefined4 *)(param_4 + 0x8c) = 0x3f800000;
      if (fVar11 != 0.0) {
        fVar15 = 1.0 / fVar11;
      }
      fVar14 = 1.0;
      if (fVar12 != 0.0) {
        fVar14 = 1.0 / fVar12;
      }
      *(float *)(param_4 + 0xe0) = fVar9;
      *(undefined4 *)(param_4 + 0xe4) = 0;
      *(undefined4 *)(param_4 + 0xe8) = 0;
      *(undefined4 *)(param_4 + 0xec) = 0;
      *(undefined4 *)(param_4 + 0xf0) = 0;
      *(float *)(param_4 + 0xf4) = fVar16;
      *(undefined4 *)(param_4 + 0xf8) = 0;
      *(undefined4 *)(param_4 + 0xfc) = 0;
      *(float *)(param_4 + 0x90) = fVar14;
      *(undefined4 *)(param_4 + 0x94) = 0;
      *(undefined4 *)(param_4 + 0x98) = 0;
      *(undefined4 *)(param_4 + 0x9c) = 0;
      *(undefined4 *)(param_4 + 0xa0) = 0;
      *(float *)(param_4 + 0xa4) = fVar15;
      *(undefined4 *)(param_4 + 0xa8) = 0;
      *(undefined4 *)(param_4 + 0xac) = 0;
      *(undefined4 *)(param_4 + 0xb0) = 0;
      *(undefined4 *)(param_4 + 0xb4) = 0;
      *(float *)(param_4 + 0xb8) = fVar13;
      *(undefined4 *)(param_4 + 0xbc) = 0;
      *(undefined4 *)(param_4 + 0x100) = 0;
      *(undefined4 *)(param_4 + 0x104) = 0;
      *(float *)(param_4 + 0x108) = fVar13;
      *(undefined4 *)(param_4 + 0x10c) = 0;
      *(undefined4 *)(param_4 + 0xc0) = 0;
      *(undefined4 *)(param_4 + 0xc4) = 0;
      *(float *)(param_4 + 200) = fVar10;
      *(undefined4 *)(param_4 + 0xcc) = 0x3f800000;
      *(undefined4 *)(param_4 + 0x110) = 0;
      *(undefined4 *)(param_4 + 0x114) = 0;
      *(float *)(param_4 + 0x118) = fVar10;
      *(undefined4 *)(param_4 + 0x11c) = 0x3f800000;
    }
    else {
      fVar10 = _guard_xfg_dispatch_icall_nop(fVar10 * 0.008726646);
      uStack_88 = 0;
      uStack_84 = 0;
      local_b8[0] = (1.0 / fVar10) * fVar14;
      local_b8[5] = (1.0 / fVar10) * fVar11;
      local_b8[1] = 0.0;
      local_b8[2] = 0.0;
      *(float *)(param_4 + 0x50) = local_b8[0];
      *(undefined4 *)(param_4 + 0x54) = 0;
      *(undefined4 *)(param_4 + 0x58) = 0;
      *(undefined4 *)(param_4 + 0x5c) = 0;
      *(undefined4 *)(param_4 + 0x60) = 0;
      *(float *)(param_4 + 100) = local_b8[5];
      *(undefined4 *)(param_4 + 0x68) = 0;
      *(undefined4 *)(param_4 + 0x6c) = 0;
      local_b8[3] = 0.0;
      local_b8[4] = 0.0;
      uStack_a0 = 0;
      *(undefined8 *)(param_4 + 0x70) = 0;
      *(undefined8 *)(param_4 + 0x78) = 0x3f80000000000000;
      *(undefined4 *)(param_4 + 0x80) = 0;
      *(undefined4 *)(param_4 + 0x84) = 0;
      *(undefined4 *)(param_4 + 0x88) = uVar2;
      *(undefined4 *)(param_4 + 0x8c) = 0;
      uVar3 = DAT_1464aaa4c;
      uStack_80 = uVar2;
      uStack_7c = 0;
      fVar10 = _guard_xfg_dispatch_icall_nop(fVar12 * 0.008726646);
      uStack_88 = 0;
      uStack_84 = 0;
      local_b8[0] = (1.0 / fVar10) * fVar14;
      local_b8[5] = (1.0 / fVar10) * fVar11;
      local_b8[1] = 0.0;
      local_b8[2] = 0.0;
      *(float *)(param_4 + 0x90) = local_b8[0];
      *(undefined4 *)(param_4 + 0x94) = 0;
      *(undefined4 *)(param_4 + 0x98) = 0;
      *(undefined4 *)(param_4 + 0x9c) = 0;
      *(undefined4 *)(param_4 + 0xa0) = 0;
      *(float *)(param_4 + 0xa4) = local_b8[5];
      *(undefined4 *)(param_4 + 0xa8) = 0;
      *(undefined4 *)(param_4 + 0xac) = 0;
      local_b8[3] = 0.0;
      local_b8[4] = 0.0;
      uStack_a0 = 0;
      *(undefined8 *)(param_4 + 0xb0) = 0;
      *(undefined8 *)(param_4 + 0xb8) = 0x3f80000000000000;
      *(undefined4 *)(param_4 + 0xc0) = 0;
      *(undefined4 *)(param_4 + 0xc4) = 0;
      *(undefined4 *)(param_4 + 200) = uVar3;
      *(undefined4 *)(param_4 + 0xcc) = 0;
      uVar2 = DAT_1464aaa4c;
      uStack_80 = uVar3;
      uStack_7c = 0;
      fVar10 = _guard_xfg_dispatch_icall_nop(fVar16 * 0.008726646);
      *(float *)(param_4 + 0xe0) = (1.0 / fVar10) * fVar14;
      *(undefined4 *)(param_4 + 0xe4) = 0;
      *(undefined4 *)(param_4 + 0xe8) = 0;
      *(undefined4 *)(param_4 + 0xec) = 0;
      *(undefined4 *)(param_4 + 0xf0) = 0;
      *(float *)(param_4 + 0xf4) = (1.0 / fVar10) * fVar11;
      *(undefined4 *)(param_4 + 0xf8) = 0;
      *(undefined4 *)(param_4 + 0xfc) = 0;
      *(undefined8 *)(param_4 + 0x100) = 0;
      *(undefined8 *)(param_4 + 0x108) = 0x3f80000000000000;
      *(undefined4 *)(param_4 + 0x110) = 0;
      *(undefined4 *)(param_4 + 0x114) = 0;
      *(undefined4 *)(param_4 + 0x118) = uVar2;
      *(undefined4 *)(param_4 + 0x11c) = 0;
    }
  }
  else {
    puVar5 = (undefined4 *)FUN_1428675d0(param_3,local_c8,*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_4 + 0x130) = *puVar5;
    *(undefined4 *)(param_4 + 0x134) = puVar5[1];
    *(undefined4 *)(param_4 + 0x138) = puVar5[2];
    *(undefined4 *)(param_4 + 0x13c) = puVar5[3];
    puVar6 = (undefined8 *)FUN_142306910(param_1,local_b8,param_4 + 0x90);
    uVar1 = puVar6[1];
    *(undefined8 *)(param_4 + 0x50) = *puVar6;
    *(undefined8 *)(param_4 + 0x58) = uVar1;
    uVar1 = puVar6[3];
    *(undefined8 *)(param_4 + 0x60) = puVar6[2];
    *(undefined8 *)(param_4 + 0x68) = uVar1;
    uVar1 = puVar6[5];
    *(undefined8 *)(param_4 + 0x70) = puVar6[4];
    *(undefined8 *)(param_4 + 0x78) = uVar1;
    uVar1 = puVar6[7];
    *(undefined8 *)(param_4 + 0x80) = puVar6[6];
    *(undefined8 *)(param_4 + 0x88) = uVar1;
    uVar1 = puVar6[1];
    *(undefined8 *)(param_4 + 0xe0) = *puVar6;
    *(undefined8 *)(param_4 + 0xe8) = uVar1;
    uVar1 = puVar6[3];
    *(undefined8 *)(param_4 + 0xf0) = puVar6[2];
    *(undefined8 *)(param_4 + 0xf8) = uVar1;
    uVar1 = puVar6[5];
    *(undefined8 *)(param_4 + 0x100) = puVar6[4];
    *(undefined8 *)(param_4 + 0x108) = uVar1;
    uVar1 = puVar6[7];
    *(undefined8 *)(param_4 + 0x110) = puVar6[6];
    *(undefined8 *)(param_4 + 0x118) = uVar1;
  }
  fVar10 = *(float *)(param_1 + 0x640);
  if ((fVar10 != 0.0) || (*(float *)(param_1 + 0x644) != 0.0)) {
    fVar10 = -0.5 - ((fVar10 + fVar10) - 1.0) * 0.5;
    fVar12 = -0.5 - ((*(float *)(param_1 + 0x644) + *(float *)(param_1 + 0x644)) - 1.0) * 0.5;
    *(float *)(param_4 + 0x70) = fVar10;
    *(float *)(param_4 + 0xb0) = fVar10;
    *(float *)(param_4 + 0x74) = fVar12;
    *(float *)(param_4 + 0xb4) = fVar12;
  }
  return;
}



// FUNCTION 1423072f0 FUN_1423072f0 body=85 status=ok
// SIG undefined FUN_1423072f0(void)

undefined8 FUN_1423072f0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (((((*(byte *)(param_1 + 0x56c) & 1) == 0) && (*(longlong *)(param_1 + 0x4c8) != 0)) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x4c8) + 0x1c0) & 1) != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x168), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x400))(plVar1,0);
    if (cVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142307350 thunk_FUN_142912390 body=5 status=ok
// SIG undefined thunk_FUN_142912390(void)

bool thunk_FUN_142912390(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char acStackX_8 [8];
  
  lVar1 = *param_1;
  acStackX_8[0] = '\0';
  uVar2 = FUN_14178ac60(param_1,DAT_146b1c330);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,acStackX_8);
  return acStackX_8[0] != '\0';
}



// FUNCTION 142307360 FUN_142307360 body=334 status=ok
// SIG undefined FUN_142307360(void)

ulonglong FUN_142307360(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x56c);
  plVar3 = (longlong *)param_1[0x99];
  if ((((plVar3 == (longlong *)0x0) || ((*(uint *)(plVar3 + 0x38) >> 1 & 1) == 0)) ||
      ((*(byte *)(plVar3 + 0x40) & 2) == 0)) || ((*(uint *)((longlong)plVar3 + 0x4b4) & 0x800) != 0)
     ) {
LAB_1423073c9:
    bVar5 = 0;
  }
  else {
    cVar4 = (**(code **)(*plVar3 + 0x560))();
    if (cVar4 == '\0') {
      cVar4 = (**(code **)(*(longlong *)param_1[0x99] + 0x558))();
      if (cVar4 == '\0') goto LAB_1423073c9;
    }
    bVar5 = 1;
  }
  if ((~bVar1 & bVar5) == 0) {
    return 0;
  }
  if ((*(uint *)((longlong)param_1 + 0x56c) & 0x400) != 0) {
    uVar7 = (**(code **)(*param_1 + 0x920))(param_1);
    if (0.0 < extraout_XMM0_Da) {
      if ((*(byte *)((longlong)param_1 + 0x56c) & 4) != 0) {
        uVar7 = (**(code **)(*param_1 + 0x920))(param_1);
        if (*(float *)(param_1 + 0xae) <= extraout_XMM0_Da_00 &&
            extraout_XMM0_Da_00 != *(float *)(param_1 + 0xae)) {
          uVar2 = *(uint *)((longlong)param_1 + 0x584);
          uVar7 = (ulonglong)uVar2;
          if (((int)uVar2 < (int)*(uint *)(param_1 + 0xb0)) ||
             (((*(uint *)((longlong)param_1 + 0x56c) & 0x400) != 0 &&
              (uVar2 == *(uint *)(param_1 + 0xb0))))) {
            return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
          }
        }
      }
      return uVar7 & 0xffffffffffffff00;
    }
  }
  if (*(int *)((longlong)param_1 + 0x584) == 0) {
    cVar4 = (**(code **)(*(longlong *)param_1[0x99] + 0x558))();
    if (cVar4 != '\0') {
      iVar6 = *(int *)((longlong)param_1 + 0x584) + 1;
      return (ulonglong)CONCAT31((int3)((uint)iVar6 >> 8),iVar6 < (int)param_1[0xb0]);
    }
  }
  return (ulonglong)
         CONCAT31((int3)((uint)(int)param_1[0xb0] >> 8),
                  *(int *)((longlong)param_1 + 0x584) < (int)param_1[0xb0]);
}



// FUNCTION 1423074b0 FUN_1423074b0 body=526 status=ok
// SIG undefined FUN_1423074b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423074b0(longlong param_1,float param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  float local_44;
  undefined1 local_40 [24];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar8 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar8 = 0;
  }
  plVar2 = *(longlong **)(lVar8 + 0x488);
  if (plVar2 != (longlong *)0x0) {
    lVar8 = APostProcessVolume::GetPrivateStaticClass();
    plVar3 = (longlong *)plVar2[2];
    if (((int)plVar3[0x12] < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(plVar3[0x11] + (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar8 = plVar3[0x1f];
      if (lVar8 == 0) {
        (**(code **)(*plVar3 + 0x368))(plVar3);
        lVar8 = plVar3[0x1f];
      }
      uVar6 = FUN_14234feb0(plVar2[0x9a],param_2 * *(float *)(*(longlong *)(lVar8 + 0x4d0) + 0x714),
                            param_2 * *(float *)(*(longlong *)(lVar8 + 0x4d0) + 0x710),1);
      plVar3 = (longlong *)plVar2[0x98];
      if (plVar3 != (longlong *)0x0) {
        local_68 = CONCAT44(param_2,param_2);
        local_60 = param_2;
        local_44 = param_2;
        uVar6 = (**(code **)(*plVar3 + 0x3f8))(plVar3,&local_68);
      }
      lVar8 = plVar2[0x2d];
      if (lVar8 == 0) {
        uVar6 = (undefined4)DAT_1468b5da0;
        uVar11 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_50 = DAT_1468b5da8;
      }
      else {
        local_28 = *(float *)(lVar8 + 0x210);
        fStack_24 = *(float *)(lVar8 + 0x214);
        fStack_20 = *(float *)(lVar8 + 0x218);
        fStack_1c = *(float *)(lVar8 + 0x21c);
        auVar4._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != fStack_24);
        auVar4._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != local_28);
        auVar4._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_20);
        auVar4._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_1c);
        iVar7 = movmskps(uVar6,auVar4);
        lVar10 = lVar8;
        if (iVar7 != 0) {
          *(float *)(lVar8 + 0x250) = local_28;
          *(float *)(lVar8 + 0x254) = fStack_24;
          *(float *)(lVar8 + 600) = fStack_20;
          *(float *)(lVar8 + 0x25c) = fStack_1c;
          puVar9 = (undefined8 *)FQuat::Rotator(&local_28,local_40);
          *(undefined8 *)(lVar8 + 0x260) = *puVar9;
          *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar9 + 1);
          lVar10 = plVar2[0x2d];
        }
        uVar6 = (undefined4)*(undefined8 *)(lVar8 + 0x260);
        uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x260) >> 0x20);
        puVar1 = (undefined4 *)(lVar8 + 0x268);
        lVar8 = lVar10;
        local_50 = *puVar1;
      }
      local_58 = CONCAT44(uVar11,uVar6);
      if (lVar8 == 0) {
        local_68 = _DAT_1468b5d90;
        local_60 = (float)DAT_1468b5d98;
      }
      else {
        local_68 = *(undefined8 *)(lVar8 + 0x220);
        local_60 = *(float *)(lVar8 + 0x228);
      }
      local_44 = local_60;
      local_4c = local_68;
      (**(code **)(*plVar2 + 0x500))(plVar2,&local_4c,&local_58,0,0);
    }
  }
  return;
}



// FUNCTION 1423076c0 FUN_1423076c0 body=905 status=ok
// SIG undefined FUN_1423076c0(void)

void FUN_1423076c0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  short *psVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong *plVar15;
  undefined2 *local_a8;
  ulonglong local_a0;
  uint local_98;
  uint uStack_94;
  uint *puStack_90;
  undefined4 local_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_50 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  plVar5 = (longlong *)0x0;
  plVar15 = plVar5;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    plVar15 = *(longlong **)(param_1 + 0x20);
  }
  plVar9 = plVar5;
  if ((plVar15 != (longlong *)0x0) && (lVar4 = plVar15[0xa1], lVar4 != 0)) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar4 + 0x70) != 0)) {
      plVar9 = *(longlong **)(*(longlong *)(lVar4 + 0x70) + 0x50);
    }
  }
  if ((int)param_2[1] == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*param_2;
  }
  FString::PrintfImpl(&local_a8,L"CheatScript.%s",puVar12);
  puVar12 = &DAT_143f3eda8;
  if ((int)local_a0 != 0) {
    puVar12 = local_a8;
  }
  lVar4 = FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,puVar12,0,1,&DAT_1468e2410);
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    puStack_90 = (uint *)(lVar4 + 0x10);
    uVar8 = *(uint *)(lVar4 + 0x28);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    plVar13 = plVar5;
    if (uVar8 != 0) {
      plVar13 = (longlong *)(ulonglong)uVar8;
      puVar14 = *(uint **)(lVar4 + 0x20);
      if (*(uint **)(lVar4 + 0x20) == (uint *)0x0) {
        puVar14 = puStack_90;
      }
      uVar7 = *puVar14;
      plVar11 = plVar5;
      while (uVar7 == 0) {
        iVar2 = (int)plVar5;
        uStack_80 = (int)plVar11 + 0x20;
        plVar11 = (longlong *)(ulonglong)uStack_80;
        local_98 = iVar2 + 1;
        plVar5 = (longlong *)(ulonglong)local_98;
        uStack_84 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar2)
        goto LAB_142307887;
        uVar7 = puVar14[(longlong)iVar2 + 1];
      }
      uStack_94 = -uVar7 & uVar7;
      iVar2 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar2 = 0x20;
      }
      else {
        iVar2 = 0x1f - iVar2;
      }
      uStack_84 = (uStack_80 - iVar2) + 0x1f;
      if ((int)uVar8 < (int)uStack_84) {
        uStack_84 = uVar8;
      }
      plVar13 = (longlong *)(ulonglong)uStack_84;
    }
LAB_142307887:
    local_88 = 0xffffffff;
    uStack_38 = CONCAT44(uStack_94,local_98);
    uStack_60 = CONCAT44(uStack_84,0xffffffff);
    local_58 = CONCAT44(uStack_7c,uStack_80);
    local_40._0_4_ = (undefined4)lVar4;
    local_40._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_78 = (undefined4)local_40;
    uStack_74 = local_40._4_4_;
    uStack_70 = local_98;
    uStack_6c = uStack_94;
    uVar7 = uStack_84;
    local_68 = puStack_90;
    local_40 = lVar4;
    puStack_30 = puStack_90;
    uStack_28 = uStack_60;
    uStack_20 = local_58;
    if ((int)plVar13 < (int)uVar8) {
      do {
        plVar5 = (longlong *)CONCAT44(uStack_74,local_78);
        if (plVar9 != (longlong *)0x0) {
          lVar4 = (longlong)(int)uVar7 * 0x30 + *plVar5;
          puVar6 = (undefined8 *)(lVar4 + 0x18);
          if ((*(int *)(lVar4 + 0x20) == 0) || (*(int *)(lVar4 + 0x20) + -1 < 1)) {
            puVar6 = (undefined8 *)(lVar4 + 8);
          }
          if (*(int *)(puVar6 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar6;
          }
          FString::PrintfImpl(local_50,L"> %s",puVar12);
          (**(code **)(*plVar9 + 0x298))(plVar9,local_50);
          if (local_50[0] != 0) {
            FMemory::Free();
          }
        }
        lVar4 = (longlong)(int)uVar7 * 0x30 + *plVar5;
        puVar6 = (undefined8 *)(lVar4 + 0x18);
        if ((*(int *)(lVar4 + 0x20) == 0) || (*(int *)(lVar4 + 0x20) + -1 < 1)) {
          puVar6 = (undefined8 *)(lVar4 + 8);
        }
        if (*(int *)(puVar6 + 1) == 0) {
          psVar10 = &DAT_143f3eda8;
        }
        else {
          psVar10 = (short *)*puVar6;
        }
        local_a0 = 0;
        local_a8 = (undefined2 *)0x0;
        if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
          lVar4 = -1;
          do {
            lVar4 = lVar4 + 1;
          } while (psVar10[lVar4] != 0);
          uVar8 = (int)lVar4 + 1;
          local_a0 = (ulonglong)uVar8;
          if (0 < (int)uVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
          }
          FGenericPlatformString::Memcpy(local_a8,psVar10,(longlong)(int)uVar8 * 2);
        }
        (**(code **)(*plVar15 + 0xd28))(plVar15,&local_98,&local_a8,1);
        if (CONCAT44(uStack_94,local_98) != 0) {
          FMemory::Free();
        }
        if (local_a8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
        uVar7 = uStack_60._4_4_;
      } while ((int)uStack_60._4_4_ < (int)local_68[6]);
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142307a50 FUN_142307a50 body=293 status=ok
// SIG undefined FUN_142307a50(void)

void FUN_142307a50(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if ((longlong *)param_1[0x99] == (longlong *)0x0) {
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x56c) & 4) != 0) {
    if ((*(int *)((longlong)param_1 + 0x584) == 0) &&
       (cVar1 = (**(code **)(*(longlong *)param_1[0x99] + 0x558))(), cVar1 != '\0')) {
      *(int *)((longlong)param_1 + 0x584) = *(int *)((longlong)param_1 + 0x584) + 1;
    }
    cVar1 = FUN_142912390(param_1);
    if ((cVar1 == '\0') ||
       (cVar1 = (**(code **)(*(longlong *)param_1[0x99] + 0x618))
                          ((longlong *)param_1[0x99],
                           *(uint *)((longlong)param_1 + 0x56c) >> 3 & 0xffffff01), cVar1 == '\0'))
    {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
      if ((*(uint *)((longlong)param_1 + 0x56c) & 0x400) == 0) {
        *(int *)((longlong)param_1 + 0x584) = *(int *)((longlong)param_1 + 0x584) + 1;
        uVar5 = (**(code **)(*param_1 + 0x920))(param_1);
        local_28 = 0;
        *(undefined4 *)((longlong)param_1 + 0x574) = uVar5;
        local_18 = 0;
        puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[1] = param_1;
          *puVar2 = &PTR_FUN_143f77b70;
        }
        local_58[0] = &LAB_1423072d0;
        uVar3 = FUN_14247f500();
        FUN_14247d5a0(uVar3,param_1[0x99],local_58);
      }
    }
    *(uint *)((longlong)param_1 + 0x56c) = *(uint *)((longlong)param_1 + 0x56c) & 0xfffffbff;
    *(uint *)((longlong)param_1 + 0x56c) = *(uint *)((longlong)param_1 + 0x56c) | iVar4 << 10;
    return;
  }
  return;
}



// FUNCTION 142307b80 FUN_142307b80 body=94 status=ok
// SIG undefined FUN_142307b80(void)

void FUN_142307b80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[0x9b] != 0) {
    lVar1 = UObjectBaseUtility::GetOutermost();
    lVar2 = UObjectBaseUtility::GetOutermost(param_1);
    if (lVar2 != lVar1) {
      (**(code **)(*param_1 + 0x838))(param_1,0,0,1);
    }
  }
  FUN_142225c90(param_1);
  return;
}



// FUNCTION 142307be0 FUN_142307be0 body=92 status=ok
// SIG undefined FUN_142307be0(void)

void FUN_142307be0(longlong *param_1,float param_2)

{
  float fVar1;
  
  if ((*(uint *)((longlong)param_1 + 0x56c) & 4) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x574) = 0;
    *(uint *)((longlong)param_1 + 0x56c) = *(uint *)((longlong)param_1 + 0x56c) & 0xfffffbff;
  }
  else {
    *(float *)(param_1 + 0xae) = param_2 + *(float *)(param_1 + 0xae);
    fVar1 = (float)(**(code **)(*param_1 + 0x920))();
    if (fVar1 < *(float *)(param_1 + 0xae) || fVar1 == *(float *)(param_1 + 0xae)) {
      *(uint *)((longlong)param_1 + 0x56c) = *(uint *)((longlong)param_1 + 0x56c) & 0xfffffffb;
      return;
    }
  }
  return;
}



// FUNCTION 142307c40 FUN_142307c40 body=17 status=ok
// SIG undefined FUN_142307c40(void)

void FUN_142307c40(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142307c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0xa08))();
  return;
}



// FUNCTION 142307c60 FUN_142307c60 body=130 status=ok
// SIG undefined FUN_142307c60(void)

void FUN_142307c60(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_20 = *(undefined4 *)(param_4 + 1);
  local_28 = *param_4;
  local_10 = *(undefined4 *)(param_3 + 1);
  lVar1 = **(longlong **)(param_1 + 0x4c8);
  local_18 = *param_3;
  (**(code **)(lVar1 + 0xa18))
            (*(longlong **)(param_1 + 0x4c8),lVar1,&local_18,&local_28,param_5,param_6,param_7,
             param_8,param_9);
  return;
}



// FUNCTION 142307cf0 FUN_142307cf0 body=161 status=ok
// SIG undefined FUN_142307cf0(void)

void FUN_142307cf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined1 param_10,undefined1 param_11)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = *param_5;
  local_20 = *(undefined4 *)(param_5 + 1);
  lVar1 = **(longlong **)(param_1 + 0x4c8);
  local_10 = *(undefined4 *)(param_4 + 1);
  local_18 = *param_4;
  (**(code **)(lVar1 + 0xa38))
            (*(longlong **)(param_1 + 0x4c8),lVar1,param_3,&local_18,&local_28,param_6,param_7,
             param_8,param_9,param_10,param_11);
  return;
}



// FUNCTION 142307da0 FUN_142307da0 body=630 status=ok
// SIG undefined FUN_142307da0(void)

void FUN_142307da0(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
                  undefined1 param_13)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined **local_158;
  undefined8 local_150 [16];
  undefined8 *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0 [8];
  undefined8 *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  
  plVar1 = *(longlong **)(param_1 + 0x4c8);
  local_178 = *param_7;
  local_170 = *(undefined4 *)(param_7 + 1);
  iVar5 = *(int *)(param_3 + 0x12);
  puVar3 = (undefined8 *)param_3[0x11];
  local_160 = *(undefined4 *)(param_6 + 1);
  local_168 = *param_6;
  local_158 = &PTR__scalar_deleting_destructor__144080980;
  local_d0 = (undefined8 *)0x0;
  local_c8 = iVar5;
  if (iVar5 == 0) {
    local_c4 = 0;
  }
  else {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeForCopy(local_150,iVar5);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = param_3 + 1;
    }
    puVar4 = local_150;
    if (local_d0 != (undefined8 *)0x0) {
      puVar4 = local_d0;
    }
    do {
      *puVar4 = *puVar3;
      lVar2 = puVar3[1];
      puVar4[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 2;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(param_3 + 0x1c);
  puVar3 = (undefined8 *)param_3[0x1b];
  local_80 = (undefined8 *)0x0;
  local_78 = iVar5;
  if (iVar5 == 0) {
    local_74 = 0;
  }
  else {
    TArray<TScriptDelegate<FWeakObjectPtr>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
              (local_c0,iVar5);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = param_3 + 0x13;
    }
    puVar4 = local_c0;
    if (local_80 != (undefined8 *)0x0) {
      puVar4 = local_80;
    }
    do {
      *puVar4 = *puVar3;
      lVar2 = puVar3[1];
      puVar4[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 2;
    } while (iVar5 != 0);
  }
  local_70 = *(undefined1 *)(param_3 + 0x1d);
  local_6c = *(undefined8 *)((longlong)param_3 + 0xec);
  local_6f = *(undefined1 *)((longlong)param_3 + 0xe9);
  local_64 = *(undefined4 *)((longlong)param_3 + 0xf4);
  local_60 = *(undefined1 *)(param_3 + 0x1f);
  local_5f = *(undefined1 *)((longlong)param_3 + 0xf9);
  (**(code **)(*plVar1 + 0xa48))
            (plVar1,param_2,&local_158,param_4,param_5,&local_168,&local_178,param_8,param_9,
             param_10,param_11,param_12,param_13);
  *param_3 = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_3 + 0x13);
  FUN_14074e810(param_3 + 1);
  return;
}



// FUNCTION 142308020 FUN_142308020 body=98 status=ok
// SIG undefined FUN_142308020(void)

void FUN_142308020(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  lVar1 = **(longlong **)(param_1 + 0x4c8);
  (**(code **)(lVar1 + 0xa28))
            (*(longlong **)(param_1 + 0x4c8),lVar1,&local_18,param_4,param_5,param_6,param_7,param_8
            );
  return;
}



// FUNCTION 142308090 FUN_142308090 body=888 status=ok
// SIG undefined FUN_142308090(void)

BADSPACEBASE *
FUN_142308090(float param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,int *param_5,
             undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 *puVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_88 [4];
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float local_64;
  float local_60;
  
  uVar3 = param_6;
  piVar2 = param_5;
  iVar1 = *param_5;
  if (iVar1 == 0) {
    param_5._4_4_ = param_1 + (float)param_5[1];
    param_5._0_4_ = 0;
    register0x00000020 =
         (BADSPACEBASE *)FUN_142308410(param_1,param_2,param_3,param_4,&param_5,param_6);
  }
  else if (iVar1 == 2) {
    local_88[1] = param_1 + (float)param_5[1];
    local_88[0] = 2.8026e-45;
    local_88[2] = (float)param_5[2];
    register0x00000020 =
         (BADSPACEBASE *)FUN_142308410(param_1,param_2,param_3,param_4,local_88,param_6);
  }
  else if (iVar1 == 3) {
    local_88[2] = param_1 + (float)param_5[2];
    local_88[1] = param_1 + (float)param_5[1];
    local_88[0] = 4.2039e-45;
    local_88[3] = param_1 + (float)param_5[3];
    register0x00000020 =
         (BADSPACEBASE *)FUN_142308410(param_1,local_88[2],param_3,param_4,local_88,param_6);
  }
  else if (iVar1 == 4) {
    fVar9 = *(float *)(param_3 + 0x58) - *(float *)(param_3 + 0x4c);
    fVar10 = *(float *)(param_3 + 0x50) - *(float *)(param_3 + 0x44);
    fVar11 = *(float *)(param_3 + 0x54) - *(float *)(param_3 + 0x48);
    fVar7 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
    fVar8 = SQRT(fVar7);
    if (1e-20 <= fVar8) {
      fVar8 = 1.0 / fVar8;
      fVar10 = fVar10 * fVar8;
      fVar11 = fVar11 * fVar8;
      fVar9 = fVar9 * fVar8;
    }
    local_78 = *param_4;
    uStack_70 = param_4[1];
    local_68 = fVar10 * param_1 + *(float *)(param_4 + 2);
    local_64 = fVar11 * param_1 + *(float *)((longlong)param_4 + 0x14);
    local_60 = fVar9 * param_1 + *(float *)(param_4 + 3);
    cVar4 = FUN_142308410(param_1,local_64,fVar7,&local_78,param_5,param_6);
    if (cVar4 == '\0') {
      local_78 = *param_4;
      uStack_70 = param_4[1];
      local_64 = *(float *)((longlong)param_4 + 0x14) - fVar11 * param_1;
      local_68 = *(float *)(param_4 + 2) - fVar10 * param_1;
      local_60 = *(float *)(param_4 + 3) - fVar9 * param_1;
      cVar4 = FUN_142308410(param_1,param_2,param_3,&local_78,piVar2,uVar3);
      if (cVar4 == '\0') {
        lVar6 = 2;
        while( true ) {
          local_78 = *param_4;
          uStack_70 = param_4[1];
          local_88[0] = 0.0;
          local_88[1] = 0.0;
          local_64 = *(float *)((longlong)param_4 + 0x14);
          local_88[2] = 0.0;
          local_68 = *(float *)(param_4 + 2);
          local_88[lVar6] = param_1;
          fVar9 = local_88[2];
          fVar8 = local_88[0];
          local_68 = local_68 - local_88[0];
          fVar7 = local_88[1];
          local_64 = local_64 - local_88[1];
          local_60 = *(float *)(param_4 + 3) - local_88[2];
          cVar4 = FUN_142308410(param_1,param_2,param_3,&local_78,piVar2,uVar3);
          if (cVar4 != '\0') break;
          local_78 = *param_4;
          uStack_70 = param_4[1];
          local_68 = fVar8 + *(float *)(param_4 + 2);
          local_64 = fVar7 + *(float *)((longlong)param_4 + 0x14);
          local_60 = fVar9 + *(float *)(param_4 + 3);
          puVar5 = (undefined1 *)FUN_142308410(param_1,param_2,param_3,&local_78,piVar2,uVar3);
          if ((char)puVar5 != '\0') break;
          lVar6 = lVar6 + -1;
          if (lVar6 < 0) {
            return (BADSPACEBASE *)puVar5;
          }
        }
      }
    }
    register0x00000020 = (BADSPACEBASE *)0x1;
  }
  return register0x00000020;
}



// FUNCTION 142308410 FUN_142308410 body=346 status=ok
// SIG undefined FUN_142308410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142308410(float param_1,longlong param_2,longlong param_3,PxTransform *param_4,
                       PxGeometry *param_5,PxTransform *param_6)

{
  bool bVar1;
  uint uVar2;
  undefined7 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  ulonglong uVar3;
  undefined1 auStackY_c8 [32];
  undefined8 local_98;
  float local_90;
  float local_88 [4];
  PxGeometry local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStackY_c8;
  local_98 = 0;
  local_90 = 0.0;
  local_88[0] = 0.0;
  (**(code **)(**(longlong **)(param_2 + 8) + 0x40))(*(longlong **)(param_2 + 8),local_78);
  bVar1 = physx::PxGeometryQuery::computePenetration
                    ((PxVec3 *)&local_98,local_88,param_5,param_4,local_78,param_6);
  uVar3 = CONCAT71(extraout_var,bVar1);
  if (bVar1) {
    uVar2 = _fpclass((double)(float)local_98);
    uVar3 = CONCAT44(extraout_var_00,uVar2);
    if ((uVar2 & 0x207) == 0) {
      uVar2 = _fpclass((double)local_98._4_4_);
      uVar3 = CONCAT44(extraout_var_01,uVar2);
      if ((uVar2 & 0x207) == 0) {
        uVar2 = _fpclass((double)local_90);
        uVar3 = CONCAT44(extraout_var_02,uVar2);
        if ((uVar2 & 0x207) == 0) {
          param_1 = ABS(local_88[0]) - param_1;
          *(undefined8 *)(param_3 + 0x38) = local_98;
          *(float *)(param_3 + 0x40) = local_90;
          if (param_1 <= 0.0) {
            param_1 = 0.0;
          }
          *(float *)(param_3 + 0x5c) = param_1 + 0.0001;
          return CONCAT71((uint7)(uint3)((uint)local_90 >> 8),1);
        }
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142308570 FUN_142308570 body=172 status=ok
// SIG undefined FUN_142308570(void)

undefined8 FUN_142308570(longlong param_1,uint param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  
  uVar2 = param_2 >> 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar4 = 0x20;
  cVar5 = '\0';
  if (uVar2 != 0) {
    iVar4 = 0x1f - iVar1;
  }
  uVar2 = uVar2 - 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (uVar2 != 0) {
    cVar5 = '\x1f' - (char)iVar1;
  }
  uVar3 = 1 << (0x20U - cVar5 & ~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x1f);
  uVar2 = 0x20;
  if ((0x1f < uVar3) && (uVar2 = uVar3, param_2 < 4)) {
    uVar2 = 0x20;
  }
  if (0 < (int)param_2) {
    iVar1 = *(int *)(param_1 + 0x8b8);
    if (((iVar1 == 0) || (iVar1 < (int)uVar2)) || (((int)uVar2 < iVar1 && (param_3 != '\0')))) {
      *(uint *)(param_1 + 0x8b8) = uVar2;
      FUN_14231a050(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142308620 FUN_142308620 body=1157 status=ok
// SIG undefined FUN_142308620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_142308620(int param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  uint unaff_R14D;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_978 [32];
  uint local_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined8 local_940;
  uint local_938;
  int local_934;
  undefined8 local_930;
  undefined8 local_928;
  undefined4 local_920;
  undefined8 *local_918;
  uint *local_910;
  undefined1 local_908 [2048];
  undefined1 *local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_978;
  lVar9 = (longlong)param_1;
  iVar6 = param_1 + (int)param_4[1];
  local_930 = param_3;
  if (*(int *)((longlong)param_4 + 0xc) < iVar6) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_4,iVar6);
  }
  uVar12 = unaff_R14D & 0xffffff00;
  local_958 = uVar12;
  if (iVar6 < DAT_146531bb0) {
    if (0 < param_1) {
      do {
        uVar12 = local_958;
        local_950 = 0;
        local_948 = 0;
        local_940 = 0;
        FUN_142309940(param_2[1],*param_2,&local_950,local_930);
        uVar4 = (undefined1)uVar12;
        if ((local_940 & 0x100000000) != 0) {
          uVar4 = 1;
        }
        iVar6 = (int)param_4[1];
        local_958 = CONCAT31(local_958._1_3_,uVar4);
        uVar10 = 0;
        uVar13 = 0;
        if (0 < iVar6) {
          do {
            lVar3 = *param_4;
            if ((*(int *)(uVar10 + 0x10 + lVar3) == (int)local_940) &&
               (cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                  (lVar3 + 8 + uVar10,&local_948), cVar5 != '\0')) {
              if (((*(byte *)(uVar10 + 0x14 + lVar3) & 1) == 0) && ((local_940 & 0x100000000) != 0))
              {
                *(undefined4 *)(uVar10 + lVar3) = (undefined4)local_950;
                *(undefined4 *)(uVar10 + 4 + lVar3) = local_950._4_4_;
                *(undefined4 *)(uVar10 + 8 + lVar3) = (undefined4)local_948;
                *(undefined4 *)(uVar10 + 0xc + lVar3) = local_948._4_4_;
                *(int *)(uVar10 + 0x10 + lVar3) = (int)local_940;
                puVar2 = (uint *)(uVar10 + 0x14 + lVar3);
                *puVar2 = *puVar2 ^ (*(uint *)(uVar10 + 0x14 + lVar3) ^ local_940._4_4_) & 1;
              }
              goto LAB_142308a47;
            }
            iVar6 = (int)param_4[1];
            uVar12 = (int)uVar13 + 1;
            uVar10 = uVar10 + 0x18;
            uVar13 = (ulonglong)uVar12;
          } while ((int)uVar12 < iVar6);
        }
        *(int *)(param_4 + 1) = iVar6 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar6 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_4,iVar6);
        }
        puVar1 = (undefined4 *)(*param_4 + (longlong)iVar6 * 0x18);
        *puVar1 = (undefined4)local_950;
        puVar1[1] = local_950._4_4_;
        puVar1[2] = (undefined4)local_948;
        puVar1[3] = local_948._4_4_;
        puVar1[4] = (int)local_940;
        puVar1[5] = puVar1[5] ^ (puVar1[5] ^ local_940._4_4_) & 1;
LAB_142308a47:
        param_2 = param_2 + 4;
        lVar9 = lVar9 + -1;
        uVar12 = local_958;
      } while (lVar9 != 0);
    }
  }
  else {
    uVar10 = 0;
    local_e0 = 0xffffffff;
    local_108 = (undefined1 *)0x0;
    local_100 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_dc = 0;
    local_58 = 0;
    local_50 = 0;
    if (0 < iVar6) {
      FUN_14231af90(local_908,iVar6);
    }
    if (0 < (int)param_4[1]) {
      local_918 = &local_928;
      local_910 = &local_938;
      uVar13 = uVar10;
      do {
        lVar3 = *param_4;
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
        local_938 = uVar8;
        local_928 = FWeakObjectPtr::Get(lVar3 + 8 + uVar13);
        local_920 = *(undefined4 *)(lVar3 + 0x10 + uVar13);
        FUN_1422fc7d0(local_908,&local_934,&local_918,0);
        uVar13 = uVar13 + 0x18;
        uVar12 = local_958;
      } while ((int)uVar8 < (int)param_4[1]);
    }
    if (0 < lVar9) {
      do {
        local_950 = 0;
        local_948 = 0;
        local_940 = 0;
        FUN_142309940(param_2[1],*param_2,&local_950,local_930);
        uVar12 = uVar12 & 0xff;
        if ((local_940 & 0x100000000) != 0) {
          uVar12 = 1;
        }
        local_958 = uVar12;
        local_928 = FWeakObjectPtr::Get(&local_948);
        local_920 = (int)local_940;
        FUN_14230eab0(local_908,&local_938,&local_928);
        if (local_938 == 0xffffffff) {
LAB_142308802:
          local_918 = &local_928;
          FUN_1422fc5e0(local_908,&local_934,&local_918,0);
          puVar7 = local_908;
          if (local_108 != (undefined1 *)0x0) {
            puVar7 = local_108;
          }
          puVar7 = puVar7 + (longlong)local_934 * 0x20;
        }
        else {
          puVar7 = local_908;
          if (local_108 != (undefined1 *)0x0) {
            puVar7 = local_108;
          }
          puVar7 = puVar7 + (longlong)(int)local_938 * 0x20;
          if (puVar7 == (undefined1 *)0x0) goto LAB_142308802;
        }
        iVar6 = *(int *)(puVar7 + 0x10);
        if (iVar6 == 0) {
          iVar6 = (int)param_4[1];
          iVar11 = iVar6 + 1;
          *(int *)(param_4 + 1) = iVar11;
          if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_4,iVar6);
          }
          puVar1 = (undefined4 *)(*param_4 + (longlong)iVar6 * 0x18);
          *puVar1 = (undefined4)local_950;
          puVar1[1] = local_950._4_4_;
          puVar1[2] = (undefined4)local_948;
          puVar1[3] = local_948._4_4_;
          puVar1[4] = (int)local_940;
          puVar1[5] = puVar1[5] ^ (puVar1[5] ^ local_940._4_4_) & 1;
          *(int *)(puVar7 + 0x10) = iVar11;
          uVar12 = local_958;
        }
        else {
          lVar3 = *param_4 + (longlong)iVar6 * 0x18;
          if (((*(byte *)(*param_4 + -4 + (longlong)iVar6 * 0x18) & 1) == 0) &&
             ((local_940 & 0x100000000) != 0)) {
            *(undefined4 *)(lVar3 + -0x18) = (undefined4)local_950;
            *(undefined4 *)(lVar3 + -0x14) = local_950._4_4_;
            *(undefined4 *)(lVar3 + -0x10) = (undefined4)local_948;
            *(undefined4 *)(lVar3 + -0xc) = local_948._4_4_;
            *(int *)(lVar3 + -8) = (int)local_940;
            *(uint *)(lVar3 + -4) =
                 *(uint *)(lVar3 + -4) ^ (local_940._4_4_ ^ *(uint *)(lVar3 + -4)) & 1;
          }
        }
        param_2 = param_2 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FOverlapKey,int>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FOverlapKey,int>_>,TInlineSparseArrayAllocator<64,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
              (local_908);
  }
  return uVar12 & 0xff;
}



// FUNCTION 142308ab0 FUN_142308ab0 body=1636 status=ok
// SIG undefined FUN_142308ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142308ab0(undefined8 param_1,undefined8 *param_2,float *param_3,float *param_4,byte *param_5,
             PxTransform *param_6,longlong param_7,undefined8 param_8,undefined1 param_9)

{
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  PxTransform *pPVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auStack_1a8 [32];
  PxTransform *local_188;
  PxTransform *local_180;
  undefined4 local_178;
  char local_170;
  undefined8 local_168;
  float local_160;
  undefined1 local_158;
  int local_154;
  undefined8 local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  undefined8 local_128;
  PxTransform local_120 [32];
  undefined1 local_100 [16];
  undefined1 local_f0 [28];
  PxGeometry local_d4 [48];
  undefined1 local_a4 [52];
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_150 = *param_2;
  plVar2 = (longlong *)param_2[1];
  local_130 = *(undefined4 *)(param_2 + 2);
  local_168 = param_3;
  local_128 = param_1;
  (**(code **)(*plVar2 + 0xb0))(plVar2,local_100);
  local_154 = FUN_142306800(param_8,local_100,0);
  local_158 = local_154 == 2;
  *param_5 = *param_5 & 0xfe;
  *param_5 = *param_5 | local_158 | 2;
  param_5[0xc] = 0;
  param_5[0xd] = 0;
  param_5[0xe] = 0;
  param_5[0xf] = 0;
  param_5[0x10] = 0;
  param_5[0x11] = 0;
  param_5[0x12] = 0;
  param_5[0x13] = 0;
  uVar1 = *(undefined4 *)(param_7 + 0x18);
  *(undefined8 *)(param_5 + 0x14) = *(undefined8 *)(param_7 + 0x10);
  *(undefined4 *)(param_5 + 0x1c) = uVar1;
  local_140 = *(float *)((longlong)param_2 + 0x24);
  fVar10 = *(float *)(param_2 + 4);
  *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(float *)(param_5 + 0x28) = local_140;
  fVar9 = param_3[2];
  *(undefined8 *)(param_5 + 0x44) = *(undefined8 *)param_3;
  *(float *)(param_5 + 0x4c) = fVar9;
  fVar9 = param_4[2];
  *(undefined8 *)(param_5 + 0x50) = *(undefined8 *)param_4;
  *(float *)(param_5 + 0x58) = fVar9;
  uVar7 = _fpclass((double)*(float *)(param_2 + 5));
  if ((((uVar7 & 0x207) == 0) &&
      (uVar7 = _fpclass((double)*(float *)((longlong)param_2 + 0x2c)), (uVar7 & 0x207) == 0)) &&
     (uVar7 = _fpclass((double)*(float *)(param_2 + 6)), (uVar7 & 0x207) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar4 = local_150;
  if (((*(byte *)(param_2 + 3) & 2) == 0) || (!bVar3)) {
    *(undefined8 *)(param_5 + 0x38) = DAT_1464aa798;
    bVar3 = false;
    *(undefined4 *)(param_5 + 0x40) = DAT_1464aa7a0;
    param_5[0x5c] = 0;
    param_5[0x5d] = 0;
    param_5[0x5e] = 0;
    param_5[0x5f] = 0;
  }
  else {
    local_140 = *(float *)(param_2 + 6);
    fVar10 = *(float *)((longlong)param_2 + 0x2c);
    bVar3 = true;
    *(undefined8 *)(param_5 + 0x38) = param_2[5];
    *(float *)(param_5 + 0x40) = local_140;
    *(uint *)(param_5 + 0x5c) = *(uint *)((longlong)param_2 + 0x34) & 0x7fffffff;
  }
  if (local_154 == 2) {
    if ((*(float *)((longlong)param_2 + 0x34) == 0.0) || (!bVar3)) {
      physx::PxShapeExt::getGlobalPose(local_120,plVar2,local_150);
      local_180 = local_120;
      local_188 = param_6;
      cVar6 = FUN_142308090(0x3e800000,param_2,param_5,param_7);
      if (cVar6 == '\0') {
        local_180 = local_120;
        local_188 = param_6;
        cVar6 = FUN_142308090(0x3fe00000,param_2,param_5,param_7);
        uVar5 = local_128;
        if (cVar6 == '\0') {
          local_178 = 0;
          local_188 = local_120;
          local_180 = (PxTransform *)(param_5 + 0x38);
          local_170 = cVar6;
          cVar6 = FindOverlappedTriangleNormal(local_128,param_6,param_7,plVar2);
          if (cVar6 == '\0') {
            local_178 = 0x3e800000;
            local_188 = local_120;
            local_180 = (PxTransform *)(param_5 + 0x38);
            local_170 = cVar6;
            cVar6 = FindOverlappedTriangleNormal(uVar5,param_6,param_7,plVar2);
            if (cVar6 == '\0') {
              (**(code **)(*plVar2 + 0x40))(plVar2,local_d4);
              fVar9 = physx::PxGeometryQuery::pointDistance
                                ((PxVec3 *)(param_7 + 0x10),local_d4,local_120,(PxVec3 *)&local_168)
              ;
              if (0.0001 <= fVar9) {
              }
              else {
                pPVar8 = (PxTransform *)(**(code **)(*plVar2 + 0x40))(plVar2,local_a4);
                physx::PxShapeExt::getGlobalPose(local_f0,plVar2,uVar4);
                physx::PxGeometryQuery::getWorldBounds((PxGeometry *)&local_148,pPVar8,fVar10);
                local_168._0_4_ = (local_13c + local_148) * 0.5;
                local_168._4_4_ = (local_144 + local_138) * 0.5;
                local_160 = (local_140 + local_134) * 0.5;
              }
              local_168._0_4_ = *(float *)(param_5 + 0x14) - (float)local_168;
              local_168._4_4_ = *(float *)(param_5 + 0x18) - local_168._4_4_;
              local_160 = *(float *)(param_5 + 0x1c) - local_160;
              fVar10 = local_168._4_4_ * local_168._4_4_ + (float)local_168 * (float)local_168 +
                       local_160 * local_160;
              if (fVar10 == 1.0) {
              }
              else {
                if (1e-08 <= fVar10) {
                  auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
                  fVar9 = auVar12._0_4_;
                  fVar9 = fVar9 + fVar9 * (0.5 - fVar10 * 0.5 * fVar9 * fVar9);
                  fVar9 = fVar9 + fVar9 * (0.5 - fVar10 * 0.5 * fVar9 * fVar9);
                  local_168._0_4_ = fVar9 * (float)local_168;
                  local_160 = fVar9 * local_160;
                  fVar9 = fVar9 * local_168._4_4_;
                }
                else {
                  local_160 = DAT_1468b5d98;
                  fVar9 = DAT_1468b5d94;
                  local_168._0_4_ = DAT_1468b5d90;
                }
                local_168 = (float *)CONCAT44(fVar9,(float)local_168);
              }
              *(float **)(param_5 + 0x38) = local_168;
              *(float *)(param_5 + 0x40) = local_160;
            }
          }
        }
      }
    }
  }
  else if (!bVar3) {
    fVar10 = *local_168 - *param_4;
    fVar13 = local_168[1] - param_4[1];
    local_160 = local_168[2] - param_4[2];
    fVar9 = fVar13 * fVar13 + fVar10 * fVar10 + local_160 * local_160;
    if (fVar9 == 1.0) {
      local_168 = (float *)CONCAT44(fVar13,fVar10);
    }
    else {
      if (1e-08 <= fVar9) {
        auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar11 = auVar12._0_4_;
        fVar11 = fVar11 + fVar11 * (0.5 - fVar9 * 0.5 * fVar11 * fVar11);
        fVar11 = fVar11 + fVar11 * (0.5 - fVar9 * 0.5 * fVar11 * fVar11);
        fVar10 = fVar11 * fVar10;
        local_160 = fVar11 * local_160;
        fVar11 = fVar11 * fVar13;
      }
      else {
        local_160 = DAT_1468b5d98;
        fVar11 = DAT_1468b5d94;
        fVar10 = DAT_1468b5d90;
      }
      local_168 = (float *)CONCAT44(fVar11,fVar10);
    }
    *(float **)(param_5 + 0x38) = local_168;
    *(float *)(param_5 + 0x40) = local_160;
  }
  *(undefined8 *)(param_5 + 0x2c) = *(undefined8 *)(param_5 + 0x38);
  *(undefined4 *)(param_5 + 0x34) = *(undefined4 *)(param_5 + 0x40);
  local_188 = (PxTransform *)CONCAT71(local_188._1_7_,param_9);
  FUN_14231d1d0(plVar2,uVar4,local_130,param_5);
  return local_158;
}



// FUNCTION 142309120 FUN_142309120 body=2069 status=ok
// SIG undefined FUN_142309120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142309120(undefined8 param_1,undefined8 *param_2,byte *param_3,float param_4,undefined8 param_5,
             float *param_6,float *param_7,undefined4 *param_8,undefined8 param_9,char param_10,
             char param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1a8 [32];
  byte *local_188;
  undefined4 *local_180;
  undefined8 local_178;
  undefined8 local_170;
  char local_168;
  undefined8 local_158;
  float local_150;
  float local_148;
  float fStack_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  undefined1 local_128 [16];
  int local_118 [10];
  longlong *local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  bVar5 = *(float *)((longlong)param_2 + 0x34) <= 0.0;
  if ((bVar5) && (param_8 != (undefined4 *)0x0)) {
    local_168 = param_11;
    local_170 = param_5;
    local_178 = param_9;
    local_180 = param_8;
    local_188 = param_3;
    FUN_142308ab0(0,param_2,param_6,param_7);
  }
  else {
    (**(code **)(*(longlong *)param_2[1] + 0xb0))((longlong *)param_2[1],local_128);
    iVar7 = FUN_142306800(param_5,local_128,0);
    *param_3 = iVar7 == 2 | *param_3 & 0xfc | bVar5 * '\x02';
    param_4 = *(float *)((longlong)param_2 + 0x34) / param_4;
    *(float *)(param_3 + 0xc) = param_4;
    *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x34);
    fVar14 = param_7[2] - param_6[2];
    fVar15 = *param_7 - *param_6;
    fVar17 = param_7[1] - param_6[1];
    local_150 = fVar14 * param_4 + param_6[2];
    *(ulonglong *)(param_3 + 0x14) =
         CONCAT44(fVar17 * param_4 + param_6[1],fVar15 * param_4 + *param_6);
    *(float *)(param_3 + 0x1c) = local_150;
    local_138 = fVar15;
    local_134 = fVar17;
    local_130 = fVar14;
    if (((*(byte *)(param_2 + 3) & 1) == 0) || (bVar5)) {
      local_158 = *(undefined8 *)param_6;
      local_150 = param_6[2];
    }
    else {
      cVar6 = physx::PxVec3::isFinite((undefined8 *)((longlong)param_2 + 0x1c));
      if (cVar6 == '\0') {
        uVar1 = *(undefined8 *)(param_3 + 0x44);
        uVar8 = *(undefined4 *)(param_3 + 0x4c);
        uVar2 = *(undefined8 *)(param_3 + 0x50);
        uVar3 = *(undefined4 *)(param_3 + 0x58);
        _guard_xfg_dispatch_icall_nop(param_3,0,0x90);
        *(undefined8 *)(param_3 + 0x44) = uVar1;
        *(undefined8 *)(param_3 + 0x50) = uVar2;
        *(undefined4 *)(param_3 + 0x4c) = uVar8;
        *(undefined4 *)(param_3 + 0x58) = uVar3;
        param_3[0xc] = 0;
        param_3[0xd] = 0;
        param_3[0xe] = 0x80;
        param_3[0xf] = 0x3f;
        return 1;
      }
      local_158 = *(undefined8 *)((longlong)param_2 + 0x1c);
      local_150 = *(float *)((longlong)param_2 + 0x24);
    }
    *(undefined8 *)(param_3 + 0x20) = local_158;
    *(float *)(param_3 + 0x28) = local_150;
    if (((*(byte *)(param_2 + 3) & 2) == 0) || (bVar5)) {
      bVar5 = false;
      fVar12 = fVar15 * fVar15 + fVar17 * fVar17 + fVar14 * fVar14;
      local_140 = fVar14;
      fStack_144 = fVar17;
      local_148 = fVar15;
      if ((fVar12 != 1.0) &&
         (local_140 = DAT_1468b5d98, fStack_144 = DAT_1468b5d94, local_148 = DAT_1468b5d90,
         1e-08 <= fVar12)) {
        auVar13 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
        fVar19 = auVar13._0_4_;
        fVar19 = fVar19 + fVar19 * (0.5 - fVar12 * 0.5 * fVar19 * fVar19);
        fVar19 = fVar19 * (0.5 - fVar12 * 0.5 * fVar19 * fVar19) + fVar19;
        local_140 = fVar19 * fVar14;
        fStack_144 = fVar19 * fVar17;
        local_148 = fVar15 * fVar19;
      }
      local_148 = -local_148;
      fStack_144 = -fStack_144;
      local_140 = -local_140;
    }
    else {
      bVar5 = true;
      cVar6 = physx::PxVec3::isFinite(param_2 + 5);
      if (cVar6 == '\0') {
        uVar1 = *(undefined8 *)(param_3 + 0x44);
        uVar8 = *(undefined4 *)(param_3 + 0x4c);
        uVar2 = *(undefined8 *)(param_3 + 0x50);
        uVar3 = *(undefined4 *)(param_3 + 0x58);
        _guard_xfg_dispatch_icall_nop(param_3,0,0x90);
        *(undefined8 *)(param_3 + 0x44) = uVar1;
        *(undefined8 *)(param_3 + 0x50) = uVar2;
        *(undefined4 *)(param_3 + 0x4c) = uVar8;
        *(undefined4 *)(param_3 + 0x58) = uVar3;
        param_3[0xc] = 0;
        param_3[0xd] = 0;
        param_3[0xe] = 0x80;
        param_3[0xf] = 0x3f;
        return 1;
      }
      local_148 = *(float *)(param_2 + 5);
      fStack_144 = *(float *)((longlong)param_2 + 0x2c);
      local_140 = *(float *)(param_2 + 6);
      fVar12 = fStack_144 * fStack_144 + local_148 * local_148 + local_140 * local_140;
      if (fVar12 != 1.0) {
        if (1e-08 <= fVar12) {
          auVar13 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
          fVar19 = auVar13._0_4_;
          fVar19 = fVar19 + fVar19 * (0.5 - fVar12 * 0.5 * fVar19 * fVar19);
          fVar19 = fVar19 + fVar19 * (0.5 - fVar12 * 0.5 * fVar19 * fVar19);
          local_148 = fVar19 * local_148;
          local_140 = fVar19 * local_140;
          fStack_144 = fVar19 * fStack_144;
        }
        else {
          local_148 = DAT_1468b5d90;
          local_140 = DAT_1468b5d98;
          fStack_144 = DAT_1468b5d94;
        }
      }
    }
    *(ulonglong *)(param_3 + 0x2c) = CONCAT44(fStack_144,local_148);
    *(ulonglong *)(param_3 + 0x38) = CONCAT44(fStack_144,local_148);
    *(float *)(param_3 + 0x34) = local_140;
    *(float *)(param_3 + 0x40) = local_140;
    fVar12 = param_6[2];
    *(undefined8 *)(param_3 + 0x44) = *(undefined8 *)param_6;
    *(float *)(param_3 + 0x4c) = fVar12;
    fVar12 = param_7[2];
    *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)param_7;
    *(float *)(param_3 + 0x58) = fVar12;
    fVar12 = local_148;
    fVar19 = fStack_144;
    local_150 = local_140;
    if ((bVar5) &&
       (0.01 <= ABS(1.0 - (local_148 * local_148 + fStack_144 * fStack_144 + local_140 * local_140))
       )) {
      fVar12 = fVar15 * fVar15 + fVar17 * fVar17 + fVar14 * fVar14;
      local_150 = fVar14;
      fVar16 = fVar15;
      fVar18 = fVar17;
      if ((fVar12 != 1.0) &&
         (local_150 = DAT_1468b5d98, fVar16 = DAT_1468b5d90, fVar18 = DAT_1468b5d94, 1e-08 <= fVar12
         )) {
        auVar13 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
        fVar19 = auVar13._0_4_;
        fVar19 = fVar19 + fVar19 * (0.5 - fVar12 * 0.5 * fVar19 * fVar19);
        fVar19 = fVar19 + fVar19 * (0.5 - fVar12 * 0.5 * fVar19 * fVar19);
        local_150 = fVar14 * fVar19;
        fVar16 = fVar15 * fVar19;
        fVar18 = fVar17 * fVar19;
      }
      fVar12 = -fVar16;
      fVar19 = -fVar18;
      local_150 = -local_150;
      *(ulonglong *)(param_3 + 0x2c) = CONCAT44(fVar18,fVar16) ^ 0x8000000080000000;
      *(ulonglong *)(param_3 + 0x38) = CONCAT44(fVar18,fVar16) ^ 0x8000000080000000;
      *(float *)(param_3 + 0x34) = local_150;
      *(float *)(param_3 + 0x40) = local_150;
    }
    if (param_8 == (undefined4 *)0x0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = *param_8;
    }
    local_188 = (byte *)&local_158;
    local_158 = CONCAT44(fVar19,fVar12);
    puVar10 = (undefined8 *)FUN_14230e7a0(&local_148,uVar8,param_2,&local_138);
    local_188 = (byte *)CONCAT71(local_188._1_7_,param_11);
    uVar8 = *(undefined4 *)(puVar10 + 1);
    *(undefined8 *)(param_3 + 0x38) = *puVar10;
    *(undefined4 *)(param_3 + 0x40) = uVar8;
    FUN_14231d1d0(param_2[1],*param_2,*(undefined4 *)(param_2 + 2),param_3);
    local_118[0] = (**(code **)(*(longlong *)param_2[1] + 0x30))();
    if (local_118[0] == 6) {
      if (((param_11 != '\0') && (*(int *)(param_2 + 2) != DAT_146531bf0)) &&
         (lVar11 = (**(code **)(*(longlong *)param_2[1] + 0xd0))(), lVar11 != 0)) {
        piVar4 = *(int **)(lVar11 + 0x10);
        if ((piVar4 == (int *)0x0) || (*piVar4 != 2)) {
          FWeakObjectPtr::operator=(param_3 + 100,0);
        }
        else {
          FWeakObjectPtr::operator=(param_3 + 100,*(undefined8 *)(piVar4 + 2));
        }
      }
    }
    else if ((param_10 != '\0') && (local_118[0] == 5)) {
      local_118[1] = 0x3f800000;
      local_118[2] = 0x3f800000;
      local_118[3] = 0x3f800000;
      local_118[4] = 0;
      local_118[5] = 0;
      local_118[6] = 0;
      local_118[7] = 0x3f800000;
      local_118[8] = 0;
      local_f0 = (longlong *)0x0;
      cVar6 = (**(code **)(*(longlong *)param_2[1] + 0x70))((longlong *)param_2[1],local_118);
      if ((cVar6 != '\0') &&
         (((local_f0 != (longlong *)0x0 &&
           (uVar9 = (**(code **)(*local_f0 + 0x48))(), *(uint *)(param_2 + 2) < uVar9)) &&
          (lVar11 = (**(code **)(*local_f0 + 0x60))(), lVar11 != 0)))) {
        *(undefined4 *)(param_3 + 4) =
             *(undefined4 *)(lVar11 + (ulonglong)*(uint *)(param_2 + 2) * 4);
      }
    }
  }
  return 0;
}



// FUNCTION 142309940 FUN_142309940 body=348 status=ok
// SIG undefined FUN_142309940(void)

void FUN_142309940(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_28 [16];
  
  (**(code **)(*param_1 + 0xb0))(param_1,local_28);
  iVar3 = FUN_142306800(param_4,local_28,0);
  piVar1 = *(int **)(param_2 + 0x10);
  if (((piVar1 == (int *)0x0) || (*piVar1 != 1)) || (*(longlong *)(piVar1 + 2) == 0)) {
    piVar2 = (int *)param_1[2];
    if ((((piVar2 == (int *)0x0) || (*piVar2 != 7)) ||
        (plVar7 = *(longlong **)(piVar2 + 2), plVar7 == (longlong *)0x0)) &&
       (((piVar1 == (int *)0x0 || (*piVar1 != 7)) ||
        (plVar7 = *(longlong **)(piVar1 + 2), plVar7 == (longlong *)0x0)))) goto LAB_142309a7a;
    (**(code **)(*plVar7 + 8))(plVar7,&local_res8);
    lVar6 = FWeakObjectPtr::Get(&local_res8);
    if (lVar6 == 0) goto LAB_142309a7a;
    FWeakObjectPtr::operator=(param_3,*(undefined8 *)(lVar6 + 0x118));
    *(undefined4 *)(param_3 + 8) = local_res8;
    *(undefined4 *)(param_3 + 0xc) = local_resc;
    lVar6 = FWeakObjectPtr::Get(&local_res8);
    if ((*(byte *)(lVar6 + 0x2ef) & 2) == 0) goto LAB_142309a72;
    uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  else {
    puVar5 = (undefined4 *)FUN_142697ca0(*(longlong *)(piVar1 + 2),param_1);
    lVar6 = FWeakObjectPtr::Get(puVar5 + 0x4e);
    if (lVar6 == 0) goto LAB_142309a7a;
    FWeakObjectPtr::operator=(param_3,*(undefined8 *)(lVar6 + 0x118));
    *(undefined4 *)(param_3 + 8) = puVar5[0x4e];
    *(undefined4 *)(param_3 + 0xc) = puVar5[0x4f];
    if ((*(byte *)(lVar6 + 0x2ef) & 2) == 0) {
LAB_142309a72:
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = *puVar5;
    }
  }
  *(undefined4 *)(param_3 + 0x10) = uVar4;
LAB_142309a7a:
  *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) & 0xfffffffe;
  *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | (uint)(iVar3 == 2);
  return;
}



// FUNCTION 142309aa0 FUN_142309aa0 body=494 status=ok
// SIG undefined FUN_142309aa0(void)

undefined4
FUN_142309aa0(byte *param_1,undefined8 param_2,uint param_3,longlong param_4,undefined4 param_5,
             undefined8 param_6,longlong *param_7,undefined4 *param_8,undefined8 param_9,
             undefined1 param_10,undefined1 param_11)

{
  int iVar1;
  void *_Dst;
  byte *pbVar2;
  longlong lVar3;
  undefined4 uVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined1 local_res18 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  uVar6 = (ulonglong)param_3;
  if (*(int *)((longlong)param_7 + 0xc) < (int)((int)param_7[1] + param_3)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
              (param_7);
  }
  bVar5 = 0;
  uVar4 = 0;
  local_68 = 0;
  uStack_60 = 0x3f80000000000000;
  local_58 = *param_8;
  local_54 = param_8[1];
  local_50 = param_8[2];
  if ((int)param_3 < 1) {
    lVar3 = *param_7;
  }
  else {
    do {
      lVar3 = param_7[1];
      iVar1 = (int)lVar3 + 1;
      *(int *)(param_7 + 1) = iVar1;
      if (*(int *)((longlong)param_7 + 0xc) < iVar1) {
        TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_7);
      }
      lVar3 = (longlong)(int)lVar3 * 0x90;
      _Dst = (void *)(*param_7 + lVar3);
      *(undefined4 *)((longlong)_Dst + 0x68) = 0;
      *(undefined4 *)((longlong)_Dst + 0x70) = 0;
      *(undefined4 *)((longlong)_Dst + 0x78) = 0;
      *(undefined4 *)((longlong)_Dst + 0x84) = 0;
      *(undefined4 *)((longlong)_Dst + 0x8c) = 0;
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x90);
      *(undefined4 *)((longlong)_Dst + 0xc) = 0x3f800000;
      pbVar2 = (byte *)(*param_7 + lVar3);
      iVar1 = FUN_142309120(param_2,param_4,pbVar2,param_5,param_6,param_8,param_9,0,&local_68,
                            param_10,param_11);
      if (iVar1 == 0) {
        bVar5 = bVar5 | *pbVar2 & 1;
      }
      else {
        *(int *)(param_7 + 1) = (int)param_7[1] + -1;
        uVar4 = 1;
      }
      lVar3 = *param_7;
      param_4 = param_4 + 0x40;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_1422feb30(lVar3,(longlong)(int)param_7[1],local_res18[0],local_res18);
  *param_1 = bVar5;
  return uVar4;
}



// FUNCTION 142309c90 ConvertToCollisionChannel body=64 status=ok
// SIG undefined ConvertToCollisionChannel(void)

undefined4 UCollisionProfile::ConvertToCollisionChannel(longlong param_1,char param_2,int param_3)

{
  if (-1 < param_3) {
    if (param_2 == '\0') {
      if (param_3 < *(int *)(param_1 + 0x140)) {
        return *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)param_3 * 4);
      }
    }
    else if (param_3 < *(int *)(param_1 + 0x150)) {
      return *(undefined4 *)(*(longlong *)(param_1 + 0x148) + (longlong)param_3 * 4);
    }
  }
  return 0x21;
}



// FUNCTION 142309cd0 FUN_142309cd0 body=58 status=ok
// SIG undefined FUN_142309cd0(void)

int FUN_142309cd0(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 < 0x21) {
    piVar2 = *(int **)(param_1 + 0x138);
    iVar3 = 0;
    piVar1 = piVar2 + *(int *)(param_1 + 0x140);
    for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
      if (*piVar2 == param_2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    }
  }
  return 0x20;
}



// FUNCTION 142309d10 FUN_142309d10 body=58 status=ok
// SIG undefined FUN_142309d10(void)

int FUN_142309d10(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 < 0x21) {
    piVar2 = *(int **)(param_1 + 0x148);
    iVar3 = 0;
    piVar1 = piVar2 + *(int *)(param_1 + 0x150);
    for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
      if (*piVar2 == param_2) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    }
  }
  return 0x20;
}



// FUNCTION 142309d50 FUN_142309d50 body=311 status=ok
// SIG undefined FUN_142309d50(void)

longlong FUN_142309d50(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_3 < 1) {
    return 0;
  }
  if (param_4 < 1) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = UCanvasRenderTarget2D::GetPrivateStaticClass();
  lVar3 = param_2;
  while (lVar3 != lVar1) {
    lVar3 = *(longlong *)(lVar3 + 0x30);
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar1 = UCanvasRenderTarget2D::GetPrivateStaticClass();
  lVar3 = param_2;
  do {
    lVar4 = param_2;
    if (lVar3 == lVar1) break;
    lVar3 = *(longlong *)(lVar3 + 0x30);
    lVar4 = 0;
  } while (lVar3 != 0);
  uVar2 = GetTransientPackage();
  FUN_1417846f0(uVar2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar3 = FUN_1417985e0(lVar4,uVar2,0,0,0,0,0,0,0);
  if (lVar3 == 0) {
    return 0;
  }
  uVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  FWeakObjectPtr::operator=(lVar3 + 0xf8,uVar2);
  FUN_14287a580(lVar3,param_3,param_4);
  return lVar3;
}



// FUNCTION 142309e90 CreateOutputDirectory body=341 status=ok
// SIG undefined CreateOutputDirectory(void)

longlong * FPerformanceTrackingSystem::CreateOutputDirectory(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  plVar2 = (longlong *)FPaths::ProfilingDir(local_28);
  local_38 = *plVar2;
  lVar1 = plVar2[1];
  *plVar2 = 0;
  local_30._0_4_ = (int)plVar2[1];
  local_30._4_4_ = *(int *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  iVar5 = (0xf - (uint)((int)lVar1 != 0)) + (int)local_30;
  if (local_30._4_4_ < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,iVar5,(int)local_30,-(int)lVar1);
  }
  FString::PathAppend(&local_38,L"FPSChartStats",0xd);
  puVar3 = (undefined8 *)FDateTime::ToString(param_2,local_18);
  iVar5 = local_30._4_4_;
  iVar7 = *(int *)(puVar3 + 1) + -1;
  if (*(int *)(puVar3 + 1) == 0) {
    iVar7 = 0;
  }
  if (((int)local_30 != 0) || (iVar4 = 2, iVar7 == -1)) {
    iVar4 = 1;
  }
  *param_1 = local_38;
  iVar4 = iVar7 + iVar4 + (int)local_30;
  local_38 = 0;
  *(int *)(param_1 + 1) = (int)local_30;
  *(int *)((longlong)param_1 + 0xc) = local_30._4_4_;
  local_30 = 0;
  if (iVar5 < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1);
  }
  FString::PathAppend(param_1,*puVar3,iVar7);
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar2 = (longlong *)FUN_1415c3d50();
  if ((int)param_1[1] == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_1;
  }
  (**(code **)(*plVar2 + 0x58))(plVar2,puVar6,1);
  return param_1;
}



// FUNCTION 142309ff0 FUN_142309ff0 body=209 status=ok
// SIG undefined FUN_142309ff0(void)

longlong *
FUN_142309ff0(longlong *param_1,undefined8 param_2,char param_3,longlong param_4,undefined8 param_5,
             uint *param_6,byte param_7)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_18 [16];
  
  param_1[1] = 0;
  *param_1 = 0;
  if (*param_6 == 0) {
    plVar2 = (longlong *)FUN_14230a0d0(local_18);
    lVar1 = plVar2[1];
    *param_1 = *plVar2;
    param_1[1] = lVar1;
    uVar4 = *(uint *)((longlong)param_1 + 4) & 0xfffffff;
  }
  else {
    uVar4 = param_6[1];
    *param_1 = (ulonglong)*param_6 << 0x20;
    param_1[1] = (ulonglong)
                 ((param_3 != '\0') + 1 | ((uint)(byte)uVar4 << 5 | (uint)param_7) << 0x17) << 0x20;
    uVar4 = *(uint *)((longlong)param_1 + 4);
  }
  uVar3 = 0x10000000;
  if (*(char *)(param_4 + 0x1c) != '\x02') {
    uVar3 = 0;
  }
  if (*(char *)(param_4 + 0x1d) == '\x02') {
    uVar3 = uVar3 | 0x20000000;
  }
  if (*(char *)(param_4 + 0x1e) == '\x02') {
    uVar3 = uVar3 | 0x40000000;
  }
  if (*(char *)(param_4 + 0x1f) == '\x02') {
    uVar3 = uVar3 | 0x80000000;
  }
  *(uint *)((longlong)param_1 + 4) = uVar4 | uVar3;
  return param_1;
}



// FUNCTION 14230a0d0 FUN_14230a0d0 body=605 status=ok
// SIG undefined FUN_14230a0d0(void)

undefined4 *
FUN_14230a0d0(undefined4 *param_1,byte param_2,byte param_3,longlong param_4,longlong param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  uVar2 = 1;
  param_1[3] = param_3 + 1;
  pcVar1 = (char *)(param_4 + 1);
  *param_1 = 1;
  do {
    if (pcVar1[-1] == '\x02') {
      param_1[1] = param_1[1] | uVar2;
    }
    else if (pcVar1[-1] == '\x01') {
      param_1[2] = param_1[2] | uVar2;
    }
    if (*pcVar1 == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 1;
    }
    else if (*pcVar1 == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 1;
    }
    if (pcVar1[1] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 2;
    }
    else if (pcVar1[1] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 2;
    }
    if (pcVar1[2] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 3;
    }
    else if (pcVar1[2] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 3;
    }
    if (pcVar1[3] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 4;
    }
    else if (pcVar1[3] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 4;
    }
    if (pcVar1[4] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 5;
    }
    else if (pcVar1[4] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 5;
    }
    if (pcVar1[5] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 6;
    }
    else if (pcVar1[5] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 6;
    }
    if (pcVar1[6] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 7;
    }
    else if (pcVar1[6] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 7;
    }
    if (pcVar1[7] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 8;
    }
    else if (pcVar1[7] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 8;
    }
    if (pcVar1[8] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 9;
    }
    else if (pcVar1[8] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 9;
    }
    if (pcVar1[9] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 10;
    }
    else if (pcVar1[9] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 10;
    }
    if (pcVar1[10] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 0xb;
    }
    else if (pcVar1[10] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 0xb;
    }
    if (pcVar1[0xb] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 0xc;
    }
    else if (pcVar1[0xb] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 0xc;
    }
    if (pcVar1[0xc] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 0xd;
    }
    else if (pcVar1[0xc] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 0xd;
    }
    if (pcVar1[0xd] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 0xe;
    }
    else if (pcVar1[0xd] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 0xe;
    }
    if (pcVar1[0xe] == '\x02') {
      param_1[1] = param_1[1] | uVar2 << 0xf;
    }
    else if (pcVar1[0xe] == '\x01') {
      param_1[2] = param_1[2] | uVar2 << 0xf;
    }
    uVar3 = uVar3 + 0x10;
    uVar2 = uVar2 << 0x10 | uVar2 >> 0x10;
    pcVar1 = pcVar1 + 0x10;
  } while (uVar3 < 0x20);
  param_1[3] = param_1[3] | ((uint)*(byte *)(param_5 + 0x1c) << 5 | (uint)param_2) << 0x17;
  return param_1;
}



// FUNCTION 14230a330 FUN_14230a330 body=55 status=ok
// SIG undefined FUN_14230a330(void)

void FUN_14230a330(longlong *param_1)

{
  char cVar1;
  
  if (param_1[0x99] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x8e8))();
    if (cVar1 != '\0') {
      *(uint *)(param_1[0x99] + 0x4b4) = *(uint *)(param_1[0x99] + 0x4b4) | 0x800;
    }
  }
  return;
}



// FUNCTION 14230a370 FUN_14230a370 body=644 status=ok
// SIG undefined FUN_14230a370(void)

void FUN_14230a370(longlong *param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  longlong lVar6;
  undefined4 local_1d8;
  undefined4 local_1d4;
  uint local_1d0;
  undefined4 local_1cc;
  byte local_1c8 [4];
  undefined4 local_1c4;
  uint local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined4 local_128;
  ulonglong local_124;
  uint local_11c;
  byte local_118;
  undefined4 local_114;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [128];
  
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar6 = param_1[4];
  }
  else {
    lVar6 = 0;
  }
  _guard_xfg_dispatch_icall_nop(local_1c8,0,0x90);
  local_1bc = 0x3f800000;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x428))(param_1,lVar6,local_1c8);
  if (plVar4 != (longlong *)0x0) {
    if (plVar4[0x2d] == 0) {
      local_1cc = 0x3f800000;
      local_1d8 = 0;
      local_1d4 = 0;
      local_1d0 = 0;
    }
    else {
      auVar1 = *(undefined1 (*) [16])(plVar4[0x2d] + 0x210);
      local_1d4 = auVar1._4_4_;
      local_1d8 = auVar1._0_4_;
      local_1d0 = auVar1._8_4_;
      local_1cc = auVar1._12_4_;
    }
    puVar5 = (ulonglong *)FQuatRotationMatrix::FQuatRotationMatrix(local_88,&local_1d8);
    uVar2 = *puVar5;
    uVar3 = puVar5[1];
    local_130 = UDamageType::GetPrivateStaticClass();
    local_1d0 = (uint)uVar3 ^ 0x80000000;
    local_138 = &PTR_FUN_14503cd98;
    local_124 = uVar2 ^ 0x8000000080000000;
    local_118 = local_118 ^ (local_118 ^ local_1c8[0]) & 3;
    local_114 = local_1c4;
    local_10c = local_1bc;
    local_104 = local_1b4;
    local_f8 = local_1a8;
    local_ec = local_19c;
    local_e0 = local_190;
    local_d4 = local_184;
    local_110 = local_110 ^ (local_110 ^ local_1c0) & 1;
    local_fc = local_1ac;
    local_f0 = local_1a0;
    local_e4 = local_194;
    local_d8 = local_188;
    local_cc = local_17c;
    local_c0 = local_170;
    local_b8 = local_168;
    local_b4 = local_164;
    local_b0 = local_160;
    local_ac = local_15c;
    local_c8 = local_178;
    local_a8 = local_158;
    local_a4 = local_154;
    local_108 = local_1b8;
    local_bc = local_16c;
    local_a0 = local_150;
    local_98 = local_148;
    local_90 = local_140;
    local_128 = param_2;
    local_11c = local_1d0;
    (**(code **)(*plVar4 + 0x5a0))(plVar4,param_2,&local_138,lVar6,*(undefined8 *)(lVar6 + 0x488));
  }
  return;
}



// FUNCTION 14230a600 DebugCapsuleSweep body=142 status=ok
// SIG undefined DebugCapsuleSweep(void)

void UCheatManager::DebugCapsuleSweep(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  uVar5 = *(uint *)(param_1 + 0x38) ^ 1;
  *(uint *)(param_1 + 0x38) = uVar5;
  if ((uVar5 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x70);
    iVar4 = *(int *)(param_1 + 0x58);
    iVar3 = (iVar4 - iVar2) + -1;
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar2 * 0x54 + *plVar1),
                 (void *)((longlong)(iVar2 + 1) * 0x54 + *plVar1),(longlong)iVar3 * 0x54);
      iVar4 = *(int *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x58) = iVar4 + -1;
    FUN_14231ba70(plVar1);
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x58) + 1;
  *(int *)(param_1 + 0x58) = iVar2;
  if (*(int *)(param_1 + 0x5c) < iVar2) {
    TArray<FRelevantActor,FDefaultAllocator>::ResizeGrow(plVar1);
    return;
  }
  return;
}



// FUNCTION 14230a6c0 DebugCapsuleSweepClear body=151 status=ok
// SIG undefined DebugCapsuleSweepClear(void)

void UCheatManager::DebugCapsuleSweepClear(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_14231bbd0(param_1 + 0x50,0);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_14231bbd0(param_1 + 0x60,0);
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x58) + 1;
    *(int *)(param_1 + 0x58) = iVar1;
    if (*(int *)(param_1 + 0x5c) < iVar1) {
      TArray<FRelevantActor,FDefaultAllocator>::ResizeGrow(param_1 + 0x50);
    }
  }
  if (DAT_146aefa34 != '\0') {
    *(undefined4 *)(param_1 + 0x74) = 0;
    iVar1 = *(int *)(param_1 + 0x68) + 10;
    *(int *)(param_1 + 0x68) = iVar1;
    if (*(int *)(param_1 + 0x6c) < iVar1) {
      TArray<FRelevantActor,FDefaultAllocator>::ResizeGrow(param_1 + 0x60);
    }
  }
  return;
}



// FUNCTION 14230a7c0 FUN_14230a7c0 body=970 status=ok
// SIG undefined FUN_14230a7c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14230a7c0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_78;
  char local_74;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a0 = (**(code **)(*param_1 + 0x148))();
  local_98[0] = 5;
  local_40 = '\0';
  local_a8 = param_2;
  FUN_14044bc80(&local_90,&local_a0,&local_a8);
  FUN_14045a130(local_98);
  iVar16 = local_78;
  lVar15 = local_68;
joined_r0x00014230a821:
  local_78 = iVar16;
  local_68 = lVar15;
  if (local_74 == '\0') {
    iVar16 = *(int *)(lVar15 + 0xc);
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar13 = iVar16 >> 0x1f & 0xffff;
      uVar7 = iVar16 + uVar13;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
              (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
      lVar8 = FUN_1429d7ab0();
      if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar8 = *(longlong *)(lVar15 + 0x490), lVar8 != 0)) {
        lVar9 = FUN_1429e18b0();
        lVar8 = *(longlong *)(lVar8 + 0x10);
        if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          FUN_142227350(*(undefined8 *)(lVar15 + 0x490),0,
                        CONCAT71((int7)((ulonglong)(lVar9 + 0x88) >> 8),1));
        }
      }
      FUN_142227350(lVar15,0,1);
    }
    lVar8 = local_90;
    iVar16 = local_78 + 1;
    if (iVar16 < local_58 + local_80) {
      lVar9 = (longlong)iVar16 * 8;
      iVar17 = local_58;
      iVar14 = local_80;
      do {
        if (iVar16 < iVar14) {
          lVar15 = *(longlong *)(local_88 + lVar9);
        }
        else {
          lVar15 = *(longlong *)(local_60 + (longlong)(iVar16 - iVar14) * 8);
        }
        local_70 = local_70 + 1;
        if ((lVar15 != 0) &&
           (lVar10 = AActor::GetLevel(lVar15), iVar17 = local_58, iVar14 = local_80, lVar10 != 0)) {
          if ((local_98[0] & 1) != 0) {
            iVar1 = *(int *)(lVar15 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar13 = iVar1 >> 0x1f & 0xffff;
              uVar7 = iVar1 + uVar13;
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
            }
            else {
              lVar11 = 0;
            }
            if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_14230aad6;
          }
          if (((local_98[0] >> 1 & 1) == 0) ||
             (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar15), iVar17 = local_58,
             iVar14 = local_80, cVar6 != '\0')) {
            if ((local_98[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar10 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              piVar2 = *(int **)(lVar10 + 600);
              if (((*(longlong *)(lVar10 + 0xc0) == 0) ||
                  (piVar12 = (int *)UWorld::GetActiveLevelCollection(), piVar12 == (int *)0x0)) ||
                 (piVar2 == piVar12)) {
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
              iVar17 = local_58;
              iVar14 = local_80;
              if ((!bVar3) || (!bVar4)) goto LAB_14230aad6;
            }
            lVar10 = ULevel::GetWorld(lVar10);
            iVar17 = local_58;
            iVar14 = local_80;
            if (lVar10 == lVar8) {
              lVar10 = AActor::GetLevel(lVar15);
              if (lVar10 == *(longlong *)(lVar8 + 0x30)) goto joined_r0x00014230a821;
              lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              iVar17 = local_58;
              iVar14 = local_80;
              if (!bVar3) goto joined_r0x00014230a821;
            }
          }
        }
LAB_14230aad6:
        iVar16 = iVar16 + 1;
        lVar9 = lVar9 + 8;
        if (iVar17 + iVar14 <= iVar16) break;
      } while( true );
    }
    local_68 = 0;
    local_74 = '\x01';
  }
  if (local_40 != '\0') {
    local_40 = 0;
    UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14230ab90 FUN_14230ab90 body=1072 status=ok
// SIG undefined FUN_14230ab90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14230ab90(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined1 local_128 [12];
  undefined4 local_11c;
  uint local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_78;
  char local_74;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar8 = param_1[4];
  }
  else {
    lVar8 = 0;
  }
  _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
  local_11c = 0x3f800000;
  lVar8 = (**(code **)(*param_1 + 0x428))(param_1,lVar8,local_128);
  if (lVar8 != 0) {
    local_138 = lVar8;
    lVar9 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar9 = FUN_1429d7ab0();
      local_140 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar9 != 0) {
        lVar10 = FUN_1429d7ab0();
        lVar11 = lVar9;
        do {
          if (lVar11 == lVar10) goto LAB_14230ac74;
          lVar11 = *(longlong *)(lVar11 + 0x30);
        } while (lVar11 != 0);
      }
      lVar9 = 0;
LAB_14230ac74:
      local_98[0] = 5;
      local_40 = '\0';
      local_148 = lVar9;
      FUN_14044bc80(&local_90,&local_140,&local_148);
      FUN_14045a130(local_98);
      if (local_74 == '\0') {
LAB_14230acd3:
        lVar9 = local_68;
        iVar17 = *(int *)(local_68 + 0xc);
        if (iVar17 < (int)DAT_1469e91c4) {
          uVar14 = iVar17 >> 0x1f & 0xffff;
          uVar7 = iVar17 + uVar14;
          lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                   (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
        }
        else {
          lVar11 = 0;
        }
        if (((*(uint *)(lVar11 + 8) >> 0x1d & 1) == 0) && (local_68 != lVar8)) {
          lVar8 = *(longlong *)(local_68 + 0x490);
          if (lVar8 != 0) {
            lVar11 = FUN_1429e18b0();
            lVar8 = *(longlong *)(lVar8 + 0x10);
            if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
                != lVar11 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) goto LAB_14230ad7e;
          }
          lVar8 = *(longlong *)(lVar9 + 0x490);
          if (lVar8 != 0) {
            FUN_142227350(lVar8,0,1);
          }
          FUN_142227350(lVar9,0,1);
        }
LAB_14230ad7e:
        lVar8 = local_90;
        iVar17 = local_78 + 1;
        if (iVar17 < local_58 + local_80) {
          lVar9 = (longlong)iVar17 * 8;
          iVar15 = local_80;
          iVar16 = local_58;
          do {
            if (iVar17 < iVar15) {
              lVar11 = *(longlong *)(local_88 + lVar9);
            }
            else {
              lVar11 = *(longlong *)(local_60 + (longlong)(iVar17 - iVar15) * 8);
            }
            local_70 = local_70 + 1;
            if ((lVar11 != 0) &&
               (lVar10 = AActor::GetLevel(lVar11), iVar15 = local_80, iVar16 = local_58, lVar10 != 0
               )) {
              if ((local_98[0] & 1) != 0) {
                iVar1 = *(int *)(lVar11 + 0xc);
                if (iVar1 < (int)DAT_1469e91c4) {
                  uVar14 = iVar1 >> 0x1f & 0xffff;
                  uVar7 = iVar1 + uVar14;
                  lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                           (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
                }
                else {
                  lVar12 = 0;
                }
                if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_14230af1d;
              }
              if (((local_98[0] >> 1 & 1) == 0) ||
                 (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar11), iVar15 = local_80,
                 iVar16 = local_58, cVar6 != '\0')) {
                if ((local_98[0] >> 2 & 1) != 0) {
                  if (((*(byte *)(lVar10 + 0x204) & 0x10) == 0) &&
                     ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  piVar2 = *(int **)(lVar10 + 600);
                  if (((*(longlong *)(lVar10 + 0xc0) == 0) ||
                      (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0))
                     || (piVar2 == piVar13)) {
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
                  iVar15 = local_80;
                  iVar16 = local_58;
                  if ((!bVar3) || (!bVar4)) goto LAB_14230af1d;
                }
                lVar10 = ULevel::GetWorld(lVar10);
                iVar15 = local_80;
                iVar16 = local_58;
                if (lVar10 == lVar8) {
                  lVar10 = AActor::GetLevel(lVar11);
                  if (lVar10 == *(longlong *)(lVar8 + 0x30)) goto LAB_14230afa8;
                  lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  iVar15 = local_80;
                  iVar16 = local_58;
                  if (!bVar3) goto LAB_14230afa8;
                }
              }
            }
LAB_14230af1d:
            iVar17 = iVar17 + 1;
            lVar9 = lVar9 + 8;
            if (iVar16 + iVar15 <= iVar17) break;
          } while( true );
        }
        local_68 = 0;
        local_74 = '\x01';
      }
LAB_14230af5d:
      if (local_40 != '\0') {
        local_40 = 0;
        UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
        if (local_60 != 0) {
          FMemory::Free();
        }
        if (local_88 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
LAB_14230afa8:
  lVar8 = local_138;
  local_78 = iVar17;
  local_68 = lVar11;
  if (local_74 != '\0') goto LAB_14230af5d;
  goto LAB_14230acd3;
}



// FUNCTION 14230afc0 FUN_14230afc0 body=920 status=ok
// SIG undefined FUN_14230afc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14230afc0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_78;
  char local_74;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    lVar8 = FUN_1429d7ab0();
    lVar13 = param_2;
    do {
      if (lVar13 == lVar8) goto LAB_14230b00e;
      lVar13 = *(longlong *)(lVar13 + 0x30);
    } while (lVar13 != 0);
  }
  param_2 = FUN_1429d7ab0();
LAB_14230b00e:
  local_a0 = (**(code **)(*param_1 + 0x148))(param_1);
  if (param_2 != 0) {
    lVar8 = FUN_1429d7ab0();
    lVar13 = param_2;
    do {
      if (lVar13 == lVar8) goto LAB_14230b040;
      lVar13 = *(longlong *)(lVar13 + 0x30);
    } while (lVar13 != 0);
  }
  param_2 = 0;
LAB_14230b040:
  local_98[0] = 5;
  local_40 = '\0';
  local_a8 = param_2;
  FUN_14044bc80(&local_90,&local_a0,&local_a8);
  FUN_14045a130(local_98);
  iVar16 = local_78;
  lVar13 = local_68;
joined_r0x00014230b071:
  local_78 = iVar16;
  local_68 = lVar13;
  if (local_74 == '\0') {
    lVar8 = *(longlong *)(lVar13 + 0x490);
    if (lVar8 == 0) {
LAB_14230b0e5:
      if (*(longlong *)(lVar13 + 0x490) != 0) {
        FUN_142227350(*(longlong *)(lVar13 + 0x490),0,1);
      }
      FUN_142227350(lVar13,0,1);
    }
    else {
      lVar9 = FUN_1429e18b0();
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14230b0e5;
    }
    lVar8 = local_90;
    iVar16 = local_78 + 1;
    if (iVar16 < local_58 + local_80) {
      lVar9 = (longlong)iVar16 * 8;
      iVar14 = local_80;
      iVar17 = local_58;
      do {
        if (iVar16 < iVar14) {
          lVar13 = *(longlong *)(local_88 + lVar9);
        }
        else {
          lVar13 = *(longlong *)(local_60 + (longlong)(iVar16 - iVar14) * 8);
        }
        local_70 = local_70 + 1;
        if ((lVar13 != 0) &&
           (lVar10 = AActor::GetLevel(lVar13), iVar14 = local_80, iVar17 = local_58, lVar10 != 0)) {
          if ((local_98[0] & 1) != 0) {
            iVar1 = *(int *)(lVar13 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar15 = iVar1 >> 0x1f & 0xffff;
              uVar7 = iVar1 + uVar15;
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
            }
            else {
              lVar11 = 0;
            }
            if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_14230b2a4;
          }
          if (((local_98[0] >> 1 & 1) == 0) ||
             (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar13), iVar14 = local_80,
             iVar17 = local_58, cVar6 != '\0')) {
            if ((local_98[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar10 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              piVar2 = *(int **)(lVar10 + 600);
              if (((*(longlong *)(lVar10 + 0xc0) == 0) ||
                  (piVar12 = (int *)UWorld::GetActiveLevelCollection(), piVar12 == (int *)0x0)) ||
                 (piVar2 == piVar12)) {
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
              iVar14 = local_80;
              iVar17 = local_58;
              if ((!bVar3) || (!bVar4)) goto LAB_14230b2a4;
            }
            lVar10 = ULevel::GetWorld(lVar10);
            iVar14 = local_80;
            iVar17 = local_58;
            if (lVar10 == lVar8) {
              lVar10 = AActor::GetLevel(lVar13);
              if (lVar10 == *(longlong *)(lVar8 + 0x30)) goto joined_r0x00014230b071;
              lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              iVar14 = local_80;
              iVar17 = local_58;
              if (!bVar3) goto joined_r0x00014230b071;
            }
          }
        }
LAB_14230b2a4:
        iVar16 = iVar16 + 1;
        lVar9 = lVar9 + 8;
        if (iVar17 + iVar14 <= iVar16) break;
      } while( true );
    }
    local_68 = 0;
    local_74 = '\x01';
  }
  if (local_40 != '\0') {
    local_40 = 0;
    UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14230b360 FUN_14230b360 body=120 status=ok
// SIG undefined FUN_14230b360(void)

void FUN_14230b360(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  lVar1 = *(longlong *)(lVar1 + 0x140);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x4c0) != 0)) {
    FUN_142227350(*(longlong *)(lVar1 + 0x4c0),1);
    lVar2 = 0;
    *(undefined8 *)(lVar1 + 0x4c0) = 0;
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      lVar2 = param_1[4];
    }
    if ((*(longlong *)(lVar2 + 0x688) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x688) + 0x58), lVar1 != 0)) {
      *(undefined1 *)(lVar1 + 0x1ec) = 0;
    }
  }
  return;
}



// FUNCTION 14230b3e0 FUN_14230b3e0 body=261 status=ok
// SIG undefined FUN_14230b3e0(void)

void FUN_14230b3e0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar2 = param_1[4];
  }
  else {
    lVar2 = 0;
  }
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  lVar2 = (**(code **)(*param_1 + 0x428))(param_1,lVar2,local_98);
  if (lVar2 != 0) {
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = *(longlong *)(lVar2 + 0x490), lVar3 != 0)) {
      lVar4 = FUN_1429e18b0();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        FUN_142227350(*(undefined8 *)(lVar2 + 0x490),0,
                      CONCAT71((int7)((ulonglong)(lVar4 + 0x88) >> 8),1));
      }
    }
    FUN_142227350(lVar2,0,1);
  }
  return;
}



// FUNCTION 14230b4f0 FUN_14230b4f0 body=123 status=ok
// SIG undefined FUN_14230b4f0(void)

void FUN_14230b4f0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1429238e0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*(longlong *)plVar1[0x10b] + 0x278))((longlong *)plVar1[0x10b],plVar1[0x10a]);
                    /* WARNING: Could not recover jumptable at 0x00014230b55e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xf38))(plVar1,plVar1[0x10a]);
      return;
    }
  }
  return;
}



// FUNCTION 14230b570 FUN_14230b570 body=3647 status=ok
// SIG undefined FUN_14230b570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14230b570(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 *puVar6;
  int iVar7;
  ulonglong uVar8;
  void *pvVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined2 **ppuVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined8 uVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined2 *local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined8 local_130;
  float local_128 [2];
  void *local_120;
  undefined8 local_118;
  undefined2 *local_110;
  ulonglong local_108;
  undefined2 *local_100;
  int local_f8;
  undefined2 *local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined2 *local_e0;
  longlong local_d8;
  void *local_d0;
  int local_c8;
  void *local_c0;
  int local_b8;
  void *local_b0;
  int local_a8;
  void *local_a0;
  int local_98;
  void *local_90;
  int local_88;
  longlong local_80 [2];
  longlong local_70 [7];
  
  local_138 = (undefined2 *)((ulonglong)local_138 & 0xffffffff00000000);
  FUN_142693100(param_1,param_2,param_3,param_4,param_5);
  local_128[0] = 0.0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aefd20) && (_Init_thread_header(&DAT_146aefd20), DAT_146aefd20 == -1))
  {
    FName::FName(&DAT_146aefd18,L"Physics",1);
    _Init_thread_footer(&DAT_146aefd20);
  }
  plVar14 = (longlong *)*param_3;
  plVar1 = plVar14 + (int)param_3[1];
  if (plVar14 == plVar1) {
    return;
  }
  while (*plVar14 != DAT_146aefd18) {
    plVar14 = plVar14 + 1;
    if (plVar14 == plVar1) {
      return;
    }
  }
  local_128[0] = local_128[0] + 4.0;
  if ((*(longlong *)(param_1 + 0x4c8) == 0) || (*(longlong **)(param_1 + 0x4d8) == (longlong *)0x0))
  {
    local_108 = 10;
    local_110 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
    puVar17 = local_110;
    FGenericPlatformString::Convert<char,wchar_t>(local_110,10,"Not Based",10,0x3f);
    iVar11 = (int)local_108;
  }
  else {
    cVar10 = (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x4e0))();
    bVar19 = cVar10 == '\0';
    if (bVar19) {
      local_138 = *(undefined2 **)(*(longlong *)(param_1 + 0x4d8) + 0x18);
      FName::ToString(&local_138,&local_100);
      ppuVar13 = &local_100;
    }
    else {
      local_148 = (undefined2 *)0x0;
      local_140 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_148,0xf,"World Geometry",0xf,0x3f);
      ppuVar13 = &local_148;
    }
    puVar16 = *ppuVar13;
    *ppuVar13 = (undefined2 *)0x0;
    iVar11 = *(int *)(ppuVar13 + 1);
    ppuVar13[1] = (undefined2 *)0x0;
    if ((bVar19) && (local_100 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if ((!bVar19) && (local_148 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    puVar17 = &DAT_143f3eda8;
    if (iVar11 != 0) {
      puVar17 = puVar16;
    }
    FString::PrintfImpl(&local_100,L"Based On %s",puVar17);
    puVar17 = local_100;
    iVar11 = local_f8;
    if (puVar16 != (undefined2 *)0x0) {
      FMemory::Free(puVar16);
      puVar17 = local_100;
      iVar11 = local_f8;
    }
  }
  fVar2 = (float)DAT_146aefae0;
  fVar3 = DAT_146aefae0._4_4_;
  fVar4 = DAT_146aefae0._8_4_;
  fVar5 = DAT_146aefae0._12_4_;
  local_d8 = param_2 + 0x98;
  auVar20._12_4_ = 0;
  auVar20._0_12_ = *(undefined1 (*) [12])(param_1 + 0x4f4);
  auVar20 = divps(auVar20,_DAT_146aefae0);
  local_138 = (undefined2 *)CONCAT44(local_138._4_4_,0x38d1b717);
  local_e0 = &DAT_143f3eda8;
  if (iVar11 != 0) {
    local_e0 = puVar17;
  }
  fVar22 = *(float *)*(undefined1 (*) [12])(param_1 + 0x4f4) - (float)(int)auVar20._0_4_ * fVar2;
  fVar23 = *(float *)(param_1 + 0x4f8) - (float)(int)auVar20._4_4_ * fVar3;
  fVar24 = *(float *)(param_1 + 0x4fc) - (float)(int)auVar20._8_4_ * fVar4;
  fVar25 = 0.0 - (float)(int)auVar20._12_4_ * fVar5;
  fVar22 = (float)(((uint)(fVar22 + fVar2) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                  (uint)(fVar22 + fVar2));
  fVar23 = (float)(((uint)(fVar23 + fVar3) ^ (uint)fVar23) & -(uint)(0.0 <= fVar23) ^
                  (uint)(fVar23 + fVar3));
  fVar24 = (float)(((uint)(fVar24 + fVar4) ^ (uint)fVar24) & -(uint)(0.0 <= fVar24) ^
                  (uint)(fVar24 + fVar4));
  fVar25 = (float)(((uint)(fVar25 + fVar5) ^ (uint)fVar25) & -(uint)(0.0 <= fVar25) ^
                  (uint)(fVar25 + fVar5));
  auVar21._4_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar23 - fVar3) ^ (uint)fVar23) &
                                 -(uint)(fRam0000000146aefad4 < fVar23) ^ (uint)fVar23) &
                               uRam0000000146aefa74));
  auVar21._0_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar22 - fVar2) ^ (uint)fVar22) &
                                 -(uint)(_DAT_146aefad0 < fVar22) ^ (uint)fVar22) & _DAT_146aefa70))
  ;
  auVar21._8_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar24 - fVar4) ^ (uint)fVar24) &
                                 -(uint)(fRam0000000146aefad8 < fVar24) ^ (uint)fVar24) &
                               uRam0000000146aefa78));
  auVar21._12_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar25 - fVar5) ^ (uint)fVar25) &
                                 -(uint)(fRam0000000146aefadc < fVar25) ^ (uint)fVar25) &
                               uRam0000000146aefa7c));
  iVar11 = movmskps(iVar11,auVar21);
  if (iVar11 == 0) {
    FString::PrintfImpl(&local_110,L"R(0)");
    iVar11 = (int)local_108;
  }
  else {
    local_138 = (undefined2 *)0x0;
    local_130 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    puVar16 = local_138;
    FGenericPlatformString::Memcpy(local_138,&DAT_145010374,6);
    bVar19 = true;
    if (1e-08 < ABS(*(float *)(param_1 + 0x4f4))) {
      FString::PrintfImpl(&local_d0,L"P=%.2f",(double)*(float *)(param_1 + 0x4f4));
      pvVar9 = local_d0;
      uVar8 = local_130;
      iVar11 = 0;
      if (local_c8 != 0) {
        iVar11 = local_c8 + -1;
      }
      if (iVar11 != 0) {
        iVar7 = (int)local_130;
        lVar15 = (longlong)(int)local_130;
        iVar12 = (uint)((int)local_130 == 0) + iVar11 + (int)local_130;
        local_130 = CONCAT44(local_130._4_4_,iVar12);
        if (local_130._4_4_ < iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,uVar8 & 0xffffffff);
          puVar16 = local_138;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)),pvVar9,(longlong)iVar11 * 2);
        (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)))[iVar11] = 0;
      }
      if (local_d0 != (void *)0x0) {
        FMemory::Free(local_d0);
      }
      bVar19 = false;
    }
    if (1e-08 < ABS(*(float *)(param_1 + 0x4f8))) {
      if (!bVar19) {
        local_148 = (undefined2 *)0x0;
        local_140 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
        puVar6 = local_148;
        FGenericPlatformString::Memcpy(local_148,&DAT_144063aa8,6);
        uVar8 = local_130;
        if (((int)local_140 != 0) && (iVar11 = (int)local_140 + -1, iVar11 != 0)) {
          iVar7 = (int)local_130;
          lVar15 = (longlong)(int)local_130;
          iVar12 = (uint)((int)local_130 == 0) + iVar11 + (int)local_130;
          local_130 = CONCAT44(local_130._4_4_,iVar12);
          if (local_130._4_4_ < iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,uVar8 & 0xffffffff);
            puVar16 = local_138;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)),puVar6,(longlong)iVar11 * 2);
          (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)))[iVar11] = 0;
        }
        if (puVar6 != (undefined2 *)0x0) {
          FMemory::Free(puVar6);
        }
      }
      FString::PrintfImpl(&local_c0,L"Y=%.2f",(double)*(float *)(param_1 + 0x4f8));
      pvVar9 = local_c0;
      uVar8 = local_130;
      iVar11 = 0;
      if (local_b8 != 0) {
        iVar11 = local_b8 + -1;
      }
      if (iVar11 != 0) {
        iVar7 = (int)local_130;
        lVar15 = (longlong)(int)local_130;
        iVar12 = (uint)((int)local_130 == 0) + iVar11 + (int)local_130;
        local_130 = CONCAT44(local_130._4_4_,iVar12);
        if (local_130._4_4_ < iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,uVar8 & 0xffffffff);
          puVar16 = local_138;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)),pvVar9,(longlong)iVar11 * 2);
        (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)))[iVar11] = 0;
      }
      if (local_c0 != (void *)0x0) {
        FMemory::Free(local_c0);
      }
      bVar19 = false;
    }
    if (1e-08 < ABS(*(float *)(param_1 + 0x4fc))) {
      if (!bVar19) {
        local_140 = 3;
        local_148 = (undefined2 *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
        puVar6 = local_148;
        FGenericPlatformString::Memcpy(local_148,&DAT_144063aa8,6);
        uVar8 = local_130;
        if (((int)local_140 != 0) && (iVar11 = (int)local_140 + -1, iVar11 != 0)) {
          iVar7 = (int)local_130;
          lVar15 = (longlong)(int)local_130;
          iVar12 = (uint)((int)local_130 == 0) + (int)local_130 + iVar11;
          local_130 = CONCAT44(local_130._4_4_,iVar12);
          if (local_130._4_4_ < iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,uVar8 & 0xffffffff);
            puVar16 = local_138;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)),puVar6,(longlong)iVar11 * 2);
          (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)))[iVar11] = 0;
        }
        if (puVar6 != (undefined2 *)0x0) {
          FMemory::Free(puVar6);
        }
      }
      FString::PrintfImpl(&local_b0,L"R=%.2f",(double)*(float *)(param_1 + 0x4fc));
      pvVar9 = local_b0;
      uVar8 = local_130;
      if (local_a8 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_a8 + -1;
      }
      if (iVar11 != 0) {
        iVar7 = (int)local_130;
        lVar15 = (longlong)(int)local_130;
        iVar12 = (uint)((int)local_130 == 0) + (int)local_130 + iVar11;
        local_130 = CONCAT44(local_130._4_4_,iVar12);
        if (local_130._4_4_ < iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,uVar8 & 0xffffffff);
          puVar16 = local_138;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)),pvVar9,(longlong)iVar11 * 2);
        (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)))[iVar11] = 0;
      }
      if (local_b0 != (void *)0x0) {
        FMemory::Free(local_b0);
      }
    }
    local_140 = 2;
    local_148 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    puVar6 = local_148;
    FGenericPlatformString::Memcpy(local_148,&DAT_144063ad0,4);
    uVar8 = local_130;
    if (((int)local_140 != 0) && (iVar11 = (int)local_140 + -1, iVar11 != 0)) {
      iVar7 = (int)local_130;
      lVar15 = (longlong)(int)local_130;
      iVar12 = (uint)((int)local_130 == 0) + iVar11 + (int)local_130;
      local_130 = CONCAT44(local_130._4_4_,iVar12);
      if (local_130._4_4_ < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,uVar8 & 0xffffffff);
        puVar16 = local_138;
      }
      _guard_xfg_dispatch_icall_nop
                (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)),puVar6,(longlong)iVar11 * 2);
      (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)))[iVar11] = 0;
    }
    if (puVar6 != (undefined2 *)0x0) {
      FMemory::Free(puVar6);
    }
    local_108 = local_130;
    iVar11 = (int)local_130;
    local_110 = puVar16;
  }
  local_138 = &DAT_143f3eda8;
  if (iVar11 != 0) {
    local_138 = local_110;
  }
  if (((0.0001 < ABS(*(float *)(param_1 + 0x4e8))) || (0.0001 < ABS(*(float *)(param_1 + 0x4ec))))
     || (0.0001 < ABS(*(float *)(param_1 + 0x4f0)))) {
    local_140 = 3;
    local_148 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    puVar16 = local_148;
    FGenericPlatformString::Memcpy(local_148,&DAT_144063a8c,6);
    bVar19 = true;
    if (1e-08 < ABS(*(float *)(param_1 + 0x4e8))) {
      FString::PrintfImpl(&local_a0,L"X=%.2f",(double)*(float *)(param_1 + 0x4e8));
      pvVar9 = local_a0;
      uVar8 = local_140;
      iVar11 = 0;
      if (local_98 != 0) {
        iVar11 = local_98 + -1;
      }
      if (iVar11 != 0) {
        iVar7 = (int)local_140;
        lVar15 = (longlong)(int)local_140;
        iVar12 = (uint)((int)local_140 == 0) + iVar11 + (int)local_140;
        local_140 = CONCAT44(local_140._4_4_,iVar12);
        if (local_140._4_4_ < iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar8 & 0xffffffff);
          puVar16 = local_148;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)),pvVar9,(longlong)iVar11 * 2);
        (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)))[iVar11] = 0;
      }
      if (local_a0 != (void *)0x0) {
        FMemory::Free(local_a0);
      }
      bVar19 = false;
    }
    if (1e-08 < ABS(*(float *)(param_1 + 0x4ec))) {
      if (!bVar19) {
        local_120 = (void *)0x0;
        local_118 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
        pvVar9 = local_120;
        FGenericPlatformString::Memcpy(local_120,&DAT_144063aa8,6);
        uVar8 = local_140;
        if (((int)local_118 != 0) && (iVar11 = (int)local_118 + -1, iVar11 != 0)) {
          iVar7 = (int)local_140;
          lVar15 = (longlong)(int)local_140;
          iVar12 = (uint)((int)local_140 == 0) + iVar11 + (int)local_140;
          local_140 = CONCAT44(local_140._4_4_,iVar12);
          if (local_140._4_4_ < iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar8 & 0xffffffff);
            puVar16 = local_148;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)),pvVar9,(longlong)iVar11 * 2);
          (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)))[iVar11] = 0;
        }
        if (pvVar9 != (void *)0x0) {
          FMemory::Free(pvVar9);
        }
      }
      FString::PrintfImpl(&local_90,L"Y=%.2f",(double)*(float *)(param_1 + 0x4ec));
      pvVar9 = local_90;
      uVar8 = local_140;
      iVar11 = 0;
      if (local_88 != 0) {
        iVar11 = local_88 + -1;
      }
      if (iVar11 != 0) {
        iVar7 = (int)local_140;
        lVar15 = (longlong)(int)local_140;
        iVar12 = (uint)((int)local_140 == 0) + iVar11 + (int)local_140;
        local_140 = CONCAT44(local_140._4_4_,iVar12);
        if (local_140._4_4_ < iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar8 & 0xffffffff);
          puVar16 = local_148;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)),pvVar9,(longlong)iVar11 * 2);
        (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)))[iVar11] = 0;
      }
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
      bVar19 = false;
    }
    if (1e-08 < ABS(*(float *)(param_1 + 0x4f0))) {
      if (!bVar19) {
        local_118 = 3;
        local_120 = (void *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
        pvVar9 = local_120;
        FGenericPlatformString::Memcpy(local_120,&DAT_144063aa8,6);
        uVar8 = local_140;
        if (((int)local_118 != 0) && (iVar11 = (int)local_118 + -1, iVar11 != 0)) {
          iVar7 = (int)local_140;
          lVar15 = (longlong)(int)local_140;
          iVar12 = (uint)((int)local_140 == 0) + (int)local_140 + iVar11;
          local_140 = CONCAT44(local_140._4_4_,iVar12);
          if (local_140._4_4_ < iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar8 & 0xffffffff);
            puVar16 = local_148;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)),pvVar9,(longlong)iVar11 * 2);
          (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)))[iVar11] = 0;
        }
        if (pvVar9 != (void *)0x0) {
          FMemory::Free(pvVar9);
        }
      }
      FString::PrintfImpl(&local_100,L"Z=%.2f",(double)*(float *)(param_1 + 0x4f0));
      puVar6 = local_100;
      uVar8 = local_140;
      if (local_f8 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_f8 + -1;
      }
      if (iVar11 != 0) {
        iVar7 = (int)local_140;
        lVar15 = (longlong)(int)local_140;
        iVar12 = (uint)((int)local_140 == 0) + (int)local_140 + iVar11;
        local_140 = CONCAT44(local_140._4_4_,iVar12);
        if (local_140._4_4_ < iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar8 & 0xffffffff);
          puVar16 = local_148;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)),puVar6,(longlong)iVar11 * 2);
        (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)))[iVar11] = 0;
      }
      if (local_100 != (undefined2 *)0x0) {
        FMemory::Free(local_100);
      }
    }
    local_118 = 2;
    local_120 = (void *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
    pvVar9 = local_120;
    FGenericPlatformString::Memcpy(local_120,&DAT_144063ad0,4);
    uVar8 = local_140;
    if (((int)local_118 != 0) && (iVar11 = (int)local_118 + -1, iVar11 != 0)) {
      iVar7 = (int)local_140;
      lVar15 = (longlong)(int)local_140;
      iVar12 = (uint)((int)local_140 == 0) + iVar11 + (int)local_140;
      local_140 = CONCAT44(local_140._4_4_,iVar12);
      if (local_140._4_4_ < iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar8 & 0xffffffff);
        puVar16 = local_148;
      }
      _guard_xfg_dispatch_icall_nop
                (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)),pvVar9,(longlong)iVar11 * 2);
      (puVar16 + (lVar15 - (ulonglong)(iVar7 != 0)))[iVar11] = 0;
    }
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    local_e8 = (int)local_140;
    local_e4 = local_140._4_4_;
    local_f0 = puVar16;
  }
  else {
    FString::PrintfImpl(&local_f0,L"V(0)");
  }
  puVar16 = &DAT_143f3eda8;
  if (local_e8 != 0) {
    puVar16 = local_f0;
  }
  FString::PrintfImpl(local_80,L"RelativeLoc: %s Rot: %s %s",puVar16,local_138,local_e0);
  lVar15 = local_d8;
  FUN_1428a6fb0(local_d8,local_80,local_128);
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  if (local_f0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_110 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar1 = *(longlong **)(param_1 + 0x4c8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 2000))(plVar1,param_2,param_3,param_4,param_5);
    if (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0) {
      cVar10 = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x550))();
      uVar18 = 1;
      if (cVar10 != '\0') goto LAB_14230c322;
    }
  }
  uVar18 = 0;
LAB_14230c322:
  FString::PrintfImpl(local_70,L"Crouched %i",uVar18);
  FUN_1428a6fb0(lVar15,local_70,local_128);
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  if (puVar17 != (undefined2 *)0x0) {
    FMemory::Free(puVar17);
  }
  return;
}



// FUNCTION 14230c3b0 FUN_14230c3b0 body=311 status=ok
// SIG undefined FUN_14230c3b0(void)

void FUN_14230c3b0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  LARGE_INTEGER local_res8;
  
  lVar4 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res8);
  uVar3 = local_res8.s.LowPart;
  lVar5 = (**(code **)(*(longlong *)(*param_1 + 0x68) + 0x20))
                    ((longlong *)(*param_1 + 0x68),&local_res8);
  uVar1 = *(undefined4 *)(lVar5 + 4);
  puVar6 = (undefined4 *)(**(code **)(*(longlong *)(*param_1 + 0x68) + 0x20))();
  puVar8 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
  uVar2 = *puVar6;
  puVar7 = puVar8 + 5;
  if (*(undefined8 **)(lVar4 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(lVar4 + 0x30);
    puVar8 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
  }
  *(undefined8 **)(lVar4 + 0x30) = puVar7;
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  **(undefined8 **)(lVar4 + 8) = puVar8;
  *(undefined8 **)(lVar4 + 8) = puVar8 + 1;
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_143f59420;
  puVar8[2] = 0;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar2;
  *(undefined4 *)(puVar8 + 4) = uVar1;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0x3f800000;
  if ((char)param_1[1] == '\0') {
    puVar7 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 0x68) + 8))();
    FUN_141a19150(lVar4,*puVar7,0,1);
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 0x68) + 8))();
    FUN_141ad74f0(lVar4,*puVar7,0,4,0x22,1);
  }
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - uVar3);
  return;
}



// FUNCTION 14230c4f0 FUN_14230c4f0 body=1822 status=ok
// SIG undefined FUN_14230c4f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14230c4f0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  double dVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined2 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  float fVar20;
  int iVar21;
  double dVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  double dVar29;
  undefined1 auStack_e8 [32];
  float local_c8;
  float fStack_c4;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  int local_70;
  undefined4 local_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x10))();
  param_1[2] = *(longlong *)(param_1[1] + 0x28);
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1[1] + 0x30);
  FString::operator=(param_1 + 5,param_3);
  lVar11 = param_1[1];
  dVar22 = (double)(int)param_1[4];
  fVar20 = (float)((double)param_1[3] - (double)param_1[2]);
  dVar29 = 1.0 / dVar22;
  *(float *)(param_1 + 7) = (float)(dVar22 / (double)param_1[2]);
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x3c) = fVar20;
  *(float *)(param_1 + 8) = (float)(dVar29 * *(double *)(lVar11 + 0xf0) * 1000.0);
  *(float *)((longlong)param_1 + 0x44) = (float)(dVar29 * *(double *)(lVar11 + 0xe0) * 1000.0);
  *(float *)(param_1 + 9) = (float)(dVar29 * *(double *)(lVar11 + 0xd8) * 1000.0);
  dVar22 = *(double *)(lVar11 + 0xf8) * 1000.0;
  param_1[10] = (longlong)dVar22;
  iVar6 = *(int *)(lVar11 + 0x100);
  *(int *)(param_1 + 0xb) = iVar6;
  param_1[0xc] = (longlong)(*(double *)(lVar11 + 0x108) * 1000.0);
  if (iVar6 < 1) {
    dVar22 = 0.0;
  }
  else {
    dVar22 = dVar22 / (double)iVar6;
  }
  param_1[0xd] = (longlong)dVar22;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(lVar11 + 0x110);
  fVar20 = 1.0 / (float)(int)param_1[4];
  *(float *)((longlong)param_1 + 0x74) = (float)*(uint *)(lVar11 + 0xa8) * fVar20 * 100.0;
  *(float *)(param_1 + 0xf) = (float)*(uint *)(lVar11 + 0xac) * fVar20 * 100.0;
  *(float *)((longlong)param_1 + 0x7c) = (float)*(uint *)(lVar11 + 0xb4) * fVar20 * 100.0;
  (**(code **)(*param_1 + 0x40))(param_1);
  lVar11 = (longlong)DAT_146aefc28;
  puVar18 = (undefined1 *)0x0;
  local_6c = 0;
  local_78 = (undefined1 *)0x0;
  local_98 = (undefined1 *)0x0;
  local_90 = 0;
  local_70 = DAT_146aefc28;
  if (0 < DAT_146aefc28) {
    TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_88);
  }
  puVar13 = local_88;
  if (local_78 != (undefined1 *)0x0) {
    puVar13 = puVar18;
  }
  _guard_xfg_dispatch_icall_nop((void *)((ulonglong)puVar13 | (ulonglong)local_78),0,lVar11 << 2);
  lVar11 = (longlong)(int)local_90;
  lVar12 = (longlong)DAT_146aefc28;
  iVar6 = (int)local_90 + DAT_146aefc28;
  local_90 = CONCAT44(local_90._4_4_,iVar6);
  if (local_90._4_4_ < iVar6) {
    TArray<int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_a8);
  }
  puVar13 = local_a8;
  if (local_98 != (undefined1 *)0x0) {
    puVar13 = local_98;
  }
  _guard_xfg_dispatch_icall_nop(puVar13 + lVar11 * 4,0,lVar12 << 2);
  lVar11 = (longlong)*(int *)(param_1[1] + 0x20);
  puVar13 = puVar18;
  if (0 < lVar11) {
    do {
      lVar12 = *(longlong *)(param_1[1] + 0x18);
      dVar22 = *(double *)(puVar13 + lVar12 + 0x10);
      iVar6 = *(int *)(puVar13 + lVar12 + 0x18);
      dVar29 = *(double *)(puVar13 + lVar12);
      local_c8 = *(float *)(puVar13 + lVar12 + 8);
      fStack_c4 = *(float *)((longlong)(puVar13 + lVar12 + 8) + 4);
      dVar5 = (double)param_1[2];
      puVar9 = puVar18;
      puVar10 = puVar18;
      if (0 < DAT_146aefc28) {
        do {
          if (dVar29 < (double)*(int *)(puVar9 + DAT_146aefc20)) {
            puVar7 = local_a8;
            if (local_98 != (undefined1 *)0x0) {
              puVar7 = local_98;
            }
            *(int *)(puVar7 + (longlong)puVar9) = *(int *)(puVar7 + (longlong)puVar9) + iVar6;
          }
          else {
            puVar7 = local_88;
            if (local_78 != (undefined1 *)0x0) {
              puVar7 = local_78;
            }
            *(float *)(puVar7 + (longlong)puVar9) =
                 (float)((dVar22 * 100.0) / dVar5) + *(float *)(puVar7 + (longlong)puVar9);
          }
          uVar14 = (int)puVar10 + 1;
          puVar9 = puVar9 + 4;
          puVar10 = (undefined1 *)(ulonglong)uVar14;
        } while ((int)uVar14 < DAT_146aefc28);
      }
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar11 = lVar11 + -1;
      puVar13 = puVar13 + 0x20;
    } while (lVar11 != 0);
  }
  puVar13 = puVar18;
  puVar9 = puVar18;
  if (0 < DAT_146aefc28) {
    do {
      lVar11 = (longlong)
               ((double)*(int *)(puVar13 + DAT_146aefc20) * *(double *)(param_1[1] + 0x28));
      puVar7 = (undefined1 *)(lVar11 - *(longlong *)(param_1[1] + 0x30));
      puVar10 = puVar18;
      if (-1 < (longlong)puVar7) {
        puVar10 = puVar7;
      }
      puVar7 = local_a8;
      if (local_98 != (undefined1 *)0x0) {
        puVar7 = local_98;
      }
      local_c8 = (float)(((double)(longlong)puVar10 * 100.0) / (double)lVar11);
      (**(code **)(*param_1 + 0x30))
                (param_1,*(int *)(puVar13 + DAT_146aefc20),
                 *(undefined4 *)(puVar7 + (longlong)puVar13));
      uVar14 = (int)puVar9 + 1;
      puVar13 = puVar13 + 4;
      puVar9 = (undefined1 *)(ulonglong)uVar14;
    } while ((int)uVar14 < DAT_146aefc28);
  }
  if ((int)param_1[6] == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = (undefined2 *)param_1[5];
  }
  FString::PrintfImpl(local_b8,L"--- Begin : Hitch chart dump for level \'%s\'",puVar16);
  (**(code **)(*param_1 + 8))(param_1,local_b8);
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  lVar11 = param_1[1];
  iVar6 = *(int *)(lVar11 + 0x50);
  puVar13 = puVar18;
  if (0 < iVar6) {
    do {
      (**(code **)(*param_1 + 0x20))(param_1,param_1[1] + 0x48,puVar13);
      uVar14 = (int)puVar13 + 1;
      puVar13 = (undefined1 *)(ulonglong)uVar14;
    } while ((int)uVar14 < iVar6);
    lVar11 = param_1[1];
  }
  (**(code **)(*param_1 + 0x28))
            (param_1,*(undefined4 *)(lVar11 + 0x60),*(undefined8 *)(lVar11 + 0x58));
  local_b8[0] = 0;
  local_b8[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
  FGenericPlatformString::Memcpy(local_b8[0],L"--- End",0x10);
  (**(code **)(*param_1 + 8))(param_1,local_b8);
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  uVar14 = *(uint *)(param_1[1] + 0x80);
  lVar11 = (longlong)(int)uVar14;
  puVar13 = puVar18;
  puVar9 = puVar18;
  uVar19 = uVar14;
  if (0 < (int)uVar14) {
    do {
      puVar10 = puVar13;
      iVar6 = 0;
      if (((longlong)puVar13 < lVar11) && (iVar6 = 0, 7 < uVar19)) {
        iVar6 = 0;
        iVar23 = 0;
        iVar25 = 0;
        iVar27 = 0;
        iVar21 = 0;
        iVar24 = 0;
        iVar26 = 0;
        iVar28 = 0;
        lVar12 = *(longlong *)(param_1[1] + 0x78);
        uVar15 = uVar19 & 0x80000007;
        if ((int)uVar15 < 0) {
          uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
        }
        puVar7 = puVar9;
        do {
          piVar1 = (int *)(puVar7 + lVar12 + 0x78);
          puVar10 = puVar10 + 8;
          piVar2 = (int *)(puVar7 + lVar12 + 0x58);
          piVar3 = (int *)(puVar7 + lVar12 + 0x38);
          piVar4 = (int *)(puVar7 + lVar12 + 0x18);
          puVar7 = puVar7 + 0x100;
          iVar6 = *piVar4 + iVar6;
          iVar23 = *piVar3 + iVar23;
          iVar25 = *piVar2 + iVar25;
          iVar27 = *piVar1 + iVar27;
          iVar21 = *(int *)(puVar7 + lVar12 + -0x68) + iVar21;
          iVar24 = *(int *)(puVar7 + lVar12 + -0x48) + iVar24;
          iVar26 = *(int *)(puVar7 + lVar12 + -0x28) + iVar26;
          iVar28 = *(int *)(puVar7 + lVar12 + -8) + iVar28;
        } while ((longlong)puVar10 < (longlong)(int)(uVar14 - uVar15));
        iVar6 = iVar6 + iVar21 + iVar25 + iVar26 + iVar23 + iVar24 + iVar27 + iVar28;
      }
      if ((longlong)puVar10 < lVar11) {
        puVar7 = puVar18;
        uVar15 = 0;
        if (1 < lVar11 - (longlong)puVar10) {
          lVar12 = (longlong)puVar10 << 5;
          lVar8 = ((lVar11 - (longlong)puVar10) - 2U >> 1) + 1;
          puVar10 = puVar10 + lVar8 * 2;
          puVar17 = puVar18;
          do {
            uVar15 = (int)puVar17 + *(int *)(*(longlong *)(param_1[1] + 0x78) + 0x18 + lVar12);
            puVar17 = (undefined1 *)(ulonglong)uVar15;
            puVar7 = (undefined1 *)
                     (ulonglong)
                     (uint)((int)puVar7 + *(int *)(*(longlong *)(param_1[1] + 0x78) + 0x38 + lVar12)
                           );
            lVar12 = lVar12 + 0x40;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        lVar12 = param_1[1];
        if ((longlong)puVar10 < lVar11) {
          iVar6 = iVar6 + *(int *)((longlong)puVar10 * 0x20 + 0x18 + *(longlong *)(lVar12 + 0x78));
        }
        iVar6 = iVar6 + (int)puVar7 + uVar15;
      }
      else {
        lVar12 = param_1[1];
      }
      (**(code **)(*param_1 + 0x38))
                (param_1,(int)*(double *)(puVar9 + *(longlong *)(lVar12 + 0x78)),
                 (100.0 / (float)*(longlong *)(lVar12 + 0x90)) * (float)iVar6);
      puVar13 = puVar13 + 1;
      puVar9 = puVar9 + 0x20;
      uVar19 = uVar19 - 1;
    } while ((longlong)puVar13 < lVar11);
  }
  if (local_98 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14230cc10 FUN_14230cc10 body=72 status=ok
// SIG undefined FUN_14230cc10(void)

void FUN_14230cc10(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)UOnlineEngineInterface::Get();
  lVar1 = *plVar2;
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014230cc55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x3b0))(plVar2,uVar3);
  return;
}



// FUNCTION 14230cc60 FUN_14230cc60 body=72 status=ok
// SIG undefined FUN_14230cc60(void)

void FUN_14230cc60(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)UOnlineEngineInterface::Get();
  lVar1 = *plVar2;
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014230cca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x398))(plVar2,uVar3);
  return;
}



// FUNCTION 14230ccb0 FUN_14230ccb0 body=72 status=ok
// SIG undefined FUN_14230ccb0(void)

void FUN_14230ccb0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)UOnlineEngineInterface::Get();
  lVar1 = *plVar2;
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014230ccf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x3a0))(plVar2,uVar3);
  return;
}



// FUNCTION 14230cd00 FUN_14230cd00 body=72 status=ok
// SIG undefined FUN_14230cd00(void)

void FUN_14230cd00(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)UOnlineEngineInterface::Get();
  lVar1 = *plVar2;
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014230cd45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x3a8))(plVar2,uVar3);
  return;
}



// FUNCTION 14230cd50 FUN_14230cd50 body=265 status=ok
// SIG undefined FUN_14230cd50(void)

void FUN_14230cd50(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_38 [24];
  longlong local_20;
  
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar6 = (longlong *)param_1[4];
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  if ((((plVar6 != (longlong *)0x0) && (plVar6[0xa1] != 0)) &&
      ((*(uint *)((longlong)plVar6 + 0x4cc) >> 1 & 1) != 0)) &&
     (cVar2 = (**(code **)(*plVar6 + 0x768))(plVar6), cVar2 != '\0')) {
    plVar5 = (longlong *)param_1[5];
    if (plVar5 == (longlong *)0x0) {
      FActorSpawnParameters::FActorSpawnParameters(local_38);
      local_20 = plVar6[0x2a];
      if (param_1[6] != 0) {
        lVar3 = FUN_1429238e0();
        lVar7 = param_1[6];
        for (lVar1 = lVar7; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar3) goto LAB_14230cdf6;
        }
      }
      lVar7 = 0;
LAB_14230cdf6:
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar5 = (longlong *)UWorld::SpawnActor(uVar4,lVar7,0,0,local_38);
      param_1[5] = (longlong)plVar5;
      if (plVar5 == (longlong *)0x0) {
        return;
      }
    }
    (**(code **)(*plVar5 + 0xf30))(plVar5,plVar6);
    (**(code **)(*(longlong *)plVar6[0xa1] + 0x278))((longlong *)plVar6[0xa1],param_1[5]);
  }
  return;
}



// FUNCTION 14230ce60 FUN_14230ce60 body=219 status=ok
// SIG undefined FUN_14230ce60(void)

ulonglong FUN_14230ce60(float *param_1,float *param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if ((((((*param_2 == *param_1) && (param_2[1] == param_1[1])) && (param_2[2] == param_1[2])) &&
       (((param_2[3] == param_1[3] && (param_2[4] == param_1[4])) &&
        ((param_2[5] == param_1[5] && ((param_2[6] == param_1[6] && (param_2[9] == param_1[9])))))))
       ) && (param_2[10] == param_1[10])) &&
     ((param_2[0xb] == param_1[0xb] && (param_2[0xc] == param_1[0xc])))) {
    uVar1 = (uint)param_2[0xd] ^ (uint)param_1[0xd];
    in_RAX = (ulonglong)uVar1;
    if ((((uVar1 & 1) == 0) &&
        ((((((uint)param_2[0xd] ^ (uint)param_1[0xd]) & 2) == 0 &&
          (in_RAX = 0, *(char *)(param_1 + 0xe) == *(char *)(param_2 + 0xe))) &&
         (param_2[400] == param_1[400])))) && (param_2[0x191] == param_1[0x191])) {
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14230cf40 FUN_14230cf40 body=237 status=ok
// SIG undefined FUN_14230cf40(void)

void FUN_14230cf40(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14230c3b0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_14503d640;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14230d030 FUN_14230d030 body=640 status=ok
// SIG undefined FUN_14230d030(void)

void FUN_14230d030(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_28 [2];
  longlong local_18 [2];
  
  FUN_1416a0990(param_1 + 0xd0,param_1 + 0xe0);
  FString::TrimStartAndEndInline(param_1 + 0xd0);
  FString::TrimStartAndEndInline(param_1 + 0xe0);
  uVar2 = FUN_14169da10(local_18);
  plVar3 = (longlong *)FString::TrimStartAndEnd(uVar2,local_28);
  plVar1 = (longlong *)(param_1 + 0xf0);
  if (plVar1 != plVar3) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar3;
    *plVar3 = 0;
    *(int *)(param_1 + 0xf8) = (int)plVar3[1];
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)((longlong)plVar3 + 0xc);
    plVar3[1] = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  uVar2 = FUN_14169d9a0(local_28);
  plVar3 = (longlong *)FString::TrimStartAndEnd(uVar2,local_18);
  plVar1 = (longlong *)(param_1 + 0x100);
  if (plVar1 != plVar3) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar3;
    *plVar3 = 0;
    *(int *)(param_1 + 0x108) = (int)plVar3[1];
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)((longlong)plVar3 + 0xc);
    plVar3[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  uVar2 = FUN_1416a0f20(local_28);
  plVar3 = (longlong *)FString::TrimStartAndEnd(uVar2,local_18);
  plVar1 = (longlong *)(param_1 + 0x110);
  if (plVar1 != plVar3) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar3;
    *plVar3 = 0;
    *(int *)(param_1 + 0x118) = (int)plVar3[1];
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)((longlong)plVar3 + 0xc);
    plVar3[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)FString::TrimStartAndEnd(&DAT_146ab6ae8,local_18);
  plVar1 = (longlong *)(param_1 + 0x120);
  if (plVar1 != plVar3) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar3;
    *plVar3 = 0;
    *(int *)(param_1 + 0x128) = (int)plVar3[1];
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)((longlong)plVar3 + 0xc);
    plVar3[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  lVar4 = FUN_142874ac0(DAT_146b17150);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar4 + 0x30);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar4 + 0x34);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(lVar4 + 0x38);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(lVar4 + 0x3c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar4 + 0x40);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(lVar4 + 0x44);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(lVar4 + 0x48);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(lVar4 + 0x4c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(lVar4 + 0x50);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(lVar4 + 0x54);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0xa8,lVar4 + 0x58);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0xb8,lVar4 + 0x68);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar4 + 0x78);
  return;
}



// FUNCTION 14230d2b0 FUN_14230d2b0 body=614 status=ok
// SIG undefined FUN_14230d2b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14230d2b0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong local_48;
  
  iVar11 = (int)param_2[1];
  iVar8 = iVar11 + -1;
  lVar13 = (longlong)iVar8;
  if (-1 < iVar8) {
    do {
      lVar15 = lVar13 * 0x60;
      iVar11 = iVar8 + -1;
      lVar10 = *param_2;
      if (-1 < iVar11) {
        lVar9 = (longlong)iVar11 * 0x60;
        do {
          lVar2 = *(longlong *)(lVar15 + lVar10);
          if ((lVar2 != 0) && (lVar2 == *(longlong *)(lVar9 + *param_2))) {
            TArray<FCollisionResponseTemplate,FDefaultAllocator>::RemoveAtImpl(param_2,iVar11,1,1);
            iVar8 = iVar8 + -1;
            lVar13 = lVar13 + -1;
            iVar11 = iVar11 + -1;
            lVar9 = lVar9 + -0x60;
          }
          lVar9 = lVar9 + -0x60;
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
      }
      iVar8 = iVar8 + -1;
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
    iVar11 = (int)param_2[1];
  }
  iVar8 = 0;
  if (0 < iVar11) {
    local_48 = 0;
    do {
      plVar14 = (longlong *)(*param_2 + local_48);
      if (plVar14[2] == 0) {
LAB_14230d40a:
        uVar5 = uRam0000000146aefe54;
        uVar4 = uRam0000000146aefe50;
        uVar3 = uRam0000000146aefe4c;
        *(undefined4 *)((longlong)plVar14 + 0x39) = _DAT_146aefe48;
        *(undefined4 *)((longlong)plVar14 + 0x3d) = uVar3;
        *(undefined4 *)((longlong)plVar14 + 0x41) = uVar4;
        *(undefined4 *)((longlong)plVar14 + 0x45) = uVar5;
        uVar6 = uRam0000000146aefe60;
        *(undefined8 *)((longlong)plVar14 + 0x49) = _DAT_146aefe58;
        *(undefined8 *)((longlong)plVar14 + 0x51) = uVar6;
        for (iVar11 = 0; (-1 < iVar11 && (iVar11 < (int)plVar14[4])); iVar11 = iVar11 + 1) {
          lVar13 = plVar14[3];
          iVar12 = UCollisionProfile::ReturnContainerIndexFromChannelName(param_1);
          if (iVar12 != -1) {
            *(undefined1 *)((longlong)iVar12 + 0x39 + (longlong)plVar14) =
                 *(undefined1 *)((longlong)iVar11 * 0x10 + lVar13 + 8);
          }
        }
        iVar11 = 0;
LAB_14230d470:
        if ((-1 < iVar11) && (iVar11 < (int)param_5[1])) {
          if (*(longlong *)(*param_5 + (longlong)iVar11 * 0x18) != *plVar14)
          goto code_r0x00014230d496;
          lVar13 = (longlong)iVar11 * 0x18 + *param_5;
          for (iVar11 = 0; (-1 < iVar11 && (iVar11 < *(int *)(lVar13 + 0x10))); iVar11 = iVar11 + 1)
          {
            lVar10 = (longlong)iVar11 * 0x10 + *(longlong *)(lVar13 + 8);
            iVar12 = UCollisionProfile::ReturnContainerIndexFromChannelName(param_1,lVar10);
            if (iVar12 != -1) {
              *(undefined1 *)((longlong)iVar12 + 0x39 + (longlong)plVar14) =
                   *(undefined1 *)(lVar10 + 8);
            }
          }
        }
        goto LAB_14230d4e8;
      }
      iVar11 = UCollisionProfile::ReturnContainerIndexFromChannelName(param_1);
      if ((iVar11 != -1) && (iVar11 < 0x21)) {
        piVar7 = *(int **)(param_1 + 0x138);
        iVar12 = 0;
        piVar1 = piVar7 + *(int *)(param_1 + 0x140);
        for (; piVar7 != piVar1; piVar7 = piVar7 + 1) {
          if (*piVar7 == iVar11) {
            if (iVar12 != 0x20) {
              *(char *)((longlong)plVar14 + 9) = (char)iVar11;
              goto LAB_14230d40a;
            }
            break;
          }
          iVar12 = iVar12 + 1;
        }
      }
      TArray<FCollisionResponseTemplate,FDefaultAllocator>::RemoveAtImpl(param_2,iVar8,1,1);
      iVar8 = iVar8 + -1;
      local_48 = local_48 + -0x60;
LAB_14230d4e8:
      local_48 = local_48 + 0x60;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)param_2[1]);
  }
  return;
code_r0x00014230d496:
  iVar11 = iVar11 + 1;
  goto LAB_14230d470;
}



// FUNCTION 14230d520 FUN_14230d520 body=137 status=ok
// SIG undefined FUN_14230d520(void)

wchar_t * FUN_14230d520(wchar_t *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_1428dfc70();
    lVar4 = param_2;
    do {
      if (lVar4 == lVar2) goto LAB_14230d550;
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  param_2 = 0;
LAB_14230d550:
  if ((*(int *)(*(longlong *)(param_1 + 8) + 0x90) < *(int *)(param_2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) + (longlong)*(int *)(param_2 + 0x90) * 8)
      != param_2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    pwVar3 = AK::MemoryMgr::GetPoolName((long)param_1);
    return pwVar3;
  }
  return param_1;
}



// FUNCTION 14230d5b0 FindBoxOpposingNormal body=1184 status=ok
// SIG undefined FindBoxOpposingNormal(void)

float * FindBoxOpposingNormal(float *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  
  if ((*(byte *)(param_2 + 3) >> 1 & 1) == 0) {
    fVar1 = *(float *)(param_4 + 1);
    *(undefined8 *)param_1 = *param_4;
    param_1[2] = fVar1;
    return param_1;
  }
  local_d8 = 3;
  local_d0 = 0;
  (**(code **)(*(longlong *)param_2[1] + 0x48))((longlong *)param_2[1],&local_d8);
  physx::PxShapeExt::getGlobalPose(&local_c8,param_2[1],*param_2);
  fVar4 = *(float *)(param_2 + 5) + *(float *)(param_2 + 5);
  fVar3 = *(float *)((longlong)param_2 + 0x2c) + *(float *)((longlong)param_2 + 0x2c);
  fVar1 = *(float *)(param_2 + 6) + *(float *)(param_2 + 6);
  fVar9 = local_bc * local_bc - 0.5;
  fVar2 = local_c4 * fVar3 + local_c8 * fVar4 + local_c0 * fVar1;
  fVar5 = (fVar9 * fVar4 - (local_c4 * fVar1 - local_c0 * fVar3) * local_bc) + local_c8 * fVar2;
  fVar10 = (fVar9 * fVar3 - (local_c0 * fVar4 - local_c8 * fVar1) * local_bc) + local_c4 * fVar2;
  fVar6 = (fVar9 * fVar1 - (local_c8 * fVar3 - local_c4 * fVar4) * local_bc) + local_c0 * fVar2;
  fVar4 = *param_3 + *param_3;
  fVar3 = param_3[1] + param_3[1];
  fVar1 = param_3[2] + param_3[2];
  fVar2 = local_c4 * fVar3 + local_c8 * fVar4 + local_c0 * fVar1;
  fVar7 = (fVar9 * fVar4 - (local_c4 * fVar1 - local_c0 * fVar3) * local_bc) + local_c8 * fVar2;
  fVar8 = (fVar9 * fVar3 - (local_c0 * fVar4 - local_c8 * fVar1) * local_bc) + local_c4 * fVar2;
  fVar4 = (fVar9 * fVar1 - (local_c8 * fVar3 - local_c4 * fVar4) * local_bc) + local_c0 * fVar2;
  fVar3 = 3.4028235e+38;
  fVar1 = fVar10;
  fVar2 = fVar6;
  if (fVar5 <= 0.0001) {
    if ((fVar5 < -0.0001) && (fVar7 = -fVar7, fVar7 < 3.4028235e+38)) {
      fVar5 = -1.0;
      goto LAB_14230d8a1;
    }
  }
  else {
    fVar3 = 3.4028235e+38;
    if (fVar7 < 3.4028235e+38) {
      fVar5 = 1.0;
LAB_14230d8a1:
      fVar1 = 0.0;
      fVar2 = 0.0;
      fVar3 = fVar7;
    }
  }
  if (fVar10 <= 0.0001) {
    if ((fVar10 < -0.0001) && (fVar8 = -fVar8, fVar8 < fVar3)) {
      fVar1 = -1.0;
      goto LAB_14230d8d3;
    }
  }
  else if (fVar8 < fVar3) {
    fVar1 = 1.0;
LAB_14230d8d3:
    fVar5 = 0.0;
    fVar2 = 0.0;
    fVar3 = fVar8;
  }
  if (fVar6 <= 0.0001) {
    if ((-0.0001 <= fVar6) || (fVar3 <= -fVar4)) goto LAB_14230d924;
    fVar2 = -1.0;
  }
  else {
    if (fVar3 <= fVar4) goto LAB_14230d924;
    fVar2 = 1.0;
  }
  fVar5 = 0.0;
  fVar1 = 0.0;
LAB_14230d924:
  fVar2 = fVar2 * 2.0;
  fVar5 = fVar5 + fVar5;
  fVar1 = fVar1 * 2.0;
  fVar3 = local_c4 * fVar1 + local_c8 * fVar5 + local_c0 * fVar2;
  *param_1 = (local_c4 * fVar2 - local_c0 * fVar1) * local_bc + fVar9 * fVar5 + local_c8 * fVar3;
  param_1[2] = (local_c8 * fVar1 - local_c4 * fVar5) * local_bc + fVar9 * fVar2 + local_c0 * fVar3;
  param_1[1] = (local_c0 * fVar5 - local_c8 * fVar2) * local_bc + fVar9 * fVar1 + local_c4 * fVar3;
  return param_1;
}



// FUNCTION 14230da50 FUN_14230da50 body=189 status=ok
// SIG undefined FUN_14230da50(void)

undefined8 FUN_14230da50(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((*(longlong *)(param_1 + 0x4c0) != 0) && (param_2 != 0)) {
    lVar2 = FUN_1428e7a40();
    lVar6 = param_2;
    do {
      if (lVar6 == lVar2) {
        lVar6 = *(longlong *)(param_1 + 0x4c0);
        lVar4 = FUN_1428e7a40();
        lVar2 = param_2;
        goto LAB_14230dab0;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  goto LAB_14230da85;
  while (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0) {
LAB_14230dab0:
    lVar5 = param_2;
    if (lVar2 == lVar4) goto LAB_14230dac5;
  }
  lVar5 = 0;
LAB_14230dac5:
  lVar6 = *(longlong *)(lVar6 + 0x10);
  if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return *(undefined8 *)(param_1 + 0x4c0);
  }
LAB_14230da85:
  uVar3 = AActor::FindComponentByClass(param_1,param_2);
  return uVar3;
}



// FUNCTION 14230db10 FindConvexMeshOpposingNormal body=742 status=ok
// SIG undefined FindConvexMeshOpposingNormal(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FindConvexMeshOpposingNormal
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_138 [32];
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  longlong *local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  float local_a8;
  float local_a4;
  float local_a0;
  ulonglong local_90;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(int *)(param_2 + 2) != -1) {
    fVar4 = 0.0;
    local_d8 = 4;
    local_d4 = 0x3f800000;
    uStack_d0 = 0x3f800000;
    uStack_cc = 0x3f800000;
    uStack_c8 = 0;
    local_c4 = 0;
    local_bc = 0x3f800000;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_af = 0;
    local_ad = 0;
    (**(code **)(*(longlong *)param_2[1] + 0x68))((longlong *)param_2[1],&local_d8);
    if ((local_b8 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*local_b8 + 0x48))(local_b8,*(undefined4 *)(param_2 + 2),&local_a8),
       cVar2 != '\0')) {
      local_100 = 0.0;
      fVar3 = local_a4 * local_a4 + local_a8 * local_a8 + local_a0 * local_a0;
      if (fVar3 <= 0.0) {
        local_108 = 0.0;
      }
      else {
        local_108 = 1.0 / SQRT(fVar3);
        fVar4 = local_108 * local_a4;
        local_100 = local_108 * local_a0;
        local_108 = local_108 * local_a8;
      }
      local_104 = fVar4;
      TransformNormalToShapeSpace(&local_118,&local_d4,&local_108);
      physx::PxShapeExt::getGlobalPose(&local_f8,param_2[1],*param_2);
      local_110 = local_110 * 2.0;
      local_118 = local_118 * 2.0;
      local_114 = local_114 * 2.0;
      fVar3 = local_ec * local_ec - 0.5;
      fVar4 = local_f4 * local_114 + local_f8 * local_118 + local_f0 * local_110;
      *param_1 = CONCAT44((local_f0 * local_118 - local_f8 * local_110) * local_ec +
                          fVar3 * local_114 + local_f4 * fVar4,
                          (local_f4 * local_110 - local_f0 * local_114) * local_ec +
                          fVar3 * local_118 + local_f8 * fVar4);
      *(float *)(param_1 + 1) =
           (local_f8 * local_114 - local_f4 * local_118) * local_ec + fVar3 * local_110 +
           local_f0 * fVar4;
      return param_1;
    }
  }
  uVar1 = *(undefined4 *)(param_4 + 1);
  *param_1 = *param_4;
  *(undefined4 *)(param_1 + 1) = uVar1;
  return param_1;
}



// FUNCTION 14230de00 FindFaceIndex body=2463 status=ok
// SIG undefined FindFaceIndex(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FindFaceIndex(undefined8 *param_1,float *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
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
  undefined1 auStack_1a8 [32];
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined1 local_140 [28];
  undefined1 local_124 [28];
  undefined4 local_108;
  float local_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined8 local_f4;
  float local_ec;
  longlong *local_e8;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  ulonglong local_c0;
  
  local_c0 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar7 = 0;
  local_108 = 4;
  local_104 = 1.0;
  fStack_100 = 1.0;
  fStack_fc = 1.0;
  fStack_f8 = 0.0;
  local_f4 = 0;
  local_ec = 1.0;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_df = 0;
  local_dd = 0;
  cVar2 = (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],&local_108);
  if (cVar2 == '\0') {
    uVar4 = *(uint *)(param_1 + 2);
  }
  else {
    lVar5 = (**(code **)(*(longlong *)param_1[1] + 0x90))((longlong *)param_1[1],local_140);
    pfVar6 = (float *)(**(code **)(*(longlong *)*param_1 + 0xa0))((longlong *)*param_1,local_124);
    fVar28 = *(float *)(lVar5 + 0x10) + *(float *)(lVar5 + 0x10);
    fVar21 = *(float *)(lVar5 + 0x14) + *(float *)(lVar5 + 0x14);
    fVar12 = pfVar6[3];
    fVar25 = *(float *)(lVar5 + 0x18) + *(float *)(lVar5 + 0x18);
    fVar14 = pfVar6[1];
    fVar10 = *pfVar6;
    fVar11 = pfVar6[2];
    fVar23 = fVar12 * fVar12 - 0.5;
    fVar13 = fVar10 * fVar28 + fVar14 * fVar21 + fVar11 * fVar25;
    fVar19 = pfVar6[4];
    fVar15 = pfVar6[6];
    fVar16 = pfVar6[5];
    pfVar6 = (float *)physx::PxQuat::operator*(pfVar6,&local_d8,lVar5);
    fVar17 = pfVar6[1];
    fVar20 = pfVar6[3];
    fVar18 = *param_2;
    fVar27 = *pfVar6;
    fVar29 = param_2[1];
    fVar24 = fVar18 + fVar18;
    fVar30 = param_2[2];
    fVar26 = fVar29 + fVar29;
    fVar18 = (*(float *)((longlong)param_1 + 0x1c) - fVar18 * 0.01) -
             ((fVar14 * fVar25 - fVar11 * fVar21) * fVar12 + fVar23 * fVar28 + fVar10 * fVar13 +
             fVar19);
    fVar22 = fVar30 + fVar30;
    fVar18 = fVar18 + fVar18;
    fVar31 = fVar20 * fVar20 - 0.5;
    fVar16 = (*(float *)(param_1 + 4) - fVar29 * 0.01) -
             ((fVar11 * fVar28 - fVar10 * fVar25) * fVar12 + fVar23 * fVar21 + fVar14 * fVar13 +
             fVar16);
    fVar19 = pfVar6[2];
    fVar14 = (*(float *)((longlong)param_1 + 0x24) - fVar30 * 0.01) -
             ((fVar10 * fVar21 - fVar14 * fVar28) * fVar12 + fVar23 * fVar25 + fVar11 * fVar13 +
             fVar15);
    fVar16 = fVar16 + fVar16;
    fVar14 = fVar14 + fVar14;
    fVar12 = fVar17 * fVar16 + fVar27 * fVar18 + fVar19 * fVar14;
    local_148 = (fVar31 * fVar18 - (fVar17 * fVar14 - fVar19 * fVar16) * fVar20) + fVar27 * fVar12;
    local_14c = (fVar31 * fVar16 - (fVar19 * fVar18 - fVar27 * fVar14) * fVar20) + fVar17 * fVar12;
    local_144 = (fVar31 * fVar14 - (fVar27 * fVar16 - fVar17 * fVar18) * fVar20) + fVar12 * fVar19;
    fVar12 = fVar26 * fVar17 + fVar24 * fVar27 + fVar22 * fVar19;
    local_154 = (fVar31 * fVar24 - (fVar22 * fVar17 - fVar26 * fVar19) * fVar20) + fVar27 * fVar12;
    fVar10 = fStack_f8 + fStack_f8;
    local_150 = (fVar31 * fVar26 - (fVar24 * fVar19 - fVar22 * fVar27) * fVar20) + fVar17 * fVar12;
    local_158 = (fVar31 * fVar22 - (fVar26 * fVar27 - fVar24 * fVar17) * fVar20) + fVar12 * fVar19;
    fVar15 = (float)local_f4 + (float)local_f4;
    fVar12 = local_ec * (local_f4._4_4_ + local_f4._4_4_);
    fVar27 = 1.0 - fStack_f8 * fVar10;
    fVar19 = local_f4._4_4_ * (local_f4._4_4_ + local_f4._4_4_);
    fVar29 = fVar12 + (float)local_f4 * fVar10;
    fVar21 = (1.0 - (float)local_f4 * fVar15) - fVar19;
    fVar16 = local_f4._4_4_ * fVar10 - local_ec * fVar15;
    fVar12 = (float)local_f4 * fVar10 - fVar12;
    fVar19 = fVar27 - fVar19;
    fVar24 = local_f4._4_4_ * fVar15 - local_ec * fVar10;
    fVar14 = 1.0 / local_104;
    fVar20 = local_f4._4_4_ * fVar15 + local_ec * fVar10;
    fVar22 = fVar21 * fVar14;
    fVar11 = 1.0 / fStack_100;
    fVar27 = fVar27 - (float)local_f4 * fVar15;
    fVar23 = fVar12 * fVar14;
    fVar30 = fVar29 * fVar11;
    fVar17 = 1.0 / fStack_fc;
    fVar13 = fVar19 * fVar11;
    fVar18 = fVar17 * fVar16;
    local_164 = fVar17 * fVar27;
    fVar10 = local_ec * fVar15 + local_f4._4_4_ * fVar10;
    fVar17 = fVar17 * fVar20;
    fVar11 = fVar24 * fVar11;
    local_15c = local_164 * fVar27;
    fVar14 = fVar10 * fVar14;
    local_160 = local_164 * fVar20;
    local_17c = fVar10 * fVar22 + fVar24 * fVar30 + fVar27 * fVar18;
    local_178 = fVar10 * fVar23 + fVar24 * fVar13 + fVar27 * fVar17;
    local_170 = fVar12 * fVar22 + fVar19 * fVar30 + fVar20 * fVar18;
    local_188 = fVar12 * fVar14 + fVar19 * fVar11;
    local_180 = fVar12 * fVar23 + fVar19 * fVar13 + fVar20 * fVar17;
    local_184 = fVar10 * fVar14 + fVar24 * fVar11 + local_15c;
    fVar20 = local_188 + local_160;
    local_16c = fVar21 * fVar22 + fVar29 * fVar30 + fVar16 * fVar18;
    fVar15 = fVar21 * fVar14 + fVar29 * fVar11 + local_164 * fVar16;
    local_168 = fVar21 * fVar23 + fVar29 * fVar13 + fVar16 * fVar17;
    local_174 = fVar15;
    uVar3 = (**(code **)(*local_e8 + 0x40))();
    fVar19 = local_150;
    fVar11 = local_154;
    fVar10 = local_158;
    fVar14 = local_184;
    fVar12 = -3.4028235e+38;
    bVar1 = false;
    fVar16 = 3.4028235e+38;
    uVar4 = uVar7;
    uVar9 = uVar7;
    uVar8 = uVar7;
    if (uVar3 != 0) {
      do {
        (**(code **)(*local_e8 + 0x48))(local_e8,uVar7,&local_d8);
        fVar29 = local_d4 * local_168 + local_d8 * local_16c + fVar15 * local_d0;
        fVar27 = local_d4 * local_178 + local_d8 * local_17c + fVar14 * local_d0;
        fVar30 = local_d4 * local_180 + local_d8 * local_170 + fVar20 * local_d0;
        fVar18 = 1.0 / SQRT(fVar30 * fVar30 + fVar29 * fVar29 + fVar27 * fVar27);
        fVar17 = fVar30 * fVar18 * local_14c + fVar29 * fVar18 * local_148 +
                 fVar27 * fVar18 * local_144 + local_cc * fVar18;
        uVar4 = uVar7;
        fVar15 = fVar17;
        if (fVar17 <= fVar12) {
          uVar4 = uVar9;
          fVar15 = fVar12;
        }
        fVar12 = fVar15;
        if ((-1.0 <= fVar17) &&
           (fVar15 = fVar19 * fVar30 * fVar18 + fVar11 * fVar29 * fVar18 + fVar10 * fVar27 * fVar18,
           fVar15 < fVar16)) {
          bVar1 = true;
          fVar16 = fVar15;
          uVar8 = uVar7;
        }
        uVar7 = uVar7 + 1;
        fVar15 = local_174;
        uVar9 = uVar4;
      } while (uVar7 < uVar3);
      if (bVar1) {
        uVar4 = uVar8;
      }
    }
  }
  return uVar4;
}



// FUNCTION 14230e7a0 FUN_14230e7a0 body=755 status=ok
// SIG undefined FUN_14230e7a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_14230e7a0(float *param_1,ulonglong param_2,undefined8 *param_3,undefined8 param_4,
                     undefined8 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStackY_118 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  PxTransform local_d8 [32];
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStackY_118;
  if ((param_2 & 0xfffffffd) == 0) {
    uVar2 = (**(code **)(*(longlong *)param_3[1] + 0x30))();
    switch(uVar2) {
    case 0:
    case 2:
      fVar3 = *(float *)(param_5 + 1);
      *(undefined8 *)param_1 = *param_5;
      param_1[2] = fVar3;
      break;
    default:
      goto switchD_14230e7fe_caseD_1;
    case 3:
      local_e8 = *param_5;
      local_e0 = *(undefined4 *)(param_5 + 1);
      FindBoxOpposingNormal(param_1,param_3,param_4,&local_e8);
      break;
    case 4:
      local_e8 = *param_5;
      local_e0 = *(undefined4 *)(param_5 + 1);
      FindConvexMeshOpposingNormal(param_1,param_3,param_4,&local_e8);
      break;
    case 5:
      local_e8 = *param_5;
      local_e0 = *(undefined4 *)(param_5 + 1);
      FindTriMeshOpposingNormal(param_1,param_3,param_4,&local_e8);
      break;
    case 6:
      if (*(int *)(param_3 + 2) != -1) {
        local_b8[0] = 6;
        local_b0 = 0;
        local_a8 = 0x3f800000;
        local_a4 = 0x3f800000;
        local_a0 = 0x3f800000;
        (**(code **)(*(longlong *)param_3[1] + 0x78))((longlong *)param_3[1],local_b8);
        if (local_b0 != 0) {
          uVar1 = *(uint *)(param_3 + 2);
          physx::PxShapeExt::getGlobalPose(local_d8,param_3[1],*param_3);
          physx::PxMeshQuery::getTriangle
                    ((PxHeightFieldGeometry *)local_b8,local_d8,uVar1,(PxTriangle *)&local_98,
                     (uint *)0x0,(uint *)0x0);
          fVar6 = (local_88 - local_94) * (local_78 - local_90) -
                  (local_84 - local_90) * (local_7c - local_94);
          fVar5 = (local_8c - local_98) * (local_7c - local_94) -
                  (local_88 - local_94) * (local_80 - local_98);
          fVar4 = (local_84 - local_90) * (local_80 - local_98) -
                  (local_8c - local_98) * (local_78 - local_90);
          fVar3 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
          if (0.0 < fVar3) {
            fVar3 = 1.0 / fVar3;
            fVar6 = fVar6 * fVar3;
            fVar4 = fVar4 * fVar3;
            fVar5 = fVar5 * fVar3;
          }
          *param_1 = fVar6;
          param_1[1] = fVar4;
          param_1[2] = fVar5;
          return param_1;
        }
      }
      fVar3 = *(float *)(param_5 + 1);
      *(undefined8 *)param_1 = *param_5;
      param_1[2] = fVar3;
    }
  }
  else {
switchD_14230e7fe_caseD_1:
    fVar3 = *(float *)(param_5 + 1);
    *(undefined8 *)param_1 = *param_5;
    param_1[2] = fVar3;
  }
  return param_1;
}



// FUNCTION 14230eab0 FUN_14230eab0 body=334 status=ok
// SIG undefined FUN_14230eab0(void)

int * FUN_14230eab0(longlong param_1,int *param_2,ulonglong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x808) != *(int *)(param_1 + 0x82c)) {
    iVar5 = (int)(*param_3 >> 4);
    uVar4 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
    uVar2 = -(uVar4 + iVar5) ^ uVar4 >> 0xd;
    uVar6 = (iVar5 - uVar4) - uVar2 ^ uVar2 >> 0xc;
    uVar4 = (uVar4 - uVar6) - uVar2 ^ uVar6 << 0x10;
    uVar2 = (uVar2 - uVar4) - uVar6 ^ uVar4 >> 5;
    uVar6 = (uVar6 - uVar4) - uVar2 ^ uVar2 >> 3;
    uVar4 = (uVar4 - uVar6) - uVar2 ^ uVar6 << 10;
    lVar1 = *(longlong *)(param_1 + 0x8b0);
    if (*(longlong *)(param_1 + 0x8b0) == 0) {
      lVar1 = param_1 + 0x830;
    }
    iVar5 = *(int *)(lVar1 + (((longlong)(int)((uVar2 - uVar4) - uVar6) ^ (ulonglong)(uVar4 >> 0xf)
                              ^ (longlong)(int)param_3[1]) &
                             (longlong)*(int *)(param_1 + 0x8b8) - 1U) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x800);
      if (*(longlong *)(param_1 + 0x800) == 0) {
        lVar1 = param_1;
      }
      do {
        lVar3 = (longlong)iVar5 * 0x20;
        if ((*(int *)(lVar3 + 8 + lVar1) == (int)param_3[1]) &&
           (*(ulonglong *)(lVar3 + lVar1) == *param_3)) {
          *param_2 = iVar5;
          return param_2;
        }
        iVar5 = *(int *)(lVar3 + 0x18 + lVar1);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14230ec00 FindOverlappedTriangleNormal body=420 status=ok
// SIG undefined FindOverlappedTriangleNormal(void)

ulonglong FindOverlappedTriangleNormal
                    (undefined8 param_1,int *param_2,undefined8 param_3,longlong *param_4,
                    undefined8 param_5,undefined8 param_6,float param_7,undefined1 param_8)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 local_res20;
  float local_res24;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if ((param_4 == (longlong *)0x0) ||
     ((in_RAX = (**(code **)(*param_4 + 0x30))(param_4), (int)in_RAX != 5 &&
      (in_RAX = (**(code **)(*param_4 + 0x30))(param_4), (int)in_RAX != 6)))) {
LAB_14230ed8d:
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    if (param_7 <= 0.0) {
      uVar2 = FindOverlappedTriangleNormal_Internal
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_8);
      return uVar2;
    }
    iVar1 = *param_2;
    if (iVar1 == 0) {
      local_res24 = param_7 + (float)param_2[1];
      local_res20 = 0;
      puVar3 = &local_res20;
    }
    else {
      if (iVar1 == 2) {
        local_14 = param_7 + (float)param_2[1];
        local_10 = (float)param_2[2];
        local_18 = 2;
        uVar2 = FindOverlappedTriangleNormal_Internal
                          (param_1,&local_18,param_3,param_4,param_5,param_6,param_8);
        return uVar2;
      }
      if (iVar1 != 3) goto LAB_14230ed8d;
      local_18 = 3;
      local_14 = param_7 + (float)param_2[1];
      puVar3 = &local_18;
      local_10 = param_7 + (float)param_2[2];
      local_c = param_7 + (float)param_2[3];
    }
    uVar2 = FindOverlappedTriangleNormal_Internal
                      (param_1,puVar3,param_3,param_4,param_5,param_6,param_8);
  }
  return uVar2;
}



// FUNCTION 14230edb0 FindOverlappedTriangleNormal_Internal body=467 status=ok
// SIG undefined FindOverlappedTriangleNormal_Internal(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FindOverlappedTriangleNormal_Internal
                    (undefined8 param_1,PxGeometry *param_2,PxTransform *param_3,longlong *param_4,
                    PxTransform *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 *puVar6;
  undefined1 auStackY_1f8 [32];
  bool local_1a8 [4];
  undefined1 local_1a4 [12];
  undefined4 local_198 [2];
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined8 local_164;
  undefined8 local_15c;
  undefined8 local_150;
  uint local_148 [64];
  ulonglong local_48;
  
  uVar5 = DAT_1468387a8 ^ (ulonglong)auStackY_1f8;
  if ((param_4 != (longlong *)0x0) &&
     ((local_48 = uVar5, iVar3 = (**(code **)(*param_4 + 0x30))(param_4), iVar3 == 5 ||
      (uVar5 = (**(code **)(*param_4 + 0x30))(param_4), (int)uVar5 == 6)))) {
    local_178 = 5;
    local_174 = 0x3f800000;
    uStack_170 = 0x3f800000;
    uStack_16c = 0x3f800000;
    uStack_168 = 0;
    local_164 = 0;
    local_15c = 0x3f800000;
    local_150 = 0;
    local_198[0] = 6;
    local_190 = 0;
    local_188 = 0x3f800000;
    local_184 = 0x3f800000;
    local_180 = 0x3f800000;
    cVar2 = (**(code **)(*param_4 + 0x70))(param_4,&local_178);
    if ((cVar2 != '\0') ||
       (uVar5 = (**(code **)(*param_4 + 0x78))(param_4,local_198), (char)uVar5 != '\0')) {
      iVar3 = (**(code **)(*param_4 + 0x30))(param_4);
      local_1a8[0] = false;
      if (iVar3 != 5) {
        uVar4 = physx::PxMeshQuery::findOverlapHeightField
                          (param_2,param_3,(PxHeightFieldGeometry *)local_198,param_5,local_148,0x40
                           ,0,local_1a8);
        uVar5 = CONCAT44(extraout_var_00,uVar4);
      }
      else {
        uVar4 = physx::PxMeshQuery::findOverlapTriangleMesh
                          (param_2,param_3,(PxTriangleMeshGeometry *)&local_178,param_5,local_148,
                           0x40,0,local_1a8);
        uVar5 = CONCAT44(extraout_var,uVar4);
      }
      if (0 < (int)uVar5) {
        if (iVar3 != 5) {
          puVar6 = (undefined8 *)FUN_1422fc9c0(local_1a4,param_1,param_2,param_3);
        }
        else {
          puVar6 = (undefined8 *)FUN_1422fccf0();
        }
        *param_6 = *puVar6;
        uVar1 = *(undefined4 *)(puVar6 + 1);
        *(undefined4 *)(param_6 + 1) = uVar1;
        return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 14230ef90 FindProfileData body=311 status=ok
// SIG undefined FindProfileData(void)

ulonglong UCollisionProfile::FindProfileData
                    (undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong in_RAX;
  int iVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    for (iVar6 = 0; (-1 < iVar6 && (iVar6 < (int)param_2[1])); iVar6 = iVar6 + 1) {
      lVar7 = *param_2;
      in_RAX = (longlong)iVar6 * 0x60;
      lVar2 = *(longlong *)(in_RAX + lVar7);
      if (lVar2 == param_3) {
        *param_4 = lVar2;
        lVar7 = (longlong)iVar6 * 0x60 + lVar7;
        plVar1 = param_4 + 3;
        *(undefined1 *)(param_4 + 1) = *(undefined1 *)(lVar7 + 8);
        *(undefined1 *)((longlong)param_4 + 9) = *(undefined1 *)(lVar7 + 9);
        param_4[2] = *(longlong *)(lVar7 + 0x10);
        if (plVar1 != (longlong *)(lVar7 + 0x18)) {
          iVar6 = *(int *)(lVar7 + 0x20);
          puVar3 = *(undefined8 **)(lVar7 + 0x18);
          *(int *)(param_4 + 4) = iVar6;
          if ((iVar6 == 0) && (*(int *)((longlong)param_4 + 0x24) == 0)) {
            *(undefined4 *)((longlong)param_4 + 0x24) = 0;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
            puVar5 = (undefined8 *)*plVar1;
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar5 = *puVar3;
              *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar3 + 1);
              puVar3 = puVar3 + 2;
              puVar5 = puVar5 + 2;
            }
          }
        }
        FString::operator=(param_4 + 5,lVar7 + 0x28);
        *(undefined1 *)(param_4 + 7) = *(undefined1 *)(lVar7 + 0x38);
        uVar4 = *(undefined8 *)(lVar7 + 0x41);
        *(undefined8 *)((longlong)param_4 + 0x39) = *(undefined8 *)(lVar7 + 0x39);
        *(undefined8 *)((longlong)param_4 + 0x41) = uVar4;
        uVar4 = *(undefined8 *)(lVar7 + 0x51);
        *(undefined8 *)((longlong)param_4 + 0x49) = *(undefined8 *)(lVar7 + 0x49);
        *(undefined8 *)((longlong)param_4 + 0x51) = uVar4;
        return 1;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14230f0d0 FindTriMeshOpposingNormal body=1134 status=ok
// SIG undefined FindTriMeshOpposingNormal(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FindTriMeshOpposingNormal
          (undefined8 *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  float local_130;
  float fStack_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 local_dc;
  ulonglong local_d4;
  longlong *local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (*(int *)(param_2 + 2) != -1) {
    fVar17 = 1.0;
    local_f0 = 5;
    local_ec = 0x3f800000;
    uStack_e8 = 0x3f800000;
    uStack_e4 = 0x3f800000;
    uStack_e0 = 0;
    local_dc = 0;
    local_d4 = 0x3f800000;
    local_c8 = (longlong *)0x0;
    (**(code **)(*(longlong *)param_2[1] + 0x70))((longlong *)param_2[1],&local_f0);
    if (local_c8 != (longlong *)0x0) {
      iVar1 = *(int *)(param_2 + 2);
      lVar3 = (**(code **)(*local_c8 + 0x50))();
      pbVar4 = (byte *)(**(code **)(*local_c8 + 0x58))(local_c8,local_138);
      uVar8 = iVar1 * 3;
      if ((*pbVar4 & 2) == 0) {
        uVar7 = *(uint *)(lVar3 + (ulonglong)uVar8 * 4);
        uVar9 = *(uint *)(lVar3 + (ulonglong)(uVar8 + 1) * 4);
        uVar8 = *(uint *)(lVar3 + (ulonglong)(uVar8 + 2) * 4);
      }
      else {
        uVar7 = (uint)*(ushort *)(lVar3 + (ulonglong)uVar8 * 2);
        uVar9 = (uint)*(ushort *)(lVar3 + (ulonglong)(uVar8 + 1) * 2);
        uVar8 = (uint)*(ushort *)(lVar3 + (ulonglong)(uVar8 + 2) * 2);
      }
      lVar3 = (**(code **)(*local_c8 + 0x30))();
      lVar5 = (longlong)(int)uVar7;
      lVar6 = (longlong)(int)uVar9;
      fVar14 = *(float *)(lVar3 + lVar5 * 0xc);
      fVar13 = *(float *)(lVar3 + 4 + lVar5 * 0xc);
      fVar10 = *(float *)(lVar3 + 8 + lVar5 * 0xc);
      fVar15 = *(float *)(lVar3 + 8 + lVar6 * 0xc) - fVar10;
      fVar16 = *(float *)(lVar3 + lVar6 * 0xc) - fVar14;
      fVar12 = *(float *)(lVar3 + 4 + lVar6 * 0xc) - fVar13;
      lVar5 = (longlong)(int)uVar8;
      fVar10 = *(float *)(lVar3 + 8 + lVar5 * 0xc) - fVar10;
      fVar13 = *(float *)(lVar3 + 4 + lVar5 * 0xc) - fVar13;
      fVar14 = *(float *)(lVar3 + lVar5 * 0xc) - fVar14;
      fVar11 = fVar12 * fVar10 - fVar15 * fVar13;
      fVar13 = fVar16 * fVar13 - fVar12 * fVar14;
      fStack_12c = fVar15 * fVar14 - fVar16 * fVar10;
      local_128 = 0.0;
      fVar14 = fStack_12c * fStack_12c + fVar11 * fVar11 + fVar13 * fVar13;
      if (fVar14 <= 0.0) {
        local_130 = 0.0;
        fStack_12c = 0.0;
      }
      else {
        local_130 = 1.0 / SQRT(fVar14);
        fStack_12c = local_130 * fStack_12c;
        local_128 = local_130 * fVar13;
        local_130 = local_130 * fVar11;
      }
      TransformNormalToShapeSpace(&local_120,&local_ec,&local_130);
      physx::PxShapeExt::getGlobalPose(&local_110,param_2[1],*param_2);
      local_118 = local_118 * 2.0;
      local_120 = local_120 * 2.0;
      local_11c = local_11c * 2.0;
      fVar13 = local_104 * local_104 - 0.5;
      fVar14 = local_10c * local_11c + local_110 * local_120 + local_108 * local_118;
      local_130 = (local_10c * local_118 - local_108 * local_11c) * local_104 + fVar13 * local_120 +
                  local_110 * fVar14;
      local_128 = (local_110 * local_11c - local_10c * local_120) * local_104 + fVar13 * local_118 +
                  local_108 * fVar14;
      fStack_12c = (local_108 * local_120 - local_110 * local_118) * local_104 + fVar13 * local_11c
                   + local_10c * fVar14;
      if ((local_d4 & 0x200000000) != 0) {
        if (0.0 < fStack_12c * param_3[1] + local_130 * *param_3 + local_128 * param_3[2]) {
          fVar17 = -1.0;
        }
        local_130 = local_130 * fVar17;
        fStack_12c = fStack_12c * fVar17;
        local_128 = local_128 * fVar17;
      }
      *param_1 = CONCAT44(fStack_12c,local_130);
      *(float *)(param_1 + 1) = local_128;
      return param_1;
    }
  }
  uVar2 = *(undefined4 *)(param_4 + 1);
  *param_1 = *param_4;
  *(undefined4 *)(param_1 + 1) = uVar2;
  return param_1;
}



// FUNCTION 14230f540 FlushLog body=37 status=ok
// SIG undefined FlushLog(void)

void UCheatManager::FlushLog(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_141672640();
  (**(code **)(*plVar1 + 0x40))(plVar1);
  plVar1 = (longlong *)FUN_141672640();
                    /* WARNING: Could not recover jumptable at 0x00014230f561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}



// FUNCTION 14230f570 FUN_14230f570 body=264 status=ok
// SIG undefined FUN_14230f570(void)

void FUN_14230f570(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_18 [2];
  
  plVar4 = (longlong *)0x0;
  plVar5 = plVar4;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  plVar5 = (longlong *)plVar5[0x91];
  if (plVar5 != (longlong *)0x0) {
    local_18[0] = 0;
    local_18[1] = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"You feel much lighter",0x2c);
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar4 = *(longlong **)(param_1 + 0x20);
    }
    (**(code **)(*plVar4 + 0xc60))(plVar4,local_18,0,0);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1429126e0(plVar5);
      cVar2 = (**(code **)(*plVar5 + 0x778))(plVar5);
      if (cVar2 == '\0') {
        (**(code **)(*plVar5 + 0x930))(plVar5);
      }
    }
  }
  return;
}



// FUNCTION 14230f680 FUN_14230f680 body=475 status=ok
// SIG undefined FUN_14230f680(void)

void FUN_14230f680(longlong *param_1,float param_2)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_38;
  int local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar4 = 0;
  local_28 = &LAB_140e6e39c;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uStack_20 = 0;
  lVar3 = lVar4;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar3 = param_1[4];
  }
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 == (longlong *)0x0) {
    if (((local_30 != 0) && (local_38 != (longlong *)0x0)) &&
       ((**(code **)(*local_38 + 0x28))(local_38,0), local_38 != (longlong *)0x0)) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
  }
  else {
    *plVar2 = (longlong)&PTR_FUN_1440f9050;
    FWeakObjectPtr::operator=(plVar2 + 1,lVar3);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_1c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_38);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar2 = *(longlong **)(lVar3 + 0x140);
  local_28 = (undefined1 *)0x0;
  uStack_20 = 0;
  if ((local_30 != 0) && (local_38 != (longlong *)0x0)) {
    (**(code **)(*local_38 + 0x30))(local_38,&local_28);
  }
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    lVar4 = param_1[4];
  }
  (**(code **)(*plVar2 + 0x780))(plVar2,lVar4,&local_28);
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  fVar1 = *(float *)(lVar3 + 0x790);
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  *(float *)(lVar3 + 0x7b8) = param_2 + fVar1;
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 14230f860 FUN_14230f860 body=293 status=ok
// SIG undefined FUN_14230f860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14230f860(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88 [3];
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar1 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x218) != 0)) {
    local_48 = 0xff;
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    FUN_14231cca0(local_58,param_4,param_2);
    local_88[2] = CONCAT44(uStack_34,local_38);
    uStack_70 = CONCAT44(uStack_2c,uStack_30);
    local_64 = param_3[1];
    local_90 = param_8;
    local_68 = *param_3;
    local_60 = param_3[2];
    local_98 = param_7;
    local_a0 = param_6;
    local_a8 = param_5;
    uVar1 = FUN_1422fd470(param_1,local_40,local_88 + 2,local_88);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
  }
  return uVar1;
}



// FUNCTION 14230f990 FUN_14230f990 body=293 status=ok
// SIG undefined FUN_14230f990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14230f990(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88 [3];
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar1 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x218) != 0)) {
    local_48 = 0xff;
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    FUN_14231cca0(local_58,param_4,param_2);
    local_88[2] = CONCAT44(uStack_34,local_38);
    uStack_70 = CONCAT44(uStack_2c,uStack_30);
    local_64 = param_3[1];
    local_90 = param_8;
    local_68 = *param_3;
    local_60 = param_3[2];
    local_98 = param_7;
    local_a0 = param_6;
    local_a8 = param_5;
    uVar1 = FUN_1422fd020(param_1,local_40,local_88 + 2,local_88);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
  }
  return uVar1;
}



// FUNCTION 14230fac0 FUN_14230fac0 body=322 status=ok
// SIG undefined FUN_14230fac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14230fac0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                       longlong param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  ulonglong uVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar1 = (ulonglong)*(uint *)(param_5 + 0xc);
  *(undefined4 *)(param_5 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_5 + 0xc)) {
    uVar1 = TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeTo(param_5,0);
  }
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x218) == 0)) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    local_58 = 0xff;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0x3f800000;
    FUN_14231cca0(local_68,param_4,param_2);
    local_88 = CONCAT44(uStack_44,local_48);
    uStack_80 = CONCAT44(uStack_3c,uStack_40);
    local_74 = param_3[1];
    local_90 = param_9;
    local_78 = *param_3;
    local_70 = param_3[2];
    local_98 = param_8;
    local_a0 = param_7;
    local_a8 = param_6;
    uVar1 = FUN_1422fd890(param_1,local_50,&local_88,param_5);
  }
  return uVar1;
}



// FUNCTION 14230fc10 thunk_FUN_1422fd890 body=5 status=ok
// SIG undefined thunk_FUN_1422fd890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
thunk_FUN_1422fd890(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4,uint param_5
                   ,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  longlong **pplVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 *puVar11;
  char cVar12;
  int *piVar13;
  undefined1 auStack_8288 [32];
  undefined4 *puStack_8268;
  undefined1 *puStack_8260;
  uint uStack_8258;
  longlong lStack_8250;
  undefined8 uStack_8248;
  undefined8 uStack_8240;
  undefined1 uStack_8238;
  undefined8 uStack_8228;
  uint uStack_8220;
  int *piStack_8218;
  undefined8 uStack_8210;
  undefined8 uStack_8208;
  undefined8 uStack_8200;
  undefined4 uStack_81f8;
  undefined4 uStack_81f4;
  undefined4 uStack_81f0;
  undefined4 uStack_81ec;
  undefined2 uStack_81e8;
  undefined1 uStack_81e6;
  longlong *aplStack_81e0 [3];
  undefined4 uStack_81c8;
  undefined4 uStack_81c4;
  undefined4 uStack_81c0;
  undefined4 uStack_81bc;
  undefined1 auStack_81b8 [28];
  undefined1 uStack_819c;
  char cStack_8199;
  undefined4 uStack_8198;
  undefined1 uStack_8194;
  int *piStack_8188;
  undefined4 uStack_8170;
  undefined4 uStack_816c;
  undefined4 uStack_8168;
  undefined4 uStack_8164;
  undefined8 uStack_8158;
  undefined8 uStack_8150;
  undefined4 uStack_8148;
  undefined2 uStack_8144;
  undefined1 uStack_8142;
  undefined4 uStack_8140;
  undefined1 uStack_813c;
  undefined4 uStack_8138;
  undefined2 uStack_8134;
  longlong lStack_8110;
  undefined8 uStack_8108;
  longlong lStack_80f0;
  undefined8 uStack_80e8;
  undefined1 auStack_80d8 [48];
  undefined **ppuStack_80a8;
  undefined8 uStack_80a0;
  undefined8 uStack_8098;
  undefined4 uStack_8090;
  undefined1 uStack_8080;
  undefined1 *puStack_8078;
  undefined8 uStack_8070;
  undefined1 auStack_8068 [16384];
  undefined1 auStack_4068 [16384];
  undefined1 *puStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  
  uStack_58 = DAT_1468387a8 ^ (ulonglong)auStack_8288;
  uVar7 = 0;
  uStack_8208 = param_8;
  uStack_8220 = param_5;
  uStack_8200 = param_7;
  if ((*param_2 != 0) && (2 < *param_2 - 2U)) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x970);
  cVar12 = '\0';
  uStack_8228 = param_4;
  piStack_8218 = param_2;
  uStack_8210 = param_3;
  if (lVar3 != 0) {
    cVar6 = FUN_142498210(lVar3,*(undefined4 *)(param_6 + 0x20),1);
    cVar12 = '\0';
    if (cVar6 != '\0') {
      cVar12 = '\x01';
    }
  }
  uStack_8258 = CONCAT31(uStack_8258._1_3_,1);
  puStack_8260 = (undefined1 *)uStack_8208;
  puStack_8268 = (undefined4 *)param_6;
  FUN_142309ff0(&uStack_81c8,param_5 & 0xff,*(undefined1 *)(param_6 + 0x11),uStack_8200);
  iVar1 = *(int *)(param_6 + 0x18);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uStack_81e8 = 5;
      goto LAB_1422fd99b;
    }
    if (iVar1 == 2) {
      uStack_81e8 = 6;
      goto LAB_1422fd99b;
    }
  }
  uStack_81e8 = 7;
LAB_1422fd99b:
  uStack_81e6 = 0;
  uStack_81f8 = uStack_81c8;
  uStack_81f4 = uStack_81c4;
  uStack_81f0 = uStack_81c0;
  uStack_81ec = uStack_81bc;
  uStack_8170 = uStack_81c8;
  uStack_816c = uStack_81c4;
  uStack_8168 = uStack_81c0;
  uStack_8164 = uStack_81bc;
  FUN_142300030(auStack_81b8);
  uVar10 = 0;
  uStack_819c = 1;
  pplVar8 = aplStack_81e0 + 1;
  cStack_8199 = cVar12;
  do {
    uVar10 = uVar10 + 3;
    pplVar8[-1] = (longlong *)0x0;
    *pplVar8 = (longlong *)0x0;
    pplVar8[1] = (longlong *)0x0;
    pplVar8 = pplVar8 + 3;
  } while (uVar10 < 3);
  pcVar4 = *(char **)(param_1 + 0x218);
  plVar9 = (longlong *)FUN_1426e2530();
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x348))
              (plVar9,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
               ,0x33);
  }
  puStack_8078 = auStack_8068;
  puStack_68 = (undefined1 *)0x0;
  uStack_60 = 0;
  puStack_8260 = auStack_81b8;
  ppuStack_80a8 = &PTR_processTouches_14503e5c8;
  uStack_80a0 = 0;
  uStack_8098 = 0;
  uStack_8090 = 0xffffffff;
  puStack_8268 = &uStack_81f8;
  uStack_8080 = 0;
  uStack_8070 = 0x200;
  aplStack_81e0[0] = plVar9;
  (**(code **)(*plVar9 + 0x300))(plVar9,param_2,uStack_8210,&ppuStack_80a8);
  iVar1 = (int)uStack_60;
  if ((int)uStack_60 == 0) {
    (**(code **)(*plVar9 + 0x350))(plVar9);
    aplStack_81e0[0] = (longlong *)0x0;
  }
  piVar13 = piStack_8218;
  iVar2 = (int)uStack_60;
  if ((*(char *)(param_6 + 0x10) != '\0') && (*pcVar4 != '\0')) {
    plVar9 = (longlong *)FUN_1426e2530(pcVar4,2);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x348))
                (plVar9,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
                 ,0x33);
    }
    piVar13 = piStack_8218;
    puStack_8260 = auStack_81b8;
    puStack_8268 = &uStack_81f8;
    aplStack_81e0[2] = plVar9;
    (**(code **)(*plVar9 + 0x300))(plVar9,piStack_8218,uStack_8210,&ppuStack_80a8);
    iVar2 = (int)uStack_60;
    if ((int)uStack_60 == iVar1) {
      (**(code **)(*plVar9 + 0x350))(plVar9);
      aplStack_81e0[2] = (longlong *)0x0;
      iVar2 = (int)uStack_60;
    }
  }
  uVar5 = uStack_8228;
  uVar10 = 0;
  if (0 < iVar2) {
    puVar11 = auStack_4068;
    if (puStack_68 != (undefined1 *)0x0) {
      puVar11 = puStack_68;
    }
    uVar7 = FUN_142308620(iVar2,puVar11,&uStack_81c8,uStack_8228);
  }
  if (cVar12 != '\0') {
    uStack_8228 = 0;
    uStack_8158 = 0;
    uStack_8138 = 0;
    uStack_8198 = 3;
    uStack_8194 = 0;
    uStack_8150 = 0;
    lStack_8110 = 0;
    uStack_8108 = 0;
    lStack_80f0 = 0;
    uStack_80e8 = 0;
    uStack_8148 = 0x10000;
    uStack_8140 = 0;
    uStack_8144 = 0;
    uStack_8134 = 0x101;
    uStack_813c = 0;
    uStack_8142 = 0;
    piStack_8188 = piVar13;
    puStack_8260 = (undefined1 *)P2UTransform(auStack_80d8,uStack_8210);
    uStack_8238 = 1;
    uStack_8240 = uStack_8208;
    uStack_8248 = uStack_8200;
    lStack_8250 = param_6;
    uStack_8258 = uStack_8220;
    puStack_8268 = &uStack_8198;
    FUN_1424a5540(lVar3,*(undefined4 *)(param_6 + 0x20),uVar5,1);
    if (lStack_80f0 != 0) {
      FMemory::Free();
    }
    if (lStack_8110 != 0) {
      FMemory::Free();
    }
  }
  if (puStack_68 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  ppuStack_80a8 = &PTR__purecall_14503d320;
  pplVar8 = aplStack_81e0;
  do {
    if (*pplVar8 != (longlong *)0x0) {
      (**(code **)(**pplVar8 + 0x350))();
    }
    *pplVar8 = (longlong *)0x0;
    uVar10 = uVar10 + 1;
    pplVar8 = pplVar8 + 1;
  } while (uVar10 < 3);
  return uVar7;
}



// FUNCTION 14230fc20 FUN_14230fc20 body=537 status=ok
// SIG undefined FUN_14230fc20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14230fc20(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                       undefined8 *param_5,undefined8 *param_6,undefined4 param_7,longlong param_8,
                       undefined8 param_9,undefined8 param_10)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 *local_130;
  undefined4 *local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_88;
  undefined1 local_70 [16];
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_e8 = param_6;
  local_f0 = param_9;
  local_f8 = param_10;
  uVar5 = (ulonglong)*(uint *)(param_4 + 0xc);
  local_e0 = param_5;
  *(undefined4 *)(param_4 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_4 + 0xc)) {
    uVar5 = TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::
            ResizeTo(param_4,0);
  }
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x218) == 0)) {
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  else {
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0x3f800000;
    local_60 = 0xff;
    FUN_14231cca0(local_70,param_3,param_2);
    lVar1 = *(longlong *)(param_1 + 0x970);
    local_c8 = local_58;
    local_d8 = local_50;
    uStack_d4 = uStack_4c;
    uStack_d0 = uStack_48;
    uStack_cc = uStack_44;
    cVar6 = '\0';
    if (lVar1 != 0) {
      cVar2 = FUN_142498210(lVar1,*(undefined4 *)(param_8 + 0x20),1);
      cVar6 = '\0';
      if (cVar2 != '\0') {
        cVar6 = '\x01';
      }
    }
    local_108 = CONCAT71(local_108._1_7_,cVar6);
    local_b8 = *local_e8;
    local_b0 = *(undefined4 *)(local_e8 + 1);
    local_a8 = *local_e0;
    local_a0 = *(undefined4 *)(local_e0 + 1);
    local_110 = local_f8;
    local_118 = local_f0;
    local_120 = param_8;
    local_128 = (undefined4 *)CONCAT44(local_128._4_4_,param_7);
    local_130 = &local_b8;
    local_138 = &local_a8;
    bVar3 = FUN_14230fe40(param_1,local_c8,&local_d8,param_4);
    if (cVar6 != '\0') {
      local_98 = 1;
      local_108 = local_f8;
      local_110 = local_f0;
      local_118 = param_8;
      local_120 = CONCAT44(local_120._4_4_,param_7);
      local_128 = &local_98;
      local_138 = local_e8;
      local_94 = 0;
      local_130 = (undefined8 *)param_3;
      local_88 = param_2;
      bVar4 = FUN_1424a0df0(lVar1,*(undefined4 *)(param_8 + 0x20),param_4,local_e0);
      bVar3 = bVar3 | bVar4;
    }
    uVar5 = (ulonglong)bVar3;
  }
  return uVar5;
}



// FUNCTION 14230fe40 FUN_14230fe40 body=1397 status=ok
// SIG undefined FUN_14230fe40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14230fe40(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined2 *param_4,
             float *param_5,undefined ***param_6,undefined1 param_7,longlong param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  longlong *plVar4;
  longlong **pplVar5;
  uint uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_10268 [32];
  longlong lStack_10248;
  undefined ***pppuStack_10240;
  undefined2 *puStack_10238;
  float *pfStack_10230;
  undefined ***pppuStack_10228;
  undefined8 uStack_10220;
  undefined8 uStack_10218;
  float fStack_10210;
  undefined1 uStack_10208;
  undefined1 uStack_10200;
  undefined1 auStack_101f8 [2];
  undefined2 auStack_101f6 [3];
  undefined8 uStack_101f0;
  float fStack_101e8;
  float fStack_101e4;
  float fStack_101e0;
  undefined8 uStack_101d8;
  undefined8 uStack_101d0;
  float fStack_101c8;
  float fStack_101c4;
  float fStack_101c0;
  undefined ***pppuStack_101b8;
  undefined2 *puStack_101b0;
  longlong lStack_101a8;
  float fStack_101a0;
  undefined4 uStack_1019c;
  undefined4 uStack_10198;
  undefined4 uStack_10194;
  undefined2 uStack_10190;
  undefined1 uStack_1018e;
  longlong *aplStack_10188 [3];
  undefined8 uStack_10170;
  undefined4 uStack_10168;
  undefined4 uStack_10164;
  undefined **appuStack_10160 [3];
  undefined1 uStack_10141;
  undefined1 uStack_10140;
  undefined **ppuStack_10138;
  undefined8 uStack_10130;
  undefined8 uStack_10128;
  undefined4 uStack_10120;
  undefined2 uStack_10118;
  undefined8 uStack_10114;
  undefined8 uStack_1010c;
  undefined8 uStack_10104;
  float fStack_100fc;
  char cStack_100f0;
  undefined1 *puStack_100e8;
  undefined8 uStack_100e0;
  undefined1 auStack_100d8 [32768];
  undefined1 local_80d8 [32768];
  undefined1 *local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_10268;
  uVar7 = 0;
  puStack_10238 = (undefined2 *)CONCAT71(puStack_10238._1_7_,1);
  pppuStack_10240 = (undefined ***)param_10;
  pppuStack_101b8 = param_6;
  auStack_101f8[0] = 0;
  lStack_10248 = param_8;
  uStack_101f0 = param_2;
  puStack_101b0 = param_4;
  lStack_101a8 = param_1;
  FUN_142309ff0(&uStack_10170,param_7,*(undefined1 *)(param_8 + 0x11),param_9);
  iVar1 = *(int *)(param_8 + 0x18);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uStack_10190 = 0xd;
      goto LAB_14230ff44;
    }
    if (iVar1 == 2) {
      uStack_10190 = 0xe;
      goto LAB_14230ff44;
    }
  }
  uStack_10190 = 0xf;
LAB_14230ff44:
  uStack_1018e = 0;
  fStack_101a0 = (float)uStack_10170;
  uStack_1019c = uStack_10170._4_4_;
  uStack_10198 = uStack_10168;
  uStack_10194 = uStack_10164;
  FUN_142300030(appuStack_10160);
  fStack_101c8 = *param_5;
  fStack_101c4 = param_5[1];
  fVar12 = *(float *)param_6 - fStack_101c8;
  fStack_101c0 = param_5[2];
  fStack_101e4 = *(float *)((longlong)param_6 + 4) - fStack_101c4;
  uStack_10140 = *(char *)(param_8 + 0x12) == '\0';
  fStack_101e0 = *(float *)(param_6 + 1) - fStack_101c0;
  appuStack_10160[0] = &PTR_FUN_14503e548;
  uStack_10141 = param_11;
  fVar13 = SQRT(fStack_101e4 * fStack_101e4 + fVar12 * fVar12 + fStack_101e0 * fStack_101e0);
  if (fVar13 <= 1e-08) {
    fVar13 = 0.0;
  }
  pcVar2 = *(char **)(param_1 + 0x218);
  plVar4 = (longlong *)FUN_1426e2530(pcVar2);
  uVar6 = 0;
  pplVar5 = aplStack_10188 + 1;
  do {
    uVar6 = uVar6 + 3;
    pplVar5[-1] = (longlong *)0x0;
    *pplVar5 = (longlong *)0x0;
    pplVar5[1] = (longlong *)0x0;
    pplVar5 = pplVar5 + 3;
  } while (uVar6 < 3);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x348))
              (plVar4,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
               ,0x33);
  }
  uVar10 = uStack_101f0;
  uStack_101d8 = *param_3;
  uStack_101d0 = param_3[1];
  fStack_101e8 = 1.0;
  if (fVar13 == 0.0) {
    fStack_101e4 = 0.0;
    fStack_101e0 = 0.0;
  }
  else {
    fStack_101e8 = 1.0 / fVar13;
    fStack_101e4 = fStack_101e8 * fStack_101e4;
    fStack_101e0 = fStack_101e8 * fStack_101e0;
    fStack_101e8 = fStack_101e8 * fVar12;
  }
  puStack_100e8 = auStack_100d8;
  uStack_10218 = (undefined8 *)((ulonglong)uStack_10218._4_4_ << 0x20);
  pppuStack_10228 = appuStack_10160;
  uStack_10220 = 0;
  pfStack_10230 = &fStack_101a0;
  puStack_10238 = auStack_101f6;
  ppuStack_10138 = &PTR_processTouches_14503e5b0;
  pppuStack_10240 = &ppuStack_10138;
  uStack_10130 = 0;
  uStack_10128 = 0;
  uStack_10118 = 0;
  uStack_10114 = 0;
  uStack_1010c = 0;
  local_d8 = (undefined1 *)0x0;
  auStack_101f6[0] = 0x607;
  fStack_100fc = 3.4028235e+38;
  uStack_10120 = 0xffffffff;
  uStack_10104 = 0;
  cStack_100f0 = '\0';
  uStack_100e0 = 0x200;
  local_d0 = 0;
  lStack_10248 = CONCAT44(lStack_10248._4_4_,fVar13);
  aplStack_10188[0] = plVar4;
  (**(code **)(*plVar4 + 0x2f8))(plVar4,uStack_101f0,&uStack_101d8,&fStack_101e8);
  iVar1 = (int)local_d0;
  uVar8 = local_d0 & 0xffffffff;
  if (cStack_100f0 == '\0') {
    fVar12 = fVar13;
    if ((int)local_d0 == 0) {
      (**(code **)(*plVar4 + 0x350))(plVar4);
      uVar8 = local_d0 & 0xffffffff;
      aplStack_10188[0] = (longlong *)0x0;
    }
  }
  else {
    uVar7 = 1;
    auStack_101f8[0] = 1;
    fVar12 = fStack_100fc;
  }
  if (((*(char *)(param_8 + 0x10) != '\0') && (1e-08 < fVar12)) && (*pcVar2 != '\0')) {
    plVar4 = (longlong *)FUN_1426e2530(pcVar2,2);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x348))
                (plVar4,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
                 ,0x33);
    }
    uStack_10218 = (undefined8 *)((ulonglong)uStack_10218 & 0xffffffff00000000);
    pppuStack_10228 = appuStack_10160;
    auStack_101f6[0] = 0x607;
    uStack_10220 = 0;
    pfStack_10230 = &fStack_101a0;
    puStack_10238 = auStack_101f6;
    pppuStack_10240 = &ppuStack_10138;
    lStack_10248 = CONCAT44(lStack_10248._4_4_,fVar12);
    aplStack_10188[2] = plVar4;
    (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar10,&uStack_101d8,&fStack_101e8);
    cVar3 = cStack_100f0;
    if ((int)local_d0 == iVar1) {
      (**(code **)(*plVar4 + 0x350))(plVar4);
      aplStack_10188[2] = (longlong *)0x0;
    }
    uVar8 = local_d0 & 0xffffffff;
    uVar10 = uStack_101f0;
    if (cVar3 != '\0') {
      uVar7 = 1;
      fVar11 = fStack_100fc;
      if (fVar12 <= fStack_100fc) {
        fVar11 = fVar12;
      }
      auStack_101f8[0] = 1;
      fVar12 = fVar11;
    }
  }
  uVar6 = 0;
  if (0 < (int)uVar8) {
    puVar9 = local_80d8;
    if (local_d8 != (undefined1 *)0x0) {
      puVar9 = local_d8;
    }
    uStack_10200 = *(undefined1 *)(param_8 + 0x14);
    uStack_10208 = *(undefined1 *)(param_8 + 0x13);
    uStack_10218 = &uStack_101d8;
    pppuStack_10228 = pppuStack_101b8;
    pfStack_10230 = param_5;
    puStack_10238 = puStack_101b0;
    pppuStack_10240 = (undefined ***)&uStack_10170;
    lStack_10248 = CONCAT44(lStack_10248._4_4_,fVar13);
    uStack_10220 = uVar10;
    fStack_10210 = fVar12;
    FUN_142301790(auStack_101f8,lStack_101a8,uVar8,puVar9);
    uVar7 = auStack_101f8[0];
  }
  if (local_d8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  ppuStack_10138 = &PTR__purecall_14503d2f0;
  pplVar5 = aplStack_10188;
  do {
    if (*pplVar5 != (longlong *)0x0) {
      (**(code **)(**pplVar5 + 0x350))();
    }
    *pplVar5 = (longlong *)0x0;
    uVar6 = uVar6 + 1;
    pplVar5 = pplVar5 + 1;
  } while (uVar6 < 3);
  return uVar7;
}



// FUNCTION 1423103c0 FUN_1423103c0 body=2001 status=ok
// SIG undefined FUN_1423103c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1423103c0(longlong param_1,undefined8 param_2,float *param_3,byte *param_4,
                       float *param_5,float *param_6,uint param_7,undefined ***param_8,
                       undefined8 param_9,ulonglong param_10)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong **pplVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  char cVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_328 [32];
  undefined ***local_308;
  float *local_300;
  float *local_2f8;
  float *local_2f0;
  undefined ***local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined2 local_2c8 [4];
  float *local_2c0;
  uint local_2b8;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float *local_2a0;
  ulonglong local_298;
  undefined8 local_290;
  float *local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_274;
  float local_270;
  float local_26c;
  float local_268;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined2 local_238;
  undefined2 uStack_236;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  byte local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  float local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined2 local_160;
  undefined1 local_15e;
  longlong *local_158 [3];
  float local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined **local_130 [3];
  undefined1 local_113;
  char local_111;
  undefined1 local_110;
  undefined1 local_108 [16];
  undefined1 local_f8;
  float *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  local_290 = param_9;
  local_298 = param_10;
  local_2a0 = param_6;
  local_2b8 = param_7;
  local_288 = param_3;
  local_188 = param_1;
  local_180 = param_2;
  _guard_xfg_dispatch_icall_nop(&local_258,0,0x90);
  *param_4 = *param_4 & 0xfc;
  *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) & 0xfffffffe;
  *(undefined4 *)(param_4 + 4) = local_258._4_4_;
  *(undefined4 *)(param_4 + 0x10) = uStack_248;
  *(ulonglong *)(param_4 + 0x20) = CONCAT44(uStack_234,CONCAT22(uStack_236,local_238));
  *(ulonglong *)(param_4 + 0x2c) = CONCAT44(uStack_228,uStack_22c);
  *(ulonglong *)(param_4 + 0x38) = CONCAT44(uStack_21c,uStack_220);
  *(undefined4 *)(param_4 + 0x5c) = local_200._4_4_;
  uVar1 = *(undefined8 *)param_5;
  *(ulonglong *)(param_4 + 0x14) = CONCAT44(uStack_240,uStack_244);
  *(undefined4 *)(param_4 + 0x1c) = uStack_23c;
  *(undefined4 *)(param_4 + 0x28) = uStack_230;
  *(undefined4 *)(param_4 + 0x34) = uStack_224;
  *(undefined4 *)(param_4 + 0x40) = local_218;
  *(undefined4 *)(param_4 + 0x60) = local_1f8;
  param_4[0xc] = 0;
  param_4[0xd] = 0;
  param_4[0xe] = 0x80;
  param_4[0xf] = 0x3f;
  *(undefined4 *)(param_4 + 100) = local_1f4;
  *(undefined4 *)(param_4 + 0x68) = local_1f0;
  *(undefined4 *)(param_4 + 0x6c) = local_1ec;
  *(undefined4 *)(param_4 + 0x70) = local_1e8;
  *(undefined4 *)(param_4 + 0x74) = local_1e4;
  *(undefined4 *)(param_4 + 0x78) = local_1e0;
  *(undefined8 *)(param_4 + 0x80) = local_1d8;
  *(undefined8 *)(param_4 + 0x88) = local_1d0;
  fVar16 = param_5[2];
  *(undefined8 *)(param_4 + 0x44) = uVar1;
  uVar1 = *(undefined8 *)param_6;
  *(float *)(param_4 + 0x4c) = fVar16;
  fVar16 = param_6[2];
  *(undefined8 *)(param_4 + 0x50) = uVar1;
  *(float *)(param_4 + 0x58) = fVar16;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x218) == 0)) {
    return (ulonglong)(uint3)((uint)fVar16 >> 8) << 8;
  }
  local_f8 = 0xff;
  local_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0x3f800000;
  FUN_14231cca0(local_108,local_288,param_2);
  uVar5 = uStack_dc;
  uVar4 = uStack_e0;
  uVar3 = uStack_e4;
  uVar8 = local_e8;
  fVar16 = *param_6 - *param_5;
  fVar18 = param_6[1] - param_5[1];
  fVar19 = param_6[2] - param_5[2];
  local_2c0 = local_f0;
  fVar17 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar19 * fVar19);
  if (fVar17 <= 1e-08) {
    fVar17 = 0.0;
  }
  local_178 = *(longlong *)(param_1 + 0x970);
  cVar15 = '\0';
  if ((local_178 != 0) &&
     (cVar6 = FUN_142498210(local_178,*(undefined4 *)(param_8 + 4),1), cVar15 = '\0', cVar6 != '\0')
     ) {
    cVar15 = '\x01';
  }
  local_2f8 = (float *)((ulonglong)local_2f8 & 0xffffffffffffff00);
  local_300 = (float *)local_298;
  local_308 = param_8;
  FUN_142309ff0(&local_140,param_7 & 0xff,*(undefined1 *)((longlong)param_8 + 0x11),local_290);
  iVar9 = *(int *)(param_8 + 3);
  if (iVar9 != 0) {
    if (iVar9 == 1) {
      local_160 = 5;
      goto LAB_1423106d7;
    }
    if (iVar9 == 2) {
      local_160 = 6;
      goto LAB_1423106d7;
    }
  }
  local_160 = 7;
LAB_1423106d7:
  local_15e = 0;
  local_170 = local_140;
  uStack_16c = uStack_13c;
  uStack_168 = uStack_138;
  uStack_164 = uStack_134;
  FUN_142300030(local_130,param_8);
  local_110 = *(char *)((longlong)param_8 + 0x12) == '\0';
  local_270 = *param_5;
  local_26c = param_5[1];
  local_130[0] = &PTR_FUN_14503e548;
  local_113 = 1;
  local_268 = param_5[2];
  local_280._0_4_ = uVar8;
  local_280._4_4_ = uVar3;
  local_278 = uVar4;
  local_274 = uVar5;
  if (fVar17 == 0.0) {
    local_2b0 = 1.0;
    local_2ac = 0.0;
    local_2a8 = 0.0;
  }
  else {
    local_2a8 = 1.0 / fVar17;
    local_2b0 = fVar16 * local_2a8;
    local_2ac = local_2a8 * fVar18;
    local_2a8 = local_2a8 * fVar19;
  }
  pcVar2 = *(char **)(param_1 + 0x218);
  local_111 = cVar15;
  plVar10 = (longlong *)FUN_1426e2530(pcVar2,0);
  pplVar11 = local_158 + 1;
  uVar12 = 0;
  do {
    uVar12 = uVar12 + 3;
    pplVar11[-1] = (longlong *)0x0;
    *pplVar11 = (longlong *)0x0;
    pplVar11[1] = (longlong *)0x0;
    pplVar11 = pplVar11 + 3;
  } while (uVar12 < 3);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x348))
              (plVar10,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
               ,0x33);
  }
  local_2e8 = local_130;
  local_2d8 = (ulonglong)local_2d8._4_4_ << 0x20;
  local_2e0 = 0;
  local_2f0 = &local_170;
  local_2f8 = (float *)local_2c8;
  local_300 = (float *)&local_258;
  local_258 = &PTR_CanBeUsedOnAnyThread_14503d308;
  local_250 = 0;
  uStack_248 = 0;
  uStack_244 = 0;
  uStack_240 = 0xffffffff;
  local_238 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_21c = 0x7f7fffff;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_2c8[0] = 0x207;
  local_308 = (undefined ***)CONCAT44(local_308._4_4_,fVar17);
  local_158[0] = plVar10;
  (**(code **)(*plVar10 + 0x2f8))(plVar10,local_2c0,&local_280,&local_2b0);
  bVar7 = local_210;
  uStack_1c0 = CONCAT44(uStack_244,uStack_248);
  local_1b8 = CONCAT44(uStack_23c,uStack_240);
  local_1c8 = local_250;
  local_1b0 = local_238;
  local_198 = uStack_220;
  local_190 = local_218;
  local_1ac = CONCAT44(uStack_230,uStack_234);
  uStack_1a4 = CONCAT44(uStack_228,uStack_22c);
  local_19c = uStack_224;
  local_194 = uStack_21c;
  if (local_210 == 0) {
    (**(code **)(*plVar10 + 0x350))(plVar10);
    local_158[0] = (longlong *)0x0;
  }
  pfVar14 = local_2c0;
  if ((*(char *)(param_8 + 2) != '\0') && (*pcVar2 != '\0')) {
    plVar10 = (longlong *)FUN_1426e2530(pcVar2,2);
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x348))
                (plVar10,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
                 ,0x33);
    }
    pfVar14 = local_2c0;
    local_2d8 = local_2d8 & 0xffffffff00000000;
    local_2c8[0] = 0x207;
    local_2e0 = 0;
    local_2e8 = local_130;
    local_2f0 = &local_170;
    local_2f8 = (float *)local_2c8;
    local_300 = (float *)&local_258;
    local_308 = (undefined ***)CONCAT44(local_308._4_4_,fVar17);
    (**(code **)(*plVar10 + 0x2f8))(plVar10,local_2c0,&local_280,&local_2b0);
    (**(code **)(*plVar10 + 0x350))(plVar10);
    local_158[2] = (longlong *)0x0;
  }
  pfVar13 = local_2a0;
  if (bVar7 != 0) {
    uVar8 = FindFaceIndex(&local_1c8,&local_2b0);
    pfVar13 = local_2a0;
    local_1b8 = CONCAT44(local_1b8._4_4_,uVar8);
    local_2d8 = CONCAT71(local_2d8._1_7_,*(undefined1 *)((longlong)param_8 + 0x14));
    local_2e0 = CONCAT71(local_2e0._1_7_,*(undefined1 *)((longlong)param_8 + 0x13));
    local_2e8 = (undefined ***)&local_280;
    local_308 = (undefined ***)&local_140;
    local_2f8 = local_2a0;
    local_300 = param_5;
    local_2f0 = pfVar14;
    iVar9 = FUN_142309120(local_188,&local_1c8,param_4,fVar17);
    if (iVar9 == 1) {
      bVar7 = 0;
    }
  }
  uVar12 = 0;
  if (cVar15 != '\0') {
    local_2d0 = 0;
    local_1b8 = local_180;
    local_2d8 = local_298;
    local_2e0 = local_290;
    local_2e8 = param_8;
    local_2f0 = (float *)CONCAT44(local_2f0._4_4_,local_2b8);
    local_2f8 = (float *)&local_1c8;
    local_300 = local_288;
    local_1c8 = CONCAT35(local_1c8._5_3_,1);
    local_308 = (undefined ***)pfVar13;
    bVar7 = FUN_1424a10c0(local_178,*(undefined4 *)(param_8 + 4),param_4,param_5);
  }
  local_258 = &PTR__purecall_14503d2f0;
  pplVar11 = local_158;
  do {
    if (*pplVar11 != (longlong *)0x0) {
      (**(code **)(**pplVar11 + 0x350))();
    }
    *pplVar11 = (longlong *)0x0;
    uVar12 = uVar12 + 1;
    pplVar11 = pplVar11 + 1;
  } while (uVar12 < 3);
  return (ulonglong)bVar7;
}



// FUNCTION 142310ba0 FUN_142310ba0 body=1438 status=ok
// SIG undefined FUN_142310ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142310ba0(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                       float *param_5,uint param_6,longlong param_7,undefined8 param_8,
                       ulonglong param_9)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  longlong *plVar10;
  char cVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_2c8 [32];
  float *local_2a8;
  undefined ***local_2a0;
  undefined4 *local_298;
  undefined4 *local_290;
  undefined ***local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined1 local_270;
  undefined2 local_268 [2];
  uint local_264;
  float local_260;
  float local_25c;
  float local_258;
  undefined8 local_250;
  ulonglong local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  float local_228;
  float local_224;
  float local_220;
  undefined8 local_218;
  undefined8 local_210;
  float *local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined2 local_1f0;
  undefined1 local_1ee;
  undefined **local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined2 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  byte local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined **local_158 [3];
  undefined1 local_13b;
  char local_139;
  undefined1 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  byte local_11c;
  undefined8 local_110;
  undefined1 local_f8 [16];
  undefined1 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_240 = param_8;
  local_248 = param_9;
  local_208 = param_5;
  local_264 = param_6;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x218) == 0)) {
    return param_9 & 0xffffffffffffff00;
  }
  bVar9 = 0;
  local_e8 = 0xff;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0x3f800000;
  local_218 = param_2;
  local_210 = param_3;
  FUN_14231cca0(local_f8,param_3,param_2);
  uVar7 = uStack_cc;
  uVar6 = uStack_d0;
  uVar5 = uStack_d4;
  uVar4 = local_d8;
  fVar12 = *param_5 - *param_4;
  fVar13 = param_5[1] - param_4[1];
  fVar14 = param_5[2] - param_4[2];
  local_250 = local_e0;
  fVar15 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14);
  if (fVar15 <= 0.0001) goto LAB_1423110c8;
  lVar2 = *(longlong *)(param_1 + 0x970);
  cVar11 = '\0';
  if ((lVar2 != 0) &&
     (cVar8 = FUN_142498210(lVar2,*(undefined4 *)(param_7 + 0x20),1), cVar11 = '\0', cVar8 != '\0'))
  {
    cVar11 = '\x01';
  }
  local_298 = (undefined4 *)((ulonglong)local_298 & 0xffffffffffffff00);
  local_2a0 = (undefined ***)local_248;
  local_2a8 = (float *)param_7;
  FUN_142309ff0(&local_130,param_6 & 0xff,*(undefined1 *)(param_7 + 0x11),local_240);
  iVar1 = *(int *)(param_7 + 0x18);
  if (iVar1 == 0) {
LAB_142310d94:
    local_1f0 = 0x1f;
  }
  else if (iVar1 == 1) {
    local_1f0 = 0x1d;
  }
  else {
    if (iVar1 != 2) goto LAB_142310d94;
    local_1f0 = 0x1e;
  }
  local_1ee = 0;
  local_200 = local_130;
  uStack_1fc = uStack_12c;
  uStack_1f8 = uStack_128;
  uStack_1f4 = uStack_124;
  FUN_142300030(local_158,param_7);
  local_224 = param_4[1];
  local_228 = *param_4;
  local_138 = *(char *)(param_7 + 0x12) == '\0';
  pcVar3 = *(char **)(param_1 + 0x218);
  local_258 = 1.0 / fVar15;
  local_158[0] = &PTR_FUN_14503e548;
  local_13b = 1;
  local_220 = param_4[2];
  local_260 = fVar12 * local_258;
  local_25c = fVar13 * local_258;
  local_258 = fVar14 * local_258;
  local_238 = uVar4;
  local_234 = uVar5;
  local_230 = uVar6;
  local_22c = uVar7;
  local_139 = cVar11;
  plVar10 = (longlong *)FUN_1426e2530(pcVar3,0);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x348))
              (plVar10,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
               ,0x516);
  }
  local_1d0 = 0xffffffff;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1c8 = 0;
  local_1c4 = 0;
  local_1bc = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_278 = (ulonglong)local_278._4_4_ << 0x20;
  local_280 = 0;
  local_268[0] = 0;
  local_288 = local_158;
  local_290 = &local_200;
  local_298 = (undefined4 *)local_268;
  local_2a0 = &local_1e8;
  local_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  uStack_1ac = 0x7f7fffff;
  local_1e8 = &PTR_CanBeUsedOnAnyThread_14503d308;
  local_2a8 = (float *)CONCAT44(local_2a8._4_4_,fVar15);
  (**(code **)(*plVar10 + 0x2f8))(plVar10,local_250,&local_238,&local_260);
  bVar9 = local_1a0;
  local_1e8 = &PTR__purecall_14503d2f0;
  (**(code **)(*plVar10 + 0x350))(plVar10);
  if (((bVar9 == 0) && (*(char *)(param_7 + 0x10) != '\0')) && (*pcVar3 != '\0')) {
    plVar10 = (longlong *)FUN_1426e2530(pcVar3,2);
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x348))
                (plVar10,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\PhysXCollision.cpp"
                 ,0x525);
    }
    local_278 = local_278 & 0xffffffff00000000;
    local_280 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1c8 = 0;
    local_1c4 = 0;
    local_1bc = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_268[0] = 0;
    local_288 = local_158;
    local_290 = &local_200;
    local_298 = (undefined4 *)local_268;
    local_2a0 = &local_1e8;
    local_1d0 = 0xffffffff;
    local_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0x7f7fffff;
    local_1e8 = &PTR_CanBeUsedOnAnyThread_14503d308;
    local_2a8 = (float *)CONCAT44(local_2a8._4_4_,fVar15);
    (**(code **)(*plVar10 + 0x2f8))(plVar10,local_250,&local_238,&local_260);
    bVar9 = local_1a0;
    local_1e8 = &PTR__purecall_14503d2f0;
    (**(code **)(*plVar10 + 0x350))(plVar10);
  }
  if ((cVar11 != '\0') && (bVar9 == 0)) {
    local_110 = local_218;
    local_120 = 1;
    local_11c = bVar9;
    _guard_xfg_dispatch_icall_nop(&local_1e8,0,0x90);
    local_270 = 1;
    local_278 = local_248;
    local_280 = local_240;
    local_288 = (undefined ***)param_7;
    local_290 = (undefined4 *)CONCAT44(local_290._4_4_,local_264);
    local_298 = &local_120;
    local_2a0 = (undefined ***)local_210;
    local_2a8 = local_208;
    local_1e0 = CONCAT44(0x3f800000,(undefined4)local_1e0);
    bVar9 = FUN_1424a10c0(lVar2,*(undefined4 *)(param_7 + 0x20),&local_1e8,param_4);
  }
LAB_1423110c8:
  return (ulonglong)bVar9;
}



// FUNCTION 142311140 Get body=89 status=ok
// SIG undefined Get(void)

longlong UCollisionProfile::Get(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  if (DAT_146aefe24 == '\0') {
    FUN_142314940(lVar2,0);
    DAT_146aefe24 = '\x01';
  }
  return lVar2;
}



// FUNCTION 1423111a0 FUN_1423111a0 body=5 status=ok
// SIG undefined FUN_1423111a0(void)

undefined8 FUN_1423111a0(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((param_1[1] != 0) && (iVar2 = *param_1, -1 < iVar2)) && (iVar2 < (int)DAT_1469e91c4)) &&
     (((uVar4 = iVar2 >> 0x1f & 0xffff, uVar3 = iVar2 + uVar4,
       puVar1 = (undefined8 *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar4) * 0x18), puVar1 != (undefined8 *)0x0 &&
       (*(int *)(puVar1 + 2) == param_1[1])) && ((*(uint *)(puVar1 + 1) & 0x30000000) == 0)))) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 1423111b0 FUN_1423111b0 body=421 status=ok
// SIG undefined FUN_1423111b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1423111b0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8 [16];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    plVar8 = (longlong *)0x0;
    lVar6 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (plVar8 = *(longlong **)(param_2 + 0x4c0), plVar8 != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(*plVar8 + 0x440))(plVar8,param_3), cVar5 != '\0')) {
      (**(code **)(*plVar8 + 0x420))(plVar8,param_1,param_3,0);
      return param_1;
    }
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1422fdd10(param_2,local_c8,0);
    puVar7 = local_c8;
    if (local_48 != (undefined8 *)0x0) {
      puVar7 = local_48;
    }
    puVar1 = puVar7 + (int)local_40;
    for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      plVar2 = (longlong *)*puVar7;
      if (((plVar2 != (longlong *)0x0) && (plVar2 != plVar8)) &&
         (cVar5 = (**(code **)(*plVar2 + 0x440))(plVar2,param_3), cVar5 != '\0')) {
        (**(code **)(*plVar2 + 0x420))(plVar2,param_1,param_3,0);
        if (local_48 == (undefined8 *)0x0) {
          return param_1;
        }
        FMemory::Free();
        return param_1;
      }
    }
    if (local_48 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  uVar4 = uRam00000001468b5b78;
  *param_1 = _DAT_1468b5b70;
  param_1[1] = uVar4;
  uVar4 = uRam00000001468b5b88;
  param_1[2] = _DAT_1468b5b80;
  param_1[3] = uVar4;
  uVar4 = uRam00000001468b5b98;
  param_1[4] = _DAT_1468b5b90;
  param_1[5] = uVar4;
  return param_1;
}



// FUNCTION 142311360 FUN_142311360 body=25 status=ok
// SIG undefined FUN_142311360(void)

undefined8 * FUN_142311360(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x8a8);
  *param_2 = *(undefined8 *)(param_1 + 0x8a0);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142311380 FUN_142311380 body=9 status=ok
// SIG undefined FUN_142311380(void)

undefined4 FUN_142311380(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x538);
}



// FUNCTION 142311390 FUN_142311390 body=486 status=ok
// SIG undefined FUN_142311390(void)

undefined8 FUN_142311390(longlong param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50 [2];
  undefined1 local_40;
  undefined4 local_3f;
  undefined4 uStack_3b;
  undefined4 uStack_37;
  undefined4 uStack_33;
  undefined8 local_2f;
  undefined8 uStack_27;
  
  plVar3 = (longlong *)UCollisionProfile::GetPrivateStaticClass();
  lVar6 = plVar3[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar6 = plVar3[0x1f];
  }
  if (DAT_146aefe24 == '\0') {
    FUN_142314940(lVar6,0);
    DAT_146aefe24 = '\x01';
  }
  local_50[1] = 0x12;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_50,0);
  FGenericPlatformString::Memcpy(local_50[0],L"Needs description",0x24);
  local_40 = 1;
  FUN_1426d3dd0(&local_3f);
  if ((param_1 == 0) ||
     (cVar1 = UCollisionProfile::FindProfileData(lVar6,lVar6 + 0x38,param_1,&local_78),
     cVar1 == '\0')) {
    if (*(int *)(lVar6 + 0x90) != *(int *)(lVar6 + 0xbc)) {
      lVar4 = *(longlong *)(lVar6 + 200);
      if (*(longlong *)(lVar6 + 200) == 0) {
        lVar4 = lVar6 + 0xc0;
      }
      iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)param_1 >> 0x20) + (int)param_1) &
                               (longlong)*(int *)(lVar6 + 0xd0) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          plVar3 = (longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)iVar2 * 0x18);
          if (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)iVar2 * 0x18) == param_1) {
            if (iVar2 != -1) goto LAB_1423114e3;
            break;
          }
          iVar2 = (int)plVar3[2];
        } while (iVar2 != -1);
      }
    }
    plVar3 = (longlong *)0x0;
LAB_1423114e3:
    plVar7 = plVar3 + 1;
    if (plVar3 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    if (((plVar7 == (longlong *)0x0) || (*plVar7 == 0)) ||
       (cVar1 = UCollisionProfile::FindProfileData(lVar6,lVar6 + 0x38,*plVar7,&local_78),
       cVar1 == '\0')) {
      uVar5 = 0;
      goto LAB_14231153a;
    }
  }
  *param_2 = (uint)local_70._1_1_;
  FUN_1426d3dd0(local_98);
  uVar5 = 1;
  *param_3 = local_3f;
  param_3[1] = uStack_3b;
  param_3[2] = uStack_37;
  param_3[3] = uStack_33;
  *(undefined8 *)(param_3 + 4) = local_2f;
  *(undefined8 *)(param_3 + 6) = uStack_27;
LAB_14231153a:
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 142311580 FUN_142311580 body=45 status=ok
// SIG undefined FUN_142311580(void)

undefined8 FUN_142311580(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    lVar1 = FUN_1423ac7e0();
    if (lVar1 != 0) {
      uVar2 = UAnimInstance::GetCurrentActiveMontage(lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1423115b0 FUN_1423115b0 body=131 status=ok
// SIG undefined FUN_1423115b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1423115b0(longlong param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar3 = plVar1[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar3 = plVar1[0x1f];
  }
  lVar3 = *(longlong *)(lVar3 + 0x4d0);
  if (lVar3 != 0) {
    uVar8 = *(uint *)(lVar3 + 0x230) & _DAT_146aefa70;
    uVar9 = *(uint *)(lVar3 + 0x234) & uRam0000000146aefa74;
    uVar10 = *(uint *)(lVar3 + 0x238) & uRam0000000146aefa78;
    uVar11 = *(uint *)(lVar3 + 0x23c) & uRam0000000146aefa7c;
    auVar5._4_4_ = uVar9;
    auVar5._0_4_ = uVar8;
    auVar5._8_4_ = uVar10;
    auVar5._12_4_ = uVar11;
    auVar6._4_4_ = uVar10;
    auVar6._0_4_ = uVar9;
    auVar6._8_4_ = uVar8;
    auVar6._12_4_ = uVar11;
    auVar6 = minps(auVar5,auVar6);
    auVar2._4_4_ = uVar8;
    auVar2._0_4_ = uVar10;
    auVar2._8_4_ = uVar9;
    auVar2._12_4_ = uVar11;
    auVar6 = minps(auVar6,auVar2);
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = auVar6._0_4_ * *(float *)(lVar3 + 0x710);
    return auVar7._0_8_;
  }
  uVar4 = FUN_142696610(param_1);
  return uVar4;
}



// FUNCTION 142311640 FUN_142311640 body=307 status=ok
// SIG undefined FUN_142311640(void)

longlong FUN_142311640(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  
  if ((*(char *)(param_1 + 0x25) == '\0') &&
     (*(undefined1 *)(param_1 + 0x25) = 1, 1 < *(int *)(param_1 + 0x50))) {
    piVar1 = (int *)(param_1 + 0x28);
    uVar5 = 0;
    piVar6 = *(int **)(param_1 + 0x48);
    if (*(int **)(param_1 + 0x48) == (int *)0x0) {
      piVar6 = piVar1;
    }
    AlgoImpl::
    IntroSortInternal<unsigned_int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,TLess<unsigned_int>_>_>
              (piVar6,(longlong)*(int *)(param_1 + 0x50),local_res8[0],local_res8);
    piVar6 = *(int **)(param_1 + 0x48);
    piVar4 = piVar6;
    if (piVar6 == (int *)0x0) {
      piVar4 = piVar1;
    }
    piVar7 = piVar4 + 1;
    uVar8 = (ulonglong)((longlong)(piVar4 + *(int *)(param_1 + 0x50)) + (3 - (longlong)piVar7)) >> 2
    ;
    if (piVar4 + *(int *)(param_1 + 0x50) < piVar7) {
      uVar8 = uVar5;
    }
    if (uVar8 != 0) {
      do {
        if (*piVar4 != *piVar7) {
          piVar4 = piVar4 + 1;
          *piVar4 = *piVar7;
        }
        piVar7 = piVar7 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar8);
      piVar6 = *(int **)(param_1 + 0x48);
    }
    iVar2 = *(int *)(param_1 + 0x50);
    if (piVar6 == (int *)0x0) {
      piVar6 = piVar1;
    }
    iVar3 = (int)((longlong)piVar4 - (longlong)piVar6 >> 2) + 1;
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0x50) = iVar3;
      if (*(int *)(param_1 + 0x54) < iVar3) {
        TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(piVar1);
      }
      piVar6 = *(int **)(param_1 + 0x48);
      if (*(int **)(param_1 + 0x48) == (int *)0x0) {
        piVar6 = piVar1;
      }
      _guard_xfg_dispatch_icall_nop(piVar6 + iVar2,0,(longlong)(iVar3 - iVar2) << 2);
    }
    else if ((iVar3 < iVar2) && (iVar3 != iVar2)) {
      *(int *)(param_1 + 0x50) = iVar3;
    }
  }
  return param_1 + 0x28;
}



// FUNCTION 142311790 FUN_142311790 body=1676 status=ok
// SIG undefined FUN_142311790(void)

void FUN_142311790(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  short *psVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined1 local_res10 [8];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_1426970a0();
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar9 < DAT_146aefd50) && (_Init_thread_header(&DAT_146aefd50), DAT_146aefd50 == -1)) {
    uVar3 = APostProcessVolume::GetPrivateStaticClass();
    APostProcessVolume::GetPrivateStaticClass();
    puVar4 = (undefined8 *)FName::FName(local_res10,L"RepRootMotion",1);
    DAT_146aefd48 = FUN_1405dfb00(uVar3,*puVar4);
    _Init_thread_footer(&DAT_146aefd50);
  }
  uVar8 = 0;
  uVar5 = uVar8;
  if (0 < *(int *)(DAT_146aefd48 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aefd48 + 0x40) + (short)uVar5;
      local_24 = 0xb;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(DAT_146aefd48 + 0x30));
  }
  if ((*piVar9 < DAT_146aefd60) && (_Init_thread_header(&DAT_146aefd60), DAT_146aefd60 == -1)) {
    uVar3 = APostProcessVolume::GetPrivateStaticClass();
    APostProcessVolume::GetPrivateStaticClass();
    puVar4 = (undefined8 *)FName::FName(local_res10,L"ReplicatedBasedMovement",1);
    DAT_146aefd58 = FUN_1405dfb00(uVar3,*puVar4);
    _Init_thread_footer(&DAT_146aefd60);
  }
  uVar5 = uVar8;
  if (0 < *(int *)(DAT_146aefd58 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aefd58 + 0x40) + (short)uVar5;
      local_24 = 4;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(DAT_146aefd58 + 0x30));
  }
  if ((*piVar9 < DAT_146aefd70) && (_Init_thread_header(&DAT_146aefd70), DAT_146aefd70 == -1)) {
    uVar3 = APostProcessVolume::GetPrivateStaticClass();
    APostProcessVolume::GetPrivateStaticClass();
    puVar4 = (undefined8 *)
             FName::FName(local_res10,L"ReplicatedServerLastTransformUpdateTimeStamp",1);
    DAT_146aefd68 = FUN_1405dfb00(uVar3,*puVar4);
    _Init_thread_footer(&DAT_146aefd70);
  }
  uVar5 = uVar8;
  if (0 < *(int *)(DAT_146aefd68 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aefd68 + 0x40) + (short)uVar5;
      local_24 = 0xb;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(DAT_146aefd68 + 0x30));
  }
  if ((*piVar9 < DAT_146aefd80) && (_Init_thread_header(&DAT_146aefd80), DAT_146aefd80 == -1)) {
    uVar3 = APostProcessVolume::GetPrivateStaticClass();
    APostProcessVolume::GetPrivateStaticClass();
    puVar4 = (undefined8 *)FName::FName(local_res10,L"ReplicatedMovementMode",1);
    DAT_146aefd78 = FUN_1405dfb00(uVar3,*puVar4);
    _Init_thread_footer(&DAT_146aefd80);
  }
  uVar5 = uVar8;
  if (0 < *(int *)(DAT_146aefd78 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aefd78 + 0x40) + (short)uVar5;
      local_24 = 4;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(DAT_146aefd78 + 0x30));
  }
  if ((*piVar9 < DAT_146aefd90) && (_Init_thread_header(&DAT_146aefd90), DAT_146aefd90 == -1)) {
    uVar3 = APostProcessVolume::GetPrivateStaticClass();
    APostProcessVolume::GetPrivateStaticClass();
    puVar4 = (undefined8 *)FName::FName(local_res10,L"bIsCrouched",1);
    DAT_146aefd88 = FUN_1405dfb00(uVar3,*puVar4);
    _Init_thread_footer(&DAT_146aefd90);
  }
  uVar5 = uVar8;
  if (0 < *(int *)(DAT_146aefd88 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aefd88 + 0x40) + (short)uVar5;
      local_24 = 4;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(DAT_146aefd88 + 0x30));
  }
  if ((*piVar9 < DAT_146aefda0) && (_Init_thread_header(&DAT_146aefda0), DAT_146aefda0 == -1)) {
    uVar3 = APostProcessVolume::GetPrivateStaticClass();
    APostProcessVolume::GetPrivateStaticClass();
    puVar4 = (undefined8 *)FName::FName(local_res10,L"bProxyIsJumpForceApplied",1);
    DAT_146aefd98 = FUN_1405dfb00(uVar3,*puVar4);
    _Init_thread_footer(&DAT_146aefda0);
  }
  uVar5 = uVar8;
  if (0 < *(int *)(DAT_146aefd98 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aefd98 + 0x40) + (short)uVar5;
      local_24 = 4;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(DAT_146aefd98 + 0x30));
  }
  if ((*piVar9 < DAT_146aefdb0) && (_Init_thread_header(&DAT_146aefdb0), DAT_146aefdb0 == -1)) {
    uVar3 = APostProcessVolume::GetPrivateStaticClass();
    APostProcessVolume::GetPrivateStaticClass();
    puVar4 = (undefined8 *)FName::FName(local_res10,L"AnimRootMotionTranslationScale",1);
    DAT_146aefda8 = FUN_1405dfb00(uVar3,*puVar4);
    _Init_thread_footer(&DAT_146aefdb0);
  }
  uVar5 = uVar8;
  if (0 < *(int *)(DAT_146aefda8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aefda8 + 0x40) + (short)uVar5;
      local_24 = 4;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(DAT_146aefda8 + 0x30));
  }
  if ((*piVar9 < DAT_146aefdc0) && (_Init_thread_header(&DAT_146aefdc0), DAT_146aefdc0 == -1)) {
    uVar3 = FUN_1428dfc70();
    APostProcessVolume::GetPrivateStaticClass();
    puVar4 = (undefined8 *)FName::FName(local_res10,L"ReplicatedMovement",1);
    DAT_146aefdb8 = FUN_1405dfb00(uVar3,*puVar4);
    _Init_thread_footer(&DAT_146aefdc0);
  }
  lVar1 = DAT_146aefdb8;
  if (0 < (int)param_2[1]) {
    psVar2 = (short *)*param_2;
    uVar5 = uVar8;
    uVar10 = uVar8;
    do {
      if (*psVar2 == *(short *)(DAT_146aefdb8 + 0x40)) {
        if (0 < *(int *)(DAT_146aefdb8 + 0x30)) {
          lVar6 = uVar10 * 0xc;
          uVar5 = uVar8;
          do {
            lVar6 = lVar6 + 0xc;
            uVar7 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar7;
            *(undefined4 *)(*param_2 + -8 + lVar6) = 0xc;
          } while ((int)uVar7 < *(int *)(lVar1 + 0x30));
        }
        break;
      }
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      uVar10 = uVar10 + 1;
      psVar2 = psVar2 + 6;
    } while ((int)uVar7 < (int)param_2[1]);
  }
  if ((*piVar9 < DAT_146aefdd0) && (_Init_thread_header(&DAT_146aefdd0), DAT_146aefdd0 == -1)) {
    uVar3 = APostProcessVolume::GetPrivateStaticClass();
    APostProcessVolume::GetPrivateStaticClass();
    puVar4 = (undefined8 *)FName::FName(local_res10,L"AnimRootMotionTranslationScale3D",1);
    DAT_146aefdc8 = FUN_1405dfb00(uVar3,*puVar4);
    _Init_thread_footer(&DAT_146aefdd0);
  }
  if (0 < *(int *)(DAT_146aefdc8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146aefdc8 + 0x40) + (short)uVar8;
      local_24 = 4;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(DAT_146aefdc8 + 0x30));
  }
  return;
}



// FUNCTION 142311e20 FUN_142311e20 body=359 status=ok
// SIG undefined FUN_142311e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142311e20(undefined8 *param_1,longlong *param_2,undefined8 param_3,float *param_4)

{
  char cVar1;
  float fVar2;
  longlong lVar3;
  undefined8 uVar4;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_38 [48];
  
  uVar4 = _DAT_1468b5d90;
  fVar2 = DAT_1468b5d98;
  if (((((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 0x24e) == '\x02')) &&
       (lVar3 = (**(code **)(*param_2 + 0x6d0))(param_2,param_3,1), uVar4 = _DAT_1468b5d90,
       fVar2 = DAT_1468b5d98, lVar3 != 0)) &&
      (((FUN_142698f50(lVar3,&local_58), 0.0001 < ABS(local_58) || (0.0001 < ABS(local_54))) ||
       (uVar4 = _DAT_1468b5d90, fVar2 = DAT_1468b5d98, 0.0001 < ABS(local_50))))) &&
     (cVar1 = FUN_142311f90(param_2,param_3,&local_48,local_38), uVar4 = _DAT_1468b5d90,
     fVar2 = DAT_1468b5d98, cVar1 != '\0')) {
    uVar4 = CONCAT44((*param_4 - local_48) * local_50 - (param_4[2] - local_40) * local_58,
                     (param_4[2] - local_40) * local_54 - (param_4[1] - local_44) * local_50);
    fVar2 = (param_4[1] - local_44) * local_58 - (*param_4 - local_48) * local_54;
  }
  *param_1 = uVar4;
  *(float *)(param_1 + 1) = fVar2;
  return param_1;
}



// FUNCTION 142311f90 FUN_142311f90 body=288 status=ok
// SIG undefined FUN_142311f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142311f90(longlong *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  
  if (param_1 == (longlong *)0x0) {
    *param_3 = _DAT_1468b5d90;
    uVar1 = DAT_1468b5d98;
    *(undefined4 *)(param_3 + 1) = DAT_1468b5d98;
    lVar2 = _DAT_1464aa818;
    *param_4 = _DAT_1464aa810;
    param_4[1] = lVar2;
    return (ulonglong)(uint3)((uint)uVar1 >> 8) << 8;
  }
  if (param_2 != 0) {
    cVar4 = (**(code **)(*param_1 + 0x440))();
    if (cVar4 != '\0') {
      USceneComponent::GetSocketWorldLocationAndRotation(param_1,param_2,param_3,param_4);
      return 1;
    }
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x224);
    lVar2 = param_1[0x45];
    *(int *)param_3 = (int)param_1[0x44];
    *(undefined4 *)((longlong)param_3 + 4) = uVar1;
    *(int *)(param_3 + 1) = (int)lVar2;
    lVar2 = param_1[0x43];
    *param_4 = param_1[0x42];
    param_4[1] = lVar2;
    return 0;
  }
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x224);
  lVar3 = param_1[0x45];
  *(int *)param_3 = (int)param_1[0x44];
  *(undefined4 *)((longlong)param_3 + 4) = uVar1;
  *(int *)(param_3 + 1) = (int)lVar3;
  lVar2 = param_1[0x43];
  *param_4 = param_1[0x42];
  param_4[1] = lVar2;
  return CONCAT71((uint7)(uint3)((uint)(int)lVar3 >> 8),1);
}



// FUNCTION 1423120b0 FUN_1423120b0 body=355 status=ok
// SIG undefined FUN_1423120b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1423120b0(float *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 local_28 [32];
  
  fVar4 = DAT_1468b5d98;
  *(undefined8 *)param_1 = _DAT_1468b5d90;
  param_1[2] = fVar4;
  if ((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 0x24e) == '\x02')) {
    if (param_3 != 0) {
      lVar2 = (**(code **)(*param_2 + 0x6d0))
                        (param_2,param_3,CONCAT71((uint7)(uint3)((uint)fVar4 >> 8),1));
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)FUN_142699400(lVar2,local_28);
        fVar4 = *(float *)(puVar3 + 1);
        *(undefined8 *)param_1 = *puVar3;
        param_1[2] = fVar4;
        return param_1;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x458))(param_2,local_28);
    fVar4 = *(float *)(puVar3 + 1);
    *(undefined8 *)param_1 = *puVar3;
    param_1[2] = fVar4;
    fVar4 = *param_1;
    if (fVar4 == 0.0) {
      if (((param_1[1] == 0.0) && (param_1[2] == 0.0)) &&
         (plVar1 = (longlong *)param_2[0x23], plVar1 != (longlong *)0x0)) {
        puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x308))(plVar1,local_28);
        fVar4 = *(float *)(puVar3 + 1);
        *(undefined8 *)param_1 = *puVar3;
        param_1[2] = fVar4;
        fVar4 = *param_1;
      }
      if (((fVar4 == 0.0) && (param_1[1] == 0.0)) &&
         ((param_1[2] == 0.0 && (lVar2 = (**(code **)(*param_2 + 0x6d0))(param_2,0,1), lVar2 != 0)))
         ) {
        puVar3 = (undefined8 *)FUN_142699400(lVar2,local_28);
        fVar4 = *(float *)(puVar3 + 1);
        *(undefined8 *)param_1 = *puVar3;
        param_1[2] = fVar4;
      }
    }
  }
  return param_1;
}



// FUNCTION 142312230 FUN_142312230 body=361 status=ok
// SIG undefined FUN_142312230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142312230(longlong param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 local_18;
  float local_10;
  
  local_10 = DAT_146531bd8;
  local_18 = CONCAT44(DAT_146531bd4,DAT_146531bd0);
  lVar2 = *(longlong *)(param_1 + 0x70);
  *(undefined8 *)param_2 = local_18;
  param_2[2] = local_10;
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x178);
    if (lVar2 == 0) {
    }
    else {
      local_18 = *(undefined8 *)(lVar2 + 0x220);
      local_10 = *(float *)(lVar2 + 0x228) - *(float *)(lVar2 + 0x1e4);
    }
    *(undefined8 *)param_2 = local_18;
    param_2[2] = local_10;
  }
  if ((((DAT_146531bd0 == *param_2) && (DAT_146531bd4 == param_2[1])) &&
      (DAT_146531bd8 == param_2[2])) && (lVar2 = *(longlong *)(param_1 + 0x78), lVar2 != 0)) {
    uVar4 = *(uint *)(lVar2 + 0x230) & _DAT_146aefa70;
    uVar5 = *(uint *)(lVar2 + 0x234) & uRam0000000146aefa74;
    uVar6 = *(uint *)(lVar2 + 0x238) & uRam0000000146aefa78;
    uVar7 = *(uint *)(lVar2 + 0x23c) & uRam0000000146aefa7c;
    auVar8._4_4_ = uVar5;
    auVar8._0_4_ = uVar4;
    auVar8._8_4_ = uVar6;
    auVar8._12_4_ = uVar7;
    auVar9._4_4_ = uVar6;
    auVar9._0_4_ = uVar5;
    auVar9._8_4_ = uVar4;
    auVar9._12_4_ = uVar7;
    auVar9 = minps(auVar8,auVar9);
    auVar3._4_4_ = uVar4;
    auVar3._0_4_ = uVar6;
    auVar3._8_4_ = uVar5;
    auVar3._12_4_ = uVar7;
    auVar9 = minps(auVar9,auVar3);
    fVar1 = *(float *)(lVar2 + 0x710);
    lVar2 = *(longlong *)(param_1 + -0x2f0);
    if (lVar2 == 0) {
      local_18 = _DAT_1468b5d90;
      local_10 = DAT_1468b5d98;
    }
    else {
      local_18 = *(undefined8 *)(lVar2 + 0x220);
      local_10 = *(float *)(lVar2 + 0x228);
    }
    *(undefined8 *)param_2 = local_18;
    param_2[2] = local_10 - auVar9._0_4_ * fVar1;
  }
  return param_2;
}



// FUNCTION 1423123a0 FUN_1423123a0 body=18 status=ok
// SIG undefined FUN_1423123a0(void)

undefined8 FUN_1423123a0(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 1423123c0 FUN_1423123c0 body=313 status=ok
// SIG undefined FUN_1423123c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423123c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    uVar4 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x40))();
    if (uVar2 != 0) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x48))
                  (*(longlong **)(param_1 + 0xc0),uVar4,&local_58);
        iVar1 = (int)param_2[1];
        local_68 = local_58;
        uVar5 = local_4c ^ 0x80000000;
        uStack_64 = local_54;
        local_60 = local_50;
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
        }
        uVar4 = uVar4 + 1;
        puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
        *puVar3 = CONCAT44(uStack_64,local_68);
        *(undefined4 *)(puVar3 + 1) = local_60;
        *(uint *)((longlong)puVar3 + 0xc) = uVar5;
      } while (uVar4 < uVar2);
    }
  }
  return;
}



// FUNCTION 142312500 GetProfileTemplate body=28 status=ok
// SIG undefined GetProfileTemplate(void)

void UCollisionProfile::GetProfileTemplate(longlong param_1,longlong param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FindProfileData(param_1,param_1 + 0x38,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 142312520 FUN_142312520 body=64 status=ok
// SIG undefined FUN_142312520(void)

undefined8 FUN_142312520(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    lVar1 = FUN_1423ac7e0();
    if (lVar1 != 0) {
      uVar2 = FUN_1423ac7e0(*(undefined8 *)(param_1 + 0x4c0));
      uVar2 = FUN_142274500(uVar2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142312560 FUN_142312560 body=166 status=ok
// SIG undefined FUN_142312560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142312560(longlong *param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_1[0x2d] == param_1[0x9a]) {
    cVar3 = (**(code **)(*param_1 + 0x580))();
    if (cVar3 != '\0') {
      lVar1 = param_1[0x9a];
      uVar4 = *(uint *)(lVar1 + 0x230) & _DAT_146aefa70;
      uVar5 = *(uint *)(lVar1 + 0x234) & uRam0000000146aefa74;
      uVar6 = *(uint *)(lVar1 + 0x238) & uRam0000000146aefa78;
      uVar7 = *(uint *)(lVar1 + 0x23c) & uRam0000000146aefa7c;
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
      *param_2 = auVar9._0_4_ * *(float *)(lVar1 + 0x714);
      *param_3 = auVar9._0_4_ * *(float *)(lVar1 + 0x710);
      return;
    }
  }
  FUN_142233ae0(param_1,param_2,param_3);
  return;
}



// FUNCTION 142312610 FUN_142312610 body=73 status=ok
// SIG undefined FUN_142312610(void)

void FUN_142312610(longlong *param_1,int *param_2,int *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x2b0))();
  *param_2 = (int)fVar1;
  fVar1 = (float)(**(code **)(*param_1 + 0x2b8))(param_1);
  *param_3 = (int)fVar1;
  return;
}



// FUNCTION 142312680 FUN_142312680 body=473 status=ok
// SIG undefined FUN_142312680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142312680(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 *local_110;
  undefined *local_108;
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60 [4];
  undefined4 *local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x528) == 0)) {
    uVar6 = 0;
  }
  else {
    FUN_1426e1ca0(*(longlong *)(param_2 + 0x528),&local_e8);
    FUN_1426e1d20(*(undefined8 *)(param_2 + 0x528),local_d8);
    lVar2 = *(longlong *)(param_2 + 0x488);
    uVar6 = 0;
    local_f8 = 0;
    local_b8 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_70 = 0;
    local_68 = 0;
    local_50 = (undefined4 *)0x0;
    local_48 = 0;
    local_a8 = 0x10100;
    local_a0 = 0;
    local_a4 = 0;
    local_94 = 0x101;
    local_9c = 0;
    local_a2 = 0;
    if (lVar2 != 0) {
      uVar1 = *(undefined4 *)(lVar2 + 0xc);
      local_48 = 1;
      TArray<enum_D3D12_RESOURCE_STATES,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_60,0);
      puVar7 = local_60;
      if (local_50 != (undefined4 *)0x0) {
        puVar7 = local_50;
      }
      *puVar7 = uVar1;
      local_b0 = *(undefined8 *)(lVar2 + 0x18);
    }
    pfVar4 = (float *)FRotator::Vector(local_d8,local_c8);
    local_f0 = pfVar4[2] * 100000.0 + local_e0;
    local_f8 = CONCAT44(pfVar4[1] * 100000.0 + local_e4,*pfVar4 * 100000.0 + local_e8);
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    local_108 = &DAT_146aefe68;
    local_110 = &local_b8;
    local_118 = 2;
    cVar3 = UWorld::LineTraceSingleByChannel(uVar5,param_3,&local_e8,&local_f8);
    if (cVar3 != '\0') {
      uVar6 = FWeakObjectPtr::Get(param_3 + 0x6c);
    }
    if (local_50 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    if (local_70 != 0) {
      FMemory::Free();
    }
  }
  return uVar6;
}



// FUNCTION 142312860 GetWorld body=12 status=ok
// SIG undefined GetWorld(void)

void UCanvasRenderTarget2D::GetWorld(longlong param_1)

{
  FWeakObjectPtr::Get(param_1 + 0xf8);
  return;
}



// FUNCTION 142312870 GetWorld body=77 status=ok
// SIG undefined GetWorld(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 UCheatManager::GetWorld(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 != '\0') {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001423128a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(_DAT_00000000 + 0x148))();
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001423128b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x148))();
  return uVar2;
}



// FUNCTION 1423128c0 FUN_1423128c0 body=264 status=ok
// SIG undefined FUN_1423128c0(void)

void FUN_1423128c0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_18 [2];
  
  plVar4 = (longlong *)0x0;
  plVar5 = plVar4;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  plVar5 = (longlong *)plVar5[0x91];
  if (plVar5 != (longlong *)0x0) {
    local_18[0] = 0;
    local_18[1] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"You feel ethereal",0x24);
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar4 = *(longlong **)(param_1 + 0x20);
    }
    (**(code **)(*plVar4 + 0xc60))(plVar4,local_18,0,0);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_142912720(plVar5);
      cVar2 = (**(code **)(*plVar5 + 0x778))(plVar5);
      if (cVar2 == '\0') {
        (**(code **)(*plVar5 + 0x938))(plVar5);
      }
    }
  }
  return;
}



// FUNCTION 1423129d0 FUN_1423129d0 body=259 status=ok
// SIG undefined FUN_1423129d0(void)

void FUN_1423129d0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  longlong local_18 [2];
  
  plVar4 = (longlong *)0x0;
  plVar3 = plVar4;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  lVar2 = plVar3[0x91];
  local_18[0] = 0;
  if (lVar2 == 0) {
    local_18[1] = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar6 = 0x28;
    pwVar5 = L"No APawn* possessed";
  }
  else {
    bVar1 = *(byte *)(lVar2 + 0x91);
    if ((bVar1 & 0x40) == 0) {
      local_18[1] = 0xd;
      *(byte *)(lVar2 + 0x91) = bVar1 | 0x40;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar6 = 0x1a;
      pwVar5 = L"God Mode off";
    }
    else {
      local_18[1] = 0xc;
      *(byte *)(lVar2 + 0x91) = bVar1 & 0xbf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar6 = 0x18;
      pwVar5 = L"God mode on";
    }
  }
  FGenericPlatformString::Memcpy(local_18[0],pwVar5,uVar6);
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  (**(code **)(*plVar4 + 0xc60))(plVar4,local_18,0,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142312ae0 FUN_142312ae0 body=1910 status=ok
// SIG undefined FUN_142312ae0(void)

void FUN_142312ae0(longlong *param_1,undefined8 param_2,undefined8 param_3,__uint64 param_4)

{
  void *_Dst;
  void *_Src;
  ErrorCode EVar1;
  undefined4 uVar2;
  AKRESULT AVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  ErrorLevel EVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong lVar12;
  ulong uVar13;
  undefined2 *puVar14;
  undefined1 local_res8 [8];
  ulong in_stack_ffffffffffffffa8;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar15;
  longlong local_48;
  int local_40;
  int local_3c;
  void *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  puVar14 = &DAT_143f3eda8;
  if ((int)param_1[6] == 0) {
    uVar13 = 0x43f3eda8;
  }
  else {
    uVar13 = (ulong)param_1[5];
  }
  FString::PrintfImpl(&local_38,L"--- Begin : FPS chart dump for level \'%s\'");
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  EVar1 = FDateTime::Now(local_res8);
  EVar9 = (ErrorLevel)local_28;
  puVar5 = (undefined8 *)FDateTime::ToString();
  if (*(int *)(puVar5 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*puVar5;
  }
  uVar2 = GetChangeListNumberForPerfTesting();
  AVar3 = AK::Monitor::PostCode
                    (EVar1,EVar9,uVar13,param_4,in_stack_ffffffffffffffa8,
                     SUB81(in_stack_ffffffffffffffb0,0));
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  uVar6 = FUN_1415bb3d0(AVar3);
  uVar7 = FUN_14162b4e0();
  FString::PrintfImpl(&local_38,
                      L"Dumping FPS chart at %s using build %s in config %s built from changelist %i"
                      ,puVar10,uVar7,uVar6,CONCAT44(uVar15,uVar2));
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_30 = 0xe;
  local_38 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"Machine info:",0x1c);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  iVar11 = 0;
  if ((int)param_1[0x1d] == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)param_1[0x1c];
  }
  if ((int)param_1[0x1b] == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)param_1[0x1a];
  }
  FString::PrintfImpl(&local_38,L"\tOS: %s %s",puVar8,puVar10);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  if ((int)param_1[0x21] == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)param_1[0x20];
  }
  if ((int)param_1[0x1f] == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)param_1[0x1e];
  }
  FString::PrintfImpl(&local_38,L"\tCPU: %s %s",puVar8,puVar10);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  if ((int)param_1[0x25] == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)param_1[0x24];
  }
  FString::PrintfImpl(&local_48,L"\tGPU: %s",puVar10);
  if ((int)param_1[0x23] == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)param_1[0x22];
  }
  if ((int)param_1[0x25] == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)param_1[0x24];
  }
  iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
  if (iVar4 != 0) {
    if ((int)param_1[0x23] != 0) {
      puVar14 = (undefined2 *)param_1[0x22];
    }
    FString::PrintfImpl(&local_38,L" (desktop adapter %s)",puVar14);
    _Src = local_38;
    iVar4 = local_40;
    if ((int)local_30 != 0) {
      iVar11 = (int)local_30 + -1;
    }
    if (iVar11 != 0) {
      lVar12 = (longlong)local_40;
      local_40 = (uint)(local_40 == 0) + local_40 + iVar11;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar4);
      }
      _Dst = (void *)(local_48 + (lVar12 - (ulonglong)(iVar4 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar11 * 2);
      *(undefined2 *)((longlong)iVar11 * 2 + (longlong)_Dst) = 0;
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
  }
  (**(code **)(*param_1 + 8))(param_1,&local_48);
  FString::PrintfImpl(&local_38,L"\tResolution Quality: %.2f",(double)*(float *)(param_1 + 0x10));
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"\tView Distance Quality: %d",
                      *(undefined4 *)((longlong)param_1 + 0x84));
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"\tAnti-Aliasing Quality: %d",(int)param_1[0x11]);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"\tShadow Quality: %d",*(undefined4 *)((longlong)param_1 + 0x8c));
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"\tPost-Process Quality: %d",(int)param_1[0x12]);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"\tTexture Quality: %d",*(undefined4 *)((longlong)param_1 + 0x94));
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"\tEffects Quality: %d",(int)param_1[0x13]);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"\tFoliage Quality: %d",*(undefined4 *)((longlong)param_1 + 0x9c));
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,
                      L"%i frames collected over %4.2f seconds, disregarding %4.2f seconds for a %4.2f FPS average"
                      ,(int)param_1[4],param_1[3],(double)*(float *)((longlong)param_1 + 0x3c),
                      (double)*(float *)(param_1 + 7));
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"Average GPU frametime: %4.2f ms",(double)*(float *)(param_1 + 8));
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"Average RenderThread frametime: %4.2f ms",
                      (double)*(float *)((longlong)param_1 + 0x44));
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"Average GameThread frametime: %4.2f ms",
                      (double)*(float *)(param_1 + 9));
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"Total time spent flushing async loading: %4.2f ms",param_1[10]);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"Total flushing async loading calls: %d",(int)param_1[0xb]);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"Max flush async loading time: %4.2f ms",param_1[0xc]);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"Average flush async loading time: %4.2f ms",param_1[0xd]);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"Total sync loads: %d",(int)param_1[0xe]);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"BoundGameThreadPct: %4.2f",
                      (double)*(float *)((longlong)param_1 + 0x74));
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"BoundRenderThreadPct: %4.2f",(double)*(float *)(param_1 + 0xf));
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"BoundGPUPct: %4.2f",(double)*(float *)((longlong)param_1 + 0x7c));
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_38,L"ExcludeIdleTime: %d",*DAT_146aefbc0);
  (**(code **)(*param_1 + 8))(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142313260 HandleDynamicResThreshold body=76 status=ok
// SIG undefined HandleDynamicResThreshold(void)

void FDumpFPSChartToEndpoint::HandleDynamicResThreshold
               (longlong *param_1,undefined4 param_2,float param_3)

{
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"DynamicRes above %d%% : %.2f%% of frames",param_2,(double)param_3);
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423132b0 HandleFPSBucket body=106 status=ok
// SIG undefined HandleFPSBucket(void)

void FDumpFPSChartToEndpoint::HandleFPSBucket
               (longlong *param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5)

{
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"Bucket: %.1f - %.1f  Time: %5.2f  Frame: %5.2f",param_4,param_5,
                      (double)param_2,(double)param_3);
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142313320 HandleFPSThreshold body=144 status=ok
// SIG undefined HandleFPSThreshold(void)

void FDumpFPSChartToEndpoint::HandleFPSThreshold
               (longlong *param_1,undefined4 param_2,int param_3,float param_4,float param_5)

{
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,
                      L"  Target %d FPS: %.2f %% syncs missed, %4.2f %% of time spent > %d FPS (%.2f %% of frames)"
                      ,param_2,(double)param_5,(double)param_4,param_2,
                      (double)(((float)((int)param_1[4] - param_3) / (float)(int)param_1[4]) * 100.0
                              ));
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423133b0 HandleHitchBucket body=222 status=ok
// SIG undefined HandleHitchBucket(void)

void FDumpFPSChartToEndpoint::HandleHitchBucket(longlong *param_1,longlong *param_2,int param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *local_18;
  int local_10;
  
  lVar4 = (longlong)param_3 * 0x20;
  dVar1 = *(double *)(lVar4 + 8 + *param_2);
  uVar2 = *(undefined8 *)(lVar4 + *param_2);
  if (dVar1 == 3.4028234663852886e+38) {
    FString::PrintfImpl(&local_18,L"%0.2fs - inf",uVar2);
  }
  else {
    FString::PrintfImpl(&local_18,L"%0.2fs - %0.2fs",uVar2,dVar1);
  }
  puVar3 = local_18;
  puVar5 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar5 = local_18;
  }
  FString::PrintfImpl(&local_18,L"Bucket: %s  Count: %i  Time: %.2f s",puVar5,
                      *(undefined4 *)(lVar4 + 0x18 + *param_2),
                      *(undefined8 *)(lVar4 + 0x10 + *param_2));
  (**(code **)(*param_1 + 8))(param_1,&local_18);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  return;
}



// FUNCTION 142313490 FUN_142313490 body=669 status=ok
// SIG undefined FUN_142313490(void)

void FUN_142313490(longlong *param_1,int param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  longlong local_48 [8];
  
  FString::PrintfImpl(local_48,L"Total hitch count:  %i",param_2);
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  dVar2 = 0.0;
  if (param_2 < 1) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = 1.0 / (double)param_2;
  }
  FString::PrintfImpl(local_48,L"Hitch frames bound by game thread:  %i  (%0.1f percent)",
                      *(int *)(param_1[1] + 0x114),(double)*(int *)(param_1[1] + 0x114) * dVar1);
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  FString::PrintfImpl(local_48,L"Hitch frames bound by render thread:  %i  (%0.1f percent)",
                      *(int *)(param_1[1] + 0x118),(double)*(int *)(param_1[1] + 0x118) * dVar1);
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  FString::PrintfImpl(local_48,L"Hitch frames bound by RHI thread:  %i  (%0.1f percent)",
                      *(int *)(param_1[1] + 0x11c),(double)*(int *)(param_1[1] + 0x11c) * dVar1);
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  FString::PrintfImpl(local_48,L"Hitch frames bound by GPU:  %i  (%0.1f percent)",
                      *(int *)(param_1[1] + 0x120),(double)*(int *)(param_1[1] + 0x120) * dVar1);
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  dVar1 = *(double *)(param_1[1] + 0x28);
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = (double)*(int *)(param_1[1] + 0x60) * (60.0 / dVar1);
  }
  FString::PrintfImpl(local_48,L"Hitches / min:  %.2f",dVar1);
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  FString::PrintfImpl(local_48,L"Time spent in hitch buckets:  %.2f s",param_3);
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  dVar1 = *(double *)(param_1[1] + 0x28);
  if (0.0 < dVar1) {
    dVar2 = (double)(int)*(double *)(param_1[1] + 0x58) / dVar1;
  }
  FString::PrintfImpl(local_48,L"Avg. hitch frame length:  %.2f s",dVar2);
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142313730 FUN_142313730 body=3513 status=ok
// SIG undefined FUN_142313730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142313730(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  float *pfVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  undefined1 *puVar22;
  float extraout_XMM0_Da;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_308 [32];
  float local_2e8;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2b0;
  undefined8 local_2a8;
  float local_2a0;
  undefined8 local_298;
  float local_290;
  ulonglong local_288;
  longlong local_280;
  uint local_278;
  uint local_274;
  uint local_270;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  longlong *local_258;
  longlong local_250;
  undefined1 local_248 [12];
  undefined8 local_23c;
  undefined4 local_234;
  undefined1 local_218 [192];
  undefined1 *local_158;
  int local_150;
  int local_14c;
  ulonglong local_e8;
  ulonglong uVar21;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  plVar1 = (longlong *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = 0;
  local_258 = param_2;
  local_250 = param_1;
  if (*(int *)(param_1 + 0x6c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1,0);
  }
  fVar34 = 0.0;
  *(undefined8 *)(param_1 + 0x7c) = _DAT_1468b5d90;
  uVar20 = DAT_1468b5d98;
  pfVar6 = (float *)(ulonglong)DAT_1468b5d98;
  *(uint *)(param_1 + 0x84) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x7c);
  *(uint *)(param_1 + 0x78) = uVar20;
  *(undefined1 *)(param_1 + 0x88) = 0;
  local_2e8 = 0.0;
  if (0 < (int)param_2[1]) {
    local_288 = 0;
    local_280 = 0;
    do {
      lVar18 = local_280;
      uVar7 = local_288;
      uVar13 = 0;
      FPoly::FPoly(local_248);
      local_23c = *(undefined8 *)(lVar18 + *param_2);
      local_234 = *(undefined4 *)(lVar18 + 8 + *param_2);
      FVector::FindBestAxisVectors(&local_23c,&local_2e0,&local_2d0);
      iVar19 = local_150;
      lVar15 = *param_2;
      fVar31 = *(float *)(lVar18 + 0xc + lVar15);
      fVar32 = fVar31 * *(float *)(lVar18 + lVar15);
      fVar33 = fVar31 * *(float *)(lVar18 + 4 + lVar15);
      fVar31 = fVar31 * *(float *)(lVar18 + 8 + lVar15);
      lVar15 = (longlong)local_150;
      local_150 = local_150 + 1;
      if (local_14c < local_150) {
        TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_218,iVar19);
      }
      puVar11 = local_218;
      if (local_158 != (undefined1 *)0x0) {
        puVar11 = local_158;
      }
      pfVar6 = (float *)(puVar11 + lVar15 * 0xc);
      if (pfVar6 != (float *)0x0) {
        *pfVar6 = local_2e0 * 1048576.0 + fVar32 + local_2d0 * 1048576.0;
        pfVar6[2] = fVar31 + local_2d8 * 1048576.0 + local_2c8 * 1048576.0;
        pfVar6[1] = fVar33 + local_2dc * 1048576.0 + local_2cc * 1048576.0;
      }
      iVar19 = local_150;
      lVar15 = (longlong)local_150;
      local_150 = local_150 + 1;
      if (local_14c < local_150) {
        TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_218,iVar19);
      }
      puVar11 = local_218;
      if (local_158 != (undefined1 *)0x0) {
        puVar11 = local_158;
      }
      pfVar6 = (float *)(puVar11 + lVar15 * 0xc);
      if (pfVar6 != (float *)0x0) {
        *pfVar6 = (fVar32 - local_2e0 * 1048576.0) + local_2d0 * 1048576.0;
        pfVar6[1] = (fVar33 - local_2dc * 1048576.0) + local_2cc * 1048576.0;
        pfVar6[2] = (fVar31 - local_2d8 * 1048576.0) + local_2c8 * 1048576.0;
      }
      iVar19 = local_150;
      lVar15 = (longlong)local_150;
      local_150 = local_150 + 1;
      if (local_14c < local_150) {
        TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_218,iVar19);
      }
      puVar11 = local_218;
      if (local_158 != (undefined1 *)0x0) {
        puVar11 = local_158;
      }
      pfVar6 = (float *)(puVar11 + lVar15 * 0xc);
      if (pfVar6 != (float *)0x0) {
        *pfVar6 = (fVar32 - local_2e0 * 1048576.0) - local_2d0 * 1048576.0;
        pfVar6[1] = (fVar33 - local_2dc * 1048576.0) - local_2cc * 1048576.0;
        pfVar6[2] = (fVar31 - local_2d8 * 1048576.0) - local_2c8 * 1048576.0;
      }
      iVar19 = local_150;
      lVar15 = (longlong)local_150;
      local_150 = local_150 + 1;
      if (local_14c < local_150) {
        TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(local_218,iVar19);
      }
      puVar11 = local_218;
      if (local_158 != (undefined1 *)0x0) {
        puVar11 = local_158;
      }
      pfVar6 = (float *)(puVar11 + lVar15 * 0xc);
      if (pfVar6 != (float *)0x0) {
        pfVar6[1] = (local_2dc * 1048576.0 + fVar33) - local_2cc * 1048576.0;
        pfVar6[2] = (local_2d8 * 1048576.0 + fVar31) - local_2c8 * 1048576.0;
        *pfVar6 = (local_2e0 * 1048576.0 + fVar32) - local_2d0 * 1048576.0;
      }
      if (0 < (int)param_2[1]) {
        lVar15 = 0;
        uVar21 = uVar13;
        do {
          if (uVar7 != uVar13) {
            lVar18 = *param_2;
            local_25c = *(float *)(lVar15 + 0xc + lVar18);
            local_268 = local_25c * *(float *)(lVar15 + lVar18);
            local_2b0 = *(float *)(lVar15 + 8 + lVar18);
            local_264 = local_25c * *(float *)(lVar15 + 4 + lVar18);
            local_260 = local_25c * *(float *)(lVar15 + 8 + lVar18);
            local_278 = (uint)*(undefined8 *)(lVar15 + lVar18) ^ 0x80000000;
            local_25c = local_25c * local_25c;
            local_270 = (uint)local_2b0 ^ 0x80000000;
            local_274 = (uint)((ulonglong)*(undefined8 *)(lVar15 + lVar18) >> 0x20) ^ 0x80000000;
            pfVar6 = (float *)FPoly::Split(local_248,&local_278,&local_268);
            if ((int)pfVar6 == 0) {
              local_150 = 0;
              puVar11 = local_158;
              if (local_14c == 0) goto LAB_14231406a;
              pfVar6 = (float *)FUN_14231bc50(local_218,0);
              break;
            }
          }
          uVar20 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar20;
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0x10;
        } while ((int)uVar20 < (int)param_2[1]);
      }
      puVar11 = local_158;
      if (0 < local_150) {
        pfVar6 = (float *)FPoly::Area();
        iVar19 = 0;
        fVar34 = fVar34 + extraout_XMM0_Da;
        puVar11 = local_158;
        if (0 < local_150) {
          puVar14 = (undefined1 *)0x0;
          puVar16 = puVar14;
          do {
            iVar2 = (int)param_3[1];
            puVar17 = &DAT_ffffffffffffffff;
            fVar31 = 3.4e+38;
            iVar5 = (int)puVar16;
            puVar22 = puVar16;
            if (3 < iVar2) {
              lVar15 = *param_3;
              puVar22 = local_218;
              if (puVar11 != (undefined1 *)0x0) {
                puVar22 = puVar16;
              }
              uVar7 = (ulonglong)puVar22 | (ulonglong)puVar11;
              fVar32 = *(float *)(puVar14 + uVar7);
              fVar33 = *(float *)(puVar14 + uVar7 + 4);
              fVar27 = *(float *)(puVar14 + uVar7 + 8);
              uVar20 = (iVar2 - 4U >> 2) + 1;
              puVar22 = (undefined1 *)(ulonglong)uVar20;
              iVar5 = uVar20 * 4;
              do {
                fVar24 = fVar32 - *(float *)(lVar15 + (longlong)puVar16 * 0xc);
                puVar9 = puVar16 + 2;
                fVar30 = fVar33 - *(float *)(lVar15 + 4 + (longlong)puVar16 * 0xc);
                fVar23 = fVar27 - *(float *)(lVar15 + 8 + (longlong)puVar16 * 0xc);
                fVar28 = fVar33 - *(float *)(lVar15 + 0x10 + (longlong)puVar16 * 0xc);
                fVar25 = fVar32 - *(float *)(lVar15 + 0xc + (longlong)puVar16 * 0xc);
                fVar23 = fVar30 * fVar30 + fVar24 * fVar24 + fVar23 * fVar23;
                fVar24 = fVar27 - *(float *)(lVar15 + 0x14 + (longlong)puVar16 * 0xc);
                fVar30 = fVar33 - *(float *)(lVar15 + 4 + (longlong)puVar9 * 0xc);
                puVar10 = puVar16;
                if (fVar31 <= fVar23) {
                  puVar10 = puVar17;
                }
                puVar17 = puVar16 + 3;
                fVar26 = fVar32 - *(float *)(lVar15 + (longlong)puVar9 * 0xc);
                fVar24 = fVar28 * fVar28 + fVar25 * fVar25 + fVar24 * fVar24;
                if (fVar31 <= fVar23) {
                  fVar23 = fVar31;
                }
                fVar31 = fVar27 - *(float *)(lVar15 + 8 + (longlong)puVar9 * 0xc);
                puVar8 = puVar16 + 1;
                if (fVar23 <= fVar24) {
                  puVar8 = puVar10;
                }
                if (fVar24 <= fVar23) {
                  fVar23 = fVar24;
                }
                fVar31 = fVar30 * fVar30 + fVar26 * fVar26 + fVar31 * fVar31;
                fVar24 = fVar23;
                if (fVar31 <= fVar23) {
                  fVar24 = fVar31;
                }
                if (fVar23 <= fVar31) {
                  puVar9 = puVar8;
                }
                fVar25 = fVar33 - *(float *)(lVar15 + 4 + (longlong)puVar17 * 0xc);
                fVar23 = fVar32 - *(float *)(lVar15 + (longlong)puVar17 * 0xc);
                fVar31 = fVar27 - *(float *)(lVar15 + 8 + (longlong)puVar17 * 0xc);
                fVar23 = fVar25 * fVar25 + fVar23 * fVar23 + fVar31 * fVar31;
                fVar31 = fVar24;
                if (fVar23 <= fVar24) {
                  fVar31 = fVar23;
                }
                if (fVar24 <= fVar23) {
                  puVar17 = puVar9;
                }
                puVar16 = puVar16 + 4;
                puVar22 = puVar22 + -1;
              } while (puVar22 != (undefined1 *)0x0);
            }
            if (iVar5 < iVar2) {
              lVar15 = *param_3;
              puVar9 = local_218;
              if (puVar11 != (undefined1 *)0x0) {
                puVar9 = puVar22;
              }
              uVar7 = (ulonglong)puVar9 | (ulonglong)puVar11;
              uVar13 = (ulonglong)(uint)(iVar2 - iVar5);
              puVar9 = puVar17;
              do {
                fVar27 = *(float *)(puVar14 + uVar7 + 4) -
                         *(float *)(lVar15 + 4 + (longlong)puVar16 * 0xc);
                fVar33 = *(float *)(puVar14 + uVar7) - *(float *)(lVar15 + (longlong)puVar16 * 0xc);
                fVar32 = *(float *)(puVar14 + uVar7 + 8) -
                         *(float *)(lVar15 + 8 + (longlong)puVar16 * 0xc);
                fVar32 = fVar27 * fVar27 + fVar33 * fVar33 + fVar32 * fVar32;
                puVar17 = puVar16;
                if (fVar31 <= fVar32) {
                  puVar17 = puVar9;
                  fVar32 = fVar31;
                }
                fVar31 = fVar32;
                puVar16 = puVar16 + 1;
                uVar13 = uVar13 - 1;
                puVar9 = puVar17;
              } while (uVar13 != 0);
            }
            if ((puVar17 == &DAT_ffffffffffffffff) || (1e-08 <= fVar31)) {
              iVar5 = *(int *)(param_1 + 0x68);
              uVar7 = (ulonglong)iVar5;
              uVar13 = (ulonglong)puVar22 & 0xffffffff;
              puVar16 = local_218;
              if (puVar11 != (undefined1 *)0x0) {
                puVar16 = puVar22;
              }
              bVar4 = false;
              pfVar6 = (float *)((ulonglong)puVar16 | (ulonglong)puVar11);
              local_298 = *(undefined8 *)((longlong)pfVar6 + (longlong)puVar14);
              fVar32 = (float)local_298;
              fVar33 = (float)((ulonglong)local_298 >> 0x20);
              fVar31 = *(float *)((longlong)(pfVar6 + 2) + (longlong)puVar14);
              puVar16 = puVar22;
              local_290 = fVar31;
              if (0 < iVar5) {
                do {
                  if (bVar4) goto LAB_142314049;
                  lVar15 = *plVar1;
                  pfVar6 = (float *)0x0;
                  if ((fVar33 - *(float *)(puVar16 + lVar15 + 4)) *
                      (fVar33 - *(float *)(puVar16 + lVar15 + 4)) +
                      (fVar32 - *(float *)(puVar16 + lVar15)) *
                      (fVar32 - *(float *)(puVar16 + lVar15)) +
                      (fVar31 - *(float *)(puVar16 + lVar15 + 8)) *
                      (fVar31 - *(float *)(puVar16 + lVar15 + 8)) < 0.010000001) {
                    bVar4 = true;
                  }
                  uVar20 = (int)uVar13 + 1;
                  uVar13 = (ulonglong)uVar20;
                  puVar16 = puVar16 + 0xc;
                } while ((int)uVar20 < iVar5);
                goto LAB_142314018;
              }
LAB_14231401c:
              iVar5 = (int)uVar7 + 1;
              *(int *)(param_1 + 0x68) = iVar5;
              if (*(int *)(param_1 + 0x6c) < iVar5) {
                TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,uVar7 & 0xffffffff);
              }
              pfVar6 = (float *)*plVar1;
              *(ulonglong *)(pfVar6 + uVar7 * 3) = CONCAT44(fVar33,fVar32);
              pfVar6[uVar7 * 3 + 2] = fVar31;
              puVar11 = local_158;
            }
            else {
              pfVar6 = (float *)*param_3;
              iVar5 = *(int *)(param_1 + 0x68);
              uVar7 = (ulonglong)iVar5;
              uVar13 = (ulonglong)puVar22 & 0xffffffff;
              local_2a8 = *(undefined8 *)(pfVar6 + (longlong)puVar17 * 3);
              fVar32 = (float)local_2a8;
              fVar33 = (float)((ulonglong)local_2a8 >> 0x20);
              fVar31 = pfVar6[(longlong)puVar17 * 3 + 2];
              bVar4 = false;
              puVar16 = puVar22;
              local_2a0 = fVar31;
              if (iVar5 < 1) goto LAB_14231401c;
              do {
                if (bVar4) goto LAB_142314049;
                lVar15 = *plVar1;
                pfVar6 = (float *)0x0;
                if ((fVar33 - *(float *)(puVar16 + lVar15 + 4)) *
                    (fVar33 - *(float *)(puVar16 + lVar15 + 4)) +
                    (fVar32 - *(float *)(puVar16 + lVar15)) *
                    (fVar32 - *(float *)(puVar16 + lVar15)) +
                    (fVar31 - *(float *)(puVar16 + lVar15 + 8)) *
                    (fVar31 - *(float *)(puVar16 + lVar15 + 8)) < 0.010000001) {
                  bVar4 = true;
                }
                uVar20 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar20;
                puVar16 = puVar16 + 0xc;
              } while ((int)uVar20 < iVar5);
LAB_142314018:
              pfVar6 = (float *)0x0;
              if (!bVar4) goto LAB_14231401c;
            }
LAB_142314049:
            iVar19 = iVar19 + 1;
            puVar14 = puVar14 + 0xc;
            param_2 = local_258;
            puVar16 = puVar22;
          } while (iVar19 < local_150);
        }
      }
LAB_14231406a:
      if (puVar11 != (undefined1 *)0x0) {
        pfVar6 = (float *)FMemory::Free(puVar11);
      }
      local_2e8 = (float)((int)local_2e8 + 1);
      local_288 = local_288 + 1;
      local_280 = local_280 + 0x10;
    } while ((int)local_2e8 < (int)param_2[1]);
    if (0.001 <= fVar34) {
      iVar19 = *(int *)(local_250 + 0x68);
      if (3 < iVar19) {
        pfVar3 = (float *)*plVar1;
        pfVar6 = (float *)((ulonglong)pfVar6 & 0xffffffffffffff00);
        fVar34 = pfVar3[3] - *pfVar3;
        fVar31 = pfVar3[4] - pfVar3[1];
        fVar33 = pfVar3[5] - pfVar3[2];
        fVar32 = fVar31 * fVar31 + fVar34 * fVar34 + fVar33 * fVar33;
        if (1e-08 < fVar32) {
          auVar29 = rsqrtss(ZEXT416((uint)fVar32),ZEXT416((uint)fVar32));
          local_2e8 = auVar29._0_4_;
          local_2e8 = local_2e8 + local_2e8 * (0.5 - fVar32 * 0.5 * local_2e8 * local_2e8);
          local_2e8 = local_2e8 + local_2e8 * (0.5 - fVar32 * 0.5 * local_2e8 * local_2e8);
          fVar34 = local_2e8 * fVar34;
          fVar33 = local_2e8 * fVar33;
          fVar31 = local_2e8 * fVar31;
        }
        if (2 < iVar19) {
          pfVar12 = pfVar3 + 8;
          lVar15 = 2;
          lVar18 = 2;
          fVar32 = local_2e8;
          fVar27 = local_2e8;
          fVar23 = local_2e8;
          do {
            if ((char)pfVar6 != '\0') goto LAB_1423142fb;
            fVar27 = pfVar12[-2] - *pfVar3;
            fVar32 = pfVar12[-1] - pfVar3[1];
            fVar23 = *pfVar12 - pfVar3[2];
            fVar24 = fVar32 * fVar32 + fVar27 * fVar27 + fVar23 * fVar23;
            if (1e-08 < fVar24) {
              auVar29 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
              fVar25 = auVar29._0_4_;
              fVar25 = fVar25 + fVar25 * (0.5 - fVar24 * 0.5 * fVar25 * fVar25);
              fVar25 = fVar25 + fVar25 * (0.5 - fVar24 * 0.5 * fVar25 * fVar25);
              fVar27 = fVar27 * fVar25;
              fVar32 = fVar32 * fVar25;
              fVar23 = fVar23 * fVar25;
            }
            pfVar6 = (float *)((ulonglong)pfVar6 & 0xff);
            if (fVar32 * fVar31 + fVar27 * fVar34 + fVar23 * fVar33 < 1.0) {
              pfVar6 = (float *)0x1;
            }
            lVar18 = lVar18 + 1;
            pfVar12 = pfVar12 + 3;
          } while (lVar18 < iVar19);
          if ((char)pfVar6 != '\0') {
LAB_1423142fb:
            fVar24 = fVar23 * fVar31 - fVar32 * fVar33;
            fVar33 = fVar27 * fVar33 - fVar23 * fVar34;
            fVar31 = fVar32 * fVar34 - fVar27 * fVar31;
            fVar34 = fVar33 * fVar33 + fVar24 * fVar24 + fVar31 * fVar31;
            if (1e-08 < fVar34) {
              auVar29 = rsqrtss(ZEXT416((uint)fVar34),ZEXT416((uint)fVar34));
              fVar32 = auVar29._0_4_;
              fVar32 = fVar32 + fVar32 * (0.5 - fVar34 * 0.5 * fVar32 * fVar32);
              fVar32 = fVar32 + fVar32 * (0.5 - fVar34 * 0.5 * fVar32 * fVar32);
              fVar31 = fVar32 * fVar31;
              fVar24 = fVar32 * fVar24;
              fVar33 = fVar32 * fVar33;
            }
            local_2b0 = pfVar3[2];
            pfVar6 = (float *)(ulonglong)(uint)local_2b0;
            if (2 < iVar19) {
              pfVar6 = (float *)&DAT_00000018;
              do {
                if (1e-08 < ABS((fVar33 * *(float *)((longlong)(pfVar6 + 1) + (longlong)pfVar3) +
                                 fVar24 * *(float *)((longlong)pfVar6 + (longlong)pfVar3) +
                                fVar31 * *(float *)((longlong)(pfVar6 + 2) + (longlong)pfVar3)) -
                                ((float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20) * fVar33 +
                                 (float)*(undefined8 *)pfVar3 * fVar24 + local_2b0 * fVar31))) {
                  FUN_142321610(local_250);
                  return 1;
                }
                lVar15 = lVar15 + 1;
                pfVar6 = pfVar6 + 3;
              } while (lVar15 < iVar19);
            }
          }
        }
      }
    }
  }
  return (ulonglong)pfVar6 & 0xffffffffffffff00;
}



// FUNCTION 1423144f0 thunk_FUN_14291d160 body=5 status=ok
// SIG undefined thunk_FUN_14291d160(void)

void thunk_FUN_14291d160(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b1c968);
                    /* WARNING: Could not recover jumptable at 0x00014291d196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 142314500 FUN_142314500 body=94 status=ok
// SIG undefined FUN_142314500(void)

void FUN_142314500(longlong param_1)

{
  longlong lVar1;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = 0;
  }
  lVar1 = *(longlong *)(lVar1 + 0x5b8);
  if (lVar1 != 0) {
    local_28 = DAT_1469e9808;
    local_20 = DAT_1469e9810;
    local_18 = DAT_1469e9818;
    if (DAT_1469e9818 != 0) {
      LOCK();
      *(int *)(DAT_1469e9818 + 8) = *(int *)(DAT_1469e9818 + 8) + 1;
      UNLOCK();
    }
    UPlayerInput::InvertAxisKey(lVar1,&local_28);
  }
  return;
}



// FUNCTION 142314560 FUN_142314560 body=20 status=ok
// SIG undefined FUN_142314560(void)

undefined1 FUN_142314560(longlong param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x24e) == '\x02')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142314580 IsEqual body=57 status=ok
// SIG undefined IsEqual(void)

ulonglong FCollisionResponseTemplate::IsEqual
                    (longlong param_1,char *param_2,char *param_3,void *param_4)

{
  int iVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((*(char *)(param_1 + 8) == *param_2) && (uVar2 = 0, *(char *)(param_1 + 9) == *param_3)) {
    iVar1 = ::_guard_xfg_dispatch_icall_nop(param_4,(void *)(param_1 + 0x39),0x20);
    uVar2 = CONCAT44(extraout_var,iVar1);
    if (iVar1 == 0) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1423145c0 FUN_1423145c0 body=42 status=ok
// SIG undefined FUN_1423145c0(void)

ulonglong FUN_1423145c0(longlong param_1)

{
  ulonglong in_RAX;
  
  if (((*(float *)(param_1 + 0x14c) <= 0.0) &&
      (0.0 < *(float *)(param_1 + 0xc) || *(float *)(param_1 + 0xc) == 0.0)) &&
     ((in_RAX = *(ulonglong *)(param_1 + 0x150), in_RAX == 0 ||
      ((*(byte *)(in_RAX + 0x3c) & 1) != 0)))) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1423145f0 FUN_1423145f0 body=63 status=ok
// SIG undefined FUN_1423145f0(void)

undefined8 FUN_1423145f0(longlong param_1)

{
  char cVar1;
  
  if (((*(float *)(param_1 + 0x16c) <= 0.0) &&
      (0.0 < *(float *)(param_1 + 0x2c) || *(float *)(param_1 + 0x2c) == 0.0)) &&
     ((*(longlong *)(param_1 + 0x170) == 0 ||
      ((*(byte *)(*(longlong *)(param_1 + 0x170) + 0x3c) & 1) != 0)))) {
    cVar1 = FUN_14290f660();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142314630 FUN_142314630 body=128 status=ok
// SIG undefined FUN_142314630(void)

bool FUN_142314630(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  
  if (0.0 < *(float *)((longlong)param_1 + 0x574)) {
    return true;
  }
  if (((*(byte *)((longlong)param_1 + 0x56c) & 2) != 0) && ((char)param_1[0x25] == '\x01')) {
    fVar1 = *(float *)(param_1 + 0xaf);
    lVar3 = (**(code **)(*param_1 + 0x148))();
    fVar2 = *(float *)(lVar3 + 0x790);
    fVar4 = (float)(**(code **)(*param_1 + 0x920))(param_1);
    return fVar2 - fVar1 <= fVar4;
  }
  return false;
}



// FUNCTION 1423146c0 FUN_1423146c0 body=25 status=ok
// SIG undefined FUN_1423146c0(void)

ulonglong FUN_1423146c0(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0x4c0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001423146cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x9f0))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1423146e0 FUN_1423146e0 body=25 status=ok
// SIG undefined FUN_1423146e0(void)

ulonglong FUN_1423146e0(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0x4c0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001423146ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x9e8))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142314700 FUN_142314700 body=18 status=ok
// SIG undefined FUN_142314700(void)

void FUN_142314700(longlong param_1)

{
  *(uint *)(param_1 + 0x56c) = *(uint *)(param_1 + 0x56c) | 4;
  *(undefined4 *)(param_1 + 0x570) = 0;
  return;
}



// FUNCTION 142314720 FUN_142314720 body=306 status=ok
// SIG undefined FUN_142314720(void)

void FUN_142314720(longlong param_1,byte *param_2)

{
  byte local_98 [4];
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
  
  FUN_1429132f0();
  local_8c = *(undefined4 *)(param_2 + 0xc);
  local_88 = *(undefined4 *)(param_2 + 0x10);
  local_84 = *(undefined8 *)(param_2 + 0x14);
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_1c = 0;
  local_98[0] = *param_2 & 3;
  local_78 = *(undefined8 *)(param_2 + 0x20);
  local_94 = *(undefined4 *)(param_2 + 4);
  local_6c = *(undefined8 *)(param_2 + 0x2c);
  local_90 = *(uint *)(param_2 + 8) & 1;
  local_7c = *(undefined4 *)(param_2 + 0x1c);
  local_60 = *(undefined8 *)(param_2 + 0x38);
  local_70 = *(undefined4 *)(param_2 + 0x28);
  local_64 = *(undefined4 *)(param_2 + 0x34);
  local_58 = *(undefined4 *)(param_2 + 0x40);
  local_4c = *(undefined4 *)(param_2 + 0x4c);
  local_40 = *(undefined4 *)(param_2 + 0x58);
  local_38 = *(undefined4 *)(param_2 + 0x60);
  local_34 = *(undefined4 *)(param_2 + 100);
  local_30 = *(undefined4 *)(param_2 + 0x68);
  local_2c = *(undefined4 *)(param_2 + 0x6c);
  local_28 = *(undefined4 *)(param_2 + 0x70);
  local_24 = *(undefined4 *)(param_2 + 0x74);
  local_54 = *(undefined8 *)(param_2 + 0x44);
  local_20 = *(undefined4 *)(param_2 + 0x78);
  local_18 = *(undefined8 *)(param_2 + 0x80);
  local_48 = *(undefined8 *)(param_2 + 0x50);
  local_10 = *(undefined8 *)(param_2 + 0x88);
  local_3c = *(undefined4 *)(param_2 + 0x5c);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x5a0,local_98);
  return;
}



// FUNCTION 142314860 FUN_142314860 body=223 status=ok
// SIG undefined FUN_142314860(void)

void FUN_142314860(longlong *param_1,undefined8 *param_2,char param_3,char param_4)

{
  undefined8 local_38;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_1[0x99] != 0) {
    local_30 = *(float *)(param_2 + 1);
    local_38 = *param_2;
    (**(code **)(*param_1 + 0x308))(local_38,&local_28);
    if (param_3 == '\0') {
      local_38 = CONCAT44(local_38._4_4_ + local_24,(float)local_38 + local_28);
    }
    if (param_4 == '\0') {
      local_30 = local_30 + local_20;
    }
    (**(code **)(*(longlong *)param_1[0x99] + 0x620))((longlong *)param_1[0x99],&local_38);
    local_18 = *param_2;
    local_10 = *(undefined4 *)(param_2 + 1);
    FUN_142913430(param_1,&local_18,param_3,param_4);
  }
  return;
}



// FUNCTION 142314940 FUN_142314940 body=2884 status=ok
// SIG undefined FUN_142314940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142314940(ulonglong param_1)

{
  longlong *plVar1;
  short *psVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  longlong *plVar22;
  longlong **pplVar23;
  longlong **pplVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  ulonglong local_res8;
  ulonglong local_res18;
  longlong local_res20;
  longlong **local_168;
  undefined8 local_160;
  longlong *local_158;
  longlong **local_150;
  undefined8 local_148;
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined1 local_102;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f [39];
  
  local_res8 = param_1;
  FConfigCacheIni::GetSectionPrivate
            (DAT_1468b6148,L"/Script/Engine.CollisionProfile",0,1,&DAT_1468e2360);
  iVar14 = 0;
  for (iVar16 = iVar14; (-1 < iVar16 && (iVar16 < *(int *)(param_1 + 0x40))); iVar16 = iVar16 + 1) {
    if (*(longlong *)((longlong)iVar16 * 0x60 + *(longlong *)(param_1 + 0x38)) == DAT_146aefc50) {
      TArray<FCollisionResponseTemplate,FDefaultAllocator>::RemoveAtImpl(param_1 + 0x38,iVar16,1,1);
    }
  }
  local_b0 = 0;
  local_a8 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0,0);
  FGenericPlatformString::Memcpy(local_b0,L"EngineTraceChannel",0x26);
  local_c0 = 0;
  local_b8 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0,0);
  FGenericPlatformString::Memcpy(local_c0,L"GameTraceChannel",0x22);
  uVar10 = UEnum::GetPrivateStaticClass();
  plVar11 = (longlong *)FUN_141799410(uVar10,0xffffffffffffffff,L"ECollisionChannel",1);
  local_138 = plVar11;
  local_a0 = FCollisionResponseContainer::StaticStruct();
  local_100 = 0;
  local_f8 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
  FGenericPlatformString::Memcpy(local_100,L"DisplayName",0x18);
  local_d0 = 0;
  local_c8 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0,0);
  FGenericPlatformString::Memcpy(local_d0,L"TraceQuery",0x16);
  local_e0 = 0;
  local_d8 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
  FGenericPlatformString::Memcpy(local_e0,&DAT_145038094,4);
  local_f0 = 0;
  local_e8 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,0);
  FGenericPlatformString::Memcpy(local_f0,L"Hidden",0xe);
  uVar7 = local_res8;
  iVar16 = (int)plVar11[9];
  plVar22 = (longlong *)(longlong)iVar16;
  plVar11 = (longlong *)(local_res8 + 0x128);
  *(undefined4 *)(local_res8 + 0x130) = 0;
  local_128 = plVar11;
  if (*(int *)(local_res8 + 0x134) != iVar16) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar11);
  }
  iVar9 = *(int *)(uVar7 + 0x130);
  iVar16 = iVar9 + iVar16;
  *(int *)(uVar7 + 0x130) = iVar16;
  if (*(int *)(uVar7 + 0x134) < iVar16) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11);
  }
  local_158 = plVar22;
  _guard_xfg_dispatch_icall_nop((void *)(*plVar11 + (longlong)iVar9 * 8),0,(longlong)plVar22 * 8);
  plVar11 = (longlong *)(uVar7 + 0x148);
  *(undefined4 *)(uVar7 + 0x150) = 0;
  local_120 = plVar11;
  if (*(int *)(uVar7 + 0x154) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar11,0);
  }
  plVar1 = (longlong *)(uVar7 + 0x138);
  *(undefined4 *)(uVar7 + 0x140) = 0;
  if (*(int *)(uVar7 + 0x144) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_168 = (longlong **)0x0;
  local_160 = (longlong **)0x5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
  pplVar23 = local_168;
  FGenericPlatformString::Memcpy(local_168,L"ECC_",10);
  if ((int)local_160 != 0) {
    iVar14 = (int)local_160 + -1;
  }
  local_res18 = CONCAT44(local_res18._4_4_,iVar14);
  if (pplVar23 != (longlong **)0x0) {
    FMemory::Free(pplVar23);
  }
  uVar10 = UEnum::GetPrivateStaticClass();
  FUN_141799410(uVar10,0xffffffffffffffff,L"EObjectTypeQuery",1);
  uVar10 = UEnum::GetPrivateStaticClass();
  FUN_141799410(uVar10,0xffffffffffffffff,L"ETraceTypeQuery",1);
  uVar17 = (ulonglong)_tls_index;
  uVar18 = 0;
  uVar25 = uVar7;
  if (0 < (longlong)plVar22) {
    local_140 = 0;
    local_130 = (longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8);
    do {
      FUN_1417392b0(local_138,&local_168,uVar18);
      if ((int)local_160 == 0) {
        pplVar23 = (longlong **)&DAT_143f3eda8;
        iVar16 = 0;
      }
      else {
        iVar16 = (int)local_160 + -1;
        pplVar23 = local_168;
      }
      iVar14 = iVar16 - iVar14;
      if (iVar14 < 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar16;
        if (iVar14 < iVar16) {
          iVar9 = iVar14;
        }
      }
      pplVar24 = (longlong **)0x0;
      local_150 = (longlong **)0x0;
      uVar21 = 0;
      local_148 = local_148 & 0xffffffff;
      psVar2 = (short *)((longlong)pplVar23 + ((longlong)iVar16 - (longlong)iVar9) * 2);
      uVar27 = 0;
      if ((psVar2 != (short *)0x0) && (uVar27 = 0, *psVar2 != 0)) {
        lVar12 = -1;
        do {
          lVar6 = lVar12 + 1;
          lVar12 = lVar12 + 1;
        } while (psVar2[lVar6] != 0);
        uVar20 = (int)lVar12 + 1;
        local_148 = (ulonglong)uVar20;
        uVar27 = 0;
        uVar21 = uVar20;
        if (0 < (int)uVar20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
          uVar27 = local_148._4_4_;
          uVar21 = (uint)local_148;
        }
        pplVar24 = local_150;
        FGenericPlatformString::Memcpy(local_150,psVar2,(longlong)(int)uVar20 * 2);
        plVar11 = local_120;
      }
      if (local_168 != (longlong **)0x0) {
        FMemory::Free(local_168);
      }
      local_150 = (longlong **)0x0;
      pplVar23 = (longlong **)&DAT_143f3eda8;
      if (uVar21 != 0) {
        pplVar23 = pplVar24;
      }
      local_160 = (longlong **)CONCAT44(uVar27,uVar21);
      local_148 = 0;
      local_168 = pplVar24;
      FName::FName(&local_res20,pplVar23,1);
      lVar12 = local_res20;
      if (uVar18 - 8 < 0x18) {
        if (((int)local_res20 != 0) || ((int)((ulonglong)local_res20 >> 0x20) != 0)) {
          local_118 = local_a0;
          if (local_a0 == 0) {
            local_110 = 0;
          }
          else {
            local_110 = *(longlong *)(local_a0 + 0x38);
          }
          local_108 = 0xffffffff;
          local_104 = 0x101;
          local_102 = 0;
          FUN_1416fd4e0(&local_118);
          while ((local_110 != 0 && (*(longlong *)(local_110 + 0x18) != lVar12))) {
            local_110 = *(longlong *)(local_110 + 0x28);
            FUN_1416fd4e0(&local_118);
          }
        }
      }
      else {
        if (uVar18 - 3 < 2) {
          if ((*(int *)(*local_130 + 0x38) < DAT_146865d18) &&
             (_Init_thread_header(&DAT_146865d18), DAT_146865d18 == -1)) {
            DAT_146865d10 = 0xffffffff;
            _DAT_146865d14 = 1;
            _Init_thread_footer(&DAT_146865d18);
          }
          if ((int)uVar18 < 0x20) {
            DAT_146865d10 = DAT_146865d10 & ~(1 << (uVar18 & 0x1f));
            _DAT_146865d14 = _DAT_146865d14 & DAT_146865d10;
          }
          iVar14 = (int)plVar11[1];
          *(int *)(plVar11 + 1) = iVar14 + 1;
          if (*(int *)((longlong)plVar11 + 0xc) < iVar14 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar14);
          }
          lVar12 = *plVar11;
        }
        else {
          if (0x1f < (int)uVar18) goto LAB_142314e82;
          iVar14 = *(int *)(uVar7 + 0x140);
          *(int *)(uVar7 + 0x140) = iVar14 + 1;
          if (*(int *)(uVar7 + 0x144) < iVar14 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar14);
          }
          lVar12 = *plVar1;
        }
        *(uint *)(lVar12 + (longlong)iVar14 * 4) = uVar18;
      }
LAB_142314e82:
      lVar12 = local_140;
      *(longlong *)(*local_128 + local_140 * 8) = local_res20;
      if (local_168 != (longlong **)0x0) {
        FMemory::Free();
      }
      local_140 = lVar12 + 1;
      uVar18 = uVar18 + 1;
      iVar14 = (int)local_res18;
    } while (local_140 < (longlong)local_158);
    uVar17 = (ulonglong)_tls_index;
    uVar25 = local_res8;
  }
  FUN_1426ea8d0(&DAT_146aefe48,2);
  FCollisionResponseContainer::SetResponse(&DAT_146aefe48,8);
  plVar11 = (longlong *)(uVar25 + 0x48);
  local_res18 = local_res18 & 0xffffffffffffff00;
  FUN_1422fe800(*plVar11,(longlong)*(int *)(uVar25 + 0x50),local_res8 & 0xff,&local_res18);
  iVar14 = 0;
  uVar26 = uVar25;
  if (*(int *)(uVar25 + 0x50) < 1) {
LAB_1423151d4:
    FUN_1406c5d90(uVar26 + 0xd8,0);
    iVar16 = 0;
    for (iVar14 = 0; (-1 < iVar14 && (iVar14 < *(int *)(uVar26 + 0x80))); iVar14 = iVar14 + 1) {
      local_res18 = 0;
      local_158 = *(longlong **)(*(longlong *)(uVar26 + 0x78) + (longlong)iVar14 * 0x10);
      local_130 = *(longlong **)(*(longlong *)(uVar26 + 0x78) + 8 + (longlong)iVar14 * 0x10);
      if ((local_158 != (longlong *)0x0) && (local_res20 = 0, local_130 != (longlong *)0x0)) {
        local_168 = &local_158;
        local_160 = &local_130;
        TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                  (uVar26 + 0xd8,&local_res8,&local_168,0);
      }
    }
    FUN_14230d2b0(uVar26,uVar26 + 0x38,local_138,&local_100,uVar26 + 0x58);
    FUN_1406c5d90(uVar26 + 0x88,0);
    for (; (-1 < iVar16 && (iVar16 < *(int *)(uVar26 + 0x70))); iVar16 = iVar16 + 1) {
      local_res18 = 0;
      local_158 = *(longlong **)(*(longlong *)(uVar26 + 0x68) + (longlong)iVar16 * 0x10);
      local_138 = *(longlong **)(*(longlong *)(uVar26 + 0x68) + 8 + (longlong)iVar16 * 0x10);
      if ((local_158 != (longlong *)0x0) && (local_res20 = 0, local_138 != (longlong *)0x0)) {
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
        FGenericPlatformString::Memcpy(local_70,L"Needs description",0x24);
        local_60 = 1;
        FUN_1426d3dd0(local_5f);
        cVar8 = UCollisionProfile::FindProfileData(uVar26,uVar26 + 0x38,local_138,&local_98);
        if (cVar8 != '\0') {
          local_168 = &local_158;
          local_160 = &local_138;
          TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                    (uVar26 + 0x88,&local_res8,&local_168,0);
        }
        if (local_70 != 0) {
          FMemory::Free();
        }
        if (local_80 != 0) {
          FMemory::Free();
        }
      }
    }
    if (local_f0 != 0) {
      FMemory::Free();
    }
    if (local_e0 != 0) {
      FMemory::Free();
    }
    if (local_d0 != 0) {
      FMemory::Free();
    }
    if (local_100 != 0) {
      FMemory::Free();
    }
    if (local_c0 != 0) {
      FMemory::Free();
    }
    if (local_b0 != 0) {
      FMemory::Free();
    }
    return;
  }
  local_res18 = CONCAT44(local_res18._4_4_,1);
  local_res20 = 0;
  local_158 = (longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8);
LAB_142314f60:
  pbVar19 = (byte *)(*plVar11 + local_res20);
  bVar4 = *pbVar19;
  lVar12 = local_res20;
  if (bVar4 - 8 < 0x18) {
    local_140 = 0;
    if (*(longlong *)(pbVar19 + 8) != 0) {
      lVar12 = (ulonglong)bVar4 * 8;
      FName::ToString(*local_128 + lVar12,&local_150);
      FName::ToString(pbVar19 + 8,&local_168);
      puVar15 = (uint *)*local_120;
      puVar3 = puVar15 + (int)local_120[1];
      for (; puVar15 != puVar3; puVar15 = puVar15 + 1) {
        if (*puVar15 == (uint)bVar4) goto LAB_1423150b0;
      }
      puVar15 = (uint *)*plVar1;
      puVar3 = puVar15 + *(int *)(uVar7 + 0x140);
      for (; puVar15 != puVar3; puVar15 = puVar15 + 1) {
        if (*puVar15 == (uint)bVar4) goto LAB_1423150b0;
      }
      pplVar23 = (longlong **)&DAT_143f3eda8;
      if ((int)local_160 != 0) {
        pplVar23 = local_168;
      }
      lVar6 = *local_128;
      puVar13 = (undefined8 *)FName::FName(&local_130,pplVar23,1);
      *(undefined8 *)(lVar6 + lVar12) = *puVar13;
      uVar18 = (uint)*pbVar19;
      if (pbVar19[0x11] == 0) {
        iVar16 = *(int *)(uVar7 + 0x140);
        *(int *)(uVar7 + 0x140) = iVar16 + 1;
        if (*(int *)(uVar7 + 0x144) < iVar16 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar16);
        }
        *(uint *)(*plVar1 + (longlong)iVar16 * 4) = uVar18;
        if (pbVar19[0x12] != 0) {
          bVar5 = *pbVar19;
          lVar12 = FUN_140a05dc0();
          if (bVar5 < 0x20) {
            *(uint *)(lVar12 + 4) = *(uint *)(lVar12 + 4) | 1 << (bVar5 & 0x1f);
          }
        }
      }
      else {
        if ((*(int *)(*local_158 + 0x38) < DAT_146865d18) &&
           (_Init_thread_header(&DAT_146865d18), DAT_146865d18 == -1)) {
          DAT_146865d10 = 0xffffffff;
          _DAT_146865d14 = 1;
          _Init_thread_footer(&DAT_146865d18);
        }
        if (uVar18 < 0x20) {
          DAT_146865d10 = DAT_146865d10 & ~(1 << (uVar18 & 0x1f));
          _DAT_146865d14 = _DAT_146865d14 & DAT_146865d10;
        }
        bVar5 = *pbVar19;
        iVar16 = (int)local_120[1];
        *(int *)(local_120 + 1) = iVar16 + 1;
        if (*(int *)((longlong)local_120 + 0xc) < iVar16 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(local_120,iVar16);
        }
        *(uint *)(*(longlong *)(local_res8 + 0x148) + (longlong)iVar16 * 4) = (uint)bVar5;
      }
      if (local_168 != (longlong **)0x0) {
        FMemory::Free();
      }
      if (local_150 != (longlong **)0x0) {
        FMemory::Free();
      }
    }
    lVar12 = local_res20;
    FCollisionResponseContainer::SetResponse(&DAT_146aefe48,(ulonglong)bVar4,pbVar19[0x10]);
  }
  goto LAB_1423151ac;
LAB_1423150b0:
  iVar16 = *(int *)(uVar25 + 0x50);
  iVar9 = (iVar16 - iVar14) + -1;
  if (iVar9 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar11 + (longlong)iVar14 * 0x18),
               (void *)(*plVar11 + (longlong)(int)local_res18 * 0x18),(longlong)iVar9 * 0x18);
    iVar16 = *(int *)(uVar25 + 0x50);
  }
  *(int *)(uVar25 + 0x50) = iVar16 + -1;
  TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar11);
  iVar14 = iVar14 + -1;
  local_res18 = CONCAT44(local_res18._4_4_,(int)local_res18 + -1);
  lVar12 = local_res20 + -0x18;
  if (local_168 != (longlong **)0x0) {
    FMemory::Free();
  }
  if (local_150 != (longlong **)0x0) {
    FMemory::Free();
  }
LAB_1423151ac:
  local_res20 = lVar12 + 0x18;
  local_res18 = CONCAT44(local_res18._4_4_,(int)local_res18 + 1);
  iVar14 = iVar14 + 1;
  uVar26 = local_res8;
  if (*(int *)(local_res8 + 0x50) <= iVar14) goto LAB_1423151d4;
  goto LAB_142314f60;
}



// FUNCTION 142315490 FUN_142315490 body=305 status=ok
// SIG undefined FUN_142315490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142315490(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28 [4];
  
  plVar2 = (longlong *)0x0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar2 = (longlong *)param_1[4];
  }
  (**(code **)(*plVar2 + 0x7a8))(plVar2,&local_68,&local_48);
  if (plVar2[0x91] != 0) {
    lVar1 = *(longlong *)(plVar2[0x91] + 0x168);
    if (lVar1 == 0) {
      local_58 = _DAT_1468b5d90;
      local_50 = DAT_1468b5d98;
    }
    else {
      local_58 = *(undefined8 *)(lVar1 + 0x220);
      local_50 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_68 = local_58;
    local_60 = local_50;
  }
  local_50 = local_40;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_58 = local_48;
  local_38 = local_68;
  local_30 = local_60;
  (**(code **)(*param_1 + 0x3c8))(param_1,&local_38,&local_58,local_28 + 2,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423155d0 FUN_1423155d0 body=967 status=ok
// SIG undefined FUN_1423155d0(void)

undefined8 FUN_1423155d0(byte *param_1,longlong *param_2,undefined8 param_3,byte *param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  byte local_res8 [8];
  byte local_res10 [8];
  
  bVar3 = 0;
  bVar2 = 0;
  bVar8 = false;
  bVar9 = false;
  cVar5 = '\0';
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    if (((*(float *)(param_1 + 0x14) == *(float *)(param_1 + 0x20)) &&
        (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x24))) &&
       (*(float *)(param_1 + 0x1c) == *(float *)(param_1 + 0x28))) {
      bVar3 = 1;
    }
    else {
      bVar3 = 0;
    }
    if (((*(float *)(param_1 + 0x2c) == *(float *)(param_1 + 0x38)) &&
        (*(float *)(param_1 + 0x30) == *(float *)(param_1 + 0x3c))) &&
       (*(float *)(param_1 + 0x34) == *(float *)(param_1 + 0x40))) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
    bVar8 = *(int *)(param_1 + 0x60) == -1;
    bVar9 = *(int *)(param_1 + 4) == -1;
    if (*(float *)(param_1 + 0x5c) == 0.0) {
      cVar5 = '\x01';
    }
    else {
      cVar5 = '\0';
    }
  }
  local_res10[0] =
       ((((cVar5 * '\x02' | bVar9) * '\x02' | bVar8) * '\x02' | bVar2) * '\x02' | bVar3) << 2 |
       *param_1 & 3;
  (**(code **)(*param_2 + 0x58))(param_2,local_res10,7);
  bVar7 = local_res10[0] >> 3;
  *param_1 = *param_1 ^ (*param_1 ^ local_res10[0]) & 3;
  bVar2 = local_res10[0] >> 2;
  puVar1 = *(undefined4 **)param_2[1];
  bVar3 = local_res10[0] >> 4;
  bVar4 = local_res10[0] >> 5;
  bVar6 = local_res10[0] >> 6;
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xc,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  *param_4 = 1;
  local_res8[0] = 1;
  FUN_1423159a0(param_1 + 0x14,param_2,param_3,local_res8);
  *param_4 = *param_4 & local_res8[0];
  FUN_142315ac0(param_1 + 0x2c,param_2,param_3,local_res8);
  *param_4 = *param_4 & local_res8[0];
  if ((bVar2 & 1) == 0) {
    FUN_1423159a0(param_1 + 0x20,param_2,param_3,local_res8);
    *param_4 = *param_4 & local_res8[0];
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
  }
  if ((bVar7 & 1) == 0) {
    FUN_142315ac0(param_1 + 0x38,param_2,param_3,local_res8);
    *param_4 = *param_4 & local_res8[0];
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x34);
  }
  FUN_1423159a0(param_1 + 0x44,param_2,param_3,local_res8);
  *param_4 = *param_4 & local_res8[0];
  FUN_1423159a0(param_1 + 0x50,param_2,param_3,local_res8);
  *param_4 = *param_4 & local_res8[0];
  if ((bVar6 & 1) == 0) {
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x5c,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x5c,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
  }
  if ((bVar3 & 1) == 0) {
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x60,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x60,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    param_1[0x60] = 0xff;
    param_1[0x61] = 0xff;
    param_1[0x62] = 0xff;
    param_1[99] = 0xff;
  }
  (**(code **)(*param_2 + 0x10))(param_2,param_1 + 100);
  (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x6c);
  (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x74);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x80);
  if ((bVar4 & 1) == 0) {
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 4,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 4,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 4) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    param_1[4] = 0xff;
    param_1[5] = 0xff;
    param_1[6] = 0xff;
    param_1[7] = 0xff;
  }
  return 1;
}



// FUNCTION 1423159a0 FUN_1423159a0 body=286 status=ok
// SIG undefined FUN_1423159a0(void)

undefined8 FUN_1423159a0(float *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_res10 [4];
  int local_res20 [2];
  int local_48;
  int local_44 [3];
  undefined8 local_38;
  float local_30;
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    local_38 = *(undefined8 *)param_1;
    local_30 = param_1[2];
    uVar1 = FUN_140a79b20(&local_38);
    *param_4 = uVar1;
    return 1;
  }
  local_res10[0] = 0;
  (**(code **)(*param_2 + 0x60))(param_2,local_res10,0x14);
  local_res20[0] = 0;
  local_48 = 0;
  local_44[0] = 0;
  iVar3 = 1 << ((char)local_res10[0] + 1U & 0x1f);
  iVar2 = 1 << ((char)local_res10[0] + 2U & 0x1f);
  (**(code **)(*param_2 + 0x60))(param_2,local_res20,iVar2);
  (**(code **)(*param_2 + 0x60))(param_2,&local_48,iVar2);
  (**(code **)(*param_2 + 0x60))(param_2,local_44,iVar2);
  *param_1 = (float)(local_res20[0] - iVar3);
  param_1[1] = (float)(local_48 - iVar3);
  param_1[2] = (float)(local_44[0] - iVar3);
  *param_4 = 1;
  return 1;
}



// FUNCTION 142315ac0 FUN_142315ac0 body=254 status=ok
// SIG undefined FUN_142315ac0(void)

undefined8 FUN_142315ac0(float *param_1,longlong *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int local_res10 [4];
  int local_res20 [2];
  int local_28 [4];
  
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    bVar1 = FUN_140a79ab0();
    bVar2 = FUN_140a79ab0();
    bVar3 = FUN_140a79ab0();
    *param_4 = bVar3 & bVar1 & 1 & bVar2;
    return 1;
  }
  (**(code **)(*param_2 + 0x60))(param_2,local_res10,0x10000);
  *param_1 = (float)(local_res10[0] + -0x8000) * 3.051851e-05;
  (**(code **)(*param_2 + 0x60))(param_2,local_res20,0x10000);
  param_1[1] = (float)(local_res20[0] + -0x8000) * 3.051851e-05;
  (**(code **)(*param_2 + 0x60))(param_2,local_28,0x10000);
  param_1[2] = (float)(local_28[0] + -0x8000) * 3.051851e-05;
  *param_4 = 1;
  return 1;
}



// FUNCTION 142315c00 FUN_142315c00 body=176 status=ok
// SIG undefined FUN_142315c00(void)

void FUN_142315c00(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  (**(code **)(*param_1 + 0x768))();
  plVar1 = (longlong *)param_1[2];
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  if ((param_1[0x98] == 0) || (*(longlong *)(lVar2 + 0x4c0) == 0)) {
    uVar3 = *(undefined4 *)(lVar2 + 0x544);
  }
  else {
    *(undefined4 *)(param_1[0x98] + 500) = *(undefined4 *)(*(longlong *)(lVar2 + 0x4c0) + 500);
    uVar3 = *(undefined4 *)(param_1[0x98] + 500);
  }
  *(undefined4 *)((longlong)param_1 + 0x544) = uVar3;
  FUN_142913060(param_1,param_2,param_3);
  return;
}



// FUNCTION 142315cb0 FUN_142315cb0 body=270 status=ok
// SIG undefined FUN_142315cb0(void)

void FUN_142315cb0(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *local_18;
  undefined1 local_10;
  undefined1 local_f;
  
  plVar1 = param_1 + 0x99;
  if (((*(byte *)((longlong)param_1 + 0x56c) & 4) == 0) ||
     (cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x558))(), cVar2 == '\0')) {
    *(uint *)((longlong)param_1 + 0x56c) = *(uint *)((longlong)param_1 + 0x56c) & 0xfffffbfb;
    param_1[0xae] = 0;
    if (((longlong *)*plVar1 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x558))(), cVar2 == '\0')) {
      *(undefined4 *)((longlong)param_1 + 0x584) = 0;
    }
  }
  if (((*(byte *)((longlong)param_1 + 0x56c) & 2) != 0) &&
     (cVar2 = (**(code **)(*(longlong *)*plVar1 + 0x558))(), cVar2 != '\0')) {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    *(undefined4 *)(param_1 + 0xaf) = *(undefined4 *)(lVar3 + 0x790);
  }
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    FUN_1429130b0(param_1,param_2,*(undefined1 *)(lVar3 + 0x248),param_3,
                  *(undefined1 *)(lVar3 + 0x249));
    local_10 = (undefined1)param_2;
    local_18 = param_1;
    local_f = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xb6,&local_18);
  }
  return;
}



// FUNCTION 142315df0 FUN_142315df0 body=1259 status=ok
// SIG undefined FUN_142315df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142315df0(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
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
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  bool bVar36;
  char cVar37;
  uint uVar38;
  float *pfVar39;
  float *pfVar40;
  ulonglong *puVar41;
  undefined8 uVar42;
  longlong lVar43;
  undefined8 local_178;
  float local_170;
  ulonglong local_168;
  undefined4 local_160;
  undefined8 local_158;
  float local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [16];
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
  undefined1 local_e8 [64];
  undefined1 local_a8 [144];
  
  if ((char)param_1[0x25] == '\x01') {
    if (((longlong *)param_1[0x98] != (longlong *)0x0) &&
       (cVar37 = (**(code **)(*(longlong *)param_1[0x98] + 0x9f0))(), cVar37 != '\0')) {
      return;
    }
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x565);
    *(undefined1 *)((longlong)param_1 + 0x565) = 1;
    lVar43 = param_1[0xa1];
    if ((param_1[0x9b] == lVar43) && (param_1[0x9c] == param_1[0xa2])) {
      bVar36 = false;
    }
    else {
      bVar36 = true;
      (**(code **)(*param_1 + 0x838))(param_1,lVar43,param_1[0xa2],1);
      lVar43 = param_1[0xa1];
    }
    param_1[0x9b] = param_1[0xa1];
    param_1[0x9c] = param_1[0xa2];
    param_1[0x9d] = param_1[0xa3];
    param_1[0x9e] = param_1[0xa4];
    param_1[0x9f] = param_1[0xa5];
    param_1[0xa0] = param_1[0xa6];
    if (((lVar43 != 0) && (*(char *)(lVar43 + 0x24e) == '\x02')) &&
       (lVar2 = param_1[0x99], lVar2 != 0)) {
      lVar3 = param_1[0x2d];
      if (lVar3 == 0) {
        local_178 = _DAT_1468b5d90;
        local_170 = DAT_1468b5d98;
      }
      else {
        local_178 = *(undefined8 *)(lVar3 + 0x220);
        local_170 = *(float *)(lVar3 + 0x228);
      }
      local_158 = local_178;
      local_150 = local_170;
      if (lVar3 == 0) {
        local_13c = 0x3f800000;
        local_148 = 0;
        local_144 = 0;
        local_140 = 0;
      }
      else {
        local_148 = *(undefined4 *)(lVar3 + 0x210);
        local_144 = *(undefined4 *)(lVar3 + 0x214);
        local_140 = *(undefined4 *)(lVar3 + 0x218);
        local_13c = *(undefined4 *)(lVar3 + 0x21c);
      }
      FUN_142311f90(lVar43,param_1[0xa2],lVar2 + 0x24c,lVar2 + 0x260);
      lVar43 = param_1[0x99];
      local_170 = *(float *)(param_1 + 0xa4) + *(float *)(lVar43 + 0x254);
      local_178._4_4_ = *(float *)((longlong)param_1 + 0x51c) + *(float *)(lVar43 + 0x250);
      local_178._0_4_ = *(float *)(param_1 + 0xa3) + *(float *)(lVar43 + 0x24c);
      if (((*(char *)((longlong)param_1 + 0x531) == '\0') || (param_1[0xa1] == 0)) ||
         (*(char *)(param_1[0xa1] + 0x24e) != '\x02')) {
        local_168 = *(ulonglong *)((longlong)param_1 + 0x524);
        local_160 = *(undefined4 *)((longlong)param_1 + 0x52c);
      }
      else {
        pfVar39 = (float *)FQuatRotationMatrix::FQuatRotationMatrix(local_e8,lVar43 + 0x260);
        pfVar40 = (float *)FRotationMatrix::FRotationMatrix(local_a8,(longlong)param_1 + 0x524);
        fVar4 = pfVar39[4];
        fVar5 = pfVar39[5];
        fVar6 = pfVar39[6];
        fVar7 = pfVar39[7];
        fVar8 = *pfVar39;
        fVar9 = pfVar39[1];
        fVar10 = pfVar39[2];
        fVar11 = pfVar39[3];
        fVar12 = pfVar39[8];
        fVar13 = pfVar39[9];
        fVar14 = pfVar39[10];
        fVar15 = pfVar39[0xb];
        fVar16 = *pfVar40;
        fVar17 = pfVar40[1];
        fVar18 = pfVar40[2];
        fVar19 = pfVar40[3];
        fVar20 = pfVar40[4];
        fVar21 = pfVar40[5];
        fVar22 = pfVar40[6];
        fVar23 = pfVar40[7];
        fVar24 = pfVar40[8];
        fVar25 = pfVar40[9];
        fVar26 = pfVar40[10];
        fVar27 = pfVar40[0xb];
        fVar28 = pfVar40[0xc];
        fVar29 = pfVar40[0xd];
        fVar30 = pfVar40[0xe];
        fVar31 = pfVar40[0xf];
        fVar32 = pfVar39[0xc];
        fVar33 = pfVar39[0xd];
        fVar34 = pfVar39[0xe];
        fVar35 = pfVar39[0xf];
        local_128 = fVar16 * fVar8 + fVar17 * fVar4 + fVar18 * fVar12 + fVar19 * fVar32;
        fStack_124 = fVar16 * fVar9 + fVar17 * fVar5 + fVar18 * fVar13 + fVar19 * fVar33;
        fStack_120 = fVar16 * fVar10 + fVar17 * fVar6 + fVar18 * fVar14 + fVar19 * fVar34;
        fStack_11c = fVar16 * fVar11 + fVar17 * fVar7 + fVar18 * fVar15 + fVar19 * fVar35;
        local_118 = fVar21 * fVar4 + fVar20 * fVar8 + fVar22 * fVar12 + fVar23 * fVar32;
        fStack_114 = fVar21 * fVar5 + fVar20 * fVar9 + fVar22 * fVar13 + fVar23 * fVar33;
        fStack_110 = fVar21 * fVar6 + fVar20 * fVar10 + fVar22 * fVar14 + fVar23 * fVar34;
        fStack_10c = fVar21 * fVar7 + fVar20 * fVar11 + fVar22 * fVar15 + fVar23 * fVar35;
        local_108 = fVar25 * fVar4 + fVar24 * fVar8 + fVar26 * fVar12 + fVar27 * fVar32;
        fStack_104 = fVar25 * fVar5 + fVar24 * fVar9 + fVar26 * fVar13 + fVar27 * fVar33;
        fStack_100 = fVar25 * fVar6 + fVar24 * fVar10 + fVar26 * fVar14 + fVar27 * fVar34;
        fStack_fc = fVar25 * fVar7 + fVar24 * fVar11 + fVar26 * fVar15 + fVar27 * fVar35;
        local_f8 = fVar28 * fVar8 + fVar29 * fVar4 + fVar30 * fVar12 + fVar31 * fVar32;
        fStack_f4 = fVar28 * fVar9 + fVar29 * fVar5 + fVar30 * fVar13 + fVar31 * fVar33;
        fStack_f0 = fVar28 * fVar10 + fVar29 * fVar6 + fVar30 * fVar14 + fVar31 * fVar34;
        fStack_ec = fVar28 * fVar11 + fVar29 * fVar7 + fVar30 * fVar15 + fVar31 * fVar35;
        puVar41 = (ulonglong *)FMatrix::Rotator(&local_128,local_138);
        local_168 = *puVar41;
        local_160 = (undefined4)puVar41[1];
        cVar37 = (**(code **)(*(longlong *)param_1[0x99] + 0x7a0))();
        if (cVar37 != '\0') {
          local_168 = local_168 & 0xffffffff00000000;
          local_160 = 0;
        }
        lVar43 = param_1[0x99];
      }
      if (((bVar36) || ((float)local_178 != (float)local_158)) ||
         ((local_178._4_4_ != local_158._4_4_ || (local_170 != local_150)))) {
        uVar38 = 0x20;
      }
      else {
        uVar38 = 0;
      }
      *(uint *)(lVar43 + 0x4b4) = *(uint *)(lVar43 + 0x4b4) | uVar38;
      *(uint *)(param_1[0x99] + 0x300) = *(uint *)(param_1[0x99] + 0x300) & 0xffffefff;
      lVar43 = *(longlong *)(param_1[0x99] + 0x218);
      uVar42 = FRotator::Quaternion(&local_168,local_138);
      (**(code **)(lVar43 + 0x20))(param_1[0x99] + 0x218,&local_158,&local_148,&local_178,uVar42);
      (**(code **)(*param_1 + 0x948))(param_1,&local_158,&local_148);
    }
    *(undefined1 *)((longlong)param_1 + 0x565) = uVar1;
  }
  return;
}



// FUNCTION 1423162e0 FUN_1423162e0 body=81 status=ok
// SIG undefined FUN_1423162e0(void)

void FUN_1423162e0(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong **)(param_1 + 0x4c0) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x9f0))(), cVar1 != '\0')) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x4c8) != 0) &&
     (cVar1 = FRootMotionSourceGroup::HasActiveRootMotionSources
                        (*(longlong *)(param_1 + 0x4c8) + 0x628), cVar1 != '\0')) {
    return;
  }
  FUN_1422378d0(param_1);
  return;
}



// FUNCTION 142316340 FUN_142316340 body=635 status=ok
// SIG undefined FUN_142316340(void)

void FUN_142316340(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((char)param_1[0x25] == '\x01') {
    if ((char)param_1[0xe4] == '\0') {
      iVar2 = (int)param_1[0xe3];
      if (iVar2 != 0) {
        lVar4 = param_1[0xe2] + 0x58;
        do {
          if (*(longlong *)(lVar4 + 0x118) != 0) {
            FMemory::Free();
          }
          *(undefined ***)(lVar4 + -8) = &PTR__scalar_deleting_destructor__144080980;
          FUN_14074e760(lVar4 + 0x90);
          FUN_14074e810(lVar4);
          lVar4 = lVar4 + 0x188;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      *(undefined4 *)(param_1 + 0xe3) = 0;
      if (*(int *)((longlong)param_1 + 0x71c) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<392,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(param_1 + 0xe2,0);
      }
    }
    else if (param_1[0x99] != 0) {
      plVar1 = param_1 + 0xe2;
      lVar4 = param_1[0xe3];
      iVar2 = (int)lVar4 + 1;
      *(int *)(param_1 + 0xe3) = iVar2;
      if (*(int *)((longlong)param_1 + 0x71c) < iVar2) {
        TArray<FEnvQueryInstanceCache,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)(int)lVar4 * 0x188 + *plVar1),0,0x188);
      lVar4 = *plVar1;
      lVar5 = (longlong)(int)param_1[0xe3] * 0x188;
      *(char *)(lVar5 + -0x180 + lVar4) = (char)param_1[0xe4];
      *(longlong *)(lVar5 + -0x178 + lVar4) = param_1[0xe5];
      *(int *)(lVar5 + -0x170 + lVar4) = (int)param_1[0xe6];
      *(undefined8 *)(lVar5 + -0x16c + lVar4) = *(undefined8 *)((longlong)param_1 + 0x734);
      *(undefined4 *)(lVar5 + -0x164 + lVar4) = *(undefined4 *)((longlong)param_1 + 0x73c);
      *(longlong *)(lVar5 + -0x160 + lVar4) = param_1[0xe8];
      *(int *)(lVar5 + -0x158 + lVar4) = (int)param_1[0xe9];
      *(longlong *)(lVar5 + -0x150 + lVar4) = param_1[0xea];
      *(longlong *)(lVar5 + -0x148 + lVar4) = param_1[0xeb];
      *(char *)(lVar5 + -0x140 + lVar4) = (char)param_1[0xec];
      *(undefined1 *)(lVar5 + -0x13f + lVar4) = *(undefined1 *)((longlong)param_1 + 0x761);
      FUN_14243f720(lVar4 + -0x138 + lVar5,param_1 + 0xed);
      *(longlong *)(lVar5 + -0x38 + lVar4) = param_1[0x10d];
      *(int *)(lVar5 + -0x30 + lVar4) = (int)param_1[0x10e];
      *(undefined8 *)(lVar5 + -0x2c + lVar4) = *(undefined8 *)((longlong)param_1 + 0x874);
      *(undefined4 *)(lVar5 + -0x24 + lVar4) = *(undefined4 *)((longlong)param_1 + 0x87c);
      *(longlong *)(lVar5 + -0x20 + lVar4) = param_1[0x110];
      FString::operator=(lVar4 + -0x18 + lVar5,param_1 + 0x111);
      *(char *)(lVar5 + -8 + lVar4) = (char)param_1[0x113];
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      *(undefined4 *)(lVar5 + -0x188 + lVar4) = *(undefined4 *)(lVar3 + 0x790);
      FUN_142337270(param_1[0x99],param_1[0x99] + 0x628,lVar4 + -0x138 + lVar5);
      FRootMotionSourceGroup::CullInvalidSources(lVar4 + -0x138 + lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 1423165c0 FUN_1423165c0 body=186 status=ok
// SIG undefined FUN_1423165c0(void)

void FUN_1423165c0(longlong *param_1,float param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  
  (**(code **)(*param_1 + 0x768))();
  plVar1 = (longlong *)param_1[2];
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  if ((param_1[0x98] == 0) || (*(longlong *)(lVar2 + 0x4c0) == 0)) {
    fVar3 = param_2 + *(float *)(lVar2 + 0x544);
  }
  else {
    *(float *)(param_1[0x98] + 500) = param_2 + *(float *)(*(longlong *)(lVar2 + 0x4c0) + 500);
    fVar3 = *(float *)(param_1[0x98] + 500);
  }
  *(float *)((longlong)param_1 + 0x544) = fVar3;
  FUN_142913100(param_1,param_2,param_3);
  return;
}



// FUNCTION 142316680 FUN_142316680 body=574 status=ok
// SIG undefined FUN_142316680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142316680(longlong *param_1,float *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  undefined8 local_18;
  float local_10;
  
  uVar2 = *(uint *)((longlong)param_1 + 0x56c);
  lVar7 = param_1[0x2d];
  *(uint *)((longlong)param_1 + 0x56c) = uVar2 & 0xffffff7f;
  if (lVar7 == 0) {
    local_38 = _DAT_1468b5d90;
    local_30 = DAT_1468b5d98;
  }
  else {
    local_38 = *(undefined8 *)(lVar7 + 0x220);
    local_30 = *(float *)(lVar7 + 0x228);
  }
  if ((((float)local_38 == *param_2) && (local_38._4_4_ == param_2[1])) && (local_30 == param_2[2]))
  {
    bVar11 = 0;
  }
  else {
    bVar11 = 1;
  }
  if ((((uVar2 >> 8 & 1) != 0) && (lVar7 = param_1[0x99], *(float *)(lVar7 + 0x18c) == 0.0)) &&
     ((*(float *)(lVar7 + 400) == 0.0 && (*(float *)(lVar7 + 0x194) == 0.0)))) {
    if (bVar11 == 0) {
      lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(float *)(lVar7 + 0x790) != *(float *)((longlong)param_1 + 0xd4)) goto LAB_142316897;
    }
    lVar10 = param_1[0x2d];
    if (lVar10 == 0) {
      uVar12 = (undefined4)DAT_1468b5da0;
      uVar13 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      fStack_20 = (float)DAT_1468b5da8;
    }
    else {
      fVar4 = *(float *)(lVar10 + 0x210);
      local_28 = *(undefined8 *)(lVar10 + 0x210);
      fStack_20 = *(float *)(lVar10 + 0x218);
      fStack_1c = *(float *)(lVar10 + 0x21c);
      auVar3._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != *(float *)(lVar10 + 0x214));
      auVar3._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != fVar4);
      auVar3._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_20);
      auVar3._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_1c);
      iVar6 = movmskps((int)lVar7,auVar3);
      lVar7 = lVar10;
      if (iVar6 != 0) {
        *(float *)(lVar10 + 0x250) = fVar4;
        *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
        *(float *)(lVar10 + 600) = fStack_20;
        *(float *)(lVar10 + 0x25c) = fStack_1c;
        puVar8 = (undefined8 *)FQuat::Rotator(&local_28,&local_18);
        *(undefined8 *)(lVar10 + 0x260) = *puVar8;
        *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar8 + 1);
        lVar7 = param_1[0x2d];
      }
      uVar12 = (undefined4)*(undefined8 *)(lVar10 + 0x260);
      uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x260) >> 0x20);
      puVar1 = (undefined4 *)(lVar10 + 0x268);
      lVar10 = lVar7;
      fStack_20 = (float)*puVar1;
    }
    local_28 = CONCAT44(uVar13,uVar12);
    if (lVar10 == 0) {
      local_38 = _DAT_1468b5d90;
      local_30 = DAT_1468b5d98;
    }
    else {
      local_38 = *(undefined8 *)(lVar10 + 0x220);
      local_30 = *(float *)(lVar10 + 0x228);
    }
    local_10 = local_30;
    local_18 = local_38;
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar5 = FUN_142543f80(uVar9,param_1,&local_18,&local_28,0);
    if (cVar5 != '\0') {
      *(uint *)((longlong)param_1 + 0x56c) = *(uint *)((longlong)param_1 + 0x56c) | 0x80;
    }
  }
LAB_142316897:
  *(uint *)(param_1[0x99] + 0x4b4) = *(uint *)(param_1[0x99] + 0x4b4) | (uint)bVar11 << 5;
  return;
}



// FUNCTION 1423168d0 FUN_1423168d0 body=63 status=ok
// SIG undefined FUN_1423168d0(void)

void FUN_1423168d0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x4c8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x430))();
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0x218) + 0x48))();
  }
  FUN_1426a4120(param_1);
  return;
}



// FUNCTION 142316910 FUN_142316910 body=194 status=ok
// SIG undefined FUN_142316910(void)

undefined8 FUN_142316910(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x4c0) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1423ac7e0();
  }
  if (((param_2 == 0) || (lVar1 == 0)) ||
     (uVar2 = FUN_142278740(lVar1,param_2,param_3,0,0,1,0xbf800000,0xbf800000), (float)uVar2 <= 0.0)
     ) {
    uVar2 = 0;
  }
  else if (param_4 != 0) {
    UAnimInstance::Montage_JumpToSection(lVar1,param_4,param_2);
  }
  return uVar2;
}



// FUNCTION 1423169e0 FUN_1423169e0 body=1077 status=ok
// SIG undefined FUN_1423169e0(void)

void FUN_1423169e0(longlong param_1,undefined8 param_2,float param_3,int param_4,undefined8 *param_5
                  )

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [128];
  
  uVar9 = 0;
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  *(float *)(param_1 + 0x148) = param_3;
  if (*(float *)(param_1 + 0xc) == 0.0) goto LAB_142316c9f;
  if (*(float *)(param_1 + 0x14c) <= 0.0) {
    if (*(char *)(param_1 + 0x20) == '\x02') {
      fVar8 = *(float *)(param_1 + 0x24) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0x20) == '\0') {
      iVar4 = rand();
      fVar8 = (float)iVar4 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0xd4) = fVar8;
    if (*(char *)(param_1 + 0x30) == '\x02') {
      fVar8 = *(float *)(param_1 + 0x34) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0x30) == '\0') {
      iVar4 = rand();
      fVar8 = (float)iVar4 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0xd8) = fVar8;
    if (*(char *)(param_1 + 0x40) == '\x02') {
      fVar8 = *(float *)(param_1 + 0x44) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0x40) == '\0') {
      iVar4 = rand();
      fVar8 = (float)iVar4 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0xdc) = fVar8;
    if (*(char *)(param_1 + 0x50) == '\x02') {
      fVar8 = *(float *)(param_1 + 0x54) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0x50) == '\0') {
      iVar4 = rand();
      fVar8 = (float)iVar4 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 200) = fVar8;
    if (*(char *)(param_1 + 0x60) == '\x02') {
      fVar8 = *(float *)(param_1 + 100) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0x60) == '\0') {
      iVar4 = rand();
      fVar8 = (float)iVar4 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0xcc) = fVar8;
    if (*(char *)(param_1 + 0x70) == '\x02') {
      fVar8 = *(float *)(param_1 + 0x74) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0x70) == '\0') {
      iVar4 = rand();
      fVar8 = (float)iVar4 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0xd0) = fVar8;
    if (*(char *)(param_1 + 0x80) == '\x02') {
      fVar8 = *(float *)(param_1 + 0x84) * 6.2831855;
    }
    else if (*(char *)(param_1 + 0x80) == '\0') {
      iVar4 = rand();
      fVar8 = (float)iVar4 * 0.00019175345;
    }
    else {
      fVar8 = 0.0;
    }
    *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_1 + 200);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xdc);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0xc);
    *(float *)(param_1 + 0xe0) = fVar8;
    *(float *)(param_1 + 0xfc) = fVar8;
    if (*(float *)(param_1 + 0x10) <= 0.0) goto LAB_142316c9f;
    *(ushort *)(param_1 + 0xac) = *(ushort *)(param_1 + 0xac) | 1;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xac);
    *(float *)(param_1 + 0x14c) = *(float *)(param_1 + 0xc);
    if ((uVar1 & 2) == 0) goto LAB_142316c9f;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (0.0 < *(float *)(param_1 + 0x10)) {
      *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0x10);
      *(ushort *)(param_1 + 0xac) = uVar1 & 0xfffd | 1;
      goto LAB_142316c9f;
    }
    *(ushort *)(param_1 + 0xac) = uVar1 & 0xfffc;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
LAB_142316c9f:
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if (lVar2 != 0) {
    uVar7 = *(uint *)(param_1 + 0xa8) & 1;
    if (*(longlong *)(param_1 + 0x150) == 0) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = *(undefined4 *)(param_1 + 0x98);
      }
      param_3 = param_3 * *(float *)(param_1 + 0x8c);
      if ((0.0 < param_3) && (plVar3 = *(longlong **)(param_1 + 0xc0), plVar3 != (longlong *)0x0)) {
        local_98 = *param_5;
        local_90 = *(undefined4 *)(param_5 + 1);
        uVar5 = (**(code **)(*plVar3 + 0x868))
                          (plVar3,lVar2,*(undefined4 *)(param_1 + 0x88),param_3,
                           *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
                           (char)uVar7,(char)uVar7,uVar9,param_4,&local_98);
        *(undefined8 *)(param_1 + 0x150) = uVar5;
      }
    }
    else {
      if (uVar7 != 0) {
        uVar9 = *(undefined4 *)(param_1 + 0x98);
      }
      UCameraAnimInst::Update
                (*(longlong *)(param_1 + 0x150),lVar2,param_3 * *(float *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),uVar9);
    }
  }
  *(int *)(param_1 + 0xb0) = param_4;
  if (param_4 == 2) {
    puVar6 = (undefined8 *)FRotationMatrix::FRotationMatrix(local_88,param_5);
    uVar5 = puVar6[1];
    *(undefined8 *)(param_1 + 0x100) = *puVar6;
    *(undefined8 *)(param_1 + 0x108) = uVar5;
    uVar5 = puVar6[3];
    *(undefined8 *)(param_1 + 0x110) = puVar6[2];
    *(undefined8 *)(param_1 + 0x118) = uVar5;
    uVar5 = puVar6[5];
    *(undefined8 *)(param_1 + 0x120) = puVar6[4];
    *(undefined8 *)(param_1 + 0x128) = uVar5;
    uVar5 = puVar6[7];
    *(undefined8 *)(param_1 + 0x130) = puVar6[6];
    *(undefined8 *)(param_1 + 0x138) = uVar5;
  }
  return;
}


