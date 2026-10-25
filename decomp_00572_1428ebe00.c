// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1428ebe00 operator= body=198 status=ok
// SIG undefined operator=(void)

undefined8 * FVectorCurve::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  piVar5 = (int *)((longlong)param_1 + 0x8c);
  uVar3 = param_2[3];
  lVar6 = 3;
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  do {
    piVar1 = piVar5 + -3;
    *(undefined1 *)(piVar5 + -5) =
         *(undefined1 *)((longlong)param_2 + (-0x14 - (longlong)param_1) + (longlong)piVar5);
    *(undefined1 *)((longlong)piVar5 + -0x13) =
         *(undefined1 *)((longlong)param_2 + (-0x13 - (longlong)param_1) + (longlong)piVar5);
    piVar5[-4] = *(int *)((longlong)param_2 + (-0x10 - (longlong)param_1) + (longlong)piVar5);
    piVar4 = (int *)((longlong)param_2 + (-0xc - (longlong)param_1) + (longlong)piVar5);
    if (piVar1 != piVar4) {
      iVar2 = *(int *)((longlong)piVar5 + (longlong)param_2 + (-4 - (longlong)param_1));
      _Src = *(void **)piVar4;
      piVar5[-1] = iVar2;
      if ((iVar2 == 0) && (*piVar5 == 0)) {
        *piVar5 = 0;
      }
      else {
        TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
        ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar2 * 0x1c);
      }
    }
    piVar5 = piVar5 + 0x1c;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return param_1;
}



// FUNCTION 1428ebee0 `scalar_deleting_destructor' body=174 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAnimClassData::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x50);
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  if (iVar1 != 0) {
    do {
      puVar2[0xc] = &PTR_FUN_14410b0e0;
      *puVar2 = &PTR_FUN_14410b0e0;
      puVar2 = puVar2 + 0x15;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
  }
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  TArray<FBakedAnimationStateMachine,FDefaultAllocator>::
  ~TArray<FBakedAnimationStateMachine,FDefaultAllocator>(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_1441b49f8;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1428ebf90 AnimationCompressionFormat_StaticEnum body=55 status=ok
// SIG undefined AnimationCompressionFormat_StaticEnum(void)

void AnimationCompressionFormat_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1a578 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a578 = GetStaticEnum(FUN_1428edb80,uVar1,L"AnimationCompressionFormat");
  }
  return;
}



// FUNCTION 1428ebfd0 FUN_1428ebfd0 body=57 status=ok
// SIG undefined FUN_1428ebfd0(void)

