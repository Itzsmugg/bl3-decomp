// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14141b820 FUN_14141b820 body=72 status=ok
// SIG undefined FUN_14141b820(void)

void FUN_14141b820(undefined8 param_1,undefined4 *param_2)

{
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *param_2 = 0;
  param_2[1] = 1;
  FText::FText(param_2 + 2);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  return;
}



// FUNCTION 14141b870 Construct body=56 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FSBZButtonControlsReference>::Construct
               (undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FWeakObjectPtr::operator=(param_2 + 2,0);
  param_2[3] = 0;
  return;
}



// FUNCTION 14141b8b0 FUN_14141b8b0 body=33 status=ok
// SIG undefined FUN_14141b8b0(void)

void FUN_14141b8b0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1409c2890(param_2);
  *param_2 = &PTR_FUN_1441b3a80;
  return;
}



// FUNCTION 14141b8e0 FUN_14141b8e0 body=38 status=ok
// SIG undefined FUN_14141b8e0(void)

void FUN_14141b8e0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x128);
  FUN_1409c2810(param_2);
  return;
}



// FUNCTION 14141b930 FUN_14141b930 body=93 status=ok
// SIG undefined FUN_14141b930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14141b930(undefined8 param_1,undefined8 *param_2)

{
  FUN_1409c2890();
  *param_2 = &PTR_FUN_1441b3ac8;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 0x22) = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_2 + 0x114) = 0;
  *(undefined4 *)(param_2 + 0x23) = 0x3f800000;
  return;
}



// FUNCTION 14141b990 FUN_14141b990 body=328 status=ok
// SIG undefined FUN_14141b990(void)

undefined8 FUN_14141b990(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar8 = (int)param_2[1];
      if (iVar8 != 0) {
        plVar9 = (longlong *)(*param_2 + 0x10);
        do {
          plVar4 = (longlong *)*plVar9;
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
          plVar9 = plVar9 + 3;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iVar8 = (int)param_3[1];
      lVar5 = *param_3;
      *(int *)(param_2 + 1) = iVar8;
      if ((iVar8 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_2,iVar8);
        puVar7 = (undefined8 *)*param_2;
        if (iVar8 != 0) {
          puVar6 = (undefined8 *)(lVar5 + 8);
          do {
            *puVar7 = puVar6[-1];
            puVar7[1] = *puVar6;
            lVar5 = puVar6[1];
            puVar7[2] = lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
            }
            puVar7 = puVar7 + 3;
            puVar6 = puVar6 + 3;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
    }
    plVar9 = param_3 + 2;
    param_3 = param_3 + 3;
    *(char *)(param_2 + 2) = (char)*plVar9;
    param_2 = param_2 + 3;
  }
  return 1;
}



// FUNCTION 14141bae0 Copy body=151 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FResearchTreeMessageData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x18);
    do {
      FString::operator=(puVar1 + -6,param_3 + -0x18 + (longlong)puVar1);
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar1);
      FSoftObjectPath::operator=(puVar1 + 2,&local_28);
      puVar1 = puVar1 + 0xe;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14141bb80 FUN_14141bb80 body=102 status=ok
// SIG undefined FUN_14141bb80(void)

undefined8 FUN_14141bb80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8 + param_2);
      *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_3 + -4 + param_2);
      FText::operator=(param_2,param_3 + param_2);
      FString::operator=(param_2 + 0x18,param_3 + 0x18 + param_2);
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14141bbf0 FUN_14141bbf0 body=201 status=ok
// SIG undefined FUN_14141bbf0(void)

undefined8 FUN_14141bbf0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x18);
    do {
      if (param_2 != puVar3 + -3) {
        iVar1 = *(int *)(puVar3 + -2);
        _Src = (void *)puVar3[-3];
        *(int *)(param_2 + 1) = iVar1;
        if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1);
          _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
        }
      }
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar3 + -1);
      *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)puVar3 + -4);
      uVar2 = *puVar3;
      puVar3 = puVar3 + 4;
      param_2[3] = uVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 4;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14141bcc0 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FRootMotionSourceGroup>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_14141af70(param_2 + param_3,param_3);
      param_3 = param_3 + 0xf8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14141bd10 FUN_14141bd10 body=174 status=ok
// SIG undefined FUN_14141bd10(void)

