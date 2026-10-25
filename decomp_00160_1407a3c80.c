// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1407a3c80 InternalConstructor<UBTT_RunAction> body=52 status=ok
// SIG undefined InternalConstructor<UBTT_RunAction>(void)

void InternalConstructor<UBTT_RunAction>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UBTTaskNode::UBTTaskNode(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1440be1f8;
    puVar1[5] = &PTR_LAB_1440be4e8;
  }
  return;
}



// FUNCTION 1407a3cc0 FUN_1407a3cc0 body=52 status=ok
// SIG undefined FUN_1407a3cc0(void)

void FUN_1407a3cc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UBTDecorator::UBTDecorator(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1440bdea8;
    puVar1[5] = &PTR_LAB_1440be1b0;
  }
  return;
}



// FUNCTION 1407a3d00 FUN_1407a3d00 body=890 status=ok
// SIG undefined FUN_1407a3d00(void)

undefined4 * FUN_1407a3d00(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)param_1 + 0xb) = *(undefined1 *)((longlong)param_2 + 0xb);
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  uVar1 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar1;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)((longlong)param_2 + 0x91);
  *(undefined1 *)((longlong)param_1 + 0x92) = *(undefined1 *)((longlong)param_2 + 0x92);
  *(undefined1 *)((longlong)param_1 + 0x93) = *(undefined1 *)((longlong)param_2 + 0x93);
  *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(param_2 + 0x25);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  uVar1 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x36) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0x3e);
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = param_2[0x42];
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_2 + 0x46);
  *(undefined1 *)((longlong)param_1 + 0x119) = *(undefined1 *)((longlong)param_2 + 0x119);
  *(undefined1 *)((longlong)param_1 + 0x11a) = *(undefined1 *)((longlong)param_2 + 0x11a);
  *(undefined1 *)((longlong)param_1 + 0x11b) = *(undefined1 *)((longlong)param_2 + 0x11b);
  *(undefined8 *)(param_1 + 0x47) = *(undefined8 *)(param_2 + 0x47);
  *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x4e) = *(undefined8 *)(param_2 + 0x4e);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(param_2 + 0x52);
  *(undefined8 *)(param_1 + 0x54) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(param_2 + 0x56);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x5a) = *(undefined8 *)(param_2 + 0x5a);
  uVar1 = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x5e) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  param_1[0x62] = param_2[0x62];
  param_1[99] = param_2[99];
  param_1[100] = param_2[100];
  *(undefined1 *)(param_1 + 0x66) = *(undefined1 *)(param_2 + 0x66);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined1 *)((longlong)param_1 + 0x1a1) = *(undefined1 *)((longlong)param_2 + 0x1a1);
  *(undefined1 *)((longlong)param_1 + 0x1a2) = *(undefined1 *)((longlong)param_2 + 0x1a2);
  *(undefined1 *)((longlong)param_1 + 0x1a3) = *(undefined1 *)((longlong)param_2 + 0x1a3);
  *(undefined8 *)(param_1 + 0x69) = *(undefined8 *)(param_2 + 0x69);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(param_2 + 0x6e);
  uVar1 = *(undefined8 *)(param_2 + 0x72);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x72) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x76);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x76) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x7a);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x7a) = uVar1;
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x7e) = *(undefined8 *)(param_2 + 0x7e);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0x82) = *(undefined8 *)(param_2 + 0x82);
  param_1[0x84] = param_2[0x84];
  param_1[0x85] = param_2[0x85];
  param_1[0x86] = param_2[0x86];
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x89) = *(undefined8 *)(param_2 + 0x89);
  *(undefined1 *)(param_1 + 0x8b) = *(undefined1 *)(param_2 + 0x8b);
  param_1[0x8c] = param_2[0x8c];
  return param_1;
}



// FUNCTION 1407a40a0 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTTaskNode::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
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



// FUNCTION 1407a4100 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBTDecorator::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1407a4160 FUN_1407a4160 body=86 status=ok
// SIG undefined FUN_1407a4160(void)

void FUN_1407a4160(undefined8 param_1,longlong param_2)

{
  FUN_142de2eb0(param_2 + 8);
  FUN_142de2eb0(param_2 + 0x90);
  FUN_142de2eb0(param_2 + 0x118);
  FUN_142de2eb0(param_2 + 0x1a0);
  *(undefined8 *)(param_2 + 0x224) = 0;
  *(undefined4 *)(param_2 + 0x230) = 0x44fa0000;
  FUN_14077f980(param_2);
  return;
}



// FUNCTION 1407a4220 FUN_1407a4220 body=39 status=ok
// SIG undefined FUN_1407a4220(void)

void FUN_1407a4220(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xc0);
  FUN_1407266b0((longlong)param_2 + 0x10);
  return;
}



// FUNCTION 1407a4250 FUN_1407a4250 body=74 status=ok
// SIG undefined FUN_1407a4250(void)

undefined1 FUN_1407a4250(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1407a3d00(param_2 + param_3,param_3);
      param_3 = param_3 + 0x238;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407a4530 FUN_1407a4530 body=434 status=ok
// SIG undefined FUN_1407a4530(void)

undefined8 FUN_1407a4530(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (param_4 != 0) {
    puVar10 = (undefined8 *)(param_3 + 0x20);
    do {
      uVar5 = puVar10[-3];
      *param_2 = puVar10[-4];
      param_2[1] = uVar5;
      puVar7 = param_2 + 0xe;
      uVar5 = puVar10[-1];
      param_2[2] = puVar10[-2];
      param_2[3] = uVar5;
      uVar5 = puVar10[1];
      param_2[4] = *puVar10;
      param_2[5] = uVar5;
      uVar5 = puVar10[3];
      param_2[6] = puVar10[2];
      param_2[7] = uVar5;
      uVar5 = puVar10[5];
      param_2[8] = puVar10[4];
      param_2[9] = uVar5;
      uVar2 = *(undefined4 *)((longlong)puVar10 + 0x34);
      uVar3 = *(undefined4 *)(puVar10 + 7);
      uVar4 = *(undefined4 *)((longlong)puVar10 + 0x3c);
      *(undefined4 *)(param_2 + 10) = *(undefined4 *)(puVar10 + 6);
      *(undefined4 *)((longlong)param_2 + 0x54) = uVar2;
      *(undefined4 *)(param_2 + 0xb) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0x5c) = uVar4;
      uVar5 = puVar10[9];
      param_2[0xc] = puVar10[8];
      param_2[0xd] = uVar5;
      if (puVar7 != puVar10 + 10) {
        plVar6 = (longlong *)*puVar7;
        for (iVar8 = *(int *)(param_2 + 0xf); iVar8 != 0; iVar8 = iVar8 + -1) {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
        }
        iVar8 = *(int *)(puVar10 + 0xb);
        puVar9 = (undefined8 *)puVar10[10];
        *(int *)(param_2 + 0xf) = iVar8;
        if ((iVar8 == 0) && (*(int *)((longlong)param_2 + 0x7c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x7c) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar7,iVar8);
          puVar7 = (undefined8 *)*puVar7;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar7 = 0;
            iVar1 = *(int *)(puVar9 + 1);
            _Src = (void *)*puVar9;
            *(int *)(puVar7 + 1) = iVar1;
            if (iVar1 == 0) {
              *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            }
            else {
              TArray<int,FDefaultAllocator>::ResizeForCopy(puVar7,iVar1,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar7,_Src,(longlong)iVar1 << 2);
            }
            puVar7 = puVar7 + 2;
            puVar9 = puVar9 + 2;
          }
        }
      }
      uVar5 = puVar10[0xd];
      param_2[0x10] = puVar10[0xc];
      param_2[0x11] = uVar5;
      uVar5 = puVar10[0xf];
      param_2[0x12] = puVar10[0xe];
      param_2[0x13] = uVar5;
      puVar7 = puVar10 + 0x10;
      puVar10 = puVar10 + 0x16;
      param_2[0x14] = *puVar7;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x16;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407a46f0 Copy body=158 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FChallengeRankInstance>::Copy
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 2);
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1407a4790 FUN_1407a4790 body=85 status=ok
// SIG undefined FUN_1407a4790(void)

undefined8 FUN_1407a4790(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = *(undefined8 *)(param_3 + (longlong)param_2);
      FUN_140729e30(param_2 + 2,param_3 + 0x10 + (longlong)param_2);
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407a47f0 FUN_1407a47f0 body=104 status=ok
// SIG undefined FUN_1407a47f0(void)

undefined8 FUN_1407a47f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10 + param_2);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407a4860 FUN_1407a4860 body=87 status=ok
// SIG undefined FUN_1407a4860(void)

void FUN_1407a4860(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x78);
  plVar1 = *(longlong **)(param_2 + 0x70);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_2 + 0x70);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1407a48c0 FUN_1407a48c0 body=93 status=ok
// SIG undefined FUN_1407a48c0(void)

void FUN_1407a48c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x88);
  plVar1 = *(longlong **)(param_2 + 0x80);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_2 + 0x80);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1407a4920 FUN_1407a4920 body=55 status=ok
// SIG undefined FUN_1407a4920(void)

void FUN_1407a4920(void)

{
  undefined8 uVar1;
  
  if (DAT_14685acc0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685acc0 = GetStaticEnum(FUN_1407a56f0,uVar1,L"ECoverAdjustFailReason");
  }
  return;
}



// FUNCTION 1407a4960 FUN_1407a4960 body=55 status=ok
// SIG undefined FUN_1407a4960(void)

void FUN_1407a4960(void)

{
  undefined8 uVar1;
  
  if (DAT_14685ace8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685ace8 = GetStaticEnum(FUN_1407a5720,uVar1,L"ECoverFaceDirection");
  }
  return;
}



// FUNCTION 1407a49a0 FUN_1407a49a0 body=55 status=ok
// SIG undefined FUN_1407a49a0(void)

void FUN_1407a49a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14685acc8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685acc8 = GetStaticEnum(FUN_1407a5750,uVar1,L"ECoverSlotHeight");
  }
  return;
}



// FUNCTION 1407a49e0 FUN_1407a49e0 body=55 status=ok
// SIG undefined FUN_1407a49e0(void)

void FUN_1407a49e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14685acd0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685acd0 = GetStaticEnum(FUN_1407a5780,uVar1,L"ECoverStyleAnimType");
  }
  return;
}



// FUNCTION 1407a4a20 FUN_1407a4a20 body=55 status=ok
// SIG undefined FUN_1407a4a20(void)

void FUN_1407a4a20(void)

{
  undefined8 uVar1;
  
  if (DAT_14685ace0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685ace0 = GetStaticEnum(FUN_1407a57b0,uVar1,L"ESlotAlignRule");
  }
  return;
}



// FUNCTION 1407a4a60 FUN_1407a4a60 body=55 status=ok
// SIG undefined FUN_1407a4a60(void)

void FUN_1407a4a60(void)

{
  undefined8 uVar1;
  
  if (DAT_14685acd8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685acd8 = GetStaticEnum(FUN_1407a57e0,uVar1,L"ESmartObjectLookAtRule");
  }
  return;
}



// FUNCTION 1407a4aa0 FUN_1407a4aa0 body=55 status=ok
// SIG undefined FUN_1407a4aa0(void)

void FUN_1407a4aa0(void)

{
  undefined8 uVar1;
  
  if (DAT_14685acf0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685acf0 = GetStaticEnum(FUN_1407a5810,uVar1,L"ESmartObjectNotify");
  }
  return;
}