void FUN_1428ebfd0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b1a5e8);
                    /* WARNING: Could not recover jumptable at 0x0001428ec006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1428ec010 FUN_1428ec010 body=57 status=ok
// SIG undefined FUN_1428ec010(void)

void FUN_1428ec010(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b1a5f0);
                    /* WARNING: Could not recover jumptable at 0x0001428ec046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1428ec050 FUN_1428ec050 body=57 status=ok
// SIG undefined FUN_1428ec050(void)

void FUN_1428ec050(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146b1a5f8);
                    /* WARNING: Could not recover jumptable at 0x0001428ec086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1428ec090 FUN_1428ec090 body=62 status=ok
// SIG undefined FUN_1428ec090(void)

void FUN_1428ec090(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146b1a600);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1428ec0d0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      TSet<TTuple<FWeakObjectPtr,int>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,int,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1428ec260 Construct body=119 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FStateMachineDebugData>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0xb0);
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined4 *)((longlong)param_2 + 0x98) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0;
  return;
}



// FUNCTION 1428ec2e0 Construct body=68 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FTransformCurve>::Construct
               (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined2 *)(param_2 + 2) = 0xffff;
  *(undefined4 *)(param_2 + 3) = 0;
  FVectorCurve::FVectorCurve(param_2 + 4);
  FVectorCurve::FVectorCurve(param_2 + 0x32);
  FVectorCurve::FVectorCurve(param_2 + 0x60);
  return;
}



// FUNCTION 1428ec340 Copy body=197 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FA2CSPose>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_3 + 0x18);
    do {
      TArray<FTransform,FDefaultAllocator>::operator=(param_2,puVar2 + -3);
      *(undefined8 *)(param_2 + 0x10) = puVar2[-1];
      puVar3 = (undefined8 *)(param_2 + 0x18);
      if (puVar3 != puVar2) {
        iVar1 = *(int *)(puVar2 + 1);
        _Src = (void *)*puVar2;
        *(int *)(param_2 + 0x20) = iVar1;
        if ((iVar1 == 0) && (*(int *)(param_2 + 0x24) == 0)) {
          *(undefined4 *)(param_2 + 0x24) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1);
        }
      }
      puVar2 = puVar2 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x28;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428ec410 Copy body=171 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FA2Pose>::Copy
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
        TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 * 0x30);
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1428ec4c0 Copy body=158 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAnimTrack>::Copy
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
        TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 5);
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1428ec560 Copy body=94 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FFloatCurve>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      puVar1 = (undefined4 *)(param_3 + (longlong)param_2);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      puVar1 = (undefined4 *)(param_3 + 0x10 + (longlong)param_2);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      param_2[4] = *puVar1;
      param_2[5] = uVar2;
      param_2[6] = uVar3;
      param_2[7] = uVar4;
      FRichCurve::operator=(param_2 + 8,param_3 + 0x20 + (longlong)param_2);
      param_2 = param_2 + 0x24;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428ec5c0 FUN_1428ec5c0 body=71 status=ok
// SIG undefined FUN_1428ec5c0(void)

undefined1 FUN_1428ec5c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1428ebbf0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428ec610 Copy body=316 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FSlotEvaluationPose>::Copy
          (undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_3 + 0x18);
    do {
      *param_2 = *(undefined1 *)(puVar5 + -3);
      puVar1 = (undefined8 *)(param_2 + 8);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)((longlong)puVar5 + -0x14);
      if (puVar1 != puVar5 + -2) {
        iVar3 = *(int *)(puVar5 + -1);
        pvVar4 = (void *)puVar5[-2];
        *(int *)(param_2 + 0x10) = iVar3;
        if ((iVar3 == 0) && (*(int *)(param_2 + 0x14) == 0)) {
          *(undefined4 *)(param_2 + 0x14) = 0;
        }
        else {
          FUN_140615970(puVar1,iVar3);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar4,(longlong)iVar3 * 0x30);
        }
      }
      *(undefined8 *)(param_2 + 0x18) = *puVar5;
      puVar1 = (undefined8 *)(param_2 + 0x20);
      if (puVar1 != puVar5 + 1) {
        iVar3 = *(int *)(puVar5 + 2);
        pvVar4 = (void *)puVar5[1];
        *(int *)(param_2 + 0x28) = iVar3;
        if ((iVar3 == 0) && (*(int *)(param_2 + 0x2c) == 0)) {
          *(undefined4 *)(param_2 + 0x2c) = 0;
        }
        else {
          FUN_141dab210(puVar1,iVar3);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar4,(longlong)iVar3 << 3);
        }
      }
      *(undefined8 *)(param_2 + 0x30) = puVar5[3];
      *(undefined2 *)(param_2 + 0x38) = *(undefined2 *)(puVar5 + 4);
      puVar2 = (undefined1 *)((longlong)puVar5 + 0x22);
      puVar5 = puVar5 + 8;
      param_2[0x3a] = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x40;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428ec750 Copy body=127 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FStateMachineDebugData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x50;
    do {
      TSet<TTuple<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::operator=(param_2 + -0x50,param_3 + -0x50 + param_2);
      TSet<TTuple<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
      ::operator=(param_2,param_3 + param_2);
      *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50 + param_2);
      *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54 + param_2);
      *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58 + param_2);
      param_2 = param_2 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428ec7d0 Copy body=164 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FTransformCurve>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 400;
    do {
      puVar1 = (undefined4 *)(param_3 + -400 + param_2);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(param_2 + -400) = *puVar1;
      *(undefined4 *)(param_2 + -0x18c) = uVar2;
      *(undefined4 *)(param_2 + -0x188) = uVar3;
      *(undefined4 *)(param_2 + -0x184) = uVar4;
      puVar1 = (undefined4 *)(param_3 + -0x180 + param_2);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(param_2 + -0x180) = *puVar1;
      *(undefined4 *)(param_2 + -0x17c) = uVar2;
      *(undefined4 *)(param_2 + -0x178) = uVar3;
      *(undefined4 *)(param_2 + -0x174) = uVar4;
      FVectorCurve::operator=(param_2 + -0x170,param_3 + -0x170 + param_2);
      FVectorCurve::operator=(param_2,param_3 + param_2);
      FVectorCurve::operator=(param_2 + 0x170,param_3 + 0x170 + param_2);
      param_2 = param_2 + 0x470;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428ec880 Copy body=279 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FVectorCurve>::Copy
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    uVar3 = param_3[1];
    lVar6 = 3;
    *param_2 = *param_3;
    param_2[1] = uVar3;
    piVar5 = (int *)((longlong)param_2 + 0x8c);
    uVar3 = param_3[3];
    param_2[2] = param_3[2];
    param_2[3] = uVar3;
    do {
      piVar1 = piVar5 + -3;
      *(undefined1 *)(piVar5 + -5) =
           *(undefined1 *)((longlong)param_3 + (-0x14 - (longlong)param_2) + (longlong)piVar5);
      *(undefined1 *)((longlong)piVar5 + -0x13) =
           *(undefined1 *)((longlong)param_3 + (-0x13 - (longlong)param_2) + (longlong)piVar5);
      piVar5[-4] = *(int *)((longlong)param_3 + (-0x10 - (longlong)param_2) + (longlong)piVar5);
      piVar4 = (int *)((longlong)piVar5 + (longlong)param_3 + (-0xc - (longlong)param_2));
      if (piVar1 != piVar4) {
        iVar2 = *(int *)((longlong)piVar5 + (longlong)param_3 + (-4 - (longlong)param_2));
        _Src = *(void **)piVar4;
        piVar5[-1] = iVar2;
        if ((iVar2 == 0) && (*piVar5 == 0)) {
          *piVar5 = 0;
        }
        else {
          TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar2 * 0x1c);
        }
      }
      piVar5 = piVar5 + 0x1c;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    param_3 = param_3 + 0x2e;
    param_2 = param_2 + 0x2e;
  }
  return 1;
}



// FUNCTION 1428ec9b0 Destruct body=88 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FStateMachineDebugData>::Destruct
               (undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x98) = 0;
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_2);
  return;
}



// FUNCTION 1428eca20 FUN_1428eca20 body=61 status=ok
// SIG undefined FUN_1428eca20(void)

void FUN_1428eca20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 3;
  param_2 = param_2 + 0x170;
  do {
    param_2 = param_2 + -0x70;
    FRichCurve::~FRichCurve(param_2);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1428eca60 EAdditiveBasePoseType_StaticEnum body=55 status=ok
// SIG undefined EAdditiveBasePoseType_StaticEnum(void)

void EAdditiveBasePoseType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1a580 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a580 = GetStaticEnum(FUN_1428edbb0,uVar1,L"EAdditiveBasePoseType");
  }
  return;
}



// FUNCTION 1428ecaa0 EAnimAssetCurveFlags_StaticEnum body=55 status=ok
// SIG undefined EAnimAssetCurveFlags_StaticEnum(void)

void EAnimAssetCurveFlags_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1a570 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a570 = GetStaticEnum(FUN_1428edbe0,uVar1,L"EAnimAssetCurveFlags");
  }
  return;
}



// FUNCTION 1428ecae0 EAnimCurveType_StaticEnum body=55 status=ok
// SIG undefined EAnimCurveType_StaticEnum(void)

void EAnimCurveType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1a5a0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a5a0 = GetStaticEnum(FUN_1428edc10,uVar1,L"EAnimCurveType");
  }
  return;
}



// FUNCTION 1428ecb20 EMontagePlayReturnType_StaticEnum body=55 status=ok
// SIG undefined EMontagePlayReturnType_StaticEnum(void)

void EMontagePlayReturnType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1a598 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a598 = GetStaticEnum(FUN_1428edc40,uVar1,L"EMontagePlayReturnType");
  }
  return;
}



// FUNCTION 1428ecb60 ERawCurveTrackTypes_StaticEnum body=55 status=ok
// SIG undefined ERawCurveTrackTypes_StaticEnum(void)

void ERawCurveTrackTypes_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1a568 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a568 = GetStaticEnum(FUN_1428edc70,uVar1,L"ERawCurveTrackTypes");
  }
  return;
}



// FUNCTION 1428ecba0 ERootMotionMode_StaticEnum body=55 status=ok
// SIG undefined ERootMotionMode_StaticEnum(void)

void ERootMotionMode_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1a588 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a588 = GetStaticEnum(FUN_1428edca0,uVar1,L"ERootMotionMode");
  }
  return;
}



// FUNCTION 1428ecbe0 ERootMotionRootLock_StaticEnum body=55 status=ok
// SIG undefined ERootMotionRootLock_StaticEnum(void)

void ERootMotionRootLock_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1a590 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a590 = GetStaticEnum(FUN_1428edcd0,uVar1,L"ERootMotionRootLock");
  }
  return;
}



// FUNCTION 1428ecc50 FUN_1428ecc50 body=151 status=ok
// SIG undefined FUN_1428ecc50(void)

longlong FUN_1428ecc50(void)

{
  if (DAT_146b1a6e8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"AnimCompress",&DAT_146b1a6e8,FUN_140447710,0x48,0x10000001,0,
                  L"Engine",&LAB_1428eb850,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1a6e8;
}



// FUNCTION 1428eccf0 FUN_1428eccf0 body=162 status=ok
// SIG undefined FUN_1428eccf0(void)

longlong FUN_1428eccf0(void)

{
  if (DAT_146b1aaa0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"AnimInstance",&DAT_146b1aaa0,
                  UUGCampaign::StaticRegisterNativesUUGCampaign,0x440,0x10000008,0,L"Engine",
                  &LAB_1428eb950,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142256d30,&LAB_140447700,
                  &LAB_14084f730,0);
  }
  return DAT_146b1aaa0;
}



// FUNCTION 1428ecdb0 GetAvailablePhysical body=5 status=ok
// SIG undefined GetAvailablePhysical(void)

undefined8 FGenericPlatformMemoryStats::GetAvailablePhysical(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 1428ecdf0 FUN_1428ecdf0 body=5 status=ok
// SIG undefined FUN_1428ecdf0(void)

undefined8 FUN_1428ecdf0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 1428ece00 Get_Z_Construct_UScriptStruct_FA2CSPose_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FA2CSPose_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FA2CSPose_CRC(void)

{
  return 0xf13c2568;
}



// FUNCTION 1428ece10 FUN_1428ece10 body=6 status=ok
// SIG undefined FUN_1428ece10(void)

undefined8 FUN_1428ece10(void)

{
  return 0x4ea04f61;
}



// FUNCTION 1428ece20 Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC(void)

{
  return 0x758b1923;
}



// FUNCTION 1428ece30 Get_Z_Construct_UScriptStruct_FAnimCurveBase_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimCurveBase_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimCurveBase_CRC(void)

{
  return 0xcecb2b50;
}



// FUNCTION 1428ece40 Get_Z_Construct_UScriptStruct_FAnimCurveParam_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimCurveParam_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimCurveParam_CRC(void)

{
  return 0x1a277bed;
}



// FUNCTION 1428ece50 Get_Z_Construct_UScriptStruct_FAnimSegment_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimSegment_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimSegment_CRC(void)

{
  return 0xee3a89af;
}



// FUNCTION 1428ece60 Get_Z_Construct_UScriptStruct_FAnimTrack_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimTrack_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimTrack_CRC(void)

{
  return 0xfafb63f4;
}



// FUNCTION 1428ece70 Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC(void)

{
  return 0xa43d6a00;
}



// FUNCTION 1428ece80 Get_Z_Construct_UScriptStruct_FFloatCurve_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FFloatCurve_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FFloatCurve_CRC(void)

{
  return 0xfb595a2f;
}



// FUNCTION 1428ece90 FUN_1428ece90 body=6 status=ok
// SIG undefined FUN_1428ece90(void)

undefined8 FUN_1428ece90(void)

{
  return 0x881586ca;
}



// FUNCTION 1428ecea0 Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC(void)

{
  return 0x51d36fb9;
}



// FUNCTION 1428eceb0 Get_Z_Construct_UScriptStruct_FSlotEvaluationPose_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FSlotEvaluationPose_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FSlotEvaluationPose_CRC(void)

{
  return 0xa3bf13f8;
}



// FUNCTION 1428ecec0 Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC(void)

{
  return 0x135f6b0;
}



// FUNCTION 1428eced0 Get_Z_Construct_UScriptStruct_FTransformCurve_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTransformCurve_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTransformCurve_CRC(void)

{
  return 0xb0f0df2e;
}



// FUNCTION 1428ecee0 Get_Z_Construct_UScriptStruct_FVectorCurve_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVectorCurve_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVectorCurve_CRC(void)

{
  return 0x18ad7046;
}



// FUNCTION 1428ecfb0 Rehash body=529 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FWeakObjectPtr,int>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,int,0>,FDefaultSetAllocator>
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
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
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
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_1428ed0ef;
        uVar8 = puVar12[lVar5 + 1];
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
LAB_1428ed0ef:
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
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x14);
        uVar8 = (puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[4] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[3] = *(uint *)((longlong)plVar6 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
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



// FUNCTION 1428ed1d0 FUN_1428ed1d0 body=142 status=ok
// SIG undefined FUN_1428ed1d0(void)

void FUN_1428ed1d0(longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x470,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0xcd85689039b0ad13) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 10);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x470,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 1428ed260 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_14227fe20(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1428ed2d0 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

void UTextureRenderTarget::StaticClass(void)

{
  StaticClass();
  return;
}



// FUNCTION 1428ed2e0 StaticRegisterNativesUUGCampaign body=34 status=ok
// SIG undefined StaticRegisterNativesUUGCampaign(void)

void UUGCampaign::StaticRegisterNativesUUGCampaign(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1428eccf0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CalculateDirection_145203100,0x44);
  return;
}



// FUNCTION 1428ed310 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FA2CSPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a838 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FA2CSPose_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a838 = GetStaticStruct(FUN_1428edd00,uVar2,L"A2CSPose",0x28,uVar1);
  }
  return;
}



// FUNCTION 1428ed370 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FA2Pose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a848 == 0) {
    uVar1 = FUN_1428ece10();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a848 = GetStaticStruct(FUN_1428ea510,uVar2,L"A2Pose",0x10,uVar1);
  }
  return;
}



// FUNCTION 1428ed3d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimBlueprintDebugData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a630 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a630 = GetStaticStruct(FUN_1428edd30,uVar2,L"AnimBlueprintDebugData",1,uVar1);
  }
  return;
}



// FUNCTION 1428ed430 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimCurveBase::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a7b0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FAnimCurveBase_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a7b0 = GetStaticStruct(FUN_1428e9e80,uVar2,L"AnimCurveBase",0x20,uVar1);
  }
  return;
}



// FUNCTION 1428ed490 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimCurveParam::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a7c0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FAnimCurveParam_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a7c0 = GetStaticStruct(FUN_1428edd60,uVar2,L"AnimCurveParam",0x10,uVar1);
  }
  return;
}



// FUNCTION 1428ed4f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimSegment::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a6b0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FAnimSegment_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a6b0 = GetStaticStruct(FUN_1428edd90,uVar2,L"AnimSegment",0x20,uVar1);
  }
  return;
}



// FUNCTION 1428ed550 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimTrack::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a6a0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FAnimTrack_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a6a0 = GetStaticStruct(FUN_1428eddc0,uVar2,L"AnimTrack",0x10,uVar1);
  }
  return;
}



// FUNCTION 1428ed5b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimationFrameSnapshot::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a640 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a640 = GetStaticStruct(FUN_1428eddf0,uVar2,L"AnimationFrameSnapshot",1,uVar1);
  }
  return;
}



// FUNCTION 1428ed610 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FFloatCurve::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a7a0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FFloatCurve_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a7a0 = GetStaticStruct(FUN_1428ede20,uVar2,L"FloatCurve",0x90,uVar1);
  }
  return;
}



// FUNCTION 1428ed670 FUN_1428ed670 body=82 status=ok
// SIG undefined FUN_1428ed670(void)

void FUN_1428ed670(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a770 == 0) {
    uVar1 = FUN_1428ece90();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a770 = GetStaticStruct(FUN_1428ede50,uVar2,L"RawCurveTracks",0x20,uVar1);
  }
  return;
}



// FUNCTION 1428ed6d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FRootMotionExtractionStep::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a6c0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a6c0 = GetStaticStruct(FUN_1428ede80,uVar2,L"RootMotionExtractionStep",0x10,uVar1);
  }
  return;
}



// FUNCTION 1428ed730 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSlotEvaluationPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a828 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FSlotEvaluationPose_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a828 = GetStaticStruct(FUN_1428edeb0,uVar2,L"SlotEvaluationPose",0x40,uVar1);
  }
  return;
}



// FUNCTION 1428ed790 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FStateMachineDebugData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a650 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a650 = GetStaticStruct(FUN_1428edee0,uVar2,L"StateMachineDebugData",0xb0,uVar1);
  }
  return;
}



// FUNCTION 1428ed7f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTransformCurve::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a780 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FTransformCurve_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a780 = GetStaticStruct(FUN_1428edf10,uVar2,L"TransformCurve",0x470,uVar1);
  }
  return;
}



// FUNCTION 1428ed850 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVectorCurve::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1a790 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FVectorCurve_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1a790 = GetStaticStruct(FUN_1428edf40,uVar2,L"VectorCurve",0x170,uVar1);
  }
  return;
}



// FUNCTION 1428ed8b0 FUN_1428ed8b0 body=47 status=ok
// SIG undefined FUN_1428ed8b0(void)

longlong FUN_1428ed8b0(void)

{
  if (DAT_146b1a660 == 0) {
    FUN_141786440(&DAT_146b1a660,&PTR_GetPrivateStaticClass_145200310);
  }
  return DAT_146b1a660;
}



// FUNCTION 1428ed8e0 FUN_1428ed8e0 body=47 status=ok
// SIG undefined FUN_1428ed8e0(void)

longlong FUN_1428ed8e0(void)

{
  if (DAT_146b1a670 == 0) {
    FUN_141786440(&DAT_146b1a670,&PTR_StaticClass_1452005b0);
  }
  return DAT_146b1a670;
}



// FUNCTION 1428ed910 FUN_1428ed910 body=47 status=ok
// SIG undefined FUN_1428ed910(void)

longlong FUN_1428ed910(void)

{
  if (DAT_146b1a680 == 0) {
    FUN_141786440(&DAT_146b1a680,&PTR_GetPrivateStaticClass_145200790);
  }
  return DAT_146b1a680;
}



// FUNCTION 1428ed940 FUN_1428ed940 body=47 status=ok
// SIG undefined FUN_1428ed940(void)

longlong FUN_1428ed940(void)

{
  if (DAT_146b1a690 == 0) {
    FUN_141786440(&DAT_146b1a690,&PTR_FUN_1452008a0);
  }
  return DAT_146b1a690;
}



// FUNCTION 1428ed970 FUN_1428ed970 body=47 status=ok
// SIG undefined FUN_1428ed970(void)

longlong FUN_1428ed970(void)

{
  if (DAT_146b1a6f0 == 0) {
    FUN_141786440(&DAT_146b1a6f0,&PTR_FUN_1451fc1a0);
  }
  return DAT_146b1a6f0;
}



// FUNCTION 1428ed9a0 FUN_1428ed9a0 body=47 status=ok
// SIG undefined FUN_1428ed9a0(void)

longlong FUN_1428ed9a0(void)

{
  if (DAT_146b1a700 == 0) {
    FUN_141786440(&DAT_146b1a700,&PTR_FUN_1451fc500);
  }
  return DAT_146b1a700;
}



// FUNCTION 1428ed9d0 FUN_1428ed9d0 body=47 status=ok
// SIG undefined FUN_1428ed9d0(void)

longlong FUN_1428ed9d0(void)

{
  if (DAT_146b1a710 == 0) {
    FUN_141786440(&DAT_146b1a710,&PTR_FUN_1451fc740);
  }
  return DAT_146b1a710;
}



// FUNCTION 1428eda00 FUN_1428eda00 body=47 status=ok
// SIG undefined FUN_1428eda00(void)

longlong FUN_1428eda00(void)

{
  if (DAT_146b1a720 == 0) {
    FUN_141786440(&DAT_146b1a720,&PTR_FUN_1451fcd90);
  }
  return DAT_146b1a720;
}



// FUNCTION 1428eda30 FUN_1428eda30 body=47 status=ok
// SIG undefined FUN_1428eda30(void)

longlong FUN_1428eda30(void)

{
  if (DAT_146b1a730 == 0) {
    FUN_141786440(&DAT_146b1a730,&PTR_FUN_1451fd3b0);
  }
  return DAT_146b1a730;
}



// FUNCTION 1428eda60 FUN_1428eda60 body=47 status=ok
// SIG undefined FUN_1428eda60(void)

longlong FUN_1428eda60(void)

{
  if (DAT_146b1a750 == 0) {
    FUN_141786440(&DAT_146b1a750,&PTR_FUN_1451fda10);
  }
  return DAT_146b1a750;
}



// FUNCTION 1428eda90 FUN_1428eda90 body=47 status=ok
// SIG undefined FUN_1428eda90(void)

longlong FUN_1428eda90(void)

{
  if (DAT_146b1a800 == 0) {
    FUN_141786a30(&DAT_146b1a800,&PTR_Z_Construct_UPackage__Script_Engine_1465441e0);
  }
  return DAT_146b1a800;
}



// FUNCTION 1428edac0 FUN_1428edac0 body=47 status=ok
// SIG undefined FUN_1428edac0(void)

longlong FUN_1428edac0(void)

{
  if (DAT_146b1a7f8 == 0) {
    FUN_141786a30(&DAT_146b1a7f8,&PTR_Z_Construct_UPackage__Script_Engine_1465441a0);
  }
  return DAT_146b1a7f8;
}



// FUNCTION 1428edaf0 FUN_1428edaf0 body=47 status=ok
// SIG undefined FUN_1428edaf0(void)

longlong FUN_1428edaf0(void)

{
  if (DAT_146b1a808 == 0) {
    FUN_141786a30(&DAT_146b1a808,&PTR_Z_Construct_UPackage__Script_Engine_1465442e0);
  }
  return DAT_146b1a808;
}



// FUNCTION 1428edb20 FUN_1428edb20 body=47 status=ok
// SIG undefined FUN_1428edb20(void)

longlong FUN_1428edb20(void)

{
  if (DAT_146b1a810 == 0) {
    FUN_141786a30(&DAT_146b1a810,&PTR_Z_Construct_UPackage__Script_Engine_146544360);
  }
  return DAT_146b1a810;
}



// FUNCTION 1428edb50 FUN_1428edb50 body=47 status=ok
// SIG undefined FUN_1428edb50(void)

longlong FUN_1428edb50(void)

{
  if (DAT_146b1a7f0 == 0) {
    FUN_141786a30(&DAT_146b1a7f0,&PTR_Z_Construct_UPackage__Script_Engine_1465440a0);
  }
  return DAT_146b1a7f0;
}



// FUNCTION 1428edb80 FUN_1428edb80 body=47 status=ok
// SIG undefined FUN_1428edb80(void)

longlong FUN_1428edb80(void)

{
  if (DAT_146b1a7d0 == 0) {
    FUN_1417866a0(&DAT_146b1a7d0,&PTR_Z_Construct_UPackage__Script_Engine_1465482b0);
  }
  return DAT_146b1a7d0;
}



// FUNCTION 1428edbb0 FUN_1428edbb0 body=47 status=ok
// SIG undefined FUN_1428edbb0(void)

longlong FUN_1428edbb0(void)

{
  if (DAT_146b1a7d8 == 0) {
    FUN_1417866a0(&DAT_146b1a7d8,&PTR_Z_Construct_UPackage__Script_Engine_146548300);
  }
  return DAT_146b1a7d8;
}



// FUNCTION 1428edbe0 FUN_1428edbe0 body=47 status=ok
// SIG undefined FUN_1428edbe0(void)

longlong FUN_1428edbe0(void)

{
  if (DAT_146b1a768 == 0) {
    FUN_1417866a0(&DAT_146b1a768,&PTR_Z_Construct_UPackage__Script_Engine_146548260);
  }
  return DAT_146b1a768;
}



// FUNCTION 1428edc10 FUN_1428edc10 body=47 status=ok
// SIG undefined FUN_1428edc10(void)

longlong FUN_1428edc10(void)

{
  if (DAT_146b1a820 == 0) {
    FUN_1417866a0(&DAT_146b1a820,&PTR_Z_Construct_UPackage__Script_Engine_146548440);
  }
  return DAT_146b1a820;
}



// FUNCTION 1428edc40 FUN_1428edc40 body=47 status=ok
// SIG undefined FUN_1428edc40(void)

longlong FUN_1428edc40(void)

{
  if (DAT_146b1a818 == 0) {
    FUN_1417866a0(&DAT_146b1a818,&PTR_Z_Construct_UPackage__Script_Engine_1465483f0);
  }
  return DAT_146b1a818;
}



// FUNCTION 1428edc70 FUN_1428edc70 body=47 status=ok
// SIG undefined FUN_1428edc70(void)

longlong FUN_1428edc70(void)

{
  if (DAT_146b1a760 == 0) {
    FUN_1417866a0(&DAT_146b1a760,&PTR_Z_Construct_UPackage__Script_Engine_146548210);
  }
  return DAT_146b1a760;
}



// FUNCTION 1428edca0 FUN_1428edca0 body=47 status=ok
// SIG undefined FUN_1428edca0(void)

longlong FUN_1428edca0(void)

{
  if (DAT_146b1a7e0 == 0) {
    FUN_1417866a0(&DAT_146b1a7e0,&PTR_Z_Construct_UPackage__Script_Engine_146548350);
  }
  return DAT_146b1a7e0;
}



// FUNCTION 1428edcd0 FUN_1428edcd0 body=47 status=ok
// SIG undefined FUN_1428edcd0(void)

longlong FUN_1428edcd0(void)

{
  if (DAT_146b1a7e8 == 0) {
    FUN_1417866a0(&DAT_146b1a7e8,&PTR_Z_Construct_UPackage__Script_Engine_1465483a0);
  }
  return DAT_146b1a7e8;
}



// FUNCTION 1428edd00 FUN_1428edd00 body=47 status=ok
// SIG undefined FUN_1428edd00(void)

longlong FUN_1428edd00(void)

{
  if (DAT_146b1a840 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1a840,&PTR_Z_Construct_UPackage__Script_Engine_1465444a0);
  }
  return DAT_146b1a840;
}



// FUNCTION 1428edd30 FUN_1428edd30 body=47 status=ok
// SIG undefined FUN_1428edd30(void)

longlong FUN_1428edd30(void)

{
  if (DAT_146b1a638 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1a638,&PTR_Z_Construct_UPackage__Script_Engine_1465422b0);
  }
  return DAT_146b1a638;
}



// FUNCTION 1428edd60 FUN_1428edd60 body=47 status=ok
// SIG undefined FUN_1428edd60(void)

longlong FUN_1428edd60(void)

{
  if (DAT_146b1a7c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1a7c8,&PTR_Z_Construct_UPackage__Script_Engine_146543fe0);
  }
  return DAT_146b1a7c8;
}



// FUNCTION 1428edd90 FUN_1428edd90 body=47 status=ok
// SIG undefined FUN_1428edd90(void)

longlong FUN_1428edd90(void)

{
  if (DAT_146b1a6b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1a6b8,&PTR_Z_Construct_UPackage__Script_Engine_146542c00);
  }
  return DAT_146b1a6b8;
}



// FUNCTION 1428eddc0 FUN_1428eddc0 body=47 status=ok
// SIG undefined FUN_1428eddc0(void)

longlong FUN_1428eddc0(void)

{
  if (DAT_146b1a6a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1a6a8,&PTR_Z_Construct_UPackage__Script_Engine_146542a60);
  }
  return DAT_146b1a6a8;
}



// FUNCTION 1428eddf0 FUN_1428eddf0 body=47 status=ok
// SIG undefined FUN_1428eddf0(void)

longlong FUN_1428eddf0(void)

{
  if (DAT_146b1a648 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1a648,&PTR_Z_Construct_UPackage__Script_Engine_146542330);
  }
  return DAT_146b1a648;
}



// FUNCTION 1428ede20 FUN_1428ede20 body=47 status=ok
// SIG undefined FUN_1428ede20(void)

longlong FUN_1428ede20(void)

{
  if (DAT_146b1a7a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1a7a8,&PTR_Z_Construct_UPackage__Script_Engine_146543ea0);
  }
  return DAT_146b1a7a8;
}



// FUNCTION 1428ede50 FUN_1428ede50 body=47 status=ok
// SIG undefined FUN_1428ede50(void)

longlong FUN_1428ede50(void)

{
  if (DAT_146b1a778 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1a778,&PTR_Z_Construct_UPackage__Script_Engine_146543be0);
  }
  return DAT_146b1a778;
}



// FUNCTION 1428ede80 FUN_1428ede80 body=47 status=ok
// SIG undefined FUN_1428ede80(void)

longlong FUN_1428ede80(void)

{
  if (DAT_146b1a6c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1a6c8,&PTR_Z_Construct_UPackage__Script_Engine_146542cc0);
  }
  return DAT_146b1a6c8;
}



// FUNCTION 1428edeb0 FUN_1428edeb0 body=47 status=ok
// SIG undefined FUN_1428edeb0(void)

longlong FUN_1428edeb0(void)

{
  if (DAT_146b1a830 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1a830,&PTR_Z_Construct_UPackage__Script_Engine_1465443e0);
  }
  return DAT_146b1a830;
}



// FUNCTION 1428edee0 FUN_1428edee0 body=47 status=ok
// SIG undefined FUN_1428edee0(void)

longlong FUN_1428edee0(void)

{
  if (DAT_146b1a658 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1a658,&PTR_Z_Construct_UPackage__Script_Engine_1465423b0);
  }
  return DAT_146b1a658;
}



// FUNCTION 1428edf10 FUN_1428edf10 body=47 status=ok
// SIG undefined FUN_1428edf10(void)

longlong FUN_1428edf10(void)

{
  if (DAT_146b1a788 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1a788,&PTR_Z_Construct_UPackage__Script_Engine_146543d20);
  }
  return DAT_146b1a788;
}



// FUNCTION 1428edf40 FUN_1428edf40 body=47 status=ok
// SIG undefined FUN_1428edf40(void)

longlong FUN_1428edf40(void)

{
  if (DAT_146b1a798 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1a798,&PTR_Z_Construct_UPackage__Script_Engine_146543de0);
  }
  return DAT_146b1a798;
}



// FUNCTION 1428edf70 execCalculateDirection body=244 status=ok
// SIG undefined execCalculateDirection(void)

void UAnimInstance::execCalculateDirection(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_28;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar2 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar3 = FUN_14225acc0(param_1,puVar1,puVar2);
  *param_3 = uVar3;
  return;
}



// FUNCTION 1428ee090 FUN_1428ee090 body=128 status=ok
// SIG undefined FUN_1428ee090(void)

void FUN_1428ee090(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14225c850(param_1,local_res10);
  return;
}



// FUNCTION 1428ee110 FUN_1428ee110 body=128 status=ok
// SIG undefined FUN_1428ee110(void)

void FUN_1428ee110(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14225c890(param_1,local_res10);
  return;
}



// FUNCTION 1428ee190 FUN_1428ee190 body=143 status=ok
// SIG undefined FUN_1428ee190(void)

void FUN_1428ee190(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14225ccf0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ee220 FUN_1428ee220 body=128 status=ok
// SIG undefined FUN_1428ee220(void)

void FUN_1428ee220(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14225cda0(param_1,local_res10);
  return;
}



// FUNCTION 1428ee2a0 FUN_1428ee2a0 body=128 status=ok
// SIG undefined FUN_1428ee2a0(void)

void FUN_1428ee2a0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14225cde0(param_1,local_res10);
  return;
}



// FUNCTION 1428ee320 execGetActiveCurveNames body=227 status=ok
// SIG undefined execGetActiveCurveNames(void)

void UAnimInstance::execGetActiveCurveNames(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 local_res10 [8];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
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
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14225e100(param_1,local_res10[0],plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428ee410 FUN_1428ee410 body=163 status=ok
// SIG undefined FUN_1428ee410(void)

void FUN_1428ee410(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
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
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14225e3b0(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428ee4c0 FUN_1428ee4c0 body=206 status=ok
// SIG undefined FUN_1428ee4c0(void)

void FUN_1428ee4c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14225e730(param_1,local_res18[0],puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ee590 FUN_1428ee590 body=145 status=ok
// SIG undefined FUN_1428ee590(void)

void FUN_1428ee590(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14225e8a0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ee630 FUN_1428ee630 body=206 status=ok
// SIG undefined FUN_1428ee630(void)

void FUN_1428ee630(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14225eb00(param_1,local_res18[0],puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ee700 execGetCurrentActiveMontage body=44 status=ok
// SIG undefined execGetCurrentActiveMontage(void)

void UAnimInstance::execGetCurrentActiveMontage
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetCurrentActiveMontage();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ee730 execGetCurrentStateName body=135 status=ok
// SIG undefined execGetCurrentStateName(void)

void UAnimInstance::execGetCurrentStateName(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined1 local_res18 [16];
  
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
  puVar1 = (undefined8 *)GetCurrentStateName(param_1,local_res18,local_res10[0]);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 1428ee7c0 FUN_1428ee7c0 body=145 status=ok
// SIG undefined FUN_1428ee7c0(void)

void FUN_1428ee7c0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142268750(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ee860 FUN_1428ee860 body=143 status=ok
// SIG undefined FUN_1428ee860(void)

void FUN_1428ee860(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  
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
  uVar1 = FUN_142268b80(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ee8f0 FUN_1428ee8f0 body=143 status=ok
// SIG undefined FUN_1428ee8f0(void)

void FUN_1428ee8f0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  
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
  uVar1 = FUN_142268c80(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ee980 FUN_1428ee980 body=143 status=ok
// SIG undefined FUN_1428ee980(void)

void FUN_1428ee980(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  
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
  uVar1 = FUN_142268d80(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428eea10 FUN_1428eea10 body=143 status=ok
// SIG undefined FUN_1428eea10(void)

void FUN_1428eea10(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  
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
  uVar1 = FUN_142268eb0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428eeaa0 FUN_1428eeaa0 body=143 status=ok
// SIG undefined FUN_1428eeaa0(void)

void FUN_1428eeaa0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  
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
  uVar1 = FUN_142268fd0(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428eeb30 FUN_1428eeb30 body=143 status=ok
// SIG undefined FUN_1428eeb30(void)

void FUN_1428eeb30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  
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
  uVar1 = FUN_142269100(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428eebc0 FUN_1428eebc0 body=143 status=ok
// SIG undefined FUN_1428eebc0(void)

void FUN_1428eebc0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  
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
  uVar1 = FUN_142269220(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428eec50 FUN_1428eec50 body=189 status=ok
// SIG undefined FUN_1428eec50(void)

void FUN_1428eec50(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
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
  uVar1 = FUN_142269360(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428eed10 FUN_1428eed10 body=189 status=ok
// SIG undefined FUN_1428eed10(void)

void FUN_1428eed10(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
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
  uVar1 = FUN_142269520(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428eedd0 FUN_1428eedd0 body=189 status=ok
// SIG undefined FUN_1428eedd0(void)

void FUN_1428eedd0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
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
  uVar1 = FUN_142269100(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428eee90 FUN_1428eee90 body=189 status=ok
// SIG undefined FUN_1428eee90(void)

void FUN_1428eee90(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
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
  uVar1 = FUN_142269650(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428eef50 FUN_1428eef50 body=44 status=ok
// SIG undefined FUN_1428eef50(void)

void FUN_1428eef50(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142269f40();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428eef80 execGetOwningComponent body=44 status=ok
// SIG undefined execGetOwningComponent(void)

void UAnimInstance::execGetOwningComponent(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = USignificanceManager::GetWorld();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428eefb0 FUN_1428eefb0 body=189 status=ok
// SIG undefined FUN_1428eefb0(void)

void FUN_1428eefb0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
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
  uVar1 = FUN_1422737d0(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ef070 FUN_1428ef070 body=244 status=ok
// SIG undefined FUN_1428ef070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428ef070(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_64 [3];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_64[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_64);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_64);
  }
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_1422738e0(param_1,local_58,local_64[0],local_68);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 1428ef170 FUN_1428ef170 body=189 status=ok
// SIG undefined FUN_1428ef170(void)

void FUN_1428ef170(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
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
  uVar1 = FUN_142273b00(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ef230 FUN_1428ef230 body=189 status=ok
// SIG undefined FUN_1428ef230(void)

void FUN_1428ef230(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
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
  uVar1 = FUN_142273c00(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ef2f0 FUN_1428ef2f0 body=189 status=ok
// SIG undefined FUN_1428ef2f0(void)

void FUN_1428ef2f0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
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
  uVar1 = FUN_142273d40(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ef3b0 FUN_1428ef3b0 body=189 status=ok
// SIG undefined FUN_1428ef3b0(void)

void FUN_1428ef3b0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
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
  uVar1 = FUN_142273e80(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ef470 execGetSyncGroupPosition body=162 status=ok
// SIG undefined execGetSyncGroupPosition(void)

void UAnimInstance::execGetSyncGroupPosition
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined1 local_28 [32];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_142275160(param_1,local_28,local_res10);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  param_3[2] = puVar2[2];
  return;
}



// FUNCTION 1428ef520 execGetTimeToClosestMarker body=272 status=ok
// SIG undefined execGetTimeToClosestMarker(void)

void UAnimInstance::execGetTimeToClosestMarker
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1422753a0(param_1,local_res20,local_res18,puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ef630 FUN_1428ef630 body=190 status=ok
// SIG undefined FUN_1428ef630(void)

void FUN_1428ef630(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142275900(param_1,local_res18[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ef6f0 FUN_1428ef6f0 body=43 status=ok
// SIG undefined FUN_1428ef6f0(void)

void FUN_1428ef6f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142276ed0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ef720 FUN_1428ef720 body=43 status=ok
// SIG undefined FUN_1428ef720(void)

void FUN_1428ef720(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142276ee0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ef750 execIsPlayingSlotAnimation body=190 status=ok
// SIG undefined execIsPlayingSlotAnimation(void)

void UAnimInstance::execIsPlayingSlotAnimation
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = IsPlayingSlotAnimation(param_1,local_res18[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ef810 execIsSyncGroupBetweenMarkers body=321 status=ok
// SIG undefined execIsSyncGroupBetweenMarkers(void)

void UAnimInstance::execIsSyncGroupBetweenMarkers
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
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
  uVar1 = FUN_142277200(param_1,local_28[0],local_res20,local_res18,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428ef960 execMontage_GetBlendTime body=145 status=ok
// SIG undefined execMontage_GetBlendTime(void)

void UAnimInstance::execMontage_GetBlendTime
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = Montage_GetBlendTime(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428efa00 execMontage_GetCurrentSection body=136 status=ok
// SIG undefined execMontage_GetCurrentSection(void)

void UAnimInstance::execMontage_GetCurrentSection
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)Montage_GetCurrentSection(param_1,local_res18,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 1428efa90 execMontage_GetIsStopped body=143 status=ok
// SIG undefined execMontage_GetIsStopped(void)

void UAnimInstance::execMontage_GetIsStopped
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = Montage_GetIsStopped(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428efb20 execMontage_GetPlayRate body=145 status=ok
// SIG undefined execMontage_GetPlayRate(void)

void UAnimInstance::execMontage_GetPlayRate(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = Montage_GetPlayRate(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428efbc0 execGetBoneMass body=194 status=ok
// SIG undefined execGetBoneMass(void)

void USkeletalMeshComponent::execGetBoneMass
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int local_res10 [2];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
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
  uVar1 = FUN_142278130(param_1,local_res18[0],local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428efc90 execMontage_IsActive body=143 status=ok
// SIG undefined execMontage_IsActive(void)

void UAnimInstance::execMontage_IsActive(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = Montage_IsActive(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428efd20 FUN_1428efd20 body=192 status=ok
// SIG undefined FUN_1428efd20(void)

void FUN_1428efd20(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int local_res10 [2];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
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
  uVar1 = FUN_142278320(param_1,local_res18[0],local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428efde0 execMontage_JumpToSection body=191 status=ok
// SIG undefined execMontage_JumpToSection(void)

void UAnimInstance::execMontage_JumpToSection(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  Montage_JumpToSection(param_1,local_res10,local_res20);
  return;
}



// FUNCTION 1428efea0 execMontage_JumpToSectionsEnd body=191 status=ok
// SIG undefined execMontage_JumpToSectionsEnd(void)

void UAnimInstance::execMontage_JumpToSectionsEnd(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  Montage_JumpToSectionsEnd(param_1,local_res10,local_res20);
  return;
}



// FUNCTION 1428eff60 execMontage_Pause body=128 status=ok
// SIG undefined execMontage_Pause(void)

void UAnimInstance::execMontage_Pause(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  Montage_Pause(param_1,local_res10);
  return;
}



// FUNCTION 1428effe0 FUN_1428effe0 body=520 status=ok
// SIG undefined FUN_1428effe0(void)

void FUN_1428effe0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_40[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_44 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_44);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  bVar1 = local_res18[0] != 0;
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
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
  uVar2 = FUN_142278740(param_1,local_38[0],local_40[0],local_res10[0],local_44,bVar1,local_48,
                        local_res20[0]);
  *param_3 = uVar2;
  return;
}



// FUNCTION 1428f01f0 execMontage_Resume body=128 status=ok
// SIG undefined execMontage_Resume(void)

void UAnimInstance::execMontage_Resume(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  Montage_Resume(param_1,local_res10);
  return;
}



// FUNCTION 1428f0270 execMontage_SetNextSection body=254 status=ok
// SIG undefined execMontage_SetNextSection(void)

void UAnimInstance::execMontage_SetNextSection(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  Montage_SetNextSection(param_1,local_res20,local_res10,local_18[0]);
  return;
}



// FUNCTION 1428f0370 execMontage_SetPlayRate body=196 status=ok
// SIG undefined execMontage_SetPlayRate(void)

void UAnimInstance::execMontage_SetPlayRate(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
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
  Montage_SetPlayRate(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1428f0440 execMontage_SetPosition body=196 status=ok
// SIG undefined execMontage_SetPosition(void)

void UAnimInstance::execMontage_SetPosition(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
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
  Montage_SetPosition(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1428f0510 FUN_1428f0510 body=197 status=ok
// SIG undefined FUN_1428f0510(void)

void FUN_1428f0510(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142279320(param_1,local_res10[0],local_res20);
  return;
}



// FUNCTION 1428f05e0 execPlaySlotAnimation body=434 status=ok
// SIG undefined execPlaySlotAnimation(void)

void UAnimInstance::execPlaySlotAnimation(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38 [2];
  
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
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
  uVar1 = FUN_142279e20(param_1,local_38[0],local_40,local_48[0],local_res20[0],local_res18[0],
                        local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428f07a0 execPlaySlotAnimationAsDynamicMontage body=563 status=ok
// SIG undefined execPlaySlotAnimationAsDynamicMontage(void)

void UAnimInstance::execPlaySlotAnimationAsDynamicMontage
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  local_44 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_44);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
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
  uVar1 = FUN_14227a0e0(param_1,local_30,local_38,local_40[0],local_44,local_48,local_res20[0],
                        local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428f09e0 FUN_1428f09e0 body=118 status=ok
// SIG undefined FUN_1428f09e0(void)

void FUN_1428f09e0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  FUN_14227db20(param_1,local_res10[0]);
  return;
}



// FUNCTION 1428f0a60 execSetMorphTarget body=196 status=ok
// SIG undefined execSetMorphTarget(void)

void UAnimInstance::execSetMorphTarget(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
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
  SetMorphTarget(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1428f0b30 execSetRootMotionMode body=127 status=ok
// SIG undefined execSetRootMotionMode(void)

void UAnimInstance::execSetRootMotionMode(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  
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
  local_res20[0] = local_res10[0];
  SetRootMotionMode(param_1,local_res20);
  return;
}



// FUNCTION 1428f0bb0 FUN_1428f0bb0 body=195 status=ok
// SIG undefined FUN_1428f0bb0(void)

void FUN_1428f0bb0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_48 [8];
  
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x288))(param_1,plVar1);
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428f0c80 FUN_1428f0c80 body=197 status=ok
// SIG undefined FUN_1428f0c80(void)

void FUN_1428f0c80(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142281d40(param_1,local_res10[0],local_res20);
  return;
}



// FUNCTION 1428f0d50 execGetAnimationStateEnum body=48 status=ok
// SIG undefined execGetAnimationStateEnum(void)

void UAnimationSharingStateProcessor::execGetAnimationStateEnum
               (longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x278))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1428f0d80 FUN_1428f0d80 body=53 status=ok
// SIG undefined FUN_1428f0d80(void)

void FUN_1428f0d80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_145208aa0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f0dc0 FUN_1428f0dc0 body=53 status=ok
// SIG undefined FUN_1428f0dc0(void)

void FUN_1428f0dc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &PTR_FUN_145208bb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f0e00 FUN_1428f0e00 body=47 status=ok
// SIG undefined FUN_1428f0e00(void)

longlong FUN_1428f0e00(void)

{
  if (DAT_146b1ad70 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1ad70,&PTR_Z_Construct_UPackage__Script_Engine_14654abf0);
  }
  return DAT_146b1ad70;
}



// FUNCTION 1428f0e30 FUN_1428f0e30 body=53 status=ok
// SIG undefined FUN_1428f0e30(void)

void FUN_1428f0e30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_145208d20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f0e70 FUN_1428f0e70 body=53 status=ok
// SIG undefined FUN_1428f0e70(void)

void FUN_1428f0e70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_145207fd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f0eb0 FUN_1428f0eb0 body=53 status=ok
// SIG undefined FUN_1428f0eb0(void)

void FUN_1428f0eb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_145208e38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f0ef0 FUN_1428f0ef0 body=47 status=ok
// SIG undefined FUN_1428f0ef0(void)

longlong FUN_1428f0ef0(void)

{
  if (DAT_146b1ac98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1ac98,&PTR_Z_Construct_UPackage__Script_Engine_146549e10);
  }
  return DAT_146b1ac98;
}



// FUNCTION 1428f0f20 FUN_1428f0f20 body=53 status=ok
// SIG undefined FUN_1428f0f20(void)

void FUN_1428f0f20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_1452080e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f0f60 FUN_1428f0f60 body=53 status=ok
// SIG undefined FUN_1428f0f60(void)

void FUN_1428f0f60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_145208f50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f0fa0 FUN_1428f0fa0 body=47 status=ok
// SIG undefined FUN_1428f0fa0(void)

longlong FUN_1428f0fa0(void)

{
  if (DAT_146b1adc0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1adc0,&PTR_Z_Construct_UPackage__Script_Engine_14654b160);
  }
  return DAT_146b1adc0;
}



// FUNCTION 1428f0fd0 FUN_1428f0fd0 body=53 status=ok
// SIG undefined FUN_1428f0fd0(void)

void FUN_1428f0fd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145209130;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1010 FUN_1428f1010 body=53 status=ok
// SIG undefined FUN_1428f1010(void)

void FUN_1428f1010(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_145209248;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1050 FUN_1428f1050 body=53 status=ok
// SIG undefined FUN_1428f1050(void)

void FUN_1428f1050(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &PTR_FUN_145208200;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1090 FUN_1428f1090 body=53 status=ok
// SIG undefined FUN_1428f1090(void)

void FUN_1428f1090(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_145209360;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f10d0 FUN_1428f10d0 body=53 status=ok
// SIG undefined FUN_1428f10d0(void)

void FUN_1428f10d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &PTR_FUN_145208460;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1110 FUN_1428f1110 body=53 status=ok
// SIG undefined FUN_1428f1110(void)

void FUN_1428f1110(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145209478;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1150 FUN_1428f1150 body=53 status=ok
// SIG undefined FUN_1428f1150(void)

void FUN_1428f1150(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145209590;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1190 FUN_1428f1190 body=53 status=ok
// SIG undefined FUN_1428f1190(void)

void FUN_1428f1190(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_1452096a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f11d0 FUN_1428f11d0 body=53 status=ok
// SIG undefined FUN_1428f11d0(void)

void FUN_1428f11d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_1452097c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1210 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialInstanceConstant::GetPrivateStaticClass(void)

{
  if (DAT_146b1ac78 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"AnimMontage",&DAT_146b1ac78,FUN_140447710,0x1f0,0x10000000,0,
                  L"Engine",&LAB_1428f1cd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UTextureRenderTarget::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b1ac78;
}



// FUNCTION 1428f12c0 FUN_1428f12c0 body=47 status=ok
// SIG undefined FUN_1428f12c0(void)

longlong FUN_1428f12c0(void)

{
  if (DAT_146b1ae08 == 0) {
    FUN_141786440(&DAT_146b1ae08,&PTR_GetPrivateStaticClass_145204e10);
  }
  return DAT_146b1ae08;
}



// FUNCTION 1428f12f0 FUN_1428f12f0 body=47 status=ok
// SIG undefined FUN_1428f12f0(void)

longlong FUN_1428f12f0(void)

{
  if (DAT_146b1adf8 == 0) {
    FUN_141786a30(&DAT_146b1adf8,&PTR_FUN_14654b3d0);
  }
  return DAT_146b1adf8;
}



// FUNCTION 1428f1320 FUN_1428f1320 body=47 status=ok
// SIG undefined FUN_1428f1320(void)

longlong FUN_1428f1320(void)

{
  if (DAT_146b1ae00 == 0) {
    FUN_141786a30(&DAT_146b1ae00,&PTR_FUN_14654b510);
  }
  return DAT_146b1ae00;
}



// FUNCTION 1428f1350 FUN_1428f1350 body=53 status=ok
// SIG undefined FUN_1428f1350(void)

void FUN_1428f1350(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1452098d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f13a0 FUN_1428f13a0 body=162 status=ok
// SIG undefined FUN_1428f13a0(void)

longlong FUN_1428f13a0(void)

{
  if (DAT_146b1ae20 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"AnimNotify_PlayParticleEffect",&DAT_146b1ae20,FUN_140447710,
                  0xb0,0x10000000,0,L"Engine",&LAB_1428f1d10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotify::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b1ae20;
}



// FUNCTION 1428f1450 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FGunfireAnimInstanceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x6c0;
    *puVar1 = &PTR_FUN_145207560;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1428f1490 FUN_1428f1490 body=53 status=ok
// SIG undefined FUN_1428f1490(void)

void FUN_1428f1490(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_145207678;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f14d0 FUN_1428f14d0 body=47 status=ok
// SIG undefined FUN_1428f14d0(void)

longlong FUN_1428f14d0(void)

{
  if (DAT_146b1abe8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1abe8,&PTR_Z_Construct_UPackage__Script_Engine_146548ae0);
  }
  return DAT_146b1abe8;
}



// FUNCTION 1428f1510 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAnimNotify_PlaySound::StaticClass(void)

{
  if (DAT_146b1ae30 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"AnimNotify_PlaySound",&DAT_146b1ae30,FUN_140447710,0x58,
                  0x10000000,0,L"Engine",&LAB_1428f1d20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotify::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b1ae30;
}



// FUNCTION 1428f15c0 FUN_1428f15c0 body=53 status=ok
// SIG undefined FUN_1428f15c0(void)

void FUN_1428f15c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1452077c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1600 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UAnimMetaData::StaticClass(void)

{
  if (DAT_146b1abf8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"AnimMetaData",&DAT_146b1abf8,FUN_140447710,0x28,0x10000001,0,
                  L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1abf8;
}



// FUNCTION 1428f16b0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UAnimNotify_ResetClothingSimulation::StaticClass(void)

{
  if (DAT_146b1ae40 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"AnimNotify_ResetClothingSimulation",&DAT_146b1ae40,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",&LAB_1428f1d30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotify::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b1ae40;
}



// FUNCTION 1428f1780 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FLoadingWidgetSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x230;
    *puVar1 = &PTR_FUN_145207940;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f17c0 FUN_1428f17c0 body=53 status=ok
// SIG undefined FUN_1428f17c0(void)

void FUN_1428f17c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &PTR_FUN_145209a50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1800 FUN_1428f1800 body=53 status=ok
// SIG undefined FUN_1428f1800(void)

void FUN_1428f1800(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_145209b68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1840 FUN_1428f1840 body=53 status=ok
// SIG undefined FUN_1428f1840(void)

void FUN_1428f1840(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_145207a58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1428f1880 FUN_1428f1880 body=53 status=ok
// SIG undefined FUN_1428f1880(void)

void FUN_1428f1880(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_145207b70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f18c0 FUN_1428f18c0 body=53 status=ok
// SIG undefined FUN_1428f18c0(void)

void FUN_1428f18c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145207c88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1900 FUN_1428f1900 body=53 status=ok
// SIG undefined FUN_1428f1900(void)

void FUN_1428f1900(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145207da0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1940 FUN_1428f1940 body=53 status=ok
// SIG undefined FUN_1428f1940(void)

void FUN_1428f1940(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_145207eb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1990 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x188;
    *puVar1 = &PTR_FUN_145208668;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f19d0 FUN_1428f19d0 body=53 status=ok
// SIG undefined FUN_1428f19d0(void)

void FUN_1428f19d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145208780;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1a10 FUN_1428f1a10 body=53 status=ok
// SIG undefined FUN_1428f1a10(void)

void FUN_1428f1a10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &PTR_FUN_145208898;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1428f1a50 FUN_1428f1a50 body=630 status=ok
// SIG undefined FUN_1428f1a50(void)

int * FUN_1428f1a50(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  void *_Dst;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  bool local_res8;
  
  uVar9 = 0xffffffff;
  iVar8 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x28) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar11 * 0x28);
  FUN_1428f1d40(puVar1,param_3);
  puVar1[8] = 0xffffffff;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar11 != 1) {
    iVar7 = iVar8;
    if (iVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar5 != -1) {
        do {
          iVar7 = iVar5;
          if (*(uint *)(*param_1 + (longlong)iVar5 * 0x28) == *puVar1) break;
          iVar5 = *(int *)(*param_1 + 0x20 + (longlong)iVar5 * 0x28);
          iVar7 = iVar8;
        } while (iVar5 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)iVar7 * 0x28);
      TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar1,0x20);
      iVar8 = *param_2;
      bVar3 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar8;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + (longlong)iVar8 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar9 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + (longlong)iVar8 * 0x28) = uVar9;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1428f1ca2;
    }
  }
  cVar4 = TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar4 == '\0') {
    uVar10 = (int)param_1[9] - 1U & *puVar1;
    puVar1[9] = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar1[8] = *(uint *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_1428f1ca2:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1428f1d40 FUN_1428f1d40 body=393 status=ok
// SIG undefined FUN_1428f1d40(void)

/* WARNING: Removing unreachable block (ram,0x0001428f1d97) */
/* WARNING: Removing unreachable block (ram,0x0001428f1d9d) */
/* WARNING: Removing unreachable block (ram,0x0001428f1da5) */
/* WARNING: Removing unreachable block (ram,0x0001428f1db5) */
/* WARNING: Removing unreachable block (ram,0x0001428f1dc2) */
/* WARNING: Removing unreachable block (ram,0x0001428f1dc6) */
/* WARNING: Removing unreachable block (ram,0x0001428f1e8a) */