undefined1 FUN_14141bd10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined8 *)(param_2 + 0xf0);
    do {
      FUN_1406da240(puVar7 + -0x1e,param_3 + -0xf0 + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_3 + -0x38 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[-7] = *puVar1;
      puVar7[-6] = uVar6;
      puVar1 = (undefined8 *)(param_3 + -0x28 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[-5] = *puVar1;
      puVar7[-4] = uVar6;
      puVar1 = (undefined8 *)(param_3 + -0x18 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[-3] = *puVar1;
      puVar7[-2] = uVar6;
      puVar7[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar7);
      uVar6 = ((undefined8 *)(param_3 + (longlong)puVar7))[1];
      *puVar7 = *(undefined8 *)(param_3 + (longlong)puVar7);
      puVar7[1] = uVar6;
      puVar1 = (undefined8 *)(param_3 + 0x10 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[2] = *puVar1;
      puVar7[3] = uVar6;
      puVar2 = (undefined4 *)(param_3 + 0x20 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(puVar7 + 4) = *puVar2;
      *(undefined4 *)((longlong)puVar7 + 0x24) = uVar3;
      *(undefined4 *)(puVar7 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar5;
      puVar7[6] = *(undefined8 *)(param_3 + 0x30 + (longlong)puVar7);
      puVar7 = puVar7 + 0x25;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14141bdc0 FUN_14141bdc0 body=253 status=ok
// SIG undefined FUN_14141bdc0(void)

undefined8 FUN_14141bdc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x10);
    do {
      puVar1[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FUN_1406da240(puVar1 + 2,param_3 + 0x10 + (longlong)puVar1);
      *(byte *)(puVar1 + 0x19) =
           *(byte *)(puVar1 + 0x19) ^
           (*(byte *)(param_3 + 200 + (longlong)puVar1) ^ *(byte *)(puVar1 + 0x19)) & 1;
      *(byte *)(puVar1 + 0x19) =
           (*(byte *)(puVar1 + 0x19) ^ *(byte *)(param_3 + 200 + (longlong)puVar1)) & 2 ^
           *(byte *)(puVar1 + 0x19);
      *(undefined4 *)((longlong)puVar1 + 0xcc) = *(undefined4 *)(param_3 + 0xcc + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 0x1a) = *(undefined4 *)(param_3 + 0xd0 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0xd4) = *(undefined4 *)(param_3 + 0xd4 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 0x1b) = *(undefined4 *)(param_3 + 0xd8 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0xdc) = *(undefined4 *)(param_3 + 0xdc + (longlong)puVar1);
      puVar1[0x1c] = *(undefined8 *)(param_3 + 0xe0 + (longlong)puVar1);
      puVar1 = puVar1 + 0x1f;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14141bec0 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FNiagaraVMExecutableData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_14141b030(param_2 + param_3,param_3);
      param_3 = param_3 + 0x168;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14141bf10 FUN_14141bf10 body=136 status=ok
// SIG undefined FUN_14141bf10(void)

undefined8 FUN_14141bf10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0xf8);
    do {
      FUN_14141af70(puVar1 + -0x1f,param_3 + -0xf8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      puVar1[2] = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_3 + 0x18 + (longlong)puVar1);
      *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_3 + 0x1c + (longlong)puVar1);
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_3 + 0x20 + (longlong)puVar1);
      puVar1 = puVar1 + 0x24;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14141bfa0 FUN_14141bfa0 body=66 status=ok
// SIG undefined FUN_14141bfa0(void)

void FUN_14141bfa0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146891488);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 14141bff0 FUN_14141bff0 body=66 status=ok
// SIG undefined FUN_14141bff0(void)

void FUN_14141bff0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146891490);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 14141c050 FUN_14141c050 body=47 status=ok
// SIG undefined FUN_14141c050(void)

void FUN_14141c050(undefined8 param_1,longlong *param_2)

{
  if (param_2[5] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14141c080 FUN_14141c080 body=94 status=ok
// SIG undefined FUN_14141c080(void)

void FUN_14141c080(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_2 + 0x10);
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



// FUNCTION 14141c100 FUN_14141c100 body=57 status=ok
// SIG undefined FUN_14141c100(void)

void FUN_14141c100(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146891498);
                    /* WARNING: Could not recover jumptable at 0x00014141c136. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 14141c140 FUN_14141c140 body=55 status=ok
// SIG undefined FUN_14141c140(void)

void FUN_14141c140(void)

{
  undefined8 uVar1;
  
  if (DAT_146891060 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146891060 = GetStaticEnum(FUN_14141d310,uVar1,L"EGRMLNHardpointType");
  }
  return;
}



// FUNCTION 14141c180 FUN_14141c180 body=55 status=ok
// SIG undefined FUN_14141c180(void)

void FUN_14141c180(void)

{
  undefined8 uVar1;
  
  if (DAT_146891050 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146891050 = GetStaticEnum(FUN_14141d340,uVar1,L"EOakElementalDeathEffects");
  }
  return;
}



// FUNCTION 14141c1c0 FUN_14141c1c0 body=55 status=ok
// SIG undefined FUN_14141c1c0(void)

void FUN_14141c1c0(void)

{
  undefined8 uVar1;
  
  if (DAT_146891058 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146891058 = GetStaticEnum(FUN_14141d370,uVar1,L"EOakElementalType");
  }
  return;
}



// FUNCTION 14141c200 FUN_14141c200 body=55 status=ok
// SIG undefined FUN_14141c200(void)

void FUN_14141c200(void)

{
  undefined8 uVar1;
  
  if (DAT_146891048 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146891048 = GetStaticEnum(FUN_14141d3a0,uVar1,L"EUIDialogCallout");
  }
  return;
}



// FUNCTION 14141c240 FUN_14141c240 body=70 status=ok
// SIG undefined FUN_14141c240(void)

undefined8 FUN_14141c240(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = 0;
  uVar2 = FUN_14178ac60(param_1,DAT_1468914a0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return local_res8;
}



// FUNCTION 14141c290 FUN_14141c290 body=6 status=ok
// SIG undefined FUN_14141c290(void)

undefined8 FUN_14141c290(void)

{
  return 0xe7f4c6a0;
}



// FUNCTION 14141c2a0 FUN_14141c2a0 body=6 status=ok
// SIG undefined FUN_14141c2a0(void)

undefined8 FUN_14141c2a0(void)

{
  return 0x5ff9b692;
}



// FUNCTION 14141c2b0 FUN_14141c2b0 body=6 status=ok
// SIG undefined FUN_14141c2b0(void)

undefined8 FUN_14141c2b0(void)

{
  return 0x6149e85d;
}



// FUNCTION 14141c2c0 FUN_14141c2c0 body=6 status=ok
// SIG undefined FUN_14141c2c0(void)

undefined8 FUN_14141c2c0(void)

{
  return 0x7cd9c5cf;
}



// FUNCTION 14141c2d0 FUN_14141c2d0 body=6 status=ok
// SIG undefined FUN_14141c2d0(void)

undefined8 FUN_14141c2d0(void)

{
  return 0x2e9606cd;
}



// FUNCTION 14141c2e0 FUN_14141c2e0 body=6 status=ok
// SIG undefined FUN_14141c2e0(void)

undefined8 FUN_14141c2e0(void)

{
  return 0xe58a250c;
}



// FUNCTION 14141c2f0 FUN_14141c2f0 body=6 status=ok
// SIG undefined FUN_14141c2f0(void)

undefined8 FUN_14141c2f0(void)

{
  return 0x398f995;
}



// FUNCTION 14141c300 FUN_14141c300 body=6 status=ok
// SIG undefined FUN_14141c300(void)

undefined8 FUN_14141c300(void)

{
  return 0xa9830357;
}



// FUNCTION 14141c310 FUN_14141c310 body=6 status=ok
// SIG undefined FUN_14141c310(void)

undefined8 FUN_14141c310(void)

{
  return 0x629f48db;
}



// FUNCTION 14141c320 FUN_14141c320 body=6 status=ok
// SIG undefined FUN_14141c320(void)

undefined8 FUN_14141c320(void)

{
  return 0xc0a69317;
}



// FUNCTION 14141c330 FUN_14141c330 body=6 status=ok
// SIG undefined FUN_14141c330(void)

undefined8 FUN_14141c330(void)

{
  return 0xc05160db;
}



// FUNCTION 14141c340 FUN_14141c340 body=6 status=ok
// SIG undefined FUN_14141c340(void)

undefined8 FUN_14141c340(void)

{
  return 0x6e202866;
}



// FUNCTION 14141c350 FUN_14141c350 body=6 status=ok
// SIG undefined FUN_14141c350(void)

undefined8 FUN_14141c350(void)

{
  return 0xb55ddd3d;
}



// FUNCTION 14141c360 FUN_14141c360 body=6 status=ok
// SIG undefined FUN_14141c360(void)

undefined8 FUN_14141c360(void)

{
  return 0x44b06c25;
}



// FUNCTION 14141c370 FUN_14141c370 body=6 status=ok
// SIG undefined FUN_14141c370(void)

undefined8 FUN_14141c370(void)

{
  return 0xb6bbf480;
}



// FUNCTION 14141c380 FUN_14141c380 body=6 status=ok
// SIG undefined FUN_14141c380(void)

undefined8 FUN_14141c380(void)

{
  return 0x796f2ae0;
}



// FUNCTION 14141c390 FUN_14141c390 body=69 status=ok
// SIG undefined FUN_14141c390(void)

bool FUN_14141c390(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char local_res8 [8];
  
  lVar1 = *param_1;
  local_res8[0] = '\0';
  uVar2 = FUN_14178ac60(param_1,DAT_1468914a8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res8);
  return local_res8[0] != '\0';
}



// FUNCTION 14141c420 FUN_14141c420 body=73 status=ok
// SIG undefined FUN_14141c420(void)

void FUN_14141c420(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(local_18,DAT_1468914b0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 14141c470 FUN_14141c470 body=61 status=ok
// SIG undefined FUN_14141c470(void)

void FUN_14141c470(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468914b8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 14141c4b0 FUN_14141c4b0 body=60 status=ok
// SIG undefined FUN_14141c4b0(void)

void FUN_14141c4b0(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468913f8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 14141c4f0 FUN_14141c4f0 body=57 status=ok
// SIG undefined FUN_14141c4f0(void)

void FUN_14141c4f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468914c8);
                    /* WARNING: Could not recover jumptable at 0x00014141c526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 14141c530 FUN_14141c530 body=57 status=ok
// SIG undefined FUN_14141c530(void)

void FUN_14141c530(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468914d0);
                    /* WARNING: Could not recover jumptable at 0x00014141c566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 14141c570 Serialize body=112 status=ok
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
  FUN_140ccb790(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 14141c5e0 FUN_14141c5e0 body=73 status=ok
// SIG undefined FUN_14141c5e0(void)

void FUN_14141c5e0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(local_18,DAT_1468914d8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 14141c630 FUN_14141c630 body=66 status=ok
// SIG undefined FUN_14141c630(void)

void FUN_14141c630(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146891400);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 14141c680 FUN_14141c680 body=60 status=ok
// SIG undefined FUN_14141c680(void)

void FUN_14141c680(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146891408);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 14141c6c0 FUN_14141c6c0 body=57 status=ok
// SIG undefined FUN_14141c6c0(void)

void FUN_14141c6c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146891410);
                    /* WARNING: Could not recover jumptable at 0x00014141c6f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 14141c700 FUN_14141c700 body=57 status=ok
// SIG undefined FUN_14141c700(void)

void FUN_14141c700(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146891418);
                    /* WARNING: Could not recover jumptable at 0x00014141c736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 14141c740 FUN_14141c740 body=176 status=ok
// SIG undefined FUN_14141c740(void)

void FUN_14141c740(longlong *param_1,void **param_2,undefined4 param_3)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  void *local_28;
  ulonglong local_20;
  undefined4 local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (&local_28 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    _Src = *param_2;
    local_20 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_28,_Src,(longlong)(int)uVar1 << 3);
    }
  }
  lVar2 = *param_1;
  local_18 = param_3;
  uVar3 = FUN_14178ac60(param_1,DAT_146891420);
  (**(code **)(lVar2 + 0x208))(param_1,uVar3,&local_28);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14141c7f0 FUN_14141c7f0 body=57 status=ok
// SIG undefined FUN_14141c7f0(void)

void FUN_14141c7f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146891428);
                    /* WARNING: Could not recover jumptable at 0x00014141c826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 14141c830 FUN_14141c830 body=60 status=ok
// SIG undefined FUN_14141c830(void)

void FUN_14141c830(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468914e0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 14141c870 FUN_14141c870 body=57 status=ok
// SIG undefined FUN_14141c870(void)

void FUN_14141c870(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468914e8);
                    /* WARNING: Could not recover jumptable at 0x00014141c8a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 14141c8c0 thunk_FUN_142e49950 body=5 status=ok
// SIG undefined thunk_FUN_142e49950(void)

void thunk_FUN_142e49950(void)

{
  FUN_142e49950();
  return;
}



// FUNCTION 14141c8f0 FUN_14141c8f0 body=34 status=ok
// SIG undefined FUN_14141c8f0(void)

void FUN_14141c8f0(void)

{
  undefined8 uVar1;
  
  uVar1 = UMovieScene3DTransformSection::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetMovementTarget_144a43fc0,2);
  return;
}



// FUNCTION 14141c920 FUN_14141c920 body=34 status=ok
// SIG undefined FUN_14141c920(void)

void FUN_14141c920(void)

{
  undefined8 uVar1;
  
  uVar1 = UComboBoxString::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActivateCalledShot_144a44860,0x12);
  return;
}



// FUNCTION 14141c950 FUN_14141c950 body=34 status=ok
// SIG undefined FUN_14141c950(void)

void FUN_14141c950(void)

{
  undefined8 uVar1;
  
  uVar1 = UThrobber::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetTimeOfDay_144a414c0,1);
  return;
}



// FUNCTION 14141c980 FUN_14141c980 body=34 status=ok
// SIG undefined FUN_14141c980(void)

void FUN_14141c980(void)

{
  undefined8 uVar1;
  
  uVar1 = AGameNetworkManager::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnAmmoTypeSelectedChanged_144a42120,7);
  return;
}



// FUNCTION 14141c9b0 FUN_14141c9b0 body=34 status=ok
// SIG undefined FUN_14141c9b0(void)

void FUN_14141c9b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414198e0();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetOwnerOakPlayerController_144a42410,0x11);
  return;
}



// FUNCTION 14141c9e0 FUN_14141c9e0 body=34 status=ok
// SIG undefined FUN_14141c9e0(void)

void FUN_14141c9e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414196e0();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_BindEchoLogInitialPlayFinished_144a42908,1);
  return;
}



// FUNCTION 14141ca10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146891568 == 0) {
    uVar1 = FUN_14141c290();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146891568 = GetStaticStruct(FUN_14141d3d0,uVar2,L"AvailableAmmoType",0x18,uVar1);
  }
  return;
}



// FUNCTION 14141ca70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146891558 == 0) {
    uVar1 = FUN_14141c2a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146891558 = GetStaticStruct(FUN_14141d400,uVar2,L"AvailableInventoryBalanceData",0x18,uVar1)
    ;
  }
  return;
}



// FUNCTION 14141cad0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146891578 == 0) {
    uVar1 = FUN_14141c2b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146891578 = GetStaticStruct(FUN_14141d430,uVar2,L"AvailableManufacturer",0x18,uVar1);
  }
  return;
}



// FUNCTION 14141cb30 FUN_14141cb30 body=82 status=ok
// SIG undefined FUN_14141cb30(void)

void FUN_14141cb30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146891548 == 0) {
    uVar1 = FUN_14141c2c0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146891548 = GetStaticStruct(FUN_14141d460,uVar2,L"AvailablePartData",0x50,uVar1);
  }
  return;
}



// FUNCTION 14141cb90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468915d0 == 0) {
    uVar1 = FUN_14141c2d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468915d0 = GetStaticStruct(FUN_14141d490,uVar2,L"DeveloperPerk",0x18,uVar1);
  }
  return;
}



// FUNCTION 14141cbf0 FUN_14141cbf0 body=82 status=ok
// SIG undefined FUN_14141cbf0(void)

void FUN_14141cbf0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468916c8 == 0) {
    uVar1 = FUN_14141c2e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468916c8 = GetStaticStruct(FUN_14141d4c0,uVar2,L"DialogScriptToLoadEntry",0x38,uVar1);
  }
  return;
}



// FUNCTION 14141cc50 FUN_14141cc50 body=82 status=ok
// SIG undefined FUN_14141cc50(void)

void FUN_14141cc50(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146891738 == 0) {
    uVar1 = FUN_14141c2f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146891738 =
         GetStaticStruct(FUN_14141d4f0,uVar2,L"DownloadableEntitlementSetItem",0x30,uVar1);
  }
  return;
}



// FUNCTION 14141ccb0 FUN_14141ccb0 body=82 status=ok
// SIG undefined FUN_14141ccb0(void)

void FUN_14141ccb0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146891688 == 0) {
    uVar1 = FUN_14141c300();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146891688 = GetStaticStruct(FUN_14141d520,uVar2,L"EchoLogTrackingInfo",0x20,uVar1);
  }
  return;
}



// FUNCTION 14141cd10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMWEncounterGeneratedData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468917b8 == 0) {
    uVar1 = FUN_14141c310();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468917b8 = GetStaticStruct(FUN_14141d550,uVar2,L"GRMLNBadDoseData",0xf8,uVar1);
  }
  return;
}



// FUNCTION 14141cd70 FUN_14141cd70 body=82 status=ok
// SIG undefined FUN_14141cd70(void)

void FUN_14141cd70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146891798 == 0) {
    uVar1 = FUN_14141c320();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146891798 = GetStaticStruct(FUN_14141d580,uVar2,L"GRMLNBeamConfiguration",0x128,uVar1);
  }
  return;
}



// FUNCTION 14141cdd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMWEncounterGeneratedData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468917c8 == 0) {
    uVar1 = FUN_14141c330();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468917c8 = GetStaticStruct(FUN_141419b10,uVar2,L"GRMLNBeamData",0xf8,uVar1);
  }
  return;
}



// FUNCTION 14141ce30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468917e8 == 0) {
    uVar1 = FUN_14141c340();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468917e8 = GetStaticStruct(FUN_14141d5b0,uVar2,L"GRMLNHardPointDamageData",0x18,uVar1);
  }
  return;
}



// FUNCTION 14141ce90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_HandIKRetargeting::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468917d8 == 0) {
    uVar1 = FUN_14141c350();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468917d8 = GetStaticStruct(FUN_14141d5e0,uVar2,L"GRMLNHardpointData",0x168,uVar1);
  }
  return;
}



// FUNCTION 14141cef0 FUN_14141cef0 body=82 status=ok
// SIG undefined FUN_14141cef0(void)

void FUN_14141cef0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468917f8 == 0) {
    uVar1 = FUN_14141c360();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468917f8 = GetStaticStruct(FUN_14141d610,uVar2,L"GRMLNHoverProfile",0x38,uVar1);
  }
  return;
}



// FUNCTION 14141cf50 FUN_14141cf50 body=82 status=ok
// SIG undefined FUN_14141cf50(void)

void FUN_14141cf50(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468917a8 == 0) {
    uVar1 = FUN_14141c370();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468917a8 = GetStaticStruct(FUN_14141d640,uVar2,L"GRMLNStaticFieldData",0x120,uVar1);
  }
  return;
}



// FUNCTION 14141cfb0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146891708 == 0) {
    uVar1 = FUN_14141c380();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146891708 =
         GetStaticStruct(FUN_14141d670,uVar2,L"OakDownloadableEntitlementCurrencyType",0x10,uVar1);
  }
  return;
}



// FUNCTION 14141d010 FUN_14141d010 body=47 status=ok
// SIG undefined FUN_14141d010(void)

longlong FUN_14141d010(void)

{
  if (DAT_146891818 == 0) {
    FUN_141786440(&DAT_146891818,&PTR_FUN_144a3c120);
  }
  return DAT_146891818;
}



// FUNCTION 14141d040 FUN_14141d040 body=47 status=ok
// SIG undefined FUN_14141d040(void)

longlong FUN_14141d040(void)

{
  if (DAT_146891500 == 0) {
    FUN_141786440(&DAT_146891500,&PTR_FUN_144a3f6a0);
  }
  return DAT_146891500;
}



// FUNCTION 14141d070 FUN_14141d070 body=47 status=ok
// SIG undefined FUN_14141d070(void)

longlong FUN_14141d070(void)

{
  if (DAT_146891538 == 0) {
    FUN_141786440(&DAT_146891538,&PTR_GetPrivateStaticClass_144a40610);
  }
  return DAT_146891538;
}



// FUNCTION 14141d0a0 FUN_14141d0a0 body=47 status=ok
// SIG undefined FUN_14141d0a0(void)

longlong FUN_14141d0a0(void)

{
  if (DAT_1468916b0 == 0) {
    FUN_141786440(&DAT_1468916b0,&PTR_GetPrivateStaticClass_144a3ea50);
  }
  return DAT_1468916b0;
}



// FUNCTION 14141d0d0 FUN_14141d0d0 body=47 status=ok
// SIG undefined FUN_14141d0d0(void)

longlong FUN_14141d0d0(void)

{
  if (DAT_1468916d8 == 0) {
    FUN_141786440(&DAT_1468916d8,&PTR_FUN_144a3ba60);
  }
  return DAT_1468916d8;
}



// FUNCTION 14141d100 FUN_14141d100 body=47 status=ok
// SIG undefined FUN_14141d100(void)

longlong FUN_14141d100(void)

{
  if (DAT_1468916e8 == 0) {
    FUN_141786440(&DAT_1468916e8,&PTR_FUN_144a3c260);
  }
  return DAT_1468916e8;
}



// FUNCTION 14141d130 FUN_14141d130 body=47 status=ok
// SIG undefined FUN_14141d130(void)

longlong FUN_14141d130(void)

{
  if (DAT_1468916f8 == 0) {
    FUN_141786440(&DAT_1468916f8,&PTR_FUN_144a40cf0);
  }
  return DAT_1468916f8;
}



// FUNCTION 14141d160 FUN_14141d160 body=47 status=ok
// SIG undefined FUN_14141d160(void)

longlong FUN_14141d160(void)

{
  if (DAT_146891718 == 0) {
    FUN_141786440(&DAT_146891718,&PTR_FUN_144a3b230);
  }
  return DAT_146891718;
}



// FUNCTION 14141d190 FUN_14141d190 body=47 status=ok
// SIG undefined FUN_14141d190(void)

longlong FUN_14141d190(void)

{
  if (DAT_146891728 == 0) {
    FUN_141786440(&DAT_146891728,&PTR_FUN_144a3c1d0);
  }
  return DAT_146891728;
}



// FUNCTION 14141d1c0 FUN_14141d1c0 body=47 status=ok
// SIG undefined FUN_14141d1c0(void)

longlong FUN_14141d1c0(void)

{
  if (DAT_146891748 == 0) {
    FUN_141786440(&DAT_146891748,&PTR_FUN_144a3d0d0);
  }
  return DAT_146891748;
}



// FUNCTION 14141d1f0 FUN_14141d1f0 body=47 status=ok
// SIG undefined FUN_14141d1f0(void)

longlong FUN_14141d1f0(void)

{
  if (DAT_146891758 == 0) {
    FUN_141786440(&DAT_146891758,&PTR_FUN_144a3d8c0);
  }
  return DAT_146891758;
}



// FUNCTION 14141d220 FUN_14141d220 body=47 status=ok
// SIG undefined FUN_14141d220(void)

longlong FUN_14141d220(void)

{
  if (DAT_146891808 == 0) {
    FUN_141786440(&DAT_146891808,&PTR_GetPrivateStaticClass_144a3bda0);
  }
  return DAT_146891808;
}



// FUNCTION 14141d250 FUN_14141d250 body=47 status=ok
// SIG undefined FUN_14141d250(void)

longlong FUN_14141d250(void)

{
  if (DAT_146891518 == 0) {
    FUN_141786a30(&DAT_146891518,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c6580);
  }
  return DAT_146891518;
}



// FUNCTION 14141d280 FUN_14141d280 body=47 status=ok
// SIG undefined FUN_14141d280(void)

longlong FUN_14141d280(void)

{
  if (DAT_146891510 == 0) {
    FUN_141786a30(&DAT_146891510,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c6540);
  }
  return DAT_146891510;
}



// FUNCTION 14141d2b0 FUN_14141d2b0 body=47 status=ok
// SIG undefined FUN_14141d2b0(void)

longlong FUN_14141d2b0(void)

{
  if (DAT_146891788 == 0) {
    FUN_141786a30(&DAT_146891788,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c9610);
  }
  return DAT_146891788;
}



// FUNCTION 14141d2e0 FUN_14141d2e0 body=47 status=ok
// SIG undefined FUN_14141d2e0(void)

longlong FUN_14141d2e0(void)

{
  if (DAT_146891680 == 0) {
    FUN_141786a30(&DAT_146891680,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c8020);
  }
  return DAT_146891680;
}



// FUNCTION 14141d310 FUN_14141d310 body=47 status=ok
// SIG undefined FUN_14141d310(void)

longlong FUN_14141d310(void)

{
  if (DAT_146891790 == 0) {
    FUN_1417866a0(&DAT_146891790,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463cbc80);
  }
  return DAT_146891790;
}



// FUNCTION 14141d340 FUN_14141d340 body=47 status=ok
// SIG undefined FUN_14141d340(void)

longlong FUN_14141d340(void)

{
  if (DAT_1468914f0 == 0) {
    FUN_1417866a0(&DAT_1468914f0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c62a0);
  }
  return DAT_1468914f0;
}



// FUNCTION 14141d370 FUN_14141d370 body=47 status=ok
// SIG undefined FUN_14141d370(void)

longlong FUN_14141d370(void)

{
  if (DAT_1468914f8 == 0) {
    FUN_1417866a0(&DAT_1468914f8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c62f0);
  }
  return DAT_1468914f8;
}



// FUNCTION 14141d3a0 FUN_14141d3a0 body=47 status=ok
// SIG undefined FUN_14141d3a0(void)

longlong FUN_14141d3a0(void)

{
  if (DAT_1468916c0 == 0) {
    FUN_1417866a0(&DAT_1468916c0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463cbc30);
  }
  return DAT_1468916c0;
}



// FUNCTION 14141d3d0 FUN_14141d3d0 body=47 status=ok
// SIG undefined FUN_14141d3d0(void)

longlong FUN_14141d3d0(void)

{
  if (DAT_146891570 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146891570,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c6a50);
  }
  return DAT_146891570;
}



// FUNCTION 14141d400 FUN_14141d400 body=47 status=ok
// SIG undefined FUN_14141d400(void)

longlong FUN_14141d400(void)

{
  if (DAT_146891560 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146891560,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c6980);
  }
  return DAT_146891560;
}



// FUNCTION 14141d430 FUN_14141d430 body=47 status=ok
// SIG undefined FUN_14141d430(void)

longlong FUN_14141d430(void)

{
  if (DAT_146891580 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146891580,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c6b20);
  }
  return DAT_146891580;
}



// FUNCTION 14141d460 FUN_14141d460 body=47 status=ok
// SIG undefined FUN_14141d460(void)

longlong FUN_14141d460(void)

{
  if (DAT_146891550 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146891550,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c68b0);
  }
  return DAT_146891550;
}



// FUNCTION 14141d490 FUN_14141d490 body=47 status=ok
// SIG undefined FUN_14141d490(void)

longlong FUN_14141d490(void)

{
  if (DAT_1468915d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468915d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c76c0);
  }
  return DAT_1468915d8;
}



// FUNCTION 14141d4c0 FUN_14141d4c0 body=47 status=ok
// SIG undefined FUN_14141d4c0(void)

longlong FUN_14141d4c0(void)

{
  if (DAT_1468916d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468916d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c84d0);
  }
  return DAT_1468916d0;
}



// FUNCTION 14141d4f0 FUN_14141d4f0 body=47 status=ok
// SIG undefined FUN_14141d4f0(void)

longlong FUN_14141d4f0(void)

{
  if (DAT_146891740 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146891740,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c9060);
  }
  return DAT_146891740;
}



// FUNCTION 14141d520 FUN_14141d520 body=47 status=ok
// SIG undefined FUN_14141d520(void)

longlong FUN_14141d520(void)

{
  if (DAT_146891690 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146891690,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c80a0);
  }
  return DAT_146891690;
}



// FUNCTION 14141d550 FUN_14141d550 body=47 status=ok
// SIG undefined FUN_14141d550(void)

longlong FUN_14141d550(void)

{
  if (DAT_1468917c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468917c0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c97f0);
  }
  return DAT_1468917c0;
}



// FUNCTION 14141d580 FUN_14141d580 body=47 status=ok
// SIG undefined FUN_14141d580(void)

longlong FUN_14141d580(void)

{
  if (DAT_1468917a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468917a0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c9710);
  }
  return DAT_1468917a0;
}



// FUNCTION 14141d5b0 FUN_14141d5b0 body=47 status=ok
// SIG undefined FUN_14141d5b0(void)

longlong FUN_14141d5b0(void)

{
  if (DAT_1468917f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468917f0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c9ef0);
  }
  return DAT_1468917f0;
}



// FUNCTION 14141d5e0 FUN_14141d5e0 body=47 status=ok
// SIG undefined FUN_14141d5e0(void)

longlong FUN_14141d5e0(void)

{
  if (DAT_1468917e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468917e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c9dd0);
  }
  return DAT_1468917e0;
}



// FUNCTION 14141d610 FUN_14141d610 body=47 status=ok
// SIG undefined FUN_14141d610(void)

longlong FUN_14141d610(void)

{
  if (DAT_146891800 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146891800,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ca040);
  }
  return DAT_146891800;
}



// FUNCTION 14141d640 FUN_14141d640 body=47 status=ok
// SIG undefined FUN_14141d640(void)

longlong FUN_14141d640(void)

{
  if (DAT_1468917b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468917b0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c97a0);
  }
  return DAT_1468917b0;
}



// FUNCTION 14141d670 FUN_14141d670 body=47 status=ok
// SIG undefined FUN_14141d670(void)

longlong FUN_14141d670(void)

{
  if (DAT_146891710 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146891710,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463c8d50);
  }
  return DAT_146891710;
}



// FUNCTION 14141d6d0 execSetActorScale3D body=133 status=ok
// SIG undefined execSetActorScale3D(void)

void AActor::execSetActorScale3D(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_1409c78a0(param_1,&local_18);
  return;
}



// FUNCTION 14141d760 FUN_14141d760 body=229 status=ok
// SIG undefined FUN_14141d760(void)

void FUN_14141d760(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  local_14 = local_24;
  local_10 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140aa47f0(param_1,local_res10,&local_18);
  return;
}



// FUNCTION 14141d850 FUN_14141d850 body=128 status=ok
// SIG undefined FUN_14141d850(void)

void FUN_14141d850(undefined8 param_1,longlong param_2)

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
  FUN_1409ced80(param_1,local_res10);
  return;
}



// FUNCTION 14141d910 FUN_14141d910 body=44 status=ok
// SIG undefined FUN_14141d910(void)

void FUN_14141d910(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140cb9640();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14141d940 FUN_14141d940 body=45 status=ok
// SIG undefined FUN_14141d940(void)

void FUN_14141d940(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140bbcb70();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14141d970 FUN_14141d970 body=190 status=ok
// SIG undefined FUN_14141d970(void)

void FUN_14141d970(undefined8 param_1,longlong param_2)

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
  FUN_140cba270(param_1,local_res20,local_res10[0]);
  return;
}



// FUNCTION 14141da30 FUN_14141da30 body=118 status=ok
// SIG undefined FUN_14141da30(void)

void FUN_14141da30(undefined8 param_1,longlong param_2)

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
  FUN_140cba4c0(param_1,local_res10[0]);
  return;
}



// FUNCTION 14141dab0 FUN_14141dab0 body=141 status=ok
// SIG undefined FUN_14141dab0(void)

void FUN_14141dab0(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte local_res8 [8];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(bool *)param_3 = (*(uint *)(param_1 + 0xa60) & 1 << (local_res8[0] & 0x1f)) != 0;
  return;
}



// FUNCTION 14141db40 execIsMoveInputIgnored body=47 status=ok
// SIG undefined execIsMoveInputIgnored(void)

void AController::execIsMoveInputIgnored(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x720))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14141db70 FUN_14141db70 body=133 status=ok
// SIG undefined FUN_14141db70(void)

void FUN_14141db70(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
  
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
  uVar1 = FUN_1409da380(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14141dc40 FUN_14141dc40 body=493 status=ok
// SIG undefined FUN_14141dc40(void)

void FUN_14141dc40(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  local_b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_c0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar1 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1409dc8f0(param_1,local_b8[0],local_c0,local_c8,local_res20[0],bVar2,puVar1);
  return;
}



// FUNCTION 14141de30 execOnProjectileOverlapEnd body=319 status=ok
// SIG undefined execOnProjectileOverlapEnd(void)

void AUGProjectile::execOnProjectileOverlapEnd(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_1409dcb20(param_1,local_10,local_18,local_res20,local_res10[0]);
  return;
}



// FUNCTION 14141df70 FUN_14141df70 body=334 status=ok
// SIG undefined FUN_14141df70(void)

void FUN_14141df70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140cbedf0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 14141e0c0 FUN_14141e0c0 body=334 status=ok
// SIG undefined FUN_14141e0c0(void)

void FUN_14141e0c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140cbf1d0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 14141e210 FUN_14141e210 body=128 status=ok
// SIG undefined FUN_14141e210(void)

void FUN_14141e210(undefined8 param_1,longlong param_2)

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
  FUN_1409ddc30(param_1,local_res10);
  return;
}



// FUNCTION 14141e290 FUN_14141e290 body=334 status=ok
// SIG undefined FUN_14141e290(void)

void FUN_14141e290(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140cc08e0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 14141e3e0 FUN_14141e3e0 body=334 status=ok
// SIG undefined FUN_14141e3e0(void)

void FUN_14141e3e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140cc0ab0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 14141e530 FUN_14141e530 body=334 status=ok
// SIG undefined FUN_14141e530(void)

void FUN_14141e530(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140cc0b60(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 14141e680 FUN_14141e680 body=188 status=ok
// SIG undefined FUN_14141e680(void)

void FUN_14141e680(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
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
  FUN_140cc0e50(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 14141e7a0 execHandleTargetDestroyed body=128 status=ok
// SIG undefined execHandleTargetDestroyed(void)

void AConGaTrongCharacter::execHandleTargetDestroyed(undefined8 param_1,longlong param_2)

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
  HandleTargetDestroyed(param_1,local_res10);
  return;
}



// FUNCTION 14141e840 FUN_14141e840 body=44 status=ok
// SIG undefined FUN_14141e840(void)

void FUN_14141e840(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140cc25e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14141e870 FUN_14141e870 body=191 status=ok
// SIG undefined FUN_14141e870(void)

void FUN_14141e870(undefined8 param_1,longlong param_2)

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
  FUN_1409e2a90(param_1,local_res10,local_res20);
  return;
}



// FUNCTION 14141e930 FUN_14141e930 body=201 status=ok
// SIG undefined FUN_14141e930(void)

void FUN_14141e930(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  cVar1 = (**(code **)(*param_1 + 0x710))(param_1,&local_18);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerActivateCalledShot_Validate");
    return;
  }
  local_10 = local_20;
  local_18 = local_28;
  (**(code **)(*param_1 + 0x718))(param_1,&local_18);
  return;
}



// FUNCTION 14141ea00 FUN_14141ea00 body=248 status=ok
// SIG undefined FUN_14141ea00(void)

void FUN_14141ea00(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x428))(param_1,local_res10,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerGiveCurrency_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x430))(param_1,local_res10,local_res8[0]);
  return;
}



// FUNCTION 14141eb00 FUN_14141eb00 body=166 status=ok
// SIG undefined FUN_14141eb00(void)

void FUN_14141eb00(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x448))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerGrantLevels_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x450))(param_1,local_res8[0]);
  return;
}



// FUNCTION 14141ebb0 FUN_14141ebb0 body=78 status=ok
// SIG undefined FUN_14141ebb0(void)

void FUN_14141ebb0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x418))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerKillAllEnemies_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014141ebf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x420))(param_1);
  return;
}



// FUNCTION 14141ec00 FUN_14141ec00 body=78 status=ok
// SIG undefined FUN_14141ec00(void)

void FUN_14141ec00(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x3f8))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerLoaded_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014141ec47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x400))(param_1);
  return;
}



// FUNCTION 14141ec50 FUN_14141ec50 body=254 status=ok
// SIG undefined FUN_14141ec50(void)

void FUN_14141ec50(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x408))(param_1,local_18,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSpawnItems_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x410))(param_1,local_18,local_res8[0]);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14141ed50 execServerDebugBreakItems body=78 status=ok
// SIG undefined execServerDebugBreakItems(void)

void UInventoryComponent::execServerDebugBreakItems(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x438))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerUnlockVehicleParts_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014141ed97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x440))(param_1);
  return;
}



// FUNCTION 14141eda0 FUN_14141eda0 body=130 status=ok
// SIG undefined FUN_14141eda0(void)

void FUN_14141eda0(undefined8 param_1,longlong param_2)

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
  FUN_1409e4300(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14141ee30 FUN_14141ee30 body=128 status=ok
// SIG undefined FUN_14141ee30(void)

void FUN_14141ee30(undefined8 param_1,longlong param_2)

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
  FUN_1409e4ff0(param_1,local_res10);
  return;
}



// FUNCTION 14141eeb0 FUN_14141eeb0 body=128 status=ok
// SIG undefined FUN_14141eeb0(void)

void FUN_14141eeb0(undefined8 param_1,longlong param_2)

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
  FUN_140a15e80(param_1,local_res10);
  return;
}



// FUNCTION 14141ef30 FUN_14141ef30 body=238 status=ok
// SIG undefined FUN_14141ef30(void)

void FUN_14141ef30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 local_res10 [2];
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
  local_res10[0] = 0;
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140cd52a0(param_1,plVar1,local_res10[0]);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14141f0e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGJournalKey::GetPrivateStaticClass(void)

{
  if (DAT_146891de0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakElementalEffectData",&DAT_146891de0,FUN_140447710,0xa0,
                  0x10000000,0,L"Engine",&LAB_14141ffa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146891de0;
}



// FUNCTION 14141f1b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGameplayTagAssetInterface::GetPrivateStaticClass(void)

{
  if (DAT_146891df8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakElementalEffectBucketProviderInterface",&DAT_146891df8,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146891df8;
}



// FUNCTION 14141f270 FUN_14141f270 body=162 status=ok
// SIG undefined FUN_14141f270(void)

longlong FUN_14141f270(void)

{
  if (DAT_146891fb0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakGameInstance",&DAT_146891fb0,
                  UPlayFabMultiplayerModelDecoder::
                  StaticRegisterNativesUPlayFabMultiplayerModelDecoder,0x1470,0x1000000c,0,L"Game",
                  &LAB_1414201c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141421ca0,&LAB_140447700,0);
  }
  return DAT_146891fb0;
}



// FUNCTION 14141f320 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UCheckBoxWidgetStyle::StaticClass(void)

{
  if (DAT_146891e08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakFirstPersonComponent",&DAT_146891e08,FUN_140447710,0x5b0,
                  0x10000000,0,L"Engine",FUN_14141ffc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e1b450,&LAB_140447700,0);
  }
  return DAT_146891e08;
}



// FUNCTION 14141f3d0 FUN_14141f3d0 body=151 status=ok
// SIG undefined FUN_14141f3d0(void)

longlong FUN_14141f3d0(void)

{
  if (DAT_146891e38 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakGameActivityAdapter",&DAT_146891e38,FUN_140447710,0x90,
                  0x10000000,0,L"Engine",&LAB_141420150,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146891e38;
}



// FUNCTION 14141f480 FUN_14141f480 body=47 status=ok
// SIG undefined FUN_14141f480(void)

longlong FUN_14141f480(void)

{
  if (DAT_146891fa8 == 0) {
    FUN_141786440(&DAT_146891fa8,&PTR_FUN_144a4df70);
  }
  return DAT_146891fa8;
}



// FUNCTION 14141f4b0 FUN_14141f4b0 body=47 status=ok
// SIG undefined FUN_14141f4b0(void)

longlong FUN_14141f4b0(void)

{
  if (DAT_146891e90 == 0) {
    FUN_141786a30(&DAT_146891e90,&PTR_FUN_1463cd1a0);
  }
  return DAT_146891e90;
}



// FUNCTION 14141f4e0 FUN_14141f4e0 body=47 status=ok
// SIG undefined FUN_14141f4e0(void)

longlong FUN_14141f4e0(void)

{
  if (DAT_146891e98 == 0) {
    FUN_141786a30(&DAT_146891e98,&PTR_FUN_1463cd260);
  }
  return DAT_146891e98;
}



// FUNCTION 14141f510 FUN_14141f510 body=47 status=ok
// SIG undefined FUN_14141f510(void)

longlong FUN_14141f510(void)

{
  if (DAT_146891ea0 == 0) {
    FUN_141786a30(&DAT_146891ea0,&PTR_FUN_1463cd320);
  }
  return DAT_146891ea0;
}



// FUNCTION 14141f540 FUN_14141f540 body=47 status=ok
// SIG undefined FUN_14141f540(void)

longlong FUN_14141f540(void)

{
  if (DAT_146891ea8 == 0) {
    FUN_141786a30(&DAT_146891ea8,&PTR_FUN_1463cd3a0);
  }
  return DAT_146891ea8;
}



// FUNCTION 14141f570 FUN_14141f570 body=47 status=ok
// SIG undefined FUN_14141f570(void)

longlong FUN_14141f570(void)

{
  if (DAT_146891eb0 == 0) {
    FUN_141786a30(&DAT_146891eb0,&PTR_FUN_1463cd420);
  }
  return DAT_146891eb0;
}



// FUNCTION 14141f5a0 FUN_14141f5a0 body=47 status=ok
// SIG undefined FUN_14141f5a0(void)

longlong FUN_14141f5a0(void)

{
  if (DAT_146891eb8 == 0) {
    FUN_141786a30(&DAT_146891eb8,&PTR_FUN_1463cd520);
  }
  return DAT_146891eb8;
}



// FUNCTION 14141f5d0 FUN_14141f5d0 body=47 status=ok
// SIG undefined FUN_14141f5d0(void)

longlong FUN_14141f5d0(void)

{
  if (DAT_146891ec0 == 0) {
    FUN_141786a30(&DAT_146891ec0,&PTR_FUN_1463cd5b0);
  }
  return DAT_146891ec0;
}



// FUNCTION 14141f600 FUN_14141f600 body=47 status=ok
// SIG undefined FUN_14141f600(void)

longlong FUN_14141f600(void)

{
  if (DAT_146891ec8 == 0) {
    FUN_141786a30(&DAT_146891ec8,&PTR_FUN_1463cd6b0);
  }
  return DAT_146891ec8;
}



// FUNCTION 14141f630 FUN_14141f630 body=47 status=ok
// SIG undefined FUN_14141f630(void)

longlong FUN_14141f630(void)

{
  if (DAT_146891ed0 == 0) {
    FUN_141786a30(&DAT_146891ed0,&PTR_FUN_1463cd7b0);
  }
  return DAT_146891ed0;
}



// FUNCTION 14141f660 FUN_14141f660 body=47 status=ok
// SIG undefined FUN_14141f660(void)

longlong FUN_14141f660(void)

{
  if (DAT_146891ed8 == 0) {
    FUN_141786a30(&DAT_146891ed8,&PTR_FUN_1463cd8b0);
  }
  return DAT_146891ed8;
}



// FUNCTION 14141f690 FUN_14141f690 body=47 status=ok
// SIG undefined FUN_14141f690(void)

longlong FUN_14141f690(void)

{
  if (DAT_146891ee0 == 0) {
    FUN_141786a30(&DAT_146891ee0,&PTR_FUN_1463cd9b0);
  }
  return DAT_146891ee0;
}



// FUNCTION 14141f6c0 FUN_14141f6c0 body=47 status=ok
// SIG undefined FUN_14141f6c0(void)

longlong FUN_14141f6c0(void)

{
  if (DAT_146891ee8 == 0) {
    FUN_141786a30(&DAT_146891ee8,&PTR_FUN_1463cdab0);
  }
  return DAT_146891ee8;
}



// FUNCTION 14141f6f0 FUN_14141f6f0 body=47 status=ok
// SIG undefined FUN_14141f6f0(void)

longlong FUN_14141f6f0(void)

{
  if (DAT_146891ef0 == 0) {
    FUN_141786a30(&DAT_146891ef0,&PTR_FUN_1463cdbb0);
  }
  return DAT_146891ef0;
}



// FUNCTION 14141f720 FUN_14141f720 body=47 status=ok
// SIG undefined FUN_14141f720(void)

longlong FUN_14141f720(void)

{
  if (DAT_146891ef8 == 0) {
    FUN_141786a30(&DAT_146891ef8,&PTR_FUN_1463cdcb0);
  }
  return DAT_146891ef8;
}



// FUNCTION 14141f750 FUN_14141f750 body=47 status=ok
// SIG undefined FUN_14141f750(void)

longlong FUN_14141f750(void)

{
  if (DAT_146891f00 == 0) {
    FUN_141786a30(&DAT_146891f00,&PTR_FUN_1463cddb0);
  }
  return DAT_146891f00;
}



// FUNCTION 14141f780 FUN_14141f780 body=47 status=ok
// SIG undefined FUN_14141f780(void)

longlong FUN_14141f780(void)

{
  if (DAT_146891f08 == 0) {
    FUN_141786a30(&DAT_146891f08,&PTR_FUN_1463cdeb0);
  }
  return DAT_146891f08;
}



// FUNCTION 14141f7b0 FUN_14141f7b0 body=47 status=ok
// SIG undefined FUN_14141f7b0(void)

longlong FUN_14141f7b0(void)

{
  if (DAT_146891f10 == 0) {
    FUN_141786a30(&DAT_146891f10,&PTR_FUN_1463cdf30);
  }
  return DAT_146891f10;
}



// FUNCTION 14141f7e0 FUN_14141f7e0 body=47 status=ok
// SIG undefined FUN_14141f7e0(void)

longlong FUN_14141f7e0(void)

{
  if (DAT_146891f18 == 0) {
    FUN_141786a30(&DAT_146891f18,&PTR_FUN_1463ce030);
  }
  return DAT_146891f18;
}



// FUNCTION 14141f810 FUN_14141f810 body=47 status=ok
// SIG undefined FUN_14141f810(void)

longlong FUN_14141f810(void)

{
  if (DAT_146891f20 == 0) {
    FUN_141786a30(&DAT_146891f20,&PTR_FUN_1463ce130);
  }
  return DAT_146891f20;
}



// FUNCTION 14141f840 FUN_14141f840 body=47 status=ok
// SIG undefined FUN_14141f840(void)

longlong FUN_14141f840(void)

{
  if (DAT_146891f28 == 0) {
    FUN_141786a30(&DAT_146891f28,&PTR_FUN_1463ce230);
  }
  return DAT_146891f28;
}



// FUNCTION 14141f870 FUN_14141f870 body=47 status=ok
// SIG undefined FUN_14141f870(void)

longlong FUN_14141f870(void)

{
  if (DAT_146891f30 == 0) {
    FUN_141786a30(&DAT_146891f30,&PTR_FUN_1463ce330);
  }
  return DAT_146891f30;
}



// FUNCTION 14141f8a0 FUN_14141f8a0 body=47 status=ok
// SIG undefined FUN_14141f8a0(void)

longlong FUN_14141f8a0(void)

{
  if (DAT_146891f38 == 0) {
    FUN_141786a30(&DAT_146891f38,&PTR_FUN_1463ce430);
  }
  return DAT_146891f38;
}



// FUNCTION 14141f8d0 FUN_14141f8d0 body=47 status=ok
// SIG undefined FUN_14141f8d0(void)

longlong FUN_14141f8d0(void)

{
  if (DAT_146891f40 == 0) {
    FUN_141786a30(&DAT_146891f40,&PTR_FUN_1463ce530);
  }
  return DAT_146891f40;
}



// FUNCTION 14141f900 FUN_14141f900 body=47 status=ok
// SIG undefined FUN_14141f900(void)

longlong FUN_14141f900(void)

{
  if (DAT_146891f48 == 0) {
    FUN_141786a30(&DAT_146891f48,&PTR_FUN_1463ce630);
  }
  return DAT_146891f48;
}



// FUNCTION 14141f930 FUN_14141f930 body=47 status=ok
// SIG undefined FUN_14141f930(void)

longlong FUN_14141f930(void)

{
  if (DAT_146891f50 == 0) {
    FUN_141786a30(&DAT_146891f50,&PTR_FUN_1463ce730);
  }
  return DAT_146891f50;
}



// FUNCTION 14141f960 FUN_14141f960 body=47 status=ok
// SIG undefined FUN_14141f960(void)

longlong FUN_14141f960(void)

{
  if (DAT_146891f58 == 0) {
    FUN_141786a30(&DAT_146891f58,&PTR_FUN_1463ce800);
  }
  return DAT_146891f58;
}



// FUNCTION 14141f990 FUN_14141f990 body=47 status=ok
// SIG undefined FUN_14141f990(void)

longlong FUN_14141f990(void)

{
  if (DAT_146891f60 == 0) {
    FUN_141786a30(&DAT_146891f60,&PTR_FUN_1463ce880);
  }
  return DAT_146891f60;
}



// FUNCTION 14141f9c0 FUN_14141f9c0 body=47 status=ok
// SIG undefined FUN_14141f9c0(void)

longlong FUN_14141f9c0(void)

{
  if (DAT_146891f68 == 0) {
    FUN_141786a30(&DAT_146891f68,&PTR_FUN_1463ce900);
  }
  return DAT_146891f68;
}



// FUNCTION 14141f9f0 FUN_14141f9f0 body=47 status=ok
// SIG undefined FUN_14141f9f0(void)

longlong FUN_14141f9f0(void)

{
  if (DAT_146891f70 == 0) {
    FUN_141786a30(&DAT_146891f70,&PTR_FUN_1463ce980);
  }
  return DAT_146891f70;
}



// FUNCTION 14141fa20 FUN_14141fa20 body=47 status=ok
// SIG undefined FUN_14141fa20(void)

longlong FUN_14141fa20(void)

{
  if (DAT_146891f78 == 0) {
    FUN_141786a30(&DAT_146891f78,&PTR_FUN_1463cea40);
  }
  return DAT_146891f78;
}



// FUNCTION 14141fa50 FUN_14141fa50 body=47 status=ok
// SIG undefined FUN_14141fa50(void)

longlong FUN_14141fa50(void)

{
  if (DAT_146891f80 == 0) {
    FUN_141786a30(&DAT_146891f80,&PTR_FUN_1463cead0);
  }
  return DAT_146891f80;
}



// FUNCTION 14141fa80 FUN_14141fa80 body=47 status=ok
// SIG undefined FUN_14141fa80(void)

longlong FUN_14141fa80(void)

{
  if (DAT_146891f88 == 0) {
    FUN_141786a30(&DAT_146891f88,&PTR_FUN_1463ceba0);
  }
  return DAT_146891f88;
}



// FUNCTION 14141fab0 FUN_14141fab0 body=47 status=ok
// SIG undefined FUN_14141fab0(void)

longlong FUN_14141fab0(void)

{
  if (DAT_146891f90 == 0) {
    FUN_141786a30(&DAT_146891f90,&PTR_FUN_1463cec30);
  }
  return DAT_146891f90;
}



// FUNCTION 14141fae0 FUN_14141fae0 body=47 status=ok
// SIG undefined FUN_14141fae0(void)

longlong FUN_14141fae0(void)

{
  if (DAT_146891f98 == 0) {
    FUN_141786a30(&DAT_146891f98,&PTR_FUN_1463cec70);
  }
  return DAT_146891f98;
}



// FUNCTION 14141fb10 FUN_14141fb10 body=47 status=ok
// SIG undefined FUN_14141fb10(void)

longlong FUN_14141fb10(void)

{
  if (DAT_146891fa0 == 0) {
    FUN_141786a30(&DAT_146891fa0,&PTR_FUN_1463cecb0);
  }
  return DAT_146891fa0;
}



// FUNCTION 14141fb50 FUN_14141fb50 body=53 status=ok
// SIG undefined FUN_14141fb50(void)

void FUN_14141fb50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144a4fe70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14141fb90 FUN_14141fb90 body=162 status=ok
// SIG undefined FUN_14141fb90(void)

longlong FUN_14141fb90(void)

{
  if (DAT_146891e48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakGameEngine",&DAT_146891e48,FUN_140447710,0x1638,0x1000000e
                  ,0,L"Engine",FUN_141420170,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142865990,&LAB_141421c90,
                  &LAB_140447700,0);
  }
  return DAT_146891e48;
}



// FUNCTION 14141fc50 FUN_14141fc50 body=162 status=ok
// SIG undefined FUN_14141fc50(void)

longlong FUN_14141fc50(void)

{
  if (DAT_146891d98 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"EnvQueryContext_Drone_MovementTarget",&DAT_146891d98,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",&LAB_14141ff80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141421c70,&LAB_140447700,0);
  }
  return DAT_146891d98;
}



// FUNCTION 14141fd00 FUN_14141fd00 body=162 status=ok
// SIG undefined FUN_14141fd00(void)

longlong FUN_14141fd00(void)

{
  if (DAT_146891da8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"EnvQueryContext_Drone_HoverTargetPos",&DAT_146891da8,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",&LAB_14141ff70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141421c70,&LAB_140447700,0);
  }
  return DAT_146891da8;
}



// FUNCTION 14141fdb0 Z_Construct_UPackage__Script_MechWarrior body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_MechWarrior(void)

longlong Z_Construct_UPackage__Script_MechWarrior(void)

{
  if (DAT_146891e28 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146891e28,&PTR_s__Script_OakGame_144a4f8e0);
  }
  return DAT_146891e28;
}



// FUNCTION 14141fde0 FUN_14141fde0 body=47 status=ok
// SIG undefined FUN_14141fde0(void)

longlong FUN_14141fde0(void)

{
  if (DAT_146891dc8 == 0) {
    FUN_141786440(&DAT_146891dc8,&PTR_LAB_144a4e570);
  }
  return DAT_146891dc8;
}



// FUNCTION 14141fe10 FUN_14141fe10 body=47 status=ok
// SIG undefined FUN_14141fe10(void)

longlong FUN_14141fe10(void)

{
  if (DAT_146891db0 == 0) {
    FUN_141786a30(&DAT_146891db0,&PTR_FUN_1463cbe30);
  }
  return DAT_146891db0;
}



// FUNCTION 14141fe40 FUN_14141fe40 body=47 status=ok
// SIG undefined FUN_14141fe40(void)

longlong FUN_14141fe40(void)

{
  if (DAT_146891db8 == 0) {
    FUN_141786a30(&DAT_146891db8,&PTR_FUN_1463cbf30);
  }
  return DAT_146891db8;
}



// FUNCTION 14141fe70 FUN_14141fe70 body=47 status=ok
// SIG undefined FUN_14141fe70(void)

longlong FUN_14141fe70(void)

{
  if (DAT_146891dc0 == 0) {
    FUN_141786a30(&DAT_146891dc0,&PTR_FUN_1463cbfb0);
  }
  return DAT_146891dc0;
}



// FUNCTION 14141fec0 FUN_14141fec0 body=162 status=ok
// SIG undefined FUN_14141fec0(void)

longlong FUN_14141fec0(void)

{
  if (DAT_146891e20 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakFreezeData",&DAT_146891e20,FUN_140447710,0x140,0x10000000,
                  0,L"Engine",FUN_141420030,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146891e20;
}



// FUNCTION 14141ffc0 FUN_14141ffc0 body=111 status=ok
// SIG undefined FUN_14141ffc0(void)

void FUN_14141ffc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142cb2f20(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144a4e960;
    puVar1[5] = &PTR_LAB_144a4ed80;
    puVar1[0xac] = 0;
    puVar1[0xad] = 0;
    puVar1[0xb0] = 0;
    puVar1[0xb1] = 0;
    *(undefined4 *)(puVar1 + 0xb2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x594) = 0;
    puVar1[0xb4] = 0;
    *(undefined4 *)(puVar1 + 0xb5) = 0;
  }
  return;
}



// FUNCTION 141420030 FUN_141420030 body=274 status=ok
// SIG undefined FUN_141420030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141420030(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a4edb0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0x3f000000;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x3f800000;
    *(undefined4 *)(puVar1 + 10) = 0x3f000000;
    uVar2 = uRam000000014689199c;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(uint *)((longlong)puVar1 + 0x7c) = uVar2;
    uVar2 = uRam0000000146891994 & uRam00000001468919a4;
    uVar3 = uRam0000000146891998 & uRam00000001468919a8;
    uVar4 = uRam000000014689199c & uRam00000001468919ac;
    *(uint *)(puVar1 + 0x12) = _DAT_146891990 & _DAT_1468919a0;
    *(uint *)((longlong)puVar1 + 0x94) = uVar2;
    *(uint *)(puVar1 + 0x13) = uVar3;
    *(uint *)((longlong)puVar1 + 0x9c) = uVar4;
    *(undefined4 *)(puVar1 + 0x14) = 0x42480000;
    *(undefined4 *)(puVar1 + 0x16) = 0x43af0000;
    *(undefined4 *)((longlong)puVar1 + 0xb4) = 0x437a0000;
    *(undefined4 *)(puVar1 + 0x17) = 0x437a0000;
    *(undefined4 *)((longlong)puVar1 + 0xbc) = 0x41480000;
    *(undefined4 *)(puVar1 + 0x18) = 0x40000000;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    *(undefined4 *)(puVar1 + 0x1b) = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    *(undefined4 *)(puVar1 + 0x21) = 0x3f800000;
    FUN_142d979c0(puVar1 + 0x22);
    return;
  }
  return;
}



// FUNCTION 141420170 FUN_141420170 body=75 status=ok
// SIG undefined FUN_141420170(void)

void FUN_141420170(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14243eb10(puVar1,param_1);
    *puVar1 = &PTR_FUN_144a4f908;
    puVar1[5] = &PTR_LAB_144a4fe08;
    puVar1[0x244] = 0;
    puVar1[0x2c5] = 0;
    puVar1[0x2c6] = 0;
  }
  return;
}



// FUNCTION 1414201e0 ~TSparseArray<TSetElement<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=397 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1414202a1;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1414202a1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)((longlong)iStack_1c * 0x40 + *param_1 + 0x10) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141420370 FUN_141420370 body=680 status=ok
// SIG undefined FUN_141420370(void)

void FUN_141420370(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  iVar7 = *(int *)(param_1 + 0x110);
  plVar4 = *(longlong **)(param_1 + 0x108);
  if (iVar7 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    plVar4 = *(longlong **)(param_1 + 0x108);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  iVar7 = *(int *)(param_1 + 0xe0);
  plVar4 = *(longlong **)(param_1 + 0xd8);
  if (iVar7 != 0) {
    do {
      iVar6 = (int)plVar4[7];
      lVar3 = plVar4[6];
      if (iVar6 != 0) {
        plVar5 = (longlong *)(lVar3 + 0x18);
        do {
          if (plVar5[2] != 0) {
            FMemory::Free();
          }
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          if (plVar5[-2] != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        lVar3 = plVar4[6];
      }
      if (lVar3 != 0) {
        FMemory::Free();
      }
      if (plVar4[4] != 0) {
        FMemory::Free();
      }
      if (plVar4[2] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 8;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    plVar4 = *(longlong **)(param_1 + 0xd8);
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  iVar7 = *(int *)(param_1 + 0xb0);
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (iVar7 != 0) {
    plVar4 = (longlong *)(lVar3 + 0x28);
    do {
      if (plVar4[2] != 0) {
        FMemory::Free();
      }
      plVar5 = (longlong *)*plVar4;
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
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = (longlong *)plVar4[-3];
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
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar4 = plVar4 + 9;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar3 = *(longlong *)(param_1 + 0xa8);
  }
  if (lVar3 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141420620 FUN_141420620 body=3307 status=ok
// SIG undefined FUN_141420620(void)

void FUN_141420620(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  *(undefined4 *)(param_1 + 0x11c8) = 0;
  if (*(longlong *)(param_1 + 0x11c0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<enum_EIslandsEnum,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1180,0);
  if (*(longlong *)(param_1 + 0x11a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1180) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1178) = 0;
  if (*(longlong *)(param_1 + 0x1170) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<enum_EIslandsEnum,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1130,0);
  if (*(longlong *)(param_1 + 0x1150) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1130) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x1128);
  plVar7 = *(longlong **)(param_1 + 0x1120);
  if (iVar6 != 0) {
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = *(longlong **)(param_1 + 0x1120);
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  iVar6 = *(int *)(param_1 + 0x1118);
  plVar7 = *(longlong **)(param_1 + 0x1110);
  if (iVar6 != 0) {
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = *(longlong **)(param_1 + 0x1110);
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  if (*(longlong *)(param_1 + 0x1100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10b8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xd90) = 0;
  if (*(longlong *)(param_1 + 0xd88) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xd48);
  *(undefined4 *)(param_1 + 0xd40) = 0;
  if (*(longlong *)(param_1 + 0xd38) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xcf8);
  UEngine::FErrorsAndWarningsCollector::~FErrorsAndWarningsCollector(param_1 + 0xc40);
  iVar6 = *(int *)(param_1 + 0xc38);
  lVar5 = *(longlong *)(param_1 + 0xc30);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      plVar4 = (longlong *)plVar7[4];
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
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0xc30);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  FUN_1414215d0(param_1 + 0xc18);
  *(undefined4 *)(param_1 + 0xc20) = 0;
  if (*(int *)(param_1 + 0xc24) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xc18,0);
  }
  if (*(longlong *)(param_1 + 0xc18) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0xc08);
  plVar7 = *(longlong **)(param_1 + 0xc00);
  if (iVar6 != 0) {
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = *(longlong **)(param_1 + 0xc00);
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  iVar6 = *(int *)(param_1 + 0xbf8);
  plVar7 = *(longlong **)(param_1 + 0xbf0);
  if (iVar6 != 0) {
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = *(longlong **)(param_1 + 0xbf0);
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  if (*(longlong *)(param_1 + 0xbe0) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0xbd8);
  lVar5 = *(longlong *)(param_1 + 0xbd0);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x18);
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0xbd0);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xba8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xb90);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xb78);
  iVar6 = *(int *)(param_1 + 0xb68);
  lVar5 = *(longlong *)(param_1 + 0xb60);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0xb60);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  plVar7 = *(longlong **)(param_1 + 0xb58);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0xb48);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0xb38);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0xb28);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0xb18);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xaf8);
  plVar7 = *(longlong **)(param_1 + 0xaf0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0xae0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0xad0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0xac0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xab0) = 0;
  if (*(longlong *)(param_1 + 0xaa8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FGuid,BuildPatchServices::FCloudChunkSource::FTaskInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa68);
  plVar7 = *(longlong **)(param_1 + 0xa48);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0xa38);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa00);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x9e8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x9d0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x9b8);
  iVar6 = *(int *)(param_1 + 0x988);
  lVar5 = *(longlong *)(param_1 + 0x980);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x980);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x970) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x8f0);
  lVar5 = *(longlong *)(param_1 + 0x8e8);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x18);
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x8e8);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x888) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x828) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x808) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x7c0);
  plVar7 = *(longlong **)(param_1 + 0x7b8);
  if (iVar6 != 0) {
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = *(longlong **)(param_1 + 0x7b8);
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x710);
  plVar7 = *(longlong **)(param_1 + 0x708);
  if (iVar6 != 0) {
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = *(longlong **)(param_1 + 0x708);
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
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
  iVar6 = *(int *)(param_1 + 0x6c0);
  plVar7 = *(longlong **)(param_1 + 0x6b8);
  if (iVar6 != 0) {
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = *(longlong **)(param_1 + 0x6b8);
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  if (*(longlong *)(param_1 + 0x660) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x640) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x620) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x610) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x448) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x418) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 1000) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x110);
  plVar7 = *(longlong **)(param_1 + 0x108);
  if (iVar6 != 0) {
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = *(longlong **)(param_1 + 0x108);
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FExec::~FExec(param_1 + 0x28);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 141421310 FUN_141421310 body=207 status=ok
// SIG undefined FUN_141421310(void)

void FUN_141421310(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x448) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x438) != '\0') {
    *(undefined1 *)(param_1 + 0x438) = 0;
  }
  if (*(char *)(param_1 + 0x428) != '\0') {
    *(undefined1 *)(param_1 + 0x428) = 0;
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 1414213e0 FUN_1414213e0 body=195 status=ok
// SIG undefined FUN_1414213e0(void)

void FUN_1414213e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1208);
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
  plVar4 = *(longlong **)(param_1 + 0x11f8);
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
  plVar4 = *(longlong **)(param_1 + 0x11e8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_141420620(param_1);
  return;
}



// FUNCTION 1414214c0 `scalar_deleting_destructor' body=105 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCoreNavigationSystem::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x5a8) = 0;
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x560);
  FUN_141421310(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5b0);
  }
  return param_1;
}



// FUNCTION 141421530 FUN_141421530 body=52 status=ok
// SIG undefined FUN_141421530(void)

undefined8 FUN_141421530(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 141421570 FUN_141421570 body=73 status=ok
// SIG undefined FUN_141421570(void)

longlong FUN_141421570(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1628) != 0) {
    FMemory::Free();
  }
  FUN_1414213e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1638);
  }
  return param_1;
}



// FUNCTION 1414215d0 FUN_1414215d0 body=390 status=ok
// SIG undefined FUN_1414215d0(void)

void FUN_1414215d0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)*param_1;
  for (iVar4 = *(int *)(param_1 + 1); iVar4 != 0; iVar4 = iVar4 + -1) {
    lVar1 = *plVar6;
    if (*(longlong *)(lVar1 + 0x290) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x278) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x260) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x248) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x228) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x218) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x200) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x1f0) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x1e0) != 0) {
      FMemory::Free();
    }
    iVar5 = *(int *)(lVar1 + 0x1d8);
    lVar2 = *(longlong *)(lVar1 + 0x1d0);
    if (iVar5 != 0) {
      plVar3 = (longlong *)(lVar2 + 0x18);
      do {
        if (plVar3[2] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        if (plVar3[-2] != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 7;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar2 = *(longlong *)(lVar1 + 0x1d0);
    }
    if (lVar2 != 0) {
      FMemory::Free();
    }
    FURL::~FURL(lVar1 + 0x158);
    FURL::~FURL(lVar1 + 0xe8);
    if (*(longlong *)(lVar1 + 0xd0) != 0) {
      FMemory::Free();
    }
    FURL::~FURL(lVar1 + 0x10);
    FMemory::Free(*plVar6);
    plVar6 = plVar6 + 1;
  }
  return;
}



// FUNCTION 141421760 FUN_141421760 body=85 status=ok
// SIG undefined FUN_141421760(void)

void FUN_141421760(void)

{
  if (DAT_146891930 == 0) {
    if (DAT_146891e28 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146891e28,&PTR_s__Script_OakGame_144a4f8e0);
    }
    DAT_146891930 = GetStaticEnum(FUN_1414220d0,DAT_146891e28,L"EFreezeType");
  }
  return;
}



// FUNCTION 1414217c0 FUN_1414217c0 body=85 status=ok
// SIG undefined FUN_1414217c0(void)

void FUN_1414217c0(void)

{
  if (DAT_146891940 == 0) {
    if (DAT_146891e28 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146891e28,&PTR_s__Script_OakGame_144a4f8e0);
    }
    DAT_146891940 = GetStaticEnum(FUN_141422100,DAT_146891e28,L"EOakDroneFacingMode");
  }
  return;
}



// FUNCTION 141421820 FUN_141421820 body=85 status=ok
// SIG undefined FUN_141421820(void)

void FUN_141421820(void)

{
  if (DAT_146891948 == 0) {
    if (DAT_146891e28 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146891e28,&PTR_s__Script_OakGame_144a4f8e0);
    }
    DAT_146891948 = GetStaticEnum(FUN_141422130,DAT_146891e28,L"EOakDroneMovementMode");
  }
  return;
}



// FUNCTION 141421880 FUN_141421880 body=85 status=ok
// SIG undefined FUN_141421880(void)

void FUN_141421880(void)

{
  if (DAT_146891938 == 0) {
    if (DAT_146891e28 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146891e28,&PTR_s__Script_OakGame_144a4f8e0);
    }
    DAT_146891938 = GetStaticEnum(FUN_141422160,DAT_146891e28,L"EOakElementalStackBucketType");
  }
  return;
}



// FUNCTION 1414218e0 Empty body=506 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<enum_EIslandsEnum,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar6 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar6 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar4 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar7 = local_78 + 1;
      bVar2 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar7;
      if (bVar2) goto LAB_1414219b1;
      uVar3 = puVar8[lVar4 + 1];
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
    iStack_64 = (iStack_60 - iVar7) + 0x1f;
    if (iVar6 < iStack_64) {
LAB_1414219b1:
      iStack_64 = iVar6;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar6) {
    do {
      lVar4 = (longlong)iStack_3c * 0x20 + *param_1;
      iVar6 = *(int *)(lVar4 + 0x10);
      plVar5 = *(longlong **)(lVar4 + 8);
      if (iVar6 != 0) {
        do {
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        plVar5 = *(longlong **)(lVar4 + 8);
      }
      if (plVar5 != (longlong *)0x0) {
        FMemory::Free(plVar5);
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar3 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141421b10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGWallHowlingMouthTrap::GetPrivateStaticClass(void)

{
  if (DAT_146891dd0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakDroneProjectileMovementComponent",&DAT_146891dd0,
                  StaticRegisterNativesAUGWallHowlingMouthTrap,0x400,0x10000000,0,L"Engine",
                  &LAB_14141ff90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430a9310,&LAB_140447700,0);
  }
  return DAT_146891dd0;
}



// FUNCTION 141421bd0 FUN_141421bd0 body=6 status=ok
// SIG undefined FUN_141421bd0(void)

undefined8 FUN_141421bd0(void)

{
  return 0xf008c16b;
}



// FUNCTION 141421be0 FUN_141421be0 body=6 status=ok
// SIG undefined FUN_141421be0(void)

undefined8 FUN_141421be0(void)

{
  return 0xb6ab314c;
}



// FUNCTION 141421bf0 FUN_141421bf0 body=6 status=ok
// SIG undefined FUN_141421bf0(void)

undefined8 FUN_141421bf0(void)

{
  return 0xfc9b267a;
}



// FUNCTION 141421c00 FUN_141421c00 body=6 status=ok
// SIG undefined FUN_141421c00(void)

undefined8 FUN_141421c00(void)

{
  return 0xa613bdc1;
}



// FUNCTION 141421c80 thunk_FUN_142e1b450 body=5 status=ok
// SIG undefined thunk_FUN_142e1b450(void)

void thunk_FUN_142e1b450(void)

{
  FUN_142e1b450();
  return;
}



// FUNCTION 141421cb0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UUGJournalKey::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 141421cc0 StaticRegisterNativesAUGWallHowlingMouthTrap body=34 status=ok
// SIG undefined StaticRegisterNativesAUGWallHowlingMouthTrap(void)

void AUGWallHowlingMouthTrap::StaticRegisterNativesAUGWallHowlingMouthTrap(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRep_MovementMode_144a4e8d0,3);
  return;
}



// FUNCTION 141421cf0 StaticRegisterNativesUPlayFabMultiplayerModelDecoder body=34 status=ok
// SIG undefined StaticRegisterNativesUPlayFabMultiplayerModelDecoder(void)

void UPlayFabMultiplayerModelDecoder::StaticRegisterNativesUPlayFabMultiplayerModelDecoder(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14141f270();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddManagedActor_144a4ff90,0x23);
  return;
}



// FUNCTION 141421d20 FUN_141421d20 body=113 status=ok
// SIG undefined FUN_141421d20(void)

void FUN_141421d20(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146891e80 == 0) {
    if (DAT_146891e28 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146891e28,&PTR_s__Script_OakGame_144a4f8e0);
    }
    lVar1 = DAT_146891e28;
    uVar2 = FUN_141421bd0();
    DAT_146891e80 = GetStaticStruct(FUN_141422190,lVar1,L"ConditionalSavegameExpression",0x18,uVar2)
    ;
  }
  return;
}



// FUNCTION 141421da0 FUN_141421da0 body=113 status=ok
// SIG undefined FUN_141421da0(void)

void FUN_141421da0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146891e60 == 0) {
    if (DAT_146891e28 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146891e28,&PTR_s__Script_OakGame_144a4f8e0);
    }
    lVar1 = DAT_146891e28;
    uVar2 = FUN_141421be0();
    DAT_146891e60 = GetStaticStruct(FUN_1414221c0,lVar1,L"DevMapToMapId",0x10,uVar2);
  }
  return;
}



// FUNCTION 141421e20 FUN_141421e20 body=113 status=ok
// SIG undefined FUN_141421e20(void)

void FUN_141421e20(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146891e70 == 0) {
    if (DAT_146891e28 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146891e28,&PTR_s__Script_OakGame_144a4f8e0);
    }
    lVar1 = DAT_146891e28;
    uVar2 = FUN_141421bf0();
    DAT_146891e70 = GetStaticStruct(FUN_1414221f0,lVar1,L"LootAudioStinger",0x10,uVar2);
  }
  return;
}



// FUNCTION 141421ea0 FUN_141421ea0 body=113 status=ok
// SIG undefined FUN_141421ea0(void)

void FUN_141421ea0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146891e50 == 0) {
    if (DAT_146891e28 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146891e28,&PTR_s__Script_OakGame_144a4f8e0);
    }
    lVar1 = DAT_146891e28;
    uVar2 = FUN_141421c00();
    DAT_146891e50 = GetStaticStruct(FUN_141422220,lVar1,L"PlayerClassToClassId",0x18,uVar2);
  }
  return;
}



// FUNCTION 141421f20 FUN_141421f20 body=47 status=ok
// SIG undefined FUN_141421f20(void)

longlong FUN_141421f20(void)

{
  if (DAT_146891da0 == 0) {
    FUN_141786440(&DAT_146891da0,&PTR_FUN_144a4d8f0);
  }
  return DAT_146891da0;
}



// FUNCTION 141421f50 FUN_141421f50 body=47 status=ok
// SIG undefined FUN_141421f50(void)

longlong FUN_141421f50(void)

{
  if (DAT_146891d90 == 0) {
    FUN_141786440(&DAT_146891d90,&PTR_FUN_144a4d6f0);
  }
  return DAT_146891d90;
}



// FUNCTION 141421f80 FUN_141421f80 body=47 status=ok
// SIG undefined FUN_141421f80(void)

longlong FUN_141421f80(void)

{
  if (DAT_146891df0 == 0) {
    FUN_141786440(&DAT_146891df0,&PTR_GetPrivateStaticClass_144a45a30);
  }
  return DAT_146891df0;
}



// FUNCTION 141421fb0 FUN_141421fb0 body=47 status=ok
// SIG undefined FUN_141421fb0(void)

longlong FUN_141421fb0(void)

{
  if (DAT_146891dd8 == 0) {
    FUN_141786440(&DAT_146891dd8,&PTR_GetPrivateStaticClass_144a456d0);
  }
  return DAT_146891dd8;
}



// FUNCTION 141421fe0 FUN_141421fe0 body=47 status=ok
// SIG undefined FUN_141421fe0(void)

longlong FUN_141421fe0(void)

{
  if (DAT_146891e00 == 0) {
    FUN_141786440(&DAT_146891e00,&PTR_StaticClass_144a4a070);
  }
  return DAT_146891e00;
}



// FUNCTION 141422010 FUN_141422010 body=47 status=ok
// SIG undefined FUN_141422010(void)

longlong FUN_141422010(void)

{
  if (DAT_146891e18 == 0) {
    FUN_141786440(&DAT_146891e18,&PTR_FUN_144a45150);
  }
  return DAT_146891e18;
}



// FUNCTION 141422040 FUN_141422040 body=47 status=ok
// SIG undefined FUN_141422040(void)

longlong FUN_141422040(void)

{
  if (DAT_146891e30 == 0) {
    FUN_141786440(&DAT_146891e30,&PTR_FUN_144a4a290);
  }
  return DAT_146891e30;
}



// FUNCTION 141422070 FUN_141422070 body=47 status=ok
// SIG undefined FUN_141422070(void)

longlong FUN_141422070(void)

{
  if (DAT_146891e40 == 0) {
    FUN_141786440(&DAT_146891e40,&PTR_FUN_144a4cc00);
  }
  return DAT_146891e40;
}



// FUNCTION 1414220a0 FUN_1414220a0 body=47 status=ok
// SIG undefined FUN_1414220a0(void)

longlong FUN_1414220a0(void)

{
  if (DAT_146891d78 == 0) {
    FUN_141786a30(&DAT_146891d78,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463cbda0);
  }
  return DAT_146891d78;
}



// FUNCTION 1414220d0 FUN_1414220d0 body=47 status=ok
// SIG undefined FUN_1414220d0(void)

longlong FUN_1414220d0(void)

{
  if (DAT_146891e10 == 0) {
    FUN_1417866a0(&DAT_146891e10,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463cf820);
  }
  return DAT_146891e10;
}



// FUNCTION 141422100 FUN_141422100 body=47 status=ok
// SIG undefined FUN_141422100(void)

longlong FUN_141422100(void)

{
  if (DAT_146891d80 == 0) {
    FUN_1417866a0(&DAT_146891d80,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463cf730);
  }
  return DAT_146891d80;
}



// FUNCTION 141422130 FUN_141422130 body=47 status=ok
// SIG undefined FUN_141422130(void)

longlong FUN_141422130(void)

{
  if (DAT_146891d88 == 0) {
    FUN_1417866a0(&DAT_146891d88,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463cf780);
  }
  return DAT_146891d88;
}



// FUNCTION 141422160 FUN_141422160 body=47 status=ok
// SIG undefined FUN_141422160(void)

longlong FUN_141422160(void)

{
  if (DAT_146891de8 == 0) {
    FUN_1417866a0(&DAT_146891de8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463cf7d0);
  }
  return DAT_146891de8;
}



// FUNCTION 141422190 FUN_141422190 body=47 status=ok
// SIG undefined FUN_141422190(void)

longlong FUN_141422190(void)

{
  if (DAT_146891e88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146891e88,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463cd090);
  }
  return DAT_146891e88;
}



// FUNCTION 1414221c0 FUN_1414221c0 body=47 status=ok
// SIG undefined FUN_1414221c0(void)

longlong FUN_1414221c0(void)

{
  if (DAT_146891e68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146891e68,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463cce90);
  }
  return DAT_146891e68;
}



// FUNCTION 1414221f0 FUN_1414221f0 body=47 status=ok
// SIG undefined FUN_1414221f0(void)

longlong FUN_1414221f0(void)

{
  if (DAT_146891e78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146891e78,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ccf60);
  }
  return DAT_146891e78;
}



// FUNCTION 141422220 FUN_141422220 body=47 status=ok
// SIG undefined FUN_141422220(void)

longlong FUN_141422220(void)

{
  if (DAT_146891e58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146891e58,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ccdd0);
  }
  return DAT_146891e58;
}



// FUNCTION 141422250 FUN_141422250 body=254 status=ok
// SIG undefined FUN_141422250(void)

void FUN_141422250(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140ba27d0(param_1,local_18[0],local_res20,local_res10);
  return;
}



// FUNCTION 141422350 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140ba31d0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141422410 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140ba3250(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414224d0 FUN_1414224d0 body=190 status=ok
// SIG undefined FUN_1414224d0(void)

void FUN_1414224d0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_140bb8da0(param_1,local_res18[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141422590 FUN_141422590 body=43 status=ok
// SIG undefined FUN_141422590(void)

void FUN_141422590(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140bca8a0();
  *param_3 = uVar1;
  return;
}