// FUNCTION 1407a4ae0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UBTTask_GameplayTaskBase::StaticClass(void)

{
  if (DAT_14685aed0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTTask_AIAction",&DAT_14685aed0,FUN_140447710,0x78,0x10000001,0
                  ,L"Game",&LAB_1407a3b60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UBTTaskNode::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685aed0;
}



// FUNCTION 1407a4b90 FUN_1407a4b90 body=6 status=ok
// SIG undefined FUN_1407a4b90(void)

undefined8 FUN_1407a4b90(void)

{
  return 0xe096620e;
}



// FUNCTION 1407a4ba0 FUN_1407a4ba0 body=6 status=ok
// SIG undefined FUN_1407a4ba0(void)

undefined8 FUN_1407a4ba0(void)

{
  return 0xcabedf43;
}



// FUNCTION 1407a4bb0 FUN_1407a4bb0 body=6 status=ok
// SIG undefined FUN_1407a4bb0(void)

undefined8 FUN_1407a4bb0(void)

{
  return 0x472a6aa4;
}



// FUNCTION 1407a4bc0 FUN_1407a4bc0 body=6 status=ok
// SIG undefined FUN_1407a4bc0(void)

undefined8 FUN_1407a4bc0(void)

{
  return 0xccf55d21;
}



// FUNCTION 1407a4bd0 FUN_1407a4bd0 body=6 status=ok
// SIG undefined FUN_1407a4bd0(void)

undefined8 FUN_1407a4bd0(void)

{
  return 0x8dcb0669;
}



// FUNCTION 1407a4be0 FUN_1407a4be0 body=6 status=ok
// SIG undefined FUN_1407a4be0(void)

undefined8 FUN_1407a4be0(void)

{
  return 0xda429dc3;
}



// FUNCTION 1407a4bf0 FUN_1407a4bf0 body=6 status=ok
// SIG undefined FUN_1407a4bf0(void)

undefined8 FUN_1407a4bf0(void)

{
  return 0x5cfdeb8d;
}



// FUNCTION 1407a4c00 FUN_1407a4c00 body=6 status=ok
// SIG undefined FUN_1407a4c00(void)

undefined8 FUN_1407a4c00(void)

{
  return 0x146769a7;
}



// FUNCTION 1407a4c10 FUN_1407a4c10 body=6 status=ok
// SIG undefined FUN_1407a4c10(void)

undefined8 FUN_1407a4c10(void)

{
  return 0xcf2013c1;
}



// FUNCTION 1407a4c20 FUN_1407a4c20 body=6 status=ok
// SIG undefined FUN_1407a4c20(void)

undefined8 FUN_1407a4c20(void)

{
  return 0xca541261;
}



// FUNCTION 1407a4c30 FUN_1407a4c30 body=6 status=ok
// SIG undefined FUN_1407a4c30(void)

undefined8 FUN_1407a4c30(void)

{
  return 0xd0cfb8d9;
}



// FUNCTION 1407a4df0 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

void UBTComposite_Selector::StaticClass(void)

{
  StaticClass();
  return;
}



// FUNCTION 1407a4e00 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UBTDecorator::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1407a4e10 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

void UBTDecorator_BlackboardBase::StaticClass(void)

{
  StaticClass();
  return;
}



// FUNCTION 1407a4e20 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

void UBTService_DefaultFocus::StaticClass(void)

{
  StaticClass();
  return;
}



// FUNCTION 1407a4e30 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

void URemnantTrait::StaticClass(void)

{
  StaticClass();
  return;
}



// FUNCTION 1407a4e40 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UBTTaskNode::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1407a4e50 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

void UBTTask_BlackboardBase::StaticClass(void)

{
  StaticClass();
  return;
}



// FUNCTION 1407a4e60 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

void UBTTask_MoveTo::StaticClass(void)

{
  StaticClass();
  return;
}



// FUNCTION 1407a4e70 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UBlackboardKeyType::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1407a4e80 FUN_1407a4e80 body=34 status=ok
// SIG undefined FUN_1407a4e80(void)

void FUN_1407a4e80(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407a34b0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_IsEnabled_1440be530,2);
  return;
}



// FUNCTION 1407a4eb0 FUN_1407a4eb0 body=34 status=ok
// SIG undefined FUN_1407a4eb0(void)

void FUN_1407a4eb0(void)

{
  undefined8 uVar1;
  
  uVar1 = UUGHitTextureButton::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetAvailableSocketNames_1440bd950,1);
  return;
}



// FUNCTION 1407a4ee0 FUN_1407a4ee0 body=34 status=ok
// SIG undefined FUN_1407a4ee0(void)

void FUN_1407a4ee0(void)

{
  undefined8 uVar1;
  
  uVar1 = APostProcessVolume::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnWeaponUsed_1440bda78,2);
  return;
}



// FUNCTION 1407a4f10 FUN_1407a4f10 body=34 status=ok
// SIG undefined FUN_1407a4f10(void)

void FUN_1407a4f10(void)

{
  undefined8 uVar1;
  
  uVar1 = ACameraActor::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_IsEnabled_1440bee98,2);
  return;
}



// FUNCTION 1407a4f40 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSynthKnobStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685add0 == 0) {
    uVar1 = FUN_1407a4b90();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685add0 = GetStaticStruct(FUN_1407a5840,uVar2,L"AIWeaponUseSettings",0x238,uVar1);
  }
  return;
}



// FUNCTION 1407a4fa0 FUN_1407a4fa0 body=82 status=ok
// SIG undefined FUN_1407a4fa0(void)

void FUN_1407a4fa0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685ae78 == 0) {
    uVar1 = FUN_1407a4ba0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685ae78 = GetStaticStruct(FUN_1407a5870,uVar2,L"BTGbxLoopConditionData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1407a5000 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVideoPlayerSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685ae38 == 0) {
    uVar1 = FUN_1407a4bb0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685ae38 = GetStaticStruct(FUN_1407a58a0,uVar2,L"BTRandomEntrySettings",0x110,uVar1);
  }
  return;
}



// FUNCTION 1407a5060 FUN_1407a5060 body=82 status=ok
// SIG undefined FUN_1407a5060(void)

void FUN_1407a5060(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685afc0 == 0) {
    uVar1 = FUN_1407a4bc0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685afc0 = GetStaticStruct(FUN_1407a58d0,uVar2,L"CoverAdjustParams",0x40,uVar1);
  }
  return;
}



// FUNCTION 1407a50c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FChaosPhysicsSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685af60 == 0) {
    uVar1 = FUN_1407a4bd0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685af60 = GetStaticStruct(FUN_1407a5900,uVar2,L"CoverFaceDirections",3,uVar1);
  }
  return;
}



// FUNCTION 1407a5120 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPerPlatformSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685af90 == 0) {
    uVar1 = FUN_1407a4be0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685af90 = GetStaticStruct(FUN_1407a5930,uVar2,L"CoverLineOfSightBlockData",4,uVar1);
  }
  return;
}



// FUNCTION 1407a5180 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSurvivalUpgradeInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685af70 == 0) {
    uVar1 = FUN_1407a4bf0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685af70 = GetStaticStruct(FUN_1407a5960,uVar2,L"CoverLineOfSightData",0xb0,uVar1);
  }
  return;
}



// FUNCTION 1407a51e0 FUN_1407a51e0 body=82 status=ok
// SIG undefined FUN_1407a51e0(void)

void FUN_1407a51e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685afa0 == 0) {
    uVar1 = FUN_1407a4c00();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685afa0 = GetStaticStruct(FUN_1407a5990,uVar2,L"CoverLineOfSightParams",0x28,uVar1);
  }
  return;
}



// FUNCTION 1407a5240 FUN_1407a5240 body=82 status=ok
// SIG undefined FUN_1407a5240(void)

void FUN_1407a5240(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685af80 == 0) {
    uVar1 = FUN_1407a4c10();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685af80 = GetStaticStruct(FUN_1407a59c0,uVar2,L"CoverLineOfSightSectionData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1407a52a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FRootMotionSource_MoveToForce::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685afe0 == 0) {
    uVar1 = FUN_1407a4c20();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685afe0 = GetStaticStruct(FUN_1407a59f0,uVar2,L"CoverSlotViewData",0xc0,uVar1);
  }
  return;
}



// FUNCTION 1407a5300 FUN_1407a5300 body=82 status=ok
// SIG undefined FUN_1407a5300(void)

void FUN_1407a5300(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685afd0 == 0) {
    uVar1 = FUN_1407a4c30();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685afd0 = GetStaticStruct(FUN_1407a5a20,uVar2,L"CoverSlotViewFailData",0x20,uVar1);
  }
  return;
}



// FUNCTION 1407a5360 FUN_1407a5360 body=47 status=ok
// SIG undefined FUN_1407a5360(void)

longlong FUN_1407a5360(void)

{
  if (DAT_14685ae08 == 0) {
    FUN_141786440(&DAT_14685ae08,&PTR_FUN_1440bd1a0);
  }
  return DAT_14685ae08;
}



// FUNCTION 1407a5390 FUN_1407a5390 body=47 status=ok
// SIG undefined FUN_1407a5390(void)

longlong FUN_1407a5390(void)

{
  if (DAT_14685ae18 == 0) {
    FUN_141786440(&DAT_14685ae18,&PTR_FUN_1440bd410);
  }
  return DAT_14685ae18;
}



// FUNCTION 1407a53c0 FUN_1407a53c0 body=47 status=ok
// SIG undefined FUN_1407a53c0(void)

longlong FUN_1407a53c0(void)

{
  if (DAT_14685ae48 == 0) {
    FUN_141786440(&DAT_14685ae48,&PTR_FUN_1440bb750);
  }
  return DAT_14685ae48;
}



// FUNCTION 1407a53f0 FUN_1407a53f0 body=47 status=ok
// SIG undefined FUN_1407a53f0(void)

longlong FUN_1407a53f0(void)

{
  if (DAT_14685ae58 == 0) {
    FUN_141786440(&DAT_14685ae58,&PTR_FUN_1440bbdf0);
  }
  return DAT_14685ae58;
}



// FUNCTION 1407a5420 FUN_1407a5420 body=47 status=ok
// SIG undefined FUN_1407a5420(void)

longlong FUN_1407a5420(void)

{
  if (DAT_14685ae88 == 0) {
    FUN_141786440(&DAT_14685ae88,&PTR_StaticClass_1440bc1e0);
  }
  return DAT_14685ae88;
}



// FUNCTION 1407a5450 FUN_1407a5450 body=47 status=ok
// SIG undefined FUN_1407a5450(void)

longlong FUN_1407a5450(void)

{
  if (DAT_14685ae98 == 0) {
    FUN_141786440(&DAT_14685ae98,&PTR_FUN_1440bc750);
  }
  return DAT_14685ae98;
}



// FUNCTION 1407a5480 FUN_1407a5480 body=47 status=ok
// SIG undefined FUN_1407a5480(void)

longlong FUN_1407a5480(void)

{
  if (DAT_14685aea8 == 0) {
    FUN_141786440(&DAT_14685aea8,&PTR_FUN_1440bcf00);
  }
  return DAT_14685aea8;
}



// FUNCTION 1407a54b0 FUN_1407a54b0 body=47 status=ok
// SIG undefined FUN_1407a54b0(void)