undefined4 * FUN_1428f1d40(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  longlong *local_38;
  int local_30;
  
  plVar1 = (longlong *)(param_1 + 2);
  *param_1 = *param_2;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 2;
  if ((longlong *)(param_2 + 2) != plVar1) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,0);
    plVar5 = *(longlong **)(param_2 + 2);
    plVar6 = plVar5 + (longlong)(int)param_2[4] * 2;
    for (; plVar5 != plVar6; plVar5 = plVar5 + 2) {
      if (((int)plVar5[1] != 0) && (plVar3 = (longlong *)*plVar5, plVar3 != (longlong *)0x0)) {
        local_38 = (longlong *)0x0;
        local_30 = 0;
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        if ((local_30 != 0) && (local_38 != (longlong *)0x0)) {
          (**(code **)(*local_38 + 0x20))(local_38,local_res8);
        }
        iVar2 = param_1[4];
        param_1[4] = iVar2 + 1;
        if ((int)param_1[5] < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar4 = 0;
        *puVar4 = local_38;
        *(int *)(puVar4 + 1) = local_30;
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1428f1ed0 FUN_1428f1ed0 body=232 status=ok
// SIG undefined FUN_1428f1ed0(void)

undefined8 * FUN_1428f1ed0(undefined8 *param_1)

{
  FUN_142286ad0();
  *(undefined1 *)(param_1 + 0xe) = 1;
  *param_1 = &PTR_FUN_145208318;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x12] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x41200000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  return param_1;
}



// FUNCTION 1428f20e0 FUN_1428f20e0 body=501 status=ok
// SIG undefined FUN_1428f20e0(void)

undefined4 * FUN_1428f20e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *_Src;
  undefined4 *_Dst;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)((longlong)param_2 + 0xd);
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  pvVar2 = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if (iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 0x30);
  }
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar1 = param_2[0x16];
  pvVar2 = *(void **)(param_2 + 0x14);
  param_1[0x16] = iVar1;
  if (iVar1 == 0) {
    param_1[0x17] = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x14,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x14),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::CopyToEmpty<FBlendSampleData,int>
            (param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),param_2[0x1a],0,0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = param_2[0x22];
  _Src = *(undefined4 **)(param_2 + 0x20);
  param_1[0x22] = iVar1;
  if (iVar1 == 0) {
    param_1[0x23] = 0;
  }
  else {
    TArray<int,TInlineAllocator<3,FDefaultAllocator>_>::ResizeForCopy(param_1 + 0x1c,iVar1,0);
    if (_Src == (undefined4 *)0x0) {
      _Src = param_2 + 0x1c;
    }
    _Dst = *(undefined4 **)(param_1 + 0x20);
    if (*(undefined4 **)(param_1 + 0x20) == (undefined4 *)0x0) {
      _Dst = param_1 + 0x1c;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x2c) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  *(undefined1 *)((longlong)param_1 + 0xd1) = *(undefined1 *)((longlong)param_2 + 0xd1);
  return param_1;
}



