// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142bbc0c0 FUN_142bbc0c0 body=232 status=ok
// SIG undefined FUN_142bbc0c0(void)

ulonglong FUN_142bbc0c0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar4 = FUN_142bbe2b0();
  if (lVar4 == 0) {
    return 0;
  }
  bVar3 = FUN_142bbd6b0(lVar4,param_2 + 0x10);
  uVar5 = FUN_142bbd600(lVar4,bVar3);
  uVar6 = uVar5;
  if ((uVar5 != 0) && (*(longlong *)(uVar5 + 8) != 0)) {
    uVar2 = *(ulonglong *)(*(longlong *)(uVar5 + 8) + 0x10);
    uVar6 = UBlackboardKeyType_Bool::GetPrivateStaticClass();
    if (uVar2 == uVar6) {
      if ((*(int *)(lVar4 + 400) == 0) || (*(int *)(lVar4 + 0x1a0) <= (int)(uint)bVar3)) {
        lVar4 = 0;
      }
      else {
        lVar4 = (ulonglong)*(ushort *)(*(longlong *)(lVar4 + 0x198) + (ulonglong)bVar3 * 2) +
                *(longlong *)(lVar4 + 0x188);
      }
      uVar6 = (ulonglong)(*(byte *)(*(longlong *)(uVar5 + 8) + 0x2b) >> 1 & 1);
      pcVar1 = (char *)(lVar4 + uVar6 * 4);
      if (pcVar1 != (char *)0x0) {
        return (ulonglong)(*pcVar1 != '\0');
      }
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 142bbc1b0 FUN_142bbc1b0 body=272 status=ok
// SIG undefined FUN_142bbc1b0(void)

undefined8 FUN_142bbc1b0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  lVar3 = FUN_142bbe2b0();
  if (lVar3 == 0) {
    return 0;
  }
  bVar2 = FUN_142bbd6b0(lVar3,param_2 + 0x10);
  lVar4 = FUN_142bbd600(lVar3);
  if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
     (lVar7 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10),
     lVar5 = UBlackboardKeyType_Class::GetPrivateStaticClass(), lVar7 == lVar5)) {
    lVar7 = 0;
    if ((*(int *)(lVar3 + 400) != 0) && ((int)(uint)bVar2 < *(int *)(lVar3 + 0x1a0))) {
      lVar7 = (ulonglong)*(ushort *)(*(longlong *)(lVar3 + 0x198) + (ulonglong)bVar2 * 2) +
              *(longlong *)(lVar3 + 0x188);
    }
    puVar1 = (undefined4 *)
             (lVar7 + (ulonglong)(*(byte *)(*(longlong *)(lVar4 + 8) + 0x2b) >> 1 & 1) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      local_res18 = *puVar1;
      local_res1c = puVar1[1];
      uVar6 = FWeakObjectPtr::Get(&local_res18);
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 142bbc2c0 FUN_142bbc2c0 body=229 status=ok
// SIG undefined FUN_142bbc2c0(void)

ulonglong FUN_142bbc2c0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar4 = FUN_142bbe2b0();
  if (lVar4 == 0) {
    return 0;
  }
  bVar3 = FUN_142bbd6b0(lVar4,param_2 + 0x10);
  uVar5 = FUN_142bbd600(lVar4,bVar3);
  uVar6 = uVar5;
  if ((uVar5 != 0) && (*(longlong *)(uVar5 + 8) != 0)) {
    uVar2 = *(ulonglong *)(*(longlong *)(uVar5 + 8) + 0x10);
    uVar6 = UBlackboardKeyType_Enum::GetPrivateStaticClass();
    if (uVar2 == uVar6) {
      if ((*(int *)(lVar4 + 400) == 0) || (*(int *)(lVar4 + 0x1a0) <= (int)(uint)bVar3)) {
        lVar4 = 0;
      }
      else {
        lVar4 = (ulonglong)*(ushort *)(*(longlong *)(lVar4 + 0x198) + (ulonglong)bVar3 * 2) +
                *(longlong *)(lVar4 + 0x188);
      }
      uVar6 = (ulonglong)(*(byte *)(*(longlong *)(uVar5 + 8) + 0x2b) >> 1 & 1);
      pbVar1 = (byte *)(lVar4 + uVar6 * 4);
      if (pbVar1 != (byte *)0x0) {
        return (ulonglong)*pbVar1;
      }
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 142bbc3b0 FUN_142bbc3b0 body=234 status=ok
// SIG undefined FUN_142bbc3b0(void)

undefined4 FUN_142bbc3b0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = FUN_142bbe2b0();
  if (lVar4 == 0) {
    return 0;
  }
  bVar3 = FUN_142bbd6b0(lVar4,param_2 + 0x10);
  lVar5 = FUN_142bbd600(lVar4,bVar3);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10);
    lVar6 = UBlackboardKeyType_Float::GetPrivateStaticClass();
    if (lVar2 == lVar6) {
      if ((*(int *)(lVar4 + 400) == 0) || (*(int *)(lVar4 + 0x1a0) <= (int)(uint)bVar3)) {
        lVar4 = 0;
      }
      else {
        lVar4 = (ulonglong)*(ushort *)(*(longlong *)(lVar4 + 0x198) + (ulonglong)bVar3 * 2) +
                *(longlong *)(lVar4 + 0x188);
      }
      puVar1 = (undefined4 *)
               (lVar4 + (ulonglong)(*(byte *)(*(longlong *)(lVar5 + 8) + 0x2b) >> 1 & 1) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        return *puVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 142bbc4a0 FUN_142bbc4a0 body=241 status=ok
// SIG undefined FUN_142bbc4a0(void)

undefined4 FUN_142bbc4a0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = FUN_142bbe2b0();
  if (lVar3 == 0) {
    return 0;
  }
  bVar2 = FUN_142bbd6b0(lVar3,param_2 + 0x10);
  lVar4 = FUN_142bbd600(lVar3);
  if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
     (lVar6 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10),
     lVar5 = UBlackboardKeyType_Int::GetPrivateStaticClass(), lVar6 == lVar5)) {
    lVar6 = 0;
    if ((*(int *)(lVar3 + 400) != 0) && ((int)(uint)bVar2 < *(int *)(lVar3 + 0x1a0))) {
      lVar6 = (ulonglong)*(ushort *)(*(longlong *)(lVar3 + 0x198) + (ulonglong)bVar2 * 2) +
              *(longlong *)(lVar3 + 0x188);
    }
    puVar1 = (undefined4 *)
             (lVar6 + (ulonglong)(*(byte *)(*(longlong *)(lVar4 + 8) + 0x2b) >> 1 & 1) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      return *puVar1;
    }
  }
  return 0;
}



// FUNCTION 142bbc5a0 FUN_142bbc5a0 body=259 status=ok
// SIG undefined FUN_142bbc5a0(void)

undefined8 * FUN_142bbc5a0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = FUN_142bbe2b0(param_2);
  if (lVar4 == 0) {
    *param_1 = 0;
    return param_1;
  }
  bVar3 = FUN_142bbd6b0(lVar4,param_3 + 0x10);
  lVar5 = FUN_142bbd600(lVar4);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10);
    lVar6 = FUN_142c35df0();
    if (lVar2 == lVar6) {
      if ((*(int *)(lVar4 + 400) == 0) || (*(int *)(lVar4 + 0x1a0) <= (int)(uint)bVar3)) {
        lVar4 = 0;
      }
      else {
        lVar4 = (ulonglong)*(ushort *)(*(longlong *)(lVar4 + 0x198) + (ulonglong)bVar3 * 2) +
                *(longlong *)(lVar4 + 0x188);
      }
      puVar1 = (undefined8 *)
               (lVar4 + (ulonglong)(*(byte *)(*(longlong *)(lVar5 + 8) + 0x2b) >> 1 & 1) * 4);
      if (puVar1 != (undefined8 *)0x0) {
        *param_1 = *puVar1;
        return param_1;
      }
    }
  }
  *param_1 = DAT_146b2c588;
  return param_1;
}



// FUNCTION 142bbc6b0 FUN_142bbc6b0 body=272 status=ok
// SIG undefined FUN_142bbc6b0(void)

undefined8 FUN_142bbc6b0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  lVar3 = FUN_142bbe2b0();
  if (lVar3 == 0) {
    return 0;
  }
  bVar2 = FUN_142bbd6b0(lVar3,param_2 + 0x10);
  lVar4 = FUN_142bbd600(lVar3);
  if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
     (lVar7 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10),
     lVar5 = UBlackboardKeyType_Object::GetPrivateStaticClass(), lVar7 == lVar5)) {
    lVar7 = 0;
    if ((*(int *)(lVar3 + 400) != 0) && ((int)(uint)bVar2 < *(int *)(lVar3 + 0x1a0))) {
      lVar7 = (ulonglong)*(ushort *)(*(longlong *)(lVar3 + 0x198) + (ulonglong)bVar2 * 2) +
              *(longlong *)(lVar3 + 0x188);
    }
    puVar1 = (undefined4 *)
             (lVar7 + (ulonglong)(*(byte *)(*(longlong *)(lVar4 + 8) + 0x2b) >> 1 & 1) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      local_res18 = *puVar1;
      local_res1c = puVar1[1];
      uVar6 = FWeakObjectPtr::Get(&local_res18);
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 142bbc7c0 FUN_142bbc7c0 body=341 status=ok
// SIG undefined FUN_142bbc7c0(void)

undefined8 * FUN_142bbc7c0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  lVar4 = FUN_142bbe2b0(param_2);
  if (lVar4 == 0) {
    local_14 = DAT_1468b5da8;
    puVar7 = &local_1c;
    local_1c = DAT_1468b5da0;
  }
  else {
    bVar3 = FUN_142bbd6b0(lVar4,param_3 + 0x10);
    lVar5 = FUN_142bbd600(lVar4,bVar3);
    local_1c = DAT_146b2c590;
    local_14 = DAT_146b2c598;
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10), lVar6 = FUN_142c361d0(),
       local_1c = DAT_146b2c590, local_14 = DAT_146b2c598, lVar2 == lVar6)) {
      if ((*(int *)(lVar4 + 400) == 0) || (*(int *)(lVar4 + 0x1a0) <= (int)(uint)bVar3)) {
        lVar4 = 0;
      }
      else {
        lVar4 = (ulonglong)*(ushort *)(*(longlong *)(lVar4 + 0x198) + (ulonglong)bVar3 * 2) +
                *(longlong *)(lVar4 + 0x188);
      }
      puVar7 = (undefined8 *)
               (lVar4 + (ulonglong)(*(byte *)(*(longlong *)(lVar5 + 8) + 0x2b) >> 1 & 1) * 4);
      if (puVar7 != (undefined8 *)0x0) {
        local_1c = *puVar7;
        local_14 = *(undefined4 *)(puVar7 + 1);
      }
    }
    local_20 = local_14;
    puVar7 = &local_28;
    local_28 = local_1c;
  }
  uVar1 = *(undefined4 *)(puVar7 + 1);
  *param_1 = *puVar7;
  *(undefined4 *)(param_1 + 1) = uVar1;
  return param_1;
}



// FUNCTION 142bbc920 GetBlackboardValueAsString body=201 status=ok
// SIG undefined GetBlackboardValueAsString(void)

longlong *
UBTFunctionLibrary::GetBlackboardValueAsString
          (longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong local_28 [4];
  
  lVar3 = 0;
  lVar2 = FUN_142bbe2b0(param_2);
  bVar5 = lVar2 == 0;
  if (bVar5) {
    local_28[1] = 0;
    plVar4 = local_28;
  }
  else {
    uVar1 = FUN_142bbd6b0(lVar2,param_3 + 0x10);
    FUN_142bae420(lVar2,local_28 + 2,uVar1);
    plVar4 = local_28 + 2;
    lVar3 = local_28[2];
  }
  *param_1 = lVar3;
  *plVar4 = 0;
  *(int *)(param_1 + 1) = (int)plVar4[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  if (bVar5) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar5) && (local_28[2] != 0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142bbc9f0 GetBlackboardValueAsVector body=130 status=ok
// SIG undefined GetBlackboardValueAsVector(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
UBTFunctionLibrary::GetBlackboardValueAsVector
          (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar2 = FUN_142bbe2b0(param_2);
  if (lVar2 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    uVar1 = FUN_142bbd6b0(lVar2,param_3 + 0x10);
    FUN_140725750(lVar2,&local_18,uVar1);
  }
  *param_1 = local_18;
  *(undefined4 *)(param_1 + 1) = local_10;
  return param_1;
}



// FUNCTION 142bbca80 GetChildIndex body=55 status=ok
// SIG undefined GetChildIndex(void)

ulonglong UBTCompositeNode::GetChildIndex(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    plVar1 = *(longlong **)(param_1 + 0x58);
    uVar3 = uVar2;
    do {
      if ((*plVar1 == param_2) || (plVar1[1] == param_2)) {
        return uVar3;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 6;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x60));
  }
  return 0xfffffffe;
}



// FUNCTION 142bbcac0 FUN_142bbcac0 body=32 status=ok
// SIG undefined FUN_142bbcac0(void)

undefined8 FUN_142bbcac0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x178), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x490);
  }
  return 0;
}



// FUNCTION 142bbcae0 FUN_142bbcae0 body=98 status=ok
// SIG undefined FUN_142bbcae0(void)

undefined8 FUN_142bbcae0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x150), lVar1 != 0)) {
    lVar3 = FUN_142c32730();
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
      return *(undefined8 *)(lVar1 + 0x98);
    }
  }
  return 0;
}



// FUNCTION 142bbcb50 FUN_142bbcb50 body=140 status=ok
// SIG undefined FUN_142bbcb50(void)

undefined8 * FUN_142bbcb50(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x550) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x550) + 0x428))();
    if (cVar1 != '\0') {
      *param_2 = 0;
      param_2[1] = 0x30;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy
                (*param_2,L"/Engine/EngineResources/AICON-Green.AICON-Green",0x60);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0x2c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"/Engine/EngineResources/AICON-Red.AICON-Red",0x58);
  return param_2;
}



// FUNCTION 142bbcbe0 FUN_142bbcbe0 body=1004 status=ok
// SIG undefined FUN_142bbcbe0(void)

longlong * FUN_142bbcbe0(longlong param_1,longlong *param_2)

{
  void *_Dst;
  size_t _Size;
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  uint uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  void *pvVar12;
  int local_res18;
  longlong local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  void *local_88;
  ulonglong local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  longlong local_58 [3];
  
  *param_2 = 0;
  param_2[1] = 0;
  local_res18 = 0;
  if (0 < *(int *)(param_1 + 0x1e0)) {
    local_b8 = 0;
    do {
      lVar9 = *(longlong *)(param_1 + 0x1d8) + local_b8;
      lVar11 = *(longlong *)
                ((ulonglong)*(byte *)(lVar9 + 0x48) * 0x38 + *(longlong *)(param_1 + 0x1e8));
      if (lVar11 == 0) {
        local_98 = (undefined2 *)0x0;
        local_90 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        FGenericPlatformString::Memcpy(local_98,&DAT_143f3edc8,10);
      }
      else {
        local_b0 = *(undefined8 *)(lVar11 + 0x18);
        FName::ToString(&local_b0,&local_98);
      }
      puVar10 = &DAT_143f3eda8;
      if ((int)local_90 != 0) {
        puVar10 = local_98;
      }
      FString::PrintfImpl(&local_68,L"Behavior tree: %s\n",puVar10);
      pvVar7 = local_68;
      if (local_60 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = local_60 + -1;
      }
      if (iVar4 != 0) {
        iVar5 = (int)param_2[1];
        iVar2 = (uint)(iVar5 == 0) + iVar5 + iVar4;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
        }
        pvVar12 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar12,pvVar7,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar12) = 0;
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if (local_98 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      lVar11 = *(longlong *)(lVar9 + 0x10);
      pvVar6 = (void *)0x0;
      pvVar7 = pvVar6;
      pvVar12 = pvVar6;
      if (lVar11 != 0) {
        do {
          pvVar7 = (void *)0x0;
          puVar3 = (undefined8 *)
                   FUN_142bbe6d0(lVar11,local_58,param_1,
                                 (ulonglong)*(ushort *)(lVar11 + 0x52) + *(longlong *)(lVar9 + 0x38)
                                 ,0);
          if (*(int *)(puVar3 + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*puVar3;
          }
          FString::PrintfImpl(&local_78,L"  %s\n",puVar10);
          uVar1 = (uint)local_70;
          iVar4 = (int)pvVar6;
          if ((int)(uint)local_70 < 2) {
            local_88 = (void *)0x0;
            local_80 = CONCAT44(local_80._4_4_,iVar4);
            if (iVar4 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,pvVar6,0);
              pvVar7 = local_88;
              _guard_xfg_dispatch_icall_nop(local_88,pvVar12,(longlong)iVar4 * 2);
              pvVar6 = (void *)(local_80 & 0xffffffff);
            }
          }
          else {
            iVar5 = iVar4 + -1;
            if (iVar4 == 0) {
              iVar5 = 0;
            }
            if (((uint)local_70 != 0) || (iVar4 = 1, iVar5 == 0)) {
              iVar4 = 0;
            }
            local_a0._0_4_ = (uint)local_70;
            iVar2 = local_70._4_4_;
            local_a8 = local_78;
            iVar4 = iVar4 + (uint)local_70;
            local_78 = (void *)0x0;
            local_a0._4_4_ = local_70._4_4_;
            local_70 = 0;
            if (iVar2 < iVar4 + iVar5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8);
              uVar1 = (uint)local_a0;
            }
            pvVar6 = (void *)(ulonglong)uVar1;
            pvVar7 = local_a8;
            if (iVar5 != 0) {
              uVar8 = uVar1 + (uVar1 == 0) + iVar5;
              local_a0 = CONCAT44(local_a0._4_4_,uVar8);
              if (local_a0._4_4_ < (int)uVar8) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,pvVar6,0);
                uVar8 = (uint)local_a0;
              }
              pvVar7 = local_a8;
              pvVar6 = (void *)(ulonglong)uVar8;
              _Dst = (void *)((longlong)local_a8 +
                             ((longlong)(int)uVar1 - (ulonglong)(uVar1 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(_Dst,pvVar12,(longlong)iVar5 * 2);
              *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
            }
            local_a8 = (void *)0x0;
            local_a0 = 0;
          }
          if (pvVar12 != (void *)0x0) {
            FMemory::Free(pvVar12);
          }
          local_88 = (void *)0x0;
          local_80 = 0;
          if (local_78 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          lVar11 = *(longlong *)(lVar11 + 0x48);
          pvVar12 = pvVar7;
        } while (lVar11 != 0);
        iVar4 = (int)pvVar6;
        if ((iVar4 != 0) && (iVar4 + -1 != 0)) {
          iVar5 = (int)param_2[1];
          iVar2 = (uint)(iVar5 == 0) + iVar4 + -1 + iVar5;
          *(int *)(param_2 + 1) = iVar2;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
          }
          pvVar12 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
          _Size = (longlong)iVar4 * 2 - 2;
          _guard_xfg_dispatch_icall_nop(pvVar12,pvVar7,_Size);
          *(undefined2 *)((longlong)pvVar12 + _Size) = 0;
        }
      }
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      local_res18 = local_res18 + 1;
      local_b8 = local_b8 + 0x60;
    } while (local_res18 < *(int *)(param_1 + 0x1e0));
  }
  return param_2;
}



// FUNCTION 142bbcfd0 FUN_142bbcfd0 body=300 status=ok
// SIG undefined FUN_142bbcfd0(void)

undefined8 * FUN_142bbcfd0(longlong *param_1,float param_2,undefined8 param_3)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *in_RDX;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 local_38 [32];
  
  fVar2 = DAT_146690f28;
  *in_RDX = CONCAT44(DAT_146690f20._4_4_,(float)DAT_146690f20);
  *(float *)(in_RDX + 1) = fVar2;
  iVar3 = (int)param_1[0xa7] + -1;
  if (-1 < iVar3) {
    lVar8 = (longlong)iVar3 * 0x14;
    lVar9 = (longlong)iVar3;
    do {
      lVar7 = param_1[0xa6] + lVar8;
      lVar5 = FWeakObjectPtr::Get(lVar7,param_2,param_3);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x8a0))(param_1,local_38);
        uVar10 = *puVar6;
        uVar4 = *(undefined4 *)(puVar6 + 1);
LAB_142bbd0d4:
        *in_RDX = uVar10;
        *(undefined4 *)(in_RDX + 1) = uVar4;
        return in_RDX;
      }
      param_2 = *(float *)(lVar7 + 8);
      if ((((-(float)DAT_146690f20 < param_2) && (param_2 < (float)DAT_146690f20)) &&
          (param_2 = *(float *)(lVar7 + 0xc), -DAT_146690f20._4_4_ < param_2)) &&
         (((param_2 < DAT_146690f20._4_4_ &&
           (param_2 = *(float *)(lVar7 + 0x10), -DAT_146690f28 < param_2)) &&
          (param_2 < DAT_146690f28)))) {
        uVar10 = *(undefined8 *)(lVar7 + 8);
        uVar4 = *(undefined4 *)(lVar7 + 0x10);
        goto LAB_142bbd0d4;
      }
      lVar8 = lVar8 + -0x14;
      bVar1 = 0 < lVar9;
      param_3 = 0;
      lVar9 = lVar9 + -1;
    } while (bVar1);
  }
  return in_RDX;
}



// FUNCTION 142bbd100 FUN_142bbd100 body=150 status=ok
// SIG undefined FUN_142bbd100(void)

undefined8 * FUN_142bbd100(longlong *param_1,undefined8 *param_2,byte param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_18 [16];
  
  uVar2 = DAT_146690f28;
  *param_2 = DAT_146690f20;
  *(undefined4 *)(param_2 + 1) = uVar2;
  if ((int)(uint)param_3 < (int)param_1[0xa7]) {
    lVar1 = param_1[0xa6] + (ulonglong)param_3 * 0x14;
    lVar3 = FWeakObjectPtr::Get(lVar1);
    if (lVar3 == 0) {
      uVar5 = *(undefined8 *)(lVar1 + 8);
      uVar2 = *(undefined4 *)(lVar1 + 0x10);
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x8a0))(param_1,local_18,lVar3);
      uVar5 = *puVar4;
      uVar2 = *(undefined4 *)(puVar4 + 1);
    }
    *param_2 = uVar5;
    *(undefined4 *)(param_2 + 1) = uVar2;
  }
  return param_2;
}



// FUNCTION 142bbd1a0 FUN_142bbd1a0 body=156 status=ok
// SIG undefined FUN_142bbd1a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142bbd1a0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = DAT_146690f20;
  uVar2 = DAT_146690f28;
  if ((param_3 != 0) &&
     (lVar1 = *(longlong *)(param_3 + 0x168), uVar3 = _DAT_1468b5d90, uVar2 = DAT_1468b5d98,
     lVar1 != 0)) {
    uVar3 = *(undefined8 *)(lVar1 + 0x220);
    uVar2 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar2;
  return param_2;
}



// FUNCTION 142bbd240 FUN_142bbd240 body=251 status=ok
// SIG undefined FUN_142bbd240(void)

longlong FUN_142bbd240(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x538) + -1;
  if (iVar2 < 0) {
    return 0;
  }
  lVar5 = (longlong)iVar2 * 0x14;
  lVar4 = (longlong)iVar2;
  while( true ) {
    lVar6 = *(longlong *)(param_1 + 0x530) + lVar5;
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if (lVar3 != 0) {
      return lVar3;
    }
    if ((((-(float)DAT_146690f20 < *(float *)(lVar6 + 8)) &&
         (*(float *)(lVar6 + 8) < (float)DAT_146690f20)) &&
        (-DAT_146690f20._4_4_ < *(float *)(lVar6 + 0xc))) &&
       (((*(float *)(lVar6 + 0xc) < DAT_146690f20._4_4_ &&
         (-DAT_146690f28 < *(float *)(lVar6 + 0x10))) && (*(float *)(lVar6 + 0x10) < DAT_146690f28))
       )) break;
    lVar5 = lVar5 + -0x14;
    bVar1 = lVar4 < 1;
    lVar4 = lVar4 + -1;
    if (bVar1) {
      return 0;
    }
  }
  return 0;
}



// FUNCTION 142bbd340 FUN_142bbd340 body=234 status=ok
// SIG undefined FUN_142bbd340(void)

undefined8 FUN_142bbd340(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    lVar3 = UAITask::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(longlong *)(param_2 + 0x68) != 0) {
        return *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x488);
      }
    }
    else {
      lVar3 = FWeakObjectPtr::Get(param_2 + 0x58);
      if (lVar3 != 0) {
        uVar4 = (**(code **)(*(longlong *)(lVar3 + 0x178) + 0x20))
                          ((longlong *)(lVar3 + 0x178),param_2);
        return uVar4;
      }
    }
    return 0;
  }
  if ((*(byte *)(param_1 + 0x2d) & 1) == 0) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + -8);
  if (lVar3 != 0) {
    lVar2 = UProgressBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142bbd395;
  }
  lVar3 = 0;
LAB_142bbd395:
  return *(undefined8 *)(lVar3 + 0x188);
}



// FUNCTION 142bbd430 FUN_142bbd430 body=219 status=ok
// SIG undefined FUN_142bbd430(void)

undefined8 FUN_142bbd430(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    lVar3 = UAITask::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(undefined8 *)(param_2 + 0x68);
    }
    lVar3 = FWeakObjectPtr::Get(param_2 + 0x58);
    if (lVar3 != 0) {
      uVar4 = (**(code **)(*(longlong *)(lVar3 + 0x178) + 0x18))
                        ((longlong *)(lVar3 + 0x178),param_2);
      return uVar4;
    }
    return 0;
  }
  if ((*(byte *)(param_1 + 0x2d) & 1) == 0) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + -8);
  if (lVar3 != 0) {
    lVar2 = UProgressBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142bbd485;
  }
  lVar3 = 0;
LAB_142bbd485:
  return *(undefined8 *)(lVar3 + 0x188);
}



// FUNCTION 142bbd510 FUN_142bbd510 body=113 status=ok
// SIG undefined FUN_142bbd510(void)

void FUN_142bbd510(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    lVar2 = UAITask::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(param_2 + 0x68) != 0)) {
      plVar3 = (longlong *)(*(longlong *)(param_2 + 0x68) + 0x510);
                    /* WARNING: Could not recover jumptable at 0x000142bbd56f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
      return;
    }
  }
  FWeakObjectPtr::Get(param_2 + 0x58);
  return;
}



// FUNCTION 142bbd5a0 FUN_142bbd5a0 body=92 status=ok
// SIG undefined FUN_142bbd5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142bbd5a0(longlong param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x548) == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    FUN_1422e15c0(*(longlong *)(param_1 + 0x548) + 0x230,&local_18);
  }
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = local_10;
  return param_2;
}



// FUNCTION 142bbd600 FUN_142bbd600 body=118 status=ok
// SIG undefined FUN_142bbd600(void)

longlong FUN_142bbd600(longlong param_1,byte param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x180);
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x4c);
    if ((int)(uint)param_2 < (int)(*(int *)(lVar2 + 0x40) + (uint)bVar1)) {
      if (param_2 != 0xff) {
        if (bVar1 <= param_2) {
          return *(longlong *)(lVar2 + 0x38) + ((ulonglong)param_2 - (ulonglong)bVar1) * 0x18;
        }
        lVar2 = *(longlong *)(lVar2 + 0x30);
        if (lVar2 != 0) {
          bVar4 = param_2 == 0xff;
          while( true ) {
            if (bVar4) {
              return 0;
            }
            if (*(byte *)(lVar2 + 0x4c) <= param_2) break;
            lVar2 = *(longlong *)(lVar2 + 0x30);
            bVar4 = lVar2 == 0;
          }
          return *(longlong *)(lVar2 + 0x38) +
                 ((ulonglong)param_2 - (ulonglong)*(byte *)(lVar2 + 0x4c)) * 0x18;
        }
      }
    }
    else {
      iVar3 = ((uint)param_2 - *(int *)(lVar2 + 0x40)) - (uint)bVar1;
      if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x278))) {
        return *(longlong *)(param_1 + 0x270) + (longlong)iVar3 * 0x18;
      }
    }
  }
  return 0;
}



// FUNCTION 142bbd680 GetKey body=47 status=ok
// SIG undefined GetKey(void)

longlong UBlackboardData::GetKey(longlong param_1,byte param_2)

{
  bool bVar1;
  
  bVar1 = param_2 == 0xff;
  while( true ) {
    if (bVar1) {
      return 0;
    }
    if (*(byte *)(param_1 + 0x4c) <= param_2) break;
    param_1 = *(longlong *)(param_1 + 0x30);
    bVar1 = param_1 == 0;
  }
  return *(longlong *)(param_1 + 0x38) +
         ((ulonglong)param_2 - (ulonglong)*(byte *)(param_1 + 0x4c)) * 0x18;
}



// FUNCTION 142bbd6b0 FUN_142bbd6b0 body=198 status=ok
// SIG undefined FUN_142bbd6b0(void)

ulonglong FUN_142bbd6b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x278);
  iVar4 = 0;
  iVar6 = 0;
  plVar2 = (longlong *)(longlong)iVar1;
  if (0 < iVar1) {
    plVar2 = *(longlong **)(param_1 + 0x270);
    lVar5 = 0;
    do {
      if (*plVar2 == *param_2) {
        lVar5 = *(longlong *)(param_1 + 0x180);
        if (lVar5 != 0) {
          iVar4 = (uint)*(byte *)(lVar5 + 0x4c) + *(int *)(lVar5 + 0x40);
        }
        return (ulonglong)(uint)(iVar6 + iVar4);
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 1;
      plVar2 = plVar2 + 3;
    } while (lVar5 < iVar1);
  }
  lVar5 = *(longlong *)(param_1 + 0x180);
  if (lVar5 != 0) {
    if (0 < *(int *)(lVar5 + 0x40)) {
      do {
        plVar2 = (longlong *)(longlong)iVar4;
        if (*(longlong *)(*(longlong *)(lVar5 + 0x38) + (longlong)plVar2 * 0x18) == *param_2) {
          return (ulonglong)(byte)(*(char *)(lVar5 + 0x4c) + (char)iVar4);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar5 + 0x40));
    }
    if (*(longlong *)(lVar5 + 0x30) != 0) {
      uVar3 = UBlackboardData::InternalGetKeyID(*(longlong *)(lVar5 + 0x30),param_2,0);
      return uVar3;
    }
  }
  return CONCAT71((int7)((ulonglong)plVar2 >> 8),0xff);
}



// FUNCTION 142bbd780 GetKeyID body=84 status=ok
// SIG undefined GetKeyID(void)

char UBlackboardData::GetKeyID(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x18) == *param_2) {
        return *(char *)(param_1 + 0x4c) + (char)iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x40));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    cVar1 = InternalGetKeyID(*(longlong *)(param_1 + 0x30),param_2,0);
    return cVar1;
  }
  return -1;
}



// FUNCTION 142bbd7e0 FUN_142bbd7e0 body=203 status=ok
// SIG undefined FUN_142bbd7e0(void)

undefined8 * FUN_142bbd7e0(longlong param_1,undefined8 *param_2,byte param_3)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x180);
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x4c);
    if ((int)(uint)param_3 < (int)(*(int *)(lVar2 + 0x40) + (uint)bVar1)) {
      if (param_3 != 0xff) {
        if (param_3 < bVar1) {
          if (*(longlong *)(lVar2 + 0x30) == 0) goto LAB_142bbd89d;
          lVar2 = UBlackboardData::GetKey(*(longlong *)(lVar2 + 0x30),param_3);
        }
        else {
          lVar2 = *(longlong *)(lVar2 + 0x38) + ((ulonglong)param_3 - (ulonglong)bVar1) * 0x18;
        }
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
          *param_2 = *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10);
          return param_2;
        }
      }
    }
    else {
      iVar3 = ((uint)param_3 - *(int *)(lVar2 + 0x40)) - (uint)bVar1;
      if (((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x278))) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 8 + (longlong)iVar3 * 0x18),
         lVar2 != 0)) {
        *param_2 = *(undefined8 *)(lVar2 + 0x10);
        return param_2;
      }
    }
  }
LAB_142bbd89d:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142bbd8b0 FUN_142bbd8b0 body=228 status=ok
// SIG undefined FUN_142bbd8b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142bbd8b0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,
                       undefined8 *param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  uint7 uVar3;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_3 != (undefined4 *)0x0) {
    local_res18 = *param_3;
    local_res1c = param_3[1];
    lVar1 = FWeakObjectPtr::Get(&local_res18);
    in_RAX = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_1428dfc70();
      uVar3 = (uint7)((ulonglong)(lVar2 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        in_RAX = (ulonglong)uVar3 << 8;
      }
      else {
        in_RAX = CONCAT71(uVar3,1);
      }
      if ((char)in_RAX != '\0') {
        lVar1 = *(longlong *)(lVar1 + 0x168);
        if (lVar1 == 0) {
          local_18 = _DAT_1468b5d90;
          local_10 = DAT_1468b5d98;
        }
        else {
          local_18 = *(undefined8 *)(lVar1 + 0x220);
          local_10 = *(undefined4 *)(lVar1 + 0x228);
        }
        *param_4 = local_18;
        *(undefined4 *)(param_4 + 1) = local_10;
        return CONCAT71((uint7)(uint3)((uint)local_10 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142bbda20 FUN_142bbda20 body=279 status=ok
// SIG undefined FUN_142bbda20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142bbda20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  
  uVar3 = FUN_142bbd6b0();
  uVar4 = uVar3;
  if ((*(longlong *)(param_1 + 0x180) != 0) &&
     ((int)((uint)uVar3 & 0xff) < *(int *)(param_1 + 0x1a0))) {
    uVar4 = FUN_142bbd600(param_1,uVar3 & 0xff);
    if ((uVar4 != 0) && (plVar2 = *(longlong **)(uVar4 + 8), plVar2 != (longlong *)0x0)) {
      piVar5 = (int *)((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (uVar3 & 0xff) * 2) +
                      *(longlong *)(param_1 + 0x188));
      if ((*(byte *)((longlong)plVar2 + 0x2b) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142bbdb1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar2 + 0x2c0))(plVar2,param_1,piVar5,param_3);
        return uVar4;
      }
      if (piVar5 != (int *)0x0) {
        iVar1 = *piVar5;
        if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x1b0))) {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x000142bbdad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*plVar2 + 0x2c0))(plVar2,param_1,piVar5 + 1,param_3);
          return uVar4;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142bbdafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(_DAT_00000000 + 0x2c0))(0,param_1,piVar5 + 1,param_3);
      return uVar4;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142bbdb40 FUN_142bbdb40 body=268 status=ok
// SIG undefined FUN_142bbdb40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142bbdb40(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  int *piVar4;
  
  if ((*(longlong *)(param_1 + 0x180) != 0) &&
     (in_RAX = param_2 & 0xff, (int)in_RAX < *(int *)(param_1 + 0x1a0))) {
    in_RAX = FUN_142bbd600();
    if ((in_RAX != 0) && (plVar2 = *(longlong **)(in_RAX + 8), plVar2 != (longlong *)0x0)) {
      piVar4 = (int *)((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (param_2 & 0xff) * 2)
                      + *(longlong *)(param_1 + 0x188));
      if ((*(byte *)((longlong)plVar2 + 0x2b) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142bbdc33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x2c0))(plVar2,param_1,piVar4,param_3);
        return uVar3;
      }
      if (piVar4 != (int *)0x0) {
        iVar1 = *piVar4;
        if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x1b0))) {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x000142bbdbec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar2 + 0x2c0))(plVar2,param_1,piVar4 + 1,param_3);
          return uVar3;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142bbdc11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(_DAT_00000000 + 0x2c0))(0,param_1,piVar4 + 1,param_3);
      return uVar3;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142bbdc50 FUN_142bbdc50 body=449 status=ok
// SIG undefined FUN_142bbdc50(void)

longlong * FUN_142bbdc50(ushort *param_1,longlong *param_2)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  void *local_48;
  int local_40;
  longlong local_38 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2c5e8) {
    _Init_thread_header(&DAT_146b2c5e8);
    if (DAT_146b2c5e8 == -1) {
      uVar4 = UEnum::GetPrivateStaticClass();
      DAT_146b2c5e0 = FUN_141799410(uVar4,0xffffffffffffffff,L"EAIRequestPriority");
      _Init_thread_footer(&DAT_146b2c5e8);
    }
  }
  lVar9 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar6 = 1;
  lVar8 = 5;
  do {
    if ((*param_1 != 0) && ((uVar6 & *param_1) != 0)) {
      puVar3 = (undefined8 *)UEnum::GetNameStringByValue(DAT_146b2c5e0,local_38,lVar9);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar3;
      }
      FString::PrintfImpl(&local_48,L"%s, ",puVar7);
      _Src = local_48;
      if (local_40 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = local_40 + -1;
      }
      if (iVar5 != 0) {
        iVar1 = (int)param_2[1];
        iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar5;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    lVar9 = lVar9 + 1;
    uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return param_2;
}



// FUNCTION 142bbde20 FUN_142bbde20 body=20 status=ok
// SIG undefined FUN_142bbde20(void)

undefined4 FUN_142bbde20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x548) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x548) + 0x1e0);
  }
  return 0;
}



// FUNCTION 142bbde40 GetMyNode body=72 status=ok
// SIG undefined GetMyNode(void)

longlong UBTAuxiliaryNode::GetMyNode(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(param_1 + 0x59);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (bVar1 == 0xff) {
    return lVar2;
  }
  if ((lVar2 != 0) && ((int)(uint)bVar1 < *(int *)(lVar2 + 0x60))) {
    plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x58) + (ulonglong)bVar1 * 0x30);
    lVar2 = *plVar3;
    if (lVar2 != 0) {
      return lVar2;
    }
    return plVar3[1];
  }
  return 0;
}



// FUNCTION 142bbde90 FUN_142bbde90 body=411 status=ok
// SIG undefined FUN_142bbde90(void)

int FUN_142bbde90(longlong param_1,longlong *param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  bool bVar12;
  
  lVar6 = *param_2;
  iVar9 = -2;
  uVar4 = *(ushort *)(lVar6 + 800);
  lVar8 = (ulonglong)*(ushort *)(param_1 + 0x52) +
          *(longlong *)((ulonglong)uVar4 * 0x60 + 0x38 + *(longlong *)(lVar6 + 0x1d8));
  if ((param_3 == -1) && (uVar1 = *(ushort *)(param_2 + 5), uVar1 != 0xffff)) {
    bVar12 = uVar4 < uVar1;
    if (uVar4 == uVar1) {
      bVar12 = *(ushort *)(param_1 + 0x50) < *(ushort *)((longlong)param_2 + 0x2a);
    }
    if (bVar12) {
      iVar9 = *(int *)(param_1 + 0x60);
      iVar10 = iVar9 + -1;
      if (uVar4 != uVar1) {
        if (uVar4 <= uVar1) {
          return -2;
        }
        return iVar10;
      }
      if (*(ushort *)((longlong)param_2 + 0x2a) < *(ushort *)(param_1 + 0x50)) {
        return -2;
      }
      iVar7 = 0;
      if (iVar9 < 1) {
        return iVar10;
      }
      lVar6 = 0;
      lVar8 = 0;
      do {
        if ((lVar6 < 0) || (*(int *)(param_1 + 0x60) <= iVar7)) {
LAB_142bbdf75:
          uVar4 = *(short *)(param_1 + 0x8c) + 1;
        }
        else {
          lVar2 = *(longlong *)(param_1 + 0x58);
          lVar5 = *(longlong *)(lVar2 + lVar8);
          if ((lVar5 == 0) && (lVar5 = *(longlong *)(lVar2 + 8 + lVar8), lVar5 == 0))
          goto LAB_142bbdf75;
          uVar4 = *(short *)(lVar5 + 0x50) - *(short *)(lVar2 + 0x18 + lVar8);
        }
        if (*(ushort *)((longlong)param_2 + 0x2a) < uVar4) {
          if (iVar7 != 0) {
            return iVar7 + -1;
          }
          return 0;
        }
        iVar7 = iVar7 + 1;
        lVar6 = lVar6 + 1;
        lVar8 = lVar8 + 0x30;
        if (iVar9 <= lVar6) {
          return iVar10;
        }
      } while( true );
    }
  }
  cVar3 = *(char *)(lVar8 + 1);
  if ((cVar3 == -1) ||
     ((*(longlong *)(lVar6 + 0x250) != 0 && ((*(byte *)(lVar6 + 0x25b) & 1) == 0)))) {
    if ((*(int *)(param_1 + 0x80) != 0) &&
       ((*(longlong **)(param_1 + 0x78) != (longlong *)0x0 &&
        (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x18))(), cVar3 != '\0')))) {
      if (*(int *)(param_1 + 0x80) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(param_1 + 0x78);
      }
      iVar9 = (**(code **)(*plVar11 + 0x38))(plVar11,param_2,param_3,param_4);
    }
  }
  else {
    iVar9 = (int)cVar3;
    *(undefined1 *)(lVar8 + 1) = 0xff;
  }
  return iVar9;
}



// FUNCTION 142bbe030 FUN_142bbe030 body=125 status=ok
// SIG undefined FUN_142bbe030(void)

undefined8 FUN_142bbe030(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  int *piVar6;
  
  lVar3 = *param_2;
  uVar1 = *(ushort *)((longlong)param_1 + 0x52);
  lVar4 = *(longlong *)
           ((ulonglong)*(ushort *)(lVar3 + 800) * 0x60 + 0x38 + *(longlong *)(lVar3 + 0x1d8));
  uVar5 = (**(code **)(*param_1 + 0x2b0))();
  if ((uVar5 != 0) &&
     (piVar6 = (int *)(((ulonglong)uVar1 + lVar4) - ((ulonglong)(uVar5 + 3) & 0xfffffffffffffffc)),
     piVar6 != (int *)0x0)) {
    iVar2 = *piVar6;
    if ((-1 < iVar2) && (iVar2 < *(int *)(lVar3 + 0x200))) {
      return *(undefined8 *)(*(longlong *)(lVar3 + 0x1f8) + (longlong)iVar2 * 8);
    }
  }
  return 0;
}



// FUNCTION 142bbe0b0 FUN_142bbe0b0 body=97 status=ok
// SIG undefined FUN_142bbe0b0(void)

undefined8 FUN_142bbe0b0(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x2b0))();
  if ((uVar2 != 0) &&
     (piVar3 = (int *)(param_3 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc)),
     piVar3 != (int *)0x0)) {
    iVar1 = *piVar3;
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_2 + 0x200))) {
      return *(undefined8 *)(*(longlong *)(param_2 + 0x1f8) + (longlong)iVar1 * 8);
    }
  }
  return 0;
}



// FUNCTION 142bbe120 FUN_142bbe120 body=45 status=ok
// SIG undefined FUN_142bbe120(void)

longlong FUN_142bbe120(longlong param_1,longlong param_2,int param_3)

{
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x1e0))) {
    return (ulonglong)*(ushort *)(param_2 + 0x52) +
           *(longlong *)((longlong)param_3 * 0x60 + 0x38 + *(longlong *)(param_1 + 0x1d8));
  }
  return 0;
}



// FUNCTION 142bbe150 GetNodeName body=214 status=ok
// SIG undefined GetNodeName(void)

undefined8 * UBTNode::GetNodeName(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  void **ppvVar4;
  void *local_28;
  int local_20;
  longlong local_18 [2];
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((iVar1 == 0) || (iVar1 == 1)) {
    ppvVar4 = (void **)FUN_142bbe990(local_18,param_1);
    bVar3 = false;
    bVar2 = true;
  }
  else {
    _Src = *(void **)(param_1 + 0x30);
    local_28 = (void *)0x0;
    local_20 = iVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)iVar1 * 2);
    ppvVar4 = &local_28;
    bVar3 = true;
    bVar2 = false;
  }
  *param_2 = 0;
  *param_2 = *ppvVar4;
  *ppvVar4 = (void *)0x0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppvVar4 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar4 + 0xc);
  ppvVar4[1] = (void *)0x0;
  if (bVar2) {
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_28 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142bbe230 GetOwnerComponent body=121 status=ok
// SIG undefined GetOwnerComponent(void)

longlong UBTFunctionLibrary::GetOwnerComponent(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    if (((*(uint *)(*(longlong *)(param_1 + 0x10) + 0xb4) >> 0x12 & 1) == 0) &&
       (*(longlong *)(param_1 + 0x10) != 0)) {
      UDynamicClass::GetPrivateStaticClass();
    }
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      lVar3 = UProgressBar::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 142bbe2b0 FUN_142bbe2b0 body=125 status=ok
// SIG undefined FUN_142bbe2b0(void)

undefined8 FUN_142bbe2b0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    if (((*(uint *)(*(longlong *)(param_1 + 0x10) + 0xb4) >> 0x12 & 1) == 0) &&
       (*(longlong *)(param_1 + 0x10) != 0)) {
      UDynamicClass::GetPrivateStaticClass();
    }
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      lVar3 = UProgressBar::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return *(undefined8 *)(lVar1 + 0x180);
      }
    }
  }
  return 0;
}



// FUNCTION 142bbe330 FUN_142bbe330 body=283 status=ok
// SIG undefined FUN_142bbe330(void)

ulonglong FUN_142bbe330(undefined8 param_1,undefined8 param_2,undefined4 *param_3,
                       undefined8 *param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  uint7 uVar7;
  undefined8 *puVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (param_3 != (undefined4 *)0x0) {
    local_res18 = *param_3;
    local_res1c = param_3[1];
    lVar4 = FWeakObjectPtr::Get(&local_res18);
    in_RAX = 0;
    if (lVar4 != 0) {
      lVar5 = FUN_1428dfc70();
      uVar7 = (uint7)((ulonglong)(lVar5 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        in_RAX = (ulonglong)uVar7 << 8;
      }
      else {
        in_RAX = CONCAT71(uVar7,1);
      }
      if ((char)in_RAX != '\0') {
        lVar4 = *(longlong *)(lVar4 + 0x168);
        if (lVar4 == 0) {
          uVar8 = (undefined4)DAT_1468b5da0;
          uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          uVar3 = DAT_1468b5da8;
        }
        else {
          local_18 = *(float *)(lVar4 + 0x210);
          fStack_14 = *(float *)(lVar4 + 0x214);
          fStack_10 = *(float *)(lVar4 + 0x218);
          fStack_c = *(float *)(lVar4 + 0x21c);
          auVar1._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != fStack_14);
          auVar1._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != local_18);
          auVar1._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_10);
          auVar1._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_c);
          iVar2 = movmskps((int)in_RAX,auVar1);
          if (iVar2 != 0) {
            *(float *)(lVar4 + 0x250) = local_18;
            *(float *)(lVar4 + 0x254) = fStack_14;
            *(float *)(lVar4 + 600) = fStack_10;
            *(float *)(lVar4 + 0x25c) = fStack_c;
            puVar6 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
            *(undefined8 *)(lVar4 + 0x260) = *puVar6;
            *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar6 + 1);
          }
          uVar8 = (undefined4)*(undefined8 *)(lVar4 + 0x260);
          uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x260) >> 0x20);
          uVar3 = *(undefined4 *)(lVar4 + 0x268);
        }
        *param_4 = CONCAT44(uVar9,uVar8);
        *(undefined4 *)(param_4 + 1) = uVar3;
        return CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142bbe4a0 FUN_142bbe4a0 body=279 status=ok
// SIG undefined FUN_142bbe4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142bbe4a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  
  uVar3 = FUN_142bbd6b0();
  uVar4 = uVar3;
  if ((*(longlong *)(param_1 + 0x180) != 0) &&
     ((int)((uint)uVar3 & 0xff) < *(int *)(param_1 + 0x1a0))) {
    uVar4 = FUN_142bbd600(param_1,uVar3 & 0xff);
    if ((uVar4 != 0) && (plVar2 = *(longlong **)(uVar4 + 8), plVar2 != (longlong *)0x0)) {
      piVar5 = (int *)((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (uVar3 & 0xff) * 2) +
                      *(longlong *)(param_1 + 0x188));
      if ((*(byte *)((longlong)plVar2 + 0x2b) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142bbe59e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar2 + 0x2c8))(plVar2,param_1,piVar5,param_3);
        return uVar4;
      }
      if (piVar5 != (int *)0x0) {
        iVar1 = *piVar5;
        if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x1b0))) {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x000142bbe557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*plVar2 + 0x2c8))(plVar2,param_1,piVar5 + 1,param_3);
          return uVar4;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142bbe57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(_DAT_00000000 + 0x2c8))(0,param_1,piVar5 + 1,param_3);
      return uVar4;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142bbe5c0 FUN_142bbe5c0 body=268 status=ok
// SIG undefined FUN_142bbe5c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142bbe5c0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  int *piVar4;
  
  if ((*(longlong *)(param_1 + 0x180) != 0) &&
     (in_RAX = param_2 & 0xff, (int)in_RAX < *(int *)(param_1 + 0x1a0))) {
    in_RAX = FUN_142bbd600();
    if ((in_RAX != 0) && (plVar2 = *(longlong **)(in_RAX + 8), plVar2 != (longlong *)0x0)) {
      piVar4 = (int *)((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (param_2 & 0xff) * 2)
                      + *(longlong *)(param_1 + 0x188));
      if ((*(byte *)((longlong)plVar2 + 0x2b) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142bbe6b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x2c8))(plVar2,param_1,piVar4,param_3);
        return uVar3;
      }
      if (piVar4 != (int *)0x0) {
        iVar1 = *piVar4;
        if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x1b0))) {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x000142bbe66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar2 + 0x2c8))(plVar2,param_1,piVar4 + 1,param_3);
          return uVar3;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142bbe691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(_DAT_00000000 + 0x2c8))(0,param_1,piVar4 + 1,param_3);
      return uVar3;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142bbe6d0 FUN_142bbe6d0 body=689 status=ok
// SIG undefined FUN_142bbe6d0(void)

longlong *
FUN_142bbe6d0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 *puVar1;
  void *_Dst;
  void *_Src;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  ulonglong uVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  longlong *local_68;
  ulonglong local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong uVar12;
  
  uVar12 = 0;
  iVar5 = (int)param_1[7] + -1;
  if ((int)param_1[7] == 0) {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
    plVar9 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1,local_48);
    bVar4 = false;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x2b8))(param_1,local_38);
    puVar14 = &DAT_143f3eda8;
    if (*(int *)(puVar8 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar8;
    }
    if ((int)param_1[7] != 0) {
      puVar14 = (undefined2 *)param_1[6];
    }
    FString::PrintfImpl(local_58,L"%d. %s [%s]",(short)param_1[10],puVar14,puVar10);
    plVar9 = local_58;
    bVar4 = true;
    bVar3 = true;
    bVar2 = false;
  }
  *param_2 = 0;
  *param_2 = *plVar9;
  *plVar9 = 0;
  *(int *)(param_2 + 1) = (int)plVar9[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar9 + 0xc);
  plVar9[1] = 0;
  if ((bVar2) && (local_48[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_58[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar4) && (local_38[0] != 0)) {
    FMemory::Free();
  }
  local_68 = (longlong *)0x0;
  local_60 = 0;
  uVar13 = uVar12;
  if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
    param_1 = (longlong *)FUN_142bbe0b0(param_1,param_3,param_4);
    uVar13 = local_60 & 0xffffffff;
  }
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x290))(param_1,param_3,param_4,param_5,&local_68);
    uVar13 = local_60 & 0xffffffff;
  }
  uVar15 = uVar12;
  if (0 < (int)uVar13) {
    do {
      iVar5 = (int)param_2[1];
      iVar6 = (3 - (uint)(iVar5 != 0)) + iVar5;
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
      }
      puVar1 = (undefined4 *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      *puVar1 = 0x20002c;
      *(undefined2 *)(puVar1 + 1) = 0;
      iVar5 = *(int *)((longlong)local_68 + uVar15 + 8);
      _Src = *(void **)((longlong)local_68 + uVar15);
      iVar6 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        iVar5 = (int)param_2[1];
        iVar7 = (uint)(iVar5 == 0) + iVar6 + iVar5;
        *(int *)(param_2 + 1) = iVar7;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
        }
        _Dst = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
        *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
      }
      uVar13 = local_60 & 0xffffffff;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar15 = uVar15 + 0x10;
    } while ((int)uVar11 < (int)local_60);
  }
  uVar11 = (uint)uVar13;
  plVar9 = local_68;
  while (uVar11 != 0) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
    uVar11 = (int)uVar13 - 1;
    uVar13 = (ulonglong)uVar11;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142bbe990 FUN_142bbe990 body=503 status=ok
// SIG undefined FUN_142bbe990(void)

undefined8 * FUN_142bbe990(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  int iVar10;
  undefined8 local_res10;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_res10 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18);
  if ((*(uint *)(*(longlong *)(param_2 + 0x10) + 0xb4) >> 0x12 & 1) == 0) {
    FName::ToString(&local_res10,&local_48);
    iVar3 = FUN_141592950(&local_48,&DAT_1457e434c,1,0,0xffffffff);
    pwVar8 = local_48;
    iVar10 = local_40;
    if (iVar3 != -1) {
      pwVar8 = (wchar_t *)0x0;
      uVar2 = iVar3 + 0x80000000;
      uVar7 = local_40 - 1;
      if (local_40 == 0) {
        uVar7 = 0;
      }
      if (iVar3 + 1U < uVar7) {
        uVar7 = iVar3 + 1U;
      }
      uVar5 = local_40 - 1;
      if (local_40 == 0) {
        uVar5 = 0;
      }
      uVar6 = uVar7;
      if ((uVar7 <= uVar2) && (uVar6 = uVar5, uVar2 < uVar5)) {
        uVar6 = uVar2;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      pwVar9 = L"";
      if (local_40 != 0) {
        pwVar9 = local_48;
      }
      iVar3 = uVar6 - uVar7;
      iVar10 = iVar3 + 1;
      if (iVar3 == 0) {
        iVar10 = 0;
      }
      local_30 = iVar10;
      if ((0 < iVar10) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar10 = local_30,
         pwVar8 = local_38, 0 < local_30)) {
        wcsncpy(local_38,pwVar9 + (int)uVar7,(longlong)iVar3);
        pwVar8[iVar3] = L'\0';
      }
      local_3c = local_2c;
      if (local_48 != (wchar_t *)0x0) {
        FMemory::Free();
        local_3c = local_2c;
      }
    }
    *param_1 = pwVar8;
    *(int *)(param_1 + 1) = iVar10;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
  }
  else {
    FName::ToString(&local_res10,&local_38);
    iVar10 = 0;
    if (local_30 == 0) {
      pwVar8 = L"";
      iVar3 = iVar10;
    }
    else {
      pwVar8 = local_38;
      iVar3 = local_30 + -1;
    }
    iVar1 = iVar3 + -2;
    iVar4 = iVar10;
    if ((-1 < iVar1) && (iVar4 = iVar3, iVar1 < iVar3)) {
      iVar4 = iVar1;
    }
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    iVar3 = iVar4 + 1;
    if (iVar4 == 0) {
      iVar3 = iVar10;
    }
    *(int *)(param_1 + 1) = iVar3;
    if ((0 < iVar3) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0), 0 < *(int *)(param_1 + 1))) {
      pwVar9 = (wchar_t *)*param_1;
      wcsncpy(pwVar9,pwVar8,(longlong)iVar4);
      pwVar9[iVar4] = L'\0';
    }
    if (local_38 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 142bbebc0 GetStaticDescription body=498 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTDecorator::GetStaticDescription(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined *puVar8;
  undefined2 *puVar9;
  int iVar10;
  wchar_t *pwVar11;
  wchar_t *local_58;
  undefined8 local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  pwVar4 = (wchar_t *)0x0;
  iVar6 = 0;
  pwVar11 = pwVar4;
  iVar10 = iVar6;
  if (*(char *)(param_1 + 100) != '\0') {
    uVar2 = FUN_142bb8310(local_38,*(char *)(param_1 + 100));
    puVar3 = (undefined8 *)FString::ToLower(uVar2,local_48);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_58,L"aborts %s",puVar9);
    iVar10 = (int)local_50;
    pwVar11 = local_58;
    local_58 = (wchar_t *)0x0;
    local_50 = 0;
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  local_58 = (wchar_t *)0x0;
  iVar5 = 0;
  local_50 = 0;
  if (((*(uint *)(param_1 + 0x60) & 0x40) != 0) && ((*(uint *)(param_1 + 0x60) >> 7 & 1) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,9);
    iVar5 = (int)local_50 + 9;
    local_50 = CONCAT44(local_50._4_4_,iVar5);
    if (local_50._4_4_ < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
      iVar5 = (int)local_50;
    }
    builtin_wcsncpy(local_58,L"inversed",9);
  }
  pwVar1 = local_58;
  if (((iVar10 != 0) && (iVar10 != 1)) || ((iVar5 != 0 && (iVar5 != 1)))) {
    if ((((iVar10 == 0) || (iVar10 + -1 < 1)) || (iVar5 == 0)) ||
       (puVar8 = &DAT_1457e48bc, iVar5 + -1 < 1)) {
      puVar8 = &DAT_1457e4254;
    }
    pwVar4 = L"";
    if (iVar5 != 0) {
      pwVar4 = local_58;
    }
    pwVar7 = L"";
    if (iVar10 != 0) {
      pwVar7 = pwVar11;
    }
    FString::PrintfImpl(&local_58,L"( %s%s%s )\n",pwVar7,puVar8,pwVar4);
    pwVar4 = local_58;
    iVar6 = (int)local_50;
  }
  puVar3 = (undefined8 *)FUN_142bbe990(local_38,param_1);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar3;
  }
  pwVar7 = L"";
  if (iVar6 != 0) {
    pwVar7 = pwVar4;
  }
  FString::PrintfImpl(param_2,L"%s%s",pwVar7,puVar9);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (pwVar4 != (wchar_t *)0x0) {
    FMemory::Free(pwVar4);
  }
  if (pwVar1 != (wchar_t *)0x0) {
    FMemory::Free(pwVar1);
  }
  if (pwVar11 != (wchar_t *)0x0) {
    FMemory::Free(pwVar11);
  }
  return param_2;
}



// FUNCTION 142bbedc0 GetStaticDescription body=29 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTNode::GetStaticDescription(undefined8 param_1,undefined8 param_2)

{
  FUN_142bbe990(param_2,param_1);
  return param_2;
}



// FUNCTION 142bbede0 GetStaticDescription body=160 status=ok
// SIG undefined GetStaticDescription(void)

undefined8 UBTService::GetStaticDescription(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x2e0))(param_1,local_18);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)FUN_142bbe990(local_28,param_1);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(param_2,L"%s: %s",puVar3,puVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142bbee80 GetStaticServiceDescription body=260 status=ok
// SIG undefined GetStaticServiceDescription(void)

undefined8 UBTService::GetStaticServiceDescription(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined2 *puVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  float fVar9;
  longlong local_38 [2];
  longlong local_28 [2];
  
  fVar1 = *(float *)(param_1 + 100);
  fVar2 = *(float *)(param_1 + 0x60);
  if (fVar1 <= 0.0) {
    FString::PrintfImpl(local_38,L"%.2fs",(double)fVar2);
    plVar7 = local_38;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    fVar9 = fVar2 - fVar1;
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    FString::PrintfImpl(local_28,L"%.2fs..%.2fs",(double)fVar9,(double)(fVar1 + fVar2));
    plVar7 = local_28;
    bVar5 = true;
    bVar4 = false;
  }
  puVar3 = (undefined2 *)*plVar7;
  *plVar7 = 0;
  lVar6 = plVar7[1];
  plVar7[1] = 0;
  if (bVar4) {
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar5) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  puVar8 = &DAT_143f3eda8;
  if ((int)lVar6 != 0) {
    puVar8 = puVar3;
  }
  FString::PrintfImpl(param_2,L"tick every %s",puVar8);
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  return param_2;
}



// FUNCTION 142bbef90 FUN_142bbef90 body=131 status=ok
// SIG undefined FUN_142bbef90(void)

undefined4 FUN_142bbef90(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x2d8) != *(int *)(param_1 + 0x304)) {
    lVar2 = *(longlong *)(param_1 + 0x310);
    if (*(longlong *)(param_1 + 0x310) == 0) {
      lVar2 = param_1 + 0x308;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x318) - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x2d0);
      do {
        lVar3 = (longlong)iVar1;
        if (*(longlong *)(lVar2 + lVar3 * 0x18) == param_2) {
          if (iVar1 == -1) {
            return 0;
          }
          lVar2 = lVar2 + lVar3 * 0x18;
          if (lVar2 == 0) {
            return 0;
          }
          return *(undefined4 *)(lVar2 + 8);
        }
        iVar1 = *(int *)(lVar2 + 0x10 + lVar3 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 142bbf020 FUN_142bbf020 body=245 status=ok
// SIG undefined FUN_142bbf020(void)

int FUN_142bbf020(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 2;
  iVar2 = FUN_142bbb940();
  if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x1e0))) {
    lVar4 = 0;
    lVar6 = (longlong)iVar2 * 0x60 + *(longlong *)(param_1 + 0x1d8);
    if (0 < *(int *)(lVar6 + 0x30)) {
      plVar3 = *(longlong **)(lVar6 + 0x28);
      do {
        lVar1 = *plVar3;
        if ((lVar1 == param_2) ||
           ((((*(byte *)(param_2 + 0x55) & 1) != 0 && (lVar1 != 0)) &&
            (*(short *)(lVar1 + 0x50) == *(short *)(param_2 + 0x50))))) {
          iVar5 = (int)plVar3[1];
          if (iVar5 != 2) {
            return iVar5;
          }
          break;
        }
        lVar4 = lVar4 + 1;
        plVar3 = plVar3 + 2;
      } while (lVar4 < *(int *)(lVar6 + 0x30));
    }
    lVar4 = *(longlong *)(lVar6 + 0x10);
    if ((lVar4 == param_2) ||
       ((((*(byte *)(param_2 + 0x55) & 1) != 0 && (lVar4 != 0)) &&
        (*(short *)(lVar4 + 0x50) == *(short *)(param_2 + 0x50))))) {
      if (*(char *)(lVar6 + 0x49) == '\x01') {
        return 0;
      }
      return (*(char *)(lVar6 + 0x49) != '\x02') + 1;
    }
  }
  return iVar5;
}



// FUNCTION 142bbf120 GetTeamIdentifier body=92 status=ok
// SIG undefined GetTeamIdentifier(void)

undefined1 * FGenericTeamId::GetTeamIdentifier(undefined1 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    uVar1 = UGenericTeamAgentInterface::GetPrivateStaticClass();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      return param_1;
    }
  }
  *param_1 = DAT_146690f0c;
  return param_1;
}



// FUNCTION 142bbf180 GetValue body=7 status=ok
// SIG undefined GetValue(void)

bool UBlackboardKeyType_Bool::GetValue(undefined8 param_1,char *param_2)

{
  return *param_2 != '\0';
}



// FUNCTION 142bbf190 GetActor body=32 status=ok
// SIG undefined GetActor(void)

void UEnvQueryItemType_Actor::GetActor(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *param_2;
  local_res14 = param_2[1];
  FWeakObjectPtr::Get(&local_res10);
  return;
}



// FUNCTION 142bbf1b0 FUN_142bbf1b0 body=5 status=ok
// SIG undefined FUN_142bbf1b0(void)

undefined4 FUN_142bbf1b0(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}



// FUNCTION 142bbf1c0 GetValue body=10 status=ok
// SIG undefined GetValue(void)

undefined8 *
UBlackboardKeyType_Name::GetValue(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = *param_3;
  return param_1;
}



// FUNCTION 142bbf1d0 GetValue body=44 status=ok
// SIG undefined GetValue(void)

undefined8 UBlackboardKeyType_Object::GetValue(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  local_res10 = *param_2;
  local_res14 = param_2[1];
  uVar1 = FWeakObjectPtr::Get(&local_res10);
  return uVar1;
}



// FUNCTION 142bbf200 GetValue body=20 status=ok
// SIG undefined GetValue(void)

undefined8 *
UBlackboardKeyType_Rotator::GetValue(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  *param_1 = *param_3;
  *(undefined4 *)(param_1 + 1) = uVar1;
  return param_1;
}



// FUNCTION 142bbf220 GetValue body=27 status=ok
// SIG undefined GetValue(void)

undefined8 UBlackboardKeyType_String::GetValue(undefined8 param_1,longlong param_2)

{
  FString::FString(param_1,param_2 + 0x30);
  return param_1;
}



// FUNCTION 142bbf240 FUN_142bbf240 body=178 status=ok
// SIG undefined FUN_142bbf240(void)

ulonglong FUN_142bbf240(longlong param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  bVar3 = FUN_142bbd6b0();
  uVar4 = FUN_142bbd600(param_1,bVar3);
  uVar5 = uVar4;
  if (((uVar4 != 0) && (*(longlong *)(uVar4 + 8) != 0)) &&
     (uVar2 = *(ulonglong *)(*(longlong *)(uVar4 + 8) + 0x10),
     uVar5 = UBlackboardKeyType_Bool::GetPrivateStaticClass(), uVar2 == uVar5)) {
    if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a0) <= (int)(uint)bVar3)) {
      lVar6 = 0;
    }
    else {
      lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)bVar3 * 2) +
              *(longlong *)(param_1 + 0x188);
    }
    uVar5 = (ulonglong)(*(byte *)(*(longlong *)(uVar4 + 8) + 0x2b) >> 1 & 1);
    pcVar1 = (char *)(lVar6 + uVar5 * 4);
    if (pcVar1 != (char *)0x0) {
      return (ulonglong)(*pcVar1 != '\0');
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 142bbf300 FUN_142bbf300 body=195 status=ok
// SIG undefined FUN_142bbf300(void)

undefined8 FUN_142bbf300(longlong param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  bVar2 = FUN_142bbd6b0();
  lVar3 = FUN_142bbd600(param_1,bVar2);
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
     (lVar6 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10),
     lVar4 = UBlackboardKeyType_Class::GetPrivateStaticClass(), lVar6 == lVar4)) {
    if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a0) <= (int)(uint)bVar2)) {
      lVar6 = 0;
    }
    else {
      lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)bVar2 * 2) +
              *(longlong *)(param_1 + 0x188);
    }
    puVar1 = (undefined4 *)
             (lVar6 + (ulonglong)(*(byte *)(*(longlong *)(lVar3 + 8) + 0x2b) >> 1 & 1) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      local_res18 = *puVar1;
      local_res1c = puVar1[1];
      uVar5 = FWeakObjectPtr::Get(&local_res18);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 142bbf3d0 FUN_142bbf3d0 body=175 status=ok
// SIG undefined FUN_142bbf3d0(void)

ulonglong FUN_142bbf3d0(longlong param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  bVar3 = FUN_142bbd6b0();
  uVar4 = FUN_142bbd600(param_1,bVar3);
  uVar5 = uVar4;
  if (((uVar4 != 0) && (*(longlong *)(uVar4 + 8) != 0)) &&
     (uVar2 = *(ulonglong *)(*(longlong *)(uVar4 + 8) + 0x10),
     uVar5 = UBlackboardKeyType_Enum::GetPrivateStaticClass(), uVar2 == uVar5)) {
    if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a0) <= (int)(uint)bVar3)) {
      lVar6 = 0;
    }
    else {
      lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)bVar3 * 2) +
              *(longlong *)(param_1 + 0x188);
    }
    uVar5 = (ulonglong)(*(byte *)(*(longlong *)(uVar4 + 8) + 0x2b) >> 1 & 1);
    pbVar1 = (byte *)(lVar6 + uVar5 * 4);
    if (pbVar1 != (byte *)0x0) {
      return (ulonglong)*pbVar1;
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 142bbf480 FUN_142bbf480 body=177 status=ok
// SIG undefined FUN_142bbf480(void)

undefined4 FUN_142bbf480(longlong param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar2 = FUN_142bbd6b0();
  lVar3 = FUN_142bbd600(param_1,bVar2);
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
     (lVar5 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10),
     lVar4 = UBlackboardKeyType_Float::GetPrivateStaticClass(), lVar5 == lVar4)) {
    if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a0) <= (int)(uint)bVar2)) {
      lVar5 = 0;
    }
    else {
      lVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)bVar2 * 2) +
              *(longlong *)(param_1 + 0x188);
    }
    puVar1 = (undefined4 *)
             (lVar5 + (ulonglong)(*(byte *)(*(longlong *)(lVar3 + 8) + 0x2b) >> 1 & 1) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      return *puVar1;
    }
  }
  return 0;
}



// FUNCTION 142bbf540 FUN_142bbf540 body=174 status=ok
// SIG undefined FUN_142bbf540(void)

undefined4 FUN_142bbf540(longlong param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar2 = FUN_142bbd6b0();
  lVar3 = FUN_142bbd600(param_1,bVar2);
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
     (lVar5 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10),
     lVar4 = UBlackboardKeyType_Int::GetPrivateStaticClass(), lVar5 == lVar4)) {
    if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a0) <= (int)(uint)bVar2)) {
      lVar5 = 0;
    }
    else {
      lVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)bVar2 * 2) +
              *(longlong *)(param_1 + 0x188);
    }
    puVar1 = (undefined4 *)
             (lVar5 + (ulonglong)(*(byte *)(*(longlong *)(lVar3 + 8) + 0x2b) >> 1 & 1) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      return *puVar1;
    }
  }
  return 0;
}



// FUNCTION 142bbf5f0 FUN_142bbf5f0 body=205 status=ok
// SIG undefined FUN_142bbf5f0(void)

undefined8 * FUN_142bbf5f0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  bVar2 = FUN_142bbd6b0(param_1,param_3);
  lVar3 = FUN_142bbd600(param_1,bVar2);
  uVar5 = DAT_146b2c588;
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
     (lVar6 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10), lVar4 = FUN_142c35df0(),
     uVar5 = DAT_146b2c588, lVar6 == lVar4)) {
    if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a0) <= (int)(uint)bVar2)) {
      lVar6 = 0;
    }
    else {
      lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)bVar2 * 2) +
              *(longlong *)(param_1 + 0x188);
    }
    puVar1 = (undefined8 *)
             (lVar6 + (ulonglong)(*(byte *)(*(longlong *)(lVar3 + 8) + 0x2b) >> 1 & 1) * 4);
    if (puVar1 != (undefined8 *)0x0) {
      uVar5 = *puVar1;
    }
  }
  *param_2 = uVar5;
  return param_2;
}



// FUNCTION 142bbf6c0 FUN_142bbf6c0 body=210 status=ok
// SIG undefined FUN_142bbf6c0(void)

longlong FUN_142bbf6c0(longlong param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  bVar2 = FUN_142bbd6b0();
  lVar3 = FUN_142bbd600(param_1);
  if (((lVar3 == 0) || (*(longlong *)(lVar3 + 8) == 0)) ||
     (lVar5 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10),
     lVar4 = UBlackboardKeyType_Object::GetPrivateStaticClass(), lVar5 != lVar4)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    lVar5 = lVar4;
    if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)bVar2 < *(int *)(param_1 + 0x1a0))) {
      lVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)bVar2 * 2) +
              *(longlong *)(param_1 + 0x188);
    }
    puVar1 = (undefined4 *)
             (lVar5 + (ulonglong)(*(byte *)(*(longlong *)(lVar3 + 8) + 0x2b) >> 1 & 1) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      local_res18 = *puVar1;
      local_res1c = puVar1[1];
      lVar4 = FWeakObjectPtr::Get(&local_res18);
    }
  }
  return lVar4;
}



// FUNCTION 142bbf7a0 FUN_142bbf7a0 body=266 status=ok
// SIG undefined FUN_142bbf7a0(void)

undefined8 * FUN_142bbf7a0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  bVar2 = FUN_142bbd6b0(param_1,param_3);
  lVar4 = FUN_142bbd600(param_1,bVar2);
  uVar7 = DAT_146b2c590;
  uVar3 = DAT_146b2c598;
  if (((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) &&
     (lVar6 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10), lVar5 = FUN_142c361d0(),
     uVar7 = DAT_146b2c590, uVar3 = DAT_146b2c598, lVar6 == lVar5)) {
    if ((*(int *)(param_1 + 400) == 0) || (*(int *)(param_1 + 0x1a0) <= (int)(uint)bVar2)) {
      lVar6 = 0;
    }
    else {
      lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)bVar2 * 2) +
              *(longlong *)(param_1 + 0x188);
    }
    puVar1 = (undefined8 *)
             (lVar6 + (ulonglong)(*(byte *)(*(longlong *)(lVar4 + 8) + 0x2b) >> 1 & 1) * 4);
    if (puVar1 != (undefined8 *)0x0) {
      uVar7 = *puVar1;
      uVar3 = *(undefined4 *)(puVar1 + 1);
    }
  }
  *param_2 = uVar7;
  *(undefined4 *)(param_2 + 1) = uVar3;
  return param_2;
}



// FUNCTION 142bbf8b0 GetValueAsString body=53 status=ok
// SIG undefined GetValueAsString(void)

undefined8
UBlackboardComponent::GetValueAsString(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142bbd6b0(param_1,param_3);
  FUN_142bae420(param_1,param_2,uVar1);
  return param_2;
}



// FUNCTION 142bbf8f0 GetValueAsString body=53 status=ok
// SIG undefined GetValueAsString(void)

undefined8
UBlackboardComponent::GetValueAsString(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142bbd6b0(param_1,param_3);
  FUN_140725750(param_1,param_2,uVar1);
  return param_2;
}



// FUNCTION 142bbf930 FUN_142bbf930 body=185 status=ok
// SIG undefined FUN_142bbf930(void)

longlong FUN_142bbf930(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x55) & 1) == 0) {
    lVar3 = *(longlong *)(lVar3 + 0x20);
    if (lVar3 == 0) {
      return 0;
    }
    lVar2 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    return lVar3;
  }
  if (lVar3 != 0) {
    lVar2 = UProgressBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142bbf986;
  }
  lVar3 = 0;
LAB_142bbf986:
  if (*(longlong *)(lVar3 + 0x120) == 0) {
    lVar3 = FUN_1423407b0(lVar3);
    return lVar3;
  }
  return *(longlong *)(lVar3 + 0x120);
}



// FUNCTION 142bbf9f0 FUN_142bbf9f0 body=120 status=ok
// SIG undefined FUN_142bbf9f0(void)

longlong FUN_142bbf9f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 != 0) {
      lVar3 = FUN_142a2f930();
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
        return lVar2;
      }
    }
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0();
      return lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 142bbfa70 FUN_142bbfa70 body=66 status=ok
// SIG undefined FUN_142bbfa70(void)

void FUN_142bbfa70(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 local_res18 [16];
  
  if ((*param_3 != DAT_146b2c608) || (-1 < *(char *)((longlong)param_3 + 0x15))) {
    if ((*param_3 == DAT_146b2c640) ||
       (local_res18[0] = 2, *(char *)((longlong)param_3 + 0x14) == '\0')) {
      local_res18[0] = 3;
    }
    (**(code **)(*param_1 + 0x288))(param_1,local_res18);
  }
  return;
}



// FUNCTION 142bbfac0 FUN_142bbfac0 body=294 status=ok
// SIG undefined FUN_142bbfac0(void)

undefined8 FUN_142bbfac0(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong local_18 [2];
  
  bVar6 = false;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x58);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  do {
    if (plVar5[4] == param_2) {
      return 0;
    }
    if ((((ulonglong)plVar5[7] >> 0xd & 1) == 0) && (((ulonglong)plVar5[7] >> 0x10 & 1) == 0)) {
      lVar3 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        bVar6 = true;
        uVar4 = (**(code **)(*plVar5 + 0x298))(plVar5,local_18,0,0);
        iVar2 = FUN_141592950(uVar4,L"FBlackboardKeySelector",1,0,0xffffffff);
        if (iVar2 == -1) goto LAB_142bbfb8c;
        bVar1 = true;
      }
      else {
LAB_142bbfb8c:
        bVar1 = false;
      }
      if ((bVar6) && (bVar6 = false, local_18[0] != 0)) {
        FMemory::Free();
      }
      if (bVar1) {
        return 1;
      }
    }
    plVar5 = (longlong *)plVar5[10];
    if (plVar5 == (longlong *)0x0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 142bbfbf0 FUN_142bbfbf0 body=19 status=ok
// SIG undefined FUN_142bbfbf0(void)

bool FUN_142bbfbf0(void)

{
  char cVar1;
  
  cVar1 = FUN_142bbd6b0();
  return cVar1 != -1;
}



// FUNCTION 142bbfc10 FUN_142bbfc10 body=43 status=ok
// SIG undefined FUN_142bbfc10(void)

ulonglong FUN_142bbfc10(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if ((*(longlong *)(param_1 + 0x548) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x548) + 0x1e8), uVar4 = 0, lVar2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x98);
    uVar3 = uVar1 >> 2;
    uVar4 = (ulonglong)uVar3;
    if ((uVar3 & 1) != 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 10),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142bbfc40 FUN_142bbfc40 body=166 status=ok
// SIG undefined FUN_142bbfc40(void)

bool FUN_142bbfc40(longlong param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  
  bVar2 = FUN_142bbd6b0();
  lVar4 = FUN_142bbd600(param_1,bVar2);
  if (((*(int *)(param_1 + 400) != 0) && ((int)(uint)bVar2 < *(int *)(param_1 + 0x1a0))) &&
     (piVar6 = (int *)((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)bVar2 * 2)
                      + *(longlong *)(param_1 + 0x188)), piVar6 != (int *)0x0)) {
    plVar5 = *(longlong **)(lVar4 + 8);
    if ((*(byte *)((longlong)plVar5 + 0x2b) & 2) != 0) {
      iVar1 = *piVar6;
      if ((iVar1 < 0) || (*(int *)(param_1 + 0x1b0) <= iVar1)) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar1 * 8);
      }
      piVar6 = piVar6 + 1;
    }
    cVar3 = (**(code **)(*plVar5 + 0x2d8))(plVar5,param_1,piVar6);
    return cVar3 == '\0';
  }
  return false;
}



// FUNCTION 142bbfcf0 FUN_142bbfcf0 body=156 status=ok
// SIG undefined FUN_142bbfcf0(void)

bool FUN_142bbfcf0(longlong param_1,byte param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  
  lVar3 = FUN_142bbd600();
  if (((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) &&
     (piVar5 = (int *)((ulonglong)
                       *(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
                      *(longlong *)(param_1 + 0x188)), piVar5 != (int *)0x0)) {
    plVar4 = *(longlong **)(lVar3 + 8);
    if ((*(byte *)((longlong)plVar4 + 0x2b) & 2) != 0) {
      iVar1 = *piVar5;
      if ((iVar1 < 0) || (*(int *)(param_1 + 0x1b0) <= iVar1)) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar1 * 8);
      }
      piVar5 = piVar5 + 1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x2d8))(plVar4,param_1,piVar5);
    return cVar2 == '\0';
  }
  return false;
}



// FUNCTION 142bbfd90 FUN_142bbfd90 body=317 status=ok
// SIG undefined FUN_142bbfd90(void)

void FUN_142bbfd90(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    iVar4 = *(int *)(param_1 + 0x1a0);
    uVar1 = *(undefined1 *)(param_1 + 0x1a0);
    uVar2 = *(ushort *)(param_2[1] + 0x28);
    iVar5 = iVar4 + 1;
    uVar3 = *(undefined2 *)(param_1 + 400);
    *(int *)(param_1 + 0x1a0) = iVar5;
    if (*(int *)(param_1 + 0x1a4) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x198);
    }
    *(undefined2 *)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 2) = uVar3;
    iVar4 = *(int *)(param_1 + 400);
    iVar5 = iVar4 + (uint)uVar2;
    *(int *)(param_1 + 400) = iVar5;
    if (*(int *)(param_1 + 0x194) < iVar5) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x188);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar4 + *(longlong *)(param_1 + 0x188)),0,(ulonglong)uVar2);
    iVar4 = *(int *)(param_1 + 0x1b0);
    iVar5 = iVar4 + 1;
    *(int *)(param_1 + 0x1b0) = iVar5;
    if (*(int *)(param_1 + 0x1b4) < iVar5) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x1a8);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar4 * 8) = 0;
    (**(code **)(*(longlong *)param_2[1] + 0x278))((longlong *)param_2[1],param_1);
    FUN_142bc0cb0(param_2[1],param_1,uVar1);
  }
  return;
}



// FUNCTION 142bbfed0 FUN_142bbfed0 body=926 status=ok
// SIG undefined FUN_142bbfed0(void)

void FUN_142bbfed0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  int local_res8;
  longlong local_48;
  
  iVar9 = 0;
  if (0 < (int)param_3[0xe]) {
    lVar6 = 0;
    do {
      FUN_142bc0b00(*(longlong *)(lVar6 + param_3[0xd]),param_2,
                    (ulonglong)*(ushort *)(*(longlong *)(lVar6 + param_3[0xd]) + 0x52) +
                    *(longlong *)(param_1 + 0x38),param_4,param_5);
      iVar9 = iVar9 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar9 < (int)param_3[0xe]);
  }
  lVar6 = (ulonglong)*(ushort *)((longlong)param_3 + 0x52) + *(longlong *)(param_1 + 0x38);
  FUN_142bc0b00(param_3,param_2,lVar6,param_4,param_5);
  uVar4 = (**(code **)(*param_3 + 0x2b0))();
  if ((uVar4 != 0) &&
     (piVar7 = (int *)(lVar6 - ((ulonglong)uVar4 + 3 & 0xfffffffffffffffc)), piVar7 != (int *)0x0))
  {
    iVar9 = *piVar7;
    if ((iVar9 < 0) || (*(int *)(param_2 + 0x200) <= iVar9)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (plVar10 = *(longlong **)(*(longlong *)(param_2 + 0x1f8) + (longlong)iVar9 * 8),
       plVar10 != (longlong *)0x0)) {
      lVar6 = UBTCompositeNode::GetPrivateStaticClass();
      if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        (**(code **)(*plVar10 + 0x2c8))(plVar10);
      }
    }
  }
  local_res8 = 0;
  if (0 < (int)param_3[0xc]) {
    local_48 = 0;
    do {
      iVar9 = 0;
      plVar10 = (longlong *)(param_3[0xb] + local_48);
      if (0 < (int)plVar10[3]) {
        lVar6 = 0;
        do {
          plVar2 = *(longlong **)(plVar10[2] + lVar6);
          lVar8 = (ulonglong)*(ushort *)((longlong)plVar2 + 0x52) + *(longlong *)(param_1 + 0x38);
          FUN_142bc0b00(plVar2,param_2,lVar8,param_4,param_5);
          uVar4 = (**(code **)(*plVar2 + 0x2b0))();
          if ((uVar4 != 0) &&
             (piVar7 = (int *)(lVar8 - ((ulonglong)uVar4 + 3 & 0xfffffffffffffffc)),
             piVar7 != (int *)0x0)) {
            iVar1 = *piVar7;
            if ((iVar1 < 0) || (*(int *)(param_2 + 0x200) <= iVar1)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) &&
               (lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x1f8) + (longlong)iVar1 * 8),
               lVar8 != 0)) {
              lVar5 = UBTDecorator::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                *(undefined1 *)(lVar8 + 0x59) = *(undefined1 *)((longlong)plVar2 + 0x59);
              }
            }
          }
          iVar9 = iVar9 + 1;
          lVar6 = lVar6 + 8;
        } while (iVar9 < (int)plVar10[3]);
      }
      if (*plVar10 == 0) {
        lVar6 = plVar10[1];
        if (lVar6 != 0) {
          iVar9 = 0;
          if (0 < *(int *)(lVar6 + 0x60)) {
            lVar8 = 0;
            do {
              plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x58) + lVar8);
              lVar6 = (ulonglong)*(ushort *)((longlong)plVar2 + 0x52) +
                      *(longlong *)(param_1 + 0x38);
              FUN_142bc0b00(plVar2,param_2,lVar6,param_4,param_5);
              uVar4 = (**(code **)(*plVar2 + 0x2b0))();
              if ((uVar4 != 0) &&
                 (piVar7 = (int *)(lVar6 - ((ulonglong)uVar4 + 3 & 0xfffffffffffffffc)),
                 piVar7 != (int *)0x0)) {
                iVar1 = *piVar7;
                if ((iVar1 < 0) || (*(int *)(param_2 + 0x200) <= iVar1)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if ((bVar3) &&
                   (lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x1f8) + (longlong)iVar1 * 8),
                   lVar6 != 0)) {
                  lVar5 = UBTService::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    *(undefined1 *)(lVar6 + 0x59) = *(undefined1 *)((longlong)plVar2 + 0x59);
                  }
                }
              }
              lVar6 = plVar10[1];
              iVar9 = iVar9 + 1;
              lVar8 = lVar8 + 8;
            } while (iVar9 < *(int *)(lVar6 + 0x60));
          }
          FUN_142bc0b00(lVar6,param_2,
                        (ulonglong)*(ushort *)(lVar6 + 0x52) + *(longlong *)(param_1 + 0x38),param_4
                        ,param_5);
        }
      }
      else {
        FUN_142bbfed0(param_1,param_2,*plVar10,param_4,param_5);
      }
      local_48 = local_48 + 0x30;
      local_res8 = local_res8 + 1;
    } while (local_res8 < (int)param_3[0xc]);
  }
  return;
}



// FUNCTION 142bc0270 FUN_142bc0270 body=192 status=ok
// SIG undefined FUN_142bc0270(void)

undefined8 FUN_142bc0270(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_142bc0330(param_2,param_3);
  if (cVar1 == '\0') {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_3 + 0x40)) {
    do {
      if (*(longlong *)(*(longlong *)(param_3 + 0x38) + (longlong)iVar2 * 0x18) == DAT_146b2c4f0) {
        cVar1 = *(char *)(param_3 + 0x4c) + (char)iVar2;
        goto LAB_142bc02df;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_3 + 0x40));
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    cVar1 = UBlackboardData::InternalGetKeyID(*(longlong *)(param_3 + 0x30),&DAT_146b2c4f0,0);
LAB_142bc02df:
    if (cVar1 != -1) {
      FUN_140725870(param_2,cVar1,*(undefined8 *)(param_1 + 0x488));
    }
  }
  FUN_142c2e050(param_1,param_2,param_3);
  return 1;
}



// FUNCTION 142bc0330 FUN_142bc0330 body=1854 status=ok
// SIG undefined FUN_142bc0330(void)

ulonglong FUN_142bc0330(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  ulonglong in_RAX;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort uVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  ulonglong _Size;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  byte *pbVar23;
  undefined4 local_res8;
  int local_res10;
  int local_res18;
  longlong local_res20;
  longlong local_68;
  byte *local_60;
  uint local_58;
  int local_54;
  
  if ((param_2 != *(longlong *)(param_1 + 0x180)) &&
     (((in_RAX = *(ulonglong *)(param_1 + 0x120), in_RAX != 0 ||
       (in_RAX = FUN_1423407b0(), in_RAX != 0)) &&
      (lVar4 = *(longlong *)(in_RAX + 0x150), lVar4 != 0)))) {
    lVar9 = FUN_142c32730();
    iVar15 = *(int *)(lVar9 + 0x90);
    uVar10 = (longlong)iVar15;
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar15) ||
       (uVar10 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
       *(longlong *)(uVar10 + (longlong)iVar15 * 8) != lVar9 + 0x88)) {
      in_RAX = uVar10 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar10 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      lVar9 = *(longlong *)(param_1 + 0x180);
      if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x48) & 1) != 0)) {
        UAISystem::UnregisterBlackboardComponent(lVar4,lVar9,param_1);
        FUN_142bba510(param_1);
      }
      uVar10 = 0;
      plVar19 = (longlong *)(param_1 + 0x188);
      lVar4 = *plVar19;
      plVar1 = (longlong *)(param_1 + 0x198);
      *plVar19 = 0;
      local_res18 = *(int *)(param_1 + 400);
      *(undefined8 *)(param_1 + 400) = 0;
      local_res20 = *plVar1;
      *plVar1 = 0;
      local_res10 = *(int *)(param_1 + 0x1a0);
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      lVar9 = *(longlong *)(param_1 + 0x180);
      *(longlong *)(param_1 + 0x180) = param_2;
      cVar7 = '\0';
      *(undefined4 *)(param_1 + 400) = 0;
      local_68 = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x194)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar19,0);
      }
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x1a4)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0);
      }
      *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) & 0xfffffffd;
      lVar11 = *(longlong *)(param_1 + 0x180);
      lVar16 = *(longlong *)(lVar11 + 0x30);
      if ((lVar16 != 0) && (iVar15 = *(int *)(lVar11 + 0x40), 0 < iVar15)) {
        iVar21 = *(int *)(lVar16 + 0x40);
        plVar19 = *(longlong **)(lVar11 + 0x38);
        uVar18 = uVar10;
        do {
          if (0 < iVar21) {
            uVar20 = uVar10;
            do {
              if (*(longlong *)(*(longlong *)(lVar16 + 0x38) + (longlong)(int)uVar20 * 0x18) ==
                  *plVar19) {
                cVar6 = (char)uVar20 + *(char *)(lVar16 + 0x4c);
                goto LAB_142bc04ea;
              }
              uVar13 = (int)uVar20 + 1;
              uVar20 = (ulonglong)uVar13;
            } while ((int)uVar13 < iVar21);
          }
          if (*(longlong *)(lVar16 + 0x30) != 0) {
            cVar6 = UBlackboardData::InternalGetKeyID(*(longlong *)(lVar16 + 0x30),plVar19,0);
LAB_142bc04ea:
            if (cVar6 != -1) {
              uVar10 = 0;
              goto LAB_142bc0a0b;
            }
          }
          uVar18 = uVar18 + 1;
          plVar19 = plVar19 + 3;
        } while ((longlong)uVar18 < (longlong)iVar15);
      }
      if (lVar11 != 0) {
        UBlackboardComponent::InitializeParentChain(param_1,lVar16);
        lVar16 = *(longlong *)(lVar11 + 0x30);
        if (lVar16 != 0) {
          cVar7 = *(char *)(lVar16 + 0x4c) + (char)*(undefined4 *)(lVar16 + 0x40);
        }
        *(char *)(lVar11 + 0x4c) = cVar7;
      }
      local_60 = (byte *)0x0;
      local_58 = 0;
      iVar15 = (uint)*(byte *)(*(longlong *)(param_1 + 0x180) + 0x4c) +
               *(int *)(*(longlong *)(param_1 + 0x180) + 0x40);
      local_54 = 0;
      uVar18 = uVar10;
      if (0 < iVar15) {
        TArray<float,FDefaultAllocator>::ResizeTo(&local_60,iVar15);
        uVar18 = (ulonglong)local_58;
      }
      pbVar23 = local_60;
      FUN_142bb41d0(param_1 + 0x198,iVar15);
      for (lVar11 = *(longlong *)(param_1 + 0x180); lVar11 != 0;
          lVar11 = *(longlong *)(lVar11 + 0x30)) {
        uVar20 = uVar10;
        if (0 < *(int *)(lVar11 + 0x40)) {
          do {
            plVar19 = *(longlong **)
                       (*(longlong *)(lVar11 + 0x38) + 8 + (longlong)(int)uVar20 * 0x18);
            if (plVar19 != (longlong *)0x0) {
              (**(code **)(*plVar19 + 0x278))(plVar19,param_1);
              uVar12 = (ushort)(*(byte *)((longlong)plVar19 + 0x2b) >> 1 & 1) * 4 +
                       (short)plVar19[5];
              local_res8 = CONCAT31(local_res8._1_3_,*(char *)(lVar11 + 0x4c) + (char)uVar20);
              if (2 < uVar12) {
                uVar12 = uVar12 + 3 & 0xfffc;
              }
              iVar15 = (int)uVar18;
              local_res8 = CONCAT22(uVar12,(undefined2)local_res8);
              local_58 = iVar15 + 1;
              if (local_54 < (int)local_58) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_60,uVar18);
                pbVar23 = local_60;
              }
              uVar18 = (ulonglong)local_58;
              *(int *)(pbVar23 + (longlong)iVar15 * 4) = local_res8;
            }
            uVar13 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar13;
          } while ((int)uVar13 < *(int *)(lVar11 + 0x40));
        }
      }
      iVar15 = (int)uVar18;
      AlgoImpl::
      IntroSortInternal<FBlackboardInitializationData,FIdentityFunctor,TDereferenceWrapper<FBlackboardInitializationData,FBlackboardInitializationData::FMemorySort>_>
                (pbVar23,(longlong)iVar15,(undefined1)local_res8,&local_res8);
      _Size = 0;
      pbVar14 = pbVar23;
      uVar20 = uVar18;
      if (0 < iVar15) {
        do {
          *(short *)(*(longlong *)(param_1 + 0x198) + (ulonglong)*pbVar14 * 2) = (short)_Size;
          _Size = (ulonglong)(ushort)((short)_Size + *(short *)(pbVar14 + 2));
          uVar20 = uVar20 - 1;
          pbVar14 = pbVar14 + 4;
        } while (uVar20 != 0);
      }
      iVar21 = *(int *)(param_1 + 400);
      iVar8 = iVar21 + (int)_Size;
      *(int *)(param_1 + 400) = iVar8;
      if (*(int *)(param_1 + 0x194) < iVar8) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow();
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar21 + *(longlong *)(param_1 + 0x188)),0,_Size);
      iVar21 = *(int *)(param_1 + 0x1b0);
      iVar8 = iVar21 + iVar15;
      *(int *)(param_1 + 0x1b0) = iVar8;
      if (*(int *)(param_1 + 0x1b4) < iVar8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_1 + 0x1a8));
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar21 * 8),0,
                 (longlong)iVar15 * 8);
      pbVar14 = pbVar23;
      if (0 < iVar15) {
        do {
          bVar2 = *pbVar14;
          lVar11 = *(longlong *)(param_1 + 0x180);
          uVar20 = uVar10;
          if (bVar2 != 0xff) {
            if (bVar2 < *(byte *)(lVar11 + 0x4c)) {
              if (*(longlong *)(lVar11 + 0x30) != 0) {
                uVar20 = UBlackboardData::GetKey(*(longlong *)(lVar11 + 0x30),bVar2);
              }
            }
            else {
              uVar20 = *(longlong *)(lVar11 + 0x38) +
                       ((ulonglong)bVar2 - (ulonglong)*(byte *)(lVar11 + 0x4c)) * 0x18;
            }
          }
          FUN_142bc0cb0(*(undefined8 *)(uVar20 + 8),param_1,bVar2);
          uVar18 = uVar18 - 1;
          pbVar14 = pbVar14 + 4;
        } while (uVar18 != 0);
      }
      if ((*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) != 0) {
        FUN_142bc5230(param_1);
      }
      lVar16 = *(longlong *)(param_1 + 0x270);
      lVar11 = lVar16 + (longlong)*(int *)(param_1 + 0x278) * 0x18;
      iVar15 = local_res10;
      lVar17 = local_res20;
      for (; local_res10 = iVar15, local_res20 = lVar17, lVar16 != lVar11; lVar16 = lVar16 + 0x18) {
        FUN_142bbfd90(param_1,lVar16);
        iVar15 = local_res10;
        lVar17 = local_res20;
      }
      lVar11 = *(longlong *)(param_1 + 0x180);
      lVar16 = lVar11;
      while( true ) {
        if ((lVar9 == 0) || (lVar16 == 0)) goto LAB_142bc09fc;
        if (lVar9 == lVar16) break;
        if (*(byte *)(lVar9 + 0x4c) < *(byte *)(lVar16 + 0x4c)) {
          lVar16 = *(longlong *)(lVar16 + 0x30);
        }
        else {
          lVar9 = *(longlong *)(lVar9 + 0x30);
        }
      }
      uVar18 = 0;
      local_res8 = (uint)*(byte *)(lVar11 + 0x4c) + *(int *)(lVar11 + 0x40);
      iVar21 = (uint)*(byte *)(lVar9 + 0x4c) + *(int *)(lVar9 + 0x40);
      uVar10 = uVar18;
      if (0 < iVar21) {
        do {
          lVar11 = UBlackboardData::GetKey(lVar9,uVar18 & 0xff);
          iVar8 = (int)uVar18;
          if ((lVar11 != 0) && (plVar19 = *(longlong **)(lVar11 + 8), plVar19 != (longlong *)0x0)) {
            if ((iVar8 < 0) || (*(int *)(param_1 + 0x1a0) <= iVar8)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              if ((iVar8 < 0) || (iVar15 <= iVar8)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                uVar12 = *(ushort *)(uVar10 + *(longlong *)(param_1 + 0x198));
                if (((int)(uint)uVar12 < *(int *)(param_1 + 400)) &&
                   ((int)(uint)*(ushort *)(uVar10 + lVar17) < local_res18)) {
                  (**(code **)(*plVar19 + 0x2a8))
                            (plVar19,param_1,(ulonglong)uVar12 + *(longlong *)(param_1 + 0x188),
                             plVar19,(ulonglong)*(ushort *)(uVar10 + lVar17) + lVar4);
                }
              }
            }
          }
          uVar18 = (ulonglong)(iVar8 + 1U);
          uVar10 = uVar10 + 2;
          pbVar23 = local_60;
        } while ((int)(iVar8 + 1U) < iVar21);
      }
      lVar9 = (longlong)*(int *)(param_1 + 0x278);
      if (0 < lVar9) {
        lVar17 = (longlong)iVar21;
        lVar11 = (longlong)local_res8;
        lVar16 = lVar11 * 2;
        lVar22 = lVar11 - lVar17;
        lVar11 = local_res20 + (lVar17 - lVar11) * 2;
        iVar21 = iVar21 - local_res8;
        iVar15 = local_res8;
        do {
          plVar19 = *(longlong **)(local_68 + 8 + *(longlong *)(param_1 + 0x270));
          if (plVar19 != (longlong *)0x0) {
            if ((lVar22 + lVar17 < 0) || (*(int *)(param_1 + 0x1a0) <= iVar15)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              if ((lVar17 < 0) || (local_res10 <= iVar21 + iVar15)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                uVar12 = *(ushort *)(lVar11 + lVar16);
                uVar3 = *(ushort *)(lVar16 + *(longlong *)(param_1 + 0x198));
                if (((int)(uint)uVar3 < *(int *)(param_1 + 400)) &&
                   ((int)(uint)uVar12 < local_res18)) {
                  (**(code **)(*plVar19 + 0x2a8))
                            (plVar19,param_1,(ulonglong)uVar3 + *(longlong *)(param_1 + 0x188),
                             plVar19,(ulonglong)uVar12 + lVar4);
                }
              }
            }
          }
          iVar15 = iVar15 + 1;
          local_68 = local_68 + 0x18;
          lVar16 = lVar16 + 2;
          lVar17 = lVar17 + 1;
          lVar9 = lVar9 + -1;
          pbVar23 = local_60;
        } while (lVar9 != 0);
      }
LAB_142bc09fc:
      if (pbVar23 != (byte *)0x0) {
        FMemory::Free(pbVar23);
      }
      uVar10 = 1;
LAB_142bc0a0b:
      if (local_res20 != 0) {
        FMemory::Free(local_res20);
      }
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
      return uVar10;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142bc0a70 FUN_142bc0a70 body=105 status=ok
// SIG undefined FUN_142bc0a70(void)

void FUN_142bc0a70(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_142340f20();
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = UThrobber::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    *(longlong *)(param_1 + 0x178) = lVar3;
    if (lVar3 != 0) {
      FUN_142bd8a10(lVar3,param_1);
    }
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_142bc0330(param_1);
  }
  return;
}



// FUNCTION 142bc0af0 SetTeamAssignmentMethod body=5 status=ok
// SIG undefined SetTeamAssignmentMethod(void)

void UPartyBeaconState::SetTeamAssignmentMethod(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}



// FUNCTION 142bc0b00 FUN_142bc0b00 body=429 status=ok
// SIG undefined FUN_142bc0b00(void)

void FUN_142bc0b00(longlong *param_1,longlong param_2,longlong param_3,int *param_4,
                  undefined4 param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  
  uVar5 = (**(code **)(*param_1 + 0x2b0))();
  plVar6 = (longlong *)0x0;
  plVar8 = plVar6;
  if ((uVar5 != 0) &&
     (plVar8 = (longlong *)(param_3 - ((ulonglong)(uVar5 + 3) & 0xfffffffffffffffc)),
     plVar8 != (longlong *)0x0)) {
    *(int *)plVar8 = -1;
  }
  if ((*(byte *)((longlong)param_1 + 0x55) & 4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142bc0ca6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x280))(param_1,param_2,param_3,param_5);
    return;
  }
  iVar7 = *param_4;
  if ((-1 < iVar7) && (iVar7 < *(int *)(param_2 + 0x200))) {
    plVar6 = *(longlong **)(*(longlong *)(param_2 + 0x1f8) + (longlong)iVar7 * 8);
  }
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)FUN_1417987a0(param_1,param_2,0,0xefffffff,0,0,0xff800000);
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x54);
    uVar2 = *(undefined2 *)((longlong)param_1 + 0x52);
    lVar4 = param_1[10];
    lVar3 = param_1[9];
    *(byte *)((longlong)plVar6 + 0x55) = *(byte *)((longlong)plVar6 + 0x55) | 1;
    plVar6[9] = lVar3;
    *(short *)(plVar6 + 10) = (short)lVar4;
    *(undefined2 *)((longlong)plVar6 + 0x52) = uVar2;
    *(undefined1 *)((longlong)plVar6 + 0x54) = uVar1;
    iVar7 = *(int *)(param_2 + 0x200);
    *(int *)(param_2 + 0x200) = iVar7 + 1;
    if (*(int *)(param_2 + 0x204) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x1f8,iVar7);
    }
    *(longlong **)(*(longlong *)(param_2 + 0x1f8) + (longlong)iVar7 * 8) = plVar6;
    iVar7 = *param_4;
  }
  *(int *)plVar8 = iVar7;
  (**(code **)(*plVar6 + 0x2c0))(plVar6,*(undefined8 *)(param_2 + 0x118));
  (**(code **)(*plVar6 + 0x280))(plVar6,param_2,param_3,param_5);
  (**(code **)(*plVar6 + 0x278))(plVar6,param_1[8]);
  (**(code **)(*plVar6 + 0x2a0))(plVar6,param_2);
  *param_4 = *param_4 + 1;
  return;
}



// FUNCTION 142bc0cb0 FUN_142bc0cb0 body=276 status=ok
// SIG undefined FUN_142bc0cb0(void)

void FUN_142bc0cb0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = (uint *)0x0;
  uVar3 = (uint)param_3 & 0xff;
  if ((*(int *)(param_2 + 400) != 0) && ((int)uVar3 < *(int *)(param_2 + 0x1a0))) {
    puVar4 = (uint *)((ulonglong)*(ushort *)(*(longlong *)(param_2 + 0x198) + (param_3 & 0xff) * 2)
                     + *(longlong *)(param_2 + 0x188));
  }
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) != 0) {
    lVar1 = param_1[2];
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    plVar2 = (longlong *)FUN_1417985e0(lVar1,param_2,0,0,0,0,0,0,0);
    *puVar4 = uVar3;
    *(longlong **)(*(longlong *)(param_2 + 0x1a8) + (param_3 & 0xff) * 8) = plVar2;
                    /* WARNING: Could not recover jumptable at 0x000142bc0da2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2,puVar4 + 1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142bc0dbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2,puVar4);
  return;
}



// FUNCTION 142bc0e70 FUN_142bc0e70 body=39 status=ok
// SIG undefined FUN_142bc0e70(void)

void FUN_142bc0e70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1457e8c00;
    return;
  }
  return;
}



// FUNCTION 142bc0ea0 FUN_142bc0ea0 body=2500 status=ok
// SIG undefined FUN_142bc0ea0(void)

void FUN_142bc0ea0(undefined8 param_1,longlong *param_2,char param_3,short *param_4,
                  longlong *param_5,ulonglong param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  short sVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  ushort uVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  ulonglong uVar21;
  longlong local_res8;
  ulonglong in_stack_ffffffffffffff50;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_51;
  
  sVar7 = (**(code **)(*param_2 + 0x2b0))(param_2);
  sVar8 = (**(code **)(*param_2 + 0x298))(param_2);
  sVar2 = *param_4;
  uVar16 = (sVar7 + 3U & 0xfffc) + sVar8;
  if (2 < uVar16) {
    uVar16 = uVar16 + 3 & 0xfffc;
  }
  iVar10 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar10 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_5,iVar10);
  }
  lVar11 = *param_5;
  local_68 = SUB84(param_2,0);
  uVar4 = local_68;
  uStack_64 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar5 = uStack_64;
  uStack_60 = (undefined4)param_1;
  uStack_5c = (undefined4)((ulonglong)param_1 >> 0x20);
  puVar1 = (undefined4 *)(lVar11 + (longlong)iVar10 * 0x18);
  *puVar1 = local_68;
  puVar1[1] = uStack_64;
  puVar1[2] = uStack_60;
  puVar1[3] = uStack_5c;
  *(ulonglong *)(lVar11 + 0x10 + (longlong)iVar10 * 0x18) =
       CONCAT17(uStack_51,CONCAT16(param_3,CONCAT24(sVar7 + 3U,CONCAT22(uVar16,sVar2)))) &
       0xfffffffcffffffff;
  (**(code **)(*param_2 + 0x278))(param_2,param_6);
  *param_4 = *param_4 + 1;
  lVar11 = UBTCompositeNode::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
      lVar11 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar14 = 0;
    if (0 < (int)param_2[0xe]) {
      uVar21 = uVar14;
      iVar10 = 0;
      do {
        iVar17 = iVar10 + 1;
        iVar20 = (int)uVar14;
        lVar11 = param_2[0xd];
        if (*(longlong *)(uVar21 + lVar11) == 0) {
          iVar15 = (int)param_2[0xe];
          iVar9 = (iVar15 - iVar20) + -1;
          if (iVar9 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar11 + (longlong)iVar20 * 8),
                       (void *)(lVar11 + (longlong)iVar17 * 8),(longlong)iVar9 << 3);
            iVar15 = (int)param_2[0xe];
          }
          iVar20 = iVar20 + -1;
          *(int *)(param_2 + 0xe) = iVar15 + -1;
          uVar21 = uVar21 - 8;
          iVar17 = iVar10;
        }
        else {
          in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xffffffff00000000;
          plVar19 = (longlong *)
                    FUN_1417987a0(*(longlong *)(uVar21 + lVar11),param_7,0,0xefffffff,0,
                                  in_stack_ffffffffffffff50,0xff800000);
          if (plVar19 == (longlong *)0x0) {
LAB_142bc1099:
            plVar19 = (longlong *)0x0;
          }
          else {
            lVar11 = UBTService::GetPrivateStaticClass();
            if ((*(int *)(plVar19[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar19[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                lVar11 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_142bc1099;
          }
          *(longlong **)(param_2[0xd] + uVar21) = plVar19;
          sVar7 = (**(code **)(*plVar19 + 0x2b0))(plVar19);
          sVar8 = (**(code **)(*plVar19 + 0x298))(plVar19);
          sVar2 = *param_4;
          uVar16 = (sVar7 + 3U & 0xfffc) + sVar8;
          if (2 < uVar16) {
            uVar16 = uVar16 + 3 & 0xfffc;
          }
          iVar10 = (int)param_5[1];
          *(int *)(param_5 + 1) = iVar10 + 1;
          if (*(int *)((longlong)param_5 + 0xc) < iVar10 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_5,iVar10);
          }
          lVar11 = *param_5;
          local_68 = SUB84(plVar19,0);
          uStack_64 = (undefined4)((ulonglong)plVar19 >> 0x20);
          puVar1 = (undefined4 *)(lVar11 + (longlong)iVar10 * 0x18);
          *puVar1 = local_68;
          puVar1[1] = uStack_64;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          *(ulonglong *)(lVar11 + 0x10 + (longlong)iVar10 * 0x18) =
               CONCAT17(uStack_51,CONCAT16(param_3,CONCAT24(sVar7 + 3U,CONCAT22(uVar16,sVar2)))) &
               0xfffffffcffffffff;
          (**(code **)(*plVar19 + 0x278))(plVar19,param_6);
          *param_4 = *param_4 + 1;
        }
        uVar14 = (ulonglong)(iVar20 + 1U);
        uVar21 = uVar21 + 8;
        iVar10 = iVar17;
      } while ((int)(iVar20 + 1U) < (int)param_2[0xe]);
    }
    iVar10 = 0;
    if (0 < (int)param_2[0xc]) {
      do {
        uVar14 = 0;
        plVar19 = (longlong *)((longlong)iVar10 * 0x30 + param_2[0xb]);
        uVar6 = (undefined1)iVar10;
        if (0 < (int)plVar19[3]) {
          iVar17 = 1;
          uVar21 = uVar14;
          do {
            iVar20 = (int)uVar14;
            lVar11 = plVar19[2];
            if (*(longlong *)(lVar11 + uVar21) == 0) {
              iVar15 = (int)plVar19[3];
              iVar9 = (iVar15 - iVar20) + -1;
              if (iVar9 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar11 + (longlong)iVar20 * 8),
                           (void *)(lVar11 + (longlong)iVar17 * 8),(longlong)iVar9 << 3);
                iVar15 = (int)plVar19[3];
              }
              iVar20 = iVar20 + -1;
              iVar17 = iVar17 + -1;
              *(int *)(plVar19 + 3) = iVar15 + -1;
              uVar21 = uVar21 - 8;
            }
            else {
              in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xffffffff00000000;
              plVar13 = (longlong *)
                        FUN_1417987a0(*(longlong *)(lVar11 + uVar21),param_7,0,0xefffffff,0,
                                      in_stack_ffffffffffffff50,0xff800000);
              if (plVar13 == (longlong *)0x0) {
LAB_142bc1255:
                plVar13 = (longlong *)0x0;
              }
              else {
                lVar11 = UBTDecorator::GetPrivateStaticClass();
                if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                    lVar11 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (!bVar3) goto LAB_142bc1255;
              }
              *(longlong **)(plVar19[2] + uVar21) = plVar13;
              sVar7 = (**(code **)(*plVar13 + 0x2b0))(plVar13);
              sVar8 = (**(code **)(*plVar13 + 0x298))(plVar13);
              sVar2 = *param_4;
              uVar16 = (sVar7 + 3U & 0xfffc) + sVar8;
              if (2 < uVar16) {
                uVar16 = uVar16 + 3 & 0xfffc;
              }
              iVar15 = (int)param_5[1];
              *(int *)(param_5 + 1) = iVar15 + 1;
              if (*(int *)((longlong)param_5 + 0xc) < iVar15 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(param_5,iVar15);
              }
              lVar11 = *param_5;
              local_68 = SUB84(plVar13,0);
              uStack_64 = (undefined4)((ulonglong)plVar13 >> 0x20);
              puVar1 = (undefined4 *)(lVar11 + (longlong)iVar15 * 0x18);
              *puVar1 = local_68;
              puVar1[1] = uStack_64;
              puVar1[2] = uVar4;
              puVar1[3] = uVar5;
              *(ulonglong *)(lVar11 + 0x10 + (longlong)iVar15 * 0x18) =
                   CONCAT17(uStack_51,CONCAT16(param_3,CONCAT24(sVar7 + 3U,CONCAT22(uVar16,sVar2))))
                   & 0xfffffffcffffffff;
              (**(code **)(*plVar13 + 0x278))(plVar13,param_6);
              *(undefined1 *)((longlong)plVar13 + 0x59) = uVar6;
              *param_4 = *param_4 + 1;
            }
            uVar14 = (ulonglong)(iVar20 + 1U);
            iVar17 = iVar17 + 1;
            uVar21 = uVar21 + 8;
          } while ((int)(iVar20 + 1U) < (int)plVar19[3]);
        }
        lVar11 = plVar19[1];
        if (lVar11 != 0) {
          lVar12 = UBTTask_RunBehavior::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (((bVar3) && (lVar11 = *(longlong *)(lVar11 + 0x70), lVar11 != 0)) &&
             (*(int *)(lVar11 + 0x40) != 0)) {
            iVar17 = (int)plVar19[3];
            uVar21 = 0;
            uVar14 = uVar21;
            iVar20 = iVar17;
            if (0 < *(int *)(lVar11 + 0x40)) {
              do {
                lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x38) + uVar14);
                if (lVar12 != 0) {
                  in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xffffffff00000000;
                  plVar13 = (longlong *)
                            FUN_1417987a0(lVar12,param_7,0,0xefffffff,0,in_stack_ffffffffffffff50,
                                          0xff800000);
                  if (plVar13 == (longlong *)0x0) {
LAB_142bc1418:
                    plVar13 = (longlong *)0x0;
                  }
                  else {
                    lVar12 = UBTDecorator::GetPrivateStaticClass();
                    if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
                        != lVar12 + 0x88)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (!bVar3) goto LAB_142bc1418;
                  }
                  iVar20 = (int)plVar19[3];
                  *(int *)(plVar19 + 3) = iVar20 + 1;
                  if (*(int *)((longlong)plVar19 + 0x1c) < iVar20 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (plVar19 + 2,iVar20);
                  }
                  *(longlong **)(plVar19[2] + (longlong)iVar20 * 8) = plVar13;
                  sVar7 = (**(code **)(*plVar13 + 0x2b0))(plVar13);
                  sVar8 = (**(code **)(*plVar13 + 0x298))(plVar13);
                  sVar2 = *param_4;
                  uVar16 = sVar8 + (sVar7 + 3U & 0xfffc);
                  if (2 < uVar16) {
                    uVar16 = uVar16 + 3 & 0xfffc;
                  }
                  iVar20 = (int)param_5[1];
                  *(int *)(param_5 + 1) = iVar20 + 1;
                  if (*(int *)((longlong)param_5 + 0xc) < iVar20 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(param_5,iVar20);
                  }
                  lVar12 = *param_5;
                  local_68 = SUB84(plVar13,0);
                  uStack_64 = (undefined4)((ulonglong)plVar13 >> 0x20);
                  puVar1 = (undefined4 *)(lVar12 + (longlong)iVar20 * 0x18);
                  *puVar1 = local_68;
                  puVar1[1] = uStack_64;
                  puVar1[2] = uVar4;
                  puVar1[3] = uVar5;
                  *(ulonglong *)(lVar12 + 0x10 + (longlong)iVar20 * 0x18) =
                       CONCAT17(uStack_51,
                                CONCAT16(param_3,CONCAT24(sVar7 + 3U,CONCAT22(uVar16,sVar2)))) &
                       0xfffffffcffffffff;
                  *(byte *)((longlong)plVar13 + 0x55) = *(byte *)((longlong)plVar13 + 0x55) | 2;
                  (**(code **)(*plVar13 + 0x278))(plVar13,param_6);
                  *(undefined1 *)((longlong)plVar13 + 0x59) = uVar6;
                  *param_4 = *param_4 + 1;
                }
                uVar18 = (int)uVar21 + 1;
                uVar21 = (ulonglong)uVar18;
                uVar14 = uVar14 + 8;
              } while ((int)uVar18 < *(int *)(lVar11 + 0x40));
              iVar20 = (int)plVar19[3];
            }
            MergeDecoratorOpsHelper(plVar19 + 4,lVar11 + 0x48,iVar17,iVar20 - iVar17);
          }
        }
        uVar18 = (uint)(in_stack_ffffffffffffff50 >> 0x20);
        if (*plVar19 == 0) {
          if (plVar19[1] != 0) {
            in_stack_ffffffffffffff50 = (ulonglong)uVar18 << 0x20;
            local_res8 = FUN_1417987a0(plVar19[1],param_7,0,0xefffffff,0,in_stack_ffffffffffffff50,
                                       0xff800000);
            if (local_res8 == 0) {
LAB_142bc1629:
              local_res8 = 0;
            }
            else {
              lVar11 = UBTTaskNode::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (!bVar3) goto LAB_142bc1629;
            }
            uVar14 = 0;
            plVar19[1] = local_res8;
            if (0 < *(int *)(local_res8 + 0x60)) {
              iVar17 = 1;
              lVar11 = local_res8;
              uVar21 = uVar14;
              do {
                iVar20 = (int)uVar14;
                lVar12 = *(longlong *)(lVar11 + 0x58);
                if (*(longlong *)(lVar12 + uVar21) == 0) {
                  iVar15 = *(int *)(lVar11 + 0x60);
                  iVar9 = (iVar15 - iVar20) + -1;
                  if (iVar9 != 0) {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)(lVar12 + (longlong)iVar20 * 8),
                               (void *)(lVar12 + (longlong)iVar17 * 8),(longlong)iVar9 << 3);
                    iVar15 = *(int *)(lVar11 + 0x60);
                  }
                  iVar20 = iVar20 + -1;
                  iVar17 = iVar17 + -1;
                  *(int *)(lVar11 + 0x60) = iVar15 + -1;
                  uVar21 = uVar21 - 8;
                }
                else {
                  in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xffffffff00000000;
                  plVar13 = (longlong *)
                            FUN_1417987a0(*(longlong *)(lVar12 + uVar21),param_7,0,0xefffffff,0,
                                          in_stack_ffffffffffffff50,0xff800000);
                  if (plVar13 == (longlong *)0x0) {
LAB_142bc1702:
                    plVar13 = (longlong *)0x0;
                  }
                  else {
                    lVar11 = UBTService::GetPrivateStaticClass();
                    if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
                        != lVar11 + 0x88)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (!bVar3) goto LAB_142bc1702;
                  }
                  *(longlong **)(uVar21 + *(longlong *)(plVar19[1] + 0x58)) = plVar13;
                  sVar7 = (**(code **)(*plVar13 + 0x2b0))(plVar13);
                  sVar8 = (**(code **)(*plVar13 + 0x298))(plVar13);
                  sVar2 = *param_4;
                  uVar16 = (sVar7 + 3U & 0xfffc) + sVar8;
                  if (2 < uVar16) {
                    uVar16 = uVar16 + 3 & 0xfffc;
                  }
                  iVar15 = (int)param_5[1];
                  *(int *)(param_5 + 1) = iVar15 + 1;
                  if (*(int *)((longlong)param_5 + 0xc) < iVar15 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(param_5,iVar15);
                  }
                  lVar11 = *param_5;
                  local_68 = SUB84(plVar13,0);
                  uStack_64 = (undefined4)((ulonglong)plVar13 >> 0x20);
                  puVar1 = (undefined4 *)(lVar11 + (longlong)iVar15 * 0x18);
                  *puVar1 = local_68;
                  puVar1[1] = uStack_64;
                  puVar1[2] = uVar4;
                  puVar1[3] = uVar5;
                  *(ulonglong *)(lVar11 + 0x10 + (longlong)iVar15 * 0x18) =
                       CONCAT17(uStack_51,
                                CONCAT16(param_3,CONCAT24(sVar7 + 3U,CONCAT22(uVar16,sVar2)))) &
                       0xfffffffcffffffff;
                  (**(code **)(*plVar13 + 0x278))(plVar13,param_6);
                  *(undefined1 *)((longlong)plVar13 + 0x59) = uVar6;
                  *param_4 = *param_4 + 1;
                }
                lVar11 = plVar19[1];
                uVar14 = (ulonglong)(iVar20 + 1U);
                iVar17 = iVar17 + 1;
                uVar21 = uVar21 + 8;
              } while ((int)(iVar20 + 1U) < *(int *)(lVar11 + 0x60));
            }
            goto LAB_142bc17e2;
          }
        }
        else {
          in_stack_ffffffffffffff50 = (ulonglong)uVar18 << 0x20;
          local_res8 = FUN_1417987a0(*plVar19,param_7,0,0xefffffff,0,in_stack_ffffffffffffff50,
                                     0xff800000);
          if (local_res8 == 0) {
LAB_142bc1596:
            local_res8 = 0;
          }
          else {
            lVar11 = UBTCompositeNode::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_142bc1596;
          }
          *plVar19 = local_res8;
LAB_142bc17e2:
          if (local_res8 != 0) {
            in_stack_ffffffffffffff50 = param_6;
            FUN_142bc0ea0(param_2,local_res8,param_3 + '\x01',param_4,param_5,param_6,param_7);
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)param_2[0xc]);
    }
    (**(code **)(*param_2 + 0x2c8))(param_2,*param_4 + -1);
  }
  return;
}



// FUNCTION 142bc1870 InitializeParentChain body=58 status=ok
// SIG undefined InitializeParentChain(void)

void UBlackboardComponent::InitializeParentChain(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    InitializeParentChain(param_1,*(undefined8 *)(param_2 + 0x30));
    lVar1 = *(longlong *)(param_2 + 0x30);
    if (lVar1 != 0) {
      *(char *)(param_2 + 0x4c) = *(char *)(lVar1 + 0x4c) + (char)*(undefined4 *)(lVar1 + 0x40);
      return;
    }
    *(undefined1 *)(param_2 + 0x4c) = 0;
  }
  return;
}



// FUNCTION 142bc18b0 InternalGetKeyID body=85 status=ok
// SIG undefined InternalGetKeyID(void)

ulonglong UBlackboardData::InternalGetKeyID(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  do {
    iVar1 = *(int *)(param_1 + 0x40);
    uVar3 = 0;
    plVar2 = (longlong *)(longlong)iVar1;
    if (0 < iVar1) {
      plVar2 = *(longlong **)(param_1 + 0x38);
      uVar4 = uVar3;
      do {
        if (*plVar2 == *param_2) {
          return (ulonglong)(byte)(*(char *)(param_1 + 0x4c) + (char)uVar4);
        }
        uVar4 = (ulonglong)((int)uVar4 + 1);
        uVar3 = uVar3 + 1;
        plVar2 = plVar2 + 3;
      } while ((longlong)uVar3 < (longlong)iVar1);
    }
    param_1 = *(longlong *)(param_1 + 0x30);
  } while ((param_1 != 0) && (param_3 == 0));
  return CONCAT71((int7)((ulonglong)plVar2 >> 8),0xff);
}



// FUNCTION 142bc1930 IsAllowedByFilter body=136 status=ok
// SIG undefined IsAllowedByFilter(void)

ulonglong UBlackboardKeyType_Class::IsAllowedByFilter(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_2 + 0x30) == lVar2) {
LAB_142bc19ab:
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
      for (; in_RAX = 0, lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == *(longlong *)(param_2 + 0x30)) goto LAB_142bc19ab;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142bc19c0 IsAllowedByFilter body=111 status=ok
// SIG undefined IsAllowedByFilter(void)

ulonglong UBlackboardKeyType_Enum::IsAllowedByFilter(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if (((char)in_RAX != '\0') &&
       (in_RAX = *(ulonglong *)(param_1 + 0x30), *(ulonglong *)(param_2 + 0x30) == in_RAX)) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142bc1a30 IsAllowedByFilter body=136 status=ok
// SIG undefined IsAllowedByFilter(void)

ulonglong UBlackboardKeyType_Object::IsAllowedByFilter(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_2 + 0x30) == lVar2) {
LAB_142bc1aab:
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
      for (; in_RAX = 0, lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == *(longlong *)(param_2 + 0x30)) goto LAB_142bc1aab;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142bc1ac0 FUN_142bc1ac0 body=301 status=ok
// SIG undefined FUN_142bc1ac0(void)

ulonglong FUN_142bc1ac0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  longlong *plVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong local_res10;
  
  if (param_2 != (longlong *)0x0) {
    lVar5 = param_2[10];
    iVar12 = 0;
    if (0 < *(int *)(param_1 + 0x1e0)) {
      local_res10 = 0;
      do {
        in_RAX = *(ulonglong *)(param_1 + 0x1d8);
        iVar10 = 0;
        lVar1 = local_res10 + in_RAX;
        if (0 < *(int *)(local_res10 + 0x20 + in_RAX)) {
          lVar11 = 0;
          do {
            plVar8 = *(longlong **)(lVar11 + *(longlong *)(lVar1 + 0x18));
            if (plVar8 == param_2) goto LAB_142bc1be9;
            if ((((*(byte *)((longlong)param_2 + 0x55) & 1) != 0) && (plVar8 != (longlong *)0x0)) &&
               ((short)plVar8[10] == (short)lVar5)) {
              uVar2 = *(ushort *)((longlong)plVar8 + 0x52);
              lVar4 = *(longlong *)(lVar1 + 0x38);
              uVar6 = (**(code **)(*plVar8 + 0x2b0))();
              in_RAX = (ulonglong)uVar6;
              if (uVar6 == 0) {
LAB_142bc1b99:
                plVar8 = (longlong *)0x0;
              }
              else {
                piVar9 = (int *)(((ulonglong)uVar2 + lVar4) -
                                ((ulonglong)(uVar6 + 3) & 0xfffffffffffffffc));
                in_RAX = (ulonglong)(uVar6 + 3);
                if (piVar9 == (int *)0x0) goto LAB_142bc1b99;
                iVar3 = *piVar9;
                uVar7 = (ulonglong)iVar3;
                in_RAX = uVar7;
                if ((iVar3 < 0) || (*(int *)(param_1 + 0x200) <= iVar3)) goto LAB_142bc1b99;
                in_RAX = *(ulonglong *)(param_1 + 0x1f8);
                plVar8 = *(longlong **)(in_RAX + uVar7 * 8);
              }
              if (plVar8 == param_2) {
LAB_142bc1be9:
                return CONCAT71((int7)(in_RAX >> 8),1);
              }
            }
            iVar10 = iVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (iVar10 < *(int *)(lVar1 + 0x20));
        }
        local_res10 = local_res10 + 0x60;
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0x1e0));
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142bc1bf0 FUN_142bc1bf0 body=113 status=ok
// SIG undefined FUN_142bc1bf0(void)

undefined8 FUN_142bc1bf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x180);
  do {
    if (lVar6 == 0) {
      return 0;
    }
    if (lVar6 == param_2) {
      return 1;
    }
    iVar4 = *(int *)(lVar6 + 0x40);
    if (iVar4 == *(int *)(param_2 + 0x40)) {
      plVar3 = *(longlong **)(param_2 + 0x38);
      if (iVar4 == 0) {
        return 1;
      }
      lVar5 = *(longlong *)(lVar6 + 0x38) - (longlong)plVar3;
      while (*(longlong *)(lVar5 + (longlong)plVar3) == *plVar3) {
        lVar1 = *(longlong *)(lVar5 + 8 + (longlong)plVar3);
        lVar2 = plVar3[1];
        if (lVar1 == 0) {
          bVar7 = lVar2 == 0;
        }
        else {
          if (lVar2 == 0) break;
          bVar7 = *(longlong *)(lVar1 + 0x10) == *(longlong *)(lVar2 + 0x10);
        }
        if (!bVar7) break;
        plVar3 = plVar3 + 3;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) {
          return 1;
        }
      }
    }
    lVar6 = *(longlong *)(lVar6 + 0x30);
  } while( true );
}



// FUNCTION 142bc1ca0 IsEmpty body=75 status=ok
// SIG undefined IsEmpty(void)

longlong UBlackboardKeyType_Rotator::IsEmpty
                   (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint7 uVar1;
  float fStack_14;
  
  uVar1 = (uint7)(uint3)((uint)*(float *)(param_3 + 1) >> 8);
  if ((((float)*param_3 == (float)DAT_146690f00) &&
      (fStack_14 = (float)((ulonglong)*param_3 >> 0x20), fStack_14 == DAT_146690f00._4_4_)) &&
     (*(float *)(param_3 + 1) == DAT_146690f08)) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}



// FUNCTION 142bc1d00 IsEmpty body=128 status=ok
// SIG undefined IsEmpty(void)

longlong UBlackboardKeyType_Vector::IsEmpty
                   (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  float fVar1;
  uint7 uVar2;
  float fVar3;
  float fStack_14;
  
  fVar1 = *(float *)(param_3 + 1);
  fVar3 = (float)*param_3;
  uVar2 = (uint7)(uint3)((uint)fVar1 >> 8);
  if ((-(float)DAT_146690f20 < fVar3) && (fVar3 < (float)DAT_146690f20)) {
    fStack_14 = (float)((ulonglong)*param_3 >> 0x20);
    if ((-DAT_146690f20._4_4_ < fStack_14) && (fStack_14 < DAT_146690f20._4_4_)) {
      if ((-DAT_146690f28 < fVar1) && (fVar1 < DAT_146690f28)) {
        return (ulonglong)uVar2 << 8;
      }
    }
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 142bc1d80 FUN_142bc1d80 body=206 status=ok
// SIG undefined FUN_142bc1d80(void)

ulonglong FUN_142bc1d80(longlong param_1,ulonglong param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  uVar5 = FUN_142bbb940();
  iVar4 = (int)uVar5;
  if ((iVar4 < 0) || (*(int *)(param_1 + 0x1e0) <= iVar4)) goto LAB_142bc1e3c;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x1d8) + 0x10 + (longlong)iVar4 * 0x60);
  uVar5 = 0;
  if (uVar1 == 0) goto LAB_142bc1e3c;
  uVar5 = uVar1;
  if ((param_2 == *(ulonglong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar4 * 0x60)) ||
     (param_2 == uVar1)) goto LAB_142bc1e2a;
  lVar2 = *(longlong *)(param_2 + 0x48);
  if ((param_3 + 1 < 0) || (*(int *)(lVar2 + 0x60) <= param_3 + 1)) {
LAB_142bc1e13:
    uVar3 = *(short *)(lVar2 + 0x8c) + 1;
  }
  else {
    plVar7 = (longlong *)(((longlong)param_3 + 1) * 0x30 + *(longlong *)(lVar2 + 0x58));
    lVar6 = *plVar7;
    if ((lVar6 == 0) && (lVar6 = plVar7[1], lVar6 == 0)) goto LAB_142bc1e13;
    uVar3 = *(ushort *)(lVar6 + 0x50);
  }
  uVar5 = (ulonglong)uVar3;
  if ((*(ushort *)(param_2 + 0x50) <= *(ushort *)(uVar1 + 0x50)) &&
     (*(ushort *)(uVar1 + 0x50) < uVar3)) {
LAB_142bc1e2a:
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
LAB_142bc1e3c:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 142bc1e70 FUN_142bc1e70 body=164 status=ok
// SIG undefined FUN_142bc1e70(void)

ulonglong FUN_142bc1e70(longlong param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x180);
  if (lVar3 != 0) {
    bVar1 = *(byte *)(lVar3 + 0x4c);
    uVar2 = *(int *)(lVar3 + 0x40) + (uint)bVar1;
    in_RAX = (ulonglong)uVar2;
    if ((int)(uint)param_2 < (int)uVar2) {
      if (param_2 != 0xff) {
        if (param_2 < bVar1) {
          if (*(longlong *)(lVar3 + 0x30) == 0) {
            return 0;
          }
          lVar3 = UBlackboardData::GetKey();
        }
        else {
          lVar3 = *(longlong *)(lVar3 + 0x38) + ((ulonglong)param_2 - (ulonglong)bVar1) * 0x18;
        }
        if (lVar3 != 0) {
          return (ulonglong)(*(byte *)(lVar3 + 0x10) & 1);
        }
      }
      return 0;
    }
    iVar4 = ((uint)param_2 - *(int *)(lVar3 + 0x40)) - (uint)bVar1;
    if (((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x278))) &&
       (in_RAX = *(ulonglong *)(param_1 + 0x270),
       (*(byte *)(in_RAX + 0x10 + (longlong)iVar4 * 0x18) & 1) != 0)) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142bc1f40 IsRelatedTo body=107 status=ok
// SIG undefined IsRelatedTo(void)

undefined8 UBlackboardData::IsRelatedTo(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == param_2) {
        return 1;
      }
    }
    if (param_2 != 0) {
      for (lVar2 = *(longlong *)(param_2 + 0x30); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == param_1) {
          return 1;
        }
      }
      if ((param_1 != 0) &&
         (((lVar1 == 0 || (*(longlong *)(param_2 + 0x30) == 0)) ||
          (cVar3 = IsRelatedTo(lVar1), cVar3 == '\0')))) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 142bc1fd0 IsVectorValueSet body=92 status=ok
// SIG undefined IsVectorValueSet(void)

undefined1 UBlackboardComponent::IsVectorValueSet(undefined8 param_1)

{
  undefined1 uVar1;
  float local_18;
  float local_14;
  float local_10;
  
  uVar1 = FUN_142bbd6b0();
  FUN_140725750(param_1,&local_18,uVar1);
  if (((local_18 == (float)DAT_146690f20) && (local_14 == DAT_146690f20._4_4_)) &&
     (local_10 == DAT_146690f28)) {
    return 0;
  }
  return 1;
}



// FUNCTION 142bc2030 FUN_142bc2030 body=12 status=ok
// SIG undefined FUN_142bc2030(void)

int FUN_142bc2030(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  iVar4 = *(int *)((longlong)param_2 + 0x84);
  if (iVar4 != 1) goto LAB_142bb3165;
  iVar4 = 2;
  *(undefined4 *)((longlong)param_2 + 0x84) = 2;
  if ((param_2[5] == 0) || (iVar2 = FUN_142bb2ff0(param_2[5],1), iVar2 == 1)) {
LAB_142bb312b:
    if ((*(byte *)(param_2 + 0x12) & 1) == 0) {
      iVar4 = (**(code **)(*param_2 + 0x2c0))(param_2,1);
    }
  }
  else {
    if (1 < iVar2) {
      if (iVar2 < 4) goto LAB_142bb3145;
      if (iVar2 == 4) goto LAB_142bb312b;
    }
    iVar4 = 4;
  }
LAB_142bb3145:
  if ((*(int *)((longlong)param_2 + 0x84) < iVar4) &&
     (*(int *)((longlong)param_2 + 0x84) = iVar4, iVar4 == 4)) {
    FUN_142bca010(param_2,3);
  }
LAB_142bb3165:
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x198) + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar4 * 0x18;
    lVar6 = lVar5;
    do {
      lVar1 = *(longlong *)(param_1 + 400);
      if (*(longlong **)(lVar5 + lVar1) == param_2) {
        iVar2 = *(int *)(param_1 + 0x198);
        iVar3 = (iVar2 - iVar4) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar6 + lVar1),(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x18),
                     (longlong)iVar3 * 0x18);
          iVar2 = *(int *)(param_1 + 0x198);
        }
        *(int *)(param_1 + 0x198) = iVar2 + -1;
      }
      lVar6 = lVar6 + -0x18;
      lVar5 = lVar5 + -0x18;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return 0;
}



// FUNCTION 142bc2050 K2_ForceAbortAction body=130 status=ok
// SIG undefined K2_ForceAbortAction(void)

int UPawnActionsComponent::K2_ForceAbortAction(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  if (param_2 != (longlong *)0x0) {
    if (*(int *)((longlong)param_2 + 0x84) < 2) {
      *(undefined4 *)((longlong)param_2 + 0x84) = 2;
    }
    if (param_2[5] != 0) {
      FUN_142bb2ff0(param_2[5],0);
    }
    iVar1 = (**(code **)(*param_2 + 0x2c0))(param_2,0);
    if (iVar1 != 4) {
      iVar1 = 4;
    }
    if ((*(int *)((longlong)param_2 + 0x84) < iVar1) &&
       (*(int *)((longlong)param_2 + 0x84) = iVar1, iVar1 == 4)) {
      FUN_142bca010(param_2,3);
    }
    return iVar1;
  }
  return 0;
}



// FUNCTION 142bc20e0 FUN_142bc20e0 body=130 status=ok
// SIG undefined FUN_142bc20e0(void)

ulonglong FUN_142bc20e0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar5 = 0;
    uVar1 = *param_3;
    plVar2 = *(longlong **)(param_1 + 0x490);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = UThrobber::GetPrivateStaticClass();
      lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
      if (lVar4 != 0) {
        FUN_142bc6aa0(lVar4,param_2,uVar1,0);
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142bc2170 FUN_142bc2170 body=12 status=ok
// SIG undefined FUN_142bc2170(void)

longlong FUN_142bc2170(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 in_RAX;
  uint7 uVar5;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar5 = (uint7)((ulonglong)in_RAX >> 8);
  if (param_2 == 0) {
    return (ulonglong)uVar5 << 8;
  }
  if ((*(int *)(param_2 + 0x84) != 0) && (*(int *)(param_2 + 0x88) < 2)) {
    return (ulonglong)uVar5 << 8;
  }
  *(undefined4 *)(param_2 + 0x60) = param_3;
  *(longlong *)(param_2 + 0x38) = param_1;
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x178) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x178) + 0x490), plVar1 != (longlong *)0x0)) {
    lVar3 = FUN_142c2de20();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = UThrobber::GetPrivateStaticClass();
      uVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
      *(undefined8 *)(param_2 + 0x48) = uVar4;
    }
  }
  *(undefined8 *)(param_2 + 0x40) = param_4;
  lVar3 = FUN_142bc3e30(param_1,param_2,5);
  return lVar3;
}



// FUNCTION 142bc2180 FUN_142bc2180 body=43 status=ok
// SIG undefined FUN_142bc2180(void)

void FUN_142bc2180(longlong *param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  (**(code **)(*param_1 + 0x8b8))(local_18,&local_18,2);
  return;
}



// FUNCTION 142bc21b0 FUN_142bc21b0 body=13 status=ok
// SIG undefined FUN_142bc21b0(void)

void FUN_142bc21b0(longlong *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000142bc21b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8c0))(param_1,param_2,2);
  return;
}



// FUNCTION 142bc21c0 FUN_142bc21c0 body=1699 status=ok
// SIG undefined FUN_142bc21c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142bc21c0(longlong *param_1,longlong *param_2,float *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint7 uVar10;
  longlong lVar8;
  longlong lVar9;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1c8 [32];
  undefined1 *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  float local_190;
  undefined1 local_188 [4];
  float local_184;
  float local_180 [2];
  undefined1 local_178 [16];
  undefined1 local_168 [72];
  longlong local_120;
  longlong local_100;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c4;
  float local_bc;
  ulonglong local_b8;
  
  uVar6 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if (param_2 == (longlong *)0x0) {
LAB_142bc27fb:
    return uVar6 & 0xffffffffffffff00;
  }
  if (((*param_3 == 0.0) && (param_3[1] == 0.0)) && (param_3[2] == 0.0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  local_b8 = uVar6;
  if (bVar3) {
    uVar7 = (**(code **)(*param_1 + 0x610))(param_1,param_3,&local_198);
    uVar10 = (uint7)((ulonglong)uVar7 >> 8);
    if (((*param_3 == 0.0) && (param_3[1] == 0.0)) && (param_3[2] == 0.0)) {
      uVar6 = CONCAT71(uVar10,1);
    }
    else {
      uVar6 = (ulonglong)uVar10 << 8;
    }
    if ((char)uVar6 != '\0') goto LAB_142bc27fb;
  }
  (**(code **)(*param_2 + 0x618))(param_2,local_178,param_1[0x91]);
  lVar8 = param_1[0x91];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2c5d8) && (_Init_thread_header(&DAT_146b2c5d8), DAT_146b2c5d8 == -1))
  {
    FName::FName(&DAT_146b2c5d0,"LineOfSight",1);
    _Init_thread_footer(&DAT_146b2c5d8);
  }
  local_1a8 = (undefined1 *)lVar8;
  FUN_1422ffb20(local_168,DAT_146b2c5d0,local_188,1);
  FCollisionQueryParams::AddIgnoredActor(local_168,param_2);
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  local_1a0 = &DAT_146aefe68;
  local_1a8 = local_168;
  cVar5 = UWorld::LineTraceTestByChannel(uVar7,param_3,local_178,3);
  if (cVar5 == '\0') {
    uVar6 = 1;
    goto LAB_142bc2795;
  }
  lVar8 = FUN_1429d7ab0();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  plVar12 = (longlong *)0x0;
  plVar14 = param_2;
  if (bVar3) {
LAB_142bc23e6:
    lVar8 = param_2[0x2d];
    if (lVar8 == 0) {
      local_198 = _DAT_1468b5d90;
      local_190 = DAT_1468b5d98;
    }
    else {
      local_198 = *(undefined8 *)(lVar8 + 0x220);
      local_190 = *(float *)(lVar8 + 0x228);
    }
    fVar4 = local_190;
    uVar7 = local_198;
    fVar21 = (float)local_198;
    fVar20 = local_198._4_4_;
    fVar16 = (fVar21 - *param_3) * (fVar21 - *param_3) +
             (local_198._4_4_ - param_3[1]) * (local_198._4_4_ - param_3[1]) +
             (local_190 - param_3[2]) * (local_190 - param_3[2]);
    if ((fVar16 <= 6.4e+07) && ((plVar14 != (longlong *)0x0 || (fVar16 <= 4e+06)))) {
      (**(code **)(*param_2 + 0x578))(param_2,local_180,&local_184);
      if ((param_4 == '\0') || ((*(byte *)(param_1 + 0xa8) & 2) == 0)) {
        local_190 = fVar4 + local_184;
        local_198 = uVar7;
        uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
        local_1a0 = &DAT_146aefe68;
        local_1a8 = local_168;
        cVar5 = UWorld::LineTraceTestByChannel(uVar7,param_3,&local_198,3);
        if (cVar5 == '\0') {
LAB_142bc2514:
          uVar6 = 1;
          goto LAB_142bc2795;
        }
      }
      if (((*(uint *)(param_1 + 0xa8) & 4) == 0) &&
         ((param_4 == '\0' || ((*(uint *)(param_1 + 0xa8) & 2) != 0)))) {
        fVar16 = *param_3;
        fVar1 = param_3[1];
        fVar2 = param_3[2];
        if (0.0001 <= (local_180[0] * local_180[0]) /
                      ((fVar21 - fVar16) * (fVar21 - fVar16) + (fVar20 - fVar1) * (fVar20 - fVar1) +
                      (fVar4 - fVar2) * (fVar4 - fVar2))) {
          plVar14 = (longlong *)0x0;
          fVar19 = fVar21 - local_180[0];
          local_e0 = fVar4;
          fVar21 = fVar21 + local_180[0];
          fVar17 = fVar20 - local_180[0] * -1.0;
          local_d4 = fVar4;
          local_c8 = fVar4;
          local_e8 = CONCAT44(fVar17,fVar19);
          fVar22 = fVar20 + local_180[0] * -1.0;
          fVar17 = fVar17 - fVar1;
          local_bc = fVar4;
          local_dc = CONCAT44(fVar20 + local_180[0],fVar21);
          fVar18 = (fVar20 + local_180[0]) - fVar1;
          local_d0 = CONCAT44(fVar20 - local_180[0],fVar19);
          local_c4 = CONCAT44(fVar22,fVar21);
          fVar15 = (fVar19 - fVar16) * (fVar19 - fVar16) + fVar17 * fVar17 +
                   (fVar4 - fVar2) * (fVar4 - fVar2);
          fVar18 = (fVar21 - fVar16) * (fVar21 - fVar16) + fVar18 * fVar18 +
                   (fVar4 - fVar2) * (fVar4 - fVar2);
          fVar17 = fVar15;
          if (fVar18 <= fVar15) {
            plVar13 = plVar12;
            if (fVar18 < fVar15) {
              plVar14 = (longlong *)0x1;
              plVar13 = (longlong *)0x0;
              fVar17 = fVar18;
            }
          }
          else {
            plVar13 = (longlong *)0x1;
            plVar14 = plVar12;
            fVar15 = fVar18;
          }
          fVar20 = (fVar20 - local_180[0]) - fVar1;
          fVar20 = (fVar19 - fVar16) * (fVar19 - fVar16) + fVar20 * fVar20 +
                   (fVar4 - fVar2) * (fVar4 - fVar2);
          if (fVar20 <= fVar15) {
            if (fVar20 < fVar17) {
              plVar14 = (longlong *)0x2;
              fVar17 = fVar20;
            }
          }
          else {
            plVar13 = (longlong *)0x2;
            fVar15 = fVar20;
          }
          fVar22 = fVar22 - fVar1;
          fVar20 = (fVar21 - fVar16) * (fVar21 - fVar16) + fVar22 * fVar22 +
                   (fVar4 - fVar2) * (fVar4 - fVar2);
          local_190 = fVar4;
          if (fVar20 <= fVar15) {
            if (fVar20 < fVar17) {
              plVar14 = (longlong *)0x3;
              plVar12 = (longlong *)0x0;
            }
          }
          else {
            plVar13 = (longlong *)0x3;
          }
          do {
            iVar11 = (int)plVar12;
            if ((iVar11 != (int)plVar14) && (iVar11 != (int)plVar13)) {
              uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
              local_1a0 = &DAT_146aefe68;
              local_1a8 = local_168;
              cVar5 = UWorld::LineTraceTestByChannel
                                (uVar7,param_3,(longlong)&local_e8 + (longlong)iVar11 * 0xc,3);
              if (cVar5 == '\0') goto LAB_142bc2514;
            }
            plVar12 = (longlong *)(ulonglong)(iVar11 + 1U);
          } while ((int)(iVar11 + 1U) < 4);
        }
      }
    }
  }
  else {
    lVar8 = param_2[0x2d];
    if (lVar8 != 0) {
      lVar9 = FUN_142912e90();
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      plVar14 = plVar12;
      if (bVar3) goto LAB_142bc23e6;
    }
  }
  uVar6 = 0;
LAB_142bc2795:
  if (local_100 != 0) {
    FMemory::Free();
  }
  if (local_120 != 0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 142bc2870 FUN_142bc2870 body=504 status=ok
// SIG undefined FUN_142bc2870(void)

undefined8 FUN_142bc2870(longlong param_1,longlong param_2,longlong *param_3,undefined2 *param_4)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar9;
  undefined2 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong local_res8;
  ulonglong in_stack_ffffffffffffff90;
  undefined2 local_58 [4];
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined2 local_30;
  undefined6 uStack_2e;
  ulonglong uVar8;
  
  uVar11 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    plVar12 = *(longlong **)(param_1 + 0x30);
    uVar8 = uVar11;
    do {
      if (*plVar12 == param_2) {
        *param_3 = plVar12[1];
        *param_4 = (short)plVar12[2];
        return 1;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      plVar12 = plVar12 + 3;
    } while ((int)uVar7 < *(int *)(param_1 + 0x38));
  }
  if (*(longlong *)(param_2 + 0x28) == 0) {
    return 0;
  }
  local_res8 = 0;
  local_40 = param_2;
  uStack_38 = FUN_1417987a0(*(longlong *)(param_2 + 0x28),param_1,0,0xefffffff,0,
                            in_stack_ffffffffffffff90 & 0xffffffff00000000,0xff800000);
  if (uStack_38 != 0) {
    lVar9 = UBTCompositeNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uStack_38 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uStack_38 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_142bc2955;
  }
  uStack_38 = 0;
LAB_142bc2955:
  lVar9 = uStack_38;
  local_50 = 0;
  local_48 = 0;
  local_58[0] = 0;
  FUN_142bc0ea0(0,uStack_38,0,local_58,&local_50,param_2,param_1);
  AlgoImpl::
  IntroSortInternal<FNodeInitializationData,FIdentityFunctor,TDereferenceWrapper<FNodeInitializationData,FNodeInitializationData::FMemorySort>_>
            (local_50,(longlong)(int)local_48,local_res8 & 0xff,&local_res8);
  uVar8 = uVar11;
  uVar13 = uVar11;
  if (0 < (int)local_48) {
    do {
      sVar3 = *(short *)(uVar8 + 0x14 + local_50);
      uVar7 = (int)uVar13 + 1;
      lVar5 = *(longlong *)(uVar8 + local_50);
      uVar2 = *(undefined1 *)(uVar8 + 0x16 + local_50);
      uVar10 = *(undefined2 *)(uVar8 + 0x10 + local_50);
      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(uVar8 + 8 + local_50);
      *(undefined2 *)(lVar5 + 0x50) = uVar10;
      *(short *)(lVar5 + 0x52) = sVar3 + (short)uVar11;
      *(undefined1 *)(lVar5 + 0x54) = uVar2;
      uVar11 = (ulonglong)(ushort)((short)uVar11 + *(short *)(uVar8 + 0x12 + local_50));
      uVar8 = uVar8 + 0x18;
      uVar13 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)local_48);
  }
  iVar4 = *(int *)(param_1 + 0x38);
  uVar10 = (undefined2)uVar11;
  *(int *)(param_1 + 0x38) = iVar4 + 1;
  local_30 = uVar10;
  if (*(int *)(param_1 + 0x3c) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x30,iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  puVar1 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x18);
  *puVar1 = (undefined4)local_40;
  puVar1[1] = local_40._4_4_;
  puVar1[2] = (undefined4)uStack_38;
  puVar1[3] = uStack_38._4_4_;
  *(ulonglong *)(lVar5 + 0x10 + (longlong)iVar4 * 0x18) = CONCAT62(uStack_2e,local_30);
  *param_3 = lVar9;
  *param_4 = uVar10;
  if (local_50 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142bc2a70 MergeDecoratorOpsHelper body=406 status=ok
// SIG undefined MergeDecoratorOpsHelper(void)

void MergeDecoratorOpsHelper(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  ulonglong uVar9;
  ulonglong uVar8;
  
  iVar2 = (int)param_1[1];
  sVar5 = (short)param_3;
  if ((iVar2 != 0) || ((int)param_2[1] != 0)) {
    uVar9 = 0;
    if (0 < param_3) {
      sVar6 = 2;
      if (iVar2 == 0) {
        sVar6 = sVar5 + 1;
      }
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + 4),(void *)*param_1,(longlong)iVar2 << 2);
      puVar3 = (undefined1 *)*param_1;
      *puVar3 = 2;
      *(short *)(puVar3 + 2) = sVar6;
      if ((iVar2 == 0) && (uVar8 = uVar9, 0 < param_3)) {
        do {
          iVar2 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
          }
          lVar4 = *param_1;
          *(undefined1 *)(lVar4 + (longlong)iVar2 * 4) = 1;
          *(short *)(lVar4 + 2 + (longlong)iVar2 * 4) = (short)uVar8;
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while ((int)uVar7 < param_3);
      }
    }
    if ((int)param_2[1] == 0) {
      iVar2 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
      }
      lVar4 = *param_1;
      *(undefined1 *)(lVar4 + (longlong)iVar2 * 4) = 2;
      *(short *)(lVar4 + 2 + (longlong)iVar2 * 4) = (short)param_4;
      if (0 < param_4) {
        do {
          iVar2 = (int)param_1[1];
          sVar6 = (short)uVar9;
          *(int *)(param_1 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
          }
          lVar4 = *param_1;
          uVar7 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar7;
          *(undefined1 *)(lVar4 + (longlong)iVar2 * 4) = 1;
          *(short *)(lVar4 + 2 + (longlong)iVar2 * 4) = sVar5 + sVar6;
        } while ((int)uVar7 < param_4);
      }
    }
    else {
      uVar8 = uVar9;
      if (0 < (int)param_2[1]) {
        do {
          cVar1 = *(char *)(uVar8 + *param_2);
          sVar6 = *(short *)(uVar8 + 2 + *param_2);
          if (cVar1 == '\x01') {
            sVar6 = sVar6 + sVar5;
          }
          iVar2 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
          }
          lVar4 = *param_1;
          uVar7 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar7;
          *(char *)(lVar4 + (longlong)iVar2 * 4) = cVar1;
          *(short *)(lVar4 + 2 + (longlong)iVar2 * 4) = sVar6;
          uVar8 = uVar8 + 4;
        } while ((int)uVar7 < (int)param_2[1]);
      }
    }
  }
  return;
}



// FUNCTION 142bc2c10 FUN_142bc2c10 body=1427 status=ok
// SIG undefined FUN_142bc2c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_142bc2c10(longlong *param_1,int *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  char cVar10;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 *local_190;
  undefined8 local_188;
  float local_180;
  int local_178;
  longlong local_168;
  longlong *plStack_160;
  int local_158 [4];
  longlong local_148;
  longlong *plStack_140;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [8];
  longlong local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  uint local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  cVar10 = '\0';
  local_178 = DAT_146690efc;
  if (((*(uint *)(param_3 + 4) & 1) == 0) ||
     (((*(uint *)(param_3 + 4) & 2) != 0 && (*param_3 == 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    *param_2 = DAT_146690efc;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (param_1[0xa9] == 0) {
    *param_2 = DAT_146690efc;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  lVar9 = param_3[3];
  if (lVar9 != 0) {
    lVar7 = UNavigationQueryFilter::GetPrivateStaticClass();
    do {
      if (lVar9 == lVar7) goto LAB_142bc2cee;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  if (param_1[0xaf] != 0) {
    lVar7 = UNavigationQueryFilter::GetPrivateStaticClass();
    for (lVar9 = param_1[0xaf]; (lVar9 != 0 && (lVar9 != lVar7));
        lVar9 = *(longlong *)(lVar9 + 0x30)) {
    }
  }
LAB_142bc2cee:
  bVar2 = true;
  lVar9 = 0;
  if ((*(uint *)(param_3 + 4) >> 1 & 1) == 0) {
    local_188 = param_3[1];
    local_180 = *(float *)(param_3 + 2);
    iVar6 = _finite((double)(float)local_188);
    if (iVar6 == 0) {
LAB_142bc2d4b:
      bVar3 = true;
    }
    else {
      iVar6 = _finite((double)local_188._4_4_);
      if ((iVar6 == 0) || (iVar6 = _finite((double)local_180), iVar6 == 0)) goto LAB_142bc2d4b;
      bVar3 = false;
    }
    if (!bVar3) {
      lVar7 = param_3[1];
      local_180 = *(float *)(param_3 + 2);
      if ((((((float)lVar7 <= -(float)DAT_146690f20) || ((float)DAT_146690f20 <= (float)lVar7)) ||
           (local_188._4_4_ = (float)((ulonglong)lVar7 >> 0x20),
           local_188._4_4_ <= -DAT_146690f20._4_4_)) ||
          ((DAT_146690f20._4_4_ <= local_188._4_4_ || (local_180 <= -DAT_146690f28)))) ||
         (DAT_146690f28 <= local_180)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      local_188 = lVar7;
      if (bVar3) {
        if ((*(uint *)(param_3 + 4) >> 4 & 1) != 0) {
          lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
          if (lVar7 != 0) {
            lVar9 = *(longlong *)(lVar7 + 0x138);
            if (lVar9 != 0) {
              lVar7 = FUN_142ba9430();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) goto LAB_142bc2e34;
            }
            lVar9 = 0;
          }
LAB_142bc2e34:
          lVar7 = (**(code **)(param_1[0x8b] + 0x10))();
          local_128 = _DAT_1468b5d90;
          local_120 = DAT_1468b5d98;
          local_118 = 0;
          if (lVar9 != 0) {
            local_180 = *(float *)(param_3 + 2);
            local_188 = param_3[1];
            if (lVar7 == 0) {
              local_198 = FUN_142b8e790(lVar9,0);
            }
            else {
              local_198 = thunk_FUN_142b8f070(lVar9,lVar7);
            }
            local_190 = &local_88;
            local_88 = 0;
            uStack_80 = 0;
            cVar5 = FUN_142b94770(lVar9,&local_188,&local_128,&DAT_1468b5d90);
            bVar2 = true;
            if (cVar5 == '\0') {
              bVar2 = false;
            }
          }
          if ((*(byte *)(param_3 + 4) & 2) == 0) {
            param_3[1] = local_128;
            *(undefined4 *)(param_3 + 2) = local_120;
          }
          if (!bVar2) goto LAB_142bc314b;
        }
        cVar5 = UPathFollowingComponent::HasReached(param_1[0xa9],param_3);
        if (cVar5 != '\0') goto LAB_142bc3019;
        if (bVar2) goto LAB_142bc2f0b;
      }
    }
LAB_142bc314b:
    piVar8 = (int *)FUN_142c0f1e0(param_1[0xa9],local_130,5);
  }
  else {
    cVar5 = UPathFollowingComponent::HasReached(param_1[0xa9],param_3);
    if (cVar5 == '\0') {
LAB_142bc2f0b:
      local_98 = 0;
      local_d4 = local_d4 | 1;
      local_b8 = local_b8 & 0xffffffe0;
      local_100 = DAT_146690ef0;
      local_f4 = DAT_146690ef0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_a8 = 0x3f000000;
      local_108 = 0xffffffff;
      local_104 = 0;
      local_f8 = DAT_146690ef8;
      local_ec = DAT_146690ef8;
      local_d0 = 0xffffffff;
      local_b4 = 0xbf800000;
      local_b0 = 0xbf800000;
      local_ac = 0xbf800000;
      local_a0 = 0;
      local_90 = 0;
      local_d8 = local_104;
      local_cc = local_104;
      cVar5 = FUN_142bb4ab0(param_1,param_3,&local_108);
      if (cVar5 != '\0') {
        local_168 = 0;
        plStack_160 = (longlong *)0x0;
        (**(code **)(*param_1 + 0x860))(param_1,param_3,&local_108,&local_168);
        if (local_168 == 0) {
          local_158[0] = DAT_146690efc;
          piVar8 = local_158;
        }
        else {
          local_78 = local_168;
          plStack_70 = plStack_160;
          if (plStack_160 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
            UNLOCK();
          }
          piVar8 = (int *)(**(code **)(*param_1 + 0x858))(param_1,local_134,param_3,&local_78);
        }
        iVar6 = *piVar8;
        if (iVar6 != -1) {
          cVar10 = '\x02';
          *(uint *)(param_1 + 0xa8) =
               *(uint *)(param_1 + 0xa8) ^
               ((*(uint *)(param_3 + 4) >> 7 & 0xff) << 3 ^ *(uint *)(param_1 + 0xa8)) & 8;
          local_178 = iVar6;
          if (param_4 != (longlong *)0x0) {
            local_148 = local_168;
            plStack_140 = plStack_160;
            if (plStack_160 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
              UNLOCK();
            }
            if (&local_148 != param_4) {
              local_148 = *param_4;
              plStack_140 = (longlong *)param_4[1];
              local_68 = local_168;
              plStack_60 = plStack_160;
              *param_4 = local_168;
              param_4[1] = (longlong)plStack_160;
            }
            plVar4 = plStack_140;
            if (plStack_140 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_140 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_140)(plStack_140);
                LOCK();
                piVar8 = (int *)((longlong)plVar4 + 0xc);
                iVar6 = *piVar8;
                *piVar8 = *piVar8 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plStack_140 + 8))(plStack_140,1);
                }
              }
            }
          }
        }
        plVar4 = plStack_160;
        if (plStack_160 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_160 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_160)(plStack_160);
            LOCK();
            piVar8 = (int *)((longlong)plVar4 + 0xc);
            iVar6 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
      }
      FPathFindingQuery::~FPathFindingQuery(&local_108);
      if (cVar10 != '\0') goto LAB_142bc3168;
      goto LAB_142bc314b;
    }
LAB_142bc3019:
    piVar8 = (int *)FUN_142c0f1e0(param_1[0xa9],local_138,0,0);
    cVar10 = '\x01';
  }
  local_178 = *piVar8;
LAB_142bc3168:
  *param_2 = local_178;
  *(char *)(param_2 + 1) = cVar10;
  return param_2;
}



// FUNCTION 142bc31b0 FUN_142bc31b0 body=397 status=ok
// SIG undefined FUN_142bc31b0(void)

undefined1
FUN_142bc31b0(longlong *param_1,undefined8 param_2,undefined4 param_3,byte param_4,byte param_5,
             byte param_6,longlong param_7,byte param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  uint local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_20;
  
  plVar5 = (longlong *)param_1[0xa9];
  if ((plVar5 != (longlong *)0x0) && ((int)plVar5[0x3c] != 0)) {
    (**(code **)(*plVar5 + 0x428))(plVar5,param_1,0x180,DAT_146b2c570,1);
  }
  lVar7 = param_7;
  local_48 = DAT_146690f28;
  local_40 = 0;
  local_30 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_50 = DAT_146690f20;
  local_34 = 0xbf800000;
  local_38 = ((uint)param_8 * 2 | (uint)param_5) << 2 | local_38 & 0xffffff73 | 0x73;
  local_58 = param_2;
  if (param_7 != 0) {
    lVar6 = UNavigationQueryFilter::GetPrivateStaticClass();
    lVar8 = lVar7;
    do {
      if (lVar8 == lVar6) goto LAB_142bc329a;
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
  }
  lVar7 = param_1[0xaf];
LAB_142bc329a:
  local_38 = ((uint)param_6 << 2 | (uint)param_4) << 5 | local_38 & 0xffffff5f;
  local_40 = lVar7;
  local_34 = param_3;
  lVar7 = (**(code **)(*param_1 + 0x850))(param_1,&param_7,&local_58,0);
  plVar5 = local_28;
  uVar4 = *(undefined1 *)(lVar7 + 4);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar4;
}



// FUNCTION 142bc3340 FUN_142bc3340 body=408 status=ok
// SIG undefined FUN_142bc3340(void)

undefined1
FUN_142bc3340(longlong *param_1,undefined8 *param_2,undefined4 param_3,byte param_4,byte param_5,
             byte param_6,byte param_7,longlong param_8,byte param_9)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  uint local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_20;
  
  plVar5 = (longlong *)param_1[0xa9];
  if ((plVar5 != (longlong *)0x0) && ((int)plVar5[0x3c] != 0)) {
    (**(code **)(*plVar5 + 0x428))(plVar5,param_1,0x180,DAT_146b2c570,1);
  }
  lVar7 = param_8;
  local_48 = *(undefined4 *)(param_2 + 1);
  local_50 = *param_2;
  local_58 = 0;
  local_40 = 0;
  local_30 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_34 = 0xbf800000;
  local_38 = (((uint)param_6 * 2 | (uint)param_9) * 2 | (uint)param_5) << 2 | local_38 & 0xffffff61
             | 0x61;
  if (param_8 != 0) {
    lVar6 = UNavigationQueryFilter::GetPrivateStaticClass();
    lVar8 = lVar7;
    do {
      if (lVar8 == lVar6) goto LAB_142bc3435;
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
  }
  lVar7 = param_1[0xaf];
LAB_142bc3435:
  local_38 = ((uint)param_7 << 2 | (uint)param_4) << 5 | local_38 & 0xffffff5f;
  local_40 = lVar7;
  local_34 = param_3;
  lVar7 = (**(code **)(*param_1 + 0x850))(param_1,&param_8,&local_58,0);
  plVar5 = local_28;
  uVar4 = *(undefined1 *)(lVar7 + 4);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar4;
}



// FUNCTION 142bc34e0 FUN_142bc34e0 body=376 status=ok
// SIG undefined FUN_142bc34e0(void)

void FUN_142bc34e0(longlong param_1,longlong *param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *local_48;
  undefined8 local_40;
  undefined2 local_38;
  char local_36;
  byte local_35;
  
  uVar5 = 0;
  lVar6 = (longlong)param_3 * 0x30 + *(longlong *)(param_1 + 0x58);
  if (*param_4 == 2) {
    uVar8 = uVar5;
    if (0 < *(int *)(lVar6 + 0x18)) {
      do {
        iVar2 = *param_4;
        plVar3 = *(longlong **)(uVar5 + *(longlong *)(lVar6 + 0x10));
        if ((*(byte *)(plVar3 + 0xc) & 0x10) != 0) {
          if ((*(byte *)((longlong)plVar3 + 0x55) & 4) != 0) {
            plVar3 = (longlong *)FUN_142bbe030(plVar3,param_2);
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x2f0))(plVar3,param_2,iVar2);
          }
        }
        uVar7 = (int)uVar8 + 1;
        uVar5 = uVar5 + 8;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(lVar6 + 0x18));
    }
  }
  else {
    uVar8 = uVar5;
    if (0 < *(int *)(lVar6 + 0x18)) {
      do {
        plVar3 = *(longlong **)(uVar8 + *(longlong *)(lVar6 + 0x10));
        if ((*(byte *)(plVar3 + 0xc) & 0x20) != 0) {
          plVar4 = plVar3;
          if ((*(byte *)((longlong)plVar3 + 0x55) & 4) != 0) {
            plVar4 = (longlong *)FUN_142bbe030(plVar3,param_2);
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x2f8))(plVar4,param_2,param_4);
          }
        }
        iVar2 = *param_4;
        if ((*(byte *)(plVar3 + 0xc) & 0x10) != 0) {
          plVar4 = plVar3;
          if ((*(byte *)((longlong)plVar3 + 0x55) & 4) != 0) {
            plVar4 = (longlong *)FUN_142bbe030(plVar3,param_2);
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x2f0))(plVar4,param_2,iVar2);
          }
        }
        cVar1 = *(char *)((longlong)plVar3 + 100);
        if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
          local_35 = local_35 & 0xfe;
          local_40 = 0;
          local_38 = *(undefined2 *)(*param_2 + 800);
          local_48 = plVar3;
          local_36 = cVar1;
          FUN_142bb3e30(param_2,&local_48);
        }
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
        uVar8 = uVar8 + 8;
      } while ((int)uVar7 < *(int *)(lVar6 + 0x18));
    }
  }
  return;
}



// FUNCTION 142bc3660 FUN_142bc3660 body=549 status=ok
// SIG undefined FUN_142bc3660(void)

void FUN_142bc3660(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int iVar2;
  byte *pbVar3;
  char cVar4;
  byte *pbVar5;
  longlong *plVar6;
  longlong lVar7;
  int iStack_5c;
  int local_58;
  
  plVar1 = (longlong *)(param_1 + 0x1b8);
  iStack_5c = -1;
  local_58 = -1;
  TSet<TTuple<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride>,TDefaultMapHashableKeyFuncs<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride,0>,FDefaultSetAllocator>
  ::ConditionalRehash(plVar1,*(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x1ec),0);
  if (*(int *)(param_1 + 0x200) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x1f8);
    if (*(longlong *)(param_1 + 0x1f8) == 0) {
      lVar7 = param_1 + 0x1f0;
    }
    local_58 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x200) - 1U & (ulonglong)param_2) * 4)
    ;
    iStack_5c = local_58;
    if (local_58 != -1) {
      do {
        local_58 = *(int *)((longlong)iStack_5c * 0x20 + 0x18 + *plVar1);
        if (*(byte *)((longlong)iStack_5c * 0x20 + *plVar1) == param_2) break;
        iStack_5c = local_58;
      } while (local_58 != -1);
    }
  }
  if (iStack_5c != -1) {
    if ((*(byte *)(param_1 + 0x268) & 1) != 0) {
      plVar1 = (longlong *)(param_1 + 600);
      pbVar3 = (byte *)*plVar1;
      iVar2 = *(int *)(param_1 + 0x260);
      pbVar5 = pbVar3;
      do {
        if (pbVar5 == pbVar3 + iVar2) {
LAB_142bc3771:
          *(int *)(param_1 + 0x260) = iVar2 + 1;
          if (*(int *)(param_1 + 0x264) < iVar2 + 1) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
          }
          *(byte *)((longlong)iVar2 + *plVar1) = param_2;
          return;
        }
        if (*pbVar5 == param_2) {
          if ((int)pbVar5 - (int)pbVar3 != -1) {
            return;
          }
          goto LAB_142bc3771;
        }
        pbVar5 = pbVar5 + 1;
      } while( true );
    }
joined_r0x000142bc379d:
    if (iStack_5c != -1) {
      lVar7 = (longlong)iStack_5c * 0x20 + *plVar1;
      if (((*(int *)(lVar7 + 0x10) == 0) || (*(longlong **)(lVar7 + 8) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar7 + 8) + 0x18))(), cVar4 == '\0')) {
LAB_142bc3822:
        FUN_142bc7d50(plVar1,iStack_5c);
      }
      else {
        if (*(int *)(lVar7 + 0x10) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(lVar7 + 8);
        }
        cVar4 = (**(code **)(*plVar6 + 0x38))(plVar6,param_1,param_2);
        if (cVar4 != '\x01') goto LAB_142bc3822;
      }
      if (local_58 == -1) {
        return;
      }
      iStack_5c = local_58;
      do {
        local_58 = *(int *)((longlong)iStack_5c * 0x20 + 0x18 + *plVar1);
        if (*(byte *)((longlong)iStack_5c * 0x20 + *plVar1) == param_2) break;
        iStack_5c = local_58;
      } while (local_58 != -1);
      goto joined_r0x000142bc379d;
    }
  }
  return;
}



// FUNCTION 142bc3890 FUN_142bc3890 body=267 status=ok
// SIG undefined FUN_142bc3890(void)

void FUN_142bc3890(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  if (((*(byte *)(param_1 + 0xd) & 4) == 0) && ((*(byte *)(param_1 + 0xb) & 4) == 0)) {
    return;
  }
  plVar3 = param_1;
  if ((*(byte *)((longlong)param_1 + 0x55) & 4) != 0) {
    plVar3 = (longlong *)FUN_142bbe030();
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar5 = (ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
          *(longlong *)
           ((ulonglong)*(ushort *)(*param_2 + 800) * 0x60 + 0x38 + *(longlong *)(*param_2 + 0x1d8));
  if ((*(byte *)(param_1 + 0xb) & 4) != 0) {
    if (((*(byte *)(param_1 + 0xd) & 2) == 0) && ((*(byte *)(param_1 + 0xb) & 8) != 0)) {
      uVar1 = (**(code **)(*param_1 + 0x2b0))(param_1);
      if (uVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar5 - ((ulonglong)(uVar1 + 3) & 0xfffffffffffffffc);
      }
      fVar6 = *(float *)(lVar4 + 4);
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if (0.0 < fVar6) goto LAB_142bc394f;
    }
    FUN_142bc9f50(plVar3,lVar5);
  }
LAB_142bc394f:
  uVar2 = *(uint *)(param_1 + 0xd);
  if ((uVar2 & 4) != 0) {
    (**(code **)(*plVar3 + 0x2e8))(plVar3,param_2);
    uVar2 = *(uint *)(param_1 + 0xd);
  }
  if ((uVar2 & 1) != 0) {
    (**(code **)(*plVar3 + 0x2d8))(plVar3,*param_2,lVar5,0);
  }
  return;
}



// FUNCTION 142bc39a0 FUN_142bc39a0 body=110 status=ok
// SIG undefined FUN_142bc39a0(void)

void FUN_142bc39a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(param_1 + 0xa8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x278))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 142bc3a10 FUN_142bc3a10 body=358 status=ok
// SIG undefined FUN_142bc3a10(void)

void FUN_142bc3a10(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong *local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  byte local_35;
  
  uVar3 = *(ushort *)((longlong)param_1 + 0x52);
  lVar4 = param_1[0xb];
  lVar5 = *(longlong *)
           ((ulonglong)*(ushort *)(*param_2 + 800) * 0x60 + 0x38 + *(longlong *)(*param_2 + 0x1d8));
  if (((*(byte *)(param_1 + 0x11) & 0x10) == 0) ||
     (cVar7 = (**(code **)(*param_1 + 0x2f8))(param_1,param_2,param_3), cVar7 != '\0')) {
    lVar1 = (longlong)param_3 * 0x30 + param_1[0xb];
    iVar9 = 0;
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar10 = 0;
      do {
        plVar6 = *(longlong **)(lVar10 + *(longlong *)(lVar1 + 0x10));
        if ((*(byte *)(plVar6 + 0xc) & 8) != 0) {
          plVar8 = plVar6;
          if ((*(byte *)((longlong)plVar6 + 0x55) & 4) != 0) {
            plVar8 = (longlong *)FUN_142bbe030(plVar6,param_2);
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x2e8))(plVar8,param_2);
          }
        }
        bVar2 = *(byte *)((longlong)plVar6 + 100);
        if (bVar2 == 1) {
          local_36 = 2;
LAB_142bc3afd:
          local_35 = local_35 & 0xfe;
          local_40 = 0;
          local_38 = *(undefined2 *)(*param_2 + 800);
          local_48 = plVar6;
          FUN_142bb3e30(param_2,&local_48);
        }
        else if ((1 < bVar2) && (bVar2 < 4)) {
          local_36 = 1;
          goto LAB_142bc3afd;
        }
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (iVar9 < *(int *)(lVar1 + 0x18));
    }
  }
  lVar4 = *(longlong *)(lVar4 + (longlong)param_3 * 0x30);
  if (lVar4 != 0) {
    FUN_142bc4250(lVar4,param_2);
  }
  *(char *)((ulonglong)uVar3 + lVar5) = (char)param_3;
  return;
}



// FUNCTION 142bc3b80 FUN_142bc3b80 body=369 status=ok
// SIG undefined FUN_142bc3b80(void)

void FUN_142bc3b80(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  byte local_35;
  ulonglong uVar6;
  
  uVar6 = 0;
  iVar4 = 0;
  if (*(longlong **)(param_3 + 0x48) == param_1) {
    if (0 < (int)param_1[0xc]) {
      plVar7 = (longlong *)param_1[0xb];
      uVar3 = uVar6;
      do {
        if ((*plVar7 == param_3) || (plVar7[1] == param_3)) goto LAB_142bc3c0e;
        iVar4 = iVar4 + 1;
        uVar3 = uVar3 + 1;
        plVar7 = plVar7 + 6;
      } while ((longlong)uVar3 < (longlong)(int)param_1[0xc]);
    }
    iVar4 = -2;
  }
  else {
    iVar4 = (int)*(char *)(*(longlong *)
                            ((ulonglong)*(ushort *)(*param_2 + 800) * 0x60 + 0x38 +
                            *(longlong *)(*param_2 + 0x1d8)) +
                          (ulonglong)*(ushort *)((longlong)param_1 + 0x52));
  }
LAB_142bc3c0e:
  plVar7 = (longlong *)((longlong)iVar4 * 0x30 + param_1[0xb]);
  lVar2 = plVar7[1];
  if (lVar2 == 0) {
    if (*plVar7 != 0) {
      FUN_142bc4330(*plVar7,param_2,param_4);
    }
  }
  else {
    uVar3 = uVar6;
    if (0 < *(int *)(lVar2 + 0x60)) {
      do {
        local_35 = local_35 & 0xfe;
        local_40 = 0;
        local_36 = 2;
        local_48 = *(undefined8 *)(uVar3 + *(longlong *)(lVar2 + 0x58));
        local_38 = *(undefined2 *)(*param_2 + 800);
        FUN_142bb3e30(param_2,&local_48);
        lVar2 = plVar7[1];
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        uVar3 = uVar3 + 8;
      } while ((int)uVar5 < *(int *)(lVar2 + 0x60));
    }
  }
  if (((*(byte *)(param_1 + 0x11) & 0x20) == 0) ||
     (cVar1 = (**(code **)(*param_1 + 0x300))(param_1,param_2,iVar4,param_4), cVar1 != '\0')) {
    FUN_142bc34e0(param_1,param_2,iVar4,param_4);
  }
  return;
}



// FUNCTION 142bc3d10 FUN_142bc3d10 body=133 status=ok
// SIG undefined FUN_142bc3d10(void)

void FUN_142bc3d10(longlong *param_1,longlong param_2,int param_3)

{
  undefined1 local_res8 [8];
  
  if (param_1[0x14] != param_2) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    param_1[5] = 0;
    return;
  }
  if ((param_3 != 2) && ((param_3 != 3 || ((char)param_1[0x15] != '\x01')))) {
    local_res8[0] = 3;
    (**(code **)(*param_1 + 0x288))(param_1,local_res8);
    *(undefined8 *)(param_2 + 0x30) = 0;
    param_1[5] = 0;
    return;
  }
  FUN_142bc71c0();
  *(undefined8 *)(param_2 + 0x30) = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 142bc3da0 FUN_142bc3da0 body=142 status=ok
// SIG undefined FUN_142bc3da0(void)

void FUN_142bc3da0(longlong *param_1,longlong param_2,int param_3)

{
  undefined1 local_res8 [8];
  
  if (param_1[0x16] == param_2) {
    if ((param_3 != 2) && ((param_3 != 3 || ((char)param_1[0x15] != '\x01')))) {
      local_res8[0] = 3;
      (**(code **)(*param_1 + 0x288))(param_1,local_res8);
      *(undefined8 *)(param_2 + 0x30) = 0;
      param_1[5] = 0;
      return;
    }
    if (*(int *)((longlong)param_1 + 0x84) == 1) {
      FUN_142bc70b0();
      *(undefined8 *)(param_2 + 0x30) = 0;
      param_1[5] = 0;
      return;
    }
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 142bc3e30 FUN_142bc3e30 body=284 status=ok
// SIG undefined FUN_142bc3e30(void)

undefined8 FUN_142bc3e30(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_14;
  
  iVar4 = *(int *)((longlong)param_1 + 0x1ac);
  *(int *)((longlong)param_1 + 0x1ac) = iVar4 + 1;
  iVar5 = *(int *)(param_2 + 0x60);
  if (param_3 == 0) {
    return 0;
  }
  plVar1 = param_1 + 0x32;
  plVar7 = (longlong *)*plVar1;
  iVar6 = (int)param_1[0x33];
  lVar3 = (longlong)iVar6 * 0x18;
  plVar9 = plVar7;
  do {
    if (plVar9 == plVar7 + (longlong)iVar6 * 3) {
LAB_142bc3eba:
      *(int *)(param_1 + 0x33) = iVar6 + 1;
      if (*(int *)((longlong)param_1 + 0x19c) < iVar6 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar6);
      }
      lVar8 = *plVar1;
      local_28 = (undefined4)param_2;
      uStack_24 = (undefined4)((ulonglong)param_2 >> 0x20);
      puVar2 = (undefined4 *)(lVar8 + lVar3);
      *puVar2 = local_28;
      puVar2[1] = uStack_24;
      puVar2[2] = param_3;
      puVar2[3] = iVar5;
      *(ulonglong *)(lVar8 + 0x10 + lVar3) = CONCAT44(uStack_14,iVar4);
      if ((int)param_1[0x33] == 1) {
        (**(code **)(*param_1 + 0x358))(param_1,1);
      }
      return 1;
    }
    if (((*plVar9 == param_2) && ((int)plVar9[1] == param_3)) &&
       (*(int *)((longlong)plVar9 + 0xc) == iVar5)) {
      if ((int)(((longlong)plVar9 - (longlong)plVar7) / 0x18) != -1) {
        return 0;
      }
      goto LAB_142bc3eba;
    }
    plVar9 = plVar9 + 3;
  } while( true );
}



// FUNCTION 142bc3f70 OnFinished body=27 status=ok
// SIG undefined OnFinished(void)

void UPawnAction_Move::OnFinished(undefined8 param_1)

{
  ClearTimers();
  ClearPath(param_1);
  return;
}



// FUNCTION 142bc3f90 FUN_142bc3f90 body=249 status=ok
// SIG undefined FUN_142bc3f90(void)

void FUN_142bc3f90(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FWeakObjectPtr::IsValid(param_2 + 0x48);
  }
  if (param_2 != 0) {
    lVar3 = UAITask::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(longlong *)(param_2 + 0x68) != 0)) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x68) + 0x550), lVar3 != 0)) {
      lVar4 = UProgressBar::GetPrivateStaticClass();
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
        iVar2 = FUN_142bbf020(lVar3,param_1 + -0x28);
        uVar5 = UBehaviorTreeComponent::FindTemplateNode(lVar3,param_1 + -0x28);
        uVar6 = 0;
        if (iVar2 == 1) {
          uVar6 = 2;
        }
        FUN_142bc45b0(lVar3,uVar5,uVar6);
      }
    }
  }
  return;
}



// FUNCTION 142bc40a0 FUN_142bc40a0 body=217 status=ok
// SIG undefined FUN_142bc40a0(void)

void FUN_142bc40a0(longlong param_1,ushort param_2,ushort param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(longlong *)(param_1 + 0x550) != 0) {
    plVar1 = (longlong *)UAIResource_Logic::GetPrivateStaticClass();
    lVar3 = plVar1[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar3 = plVar1[0x1f];
    }
    if (((*(byte *)(lVar3 + 0x30) & 1) == 0) && (*(int *)(lVar3 + 0x28) == -1)) {
      bVar2 = *(byte *)(lVar3 + 0x2c);
    }
    else {
      bVar2 = *(byte *)(lVar3 + 0x28);
    }
    uVar4 = 1 << (bVar2 & 0x1f);
    if ((uVar4 & param_2) != 0) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x550) + 0x178);
                    /* WARNING: Could not recover jumptable at 0x000142bc4144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))(plVar1,1);
      return;
    }
    if ((uVar4 & param_3) != 0) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x550) + 0x178);
      (**(code **)(*plVar1 + 0x18))(plVar1,1);
    }
  }
  return;
}



// FUNCTION 142bc4180 OnMessage body=98 status=ok
// SIG undefined OnMessage(void)

void UBTTaskNode::OnMessage(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte in_stack_00000030;
  
  iVar1 = FUN_142bbf020(param_2,param_1);
  if (iVar1 == 0) {
    uVar2 = UBehaviorTreeComponent::FindTemplateNode(param_2,param_1);
    in_stack_00000030 = in_stack_00000030 ^ 1;
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    uVar2 = UBehaviorTreeComponent::FindTemplateNode(param_2,param_1);
    in_stack_00000030 = 2;
  }
  FUN_142bc45b0(param_2,uVar2,in_stack_00000030);
  return;
}



// FUNCTION 142bc41f0 FUN_142bc41f0 body=88 status=ok
// SIG undefined FUN_142bc41f0(void)

void FUN_142bc41f0(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined4 local_res8;
  undefined1 local_resc;
  
  local_resc = *(undefined1 *)(param_3 + 2);
  local_res8 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xb0,&local_res8);
                    /* WARNING: Could not recover jumptable at 0x000142bc4241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x878))(param_1,param_2,*(undefined1 *)(param_3 + 2));
  return;
}



// FUNCTION 142bc4250 FUN_142bc4250 body=222 status=ok
// SIG undefined FUN_142bc4250(void)

void FUN_142bc4250(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined2 local_18;
  undefined1 local_16;
  byte local_15;
  ulonglong uVar2;
  
  *(undefined2 *)
   ((ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
   *(longlong *)
    ((ulonglong)*(ushort *)(*param_2 + 800) * 0x60 + 0x38 + *(longlong *)(*param_2 + 0x1d8))) =
       0xffff;
  if ((*(byte *)(param_1 + 0x11) & 4) != 0) {
    (**(code **)(*param_1 + 0x2e8))();
  }
  uVar2 = 0;
  uVar3 = uVar2;
  if (0 < (int)param_1[0xe]) {
    do {
      local_15 = local_15 & 0xfe;
      local_20 = 0;
      local_16 = 1;
      local_28 = *(undefined8 *)(uVar3 + param_1[0xd]);
      local_18 = *(undefined2 *)(*param_2 + 800);
      FUN_142bb3e30(param_2,&local_28);
      FUN_142bc3890(*(undefined8 *)(param_1[0xd] + uVar3),param_2);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = uVar3 + 8;
    } while ((int)uVar1 < (int)param_1[0xe]);
  }
  return;
}



// FUNCTION 142bc4330 FUN_142bc4330 body=445 status=ok
// SIG undefined FUN_142bc4330(void)

void FUN_142bc4330(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  ushort local_res8;
  ushort local_resa;
  ushort local_res20;
  ushort local_res22;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  byte local_45;
  
  if ((*(byte *)(param_1 + 0x11) & 8) != 0) {
    (**(code **)(*param_1 + 0x2f0))();
  }
  uVar10 = 0;
  uVar12 = uVar10;
  if (0 < (int)param_1[0xe]) {
    do {
      local_45 = local_45 & 0xfe;
      local_50 = 0;
      local_46 = 2;
      local_58 = *(undefined8 *)(uVar12 + param_1[0xd]);
      local_48 = *(undefined2 *)(*param_2 + 800);
      FUN_142bb3e30(param_2,&local_58);
      uVar11 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar11;
      uVar12 = uVar12 + 8;
    } while ((int)uVar11 < (int)param_1[0xe]);
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    uVar1 = *(ushort *)((longlong)param_1 + 0x8c);
    uVar2 = *(ushort *)(param_1 + 10);
    uVar3 = *(ushort *)(*param_2 + 800);
    local_res8 = uVar3;
    local_resa = uVar1;
    local_res20 = uVar3;
    local_res22 = uVar2;
    FUN_142bccf30(*param_2,&local_res20,&local_res8);
    iVar9 = (int)param_2[2] + -1;
    if (-1 < iVar9) {
      lVar13 = (longlong)iVar9 * 0x18;
      lVar15 = (longlong)(int)param_2[2] * 0x18;
      lVar14 = lVar13;
      do {
        plVar8 = (longlong *)(param_2[1] + lVar14);
        if (*(char *)((longlong)plVar8 + 0x12) == '\x01') {
          lVar6 = *plVar8;
          if (lVar6 == 0) {
            lVar6 = plVar8[1];
          }
          uVar4 = *(ushort *)(plVar8 + 2);
          bVar16 = uVar3 < uVar4;
          if (uVar3 == uVar4) {
            bVar16 = uVar2 < *(ushort *)(lVar6 + 0x50);
          }
          if (bVar16) {
            bVar16 = uVar4 < uVar3;
            if (uVar4 == uVar3) {
              bVar16 = *(ushort *)(lVar6 + 0x50) < uVar1;
            }
            if (bVar16) {
              iVar7 = (int)param_2[2];
              iVar5 = (iVar7 - iVar9) + -1;
              if (iVar5 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(param_2[1] + lVar13),(void *)(lVar15 + param_2[1]),
                           (longlong)iVar5 * 0x18);
                iVar7 = (int)param_2[2];
              }
              *(int *)(param_2 + 2) = iVar7 + -1;
              TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_2 + 1);
            }
          }
        }
        lVar15 = lVar15 + -0x18;
        lVar13 = lVar13 + -0x18;
        lVar14 = lVar14 + -0x18;
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
  }
  return;
}



// FUNCTION 142bc44f0 FUN_142bc44f0 body=189 status=ok
// SIG undefined FUN_142bc44f0(void)

void FUN_142bc44f0(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x178) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x178) + 0x490);
    }
    if (lVar3 != 0) {
      if (((*(byte *)(param_1 + 0x17) & 0x40) != 0) && (param_1[5] != 0)) {
        FUN_142bb30d0(lVar1);
      }
      if (param_3 == 4) {
        FUN_142bcc810(param_1);
        return;
      }
      if (((param_3 - 2U < 2) && (param_2 != 0)) && ((*(uint *)(param_2 + 0x98) >> 2 & 1) != 0)) {
        cVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
        if (cVar2 == '\0') {
          FUN_142bb30d0(param_1[7],param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142bc45b0 FUN_142bc45b0 body=753 status=ok
// SIG undefined FUN_142bc45b0(void)

void FUN_142bc45b0(longlong param_1,longlong *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int local_res18 [4];
  
  if ((param_2 != (longlong *)0x0) && (iVar3 = *(int *)(param_1 + 0x1e0), iVar3 != 0)) {
    iVar5 = *(int *)(param_1 + 0xc);
    uVar9 = 0;
    uVar6 = uVar9;
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar10 = iVar5 >> 0x1f & 0xffff;
      uVar4 = iVar5 + uVar10;
      uVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(uVar6 + 8) >> 0x1d & 1) == 0) {
      plVar8 = (longlong *)param_2[9];
      local_res18[0] = param_3;
      iVar5 = FUN_142bbb940(param_1,param_2);
      if ((-1 < iVar5) && (iVar5 < iVar3)) {
        bVar1 = *(byte *)(param_1 + 0x323);
        if (((*(byte *)(plVar8 + 0x11) & 2) != 0) && (0 < (int)plVar8[0xc])) {
          plVar7 = (longlong *)plVar8[0xb];
          uVar6 = uVar9;
          do {
            if (((longlong *)*plVar7 == param_2) || ((longlong *)plVar7[1] == param_2)) {
              (**(code **)(*plVar8 + 0x2e0))
                        (plVar8,param_1,
                         (ulonglong)*(ushort *)((longlong)plVar8 + 0x52) +
                         *(longlong *)
                          ((longlong)iVar5 * 0x60 + 0x38 + *(longlong *)(param_1 + 0x1d8)),uVar6,
                         local_res18);
              param_3 = local_res18[0];
              break;
            }
            uVar6 = (ulonglong)((int)uVar6 + 1);
            uVar9 = uVar9 + 1;
            plVar7 = plVar7 + 6;
          } while ((longlong)uVar9 < (longlong)(int)plVar8[0xc]);
        }
        if (param_3 == 3) {
          FUN_142bcda70(param_1);
        }
        else {
          FUN_142bcd1c0(param_1,param_2);
          iVar3 = local_res18[0];
          lVar12 = (longlong)iVar5 * 0x60;
          lVar11 = (ulonglong)*(ushort *)((longlong)param_2 + 0x52) +
                   *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x38 + lVar12);
          plVar8 = param_2;
          if ((*(byte *)((longlong)param_2 + 0x55) & 4) != 0) {
            plVar8 = (longlong *)FUN_142bbe0b0(param_2,param_1,lVar11);
          }
          if (plVar8 != (longlong *)0x0) {
            if ((*(byte *)(plVar8 + 0xd) & 4) != 0) {
              (**(code **)(*plVar8 + 0x2e8))(plVar8,param_1,lVar11,iVar3);
            }
            if ((((*(byte *)((longlong)plVar8 + 0x55) & 8) != 0) &&
                (*(longlong *)(param_1 + 0x188) != 0)) &&
               (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x570), lVar11 != 0)) {
              FUN_142b78e20(lVar11,plVar8 + 5);
            }
          }
          if (((int)(uint)*(ushort *)(param_1 + 800) < *(int *)(param_1 + 0x1e0)) &&
             (lVar11 = (ulonglong)*(ushort *)(param_1 + 800) * 0x60 + *(longlong *)(param_1 + 0x1d8)
             , *(longlong **)(lVar11 + 0x10) == param_2)) {
            cVar2 = *(char *)(lVar11 + 0x49);
            *(undefined1 *)(lVar11 + 0x49) = 3;
            if (cVar2 != '\x02') {
              FUN_142bc8b70(param_1,local_res18[0]);
            }
          }
          else if ((local_res18[0] == 2) &&
                  ((iVar5 < *(int *)(param_1 + 0x1e0) &&
                   (*(longlong **)(*(longlong *)(param_1 + 0x1d8) + 0x10 + lVar12) == param_2)))) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x1d8) + 0x49 + lVar12) = 3;
          }
          FUN_142bcda70(param_1);
          if (((*(byte *)(param_1 + 0x323) & 4) == 0) && ((bVar1 & 4) != 0)) {
            if ((*(byte *)(param_1 + 0x323) & 0x10) == 0) {
              if ((*(longlong *)(param_1 + 0x250) != 0) &&
                 (*(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) | 2,
                 *(short *)(param_1 + 0x24c) != -1)) {
                *(undefined4 *)(param_1 + 0x24c) = 0xffffffff;
              }
              *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) | 8;
            }
            else {
              FUN_142bcb3d0(param_1,0);
            }
          }
        }
        if (((*(byte *)(param_1 + 0x27c) & 1) != 0) && (*(longlong *)(param_1 + 0x270) != 0)) {
          FUN_142bc6820(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142bc48b0 FUN_142bc48b0 body=292 status=ok
// SIG undefined FUN_142bc48b0(void)

void FUN_142bc48b0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x178);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x94) & 2) == 0)) {
    iVar3 = *(int *)(lVar4 + 0xc);
    lVar6 = 0;
    lVar4 = lVar6;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar5 = iVar3 >> 0x1f & 0xffff;
      uVar2 = iVar3 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      do {
        for (plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x180));
            plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
          if (*(int *)((longlong)plVar1 + 0x84) < 2) {
            *(undefined4 *)((longlong)plVar1 + 0x84) = 2;
          }
          if (plVar1[5] != 0) {
            FUN_142bb2ff0(plVar1[5],0);
          }
          iVar3 = (**(code **)(*plVar1 + 0x2c0))(plVar1);
          if (iVar3 != 4) {
            iVar3 = 4;
          }
          if ((*(int *)((longlong)plVar1 + 0x84) < iVar3) &&
             (*(int *)((longlong)plVar1 + 0x84) = iVar3, iVar3 == 4)) {
            FUN_142bca010(plVar1);
          }
        }
        lVar6 = lVar6 + 8;
      } while (lVar6 < 0x28);
    }
  }
  FUN_142344780(param_1);
  return;
}



// FUNCTION 142bc49e0 FUN_142bc49e0 body=76 status=ok
// SIG undefined FUN_142bc49e0(void)

uint FUN_142bc49e0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x84) - 3;
  if (1 < uVar1) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
    uVar1 = *(uint *)(param_1 + 0x90);
    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a0))();
      uVar1 = *(uint *)(param_1 + 0x90);
    }
    return uVar1 & 0xffffff01;
  }
  return uVar1 & 0xffffff00;
}



// FUNCTION 142bc4a30 FUN_142bc4a30 body=123 status=ok
// SIG undefined FUN_142bc4a30(void)

ulonglong FUN_142bc4a30(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(int *)(param_1 + 0x84) - 3;
  if (1 < uVar1) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
    uVar1 = *(uint *)(param_1 + 0x90);
    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a0))();
      uVar1 = (uint)*(byte *)(param_1 + 0x90);
    }
    if ((uVar1 & 1) != 0) {
      if (*(longlong *)(param_1 + 0x38) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x178);
      }
      FUN_142c46be0(param_1,uVar2);
    }
    return (ulonglong)((byte)uVar1 & 1);
  }
  return (ulonglong)(uint3)(uVar1 >> 8) << 8;
}



// FUNCTION 142bc4ab0 FUN_142bc4ab0 body=325 status=ok
// SIG undefined FUN_142bc4ab0(void)

byte FUN_142bc4ab0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 0x84) - 3U < 2) {
    return 0;
  }
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
  uVar8 = *(uint *)(param_1 + 0x90);
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a0))();
    uVar8 = (uint)*(byte *)(param_1 + 0x90);
  }
  bVar7 = (byte)uVar8 & 1;
  if (((uVar8 & 1) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x178);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x490), lVar3 != 0)) {
      lVar6 = FUN_142c2de20();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        plVar4 = *(longlong **)(lVar3 + 0x548);
        iVar1 = *(int *)(param_1 + 0x78);
        if (plVar4 != (longlong *)0x0) {
          iVar2 = (int)plVar4[0x65];
          if (((iVar2 == -1) || (iVar1 == -1)) ||
             ((iVar1 != iVar2 && ((iVar1 != 0 && (iVar2 != 0)))))) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            (**(code **)(*plVar4 + 0x438))(plVar4,iVar1,0);
            return 1;
          }
        }
        return 0;
      }
    }
    return bVar7;
  }
  return bVar7;
}



// FUNCTION 142bc4c00 Pause body=109 status=ok
// SIG undefined Pause(void)

undefined8 UPawnAction_Wait::Pause(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_res8 [2];
  longlong local_res18 [2];
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(lVar1 + 400) == 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
  }
  local_res18[0] = param_1[0x14];
  uVar2 = FTimerManager::FindTimer(uVar3,local_res18,local_res8);
  FUN_142880730(uVar3,uVar2,local_res8[0]);
  return 1;
}



// FUNCTION 142bc4c90 FUN_142bc4c90 body=70 status=ok
// SIG undefined FUN_142bc4c90(void)

undefined8 FUN_142bc4c90(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x548);
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (int)plVar2[0x65];
    if (((iVar1 != -1) && (param_2 != -1)) &&
       ((param_2 == iVar1 || ((param_2 == 0 || (iVar1 == 0)))))) {
      (**(code **)(*plVar2 + 0x438))(plVar2,param_2,0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142bc4cf0 FUN_142bc4cf0 body=168 status=ok
// SIG undefined FUN_142bc4cf0(void)

undefined8 FUN_142bc4cf0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  
  UPawnAction_Move::ClearTimers();
  UPawnAction_Move::ClearPath(param_1);
  if (((*(longlong *)(param_1 + 0x38) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x178), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x490), lVar1 != 0)) {
    lVar4 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (plVar2 = *(longlong **)(lVar1 + 0x548), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x428))(plVar2,param_1,0x10,*(undefined4 *)(param_1 + 0x78),0);
    }
  }
  return 4;
}



// FUNCTION 142bc4da0 PerformAbort body=80 status=ok
// SIG undefined PerformAbort(void)

undefined8 UPawnAction_Wait::PerformAbort(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(lVar1 + 400) == 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
  }
  FUN_142880530(uVar2,param_1 + 0x14);
  param_1[0x14] = 0;
  return 4;
}



// FUNCTION 142bc4df0 FUN_142bc4df0 body=39 status=ok
// SIG undefined FUN_142bc4df0(void)

undefined1 FUN_142bc4df0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x560) != 0) {
    cVar1 = FUN_142bc6aa0();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142bc4e20 FUN_142bc4e20 body=715 status=ok
// SIG undefined FUN_142bc4e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142bc4e20(longlong *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [16];
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
  if (((param_1[7] != 0) && (lVar8 = *(longlong *)(param_1[7] + 0x178), lVar8 != 0)) &&
     (lVar8 = *(longlong *)(lVar8 + 0x490), lVar8 != 0)) {
    lVar5 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(byte *)(param_1 + 0x17) & 4) != 0) &&
         (cVar3 = (**(code **)(*(longlong *)(lVar8 + 0x458) + 0x40))(), cVar3 != '\0')) {
        uVar6 = AActor::GetWorldTimerManager(lVar8);
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar7 + 1,param_1);
          plVar7[2] = (longlong)FUN_142bb7a60;
          lVar8 = FDelegateHandle::GenerateNewID();
          plVar7[4] = lVar8;
          *plVar7 = (longlong)&PTR_FUN_143f4d1b8;
        }
        local_88 = 0;
        local_80 = 0;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x30))(plVar7,&local_88);
        }
        FWeakObjectPtr::operator=(local_78,0);
        local_a0 = 0xbf800000;
        local_a8 = 0;
        local_70 = 0;
        local_38 = (longlong *)0x0;
        local_28 = 0;
        local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar6,param_1 + 0x1b,&local_88,0x3dcccccd);
        if (local_28 != 0) {
          plVar9 = local_58;
          if (local_38 != (longlong *)0x0) {
            plVar9 = local_38;
          }
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))(plVar9,0);
          }
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x28))(plVar7,0);
          lVar8 = FMemory::Realloc(plVar7,0,0);
          if (lVar8 != 0) {
            FMemory::Free(lVar8);
          }
        }
        return 1;
      }
      iVar4 = (**(code **)(*param_1 + 0x2d8))(param_1,lVar8);
      if (iVar4 == 2) {
        uVar1 = DAT_146690efc;
        if (*(longlong *)(lVar8 + 0x548) != 0) {
          uVar1 = *(undefined4 *)(*(longlong *)(lVar8 + 0x548) + 0x328);
        }
        *(undefined4 *)(param_1 + 0xf) = uVar1;
        FUN_142bceaa0(param_1,DAT_146b2c608);
        FUN_142bceaa0(param_1,DAT_146b2c640,DAT_146b2c4ec);
        return 1;
      }
      if (iVar4 == 1) {
        local_98[0] = 2;
        (**(code **)(*param_1 + 0x288))(param_1,local_98);
        return 1;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 142bc50f0 FUN_142bc50f0 body=309 status=ok
// SIG undefined FUN_142bc50f0(void)

void FUN_142bc50f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  for (plVar1 = (longlong *)*param_1; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
    if (plVar1 == param_2) goto LAB_142bc5127;
  }
  if (param_2 == (longlong *)0x0) {
LAB_142bc5127:
    plVar1 = (longlong *)param_2[6];
    plVar2 = (longlong *)*param_1;
    while ((plVar4 = plVar2, plVar4 != plVar1 && (plVar4 != (longlong *)0x0))) {
      plVar2 = (longlong *)plVar4[6];
      if ((*(int *)((longlong)plVar4 + 0x84) == 1) && ((int)plVar4[0x11] < 2)) {
        *(undefined4 *)((longlong)plVar4 + 0x84) = 2;
        if (plVar4[5] != 0) {
          FUN_142bb2ff0(plVar4[5],0);
        }
        iVar5 = (**(code **)(*plVar4 + 0x2c0))(plVar4);
        if (iVar5 != 4) {
          iVar5 = 4;
        }
        if ((*(int *)((longlong)plVar4 + 0x84) < iVar5) &&
           (*(int *)((longlong)plVar4 + 0x84) = iVar5, iVar5 == 4)) {
          FUN_142bca010(plVar4);
        }
      }
      if (((*(byte *)(plVar4 + 0x12) & 4) == 0) || ((*(byte *)(plVar4 + 0x10) & 8) != 0)) {
        (**(code **)(*plVar4 + 0x2b0))(plVar4);
      }
      plVar3 = (longlong *)plVar4[6];
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b8))(plVar3,plVar4,(int)plVar4[0x11]);
      }
    }
    *param_1 = (longlong)plVar1;
  }
  return;
}



// FUNCTION 142bc5230 FUN_142bc5230 body=1265 status=ok
// SIG undefined FUN_142bc5230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142bc5230(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  longlong *plVar16;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  uint local_108 [2];
  undefined1 local_100 [192];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  ulonglong uVar11;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0();
  }
  if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x150), lVar6 != 0)) {
    lVar7 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142bc52b7;
  }
  lVar6 = 0;
LAB_142bc52b7:
  UAISystem::RegisterBlackboardComponent(lVar6,*(undefined8 *)(param_1 + 0x180),param_1);
  UAISystem::FBlackboardDataToComponentsIterator::FBlackboardDataToComponentsIterator
            (local_108,lVar6 + 0xd0,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar14 = (ulonglong)local_108[0];
    do {
      iVar13 = (int)uVar14;
      if (iVar13 < local_38) {
        puVar10 = local_100;
        if (local_40 != (undefined1 *)0x0) {
          puVar10 = local_40;
        }
        if (*(int *)(puVar10 + (longlong)iVar13 * 0x18 + 0x10) == -1) goto LAB_142bc5319;
        bVar2 = true;
      }
      else {
LAB_142bc5319:
        bVar2 = false;
      }
      if (!bVar2) goto LAB_142bc56df;
      puVar10 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar10 = local_40;
      }
      lVar6 = FWeakObjectPtr::Get(**(longlong **)(puVar10 + (longlong)iVar13 * 0x18) +
                                  ((longlong)*(int *)(puVar10 + (longlong)iVar13 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if (lVar6 != 0) {
        if ((lVar6 == param_1) ||
           ((*(longlong *)(param_1 + 0x178) != 0 &&
            ((((plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x178) + 0x188),
               plVar8 == (longlong *)0x0 ||
               (cVar3 = (**(code **)(*plVar8 + 0x890))(plVar8,lVar6), cVar3 != '\x01')) &&
              (*(longlong *)(lVar6 + 0x178) != 0)) &&
             ((plVar8 = *(longlong **)(*(longlong *)(lVar6 + 0x178) + 0x188),
              plVar8 == (longlong *)0x0 ||
              (cVar3 = (**(code **)(*plVar8 + 0x890))(plVar8,param_1), cVar3 != '\x01')))))))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x180) + 0x38);
          plVar8 = plVar12 + (longlong)*(int *)(*(longlong *)(param_1 + 0x180) + 0x40) * 3;
          local_118 = plVar8;
          if (plVar12 == plVar8) goto LAB_142bc56df;
          goto LAB_142bc54f0;
        }
      }
      puVar10 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar10 = local_40;
      }
      lVar6 = (longlong)(int)local_108[0];
      iVar13 = *(int *)(puVar10 + lVar6 * 0x18 + 0x14);
      *(int *)(puVar10 + lVar6 * 0x18 + 0x10) = iVar13;
      puVar1 = (undefined8 *)(puVar10 + lVar6 * 0x18);
      while (iVar13 != -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + (longlong)iVar13 * 0x18);
        lVar6 = *(longlong *)*puVar1;
        local_110 = *(undefined4 *)(puVar1 + 1);
        local_10c = *(undefined4 *)((longlong)puVar1 + 0xc);
        local_118 = (longlong *)
                    CONCAT44(*(undefined4 *)(lVar6 + 4 + (longlong)iVar13 * 0x18),
                             *(undefined4 *)(lVar6 + (longlong)iVar13 * 0x18));
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_118,&local_110);
        if (cVar3 != '\0') break;
        iVar13 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar13;
      }
      uVar14 = (ulonglong)(int)local_108[0];
      puVar10 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar10 = local_40;
      }
    } while ((*(int *)(puVar10 + uVar14 * 0x18 + 0x10) != -1) ||
            (local_38 + -1 <= (int)local_108[0]));
    local_108[0] = local_108[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_108);
  } while( true );
LAB_142bc54f0:
  uVar14 = 0;
  if ((*(byte *)(plVar12 + 2) & 1) != 0) {
    lVar7 = *(longlong *)(lVar6 + 0x180);
    if (lVar7 == 0) {
      bVar4 = 0xff;
    }
    else {
      plVar8 = local_118;
      if (0 < *(int *)(lVar7 + 0x40)) {
        uVar11 = uVar14;
        do {
          if (*(longlong *)(*(longlong *)(lVar7 + 0x38) + (longlong)(int)uVar11 * 0x18) == *plVar12)
          {
            bVar4 = *(char *)(lVar7 + 0x4c) + (char)uVar11;
            goto LAB_142bc556b;
          }
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
        } while ((int)uVar9 < *(int *)(lVar7 + 0x40));
      }
      if (*(longlong *)(lVar7 + 0x30) == 0) {
        bVar4 = 0xff;
      }
      else {
        bVar4 = UBlackboardData::InternalGetKeyID(*(longlong *)(lVar7 + 0x30),plVar12,0);
        plVar8 = local_118;
      }
    }
LAB_142bc556b:
    if ((bVar4 != 0xff) && (plVar16 = (longlong *)plVar12[1], plVar16 != (longlong *)0x0)) {
      lVar7 = *(longlong *)(param_1 + 0x180);
      bVar15 = *(byte *)((longlong)plVar16 + 0x2b) & 1;
      if (0 < *(int *)(lVar7 + 0x40)) {
        uVar11 = uVar14;
        do {
          if (*(longlong *)(*(longlong *)(lVar7 + 0x38) + (longlong)(int)uVar11 * 0x18) == *plVar12)
          {
            bVar5 = *(char *)(lVar7 + 0x4c) + (char)uVar11;
            goto LAB_142bc55eb;
          }
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
        } while ((int)uVar9 < *(int *)(lVar7 + 0x40));
      }
      if (*(longlong *)(lVar7 + 0x30) == 0) {
        bVar5 = 0xff;
      }
      else {
        bVar5 = UBlackboardData::InternalGetKeyID(*(longlong *)(lVar7 + 0x30),plVar12,0);
      }
LAB_142bc55eb:
      if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)bVar5 < *(int *)(param_1 + 0x1a0))) {
        uVar14 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)bVar5 * 2) +
                 *(longlong *)(param_1 + 0x188);
      }
      lVar7 = (ulonglong)bVar15 * 4;
      if ((*(int *)(lVar6 + 400) == 0) || (*(int *)(lVar6 + 0x1a0) <= (int)(uint)bVar4)) {
        local_128 = 0;
      }
      else {
        local_128 = (ulonglong)*(ushort *)(*(longlong *)(lVar6 + 0x198) + (ulonglong)bVar4 * 2) +
                    *(longlong *)(lVar6 + 0x188);
      }
      local_128 = local_128 + lVar7;
      plVar8 = plVar16;
      if (bVar15 != 0) {
        plVar16 = *(longlong **)(*(longlong *)(lVar6 + 0x1a8) + (ulonglong)bVar4 * 8);
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)bVar5 * 8);
      }
      (**(code **)(*plVar8 + 0x2a8))(plVar8,param_1,uVar14 + lVar7,plVar16);
      plVar8 = local_118;
    }
  }
  plVar12 = plVar12 + 3;
  if (plVar12 == plVar8) {
LAB_142bc56df:
    if (local_40 != (undefined1 *)0x0) {
      FMemory::Free(local_40);
    }
    *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) | 2;
    return;
  }
  goto LAB_142bc54f0;
}



// FUNCTION 142bc5730 FUN_142bc5730 body=761 status=ok
// SIG undefined FUN_142bc5730(void)

void FUN_142bc5730(longlong *param_1,longlong *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  uint uVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  undefined4 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_res10;
  longlong local_res18 [2];
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  if (param_2 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    pwVar4 = (wchar_t *)0x0;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar10 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar10;
      pwVar4 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar10) * 0x18);
    }
    if ((*(uint *)(pwVar4 + 4) >> 0x1d & 1) != 0) {
      return;
    }
  }
  FUN_1423da460(param_1,param_2);
  if (param_1[0x91] == 0) {
    return;
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((longlong *)param_1[0xa9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xa9] + 0x3f8))();
  }
  if ((*(byte *)(param_1 + 0xa8) & 0x10) != 0) {
    local_res10 = 0x140;
    (**(code **)(*param_1 + 0x718))(param_1,0x140);
  }
  if (param_1[0xae] == 0) {
    uVar5 = UEnvQueryTest_Cover::StaticClass();
    lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
    if (lVar6 == 0) {
      plVar7 = (longlong *)FName::FName(local_res18,L"GameplayTasksComponent",1);
      local_res10 = 0;
      lVar6 = *plVar7;
      if (lVar6 == 0) {
        FUN_1417846f0(param_2,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar5 = UEnvQueryTest_Cover::StaticClass();
      lVar6 = FUN_1417985e0(uVar5,param_2,lVar6,0,0,0,0,0,0);
      FUN_14234b150(lVar6);
    }
    param_1[0xae] = lVar6;
    if (lVar6 == 0) goto LAB_142bc5a0c;
  }
  plVar7 = (longlong *)FName::FName(&local_res10,L"OnGameplayTaskResourcesClaimed",1);
  lVar6 = *plVar7;
  lVar12 = *(longlong *)(param_1[0xae] + 0x1e0);
  lVar11 = (longlong)*(int *)(param_1[0xae] + 0x1e8) * 0x10 + lVar12;
  for (; lVar12 != lVar11; lVar12 = lVar12 + 0x10) {
    if ((*(longlong *)(lVar12 + 8) == lVar6) &&
       (plVar7 = (longlong *)FWeakObjectPtr::GetEvenIfUnreachable(lVar12), param_1 == plVar7))
    goto LAB_142bc5a0c;
  }
  pwVar8 = _guard_xfg_dispatch_icall_nop(L"&AAIController::OnGameplayTaskResourcesClaimed",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar4 = pwVar2;
  }
  FName::FName(local_res18,pwVar4 + 2,1);
  lVar6 = param_1[0xae];
  plVar7 = (longlong *)(lVar6 + 0x1e0);
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  FWeakObjectPtr::operator=(&local_38,param_1);
  local_30 = local_res18[0];
  local_res10 = 0;
  if ((local_res18[0] != 0) && (lVar12 = FWeakObjectPtr::Get(&local_38), lVar12 != 0)) {
    UObject::FindFunction(lVar12,local_30);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
  iVar1 = *(int *)(lVar6 + 0x1e8);
  *(int *)(lVar6 + 0x1e8) = iVar1 + 1;
  if (*(int *)(lVar6 + 0x1ec) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
  }
  puVar9 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar7);
  *puVar9 = local_38;
  puVar9[1] = local_34;
  *(longlong *)(puVar9 + 2) = local_30;
LAB_142bc5a0c:
  FUN_142c2dfd0(param_1,param_2);
  return;
}



// FUNCTION 142bc5a30 FUN_142bc5a30 body=937 status=ok
// SIG undefined FUN_142bc5a30(void)

void FUN_142bc5a30(longlong *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  ulonglong local_res8 [2];
  longlong *local_48;
  int local_40;
  
  plVar9 = (longlong *)0x0;
  local_res8[0] = local_res8[0] & 0xffffffff00000000;
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    return;
  }
  plVar13 = (longlong *)param_1[4];
  if (plVar13 == (longlong *)0x0) {
LAB_142bc5ab3:
    plVar13 = plVar9;
  }
  else {
    lVar3 = FUN_142a2f930();
    if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142bc5ab3;
  }
  local_res8[0] = 0;
  plVar12 = param_1;
  if (plVar13 != (longlong *)0x0) {
    plVar12 = plVar13;
  }
  puVar14 = &DAT_143f3eda8;
  plVar8 = plVar9;
  plVar6 = plVar9;
  if (param_1[0xd] != 0) {
    puVar4 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0xd,&local_48);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar4;
    }
    uVar5 = UAIHotSpotManager::GetPrivateStaticClass();
    plVar6 = (longlong *)FUN_141799830(uVar5,0,puVar10,0,0,0);
    plVar8 = (longlong *)0x1;
  }
  if ((plVar8 != (longlong *)0x0) && (local_48 != (longlong *)0x0)) {
    FMemory::Free();
  }
  bVar1 = false;
  if (plVar6 != (longlong *)0x0) {
    plVar7 = (longlong *)UAIHotSpotManager::GetPrivateStaticClass();
    plVar8 = plVar6;
    do {
      if (plVar8 == plVar7) {
        local_res8[0] = 0;
        plVar7 = (longlong *)UAIHotSpotManager::GetPrivateStaticClass();
        uVar2 = local_res8[0];
        plVar8 = plVar6;
        goto LAB_142bc5b70;
      }
      plVar8 = (longlong *)plVar8[6];
    } while (plVar8 != (longlong *)0x0);
  }
  goto LAB_142bc5bd6;
  while (plVar6 = (longlong *)plVar6[6], plVar11 = plVar9, plVar6 != (longlong *)0x0) {
LAB_142bc5c72:
    plVar11 = plVar8;
    if (plVar6 == plVar7) break;
  }
  local_res8[1] = 0;
  if (local_res8[0] == 0) {
    FUN_1417846f0(plVar12,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  lVar3 = FUN_1417985e0(plVar11,plVar12,uVar2,0,0,0,0,0,0);
  param_1[0x15] = lVar3;
  goto LAB_142bc5cd8;
  while (plVar8 = (longlong *)plVar8[6], plVar11 = plVar9, plVar8 != (longlong *)0x0) {
LAB_142bc5b70:
    plVar11 = plVar6;
    if (plVar8 == plVar7) break;
  }
  local_res8[1] = 0;
  if (local_res8[0] == 0) {
    FUN_1417846f0(plVar12,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  lVar3 = FUN_1417985e0(plVar11,plVar12,uVar2,0,0,0,0,0,0);
  param_1[0x18] = lVar3;
LAB_142bc5bd6:
  local_res8[0] = 0;
  plVar8 = plVar9;
  if (param_1[10] != 0) {
    bVar1 = true;
    puVar4 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 10,&local_48);
    if (*(int *)(puVar4 + 1) != 0) {
      puVar14 = (undefined2 *)*puVar4;
    }
    uVar5 = FUN_142c2c780();
    plVar8 = (longlong *)FUN_141799830(uVar5,0,puVar14,0,0,0);
  }
  if ((bVar1) && (local_48 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (plVar8 != (longlong *)0x0) {
    plVar7 = (longlong *)FUN_142c2c780();
    plVar6 = plVar8;
    do {
      if (plVar6 == plVar7) {
        local_res8[0] = 0;
        plVar7 = (longlong *)FUN_142c2c780();
        uVar2 = local_res8[0];
        plVar6 = plVar8;
        goto LAB_142bc5c72;
      }
      plVar6 = (longlong *)plVar6[6];
    } while (plVar6 != (longlong *)0x0);
  }
LAB_142bc5cd8:
  if (plVar13 != (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_40 = 3;
    local_48 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      plVar9[2] = (longlong)&LAB_1404c20fc;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar9[4] = lVar3;
      *plVar9 = (longlong)&PTR_FUN_143f4d2d8;
    }
    plVar9 = (longlong *)UWorld::AddOnActorSpawnedHandler(plVar13,local_res8,&local_48);
    param_1[0x24] = *plVar9;
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_142bc5db4;
      (**(code **)(*local_48 + 0x28))(local_48,0);
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
      }
      local_40 = 0;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
LAB_142bc5db4:
  (**(code **)(*param_1 + 0x2a8))(param_1);
  return;
}



// FUNCTION 142bc5de0 FUN_142bc5de0 body=125 status=ok
// SIG undefined FUN_142bc5de0(void)

void FUN_142bc5de0(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  FUN_1423da990();
  if ((*(byte *)(param_1 + 0xa8) & 0x10) != 0) {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar4 = iVar2 >> 0x1f & 0xffff;
      uVar1 = iVar2 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
              (longlong)(int)((uVar1 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      iVar2 = FUN_142235230(param_1);
      if (iVar2 != 3) {
                    /* WARNING: Could not recover jumptable at 0x000142bc5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x798))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142bc5e60 FUN_142bc5e60 body=142 status=ok
// SIG undefined FUN_142bc5e60(void)

void FUN_142bc5e60(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  UObject::PostLoad();
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x30) != param_1)) {
    FUN_1417510e0();
  }
  FUN_142bce4c0(param_1);
  uVar3 = 0;
  if ((*(longlong *)(param_1 + 0x30) == 0) ||
     (uVar1 = 1, (*(byte *)(*(longlong *)(param_1 + 0x30) + 0x48) & 1) == 0)) {
    uVar1 = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x48) & 0xfffffffe | uVar1;
  *(uint *)(param_1 + 0x48) = uVar1;
  uVar4 = uVar3;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      if ((uVar1 & 1) != 0) {
        return;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar1 = ((*(uint *)(uVar4 + 0x10 + *(longlong *)(param_1 + 0x38)) | uVar1) ^ uVar1) & 1 ^
              uVar1;
      *(uint *)(param_1 + 0x48) = uVar1;
      uVar4 = uVar4 + 0x18;
    } while ((int)uVar2 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 142bc5ef0 FUN_142bc5ef0 body=125 status=ok
// SIG undefined FUN_142bc5ef0(void)

void FUN_142bc5ef0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_1[0xab] != 0) {
    iVar1 = *(int *)(param_1[0xab] + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      return;
    }
  }
  uVar3 = UHomeWidget::GetPrivateStaticClass();
  lVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar3);
  param_1[0xab] = lVar4;
  return;
}



// FUNCTION 142bc5f80 FUN_142bc5f80 body=1617 status=ok
// SIG undefined FUN_142bc5f80(void)

void FUN_142bc5f80(longlong param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  void *_Src;
  undefined1 uVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar21;
  bool bVar22;
  bool bVar23;
  uint local_res8 [2];
  undefined4 local_res10;
  ulonglong local_res18;
  undefined2 local_48;
  undefined1 local_46;
  ulonglong uVar20;
  
  bVar2 = *(byte *)(param_1 + 0x323);
  *(byte *)(param_1 + 0x323) = bVar2 & 0xf7;
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    return;
  }
  uVar3 = *(ushort *)(param_1 + 800);
  if (*(int *)(param_1 + 0x1e0) <= (int)(uint)uVar3) {
    return;
  }
  if ((bVar2 & 0x44) != 0) {
    return;
  }
  if (((*(longlong *)(param_1 + 0x260) != 0) || ((*(byte *)(param_1 + 0x268) & 1) != 0)) &&
     ((*(byte *)(param_1 + 0x268) & 2) == 0)) goto LAB_142bc6598;
  uVar18 = 0;
  *(uint *)(param_1 + 0x23c) = (uint)uVar3;
  local_res8[0] = (uint)*(byte *)(param_1 + 0x25a);
  local_res18 = 0;
  uVar20 = uVar18;
  uVar21 = uVar18;
  if (0 < *(int *)(param_1 + 0x1e0)) {
    do {
      puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x38 + uVar21);
      puVar16 = (undefined8 *)
                (*(longlong *)(param_1 + 0x1e8) + 0x20 +
                (ulonglong)*(byte *)(uVar21 + 0x48 + *(longlong *)(param_1 + 0x1d8)) * 0x38);
      if (puVar16 != puVar13) {
        iVar8 = *(int *)(puVar13 + 1);
        _Src = (void *)*puVar13;
        *(int *)(puVar16 + 1) = iVar8;
        if ((iVar8 == 0) && (*(int *)((longlong)puVar16 + 0xc) == 0)) {
          *(undefined4 *)((longlong)puVar16 + 0xc) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar16,iVar8);
          _guard_xfg_dispatch_icall_nop((void *)*puVar16,_Src,(longlong)iVar8);
        }
      }
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      uVar21 = uVar21 + 0x60;
    } while ((int)uVar19 < *(int *)(param_1 + 0x1e0));
    uVar3 = *(ushort *)(param_1 + 800);
  }
  if ((*(longlong *)((ulonglong)uVar3 * 0x60 + 0x10 + *(longlong *)(param_1 + 0x1d8)) !=
       *(longlong *)(param_1 + 0x250)) &&
     (cVar6 = FUN_142bb7890(param_1,*(longlong *)(param_1 + 0x250),*(undefined2 *)(param_1 + 600),
                            local_res8), cVar6 == '\0')) {
    *(undefined4 *)(param_1 + 0x218) = 0;
    if (*(uint *)(param_1 + 0x21c) < 0x80000000) {
      return;
    }
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x210,0);
    return;
  }
  lVar17 = *(longlong *)(param_1 + 0x250);
  puVar13 = (undefined8 *)
            ((ulonglong)*(ushort *)(param_1 + 800) * 0x60 + *(longlong *)(param_1 + 0x1d8));
  *(int *)(param_1 + 0x238) = DAT_146690ee8;
  DAT_146690ee8 = DAT_146690ee8 + 1;
  *(uint *)(param_1 + 0x240) = *(uint *)(param_1 + 0x240) & 0xfffffffe;
  *(uint *)(param_1 + 0x240) = *(uint *)(param_1 + 0x240) | 2;
  if (puVar13[2] == 0) {
    puVar13[2] = *(undefined8 *)
                  ((ulonglong)*(ushort *)(param_1 + 800) * 0x60 + *(longlong *)(param_1 + 0x1d8));
    FUN_142bc4250(*puVar13,param_1 + 0x208);
  }
  if ((*(byte *)(param_1 + 0x25b) & 1) == 0) {
    puVar1 = (undefined4 *)(param_1 + 0x248);
    puVar14 = &local_res10;
    if (*(short *)(param_1 + 0x24a) == 0) {
      puVar14 = puVar1;
    }
    local_res10 = CONCAT22(*(short *)(param_1 + 0x24a) + -1,*(undefined2 *)puVar1);
    FUN_142bcd030(param_1,puVar14);
    *(undefined2 *)
     ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x250) + 0x52) +
     *(longlong *)
      ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x208) + 800) * 0x60 + 0x38 +
      *(longlong *)(*(longlong *)(param_1 + 0x208) + 0x1d8))) = 0xffff;
    *(undefined4 *)(param_1 + 0x230) = *puVar1;
    uVar9 = *(undefined4 *)(param_1 + 0x24c);
  }
  else {
    *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
    local_res10 = 0xffffffff;
    uVar9 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x234) = uVar9;
  if (lVar17 == 0) {
LAB_142bc642a:
    bVar22 = true;
LAB_142bc642d:
    uVar19 = *(uint *)(param_1 + 0x240);
    if ((uVar19 & 1) != 0) goto LAB_142bc6437;
  }
  else {
    do {
      if (uVar18 != 0) goto LAB_142bc635c;
      lVar15 = param_1 + 0x208;
      iVar8 = FUN_142bbae90(lVar17,lVar15,local_res8);
      if ((*(byte *)(param_1 + 0x240) & 1) != 0) goto LAB_142bc6425;
      if (iVar8 == -2) {
        lVar12 = *(longlong *)(lVar17 + 0x48);
        if (lVar12 == 0) {
          FUN_142bc4330(lVar17,lVar15,local_res8);
          uVar3 = *(ushort *)(param_1 + 800);
          if (uVar3 == 0) goto LAB_142bc642a;
          FUN_142bb7730((ulonglong)uVar3 * 0x60 + *(longlong *)(param_1 + 0x1d8),lVar15,uVar3);
          iVar8 = *(int *)(param_1 + 0x228);
          uVar7 = *(undefined2 *)(param_1 + 800);
          uVar5 = (undefined1)local_res8[0];
          *(int *)(param_1 + 0x228) = iVar8 + 1;
          if (*(int *)(param_1 + 0x22c) < iVar8 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x220,iVar8);
          }
          lVar12 = *(longlong *)(param_1 + 0x220);
          *(undefined2 *)(lVar12 + (longlong)iVar8 * 4) = uVar7;
          *(undefined1 *)(lVar12 + 2 + (longlong)iVar8 * 4) = uVar5;
          *(short *)(param_1 + 800) = *(short *)(param_1 + 800) + -1;
          lVar12 = *(longlong *)
                    (*(longlong *)
                      ((ulonglong)*(ushort *)(param_1 + 800) * 0x60 + 0x10 +
                      *(longlong *)(param_1 + 0x1d8)) + 0x48);
          uVar18 = local_res18;
          if (lVar12 == 0) goto LAB_142bc642a;
        }
        FUN_142bc3b80(lVar12,lVar15,lVar17,local_res8);
        lVar17 = lVar12;
      }
      else if ((-1 < iVar8) && (iVar8 < *(int *)(lVar17 + 0x60))) {
        uVar18 = *(ulonglong *)((longlong)iVar8 * 0x30 + 8 + *(longlong *)(lVar17 + 0x58));
        lVar17 = *(longlong *)((longlong)iVar8 * 0x30 + *(longlong *)(lVar17 + 0x58));
        local_res18 = uVar18;
      }
    } while (lVar17 != 0);
    if (uVar18 == 0) goto LAB_142bc642a;
LAB_142bc635c:
    uVar3 = *(ushort *)(param_1 + 800);
    uVar4 = *(ushort *)(uVar18 + 0x50);
    bVar22 = uVar3 < *(ushort *)(param_1 + 0x24c);
    if (uVar3 == *(ushort *)(param_1 + 0x24c)) {
      bVar22 = uVar4 < *(ushort *)(param_1 + 0x24e);
    }
    if (bVar22) {
      if ((*(byte *)(uVar18 + 0x68) & 1) != 0) {
        lVar17 = (ulonglong)uVar3 * 0x60 + *(longlong *)(param_1 + 0x1d8);
        if ((*(longlong *)(lVar17 + 0x10) == 0) ||
           (*(ushort *)(*(longlong *)(lVar17 + 0x10) + 0x50) != uVar4)) {
          lVar15 = 0;
          if (0 < *(int *)(lVar17 + 0x30)) {
            plVar10 = *(longlong **)(lVar17 + 0x28);
            lVar12 = lVar15;
            do {
              if ((*plVar10 != 0) && (*(ushort *)(*plVar10 + 0x50) == uVar4)) {
                bVar23 = (int)plVar10[1] == 0;
                goto LAB_142bc641e;
              }
              lVar12 = lVar12 + 1;
              plVar10 = plVar10 + 2;
            } while (lVar12 < *(int *)(lVar17 + 0x30));
          }
          if (0 < *(int *)(lVar17 + 0x20)) {
            do {
              lVar12 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + lVar15 * 8);
              if ((lVar12 != 0) && (*(ushort *)(lVar12 + 0x50) == uVar4)) goto LAB_142bc6425;
              lVar15 = lVar15 + 1;
            } while (lVar15 < *(int *)(lVar17 + 0x20));
          }
        }
        else {
          bVar23 = *(char *)(lVar17 + 0x49) == '\x01';
LAB_142bc641e:
          if (bVar23) {
LAB_142bc6425:
            bVar22 = false;
            goto LAB_142bc6437;
          }
        }
      }
      goto LAB_142bc642d;
    }
LAB_142bc6437:
    FUN_142bc9b20(param_1);
    uVar19 = *(uint *)(param_1 + 0x240);
  }
  *(uint *)(param_1 + 0x240) = uVar19 & 0xfffffffd;
  if ((uVar19 & 1) != 0) {
    *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) | 8;
    return;
  }
  *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined2 *)(param_1 + 600) = local_48;
  *(undefined1 *)(param_1 + 0x25a) = local_46;
  *(byte *)(param_1 + 0x25b) = *(byte *)(param_1 + 0x25b) & 0xfc;
  *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) & 0xfffffffd;
  if (bVar22) {
    if (*(char *)((longlong)*(int *)(param_1 + 0x1e0) * 0x60 + -0x17 +
                 *(longlong *)(param_1 + 0x1d8)) == '\x01') {
      iVar8 = *(int *)(param_1 + 0x1e0);
      lVar17 = (longlong)iVar8 * 0x60 + *(longlong *)(param_1 + 0x1d8);
      *(undefined1 *)(lVar17 + -0x17) = 2;
      plVar10 = *(longlong **)(lVar17 + -0x50);
      if ((plVar10 != (longlong *)0x0) && (*(int *)(param_1 + 0x1e0) != 0)) {
        local_res10._2_2_ = (short)plVar10[10];
        uVar7 = FUN_142bbb940(param_1,plVar10);
        local_res10 = CONCAT22(local_res10._2_2_,uVar7);
        FUN_142bc7e00(param_1 + 0x280,&local_res10);
      }
      *(uint *)(param_1 + 0x240) = *(uint *)(param_1 + 0x240) | 4;
      lVar15 = (ulonglong)*(ushort *)((longlong)plVar10 + 0x52) + *(longlong *)(lVar17 + -0x28);
      plVar11 = plVar10;
      if ((*(byte *)((longlong)plVar10 + 0x55) & 4) != 0) {
        plVar11 = (longlong *)FUN_142bbe0b0(plVar10,param_1,lVar15);
      }
      if (plVar11 == (longlong *)0x0) {
        uVar9 = 2;
      }
      else {
        uVar9 = (**(code **)(*plVar11 + 0x2d0))(plVar11,param_1,lVar15);
      }
      if ((*(char *)(lVar17 + -0x17) == '\x02') && (*(int *)(param_1 + 0x1e0) == iVar8)) {
        FUN_142bc45b0(param_1,plVar10,uVar9);
      }
    }
    *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) & 0xfffffffe;
    *(ulonglong *)(param_1 + 0x260) = local_res18;
    *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) | (uint)(local_res18 == 0);
  }
LAB_142bc6598:
  FUN_142bc65e0(param_1);
  return;
}



// FUNCTION 142bc65e0 FUN_142bc65e0 body=573 status=ok
// SIG undefined FUN_142bc65e0(void)

void FUN_142bc65e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_res8;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (((*(byte *)(param_1 + 0x323) & 4) == 0) &&
     (((*(longlong *)(param_1 + 0x260) != 0 || ((*(byte *)(param_1 + 0x268) & 1) != 0)) &&
      ((*(byte *)(param_1 + 0x268) & 2) == 0)))) {
    lVar3 = *(longlong *)(param_1 + 0x260);
    *(undefined4 *)(param_1 + 0x260) = 0;
    *(undefined4 *)(param_1 + 0x264) = 0;
    *(uint *)(param_1 + 0x268) = uStack_20 & 0xfffffffc;
    *(undefined4 *)(param_1 + 0x26c) = uStack_1c;
    if (lVar3 == 0) {
      local_res8 = 0;
    }
    else {
      local_res8 = CONCAT22(*(undefined2 *)(lVar3 + 0x50),*(undefined2 *)(param_1 + 800));
    }
    FUN_142bcd030(0,&local_res8);
    FUN_142bb4400(param_1,lVar3);
    iVar6 = *(ushort *)(param_1 + 800) + 1;
    if (iVar6 < *(int *)(param_1 + 0x1e0)) {
      do {
        FUN_142bb5430((longlong)iVar6 * 0x60 + *(longlong *)(param_1 + 0x1d8),param_1,1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x1e0));
      plVar1 = (longlong *)(param_1 + 0x1d8);
      iVar6 = *(int *)(param_1 + 0x1e0);
      iVar5 = *(ushort *)(param_1 + 800) + 1;
      if (iVar6 < iVar5) {
        *(int *)(param_1 + 0x1e0) = iVar5;
        iVar7 = iVar5 - iVar6;
        if (*(int *)(param_1 + 0x1e4) < iVar5) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
        }
        if (iVar7 != 0) {
          lVar4 = (longlong)iVar6 * 0x60 + 0x24 + *plVar1;
          do {
            *(undefined8 *)(lVar4 + -0xc) = 0;
            *(undefined8 *)(lVar4 + -4) = 0;
            *(undefined8 *)(lVar4 + 4) = 0;
            *(undefined8 *)(lVar4 + 0xc) = 0;
            *(undefined8 *)(lVar4 + 0x14) = 0;
            *(undefined8 *)(lVar4 + 0x1c) = 0;
            *(undefined8 *)(lVar4 + 0x2c) = 0;
            *(undefined4 *)(lVar4 + 0x34) = 0;
            lVar4 = lVar4 + 0x60;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      else if (iVar5 < iVar6) {
        FUN_142bc81e0(plVar1,iVar5,iVar6 - iVar5,1);
      }
    }
    if ((lVar3 == 0) || (*(int *)(param_1 + 0x1e0) <= (int)(uint)*(ushort *)(param_1 + 800))) {
      *(undefined2 *)(param_1 + 800) = 0;
      if (((*(byte *)(param_1 + 0x323) & 2) == 0) || (*(int *)(param_1 + 0x1e0) == 0)) {
        FUN_142bcb3d0(param_1,0);
      }
      else {
        puVar2 = *(undefined8 **)(param_1 + 0x1d8);
        local_res8 = 0;
        puVar2[2] = 0;
        *(undefined1 *)((longlong)puVar2 + 0x49) = 0;
        FUN_142bcd030(param_1,&local_res8);
        FUN_142bc8500(param_1,*puVar2,0,*puVar2,0,3,1);
      }
    }
    else {
      FUN_142bbaca0(param_1,lVar3);
    }
  }
  return;
}



// FUNCTION 142bc6820 FUN_142bc6820 body=241 status=ok
// SIG undefined FUN_142bc6820(void)

void FUN_142bc6820(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  
  FUN_142bcb3d0();
  if ((*(byte *)(param_1 + 0x323) & 4) == 0) {
    FUN_142bc7f90(param_1);
    bVar5 = 0;
    if (*(int *)(param_1 + 0x278) == 1) {
      bVar5 = 2;
    }
    lVar3 = *(longlong *)(param_1 + 0x120);
    *(byte *)(param_1 + 0x323) = bVar5 | *(byte *)(param_1 + 0x323) & 0xfd | 0x20;
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    lVar3 = FUN_142bbcae0(lVar3);
    if (lVar3 != 0) {
      plVar2 = *(longlong **)(lVar3 + 0x40);
      iVar1 = *(int *)(lVar3 + 0x48);
      for (plVar4 = plVar2; plVar4 != plVar2 + iVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 == param_1) {
          if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) goto LAB_142bc68f5;
          break;
        }
      }
      *(int *)(lVar3 + 0x48) = iVar1 + 1;
      if (*(int *)(lVar3 + 0x4c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(lVar3 + 0x40));
      }
      *(longlong *)((longlong)iVar1 * 8 + *(longlong *)(lVar3 + 0x40)) = param_1;
    }
LAB_142bc68f5:
    FUN_142bc6b80(param_1,*(undefined8 *)(param_1 + 0x270));
    *(byte *)(param_1 + 0x27c) = *(byte *)(param_1 + 0x27c) & 0xfe;
  }
  return;
}



// FUNCTION 142bc6920 PropagateKeyChangesToDerivedBlackboardAssets body=373 status=ok
// SIG undefined PropagateKeyChangesToDerivedBlackboardAssets(void)

void UBlackboardData::PropagateKeyChangesToDerivedBlackboardAssets(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar3 = GetPrivateStaticClass();
  FUN_1417a5560(uVar3,&local_28,1,0x10,0);
  uVar5 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    lVar4 = local_28;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar5 <= local_18)) {
        if (lVar4 != 0) {
          FMemory::Free();
        }
        return;
      }
      lVar1 = *(longlong *)(lVar4 + (longlong)local_18 * 8);
      if (*(longlong *)(lVar1 + 0x30) == param_1) {
        FUN_142bce4c0(lVar1);
        lVar4 = *(longlong *)(local_28 + (longlong)local_18 * 8);
        if ((*(longlong *)(lVar4 + 0x30) == 0) ||
           (uVar2 = 1, (*(byte *)(*(longlong *)(lVar4 + 0x30) + 0x48) & 1) == 0)) {
          uVar2 = 0;
        }
        uVar2 = *(uint *)(lVar4 + 0x48) & 0xfffffffe | uVar2;
        *(uint *)(lVar4 + 0x48) = uVar2;
        uVar5 = 0;
        uVar7 = 0;
        if (0 < *(int *)(lVar4 + 0x40)) {
          do {
            if ((uVar2 & 1) != 0) break;
            uVar6 = (int)uVar7 + 1;
            uVar2 = ((*(uint *)(uVar5 + 0x10 + *(longlong *)(lVar4 + 0x38)) | uVar2) ^ uVar2) & 1 ^
                    uVar2;
            *(uint *)(lVar4 + 0x48) = uVar2;
            uVar5 = uVar5 + 0x18;
            uVar7 = (ulonglong)uVar6;
          } while ((int)uVar6 < *(int *)(lVar4 + 0x40));
        }
        PropagateKeyChangesToDerivedBlackboardAssets
                  (*(undefined8 *)(local_28 + (longlong)local_18 * 8));
        uVar5 = local_20 & 0xffffffff;
        lVar4 = local_28;
      }
      local_18 = local_18 + 1;
    } while ((int)uVar5 <= local_18);
    do {
      if (*(longlong *)(lVar4 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)uVar5);
  } while( true );
}



// FUNCTION 142bc6aa0 FUN_142bc6aa0 body=222 status=ok
// SIG undefined FUN_142bc6aa0(void)

ulonglong FUN_142bc6aa0(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong in_RAX;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if ((*(int *)(param_2 + 0x84) != 0) && (*(int *)(param_2 + 0x88) < 2)) {
    return in_RAX & 0xffffffffffffff00;
  }
  *(undefined4 *)(param_2 + 0x60) = param_3;
  *(longlong *)(param_2 + 0x38) = param_1;
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x178) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x178) + 0x490), plVar1 != (longlong *)0x0)) {
    lVar3 = FUN_142c2de20();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = UThrobber::GetPrivateStaticClass();
      uVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
      *(undefined8 *)(param_2 + 0x48) = uVar4;
    }
  }
  *(undefined8 *)(param_2 + 0x40) = param_4;
  uVar5 = FUN_142bc3e30(param_1,param_2,5);
  return uVar5;
}



// FUNCTION 142bc6b80 FUN_142bc6b80 body=1320 status=ok
// SIG undefined FUN_142bc6b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142bc6b80(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  bool bVar3;
  ushort uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  ushort local_res18 [4];
  undefined4 local_res20 [2];
  longlong local_a8 [2];
  longlong local_98 [7];
  void *local_60;
  undefined8 local_58;
  byte local_50;
  undefined1 local_4f;
  undefined8 local_48;
  undefined4 local_40;
  
  if (((*(longlong *)(param_2 + 0x30) == 0) || (*(longlong *)(param_1 + 0x180) == 0)) ||
     (cVar5 = FUN_142bc1bf0(), cVar5 != '\0')) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    lVar6 = FUN_142bbcae0(lVar6);
    if (lVar6 != 0) {
      iVar1 = *(int *)(param_1 + 0x1e0);
      plVar9 = (longlong *)0x0;
      plVar8 = plVar9;
      plVar15 = plVar9;
      if ((iVar1 != 0) &&
         (plVar8 = *(longlong **)
                    ((ulonglong)*(ushort *)(param_1 + 800) * 0x60 + 0x10 +
                    *(longlong *)(param_1 + 0x1d8)), plVar8 != (longlong *)0x0)) {
        plVar15 = (longlong *)plVar8[9];
      }
      if (plVar15 != (longlong *)0x0) {
        plVar13 = plVar9;
        if ((0 < iVar1) && (iVar1 + -1 < iVar1)) {
          plVar13 = (longlong *)
                    ((ulonglong)*(ushort *)((longlong)plVar15 + 0x52) +
                    *(longlong *)((longlong)iVar1 * 0x60 + -0x28 + *(longlong *)(param_1 + 0x1d8)));
        }
        if (plVar8 == (longlong *)0x0) {
          plVar14 = (longlong *)0xffffffff;
        }
        else {
          if (0 < (int)plVar15[0xc]) {
            plVar7 = (longlong *)plVar15[0xb];
            plVar14 = plVar9;
            do {
              if (((longlong *)*plVar7 == plVar8) || ((longlong *)plVar7[1] == plVar8))
              goto LAB_142bc6c9b;
              plVar14 = (longlong *)(ulonglong)((int)plVar14 + 1);
              plVar9 = (longlong *)((longlong)plVar9 + 1);
              plVar7 = plVar7 + 6;
            } while ((longlong)plVar9 < (longlong)(int)plVar15[0xc]);
          }
          plVar14 = (longlong *)0xfffffffe;
        }
LAB_142bc6c9b:
        cVar5 = (**(code **)(*plVar15 + 0x2d8))(plVar15,param_1,plVar13,plVar14);
        if (cVar5 == '\0') {
          return 0;
        }
      }
      local_a8[0] = 0;
      local_res18[0] = 0;
      cVar5 = FUN_142bc2870(lVar6,param_2,local_a8,local_res18);
      if (cVar5 != '\0') {
        local_98[3] = 0;
        local_98[4] = 0;
        local_98[5] = 0;
        local_98[6] = 0;
        local_60 = (void *)0x0;
        local_58 = 0;
        local_48 = 0;
        local_40 = 0;
        local_50 = FUN_142bce0d0(param_1,param_2,plVar8,*(int *)(param_1 + 0x1e0) + -1);
        lVar6 = local_a8[0];
        uVar4 = local_res18[0];
        local_98[0] = local_a8[0];
        lVar10 = (ulonglong)local_50 * 0x38 + *(longlong *)(param_1 + 0x1e8);
        local_98[2] = 0;
        local_4f = 0;
        local_98[1] = 0;
        local_res20[0] = *(undefined4 *)(lVar10 + 0x30);
        uVar2 = *(uint *)(lVar10 + 0x28);
        if (uVar2 != local_res18[0]) {
          TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed
                    (lVar10 + 0x20,(uint)local_res18[0]);
          *(longlong *)(lVar10 + 8) = lVar6;
        }
        if (&local_60 != (void **)(lVar10 + 0x20)) {
          iVar1 = *(int *)(lVar10 + 0x28);
          _Src = *(void **)(lVar10 + 0x20);
          local_58 = CONCAT44(local_58._4_4_,iVar1);
          if ((iVar1 != 0) || (local_58._4_4_ != 0)) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_60,iVar1);
            _guard_xfg_dispatch_icall_nop(local_60,_Src,(longlong)iVar1);
          }
        }
        FUN_142bbfed0(local_98,param_1,lVar6,local_res20,uVar2 == uVar4);
        iVar1 = *(int *)(param_1 + 0x1e0);
        *(int *)(param_1 + 0x1e0) = iVar1 + 1;
        if (*(int *)(param_1 + 0x1e4) < iVar1 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow
                    ((longlong *)(param_1 + 0x1d8),iVar1);
        }
        iVar16 = 0;
        lVar17 = 0;
        lVar10 = (longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x1d8);
        *(undefined8 *)(lVar10 + 0x18) = 0;
        *(undefined8 *)(lVar10 + 0x20) = 0;
        *(undefined8 *)(lVar10 + 0x28) = 0;
        *(undefined8 *)(lVar10 + 0x30) = 0;
        *(undefined8 *)(lVar10 + 0x38) = 0;
        *(undefined8 *)(lVar10 + 0x40) = 0;
        *(undefined8 *)(lVar10 + 0x50) = 0;
        *(undefined4 *)(lVar10 + 0x58) = 0;
        FUN_142bb2310(lVar10,local_98);
        *(short *)(param_1 + 800) = *(short *)(param_1 + 0x1e0) + -1;
        if (0 < *(int *)(lVar6 + 0x70)) {
          do {
            plVar8 = *(longlong **)(lVar17 + *(longlong *)(lVar6 + 0x68));
            lVar6 = (ulonglong)*(ushort *)((longlong)plVar8 + 0x52) +
                    *(longlong *)
                     ((ulonglong)*(ushort *)(param_1 + 800) * 0x60 + 0x38 +
                     *(longlong *)(param_1 + 0x1d8));
            FUN_142bc3890(plVar8,param_1 + 0x208);
            lVar10 = *(longlong *)(param_1 + 0x1d8) + (ulonglong)*(ushort *)(param_1 + 800) * 0x60;
            iVar1 = *(int *)(lVar10 + 0x20);
            *(int *)(lVar10 + 0x20) = iVar1 + 1;
            if (*(int *)(lVar10 + 0x24) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar10 + 0x18,iVar1)
              ;
            }
            *(longlong **)(*(longlong *)(lVar10 + 0x18) + (longlong)iVar1 * 8) = plVar8;
            if ((*(byte *)(plVar8 + 0xb) & 1) != 0) {
              if ((*(byte *)((longlong)plVar8 + 0x55) & 4) != 0) {
                plVar8 = (longlong *)FUN_142bbe0b0(plVar8,param_1,lVar6);
              }
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x2c8))(plVar8,param_1,lVar6);
              }
            }
            iVar16 = iVar16 + 1;
            lVar17 = lVar17 + 8;
            lVar6 = local_a8[0];
          } while (iVar16 < *(int *)(local_a8[0] + 0x70));
        }
        uVar11 = 0;
        bVar3 = false;
        DAT_146690f6c = DAT_146690f6c + 1;
        lVar10 = (longlong)(DAT_146690f60 + -1);
        if (-1 < DAT_146690f60 + -1) {
          lVar17 = lVar10 << 4;
          bVar3 = false;
          do {
            if (((*(int *)(lVar17 + 8 + DAT_146690f58) == 0) ||
                (plVar8 = *(longlong **)(lVar17 + DAT_146690f58), plVar8 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar8 + 0x40))(plVar8,param_1,param_2), cVar5 == '\0')) {
              bVar3 = true;
            }
            lVar17 = lVar17 + -0x10;
            lVar10 = lVar10 + -1;
          } while (-1 < lVar10);
        }
        iVar1 = DAT_146690f60;
        DAT_146690f6c = DAT_146690f6c + -1;
        if ((bVar3) && (DAT_146690f6c < 1)) {
          uVar12 = uVar11;
          if (0 < DAT_146690f60) {
            do {
              if (((*(int *)(uVar12 + 8 + DAT_146690f58) == 0) ||
                  (*(longlong **)(uVar12 + DAT_146690f58) == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(**(longlong **)(uVar12 + DAT_146690f58) + 0x10))(),
                 cVar5 != '\0')) {
                TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146690f58,uVar11,1,1);
              }
              else {
                uVar11 = (ulonglong)((int)uVar11 + 1);
                uVar12 = uVar12 + 0x10;
              }
            } while ((int)uVar11 < DAT_146690f60);
          }
          _DAT_146690f68 = DAT_146690f60 * 2;
          if (_DAT_146690f68 < 3) {
            _DAT_146690f68 = 2;
          }
          if ((_DAT_146690f68 < iVar1) && (DAT_146690f64 != DAT_146690f60)) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146690f58);
          }
        }
        FUN_142bc8500(param_1,lVar6,*(undefined2 *)(param_1 + 800),lVar6,0,3,1);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
        if (local_60 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_98[5] != 0) {
          FMemory::Free();
        }
        if (local_98[3] != 0) {
          FMemory::Free();
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142bc70b0 FUN_142bc70b0 body=261 status=ok
// SIG undefined FUN_142bc70b0(void)

undefined8 FUN_142bc70b0(longlong *param_1)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  
  uVar2 = *(uint *)(param_1 + 0x17);
  if (*(uint *)(param_1 + 0x14) <= uVar2) {
    local_res8 = CONCAT71(local_res8._1_7_,2);
    (**(code **)(*param_1 + 0x288))(param_1,&local_res8);
    return 1;
  }
  if (*(int *)((longlong)param_1 + 0xbc) != 0) {
    lVar3 = *(longlong *)(param_1[0x13] + (longlong)(int)uVar2 * 8);
    goto LAB_142bc7180;
  }
  local_res8 = 0;
  lVar3 = FUN_1417987a0(*(undefined8 *)(param_1[0x13] + (longlong)(int)uVar2 * 8),param_1,0,
                        0xefffffff,0,0,0xff800000);
  if (lVar3 == 0) {
LAB_142bc716c:
    lVar3 = 0;
  }
  else {
    lVar4 = UPawnAction::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142bc716c;
  }
  uVar2 = *(uint *)(param_1 + 0x17);
LAB_142bc7180:
  *(uint *)(param_1 + 0x17) = uVar2 + 1;
  uVar5 = 0;
  param_1[0x16] = lVar3;
  if (param_1[7] != 0) {
    uVar5 = FUN_142bc6aa0(param_1[7],lVar3,(int)param_1[0xc],param_1[8]);
  }
  return uVar5;
}



// FUNCTION 142bc71c0 FUN_142bc71c0 body=282 status=ok
// SIG undefined FUN_142bc71c0(void)

undefined8 FUN_142bc71c0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  
  lVar3 = param_1[0x13];
  if (lVar3 == 0) {
    local_res8 = CONCAT71(local_res8._1_7_,3);
    (**(code **)(*param_1 + 0x288))(param_1,&local_res8);
    return 0;
  }
  iVar1 = *(int *)((longlong)param_1 + 0xac);
  if (iVar1 == 0) {
    local_res8 = CONCAT71(local_res8._1_7_,2);
    (**(code **)(*param_1 + 0x288))(param_1,&local_res8);
    return 1;
  }
  if (0 < iVar1) {
    *(int *)((longlong)param_1 + 0xac) = iVar1 + -1;
  }
  if ((int)param_1[0x16] == 0) {
    local_res8 = 0;
    lVar3 = FUN_1417987a0(lVar3,param_1,0,0xefffffff,0,0,0xff800000);
    if (lVar3 != 0) {
      lVar4 = UPawnAction::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_142bc72ad;
    }
    lVar3 = 0;
  }
LAB_142bc72ad:
  uVar5 = 0;
  param_1[0x14] = lVar3;
  if (param_1[7] != 0) {
    uVar5 = FUN_142bc6aa0(param_1[7],lVar3,(int)param_1[0xc],param_1[8]);
  }
  return uVar5;
}



// FUNCTION 142bc72e0 FUN_142bc72e0 body=131 status=ok
// SIG undefined FUN_142bc72e0(void)

void FUN_142bc72e0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  
  uVar1 = FUN_142bbb940(param_2,param_1);
  if ((int)(uint)uVar1 < *(int *)(param_2 + 0x1e0)) {
    (**(code **)(*param_1 + 0x2e0))
              (param_1,param_2,
               (ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
               *(longlong *)((ulonglong)uVar1 * 0x60 + 0x38 + *(longlong *)(param_2 + 0x1d8)),
               *param_3,*(undefined4 *)(param_3 + 2),*(char *)((longlong)param_3 + 0x14) == '\x01');
  }
  return;
}



// FUNCTION 142bc7370 RegisterBlackboardComponent body=273 status=ok
// SIG undefined RegisterBlackboardComponent(void)

void UAISystem::RegisterBlackboardComponent(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 *local_28;
  undefined1 *local_20;
  
  FWeakObjectPtr::operator=(local_res10,param_3);
  FWeakObjectPtr::operator=(local_res20,param_2);
  param_1 = param_1 + 0xd0;
  TMultiMap<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>_>
  ::FindPair(param_1,local_res20,local_res10);
  FWeakObjectPtr::operator=(local_38,param_3);
  FWeakObjectPtr::operator=(local_30,param_2);
  local_28 = local_30;
  local_20 = local_38;
  FUN_14237c4d0(param_1,local_res8,&local_28,0);
  for (lVar1 = *(longlong *)(param_2 + 0x30); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
    FWeakObjectPtr::operator=(local_res10,param_3);
    FWeakObjectPtr::operator=(local_res20,lVar1);
    TMultiMap<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>_>
    ::FindPair(param_1,local_res20,local_res10);
    FWeakObjectPtr::operator=(local_38,param_3);
    FWeakObjectPtr::operator=(local_30,lVar1);
    FUN_14237c4d0(param_1,local_res8,&local_28,0);
  }
  return;
}



// FUNCTION 142bc7490 FUN_142bc7490 body=382 status=ok
// SIG undefined FUN_142bc7490(void)

void FUN_142bc7490(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  short local_res10;
  undefined2 local_res12;
  undefined1 local_res20 [8];
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_2 != 0) {
    local_res12 = *(undefined2 *)(param_2 + 0x50);
    local_res10 = *(short *)(param_1 + 0x1e0) + -1;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_142bc72e0;
    local_48 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_40 = 3;
    local_48 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(plVar3 + 1,param_2);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar3 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_30._4_4_;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_144012f78;
    }
    local_38 = (code *)&local_res10;
    uStack_30 = FUN_142bd9e70(local_28,param_1,param_3,&local_48);
    FUN_142badf70(param_1 + 0x280,local_res20,&local_38,0);
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
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_48 + 0x28))(local_48,0);
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
      }
      local_40 = 0;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}



// FUNCTION 142bc7610 FUN_142bc7610 body=410 status=ok
// SIG undefined FUN_142bc7610(void)

void FUN_142bc7610(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  short local_res10;
  undefined2 local_res12;
  undefined1 local_58 [8];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30 [8];
  longlong *local_28;
  
  if (param_2 != 0) {
    local_res12 = *(undefined2 *)(param_2 + 0x50);
    local_res10 = *(short *)(param_1 + 0x1e0) + -1;
    local_50 = (longlong *)0x0;
    local_40 = FUN_142bc72e0;
    uStack_38 = uStack_38 & 0xffffffff00000000;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_48 = 3;
    local_50 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(plVar3 + 1,param_2);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_40;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_40._4_4_;
      *(undefined4 *)(plVar3 + 3) = (undefined4)uStack_38;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_38._4_4_;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_144012f78;
    }
    local_40 = (code *)&local_res10;
    uStack_38 = FUN_142bda070(local_30,param_1,param_3,param_4,&local_50);
    FUN_142badf70(param_1 + 0x280,local_58,&local_40,0);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_50 + 0x28))(local_50,0);
      if (local_50 != (longlong *)0x0) {
        local_50 = (longlong *)FMemory::Realloc(local_50,0,0);
      }
      local_48 = 0;
    }
    if (local_50 != (longlong *)0x0) {
      FMemory::Free(local_50);
    }
  }
  return;
}



// FUNCTION 142bc77b0 FUN_142bc77b0 body=612 status=ok
// SIG undefined FUN_142bc77b0(void)

undefined8 *
FUN_142bc77b0(longlong param_1,undefined8 *param_2,byte param_3,undefined8 param_4,longlong *param_5
             )

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  longlong local_res8;
  byte local_res18 [8];
  longlong local_res20;
  undefined8 local_78;
  undefined1 local_70 [8];
  byte *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  iStack_44 = -1;
  iStack_40 = -1;
  pbVar10 = (byte *)(param_1 + 0x1b8);
  uStack_48 = CONCAT31(uStack_48._1_3_,param_3);
  local_res8 = param_1;
  local_res18[0] = param_3;
  local_res20 = param_4;
  local_50 = (longlong *)pbVar10;
  TSet<TTuple<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride>,TDefaultMapHashableKeyFuncs<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride,0>,FDefaultSetAllocator>
  ::ConditionalRehash(pbVar10,*(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x1ec),0);
  plVar1 = local_50;
  if (*(int *)(param_1 + 0x200) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1f8);
    if (*(longlong *)(param_1 + 0x1f8) == 0) {
      lVar3 = param_1 + 0x1f0;
    }
    iStack_40 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x200) - 1U & (ulonglong)param_3) * 4
                        );
    iStack_44 = iStack_40;
    if (iStack_40 != -1) {
      do {
        iStack_40 = *(int *)((longlong)iStack_44 * 0x20 + 0x18 + *(longlong *)pbVar10);
        if (*(byte *)((longlong)iStack_44 * 0x20 + *(longlong *)pbVar10) == param_3) break;
        iStack_44 = iStack_40;
      } while (iStack_40 != -1);
    }
  }
  local_58 = CONCAT44(uStack_3c,iStack_40);
  local_68 = (byte *)local_50;
  uStack_60 = (longlong *)CONCAT44(iStack_44,uStack_48);
  puVar6 = uStack_60;
  if (iStack_44 != -1) {
    uStack_60._0_1_ = (char)uStack_48;
    cVar2 = (char)uStack_60;
    iVar9 = iStack_40;
    iVar8 = iStack_44;
    uStack_60 = puVar6;
    do {
      lVar3 = 0;
      if (((int)param_5[1] != 0) && (plVar4 = (longlong *)*param_5, plVar4 != (longlong *)0x0)) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_70);
        lVar3 = *plVar4;
      }
      lVar5 = 0;
      lVar7 = (longlong)iVar8 * 0x20 + *plVar1;
      if ((*(int *)(lVar7 + 0x10) != 0) &&
         (plVar4 = *(longlong **)(lVar7 + 8), plVar4 != (longlong *)0x0)) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
        lVar5 = *plVar4;
      }
      if (lVar5 == lVar3) {
        lVar3 = *plVar1;
        *param_2 = 0;
        if ((*(int *)((longlong)iVar8 * 0x20 + 0x10 + lVar3) != 0) &&
           (plVar1 = *(longlong **)((longlong)iVar8 * 0x20 + 8 + lVar3), plVar1 != (longlong *)0x0))
        {
          puVar6 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,&local_res8);
          *param_2 = *puVar6;
        }
        goto LAB_142bc79b8;
      }
      param_1 = local_res8;
      pbVar10 = (byte *)local_50;
      if (iVar9 == -1) break;
      iVar8 = iVar9;
      do {
        iVar9 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *plVar1);
        if (*(char *)((longlong)iVar8 * 0x20 + *plVar1) == cVar2) break;
        iVar8 = iVar9;
      } while (iVar9 != -1);
    } while (iVar8 != -1);
  }
  local_68 = local_res18;
  uStack_60 = param_5;
  FUN_142baddd0(pbVar10,&local_res8,&local_68,0);
  local_78 = 0;
  if ((*(int *)((longlong)(int)local_res8 * 0x20 + 0x10 + *(longlong *)pbVar10) != 0) &&
     (plVar1 = *(longlong **)((longlong)(int)local_res8 * 0x20 + 8 + *(longlong *)pbVar10),
     plVar1 != (longlong *)0x0)) {
    puVar6 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,&local_res8);
    local_78 = *puVar6;
  }
  local_68 = (byte *)&local_res20;
  uStack_60 = &local_78;
  FUN_1405deec0(param_1 + 0x208,&local_res8,&local_68,0);
  *param_2 = local_78;
LAB_142bc79b8:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_5);
  return param_2;
}



// FUNCTION 142bc7a20 FUN_142bc7a20 body=143 status=ok
// SIG undefined FUN_142bc7a20(void)

void FUN_142bc7a20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uStack_c;
  
  if ((int)(uint)*(ushort *)(param_1 + 800) < *(int *)(param_1 + 0x1e0)) {
    lVar3 = (ulonglong)*(ushort *)(param_1 + 800) * 0x60 + *(longlong *)(param_1 + 0x1d8);
    iVar2 = *(int *)(lVar3 + 0x30);
    *(int *)(lVar3 + 0x30) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x34) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 0x28,iVar2);
    }
    plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x28) + (longlong)iVar2 * 0x10);
    *plVar1 = param_2;
    plVar1[1] = (ulonglong)uStack_c << 0x20;
    if (*(longlong *)(lVar3 + 0x10) == param_2) {
      *(undefined1 *)(lVar3 + 0x49) = 3;
    }
  }
  return;
}



// FUNCTION 142bc7ab0 RegisterResource body=139 status=ok
// SIG undefined RegisterResource(void)

void FAIResources::RegisterResource(byte *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = (longlong)(int)DAT_146b2c568;
  if (DAT_146b2c568 < DAT_146b2c5bc) {
    iVar3 = DAT_146b2c5bc - DAT_146b2c568;
    DAT_146b2c568 = DAT_146b2c568 + iVar3;
    if (DAT_146b2c56c < (int)DAT_146b2c568) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146b2c560);
    }
    ::_guard_xfg_dispatch_icall_nop((void *)(lVar2 * 0x10 + DAT_146b2c560),0,(longlong)iVar3 << 4);
  }
  pbVar1 = (byte *)((ulonglong)*param_1 * 0x10 + DAT_146b2c560);
  *pbVar1 = *param_1;
  *(undefined8 *)(pbVar1 + 8) = *(undefined8 *)(param_1 + 8);
  return;
}



// FUNCTION 142bc7b40 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FBTNodeIndex,TSharedPtr<FAIMessageObserver,0>_>,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,0>,1>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  ushort *puVar13;
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
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar9) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar9;
      do {
        uVar8 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar8 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar9 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_142bc7c7f;
        uVar9 = puVar12[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
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
LAB_142bc7c7f:
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
        puVar13 = (ushort *)((longlong)iStack_1c * 0x20 + *param_1);
        uVar9 = (uint)(puVar13[1] ^ *puVar13) & (int)*plVar2 - 1U;
        *(uint *)(puVar13 + 0xe) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar13 + 0xc) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 142bc7d50 FUN_142bc7d50 body=173 status=ok
// SIG undefined FUN_142bc7d50(void)

void FUN_142bc7d50(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar6 = (longlong)param_2 * 0x20;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0x1c + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar6 + 0x18 + lVar2);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x18 + (longlong)iVar1 * 0x20);
      iVar1 = *piVar5;
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>((longlong)param_2 * 0x20 + 8 + *param_1);
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 142bc7e00 FUN_142bc7e00 body=392 status=ok
// SIG undefined FUN_142bc7e00(void)

int FUN_142bc7e00(longlong *param_1,ushort *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  
  iVar8 = 0;
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar6 = (ulonglong)(param_2[1] ^ *param_2) & (longlong)((int)param_1[9] + -1);
  plVar4 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar4 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar4 + uVar6 * 4);
  piVar11 = (int *)((longlong)plVar4 + uVar6 * 4);
  if (iVar9 == -1) {
    iVar8 = 0;
  }
  else {
    do {
      lVar3 = *param_1;
      lVar10 = (longlong)iVar9 * 0x20;
      if ((param_2[1] == *(ushort *)(lVar10 + 2 + lVar3)) &&
         (*param_2 == *(ushort *)(lVar10 + lVar3))) {
        if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
          lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar10 + 0x1c + lVar3));
          plVar4 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar4 = param_1 + 7;
          }
          piVar7 = (int *)((longlong)plVar4 + lVar5 * 4);
          iVar2 = *(int *)((longlong)plVar4 + lVar5 * 4);
          while (iVar2 != -1) {
            if (iVar2 == iVar9) {
              *piVar7 = *(int *)(lVar10 + 0x18 + lVar3);
              break;
            }
            piVar7 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
            iVar2 = *piVar7;
          }
        }
        plVar4 = *(longlong **)(lVar10 + 0x10 + *param_1);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar3 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar7 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized(param_1,iVar9,1);
        iVar8 = iVar8 + 1;
      }
      else {
        piVar11 = (int *)(lVar3 + 0x18 + lVar10);
      }
      iVar9 = *piVar11;
    } while (iVar9 != -1);
  }
  return iVar8;
}



// FUNCTION 142bc7f90 FUN_142bc7f90 body=577 status=ok
// SIG undefined FUN_142bc7f90(void)

void FUN_142bc7f90(longlong param_1)

{
  void *_Src;
  longlong *plVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  size_t _Size;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 local_78 [3];
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  uint local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*(int *)(param_1 + 0x1e0) != 0) {
    FUN_142bcb3d0(param_1,1);
  }
  iVar2 = *(int *)(param_1 + 0x1f0);
  uVar4 = 0;
  local_60 = 0;
  local_34 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  uVar8 = uVar4;
  if (0 < iVar2) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x1e8);
      lVar5 = (longlong)(int)uVar8 * 0x38 + lVar6;
      if (*(int *)(lVar5 + 0x28) != 0) {
        if (&local_40 != (void **)(lVar5 + 0x20)) {
          local_38 = *(int *)(lVar5 + 0x28);
          _Size = (size_t)local_38;
          _Src = *(void **)(lVar5 + 0x20);
          if ((local_38 == 0) && ((int)uVar4 == 0)) {
            local_34 = 0;
          }
          else {
            TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_40,local_38,uVar4);
            _guard_xfg_dispatch_icall_nop(local_40,_Src,_Size);
            lVar6 = *(longlong *)(param_1 + 0x1e8);
            iVar2 = *(int *)(param_1 + 0x1f0);
          }
        }
        local_30 = (undefined1)uVar8;
        uVar4 = uVar8 & 0xff;
        local_78[0] = *(undefined8 *)(lVar5 + 8);
        lVar9 = uVar4 * 0x38 + lVar6;
        lVar5 = (longlong)*(int *)(lVar9 + 0x30);
        if (-1 < *(int *)(lVar9 + 0x30)) {
          iVar3 = *(int *)(param_1 + 0x200);
          if (((int)uVar4 + 1 < iVar2) && (*(int *)(uVar4 * 0x38 + 0x68 + lVar6) <= iVar3)) {
            iVar3 = *(int *)(uVar4 * 0x38 + 0x68 + lVar6);
          }
          for (; lVar5 < iVar3; lVar5 = lVar5 + 1) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1f8) + lVar5 * 8);
            (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1);
          }
        }
        FUN_142bb55c0(local_78,param_1,local_78[0],0);
        *(undefined4 *)(lVar9 + 0x28) = 0;
        if (*(int *)(lVar9 + 0x2c) != 0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(lVar9 + 0x20,0);
        }
        uVar4 = (ulonglong)local_34;
      }
      iVar2 = *(int *)(param_1 + 0x1f0);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < iVar2);
  }
  TArray<FBehaviorTreeInstanceId,FDefaultAllocator>::Reset(param_1 + 0x1e8,0);
  *(undefined4 *)(param_1 + 0x200) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x204)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1f8,0);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  if (local_40 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142bc81e0 FUN_142bc81e0 body=243 status=ok
// SIG undefined FUN_142bc81e0(void)

void FUN_142bc81e0(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x38 + (longlong)param_2 * 0x60);
    iVar3 = param_3;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar2 + 3);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x60),
                 (void *)((longlong)(param_2 + param_3) * 0x60 + *param_1),(longlong)iVar1 * 0x60);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142bc82e0 RemoveAtImpl body=125 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FFocusKnowledge::FFocusItem,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (iVar1 - param_2) - param_3;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x14),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x14),(longlong)iVar2 * 0x14);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 - param_3;
    if (param_4 != '\0') {
      TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142bc8360 RemoveSingle body=393 status=ok
// SIG undefined RemoveSingle(void)

undefined8
TMultiMap<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>
::RemoveSingle(longlong *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint local_res8;
  uint local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  TSet<TTuple<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld,FWeakObjectPtr>,TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] == 0) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar6 +
                  ((longlong)(int)(uVar1 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
  if (iVar8 != -1) {
    do {
      lVar7 = (longlong)iVar8;
      lVar4 = *param_1;
      iVar3 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
      local_res14 = *(undefined4 *)(lVar4 + 4 + lVar7 * 0x18);
      local_res10 = *(undefined4 *)(lVar4 + lVar7 * 0x18);
      local_res8 = uVar1;
      local_resc = uVar2;
      cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res10,&local_res8);
      if (cVar5 != '\0') break;
      iVar8 = iVar3;
    } while (iVar3 != -1);
joined_r0x000142bc842e:
    iVar9 = iVar3;
    if (iVar8 != -1) {
      cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                        (*param_1 + ((longlong)iVar8 * 3 + 1) * 8,param_3);
      if (cVar5 != '\0') {
        TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
        ::Remove(param_1,iVar8);
        return 1;
      }
      if (iVar9 == -1) {
        return 0;
      }
      do {
        lVar7 = (longlong)iVar9;
        lVar4 = *param_1;
        iVar3 = *(int *)(lVar4 + 0x10 + lVar7 * 0x18);
        local_res14 = *(undefined4 *)(lVar4 + 4 + lVar7 * 0x18);
        local_res10 = *(undefined4 *)(lVar4 + lVar7 * 0x18);
        local_res8 = uVar1;
        local_resc = uVar2;
        cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res10,&local_res8);
        iVar8 = iVar9;
        if (cVar5 != '\0') break;
        iVar9 = iVar3;
        iVar8 = iVar3;
      } while (iVar3 != -1);
      goto joined_r0x000142bc842e;
    }
  }
  return 0;
}



// FUNCTION 142bc84f0 FUN_142bc84f0 body=11 status=ok
// SIG undefined FUN_142bc84f0(void)

void FUN_142bc84f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_142bc8b70(param_2,param_3);
  return;
}



// FUNCTION 142bc8500 FUN_142bc8500 body=1357 status=ok
// SIG undefined FUN_142bc8500(void)

void FUN_142bc8500(longlong param_1,longlong param_2,int param_3,longlong param_4,int param_5,
                  int param_6)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  bool bVar13;
  undefined2 local_res8 [4];
  undefined4 local_54;
  longlong local_50;
  longlong local_48;
  
  lVar9 = (longlong)param_5;
  if ((*(byte *)(param_1 + 0x323) & 0x20) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1e0) <= (int)(uint)*(ushort *)(param_1 + 800)) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x118) != 0) && (cVar2 = FUN_1407cd900(), cVar2 != '\0')) {
    return;
  }
  if (((*(longlong *)(param_1 + 0x260) == 0) && ((*(byte *)(param_1 + 0x268) & 1) == 0)) ||
     ((*(byte *)(param_1 + 0x268) & 2) != 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if ((bVar13) && ((*(byte *)(param_1 + 0x268) & 1) != 0)) {
    return;
  }
  local_48 = *(longlong *)(param_1 + 0x250);
  uVar6 = *(ushort *)(param_4 + 0x50);
  uVar12 = (ushort)param_3;
  local_54 = CONCAT22(uVar6,uVar12);
  uVar11 = 0xffff;
  if ((param_6 == 2) && (uVar11 = 0xffff, -1 < param_5)) {
    if (param_5 < *(int *)(param_2 + 0x60)) {
      lVar8 = *(longlong *)(param_2 + 0x58);
      lVar7 = lVar9 * 0x30;
      lVar4 = *(longlong *)(lVar7 + lVar8);
      if ((lVar4 == 0) && (lVar4 = *(longlong *)(lVar7 + 8 + lVar8), lVar4 == 0))
      goto LAB_142bc8614;
      uVar6 = *(short *)(lVar4 + 0x50) - *(short *)(lVar7 + 0x18 + lVar8);
    }
    else {
LAB_142bc8614:
      uVar6 = *(short *)(param_2 + 0x8c) + 1;
    }
    local_54 = CONCAT22(uVar6,uVar12);
    if ((param_5 + 1 < 0) || (*(int *)(param_2 + 0x60) <= param_5 + 1)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) {
      lVar8 = *(longlong *)(param_2 + 0x58);
      lVar7 = (lVar9 + 1) * 0x30;
      lVar4 = *(longlong *)(lVar7 + lVar8);
      if ((lVar4 != 0) || (lVar4 = *(longlong *)(lVar7 + 8 + lVar8), lVar4 != 0)) {
        uVar11 = *(short *)(lVar4 + 0x50) - *(short *)(lVar7 + 0x18 + lVar8);
        goto LAB_142bc8675;
      }
    }
    uVar11 = *(short *)(param_2 + 0x8c) + 1;
  }
LAB_142bc8675:
  if (local_48 != 0) {
    bVar13 = *(ushort *)(param_1 + 0x248) < uVar12;
    if (*(ushort *)(param_1 + 0x248) == uVar12) {
      bVar13 = *(ushort *)(param_1 + 0x24a) < uVar6;
    }
    if (bVar13) {
      uVar6 = *(ushort *)(param_1 + 0x24c);
      if (param_6 != 2) {
        if (uVar6 == 0xffff) {
          return;
        }
        *(undefined4 *)(param_1 + 0x24c) = 0xffffffff;
        return;
      }
      if (uVar6 == 0xffff) {
        return;
      }
      bVar13 = uVar6 < uVar12;
      if (uVar6 == uVar12) {
        bVar13 = *(ushort *)(param_1 + 0x24e) < uVar11;
      }
      if (!bVar13) {
        return;
      }
      *(uint *)(param_1 + 0x24c) = CONCAT22(uVar11,uVar12);
      return;
    }
  }
  if (param_6 == 2) {
    if (((-1 < param_5) && (cVar2 = FUN_142bc1d80(param_1,param_4,param_5), cVar2 == '\0')) &&
       (cVar2 = FUN_142bba8e0(param_2,param_1,param_3,param_5), cVar2 == '\0')) {
      return;
    }
    lVar9 = *(longlong *)(param_1 + 0x250);
    uVar6 = *(ushort *)(param_1 + 600);
    lVar8 = lVar9;
    if (lVar9 == 0) {
      uVar6 = *(ushort *)(param_1 + 800);
      plVar5 = (longlong *)((ulonglong)uVar6 * 0x60 + *(longlong *)(param_1 + 0x1d8));
      lVar8 = plVar5[2];
      if (lVar8 == 0) {
        lVar8 = *plVar5;
      }
      else if (*(char *)((longlong)plVar5 + 0x49) != '\0') {
        lVar8 = *(longlong *)(lVar8 + 0x48);
      }
    }
    if (lVar9 != param_2) {
      local_50 = 0;
      local_res8[0] = 0xffff;
      FUN_142bbb100(param_1 + 0x1d8,param_1 + 0x1e8,param_2,(longlong)param_3 & 0xffff,lVar8,uVar6,
                    &local_50,local_res8);
      lVar9 = local_50;
      if (param_2 != 0) {
        lVar8 = (longlong)param_3 * 0x60;
        do {
          if (param_2 == lVar9) break;
          lVar4 = *(longlong *)(param_2 + 0x48);
          if (lVar4 == 0) {
            if (param_3 < 1) break;
            param_3 = param_3 + -1;
            lVar8 = lVar8 + -0x60;
            param_2 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x10 + lVar8);
            lVar4 = *(longlong *)(param_2 + 0x48);
          }
          uVar3 = UBTCompositeNode::GetChildIndex(lVar4,param_2);
          cVar2 = FUN_142bba8e0(lVar4,param_1,param_3,uVar3);
          if (cVar2 == '\0') {
            return;
          }
          param_2 = lVar4;
        } while (lVar4 != 0);
      }
      *(longlong *)(param_1 + 0x250) = lVar9;
      *(undefined2 *)(param_1 + 600) = local_res8[0];
    }
  }
  else {
    if ((param_5 < 0) || (*(int *)(param_2 + 0x60) <= param_5)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if ((bVar13) && (0 < *(int *)(*(longlong *)(param_2 + 0x58) + 0x28 + lVar9 * 0x30))) {
      lVar9 = UBTDecorator::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if ((bVar13) && (cVar2 = FUN_142bba8e0(param_2,param_1,param_3,param_5), cVar2 != '\0')) {
        return;
      }
    }
    *(longlong *)(param_1 + 0x250) = param_2;
    *(ushort *)(param_1 + 600) = uVar12;
  }
  lVar9 = 0;
  if ((local_48 != 0) || (param_6 != 2)) {
    uVar6 = *(ushort *)(param_1 + 0x24c);
    if (uVar6 == 0xffff) goto LAB_142bc8947;
    bVar13 = uVar6 < uVar12;
    if (uVar6 == uVar12) {
      bVar13 = *(ushort *)(param_1 + 0x24e) < uVar11;
    }
    if (!bVar13) goto LAB_142bc8947;
  }
  *(uint *)(param_1 + 0x24c) = CONCAT22(uVar11,uVar12);
LAB_142bc8947:
  *(undefined4 *)(param_1 + 0x248) = local_54;
  *(char *)(param_1 + 0x25a) = (char)param_6;
  *(byte *)(param_1 + 0x25b) = *(byte *)(param_1 + 0x25b) & 0xfe;
  *(byte *)(param_1 + 0x25b) = *(byte *)(param_1 + 0x25b) | param_6 != 2;
  lVar8 = lVar9;
  if (*(int *)(param_1 + 0x1e0) != 0) {
    lVar8 = *(longlong *)
             ((ulonglong)*(ushort *)(param_1 + 800) * 0x60 + 0x10 + *(longlong *)(param_1 + 0x1d8));
  }
  if (param_4 != lVar8) {
    lVar9 = 2;
  }
  *(byte *)(param_1 + 0x25b) = (byte)lVar9 | *(byte *)(param_1 + 0x25b) & 0xfd;
  *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) | 2;
  if ((*(uint *)(param_1 + 0x240) & 2) != 0) {
    *(uint *)(param_1 + 0x240) = *(uint *)(param_1 + 0x240) | 1;
  }
  if ((*(int *)(param_1 + 0x1e0) == 0) ||
     (*(char *)((longlong)*(int *)(param_1 + 0x1e0) * 0x60 + -0x17 + *(longlong *)(param_1 + 0x1d8))
      != '\x02')) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  bVar10 = *(byte *)(param_1 + 0x323) >> 2;
  if (((bVar10 & 1) != 0) || (bVar1 = false, bVar13)) {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_142bc9b20(param_1);
  }
  if ((~bVar10 & 1) != 0) {
    *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) | 8;
  }
  return;
}



// FUNCTION 142bc8a50 FUN_142bc8a50 body=278 status=ok
// SIG undefined FUN_142bc8a50(void)

void FUN_142bc8a50(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar11;
  ulonglong uVar10;
  
  bVar5 = *(byte *)(param_2 + 100);
  uVar11 = (uint)bVar5;
  if ((bVar5 != 0) &&
     (lVar6 = UBehaviorTreeComponent::FindTemplateNode(param_1,*(undefined8 *)(param_2 + 0x48)),
     lVar6 != 0)) {
    iVar2 = *(int *)(param_1 + 0x1e0);
    if (iVar2 != 0) {
      plVar8 = *(longlong **)(param_1 + 0x1d8);
      uVar7 = 0;
      if (plVar8[(ulonglong)*(ushort *)(param_1 + 800) * 0xc + 2] == lVar6) {
        uVar9 = (uint)*(ushort *)(param_1 + 800);
LAB_142bc8af8:
        if (uVar9 != 0xffffffff) {
          uVar1 = *(undefined1 *)(param_2 + 0x59);
          if (bVar5 == 3) {
            bVar5 = FUN_142bc1d80(param_1,param_2,uVar1);
            uVar11 = bVar5 + 1;
          }
          FUN_142bc8500(param_1,*(undefined8 *)(param_2 + 0x48),uVar9,param_2,uVar1,
                        (uVar11 != 2) + '\x01',1);
        }
      }
      else {
        lVar4 = *(longlong *)(lVar6 + 0x48);
        while (lVar3 = lVar4, lVar3 != 0) {
          lVar6 = lVar3;
          lVar4 = *(longlong *)(lVar3 + 0x48);
        }
        uVar10 = uVar7;
        if (0 < iVar2) {
          do {
            uVar9 = (uint)uVar10;
            if (*plVar8 == lVar6) goto LAB_142bc8af8;
            uVar7 = uVar7 + 1;
            plVar8 = plVar8 + 0xc;
            uVar10 = (ulonglong)(uVar9 + 1);
          } while ((longlong)uVar7 < (longlong)iVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 142bc8b70 FUN_142bc8b70 body=112 status=ok
// SIG undefined FUN_142bc8b70(void)

void FUN_142bc8b70(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (1 < param_2 - 2U) {
    if ((int)(uint)*(ushort *)(param_1 + 800) < *(int *)(param_1 + 0x1e0)) {
      plVar2 = (longlong *)
               ((ulonglong)*(ushort *)(param_1 + 800) * 0x60 + *(longlong *)(param_1 + 0x1d8));
      lVar3 = plVar2[2];
      if (lVar3 == 0) {
        lVar3 = *plVar2;
        lVar1 = lVar3;
      }
      else {
        lVar1 = lVar3;
        if (*(char *)((longlong)plVar2 + 0x49) != '\0') {
          lVar1 = *(longlong *)(lVar3 + 0x48);
        }
      }
      FUN_142bc8500(param_1,lVar1,*(int *)(param_1 + 0x1e0) + -1,lVar3,0xffffffff,param_2,0);
    }
  }
  return;
}



// FUNCTION 142bc8be0 FUN_142bc8be0 body=186 status=ok
// SIG undefined FUN_142bc8be0(void)

undefined4 *
FUN_142bc8be0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined8 local_18;
  longlong local_10;
  
  plVar7 = *(longlong **)(param_1 + 0x548);
  uVar5 = DAT_146690efc;
  if (plVar7 != (longlong *)0x0) {
    local_18 = *param_4;
    local_10 = param_4[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x548);
    }
    puVar6 = (undefined4 *)(**(code **)(*plVar7 + 0x418))(plVar7,local_res8,param_3,&local_18);
    uVar5 = *puVar6;
  }
  plVar7 = (longlong *)param_4[1];
  *param_2 = uVar5;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142bc8ca0 FUN_142bc8ca0 body=733 status=ok
// SIG undefined FUN_142bc8ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_142bc8ca0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  float *pfVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  uint local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_20;
  
  local_34 = *(undefined4 *)(param_1 + 0xac);
  local_50 = CONCAT44(DAT_146690f20._4_4_,(float)DAT_146690f20);
  uVar4 = *(uint *)(param_1 + 0xb8);
  local_48 = DAT_146690f28;
  local_40 = *(undefined8 *)(param_1 + 0xb0);
  local_58 = 0;
  local_30 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_38 = ((((uVar4 >> 1 & 1 | (uVar4 & 1) << 2 | 2) * 2 | uVar4 >> 4 & 1) * 2 | uVar4 >> 3 & 1)
              * 2 | uVar4 >> 2 & 1) << 2 | local_38 & 0xffffff40;
  if (*(longlong *)(param_1 + 0x98) == 0) {
    pfVar11 = (float *)(param_1 + 0xa0);
    if (*pfVar11 <= -(float)DAT_146690f20) {
      return 0;
    }
    if ((float)DAT_146690f20 <= *pfVar11) {
      return 0;
    }
    if (*(float *)(param_1 + 0xa4) <= -DAT_146690f20._4_4_) {
      return 0;
    }
    if (DAT_146690f20._4_4_ <= *(float *)(param_1 + 0xa4)) {
      return 0;
    }
    if (*(float *)(param_1 + 0xa8) <= -DAT_146690f28) {
      return 0;
    }
    if (DAT_146690f28 <= *(float *)(param_1 + 0xa8)) {
      return 0;
    }
    cVar6 = FUN_142c09800(param_2[0xa9],pfVar11,3,local_34);
    if (cVar6 != '\0') {
      FUN_142c0f1e0(param_2[0xa9],local_res18,0,0);
    }
    if ((local_38 & 1) == 0) {
      local_50 = *(undefined8 *)pfVar11;
      local_38 = local_38 | 1;
      local_48 = *(float *)(param_1 + 0xa8);
    }
    if (cVar6 != '\0') {
      uVar10 = 1;
      goto LAB_142bc8f2f;
    }
    puVar9 = local_88;
  }
  else {
    cVar6 = FUN_142c09900(param_2[0xa9],*(longlong *)(param_1 + 0x98),3,local_34,1);
    if (cVar6 != '\0') {
      FUN_142c0f1e0(param_2[0xa9],local_res8,0,0);
    }
    if ((*(byte *)(param_1 + 0xb8) & 0x20) == 0) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x168);
      if (lVar8 == 0) {
        local_6c = DAT_1468b5d98;
        puVar7 = &local_74;
        local_74 = _DAT_1468b5d90;
      }
      else {
        local_68 = *(undefined4 *)(lVar8 + 0x220);
        uStack_64 = *(undefined4 *)(lVar8 + 0x224);
        uStack_60 = *(undefined4 *)(lVar8 + 0x228);
        uStack_5c = *(undefined4 *)(lVar8 + 0x22c);
        puVar7 = (undefined8 *)&local_80;
        local_80 = local_68;
        local_78 = uStack_60;
        uStack_7c = uStack_64;
      }
      if ((local_38 & 1) == 0) {
        local_50 = *puVar7;
        local_38 = local_38 | 1;
        local_48 = *(float *)(puVar7 + 1);
      }
    }
    else if ((local_38 & 1) == 0) {
      local_58 = *(undefined8 *)(param_1 + 0x98);
      local_38 = local_38 | 3;
    }
    if (cVar6 != '\0') {
      uVar10 = 1;
      goto LAB_142bc8f2f;
    }
    puVar9 = local_res20;
  }
  lVar8 = (**(code **)(*param_2 + 0x850))(param_2,puVar9,&local_58,0);
  uVar10 = *(undefined1 *)(lVar8 + 4);
LAB_142bc8f2f:
  plVar5 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar10;
}



// FUNCTION 142bc8f80 FUN_142bc8f80 body=207 status=ok
// SIG undefined FUN_142bc8f80(void)

undefined4 *
FUN_142bc8f80(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined1 local_res8 [8];
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  *param_2 = DAT_146690efc;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x860))(param_1,param_3,param_4,&local_28);
  if (local_28 != 0) {
    local_18 = local_28;
    plStack_10 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x858))(param_1,local_res8,param_3,&local_18);
    *param_2 = *puVar6;
  }
  plVar5 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142bc9050 FUN_142bc9050 body=232 status=ok
// SIG undefined FUN_142bc9050(void)

void FUN_142bc9050(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x38);
      do {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar2 + 3);
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        if (plVar2[-2] != 0) {
          FMemory::Free();
        }
        if (plVar2[-4] != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x38);
      do {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar2 + 3);
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        if (plVar2[-2] != 0) {
          FMemory::Free();
        }
        if (plVar2[-4] != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 142bc9140 Reset body=182 status=ok
// SIG undefined Reset(void)

void TArray<FBehaviorTreeInstanceId,FDefaultAllocator>::Reset(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x10);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 7;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x10);
      do {
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 7;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 142bc9200 FUN_142bc9200 body=62 status=ok
// SIG undefined FUN_142bc9200(void)

void FUN_142bc9200(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1423de3a0();
  plVar1 = *(longlong **)(param_1 + 0x548);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x428))(plVar1,param_1,0x110,DAT_146b2c570,0);
  }
  return;
}



// FUNCTION 142bc9240 FUN_142bc9240 body=279 status=ok
// SIG undefined FUN_142bc9240(void)

void FUN_142bc9240(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong local_28 [2];
  
  bVar6 = false;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x58);
  do {
    if ((plVar1 == (longlong *)0x0) || (plVar1[4] == param_2)) {
      return;
    }
    lVar4 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      bVar6 = true;
      uVar5 = (**(code **)(*plVar1 + 0x298))(plVar1,local_28,0,0);
      iVar3 = FUN_141592950(uVar5,L"FBlackboardKeySelector",1,0,0xffffffff);
      if (iVar3 == -1) goto LAB_142bc9302;
      bVar2 = true;
    }
    else {
LAB_142bc9302:
      bVar2 = false;
    }
    if ((bVar6) && (bVar6 = false, local_28[0] != 0)) {
      FMemory::Free();
    }
    if (bVar2) {
      FUN_142bc9360(*(int *)((longlong)plVar1 + 0x44) + param_1,param_3);
    }
    plVar1 = (longlong *)plVar1[10];
  } while( true );
}



// FUNCTION 142bc9360 FUN_142bc9360 body=455 status=ok
// SIG undefined FUN_142bc9360(void)

void FUN_142bc9360(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  if ((int)param_1[2] == 0) {
    if ((*(int *)((longlong)param_1 + 0x14) == 0) &&
       ((*(byte *)((longlong)param_1 + 0x24) & 1) != 0)) {
      return;
    }
    if ((*(int *)((longlong)param_1 + 0x14) == 0) &&
       (lVar5 = param_2, (*(byte *)((longlong)param_1 + 0x24) & 1) == 0)) {
      for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        uVar6 = uVar11;
        uVar10 = uVar11;
        if (0 < *(int *)(lVar5 + 0x40)) {
          do {
            plVar1 = (longlong *)(uVar10 + *(longlong *)(lVar5 + 0x38));
            if (*(longlong *)(uVar10 + 8 + *(longlong *)(lVar5 + 0x38)) != 0) {
              if ((int)param_1[1] == 0) {
LAB_142bc94b5:
                param_1[2] = *plVar1;
                break;
              }
              uVar8 = uVar11;
              uVar9 = uVar11;
              if (0 < (int)param_1[1]) {
                do {
                  plVar2 = (longlong *)plVar1[1];
                  cVar3 = (**(code **)(*plVar2 + 0x280))(plVar2,*(undefined8 *)(uVar9 + *param_1));
                  if (cVar3 != '\0') goto LAB_142bc94b5;
                  uVar7 = (int)uVar8 + 1;
                  uVar8 = (ulonglong)uVar7;
                  uVar9 = uVar9 + 8;
                } while ((int)uVar7 < (int)param_1[1]);
              }
            }
            uVar7 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar7;
            uVar10 = uVar10 + 0x18;
          } while ((int)uVar7 < *(int *)(lVar5 + 0x40));
        }
      }
    }
  }
  if (0 < *(int *)(param_2 + 0x40)) {
    uVar6 = uVar11;
    do {
      if (*(longlong *)(*(longlong *)(param_2 + 0x38) + (longlong)(int)uVar6 * 0x18) == param_1[2])
      {
        bVar4 = *(char *)(param_2 + 0x4c) + (char)uVar6;
        goto LAB_142bc94cc;
      }
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_2 + 0x40));
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
    bVar4 = 0xff;
  }
  else {
    bVar4 = UBlackboardData::InternalGetKeyID(*(longlong *)(param_2 + 0x30),param_1 + 2,0);
  }
LAB_142bc94cc:
  *(byte *)(param_1 + 4) = bVar4;
  uVar6 = uVar11;
  if (bVar4 != 0xff) {
    if (bVar4 < *(byte *)(param_2 + 0x4c)) {
      uVar6 = 0;
      if (*(longlong *)(param_2 + 0x30) == 0) goto LAB_142bc951a;
      lVar5 = UBlackboardData::GetKey(*(longlong *)(param_2 + 0x30),bVar4);
    }
    else {
      lVar5 = *(longlong *)(param_2 + 0x38) +
              ((ulonglong)bVar4 - (ulonglong)*(byte *)(param_2 + 0x4c)) * 0x18;
    }
    uVar6 = uVar11;
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 8) != 0)) {
      uVar6 = *(ulonglong *)(*(longlong *)(lVar5 + 8) + 0x10);
    }
  }
LAB_142bc951a:
  param_1[3] = uVar6;
  return;
}



// FUNCTION 142bc9540 FUN_142bc9540 body=113 status=ok
// SIG undefined FUN_142bc9540(void)

void FUN_142bc9540(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x323) & 0x20) == 0) {
    if (*(longlong *)(param_1 + 0x270) != 0) {
      *(byte *)(param_1 + 0x27c) = *(byte *)(param_1 + 0x27c) | 1;
      FUN_142bc6820();
      return;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x323) & 0x10) != 0) {
      *(byte *)(param_1 + 0x27c) = *(byte *)(param_1 + 0x27c) | 1;
      return;
    }
    if (*(int *)(param_1 + 0x1e0) != 0) {
      FUN_142bc8500(param_1,**(undefined8 **)(param_1 + 0x1d8),0,**(undefined8 **)(param_1 + 0x1d8),
                    0xffffffff,2,1);
    }
  }
  return;
}



// FUNCTION 142bc95c0 FUN_142bc95c0 body=80 status=ok
// SIG undefined FUN_142bc95c0(void)

uint FUN_142bc95c0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if ((uVar1 & 1) == 0) {
    return uVar1 & 0xffffff00;
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))();
    return CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0x90) >> 8),
                    ~(byte)*(undefined4 *)(param_1 + 0x90)) & 0xffffff01;
  }
  *(uint *)(param_1 + 0x90) = uVar1 & 0xfffffffe;
  return CONCAT31((int3)((uVar1 & 0xfffffffe) >> 8),0xff) & 0xffffff01;
}



// FUNCTION 142bc9610 FUN_142bc9610 body=122 status=ok
// SIG undefined FUN_142bc9610(void)

ulonglong FUN_142bc9610(longlong param_1)

{
  ulonglong in_RAX;
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  
  if ((*(uint *)(param_1 + 0x90) & 1) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
    uVar3 = *(uint *)(param_1 + 0x90) & 0xfffffffe;
    *(uint *)(param_1 + 0x90) = uVar3;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))();
    uVar3 = (uint)*(byte *)(param_1 + 0x90);
  }
  bVar2 = ~(byte)uVar3 & 1;
  if (bVar2 != 0) {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x178);
    }
    FUN_142c46c20(param_1,uVar1);
  }
  return (ulonglong)bVar2;
}



// FUNCTION 142bc9690 FUN_142bc9690 body=419 status=ok
// SIG undefined FUN_142bc9690(void)

ulonglong FUN_142bc9690(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  byte bVar10;
  
  lVar7 = *(longlong *)(param_1 + 0x98);
  if (lVar7 == 0) goto LAB_142bc9701;
  if ((*(byte *)(lVar7 + 0x94) & 2) == 0) {
    iVar1 = *(int *)(lVar7 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar9;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar8 = 0;
    }
    lVar7 = 0;
    if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) != 0) goto LAB_142bc96f3;
    uVar6 = 0;
    bVar4 = false;
  }
  else {
LAB_142bc96f3:
    uVar6 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
    bVar4 = true;
  }
  if (bVar4) {
    return uVar6 & 0xffffffffffffff00;
  }
LAB_142bc9701:
  if ((*(uint *)(param_1 + 0x90) & 1) == 0) {
    return 0;
  }
  if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
    uVar5 = *(uint *)(param_1 + 0x90) & 0xfffffffe;
    *(uint *)(param_1 + 0x90) = uVar5;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))();
    uVar5 = (uint)*(byte *)(param_1 + 0x90);
  }
  bVar10 = 0;
  if ((~(byte)uVar5 & 1) != 0) {
    bVar10 = 0;
    if (((*(longlong *)(param_1 + 0x38) != 0) &&
        (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x178), lVar7 != 0)) &&
       (lVar7 = *(longlong *)(lVar7 + 0x490), lVar7 != 0)) {
      lVar8 = FUN_142c2de20();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      bVar10 = 0;
      if (bVar4) {
        plVar3 = *(longlong **)(lVar7 + 0x548);
        iVar1 = *(int *)(param_1 + 0x78);
        if (plVar3 != (longlong *)0x0) {
          iVar2 = (int)plVar3[0x65];
          if (((iVar2 == -1) || (iVar1 == -1)) ||
             ((iVar1 != iVar2 && ((iVar1 != 0 && (iVar2 != 0)))))) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            (**(code **)(*plVar3 + 0x440))();
            return 1;
          }
        }
        UPawnAction::StopWaitingForMessages(param_1);
        bVar10 = FUN_142bc4e20(param_1);
      }
    }
  }
  return (ulonglong)bVar10;
}



// FUNCTION 142bc9840 FUN_142bc9840 body=88 status=ok
// SIG undefined FUN_142bc9840(void)

ulonglong FUN_142bc9840(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if ((uVar1 & 1) == 0) {
    return (ulonglong)(uVar1 & 0xffffff00);
  }
  if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
    uVar2 = (ulonglong)(uVar1 & 0xfffffffe);
    *(uint *)(param_1 + 0x90) = uVar1 & 0xfffffffe;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))();
    uVar2 = (ulonglong)*(byte *)(param_1 + 0x90);
  }
  if ((~(byte)uVar2 & 1) != 0) {
    uVar2 = FUN_142bc71c0(param_1);
    return uVar2;
  }
  return CONCAT71((int7)(uVar2 >> 8),~(byte)uVar2) & 0xffffffffffffff01;
}



// FUNCTION 142bc98a0 FUN_142bc98a0 body=88 status=ok
// SIG undefined FUN_142bc98a0(void)

ulonglong FUN_142bc98a0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if ((uVar1 & 1) == 0) {
    return (ulonglong)(uVar1 & 0xffffff00);
  }
  if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
    uVar2 = (ulonglong)(uVar1 & 0xfffffffe);
    *(uint *)(param_1 + 0x90) = uVar1 & 0xfffffffe;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))();
    uVar2 = (ulonglong)*(byte *)(param_1 + 0x90);
  }
  if ((~(byte)uVar2 & 1) != 0) {
    uVar2 = FUN_142bc70b0(param_1);
    return uVar2;
  }
  return CONCAT71((int7)(uVar2 >> 8),~(byte)uVar2) & 0xffffffffffffff01;
}



// FUNCTION 142bc9900 Resume body=102 status=ok
// SIG undefined Resume(void)

undefined8 UPawnAction_Wait::Resume(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_res8;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(lVar2 + 400) == 0) {
    lVar2 = *(longlong *)(lVar2 + 0x3f8);
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  local_res8 = param_1[0x14];
  uVar1 = FTimerManager::FindTimerInList(lVar2,lVar2 + 0x20,&local_res8);
  FUN_142880ca0(lVar2,uVar1);
  return 1;
}



// FUNCTION 142bc9970 FUN_142bc9970 body=207 status=ok
// SIG undefined FUN_142bc9970(void)

int FUN_142bc9970(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FUN_142bef410();
  if ((*(byte *)(param_1 + 0x323) & 0x40) != 0) {
    *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) & 0xbf;
    if (iVar3 == 0) {
      if (*(longlong *)(param_1 + 0x180) != 0) {
        FUN_142bc9a90(*(longlong *)(param_1 + 0x180),1);
      }
      if ((((*(longlong *)(param_1 + 0x260) == 0) && ((*(byte *)(param_1 + 0x268) & 1) == 0)) ||
          ((*(byte *)(param_1 + 0x268) & 2) != 0)) || ((*(byte *)(param_1 + 0x268) & 1) == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((*(longlong *)(param_1 + 0x250) != 0) || (bVar2)) {
        *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) | 8;
      }
      return 0;
    }
    if ((iVar3 == 1) && (lVar1 = *(longlong *)(param_1 + 0x180), lVar1 != 0)) {
      *(uint *)(lVar1 + 0x268) = *(uint *)(lVar1 + 0x268) & 0xfffffffe;
      *(undefined4 *)(lVar1 + 0x260) = 0;
      if (*(int *)(lVar1 + 0x264) != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(lVar1 + 600,0);
      }
    }
  }
  return iVar3;
}



// FUNCTION 142bc9a40 FUN_142bc9a40 body=67 status=ok
// SIG undefined FUN_142bc9a40(void)

undefined8 FUN_142bc9a40(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x548);
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (int)plVar2[0x65];
    if (((iVar1 != -1) && (param_2 != -1)) &&
       ((param_2 == iVar1 || ((param_2 == 0 || (iVar1 == 0)))))) {
      (**(code **)(*plVar2 + 0x440))();
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142bc9a90 FUN_142bc9a90 body=132 status=ok
// SIG undefined FUN_142bc9a90(void)

void FUN_142bc9a90(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) & 0xfffffffe;
  if ((param_2 != '\0') && (iVar2 = 0, 0 < *(int *)(param_1 + 0x260))) {
    lVar1 = 0;
    do {
      FUN_142bc3660(param_1,*(undefined1 *)(*(longlong *)(param_1 + 600) + lVar1));
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x260));
  }
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (*(int *)(param_1 + 0x264) == 0) {
    return;
  }
  TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 600,0);
  return;
}



// FUNCTION 142bc9b20 FUN_142bc9b20 body=442 status=ok
// SIG undefined FUN_142bc9b20(void)

void FUN_142bc9b20(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar5;
  
  if (-1 < *(int *)(param_1 + 0x23c)) {
    uVar5 = 0;
    *(short *)(param_1 + 800) = (short)*(int *)(param_1 + 0x23c);
    *(undefined4 *)(param_1 + 0x23c) = 0xffffffff;
    if ((*(byte *)(param_1 + 0x240) & 4) == 0) {
      uVar11 = uVar5;
      if (0 < *(int *)(param_1 + 0x1e0)) {
        do {
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x38 + uVar11);
          puVar9 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x1e8) + 0x20 +
                   (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x1d8) + 0x48 + uVar11) * 0x38);
          if (puVar8 != puVar9) {
            iVar1 = *(int *)(puVar9 + 1);
            pvVar2 = (void *)*puVar9;
            *(int *)(puVar8 + 1) = iVar1;
            if ((iVar1 == 0) && (*(int *)((longlong)puVar8 + 0xc) == 0)) {
              *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            }
            else {
              TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar8,iVar1);
              _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar2,(longlong)iVar1);
            }
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          uVar11 = uVar11 + 0x60;
        } while ((int)uVar4 < *(int *)(param_1 + 0x1e0));
      }
    }
    else {
      uVar11 = uVar5;
      if (0 < *(int *)(param_1 + 0x1e0)) {
        do {
          lVar7 = *(longlong *)(param_1 + 0x1d8) + uVar11;
          lVar6 = (ulonglong)*(byte *)(lVar7 + 0x48) * 0x38 + *(longlong *)(param_1 + 0x1e8);
          if ((*(longlong **)(lVar7 + 0x10) != (longlong *)0x0) &&
             (uVar3 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x298))(), uVar3 != 0)) {
            uVar10 = (ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x10) + 0x52);
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar6 + 0x20) + uVar10),
                       (void *)(*(longlong *)(lVar7 + 0x38) + uVar10),(ulonglong)uVar3);
          }
          puVar8 = (undefined8 *)(lVar7 + 0x38);
          if (puVar8 != (undefined8 *)(lVar6 + 0x20)) {
            iVar1 = *(int *)(lVar6 + 0x28);
            pvVar2 = *(void **)(lVar6 + 0x20);
            *(int *)(lVar7 + 0x40) = iVar1;
            if ((iVar1 == 0) && (*(int *)(lVar7 + 0x44) == 0)) {
              *(undefined4 *)(lVar7 + 0x44) = 0;
            }
            else {
              TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar8,iVar1);
              _guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar2,(longlong)iVar1);
            }
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          uVar11 = uVar11 + 0x60;
        } while ((int)uVar4 < *(int *)(param_1 + 0x1e0));
      }
    }
    FUN_142bb4230(param_1);
  }
  return;
}



// FUNCTION 142bc9ce0 FUN_142bc9ce0 body=623 status=ok
// SIG undefined FUN_142bc9ce0(void)

undefined8 FUN_142bc9ce0(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res18 [8];
  
  if (param_2 == 0) {
    return 0;
  }
  lVar6 = *(longlong *)(param_2 + 0x30);
  lVar7 = 0;
  if ((lVar6 != 0) &&
     ((param_1[0xad] == 0 || (cVar1 = FUN_142bc1bf0(param_1[0xad],lVar6), cVar1 == '\0')))) {
    uVar3 = FUN_142c36280();
    lVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar3);
    param_1[0xad] = lVar4;
    if (lVar4 == 0) {
      plVar5 = (longlong *)FName::FName(local_res18,L"BlackboardComponent",1);
      lVar4 = *plVar5;
      if (lVar4 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar3 = FUN_142c36280();
      lVar4 = FUN_1417985e0(uVar3,param_1,lVar4,0,0,0,0,0,0);
      param_1[0xad] = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*param_1 + 0x898))(param_1,lVar4,lVar6);
        FUN_14234b150(param_1[0xad]);
      }
    }
    else if ((*(longlong *)(lVar4 + 0x180) == 0) || (*(longlong *)(lVar4 + 0x180) != lVar6)) {
      (**(code **)(*param_1 + 0x898))(param_1,lVar4,lVar6);
    }
  }
  lVar6 = param_1[0xaa];
  if (lVar6 != 0) {
    lVar4 = UProgressBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142bc9eca;
  }
  plVar5 = (longlong *)FName::FName(local_res18,L"BTComponent",1);
  lVar6 = *plVar5;
  if (lVar6 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar3 = UProgressBar::GetPrivateStaticClass();
  lVar6 = FUN_1417985e0(uVar3,param_1,lVar6,0,0,0,0,0,0);
  FUN_14234b150(lVar6);
LAB_142bc9eca:
  param_1[0xaa] = lVar6;
  if (*(int *)(lVar6 + 0x1e0) != 0) {
    lVar7 = *(longlong *)
             ((ulonglong)*(byte *)(*(longlong *)(lVar6 + 0x1d8) + 0x48) * 0x38 +
             *(longlong *)(lVar6 + 0x1e8));
  }
  if (lVar7 == param_2) {
    if (((*(byte *)(lVar6 + 0x323) & 0x20) == 0) || (*(int *)(lVar6 + 0x1e0) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return 1;
    }
  }
  FUN_142bcb3d0(lVar6,0);
  *(byte *)(lVar6 + 0x27c) = *(byte *)(lVar6 + 0x27c) | 1;
  *(longlong *)(lVar6 + 0x270) = param_2;
  *(undefined4 *)(lVar6 + 0x278) = 1;
  FUN_142bc6820(lVar6);
  return 1;
}



// FUNCTION 142bc9f50 FUN_142bc9f50 body=186 status=ok
// SIG undefined FUN_142bc9f50(void)

void FUN_142bc9f50(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0xc);
  fVar2 = *(float *)((longlong)param_1 + 100);
  fVar5 = fVar1 - fVar2;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  iVar4 = rand();
  if ((*(byte *)(param_1 + 0xb) & 8) != 0) {
    uVar3 = (**(code **)(*param_1 + 0x2b0))(param_1);
    if (uVar3 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = param_2 - ((ulonglong)(uVar3 + 3) & 0xfffffffffffffffc);
    }
    *(float *)(param_2 + 4) = (float)iVar4 * 3.051851e-05 * ((fVar2 + fVar1) - fVar5) + fVar5;
  }
  return;
}



// FUNCTION 142bca010 FUN_142bca010 body=176 status=ok
// SIG undefined FUN_142bca010(void)

void FUN_142bca010(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  plVar7 = (longlong *)0x0;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0xc);
    plVar5 = plVar7;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      plVar5 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18);
    }
    if ((*(uint *)(plVar5 + 1) >> 0x1d & 1) == 0) {
      FUN_142bc3e30(lVar2,param_1,param_2);
    }
  }
  if (((*(int *)(param_1 + 0x70) != 0) && (*(longlong **)(param_1 + 0x68) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0x70) != 0) {
      plVar7 = *(longlong **)(param_1 + 0x68);
    }
    (**(code **)(*plVar7 + 0x40))(plVar7,param_1,param_2);
  }
  return;
}



// FUNCTION 142bca0c0 SetBlackboardValueAsBool body=78 status=ok
// SIG undefined SetBlackboardValueAsBool(void)

void UBTFunctionLibrary::SetBlackboardValueAsBool
               (undefined8 param_1,longlong param_2,undefined1 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142bbe2b0();
  if (lVar2 != 0) {
    uVar1 = FUN_142bbd6b0(lVar2,param_2 + 0x10);
    FUN_1409f2510(lVar2,uVar1,param_3);
  }
  return;
}



// FUNCTION 142bca110 FUN_142bca110 body=76 status=ok
// SIG undefined FUN_142bca110(void)

void FUN_142bca110(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142bbe2b0();
  if (lVar2 != 0) {
    uVar1 = FUN_142bbd6b0(lVar2,param_2 + 0x10);
    FUN_142baf4d0(lVar2,uVar1,param_3);
  }
  return;
}



// FUNCTION 142bca160 SetBlackboardValueAsEnum body=78 status=ok
// SIG undefined SetBlackboardValueAsEnum(void)

void UBTFunctionLibrary::SetBlackboardValueAsEnum
               (undefined8 param_1,longlong param_2,undefined1 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142bbe2b0();
  if (lVar2 != 0) {
    uVar1 = FUN_142bbd6b0(lVar2,param_2 + 0x10);
    FUN_142baf8a0(lVar2,uVar1,param_3);
  }
  return;
}



// FUNCTION 142bca1b0 SetBlackboardValueAsFloat body=76 status=ok
// SIG undefined SetBlackboardValueAsFloat(void)

void UBTFunctionLibrary::SetBlackboardValueAsFloat
               (undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142bbe2b0();
  if (lVar2 != 0) {
    uVar1 = FUN_142bbd6b0(lVar2,param_2 + 0x10);
    FUN_142bafc40(lVar2,uVar1,param_3);
  }
  return;
}



// FUNCTION 142bca200 SetBlackboardValueAsInt body=76 status=ok
// SIG undefined SetBlackboardValueAsInt(void)

void UBTFunctionLibrary::SetBlackboardValueAsInt
               (undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142bbe2b0();
  if (lVar2 != 0) {
    uVar1 = FUN_142bbd6b0(lVar2,param_2 + 0x10);
    FUN_142baffe0(lVar2,uVar1,param_3);
  }
  return;
}



// FUNCTION 142bca250 SetBlackboardValueAsName body=76 status=ok
// SIG undefined SetBlackboardValueAsName(void)

void UBTFunctionLibrary::SetBlackboardValueAsName
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142bbe2b0();
  if (lVar2 != 0) {
    uVar1 = FUN_142bbd6b0(lVar2,param_2 + 0x10);
    FUN_142bb0380(lVar2,uVar1,param_3);
  }
  return;
}



// FUNCTION 142bca2a0 FUN_142bca2a0 body=76 status=ok
// SIG undefined FUN_142bca2a0(void)

void FUN_142bca2a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142bbe2b0();
  if (lVar2 != 0) {
    uVar1 = FUN_142bbd6b0(lVar2,param_2 + 0x10);
    FUN_140725870(lVar2,uVar1,param_3);
  }
  return;
}



// FUNCTION 142bca2f0 FUN_142bca2f0 body=95 status=ok
// SIG undefined FUN_142bca2f0(void)

void FUN_142bca2f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar2 = FUN_142bbe2b0();
  if (lVar2 != 0) {
    uVar1 = FUN_142bbd6b0(lVar2,param_2 + 0x10);
    local_10 = *(undefined4 *)(param_3 + 1);
    local_18 = *param_3;
    FUN_14074ace0(lVar2,uVar1,&local_18);
  }
  return;
}



// FUNCTION 142bca350 SetBlackboardValueAsString body=156 status=ok
// SIG undefined SetBlackboardValueAsString(void)

void UBTFunctionLibrary::SetBlackboardValueAsString
               (undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  lVar4 = FUN_142bbe2b0();
  if (lVar4 != 0) {
    plVar1 = (longlong *)FString::FString(local_28,param_3);
    uVar3 = FUN_142bbd6b0(lVar4,param_2 + 0x10);
    uVar2 = FString::FString(local_18,plVar1);
    FUN_142bb0720(lVar4,uVar3,uVar2);
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142bca3f0 FUN_142bca3f0 body=95 status=ok
// SIG undefined FUN_142bca3f0(void)

void FUN_142bca3f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar2 = FUN_142bbe2b0();
  if (lVar2 != 0) {
    uVar1 = FUN_142bbd6b0(lVar2,param_2 + 0x10);
    local_10 = *(undefined4 *)(param_3 + 1);
    local_18 = *param_3;
    FUN_14074b0b0(lVar2,uVar1,&local_18);
  }
  return;
}



// FUNCTION 142bca490 FUN_142bca490 body=364 status=ok
// SIG undefined FUN_142bca490(void)

void FUN_142bca490(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong local_res10;
  
  uVar7 = 0;
  bVar2 = false;
  uVar8 = uVar7;
  uVar10 = uVar7;
  local_res10 = param_2;
  if (*(int *)(param_1 + 0x1e0) < 1) {
    return;
  }
  do {
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x1d8) + uVar8);
    cVar3 = FUN_142bca600(*puVar6,puVar6,param_1,&local_res10,param_3);
    if ((cVar3 != '\0') || (bVar2)) {
      bVar2 = true;
    }
    uVar9 = (int)uVar10 + 1;
    uVar8 = uVar8 + 0x60;
    uVar10 = (ulonglong)uVar9;
  } while ((int)uVar9 < *(int *)(param_1 + 0x1e0));
  if (!bVar2) {
    return;
  }
  uVar8 = uVar7;
  uVar10 = uVar7;
  if (*(int *)(param_1 + 0x1e0) < 1) {
    return;
  }
  do {
    if ((*(char *)(uVar10 + 0x49 + *(longlong *)(param_1 + 0x1d8)) == '\x01') &&
       (lVar1 = *(longlong *)(uVar10 + 0x10 + *(longlong *)(param_1 + 0x1d8)), lVar1 != 0)) {
      lVar4 = UBTTask_RunBehaviorDynamic::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(longlong *)(lVar1 + 0x70) == local_res10)) {
        lVar4 = *(longlong *)(lVar1 + 0x48);
        if (*(int *)(lVar4 + 0x60) < 1) goto LAB_142bca5ba;
        plVar5 = *(longlong **)(lVar4 + 0x58);
        uVar10 = uVar7;
        break;
      }
    }
    uVar9 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar9;
    uVar10 = uVar10 + 0x60;
    if (*(int *)(param_1 + 0x1e0) <= (int)uVar9) {
      return;
    }
  } while( true );
  while( true ) {
    uVar10 = (ulonglong)(iVar11 + 1);
    uVar7 = uVar7 + 1;
    plVar5 = plVar5 + 6;
    if ((longlong)*(int *)(lVar4 + 0x60) <= (longlong)uVar7) break;
    iVar11 = (int)uVar10;
    if ((*plVar5 == lVar1) || (plVar5[1] == lVar1)) goto LAB_142bca5c0;
  }
LAB_142bca5ba:
  iVar11 = -2;
LAB_142bca5c0:
  FUN_142bc8500(param_1,lVar4,uVar8,lVar1,iVar11,2,1);
  return;
}



// FUNCTION 142bca600 FUN_142bca600 body=439 status=ok
// SIG undefined FUN_142bca600(void)

char FUN_142bca600(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  char cVar10;
  int *piVar11;
  longlong lVar12;
  
  cVar10 = '\0';
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar12 = 0;
    do {
      lVar7 = *(longlong *)(lVar12 + *(longlong *)(param_1 + 0x58));
      if (lVar7 == 0) {
        plVar3 = *(longlong **)(lVar12 + *(longlong *)(param_1 + 0x58) + 8);
        if (plVar3 != (longlong *)0x0) {
          lVar7 = UBTTask_RunBehaviorDynamic::GetPrivateStaticClass(0,param_2);
          if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (plVar3[0xe] == *param_4)) {
            uVar1 = *(ushort *)((longlong)plVar3 + 0x52);
            lVar7 = *(longlong *)(param_2 + 0x38);
            uVar6 = (**(code **)(*plVar3 + 0x2b0))();
            if ((uVar6 != 0) &&
               (piVar11 = (int *)(((ulonglong)uVar1 + lVar7) -
                                 ((ulonglong)uVar6 + 3 & 0xfffffffffffffffc)), piVar11 != (int *)0x0
               )) {
              iVar2 = *piVar11;
              if ((iVar2 < 0) || (*(int *)(param_3 + 0x200) <= iVar2)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if ((bVar4) &&
                 (lVar7 = *(longlong *)(*(longlong *)(param_3 + 0x1f8) + (longlong)iVar2 * 8),
                 lVar7 != 0)) {
                lVar8 = UBTTask_RunBehaviorDynamic::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if ((bVar4) &&
                   (cVar5 = UBTTask_RunBehaviorDynamic::SetBehaviorAsset(lVar7,param_5),
                   cVar5 != '\0')) {
                  cVar10 = '\x01';
                }
              }
            }
          }
        }
      }
      else {
        cVar5 = FUN_142bca600(lVar7,param_2,param_3,param_4,param_5);
        if ((cVar5 != '\0') || (cVar10 != '\0')) {
          cVar10 = '\x01';
        }
      }
      iVar9 = iVar9 + 1;
      lVar12 = lVar12 + 0x30;
    } while (iVar9 < *(int *)(param_1 + 0x60));
  }
  return cVar10;
}



// FUNCTION 142bca7c0 FUN_142bca7c0 body=116 status=ok
// SIG undefined FUN_142bca7c0(void)

void FUN_142bca7c0(longlong *param_1,undefined8 *param_2,byte param_3)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x8c8))(param_1,param_3);
  if ((int)param_1[0xa7] <= (int)(uint)param_3) {
    TArray<FFocusKnowledge::FFocusItem,FDefaultAllocator>::SetNum(param_1 + 0xa6,param_3 + 1,1);
  }
  lVar1 = param_1[0xa6];
  *(undefined8 *)(lVar1 + 8 + (ulonglong)param_3 * 0x14) = *param_2;
  *(undefined4 *)(lVar1 + (ulonglong)param_3 * 0x14 + 0x10) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 142bca840 FUN_142bca840 body=115 status=ok
// SIG undefined FUN_142bca840(void)

void FUN_142bca840(longlong *param_1,longlong param_2,byte param_3)

{
  (**(code **)(*param_1 + 0x8c8))(param_1,param_3);
  if (param_2 != 0) {
    if ((int)param_1[0xa7] <= (int)(uint)param_3) {
      TArray<FFocusKnowledge::FFocusItem,FDefaultAllocator>::SetNum(param_1 + 0xa6,param_3 + 1,1);
    }
    FWeakObjectPtr::operator=(param_1[0xa6] + (ulonglong)param_3 * 0x14,param_2);
  }
  return;
}



// FUNCTION 142bca8d0 SetGoalActor body=17 status=ok
// SIG undefined SetGoalActor(void)

void FAIMoveRequest::SetGoalActor(undefined8 *param_1,undefined8 param_2)

{
  if ((*(uint *)(param_1 + 4) & 1) == 0) {
    *param_1 = param_2;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 3;
  }
  return;
}



// FUNCTION 142bca8f0 SetGoalLocation body=34 status=ok
// SIG undefined SetGoalLocation(void)

void FAIMoveRequest::SetGoalLocation(longlong param_1,undefined8 *param_2)

{
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    *(undefined8 *)(param_1 + 8) = *param_2;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 1);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  }
  return;
}



// FUNCTION 142bca920 SetIsInversed body=17 status=ok
// SIG undefined SetIsInversed(void)

void UBTDecorator::SetIsInversed(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffff7f;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | (uint)param_2 << 7;
  return;
}



// FUNCTION 142bca940 SetLock body=28 status=ok
// SIG undefined SetLock(void)

void FAIResourceLock::SetLock(ushort *param_1,uint param_2)

{
  char *pcVar1;
  
  if ((char)param_1[0xc] != '\0') {
    pcVar1 = (char *)(*(longlong *)(param_1 + 4) + (ulonglong)(param_2 & 0xff));
    *pcVar1 = *pcVar1 + '\x01';
  }
  *param_1 = *param_1 | (ushort)(1 << (param_2 & 0x1f));
  return;
}



// FUNCTION 142bca960 FUN_142bca960 body=66 status=ok
// SIG undefined FUN_142bca960(void)

/* WARNING: Removing unreachable block (ram,0x000140485b24) */
/* WARNING: Removing unreachable block (ram,0x000140485b54) */
/* WARNING: Removing unreachable block (ram,0x000140485b58) */

void FUN_142bca960(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x548);
  if (lVar1 == 0) {
    return;
  }
  *(uint *)(lVar1 + 0x2a0) = *(uint *)(lVar1 + 0x2a0) & 0xfffffff7;
  *(undefined8 *)(lVar1 + 0x2b4) = 0;
  *(uint *)(lVar1 + 0x2a0) = *(uint *)(lVar1 + 0x2a0) | (param_2 & 0xff) << 3;
  *(undefined4 *)(lVar1 + 0x2c8) = 0;
  if (*(int *)(lVar1 + 0x2cc) < 0) {
    if (*(int *)(lVar1 + 0x2cc) != 0) {
      *(undefined4 *)(lVar1 + 0x2cc) = 0;
      lVar2 = *(longlong *)(lVar1 + 0x2c0);
      if (lVar2 != 0) {
        lVar2 = FMemory::Realloc(lVar2,0,0);
        *(longlong *)(lVar1 + 0x2c0) = lVar2;
      }
    }
    return;
  }
  return;
}



// FUNCTION 142bca980 SetNum body=171 status=ok
// SIG undefined SetNum(void)

void TArray<FFocusKnowledge::FFocusItem,FDefaultAllocator>::SetNum
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  iVar1 = (int)param_1[1];
  iVar3 = (int)param_2;
  if (iVar1 < iVar3) {
    iVar4 = iVar3 - iVar1;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar1);
    }
    puVar2 = (undefined4 *)(*param_1 + (longlong)iVar1 * 0x14);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar2 = 0xffffffff;
      puVar2[1] = 0;
      FWeakObjectPtr::operator=(&local_res8,0);
      *puVar2 = local_res8;
      puVar2[1] = local_resc;
      *(undefined8 *)(puVar2 + 2) = DAT_146690f20;
      puVar2[4] = DAT_146690f28;
      puVar2 = puVar2 + 5;
    }
  }
  else if (iVar3 < iVar1) {
    RemoveAtImpl(param_1,param_2,iVar1 - iVar3,param_3);
    return;
  }
  return;
}



// FUNCTION 142bcaa30 FUN_142bcaa30 body=153 status=ok
// SIG undefined FUN_142bcaa30(void)

void FUN_142bcaa30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  
  FUN_1423e03b0();
  lVar1 = *(longlong *)(param_1 + 0x568);
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x180), lVar2 != 0)) {
    iVar4 = 0;
    if (0 < *(int *)(lVar2 + 0x40)) {
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x38) + (longlong)iVar4 * 0x18) == DAT_146b2c4f0) {
          cVar3 = *(char *)(lVar2 + 0x4c) + (char)iVar4;
          goto LAB_142bcaa9e;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar2 + 0x40));
    }
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      cVar3 = UBlackboardData::InternalGetKeyID(*(longlong *)(lVar2 + 0x30),&DAT_146b2c4f0,0);
LAB_142bcaa9e:
      if (cVar3 != -1) {
        FUN_140725870(lVar1,cVar3,*(undefined8 *)(param_1 + 0x488));
      }
    }
  }
  return;
}



// FUNCTION 142bcaad0 FUN_142bcaad0 body=8 status=ok
// SIG undefined FUN_142bcaad0(void)

void FUN_142bcaad0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x558) = param_2;
  return;
}



// FUNCTION 142bcaae0 FUN_142bcaae0 body=10 status=ok
// SIG undefined FUN_142bcaae0(void)

bool FUN_142bcaae0(undefined8 param_1,char *param_2,char param_3)

{
  char cVar1;
  
  cVar1 = *param_2;
  *param_2 = param_3;
  return cVar1 != param_3;
}



// FUNCTION 142bcaaf0 SetValue body=139 status=ok
// SIG undefined SetValue(void)

undefined1
UBlackboardKeyType_Class::SetValue(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 local_res10;
  undefined4 local_res14;
  
  FWeakObjectPtr::operator=(&local_res10,param_3);
  cVar1 = FWeakObjectPtr::IsValid(&local_res10,0,1);
  cVar2 = FWeakObjectPtr::IsValid(param_2,0,1);
  if (cVar1 == cVar2) {
    cVar1 = FWeakObjectPtr::IsStale(&local_res10,0,1);
    cVar2 = FWeakObjectPtr::IsStale(param_2,0,1);
    if (cVar1 == cVar2) {
      cVar1 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                        (param_2,&local_res10);
      uVar3 = 0;
      if (cVar1 == '\0') goto LAB_142bcab63;
    }
  }
  uVar3 = 1;
LAB_142bcab63:
  *param_2 = local_res10;
  param_2[1] = local_res14;
  return uVar3;
}



// FUNCTION 142bcab80 SetValue body=72 status=ok
// SIG undefined SetValue(void)

undefined1 UBlackboardKeyType_Rotator::SetValue(undefined8 param_1,float *param_2,float *param_3)

{
  if (((*param_3 == *param_2) && (param_3[1] == param_2[1])) && (param_3[2] == param_2[2])) {
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    param_2[2] = param_3[2];
    return 0;
  }
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  param_2[2] = param_3[2];
  return 1;
}



// FUNCTION 142bcabd0 SetValue body=89 status=ok
// SIG undefined SetValue(void)

bool UBlackboardKeyType_String::SetValue(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined2 *puVar4;
  longlong lVar5;
  
  psVar3 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    psVar3 = *(short **)(param_1 + 0x30);
  }
  lVar5 = (longlong)puVar4 - (longlong)psVar3;
  do {
    sVar1 = *psVar3;
    sVar2 = *(short *)((longlong)psVar3 + lVar5);
    if (sVar1 != sVar2) break;
    psVar3 = psVar3 + 1;
  } while (sVar2 != 0);
  FString::operator=((undefined8 *)(param_1 + 0x30),param_3);
  return sVar1 != sVar2;
}



// FUNCTION 142bcac30 SetValueAsBool body=47 status=ok
// SIG undefined SetValueAsBool(void)

void UBlackboardComponent::SetValueAsBool(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142bbd6b0();
  FUN_1409f2510(param_1,uVar1,param_3);
  return;
}



// FUNCTION 142bcac60 FUN_142bcac60 body=45 status=ok
// SIG undefined FUN_142bcac60(void)

void FUN_142bcac60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142bbd6b0();
  FUN_142baf4d0(param_1,uVar1,param_3);
  return;
}



// FUNCTION 142bcac90 SetValueAsEnum body=47 status=ok
// SIG undefined SetValueAsEnum(void)

void UBlackboardComponent::SetValueAsEnum(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142bbd6b0();
  FUN_142baf8a0(param_1,uVar1,param_3);
  return;
}



// FUNCTION 142bcacc0 SetValueAsFloat body=46 status=ok
// SIG undefined SetValueAsFloat(void)

void UBlackboardComponent::SetValueAsFloat(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142bbd6b0();
  FUN_142bafc40(param_1,uVar1,param_3);
  return;
}



// FUNCTION 142bcacf0 SetValueAsInt body=45 status=ok
// SIG undefined SetValueAsInt(void)

void UBlackboardComponent::SetValueAsInt(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142bbd6b0();
  FUN_142baffe0(param_1,uVar1,param_3);
  return;
}



// FUNCTION 142bcad20 FUN_142bcad20 body=45 status=ok
// SIG undefined FUN_142bcad20(void)

void FUN_142bcad20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142bbd6b0();
  FUN_142bb0380(param_1,uVar1,param_3);
  return;
}



// FUNCTION 142bcad50 FUN_142bcad50 body=45 status=ok
// SIG undefined FUN_142bcad50(void)

void FUN_142bcad50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_142bbd6b0();
  FUN_140725870(param_1,uVar1,param_3);
  return;
}



// FUNCTION 142bcad80 FUN_142bcad80 body=65 status=ok
// SIG undefined FUN_142bcad80(void)

void FUN_142bcad80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar1 = FUN_142bbd6b0();
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  FUN_14074ace0(param_1,uVar1,&local_18);
  return;
}



// FUNCTION 142bcadd0 SetValueAsString body=85 status=ok
// SIG undefined SetValueAsString(void)

void UBlackboardComponent::SetValueAsString(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 local_18 [16];
  
  uVar2 = FUN_142bbd6b0();
  uVar1 = FString::FString(local_18,param_3);
  FUN_142bb0720(param_1,uVar2,uVar1);
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142bcae30 FUN_142bcae30 body=65 status=ok
// SIG undefined FUN_142bcae30(void)

void FUN_142bcae30(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar1 = FUN_142bbd6b0();
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  FUN_14074b0b0(param_1,uVar1,&local_18);
  return;
}



// FUNCTION 142bcae80 FUN_142bcae80 body=50 status=ok
// SIG undefined FUN_142bcae80(void)

undefined1 FUN_142bcae80(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0xf0) == 0) ||
     ((*(uint *)(*(longlong *)(param_1 + 0xf0) + 0x2a0) >> 8 & 1) == 0)) {
    cVar1 = FUN_1423e17b0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142bcaec0 FUN_142bcaec0 body=63 status=ok
// SIG undefined FUN_142bcaec0(void)

undefined1 FUN_142bcaec0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((*(longlong *)(param_1 + 0x568) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x568) + 0x180) != 0)) &&
     (*(longlong *)(param_2 + 0x180) != 0)) {
    cVar1 = UBlackboardData::IsRelatedTo();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142bcaf00 FUN_142bcaf00 body=124 status=ok
// SIG undefined FUN_142bcaf00(void)

undefined8 FUN_142bcaf00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if (param_2 == param_1) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x178) + 0x188);
    if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x890))(), cVar2 == '\x01'))
    {
      return 1;
    }
    if (*(longlong *)(param_2 + 0x178) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x178) + 0x188);
      if ((plVar1 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar1 + 0x890))(plVar1,param_1), cVar2 == '\x01')) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142bcafa0 FUN_142bcafa0 body=83 status=ok
// SIG undefined FUN_142bcafa0(void)

undefined8 FUN_142bcafa0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x88) = 1;
  if (iVar1 == 0) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_142c46c60(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x178));
      return 1;
    }
    FUN_142c46c60(param_1,0);
  }
  return 1;
}



// FUNCTION 142bcb040 FUN_142bcb040 body=288 status=ok
// SIG undefined FUN_142bcb040(void)

undefined8 FUN_142bcb040(longlong *param_1)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffffe;
  uVar2 = *(uint *)(param_1 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x11) = 1;
  if (*(uint *)(param_1 + 0x14) <= uVar2) {
    local_res8 = CONCAT71(local_res8._1_7_,2);
    (**(code **)(*param_1 + 0x288))(param_1,&local_res8);
    return 1;
  }
  if (*(int *)((longlong)param_1 + 0xbc) != 0) {
    lVar3 = *(longlong *)(param_1[0x13] + (longlong)(int)uVar2 * 8);
    goto LAB_142bcb12b;
  }
  local_res8 = 0;
  lVar3 = FUN_1417987a0(*(undefined8 *)(param_1[0x13] + (longlong)(int)uVar2 * 8),param_1,0,
                        0xefffffff,0,0,0xff800000);
  if (lVar3 == 0) {
LAB_142bcb117:
    lVar3 = 0;
  }
  else {
    lVar4 = UPawnAction::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142bcb117;
  }
  uVar2 = *(uint *)(param_1 + 0x17);
LAB_142bcb12b:
  *(uint *)(param_1 + 0x17) = uVar2 + 1;
  uVar5 = 0;
  param_1[0x16] = lVar3;
  if (param_1[7] != 0) {
    uVar5 = FUN_142bc6aa0(param_1[7],lVar3,(int)param_1[0xc],param_1[8]);
  }
  return uVar5;
}



// FUNCTION 142bcb160 FUN_142bcb160 body=505 status=ok
// SIG undefined FUN_142bcb160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142bcb160(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x11) = 1;
  if (*(float *)(param_1 + 0x13) <= 0.0 && *(float *)(param_1 + 0x13) != 0.0) {
    uVar5 = (undefined7)(local_28 >> 8);
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    lVar1 = param_1[0x13];
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      plVar2[2] = (longlong)FUN_142bcc7f0;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x14,&local_98,(int)lVar1);
    if (local_38 != 0) {
      plVar6 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar6 = local_48;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    uVar4 = TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar1 = FMemory::Realloc(plVar2,0,0);
      uVar4 = 0;
      if (lVar1 != 0) {
        uVar4 = FMemory::Free(lVar1);
      }
    }
    uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
  }
  return CONCAT71(uVar5,1);
}



// FUNCTION 142bcb390 FUN_142bcb390 body=51 status=ok
// SIG undefined FUN_142bcb390(void)

void FUN_142bcb390(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x548);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x428))(plVar1,param_1,0x140,DAT_146b2c570,0);
  }
  return;
}



// FUNCTION 142bcb3d0 FUN_142bcb3d0 body=1431 status=ok
// SIG undefined FUN_142bcb3d0(void)

void FUN_142bcb3d0(longlong param_1,int param_2)

{
  bool bVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int *piVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  undefined4 local_res8;
  int local_res10;
  undefined2 local_res18;
  undefined2 local_res1a;
  longlong local_res20;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined2 local_58;
  undefined1 local_56;
  ulonglong uVar18;
  
  bVar7 = *(byte *)(param_1 + 0x323);
  if (*(char *)(param_1 + 0x322) != '\0') {
    *(byte *)(param_1 + 0x323) = bVar7 | 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x322) = 0;
  local_res10 = param_2;
  if ((bVar7 & 0x10) == 0) {
    bVar7 = bVar7 | 0x10;
    iVar4 = *(int *)(param_1 + 0x1e0) + -1;
    lVar15 = (longlong)iVar4;
    *(byte *)(param_1 + 0x323) = bVar7;
    if (-1 < iVar4) {
      do {
        uVar18 = 0;
        lVar11 = lVar15 * 0x60 + *(longlong *)(param_1 + 0x1d8);
        uVar14 = uVar18;
        if (0 < *(int *)(lVar11 + 0x20)) {
          do {
            plVar13 = *(longlong **)(uVar14 + *(longlong *)(lVar11 + 0x18));
            lVar12 = (ulonglong)*(ushort *)((longlong)plVar13 + 0x52) + *(longlong *)(lVar11 + 0x38)
            ;
            if ((*(byte *)(plVar13 + 0xb) & 2) != 0) {
              if ((*(byte *)((longlong)plVar13 + 0x55) & 4) == 0) {
LAB_142bcb4e0:
                if (plVar13 != (longlong *)0x0) {
                  (**(code **)(*plVar13 + 0x2d0))(plVar13,param_1,lVar12);
                }
              }
              else {
                uVar2 = (**(code **)(*plVar13 + 0x2b0))();
                if ((uVar2 != 0) &&
                   (piVar8 = (int *)(lVar12 - ((ulonglong)uVar2 + 3 & 0xfffffffffffffffc)),
                   piVar8 != (int *)0x0)) {
                  iVar4 = *piVar8;
                  if ((iVar4 < 0) || (*(int *)(param_1 + 0x200) <= iVar4)) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar4 * 8);
                    goto LAB_142bcb4e0;
                  }
                }
              }
            }
            uVar17 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar17;
            uVar14 = uVar14 + 8;
          } while ((int)uVar17 < *(int *)(lVar11 + 0x20));
        }
        uVar14 = 0;
        *(undefined4 *)(lVar11 + 0x20) = 0;
        if (0x7fffffff < *(uint *)(lVar11 + 0x24)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar11 + 0x18,0);
        }
        if (0 < *(int *)(lVar11 + 0x30)) {
          local_res20 = 0;
          uVar18 = uVar14;
          do {
            lVar12 = 0;
            iVar4 = (int)uVar18;
            plVar16 = (longlong *)(*(longlong *)(lVar11 + 0x28) + local_res20);
            plVar13 = (longlong *)*plVar16;
            if ((plVar13 != (longlong *)0x0) && ((int)plVar16[1] == 0)) {
              iVar5 = *(int *)((longlong)plVar13 + 0xc);
              if (iVar5 < (int)DAT_1469e91c4) {
                uVar10 = iVar5 >> 0x1f & 0xffff;
                uVar17 = iVar5 + uVar10;
                lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar17 >> 0x10) * 8) +
                         (longlong)(int)((uVar17 & 0xffff) - uVar10) * 0x18;
              }
              if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) == 0) {
                if (*(int *)(param_1 + 0x1e0) != 0) {
                  local_res8._2_2_ = (short)plVar13[10];
                  uVar3 = FUN_142bbb940(param_1,plVar13);
                  local_res8 = CONCAT22(local_res8._2_2_,uVar3);
                  FUN_142bc7e00(param_1 + 0x280,&local_res8);
                }
                lVar12 = (ulonglong)*(ushort *)((longlong)plVar13 + 0x52) +
                         *(longlong *)(lVar11 + 0x38);
                plVar9 = plVar13;
                if ((*(byte *)((longlong)plVar13 + 0x55) & 4) == 0) {
LAB_142bcb631:
                  if (plVar9 == (longlong *)0x0) goto LAB_142bcb676;
                  iVar5 = (**(code **)(*plVar9 + 0x2d0))(plVar9,param_1,lVar12);
                  if (iVar5 == 3) {
                    if (((longlong)uVar14 < 0) || (*(int *)(lVar11 + 0x30) <= iVar4)) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if ((bVar1) && ((longlong *)*plVar16 == plVar13)) {
                      *(undefined4 *)(plVar16 + 1) = 1;
                      *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) | 4;
                    }
                  }
                }
                else {
                  uVar2 = (**(code **)(*plVar13 + 0x2b0))();
                  if ((uVar2 != 0) &&
                     (piVar8 = (int *)(lVar12 - ((ulonglong)uVar2 + 3 & 0xfffffffffffffffc)),
                     piVar8 != (int *)0x0)) {
                    iVar5 = *piVar8;
                    if ((iVar5 < 0) || (*(int *)(param_1 + 0x200) <= iVar5)) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar5 * 8);
                      goto LAB_142bcb631;
                    }
                  }
LAB_142bcb676:
                  iVar5 = 2;
                }
                FUN_142bc45b0(param_1,plVar13,iVar5);
                if (((longlong)uVar14 < 0) || (*(int *)(lVar11 + 0x30) <= iVar4)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if ((!bVar1) || ((longlong *)*plVar16 != plVar13)) {
                  iVar4 = iVar4 + -1;
                  uVar14 = uVar14 - 1;
                  local_res20 = local_res20 + -0x10;
                }
              }
            }
            local_res20 = local_res20 + 0x10;
            uVar18 = (ulonglong)(iVar4 + 1U);
            uVar14 = uVar14 + 1;
          } while ((int)(iVar4 + 1U) < *(int *)(lVar11 + 0x30));
        }
        if (*(char *)(lVar11 + 0x49) == '\x01') {
          plVar13 = *(longlong **)(lVar11 + 0x10);
          if (plVar13 == (longlong *)0x0) {
LAB_142bcb752:
            plVar13 = (longlong *)0x0;
          }
          else {
            lVar12 = UBTTaskNode::GetPrivateStaticClass();
            if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
                lVar12 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) goto LAB_142bcb752;
            if (*(int *)(param_1 + 0x1e0) != 0) {
              local_res1a = (undefined2)plVar13[10];
              local_res18 = FUN_142bbb940(param_1,plVar13);
              FUN_142bc7e00(param_1 + 0x280);
            }
          }
          *(undefined1 *)(lVar11 + 0x49) = 2;
          lVar12 = (ulonglong)*(ushort *)((longlong)plVar13 + 0x52) + *(longlong *)(lVar11 + 0x38);
          plVar16 = plVar13;
          if ((*(byte *)((longlong)plVar13 + 0x55) & 4) == 0) {
LAB_142bcb7b2:
            if (plVar16 == (longlong *)0x0) goto LAB_142bcb7c8;
            uVar6 = (**(code **)(*plVar16 + 0x2d0))(plVar16,param_1,lVar12);
          }
          else {
            uVar2 = (**(code **)(*plVar13 + 0x2b0))();
            if ((uVar2 != 0) &&
               (piVar8 = (int *)(lVar12 - ((ulonglong)uVar2 + 3 & 0xfffffffffffffffc)),
               piVar8 != (int *)0x0)) {
              iVar4 = *piVar8;
              if ((iVar4 < 0) || (*(int *)(param_1 + 0x200) <= iVar4)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar4 * 8);
                goto LAB_142bcb7b2;
              }
            }
LAB_142bcb7c8:
            uVar6 = 2;
          }
          if (*(char *)(lVar11 + 0x49) == '\x02') {
            FUN_142bc45b0(param_1,plVar13,uVar6);
          }
        }
        lVar15 = lVar15 + -1;
      } while (-1 < lVar15);
      bVar7 = *(byte *)(param_1 + 0x323);
    }
  }
  iVar4 = 0;
  if (((bVar7 & 4) == 0) || (local_res10 != 0)) {
    iVar5 = 0;
    if (*(int *)(param_1 + 0x1e0) != 0) {
      local_res8 = 2;
      FUN_142bb7890(param_1,**(undefined8 **)(param_1 + 0x1d8),0,&local_res8);
      iVar5 = *(int *)(param_1 + 0x1e0);
    }
    if (0 < iVar5) {
      do {
        FUN_142bb5430((longlong)iVar4 * 0x60 + *(longlong *)(param_1 + 0x1d8),param_1,0);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x1e0));
    }
    FUN_142bc9050(param_1 + 0x1d8,0);
    TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
    ::Reset(param_1 + 0x280);
    *(undefined4 *)(param_1 + 0x218) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x21c)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x210,0);
    }
    *(undefined4 *)(param_1 + 0x228) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x22c)) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x220,0);
    }
    *(uint *)(param_1 + 0x240) = *(uint *)(param_1 + 0x240) & 0xfffffff8;
    *(undefined4 *)(param_1 + 0x23c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x234) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24c) = 0xffffffff;
    *(undefined2 *)(param_1 + 600) = local_58;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined1 *)(param_1 + 0x25a) = local_56;
    *(byte *)(param_1 + 0x25b) = *(byte *)(param_1 + 0x25b) & 0xfc;
    *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) & 0xc2;
    *(undefined2 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(ulonglong *)(param_1 + 0x268) = CONCAT44(uStack_5c,uStack_60) & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 142bcb970 FUN_142bcb970 body=70 status=ok
// SIG undefined FUN_142bcb970(void)

void FUN_142bcb970(longlong param_1,longlong param_2)

{
  undefined2 local_res8;
  undefined2 local_resa;
  
  if ((param_1 != 0) && (*(int *)(param_2 + 0x1e0) != 0)) {
    local_resa = *(undefined2 *)(param_1 + 0x50);
    local_res8 = FUN_142bbb940(param_2,param_1);
    FUN_142bc7e00(param_2 + 0x280,&local_res8);
  }
  return;
}



// FUNCTION 142bcb9c0 StopWaitingForMessages body=252 status=ok
// SIG undefined StopWaitingForMessages(void)

void UPawnAction::StopWaitingForMessages(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  iVar5 = *(int *)(param_1 + 0x5c);
  lVar3 = *(longlong *)(param_1 + 0x50);
  iVar7 = *(int *)(param_1 + 0x58);
  if (iVar5 < 0) {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(lVar3 + 8);
      do {
        plVar4 = (longlong *)*plVar6;
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
        plVar6 = plVar6 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar5 = *(int *)(param_1 + 0x5c);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (iVar5 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0x50),0);
    }
  }
  else {
    if (iVar7 != 0) {
      plVar6 = (longlong *)(lVar3 + 8);
      do {
        plVar4 = (longlong *)*plVar6;
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
        plVar6 = plVar6 + 2;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 142bcbc50 TestBasicOperation body=49 status=ok
// SIG undefined TestBasicOperation(void)

char UBlackboardKeyType_Class::TestBasicOperation
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  local_res18 = *param_3;
  local_res1c = param_3[1];
  cVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (param_4 != 0) {
    cVar1 = cVar1 == '\0';
  }
  return cVar1;
}



// FUNCTION 142bcbc90 TestBasicOperation body=62 status=ok
// SIG undefined TestBasicOperation(void)

char UBlackboardKeyType_Object::TestBasicOperation
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if (param_3 == (undefined4 *)0x0) {
    return '\0';
  }
  local_res18 = *param_3;
  local_res1c = param_3[1];
  cVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (param_4 != 0) {
    cVar1 = cVar1 == '\0';
  }
  return cVar1;
}



// FUNCTION 142bcbcd0 TestBasicOperation body=124 status=ok
// SIG undefined TestBasicOperation(void)

longlong UBlackboardKeyType_Rotator::TestBasicOperation
                   (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  float fVar1;
  uint7 uVar2;
  float local_18;
  float fStack_14;
  
  fVar1 = *(float *)(param_3 + 1);
  local_18 = (float)*param_3;
  uVar2 = (uint7)(uint3)((uint)fVar1 >> 8);
  fStack_14 = (float)((ulonglong)*param_3 >> 0x20);
  if (param_4 == 0) {
    if (((local_18 != (float)DAT_146690f00) || (fStack_14 != DAT_146690f00._4_4_)) ||
       (fVar1 != DAT_146690f08)) {
LAB_142bcbd45:
      return CONCAT71(uVar2,1);
    }
  }
  else if (((local_18 == (float)DAT_146690f00) && (fStack_14 == DAT_146690f00._4_4_)) &&
          (fVar1 == DAT_146690f08)) goto LAB_142bcbd45;
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142bcbd50 TestBasicOperation body=216 status=ok
// SIG undefined TestBasicOperation(void)

longlong UBlackboardKeyType_Vector::TestBasicOperation
                   (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  float fVar1;
  uint7 uVar2;
  float local_18;
  float fStack_14;
  
  fVar1 = *(float *)(param_3 + 1);
  local_18 = (float)*param_3;
  uVar2 = (uint7)(uint3)((uint)fVar1 >> 8);
  fStack_14 = (float)((ulonglong)*param_3 >> 0x20);
  if (param_4 == 0) {
    if ((-(float)DAT_146690f20 < local_18) && (local_18 < (float)DAT_146690f20)) {
      if ((-DAT_146690f20._4_4_ < fStack_14) && (fStack_14 < DAT_146690f20._4_4_)) {
        if ((-DAT_146690f28 < fVar1) && (fVar1 < DAT_146690f28)) goto LAB_142bcbdd4;
      }
    }
LAB_142bcbe21:
    return (ulonglong)uVar2 << 8;
  }
  if ((-(float)DAT_146690f20 < local_18) && (local_18 < (float)DAT_146690f20)) {
    if ((-DAT_146690f20._4_4_ < fStack_14) && (fStack_14 < DAT_146690f20._4_4_)) {
      if ((-DAT_146690f28 < fVar1) && (fVar1 < DAT_146690f28)) goto LAB_142bcbe21;
    }
  }
LAB_142bcbdd4:
  return CONCAT71(uVar2,1);
}



// FUNCTION 142bcbe30 TestTextOperation body=304 status=ok
// SIG undefined TestTextOperation(void)

bool UBlackboardKeyType_Name::TestTextOperation
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
               undefined8 *param_5)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  bool bVar4;
  undefined8 local_res18 [2];
  undefined2 *local_18;
  int local_10;
  
  local_res18[0] = *param_3;
  FName::ToString(local_res18,&local_18);
  if (param_4 == 0) {
    if (*(int *)(param_5 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_5;
    }
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar2);
    bVar4 = iVar1 == 0;
  }
  else if (param_4 == 1) {
    if (*(int *)(param_5 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_5;
    }
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar2);
    bVar4 = iVar1 != 0;
  }
  else if (param_4 == 2) {
    if (*(int *)(param_5 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_5;
    }
    iVar1 = FUN_141592950(&local_18,puVar2,1,0,0xffffffff);
    bVar4 = iVar1 != -1;
  }
  else if (param_4 == 3) {
    if (*(int *)(param_5 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_5;
    }
    iVar1 = FUN_141592950(&local_18,puVar2,1,0,0xffffffff);
    bVar4 = iVar1 == -1;
  }
  else {
    bVar4 = false;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return bVar4;
}



// FUNCTION 142bcbf60 TestTextOperation body=272 status=ok
// SIG undefined TestTextOperation(void)

bool UBlackboardKeyType_String::TestTextOperation
               (longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
               undefined8 *param_5)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if (param_4 == 0) {
    puVar2 = &DAT_143f3eda8;
    if (*(int *)(param_5 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*param_5;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      puVar2 = *(undefined2 **)(param_1 + 0x30);
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    return iVar1 == 0;
  }
  if (param_4 == 1) {
    puVar2 = &DAT_143f3eda8;
    if (*(int *)(param_5 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*param_5;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      puVar2 = *(undefined2 **)(param_1 + 0x30);
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    return iVar1 != 0;
  }
  if (param_4 == 2) {
    if (*(int *)(param_5 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_5;
    }
    iVar1 = FUN_141592950(param_1 + 0x30,puVar2,1,0,0xffffffff);
    return iVar1 != -1;
  }
  if (param_4 != 3) {
    return false;
  }
  if (*(int *)(param_5 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_5;
  }
  iVar1 = FUN_141592950(param_1 + 0x30,puVar2,1,0,0xffffffff);
  return iVar1 == -1;
}



// FUNCTION 142bcc070 FUN_142bcc070 body=51 status=ok
// SIG undefined FUN_142bcc070(void)

void FUN_142bcc070(longlong *param_1,undefined4 param_2)

{
  FUN_1422406d0();
                    /* WARNING: Could not recover jumptable at 0x000142bcc09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8b0))(param_1,param_2,1);
  return;
}



// FUNCTION 142bcc0d0 FUN_142bcc0d0 body=680 status=ok
// SIG undefined FUN_142bcc0d0(void)

void FUN_142bcc0d0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  FUN_142bf3850();
  iVar6 = *(int *)(param_1 + 0x1e0);
  iVar10 = 0;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x1d8);
      iVar6 = 0;
      if (0 < *(int *)(lVar8 + 0x20 + lVar5)) {
        lVar9 = 0;
        do {
          lVar7 = *(longlong *)(lVar9 + *(longlong *)(lVar8 + 0x18 + lVar5));
          FUN_142bcefc0(lVar7,param_1,
                        (ulonglong)*(ushort *)(lVar7 + 0x52) + *(longlong *)(lVar8 + 0x38 + lVar5),
                        param_2);
          iVar6 = iVar6 + 1;
          lVar9 = lVar9 + 8;
        } while (iVar6 < *(int *)(lVar8 + 0x20 + lVar5));
      }
      iVar6 = *(int *)(param_1 + 0x1e0);
      iVar10 = iVar10 + 1;
      lVar8 = lVar8 + 0x60;
    } while (iVar10 < iVar6);
  }
  if ((*(byte *)(param_1 + 0x323) & 8) != 0) {
    FUN_142bc5f80(param_1);
    iVar6 = *(int *)(param_1 + 0x1e0);
  }
  if (((iVar6 != 0) && ((*(byte *)(param_1 + 0x323) & 0x20) != 0)) &&
     ((*(byte *)(param_1 + 0x323) & 0x40) == 0)) {
    *(byte *)(param_1 + 0x322) = *(byte *)(param_1 + 0x322) & 0xfe;
    iVar6 = *(int *)(param_1 + 0x1e0);
    iVar10 = 0;
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(param_1 + 0x1d8);
        iVar6 = 0;
        if (0 < *(int *)(lVar8 + 0x30 + lVar5)) {
          lVar9 = 0;
          do {
            plVar4 = *(longlong **)(lVar9 + *(longlong *)(lVar8 + 0x28 + lVar5));
            lVar7 = (ulonglong)*(ushort *)((longlong)plVar4 + 0x52) +
                    *(longlong *)(lVar8 + 0x38 + lVar5);
            if ((*(byte *)(plVar4 + 0xd) & 2) != 0) {
              if ((*(byte *)((longlong)plVar4 + 0x55) & 4) == 0) {
LAB_142bcc23a:
                if (plVar4 != (longlong *)0x0) {
                  (**(code **)(*plVar4 + 0x2d8))(plVar4,param_1,lVar7,param_2);
                }
              }
              else {
                uVar2 = (**(code **)(*plVar4 + 0x2b0))();
                if ((uVar2 != 0) &&
                   (piVar3 = (int *)(lVar7 - ((ulonglong)(uVar2 + 3) & 0xfffffffffffffffc)),
                   piVar3 != (int *)0x0)) {
                  iVar1 = *piVar3;
                  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x200))) {
                    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar1 * 8);
                    goto LAB_142bcc23a;
                  }
                }
              }
            }
            iVar6 = iVar6 + 1;
            lVar9 = lVar9 + 0x10;
          } while (iVar6 < *(int *)(lVar8 + 0x30 + lVar5));
        }
        iVar6 = *(int *)(param_1 + 0x1e0);
        iVar10 = iVar10 + 1;
        lVar8 = lVar8 + 0x60;
      } while (iVar10 < iVar6);
    }
    if (((int)(uint)*(ushort *)(param_1 + 800) < iVar6) &&
       (lVar8 = (ulonglong)*(ushort *)(param_1 + 800) * 0x60 + *(longlong *)(param_1 + 0x1d8),
       (byte)(*(char *)(lVar8 + 0x49) - 1U) < 2)) {
      plVar4 = *(longlong **)(lVar8 + 0x10);
      lVar8 = (ulonglong)*(ushort *)((longlong)plVar4 + 0x52) + *(longlong *)(lVar8 + 0x38);
      if ((*(byte *)(plVar4 + 0xd) & 2) != 0) {
        if ((*(byte *)((longlong)plVar4 + 0x55) & 4) != 0) {
          plVar4 = (longlong *)FUN_142bbe0b0(plVar4,param_1,lVar8);
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x2d8))(plVar4,param_1,lVar8,param_2);
        }
      }
    }
    if ((int)(*(ushort *)(param_1 + 800) + 1) < *(int *)(param_1 + 0x1e0)) {
      lVar8 = *(longlong *)(param_1 + 0x1d8);
      lVar5 = (longlong)*(int *)(param_1 + 0x1e0) * 0x60;
      if (*(char *)(lVar5 + -0x17 + lVar8) == '\x02') {
        plVar4 = *(longlong **)(lVar5 + -0x50 + lVar8);
        lVar8 = (ulonglong)*(ushort *)((longlong)plVar4 + 0x52) +
                *(longlong *)(lVar5 + -0x28 + lVar8);
        if ((*(byte *)(plVar4 + 0xd) & 2) != 0) {
          if ((*(byte *)((longlong)plVar4 + 0x55) & 4) != 0) {
            plVar4 = (longlong *)FUN_142bbe0b0(plVar4,param_1,lVar8);
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x2d8))(plVar4,param_1,lVar8,param_2);
          }
        }
      }
    }
    if ((*(byte *)(param_1 + 0x323) & 1) != 0) {
      FUN_142bcb3d0(param_1,0);
    }
  }
  return;
}