longlong FUN_1407a54b0(void)

{
  if (DAT_14685aeb8 == 0) {
    FUN_141786440(&DAT_14685aeb8,&PTR_StaticClass_1440bd3a0);
  }
  return DAT_14685aeb8;
}



// FUNCTION 1407a54e0 FUN_1407a54e0 body=47 status=ok
// SIG undefined FUN_1407a54e0(void)

longlong FUN_1407a54e0(void)

{
  if (DAT_14685aed8 == 0) {
    FUN_141786440(&DAT_14685aed8,&PTR_StaticClass_1440b9d20);
  }
  return DAT_14685aed8;
}



// FUNCTION 1407a5510 FUN_1407a5510 body=47 status=ok
// SIG undefined FUN_1407a5510(void)

longlong FUN_1407a5510(void)

{
  if (DAT_14685aee8 == 0) {
    FUN_141786440(&DAT_14685aee8,&PTR_FUN_1440b9fe0);
  }
  return DAT_14685aee8;
}



// FUNCTION 1407a5540 FUN_1407a5540 body=47 status=ok
// SIG undefined FUN_1407a5540(void)

longlong FUN_1407a5540(void)

{
  if (DAT_14685aef8 == 0) {
    FUN_141786440(&DAT_14685aef8,&PTR_FUN_1440ba490);
  }
  return DAT_14685aef8;
}



// FUNCTION 1407a5570 FUN_1407a5570 body=47 status=ok
// SIG undefined FUN_1407a5570(void)

longlong FUN_1407a5570(void)

{
  if (DAT_14685af08 == 0) {
    FUN_141786440(&DAT_14685af08,&PTR_StaticClass_1440baaf0);
  }
  return DAT_14685af08;
}



// FUNCTION 1407a55a0 FUN_1407a55a0 body=47 status=ok
// SIG undefined FUN_1407a55a0(void)

longlong FUN_1407a55a0(void)

{
  if (DAT_14685ae28 == 0) {
    FUN_141786440(&DAT_14685ae28,&PTR_FUN_1440ba830);
  }
  return DAT_14685ae28;
}



// FUNCTION 1407a55d0 FUN_1407a55d0 body=47 status=ok
// SIG undefined FUN_1407a55d0(void)

longlong FUN_1407a55d0(void)

{
  if (DAT_14685b010 == 0) {
    FUN_141786440(&DAT_14685b010,&PTR_FUN_1440bb280);
  }
  return DAT_14685b010;
}



// FUNCTION 1407a5600 FUN_1407a5600 body=47 status=ok
// SIG undefined FUN_1407a5600(void)

longlong FUN_1407a5600(void)

{
  if (DAT_14685b028 == 0) {
    FUN_141786440(&DAT_14685b028,&PTR_FUN_1440bb500);
  }
  return DAT_14685b028;
}



// FUNCTION 1407a5630 FUN_1407a5630 body=47 status=ok
// SIG undefined FUN_1407a5630(void)

longlong FUN_1407a5630(void)

{
  if (DAT_14685af18 == 0) {
    FUN_141786440(&DAT_14685af18,&PTR_FUN_1440bac80);
  }
  return DAT_14685af18;
}



// FUNCTION 1407a5660 FUN_1407a5660 body=47 status=ok
// SIG undefined FUN_1407a5660(void)

longlong FUN_1407a5660(void)

{
  if (DAT_14685af28 == 0) {
    FUN_141786440(&DAT_14685af28,&PTR_FUN_1440bafe0);
  }
  return DAT_14685af28;
}



// FUNCTION 1407a5690 FUN_1407a5690 body=47 status=ok
// SIG undefined FUN_1407a5690(void)

longlong FUN_1407a5690(void)

{
  if (DAT_14685ae68 == 0) {
    FUN_141786440(&DAT_14685ae68,&PTR_FUN_1440bbf30);
  }
  return DAT_14685ae68;
}



// FUNCTION 1407a56c0 FUN_1407a56c0 body=47 status=ok
// SIG undefined FUN_1407a56c0(void)

longlong FUN_1407a56c0(void)

{
  if (DAT_14685adc8 == 0) {
    FUN_141786a30(&DAT_14685adc8,&PTR_Z_Construct_UPackage__Script_Engine_146246460);
  }
  return DAT_14685adc8;
}



// FUNCTION 1407a56f0 FUN_1407a56f0 body=47 status=ok
// SIG undefined FUN_1407a56f0(void)

longlong FUN_1407a56f0(void)

{
  if (DAT_14685afb0 == 0) {
    FUN_1417866a0(&DAT_14685afb0,&PTR_Z_Construct_UPackage__Script_Engine_1462498c0);
  }
  return DAT_14685afb0;
}



// FUNCTION 1407a5720 FUN_1407a5720 body=47 status=ok
// SIG undefined FUN_1407a5720(void)

longlong FUN_1407a5720(void)

{
  if (DAT_14685af58 == 0) {
    FUN_1417866a0(&DAT_14685af58,&PTR_Z_Construct_UPackage__Script_Engine_146249870);
  }
  return DAT_14685af58;
}



// FUNCTION 1407a5750 FUN_1407a5750 body=47 status=ok
// SIG undefined FUN_1407a5750(void)

longlong FUN_1407a5750(void)

{
  if (DAT_14685afb8 == 0) {
    FUN_1417866a0(&DAT_14685afb8,&PTR_Z_Construct_UPackage__Script_Engine_146249910);
  }
  return DAT_14685afb8;
}



// FUNCTION 1407a5780 FUN_1407a5780 body=47 status=ok
// SIG undefined FUN_1407a5780(void)

longlong FUN_1407a5780(void)

{
  if (DAT_14685b020 == 0) {
    FUN_1417866a0(&DAT_14685b020,&PTR_Z_Construct_UPackage__Script_Engine_146249960);
  }
  return DAT_14685b020;
}



// FUNCTION 1407a57b0 FUN_1407a57b0 body=47 status=ok
// SIG undefined FUN_1407a57b0(void)

longlong FUN_1407a57b0(void)

{
  if (DAT_14685ada8 == 0) {
    FUN_1417866a0(&DAT_14685ada8,&PTR_Z_Construct_UPackage__Script_Engine_1462497d0);
  }
  return DAT_14685ada8;
}



// FUNCTION 1407a57e0 FUN_1407a57e0 body=47 status=ok
// SIG undefined FUN_1407a57e0(void)

longlong FUN_1407a57e0(void)

{
  if (DAT_14685ada0 == 0) {
    FUN_1417866a0(&DAT_14685ada0,&PTR_Z_Construct_UPackage__Script_Engine_146249780);
  }
  return DAT_14685ada0;
}



// FUNCTION 1407a5810 FUN_1407a5810 body=47 status=ok
// SIG undefined FUN_1407a5810(void)

longlong FUN_1407a5810(void)

{
  if (DAT_14685ae00 == 0) {
    FUN_1417866a0(&DAT_14685ae00,&PTR_Z_Construct_UPackage__Script_Engine_146249820);
  }
  return DAT_14685ae00;
}



// FUNCTION 1407a5840 FUN_1407a5840 body=47 status=ok
// SIG undefined FUN_1407a5840(void)

longlong FUN_1407a5840(void)

{
  if (DAT_14685add8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685add8,&PTR_Z_Construct_UPackage__Script_Engine_146246830);
  }
  return DAT_14685add8;
}



// FUNCTION 1407a5870 FUN_1407a5870 body=47 status=ok
// SIG undefined FUN_1407a5870(void)

longlong FUN_1407a5870(void)

{
  if (DAT_14685ae80 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ae80,&PTR_Z_Construct_UPackage__Script_Engine_1462473b0);
  }
  return DAT_14685ae80;
}



// FUNCTION 1407a58a0 FUN_1407a58a0 body=47 status=ok
// SIG undefined FUN_1407a58a0(void)

longlong FUN_1407a58a0(void)

{
  if (DAT_14685ae40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685ae40,&PTR_Z_Construct_UPackage__Script_Engine_1462471e0);
  }
  return DAT_14685ae40;
}



// FUNCTION 1407a58d0 FUN_1407a58d0 body=47 status=ok
// SIG undefined FUN_1407a58d0(void)

longlong FUN_1407a58d0(void)

{
  if (DAT_14685afc8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685afc8,&PTR_Z_Construct_UPackage__Script_Engine_146248b20);
  }
  return DAT_14685afc8;
}



// FUNCTION 1407a5900 FUN_1407a5900 body=47 status=ok
// SIG undefined FUN_1407a5900(void)

longlong FUN_1407a5900(void)

{
  if (DAT_14685af68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685af68,&PTR_Z_Construct_UPackage__Script_Engine_146248190);
  }
  return DAT_14685af68;
}



// FUNCTION 1407a5930 FUN_1407a5930 body=47 status=ok
// SIG undefined FUN_1407a5930(void)

longlong FUN_1407a5930(void)

{
  if (DAT_14685af98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685af98,&PTR_Z_Construct_UPackage__Script_Engine_146248460);
  }
  return DAT_14685af98;
}



// FUNCTION 1407a5960 FUN_1407a5960 body=47 status=ok
// SIG undefined FUN_1407a5960(void)

longlong FUN_1407a5960(void)

{
  if (DAT_14685af78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685af78,&PTR_Z_Construct_UPackage__Script_Engine_146248320);
  }
  return DAT_14685af78;
}



// FUNCTION 1407a5990 FUN_1407a5990 body=47 status=ok
// SIG undefined FUN_1407a5990(void)

longlong FUN_1407a5990(void)

{
  if (DAT_14685afa8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685afa8,&PTR_Z_Construct_UPackage__Script_Engine_146248680);
  }
  return DAT_14685afa8;
}



// FUNCTION 1407a59c0 FUN_1407a59c0 body=47 status=ok
// SIG undefined FUN_1407a59c0(void)

longlong FUN_1407a59c0(void)

{
  if (DAT_14685af88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685af88,&PTR_Z_Construct_UPackage__Script_Engine_1462483e0);
  }
  return DAT_14685af88;
}



// FUNCTION 1407a59f0 FUN_1407a59f0 body=47 status=ok
// SIG undefined FUN_1407a59f0(void)

longlong FUN_1407a59f0(void)

{
  if (DAT_14685afe8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685afe8,&PTR_Z_Construct_UPackage__Script_Engine_146248d30);
  }
  return DAT_14685afe8;
}



// FUNCTION 1407a5a20 FUN_1407a5a20 body=47 status=ok
// SIG undefined FUN_1407a5a20(void)

longlong FUN_1407a5a20(void)

{
  if (DAT_14685afd8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685afd8,&PTR_Z_Construct_UPackage__Script_Engine_146248c60);
  }
  return DAT_14685afd8;
}



// FUNCTION 1407a5a50 execCheckForDuplicateLevels body=163 status=ok
// SIG undefined execCheckForDuplicateLevels(void)

void AStreamingTrigger::execCheckForDuplicateLevels(long param_1,longlong param_2)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407a5b00 FUN_1407a5b00 body=43 status=ok
// SIG undefined FUN_1407a5b00(void)