// FUNCTION 1428f22e0 FUN_1428f22e0 body=135 status=ok
// SIG undefined FUN_1428f22e0(void)

void FUN_1428f22e0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x60;
    do {
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        FMemory::Free();
      }
      FUN_14084c260(lVar1);
      if (*(longlong *)(lVar1 + -0x10) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + -0x50) != 0) {
        FMemory::Free();
      }
      lVar1 = lVar1 + 0xd8;
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



// FUNCTION 1428f2370 FUN_1428f2370 body=386 status=ok
// SIG undefined FUN_1428f2370(void)

void FUN_1428f2370(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<enum_AkGlobalCallbackLocation,TMulticastDelegate<void,AK::IAkGlobalPluginContext_*,enum_AkGlobalCallbackLocation>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x27,0);
  if (param_1[0x2b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<enum_AkGlobalCallbackLocation,TMulticastDelegate<void,AK::IAkGlobalPluginContext_*,enum_AkGlobalCallbackLocation>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1d,0);
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x14);
  lVar1 = param_1[0x13];
  if (iVar2 != 0) {
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = param_1[0x13];
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  iVar2 = *(int *)(param_1 + 0x12);
  lVar1 = param_1[0x11];
  if (iVar2 != 0) {
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = param_1[0x11];
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  FUN_1428f22e0(param_1 + 0xb);
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428f2500 operator= body=133 status=ok
// SIG undefined operator=(void)

void * TArray<int,TInlineAllocator<3,FDefaultAllocator>_>::operator=(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x10);
    iVar1 = *(int *)((longlong)param_2 + 0x18);
    *(int *)((longlong)param_1 + 0x18) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      ResizeForCopy(param_1,iVar1);
      if (_Src == (void *)0x0) {
        _Src = param_2;
      }
      _Dst = *(void **)((longlong)param_1 + 0x10);
      if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
        _Dst = param_1;
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 << 2);
    }
  }
  return param_1;
}