void FUN_1407a5b00(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14073cdd0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a5b30 FUN_1407a5b30 body=43 status=ok
// SIG undefined FUN_1407a5b30(void)

void FUN_1407a5b30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14073ce30();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a5b80 FUN_1407a5b80 body=130 status=ok
// SIG undefined FUN_1407a5b80(void)

void FUN_1407a5b80(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140743e70(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1407a5c10 FUN_1407a5c10 body=130 status=ok
// SIG undefined FUN_1407a5c10(void)

void FUN_1407a5c10(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140743ec0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1407a5ca0 FUN_1407a5ca0 body=43 status=ok
// SIG undefined FUN_1407a5ca0(void)

void FUN_1407a5ca0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FOutputDevice::CanBeUsedOnAnyThread();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407a5cd0 FUN_1407a5cd0 body=53 status=ok
// SIG undefined FUN_1407a5cd0(void)

void FUN_1407a5cd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_143ff1be8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1407a5d20 FUN_1407a5d20 body=47 status=ok
// SIG undefined FUN_1407a5d20(void)

longlong FUN_1407a5d20(void)

{
  if (DAT_14685b190 == 0) {
    FUN_141786440(&DAT_14685b190,&PTR_FUN_1440c0140);
  }
  return DAT_14685b190;
}



// FUNCTION 1407a5d50 FUN_1407a5d50 body=47 status=ok
// SIG undefined FUN_1407a5d50(void)

longlong FUN_1407a5d50(void)

{
  if (DAT_14685b170 == 0) {
    FUN_141786a30(&DAT_14685b170,&PTR_FUN_14624ad80);
  }
  return DAT_14685b170;
}



// FUNCTION 1407a5d80 FUN_1407a5d80 body=47 status=ok
// SIG undefined FUN_1407a5d80(void)

longlong FUN_1407a5d80(void)

{
  if (DAT_14685b178 == 0) {
    FUN_141786a30(&DAT_14685b178,&PTR_FUN_14624ae80);
  }
  return DAT_14685b178;
}



// FUNCTION 1407a5db0 FUN_1407a5db0 body=47 status=ok
// SIG undefined FUN_1407a5db0(void)

longlong FUN_1407a5db0(void)

{
  if (DAT_14685b180 == 0) {
    FUN_141786a30(&DAT_14685b180,&PTR_FUN_14624aec0);
  }
  return DAT_14685b180;
}



// FUNCTION 1407a5de0 FUN_1407a5de0 body=47 status=ok
// SIG undefined FUN_1407a5de0(void)

longlong FUN_1407a5de0(void)

{
  if (DAT_14685b188 == 0) {
    FUN_141786a30(&DAT_14685b188,&PTR_FUN_14624af40);
  }
  return DAT_14685b188;
}



// FUNCTION 1407a5e20 FUN_1407a5e20 body=53 status=ok
// SIG undefined FUN_1407a5e20(void)

void FUN_1407a5e20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1440c36f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a5e60 FUN_1407a5e60 body=53 status=ok
// SIG undefined FUN_1407a5e60(void)

void FUN_1407a5e60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x130;
    *puVar1 = &PTR_FUN_1440c3808;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a5ea0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2a8;
    *puVar1 = &PTR_FUN_1440c3920;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a5ee0 FUN_1407a5ee0 body=162 status=ok
// SIG undefined FUN_1407a5ee0(void)

longlong FUN_1407a5ee0(void)

{
  if (DAT_14685b248 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryGenerator_FindLookAtPoint",&DAT_14685b248,FUN_140447710
                  ,0xa0,0x10000000,0,L"Engine",&LAB_1407a7110,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8920,&LAB_140447700,0);
  }
  return DAT_14685b248;
}



// FUNCTION 1407a5f90 FUN_1407a5f90 body=53 status=ok
// SIG undefined FUN_1407a5f90(void)

void FUN_1407a5f90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x118;
    *puVar1 = &PTR_FUN_1440c3a38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a5fe0 FUN_1407a5fe0 body=162 status=ok
// SIG undefined FUN_1407a5fe0(void)

longlong FUN_1407a5fe0(void)

{
  if (DAT_14685b258 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryGenerator_FindPerch",&DAT_14685b258,FUN_140447710,0xa0,
                  0x10000000,0,L"Engine",&LAB_1407a7130,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8920,&LAB_140447700,0);
  }
  return DAT_14685b258;
}



// FUNCTION 1407a60b0 FUN_1407a60b0 body=162 status=ok
// SIG undefined FUN_1407a60b0(void)

longlong FUN_1407a60b0(void)

{
  if (DAT_14685b1a8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"CoverViewData",&DAT_14685b1a8,FUN_140447710,0x78,0x10000000,0,
                  L"Engine",&LAB_1407a7020,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14685b1a8;
}



// FUNCTION 1407a6170 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USafeZone::GetPrivateStaticClass(void)

{
  if (DAT_14685b268 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryGenerator_SmartAction",&DAT_14685b268,FUN_140447710,
                  0x148,0x10000000,0,L"Engine",&LAB_1407a7150,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8920,&LAB_140447700,0);
  }
  return DAT_14685b268;
}



// FUNCTION 1407a6230 FUN_1407a6230 body=162 status=ok
// SIG undefined FUN_1407a6230(void)

longlong FUN_1407a6230(void)

{
  if (DAT_14685b288 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryGenerator_SmartGrid",&DAT_14685b288,FUN_140447710,0xa8,
                  0x10000000,0,L"Engine",&LAB_1407a7170,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction_BlueprintBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685b288;
}



// FUNCTION 1407a62e0 FUN_1407a62e0 body=53 status=ok
// SIG undefined FUN_1407a62e0(void)

void FUN_1407a62e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &PTR_FUN_1440c3ca8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a6320 FUN_1407a6320 body=53 status=ok
// SIG undefined FUN_1407a6320(void)

void FUN_1407a6320(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &PTR_FUN_1440c3b90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a6360 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryContext_Target::StaticClass(void)

{
  if (DAT_14685b1c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryContext_AllTargets",&DAT_14685b1c8,FUN_140447710,0x28,
                  0x10000000,0,L"Engine",&LAB_1407a7040,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8910,&LAB_140447700,0);
  }
  return DAT_14685b1c8;
}



// FUNCTION 1407a6430 FUN_1407a6430 body=162 status=ok
// SIG undefined FUN_1407a6430(void)

longlong FUN_1407a6430(void)

{
  if (DAT_14685b2a0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryGenerator_Territory",&DAT_14685b2a0,FUN_140447710,0x108
                  ,0x10000000,0,L"Engine",&LAB_1407a7190,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction_BlueprintBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685b2a0;
}



// FUNCTION 1407a64e0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryContext_Target::StaticClass(void)

{
  if (DAT_14685b1d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryContext_Friendlies",&DAT_14685b1d8,FUN_140447710,0x28,
                  0x10000000,0,L"Engine",&LAB_1407a7060,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8910,&LAB_140447700,0);
  }
  return DAT_14685b1d8;
}



// FUNCTION 1407a65b0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryContext_Target::StaticClass(void)

{
  if (DAT_14685b1e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryContext_Target",&DAT_14685b1e8,FUN_140447710,0x28,
                  0x10000000,0,L"Engine",&LAB_1407a7080,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8910,&LAB_140447700,0);
  }
  return DAT_14685b1e8;
}



// FUNCTION 1407a6670 FUN_1407a6670 body=162 status=ok
// SIG undefined FUN_1407a6670(void)

longlong FUN_1407a6670(void)

{
  if (DAT_14685b2c0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryItemType_SmartAction",&DAT_14685b2c0,FUN_140447710,0x30
                  ,0x10000000,0,L"Engine",&LAB_1407a71a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UEnvQueryItemType_VectorBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685b2c0;
}



// FUNCTION 1407a6720 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryContext_Target::StaticClass(void)

{
  if (DAT_14685b1f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryContext_TargetActualLocation",&DAT_14685b1f8,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",&LAB_1407a70a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8910,&LAB_140447700,0);
  }
  return DAT_14685b1f8;
}



// FUNCTION 1407a67e0 FUN_1407a67e0 body=53 status=ok
// SIG undefined FUN_1407a67e0(void)

void FUN_1407a67e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1440c3df0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a6820 FUN_1407a6820 body=162 status=ok
// SIG undefined FUN_1407a6820(void)

longlong FUN_1407a6820(void)

{
  if (DAT_14685b198 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"CoverUserComponent",&DAT_14685b198,FUN_1407a8980,0x910,
                  0x10000000,0,L"Engine",&LAB_1407a7000,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_14685b198;
}



// FUNCTION 1407a68e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimMontage::GetPrivateStaticClass(void)

{
  if (DAT_14685b2d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_ActorHealth",&DAT_14685b2d0,FUN_140447710,0x1e0,
                  0x10000000,0,L"Engine",&LAB_1407a71c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b2d0;
}



// FUNCTION 1407a69a0 FUN_1407a69a0 body=162 status=ok
// SIG undefined FUN_1407a69a0(void)

longlong FUN_1407a69a0(void)

{
  if (DAT_14685b2e0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_AITicket",&DAT_14685b2e0,FUN_140447710,0x210,
                  0x10000000,0,L"Engine",&LAB_1407a71b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b2e0;
}



// FUNCTION 1407a6a60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlueprintGeneratedClass::GetPrivateStaticClass(void)

{
  if (DAT_14685b2f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_Angle",&DAT_14685b2f0,FUN_140447710,0x2e0,
                  0x10000000,0,L"Engine",&LAB_1407a71d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b2f0;
}



// FUNCTION 1407a6b10 FUN_1407a6b10 body=162 status=ok
// SIG undefined FUN_1407a6b10(void)

longlong FUN_1407a6b10(void)

{
  if (DAT_14685b208 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryGenerator_AINodes",&DAT_14685b208,FUN_140447710,0x100,
                  0x10000000,0,L"Engine",&LAB_1407a70c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8920,&LAB_140447700,0);
  }
  return DAT_14685b208;
}



// FUNCTION 1407a6bd0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGPickMutatorsScreenUW::GetPrivateStaticClass(void)

{
  if (DAT_14685b300 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_ArcTrace",&DAT_14685b300,FUN_140447710,0x308,
                  0x10000000,0,L"Engine",&LAB_1407a71f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c43f80,&LAB_140447700,0);
  }
  return DAT_14685b300;
}



// FUNCTION 1407a6c90 FUN_1407a6c90 body=162 status=ok
// SIG undefined FUN_1407a6c90(void)

longlong FUN_1407a6c90(void)

{
  if (DAT_14685b110 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"GbxCoverTransitionTable",&DAT_14685b110,FUN_140447710,0xa8,
                  0x10000000,0,L"Engine",FUN_1407a7210,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UXPrimaryDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685b110;
}



// FUNCTION 1407a6d50 FUN_1407a6d50 body=53 status=ok
// SIG undefined FUN_1407a6d50(void)

void FUN_1407a6d50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_1440c30b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a6d90 FUN_1407a6d90 body=162 status=ok
// SIG undefined FUN_1407a6d90(void)

longlong FUN_1407a6d90(void)

{
  if (DAT_14685b218 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryGenerator_Cover",&DAT_14685b218,FUN_140447710,0xb0,
                  0x10000000,0,L"Engine",&LAB_1407a70d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8920,&LAB_140447700,0);
  }
  return DAT_14685b218;
}



// FUNCTION 1407a6e40 FUN_1407a6e40 body=53 status=ok
// SIG undefined FUN_1407a6e40(void)

void FUN_1407a6e40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_1440c31d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a6e80 FUN_1407a6e80 body=53 status=ok
// SIG undefined FUN_1407a6e80(void)

void FUN_1407a6e80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1440c32e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a6ed0 FUN_1407a6ed0 body=53 status=ok
// SIG undefined FUN_1407a6ed0(void)

void FUN_1407a6ed0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_1440c3400;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a6f10 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryTest_Cover::StaticClass(void)

{
  if (DAT_14685b238 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryGenerator_DynamicPoints",&DAT_14685b238,FUN_140447710,
                  0x1f8,0x10000000,0,L"Engine",&LAB_1407a70f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction_BlueprintBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685b238;
}



// FUNCTION 1407a6fc0 FUN_1407a6fc0 body=53 status=ok
// SIG undefined FUN_1407a6fc0(void)

void FUN_1407a6fc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_1440c3518;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a7210 FUN_1407a7210 body=64 status=ok
// SIG undefined FUN_1407a7210(void)

void FUN_1407a7210(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *(undefined1 *)(puVar1 + 8) = 0;
    *puVar1 = &PTR_FUN_1440c2e10;
    FUN_140726970(puVar1 + 10);
    *(undefined4 *)(puVar1 + 0x14) = 0x43480000;
  }
  return;
}



// FUNCTION 1407a7250 FUN_1407a7250 body=285 status=ok
// SIG undefined FUN_1407a7250(void)

void FUN_1407a7250(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 9);
  plVar1 = (longlong *)param_1[8];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[8];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
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
  iVar2 = *(int *)(param_1 + 5);
  plVar1 = (longlong *)param_1[4];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[4];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 3);
  plVar1 = (longlong *)param_1[2];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[2];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1407a7370 FUN_1407a7370 body=1064 status=ok
// SIG undefined FUN_1407a7370(void)

undefined8 * FUN_1407a7370(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)param_1 + 0xb) = *(undefined1 *)((longlong)param_2 + 0xb);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  param_1[0xb] = param_2[0xb];
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = param_2[0xe];
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)((longlong)param_2 + 0x91);
  *(undefined1 *)((longlong)param_1 + 0x92) = *(undefined1 *)((longlong)param_2 + 0x92);
  *(undefined1 *)((longlong)param_1 + 0x93) = *(undefined1 *)((longlong)param_2 + 0x93);
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)((longlong)param_2 + 0x94);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  uVar1 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar1;
  param_1[0x1c] = param_2[0x1c];
  uVar1 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar1;
  param_1[0x1f] = param_2[0x1f];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)((longlong)param_1 + 0x119) = *(undefined1 *)((longlong)param_2 + 0x119);
  *(undefined1 *)((longlong)param_1 + 0x11a) = *(undefined1 *)((longlong)param_2 + 0x11a);
  *(undefined1 *)((longlong)param_1 + 0x11b) = *(undefined1 *)((longlong)param_2 + 0x11b);
  *(undefined8 *)((longlong)param_1 + 0x11c) = *(undefined8 *)((longlong)param_2 + 0x11c);
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  uVar1 = param_2[0x28];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = uVar1;
  uVar1 = param_2[0x2a];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = uVar1;
  uVar1 = param_2[0x2c];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = uVar1;
  param_1[0x2d] = param_2[0x2d];
  uVar1 = param_2[0x2f];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = uVar1;
  param_1[0x30] = param_2[0x30];
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x18c) = *(undefined4 *)((longlong)param_2 + 0x18c);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_2 + 0x33);
  *(undefined1 *)((longlong)param_1 + 0x199) = *(undefined1 *)((longlong)param_2 + 0x199);
  *(undefined1 *)((longlong)param_1 + 0x19a) = *(undefined1 *)((longlong)param_2 + 0x19a);
  *(undefined1 *)((longlong)param_1 + 0x19b) = *(undefined1 *)((longlong)param_2 + 0x19b);
  *(undefined8 *)((longlong)param_1 + 0x19c) = *(undefined8 *)((longlong)param_2 + 0x19c);
  param_1[0x35] = param_2[0x35];
  param_1[0x36] = param_2[0x36];
  uVar1 = param_2[0x38];
  param_1[0x37] = param_2[0x37];
  param_1[0x38] = uVar1;
  uVar1 = param_2[0x3a];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = uVar1;
  uVar1 = param_2[0x3c];
  param_1[0x3b] = param_2[0x3b];
  param_1[0x3c] = uVar1;
  param_1[0x3d] = param_2[0x3d];
  uVar1 = param_2[0x3f];
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = uVar1;
  param_1[0x40] = param_2[0x40];
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x41);
  *(undefined4 *)((longlong)param_1 + 0x20c) = *(undefined4 *)((longlong)param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_2 + 0x42);
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
  *(undefined1 *)((longlong)param_1 + 0x219) = *(undefined1 *)((longlong)param_2 + 0x219);
  *(undefined1 *)((longlong)param_1 + 0x21a) = *(undefined1 *)((longlong)param_2 + 0x21a);
  *(undefined1 *)((longlong)param_1 + 0x21b) = *(undefined1 *)((longlong)param_2 + 0x21b);
  *(undefined8 *)((longlong)param_1 + 0x21c) = *(undefined8 *)((longlong)param_2 + 0x21c);
  param_1[0x45] = param_2[0x45];
  param_1[0x46] = param_2[0x46];
  uVar1 = param_2[0x48];
  param_1[0x47] = param_2[0x47];
  param_1[0x48] = uVar1;
  uVar1 = param_2[0x4a];
  param_1[0x49] = param_2[0x49];
  param_1[0x4a] = uVar1;
  uVar1 = param_2[0x4c];
  param_1[0x4b] = param_2[0x4b];
  param_1[0x4c] = uVar1;
  param_1[0x4d] = param_2[0x4d];
  uVar1 = param_2[0x4f];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = uVar1;
  param_1[0x50] = param_2[0x50];
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(param_2 + 0x51);
  *(undefined4 *)((longlong)param_1 + 0x28c) = *(undefined4 *)((longlong)param_2 + 0x28c);
  *(undefined4 *)(param_1 + 0x52) = *(undefined4 *)(param_2 + 0x52);
  param_1[0x53] = param_2[0x53];
  param_1[0x54] = param_2[0x54];
  return param_1;
}