// FUNCTION 1428f2590 operator= body=128 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FAnimNotifyEventReference,FDefaultAllocator>::operator=
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    puVar1 = (undefined8 *)*param_2;
    iVar3 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar3);
    puVar2 = (undefined8 *)*param_1;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar1 = puVar1 + 2;
      puVar2 = puVar2 + 2;
    }
  }
  return param_1;
}



// FUNCTION 1428f2610 FUN_1428f2610 body=206 status=ok
// SIG undefined FUN_1428f2610(void)

longlong * FUN_1428f2610(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    lVar2 = *param_1;
    for (iVar4 = (int)param_1[1]; iVar4 != 0; iVar4 = iVar4 + -1) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2);
      lVar2 = lVar2 + 0x10;
    }
    iVar4 = (int)param_2[1];
    param_2 = (longlong *)*param_2;
    *(int *)(param_1 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar4);
      plVar3 = (longlong *)*param_1;
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *plVar3 = 0;
        *(undefined4 *)(plVar3 + 1) = 0;
        if (((param_2 != plVar3) && ((int)param_2[1] != 0)) &&
           (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x30))(plVar1,plVar3);
        }
        plVar3 = plVar3 + 2;
        param_2 = param_2 + 2;
      }
    }
  }
  return param_1;
}



// FUNCTION 1428f26e0 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<enum_AkGlobalCallbackLocation,TMulticastDelegate<void,AK::IAkGlobalPluginContext_*,enum_AkGlobalCallbackLocation>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 9);
      uVar8 = uVar7;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = param_1 + 7;
        }
        uVar5 = (longlong)(int)param_1[9] - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar5 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar9 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1428f281d;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_1428f281d:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        FUN_1428f1a50(param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x28,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1428f28c0 FUN_1428f28c0 body=1539 status=ok
// SIG undefined FUN_1428f28c0(void)

undefined8 * FUN_1428f28c0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  
  *param_1 = *param_2;
  FUN_1405bae40(param_1 + 1,param_2 + 1);
  FUN_1405bae40(param_1 + 3,param_2 + 3);
  puVar9 = param_1 + 8;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 7);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 7) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar6;
  if (puVar9 != param_2 + 8) {
    iVar8 = *(int *)(param_2 + 9);
    pvVar2 = (void *)param_2[8];
    *(int *)(param_1 + 9) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0x4c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar9,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar2,(longlong)iVar8 << 4);
    }
  }
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x51);
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x89) = *(undefined1 *)((longlong)param_2 + 0x89);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x12,param_2 + 0x12);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x14,param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x19,param_2 + 0x19);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x1b,param_2 + 0x1b);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x1d,param_2 + 0x1d);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x1f,param_2 + 0x1f);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  plVar1 = param_1 + 0x23;
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  if (plVar1 != param_2 + 0x23) {
    puVar9 = (undefined8 *)*plVar1;
    for (iVar8 = *(int *)(param_1 + 0x24); iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar9[0xc] = &PTR_FUN_14410b0e0;
      *puVar9 = &PTR_FUN_14410b0e0;
      puVar9 = puVar9 + 0x15;
    }
    iVar8 = *(int *)(param_2 + 0x24);
    lVar3 = param_2[0x23];
    *(int *)(param_1 + 0x24) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0x124) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x124) = 0;
    }
    else {
      TArray<FInAppPurchaseProductInfo,FDefaultAllocator>::ResizeForCopy(plVar1,iVar8);
      if (iVar8 != 0) {
        puVar9 = (undefined8 *)*plVar1 + 0xe;
        puVar10 = (undefined4 *)(lVar3 + 0x10);
        puVar11 = (undefined8 *)*plVar1;
        do {
          *puVar11 = &PTR_FUN_14410b0e0;
          puVar9[-0xd] = *(undefined8 *)(puVar10 + -2);
          *(undefined4 *)(puVar9 + -0xc) = *puVar10;
          *(undefined4 *)((longlong)puVar9 + -0x5c) = puVar10[1];
          *(undefined1 *)(puVar9 + -0xb) = *(undefined1 *)(puVar10 + 2);
          *(undefined1 *)((longlong)puVar9 + -0x57) = *(undefined1 *)((longlong)puVar10 + 9);
          *(undefined4 *)((longlong)puVar9 + -0x54) = puVar10[3];
          *(undefined4 *)(puVar9 + -10) = puVar10[4];
          *(undefined4 *)((longlong)puVar9 + -0x4c) = puVar10[5];
          puVar9[-9] = *(undefined8 *)(puVar10 + 6);
          *puVar11 = &PTR__scalar_deleting_destructor__145013ea0;
          *(undefined4 *)(puVar9 + -8) = puVar10[8];
          *(undefined4 *)((longlong)puVar9 + -0x3c) = puVar10[9];
          *(undefined4 *)(puVar9 + -7) = puVar10[10];
          *(undefined4 *)((longlong)puVar9 + -0x34) = puVar10[0xb];
          puVar9[-6] = *(undefined8 *)(puVar10 + 0xc);
          puVar9[-5] = *(undefined8 *)(puVar10 + 0xe);
          puVar9[-4] = *(undefined8 *)(puVar10 + 0x10);
          *(undefined4 *)(puVar9 + -3) = puVar10[0x12];
          puVar9[-2] = &PTR_FUN_14410b0e0;
          puVar9[-1] = *(undefined8 *)(puVar10 + 0x16);
          *(undefined4 *)puVar9 = puVar10[0x18];
          *(undefined4 *)((longlong)puVar9 + 4) = puVar10[0x19];
          *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar10 + 0x1a);
          *(undefined1 *)((longlong)puVar9 + 9) = *(undefined1 *)((longlong)puVar10 + 0x69);
          *(undefined4 *)((longlong)puVar9 + 0xc) = puVar10[0x1b];
          *(undefined4 *)(puVar9 + 2) = puVar10[0x1c];
          *(undefined4 *)((longlong)puVar9 + 0x14) = puVar10[0x1d];
          puVar9[3] = *(undefined8 *)(puVar10 + 0x1e);
          *(undefined1 *)(puVar9 + 4) = *(undefined1 *)(puVar10 + 0x20);
          *(undefined1 *)((longlong)puVar9 + 0x21) = *(undefined1 *)((longlong)puVar10 + 0x81);
          *(undefined4 *)((longlong)puVar9 + 0x24) = puVar10[0x21];
          *(undefined1 *)(puVar9 + 5) = *(undefined1 *)(puVar10 + 0x22);
          *(undefined4 *)((longlong)puVar9 + 0x2c) = puVar10[0x23];
          *(undefined1 *)(puVar9 + 6) = *(undefined1 *)(puVar10 + 0x24);
          *(undefined1 *)((longlong)puVar9 + 0x31) = *(undefined1 *)((longlong)puVar10 + 0x91);
          *(undefined4 *)((longlong)puVar9 + 0x34) = puVar10[0x25];
          iVar8 = iVar8 + -1;
          puVar9 = puVar9 + 0x15;
          puVar10 = puVar10 + 0x2a;
          puVar11 = puVar11 + 0x15;
        } while (iVar8 != 0);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
  uVar7 = param_2[0x27];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = uVar7;
  uVar7 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar7;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x154);
  uVar5 = *(undefined4 *)(param_2 + 0x2b);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  *(undefined4 *)((longlong)param_1 + 0x154) = uVar4;
  *(undefined4 *)(param_1 + 0x2b) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar6;
  param_1[0x2c] = param_2[0x2c];
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x2d);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)((longlong)param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)((longlong)param_2 + 0x17c);
  if (param_2 + 0x30 != param_1 + 0x30) {
    if (*(char *)((longlong)param_1 + 0x184) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x184) = 0;
    }
    if (*(char *)((longlong)param_2 + 0x184) != '\0') {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined1 *)((longlong)param_1 + 0x184) = 1;
    }
  }
  puVar9 = param_1 + 0x32;
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x31);
  if (puVar9 != param_2 + 0x32) {
    iVar8 = *(int *)(param_2 + 0x33);
    pvVar2 = (void *)param_2[0x32];
    *(int *)(param_1 + 0x33) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0x19c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar9,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar2,(longlong)iVar8 << 3);
    }
  }
  param_1[0x34] = param_2[0x34];
  *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(param_2 + 0x35);
  *(undefined1 *)((longlong)param_1 + 0x1ac) = *(undefined1 *)((longlong)param_2 + 0x1ac);
  *(undefined1 *)((longlong)param_1 + 0x1ad) = *(undefined1 *)((longlong)param_2 + 0x1ad);
  *(undefined1 *)((longlong)param_1 + 0x1ae) = *(undefined1 *)((longlong)param_2 + 0x1ae);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x36,param_2 + 0x36);
  uVar7 = param_2[0x39];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = uVar7;
  uVar7 = param_2[0x3b];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = uVar7;
  uVar7 = param_2[0x3d];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = uVar7;
  param_1[0x3e] = param_2[0x3e];
  uVar7 = param_2[0x40];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = uVar7;
  uVar7 = param_2[0x42];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = uVar7;
  uVar7 = param_2[0x44];
  param_1[0x43] = param_2[0x43];
  param_1[0x44] = uVar7;
  param_1[0x45] = param_2[0x45];
  return param_1;
}