// FUNCTION 1407a77a0 FUN_1407a77a0 body=236 status=ok
// SIG undefined FUN_1407a77a0(void)

longlong FUN_1407a77a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=();
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x10,param_2 + 0x10);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x20,param_2 + 0x20);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x30,param_2 + 0x30);
  plVar1 = (longlong *)(param_1 + 0x40);
  if (plVar1 != (longlong *)(param_2 + 0x40)) {
    plVar3 = (longlong *)*plVar1;
    for (iVar5 = *(int *)(param_1 + 0x48); iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 3;
    }
    iVar5 = *(int *)(param_2 + 0x48);
    lVar4 = *(longlong *)(param_2 + 0x40);
    *(int *)(param_1 + 0x48) = iVar5;
    if ((iVar5 == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
      lVar6 = *plVar1;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        FString::FString(lVar6,lVar4);
        puVar2 = (undefined8 *)(lVar4 + 0x10);
        lVar4 = lVar4 + 0x18;
        *(undefined8 *)(lVar6 + 0x10) = *puVar2;
        lVar6 = lVar6 + 0x18;
      }
    }
  }
  return param_1;
}



// FUNCTION 1407a7890 FUN_1407a7890 body=400 status=ok
// SIG undefined FUN_1407a7890(void)

undefined1 * FUN_1407a7890(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[8];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  param_1[0x90] = param_2[0x90];
  param_1[0x98] = param_2[0x98];
  param_1[0x99] = param_2[0x99];
  param_1[0x9a] = param_2[0x9a];
  param_1[0x9b] = param_2[0x9b];
  *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  uVar1 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  return param_1;
}



// FUNCTION 1407a7a20 FUN_1407a7a20 body=64 status=ok
// SIG undefined FUN_1407a7a20(void)

longlong FUN_1407a7a20(longlong param_1,ulonglong param_2)

{
  FUN_1407a7250(param_1 + 0x50);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1407a7ad0 FUN_1407a7ad0 body=47 status=ok
// SIG undefined FUN_1407a7ad0(void)

void FUN_1407a7ad0(undefined8 param_1,undefined2 *param_2)

{
  *param_2 = 0x101;
  *(undefined4 *)(param_2 + 2) = 0x3f400000;
  FUN_142de2eb0(param_2 + 8);
  FUN_142de2eb0(param_2 + 0x4c);
  return;
}



// FUNCTION 1407a7b20 FUN_1407a7b20 body=114 status=ok
// SIG undefined FUN_1407a7b20(void)

void FUN_1407a7b20(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  _guard_xfg_dispatch_icall_nop(param_2 + 3,0,0xd8);
  *param_2 = 0;
  param_2[2] = 0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_2 + 4);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_2 + 10);
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_2 + 0x15);
  param_2[0x1d] = 0;
  return;
}



// FUNCTION 1407a7ba0 FUN_1407a7ba0 body=104 status=ok
// SIG undefined FUN_1407a7ba0(void)

undefined8 FUN_1407a7ba0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x10);
    do {
      puVar1[-2] = *(undefined8 *)(param_3 + -0x10 + (longlong)puVar1);
      puVar1[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      FUN_1407a7890(puVar1 + 1,param_3 + 8 + (longlong)puVar1);
      puVar1 = puVar1 + 0x26;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407a7c10 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FSoundAttenuationSettings>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1407a7370(param_2 + param_3,param_3);
      param_3 = param_3 + 0x2a8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407a7c60 FUN_1407a7c60 body=105 status=ok
// SIG undefined FUN_1407a7c60(void)

undefined8 FUN_1407a7c60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10 + param_2);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8 + param_2);
      FUN_1407a77a0(param_2,param_3 + param_2);
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407a7cd0 FUN_1407a7cd0 body=311 status=ok
// SIG undefined FUN_1407a7cd0(void)

undefined8 FUN_1407a7cd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    do {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2,param_3 + -0x20);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2 + 0x10,param_3 + -0x10);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2 + 0x20,param_3);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2 + 0x30,param_3 + 0x10);
      plVar1 = (longlong *)(param_2 + 0x40);
      if (plVar1 != (longlong *)(param_3 + 0x20)) {
        plVar3 = (longlong *)*plVar1;
        for (iVar5 = *(int *)(param_2 + 0x48); iVar5 != 0; iVar5 = iVar5 + -1) {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 3;
        }
        iVar5 = *(int *)(param_3 + 0x28);
        lVar4 = *(longlong *)(param_3 + 0x20);
        *(int *)(param_2 + 0x48) = iVar5;
        if ((iVar5 == 0) && (*(int *)(param_2 + 0x4c) == 0)) {
          *(undefined4 *)(param_2 + 0x4c) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
          lVar6 = *plVar1;
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            FString::FString(lVar6,lVar4);
            puVar2 = (undefined8 *)(lVar4 + 0x10);
            lVar4 = lVar4 + 0x18;
            *(undefined8 *)(lVar6 + 0x10) = *puVar2;
            lVar6 = lVar6 + 0x18;
          }
        }
      }
      param_3 = param_3 + 0x50;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x50;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407a7e10 Copy body=80 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FParticleCurvePair>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FString::operator=(param_2,param_3 + param_2);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10 + param_2);
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407a7e60 FUN_1407a7e60 body=330 status=ok
// SIG undefined FUN_1407a7e60(void)