// FUNCTION 1428f2ed0 FUN_1428f2ed0 body=106 status=ok
// SIG undefined FUN_1428f2ed0(void)

longlong FUN_1428f2ed0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FExposedValueHandler::operator=(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x4c) = uVar1;
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 1428f2f40 FUN_1428f2f40 body=670 status=ok
// SIG undefined FUN_1428f2f40(void)

longlong FUN_1428f2f40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  FExposedValueHandler::operator=(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  plVar1 = (longlong *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x39);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  if (plVar1 != (longlong *)(param_2 + 0x58)) {
    iVar8 = *(int *)(param_1 + 0x60);
    if (iVar8 != 0) {
      lVar7 = *plVar1 + 0x60;
      do {
        if (*(longlong *)(lVar7 + 0x20) != 0) {
          FMemory::Free();
        }
        FUN_14084c260(lVar7);
        if (*(longlong *)(lVar7 + -0x10) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar7 + -0x50) != 0) {
          FMemory::Free();
        }
        lVar7 = lVar7 + 0xd8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_2 + 0x60);
    lVar7 = *(longlong *)(param_2 + 0x58);
    *(int *)(param_1 + 0x60) = iVar8;
    if ((iVar8 == 0) && (*(int *)(param_1 + 100) == 0)) {
      *(undefined4 *)(param_1 + 100) = 0;
    }
    else {
      TArray<FTTLSurvivalMissionPartsInventoryData,FDefaultAllocator>::ResizeForCopy(plVar1,iVar8);
      lVar9 = *plVar1;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        FUN_1428f20e0(lVar9,lVar7);
        lVar9 = lVar9 + 0xd8;
        lVar7 = lVar7 + 0xd8;
      }
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x68);
  if (puVar2 != (undefined8 *)(param_2 + 0x68)) {
    iVar8 = *(int *)(param_2 + 0x70);
    pvVar3 = *(void **)(param_2 + 0x68);
    *(int *)(param_1 + 0x70) = iVar8;
    if ((iVar8 == 0) && (*(int *)(param_1 + 0x74) == 0)) {
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar2,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar3,(longlong)iVar8 * 0x18);
    }
  }
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x78,param_2 + 0x78);
  FUN_1428f2610(param_1 + 0x88,param_2 + 0x88);
  FUN_1428f2610(param_1 + 0x98,param_2 + 0x98);
  puVar2 = (undefined8 *)(param_1 + 0xb0);
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  if (puVar2 != (undefined8 *)(param_2 + 0xb0)) {
    iVar8 = *(int *)(param_2 + 0xb8);
    pvVar3 = *(void **)(param_2 + 0xb0);
    *(int *)(param_1 + 0xb8) = iVar8;
    if ((iVar8 == 0) && (*(int *)(param_1 + 0xbc) == 0)) {
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar3,(longlong)iVar8 << 3);
    }
  }
  uVar4 = *(undefined4 *)(param_2 + 0xc4);
  uVar5 = *(undefined4 *)(param_2 + 200);
  uVar6 = *(undefined4 *)(param_2 + 0xcc);
  puVar2 = (undefined8 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = uVar4;
  *(undefined4 *)(param_1 + 200) = uVar5;
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  if (puVar2 != (undefined8 *)(param_2 + 0xd0)) {
    iVar8 = *(int *)(param_2 + 0xd8);
    pvVar3 = *(void **)(param_2 + 0xd0);
    *(int *)(param_1 + 0xd8) = iVar8;
    if ((iVar8 == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2,iVar8);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,pvVar3,(longlong)iVar8 << 4);
    }
  }
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0xe8,param_2 + 0xe8);
  TSet<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x138,param_2 + 0x138);
  return param_1;
}



// FUNCTION 1428f31e0 operator= body=131 status=ok
// SIG undefined operator=(void)

undefined8 * FBlendedHeapCurve::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar1);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 3);
    }
  }
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  return param_1;
}



// FUNCTION 1428f3270 operator= body=147 status=ok
// SIG undefined operator=(void)

undefined8 * FExposedValueHandler::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = param_1 + 1;
  *param_1 = *param_2;
  if (puVar1 != param_2 + 1) {
    iVar2 = *(int *)(param_2 + 2);
    _Src = (void *)param_2[1];
    *(int *)(param_1 + 2) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x14) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x68);
    }
  }
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 1428f3310 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAnimNode_ApplyAdditive::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1428f3360 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRCPassDiaphragmDOFPostfilter::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1428f2370();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 1428f33a0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FAnimNode_SubInput::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1428f3410 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1428f35c0 Construct body=90 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FAnimNode_SubInput>::Construct
               (undefined8 param_1,undefined8 *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x68);
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  *param_2 = &PTR_ReadLocalVoiceData_1452089b0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined2 *)(param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x62) = 0;
  return;
}



// FUNCTION 1428f3840 Construct body=35 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FQueuedDrawDebugItem>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x68);
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  return;
}



// FUNCTION 1428f38b0 FUN_1428f38b0 body=74 status=ok
// SIG undefined FUN_1428f38b0(void)

undefined1 FUN_1428f38b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_14084cff0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x6c0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f3970 FUN_1428f3970 body=74 status=ok
// SIG undefined FUN_1428f3970(void)

undefined1 FUN_1428f3970(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1428f28c0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x230;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f39c0 FUN_1428f39c0 body=185 status=ok
// SIG undefined FUN_1428f39c0(void)

undefined8 FUN_1428f39c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar3 = (undefined8 *)(param_2 + 0x30);
    do {
      FExposedValueHandler::operator=(puVar3 + -5,param_3 + -0x28 + (longlong)puVar3);
      uVar2 = ((undefined8 *)(param_3 + (longlong)puVar3))[1];
      *puVar3 = *(undefined8 *)(param_3 + (longlong)puVar3);
      puVar3[1] = uVar2;
      puVar3[2] = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar3);
      puVar1 = (undefined8 *)(param_3 + 0x18 + (longlong)puVar3);
      uVar2 = puVar1[1];
      puVar3[3] = *puVar1;
      puVar3[4] = uVar2;
      puVar3[5] = *(undefined8 *)(param_3 + 0x28 + (longlong)puVar3);
      *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(param_3 + 0x30 + (longlong)puVar3);
      *(undefined8 *)((longlong)puVar3 + 0x34) = *(undefined8 *)(param_3 + 0x34 + (longlong)puVar3);
      *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)(param_3 + 0x3c + (longlong)puVar3);
      *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(param_3 + 0x40 + (longlong)puVar3);
      *(undefined1 *)((longlong)puVar3 + 0x44) = *(undefined1 *)(param_3 + 0x44 + (longlong)puVar3);
      *(undefined1 *)((longlong)puVar3 + 0x45) = *(undefined1 *)(param_3 + 0x45 + (longlong)puVar3);
      *(undefined1 *)((longlong)puVar3 + 0x46) = *(undefined1 *)(param_3 + 0x46 + (longlong)puVar3);
      puVar3 = puVar3 + 0xf;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f3a80 FUN_1428f3a80 body=161 status=ok
// SIG undefined FUN_1428f3a80(void)