undefined8 FUN_1407a7e60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined8 *)(param_3 + 8);
    do {
      uVar3 = puVar4[1];
      *(undefined8 *)(param_2 + 8) = *puVar4;
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      puVar1 = (undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x18) = puVar4[2];
      *(undefined8 *)(param_2 + 0x20) = puVar4[3];
      *(undefined8 *)(param_2 + 0x28) = puVar4[4];
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(puVar4 + 5);
      *(undefined1 *)(param_2 + 0x34) = *(undefined1 *)((longlong)puVar4 + 0x2c);
      *(undefined1 *)(param_2 + 0x35) = *(undefined1 *)((longlong)puVar4 + 0x2d);
      if (puVar1 != puVar4 + 6) {
        iVar2 = *(int *)(puVar4 + 7);
        _Src = (void *)puVar4[6];
        *(int *)(param_2 + 0x40) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x44) == 0)) {
          *(undefined4 *)(param_2 + 0x44) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_2 + 0x48,puVar4 + 8);
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_2 + 0x58,puVar4 + 10);
      *(undefined1 *)(param_2 + 0x68) = *(undefined1 *)(puVar4 + 0xc);
      *(undefined8 *)(param_2 + 0x70) = puVar4[0xd];
      *(undefined1 *)(param_2 + 0x78) = *(undefined1 *)(puVar4 + 0xe);
      *(undefined8 *)(param_2 + 0x7c) = *(undefined8 *)((longlong)puVar4 + 0x74);
      puVar1 = (undefined8 *)((longlong)puVar4 + 0x7c);
      puVar4 = puVar4 + 0x12;
      *(undefined8 *)(param_2 + 0x84) = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x90;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1407a86b0 FUN_1407a86b0 body=55 status=ok
// SIG undefined FUN_1407a86b0(void)

void FUN_1407a86b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14685b038 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b038 = GetStaticEnum(FUN_1407a9250,uVar1,L"ECoverUserAnimState");
  }
  return;
}



// FUNCTION 1407a86f0 FUN_1407a86f0 body=55 status=ok
// SIG undefined FUN_1407a86f0(void)

void FUN_1407a86f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14685b040 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b040 = GetStaticEnum(FUN_1407a9280,uVar1,L"ECoverUserState");
  }
  return;
}



// FUNCTION 1407a8730 FUN_1407a8730 body=55 status=ok
// SIG undefined FUN_1407a8730(void)

void FUN_1407a8730(void)

{
  undefined8 uVar1;
  
  if (DAT_14685b048 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b048 = GetStaticEnum(FUN_1407a92b0,uVar1,L"ETerritoryMovementType");
  }
  return;
}



// FUNCTION 1407a8770 FUN_1407a8770 body=6 status=ok
// SIG undefined FUN_1407a8770(void)

undefined8 FUN_1407a8770(void)

{
  return 0xd0cd03f7;
}



// FUNCTION 1407a8780 FUN_1407a8780 body=6 status=ok
// SIG undefined FUN_1407a8780(void)

undefined8 FUN_1407a8780(void)

{
  return 0xa11978cc;
}



// FUNCTION 1407a8790 FUN_1407a8790 body=6 status=ok
// SIG undefined FUN_1407a8790(void)

undefined8 FUN_1407a8790(void)

{
  return 0x450d8043;
}



// FUNCTION 1407a87a0 FUN_1407a87a0 body=6 status=ok
// SIG undefined FUN_1407a87a0(void)

undefined8 FUN_1407a87a0(void)

{
  return 0xb56cf0c7;
}



// FUNCTION 1407a87b0 FUN_1407a87b0 body=6 status=ok
// SIG undefined FUN_1407a87b0(void)

undefined8 FUN_1407a87b0(void)

{
  return 0xec429439;
}



// FUNCTION 1407a87c0 FUN_1407a87c0 body=6 status=ok
// SIG undefined FUN_1407a87c0(void)

undefined8 FUN_1407a87c0(void)

{
  return 0xb2b5e58b;
}



// FUNCTION 1407a87d0 FUN_1407a87d0 body=6 status=ok
// SIG undefined FUN_1407a87d0(void)

undefined8 FUN_1407a87d0(void)

{
  return 0x1f4db81e;
}



// FUNCTION 1407a87e0 FUN_1407a87e0 body=6 status=ok
// SIG undefined FUN_1407a87e0(void)

undefined8 FUN_1407a87e0(void)

{
  return 0x52e7b842;
}



// FUNCTION 1407a87f0 FUN_1407a87f0 body=6 status=ok
// SIG undefined FUN_1407a87f0(void)

undefined8 FUN_1407a87f0(void)

{
  return 0x1f02b9d1;
}



// FUNCTION 1407a8800 FUN_1407a8800 body=6 status=ok
// SIG undefined FUN_1407a8800(void)

undefined8 FUN_1407a8800(void)

{
  return 0xedce76aa;
}



// FUNCTION 1407a8810 FUN_1407a8810 body=6 status=ok
// SIG undefined FUN_1407a8810(void)

undefined8 FUN_1407a8810(void)

{
  return 0x7be50d92;
}



// FUNCTION 1407a8820 FUN_1407a8820 body=6 status=ok
// SIG undefined FUN_1407a8820(void)

undefined8 FUN_1407a8820(void)

{
  return 0x1b0d07f0;
}



// FUNCTION 1407a8830 FUN_1407a8830 body=6 status=ok
// SIG undefined FUN_1407a8830(void)

undefined8 FUN_1407a8830(void)

{
  return 0x1cbb96ad;
}



// FUNCTION 1407a8930 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UPawnAction_BlueprintBase::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1407a8940 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UEnvQueryItemType_VectorBase::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1407a8960 thunk_FUN_142c43f80 body=5 status=ok
// SIG undefined thunk_FUN_142c43f80(void)

void thunk_FUN_142c43f80(void)

{
  FUN_142c43f80();
  return;
}



// FUNCTION 1407a8970 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UXPrimaryDataAsset::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1407a8980 FUN_1407a8980 body=34 status=ok
// SIG undefined FUN_1407a8980(void)

void FUN_1407a8980(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407a6820();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetStyle_1440c3b50,4);
  return;
}



// FUNCTION 1407a89b0 FUN_1407a89b0 body=82 status=ok
// SIG undefined FUN_1407a89b0(void)

void FUN_1407a89b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685b140 == 0) {
    uVar1 = FUN_1407a8770();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b140 = GetStaticStruct(FUN_1407a92e0,uVar2,L"CoverAction",0x130,uVar1);
  }
  return;
}



// FUNCTION 1407a8a10 FUN_1407a8a10 body=82 status=ok
// SIG undefined FUN_1407a8a10(void)

void FUN_1407a8a10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685b130 == 0) {
    uVar1 = FUN_1407a8780();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b130 = GetStaticStruct(FUN_1407a9310,uVar2,L"CoverClientData",0x28,uVar1);
  }
  return;
}



// FUNCTION 1407a8a70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSoundAttenuationSettings::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685b150 == 0) {
    uVar1 = FUN_1407a8790();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b150 = GetStaticStruct(FUN_1407a9340,uVar2,L"CoverStyleUserData",0x2a8,uVar1);
  }
  return;
}



// FUNCTION 1407a8ad0 FUN_1407a8ad0 body=82 status=ok
// SIG undefined FUN_1407a8ad0(void)

void FUN_1407a8ad0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685b0b8 == 0) {
    uVar1 = FUN_1407a87a0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b0b8 = GetStaticStruct(FUN_1407a9370,uVar2,L"CoverTransitionData",0x60,uVar1);
  }
  return;
}



// FUNCTION 1407a8b30 FUN_1407a8b30 body=82 status=ok
// SIG undefined FUN_1407a8b30(void)

void FUN_1407a8b30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685b0c8 == 0) {
    uVar1 = FUN_1407a87b0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b0c8 = GetStaticStruct(FUN_1407a93a0,uVar2,L"CoverTransitionFilters",0x50,uVar1);
  }
  return;
}



// FUNCTION 1407a8b90 FUN_1407a8b90 body=82 status=ok
// SIG undefined FUN_1407a8b90(void)

void FUN_1407a8b90(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685b0f8 == 0) {
    uVar1 = FUN_1407a87c0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b0f8 = GetStaticStruct(FUN_1407a93d0,uVar2,L"CoverTransitionInput",0x40,uVar1);
  }
  return;
}



// FUNCTION 1407a8bf0 FUN_1407a8bf0 body=82 status=ok
// SIG undefined FUN_1407a8bf0(void)

void FUN_1407a8bf0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685b0d8 == 0) {
    uVar1 = FUN_1407a87d0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b0d8 = GetStaticStruct(FUN_1407a9400,uVar2,L"CoverTransitionStanceFilter",0x18,uVar1);
  }
  return;
}



// FUNCTION 1407a8c50 FUN_1407a8c50 body=82 status=ok
// SIG undefined FUN_1407a8c50(void)

void FUN_1407a8c50(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685b0e8 == 0) {
    uVar1 = FUN_1407a87e0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b0e8 = GetStaticStruct(FUN_1407a9430,uVar2,L"CoverTransitionTableRow",0x90,uVar1);
  }
  return;
}



// FUNCTION 1407a8cb0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_LinkedInputPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685b160 == 0) {
    uVar1 = FUN_1407a87f0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b160 = GetStaticStruct(FUN_1407a9460,uVar2,L"CoverUseParams",0x118,uVar1);
  }
  return;
}



// FUNCTION 1407a8d10 FUN_1407a8d10 body=82 status=ok
// SIG undefined FUN_1407a8d10(void)

void FUN_1407a8d10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685b1b0 == 0) {
    uVar1 = FUN_1407a8800();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b1b0 = GetStaticStruct(FUN_1407a9490,uVar2,L"CoverWalk",0xe0,uVar1);
  }
  return;
}



// FUNCTION 1407a8d70 FUN_1407a8d70 body=82 status=ok
// SIG undefined FUN_1407a8d70(void)

void FUN_1407a8d70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685b220 == 0) {
    uVar1 = FUN_1407a8810();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b220 = GetStaticStruct(FUN_1407a94c0,uVar2,L"EQSDynamicPointRange",0x10,uVar1);
  }
  return;
}



// FUNCTION 1407a8dd0 FUN_1407a8dd0 body=82 status=ok
// SIG undefined FUN_1407a8dd0(void)

void FUN_1407a8dd0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685b2a8 == 0) {
    uVar1 = FUN_1407a8820();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b2a8 = GetStaticStruct(FUN_1407a94f0,uVar2,L"SmartActionInfoContext",0x30,uVar1);
  }
  return;
}



// FUNCTION 1407a8e30 FUN_1407a8e30 body=82 status=ok
// SIG undefined FUN_1407a8e30(void)

void FUN_1407a8e30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685b270 == 0) {
    uVar1 = FUN_1407a8830();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685b270 = GetStaticStruct(FUN_1407a9520,uVar2,L"SmartGridSearchSet",0xf0,uVar1);
  }
  return;
}



// FUNCTION 1407a8e90 FUN_1407a8e90 body=47 status=ok
// SIG undefined FUN_1407a8e90(void)

longlong FUN_1407a8e90(void)

{
  if (DAT_14685b1a0 == 0) {
    FUN_141786440(&DAT_14685b1a0,&PTR_FUN_1440c0670);
  }
  return DAT_14685b1a0;
}