undefined8 FUN_1428f3a80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined1 *)(param_2 + 0x30);
    do {
      FExposedValueHandler::operator=(puVar5 + -0x28,puVar5 + param_3 + -0x28);
      *puVar5 = puVar5[param_3];
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar5 + param_3 + 4);
      puVar5[8] = puVar5[param_3 + 8];
      *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(puVar5 + param_3 + 0xc);
      *(undefined4 *)(puVar5 + 0x10) = *(undefined4 *)(puVar5 + param_3 + 0x10);
      puVar1 = (undefined4 *)(puVar5 + param_3 + 0x14);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar5 + 0x14) = *puVar1;
      *(undefined4 *)(puVar5 + 0x18) = uVar2;
      *(undefined4 *)(puVar5 + 0x1c) = uVar3;
      *(undefined4 *)(puVar5 + 0x20) = uVar4;
      puVar5[0x24] = puVar5[param_3 + 0x24];
      *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)(puVar5 + param_3 + 0x28);
      *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(puVar5 + param_3 + 0x30);
      puVar5 = puVar5 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f3b30 Copy body=72 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimNode_Base>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = param_3 + 8;
    do {
      FExposedValueHandler::operator=(lVar1 + (param_2 - param_3),lVar1);
      lVar1 = lVar1 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f3b80 FUN_1428f3b80 body=109 status=ok
// SIG undefined FUN_1428f3b80(void)

undefined1 FUN_1428f3b80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined4 *)(param_2 + 0x30);
    do {
      FExposedValueHandler::operator=(puVar5 + -10,param_3 + -0x28 + (longlong)puVar5);
      puVar1 = (undefined4 *)(param_3 + (longlong)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar5);
      puVar5 = puVar5 + 0x12;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f3bf0 FUN_1428f3bf0 body=373 status=ok
// SIG undefined FUN_1428f3bf0(void)

undefined8 FUN_1428f3bf0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  
  if (param_4 != 0) {
    piVar10 = (int *)(param_3 + 0x98);
    do {
      FExposedValueHandler::operator=(param_2 + 8,piVar10 + -0x24);
      iVar8 = piVar10[-0x19];
      iVar4 = piVar10[-0x18];
      iVar5 = piVar10[-0x17];
      *(int *)(param_2 + 0x30) = piVar10[-0x1a];
      *(int *)(param_2 + 0x34) = iVar8;
      *(int *)(param_2 + 0x38) = iVar4;
      *(int *)(param_2 + 0x3c) = iVar5;
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(piVar10 + -0x16);
      *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(piVar10 + -0x14);
      *(int *)(param_2 + 0x50) = piVar10[-0x12];
      TArray<FTransform,FDefaultAllocator>::operator=(param_2 + 0x58,piVar10 + -0x10);
      *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(piVar10 + -0xc);
      FBlendedHeapCurve::operator=(param_2 + 0x70,piVar10 + -10);
      plVar2 = (longlong *)(param_2 + 0x90);
      if (plVar2 != (longlong *)(piVar10 + -2)) {
        iVar8 = *piVar10;
        lVar3 = *(longlong *)(piVar10 + -2);
        *(int *)(param_2 + 0x98) = iVar8;
        if ((iVar8 == 0) && (*(int *)(param_2 + 0x9c) == 0)) {
          *(undefined4 *)(param_2 + 0x9c) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar2,iVar8);
          lVar9 = *plVar2;
          if (iVar8 != 0) {
            puVar7 = (undefined4 *)(lVar3 + 0xc);
            do {
              FCachedTypefaceData::FCachedFontData::BinarySearchKey(lVar9,puVar7 + -3);
              *(undefined4 *)(lVar9 + 8) = puVar7[-1];
              *(undefined4 *)(lVar9 + 0xc) = *puVar7;
              *(undefined4 *)(lVar9 + 0x10) = puVar7[1];
              lVar9 = lVar9 + 0x18;
              iVar8 = iVar8 + -1;
              puVar7 = puVar7 + 6;
            } while (iVar8 != 0);
          }
        }
      }
      uVar6 = *(undefined8 *)(piVar10 + 4);
      *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(piVar10 + 2);
      *(undefined8 *)(param_2 + 0xa8) = uVar6;
      uVar6 = *(undefined8 *)(piVar10 + 8);
      *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(piVar10 + 6);
      *(undefined8 *)(param_2 + 0xb8) = uVar6;
      uVar6 = *(undefined8 *)(piVar10 + 0xc);
      *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(piVar10 + 10);
      *(undefined8 *)(param_2 + 200) = uVar6;
      piVar1 = piVar10 + 0xe;
      iVar8 = piVar10[0xf];
      iVar4 = piVar10[0x10];
      iVar5 = piVar10[0x11];
      piVar10 = piVar10 + 0x38;
      *(int *)(param_2 + 0xd0) = *piVar1;
      *(int *)(param_2 + 0xd4) = iVar8;
      *(int *)(param_2 + 0xd8) = iVar4;
      *(int *)(param_2 + 0xdc) = iVar5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xe0;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f3d70 FUN_1428f3d70 body=248 status=ok
// SIG undefined FUN_1428f3d70(void)

undefined8 FUN_1428f3d70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar2 = (undefined1 *)(param_2 + 0x70);
    do {
      FUN_1428f2ed0(puVar2 + -0x70,puVar2 + param_3 + -0x70);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + param_3 + -8);
      *puVar2 = puVar2[param_3];
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar2 + param_3 + 4);
      *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(puVar2 + param_3 + 8);
      uVar1 = *(undefined8 *)((longlong)(puVar2 + param_3 + 0xc) + 8);
      *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(puVar2 + param_3 + 0xc);
      *(undefined8 *)(puVar2 + 0x14) = uVar1;
      uVar1 = *(undefined8 *)((longlong)(puVar2 + param_3 + 0x1c) + 8);
      *(undefined8 *)(puVar2 + 0x1c) = *(undefined8 *)(puVar2 + param_3 + 0x1c);
      *(undefined8 *)(puVar2 + 0x24) = uVar1;
      uVar1 = *(undefined8 *)((longlong)(puVar2 + param_3 + 0x2c) + 8);
      *(undefined8 *)(puVar2 + 0x2c) = *(undefined8 *)(puVar2 + param_3 + 0x2c);
      *(undefined8 *)(puVar2 + 0x34) = uVar1;
      *(undefined8 *)(puVar2 + 0x3c) = *(undefined8 *)(puVar2 + param_3 + 0x3c);
      *(undefined4 *)(puVar2 + 0x44) = *(undefined4 *)(puVar2 + param_3 + 0x44);
      *(undefined4 *)(puVar2 + 0x48) = *(undefined4 *)(puVar2 + param_3 + 0x48);
      puVar2[0x4c] = puVar2[param_3 + 0x4c];
      *(undefined4 *)(puVar2 + 0x50) = *(undefined4 *)(puVar2 + param_3 + 0x50);
      *(undefined4 *)(puVar2 + 0x54) = *(undefined4 *)(puVar2 + param_3 + 0x54);
      uVar1 = *(undefined8 *)((longlong)(puVar2 + param_3 + 0x58) + 8);
      *(undefined8 *)(puVar2 + 0x58) = *(undefined8 *)(puVar2 + param_3 + 0x58);
      *(undefined8 *)(puVar2 + 0x60) = uVar1;
      *(undefined8 *)(puVar2 + 0x68) = *(undefined8 *)(puVar2 + param_3 + 0x68);
      puVar2[0x70] = puVar2[param_3 + 0x70];
      puVar2[0x71] = puVar2[param_3 + 0x71];
      *(undefined8 *)(puVar2 + 0x74) = *(undefined8 *)(puVar2 + param_3 + 0x74);
      puVar2 = puVar2 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f3e70 FUN_1428f3e70 body=74 status=ok
// SIG undefined FUN_1428f3e70(void)

undefined1 FUN_1428f3e70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1428f2f40(param_2 + param_3,param_3);
      param_3 = param_3 + 0x188;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f3ec0 Copy body=113 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAnimNode_SubInput>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 8;
    do {
      FExposedValueHandler::operator=(param_2,param_3 + param_2);
      TArray<FTransform,FDefaultAllocator>::operator=(param_2 + 0x28,param_3 + 0x28 + param_2);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38 + param_2);
      FBlendedHeapCurve::operator=(param_2 + 0x40,param_3 + 0x40 + param_2);
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f3f40 FUN_1428f3f40 body=230 status=ok
// SIG undefined FUN_1428f3f40(void)

undefined8 FUN_1428f3f40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined4 *)(param_2 + 0x30);
    do {
      FExposedValueHandler::operator=(puVar5 + -10,param_3 + -0x28 + (longlong)puVar5);
      puVar1 = (undefined4 *)(param_3 + (longlong)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar5);
      *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(param_3 + 0x18 + (longlong)puVar5);
      *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(param_3 + 0x20 + (longlong)puVar5);
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=
                (puVar5 + 10,param_3 + 0x28 + (longlong)puVar5);
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=
                (puVar5 + 0xe,param_3 + 0x38 + (longlong)puVar5);
      TArray<FName,FDefaultAllocator>::operator=(puVar5 + 0x12,param_3 + 0x48 + (longlong)puVar5);
      TArray<FName,FDefaultAllocator>::operator=(puVar5 + 0x16,param_3 + 0x58 + (longlong)puVar5);
      TArray<FTransform,FDefaultAllocator>::operator=
                (puVar5 + 0x1a,param_3 + 0x68 + (longlong)puVar5);
      FBlendedHeapCurve::operator=(puVar5 + 0x1e,param_3 + 0x78 + (longlong)puVar5);
      puVar5 = puVar5 + 0x32;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f4030 Copy body=143 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAnimNode_TransitionPoseEvaluator>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 8;
    do {
      FExposedValueHandler::operator=(param_2,param_3 + param_2);
      *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x28 + param_2);
      *(undefined1 *)(param_2 + 0x29) = *(undefined1 *)(param_3 + 0x29 + param_2);
      *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c + param_2);
      TArray<FTransform,FDefaultAllocator>::operator=(param_2 + 0x30,param_3 + 0x30 + param_2);
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40 + param_2);
      FBlendedHeapCurve::operator=(param_2 + 0x48,param_3 + 0x48 + param_2);
      *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_3 + 0x68 + param_2);
      param_2 = param_2 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f40c0 FUN_1428f40c0 body=121 status=ok
// SIG undefined FUN_1428f40c0(void)

undefined8 FUN_1428f40c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x30);
    do {
      FExposedValueHandler::operator=(puVar1 + -0x28,puVar1 + param_3 + -0x28);
      *puVar1 = puVar1[param_3];
      TBaseDelegate<FSlateBrush_const_*>::operator=(puVar1 + 8,puVar1 + param_3 + 8);
      puVar1[0x18] = puVar1[param_3 + 0x18];
      puVar1 = puVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f4140 FUN_1428f4140 body=118 status=ok
// SIG undefined FUN_1428f4140(void)

undefined8 FUN_1428f4140(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined4 *)(param_2 + 0x30);
    do {
      FExposedValueHandler::operator=(puVar5 + -10,param_3 + -0x28 + (longlong)puVar5);
      puVar1 = (undefined4 *)(param_3 + (longlong)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar5);
      *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(param_3 + 0x18 + (longlong)puVar5);
      puVar5 = puVar5 + 0x14;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f41c0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimNotifyArray>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      TArray<FAnimNotifyEventReference,FDefaultAllocator>::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f4210 FUN_1428f4210 body=123 status=ok
// SIG undefined FUN_1428f4210(void)

undefined8 FUN_1428f4210(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10 + param_2);
      *(undefined8 *)(param_2 + -0xc) = *(undefined8 *)(param_3 + -0xc + param_2);
      TArray<FAnimNotifyEventReference,FDefaultAllocator>::operator=(param_2,param_3 + param_2);
      FUN_14084ca50(param_2 + 0x10,param_3 + 0x10 + param_2);
      TSet<TTuple<FFlareResourceDescription_*,int>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,int,0>,FDefaultSetAllocator>
      ::operator=(param_2 + 0x60,param_3 + 0x60 + param_2);
      param_2 = param_2 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f4290 FUN_1428f4290 body=492 status=ok
// SIG undefined FUN_1428f4290(void)

undefined8 FUN_1428f4290(undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  void *_Src;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  
  if (param_4 != 0) {
    piVar9 = (int *)(param_3 + 0x58);
    do {
      *param_2 = piVar9[-0x16];
      param_2[1] = piVar9[-0x15];
      param_2[2] = piVar9[-0x14];
      *(char *)(param_2 + 3) = (char)piVar9[-0x13];
      *(undefined1 *)((longlong)param_2 + 0xd) = *(undefined1 *)((longlong)piVar9 + -0x4b);
      TArray<FTransform,FDefaultAllocator>::operator=(param_2 + 4,piVar9 + -0x12);
      iVar8 = piVar9[-0xd];
      iVar4 = piVar9[-0xc];
      iVar5 = piVar9[-0xb];
      piVar1 = param_2 + 0x14;
      param_2[8] = piVar9[-0xe];
      param_2[9] = iVar8;
      param_2[10] = iVar4;
      param_2[0xb] = iVar5;
      *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(piVar9 + -10);
      param_2[0xe] = piVar9[-8];
      param_2[0xf] = piVar9[-7];
      param_2[0x10] = piVar9[-6];
      param_2[0x11] = piVar9[-5];
      param_2[0x12] = piVar9[-4];
      *(char *)(param_2 + 0x13) = (char)piVar9[-3];
      if (piVar1 != piVar9 + -2) {
        iVar8 = *piVar9;
        _Src = *(void **)(piVar9 + -2);
        param_2[0x16] = iVar8;
        if ((iVar8 == 0) && (param_2[0x17] == 0)) {
          param_2[0x17] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar8);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar8 << 3);
        }
      }
      plVar2 = (longlong *)(param_2 + 0x18);
      if (plVar2 != (longlong *)(piVar9 + 2)) {
        iVar8 = param_2[0x1a];
        if (iVar8 != 0) {
          plVar7 = (longlong *)(*plVar2 + 0x30);
          do {
            if (*plVar7 != 0) {
              FMemory::Free();
            }
            plVar7 = plVar7 + 8;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::CopyToEmpty<FBlendSampleData,int>
                  (plVar2,*(longlong *)(piVar9 + 2),piVar9[4],param_2[0x1b],0);
      }
      TArray<int,TInlineAllocator<3,FDefaultAllocator>_>::operator=(param_2 + 0x1c,piVar9 + 6);
      *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(piVar9 + 0xe);
      uVar6 = *(undefined8 *)(piVar9 + 0x12);
      *(undefined8 *)(param_2 + 0x26) = *(undefined8 *)(piVar9 + 0x10);
      *(undefined8 *)(param_2 + 0x28) = uVar6;
      uVar6 = *(undefined8 *)(piVar9 + 0x16);
      *(undefined8 *)(param_2 + 0x2a) = *(undefined8 *)(piVar9 + 0x14);
      *(undefined8 *)(param_2 + 0x2c) = uVar6;
      iVar8 = piVar9[0x19];
      iVar4 = piVar9[0x1a];
      iVar5 = piVar9[0x1b];
      param_2[0x2e] = piVar9[0x18];
      param_2[0x2f] = iVar8;
      param_2[0x30] = iVar4;
      param_2[0x31] = iVar5;
      *(undefined8 *)(param_2 + 0x32) = *(undefined8 *)(piVar9 + 0x1c);
      *(char *)(param_2 + 0x34) = (char)piVar9[0x1e];
      puVar3 = (undefined1 *)((longlong)piVar9 + 0x79);
      piVar9 = piVar9 + 0x36;
      *(undefined1 *)((longlong)param_2 + 0xd1) = *puVar3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x36;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f4480 Copy body=88 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAnimationPotentialTransition>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10 + param_2);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8 + param_2);
      TArray<int,TInlineAllocator<3,FDefaultAllocator>_>::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1428f45a0 Copy body=270 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FCompositeSection>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      *(undefined8 *)(param_2 + 8) = *puVar3;
      puVar1 = (undefined8 *)(param_2 + 0x48);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar3 + 1);
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)((longlong)puVar3 + 0xc);
      *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(puVar3 + 2);
      *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((longlong)puVar3 + 0x11);
      *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)((longlong)puVar3 + 0x14);
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(puVar3 + 3);
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)((longlong)puVar3 + 0x1c);
      *(undefined8 *)(param_2 + 0x28) = puVar3[4];
      *(undefined8 *)(param_2 + 0x30) = puVar3[5];
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(puVar3 + 6);
      *(undefined8 *)(param_2 + 0x40) = puVar3[7];
      if (puVar1 != puVar3 + 8) {
        iVar2 = *(int *)(puVar3 + 9);
        _Src = (void *)puVar3[8];
        *(int *)(param_2 + 0x50) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x54) == 0)) {
          *(undefined4 *)(param_2 + 0x54) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      puVar3 = puVar3 + 0xb;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x58;
    } while (param_4 != 0);
  }
  return 1;
}