// FUNCTION 1407a8ec0 FUN_1407a8ec0 body=47 status=ok
// SIG undefined FUN_1407a8ec0(void)

longlong FUN_1407a8ec0(void)

{
  if (DAT_14685b1c0 == 0) {
    FUN_141786440(&DAT_14685b1c0,&PTR_StaticClass_1440c0d30);
  }
  return DAT_14685b1c0;
}



// FUNCTION 1407a8ef0 FUN_1407a8ef0 body=47 status=ok
// SIG undefined FUN_1407a8ef0(void)

longlong FUN_1407a8ef0(void)

{
  if (DAT_14685b1d0 == 0) {
    FUN_141786440(&DAT_14685b1d0,&PTR_StaticClass_1440c1100);
  }
  return DAT_14685b1d0;
}



// FUNCTION 1407a8f20 FUN_1407a8f20 body=47 status=ok
// SIG undefined FUN_1407a8f20(void)

longlong FUN_1407a8f20(void)

{
  if (DAT_14685b1e0 == 0) {
    FUN_141786440(&DAT_14685b1e0,&PTR_StaticClass_1440c1360);
  }
  return DAT_14685b1e0;
}



// FUNCTION 1407a8f50 FUN_1407a8f50 body=47 status=ok
// SIG undefined FUN_1407a8f50(void)

longlong FUN_1407a8f50(void)

{
  if (DAT_14685b1f0 == 0) {
    FUN_141786440(&DAT_14685b1f0,&PTR_StaticClass_1440c1490);
  }
  return DAT_14685b1f0;
}



// FUNCTION 1407a8f80 FUN_1407a8f80 body=47 status=ok
// SIG undefined FUN_1407a8f80(void)

longlong FUN_1407a8f80(void)

{
  if (DAT_14685b200 == 0) {
    FUN_141786440(&DAT_14685b200,&PTR_FUN_1440c1e70);
  }
  return DAT_14685b200;
}



// FUNCTION 1407a8fb0 FUN_1407a8fb0 body=47 status=ok
// SIG undefined FUN_1407a8fb0(void)

longlong FUN_1407a8fb0(void)

{
  if (DAT_14685b210 == 0) {
    FUN_141786440(&DAT_14685b210,&PTR_FUN_1440c23e0);
  }
  return DAT_14685b210;
}



// FUNCTION 1407a8fe0 FUN_1407a8fe0 body=47 status=ok
// SIG undefined FUN_1407a8fe0(void)

longlong FUN_1407a8fe0(void)

{
  if (DAT_14685b230 == 0) {
    FUN_141786440(&DAT_14685b230,&PTR_StaticClass_1440bf170);
  }
  return DAT_14685b230;
}



// FUNCTION 1407a9010 FUN_1407a9010 body=47 status=ok
// SIG undefined FUN_1407a9010(void)

longlong FUN_1407a9010(void)

{
  if (DAT_14685b240 == 0) {
    FUN_141786440(&DAT_14685b240,&PTR_FUN_1440bfae0);
  }
  return DAT_14685b240;
}



// FUNCTION 1407a9040 FUN_1407a9040 body=47 status=ok
// SIG undefined FUN_1407a9040(void)

longlong FUN_1407a9040(void)

{
  if (DAT_14685b250 == 0) {
    FUN_141786440(&DAT_14685b250,&PTR_FUN_1440bfd70);
  }
  return DAT_14685b250;
}



// FUNCTION 1407a9070 FUN_1407a9070 body=47 status=ok
// SIG undefined FUN_1407a9070(void)

longlong FUN_1407a9070(void)

{
  if (DAT_14685b260 == 0) {
    FUN_141786440(&DAT_14685b260,&PTR_GetPrivateStaticClass_1440c0810);
  }
  return DAT_14685b260;
}



// FUNCTION 1407a90a0 FUN_1407a90a0 body=47 status=ok
// SIG undefined FUN_1407a90a0(void)

longlong FUN_1407a90a0(void)

{
  if (DAT_14685b280 == 0) {
    FUN_141786440(&DAT_14685b280,&PTR_FUN_1440c0c90);
  }
  return DAT_14685b280;
}



// FUNCTION 1407a90d0 FUN_1407a90d0 body=47 status=ok
// SIG undefined FUN_1407a90d0(void)

longlong FUN_1407a90d0(void)

{
  if (DAT_14685b298 == 0) {
    FUN_141786440(&DAT_14685b298,&PTR_FUN_1440c1090);
  }
  return DAT_14685b298;
}



// FUNCTION 1407a9100 FUN_1407a9100 body=47 status=ok
// SIG undefined FUN_1407a9100(void)

longlong FUN_1407a9100(void)

{
  if (DAT_14685b2b8 == 0) {
    FUN_141786440(&DAT_14685b2b8,&PTR_FUN_1440c16d0);
  }
  return DAT_14685b2b8;
}



// FUNCTION 1407a9130 FUN_1407a9130 body=47 status=ok
// SIG undefined FUN_1407a9130(void)

longlong FUN_1407a9130(void)

{
  if (DAT_14685b2d8 == 0) {
    FUN_141786440(&DAT_14685b2d8,&PTR_FUN_1440c1990);
  }
  return DAT_14685b2d8;
}



// FUNCTION 1407a9160 FUN_1407a9160 body=47 status=ok
// SIG undefined FUN_1407a9160(void)

longlong FUN_1407a9160(void)

{
  if (DAT_14685b2c8 == 0) {
    FUN_141786440(&DAT_14685b2c8,&PTR_GetPrivateStaticClass_1440c1840);
  }
  return DAT_14685b2c8;
}



// FUNCTION 1407a9190 FUN_1407a9190 body=47 status=ok
// SIG undefined FUN_1407a9190(void)

longlong FUN_1407a9190(void)

{
  if (DAT_14685b2e8 == 0) {
    FUN_141786440(&DAT_14685b2e8,&PTR_GetPrivateStaticClass_1440c1b10);
  }
  return DAT_14685b2e8;
}



// FUNCTION 1407a91c0 FUN_1407a91c0 body=47 status=ok
// SIG undefined FUN_1407a91c0(void)

longlong FUN_1407a91c0(void)

{
  if (DAT_14685b2f8 == 0) {
    FUN_141786440(&DAT_14685b2f8,&PTR_GetPrivateStaticClass_1440c1ca0);
  }
  return DAT_14685b2f8;
}



// FUNCTION 1407a91f0 FUN_1407a91f0 body=47 status=ok
// SIG undefined FUN_1407a91f0(void)

longlong FUN_1407a91f0(void)

{
  if (DAT_14685b108 == 0) {
    FUN_141786440(&DAT_14685b108,&PTR_FUN_1440bef20);
  }
  return DAT_14685b108;
}



// FUNCTION 1407a9220 FUN_1407a9220 body=47 status=ok
// SIG undefined FUN_1407a9220(void)

longlong FUN_1407a9220(void)

{
  if (DAT_14685b118 == 0) {
    FUN_141786a30(&DAT_14685b118,&PTR_Z_Construct_UPackage__Script_Engine_14624a530);
  }
  return DAT_14685b118;
}



// FUNCTION 1407a9250 FUN_1407a9250 body=47 status=ok
// SIG undefined FUN_1407a9250(void)

longlong FUN_1407a9250(void)

{
  if (DAT_14685b120 == 0) {
    FUN_1417866a0(&DAT_14685b120,&PTR_Z_Construct_UPackage__Script_Engine_14624d890);
  }
  return DAT_14685b120;
}



// FUNCTION 1407a9280 FUN_1407a9280 body=47 status=ok
// SIG undefined FUN_1407a9280(void)

longlong FUN_1407a9280(void)

{
  if (DAT_14685b128 == 0) {
    FUN_1417866a0(&DAT_14685b128,&PTR_Z_Construct_UPackage__Script_Engine_14624d8e0);
  }
  return DAT_14685b128;
}



// FUNCTION 1407a92b0 FUN_1407a92b0 body=47 status=ok
// SIG undefined FUN_1407a92b0(void)

longlong FUN_1407a92b0(void)

{
  if (DAT_14685b290 == 0) {
    FUN_1417866a0(&DAT_14685b290,&PTR_Z_Construct_UPackage__Script_Engine_14624d930);
  }
  return DAT_14685b290;
}



// FUNCTION 1407a92e0 FUN_1407a92e0 body=47 status=ok
// SIG undefined FUN_1407a92e0(void)

longlong FUN_1407a92e0(void)

{
  if (DAT_14685b148 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685b148,&PTR_Z_Construct_UPackage__Script_Engine_14624a840);
  }
  return DAT_14685b148;
}



// FUNCTION 1407a9310 FUN_1407a9310 body=47 status=ok
// SIG undefined FUN_1407a9310(void)

longlong FUN_1407a9310(void)

{
  if (DAT_14685b138 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685b138,&PTR_Z_Construct_UPackage__Script_Engine_14624a6f0);
  }
  return DAT_14685b138;
}



// FUNCTION 1407a9340 FUN_1407a9340 body=47 status=ok
// SIG undefined FUN_1407a9340(void)

longlong FUN_1407a9340(void)

{
  if (DAT_14685b158 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685b158,&PTR_Z_Construct_UPackage__Script_Engine_14624aab0);
  }
  return DAT_14685b158;
}



// FUNCTION 1407a9370 FUN_1407a9370 body=47 status=ok
// SIG undefined FUN_1407a9370(void)

longlong FUN_1407a9370(void)

{
  if (DAT_14685b0c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685b0c0,&PTR_Z_Construct_UPackage__Script_Engine_146249a80);
  }
  return DAT_14685b0c0;
}



// FUNCTION 1407a93a0 FUN_1407a93a0 body=47 status=ok
// SIG undefined FUN_1407a93a0(void)

longlong FUN_1407a93a0(void)

{
  if (DAT_14685b0d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685b0d0,&PTR_Z_Construct_UPackage__Script_Engine_146249d00);
  }
  return DAT_14685b0d0;
}



// FUNCTION 1407a93d0 FUN_1407a93d0 body=47 status=ok
// SIG undefined FUN_1407a93d0(void)

longlong FUN_1407a93d0(void)

{
  if (DAT_14685b100 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685b100,&PTR_Z_Construct_UPackage__Script_Engine_14624a300);
  }
  return DAT_14685b100;
}



// FUNCTION 1407a9400 FUN_1407a9400 body=47 status=ok
// SIG undefined FUN_1407a9400(void)

longlong FUN_1407a9400(void)

{
  if (DAT_14685b0e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685b0e0,&PTR_Z_Construct_UPackage__Script_Engine_146249dd0);
  }
  return DAT_14685b0e0;
}



// FUNCTION 1407a9430 FUN_1407a9430 body=47 status=ok
// SIG undefined FUN_1407a9430(void)

longlong FUN_1407a9430(void)

{
  if (DAT_14685b0f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685b0f0,&PTR_Z_Construct_UPackage__Script_Engine_14624a2b0);
  }
  return DAT_14685b0f0;
}



// FUNCTION 1407a9460 FUN_1407a9460 body=47 status=ok
// SIG undefined FUN_1407a9460(void)

longlong FUN_1407a9460(void)

{
  if (DAT_14685b168 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685b168,&PTR_Z_Construct_UPackage__Script_Engine_14624acf0);
  }
  return DAT_14685b168;
}



// FUNCTION 1407a9490 FUN_1407a9490 body=47 status=ok
// SIG undefined FUN_1407a9490(void)

longlong FUN_1407a9490(void)

{
  if (DAT_14685b1b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685b1b8,&PTR_Z_Construct_UPackage__Script_Engine_14624bc30);
  }
  return DAT_14685b1b8;
}



// FUNCTION 1407a94c0 FUN_1407a94c0 body=47 status=ok
// SIG undefined FUN_1407a94c0(void)

longlong FUN_1407a94c0(void)

{
  if (DAT_14685b228 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685b228,&PTR_Z_Construct_UPackage__Script_Engine_14624c2f0);
  }
  return DAT_14685b228;
}



// FUNCTION 1407a94f0 FUN_1407a94f0 body=47 status=ok
// SIG undefined FUN_1407a94f0(void)

longlong FUN_1407a94f0(void)

{
  if (DAT_14685b2b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685b2b0,&PTR_Z_Construct_UPackage__Script_Engine_14624d380);
  }
  return DAT_14685b2b0;
}



// FUNCTION 1407a9520 FUN_1407a9520 body=47 status=ok
// SIG undefined FUN_1407a9520(void)

longlong FUN_1407a9520(void)

{
  if (DAT_14685b278 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685b278,&PTR_Z_Construct_UPackage__Script_Engine_14624d020);
  }
  return DAT_14685b278;
}



// FUNCTION 1407a9570 execOnMovementModeChange body=256 status=ok
// SIG undefined execOnMovementModeChange(void)

void UAbilityTask_WaitMovementModeChange::execOnMovementModeChange
               (undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14073ea10(param_1,local_18[0],local_res10[0],local_res20[0]);
  return;
}



// FUNCTION 1407a9690 FUN_1407a9690 body=127 status=ok
// SIG undefined FUN_1407a9690(void)

void FUN_1407a9690(longlong param_1,longlong param_2)

{
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x900) = local_res8;
  return;
}



// FUNCTION 1407a9710 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1d8;
    *puVar1 = &PTR_FUN_1440c90d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1407a9760 FUN_1407a9760 body=162 status=ok
// SIG undefined FUN_1407a9760(void)

longlong FUN_1407a9760(void)

{
  if (DAT_14685b448 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_AttackerCountAgainstTarget",&DAT_14685b448,
                  FUN_140447710,0x1d8,0x10000000,0,L"Engine",&LAB_1407ab860,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b448;
}



// FUNCTION 1407a9820 FUN_1407a9820 body=162 status=ok
// SIG undefined FUN_1407a9820(void)

longlong FUN_1407a9820(void)

{
  if (DAT_14685b458 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_BlackboardKey",&DAT_14685b458,FUN_140447710,0x1e8,
                  0x10000000,0,L"Engine",&LAB_1407ab870,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b458;
}



// FUNCTION 1407a98e0 FUN_1407a98e0 body=162 status=ok
// SIG undefined FUN_1407a98e0(void)

longlong FUN_1407a98e0(void)

{
  if (DAT_14685b468 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_Boundary",&DAT_14685b468,FUN_140447710,0x208,
                  0x10000000,0,L"Engine",&LAB_1407ab880,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b468;
}



// FUNCTION 1407a99a0 FUN_1407a99a0 body=162 status=ok
// SIG undefined FUN_1407a99a0(void)

longlong FUN_1407a99a0(void)

{
  if (DAT_14685b508 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_PetModifier",&DAT_14685b508,FUN_140447710,0x1e8,
                  0x10000000,0,L"Engine",&LAB_1407ab940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b508;
}



// FUNCTION 1407a9a50 FUN_1407a9a50 body=162 status=ok
// SIG undefined FUN_1407a9a50(void)

longlong FUN_1407a9a50(void)

{
  if (DAT_14685b478 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_CoverCurrent",&DAT_14685b478,FUN_140447710,0x1d8,
                  0x10000000,0,L"Engine",&LAB_1407ab8a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b478;
}



// FUNCTION 1407a9b20 FUN_1407a9b20 body=162 status=ok
// SIG undefined FUN_1407a9b20(void)

longlong FUN_1407a9b20(void)

{
  if (DAT_14685b488 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_CoverExposure",&DAT_14685b488,FUN_140447710,0x210,
                  0x10000000,0,L"Engine",&LAB_1407ab8b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b488;
}



// FUNCTION 1407a9bd0 FUN_1407a9bd0 body=162 status=ok
// SIG undefined FUN_1407a9bd0(void)

longlong FUN_1407a9bd0(void)

{
  if (DAT_14685b518 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_PetOwnerDistance",&DAT_14685b518,FUN_140447710,
                  0x210,0x10000000,0,L"Engine",&LAB_1407ab950,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b518;
}



// FUNCTION 1407a9ca0 FUN_1407a9ca0 body=162 status=ok
// SIG undefined FUN_1407a9ca0(void)

longlong FUN_1407a9ca0(void)

{
  if (DAT_14685b498 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_CoverView",&DAT_14685b498,FUN_140447710,0x210,
                  0x10000000,0,L"Engine",&LAB_1407ab8c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b498;
}



// FUNCTION 1407a9d50 FUN_1407a9d50 body=162 status=ok
// SIG undefined FUN_1407a9d50(void)

longlong FUN_1407a9d50(void)

{
  if (DAT_14685b528 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_StandardCover",&DAT_14685b528,FUN_140447710,0x330,
                  0x10000000,0,L"Engine",&LAB_1407ab960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b528;
}



// FUNCTION 1407a9e10 FUN_1407a9e10 body=162 status=ok
// SIG undefined FUN_1407a9e10(void)

longlong FUN_1407a9e10(void)

{
  if (DAT_14685b4a8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_CurrentTarget",&DAT_14685b4a8,FUN_140447710,0x1d8,
                  0x10000000,0,L"Engine",&LAB_1407ab8d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b4a8;
}



// FUNCTION 1407a9ee0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryTest_Cover::StaticClass(void)

{
  if (DAT_14685b4b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_CustomScoringBoost",&DAT_14685b4b8,FUN_140447710,
                  0x1f8,0x10000000,0,L"Engine",&LAB_1407ab8e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b4b8;
}



// FUNCTION 1407a9f90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimMontage::GetPrivateStaticClass(void)

{
  if (DAT_14685b538 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_TacticalCover",&DAT_14685b538,FUN_140447710,0x1e0,
                  0x10000000,0,L"Engine",&LAB_1407ab970,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b538;
}



// FUNCTION 1407aa060 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimMontage::GetPrivateStaticClass(void)

{
  if (DAT_14685b548 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_TargetIsAttackingMyMaster",&DAT_14685b548,
                  FUN_140447710,0x1e0,0x10000000,0,L"Engine",&LAB_1407ab980,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b548;
}



// FUNCTION 1407aa110 FUN_1407aa110 body=162 status=ok
// SIG undefined FUN_1407aa110(void)

longlong FUN_1407aa110(void)

{
  if (DAT_14685b4c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_DirectPath",&DAT_14685b4c8,FUN_140447710,0x1e8,
                  0x10000000,0,L"Engine",&LAB_1407ab8f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b4c8;
}



// FUNCTION 1407aa1c0 FUN_1407aa1c0 body=162 status=ok
// SIG undefined FUN_1407aa1c0(void)

longlong FUN_1407aa1c0(void)

{
  if (DAT_14685b5e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIResource_ScriptedAction",&DAT_14685b5e8,FUN_140447710,0x38,
                  0x10000004,0,L"Game",InternalConstructor<UAIResource_Logic>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGameplayTaskResource::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685b5e8;
}



// FUNCTION 1407aa290 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UCompositionGraphCaptureProtocol::StaticClass(void)

{
  if (DAT_14685b600 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"GameplayTask_ScriptedAction",&DAT_14685b600,FUN_1407ac0e0,0xc0,
                  0x10000004,0,L"Game",&LAB_1407aba10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGameplayTask::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14685b600;
}



// FUNCTION 1407aa340 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimMontage::GetPrivateStaticClass(void)

{
  if (DAT_14685b4d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_GbxPath",&DAT_14685b4d8,FUN_140447710,0x1e0,
                  0x10000000,0,L"Engine",&LAB_1407ab900,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b4d8;
}



// FUNCTION 1407aa400 FUN_1407aa400 body=162 status=ok
// SIG undefined FUN_1407aa400(void)

longlong FUN_1407aa400(void)

{
  if (DAT_14685b4e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"EnvQueryTest_IsInGodMode",&DAT_14685b4e8,FUN_140447710,0x1d8,
                  0x10000000,0,L"Engine",&LAB_1407ab920,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407a8950,&LAB_140447700,0);
  }
  return DAT_14685b4e8;
}



// FUNCTION 1407aa4c0 FUN_1407aa4c0 body=47 status=ok
// SIG undefined FUN_1407aa4c0(void)

longlong FUN_1407aa4c0(void)

{
  if (DAT_14685b5f8 == 0) {
    FUN_141786440(&DAT_14685b5f8,&PTR_StaticClass_1440c6080);
  }
  return DAT_14685b5f8;
}



// FUNCTION 1407aa4f0 FUN_1407aa4f0 body=47 status=ok
// SIG undefined FUN_1407aa4f0(void)

longlong FUN_1407aa4f0(void)

{
  if (DAT_14685b5f0 == 0) {
    FUN_141786a30(&DAT_14685b5f0,&PTR_FUN_14624ef30);
  }
  return DAT_14685b5f0;
}



// FUNCTION 1407aa540 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAITask_RunEQS::GetPrivateStaticClass(void)

{
  if (DAT_14685b628 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"GameplayTask_ScriptedCover",&DAT_14685b628,FUN_1407ac110,0xe8,
                  0x10000004,0,L"Game",&LAB_1407aba30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UCompositionGraphCaptureProtocol::StaticClass,&LAB_140447700,0);
  }
  return DAT_14685b628;
}



// FUNCTION 1407aa5f0 FUN_1407aa5f0 body=47 status=ok
// SIG undefined FUN_1407aa5f0(void)

longlong FUN_1407aa5f0(void)

{
  if (DAT_14685b608 == 0) {
    FUN_141786a30(&DAT_14685b608,&PTR_FUN_14624f0e0);
  }
  return DAT_14685b608;
}



// FUNCTION 1407aa620 FUN_1407aa620 body=47 status=ok
// SIG undefined FUN_1407aa620(void)

longlong FUN_1407aa620(void)

{
  if (DAT_14685b620 == 0) {
    FUN_141786440(&DAT_14685b620,&PTR_GetPrivateStaticClass_1440c6380);
  }
  return DAT_14685b620;
}



// FUNCTION 1407aa650 FUN_1407aa650 body=47 status=ok
// SIG undefined FUN_1407aa650(void)

longlong FUN_1407aa650(void)

{
  if (DAT_14685b610 == 0) {
    FUN_141786a30(&DAT_14685b610,&PTR_FUN_14624f1e0);
  }
  return DAT_14685b610;
}



// FUNCTION 1407aa680 FUN_1407aa680 body=47 status=ok
// SIG undefined FUN_1407aa680(void)

longlong FUN_1407aa680(void)

{
  if (DAT_14685b618 == 0) {
    FUN_141786a30(&DAT_14685b618,&PTR_FUN_14624f260);
  }
  return DAT_14685b618;
}


