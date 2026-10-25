// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1406eea90 FUN_1406eea90 body=76 status=ok
// SIG undefined FUN_1406eea90(void)

void FUN_1406eea90(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1406ee000();
  if (*(char *)(param_1 + 0x630) != '\0') {
    uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
    FUN_1406ed570(param_1,param_2,param_1 + 0x348,uVar1,0);
  }
  return;
}



// FUNCTION 1406eeae0 FUN_1406eeae0 body=257 status=ok
// SIG undefined FUN_1406eeae0(void)

void FUN_1406eeae0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_140713110();
  if (*(char *)(param_1 + 0x1090) != '\0') {
    uVar1 = FUN_1407a2860();
    FUN_1406ed570(param_1,param_2,param_1 + 0x1098,uVar1,0);
  }
  uVar1 = FUN_1429ff160();
  uVar2 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  FUN_1406ed570(param_1,param_2,param_1 + 0x10a8,uVar2,uVar1);
  uVar1 = UBlackboardKeyType_Float::GetPrivateStaticClass();
  FUN_1406ed570(param_1,param_2,param_1 + 0x10b8,uVar1,0);
  uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  FUN_1406ed570(param_1,param_2,param_1 + 0x10c8,uVar1,0);
  uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  FUN_1406ed570(param_1,param_2,param_1 + 0x10d8,uVar1,0);
  uVar1 = UBlackboardKeyType_Bool::GetPrivateStaticClass();
  FUN_1406ed570(param_1,param_2,param_1 + 0x10e8,uVar1,0);
  return;
}



// FUNCTION 1406eebf0 FUN_1406eebf0 body=380 status=ok
// SIG undefined FUN_1406eebf0(void)

void FUN_1406eebf0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48;
  
  if (((*(char *)(param_1 + 0x113) != '\0') || (*(char *)(param_1 + 0x114) != '\0')) &&
     (lVar1 = *(longlong *)(*param_2 + 0x568), lVar1 != 0)) {
    FUN_142ccda60(param_1 + 0x100,lVar1,local_res8);
    lVar2 = *(longlong *)(param_1 + 0xd8);
    lVar3 = param_2[1];
    local_68 = FUN_1406f1260;
    uStack_60 = 0;
    FWeakObjectPtr::operator=(&local_58,*param_2);
    lVar4 = param_2[1];
    lVar5 = param_2[2];
    local_78 = 0;
    local_70 = 0;
    local_50 = lVar4;
    local_48 = lVar5;
    puVar6 = (undefined8 *)operator_new(0x40,&local_78);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_144060920;
      FWeakObjectPtr::operator=(puVar6 + 1,param_1);
      *(undefined4 *)(puVar6 + 2) = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar6 + 0x14) = local_68._4_4_;
      *(undefined4 *)(puVar6 + 3) = uStack_60;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_5c;
      *(undefined4 *)(puVar6 + 4) = local_58;
      *(undefined4 *)((longlong)puVar6 + 0x24) = local_54;
      puVar6[5] = lVar4;
      puVar6[6] = lVar5;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[7] = uVar7;
    }
    puVar6 = (undefined8 *)FUN_142bc77b0(lVar1,local_res18,local_res8[0],param_1,&local_78);
    *(undefined8 *)(lVar2 + lVar3 + 0x48) = *puVar6;
  }
  return;
}



// FUNCTION 1406eed70 FUN_1406eed70 body=440 status=ok
// SIG undefined FUN_1406eed70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406eed70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar7 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  plVar1 = (longlong *)*param_2;
  uVar4 = AAICharacter::GetPrivateStaticClass();
  uVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
  FWeakObjectPtr::operator=(lVar7 + 0xc0,uVar4);
  plVar1 = *(longlong **)(*param_2 + 0x488);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar5 = APostProcessVolume::GetPrivateStaticClass();
  if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  uVar4 = FUN_142e75af0();
  uVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
  FWeakObjectPtr::operator=(lVar7 + 200,uVar4);
  lVar5 = (**(code **)(*plVar1 + 0x6e8))(plVar1);
  if (lVar5 == 0) {
LAB_1406eee6f:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_142e39920();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1406eee6f;
  }
  FWeakObjectPtr::operator=(lVar7 + 0xd0,lVar5);
  lVar5 = plVar1[0x9a];
  if (lVar5 == 0) {
    fVar8 = 1.0;
  }
  else {
    auVar9._0_4_ = *(uint *)(lVar5 + 0x230) & _DAT_146858370;
    auVar9._4_4_ = *(uint *)(lVar5 + 0x234) & uRam0000000146858374;
    auVar9._8_4_ = *(uint *)(lVar5 + 0x238) & uRam0000000146858378;
    auVar9._12_4_ = *(uint *)(lVar5 + 0x23c) & uRam000000014685837c;
    auVar10._4_4_ = auVar9._8_4_;
    auVar10._0_4_ = auVar9._4_4_;
    auVar10._8_4_ = auVar9._0_4_;
    auVar10._12_4_ = auVar9._12_4_;
    auVar10 = minps(auVar9,auVar10);
    auVar2._4_4_ = auVar9._0_4_;
    auVar2._0_4_ = auVar9._8_4_;
    auVar2._8_4_ = auVar9._4_4_;
    auVar2._12_4_ = auVar9._12_4_;
    auVar10 = minps(auVar10,auVar2);
    fVar8 = auVar10._0_4_ * *(float *)(lVar5 + 0x714);
  }
  *(float *)(lVar7 + 0x48) = fVar8;
  lVar5 = plVar1[0x92];
  if (lVar5 != 0) {
    lVar6 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1406eef09;
  }
  lVar5 = 0;
LAB_1406eef09:
  FWeakObjectPtr::operator=(lVar7 + 0xd8,lVar5);
  return;
}



// FUNCTION 1406eef30 FUN_1406eef30 body=70 status=ok
// SIG undefined FUN_1406eef30(void)

void FUN_1406eef30(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  plVar3 = (longlong *)*param_2;
  uVar4 = AAICharacter::GetPrivateStaticClass();
  uVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
  FWeakObjectPtr::operator=(lVar1 + lVar2 + 0xd0,uVar4);
  return;
}



// FUNCTION 1406eef80 FUN_1406eef80 body=355 status=ok
// SIG undefined FUN_1406eef80(void)

void FUN_1406eef80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48;
  
  lVar1 = *(longlong *)(*param_2 + 0x568);
  if (lVar1 != 0) {
    cVar6 = FUN_142ccda60(param_1 + 0x100,lVar1,local_res10);
    if (cVar6 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0xd8);
      lVar3 = param_2[1];
      uStack_60 = 0;
      local_68 = FUN_1406f1c00;
      FWeakObjectPtr::operator=(&local_58,*param_2);
      lVar4 = param_2[1];
      lVar5 = param_2[2];
      local_78 = 0;
      local_70 = 0;
      local_50 = lVar4;
      local_48 = lVar5;
      puVar7 = (undefined8 *)operator_new(0x40,&local_78);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_144060920;
        FWeakObjectPtr::operator=(puVar7 + 1,param_1);
        *(undefined4 *)(puVar7 + 2) = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar7 + 0x14) = local_68._4_4_;
        *(undefined4 *)(puVar7 + 3) = uStack_60;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_5c;
        *(undefined4 *)(puVar7 + 4) = local_58;
        *(undefined4 *)((longlong)puVar7 + 0x24) = local_54;
        puVar7[5] = lVar4;
        puVar7[6] = lVar5;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[7] = uVar8;
      }
      puVar7 = (undefined8 *)FUN_142bc77b0(lVar1,local_res18,local_res10[0],param_1,&local_78);
      *(undefined8 *)(lVar2 + lVar3 + 0x80) = *puVar7;
    }
  }
  return;
}



// FUNCTION 1406ef0f0 FUN_1406ef0f0 body=213 status=ok
// SIG undefined FUN_1406ef0f0(void)

void FUN_1406ef0f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if (*(char *)(param_1 + 0x318) != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146858828) {
      _Init_thread_header(&DAT_146858828);
      if (DAT_146858828 == -1) {
        FName::FName(&DAT_146858820,L"SpawnedWarmup",1);
        _Init_thread_footer(&DAT_146858828);
      }
    }
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    fVar2 = (float)FUN_142de77e0(param_1 + 0x298,*param_2,0,&local_res8);
    *(float *)(lVar1 + 0x50) = fVar2 + *(float *)(param_2 + 3);
    *(undefined8 *)(lVar1 + 0x48) = DAT_146858820;
  }
  return;
}



// FUNCTION 1406ef1d0 FUN_1406ef1d0 body=146 status=ok
// SIG undefined FUN_1406ef1d0(void)

void FUN_1406ef1d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x688))();
  uVar4 = 0;
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_142e27720();
    uVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
  }
  FWeakObjectPtr::operator=(lVar1 + lVar2 + 0x74,uVar4);
  uVar4 = UBlackboardKeyType_Bool::GetPrivateStaticClass();
  FUN_1406ed570(param_1,param_2,&DAT_146858608,uVar4,0);
  return;
}



// FUNCTION 1406ef270 FUN_1406ef270 body=86 status=ok
// SIG undefined FUN_1406ef270(void)

void FUN_1406ef270(longlong param_1,longlong param_2)

{
  FUN_1406da410(*(longlong *)(param_2 + 8) + *(longlong *)(param_1 + 0xd8) + 0x60,param_1 + 0x1d0);
  if ((*(char *)(param_1 + 0x409) == '\0') || (*(char *)(param_1 + 0x408) != '\x04')) {
    FUN_1406fa730(param_1,param_2);
  }
  return;
}



// FUNCTION 1406ef2d0 Insert body=139 status=ok
// SIG undefined Insert(void)

int TArray<wchar_t,FDefaultAllocator>::Insert
              (longlong *param_1,void *param_2,int param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_3) {
    ResizeGrow(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_4 * 2);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)param_3 * 2 + (longlong)_Src),_Src,(longlong)(iVar1 - param_4) * 2);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + (longlong)param_4 * 2),param_2,(longlong)param_3 * 2);
  return param_4;
}



// FUNCTION 1406ef360 FUN_1406ef360 body=28 status=ok
// SIG undefined FUN_1406ef360(void)

bool FUN_1406ef360(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_142c73400(param_1,1,1);
  return cVar1 == '\0';
}



// FUNCTION 1406ef390 FUN_1406ef390 body=84 status=ok
// SIG undefined FUN_1406ef390(void)

undefined1 FUN_1406ef390(longlong param_1)

{
  char cVar1;
  
  if (((*(longlong *)(param_1 + 0x4e8) != 0) && (*(longlong *)(param_1 + 0x468) != 0)) &&
     (cVar1 = FUN_142d86a70(*(longlong *)(param_1 + 0x468) + 0x2428), cVar1 == '\0')) {
    return 1;
  }
  if ((*(longlong *)(param_1 + 0x4e8) == 0) && (*(char *)(param_1 + 0x4e0) != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1406ef3f0 FUN_1406ef3f0 body=181 status=ok
// SIG undefined FUN_1406ef3f0(void)

ulonglong FUN_1406ef3f0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146858768) {
    _Init_thread_header(&DAT_146858768);
    if (DAT_146858768 == -1) {
      FName::FName(&DAT_146858760,L"HoldAtPoint",1);
      _Init_thread_footer(&DAT_146858768);
    }
  }
  lVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,DAT_146858760);
  uVar2 = 0;
  if ((lVar1 != 0) &&
     (uVar2 = *(ulonglong *)(param_2 + 8),
     *(char *)(*(longlong *)(lVar1 + 0xd8) + 0x28 + uVar2) == '\x02')) {
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1406ef4b0 FUN_1406ef4b0 body=181 status=ok
// SIG undefined FUN_1406ef4b0(void)

ulonglong FUN_1406ef4b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146858748) {
    _Init_thread_header(&DAT_146858748);
    if (DAT_146858748 == -1) {
      FName::FName(&DAT_146858740,L"PerformAction",1);
      _Init_thread_footer(&DAT_146858748);
    }
  }
  lVar1 = (**(code **)(*param_1 + 0x3e0))(param_1,DAT_146858740);
  uVar2 = 0;
  if ((lVar1 != 0) &&
     (uVar2 = *(ulonglong *)(param_2 + 8),
     *(char *)(*(longlong *)(lVar1 + 0xd8) + 0x28 + uVar2) == '\x02')) {
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1406ef570 FUN_1406ef570 body=472 status=ok
// SIG undefined FUN_1406ef570(void)

undefined8 FUN_1406ef570(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong **pplVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *plStack_20;
  
  lVar10 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if ((*(longlong *)(lVar10 + 0xb0) != 0) && (*(longlong *)(lVar10 + 0xb8) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar10 + 0xb8) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_30 = *(longlong **)(lVar10 + 0xb8);
      local_38 = (longlong *)0x0;
      if (local_30 == (longlong *)0x0) {
LAB_1406ef620:
        pplVar8 = &local_38;
        bVar4 = true;
        bVar12 = false;
        plVar11 = local_38;
      }
      else {
        LOCK();
        iVar7 = (int)local_30[1];
        bVar12 = iVar7 == 0;
        if (bVar12) {
          *(int *)(local_30 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar12) {
          LOCK();
          bVar12 = iVar7 == (int)local_30[1];
          if (bVar12) {
            *(int *)(local_30 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar12) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong **)(lVar10 + 0xb0);
            }
            goto LAB_1406ef620;
          }
          LOCK();
          iVar7 = (int)local_30[1];
          bVar12 = iVar7 == 0;
          if (bVar12) {
            *(int *)(local_30 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        pplVar8 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar12 = false;
        plVar11 = (longlong *)0x0;
      }
      goto LAB_1406ef647;
    }
  }
  pplVar8 = &local_28;
  local_28 = (longlong *)0x0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar12 = true;
  plVar11 = (longlong *)0x0;
LAB_1406ef647:
  plVar3 = pplVar8[1];
  pplVar8[1] = (longlong *)0x0;
  *pplVar8 = (longlong *)0x0;
  plVar5 = plStack_20;
  if ((bVar12) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar5 = local_30;
  if ((bVar4) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if ((plVar11 == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*plVar11 + 0x38))(plVar11), cVar6 != '\0')) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar3 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return uVar9;
}



// FUNCTION 1406ef750 FUN_1406ef750 body=109 status=ok
// SIG undefined FUN_1406ef750(void)

undefined1 FUN_1406ef750(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x74 + *(longlong *)(param_2 + 8));
  if ((lVar3 != 0) && (param_3 != 0)) {
    lVar1 = FUN_142e20fc0();
    lVar4 = param_3;
    do {
      if (lVar4 == lVar1) {
        cVar2 = FUN_142c736c0(lVar3,param_3);
        if (cVar2 == '\0') {
          return 0;
        }
        return 1;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 1406ef7c0 FUN_1406ef7c0 body=325 status=ok
// SIG undefined FUN_1406ef7c0(void)

undefined8 FUN_1406ef7c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  if (*(char *)(*(longlong *)(param_1 + 0x100) + 0x60) == '\0') {
    uVar6 = FUN_1406ef570();
    return uVar6;
  }
  lVar8 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if (*(longlong *)(lVar8 + 0xe0) == 0) {
    return 0;
  }
  if (*(longlong *)(lVar8 + 0xe8) == 0) {
    return 0;
  }
  plVar10 = (longlong *)0x0;
  piVar1 = (int *)(*(longlong *)(lVar8 + 0xe8) + 8);
  LOCK();
  iVar5 = *piVar1;
  if (iVar5 == 0) {
    *piVar1 = 0;
    iVar5 = 0;
  }
  UNLOCK();
  if (iVar5 < 1) {
    return 0;
  }
  plVar2 = *(longlong **)(lVar8 + 0xe8);
  plVar9 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar11 = iVar5 == 0;
    if (bVar11) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar10, !bVar11) {
      LOCK();
      bVar11 = iVar5 == (int)plVar2[1];
      if (bVar11) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar11) {
        plVar9 = plVar2;
        if ((plVar2 != (longlong *)0x0) &&
           (plVar3 = *(longlong **)(lVar8 + 0xe0), plVar10 = (longlong *)0x0,
           plVar3 != (longlong *)0x0)) {
          lVar8 = plVar3[1];
          lVar7 = FCameraParams_Orbit::StaticStruct();
          goto joined_r0x0001406ef875;
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  goto LAB_1406ef88d;
joined_r0x0001406ef875:
  if (lVar8 == 0) goto LAB_1406ef885;
  if (lVar8 == lVar7) {
    bVar11 = true;
    goto LAB_1406ef887;
  }
  lVar8 = *(longlong *)(lVar8 + 0x30);
  goto joined_r0x0001406ef875;
LAB_1406ef885:
  bVar11 = false;
LAB_1406ef887:
  if (bVar11) {
    plVar10 = plVar3;
  }
LAB_1406ef88d:
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
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  if ((plVar10 != (longlong *)0x0) && (cVar4 = FUN_142c73400(plVar10,1,1), cVar4 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1406ef930 FUN_1406ef930 body=55 status=ok
// SIG undefined FUN_1406ef930(void)

bool FUN_1406ef930(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1424ca840(param_1 + 0x500);
  if (cVar1 == '\0') {
    return false;
  }
  return *(float *)(param_1 + 0x4fc) < *(float *)(param_1 + 0x51c);
}



// FUNCTION 1406ef970 FUN_1406ef970 body=210 status=ok
// SIG undefined FUN_1406ef970(void)

undefined8 FUN_1406ef970(longlong *param_1)

{
  longlong lVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    if (lVar1 != 0) {
      if ((-(float)DAT_14622e6d0 < *(float *)(param_1 + 1)) &&
         (*(float *)(param_1 + 1) < (float)DAT_14622e6d0)) {
        if ((-DAT_14622e6d0._4_4_ < *(float *)((longlong)param_1 + 0xc)) &&
           (*(float *)((longlong)param_1 + 0xc) < DAT_14622e6d0._4_4_)) {
          if ((((((-DAT_14622e6d8 < *(float *)(param_1 + 2)) &&
                 (*(float *)(param_1 + 2) < DAT_14622e6d8)) &&
                (-(float)DAT_14622e6d0 < *(float *)((longlong)param_1 + 0x14))) &&
               ((*(float *)((longlong)param_1 + 0x14) < (float)DAT_14622e6d0 &&
                (-DAT_14622e6d0._4_4_ < *(float *)(param_1 + 3))))) &&
              (*(float *)(param_1 + 3) < DAT_14622e6d0._4_4_)) &&
             ((-DAT_14622e6d8 < *(float *)((longlong)param_1 + 0x1c) &&
              (*(float *)((longlong)param_1 + 0x1c) < DAT_14622e6d8)))) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1406efa50 FUN_1406efa50 body=219 status=ok
// SIG undefined FUN_1406efa50(void)

void FUN_1406efa50(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_1406efb19:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x0001406efa73:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if (((uVar1 >> 0x19 & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_1406efb19;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x0001406efa73;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_1406efb19;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x0001406efa73;
}



// FUNCTION 1406efb30 FUN_1406efb30 body=207 status=ok
// SIG undefined FUN_1406efb30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1406efb30(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    FUN_142c6c710(param_1);
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c703a0(uVar4,&DAT_146858368,param_2);
    FUN_142c703a0(uVar4,&DAT_146858440,(longlong)param_2 + 4);
    FUN_142c703a0(uVar4,&DAT_146858448,param_2 + 1);
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 1406efc00 FUN_1406efc00 body=207 status=ok
// SIG undefined FUN_1406efc00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1406efc00(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    FUN_142c6c710(param_1);
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c703a0(uVar4,&DAT_146858458,(longlong)param_2 + 4);
    FUN_142c703a0(uVar4,&DAT_146858450,param_2);
    FUN_142c703a0(uVar4,&DAT_146858460,param_2 + 1);
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 1406efcd0 FUN_1406efcd0 body=234 status=ok
// SIG undefined FUN_1406efcd0(void)

ulonglong FUN_1406efcd0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (param_2 == 0xffffffffffffffff) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  else {
    uVar4 = param_1[0x1c];
    if (uVar4 == 0) {
      param_1[0x1b] = param_2;
      lVar3 = (**(code **)(*param_1 + 0x2e0))();
      uVar4 = lVar3 + param_2;
      param_1[0x1c] = uVar4;
    }
    else if (uVar4 <= param_2) goto LAB_1406efd38;
    param_2 = uVar4;
  }
LAB_1406efd38:
  plVar6 = (longlong *)param_1[0x21];
  plVar7 = (longlong *)param_1[0x23];
  plVar1 = plVar6 + (int)param_1[0x22];
  plVar2 = plVar7 + (int)param_1[0x24];
  while ((plVar6 != plVar1 || (plVar7 != plVar2))) {
    plVar5 = plVar6;
    if (plVar6 == plVar1) {
      plVar5 = plVar7;
    }
    plVar5 = (longlong *)*plVar5;
    if (plVar5 != (longlong *)0x0) {
      param_2 = (**(code **)(*plVar5 + 0x308))(plVar5,param_2);
    }
    if (plVar6 == plVar1) {
      plVar7 = plVar7 + 1;
    }
    else {
      plVar6 = plVar6 + 1;
    }
  }
  return param_2;
}



// FUNCTION 1406efdc0 FUN_1406efdc0 body=123 status=ok
// SIG undefined FUN_1406efdc0(void)

ulonglong FUN_1406efdc0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 == 0xffffffffffffffff) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    return 0xffffffffffffffff;
  }
  uVar2 = param_1[0x1c];
  if (uVar2 == 0) {
    param_1[0x1b] = param_2;
    lVar1 = (**(code **)(*param_1 + 0x2e0))();
    uVar2 = param_2 + lVar1;
    param_1[0x1c] = uVar2;
  }
  else if (uVar2 <= param_2) {
    return param_2;
  }
  return uVar2;
}



// FUNCTION 1406efe40 FUN_1406efe40 body=267 status=ok
// SIG undefined FUN_1406efe40(void)

ulonglong FUN_1406efe40(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (param_2 == 0xffffffffffffffff) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  else {
    uVar3 = param_1[0x1c];
    if (uVar3 == 0) {
      param_1[0x1b] = param_2;
      lVar2 = (**(code **)(*param_1 + 0x2e0))();
      uVar3 = lVar2 + param_2;
      param_1[0x1c] = uVar3;
    }
    else if (uVar3 <= param_2) goto LAB_1406efea6;
    param_2 = uVar3;
  }
LAB_1406efea6:
  plVar6 = (longlong *)param_1[0x21];
  plVar7 = (longlong *)param_1[0x23];
  plVar5 = plVar6 + (int)param_1[0x22];
  plVar1 = plVar7 + (int)param_1[0x24];
  while ((plVar6 != plVar5 || (plVar7 != plVar1))) {
    plVar4 = plVar6;
    if (plVar6 == plVar5) {
      plVar4 = plVar7;
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != (longlong *)0x0) {
      param_2 = (**(code **)(*plVar4 + 0x308))(plVar4,param_2);
    }
    if (plVar6 == plVar5) {
      plVar7 = plVar7 + 1;
    }
    else {
      plVar6 = plVar6 + 1;
    }
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x3c8))(param_1);
  if (plVar5 != (longlong *)0x0) {
    param_2 = (**(code **)(*plVar5 + 0x308))(plVar5,param_2);
  }
  return param_2;
}



// FUNCTION 1406eff50 FUN_1406eff50 body=972 status=ok
// SIG undefined FUN_1406eff50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406eff50(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_168 [32];
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined8 local_64;
  float local_5c;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x118) == 0) {
    return;
  }
  FUN_142c703a0(param_1,&DAT_146858368,&local_148);
  FUN_142c703a0(param_1,&DAT_146858440,&fStack_144);
  FUN_142c703a0(param_1,&DAT_146858448,&fStack_140);
  uVar3 = FUN_142c6f130(param_1);
  FUN_142f9e0e0(&local_128,uVar3,&local_148);
  FUN_142c703a0(param_1,&DAT_146858458,&fStack_144);
  FUN_142c703a0(param_1,&DAT_146858450,&local_148);
  FUN_142c703a0(param_1,&DAT_146858460,&fStack_140);
  uVar3 = FUN_142c6f130(param_1);
  FUN_142f9e0e0(&local_138,uVar3,&local_148);
  fStack_144 = local_134 - local_124;
  local_148 = local_138 - local_128;
  fStack_140 = local_130 - local_120;
  fVar5 = local_148 * local_148 + fStack_144 * fStack_144;
  if (fVar5 == 1.0) {
    if (fStack_140 != 0.0) {
LAB_1406f0151:
      fStack_140 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar5) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      local_148 = local_148 * fVar6;
      fStack_144 = fVar6 * fStack_144;
      goto LAB_1406f0151;
    }
    local_148 = DAT_1468b5d90;
    fStack_140 = DAT_1468b5d98;
    fStack_144 = DAT_1468b5d94;
  }
  FVector::Rotation(&local_148,&local_118);
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_a8 = DAT_1468b5da0;
  local_64 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  local_a0 = DAT_1468b5da8;
  local_e8 = CONCAT44(uRam00000001468b5b74,_DAT_1468b5b70);
  uStack_e0 = CONCAT44(uRam00000001468b5b7c,uRam00000001468b5b78);
  local_d8._4_4_ = uRam00000001468b5b84;
  local_d8._0_4_ = _DAT_1468b5b80;
  local_d8._8_4_ = uRam00000001468b5b88;
  local_d8._12_4_ = uRam00000001468b5b8c;
  local_c8._4_4_ = uRam00000001468b5b94;
  local_c8._0_4_ = _DAT_1468b5b90;
  local_c8._8_4_ = uRam00000001468b5b98;
  local_c8._12_4_ = uRam00000001468b5b9c;
  local_b8 = 0;
  local_b0 = 0x3f800000;
  local_9c = 0;
  local_98 = _DAT_1468b5b70;
  uStack_94 = uRam00000001468b5b74;
  uStack_90 = uRam00000001468b5b78;
  uStack_8c = uRam00000001468b5b7c;
  local_88 = _DAT_1468b5b80;
  uStack_84 = uRam00000001468b5b84;
  uStack_80 = uRam00000001468b5b88;
  uStack_7c = uRam00000001468b5b8c;
  local_78 = _DAT_1468b5b90;
  uStack_74 = uRam00000001468b5b94;
  uStack_70 = uRam00000001468b5b98;
  uStack_6c = uRam00000001468b5b9c;
  local_68 = 0;
  local_5c = DAT_1468b5d98;
  local_58 = 1;
  local_f8 = FUN_142c6f130(param_1);
  local_f0 = FUN_142c6f840(param_1,lVar1 + 0xd8,1);
  if (local_f0 != 0) {
    lVar4 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_f0 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_f0 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1406f025b;
  }
  local_f0 = 0;
LAB_1406f025b:
  FRotator::Quaternion(&local_118,&local_148);
  local_d8._4_4_ = local_134;
  local_d8._0_4_ = local_138;
  local_d8._8_4_ = local_130;
  local_e8 = CONCAT44(fStack_144,local_148);
  uStack_e0 = CONCAT44(uStack_13c,fStack_140);
  local_c8._4_4_ = DAT_1464aa788._4_4_;
  local_c8._0_4_ = (undefined4)DAT_1464aa788;
  local_c8._8_4_ = DAT_1464aa790;
  local_c8._12_4_ = 0;
  local_d8._12_4_ = 0;
  local_a0 = local_110;
  local_b8 = DAT_146b300f0;
  local_b0 = CONCAT44(*(undefined4 *)(lVar1 + 0xc0),(undefined4)local_b0);
  local_a8 = local_118;
  FUN_142cad7a0(&local_f8);
  return;
}



// FUNCTION 1406f0320 FUN_1406f0320 body=862 status=ok
// SIG undefined FUN_1406f0320(void)

ulonglong FUN_1406f0320(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [12];
  undefined1 local_ec [20];
  undefined1 local_d8 [12];
  undefined4 local_cc;
  
  lVar10 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  lVar2 = *(longlong *)(*param_2 + 0x498);
  plVar7 = (longlong *)FWeakObjectPtr::Get(lVar10 + 0xc0);
  if (((lVar2 == 0) || (plVar7 == (longlong *)0x0)) || (*(longlong *)(param_1 + 0x100) == 0)) {
    return (ulonglong)plVar7 & 0xffffffffffffff00;
  }
  lVar3 = *(longlong *)(lVar2 + 0x168);
  if (lVar3 == 0) {
    uVar11 = (undefined4)DAT_1468b5da0;
    uVar13 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_130 = DAT_1468b5da8;
  }
  else {
    local_108 = *(float *)(lVar3 + 0x210);
    fStack_104 = *(float *)(lVar3 + 0x214);
    fStack_100 = *(float *)(lVar3 + 0x218);
    fStack_fc = *(float *)(lVar3 + 0x21c);
    auVar16._4_4_ = -(uint)(*(float *)(lVar3 + 0x254) != fStack_104);
    auVar16._0_4_ = -(uint)(*(float *)(lVar3 + 0x250) != local_108);
    auVar16._8_4_ = -(uint)(*(float *)(lVar3 + 600) != fStack_100);
    auVar16._12_4_ = -(uint)(*(float *)(lVar3 + 0x25c) != fStack_fc);
    iVar6 = movmskps((int)plVar7,auVar16);
    if (iVar6 != 0) {
      *(float *)(lVar3 + 0x250) = local_108;
      *(float *)(lVar3 + 0x254) = fStack_104;
      *(float *)(lVar3 + 600) = fStack_100;
      *(float *)(lVar3 + 0x25c) = fStack_fc;
      puVar8 = (undefined8 *)FQuat::Rotator(&local_108,local_f8);
      *(undefined8 *)(lVar3 + 0x260) = *puVar8;
      *(undefined4 *)(lVar3 + 0x268) = *(undefined4 *)(puVar8 + 1);
    }
    uVar11 = (undefined4)*(undefined8 *)(lVar3 + 0x260);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x260) >> 0x20);
    local_130 = *(float *)(lVar3 + 0x268);
  }
  local_138 = CONCAT44(uVar13,uVar11);
  local_128 = local_138;
  local_120 = local_130;
  pfVar9 = (float *)FRotator::Vector(&local_138,local_ec);
  fVar12 = pfVar9[1];
  fVar17 = *pfVar9;
  fVar14 = fVar17 * fVar17 + fVar12 * fVar12;
  if (fVar14 == 1.0) {
    if (pfVar9[2] == 0.0) {
      local_138 = *(undefined8 *)pfVar9;
      local_130 = pfVar9[2];
      local_114 = (float)((ulonglong)local_138 >> 0x20);
      local_110 = local_130;
      local_118 = (float)local_138;
      goto LAB_1406f051e;
    }
  }
  else {
    local_114 = DAT_1468b5d94;
    local_110 = DAT_1468b5d98;
    local_118 = DAT_1468b5d90;
    if (fVar14 < 1e-08) goto LAB_1406f051e;
    auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar15 = auVar16._0_4_;
    fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
    fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
    fVar17 = fVar17 * fVar15;
    fVar12 = fVar12 * fVar15;
  }
  local_114 = fVar12;
  local_110 = 0.0;
  local_118 = fVar17;
LAB_1406f051e:
  fVar12 = *(float *)(*(longlong *)(param_1 + 0x100) + 0x80) * *(float *)(lVar10 + 0x48);
  local_118 = local_118 * fVar12;
  local_114 = local_114 * fVar12;
  local_110 = local_110 * fVar12;
  cVar4 = (**(code **)(*plVar7 + 0x458))(plVar7,&local_118,1,0);
  if (cVar4 == '\0') {
    lVar10 = *(longlong *)(lVar2 + 0x168);
    if (lVar10 == 0) {
      local_120 = DAT_1468b5d98;
      puVar8 = &local_128;
      local_128 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      puVar8 = &local_138;
      local_130 = *(float *)(lVar10 + 0x228);
      local_138 = *(undefined8 *)(lVar10 + 0x220);
    }
    uVar1 = *puVar8;
    local_120 = *(float *)(puVar8 + 1);
    _guard_xfg_dispatch_icall_nop(local_d8,0,0x90);
    local_cc = 0x3f800000;
    local_130 = local_120 + local_110;
    local_138 = CONCAT44((float)((ulonglong)uVar1 >> 0x20) + local_114,(float)uVar1 + local_118);
    local_128 = uVar1;
    uVar5 = FUN_1406de3b0(param_1,local_d8,lVar2,&local_128,&local_138);
    *param_3 = uVar5;
  }
  return (ulonglong)(cVar4 == '\0');
}



// FUNCTION 1406f0680 FUN_1406f0680 body=33 status=ok
// SIG undefined FUN_1406f0680(void)

undefined1 FUN_1406f0680(longlong param_1)

{
  if (((*(char *)(param_1 + 0x141) == '\x04') && (*(char *)(param_1 + 0xe8) == '\0')) &&
     (*(int *)(param_1 + 0xec) == -1)) {
    return 0;
  }
  return 1;
}



// FUNCTION 1406f06d0 FUN_1406f06d0 body=43 status=ok
// SIG undefined FUN_1406f06d0(void)

undefined1 FUN_1406f06d0(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x1731) == '\x02') && (*(char *)(param_1 + 0xf98) == '\a')) {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f0700 FUN_1406f0700 body=34 status=ok
// SIG undefined FUN_1406f0700(void)

undefined1 FUN_1406f0700(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x350) == '\0') {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f0730 FUN_1406f0730 body=34 status=ok
// SIG undefined FUN_1406f0730(void)

undefined1 FUN_1406f0730(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xf98) == '\a') {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f0760 FUN_1406f0760 body=34 status=ok
// SIG undefined FUN_1406f0760(void)

undefined1 FUN_1406f0760(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x360) == '\0') {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f0790 FUN_1406f0790 body=34 status=ok
// SIG undefined FUN_1406f0790(void)

undefined1 FUN_1406f0790(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x2c0) == '\x01') {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f07c0 FUN_1406f07c0 body=34 status=ok
// SIG undefined FUN_1406f07c0(void)

undefined1 FUN_1406f07c0(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x3c0) == '\x01') {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f07f0 FUN_1406f07f0 body=43 status=ok
// SIG undefined FUN_1406f07f0(void)

undefined1 FUN_1406f07f0(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x11b8) == '\x01') && (*(char *)(param_1 + 0x171) == '\x01')) {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f0820 FUN_1406f0820 body=52 status=ok
// SIG undefined FUN_1406f0820(void)

undefined1 FUN_1406f0820(longlong param_1)

{
  char cVar1;
  
  if (((*(char *)(param_1 + 0x19f0) == '\x01') && (*(char *)(param_1 + 0x13f9) == '\x03')) &&
     (*(char *)(param_1 + 0xf98) == '\a')) {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f0860 FUN_1406f0860 body=52 status=ok
// SIG undefined FUN_1406f0860(void)

undefined1 FUN_1406f0860(longlong param_1)

{
  char cVar1;
  
  if (((*(char *)(param_1 + 0x1c11) == '\x02') && (*(char *)(param_1 + 0x1731) == '\x02')) &&
     (*(char *)(param_1 + 0xf98) == '\a')) {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f08a0 FUN_1406f08a0 body=52 status=ok
// SIG undefined FUN_1406f08a0(void)

undefined1 FUN_1406f08a0(longlong param_1)

{
  char cVar1;
  
  if (((*(char *)(param_1 + 0x1b20) == '\x06') && (*(char *)(param_1 + 0x1731) == '\x02')) &&
     (*(char *)(param_1 + 0xf98) == '\a')) {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f08e0 FUN_1406f08e0 body=52 status=ok
// SIG undefined FUN_1406f08e0(void)

undefined1 FUN_1406f08e0(longlong param_1)

{
  char cVar1;
  
  if (((*(char *)(param_1 + 0x1a18) == '\x04') && (*(char *)(param_1 + 0x13f9) == '\x03')) &&
     (*(char *)(param_1 + 0xf98) == '\a')) {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f0920 FUN_1406f0920 body=34 status=ok
// SIG undefined FUN_1406f0920(void)

undefined1 FUN_1406f0920(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x171) == '\x01') {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f0950 FUN_1406f0950 body=34 status=ok
// SIG undefined FUN_1406f0950(void)

undefined1 FUN_1406f0950(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x11b8) == '\x06') {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f0980 FUN_1406f0980 body=43 status=ok
// SIG undefined FUN_1406f0980(void)

undefined1 FUN_1406f0980(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x13f9) == '\x03') && (*(char *)(param_1 + 0xf98) == '\a')) {
    cVar1 = FUN_140714be0();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f09b0 FUN_1406f09b0 body=1346 status=ok
// SIG undefined FUN_1406f09b0(void)

byte FUN_1406f09b0(longlong param_1,char *param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  
  bVar5 = FUN_1406f0f00();
  param_3 = (longlong *)*param_3;
  bVar5 = bVar5 & 1;
  if (param_3 != (longlong *)0x0) {
    if (*param_2 == '\0') {
      FBitWriter::WriteBit(param_3,*(undefined1 *)(param_1 + 0x520));
      FUN_1406da970(param_3,param_1 + 0x524);
      FUN_1406da970(param_3,param_1 + 0x530);
      puVar3 = *(undefined4 **)param_3[1];
      if (puVar3 + 1 <= (undefined4 *)((undefined8 *)param_3[1])[1]) {
        *(undefined4 *)(param_1 + 0x53c) = *puVar3;
        *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
        FBitWriter::WriteBit(param_3,*(undefined1 *)(param_1 + 0x540));
        return bVar5;
      }
      (**(code **)(*param_3 + 0x50))(param_3,param_1 + 0x53c,4);
      if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_3,param_1 + 0x53c,4);
      }
      FBitWriter::WriteBit(param_3,*(undefined1 *)(param_1 + 0x540));
      return bVar5;
    }
    if (*param_2 != '\x01') {
      return bVar5;
    }
    lVar2 = *(longlong *)(param_2 + 0x28);
    if (lVar2 == 0) {
      return bVar5;
    }
    if (*(char *)(lVar2 + 0x44) != *(char *)(param_1 + 0x520)) {
      FUN_142c881e0(param_3,8,param_2);
      FBitWriter::WriteBit(param_3,*(undefined1 *)(param_1 + 0x520));
    }
    if (((*(float *)(param_1 + 0x524) != *(float *)(lVar2 + 0x48)) ||
        (*(float *)(param_1 + 0x528) != *(float *)(lVar2 + 0x4c))) ||
       (*(float *)(param_1 + 0x52c) != *(float *)(lVar2 + 0x50))) {
      FUN_142c881e0(param_3,9,param_2);
      FUN_1406da970(param_3,param_1 + 0x524);
    }
    if (((*(float *)(param_1 + 0x530) != *(float *)(lVar2 + 0x54)) ||
        (*(float *)(param_1 + 0x534) != *(float *)(lVar2 + 0x58))) ||
       (*(float *)(param_1 + 0x538) != *(float *)(lVar2 + 0x5c))) {
      FUN_142c881e0(param_3,10,param_2);
      FUN_1406da970(param_3,param_1 + 0x530);
    }
    if (*(float *)(param_1 + 0x53c) != *(float *)(lVar2 + 0x60)) {
      FUN_142c881e0(param_3,0xb,param_2);
      puVar3 = *(undefined4 **)param_3[1];
      if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar3 + 1) {
        (**(code **)(*param_3 + 0x50))(param_3,param_1 + 0x53c,4);
        if ((*(byte *)((longlong)param_3 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_3,param_1 + 0x53c,4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x53c) = *puVar3;
        *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
      }
    }
    if (*(char *)(lVar2 + 100) == *(char *)(param_1 + 0x540)) {
      return bVar5;
    }
    FUN_142c881e0(param_3,0xc,param_2);
    FBitWriter::WriteBit(param_3,*(undefined1 *)(param_1 + 0x540));
    return bVar5;
  }
  if (param_4 == (longlong *)0x0) {
    return bVar5;
  }
  if (*param_2 == '\0') {
    bVar6 = false;
    if (-1 < (char)param_4[5]) {
      lVar2 = param_4[0x15];
      if (lVar2 < param_4[0x14]) {
        bVar6 = (*(byte *)((longlong)(int)(lVar2 >> 3) + param_4[0x12]) &
                '\x01' << ((byte)lVar2 & 7)) != 0;
        param_4[0x15] = lVar2 + 1;
      }
      else {
        FUN_1416952d0(param_4);
      }
    }
    *(bool *)(param_1 + 0x520) = bVar6;
    FUN_1406da970(param_4,param_1 + 0x524);
    FUN_1406da970(param_4,param_1 + 0x530);
    puVar3 = *(undefined4 **)param_4[1];
    if ((undefined4 *)((undefined8 *)param_4[1])[1] < puVar3 + 1) {
      (**(code **)(*param_4 + 0x50))(param_4,param_1 + 0x53c,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_4,param_1 + 0x53c,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x53c) = *puVar3;
      *(longlong *)param_4[1] = *(longlong *)param_4[1] + 4;
    }
    bVar6 = false;
    if ((char)param_4[5] < '\0') goto LAB_1406f0ece;
    lVar2 = param_4[0x15];
    if (param_4[0x14] <= lVar2) {
      FUN_1416952d0(param_4,1);
      goto LAB_1406f0ece;
    }
    bVar4 = *(byte *)((longlong)(int)(lVar2 >> 3) + param_4[0x12]) & '\x01' << ((byte)lVar2 & 7);
    param_4[0x15] = lVar2 + 1;
  }
  else {
    if (*param_2 != '\x01') {
      return bVar5;
    }
    cVar1 = param_2[1];
    if (cVar1 == '\b') {
      bVar6 = false;
      if (-1 < (char)param_4[5]) {
        lVar2 = param_4[0x15];
        if (param_4[0x14] <= lVar2) {
          FUN_1416952d0(param_4,1);
          *(undefined1 *)(param_1 + 0x520) = 0;
          return bVar5;
        }
        bVar6 = (*(byte *)((longlong)(int)(lVar2 >> 3) + param_4[0x12]) &
                '\x01' << ((byte)lVar2 & 7)) != 0;
        param_4[0x15] = lVar2 + 1;
      }
      *(bool *)(param_1 + 0x520) = bVar6;
      return bVar5;
    }
    if (cVar1 == '\t') {
      FUN_1406da970(param_4,param_1 + 0x524);
      return bVar5;
    }
    if (cVar1 == '\n') {
      FUN_1406da970(param_4,param_1 + 0x530);
      return bVar5;
    }
    if (cVar1 == '\v') {
      puVar3 = *(undefined4 **)param_4[1];
      if (puVar3 + 1 <= (undefined4 *)((undefined8 *)param_4[1])[1]) {
        *(undefined4 *)(param_1 + 0x53c) = *puVar3;
        *(longlong *)param_4[1] = *(longlong *)param_4[1] + 4;
        return bVar5;
      }
      (**(code **)(*param_4 + 0x50))(param_4,param_1 + 0x53c,4);
      if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) == 0) {
        return bVar5;
      }
      FArchive::ByteSwap(param_4,param_1 + 0x53c,4);
      return bVar5;
    }
    if (cVar1 != '\f') {
      return bVar5;
    }
    bVar6 = false;
    if ((char)param_4[5] < '\0') goto LAB_1406f0ece;
    lVar2 = param_4[0x15];
    if (param_4[0x14] <= lVar2) {
      FUN_1416952d0(param_4,1);
      goto LAB_1406f0ece;
    }
    bVar4 = *(byte *)((longlong)(int)(lVar2 >> 3) + param_4[0x12]) & '\x01' << ((byte)lVar2 & 7);
    param_4[0x15] = lVar2 + 1;
  }
  bVar6 = bVar4 != 0;
LAB_1406f0ece:
  *(bool *)(param_1 + 0x540) = bVar6;
  return bVar5;
}



// FUNCTION 1406f0f00 FUN_1406f0f00 body=644 status=ok
// SIG undefined FUN_1406f0f00(void)

byte FUN_1406f0f00(longlong param_1,char *param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  bool bVar5;
  
  bVar4 = FUN_142c79030();
  lVar2 = *param_3;
  bVar4 = bVar4 & 1;
  if (lVar2 == 0) {
    if (param_4 == 0) {
      return bVar4;
    }
    if (*param_2 == '\0') {
      bVar5 = false;
      if (-1 < *(char *)(param_4 + 0x28)) {
        lVar2 = *(longlong *)(param_4 + 0xa8);
        if (lVar2 < *(longlong *)(param_4 + 0xa0)) {
          bVar5 = (*(byte *)((longlong)(int)(lVar2 >> 3) + *(longlong *)(param_4 + 0x90)) &
                  '\x01' << ((byte)lVar2 & 7)) != 0;
          *(longlong *)(param_4 + 0xa8) = lVar2 + 1;
        }
        else {
          FUN_1416952d0(param_4,1);
        }
      }
      *(bool *)(param_1 + 0x4c0) = bVar5;
      FUN_1406da970(param_4,param_1 + 0x4c4);
    }
    else {
      if (*param_2 != '\x01') {
        return bVar4;
      }
      cVar1 = param_2[1];
      if (cVar1 == '\x05') {
        bVar5 = false;
        if (-1 < *(char *)(param_4 + 0x28)) {
          lVar2 = *(longlong *)(param_4 + 0xa8);
          if (*(longlong *)(param_4 + 0xa0) <= lVar2) {
            FUN_1416952d0(param_4,1);
            *(undefined1 *)(param_1 + 0x4c0) = 0;
            return bVar4;
          }
          bVar5 = (*(byte *)((longlong)(int)(lVar2 >> 3) + *(longlong *)(param_4 + 0x90)) &
                  '\x01' << ((byte)lVar2 & 7)) != 0;
          *(longlong *)(param_4 + 0xa8) = lVar2 + 1;
        }
        *(bool *)(param_1 + 0x4c0) = bVar5;
        return bVar4;
      }
      if (cVar1 == '\x06') {
        param_1 = param_1 + 0x4c4;
        goto LAB_1406f1162;
      }
      if (cVar1 != '\a') {
        return bVar4;
      }
    }
  }
  else {
    param_4 = lVar2;
    if (*param_2 == '\0') {
      FBitWriter::WriteBit(lVar2,*(undefined1 *)(param_1 + 0x4c0));
      FUN_1406da970(lVar2,param_1 + 0x4c4);
    }
    else {
      if (*param_2 != '\x01') {
        return bVar4;
      }
      lVar3 = *(longlong *)(param_2 + 0x28);
      if (lVar3 == 0) {
        return bVar4;
      }
      if (*(char *)(lVar3 + 0x29) != *(char *)(param_1 + 0x4c0)) {
        FUN_142c881e0(lVar2,5,param_2);
        FBitWriter::WriteBit(lVar2,*(undefined1 *)(param_1 + 0x4c0));
      }
      if (((*(float *)(param_1 + 0x4c4) != *(float *)(lVar3 + 0x2c)) ||
          (*(float *)(param_1 + 0x4c8) != *(float *)(lVar3 + 0x30))) ||
         (*(float *)(param_1 + 0x4cc) != *(float *)(lVar3 + 0x34))) {
        FUN_142c881e0(lVar2,6,param_2);
        FUN_1406da970(lVar2,param_1 + 0x4c4);
      }
      if (((*(float *)(param_1 + 0x4d0) == *(float *)(lVar3 + 0x38)) &&
          (*(float *)(param_1 + 0x4d4) == *(float *)(lVar3 + 0x3c))) &&
         (*(float *)(param_1 + 0x4d8) == *(float *)(lVar3 + 0x40))) {
        return bVar4;
      }
      FUN_142c881e0(lVar2,7,param_2);
    }
  }
  param_1 = param_1 + 0x4d0;
LAB_1406f1162:
  FUN_1406da970(param_4,param_1);
  return bVar4;
}



// FUNCTION 1406f1190 FUN_1406f1190 body=205 status=ok
// SIG undefined FUN_1406f1190(void)

void FUN_1406f1190(longlong param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong local_10;
  
  if (param_4 == '\x01') {
    if (0 < *(int *)(param_1 + 0xf78)) {
      local_30 = *param_3;
      local_10 = param_3[2];
      local_28 = *(undefined8 *)(local_30 + 0x5c8);
      local_48 = (undefined4)local_30;
      uStack_44 = (undefined4)((ulonglong)local_30 >> 0x20);
      uStack_40 = (undefined4)param_3[1];
      uStack_3c = (undefined4)((ulonglong)param_3[1] >> 0x20);
      local_20 = local_48;
      uStack_1c = uStack_44;
      uStack_18 = uStack_40;
      uStack_14 = uStack_3c;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0xf70,&local_30);
    }
    plVar1 = *(longlong **)(param_1 + 0xf80);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0xf88) * 2;
    if (plVar1 != plVar2) {
      while (((int)plVar1[1] == 0 || (*plVar1 == 0))) {
        plVar1 = plVar1 + 2;
        if (plVar1 == plVar2) {
          return;
        }
      }
      TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
                (param_1 + 0xf80,param_1,param_3);
    }
  }
  return;
}



// FUNCTION 1406f1260 FUN_1406f1260 body=534 status=ok
// SIG undefined FUN_1406f1260(void)

undefined8 FUN_1406f1260(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  byte *pbVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 local_res20;
  undefined4 local_res24;
  longlong *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  
  if (((*(longlong *)(param_4 + 8) != 0) &&
      (cVar4 = FWeakObjectPtr::IsValid(param_4), cVar4 != '\0')) &&
     (**(longlong **)(param_4 + 8) == 0x4149416374447400)) {
    local_48 = (longlong *)FWeakObjectPtr::Get(param_4);
    local_40 = *(longlong *)(param_4 + 8);
    local_38 = *(undefined8 *)(param_4 + 0x10);
    lVar5 = (**(code **)(*local_48 + 0x148))(local_48);
    lVar3 = local_40;
    if (lVar5 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = CONCAT44(*(undefined4 *)(lVar5 + 0x7b0),*(undefined4 *)(lVar5 + 0x8c8));
    }
    local_28 = 0;
    if (*(char *)(param_1 + 0x113) != '\0') {
      plVar8 = (longlong *)0x0;
      plVar7 = plVar8;
      if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
        plVar7 = *(longlong **)(param_1 + 0x20);
      }
      if ((plVar7 != (longlong *)0x0) &&
         (lVar5 = plVar7[0x1b], *(char *)(lVar5 + 0x28 + local_40) == '\x02')) {
        *(undefined1 *)(lVar5 + 0x29 + local_40) = 4;
        if ((*(int *)(lVar5 + 0x10 + local_40) != 0) &&
           ((plVar6 = *(longlong **)(lVar5 + 8 + local_40), plVar6 != (longlong *)0x0 &&
            (cVar4 = (**(code **)(*plVar6 + 0x18))(), cVar4 != '\0')))) {
          plVar6 = plVar8;
          if (*(int *)(lVar5 + 0x10 + lVar3) != 0) {
            plVar6 = *(longlong **)(lVar5 + 8 + lVar3);
          }
          (**(code **)(*plVar6 + 0x40))(plVar6,plVar7,&local_48,2);
        }
        (**(code **)(*plVar7 + 0x2c0))(plVar7,&local_48,4);
        if (*(char *)(lVar5 + 0x29 + lVar3) == '\x01') {
          piVar2 = (int *)(lVar5 + 0x30 + lVar3);
          *piVar2 = *piVar2 + 1;
        }
        *(undefined4 *)(lVar5 + 0x3c + lVar3) = (undefined4)local_30;
        (**(code **)(*plVar7 + 0x2c8))(plVar7,&local_48);
        if (((*(int *)(lVar5 + 0x10 + lVar3) != 0) &&
            (plVar6 = *(longlong **)(lVar5 + 8 + lVar3), plVar6 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar6 + 0x18))(), cVar4 != '\0')) {
          if (*(int *)(lVar5 + 0x10 + lVar3) != 0) {
            plVar8 = *(longlong **)(lVar5 + 8 + lVar3);
          }
          (**(code **)(*plVar8 + 0x40))(plVar8,plVar7,&local_48,3);
        }
        *(undefined1 *)(lVar5 + 0x28 + lVar3) = 3;
        FWeakObjectPtr::operator=(&local_res20,0);
        *(undefined4 *)(lVar5 + lVar3) = local_res20;
        *(undefined4 *)(lVar5 + 4 + lVar3) = local_res24;
      }
    }
    if ((*(char *)(param_1 + 0x114) != '\0') && (local_48[0xc1] != 0)) {
      pbVar1 = (byte *)(local_48[0xc1] + 0x218);
      *pbVar1 = *pbVar1 | 1;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1406f1490 FUN_1406f1490 body=430 status=ok
// SIG undefined FUN_1406f1490(void)

void FUN_1406f1490(longlong param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *local_res18;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined2 local_18;
  
  if ((param_3 != (longlong *)0x0) &&
     (plVar4 = (longlong *)(**(code **)(*param_2 + 0x668))(param_2), plVar4 != (longlong *)0x0)) {
    lVar5 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_28 = 0xffffffff;
      local_30 = (longlong *)0x0;
      lVar5 = plVar4[0xc1];
      local_38 = plVar4;
      if ((lVar5 != 0) && (bVar2 = FUN_14070bfc0(lVar5,param_1), bVar2 < 2)) {
        local_30 = *(longlong **)(lVar5 + 0x20 + ((ulonglong)bVar2 + 0xf) * 0x30);
        local_28 = *(undefined8 *)(lVar5 + 0x18 + ((ulonglong)bVar2 + 0xf) * 0x30);
      }
      lVar5 = (**(code **)(*local_38 + 0x148))();
      if (lVar5 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = CONCAT44(*(undefined4 *)(lVar5 + 0x7b0),*(undefined4 *)(lVar5 + 0x8c8));
      }
      local_18 = 0;
      if ((local_30 == (longlong *)0x0) || (*local_30 != 0x4149416374447400)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (plVar4[0xad] != 0)) {
        cVar3 = FUN_142cc3a70(param_1 + 0x100,plVar4[0xad],&local_res18);
        if (((cVar3 != '\0') && (local_res18 != (longlong *)0x0)) &&
           ((param_3 == local_res18 ||
            (plVar4 = (longlong *)(**(code **)(*param_3 + 0x678))(param_3), plVar4 == local_res18)))
           ) {
          if (*(char *)(param_1 + 0x110) == '\x01') {
            uVar6 = 1;
          }
          else if (*(char *)(param_1 + 0x110) == '\x02') {
            uVar6 = 2;
          }
          else {
            uVar6 = 0;
          }
          FUN_1406f7e60(param_1,&local_38,uVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 1406f1640 FUN_1406f1640 body=1459 status=ok
// SIG undefined FUN_1406f1640(void)

void FUN_1406f1640(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  void **ppvVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  void *pvVar11;
  longlong lVar12;
  uint uVar13;
  void **ppvVar14;
  longlong lVar15;
  longlong lVar16;
  bool local_res18;
  bool bVar17;
  longlong *local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined2 local_118;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  void *local_e0;
  ulonglong local_d8;
  void *local_d0;
  longlong local_c8 [2];
  void *local_b8;
  void *pvStack_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  longlong local_98;
  longlong *local_90;
  longlong lStack_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  
  if (((*(longlong *)(param_3 + 8) == 0) ||
      (cVar9 = FWeakObjectPtr::IsValid(param_3), cVar9 == '\0')) ||
     (**(longlong **)(param_3 + 8) != 0x4149416374447400)) {
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    return;
  }
  local_138 = (longlong *)FWeakObjectPtr::Get(param_3);
  local_130 = *(longlong *)(param_3 + 8);
  local_128 = *(undefined8 *)(param_3 + 0x10);
  lVar10 = (**(code **)(*local_138 + 0x148))(local_138);
  lVar8 = local_130;
  if (lVar10 == 0) {
    local_120 = 0;
  }
  else {
    local_120 = CONCAT44(*(undefined4 *)(lVar10 + 0x7b0),*(undefined4 *)(lVar10 + 0x8c8));
  }
  lVar10 = param_1[0x1b];
  local_118 = 0;
  if (0.0 < *(float *)(local_130 + 0x58 + lVar10)) {
    *(undefined1 *)(local_130 + 0x5c + lVar10) = 1;
  }
  lVar16 = local_138[0xad];
  if (lVar16 == 0) goto LAB_1406f1b89;
  local_res18 = false;
  ppvVar5 = (void **)*param_2;
  if (ppvVar5 != (void **)0x0) {
    param_3 = (undefined1 *)((longlong)ppvVar5 + 0x3e);
    cVar9 = FUN_142bf6d00(param_3);
    if (cVar9 != '\0') {
      cVar9 = FUN_142bf6d00(lVar8 + lVar10 + 0x293);
      if (cVar9 != '\0') {
        *(undefined1 *)(lVar8 + lVar10 + 0x293) = *param_3;
      }
    }
    if (((*(int *)(ppvVar5 + 5) != 3) && (*(int *)(ppvVar5 + 5) != 0)) &&
       (ppvVar5[2] != (void *)0x0)) {
      pvVar11 = (void *)UEnvQueryItemType::GetPrivateStaticClass();
      for (pvVar6 = ppvVar5[2]; pvVar6 != (void *)0x0; pvVar6 = *(void **)((longlong)pvVar6 + 0x30))
      {
        if (pvVar6 == pvVar11) {
          if ((ppvVar5[2] != (void *)0x0) && (0 < *(int *)(ppvVar5 + 1))) {
            uVar13 = (uint)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
            goto LAB_1406f17c9;
          }
          break;
        }
      }
    }
  }
  uVar13 = (uint)param_3 & 0xffffff00;
LAB_1406f17c9:
  if ((*(char *)((longlong)param_1 + 0x1e6) != '\0') ||
     (lVar12 = 0x4a0, *(char *)(param_1[0x1b] + 0x28 + local_130) != '\x02')) {
    lVar12 = 0x1b8;
  }
  lVar12 = lVar12 + (longlong)param_1;
  if ((char)uVar13 == '\0') {
    if (((char)param_1[0x39] != '\0') || (0 < (int)param_1[0x97])) {
      local_res18 = (bool)FUN_142cc5d60(lVar12,lVar16);
    }
    FUN_142cbcc90(lVar12,lVar16);
    if (ppvVar5 != (void **)0x0) {
      lVar16 = lVar8 + 0x293 + lVar10;
      cVar9 = FUN_142bf6d00(lVar16);
      if (cVar9 != '\0') {
        cVar9 = FUN_142be8c30(lVar16);
        lVar12 = local_130;
        bVar17 = cVar9 == '\0';
        lVar16 = param_1[0x1b];
        local_98 = FWeakObjectPtr::Get(local_130 + 0x50 + lVar16);
        if (local_98 != 0) {
          FUN_1406da410(lVar12 + 0x60 + lVar16,lVar8 + 0x60 + lVar10);
          lVar15 = local_98;
          goto LAB_1406f1985;
        }
      }
    }
  }
  else {
    lVar15 = ((longlong)(*(int *)((longlong)*ppvVar5 + 4) * 2) >> 1) + (longlong)ppvVar5[3];
    if (((char)param_1[0x39] != '\0') || (0 < (int)param_1[0x97])) {
      cVar9 = FUN_142cbeb60(lVar12,lVar16,ppvVar5[2],lVar15);
      local_res18 = cVar9 == '\0';
    }
    FUN_142cd3b20(lVar12,lVar16,ppvVar5[2],lVar15);
    lVar16 = lVar8 + 0x293 + lVar10;
    cVar9 = FUN_142bf6d00(lVar16);
    if (cVar9 != '\0') {
      TTLEOnlineRanking2GetParam::SetCategory(lVar16,0);
      lVar12 = local_130;
      lVar16 = param_1[0x1b];
      lVar15 = FWeakObjectPtr::Get(local_130 + 0x50 + lVar16);
      if (lVar15 != 0) {
        FUN_1406da410(lVar12 + 0x60 + lVar16,lVar8 + 0x60 + lVar10);
        bVar17 = false;
LAB_1406f1985:
        FUN_142d488f0(lVar15,*(undefined8 *)(lVar16 + 0x48 + lVar12),param_1 + 0x34,
                      lVar8 + 0x60 + lVar10,bVar17);
      }
    }
  }
  if ((((char)param_1[0x39] != '\0') && (local_res18 != false)) && (local_138[0xc1] != 0)) {
    pbVar3 = (byte *)(local_138[0xc1] + 0x218);
    *pbVar3 = *pbVar3 | 1;
  }
  if ((*(char *)((longlong)param_1 + 0x409) != '\0') && ((char)param_1[0x81] == '\x04')) {
    FUN_1406f7e60(param_1,&local_138,(uVar13 ^ 1) + 1);
    FUN_142193af0(lVar8 + 0x48 + lVar10);
  }
  (**(code **)(*param_1 + 0x3a0))(param_1);
  if ((local_res18 != false) && (0 < (int)param_1[0x97])) {
    lStack_88 = local_130;
    local_80 = local_128;
    local_100 = local_138[0xb9];
    local_68 = 0;
    uStack_60 = 0;
    local_44 = 0xffffffff;
    local_90 = local_138;
    ppvVar14 = &local_78;
    if (ppvVar5 != (void **)0x0) {
      ppvVar14 = ppvVar5;
    }
    local_b8 = (void *)0x0;
    pvStack_b0 = (void *)0xffffffff00000000;
    local_58 = 0;
    uStack_50 = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0;
    local_3a = 0;
    local_e0 = (void *)0x0;
    local_d8 = 0;
    local_d0 = (void *)0x0;
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_a2 = 0;
    local_108 = local_138;
    local_f8 = local_138;
    lStack_f0 = local_130;
    local_e8 = local_128;
    if (&local_e0 != ppvVar14) {
      uVar13 = *(uint *)(ppvVar14 + 1);
      pvVar6 = *ppvVar14;
      local_d8 = (ulonglong)uVar13;
      if (uVar13 != 0) {
        TArray<FVector,FDefaultAllocator>::ResizeForCopy(&local_e0,uVar13,0);
        _guard_xfg_dispatch_icall_nop(local_e0,pvVar6,(longlong)(int)uVar13 * 0xc);
      }
    }
    local_d0 = ppvVar14[2];
    TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(local_c8,ppvVar14 + 3);
    local_b8 = ppvVar14[5];
    pvStack_b0 = ppvVar14[6];
    local_a8 = *(undefined4 *)(ppvVar14 + 7);
    local_a4 = *(undefined2 *)((longlong)ppvVar14 + 0x3c);
    local_a2 = *(undefined1 *)((longlong)ppvVar14 + 0x3e);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x96,&local_108);
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    if (local_e0 != (void *)0x0) {
      FMemory::Free();
    }
  }
LAB_1406f1b89:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  return;
}



// FUNCTION 1406f1c00 FUN_1406f1c00 body=429 status=ok
// SIG undefined FUN_1406f1c00(void)

undefined8 FUN_1406f1c00(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (((*(longlong *)(param_4 + 8) != 0) &&
      (cVar3 = FWeakObjectPtr::IsValid(param_4), cVar3 != '\0')) &&
     (**(longlong **)(param_4 + 8) == 0x4149416374447400)) {
    local_68 = (longlong *)FWeakObjectPtr::Get(param_4);
    local_58 = *(undefined8 *)(param_4 + 0x10);
    lVar2 = *(longlong *)(param_4 + 8);
    local_60 = lVar2;
    lVar4 = (**(code **)(*local_68 + 0x148))(local_68);
    if (lVar4 == 0) {
      local_50 = 0;
    }
    else {
      local_50 = CONCAT44(*(undefined4 *)(lVar4 + 0x7b0),*(undefined4 *)(lVar4 + 0x8c8));
    }
    lVar4 = *(longlong *)(param_1 + 0xd8);
    local_48 = 0;
    cVar3 = FWeakObjectPtr::IsValid(lVar2 + lVar4 + 0x48);
    if ((cVar3 != '\0') && (*(char *)(lVar2 + 0x28 + lVar4) == '\x02')) {
      local_40 = 0xffffffff;
      local_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      cVar3 = FUN_1406e9ce0(param_1,&local_68,&local_40);
      if (cVar3 != '\0') {
        uVar5 = FWeakObjectPtr::Get(lVar2 + lVar4 + 0x48);
        cVar3 = FUN_1407671f0(uVar5,&local_40,*(undefined1 *)(param_1 + 0x110),
                              *(undefined1 *)(param_1 + 0x111));
        if (cVar3 != '\0') {
          *(undefined4 *)(lVar2 + 0x50 + lVar4) = local_40;
          *(undefined4 *)(lVar2 + 0x54 + lVar4) = local_3c;
          puVar1 = (undefined8 *)(lVar2 + 0x58 + lVar4);
          *puVar1 = CONCAT44(uStack_34,uStack_38);
          puVar1[1] = uStack_30;
          *(undefined8 *)(lVar2 + 0x68 + lVar4) = local_28;
          *(undefined8 *)(lVar2 + 0x70 + lVar4) = local_20;
          *(undefined4 *)(lVar2 + 0x78 + lVar4) = local_18;
          FUN_1406f6850(param_1,&local_68);
          return 1;
        }
      }
      FUN_1406dfa00(param_1,&local_68);
      *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + lVar2) = 4;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1406f1db0 FUN_1406f1db0 body=49 status=ok
// SIG undefined FUN_1406f1db0(void)

void FUN_1406f1db0(longlong param_1,longlong param_2)

{
  FUN_1406f1df0();
  *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8) + 0x48) = 0;
  return;
}



// FUNCTION 1406f1df0 FUN_1406f1df0 body=184 status=ok
// SIG undefined FUN_1406f1df0(void)

void FUN_1406f1df0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x90);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x98) * 2;
  do {
    if (plVar1 == plVar2) {
LAB_1406f1e42:
      if (0 < *(int *)(param_1 + 0x88)) {
        local_30 = *param_2;
        local_10 = param_2[2];
        local_48 = (undefined4)local_30;
        uStack_44 = (undefined4)((ulonglong)local_30 >> 0x20);
        uStack_40 = (undefined4)param_2[1];
        uStack_3c = (undefined4)((ulonglong)param_2[1] >> 0x20);
        local_28 = *(undefined8 *)(local_30 + 0x5c8);
        local_20 = local_48;
        uStack_1c = uStack_44;
        uStack_18 = uStack_40;
        uStack_14 = uStack_3c;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x80,&local_30);
      }
      return;
    }
    if (((int)plVar1[1] != 0) && (*plVar1 != 0)) {
      TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
                ((longlong *)(param_1 + 0x90),param_1,param_2);
      goto LAB_1406f1e42;
    }
    plVar1 = plVar1 + 2;
  } while( true );
}



// FUNCTION 1406f1eb0 FUN_1406f1eb0 body=65 status=ok
// SIG undefined FUN_1406f1eb0(void)

void FUN_1406f1eb0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  
  FUN_1406f1df0();
  if (*(longlong *)(*param_2 + 0x628) != 0) {
    uVar1 = 1;
    if (*(char *)(param_1 + 0x100) == '\0') {
      uVar1 = 2;
    }
    FUN_142fb2a70(*(longlong *)(*param_2 + 0x628),uVar1);
  }
  return;
}



// FUNCTION 1406f1f00 FUN_1406f1f00 body=58 status=ok
// SIG undefined FUN_1406f1f00(void)

void FUN_1406f1f00(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_1406f1df0();
  if (*(longlong *)(param_1 + 0x100) != 0) {
    do {
      cVar1 = FUN_1406fbc10(param_1,param_2);
    } while (cVar1 != '\0');
  }
  return;
}



// FUNCTION 1406f1f40 FUN_1406f1f40 body=45 status=ok
// SIG undefined FUN_1406f1f40(void)

void FUN_1406f1f40(undefined8 param_1,longlong *param_2)

{
  FUN_1406f1df0();
                    /* WARNING: Could not recover jumptable at 0x0001406f1f69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*param_2 + 0x5a0) + 0x10))
            ((longlong *)(*param_2 + 0x5a0),1,&DAT_146858600);
  return;
}



// FUNCTION 1406f1f70 FUN_1406f1f70 body=83 status=ok
// SIG undefined FUN_1406f1f70(void)

void FUN_1406f1f70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1406f1df0();
  lVar2 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  *(undefined4 *)(lVar2 + 0x58) = 0;
  *(undefined1 *)(lVar2 + 0x5c) = 0;
  lVar1 = FWeakObjectPtr::Get(lVar2 + 0x50);
  if (lVar1 != 0) {
    FUN_142d48990(lVar1,*(undefined8 *)(lVar2 + 0x48),1);
  }
  return;
}



// FUNCTION 1406f1fd0 FUN_1406f1fd0 body=166 status=ok
// SIG undefined FUN_1406f1fd0(void)

void FUN_1406f1fd0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1406f2080();
  plVar4 = *(longlong **)(param_1 + 0x108);
  plVar5 = *(longlong **)(param_1 + 0x118);
  plVar1 = plVar4 + *(int *)(param_1 + 0x110);
  plVar2 = plVar5 + *(int *)(param_1 + 0x120);
  while ((plVar4 != plVar1 || (plVar5 != plVar2))) {
    plVar3 = plVar4;
    if (plVar4 == plVar1) {
      plVar3 = plVar5;
    }
    plVar3 = (longlong *)*plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x390))(plVar3,param_2,param_3);
    }
    if (plVar4 == plVar1) {
      plVar5 = plVar5 + 1;
    }
    else {
      plVar4 = plVar4 + 1;
    }
  }
  return;
}



// FUNCTION 1406f2080 FUN_1406f2080 body=376 status=ok
// SIG undefined FUN_1406f2080(void)

void FUN_1406f2080(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined1 local_28;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x34 + param_2[1]) = 0;
  if (0 < *(int *)(param_1 + 0xb0)) {
    local_50 = *param_2;
    local_30 = param_2[2];
    local_48 = *(undefined8 *)(local_50 + 0x5c8);
    local_68 = (undefined4)local_50;
    uStack_64 = (undefined4)((ulonglong)local_50 >> 0x20);
    uStack_60 = (undefined4)param_2[1];
    uStack_5c = (undefined4)((ulonglong)param_2[1] >> 0x20);
    local_40 = local_68;
    uStack_3c = uStack_64;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    local_28 = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xa8,&local_50);
  }
  plVar1 = (longlong *)(param_1 + 0xb8);
  plVar5 = (longlong *)*plVar1;
  plVar7 = plVar5 + (longlong)*(int *)(param_1 + 0xc0) * 2;
  if (plVar5 != plVar7) {
    while (((int)plVar5[1] == 0 || (*plVar5 == 0))) {
      plVar5 = plVar5 + 2;
      if (plVar5 == plVar7) {
        return;
      }
    }
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + 1;
    iVar6 = *(int *)(param_1 + 0xcc);
    bVar2 = false;
    iVar4 = *(int *)(param_1 + 0xc0) + -1;
    lVar9 = (longlong)iVar4;
    if (-1 < iVar4) {
      lVar8 = lVar9 << 4;
      bVar2 = false;
      do {
        if ((*(int *)(lVar8 + 8 + *plVar1) == 0) ||
           (plVar5 = *(longlong **)(lVar8 + *plVar1), plVar5 == (longlong *)0x0)) {
LAB_1406f21a8:
          bVar2 = true;
        }
        else {
          cVar3 = (**(code **)(*plVar5 + 0x40))(plVar5,param_1,param_2,param_3);
          if (cVar3 == '\0') goto LAB_1406f21a8;
        }
        lVar8 = lVar8 + -0x10;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
      iVar6 = *(int *)(param_1 + 0xcc);
    }
    *(int *)(param_1 + 0xcc) = iVar6 + -1;
    if (bVar2) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,0);
    }
  }
  return;
}



// FUNCTION 1406f2200 FUN_1406f2200 body=53 status=ok
// SIG undefined FUN_1406f2200(void)

void FUN_1406f2200(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_140715960();
  lVar1 = FUN_14075eaf0(*param_2);
  if (lVar1 != 0) {
    FUN_1407621d0(lVar1 + 0x27a8,*param_2);
    return;
  }
  return;
}



// FUNCTION 1406f2240 FUN_1406f2240 body=142 status=ok
// SIG undefined FUN_1406f2240(void)

void FUN_1406f2240(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  float fVar2;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if (*(char *)(lVar1 + 0x5b) != '\x01') {
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    fVar2 = (float)FUN_142de77e0(lVar1 + 0x60,*param_2,0,&local_res8);
    if (0.0 < fVar2) {
      *(undefined1 *)(lVar1 + 0x5b) = 1;
    }
  }
  *(undefined1 *)(lVar1 + 0x5a) = 1;
  FUN_1406fb8d0(lVar1 + 0x58,param_2);
  FUN_140715960(param_1,param_2,param_3);
  return;
}



// FUNCTION 1406f22d0 FUN_1406f22d0 body=152 status=ok
// SIG undefined FUN_1406f22d0(void)

void FUN_1406f22d0(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  float fVar2;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if ((bool)*(char *)(lVar1 + 0x5b) != (param_3 == '\x01')) {
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    fVar2 = (float)FUN_142de77e0(lVar1 + 0x60,*param_2,0,&local_res8);
    if ((0.0 < fVar2) || (param_3 != '\x01')) {
      *(bool *)(lVar1 + 0x5b) = param_3 == '\x01';
    }
  }
  *(undefined1 *)(lVar1 + 0x5a) = 1;
  FUN_1406fb8d0(lVar1 + 0x58,param_2);
  FUN_140715960(param_1,param_2,param_3);
  return;
}



// FUNCTION 1406f2370 FUN_1406f2370 body=348 status=ok
// SIG undefined FUN_1406f2370(void)

void FUN_1406f2370(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong local_res8;
  
  lVar11 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  cVar4 = FWeakObjectPtr::IsValid(lVar11 + 0x48);
  if (cVar4 != '\0') {
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UAIAspect_ActorCollision::OnPawnHit",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    lVar6 = FWeakObjectPtr::Get(lVar11 + 0x48);
    plVar1 = (longlong *)(lVar6 + 0x280);
    lVar11 = *plVar1;
    iVar10 = *(int *)(lVar6 + 0x288);
    for (lVar12 = lVar11; lVar12 != (longlong)iVar10 * 0x10 + lVar11; lVar12 = lVar12 + 0x10) {
      if ((*(longlong *)(lVar12 + 8) == local_res8) &&
         (lVar7 = FWeakObjectPtr::GetEvenIfUnreachable(lVar12), param_1 == lVar7)) {
        iVar10 = (int)(lVar12 - lVar11 >> 4);
        if (iVar10 != -1) {
          iVar9 = *(int *)(lVar6 + 0x288);
          iVar8 = (iVar9 - iVar10) + -1;
          if (0 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar10 * 0x10 + *plVar1),
                       (void *)((longlong)(iVar9 - iVar8) * 0x10 + *plVar1),(longlong)iVar8 << 4);
            iVar9 = *(int *)(lVar6 + 0x288);
          }
          *(int *)(lVar6 + 0x288) = iVar9 + -1;
        }
        break;
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 1406f24d0 FUN_1406f24d0 body=47 status=ok
// SIG undefined FUN_1406f24d0(void)

void FUN_1406f24d0(undefined8 param_1,longlong *param_2)

{
  FUN_1406f2080();
  if (*(longlong *)(*param_2 + 0x628) != 0) {
    FUN_142fb2a70(*(longlong *)(*param_2 + 0x628),0);
    return;
  }
  return;
}



// FUNCTION 1406f2500 FUN_1406f2500 body=605 status=ok
// SIG undefined FUN_1406f2500(void)

void FUN_1406f2500(longlong param_1,longlong *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *local_30;
  
  FUN_1406f8020();
  lVar7 = *(longlong *)(param_1 + 0x100);
  if ((((lVar7 != 0) && (*(longlong *)(lVar7 + 200) != 0)) && (*(char *)(lVar7 + 0x60) == '\0')) &&
     (lVar7 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 200 + param_2[1]), lVar7 != 0)) {
    FUN_142dc77b0(lVar7,1);
  }
  lVar7 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  *(undefined1 *)(lVar7 + 0x78) = 0;
  *(undefined1 *)(lVar7 + 0xf0) = 0;
  if ((*(longlong *)(lVar7 + 0xb0) != 0) && (*(longlong *)(lVar7 + 0xb8) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar7 + 0xb8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_50 = *(longlong **)(lVar7 + 0xb8);
      local_58 = 0;
      if (local_50 == (longlong *)0x0) {
LAB_1406f2610:
        plVar8 = &local_58;
        bVar4 = true;
        bVar9 = false;
        lVar7 = local_58;
      }
      else {
        LOCK();
        iVar6 = (int)local_50[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_50 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_50[1];
          if (bVar9) {
            *(int *)(local_50 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_50 != (longlong *)0x0) {
              local_58 = *(longlong *)(lVar7 + 0xb0);
            }
            goto LAB_1406f2610;
          }
          LOCK();
          iVar6 = (int)local_50[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_50 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar8 = &local_58;
        local_50 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar7 = 0;
      }
      goto LAB_1406f2637;
    }
  }
  plVar8 = &local_48;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar7 = 0;
LAB_1406f2637:
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = plStack_40;
  if ((bVar9) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar8 = local_50;
  if ((bVar4) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if ((lVar7 != 0) && (lVar5 = *(longlong *)(*param_2 + 0x648), lVar5 != 0)) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_38 = lVar7;
    local_30 = plVar3;
    FUN_142c84750(lVar5,&local_38);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 1406f2760 FUN_1406f2760 body=158 status=ok
// SIG undefined FUN_1406f2760(void)

void FUN_1406f2760(longlong param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x48);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(lVar3 + 0x48);
    FUN_14076d250(uVar1,param_3 == '\x01');
    *(undefined4 *)(lVar3 + 0x48) = 0xffffffff;
    *(undefined4 *)(lVar3 + 0x4c) = 0;
  }
  FItemComparisonDetails::Reset(lVar3 + 0x50);
  FUN_1406dfa00(param_1,param_2);
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 1406f2800 FUN_1406f2800 body=561 status=ok
// SIG undefined FUN_1406f2800(void)

void FUN_1406f2800(longlong param_1,longlong *param_2,char param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  float fVar7;
  undefined8 local_res8;
  
  FUN_1406f2080();
  lVar2 = param_2[1];
  lVar3 = *(longlong *)(param_1 + 0xd8);
  lVar4 = 0;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x20);
  }
  if (*(char *)(*(longlong *)(lVar4 + 0xd8) + 0x41 + lVar2) == '\0') {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar4 + 0x38) < DAT_146858838) &&
       (_Init_thread_header(&DAT_146858838), DAT_146858838 == -1)) {
      FName::FName(&DAT_146858830,L"SucceededCooldown",1);
      _Init_thread_footer(&DAT_146858838);
    }
    if ((*(int *)(lVar4 + 0x38) < DAT_146858848) &&
       (_Init_thread_header(&DAT_146858848), DAT_146858848 == -1)) {
      FName::FName(&DAT_146858840,L"FailedCooldown",1);
      _Init_thread_footer(&DAT_146858848);
    }
    if ((*(int *)(lVar4 + 0x38) < DAT_146858858) &&
       (_Init_thread_header(&DAT_146858858), DAT_146858858 == -1)) {
      FName::FName(&DAT_146858850,L"AbortedCooldown",1);
      _Init_thread_footer(&DAT_146858858);
    }
    if (param_3 == '\x01') {
      lVar4 = param_1 + 0x100;
      bVar6 = *(char *)(param_1 + 0x180) == '\0';
      uVar5 = DAT_146858830;
    }
    else if (param_3 == '\x02') {
      lVar4 = param_1 + 0x188;
      bVar6 = *(char *)(param_1 + 0x208) == '\0';
      uVar5 = DAT_146858840;
    }
    else {
      if (param_3 != '\x03') goto LAB_1406f293b;
      lVar4 = param_1 + 0x210;
      bVar6 = *(char *)(param_1 + 0x290) == '\0';
      uVar5 = DAT_146858850;
    }
    if (bVar6) {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      fVar7 = (float)FUN_142de77e0(lVar4,*param_2,0,&local_res8);
      fVar1 = *(float *)(param_2 + 3);
      *(undefined8 *)(lVar2 + 0x48 + lVar3) = uVar5;
      *(float *)(lVar2 + 0x50 + lVar3) = fVar1 + fVar7;
      return;
    }
  }
LAB_1406f293b:
  *(undefined8 *)(lVar2 + 0x48 + lVar3) = 0;
  *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
  return;
}



// FUNCTION 1406f2a40 FUN_1406f2a40 body=165 status=ok
// SIG undefined FUN_1406f2a40(void)

void FUN_1406f2a40(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(*param_2 + 0x488);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x8e0))(plVar1,0);
    }
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0xd8) + param_2[1] + 0x48) = 0;
  FUN_1406f2080(param_1,param_2,param_3);
  return;
}



// FUNCTION 1406f2af0 FUN_1406f2af0 body=45 status=ok
// SIG undefined FUN_1406f2af0(void)

void FUN_1406f2af0(undefined8 param_1,longlong *param_2)

{
  FUN_1406f2080();
                    /* WARNING: Could not recover jumptable at 0x0001406f2b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(*param_2 + 0x5a0) + 0x10))
            ((longlong *)(*param_2 + 0x5a0),0,&DAT_146858600);
  return;
}



// FUNCTION 1406f2b20 FUN_1406f2b20 body=273 status=ok
// SIG undefined FUN_1406f2b20(void)

void FUN_1406f2b20(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1406f2080();
  lVar3 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  *(undefined4 *)(lVar3 + 0x58) = 0;
  *(undefined1 *)(lVar3 + 0x5c) = 0;
  lVar2 = FWeakObjectPtr::Get(lVar3 + 0x50);
  if (lVar2 != 0) {
    FUN_142d48990(lVar2,*(undefined8 *)(lVar3 + 0x48),0);
  }
  lVar2 = *(longlong *)(*param_2 + 0x568);
  if ((lVar2 != 0) && (cVar1 = FUN_142cc5d60(param_1 + 0x4a0,lVar2), cVar1 != '\0')) {
    FUN_142cc7b70(param_1 + 0x4a0,param_1 + 0x1b8,lVar2);
  }
  if ((((*(char *)(param_1 + 0x1ca) != '\0') && (*(char *)(param_1 + 0x1c9) == '\0')) &&
      (param_3 == '\x01')) && (cVar1 = FUN_1406ed410(param_1,param_2), cVar1 != '\0')) {
    lVar3 = param_2[1] + *(longlong *)(param_1 + 0xd8);
    lVar2 = FWeakObjectPtr::Get(lVar3 + 0x50);
    if (lVar2 != 0) {
      FUN_142d3f040(lVar2,*(undefined8 *)(lVar3 + 0x48));
    }
    FUN_142cbcc90(param_1 + 0x1b8,*(undefined8 *)(*param_2 + 0x568));
  }
  return;
}



// FUNCTION 1406f2c40 FUN_1406f2c40 body=268 status=ok
// SIG undefined FUN_1406f2c40(void)

undefined8 FUN_1406f2c40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *local_18;
  longlong *local_10;
  
  lVar3 = *(longlong *)(*param_2 + 0x648);
  if (lVar3 == 0) {
    return CONCAT71((int7)((ulonglong)*param_2 >> 8),2);
  }
  FUN_142c7bae0(lVar3,&local_18);
  if (local_18 == (longlong *)0x0) {
    uVar7 = 2;
    plVar6 = local_10;
  }
  else {
    cVar4 = (**(code **)(*local_18 + 0x38))();
    plVar6 = local_10;
    if (cVar4 == '\0') {
      puVar8 = (undefined8 *)(param_2[1] + *(longlong *)(param_1 + 0xd8) + 0xb0);
      *puVar8 = local_18;
      plVar5 = (longlong *)puVar8[1];
      if (local_10 != plVar5) {
        if (local_10 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_10 + 0xc) = *(int *)((longlong)local_10 + 0xc) + 1;
          UNLOCK();
          plVar5 = (longlong *)puVar8[1];
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        puVar8[1] = plVar6;
      }
      uVar7 = 0;
      plVar6 = local_10;
    }
    else {
      uVar7 = 1;
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 1406f2d50 FUN_1406f2d50 body=162 status=ok
// SIG undefined FUN_1406f2d50(void)

void FUN_1406f2d50(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar4 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x74 + *(longlong *)(param_2 + 8));
  if ((lVar4 != 0) && (param_3 != 0)) {
    lVar5 = FUN_142e20fc0();
    lVar6 = param_3;
    while (lVar6 != lVar5) {
      lVar6 = *(longlong *)(lVar6 + 0x30);
      if (lVar6 == 0) {
        return;
      }
    }
    FUN_142c7bae0(lVar4,local_18,param_3);
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
  }
  return;
}



// FUNCTION 1406f2e00 FUN_1406f2e00 body=1325 status=ok
// SIG undefined FUN_1406f2e00(void)

char FUN_1406f2e00(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *local_40;
  
  cVar8 = '\0';
  lVar17 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  uVar14 = 0;
  lVar4 = *(longlong *)(param_1 + 0x100);
  if (*(char *)(lVar4 + 0x60) != '\0') {
    if ((*(longlong *)(lVar17 + 0xe0) == 0) || (*(longlong *)(lVar17 + 0xe8) == 0)) {
LAB_1406f2fd2:
      puVar15 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar7 = false;
      bVar19 = true;
      local_88 = uVar14;
    }
    else {
      piVar1 = (int *)(*(longlong *)(lVar17 + 0xe8) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_1406f2fd2;
      local_70 = *(longlong **)(lVar17 + 0xe8);
      bVar7 = true;
      bVar19 = false;
      local_78 = 0;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_70 + 1);
        bVar18 = uVar3 == 0;
        if (bVar18) {
          *(uint *)(local_70 + 1) = 0;
          uVar11 = uVar14;
        }
        else {
          uVar11 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar18) {
          iVar9 = (int)uVar11;
          LOCK();
          bVar18 = iVar9 == (int)local_70[1];
          if (bVar18) {
            *(int *)(local_70 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar18) {
            local_78 = *(ulonglong *)(lVar17 + 0xe0);
            puVar15 = &local_78;
            local_88 = local_78;
            goto LAB_1406f2fe7;
          }
          uVar11 = 0;
          LOCK();
          uVar3 = *(uint *)(local_70 + 1);
          bVar18 = uVar3 == 0;
          if (bVar18) {
            *(uint *)(local_70 + 1) = 0;
          }
          else {
            uVar11 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_70 = (longlong *)0x0;
      }
      puVar15 = &local_78;
      local_88 = 0;
    }
LAB_1406f2fe7:
    local_80 = (longlong *)puVar15[1];
    puVar15[1] = 0;
    *puVar15 = 0;
    plVar16 = plStack_50;
    if ((bVar19) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_50 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar16 = local_70;
    if ((bVar7) && (local_70 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_70 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if ((local_88 == 0) || (lVar4 = *(longlong *)(local_88 + 0x10), lVar4 == 0)) {
LAB_1406f30d5:
      puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0x100) + 0x68);
      uVar11 = uVar14;
      if (*puVar15 != 0) {
        uVar13 = UViewport::GetPrivateStaticClass();
        uVar5 = *puVar15;
        for (uVar6 = uVar5; (uVar11 = uVar14, uVar6 != 0 && (uVar11 = uVar5, uVar6 != uVar13));
            uVar6 = *(ulonglong *)(uVar6 + 0x30)) {
        }
      }
      cVar8 = FUN_1406f2c40(param_1,param_2,uVar11);
      if ((*(longlong *)(lVar17 + 0xb0) == 0) || (*(longlong *)(lVar17 + 0xb8) == 0)) {
LAB_1406f3190:
        local_40 = (longlong *)0x0;
        puVar15 = &local_48;
        bVar7 = false;
        bVar19 = true;
      }
      else {
        piVar1 = (int *)(*(longlong *)(lVar17 + 0xb8) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (iVar9 < 1) goto LAB_1406f3190;
        local_60 = *(longlong **)(lVar17 + 0xb8);
        local_68 = 0;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          uVar3 = *(uint *)(local_60 + 1);
          bVar19 = uVar3 == 0;
          if (bVar19) {
            *(uint *)(local_60 + 1) = 0;
          }
          else {
            uVar14 = (ulonglong)uVar3;
          }
          UNLOCK();
          while (!bVar19) {
            iVar9 = (int)uVar14;
            LOCK();
            bVar19 = iVar9 == (int)local_60[1];
            if (bVar19) {
              *(int *)(local_60 + 1) = iVar9 + 1;
            }
            UNLOCK();
            if (bVar19) {
              uVar14 = *(ulonglong *)(lVar17 + 0xb0);
              puVar15 = &local_68;
              bVar7 = true;
              bVar19 = false;
              local_68 = uVar14;
              goto LAB_1406f31a0;
            }
            uVar14 = 0;
            LOCK();
            uVar3 = *(uint *)(local_60 + 1);
            bVar19 = uVar3 == 0;
            if (bVar19) {
              *(uint *)(local_60 + 1) = 0;
            }
            else {
              uVar14 = (ulonglong)uVar3;
            }
            UNLOCK();
          }
          local_60 = (longlong *)0x0;
        }
        uVar14 = 0;
        puVar15 = &local_68;
        bVar7 = true;
        bVar19 = false;
      }
LAB_1406f31a0:
      *puVar15 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_80,puVar15 + 1);
      plVar16 = local_40;
      if ((bVar19) && (local_40 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_40 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      plVar16 = local_60;
      if ((bVar7) && (local_60 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_60 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      *(ulonglong *)(lVar17 + 0xe0) = uVar14;
      plVar16 = *(longlong **)(lVar17 + 0xe8);
      local_88 = uVar14;
      if (local_80 != plVar16) {
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
          UNLOCK();
          plVar16 = *(longlong **)(lVar17 + 0xe8);
        }
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar9 == 1) && (plVar16 != (longlong *)0x0)) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
        *(longlong **)(lVar17 + 0xe8) = local_80;
      }
    }
    else {
      lVar12 = UViewport::GetPrivateStaticClass();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
          lVar12 + 0x88)) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      if (!bVar19) goto LAB_1406f30d5;
    }
    if (local_88 != 0) {
      FUN_142cfed90(local_88,param_3);
    }
    plVar16 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    goto LAB_1406f32ec;
  }
  switch(param_3) {
  case '\x01':
    uVar14 = *(ulonglong *)(lVar4 + 0x30);
    break;
  case '\x03':
    uVar14 = *(ulonglong *)(lVar4 + 0x38);
    break;
  case '\x04':
    uVar14 = *(ulonglong *)(lVar4 + 0x40);
    break;
  case '\x05':
    uVar14 = *(ulonglong *)(lVar4 + 0x48);
    break;
  case '\x06':
    if (*(longlong *)(lVar4 + 0x50) != 0) {
      lVar10 = FUN_142e20fc0();
      for (lVar12 = *(longlong *)(lVar4 + 0x50); lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30))
      {
        if (lVar12 == lVar10) {
          if (*(longlong *)(lVar4 + 0x50) != 0) {
            puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0x100) + 0x50);
            goto LAB_1406f2f20;
          }
          break;
        }
      }
    }
    puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0x100) + 0x48);
    goto LAB_1406f2f20;
  case '\a':
    if (*(longlong *)(lVar4 + 0x58) != 0) {
      lVar10 = FUN_142e20fc0();
      for (lVar12 = *(longlong *)(lVar4 + 0x58); lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30))
      {
        if (lVar12 == lVar10) {
          if (*(longlong *)(lVar4 + 0x58) != 0) {
            puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0x100) + 0x58);
            goto LAB_1406f2f20;
          }
          break;
        }
      }
    }
    puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0x100) + 0x38);
LAB_1406f2f20:
    uVar14 = *puVar15;
  }
  cVar8 = FUN_1406f2c40(param_1,param_2,uVar14);
LAB_1406f32ec:
  if ((param_3 == '\x04') && (cVar8 == '\0')) {
    *(undefined1 *)(lVar17 + 0xf0) = 1;
  }
  return cVar8;
}



// FUNCTION 1406f3360 FUN_1406f3360 body=403 status=ok
// SIG undefined FUN_1406f3360(void)

void FUN_1406f3360(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  byte bVar11;
  longlong lVar12;
  
  plVar4 = *(longlong **)(param_1 + 0x130);
  uVar5 = 0;
  iVar7 = *(int *)(param_1 + 0x138);
  uVar9 = (longlong)iVar7 & 0x1fffffffffffffff;
  if (plVar4 + iVar7 < plVar4) {
    uVar9 = uVar5;
  }
  uVar8 = uVar5;
  if (uVar9 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if ((plVar1 != (longlong *)0x0) && (plVar1[4] == param_1)) {
        (**(code **)(*plVar1 + 0x3b0))();
      }
      plVar4 = plVar4 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar9);
    iVar7 = *(int *)(param_1 + 0x138);
  }
  if (iVar7 == 0) {
    *(undefined1 *)(param_1 + 0xf1) = 0;
    *(undefined1 *)(param_1 + 0x140) = 0;
  }
  else {
    lVar12 = **(longlong **)(param_1 + 0x130);
    if ((lVar12 == 0) ||
       (((*(char *)(lVar12 + 0xf0) == '\0' && (*(longlong *)(lVar12 + 0x20) == param_1)) &&
        ((*(uint *)(lVar12 + 8) >> 10 & 1) == 0)))) {
      bVar11 = 0;
    }
    else {
      bVar11 = 1;
    }
    lVar12 = (longlong)iVar7;
    uVar9 = uVar5;
    uVar8 = uVar5;
    do {
      iVar7 = (int)uVar9;
      uVar5 = uVar5 + 1;
      uVar9 = (ulonglong)(iVar7 + 1);
      if ((longlong)uVar5 < lVar12) {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x130) + uVar5 * 8);
        do {
          lVar2 = *plVar4;
          if ((lVar2 == 0) ||
             (((*(char *)(lVar2 + 0xf0) == '\0' && (*(longlong *)(lVar2 + 0x20) == param_1)) &&
              ((*(uint *)(lVar2 + 8) >> 10 & 1) == 0)))) {
            bVar3 = 0;
          }
          else {
            bVar3 = 1;
          }
          if (bVar11 != bVar3) break;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar5 = uVar5 + 1;
          plVar4 = plVar4 + 1;
        } while ((longlong)uVar5 < lVar12);
      }
      iVar6 = (int)uVar9 - iVar7;
      if (bVar11 != 0) {
        iVar10 = (int)uVar8;
        if (iVar10 != iVar7) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar10 * 8),
                     (void *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar7 * 8),
                     (longlong)iVar6 << 3);
        }
        uVar8 = (ulonglong)(uint)(iVar10 + iVar6);
      }
      bVar11 = bVar11 ^ 1;
    } while ((longlong)uVar5 < lVar12);
    *(int *)(param_1 + 0x138) = (int)uVar8;
    *(undefined1 *)(param_1 + 0xf1) = 0;
    *(undefined1 *)(param_1 + 0x140) = 0;
  }
  return;
}



// FUNCTION 1406f3500 FUN_1406f3500 body=153 status=ok
// SIG undefined FUN_1406f3500(void)

void FUN_1406f3500(longlong *param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0xd0))(param_1,param_2 == 2);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar3 = UBlueprintGeneratedClass::GetPrivateStaticClass();
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
      FUN_1422e5a50(lVar1,param_1);
    }
  }
  if ((((*(uint *)(param_1 + 1) >> 5 & 1) != 0) || ((char)param_1[0x28] != '\0')) &&
     (DAT_1468c21a8 == '\0')) {
    (**(code **)(*param_1 + 0x398))(param_1);
  }
  return;
}



// FUNCTION 1406f35a0 FUN_1406f35a0 body=113 status=ok
// SIG undefined FUN_1406f35a0(void)

void FUN_1406f35a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0xd0))(param_1,param_2 == 2);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar3 = UBlueprintGeneratedClass::GetPrivateStaticClass();
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
      FUN_1422e5a50(lVar1,param_1);
    }
  }
  return;
}



// FUNCTION 1406f3620 FUN_1406f3620 body=273 status=ok
// SIG undefined FUN_1406f3620(void)

void FUN_1406f3620(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
  if ((param_1[2] != 0) && ((*(uint *)(param_1[2] + 0xb4) >> 0x12 & 1) != 0)) {
    (**(code **)(*param_1 + 0x3c0))();
  }
  uVar5 = 0;
  plVar4 = (longlong *)param_1[0x26];
  uVar6 = (longlong)(int)param_1[0x27] & 0x1fffffffffffffff;
  if (plVar4 + (int)param_1[0x27] < plVar4) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      if ((longlong *)*plVar4 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar4 + 0x3c0))();
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  FUN_1406f3740(param_1);
  if ((*(uint *)(param_1 + 1) >> 5 & 1) == 0) {
    return;
  }
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = FUN_1406ddef0;
  lVar3 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  if ((*(int *)(lVar3 + 0x20) != 0) &&
     (puVar1 = *(undefined8 **)
                (*(longlong *)(lVar3 + 0x18) + -8 + (longlong)*(int *)(lVar3 + 0x20) * 8),
     puVar1 != (undefined8 *)0x0)) {
    if ((longlong *)*puVar1 != param_1) {
      return;
    }
    cVar2 = FObjectInitializer::IsInstancingAllowed();
    if (cVar2 == '\0') {
      return;
    }
  }
  (**(code **)(*param_1 + 0x398))(param_1);
  return;
}



// FUNCTION 1406f3740 FUN_1406f3740 body=142 status=ok
// SIG undefined FUN_1406f3740(void)

void FUN_1406f3740(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_1417931d0();
  if ((((*(uint *)(param_1 + 8) >> 4 & 1) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0xb4) >> 0x12 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xf0) = 3;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar3 = UBlueprintGeneratedClass::GetPrivateStaticClass();
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
      FUN_1422e5a50(lVar1,param_1);
    }
  }
  return;
}



// FUNCTION 1406f37d0 FUN_1406f37d0 body=32 status=ok
// SIG undefined FUN_1406f37d0(void)

void FUN_1406f37d0(longlong *param_1)

{
  FUN_1406f3740();
                    /* WARNING: Could not recover jumptable at 0x0001406f37e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x380))(param_1);
  return;
}



// FUNCTION 1406f37f0 thunk_FUN_1406f3800 body=5 status=ok
// SIG undefined thunk_FUN_1406f3800(void)

void thunk_FUN_1406f3800(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  UObject::PostLoad();
  cVar3 = (**(code **)(*param_1 + 0x310))(param_1);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x328))(param_1);
    (**(code **)(*param_1 + 800))(param_1);
    UObjectBaseUtility::MarkPackageDirty(param_1);
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar4 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1422e5a50(lVar1,param_1);
    }
  }
  return;
}



// FUNCTION 1406f3800 FUN_1406f3800 body=151 status=ok
// SIG undefined FUN_1406f3800(void)

void FUN_1406f3800(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  UObject::PostLoad();
  cVar3 = (**(code **)(*param_1 + 0x310))(param_1);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x328))(param_1);
    (**(code **)(*param_1 + 800))(param_1);
    UObjectBaseUtility::MarkPackageDirty(param_1);
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar4 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1422e5a50(lVar1,param_1);
    }
  }
  return;
}



// FUNCTION 1406f38a0 FUN_1406f38a0 body=38 status=ok
// SIG undefined FUN_1406f38a0(void)

void FUN_1406f38a0(longlong param_1)

{
  FUN_1406f3800();
  FUN_140703380(param_1 + 0x9f8,param_1 + 0x148);
  return;
}



// FUNCTION 1406f38d0 FUN_1406f38d0 body=32 status=ok
// SIG undefined FUN_1406f38d0(void)

void FUN_1406f38d0(longlong *param_1)

{
  FUN_1406f3800();
                    /* WARNING: Could not recover jumptable at 0x0001406f38e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x380))(param_1);
  return;
}



// FUNCTION 1406f38f0 FUN_1406f38f0 body=126 status=ok
// SIG undefined FUN_1406f38f0(void)

void FUN_1406f38f0(longlong param_1)

{
  char cVar1;
  
  FUN_142c7d610();
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_142c821f0(param_1 + 400);
    *(undefined8 *)(param_1 + 0x188) = 0;
    UObjectBaseUtility::MarkPackageDirty(param_1);
  }
  cVar1 = FUN_142c73840(param_1 + 400);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 400);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x194);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x19c);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x1a0);
    UObjectBaseUtility::MarkPackageDirty(param_1);
  }
  return;
}



// FUNCTION 1406f3970 FUN_1406f3970 body=306 status=ok
// SIG undefined FUN_1406f3970(void)

void FUN_1406f3970(longlong param_1)

{
  char cVar1;
  
  FUN_142c7d610();
  if (((*(longlong *)(param_1 + 0x288) != 0) || (*(longlong *)(param_1 + 0x290) != 0)) ||
     (*(longlong *)(param_1 + 0x298) != 0)) {
    FUN_142c821f0(param_1 + 0x2a0);
    FUN_142c821f0(param_1 + 0x2b8,*(undefined8 *)(param_1 + 0x290));
    FUN_142c821f0(param_1 + 0x2d0,*(undefined8 *)(param_1 + 0x298));
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0;
    UObjectBaseUtility::MarkPackageDirty(param_1);
  }
  cVar1 = FUN_142c73840((undefined8 *)(param_1 + 0x2a0));
  if (((cVar1 != '\0') || (cVar1 = FUN_142c73840((undefined8 *)(param_1 + 0x2b8)), cVar1 != '\0'))
     || (cVar1 = FUN_142c73840((undefined4 *)(param_1 + 0x2d0)), cVar1 != '\0')) {
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x2a0);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x2a8);
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x2b0);
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x2b8);
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x2c0);
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x2c8);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0x2d0);
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x2d4);
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x2d8);
    *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_1 + 0x2dc);
    *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x2e0);
    UObjectBaseUtility::MarkPackageDirty(param_1);
  }
  return;
}



// FUNCTION 1406f3ab0 FUN_1406f3ab0 body=45 status=ok
// SIG undefined FUN_1406f3ab0(void)

void FUN_1406f3ab0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    cVar1 = *(char *)(param_1 + 0x12);
    if (cVar1 == '\0') {
      *(undefined2 *)(param_1 + 0x11) = 0x500;
    }
    else {
      if (cVar1 == '\x01') {
        *(undefined2 *)(param_1 + 0x11) = 0x501;
        return;
      }
      if ((byte)(cVar1 - 2U) < 3) {
        *(undefined2 *)(param_1 + 0x11) = 0x502;
        return;
      }
    }
  }
  return;
}



// FUNCTION 1406f3ae0 FUN_1406f3ae0 body=29 status=ok
// SIG undefined FUN_1406f3ae0(void)

void FUN_1406f3ae0(longlong param_1,longlong param_2)

{
  if ((((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(char *)(param_1 + 3) == '\x06')) &&
     (*(longlong *)(param_1 + 0x68) != 0)) {
    UGameUserSettings::SetDynamicResolutionEnabled(*(longlong *)(param_1 + 0x68),4);
    return;
  }
  return;
}



// FUNCTION 1406f3b00 FUN_1406f3b00 body=38 status=ok
// SIG undefined FUN_1406f3b00(void)

void FUN_1406f3b00(longlong param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    if (*(char *)(param_1 + 0xc9) != '\0') {
      *(undefined1 *)(param_1 + 0xca) = 0;
    }
    if (*(char *)(param_1 + 0x28) == '\x03') {
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    FUN_1406fbb20();
    return;
  }
  return;
}



// FUNCTION 1406f3b30 FUN_1406f3b30 body=225 status=ok
// SIG undefined FUN_1406f3b30(void)

void FUN_1406f3b30(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x120);
  *(undefined1 *)(param_1 + 0xf1) = 1;
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 0x120);
    if (iVar3 - iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x118),
                 (void *)((longlong)*(void **)(param_1 + 0x118) + (longlong)iVar1 * 8),
                 (longlong)(iVar3 - iVar1) << 3);
      iVar3 = *(int *)(param_1 + 0x120);
    }
    *(int *)(param_1 + 0x120) = iVar3 - iVar1;
  }
  uVar4 = 0;
  plVar5 = *(longlong **)(param_1 + 0x130);
  uVar6 = (longlong)*(int *)(param_1 + 0x138) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x138) < plVar5) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    do {
      plVar2 = (longlong *)*plVar5;
      if ((plVar2 != (longlong *)0x0) && (plVar2[4] == param_1)) {
        (**(code **)(*plVar2 + 0x3a0))(plVar2);
        if ((char)plVar2[0x1e] == '\x01') {
          *(undefined1 *)(plVar2 + 0x1e) = 0;
        }
      }
      plVar5 = plVar5 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  return;
}



// FUNCTION 1406f3c20 Realloc body=232 status=ok
// SIG undefined Realloc(void)

void TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *_Dst;
  undefined8 uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  
  _Dst = (void *)0x0;
  iVar1 = (int)(param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  lVar7 = (longlong)iVar1;
  pvVar5 = *(void **)((longlong)param_1 + 8);
  iVar2 = *(int *)((longlong)param_1 + 0x14) + 0x1f;
  uVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
  if (uVar3 < 2) {
    if (pvVar5 == (void *)0x0) goto LAB_1406f3ccd;
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar5,lVar7 << 2);
    pvVar5 = *(void **)((longlong)param_1 + 8);
    if (pvVar5 == (void *)0x0) goto LAB_1406f3ccd;
    lVar6 = 0;
  }
  else {
    if (pvVar5 == (void *)0x0) {
      if (uVar3 != 0) {
        _Dst = (void *)FMemory::Realloc(0,(longlong)(int)uVar3 << 2,0);
        *(void **)((longlong)param_1 + 8) = _Dst;
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,param_1,lVar7 << 2);
      goto LAB_1406f3ccd;
    }
    lVar6 = (longlong)(int)uVar3 << 2;
  }
  uVar4 = FMemory::Realloc(pvVar5,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 8) = uVar4;
LAB_1406f3ccd:
  if (uVar3 != 0) {
    pvVar5 = *(void **)((longlong)param_1 + 8);
    if (*(void **)((longlong)param_1 + 8) == (void *)0x0) {
      pvVar5 = param_1;
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)pvVar5 + lVar7 * 4),0,(longlong)(int)(uVar3 - iVar1) << 2);
  }
  return;
}



// FUNCTION 1406f3d10 FUN_1406f3d10 body=202 status=ok
// SIG undefined FUN_1406f3d10(void)

void FUN_1406f3d10(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (((lVar4 != 0) && ((*(uint *)(lVar4 + 0xb4) >> 0x12 & 1) != 0)) &&
     (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) {
    while (lVar2 = UWidget::GetPrivateStaticClass(), lVar4 != lVar2) {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < (int)DAT_1469e91c4) {
        uVar3 = uVar1 & 0xffff;
        if ((int)uVar1 < 0) {
          uVar1 = uVar1 + 0xffff;
          uVar3 = uVar3 - 0x10000;
        }
        lVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
                (longlong)(int)uVar3 * 0x18;
      }
      else {
        lVar2 = 0;
      }
      if ((*(uint *)(lVar2 + 8) >> 0x19 & 1) != 0) {
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 == 0) {
        return;
      }
    }
    *(undefined2 *)(param_1 + 0xf8) = 0;
    *(undefined2 *)(param_1 + 0xfb) = 0;
    *(undefined2 *)(param_1 + 0xd1) = 0x101;
    *(undefined1 *)(param_1 + 0xd3) = 1;
  }
  return;
}



// FUNCTION 1406f3e40 FUN_1406f3e40 body=633 status=ok
// SIG undefined FUN_1406f3e40(void)

void FUN_1406f3e40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  uint local_res10;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 != 0)) {
    local_60 = *(longlong *)(lVar1 + 0x38);
    local_58 = 0xffffffff;
    local_54 = 0x101;
    local_52 = 0;
    local_68 = lVar1;
    FUN_1406efa50();
    while (local_60 != 0) {
      uVar5 = 0;
      plVar10 = (longlong *)(*(int *)(local_60 + 0x44) + param_1);
      if ((plVar10 != (longlong *)0x0) && (lVar8 = (longlong)(int)plVar10[1], (int)plVar10[1] != 0))
      {
        lVar3 = *plVar10;
        local_res10 = 0;
        uVar9 = uVar5;
        if ((*(longlong *)(lVar3 + 8) == 0) || (lVar2 = FWeakObjectPtr::Get(lVar3), lVar2 == 0)) {
          bVar13 = false;
          uVar12 = uVar5;
        }
        else {
          lVar3 = UObject::FindFunction(lVar2,*(undefined8 *)(lVar3 + 8));
          bVar13 = lVar3 != 0;
          uVar12 = uVar5;
        }
        do {
          iVar11 = (int)uVar12;
          uVar9 = uVar9 + 1;
          uVar12 = (ulonglong)(iVar11 + 1);
          if ((longlong)uVar9 < lVar8) {
            lVar3 = uVar9 * 0x10;
            do {
              lVar2 = lVar3 + *plVar10;
              if ((*(longlong *)(lVar3 + 8 + *plVar10) == 0) ||
                 (lVar4 = FWeakObjectPtr::Get(lVar2), lVar4 == 0)) {
                bVar14 = false;
              }
              else {
                lVar2 = UObject::FindFunction(lVar4,*(undefined8 *)(lVar2 + 8));
                bVar14 = lVar2 != 0;
              }
              if (bVar13 != bVar14) break;
              uVar12 = (ulonglong)((int)uVar12 + 1);
              uVar9 = uVar9 + 1;
              lVar3 = lVar3 + 0x10;
            } while ((longlong)uVar9 < lVar8);
            uVar5 = (ulonglong)local_res10;
          }
          iVar6 = (int)uVar12 - iVar11;
          if (bVar13 != false) {
            iVar7 = (int)uVar5;
            if (iVar7 != iVar11) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar7 * 0x10 + *plVar10),
                         (void *)((longlong)iVar11 * 0x10 + *plVar10),(longlong)iVar6 << 4);
            }
            local_res10 = iVar7 + iVar6;
            uVar5 = (ulonglong)local_res10;
          }
          bVar13 = (bool)(bVar13 ^ 1);
        } while ((longlong)uVar9 < lVar8);
        *(int *)(plVar10 + 1) = (int)uVar5;
      }
      local_60 = *(longlong *)(local_60 + 0x28);
      FUN_1406efa50(&local_68);
    }
    lVar8 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) {
      FUN_1422e5a50(lVar1,param_1);
    }
  }
  return;
}



// FUNCTION 1406f40c0 FUN_1406f40c0 body=567 status=ok
// SIG undefined FUN_1406f40c0(void)

void FUN_1406f40c0(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
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
  
  lVar1 = param_1 + 0x1b0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    uVar5 = FMemory::Realloc(*(longlong *)(param_1 + 0x1d0),0,0);
    *(undefined8 *)(param_1 + 0x1d0) = uVar5;
  }
  puVar2 = (uint *)(param_1 + 0x1d8);
  uVar7 = *puVar2;
  if (uVar7 != 0) {
    FUN_1406f49a0(lVar1,0);
    if (0 < (int)uVar7) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar7;
      do {
        uVar9 = (longlong)(int)*puVar2 - 1U & uVar11;
        lVar10 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar10 = lVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)(lVar10 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 400);
    local_58 = 0;
    iVar3 = *(int *)(param_1 + 0x1a0);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = *(uint **)(param_1 + 0x198);
      if (*(uint **)(param_1 + 0x198) == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar7 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        lVar10 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar6 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar6;
        if (bVar4) goto LAB_1406f420f;
        uVar7 = puVar13[lVar10 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
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
      if (iVar3 < iStack_44) {
LAB_1406f420f:
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
        lVar10 = *(longlong *)(param_1 + 0x180);
        if (*(longlong *)(param_1 + 0x180) == 0) {
          lVar10 = param_1;
        }
        uVar5 = *(undefined8 *)(lVar10 + (longlong)iStack_1c * 0x18);
        lVar10 = lVar10 + (longlong)iStack_1c * 0x18;
        uVar7 = (int)((ulonglong)uVar5 >> 0x20) + (int)uVar5 & *puVar2 - 1;
        *(uint *)(lVar10 + 0x14) = uVar7;
        lVar8 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar10 + 0x10) =
             *(undefined4 *)(lVar8 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar7) * 4);
        lVar10 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar10 = lVar1;
        }
        *(int *)(lVar10 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar7) * 4) = iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        FUN_1406e9690(&local_30);
      } while (iStack_1c < (int)puStack_28[4]);
    }
  }
  return;
}



// FUNCTION 1406f4300 FUN_1406f4300 body=578 status=ok
// SIG undefined FUN_1406f4300(void)

void FUN_1406f4300(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
  
  lVar1 = param_1 + 0x230;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x250),0,0);
    *(undefined8 *)(param_1 + 0x250) = uVar6;
  }
  puVar2 = (uint *)(param_1 + 600);
  uVar5 = *puVar2;
  if (uVar5 != 0) {
    FUN_1406f49a0(lVar1,0);
    if (0 < (int)uVar5) {
      uVar12 = 0;
      uVar13 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*puVar2 - 1U & uVar12;
        lVar10 = *(longlong *)(param_1 + 0x250);
        if (*(longlong *)(param_1 + 0x250) == 0) {
          lVar10 = lVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)(lVar10 + uVar9 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    uStack_64 = 1;
    puStack_38 = (uint *)(param_1 + 0x210);
    local_68 = 0;
    iVar3 = *(int *)(param_1 + 0x220);
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar14 = *(uint **)(param_1 + 0x218);
      if (*(uint **)(param_1 + 0x218) == (uint *)0x0) {
        puVar14 = puStack_38;
      }
      uVar5 = *puVar14;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar10 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar7 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar7;
        if (bVar4) goto LAB_1406f443f;
        uVar5 = puVar14[lVar10 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar7 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_54 = (iStack_50 - iVar7) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_1406f443f:
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
        lVar10 = *(longlong *)(param_1 + 0x200);
        if (*(longlong *)(param_1 + 0x200) == 0) {
          lVar10 = param_1;
        }
        puVar11 = (undefined8 *)(lVar10 + (longlong)iStack_2c * 0x20);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar8);
        uVar5 = *puVar2 - 1 & uVar5;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar5;
        lVar10 = *(longlong *)(param_1 + 0x250);
        if (*(longlong *)(param_1 + 0x250) == 0) {
          lVar10 = lVar1;
        }
        *(undefined4 *)(puVar11 + 3) =
             *(undefined4 *)(lVar10 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar5) * 4);
        lVar10 = *(longlong *)(param_1 + 0x250);
        if (*(longlong *)(param_1 + 0x250) == 0) {
          lVar10 = lVar1;
        }
        *(int *)(lVar10 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar5) * 4) = iVar3;
        local_30 = local_30 & ~uStack_3c;
        FUN_1406e9690(&local_40);
      } while (iStack_2c < (int)puStack_38[4]);
    }
  }
  return;
}



// FUNCTION 1406f4550 FUN_1406f4550 body=57 status=ok
// SIG undefined FUN_1406f4550(void)

void FUN_1406f4550(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  iVar1 = TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x108,local_res10);
  if (iVar1 == 0) {
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x118,local_res10);
  }
  return;
}



// FUNCTION 1406f4590 RemovePlayer body=241 status=ok
// SIG undefined RemovePlayer(void)

void UEncounterManager::RemovePlayer(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x138);
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x130) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x130) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar1 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar1 = plVar1 + 1;
        } while (lVar3 < lVar2);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0x138) = iVar6;
  }
  return;
}



// FUNCTION 1406f4690 FUN_1406f4690 body=251 status=ok
// SIG undefined FUN_1406f4690(void)

void FUN_1406f4690(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  *(undefined2 *)(*(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8) + 0x28) = 0;
  plVar3 = *(longlong **)(param_1 + 0x108);
  plVar6 = *(longlong **)(param_1 + 0x118);
  plVar4 = plVar3 + *(int *)(param_1 + 0x110);
  plVar1 = plVar6 + *(int *)(param_1 + 0x120);
  while ((plVar3 != plVar4 || (plVar6 != plVar1))) {
    plVar2 = plVar3;
    if (plVar3 == plVar4) {
      plVar2 = plVar6;
    }
    plVar2 = (longlong *)*plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x300))(plVar2,param_2);
    }
    if (plVar3 == plVar4) {
      plVar6 = plVar6 + 1;
    }
    else {
      plVar3 = plVar3 + 1;
    }
  }
  uVar7 = 0;
  plVar4 = *(longlong **)(param_1 + 0x130);
  uVar5 = (longlong)*(int *)(param_1 + 0x138) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x138) < plVar4) {
    uVar5 = uVar7;
  }
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if ((plVar1 != (longlong *)0x0) && (plVar1[0x1c] != 0)) {
        (**(code **)(*plVar1 + 0x300))(plVar1,param_2);
      }
      plVar4 = plVar4 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar5);
  }
  return;
}



// FUNCTION 1406f47b0 FUN_1406f47b0 body=78 status=ok
// SIG undefined FUN_1406f47b0(void)

void FUN_1406f47b0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FUN_142cf3f20(*(longlong *)(param_1 + 0x468),1);
    uVar1 = FManaTextureResource::GetSizeXY(param_1,local_res8);
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x468) + 0x2678,uVar1);
  }
  FUN_142c82d70(param_1,1);
  return;
}



// FUNCTION 1406f4800 FUN_1406f4800 body=234 status=ok
// SIG undefined FUN_1406f4800(void)

void FUN_1406f4800(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x108);
  plVar6 = *(longlong **)(param_1 + 0x118);
  plVar4 = plVar3 + *(int *)(param_1 + 0x110);
  plVar1 = plVar6 + *(int *)(param_1 + 0x120);
  while ((plVar3 != plVar4 || (plVar6 != plVar1))) {
    plVar2 = plVar3;
    if (plVar3 == plVar4) {
      plVar2 = plVar6;
    }
    plVar2 = (longlong *)*plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x300))(plVar2,param_2);
    }
    if (plVar3 == plVar4) {
      plVar6 = plVar6 + 1;
    }
    else {
      plVar3 = plVar3 + 1;
    }
  }
  uVar7 = 0;
  plVar4 = *(longlong **)(param_1 + 0x130);
  uVar5 = (longlong)*(int *)(param_1 + 0x138) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x138) < plVar4) {
    uVar5 = uVar7;
  }
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if ((plVar1 != (longlong *)0x0) && (plVar1[0x1c] != 0)) {
        (**(code **)(*plVar1 + 0x300))(plVar1,param_2);
      }
      plVar4 = plVar4 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar5);
  }
  return;
}



// FUNCTION 1406f48f0 ResizeAllocation body=163 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<16,FDefaultAllocator>::
     ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x180);
  if (param_3 < 0x11) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x18);
    pvVar1 = *(void **)((longlong)param_1 + 0x180);
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
        *(void **)((longlong)param_1 + 0x180) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x18);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x180) = uVar2;
  return;
}



// FUNCTION 1406f49a0 FUN_1406f49a0 body=149 status=ok
// SIG undefined FUN_1406f49a0(void)

void FUN_1406f49a0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
  if (param_3 < 9) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 2);
    pvVar1 = *(void **)((longlong)param_1 + 0x20);
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
        *(void **)((longlong)param_1 + 0x20) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
  return;
}



// FUNCTION 1406f4a40 FUN_1406f4a40 body=130 status=ok
// SIG undefined FUN_1406f4a40(void)

void FUN_1406f4a40(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x88,0);
    iVar3 = (int)(uVar1 / 0x88);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x88,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1406f4ad0 ResizeGrow body=157 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TInlineAllocator<16,FDefaultAllocator>_>
     ::ResizeGrow(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (uVar1 < 0x11) {
    iVar4 = 0x10;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0x18c) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x18,0);
    iVar4 = (int)(uVar3 / 0x18);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x18c) = iVar4;
  TInlineAllocator<16,FDefaultAllocator>::
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
            (param_1,param_2,iVar4,0x18);
  return;
}



// FUNCTION 1406f4b70 ResizeGrow body=257 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FReplayViewer,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x208);
  if (uVar1 < 0x11) {
    uVar2 = 0x10;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x20c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 5,0);
    uVar2 = (uint)(uVar3 >> 5);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x20c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x200);
  if (uVar2 < 0x11) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 5);
    pvVar4 = *(void **)((longlong)param_1 + 0x200);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 5,0);
        *(void **)((longlong)param_1 + 0x200) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 5);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 5;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x200) = uVar5;
  return;
}



// FUNCTION 1406f4c80 ResizeTo body=127 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,TInlineAllocator<16,FDefaultAllocator>_>
     ::ResizeTo(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x11) {
      iVar2 = 0x10;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x18c)) {
    *(int *)(param_1 + 0x18c) = iVar2;
    TInlineAllocator<16,FDefaultAllocator>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x188),iVar2,0x18);
  }
  return;
}



// FUNCTION 1406f4d00 RotateAngleAxis body=655 status=ok
// SIG undefined RotateAngleAxis(void)

float * FVector::RotateAngleAxis(float *param_1,float *param_2,float param_3,float *param_4)

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
  float fVar11;
  
  param_3 = param_3 * 0.017453292;
  if (param_3 < 0.0) {
    fVar6 = param_3 * 0.15915494 - 0.5;
  }
  else {
    fVar6 = param_3 * 0.15915494 + 0.5;
  }
  param_3 = param_3 - (float)(int)fVar6 * 6.2831855;
  if (param_3 <= 1.5707964) {
    if (-1.5707964 <= param_3) {
      fVar6 = 1.0;
    }
    else {
      fVar6 = -1.0;
      param_3 = -3.1415927 - param_3;
    }
  }
  else {
    fVar6 = -1.0;
    param_3 = 3.1415927 - param_3;
  }
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fVar7 = param_3 * param_3;
  param_3 = (((((2.7525562e-06 - fVar7 * 2.3889859e-08) * fVar7 - 0.00019840874) * fVar7 +
              0.008333331) * fVar7 - 0.16666667) * fVar7 + 1.0) * param_3;
  fVar3 = *param_4;
  fVar6 = (((((2.4760495e-05 - fVar7 * 2.6051615e-07) * fVar7 - 0.0013888378) * fVar7 + 0.041666638)
            * fVar7 - 0.5) * fVar7 + 1.0) * fVar6;
  fVar7 = param_1[1];
  fVar11 = 1.0 - fVar6;
  fVar9 = fVar3 * fVar1 * fVar11;
  fVar10 = fVar2 * fVar3 * fVar11;
  fVar4 = *param_1;
  fVar5 = *param_1;
  *param_2 = (fVar3 * fVar3 * fVar11 + fVar6) * *param_1 + (fVar9 - fVar2 * param_3) * fVar7 +
             (fVar10 + fVar1 * param_3) * param_1[2];
  fVar8 = fVar2 * fVar1 * fVar11;
  param_2[1] = (fVar1 * fVar1 * fVar11 + fVar6) * fVar7 + (fVar9 + fVar2 * param_3) * fVar4 +
               (fVar8 - fVar3 * param_3) * param_1[2];
  param_2[2] = (fVar8 + fVar3 * param_3) * fVar7 + (fVar10 - fVar1 * param_3) * fVar5 +
               (fVar2 * fVar2 * fVar11 + fVar6) * param_1[2];
  return param_2;
}



// FUNCTION 1406f4f90 FUN_1406f4f90 body=394 status=ok
// SIG undefined FUN_1406f4f90(void)

undefined1 FUN_1406f4f90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar6 = true;
  plVar12 = *(longlong **)(param_1 + 0x108);
  plVar11 = *(longlong **)(param_1 + 0x118);
  bVar7 = true;
  plVar1 = plVar12 + *(int *)(param_1 + 0x110);
  plVar2 = plVar11 + *(int *)(param_1 + 0x120);
  while ((plVar12 != plVar1 || (plVar11 != plVar2))) {
    plVar10 = plVar12;
    if (plVar12 == plVar1) {
      plVar10 = plVar11;
    }
    plVar10 = (longlong *)*plVar10;
    if (plVar10 != (longlong *)0x0) {
      cVar8 = FUN_1406faaf0(plVar10,param_2);
      cVar9 = (**(code **)(*plVar10 + 0x2d0))(plVar10);
      bVar6 = bVar7;
      if (cVar9 != '\0') {
        if (cVar8 == '\x01') {
          if (*(char *)((longlong)plVar10 + 0xf9) != '\0') {
            bVar5 = true;
          }
        }
        else {
          bVar6 = false;
          if (*(char *)((longlong)plVar10 + 0xfc) == '\0') {
            bVar6 = bVar7;
          }
          bVar7 = bVar6;
          if ((cVar8 != '\0') && (bVar3 = bVar4, *(char *)((longlong)plVar10 + 0xfb) != '\0')) {
            bVar3 = true;
            bVar4 = bVar3;
          }
        }
      }
    }
    if (plVar12 == plVar1) {
      plVar11 = plVar11 + 1;
    }
    else {
      plVar12 = plVar12 + 1;
    }
  }
  bVar4 = false;
  if (bVar5) {
    bVar4 = bVar6;
  }
  if (!bVar3) {
    if (*(char *)(param_1 + 0x100) != '\0') {
      bVar5 = bVar4;
    }
    return bVar5;
  }
  return 2;
}



// FUNCTION 1406f5120 FUN_1406f5120 body=509 status=ok
// SIG undefined FUN_1406f5120(void)

ulonglong FUN_1406f5120(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong *plVar13;
  longlong *plVar14;
  
  bVar6 = 1;
  bVar12 = false;
  plVar14 = (longlong *)param_1[0x21];
  plVar13 = (longlong *)param_1[0x23];
  bVar4 = false;
  bVar3 = false;
  bVar5 = 1;
  plVar1 = plVar14 + (int)param_1[0x22];
  plVar2 = plVar13 + (int)param_1[0x24];
  while ((plVar14 != plVar1 || (plVar13 != plVar2))) {
    plVar9 = plVar14;
    if (plVar14 == plVar1) {
      plVar9 = plVar13;
    }
    plVar9 = (longlong *)*plVar9;
    if (plVar9 != (longlong *)0x0) {
      cVar7 = FUN_1406faaf0(plVar9,param_2);
      cVar8 = (**(code **)(*plVar9 + 0x2d0))(plVar9);
      bVar6 = bVar5;
      if (cVar8 != '\0') {
        if (cVar7 == '\x01') {
          if (*(char *)((longlong)plVar9 + 0xf9) != '\0') {
            bVar12 = true;
          }
        }
        else {
          bVar6 = 0;
          if (*(char *)((longlong)plVar9 + 0xfc) == '\0') {
            bVar6 = bVar5;
          }
          bVar5 = bVar6;
          if ((cVar7 != '\0') && (bVar3 = bVar4, *(char *)((longlong)plVar9 + 0xfb) != '\0')) {
            bVar3 = true;
            bVar4 = bVar3;
          }
        }
      }
    }
    if (plVar14 == plVar1) {
      plVar13 = plVar13 + 1;
    }
    else {
      plVar14 = plVar14 + 1;
    }
  }
  bVar5 = 0;
  if ((bool)bVar12) {
    bVar5 = bVar6;
  }
  if (bVar3) {
    bVar12 = 2;
  }
  else if ((char)param_1[0x20] != '\0') {
    bVar12 = bVar5;
  }
  if ((0 < (int)param_1[0x22]) || (0 < (int)param_1[0x24])) {
    if (bVar12 == 1) {
      cVar7 = *(char *)((longlong)param_1 + 0xd1);
    }
    else {
      if (bVar12 != 2) {
        if ((bVar12 == 3) || (bVar12 == 4)) goto LAB_1406f52a5;
        goto LAB_1406f52cb;
      }
      cVar7 = *(char *)((longlong)param_1 + 0xd2);
    }
    if (cVar7 == '\0') goto LAB_1406f52a5;
  }
LAB_1406f52cb:
  lVar10 = (**(code **)(*param_1 + 0x3c8))(param_1);
  if (lVar10 != 0) {
    uVar11 = FUN_1406faaf0(lVar10,param_2);
    return uVar11;
  }
  if ((int)param_1[0x22] < 1) {
    uVar11 = (ulonglong)bVar12;
    if ((int)param_1[0x24] < 1) {
      uVar11 = 2;
    }
    return uVar11;
  }
LAB_1406f52a5:
  return (ulonglong)bVar12;
}



// FUNCTION 1406f5320 FUN_1406f5320 body=129 status=ok
// SIG undefined FUN_1406f5320(void)

undefined1 FUN_1406f5320(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if ((0 < *(int *)(lVar4 + 0x50)) && (lVar3 = FUN_14075eaf0(*param_2), lVar3 != 0)) {
    cVar1 = FUN_1407618b0(lVar3 + 0x27a8,*param_2,*(undefined4 *)(lVar4 + 0x58));
    if (cVar1 == '\0') {
      FUN_1407621d0(lVar3 + 0x27a8,*param_2);
      return 2;
    }
  }
  uVar2 = FUN_1407196a0(param_1,param_2);
  return uVar2;
}



// FUNCTION 1406f53b0 FUN_1406f53b0 body=415 status=ok
// SIG undefined FUN_1406f53b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1406f53b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_408 [32];
  byte local_3e8;
  byte local_3e7 [3];
  undefined8 local_3e4;
  undefined4 local_3dc;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  bVar2 = FUN_1407196a0();
  if (bVar2 != 0) {
    return bVar2;
  }
  cVar3 = FUN_1406ef4b0(param_1,param_2);
  if ((cVar3 != '\0') && (lVar4 = (**(code **)(*(longlong *)*param_2 + 0x688))(), lVar4 != 0)) {
    lVar1 = *(longlong *)(*param_2 + 0x5e8);
    if (lVar1 != 0) {
      FUN_142dc1ad0(local_3b8);
      cVar3 = FUN_142dcd6e0(lVar1,local_3b8,0);
      if ((cVar3 != '\0') &&
         ((local_3e8 = bVar2, local_3e7[0] = bVar2,
          FUN_142dcce50(local_3b8,local_3c8,&local_3e8,local_3e7), local_3e8 != 0 ||
          (local_3e7[0] != 0)))) goto LAB_1406f54f6;
    }
    lVar4 = *(longlong *)(lVar4 + 0x168);
    if (lVar4 == 0) {
      local_3e4 = _DAT_1468b5d90;
      local_3dc = DAT_1468b5d98;
    }
    else {
      local_3e4 = *(undefined8 *)(lVar4 + 0x220);
      local_3dc = *(undefined4 *)(lVar4 + 0x228);
    }
    local_3d8 = local_3e4;
    local_3d0 = local_3dc;
    cVar3 = FUN_1407617b0(*param_2,&local_3d8,2,0);
    if (cVar3 != '\0') {
      return '\x02';
    }
  }
LAB_1406f54f6:
  cVar3 = FUN_1406ef4b0(param_1,param_2);
  if (cVar3 != '\0') {
    lVar4 = *(longlong *)(param_1 + 0xd8) + param_2[1] + 0x58;
    *(undefined1 *)(lVar4 + 2) = 0;
    FUN_1406fb8d0(lVar4,param_2);
  }
  return '\0';
}



// FUNCTION 1406f5550 FUN_1406f5550 body=279 status=ok
// SIG undefined FUN_1406f5550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1406f5550(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  cVar1 = FUN_1407196a0();
  if (cVar1 == '\0') {
    cVar2 = FUN_1406ef3f0(param_1,param_2);
    if (cVar2 != '\0') {
      lVar3 = (**(code **)(*(longlong *)*param_2 + 0x688))();
      if (lVar3 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x168);
        if (lVar3 == 0) {
          local_28 = _DAT_1468b5d90;
          local_20 = DAT_1468b5d98;
        }
        else {
          local_28 = *(undefined8 *)(lVar3 + 0x220);
          local_20 = *(undefined4 *)(lVar3 + 0x228);
        }
        local_18 = local_28;
        local_10 = local_20;
        cVar2 = FUN_1407617b0(*param_2,&local_18,2,0);
        if (cVar2 != '\0') {
          return '\x02';
        }
      }
    }
    cVar2 = FUN_1406ef3f0(param_1,param_2);
    if (cVar2 != '\0') {
      lVar3 = *(longlong *)(param_1 + 0xd8) + param_2[1] + 0x58;
      *(undefined1 *)(lVar3 + 2) = 0;
      FUN_1406fb8d0(lVar3,param_2);
    }
  }
  return cVar1;
}



// FUNCTION 1406f5670 FUN_1406f5670 body=114 status=ok
// SIG undefined FUN_1406f5670(void)

undefined1 FUN_1406f5670(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x341) != '\0') {
    cVar1 = FUN_1406df580(param_1,param_1 + 400,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if (*(char *)(param_1 + 0x342) != '\0') {
    cVar1 = FUN_1406df580(param_1,param_1 + 0x220,param_2);
    if (cVar1 != '\0') {
      return 2;
    }
  }
  return 0;
}



// FUNCTION 1406f56f0 FUN_1406f56f0 body=44 status=ok
// SIG undefined FUN_1406f56f0(void)

undefined1 FUN_1406f56f0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 0xd8) + 0x48 + *(longlong *)(param_2 + 8))
  ;
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 1406f5720 FUN_1406f5720 body=90 status=ok
// SIG undefined FUN_1406f5720(void)

longlong FUN_1406f5720(longlong param_1,longlong *param_2)

{
  char extraout_AL;
  uint7 extraout_var;
  char cVar1;
  
  FUN_142cd4660(param_1 + 0x100,*(undefined8 *)(*param_2 + 0x568));
  cVar1 = extraout_AL;
  if (*(char *)(param_1 + 0x110) != '\0') {
    cVar1 = extraout_AL == '\0';
  }
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x111) == '\x01') {
      return CONCAT71(extraout_var,1);
    }
    if (*(char *)(param_1 + 0x111) == '\x02') {
      return CONCAT71(extraout_var,2);
    }
  }
  return (ulonglong)extraout_var << 8;
}



// FUNCTION 1406f5780 FUN_1406f5780 body=681 status=ok
// SIG undefined FUN_1406f5780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1406f5780(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  do {
    lVar9 = param_2[1] + *(longlong *)(param_1 + 0xd8);
    cVar1 = *(char *)(lVar9 + 0x78);
    if (cVar1 == '\0') {
      FUN_1406f2e00(param_1,param_2,1);
      *(undefined1 *)(lVar9 + 0x78) = 1;
      *(undefined1 *)(lVar9 + 0xf0) = 0;
      lVar4 = *(longlong *)(param_1 + 0x100);
      if (((lVar4 != 0) && (*(longlong *)(lVar4 + 200) != 0)) && (*(char *)(lVar4 + 0x60) == '\0'))
      {
        lVar4 = FWeakObjectPtr::Get(param_2[1] + 200 + *(longlong *)(param_1 + 0xd8));
        if (lVar4 != 0) {
          FUN_142ddc5e0(lVar4,1,*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 200));
        }
      }
    }
    else if (cVar1 == '\x01') {
      cVar3 = FUN_1406ef7c0(param_1,param_2);
      if (cVar3 == '\0') {
        lVar8 = param_2[1] + *(longlong *)(param_1 + 0xd8);
        *(undefined1 *)(lVar8 + 0xf0) = 0;
        lVar5 = FWeakObjectPtr::Get(lVar8 + 0xd0);
        lVar4 = *(longlong *)(*param_2 + 0x488);
        if ((lVar4 != 0) && (lVar5 != 0)) {
          cVar3 = FUN_1406fb4e0(param_1,param_2,1);
          if (cVar3 != '\0') {
            *(undefined4 *)(lVar8 + 0x58) = 0;
            *(int *)(lVar8 + 0x5c) = (int)param_2[3];
            *(undefined8 *)(lVar8 + 0x60) = DAT_14622e6d0;
            *(undefined4 *)(lVar8 + 0x68) = DAT_14622e6d8;
            lVar4 = *(longlong *)(lVar4 + 0x168);
            if (lVar4 == 0) {
              local_34 = DAT_1468b5d98;
              puVar6 = &local_3c;
              local_3c = _DAT_1468b5d90;
            }
            else {
              puVar6 = (undefined8 *)&local_48;
              local_48 = *(undefined4 *)(lVar4 + 0x220);
              local_40 = *(undefined4 *)(lVar4 + 0x228);
              uStack_44 = *(undefined4 *)(lVar4 + 0x224);
            }
            uVar2 = *(undefined4 *)(puVar6 + 1);
            *(undefined8 *)(lVar8 + 0x6c) = *puVar6;
            *(undefined4 *)(lVar8 + 0x74) = uVar2;
            uVar7 = FWeakObjectPtr::Get(lVar8 + 0xa4);
            FUN_142ce0fd0(lVar5 + 0xea8,*(undefined8 *)(param_1 + 0x100),uVar7);
            FUN_1406f2e00(param_1,param_2,2);
          }
        }
        *(undefined1 *)(lVar9 + 0x78) = 2;
      }
    }
    else if (cVar1 == '\x02') {
      cVar3 = FUN_1406fac70(param_1,param_2);
      if (cVar3 == '\0') {
        FUN_1406f8020(param_1,param_2);
        lVar4 = *(longlong *)(param_1 + 0x100);
        if (((lVar4 != 0) && (*(longlong *)(lVar4 + 200) != 0)) && (*(char *)(lVar4 + 0x60) == '\0')
           ) {
          lVar4 = FWeakObjectPtr::Get(param_2[1] + 200 + *(longlong *)(param_1 + 0xd8));
          if (lVar4 != 0) {
            FUN_142dc77b0(lVar4,1);
          }
        }
        *(undefined1 *)(lVar9 + 0x78) = 3;
      }
    }
    else if (cVar1 == '\x03') {
      cVar3 = FUN_1406ef7c0(param_1,param_2);
      if (cVar3 == '\0') {
        *(undefined1 *)(lVar9 + 0x78) = 4;
      }
    }
  } while (*(char *)(lVar9 + 0x78) != cVar1);
  return CONCAT71((int7)((ulonglong)param_2[1] >> 8),
                  *(char *)(param_2[1] + 0x78 + *(longlong *)(param_1 + 0xd8)) == '\x04');
}



// FUNCTION 1406f5a30 FUN_1406f5a30 body=402 status=ok
// SIG undefined FUN_1406f5a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1406f5a30(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_28;
  float local_20;
  undefined8 local_18;
  float local_10;
  
  uVar1 = FUN_14071aa90();
  if (*(longlong *)(*param_2 + 0x488) == 0) {
    return 2;
  }
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x488) + 0x168);
  if (lVar3 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar3 + 0x220);
    local_10 = *(float *)(lVar3 + 0x228);
  }
  lVar3 = *(longlong *)(param_1 + 0xd8);
  lVar4 = param_2[1];
  fVar6 = *(float *)(lVar4 + 100 + lVar3);
  local_28 = local_18;
  local_20 = local_10;
  if ((((-(float)DAT_14622e6d0 < fVar6) && (fVar6 < (float)DAT_14622e6d0)) &&
      (fVar5 = *(float *)(lVar4 + 0x68 + lVar3), -DAT_14622e6d0._4_4_ < fVar5)) &&
     (((fVar5 < DAT_14622e6d0._4_4_ &&
       (fVar5 = *(float *)(lVar4 + 0x6c + lVar3), -DAT_14622e6d8 < fVar5)) &&
      (fVar5 < DAT_14622e6d8)))) {
    local_28._0_4_ = (float)local_18;
    local_28._4_4_ = (float)((ulonglong)local_18 >> 0x20);
    fVar6 = (float)local_28 - fVar6;
    fVar7 = local_28._4_4_ - *(float *)(lVar4 + 0x68 + lVar3);
    fVar5 = local_10 - *(float *)(lVar4 + 0x6c + lVar3);
    if (fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5 <
        *(float *)(param_1 + 0x264) * *(float *)(param_1 + 0x264)) goto LAB_1406f5b9c;
  }
  FUN_1406fb750(param_1,param_2,&local_28);
  lVar3 = *(longlong *)(param_1 + 0xd8);
  lVar4 = param_2[1];
LAB_1406f5b9c:
  cVar2 = FUN_142fa8b20(lVar3 + lVar4 + 0x70);
  if (cVar2 == '\0') {
    return 2;
  }
  return uVar1;
}



// FUNCTION 1406f5bd0 FUN_1406f5bd0 body=186 status=ok
// SIG undefined FUN_1406f5bd0(void)

undefined8 FUN_1406f5bd0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar4 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x48);
  if (cVar2 == '\0') {
    return 2;
  }
  lVar1 = *(longlong *)(*param_2 + 0x568);
  if (lVar1 != 0) {
    lVar4 = FWeakObjectPtr::Get(lVar4 + 0x48);
    if (lVar4 != 0) {
      uVar3 = FUN_14075ef00(lVar4 + 0x1e8,&local_28);
      FUN_142cd0450(param_1 + 0x5c8,lVar1,uVar3);
      local_18 = local_28;
      local_10 = local_20;
      FUN_142cd0df0(param_1 + 0x5b8,lVar1,&local_18);
    }
  }
  return 0;
}



// FUNCTION 1406f5c90 FUN_1406f5c90 body=108 status=ok
// SIG undefined FUN_1406f5c90(void)

undefined1 FUN_1406f5c90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x341) != '\0') {
    cVar1 = FUN_1406e8e60(param_1 + 400);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if (*(char *)(param_1 + 0x342) != '\0') {
    cVar1 = FUN_1406e8e60(param_1 + 0x220,param_2);
    if (cVar1 != '\0') {
      return 2;
    }
  }
  return 0;
}



// FUNCTION 1406f5d00 FUN_1406f5d00 body=21 status=ok
// SIG undefined FUN_1406f5d00(void)

char FUN_1406f5d00(void)

{
  char cVar1;
  
  cVar1 = FUN_1406fb5d0();
  return (cVar1 == '\0') + '\x01';
}



// FUNCTION 1406f5d20 FUN_1406f5d20 body=706 status=ok
// SIG undefined FUN_1406f5d20(void)

undefined1 FUN_1406f5d20(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  uVar3 = FUN_14071aa90();
  lVar13 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  cVar4 = FWeakObjectPtr::IsValid(lVar13 + 0x7c);
  if (cVar4 == '\0') {
    return uVar3;
  }
  do {
    lVar12 = param_2[1] + *(longlong *)(param_1 + 0xd8);
    cVar4 = *(char *)(lVar12 + 0x68);
    if (cVar4 == '\0') {
      *(undefined1 *)(lVar12 + 0x68) = 1;
      lVar6 = *(longlong *)(param_1 + 0x250);
      lVar11 = FWeakObjectPtr::Get(param_2[1] + 0x74 + *(longlong *)(param_1 + 0xd8));
      if ((lVar11 != 0) && (lVar6 != 0)) {
        lVar8 = FUN_142e20fc0();
        lVar10 = lVar6;
        do {
          if (lVar10 == lVar8) {
            FUN_142c7bae0(lVar11,local_38,lVar6);
            plVar7 = local_30;
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_30 + 1;
              lVar6 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_30)(local_30);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
            }
            break;
          }
          lVar10 = *(longlong *)(lVar10 + 0x30);
        } while (lVar10 != 0);
      }
    }
    else if (cVar4 == '\x01') {
      cVar5 = FUN_1406ef750(param_1,param_2,*(undefined8 *)(param_1 + 0x250));
      if (cVar5 == '\0') {
        *(undefined1 *)(lVar12 + 0x68) = 2;
        lVar11 = param_2[1] + *(longlong *)(param_1 + 0xd8);
        lVar6 = FWeakObjectPtr::Get(lVar11 + 0x7c);
        if ((*(longlong *)(*param_2 + 0x488) != 0) && (lVar6 != 0)) {
          local_48[0] = 0;
          local_48[1] = 0;
          FUN_1406d4410(*(longlong *)(*param_2 + 0x488),local_48,0);
          FUN_1407da9b0(lVar6,local_48);
          FWeakObjectPtr::operator=(lVar11 + 0x7c,lVar6);
          FUN_1407c56e0(lVar6);
          FUN_1407da490(lVar6,1);
          if (local_48[0] != 0) {
            FMemory::Free();
          }
        }
      }
    }
    else if (cVar4 == '\x02') {
      lVar6 = FWeakObjectPtr::Get(lVar12 + 0x7c);
      if ((lVar6 != 0) &&
         (cVar5 = AIndianaPlayerController::ToggleCharacterSummary(lVar6), cVar5 != '\0')) {
        plVar7 = (longlong *)FUN_1407cb160(lVar6);
        plVar9 = (longlong *)*plVar7;
        plVar7 = plVar9 + (int)plVar7[1];
        for (; plVar9 != plVar7; plVar9 = plVar9 + 1) {
          if ((*plVar9 != 0) && (*(char *)(*plVar9 + 0x951) != '\0')) goto LAB_1406f5fae;
        }
        *(undefined1 *)(lVar12 + 0x68) = 3;
        FUN_1406f2d50(param_1,param_2,*(undefined8 *)(param_1 + 600));
        if (*(longlong *)(*param_2 + 0x568) != 0) {
          UBlackboardComponent::SetValueAsBool(*(longlong *)(*param_2 + 0x568),&DAT_146858608,1);
        }
      }
    }
    else if ((cVar4 == '\x03') &&
            (cVar5 = FUN_1406ef750(param_1,param_2,*(undefined8 *)(param_1 + 600)), cVar5 == '\0'))
    {
      *(undefined1 *)(lVar12 + 0x68) = 4;
    }
LAB_1406f5fae:
    if (*(char *)(lVar12 + 0x68) == cVar4) {
      return *(char *)(lVar13 + 0x68) == '\x04';
    }
  } while( true );
}



// FUNCTION 1406f5ff0 FUN_1406f5ff0 body=108 status=ok
// SIG undefined FUN_1406f5ff0(void)

char FUN_1406f5ff0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x409) == '\0') || (*(char *)(param_1 + 0x408) != '\x04')) {
    cVar1 = FUN_1406ed410();
    if (cVar1 == '\0') {
      return '\x02';
    }
    if ((*(char *)(param_1 + 0x498) == '\0') || (*(char *)(param_1 + 0x1c9) != '\0')) {
      return '\0';
    }
  }
  else {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0xd8) + 0x29 + *(longlong *)(param_2 + 8));
    if ((cVar1 != '\x02') || (*(char *)(param_1 + 0xd3) == '\0')) {
      return cVar1;
    }
  }
  return '\x01';
}



// FUNCTION 1406f6130 FUN_1406f6130 body=143 status=ok
// SIG undefined FUN_1406f6130(void)

void FUN_1406f6130(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  
  if ((((*(byte *)(param_2 + 0x28) & 1) == 0) || ((*(uint *)(param_1 + 1) >> 0x15 & 1) != 0)) ||
     (DAT_1468b6168 != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    (**(code **)(*param_1 + 0x318))();
  }
  FUN_141763960(param_1,param_2);
  if (bVar1) {
    cVar2 = (**(code **)(*param_1 + 0x310))(param_1);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x328))(param_1);
      (**(code **)(*param_1 + 800))(param_1);
      UObjectBaseUtility::MarkPackageDirty(param_1);
    }
  }
  return;
}



// FUNCTION 1406f61c0 FUN_1406f61c0 body=166 status=ok
// SIG undefined FUN_1406f61c0(void)

void FUN_1406f61c0(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 local_38 [4];
  undefined1 local_34 [44];
  
  lVar2 = FRuntimeFloatCurve::GetRichCurve(param_4);
  if ((lVar2 != 0) && ((*(float *)(lVar2 + 0x5c) != 3.4028235e+38 || (*(int *)(lVar2 + 0x68) != 0)))
     ) {
    fVar4 = (float)FRichCurve::Eval(lVar2,param_5,0);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    puVar3 = (undefined8 *)
             FUN_14248a390(param_1,local_34,param_2,(param_3 != '\0') + '\x03',fVar4,local_38);
    uVar1 = puVar3[1];
    *param_2 = *puVar3;
    param_2[1] = uVar1;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar3 + 2);
  }
  return;
}



// FUNCTION 1406f6270 FUN_1406f6270 body=41 status=ok
// SIG undefined FUN_1406f6270(void)

void FUN_1406f6270(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined6 uStack_e;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(lVar1 + 0x58) = *param_2;
    *(ulonglong *)(lVar1 + 0x60) = CONCAT62(uStack_e,0xff00);
  }
  return;
}



// FUNCTION 1406f62a0 FUN_1406f62a0 body=658 status=ok
// SIG undefined FUN_1406f62a0(void)

void FUN_1406f62a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined1 local_98 [144];
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x38) < DAT_1468587a8) &&
     (_Init_thread_header(&DAT_1468587a8), DAT_1468587a8 == -1)) {
    FName::FName(&DAT_1468587a0,L"DoViewTest",1);
    _Init_thread_footer(&DAT_1468587a8);
  }
  if ((*(int *)(lVar4 + 0x38) < DAT_1468587b8) &&
     (_Init_thread_header(&DAT_1468587b8), DAT_1468587b8 == -1)) {
    FName::FName(&DAT_1468587b0,L"DoExposureTest",1);
    _Init_thread_footer(&DAT_1468587b8);
  }
  plVar1 = (longlong *)(param_1 + 0x350);
  lVar4 = *plVar1;
  lVar6 = (longlong)*(int *)(param_1 + 0x358) * 0x88 + lVar4;
  for (; lVar4 != lVar6; lVar4 = lVar4 + 0x88) {
    if (*(longlong *)(lVar4 + 0x80) == DAT_1468587a0) goto LAB_1406f637e;
  }
  uVar3 = FUN_142de2ad0(local_98,DAT_1468587a0,1);
  iVar2 = *(int *)(param_1 + 0x358);
  *(int *)(param_1 + 0x358) = iVar2 + 1;
  if (*(int *)(param_1 + 0x35c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar2);
  }
  FUN_142de2880((longlong)iVar2 * 0x88 + *plVar1,uVar3);
LAB_1406f637e:
  lVar4 = *plVar1;
  lVar6 = (longlong)*(int *)(param_1 + 0x358) * 0x88 + lVar4;
  for (; lVar4 != lVar6; lVar4 = lVar4 + 0x88) {
    if (*(longlong *)(lVar4 + 0x80) == DAT_1468587b0) goto LAB_1406f63fe;
  }
  uVar3 = FUN_142de2ad0(local_98,DAT_1468587b0,1);
  iVar2 = *(int *)(param_1 + 0x358);
  *(int *)(param_1 + 0x358) = iVar2 + 1;
  if (*(int *)(param_1 + 0x35c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar2);
  }
  FUN_142de2880((longlong)iVar2 * 0x88 + *plVar1,uVar3);
LAB_1406f63fe:
  pcVar5 = (char *)*plVar1;
  pcVar7 = pcVar5 + (longlong)*(int *)(param_1 + 0x358) * 0x88;
  for (; pcVar5 != pcVar7; pcVar5 = pcVar5 + 0x88) {
    if ((*(longlong *)(pcVar5 + 0x80) == DAT_1468587a0) && (*pcVar5 == '\x01')) {
      pcVar5[3] = '\0';
      if (*(char *)(param_1 + 0x198) == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = 0x3f800000;
      }
      *(undefined4 *)(pcVar5 + 4) = uVar8;
    }
    if ((*(longlong *)(pcVar5 + 0x80) == DAT_1468587b0) && (*pcVar5 == '\x01')) {
      pcVar5[3] = '\0';
      if (*(char *)(param_1 + 0x199) == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = 0x3f800000;
      }
      *(undefined4 *)(pcVar5 + 4) = uVar8;
    }
  }
  return;
}



// FUNCTION 1406f6540 SetTriggerOnZeroDamage body=7 status=ok
// SIG undefined SetTriggerOnZeroDamage(void)

void UOnCausedDamage::SetTriggerOnZeroDamage(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xd0) = param_2;
  return;
}



// FUNCTION 1406f6550 FUN_1406f6550 body=46 status=ok
// SIG undefined FUN_1406f6550(void)

void FUN_1406f6550(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  puVar1 = (undefined8 *)FUN_142f9e0e0(local_18,*param_1,param_2);
  *(undefined8 *)((longlong)param_1 + 0x14) = *puVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1406f6580 FUN_1406f6580 body=285 status=ok
// SIG undefined FUN_1406f6580(void)

void FUN_1406f6580(longlong param_1,int param_2,int param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  
  if (param_3 != 0) {
    uVar5 = param_2 >> 0x1f & 0x1f;
    iVar2 = param_2 + uVar5;
    uVar7 = iVar2 >> 5;
    iVar6 = param_3 + param_2 + 0x1f;
    uVar5 = -1 << (((byte)iVar2 & 0x1f) - (char)uVar5 & 0x1f);
    iVar6 = ((int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5) - uVar7;
    uVar10 = 0xffffffff >> (0x20 - ((byte)(param_3 + param_2) & 0x1f) & 0x1f);
    lVar3 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar3 = param_1;
    }
    uVar1 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
    puVar8 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
    if (param_4 != '\0') {
      if (iVar6 == 1) {
        *puVar8 = uVar10 & uVar5 | uVar1;
        return;
      }
      *puVar8 = uVar1 | uVar5;
      puVar8 = puVar8 + 1;
      uVar5 = iVar6 - 2;
      puVar9 = puVar8;
      if (uVar5 != 0) {
        puVar9 = puVar8 + uVar5;
        for (uVar4 = (ulonglong)uVar5; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
      }
      *puVar9 = *puVar9 | uVar10;
      return;
    }
    if (iVar6 == 1) {
      *puVar8 = ~(uVar10 & uVar5) & uVar1;
      return;
    }
    *puVar8 = ~uVar5 & uVar1;
    puVar8 = puVar8 + 1;
    uVar5 = iVar6 - 2;
    puVar9 = puVar8;
    if (uVar5 != 0) {
      puVar9 = puVar8 + uVar5;
      for (uVar4 = (ulonglong)uVar5; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
    }
    *puVar9 = *puVar9 & ~uVar10;
  }
  return;
}



// FUNCTION 1406f66a0 FUN_1406f66a0 body=31 status=ok
// SIG undefined FUN_1406f66a0(void)

void FUN_1406f66a0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x470) = param_2;
  *(undefined8 *)(param_1 + 0x478) = *param_3;
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_3 + 1);
  return;
}



// FUNCTION 1406f66c0 FUN_1406f66c0 body=347 status=ok
// SIG undefined FUN_1406f66c0(void)

void FUN_1406f66c0(longlong *param_1,longlong *param_2,float *param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  float *pfVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  float local_res8 [2];
  undefined1 local_res20 [8];
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_18 [16];
  
  if (*param_1 == 0) {
    return;
  }
  if (param_2 != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x308))(param_2,local_18);
    param_1[4] = *plVar3;
    *(int *)(param_1 + 5) = (int)plVar3[1];
    pfVar4 = (float *)FUN_142f9e160(local_18,param_2);
    local_20 = pfVar4[2] + param_3[2];
    local_24 = pfVar4[1] + param_3[1];
    local_28 = *pfVar4 + *param_3;
    lVar5 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((bVar1) && (plVar3 = (longlong *)param_2[0x120], plVar3 != (longlong *)0x0)) &&
        (cVar2 = (**(code **)(*plVar3 + 0x558))(plVar3), cVar2 != '\0')) &&
       (pbVar6 = (byte *)ASBZCharacter::GetCharacterTag(plVar3), (*pbVar6 & 1) != 0)) {
      local_20 = *(float *)(pbVar6 + 0x1c);
      (**(code **)(*param_2 + 0x578))(param_2,local_res20,local_res8);
      local_20 = local_20 - local_res8[0];
    }
    else {
      local_20 = (float)FUN_142fa2df0(*param_1,&local_28,0);
    }
    puVar7 = (undefined8 *)FUN_142f9e0e0(local_18,*param_1,&local_28);
    *(undefined8 *)((longlong)param_1 + 0x14) = *puVar7;
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(puVar7 + 1);
    return;
  }
  return;
}



// FUNCTION 1406f6820 FUN_1406f6820 body=41 status=ok
// SIG undefined FUN_1406f6820(void)

void FUN_1406f6820(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1424d11a0(param_1 + 0x34,param_1 + 8,param_1 + 0x14,param_2,param_3,param_4);
  return;
}



// FUNCTION 1406f6850 FUN_1406f6850 body=527 status=ok
// SIG undefined FUN_1406f6850(void)

void FUN_1406f6850(longlong param_1,longlong *param_2)

{
  WriteBytesMem *this;
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  uchar *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [12];
  undefined1 local_3c [20];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  lVar1 = *(longlong *)(*param_2 + 0x568);
  if (lVar1 == 0) {
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  cVar3 = FWeakObjectPtr::IsValid(lVar8 + 0x48);
  if (cVar3 == '\0') {
    return;
  }
  lVar8 = FWeakObjectPtr::Get(lVar8 + 0x48);
  this = (WriteBytesMem *)(lVar8 + 0x1e8);
  puVar6 = AK::WriteBytesMem::Bytes(this);
  if (puVar6 == (uchar *)0x0) {
    return;
  }
  FUN_142cd0820(param_1 + 0x598,lVar1,*(undefined4 *)(puVar6 + 0x728));
  FUN_142cd0a60(param_1 + 0x588,lVar1,puVar6);
  local_88 = 0;
  local_80 = 0;
  cVar3 = FUN_14075c6e0(this,&local_88);
  if (cVar3 == '\0') {
    lVar8 = *(longlong *)(*param_2 + 0x488);
    if (lVar8 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x168);
      if (lVar8 == 0) {
        uVar9 = (undefined4)DAT_1468b5da0;
        uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_70 = DAT_1468b5da8;
      }
      else {
        local_28 = *(float *)(lVar8 + 0x210);
        fStack_24 = *(float *)(lVar8 + 0x214);
        fStack_20 = *(float *)(lVar8 + 0x218);
        fStack_1c = *(float *)(lVar8 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != fStack_24);
        auVar2._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != local_28);
        auVar2._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_20);
        auVar2._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_1c);
        iVar5 = movmskps((int)*param_2,auVar2);
        if (iVar5 != 0) {
          *(float *)(lVar8 + 0x250) = local_28;
          *(float *)(lVar8 + 0x254) = fStack_24;
          *(float *)(lVar8 + 600) = fStack_20;
          *(float *)(lVar8 + 0x25c) = fStack_1c;
          puVar7 = (undefined8 *)FQuat::Rotator(&local_28,local_48);
          *(undefined8 *)(lVar8 + 0x260) = *puVar7;
          *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar7 + 1);
        }
        uVar9 = (undefined4)*(undefined8 *)(lVar8 + 0x260);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x260) >> 0x20);
        local_70 = *(undefined4 *)(lVar8 + 0x268);
      }
      local_78 = CONCAT44(uVar10,uVar9);
      local_68 = local_78;
      local_60 = local_70;
      puVar7 = (undefined8 *)FRotator::Vector(&local_68,local_3c);
      local_88 = *puVar7;
      uVar9 = (undefined4)local_88;
      uVar10 = (undefined4)((ulonglong)local_88 >> 0x20);
      local_80 = *(undefined4 *)(puVar7 + 1);
      goto LAB_1406f69de;
    }
  }
  uVar9 = (undefined4)local_88;
  uVar10 = (undefined4)((ulonglong)local_88 >> 0x20);
LAB_1406f69de:
  local_68 = CONCAT44(uVar10,uVar9);
  local_60 = local_80;
  FUN_142cd0df0(param_1 + 0x5a8,lVar1,&local_68);
  uVar4 = FUN_14075ef00(this,&local_58);
  FUN_142cd0450(param_1 + 0x5c8,lVar1,uVar4);
  local_68 = local_58;
  local_60 = local_50;
  FUN_142cd0df0(param_1 + 0x5b8,lVar1,&local_68);
  return;
}



// FUNCTION 1406f6a60 FUN_1406f6a60 body=25 status=ok
// SIG undefined FUN_1406f6a60(void)

void FUN_1406f6a60(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x141) = 4;
  return;
}



// FUNCTION 1406f6aa0 FUN_1406f6aa0 body=34 status=ok
// SIG undefined FUN_1406f6aa0(void)

void FUN_1406f6aa0(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0xf98) = 7;
  *(undefined1 *)(param_1 + 0x1731) = 2;
  return;
}



// FUNCTION 1406f6ad0 FUN_1406f6ad0 body=27 status=ok
// SIG undefined FUN_1406f6ad0(void)

void FUN_1406f6ad0(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0x350) = 0;
  return;
}



// FUNCTION 1406f6af0 FUN_1406f6af0 body=27 status=ok
// SIG undefined FUN_1406f6af0(void)

void FUN_1406f6af0(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0xf98) = 7;
  return;
}



// FUNCTION 1406f6b10 FUN_1406f6b10 body=27 status=ok
// SIG undefined FUN_1406f6b10(void)

void FUN_1406f6b10(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0x360) = 0;
  return;
}



// FUNCTION 1406f6b30 FUN_1406f6b30 body=27 status=ok
// SIG undefined FUN_1406f6b30(void)

void FUN_1406f6b30(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0x2c0) = 1;
  return;
}



// FUNCTION 1406f6b50 FUN_1406f6b50 body=27 status=ok
// SIG undefined FUN_1406f6b50(void)

void FUN_1406f6b50(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0x3c0) = 1;
  return;
}



// FUNCTION 1406f6b70 FUN_1406f6b70 body=34 status=ok
// SIG undefined FUN_1406f6b70(void)

void FUN_1406f6b70(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0x171) = 1;
  *(undefined1 *)(param_1 + 0x11b8) = 1;
  return;
}



// FUNCTION 1406f6ba0 FUN_1406f6ba0 body=41 status=ok
// SIG undefined FUN_1406f6ba0(void)

void FUN_1406f6ba0(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0xf98) = 7;
  *(undefined1 *)(param_1 + 0x13f9) = 3;
  *(undefined1 *)(param_1 + 0x19f0) = 1;
  return;
}



// FUNCTION 1406f6bd0 FUN_1406f6bd0 body=41 status=ok
// SIG undefined FUN_1406f6bd0(void)

void FUN_1406f6bd0(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0xf98) = 7;
  *(undefined1 *)(param_1 + 0x1731) = 2;
  *(undefined1 *)(param_1 + 0x1c11) = 2;
  return;
}



// FUNCTION 1406f6c00 FUN_1406f6c00 body=41 status=ok
// SIG undefined FUN_1406f6c00(void)

void FUN_1406f6c00(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0xf98) = 7;
  *(undefined1 *)(param_1 + 0x1731) = 2;
  *(undefined1 *)(param_1 + 0x1b20) = 6;
  return;
}



// FUNCTION 1406f6c30 FUN_1406f6c30 body=41 status=ok
// SIG undefined FUN_1406f6c30(void)

void FUN_1406f6c30(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0xf98) = 7;
  *(undefined1 *)(param_1 + 0x13f9) = 3;
  *(undefined1 *)(param_1 + 0x1a18) = 4;
  return;
}



// FUNCTION 1406f6c60 FUN_1406f6c60 body=27 status=ok
// SIG undefined FUN_1406f6c60(void)

void FUN_1406f6c60(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0x171) = 1;
  return;
}



// FUNCTION 1406f6c80 FUN_1406f6c80 body=27 status=ok
// SIG undefined FUN_1406f6c80(void)

void FUN_1406f6c80(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0x11b8) = 6;
  return;
}



// FUNCTION 1406f6ca0 FUN_1406f6ca0 body=34 status=ok
// SIG undefined FUN_1406f6ca0(void)

void FUN_1406f6ca0(longlong param_1)

{
  FUN_14071c640();
  *(undefined1 *)(param_1 + 0xf98) = 7;
  *(undefined1 *)(param_1 + 0x13f9) = 3;
  return;
}



// FUNCTION 1406f6cd0 FUN_1406f6cd0 body=25 status=ok
// SIG undefined FUN_1406f6cd0(void)

void FUN_1406f6cd0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x141) = 0;
  return;
}



// FUNCTION 1406f6d10 FUN_1406f6d10 body=34 status=ok
// SIG undefined FUN_1406f6d10(void)

void FUN_1406f6d10(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0xf98) = 0;
  *(undefined1 *)(param_1 + 0x1731) = 0;
  return;
}



// FUNCTION 1406f6d40 FUN_1406f6d40 body=27 status=ok
// SIG undefined FUN_1406f6d40(void)

void FUN_1406f6d40(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0x350) = 0;
  return;
}



// FUNCTION 1406f6d60 FUN_1406f6d60 body=27 status=ok
// SIG undefined FUN_1406f6d60(void)

void FUN_1406f6d60(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0xf98) = 0;
  return;
}



// FUNCTION 1406f6d80 FUN_1406f6d80 body=27 status=ok
// SIG undefined FUN_1406f6d80(void)

void FUN_1406f6d80(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0x360) = 0;
  return;
}



// FUNCTION 1406f6da0 FUN_1406f6da0 body=27 status=ok
// SIG undefined FUN_1406f6da0(void)

void FUN_1406f6da0(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  return;
}



// FUNCTION 1406f6dc0 FUN_1406f6dc0 body=27 status=ok
// SIG undefined FUN_1406f6dc0(void)

void FUN_1406f6dc0(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0x3c0) = 0;
  return;
}



// FUNCTION 1406f6de0 FUN_1406f6de0 body=34 status=ok
// SIG undefined FUN_1406f6de0(void)

void FUN_1406f6de0(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0x171) = 0;
  *(undefined1 *)(param_1 + 0x11b8) = 0;
  return;
}



// FUNCTION 1406f6e10 FUN_1406f6e10 body=41 status=ok
// SIG undefined FUN_1406f6e10(void)

void FUN_1406f6e10(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0xf98) = 0;
  *(undefined1 *)(param_1 + 0x13f9) = 0;
  *(undefined1 *)(param_1 + 0x19f0) = 0;
  return;
}



// FUNCTION 1406f6e40 FUN_1406f6e40 body=41 status=ok
// SIG undefined FUN_1406f6e40(void)

void FUN_1406f6e40(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0xf98) = 0;
  *(undefined1 *)(param_1 + 0x1731) = 0;
  *(undefined1 *)(param_1 + 0x1c11) = 0;
  return;
}



// FUNCTION 1406f6e70 FUN_1406f6e70 body=41 status=ok
// SIG undefined FUN_1406f6e70(void)

void FUN_1406f6e70(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0xf98) = 0;
  *(undefined1 *)(param_1 + 0x1731) = 0;
  *(undefined1 *)(param_1 + 0x1b20) = 0;
  return;
}



// FUNCTION 1406f6ea0 FUN_1406f6ea0 body=41 status=ok
// SIG undefined FUN_1406f6ea0(void)

void FUN_1406f6ea0(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0xf98) = 0;
  *(undefined1 *)(param_1 + 0x13f9) = 0;
  *(undefined1 *)(param_1 + 0x1a18) = 0;
  return;
}



// FUNCTION 1406f6ed0 FUN_1406f6ed0 body=27 status=ok
// SIG undefined FUN_1406f6ed0(void)

void FUN_1406f6ed0(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0x171) = 0;
  return;
}



// FUNCTION 1406f6ef0 FUN_1406f6ef0 body=27 status=ok
// SIG undefined FUN_1406f6ef0(void)

void FUN_1406f6ef0(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0x11b8) = 0;
  return;
}



// FUNCTION 1406f6f10 FUN_1406f6f10 body=34 status=ok
// SIG undefined FUN_1406f6f10(void)

void FUN_1406f6f10(longlong param_1)

{
  FUN_14071c660();
  *(undefined1 *)(param_1 + 0xf98) = 0;
  *(undefined1 *)(param_1 + 0x13f9) = 0;
  return;
}



// FUNCTION 1406f6f40 FUN_1406f6f40 body=378 status=ok
// SIG undefined FUN_1406f6f40(void)

bool FUN_1406f6f40(longlong *param_1,longlong *param_2,undefined4 param_3,undefined1 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x668))();
    if (lVar2 != 0) {
      lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar2 = *(longlong *)(lVar2 + 0x568), lVar2 != 0)) {
        plVar6 = (longlong *)0x0;
        if (param_2 != (longlong *)0x0) {
          lVar3 = FUN_1428dfc70();
          if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
              != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar4 = UGNewsMenuItem::GetPrivateStaticClass();
            plVar5 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar4);
            if (plVar5 != (longlong *)0x0) {
              plVar6 = plVar5;
            }
          }
          else {
            lVar3 = UGNewsMenuItem::GetPrivateStaticClass();
            if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
                lVar3 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            plVar6 = (longlong *)0x0;
            if (bVar1) {
              plVar6 = param_2;
            }
          }
        }
        FUN_142bcad50(lVar2,&DAT_146858500,plVar6);
        UBlackboardComponent::SetValueAsFloat(lVar2,&DAT_146858508,param_3);
        UBlackboardComponent::SetValueAsBool(lVar2,&DAT_146858510,param_4);
        return plVar6 != (longlong *)0x0;
      }
    }
  }
  return false;
}



// FUNCTION 1406f70d0 FUN_1406f70d0 body=491 status=ok
// SIG undefined FUN_1406f70d0(void)

ulonglong FUN_1406f70d0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = *(longlong *)(param_2 + 8) + param_1[0x1b];
  if ((char)param_1[0x1a] == '\0') {
LAB_1406f72ab:
    return in_RAX & 0xffffffffffffff00;
  }
  in_RAX = 0;
  if ((*(char *)(lVar4 + 0x28) != '\0') && (*(char *)(lVar4 + 0x28) != '\x03')) goto LAB_1406f72ab;
  (**(code **)(*param_1 + 0x300))();
  *(undefined4 *)(lVar4 + 0x20) = 0;
  if (0x7fffffff < *(uint *)(lVar4 + 0x24)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar4 + 0x18,0);
  }
  if (*(undefined2 **)(lVar4 + 0x18) != (undefined2 *)0x0) {
    **(undefined2 **)(lVar4 + 0x18) = 0;
  }
  *(int *)(lVar4 + 0x2c) = *(int *)(lVar4 + 0x2c) + 1;
  *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(lVar4 + 0x3c) = 0;
  FWeakObjectPtr::operator=(lVar4,param_3);
  *(undefined1 *)(lVar4 + 0x28) = 1;
  FUN_1406e9160(lVar4 + 8,param_1,param_2,0);
  bVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,param_2);
  (**(code **)(*param_1 + 0x2a8))(param_1,param_2);
  *(undefined1 *)(lVar4 + 0x28) = 2;
  FUN_1406e9160(lVar4 + 8,param_1,param_2,1);
  if (bVar1 != 0) {
    cVar3 = *(char *)(*(longlong *)(param_2 + 8) + 0x29 + param_1[0x1b]);
    if (cVar3 == '\x01') {
      cVar3 = *(char *)((longlong)param_1 + 0xd1);
    }
    else {
      if (cVar3 != '\x02') {
        if ((cVar3 != '\x03') && (cVar3 != '\x04')) {
          return (ulonglong)bVar1;
        }
        goto LAB_1406f7209;
      }
      cVar3 = *(char *)((longlong)param_1 + 0xd2);
    }
    if (cVar3 != '\0') goto LAB_1406f7299;
  }
LAB_1406f7209:
  cVar3 = *(char *)(*(longlong *)(param_2 + 8) + 0x29 + param_1[0x1b]);
  if ((cVar3 == '\x02') && (*(char *)((longlong)param_1 + 0xd3) != '\0')) {
    cVar3 = '\x01';
  }
  else if (cVar3 == '\0') {
    cVar3 = '\x02';
  }
  if (cVar3 == '\x01') {
    cVar2 = *(char *)((longlong)param_1 + 0xd1);
LAB_1406f7263:
    bVar5 = cVar2 == '\0';
LAB_1406f7265:
    if (!bVar5) {
      return 1;
    }
  }
  else {
    if (cVar3 == '\x02') {
      cVar2 = *(char *)((longlong)param_1 + 0xd2);
      goto LAB_1406f7263;
    }
    if (cVar3 != '\x03') {
      bVar5 = cVar3 == '\x04';
      goto LAB_1406f7265;
    }
  }
  cVar3 = FUN_1406f7e60(param_1,param_2,cVar3);
  if (cVar3 == '\0') {
    bVar1 = 1;
  }
LAB_1406f7299:
  return (ulonglong)bVar1;
}



// FUNCTION 1406f72c0 FUN_1406f72c0 body=1739 status=ok
// SIG undefined FUN_1406f72c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406f72c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_138;
  float local_130;
  float local_128;
  float fStack_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  undefined1 local_ef;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar1 = FUN_142c6f130();
  if (lVar1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x468) == 0) {
    return;
  }
  lVar6 = *(longlong *)(lVar1 + 0x168);
  if (lVar6 == 0) {
    local_138._0_4_ = DAT_1468b5d90;
    local_138._4_4_ = DAT_1468b5d94;
    local_130 = DAT_1468b5d98;
  }
  else {
    local_138._0_4_ = *(float *)(lVar6 + 0x220);
    local_138._4_4_ = *(float *)(lVar6 + 0x224);
    local_130 = *(float *)(lVar6 + 0x228);
  }
  fVar9 = local_138._4_4_;
  fVar11 = (float)local_138;
  uVar2 = FUN_142c48330(param_1 + 0x4a8,&local_128);
  uVar3 = FUN_142c6f130(param_1);
  FUN_142f9e0e0(&local_118,uVar3,uVar2);
  local_128 = local_118 - fVar11;
  local_120 = local_110 - local_130;
  fStack_124 = local_114 - fVar9;
  fVar10 = fStack_124 * fStack_124 + local_128 * local_128;
  if (fVar10 == 1.0) {
    if (local_120 != 0.0) {
LAB_1406f74c2:
      local_120 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar10) {
      auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar12 = auVar13._0_4_;
      fVar12 = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
      fVar12 = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
      local_128 = local_128 * fVar12;
      fStack_124 = fStack_124 * fVar12;
      goto LAB_1406f74c2;
    }
    local_128 = DAT_1468b5d90;
    local_120 = DAT_1468b5d98;
    fStack_124 = DAT_1468b5d94;
  }
  local_138._0_4_ = fVar11;
  local_138._4_4_ = fVar9;
  FVector::Rotation(&local_128,&local_e8);
  fVar9 = *(float *)(*(longlong *)(param_1 + 0x10) + 0xe0);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xdc) == '\0') {
    if ((*(longlong **)(param_1 + 0x468) == (longlong *)0x0) ||
       (fVar9 = (float)(**(code **)(**(longlong **)(param_1 + 0x468) + 0x400))(), fVar9 <= 0.0)) {
      fVar9 = 440.0;
    }
    fVar9 = SQRT((local_114 - local_138._4_4_) * (local_114 - local_138._4_4_) +
                 (local_118 - fVar11) * (local_118 - fVar11) +
                 (local_110 - local_130) * (local_110 - local_130)) * (1.0 / fVar9);
  }
  DSP::CAkRectifier::CAkRectifier(&local_100);
  local_ef = 1;
  lVar1 = *(longlong *)(lVar1 + 0x168);
  if (lVar1 == 0) {
    local_138._0_4_ = DAT_1468b5d90;
    local_138._4_4_ = DAT_1468b5d94;
    local_130 = DAT_1468b5d98;
  }
  else {
    local_138._0_4_ = *(float *)(lVar1 + 0x220);
    local_138._4_4_ = *(float *)(lVar1 + 0x224);
    local_130 = *(float *)(lVar1 + 0x228);
  }
  local_130 = local_110 - local_130;
  local_100 = CONCAT44(local_114 - local_138._4_4_,local_118 - (float)local_138);
  local_f8 = local_130;
  local_f4 = fVar9;
  local_140 = FUN_142d85b60(*(longlong *)(param_1 + 0x468) + 0x2428,&local_100,0);
  local_130 = (float)local_e0;
  *(undefined8 *)(param_1 + 0x4e8) = local_140;
  local_138 = local_e8;
  local_148 = 0;
  FUN_142d85fe0(*(longlong *)(param_1 + 0x468) + 0x2428,&local_138,fVar9,1);
  puVar4 = (undefined8 *)FUN_142c48330(param_1 + 0x4a8,&local_138);
  *(undefined8 *)(param_1 + 0x508) = *puVar4;
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(puVar4 + 1);
  pfVar5 = (float *)FUN_142c48330(param_1 + 0x470,&local_138);
  local_128 = *(float *)(param_1 + 0x508) - *pfVar5;
  fStack_124 = *(float *)(param_1 + 0x50c) - pfVar5[1];
  local_120 = *(float *)(param_1 + 0x510) - pfVar5[2];
  fVar11 = fStack_124 * fStack_124 + local_128 * local_128;
  if (fVar11 == 1.0) {
    if (local_120 == 0.0) goto LAB_1406f77ba;
  }
  else {
    if (fVar11 < 1e-08) {
      local_128 = DAT_1468b5d90;
      local_120 = DAT_1468b5d98;
      fStack_124 = DAT_1468b5d94;
      goto LAB_1406f77ba;
    }
    auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar10 = auVar13._0_4_;
    fVar10 = fVar10 + fVar10 * (0.5 - fVar11 * 0.5 * fVar10 * fVar10);
    fVar10 = fVar10 + fVar10 * (0.5 - fVar11 * 0.5 * fVar10 * fVar10);
    local_128 = local_128 * fVar10;
    fStack_124 = fStack_124 * fVar10;
  }
  local_120 = 0.0;
LAB_1406f77ba:
  *(ulonglong *)(param_1 + 0x4f0) = CONCAT44(fStack_124,local_128);
  *(float *)(param_1 + 0x4f8) = local_120;
  FUN_1406e8180(param_1);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((*(char *)(lVar1 + 0xd4) != '\0') && (lVar6 = FUN_142c6f130(param_1), lVar6 != 0)) {
    fVar9 = fVar9 - *(float *)(lVar1 + 0xd8);
    if (0.0 < fVar9) {
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        plVar7[1] = param_1;
        *plVar7 = (longlong)&DAT_143f3ed00;
        plVar7[2] = (longlong)FUN_1406ddf40;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar7[4] = lVar1;
        *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
      }
      uVar2 = AActor::GetWorldTimerManager(lVar6);
      local_d8 = 0;
      local_d0 = 0;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_d8);
      }
      FWeakObjectPtr::operator=(local_c8,0);
      local_140 = CONCAT44(local_140._4_4_,0xbf800000);
      local_148 = 0;
      local_c0 = 0;
      local_88 = (longlong *)0x0;
      local_78 = 0;
      local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar2,param_1 + 0x530,&local_d8,fVar9);
      if (local_78 != 0) {
        plVar8 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar8 = local_88;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        lVar1 = FMemory::Realloc(plVar7,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
    }
    else {
      uVar2 = FUN_142c6f130(param_1);
      FUN_1407b0750(*(undefined8 *)(param_1 + 0x10),uVar2);
    }
  }
  return;
}



// FUNCTION 1406f7990 FUN_1406f7990 body=1028 status=ok
// SIG undefined FUN_1406f7990(void)

void FUN_1406f7990(char *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint in_stack_fffffffffffffc78;
  undefined8 in_stack_fffffffffffffc80;
  undefined4 uVar12;
  undefined1 local_368 [8];
  undefined2 local_360;
  undefined1 local_135 [13];
  undefined1 local_128 [136];
  undefined1 local_a0 [152];
  
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffc80 >> 0x20);
  if (*param_1 != '\0') {
    return;
  }
  lVar4 = FUN_14075eaf0(*param_2);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x88);
  if (param_1[1] != '\0') {
    if (lVar5 != 0) {
      uVar12 = 0;
      in_stack_fffffffffffffc78 = 0x3f800000;
      cVar3 = FUN_140753a50(lVar4 + 0x48,lVar5,*param_2,0,0x3f800000,0);
      if (cVar3 == '\0') {
        return;
      }
    }
    if ((param_1[1] != '\0') && (lVar5 != 0)) {
      FUN_1407514c0(lVar4 + 0x48,lVar5,*param_2,0x3f800000,in_stack_fffffffffffffc78 & 0xffffff00,
                    CONCAT44(uVar12,0x41200000),0);
    }
  }
  param_1[0] = '\x01';
  param_1[1] = '\x01';
  if (param_1[3] == '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x90);
    puVar9 = *(undefined1 **)(lVar5 + 0x1a0);
    puVar8 = puVar9 + (longlong)*(int *)(lVar5 + 0x1a8) * 0x88;
    lVar4 = DAT_1468585e0;
    for (; puVar9 != puVar8; puVar9 = puVar9 + 0x88) {
      if (*(longlong *)(puVar9 + 0x80) == lVar4) {
        puVar7 = (undefined1 *)FUN_142de2a30(local_128,lVar4,0,0);
        *puVar9 = *puVar7;
        puVar9[1] = puVar7[1];
        puVar9[2] = puVar7[2];
        puVar9[3] = puVar7[3];
        *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar7 + 4);
        *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
        *(undefined8 *)(puVar9 + 0x18) = *(undefined8 *)(puVar7 + 0x18);
        uVar6 = *(undefined8 *)(puVar7 + 0x28);
        *(undefined8 *)(puVar9 + 0x20) = *(undefined8 *)(puVar7 + 0x20);
        *(undefined8 *)(puVar9 + 0x28) = uVar6;
        uVar6 = *(undefined8 *)(puVar7 + 0x38);
        *(undefined8 *)(puVar9 + 0x30) = *(undefined8 *)(puVar7 + 0x30);
        *(undefined8 *)(puVar9 + 0x38) = uVar6;
        uVar6 = *(undefined8 *)(puVar7 + 0x48);
        *(undefined8 *)(puVar9 + 0x40) = *(undefined8 *)(puVar7 + 0x40);
        *(undefined8 *)(puVar9 + 0x48) = uVar6;
        *(undefined8 *)(puVar9 + 0x50) = *(undefined8 *)(puVar7 + 0x50);
        uVar12 = *(undefined4 *)(puVar7 + 0x5c);
        uVar1 = *(undefined4 *)(puVar7 + 0x60);
        uVar2 = *(undefined4 *)(puVar7 + 100);
        *(undefined4 *)(puVar9 + 0x58) = *(undefined4 *)(puVar7 + 0x58);
        *(undefined4 *)(puVar9 + 0x5c) = uVar12;
        *(undefined4 *)(puVar9 + 0x60) = uVar1;
        *(undefined4 *)(puVar9 + 100) = uVar2;
        *(undefined8 *)(puVar9 + 0x68) = *(undefined8 *)(puVar7 + 0x68);
        *(undefined4 *)(puVar9 + 0x70) = *(undefined4 *)(puVar7 + 0x70);
        *(undefined4 *)(puVar9 + 0x74) = *(undefined4 *)(puVar7 + 0x74);
        *(undefined4 *)(puVar9 + 0x78) = *(undefined4 *)(puVar7 + 0x78);
        *(undefined8 *)(puVar9 + 0x80) = *(undefined8 *)(puVar7 + 0x80);
        lVar4 = DAT_1468585e0;
      }
    }
    FUN_1406d4d50(local_368,lVar5 + 0x1d0);
    local_360 = 0x100;
    local_368[0] = 1;
    TTLEOnlineRanking2GetParam::SetCategory(local_135,0);
    lVar10 = *(longlong *)(lVar5 + 0xd8) + param_2[1];
    lVar4 = FWeakObjectPtr::Get(lVar10 + 0x50);
    if (lVar4 == 0) {
      return;
    }
    FUN_1406da410(lVar10 + 0x60,local_368);
    puVar11 = (undefined8 *)(lVar5 + 0x1a0);
  }
  else {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x90);
    uVar6 = FUN_142de2b80(local_a0,param_1 + 8);
    if (lVar4 == 0) {
      return;
    }
    cVar3 = FUN_142d3e940(param_2[1] + 0x48 + *(longlong *)(lVar4 + 0xd8));
    if (cVar3 == '\0') {
      return;
    }
    puVar11 = (undefined8 *)(lVar4 + 0x1a0);
    puVar9 = (undefined1 *)*puVar11;
    puVar8 = puVar9 + (longlong)*(int *)(lVar4 + 0x1a8) * 0x88;
    for (; puVar9 != puVar8; puVar9 = puVar9 + 0x88) {
      if (*(longlong *)(puVar9 + 0x80) == DAT_1468585e0) {
        puVar8 = (undefined1 *)FUN_142de29a0(local_128,DAT_1468585e0,uVar6);
        *puVar9 = *puVar8;
        puVar9[1] = puVar8[1];
        puVar9[2] = puVar8[2];
        puVar9[3] = puVar8[3];
        *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar8 + 4);
        *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar8 + 0x10);
        *(undefined8 *)(puVar9 + 0x18) = *(undefined8 *)(puVar8 + 0x18);
        uVar6 = *(undefined8 *)(puVar8 + 0x28);
        *(undefined8 *)(puVar9 + 0x20) = *(undefined8 *)(puVar8 + 0x20);
        *(undefined8 *)(puVar9 + 0x28) = uVar6;
        uVar6 = *(undefined8 *)(puVar8 + 0x38);
        *(undefined8 *)(puVar9 + 0x30) = *(undefined8 *)(puVar8 + 0x30);
        *(undefined8 *)(puVar9 + 0x38) = uVar6;
        uVar6 = *(undefined8 *)(puVar8 + 0x48);
        *(undefined8 *)(puVar9 + 0x40) = *(undefined8 *)(puVar8 + 0x40);
        *(undefined8 *)(puVar9 + 0x48) = uVar6;
        *(undefined8 *)(puVar9 + 0x50) = *(undefined8 *)(puVar8 + 0x50);
        uVar12 = *(undefined4 *)(puVar8 + 0x5c);
        uVar1 = *(undefined4 *)(puVar8 + 0x60);
        uVar2 = *(undefined4 *)(puVar8 + 100);
        *(undefined4 *)(puVar9 + 0x58) = *(undefined4 *)(puVar8 + 0x58);
        *(undefined4 *)(puVar9 + 0x5c) = uVar12;
        *(undefined4 *)(puVar9 + 0x60) = uVar1;
        *(undefined4 *)(puVar9 + 100) = uVar2;
        *(undefined8 *)(puVar9 + 0x68) = *(undefined8 *)(puVar8 + 0x68);
        *(undefined4 *)(puVar9 + 0x70) = *(undefined4 *)(puVar8 + 0x70);
        *(undefined4 *)(puVar9 + 0x74) = *(undefined4 *)(puVar8 + 0x74);
        *(undefined4 *)(puVar9 + 0x78) = *(undefined4 *)(puVar8 + 0x78);
        *(undefined8 *)(puVar9 + 0x80) = *(undefined8 *)(puVar8 + 0x80);
        break;
      }
    }
    FUN_1406d4d50(local_368,lVar4 + 0x1d0);
    local_360 = 1;
    local_368[0] = 0;
    TTLEOnlineRanking2GetParam::SetCategory(local_135,0);
    lVar10 = param_2[1] + *(longlong *)(lVar4 + 0xd8);
    lVar4 = FWeakObjectPtr::Get(lVar10 + 0x50);
    if (lVar4 == 0) {
      return;
    }
    FUN_1406da410(lVar10 + 0x60,local_368);
  }
  FUN_142d488f0(lVar4,*(undefined8 *)(lVar10 + 0x48),puVar11,local_368,1);
  return;
}



// FUNCTION 1406f7da0 FUN_1406f7da0 body=187 status=ok
// SIG undefined FUN_1406f7da0(void)

void FUN_1406f7da0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[2] != param_2) {
    lVar2 = *(longlong *)(param_2 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_2);
    }
    lVar2 = FUN_1406e9c50(lVar2);
    if ((lVar2 != 0) && (param_1[2] != param_2)) {
      if (param_1[2] != 0) {
        if ((char)param_1[4] == '\0') {
          *(longlong *)(*param_1 + 8) = param_1[1];
          *(longlong *)param_1[1] = *param_1;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + -1;
        }
        else {
          *(undefined1 *)((longlong)param_1 + 0x21) = 1;
        }
      }
      param_1[2] = param_2;
      lVar1 = **(longlong **)(lVar2 + 0x40);
      param_1[1] = (longlong)*(longlong **)(lVar2 + 0x40);
      *param_1 = lVar1;
      *(longlong **)(lVar1 + 8) = param_1;
      *(longlong **)param_1[1] = param_1;
      *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
    }
    *(undefined1 *)((longlong)param_1 + 0x21) = 0;
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  return;
}



// FUNCTION 1406f7e60 FUN_1406f7e60 body=225 status=ok
// SIG undefined FUN_1406f7e60(void)

bool FUN_1406f7e60(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  puVar2 = (undefined4 *)(param_1[0x1b] + *(longlong *)(param_2 + 8));
  bVar3 = false;
  if (*(char *)(puVar2 + 10) == '\x02') {
    *(char *)((longlong)puVar2 + 0x29) = param_3;
    FUN_1406e9160(puVar2 + 2,param_1,param_2,2);
    cVar1 = FUN_1406de2b0(param_1,param_2,param_3);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x2c0))(param_1,param_2,param_3);
      if ((cVar1 != '\0') || (param_3 == '\x04')) {
        if (*(char *)((longlong)puVar2 + 0x29) == '\x01') {
          puVar2[0xc] = puVar2[0xc] + 1;
        }
        puVar2[0xf] = *(undefined4 *)(param_2 + 0x18);
        (**(code **)(*param_1 + 0x2c8))(param_1,param_2);
        FUN_1406e9160(puVar2 + 2,param_1,param_2,3);
        *(undefined1 *)(puVar2 + 10) = 3;
        FWeakObjectPtr::operator=(&local_res8,0);
        *puVar2 = local_res8;
        puVar2[1] = local_resc;
      }
    }
    bVar3 = *(char *)(puVar2 + 10) == '\x02';
  }
  return !bVar3;
}



// FUNCTION 1406f7f50 FUN_1406f7f50 body=207 status=ok
// SIG undefined FUN_1406f7f50(void)

void FUN_1406f7f50(longlong param_1,longlong *param_2,byte param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  undefined8 local_20;
  undefined2 local_18;
  
  local_30 = (longlong *)param_2[1];
  if (((local_30 != (longlong *)0x0) &&
      (local_38 = (longlong *)*param_2, local_38 != (longlong *)0x0)) &&
     (*local_30 == 0x4149416374447400)) {
    local_28 = param_2[2];
    lVar1 = (**(code **)(*local_38 + 0x148))();
    if (lVar1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = CONCAT44(*(undefined4 *)(lVar1 + 0x7b0),*(undefined4 *)(lVar1 + 0x8c8));
    }
    cVar2 = (param_3 ^ 1) + 1;
    local_18 = 0;
    if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x28 + (longlong)local_30) == '\x02') {
      FUN_1406f7e60(param_1,&local_38,cVar2);
      return;
    }
    *(char *)(*(longlong *)(param_1 + 0xd8) + 0x29 + (longlong)local_30) = cVar2;
  }
  return;
}



// FUNCTION 1406f8020 FUN_1406f8020 body=124 status=ok
// SIG undefined FUN_1406f8020(void)

void FUN_1406f8020(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  lVar1 = FWeakObjectPtr::Get(lVar2 + 0xd0);
  if (lVar1 != 0) {
    FUN_1428d3550(lVar1 + 0xea8);
    FUN_14248ba60(lVar1 + 0x274,lVar2 + 0x7c);
    FUN_14248ba60(lVar1 + 0x13ac,lVar2 + 0x90);
  }
  lVar1 = FWeakObjectPtr::Get(lVar2 + 0xc0);
  if (lVar1 != 0) {
    FUN_142f97e10(lVar1);
  }
  return;
}



// FUNCTION 1406f80a0 FUN_1406f80a0 body=803 status=ok
// SIG undefined FUN_1406f80a0(void)

ulonglong FUN_1406f80a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  longlong *local_88;
  undefined8 local_80;
  
  uVar9 = *(ulonglong *)(param_1 + 0x100);
  if ((uVar9 != 0) && (cVar5 = *(char *)(uVar9 + 0xc1), cVar5 != '\x03')) {
    lVar10 = *(longlong *)(param_1 + 0xd8) + param_2[1];
    lVar6 = *(longlong *)(*param_2 + 0x488);
    lVar8 = FWeakObjectPtr::Get(lVar10 + 0xd8);
    uVar9 = FWeakObjectPtr::Get(lVar10 + 0xc0);
    if ((lVar6 != 0) && ((lVar8 != 0 && (uVar9 != 0)))) {
      local_88 = (longlong *)0x0;
      local_80 = 0;
      FUN_14075bba0(lVar8,&local_88,0,0);
      if ((int)local_80 < 2) {
        bVar12 = 0;
      }
      else {
        fVar2 = *(float *)(uVar9 + 0x6ec);
        AREDDF_FigureSkeletalBase::GetFigureRotation_Implementation
                  ((float *)(uVar9 + 0x6e8),&local_a8);
        fVar3 = *(float *)(*(longlong *)(param_1 + 0x100) + 0xc4);
        plVar1 = local_88 + (int)local_80;
        for (plVar11 = local_88; plVar11 != plVar1; plVar11 = plVar11 + 1) {
          if ((*plVar11 != lVar6) && (lVar8 = FUN_142fb68c0(), lVar8 != 0)) {
            if (cVar5 != '\0') {
              if (cVar5 == '\x01') {
                bVar7 = fVar2 <= *(float *)(lVar8 + 0x6ec);
              }
              else {
                if (cVar5 != '\x02') goto LAB_1406f8344;
                bVar7 = fVar2 < *(float *)(lVar8 + 0x6ec);
              }
              if (!bVar7) goto LAB_1406f8344;
            }
            AREDDF_FigureSkeletalBase::GetFigureRotation_Implementation
                      ((float *)(lVar8 + 0x6e8),&local_98);
            if ((local_a4 - local_94) * (local_a4 - local_94) +
                (local_a8 - local_98) * (local_a8 - local_98) +
                (local_a0 - local_90) * (local_a0 - local_90) <= fVar3 * fVar3) {
              fVar15 = local_98 - local_a8;
              fVar14 = *(float *)(uVar9 + 0x77c);
              fVar16 = local_94 - local_a4;
              fVar4 = *(float *)(uVar9 + 0x774);
              fVar17 = local_90 - local_a0;
              fVar18 = *(float *)(uVar9 + 0x778);
              if ((0.0 <= fVar4 * fVar15 + fVar18 * fVar16 + fVar14 * fVar17) &&
                 (fVar13 = fVar18 * fVar17 - fVar14 * fVar16,
                 fVar18 = fVar4 * fVar16 - fVar18 * fVar15,
                 fVar14 = fVar14 * fVar15 - fVar4 * fVar17,
                 SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar18 * fVar18) <
                 *(float *)(lVar8 + 0x6e8) + *(float *)(uVar9 + 0x6e8))) {
                bVar12 = 1;
                goto LAB_1406f8359;
              }
            }
          }
LAB_1406f8344:
        }
        bVar12 = 0;
      }
LAB_1406f8359:
      if (local_88 != (longlong *)0x0) {
        FMemory::Free(local_88);
      }
      return (ulonglong)bVar12;
    }
  }
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 1406f83d0 FUN_1406f83d0 body=444 status=ok
// SIG undefined FUN_1406f83d0(void)

void FUN_1406f83d0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined8 *_Src;
  undefined8 *local_38;
  undefined8 local_30;
  
  lVar1 = param_1[2];
  lVar4 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  if (lVar4 != 0) {
    lVar5 = FUN_142e5c1e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_38 = (undefined8 *)0x0;
      local_30 = 1;
      uVar6 = FUN_142c6f840(param_1,lVar1 + 0x108,1);
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,0);
      _Src = local_38;
      *local_38 = uVar6;
      uVar6 = FUN_142c6f840(param_1,lVar1 + 0x1f8,1);
      lVar5 = (longlong)(int)local_30;
      iVar9 = (int)local_30 + 1;
      if (local_30._4_4_ < iVar9) {
        uVar7 = local_30 & 0xffffffff;
        local_30._0_4_ = iVar9;
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,uVar7);
        _Src = local_38;
        iVar9 = (int)local_30;
      }
      local_30._0_4_ = iVar9;
      iVar3 = local_30._4_4_;
      iVar9 = (int)local_30;
      _Src[lVar5] = uVar6;
      uVar6 = FUN_142c6f840(param_1,lVar1 + 0x180,1);
      local_30._0_4_ = iVar9 + 1;
      iVar8 = (int)local_30;
      if (iVar3 < (int)local_30) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,iVar9);
        _Src = local_38;
        iVar8 = (int)local_30;
      }
      local_30 = CONCAT44(local_30._4_4_,iVar8);
      _Src[iVar9] = uVar6;
      local_38 = (undefined8 *)0x0;
      if (iVar8 == 0) {
        local_30 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,iVar8,0);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar8 << 3);
      }
      FUN_142c6c150(lVar1 + 0xc0,lVar4,&local_38);
      if (_Src != (undefined8 *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
  return;
}



// FUNCTION 1406f8590 FUN_1406f8590 body=1002 status=ok
// SIG undefined FUN_1406f8590(void)

ulonglong FUN_1406f8590(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  float *pfVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined1 local_ac [12];
  undefined8 *local_a0;
  undefined8 local_98;
  
  lVar10 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  lVar1 = lVar10 + 0xd0;
  uVar6 = FWeakObjectPtr::IsValid(lVar1);
  if ((char)uVar6 == '\0') {
    return uVar6;
  }
  fVar2 = *param_4;
  fVar13 = fVar2 - *param_3;
  fVar3 = param_4[1];
  fVar16 = fVar3 - param_3[1];
  fVar15 = param_4[2] - param_3[2];
  fVar11 = fVar16 * fVar16 + fVar13 * fVar13;
  if (fVar11 == 1.0) {
    fVar14 = fVar13;
    fVar17 = fVar16;
    if (fVar15 == 0.0) goto LAB_1406f86f2;
  }
  else {
    fVar14 = DAT_1468b5d90;
    fVar15 = DAT_1468b5d98;
    fVar17 = DAT_1468b5d94;
    if (fVar11 < 1e-08) goto LAB_1406f86f2;
    auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar15 = auVar12._0_4_;
    fVar15 = fVar15 + fVar15 * (0.5 - fVar11 * 0.5 * fVar15 * fVar15);
    fVar15 = fVar15 + fVar15 * (0.5 - fVar11 * 0.5 * fVar15 * fVar15);
    fVar13 = fVar13 * fVar15;
    fVar16 = fVar16 * fVar15;
  }
  fVar14 = fVar13;
  fVar15 = 0.0;
  fVar17 = fVar16;
LAB_1406f86f2:
  if (*(char *)(lVar10 + 0x60) == '\0') {
    fVar11 = *(float *)(param_1 + 0x250);
    fVar16 = (fVar17 * DAT_1464aa7a0 - fVar15 * DAT_1464aa798._4_4_) * fVar11;
    fVar13 = (fVar14 * DAT_1464aa798._4_4_ - fVar17 * (float)DAT_1464aa798) * fVar11;
    fVar11 = (fVar15 * (float)DAT_1464aa798 - fVar14 * DAT_1464aa7a0) * fVar11;
  }
  else {
    fVar13 = *(float *)(param_1 + 0x250);
    fVar16 = (fVar15 * DAT_1464aa798._4_4_ - fVar17 * DAT_1464aa7a0) * fVar13;
    fVar11 = (fVar14 * DAT_1464aa7a0 - fVar15 * (float)DAT_1464aa798) * fVar13;
    fVar13 = (fVar17 * (float)DAT_1464aa798 - fVar14 * DAT_1464aa798._4_4_) * fVar13;
  }
  local_b0 = param_4[2] + fVar13;
  local_a0 = (undefined8 *)0x0;
  local_98 = 1;
  local_c8 = fVar16;
  local_c4 = fVar11;
  local_c0 = fVar13;
  TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_a0,0);
  iVar9 = 0x3c;
  *local_a0 = CONCAT44(fVar3 + fVar11,fVar2 + fVar16);
  *(float *)(local_a0 + 1) = local_b0;
  do {
    pfVar7 = (float *)FVector::RotateAngleAxis(&local_c8,local_ac);
    uVar6 = local_98;
    lVar10 = (longlong)(int)local_98;
    local_b8 = *pfVar7 + *param_4;
    fStack_b4 = pfVar7[1] + param_4[1];
    iVar5 = (int)local_98 + 1;
    local_b0 = pfVar7[2] + param_4[2];
    local_98 = CONCAT44(local_98._4_4_,iVar5);
    if (local_98._4_4_ < iVar5) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_a0,uVar6 & 0xffffffff);
    }
    uVar6 = local_98;
    iVar9 = iVar9 + 0x3c;
    *(ulonglong *)((longlong)local_a0 + lVar10 * 0xc) = CONCAT44(fStack_b4,local_b8);
    *(float *)((longlong)local_a0 + lVar10 * 0xc + 8) = local_b0;
  } while (iVar9 < 0x168);
  local_b8 = fVar16 + *param_4;
  fStack_b4 = fVar11 + param_4[1];
  local_b0 = fVar13 + param_4[2];
  lVar10 = (longlong)(int)local_98;
  iVar9 = (int)local_98 + 1;
  local_98 = CONCAT44(local_98._4_4_,iVar9);
  if (local_98._4_4_ < iVar9) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_a0,uVar6 & 0xffffffff);
  }
  *(ulonglong *)((longlong)local_a0 + lVar10 * 0xc) = CONCAT44(fStack_b4,local_b8);
  *(float *)((longlong)local_a0 + lVar10 * 0xc + 8) = local_b0;
  uVar8 = FWeakObjectPtr::Get(lVar1);
  bVar4 = FUN_142fbc350(uVar8,&local_a0);
  if (local_a0 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return (ulonglong)bVar4;
}



// FUNCTION 1406f8980 FUN_1406f8980 body=43 status=ok
// SIG undefined FUN_1406f8980(void)

void FUN_1406f8980(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  do {
    cVar1 = FUN_1406f91f0(param_1,param_2);
  } while (cVar1 != '\0');
  return;
}



// FUNCTION 1406f89b0 FUN_1406f89b0 body=873 status=ok
// SIG undefined FUN_1406f89b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406f89b0(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  float local_30;
  
  if (*(longlong *)(param_1 + 0x4e8) == 0) {
    if (0.0 < param_2) {
      FUN_142c48330(param_1 + 0x470,&local_58);
      param_2 = 1.0 / param_2;
      local_30 = (local_50 - *(float *)(param_1 + 0x504)) * param_2;
      *(ulonglong *)(param_1 + 0x514) =
           CONCAT44((local_58._4_4_ - *(float *)(param_1 + 0x500)) * param_2,
                    ((float)local_58 - *(float *)(param_1 + 0x4fc)) * param_2);
      *(float *)(param_1 + 0x51c) = local_30;
      *(undefined8 *)(param_1 + 0x4fc) = local_58;
      *(float *)(param_1 + 0x504) = local_50;
      FUN_142c48330(param_1 + 0x4a8,&local_48);
      local_30 = (local_40 - *(float *)(param_1 + 0x510)) * param_2;
      *(ulonglong *)(param_1 + 0x520) =
           CONCAT44((local_48._4_4_ - *(float *)(param_1 + 0x50c)) * param_2,
                    ((float)local_48 - *(float *)(param_1 + 0x508)) * param_2);
      *(float *)(param_1 + 0x528) = local_30;
      *(undefined8 *)(param_1 + 0x508) = local_48;
      *(float *)(param_1 + 0x510) = local_40;
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (*(char *)(lVar2 + 0xc0) != '\0') {
      FUN_142c48330(param_1 + 0x470,&local_48);
      FUN_142c48330(param_1 + 0x4a8,&local_58);
      fVar3 = SQRT((local_58._4_4_ - local_48._4_4_) * (local_58._4_4_ - local_48._4_4_) +
                   ((float)local_58 - (float)local_48) * ((float)local_58 - (float)local_48));
      if ((*(float *)(lVar2 + 0xc4) <= fVar3 && fVar3 != *(float *)(lVar2 + 0xc4)) ||
         (*(float *)(lVar2 + 200) <= ABS(local_40 - local_50) &&
          ABS(local_40 - local_50) != *(float *)(lVar2 + 200))) goto LAB_1406f8c03;
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x10) + 0xcc) == '\0') ||
       (fVar3 = *(float *)(*(longlong *)(param_1 + 0x10) + 0xd0),
       fVar6 = *(float *)(param_1 + 0x524) - *(float *)(param_1 + 0x518),
       fVar5 = *(float *)(param_1 + 0x520) - *(float *)(param_1 + 0x514),
       fVar4 = *(float *)(param_1 + 0x528) - *(float *)(param_1 + 0x51c),
       fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 <= fVar3 * fVar3)) {
      FUN_1406f72c0(param_1);
    }
  }
LAB_1406f8c03:
  if ((*(longlong *)(param_1 + 0x4e8) != 0) && (lVar2 = FUN_142c6f130(param_1), lVar2 != 0)) {
    FUN_142c48330(param_1 + 0x4a8,&local_58);
    lVar1 = *(longlong *)(lVar2 + 0x168);
    if (lVar1 == 0) {
      local_48 = _DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
    }
    else {
      local_48 = *(undefined8 *)(lVar1 + 0x220);
      local_40 = *(float *)(lVar1 + 0x228);
    }
    local_30 = local_40;
    local_40 = (local_50 - *(float *)(param_1 + 0x510)) + local_40;
    local_48 = CONCAT44((local_58._4_4_ - *(float *)(param_1 + 0x50c)) +
                        (float)((ulonglong)local_48 >> 0x20),
                        ((float)local_58 - *(float *)(param_1 + 0x508)) + (float)local_48);
    FUN_14223c850(lVar2,&local_48,0,0,0);
    *(undefined8 *)(param_1 + 0x508) = local_58;
    *(float *)(param_1 + 0x510) = local_50;
  }
  return;
}



// FUNCTION 1406f8d20 FUN_1406f8d20 body=378 status=ok
// SIG undefined FUN_1406f8d20(void)

void FUN_1406f8d20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if ((((longlong *)*plVar1 != plVar1) &&
      (lVar3 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28), lVar3 != 0))
     && ((*(byte *)(lVar3 + 0x830) & 0x80) == 0)) {
    QueryPerformanceCounter(&local_res8);
    plVar4 = (longlong *)*plVar1;
    dVar2 = (double)local_res8.QuadPart * DAT_1468b02f8;
    while( true ) {
      *(undefined1 *)(plVar4 + 4) = 1;
      FUN_1407213f0(plVar4[2],param_2);
      *(undefined1 *)(plVar4 + 4) = 0;
      plVar5 = plVar4;
      if (*(char *)((longlong)plVar4 + 0x21) != '\0') {
        plVar5 = (longlong *)plVar4[1];
        *(undefined1 *)((longlong)plVar4 + 0x21) = 0;
        if (plVar4[2] != 0) {
          *(longlong **)(*plVar4 + 8) = plVar5;
          *(longlong *)plVar4[1] = *plVar4;
          *plVar4 = 0;
          plVar4[1] = 0;
          plVar4[2] = 0;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        }
      }
      QueryPerformanceCounter(&local_res8);
      if (plVar5 == *(longlong **)(param_1 + 0x18)) {
        return;
      }
      if ((double)*(float *)(param_1 + 8) <=
          ((double)local_res8.QuadPart * DAT_1468b02f8 - dVar2) * 1000.0) break;
      plVar4 = (longlong *)*plVar5;
    }
    if (plVar5 != plVar1) {
      lVar3 = *plVar5;
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(*plVar1 + 8);
      *plVar5 = **(longlong **)(param_1 + 0x18);
      *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_1 + 0x18);
      **(longlong **)(param_1 + 0x18) = *plVar1;
      *plVar1 = lVar3;
      *(longlong **)(param_1 + 0x18) = plVar5;
    }
  }
  return;
}



// FUNCTION 1406f8ea0 FUN_1406f8ea0 body=82 status=ok
// SIG undefined FUN_1406f8ea0(void)

undefined1 FUN_1406f8ea0(longlong param_1,undefined8 param_2,longlong param_3,code *param_4)

{
  char cVar1;
  
  if ((byte)(*(char *)(*(longlong *)(param_1 + 0xd8) + 0x28 + *(longlong *)(param_3 + 8)) - 1U) < 2)
  {
    cVar1 = (*param_4)(param_2,param_3,param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f8f00 FUN_1406f8f00 body=143 status=ok
// SIG undefined FUN_1406f8f00(void)

undefined8 FUN_1406f8f00(longlong *param_1,undefined8 param_2,longlong param_3,code *param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (1 < (byte)(*(char *)(param_1[0x1b] + 0x28 + *(longlong *)(param_3 + 8)) - 1U)) {
    return 1;
  }
  cVar1 = (*param_4)(param_2,param_3,param_1);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x3c8))(param_1);
    if (plVar2 == (longlong *)0x0) {
      return 1;
    }
    cVar1 = (**(code **)(*plVar2 + 0x3b8))(plVar2,param_2,param_3,param_4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1406f8f90 FUN_1406f8f90 body=123 status=ok
// SIG undefined FUN_1406f8f90(void)

undefined8 FUN_1406f8f90(longlong param_1,undefined8 param_2,code *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  cVar2 = (*param_3)(param_2,param_1);
  if (cVar2 == '\0') {
LAB_1406f8ff4:
    uVar3 = 0;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x130);
    plVar1 = plVar4 + *(int *)(param_1 + 0x138);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      if ((*plVar4 != 0) && (cVar2 = FUN_1406f8f90(*plVar4,param_2,param_3), cVar2 == '\0'))
      goto LAB_1406f8ff4;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1406f9010 FUN_1406f9010 body=81 status=ok
// SIG undefined FUN_1406f9010(void)

longlong * FUN_1406f9010(longlong *param_1,longlong *param_2)

{
  FUN_1406f9070();
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1406f9070 FUN_1406f9070 body=379 status=ok
// SIG undefined FUN_1406f9070(void)

void FUN_1406f9070(undefined8 param_1)

{
  char cVar1;
  longlong local_18 [2];
  
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"AITree_",0x10);
  cVar1 = FString::RemoveFromStart(param_1,local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (cVar1 == '\0') {
    local_18[0] = 0;
    local_18[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"AIAction_",0x14);
    cVar1 = FString::RemoveFromStart(param_1,local_18,1);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 == '\0') {
      local_18[0] = 0;
      local_18[1] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"AIAspect_",0x14);
      FString::RemoveFromStart(param_1,local_18,1);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  local_18[0] = 0;
  local_18[1] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_1440546f4,6);
  FString::RemoveFromEnd(param_1,local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406f91f0 FUN_1406f91f0 body=1436 status=ok
// SIG undefined FUN_1406f91f0(void)

bool FUN_1406f91f0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [64];
  
  cVar1 = (char)param_1[0x9f];
  lVar2 = param_1[2];
  if (cVar1 == '\0') {
    if ((((*(char *)(lVar2 + 0xf5) != '\0') && (*(char *)(lVar2 + 0x270) != '\0')) &&
        (FUN_1406ddae0(param_1,&local_68), param_1[3] != 0)) &&
       ((param_1[0x8d] != 0 && (0.0 < *(float *)(lVar2 + 0xf0))))) {
      local_78 = local_68;
      local_70 = local_60;
      lVar4 = FUN_142d85fe0(param_1[0x8d] + 0x2428,&local_78,*(float *)(lVar2 + 0xf0),1,0,0);
      param_1[0x9c] = lVar4;
    }
    if (*(char *)(lVar2 + 0x272) == '\x01') {
      FUN_1406e8180(param_1);
    }
    if (*(char *)(lVar2 + 0x273) == '\x01') {
      FUN_1406f47b0(param_1);
    }
    uVar5 = FDifficultyFloat::FDifficultyFloat(&local_68);
    uVar6 = FUN_142c62320(local_58);
    uVar6 = FUN_142c82380(uVar6,*(undefined4 *)(lVar2 + 0xf8));
    uVar6 = FAIStimulus::SetExpirationAge(uVar6,0);
    uVar6 = vdecmpeg4::M4MotionVectorMgr::M4MotionVectorMgr(uVar6,*(undefined8 *)(lVar2 + 0x100));
    FUN_142c7c510(param_1,lVar2 + 0x108,uVar6,uVar5);
    *(undefined1 *)(param_1 + 0x9f) = 1;
  }
  else if (cVar1 == '\x01') {
    cVar3 = FUN_142c73400(param_1,1,1);
    if (((cVar3 == '\0') && (lVar4 = FUN_142c6f130(param_1), lVar4 != 0)) &&
       ((*(char *)(lVar4 + 0x128) == '\x03' || ((char)param_1[0x98] != '\0')))) {
      (**(code **)(*param_1 + 0x110))(param_1);
      if (*(char *)(lVar2 + 0x272) == '\x02') {
        FUN_1406e8180(param_1);
      }
      if (*(char *)(lVar2 + 0x273) == '\x02') {
        FUN_1406f47b0(param_1);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146858638) &&
         (_Init_thread_header(&DAT_146858638), DAT_146858638 == -1)) {
        FName::FName(&DAT_146858630,L"Jump",1);
        _Init_thread_footer(&DAT_146858638);
      }
      if (*(char *)(param_1[2] + 0x284) != '\0') {
        plVar7 = (longlong *)FUN_142c6f130(param_1);
        if (plVar7 == (longlong *)0x0) {
          lVar4 = 0;
        }
        else {
          uVar5 = UScrollBox::GetPrivateStaticClass();
          lVar4 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar5);
        }
        lVar8 = FUN_142da89b0(plVar7);
        if ((lVar4 != 0) && (lVar8 != 0)) {
          *(undefined1 *)(param_1 + 0x9d) = 1;
          FUN_142d55680(lVar4 + 0x3d0,*(undefined8 *)(lVar8 + 0x58));
          FUN_142d6f760(lVar4 + 0x3d0,DAT_146858630,*(undefined8 *)(lVar8 + 0x50));
        }
      }
      if ((((*(char *)(param_1[2] + 0x270) != '\0') &&
           (FUN_1406ddae0(param_1,&local_78), param_1[3] != 0)) && (param_1[0x8d] != 0)) &&
         (0.0 < *(float *)((longlong)param_1 + 0x51c))) {
        local_68 = local_78;
        local_60 = local_70;
        lVar4 = FUN_142d85fe0(param_1[0x8d] + 0x2428,&local_68,*(float *)((longlong)param_1 + 0x51c)
                              ,1,0,0);
        param_1[0x9c] = lVar4;
      }
      lVar4 = FUN_142c6f130(param_1);
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x90) = *(byte *)(lVar4 + 0x90) & 0xef;
      }
      lVar4 = param_1[2];
      plVar7 = (longlong *)FUN_142c6f840(param_1,lVar4 + 0x1f8,1);
      cVar3 = FUN_1424ca840(param_1 + 0xa0);
      if (((cVar3 == '\0') ||
          (*(float *)((longlong)param_1 + 0x51c) <= *(float *)((longlong)param_1 + 0x4fc))) ||
         ((plVar7 == (longlong *)0x0 ||
          (fVar9 = (float)(**(code **)(*plVar7 + 0x280))(plVar7), fVar9 <= 0.0)))) {
        fVar9 = 1.0;
      }
      else {
        fVar9 = (fVar9 * *(float *)(lVar4 + 0x280)) / *(float *)((longlong)param_1 + 0x51c);
      }
      uVar5 = FDifficultyFloat::FDifficultyFloat(&local_68);
      uVar6 = FUN_142c62320(local_58);
      uVar6 = hkgpMeshSimplify::withMaximumError(uVar6,fVar9);
      uVar6 = FUN_142c82380(uVar6,0);
      uVar6 = FAIStimulus::SetExpirationAge(uVar6,0);
      uVar6 = vdecmpeg4::M4MotionVectorMgr::M4MotionVectorMgr(uVar6,*(undefined8 *)(lVar2 + 0x100));
      FUN_142c7c510(param_1,lVar2 + 0x1f8,uVar6,uVar5);
      *(undefined1 *)(param_1 + 0x9f) = 2;
      uVar5 = FUN_142c6f130(param_1);
      FUN_1407b07d0(lVar2,uVar5);
    }
  }
  else if (cVar1 == '\x02') {
    (**(code **)(*param_1 + 0x118))(param_1);
    cVar3 = FUN_1424ca840(param_1 + 0xa0);
    if ((cVar3 == '\0') ||
       (*(float *)((longlong)param_1 + 0x51c) <= *(float *)((longlong)param_1 + 0x4fc))) {
      if (*(char *)(lVar2 + 0x272) == '\x03') {
        FUN_1406e8180(param_1);
      }
      if (*(char *)(lVar2 + 0x273) == '\x03') {
        FUN_1406f47b0(param_1);
      }
      FUN_1406fa9e0(param_1);
      lVar4 = FUN_142c6f130(param_1);
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x90) = *(byte *)(lVar4 + 0x90) | 0x10;
      }
      uVar5 = FDifficultyFloat::FDifficultyFloat(&local_68);
      uVar6 = FUN_142c62320(local_58);
      uVar6 = FUN_142c82380(uVar6,0);
      uVar6 = FAIStimulus::SetExpirationAge(uVar6,*(undefined4 *)(lVar2 + 0xfc));
      uVar6 = vdecmpeg4::M4MotionVectorMgr::M4MotionVectorMgr(uVar6,*(undefined8 *)(lVar2 + 0x100));
      FUN_142c7c510(param_1,lVar2 + 0x180,uVar6,uVar5);
      *(undefined1 *)(param_1 + 0x9f) = 3;
      uVar5 = FUN_142c6f130(param_1);
      FUN_1407b0790(lVar2,uVar5);
    }
  }
  else if ((cVar1 == '\x03') && (cVar3 = FUN_142c73400(param_1,1,1), cVar3 == '\0')) {
    if (*(char *)(lVar2 + 0x272) == '\x04') {
      FUN_1406e8180(param_1);
    }
    if (*(char *)(lVar2 + 0x273) == '\x04') {
      FUN_1406f47b0(param_1);
    }
    *(undefined1 *)(param_1 + 0x9f) = 4;
  }
  return (char)param_1[0x9f] != cVar1;
}



// FUNCTION 1406f9790 FUN_1406f9790 body=364 status=ok
// SIG undefined FUN_1406f9790(void)

ulonglong FUN_1406f9790(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  cVar3 = *(char *)(param_1 + 0xd2);
  plVar11 = *(longlong **)(param_1 + 0x108);
  plVar10 = *(longlong **)(param_1 + 0x118);
  bVar5 = false;
  bVar6 = true;
  plVar1 = plVar11 + *(int *)(param_1 + 0x110);
  plVar2 = plVar10 + *(int *)(param_1 + 0x120);
  do {
    if ((plVar11 == plVar1) && (plVar10 == plVar2)) {
      bVar4 = false;
      if (bVar5) {
        bVar4 = bVar6;
      }
      if (*(char *)(param_1 + 0x100) != '\0') {
        bVar5 = bVar4;
      }
      if (!bVar5) {
        return 1;
      }
      uVar9 = *(ulonglong *)(param_2 + 8);
      *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + uVar9) = 1;
      goto LAB_1406f98e5;
    }
    plVar8 = plVar11;
    if (plVar11 == plVar1) {
      plVar8 = plVar10;
    }
    plVar8 = (longlong *)*plVar8;
    if ((plVar8 != (longlong *)0x0) &&
       (cVar7 = (**(code **)(*plVar8 + 0x2d0))(plVar8), cVar7 != '\0')) {
      cVar7 = FUN_1406de1e0();
      if ((cVar7 == '\0') || (cVar7 = FUN_1406f70d0(plVar8,param_2,param_1), cVar7 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((char)plVar8[0x1f] != '\0') {
        cVar7 = *(char *)(plVar8[0x1b] + 0x29 + *(longlong *)(param_2 + 8));
        if (cVar7 == '\x02') {
          if (*(char *)((longlong)plVar8 + 0xd3) != '\0') {
LAB_1406f9889:
            if (*(char *)((longlong)plVar8 + 0xf9) != '\0') {
              bVar5 = true;
            }
            goto LAB_1406f9871;
          }
        }
        else if (cVar7 == '\x01') goto LAB_1406f9889;
        bVar6 = false;
        if ((!bVar4) && (cVar3 == '\0')) {
          uVar9 = *(ulonglong *)(param_1 + 0xd8);
          *(undefined1 *)(uVar9 + 0x29 + *(longlong *)(param_2 + 8)) = 2;
LAB_1406f98e5:
          return uVar9 & 0xffffffffffffff00;
        }
      }
    }
LAB_1406f9871:
    if (plVar11 == plVar1) {
      plVar10 = plVar10 + 1;
    }
    else {
      plVar11 = plVar11 + 1;
    }
  } while( true );
}



// FUNCTION 1406f9900 FUN_1406f9900 body=424 status=ok
// SIG undefined FUN_1406f9900(void)

undefined8 FUN_1406f9900(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  cVar7 = *(char *)((longlong)param_1 + 0xd2);
  plVar10 = (longlong *)param_1[0x21];
  plVar11 = (longlong *)param_1[0x23];
  bVar4 = false;
  bVar5 = true;
  plVar1 = plVar10 + (int)param_1[0x22];
  plVar2 = plVar11 + (int)param_1[0x24];
  do {
    if ((plVar10 == plVar1) && (plVar11 == plVar2)) {
      bVar3 = false;
      if (bVar4) {
        bVar3 = bVar5;
      }
      if ((char)param_1[0x20] != '\0') {
        bVar4 = bVar3;
      }
      if (bVar4) {
        *(undefined1 *)(param_1[0x1b] + 0x29 + *(longlong *)(param_2 + 8)) = 1;
        return 0;
      }
      lVar9 = (**(code **)(*param_1 + 0x3c8))(param_1);
      if (lVar9 != 0) {
        cVar7 = FUN_1406f70d0(lVar9,param_2,param_1);
        if (cVar7 == '\0') {
          return 0;
        }
        return 1;
      }
      if (((int)param_1[0x22] < 1) && ((int)param_1[0x24] < 1)) {
        return 0;
      }
      return 1;
    }
    plVar8 = plVar10;
    if (plVar10 == plVar1) {
      plVar8 = plVar11;
    }
    plVar8 = (longlong *)*plVar8;
    if ((plVar8 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*plVar8 + 0x2d0))(plVar8), cVar6 != '\0')) {
      cVar6 = FUN_1406de1e0();
      if ((cVar6 == '\0') || (cVar6 = FUN_1406f70d0(plVar8,param_2,param_1), cVar6 == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((char)plVar8[0x1f] != '\0') {
        cVar6 = *(char *)(plVar8[0x1b] + 0x29 + *(longlong *)(param_2 + 8));
        if (cVar6 == '\x02') {
          if (*(char *)((longlong)plVar8 + 0xd3) != '\0') {
LAB_1406f99fd:
            if (*(char *)((longlong)plVar8 + 0xf9) != '\0') {
              bVar4 = true;
            }
            goto LAB_1406f99e5;
          }
        }
        else if (cVar6 == '\x01') goto LAB_1406f99fd;
        bVar5 = false;
        if ((!bVar3) && (cVar7 == '\0')) {
          *(undefined1 *)(param_1[0x1b] + 0x29 + *(longlong *)(param_2 + 8)) = 2;
          return 0;
        }
      }
    }
LAB_1406f99e5:
    if (plVar10 == plVar1) {
      plVar11 = plVar11 + 1;
    }
    else {
      plVar10 = plVar10 + 1;
    }
  } while( true );
}



// FUNCTION 1406f9ab0 FUN_1406f9ab0 body=53 status=ok
// SIG undefined FUN_1406f9ab0(void)

void FUN_1406f9ab0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_14071d6f0();
  if (cVar1 != '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x58 + *(longlong *)(param_2 + 8)) = 1;
  }
  return;
}



// FUNCTION 1406f9b00 FUN_1406f9b00 body=10 status=ok
// SIG undefined FUN_1406f9b00(void)

void FUN_1406f9b00(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001406f9b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x298))();
  return;
}



// FUNCTION 1406f9b10 FUN_1406f9b10 body=306 status=ok
// SIG undefined FUN_1406f9b10(void)

undefined1 FUN_1406f9b10(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong local_res18 [2];
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  cVar5 = (**(code **)(*param_1 + 0x298))();
  if (cVar5 != '\0') {
    lVar7 = param_1[0x1b];
    lVar8 = *(longlong *)(param_2 + 8);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UAIAspect_ActorCollision::OnPawnHit",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(local_res18,pwVar4 + 2,1);
    lVar7 = FWeakObjectPtr::Get(lVar7 + lVar8 + 0x48);
    plVar1 = (longlong *)(lVar7 + 0x280);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res18[0];
    if ((local_res18[0] != 0) && (lVar8 = FWeakObjectPtr::Get(&local_28), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_20);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    iVar2 = *(int *)(lVar7 + 0x288);
    *(int *)(lVar7 + 0x288) = iVar2 + 1;
    if (*(int *)(lVar7 + 0x28c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar9 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar9 = local_28;
    puVar9[1] = local_24;
    *(longlong *)(puVar9 + 2) = local_20;
    return 1;
  }
  return 0;
}



// FUNCTION 1406f9c60 FUN_1406f9c60 body=142 status=ok
// SIG undefined FUN_1406f9c60(void)

undefined1 FUN_1406f9c60(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x48);
  if ((cVar2 != '\0') && (cVar2 = FUN_140761cd0(lVar3 + 0x50), cVar2 != '\0')) {
    uVar1 = FWeakObjectPtr::Get(lVar3 + 0x48);
    cVar2 = FUN_1407671f0(uVar1,lVar3 + 0x50,*(undefined1 *)(param_1 + 0x110),
                          *(undefined1 *)(param_1 + 0x111));
    if (cVar2 != '\0') {
      FUN_1406f6850(param_1,param_2);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1406f9cf0 FUN_1406f9cf0 body=53 status=ok
// SIG undefined FUN_1406f9cf0(void)

void FUN_1406f9cf0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1406fb5d0();
  if (cVar1 != '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + *(longlong *)(param_2 + 8)) = 1;
  }
  return;
}



// FUNCTION 1406f9d30 FUN_1406f9d30 body=173 status=ok
// SIG undefined FUN_1406f9d30(void)

ulonglong FUN_1406f9d30(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  bVar1 = FUN_14071f1d0();
  lVar7 = *(longlong *)(param_2 + 8) + *(longlong *)(param_1 + 0xd8);
  lVar2 = FWeakObjectPtr::Get(lVar7 + 0x60);
  plVar4 = (longlong *)0x0;
  plVar6 = plVar4;
  if (lVar2 != 0) {
    plVar6 = *(longlong **)(lVar2 + 0x118);
  }
  if (plVar6 != (longlong *)0x0) {
    uVar3 = FUN_1407e27e0();
    plVar4 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,uVar3);
  }
  FWeakObjectPtr::operator=(lVar7 + 0x7c,plVar4);
  if (plVar4 == (longlong *)0x0) {
    uVar5 = (ulonglong)bVar1;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xd8);
    *(undefined1 *)(*(longlong *)(param_2 + 8) + 0x29 + lVar2) = 0;
    uVar5 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar5;
}



// FUNCTION 1406f9de0 FUN_1406f9de0 body=352 status=ok
// SIG undefined FUN_1406f9de0(void)

undefined8 FUN_1406f9de0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  
  if ((*(char *)(param_1 + 0x409) == '\0') || (*(char *)(param_1 + 0x408) != '\x04')) {
    if ((*(char *)(param_1 + 0x498) != '\0') && (cVar1 = FUN_1406ed410(), cVar1 != '\0')) {
      *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + param_2[1]) = 1;
      return 0;
    }
    cVar1 = FUN_1406ed410(param_1,param_2);
    if (cVar1 == '\0') {
      *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + param_2[1]) = 2;
      return 0;
    }
    lVar3 = *param_2;
    local_res8 = 0;
    if (((*(longlong *)(lVar3 + 0x6b0) == 0) ||
        (lVar2 = FWeakObjectPtr::Get(lVar3 + 0x6a8), lVar2 == 0)) ||
       (lVar3 = UObject::FindFunction(lVar2,*(undefined8 *)(lVar3 + 0x6b0)), lVar3 == 0)) {
      lVar3 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 0x50 + param_2[1]);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)FName::FName(&local_res8,L"NotifyAIHotSpotListChangedFor",1);
        lVar2 = *param_2;
        FWeakObjectPtr::operator=(lVar2 + 0x6a8,lVar3);
        *(undefined8 *)(lVar2 + 0x6b0) = *puVar4;
      }
    }
  }
  else {
    FUN_1406fa730();
    cVar1 = FUN_142d3e940(param_2[1] + 0x48 + *(longlong *)(param_1 + 0xd8));
    if (cVar1 == '\0') {
      *(undefined1 *)(param_2[1] + 0x29 + *(longlong *)(param_1 + 0xd8)) = 2;
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406f9f40 FUN_1406f9f40 body=493 status=ok
// SIG undefined FUN_1406f9f40(void)

undefined1 FUN_1406f9f40(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 uVar15;
  
  bVar7 = true;
  bVar5 = false;
  bVar4 = false;
  bVar9 = false;
  bVar6 = false;
  uVar15 = 1;
  bVar8 = true;
  plVar14 = *(longlong **)(param_1 + 0x108);
  plVar13 = *(longlong **)(param_1 + 0x118);
  bVar10 = false;
  plVar1 = plVar14 + *(int *)(param_1 + 0x110);
  plVar2 = plVar13 + *(int *)(param_1 + 0x120);
  do {
    if ((plVar14 == plVar1) && (plVar13 == plVar2)) {
      bVar5 = false;
      if (bVar6) {
        bVar5 = bVar7;
      }
      if (bVar4) {
        *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + *(longlong *)(param_2 + 8)) = 2;
      }
      if (!bVar10) {
        if (*(char *)(param_1 + 0x100) != '\0') {
          bVar6 = bVar5;
        }
        if (!bVar6) {
          return uVar15;
        }
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x29 + *(longlong *)(param_2 + 8)) = 1;
      return uVar15;
    }
    plVar12 = plVar14;
    if (plVar14 == plVar1) {
      plVar12 = plVar13;
    }
    lVar3 = *plVar12;
    if (lVar3 != 0) {
      cVar11 = FUN_1406f7e60(lVar3,param_2,param_3);
      bVar7 = bVar8;
      if (cVar11 == '\0') {
        uVar15 = 0;
      }
      else {
        cVar11 = *(char *)(*(longlong *)(lVar3 + 0xd8) + 0x29 + *(longlong *)(param_2 + 8));
        if (cVar11 == '\x02') {
          if (*(char *)(lVar3 + 0xd3) != '\0') {
LAB_1406fa066:
            bVar6 = bVar9;
            if (*(char *)(lVar3 + 0xf9) != '\0') {
              bVar6 = true;
            }
            bVar9 = bVar6;
            if (*(char *)(lVar3 + 0xfa) != '\0') {
              bVar10 = true;
            }
            goto LAB_1406fa04e;
          }
        }
        else if (cVar11 == '\x01') goto LAB_1406fa066;
        bVar7 = false;
        if (*(char *)(lVar3 + 0xfc) == '\0') {
          bVar7 = bVar8;
        }
        bVar8 = bVar7;
        if ((cVar11 == '\x02') && (bVar4 = bVar5, *(char *)(lVar3 + 0xfb) != '\0')) {
          bVar5 = true;
          bVar4 = true;
        }
      }
    }
LAB_1406fa04e:
    if (plVar14 == plVar1) {
      plVar13 = plVar13 + 1;
    }
    else {
      plVar14 = plVar14 + 1;
    }
  } while( true );
}



// FUNCTION 1406fa130 FUN_1406fa130 body=586 status=ok
// SIG undefined FUN_1406fa130(void)

ulonglong FUN_1406fa130(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  byte local_57;
  
  lVar11 = (**(code **)(*param_1 + 0x3c8))();
  if (lVar11 != 0) {
    uVar12 = FUN_1406f7e60(lVar11,param_2,param_3);
    if ((char)uVar12 == '\0') {
      return uVar12;
    }
    param_3 = *(char *)(*(longlong *)(lVar11 + 0xd8) + 0x29 + *(longlong *)(param_2 + 8));
    if ((param_3 == '\x02') && (*(char *)(lVar11 + 0xd3) != '\0')) {
      param_3 = '\x01';
    }
    *(char *)(param_1[0x1b] + 0x29 + *(longlong *)(param_2 + 8)) = param_3;
  }
  bVar6 = true;
  bVar8 = false;
  bVar5 = false;
  plVar14 = (longlong *)param_1[0x23];
  plVar15 = (longlong *)param_1[0x21];
  bVar4 = false;
  bVar3 = false;
  bVar7 = true;
  bVar9 = false;
  local_57 = 1;
  plVar1 = plVar15 + (int)param_1[0x22];
  plVar2 = plVar14 + (int)param_1[0x24];
  while ((plVar15 != plVar1 || (plVar14 != plVar2))) {
    plVar13 = plVar15;
    if (plVar15 == plVar1) {
      plVar13 = plVar14;
    }
    lVar11 = *plVar13;
    if (lVar11 != 0) {
      cVar10 = FUN_1406f7e60(lVar11,param_2,param_3);
      bVar6 = bVar7;
      if (cVar10 == '\0') {
        local_57 = 0;
      }
      else {
        cVar10 = *(char *)(*(longlong *)(lVar11 + 0xd8) + 0x29 + *(longlong *)(param_2 + 8));
        if (cVar10 == '\x02') {
          if (*(char *)(lVar11 + 0xd3) != '\0') {
LAB_1406fa2b8:
            if (*(char *)(lVar11 + 0xf9) != '\0') {
              bVar8 = true;
            }
            bVar5 = bVar8;
            if (*(char *)(lVar11 + 0xfa) != '\0') {
              bVar9 = true;
            }
            goto LAB_1406fa248;
          }
        }
        else if (cVar10 == '\x01') goto LAB_1406fa2b8;
        bVar6 = false;
        if (*(char *)(lVar11 + 0xfc) == '\0') {
          bVar6 = bVar7;
        }
        bVar7 = bVar6;
        if ((cVar10 == '\x02') && (bVar3 = bVar4, *(char *)(lVar11 + 0xfb) != '\0')) {
          bVar3 = true;
          bVar4 = bVar3;
        }
      }
    }
LAB_1406fa248:
    if (plVar15 == plVar1) {
      plVar14 = plVar14 + 1;
    }
    else {
      plVar15 = plVar15 + 1;
    }
  }
  bVar4 = false;
  if (bVar5) {
    bVar4 = bVar6;
  }
  if (bVar3) {
    *(undefined1 *)(param_1[0x1b] + 0x29 + *(longlong *)(param_2 + 8)) = 2;
  }
  if (!bVar9) {
    if ((char)param_1[0x20] != '\0') {
      bVar5 = bVar4;
    }
    if (!bVar5) goto LAB_1406fa361;
  }
  *(undefined1 *)(param_1[0x1b] + 0x29 + *(longlong *)(param_2 + 8)) = 1;
LAB_1406fa361:
  return (ulonglong)local_57;
}



// FUNCTION 1406fa390 FUN_1406fa390 body=122 status=ok
// SIG undefined FUN_1406fa390(void)

bool FUN_1406fa390(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  if (param_3 == '\x04') {
    return true;
  }
  cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    return false;
  }
  cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
  return cVar1 != '\0';
}



// FUNCTION 1406fa410 FUN_1406fa410 body=265 status=ok
// SIG undefined FUN_1406fa410(void)

undefined8 FUN_1406fa410(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x100) != 0) {
    lVar3 = *(longlong *)(param_2 + 8) + *(longlong *)(param_1 + 0xd8);
    if (*(char *)(lVar3 + 0x78) == '\x02') {
      lVar2 = FWeakObjectPtr::Get(lVar3 + 0xd0);
      if (lVar2 != 0) {
        FUN_1428d3550(lVar2 + 0xea8);
        FUN_14248ba60(lVar2 + 0x274,lVar3 + 0x7c);
        FUN_14248ba60(lVar2 + 0x13ac,lVar3 + 0x90);
      }
      lVar2 = FWeakObjectPtr::Get(lVar3 + 0xc0);
      if (lVar2 != 0) {
        FUN_142f97e10(lVar2);
      }
      *(undefined1 *)(lVar3 + 0x78) = 3;
      if (param_3 == '\x04') {
        return 1;
      }
      FUN_1406f2e00(param_1,param_2,3);
    }
    if (param_3 != '\x04') {
      cVar1 = FUN_1406ef7c0(param_1,param_2);
      if (cVar1 != '\0') {
        return 0;
      }
      *(char *)(*(longlong *)(param_2 + 8) + 0x29 + *(longlong *)(param_1 + 0xd8)) =
           (*(char *)(lVar3 + 0xf0) == '\0') + '\x01';
    }
  }
  return 1;
}



// FUNCTION 1406fa520 FUN_1406fa520 body=35 status=ok
// SIG undefined FUN_1406fa520(void)

undefined1 FUN_1406fa520(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  if (param_3 != '\x04') {
    cVar1 = (**(code **)(*param_1 + 0x2b8))();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1406fa550 FUN_1406fa550 body=466 status=ok
// SIG undefined FUN_1406fa550(void)

void FUN_1406fa550(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined8 *_Src;
  undefined8 *local_38;
  undefined8 local_30;
  
  lVar1 = param_1[2];
  lVar4 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  if (lVar4 != 0) {
    lVar5 = FUN_142e5c1e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_38 = (undefined8 *)0x0;
      local_30 = 1;
      uVar6 = FUN_142c6f840(param_1,lVar1 + 0x108,1);
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,0);
      _Src = local_38;
      *local_38 = uVar6;
      uVar6 = FUN_142c6f840(param_1,lVar1 + 0x1f8,1);
      lVar5 = (longlong)(int)local_30;
      iVar9 = (int)local_30 + 1;
      if (local_30._4_4_ < iVar9) {
        uVar7 = local_30 & 0xffffffff;
        local_30._0_4_ = iVar9;
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,uVar7);
        _Src = local_38;
        iVar9 = (int)local_30;
      }
      local_30._0_4_ = iVar9;
      iVar3 = local_30._4_4_;
      iVar9 = (int)local_30;
      _Src[lVar5] = uVar6;
      uVar6 = FUN_142c6f840(param_1,lVar1 + 0x180,1);
      local_30._0_4_ = iVar9 + 1;
      iVar8 = (int)local_30;
      if (iVar3 < (int)local_30) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,iVar9);
        _Src = local_38;
        iVar8 = (int)local_30;
      }
      local_30 = CONCAT44(local_30._4_4_,iVar8);
      _Src[iVar9] = uVar6;
      local_38 = (undefined8 *)0x0;
      if (iVar8 == 0) {
        local_30 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,iVar8,0);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar8 << 3);
      }
      FUN_142c68750(lVar1 + 0xc0,param_1,0x3f800000,lVar4,&local_38);
      if (_Src != (undefined8 *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
  return;
}



// FUNCTION 1406fa730 FUN_1406fa730 body=682 status=ok
// SIG undefined FUN_1406fa730(void)

void FUN_1406fa730(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 *local_res10;
  undefined1 local_res18 [8];
  longlong *local_88;
  int local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48;
  
  lVar9 = param_1[0x1b] + param_2[1];
  puVar1 = (undefined8 *)(lVar9 + 0x48);
  FUN_142193af0(puVar1);
  local_res10 = (undefined4 *)(lVar9 + 0x50);
  plVar7 = (longlong *)0x0;
  *local_res10 = 0xffffffff;
  *(undefined4 *)(lVar9 + 0x54) = 0;
  cVar4 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (cVar4 != '\0') {
    if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
      plVar7 = (longlong *)param_1[4];
    }
    for (; plVar7 != (longlong *)0x0;
        plVar7 = (longlong *)UObjectBaseUtility::GetTypedOuter(plVar7,uVar6)) {
      cVar4 = (**(code **)(*plVar7 + 0x2d0))(plVar7);
      if (cVar4 == '\0') {
        return;
      }
      uVar6 = USafeZone::GetPrivateStaticClass();
    }
    FWeakObjectPtr::operator=(&local_58,*param_2);
    lVar9 = param_2[1];
    lVar2 = param_2[2];
    local_88 = (longlong *)0x0;
    uStack_60 = 0;
    local_68 = FUN_1406f1640;
    local_50 = lVar9;
    local_48 = lVar2;
    plVar7 = (longlong *)FMemory::Realloc(0,0x40);
    local_80 = 4;
    local_88 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_144060960;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_68;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_68._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_60;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_5c;
      *(undefined4 *)(plVar7 + 4) = local_58;
      *(undefined4 *)((longlong)plVar7 + 0x24) = local_54;
      plVar7[5] = lVar9;
      plVar7[6] = lVar2;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar7[7] = lVar9;
      *plVar7 = (longlong)&PTR_FUN_1440609a8;
    }
    if ((*(char *)((longlong)param_1 + 0x409) == '\0') || ((char)param_1[0x81] != '\x04')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    plVar7 = (longlong *)*param_2;
    if (bVar3) {
      uVar5 = FUN_142d369f0(param_1 + 0x20,plVar7,&local_88);
      puVar8 = (undefined8 *)FUN_142d2e650(&local_res10,uVar5,0);
      *puVar1 = *puVar8;
    }
    else {
      uVar6 = (**(code **)(*plVar7 + 0x148))(plVar7);
      lVar9 = FUN_142d39320(uVar6);
      if (lVar9 != 0) {
        local_78 = 0;
        local_70 = 0;
        local_68 = (code *)0x0;
        uStack_60 = 0;
        if ((local_80 != 0) && (local_88 != (longlong *)0x0)) {
          (**(code **)(*local_88 + 0x30))(local_88,&local_68);
        }
        puVar8 = (undefined8 *)
                 FUN_142d317d0(lVar9,local_res18,*param_2,param_1 + 0x20,param_1 + 0x3a,&local_68,
                               &local_78);
        *puVar1 = *puVar8;
        FWeakObjectPtr::operator=(local_res10,lVar9);
      }
    }
    if (local_80 != 0) {
      if (local_88 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_88 + 0x28))(local_88,0);
      if (local_88 != (longlong *)0x0) {
        local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
      }
      local_80 = 0;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  return;
}



// FUNCTION 1406fa9e0 FUN_1406fa9e0 body=257 status=ok
// SIG undefined FUN_1406fa9e0(void)

void FUN_1406fa9e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146858648) && (_Init_thread_header(&DAT_146858648), DAT_146858648 == -1))
  {
    FName::FName(&DAT_146858640,L"Jump",1);
    _Init_thread_footer(&DAT_146858648);
  }
  if (*(char *)(param_1 + 0x4e8) != '\0') {
    *(undefined1 *)(param_1 + 0x4e8) = 0;
    plVar1 = (longlong *)FUN_142c6f130(param_1);
    if (plVar1 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      uVar2 = UScrollBox::GetPrivateStaticClass();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    }
    lVar4 = FUN_142da89b0(plVar1);
    if ((lVar3 != 0) && (lVar4 != 0)) {
      FUN_142d5ac30(lVar3 + 0x3d0,DAT_146858640);
      FUN_142d6d130(lVar3 + 0x3d0,*(undefined8 *)(lVar4 + 0x58));
    }
  }
  return;
}



// FUNCTION 1406faaf0 FUN_1406faaf0 body=378 status=ok
// SIG undefined FUN_1406faaf0(void)

char FUN_1406faaf0(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_2 + 8) + param_1[0x1b];
  if ((((char)param_1[0x1a] != '\0') && (*(char *)(lVar5 + 0x28) == '\0')) &&
     (cVar2 = (**(code **)(*param_1 + 0x290))(), cVar2 != '\0')) {
    uVar4 = FWeakObjectPtr::Get(lVar5);
    FUN_1406f70d0(param_1,param_2,uVar4);
  }
  if (*(char *)(lVar5 + 0x28) != '\x02') goto LAB_1406fac3b;
  if ((char)param_1[0x1a] == '\0') {
    *(undefined1 *)(lVar5 + 0x29) = 4;
LAB_1406fab87:
    cVar2 = (**(code **)(*param_1 + 0x2f8))(param_1,param_2);
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x2f8))(param_1,param_2);
    if (cVar2 == '\x01') {
      uVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,param_2);
      *(undefined1 *)(lVar5 + 0x29) = uVar3;
      goto LAB_1406fab87;
    }
  }
  if (cVar2 == '\x02') {
    *(undefined1 *)(lVar5 + 0x41) = 1;
    uVar4 = FWeakObjectPtr::Get(lVar5);
    cVar2 = FUN_1406f7e60(param_1,param_2,*(undefined1 *)(lVar5 + 0x29));
    if (cVar2 != '\0') {
      uVar3 = *(undefined1 *)(lVar5 + 0x28);
      uVar1 = *(undefined1 *)(lVar5 + 0x29);
      (**(code **)(*param_1 + 0x300))(param_1,param_2);
      cVar2 = (**(code **)(*param_1 + 0x290))(param_1,param_2);
      if (cVar2 == '\0') {
        *(undefined1 *)(lVar5 + 0x28) = uVar3;
        *(undefined1 *)(lVar5 + 0x29) = uVar1;
      }
      else {
        FUN_1406f70d0(param_1,param_2,uVar4);
        *(undefined1 *)(lVar5 + 0x28) = 2;
      }
    }
    *(undefined1 *)(lVar5 + 0x41) = 0;
  }
  else if (cVar2 == '\0') {
    FUN_1406f7e60(param_1,param_2,*(undefined1 *)(lVar5 + 0x29));
  }
LAB_1406fac3b:
  cVar2 = *(char *)(*(longlong *)(param_2 + 8) + 0x29 + param_1[0x1b]);
  if ((cVar2 == '\x02') && (*(char *)((longlong)param_1 + 0xd3) != '\0')) {
    cVar2 = '\x01';
  }
  return cVar2;
}



// FUNCTION 1406fac70 FUN_1406fac70 body=2156 status=ok
// SIG undefined FUN_1406fac70(void)

undefined8 FUN_1406fac70(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float local_res8 [2];
  float local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  undefined8 in_stack_fffffffffffffed8;
  undefined8 uVar18;
  float *pfVar19;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_fc;
  float local_f4;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [12];
  undefined8 local_cc;
  undefined1 local_c0 [128];
  
  uVar2 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  lVar12 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  lVar11 = *(longlong *)(*param_2 + 0x488);
  local_res18 = lVar11;
  lVar4 = FWeakObjectPtr::Get(lVar12 + 0xc0);
  local_res20 = lVar4;
  lVar5 = FWeakObjectPtr::Get(lVar12 + 0xd0);
  if (lVar11 == 0) {
    return 0;
  }
  if (lVar4 == 0) {
    return 0;
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x100) == 0) {
    return 0;
  }
  lVar10 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  lVar4 = FWeakObjectPtr::Get(lVar10 + 0xd0);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x178) != 0)) {
    fVar17 = *(float *)(param_2 + 3) - *(float *)(lVar10 + 0x5c);
    uVar18 = CONCAT44(uVar2,fVar17);
    FUN_1406f61c0(lVar4 + 0x274,lVar10 + 0x7c,*(undefined1 *)(*(longlong *)(param_1 + 0x100) + 0xd0)
                  ,*(longlong *)(param_1 + 0x100) + 0xd8,uVar18);
    uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
    lVar11 = *(longlong *)(param_1 + 0x100);
    local_res8[0] = 0.0;
    if (*(char *)(lVar11 + 0x151) == '\0') {
      local_res10[0] = 0.0;
      local_118 = *(undefined8 *)(*(longlong *)(lVar4 + 0x178) + 0x220);
      local_110 = *(float *)(*(longlong *)(lVar4 + 0x178) + 0x228);
      pfVar19 = local_res8;
      FUN_1406dd7a0(param_1,param_2,&local_118,local_res10,pfVar19);
      uVar2 = (undefined4)((ulonglong)pfVar19 >> 0x20);
      lVar6 = 0x1d0;
      fVar17 = local_res8[0];
    }
    else {
      lVar6 = 0x158;
    }
    FUN_1406f61c0(lVar4 + 0x13ac,lVar10 + 0x90,*(undefined1 *)(lVar11 + 0x150),lVar11 + lVar6,
                  CONCAT44(uVar2,fVar17));
    lVar11 = local_res18;
  }
  if (*(char *)(lVar5 + 0xeaa) != '\0') {
    cVar1 = FUN_1406fd640(param_1,param_2);
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(lVar11 + 0x168);
      if (lVar4 == 0) {
        local_100 = DAT_1468b5d98;
        puVar9 = &local_108;
        local_108 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      else {
        puVar9 = &local_118;
        local_110 = *(float *)(lVar4 + 0x228);
        local_118 = *(undefined8 *)(lVar4 + 0x220);
      }
      uVar2 = *(undefined4 *)(puVar9 + 1);
      *(undefined8 *)(lVar12 + 0x60) = *puVar9;
      *(undefined4 *)(lVar12 + 0x68) = uVar2;
      goto LAB_1406fae8e;
    }
LAB_1406fafa8:
    cVar1 = '\x04';
    goto LAB_1406faea1;
  }
LAB_1406fae8e:
  if (*(char *)(lVar5 + 0xea9) != '\0') {
    cVar1 = '\x05';
    goto LAB_1406faea1;
  }
  if ((*(longlong *)(*param_2 + 0x488) != 0) && (*(longlong *)(param_1 + 0x100) != 0)) {
    lVar12 = param_2[1] + *(longlong *)(param_1 + 0xd8);
    lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x488) + 0x168);
    if (lVar4 == 0) {
      local_100 = DAT_1468b5d98;
      puVar9 = &local_108;
      local_108 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      puVar9 = &local_118;
      local_110 = *(float *)(lVar4 + 0x228);
      local_118 = *(undefined8 *)(lVar4 + 0x220);
    }
    local_fc = *puVar9;
    local_f4 = *(float *)(puVar9 + 1);
    fVar15 = *(float *)(lVar12 + 0x4c) - (float)local_fc;
    fVar17 = *(float *)(*(longlong *)(param_1 + 0x100) + 0x74);
    fVar14 = *(float *)(lVar12 + 0x50) - (float)((ulonglong)local_fc >> 0x20);
    if ((fVar14 * fVar14 + fVar15 * fVar15 <= fVar17 * fVar17) &&
       (cVar1 = FUN_1406fd640(param_1,param_2), cVar1 != '\0')) goto LAB_1406fafa8;
  }
  cVar1 = FUN_1406fb4e0(param_1,param_2,0);
  if (cVar1 == '\0') {
    return 0;
  }
  lVar4 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  plVar7 = (longlong *)FWeakObjectPtr::Get(lVar4 + 0xd0);
  if ((plVar7 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x100) != 0)) {
    lVar12 = *(longlong *)(param_1 + 0x100);
    fVar17 = (float)(**(code **)(*plVar7 + 0x400))(plVar7);
    if (fVar17 * *(float *)(lVar12 + 0x88) <=
        SQRT(*(float *)((longlong)plVar7 + 0x18c) * *(float *)((longlong)plVar7 + 0x18c) +
             *(float *)(plVar7 + 0x32) * *(float *)(plVar7 + 0x32) +
             *(float *)((longlong)plVar7 + 0x194) * *(float *)((longlong)plVar7 + 0x194))) {
      *(undefined4 *)(lVar4 + 0x58) = 0;
      goto LAB_1406fb092;
    }
    fVar17 = *(float *)(lVar4 + 0x58);
    if (fVar17 <= 0.0) {
      fVar17 = *(float *)(param_2 + 3);
      *(float *)(lVar4 + 0x58) = fVar17;
      lVar12 = *(longlong *)(param_1 + 0x100);
    }
    if (*(float *)(param_2 + 3) - fVar17 < *(float *)(lVar12 + 0x84)) goto LAB_1406fb092;
LAB_1406fb27b:
    cVar1 = '\x03';
LAB_1406faea1:
    FUN_1406f2e00(param_1,param_2,cVar1);
    return 0;
  }
LAB_1406fb092:
  lVar4 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  if (*(longlong *)(*param_2 + 0x488) != 0) {
    lVar12 = *(longlong *)(*(longlong *)(*param_2 + 0x488) + 0x168);
    local_res8[0] = 0.0;
    local_res10[0] = 0.0;
    if (lVar12 == 0) {
      local_108 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_100 = DAT_1468b5d98;
    }
    else {
      local_108 = *(undefined8 *)(lVar12 + 0x220);
      local_100 = *(float *)(lVar12 + 0x228);
    }
    local_110 = local_100;
    local_118 = local_108;
    FUN_1406dd7a0(param_1,param_2,&local_118,local_res8,local_res10);
    fVar17 = *(float *)(*(longlong *)(param_1 + 0x100) + 0x78);
    if (((0.0 < fVar17) && (fVar17 < local_res8[0])) ||
       ((local_res10[0] < 0.0 &&
        (pfVar19 = (float *)(*(longlong *)(param_1 + 0x100) + 0x7c),
        *pfVar19 <= -local_res10[0] && -local_res10[0] != *pfVar19)))) goto LAB_1406fb27b;
    if ((((((-(float)DAT_14622e6d0 < *(float *)(lVar4 + 0x60)) &&
           (*(float *)(lVar4 + 0x60) < (float)DAT_14622e6d0)) &&
          (-DAT_14622e6d0._4_4_ < *(float *)(lVar4 + 100))) &&
         ((*(float *)(lVar4 + 100) < DAT_14622e6d0._4_4_ &&
          (-DAT_14622e6d8 < *(float *)(lVar4 + 0x68))))) &&
        (*(float *)(lVar4 + 0x68) < DAT_14622e6d8)) && (local_res10[0] < 0.0)) {
      *(undefined8 *)(lVar4 + 0x60) = local_108;
      *(float *)(lVar4 + 0x68) = local_100;
    }
    fVar17 = *(float *)(lVar4 + 0x60);
    if (((-(float)DAT_14622e6d0 < fVar17) && (fVar17 < (float)DAT_14622e6d0)) &&
       ((fVar14 = *(float *)(lVar4 + 100), -DAT_14622e6d0._4_4_ < fVar14 &&
        (((fVar14 < DAT_14622e6d0._4_4_ && (-DAT_14622e6d8 < *(float *)(lVar4 + 0x68))) &&
         (*(float *)(lVar4 + 0x68) < DAT_14622e6d8)))))) {
      fVar17 = SQRT((local_118._4_4_ - fVar14) * (local_118._4_4_ - fVar14) +
                    ((float)local_118 - fVar17) * ((float)local_118 - fVar17));
      pfVar19 = (float *)(*(longlong *)(param_1 + 0x100) + 0x7c);
      if (*pfVar19 <= fVar17 && fVar17 != *pfVar19) goto LAB_1406fb27b;
    }
  }
  cVar1 = FUN_1406f80a0(param_1,param_2);
  if (cVar1 != '\0') {
    cVar1 = '\a';
    goto LAB_1406faea1;
  }
  local_res8[0] = (float)((uint)local_res8[0] & 0xffffff00);
  cVar1 = FUN_1406f0320(param_1,param_2,local_res8);
  lVar4 = local_res20;
  if (cVar1 != '\0') {
    cVar1 = (local_res8[0]._0_1_ == '\0') + '\x05';
    goto LAB_1406faea1;
  }
  uVar2 = FUN_142fa58e0(local_res20);
  if (((char)uVar2 == '\0') || (*(longlong *)(lVar5 + 0xfd8) == 0)) {
    lVar11 = *(longlong *)(lVar11 + 0x168);
    if (lVar11 == 0) {
      uVar2 = (undefined4)DAT_1468b5da0;
      uVar13 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_100 = DAT_1468b5da8;
    }
    else {
      local_e8 = *(float *)(lVar11 + 0x210);
      fStack_e4 = *(float *)(lVar11 + 0x214);
      fStack_e0 = *(float *)(lVar11 + 0x218);
      fStack_dc = *(float *)(lVar11 + 0x21c);
      auVar16._4_4_ = -(uint)(*(float *)(lVar11 + 0x254) != fStack_e4);
      auVar16._0_4_ = -(uint)(*(float *)(lVar11 + 0x250) != local_e8);
      auVar16._8_4_ = -(uint)(*(float *)(lVar11 + 600) != fStack_e0);
      auVar16._12_4_ = -(uint)(*(float *)(lVar11 + 0x25c) != fStack_dc);
      iVar3 = movmskps(uVar2,auVar16);
      if (iVar3 != 0) {
        *(float *)(lVar11 + 0x250) = local_e8;
        *(float *)(lVar11 + 0x254) = fStack_e4;
        *(float *)(lVar11 + 600) = fStack_e0;
        *(float *)(lVar11 + 0x25c) = fStack_dc;
        puVar9 = (undefined8 *)FQuat::Rotator(&local_e8,local_d8);
        *(undefined8 *)(lVar11 + 0x260) = *puVar9;
        *(undefined4 *)(lVar11 + 0x268) = *(undefined4 *)(puVar9 + 1);
      }
      uVar2 = (undefined4)*(undefined8 *)(lVar11 + 0x260);
      uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x260) >> 0x20);
      local_100 = *(float *)(lVar11 + 0x268);
    }
    puVar9 = &local_cc;
    local_108 = CONCAT44(uVar13,uVar2);
    puVar8 = &local_fc;
    local_fc = local_108;
    local_f4 = local_100;
  }
  else {
    FUN_142cc15c0(*(longlong *)(lVar5 + 0xfd8) + 0xbe0,local_c0,0);
    puVar8 = (undefined8 *)FUN_142ce6bb0(lVar5,&local_fc,local_c0);
    puVar9 = &local_108;
  }
  puVar9 = (undefined8 *)FRotator::Vector(puVar8,puVar9);
  uVar18 = *puVar9;
  local_110 = *(float *)(puVar9 + 1);
  local_118._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
  local_118._0_4_ = (float)uVar18;
  fVar17 = local_118._4_4_ * local_118._4_4_ + (float)local_118 * (float)local_118;
  if (fVar17 == 1.0) {
    local_118 = uVar18;
    if (local_110 == 0.0) goto LAB_1406fb4c0;
  }
  else {
    if (fVar17 < 1e-08) {
      local_110 = DAT_1468b5d98;
      local_118 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_1406fb4c0;
    }
    auVar16 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar14 = auVar16._0_4_;
    fVar14 = fVar14 + fVar14 * (0.5 - fVar17 * 0.5 * fVar14 * fVar14);
    fVar14 = fVar14 + fVar14 * (0.5 - fVar17 * 0.5 * fVar14 * fVar14);
    local_118 = CONCAT44(local_118._4_4_ * fVar14,(float)local_118 * fVar14);
  }
  local_110 = 0.0;
LAB_1406fb4c0:
  FUN_142fb3ce0(lVar4,&local_118);
  return 1;
}



// FUNCTION 1406fb4e0 FUN_1406fb4e0 body=238 status=ok
// SIG undefined FUN_1406fb4e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1406fb4e0(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong local_res8;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x100) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd8) + param_2[1];
    local_res8 = 0;
    if (param_3 == '\0') {
      local_res8 = FWeakObjectPtr::Get(lVar2 + 0xa4);
    }
    else {
      FUN_142cc3a70(param_1 + 0x108,*(undefined8 *)(*param_2 + 0x568),&local_res8);
      FWeakObjectPtr::operator=(lVar2 + 0xa4,local_res8);
    }
    in_RAX = 0;
    if (local_res8 != 0) {
      lVar1 = *(longlong *)(local_res8 + 0x168);
      if (lVar1 == 0) {
        local_18 = _DAT_1468b5d90;
        local_10 = DAT_1468b5d98;
      }
      else {
        local_18 = *(undefined8 *)(lVar1 + 0x220);
        local_10 = *(undefined4 *)(lVar1 + 0x228);
      }
      *(undefined8 *)(lVar2 + 0x4c) = local_18;
      *(undefined4 *)(lVar2 + 0x54) = local_10;
      return CONCAT71((uint7)(uint3)((uint)local_10 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1406fb5d0 FUN_1406fb5d0 body=384 status=ok
// SIG undefined FUN_1406fb5d0(void)

undefined8 FUN_1406fb5d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  float fVar8;
  undefined8 local_res8;
  
  lVar6 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  plVar1 = *(longlong **)(*param_2 + 0x488);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  lVar5 = APostProcessVolume::GetPrivateStaticClass();
  if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if ((*(byte *)(lVar6 + 0x28) < 2) || (cVar3 = FUN_142df43b0(param_1 + 0x100), cVar3 == '\0')) {
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      fVar8 = (float)FUN_142de77e0(param_1 + 0x100,*param_2,0,&local_res8);
      *(bool *)(lVar6 + 0x48) = 0.5 <= fVar8;
    }
    if ((*(byte *)(lVar6 + 0x28) < 2) || (cVar3 = FUN_142df43b0(param_1 + 0x188), cVar3 == '\0')) {
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      fVar8 = (float)FUN_142de77e0(param_1 + 0x188,*param_2,0,&local_res8);
      *(bool *)(lVar6 + 0x49) = 0.5 <= fVar8;
    }
    bVar7 = *(byte *)(lVar6 + 0x48);
    if ((*(longlong *)(*param_2 + 0x628) != 0) && (iVar4 = FUN_142eb7a00(), iVar4 != 0)) {
      bVar7 = *(byte *)(lVar6 + 0x49);
    }
    if (bVar7 != ((byte)*(undefined4 *)((longlong)plVar1 + 0x56c) & 1)) {
      if (bVar7 != 0) {
        (**(code **)(*plVar1 + 0x8d8))();
        return 1;
      }
      (**(code **)(*plVar1 + 0x8e0))(plVar1,0);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1406fb750 FUN_1406fb750 body=383 status=ok
// SIG undefined FUN_1406fb750(void)

void FUN_1406fb750(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 local_78 [16];
  undefined1 local_68 [96];
  
  lVar4 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  FUN_1406eaa90(param_1,param_2,param_3,lVar4 + 0x70,local_78);
  if (*(char *)(param_1 + 0x268) != '\0') {
    cVar2 = FUN_1406f8590(param_1,param_2,param_3,local_78);
    if (cVar2 == '\0') {
      puVar3 = (undefined1 *)FUN_142f89530(local_68);
      *(undefined1 *)(lVar4 + 0x70) = *puVar3;
      *(undefined8 *)(lVar4 + 0x74) = *(undefined8 *)(puVar3 + 4);
      *(undefined4 *)(lVar4 + 0x7c) = *(undefined4 *)(puVar3 + 0xc);
      *(undefined4 *)(lVar4 + 0x80) = *(undefined4 *)(puVar3 + 0x10);
      *(undefined4 *)(lVar4 + 0x84) = *(undefined4 *)(puVar3 + 0x14);
      *(undefined4 *)(lVar4 + 0x88) = *(undefined4 *)(puVar3 + 0x18);
      *(undefined4 *)(lVar4 + 0x8c) = *(undefined4 *)(puVar3 + 0x1c);
      *(undefined4 *)(lVar4 + 0x90) = *(undefined4 *)(puVar3 + 0x20);
      *(undefined4 *)(lVar4 + 0x94) = *(undefined4 *)(puVar3 + 0x24);
      uVar1 = *(undefined8 *)(puVar3 + 0x30);
      *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(puVar3 + 0x28);
      *(undefined8 *)(lVar4 + 0xa0) = uVar1;
      uVar1 = *(undefined8 *)(puVar3 + 0x40);
      *(undefined8 *)(lVar4 + 0xa8) = *(undefined8 *)(puVar3 + 0x38);
      *(undefined8 *)(lVar4 + 0xb0) = uVar1;
      *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(puVar3 + 0x48);
      *(undefined1 *)(lVar4 + 0xc0) = puVar3[0x50];
      *(undefined1 *)(lVar4 + 0xc1) = puVar3[0x51];
      *(undefined1 *)(lVar4 + 0xc2) = puVar3[0x52];
      *(undefined4 *)(lVar4 + 0xc4) = *(undefined4 *)(puVar3 + 0x54);
      *(undefined1 *)(lVar4 + 200) = puVar3[0x58];
      *(undefined1 *)(lVar4 + 0xc9) = puVar3[0x59];
      *(undefined1 *)(lVar4 + 0xca) = puVar3[0x5a];
    }
  }
  *(undefined1 *)(lVar4 + 200) = *(undefined1 *)(param_1 + 0x26a);
  *(float *)(lVar4 + 0x94) = *(float *)(param_1 + 0x250) * 0.5;
  *(undefined8 *)(lVar4 + 100) = *param_3;
  *(undefined4 *)(lVar4 + 0x6c) = *(undefined4 *)(param_3 + 1);
  return;
}



// FUNCTION 1406fb8d0 FUN_1406fb8d0 body=579 status=ok
// SIG undefined FUN_1406fb8d0(void)

void FUN_1406fb8d0(char *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 local_2e8 [8];
  undefined2 local_2e0;
  undefined1 local_b5 [13];
  undefined1 local_a8 [144];
  
  if (param_1[2] != '\0') {
    FUN_1406f7990();
    return;
  }
  if ((*param_1 != '\0') && (lVar5 = FUN_14075eaf0(*param_2), lVar5 != 0)) {
    *param_1 = '\0';
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x90);
    puVar9 = *(undefined1 **)(lVar6 + 0x1a0);
    puVar11 = puVar9 + (longlong)*(int *)(lVar6 + 0x1a8) * 0x88;
    lVar8 = DAT_1468585e0;
    for (; puVar9 != puVar11; puVar9 = puVar9 + 0x88) {
      if (*(longlong *)(puVar9 + 0x80) == lVar8) {
        puVar7 = (undefined1 *)FUN_142de2a30(local_a8,lVar8,0,0);
        *puVar9 = *puVar7;
        puVar9[1] = puVar7[1];
        puVar9[2] = puVar7[2];
        puVar9[3] = puVar7[3];
        *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar7 + 4);
        *(undefined8 *)(puVar9 + 0x10) = *(undefined8 *)(puVar7 + 0x10);
        *(undefined8 *)(puVar9 + 0x18) = *(undefined8 *)(puVar7 + 0x18);
        uVar4 = *(undefined8 *)(puVar7 + 0x28);
        *(undefined8 *)(puVar9 + 0x20) = *(undefined8 *)(puVar7 + 0x20);
        *(undefined8 *)(puVar9 + 0x28) = uVar4;
        uVar4 = *(undefined8 *)(puVar7 + 0x38);
        *(undefined8 *)(puVar9 + 0x30) = *(undefined8 *)(puVar7 + 0x30);
        *(undefined8 *)(puVar9 + 0x38) = uVar4;
        uVar4 = *(undefined8 *)(puVar7 + 0x48);
        *(undefined8 *)(puVar9 + 0x40) = *(undefined8 *)(puVar7 + 0x40);
        *(undefined8 *)(puVar9 + 0x48) = uVar4;
        *(undefined8 *)(puVar9 + 0x50) = *(undefined8 *)(puVar7 + 0x50);
        uVar1 = *(undefined4 *)(puVar7 + 0x5c);
        uVar2 = *(undefined4 *)(puVar7 + 0x60);
        uVar3 = *(undefined4 *)(puVar7 + 100);
        *(undefined4 *)(puVar9 + 0x58) = *(undefined4 *)(puVar7 + 0x58);
        *(undefined4 *)(puVar9 + 0x5c) = uVar1;
        *(undefined4 *)(puVar9 + 0x60) = uVar2;
        *(undefined4 *)(puVar9 + 100) = uVar3;
        *(undefined8 *)(puVar9 + 0x68) = *(undefined8 *)(puVar7 + 0x68);
        *(undefined4 *)(puVar9 + 0x70) = *(undefined4 *)(puVar7 + 0x70);
        *(undefined4 *)(puVar9 + 0x74) = *(undefined4 *)(puVar7 + 0x74);
        *(undefined4 *)(puVar9 + 0x78) = *(undefined4 *)(puVar7 + 0x78);
        *(undefined8 *)(puVar9 + 0x80) = *(undefined8 *)(puVar7 + 0x80);
        lVar8 = DAT_1468585e0;
      }
    }
    FUN_1406d4d50(local_2e8,lVar6 + 0x1d0);
    local_2e0 = 0x100;
    local_2e8[0] = 1;
    FUN_142bf6cf0(local_b5,0);
    lVar10 = *(longlong *)(lVar6 + 0xd8) + param_2[1];
    lVar8 = FWeakObjectPtr::Get(lVar10 + 0x50);
    if (lVar8 != 0) {
      FUN_1406da410(lVar10 + 0x60,local_2e8);
      FUN_142d488f0(lVar8,*(undefined8 *)(lVar10 + 0x48),(undefined8 *)(lVar6 + 0x1a0),local_2e8,1);
    }
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x88);
    if (lVar8 != 0) {
      FUN_140754d30(lVar5 + 0x48,lVar8,*param_2,0x40000000,0);
    }
  }
  return;
}



// FUNCTION 1406fbb20 FUN_1406fbb20 body=231 status=ok
// SIG undefined FUN_1406fbb20(void)

void FUN_1406fbb20(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_248 [576];
  
  if (*(char *)(param_1 + 0x309) != '\0') {
    puVar1 = (undefined1 *)(param_1 + 0xd0);
    uVar3 = FUN_142d2e660(local_248);
    FUN_1406da410(puVar1,uVar3);
    cVar2 = *(char *)(param_1 + 0x308);
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        *puVar1 = 1;
        return;
      }
      if (cVar2 == '\x02') {
        *puVar1 = 2;
        return;
      }
      if (cVar2 == '\x03') {
        *(undefined4 *)(param_1 + 0xdc) = 0x40000000;
        *(undefined2 *)(param_1 + 0xe5) = 1;
        *(undefined2 *)(param_1 + 0xd8) = 0;
        *(undefined1 *)(param_1 + 0x1f0) = 0;
      }
      else {
        if (cVar2 != '\x04') {
          return;
        }
        *(undefined4 *)(param_1 + 0xdc) = 0;
        *(undefined2 *)(param_1 + 0xe5) = 0x100;
        *(undefined2 *)(param_1 + 0xd8) = 0;
        *(undefined1 *)(param_1 + 0x1f0) = 0;
        *(undefined1 *)(param_1 + 0x301) = 0;
      }
    }
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 1406fbc10 FUN_1406fbc10 body=572 status=ok
// SIG undefined FUN_1406fbc10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1406fbc10(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar7 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  cVar1 = *(char *)(lVar7 + 0x78);
  if (cVar1 == '\0') {
    FUN_1406f2e00(param_1,param_2,1);
    *(undefined1 *)(lVar7 + 0x78) = 1;
    *(undefined1 *)(lVar7 + 0xf0) = 0;
    lVar5 = *(longlong *)(param_1 + 0x100);
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 200) != 0)) && (*(char *)(lVar5 + 0x60) == '\0')) {
      lVar5 = FWeakObjectPtr::Get(param_2[1] + 200 + *(longlong *)(param_1 + 0xd8));
      if (lVar5 != 0) {
        FUN_142ddc5e0(lVar5,1,*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 200));
      }
    }
  }
  else if (cVar1 == '\x01') {
    cVar2 = FUN_1406ef7c0(param_1);
    if (cVar2 == '\0') {
      lVar6 = param_2[1] + *(longlong *)(param_1 + 0xd8);
      *(undefined1 *)(lVar6 + 0xf0) = 0;
      lVar3 = FWeakObjectPtr::Get(lVar6 + 0xd0);
      lVar5 = *(longlong *)(*param_2 + 0x488);
      if ((lVar5 != 0) && (lVar3 != 0)) {
        cVar2 = FUN_1406fb4e0(param_1,param_2,1);
        if (cVar2 != '\0') {
          *(undefined4 *)(lVar6 + 0x58) = 0;
          *(int *)(lVar6 + 0x5c) = (int)param_2[3];
          *(undefined8 *)(lVar6 + 0x60) = DAT_14622e6d0;
          *(undefined4 *)(lVar6 + 0x68) = DAT_14622e6d8;
          lVar5 = *(longlong *)(lVar5 + 0x168);
          if (lVar5 == 0) {
            local_28 = _DAT_1468b5d90;
            local_20 = DAT_1468b5d98;
          }
          else {
            local_28 = *(undefined8 *)(lVar5 + 0x220);
            local_20 = *(undefined4 *)(lVar5 + 0x228);
          }
          *(undefined8 *)(lVar6 + 0x6c) = local_28;
          *(undefined4 *)(lVar6 + 0x74) = local_20;
          uVar4 = FWeakObjectPtr::Get(lVar6 + 0xa4);
          FUN_142ce0fd0(lVar3 + 0xea8,*(undefined8 *)(param_1 + 0x100),uVar4);
          FUN_1406f2e00(param_1,param_2,2);
        }
      }
      *(undefined1 *)(lVar7 + 0x78) = 2;
    }
  }
  else if (cVar1 == '\x02') {
    cVar2 = FUN_1406fac70(param_1);
    if (cVar2 == '\0') {
      FUN_1406f8020(param_1,param_2);
      FUN_1406dfa90(param_1,param_2);
      *(undefined1 *)(lVar7 + 0x78) = 3;
    }
  }
  else if (cVar1 == '\x03') {
    cVar2 = FUN_1406ef7c0(param_1);
    if (cVar2 == '\0') {
      *(undefined1 *)(lVar7 + 0x78) = 4;
    }
  }
  return *(char *)(lVar7 + 0x78) != cVar1;
}



// FUNCTION 1406fbe50 FUN_1406fbe50 body=1358 status=ok
// SIG undefined FUN_1406fbe50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406fbe50(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  float *pfVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_res18;
  undefined1 local_res1c;
  ulonglong in_stack_ffffffffffffff38;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [112];
  
  plVar6 = (longlong *)FUN_142c6f130();
  if (plVar6 != (longlong *)0x0) {
    lVar10 = *(longlong *)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x520) == '\0') {
      if ((char)plVar6[0x25] == '\x03') {
        fVar12 = *(float *)(param_1 + 0x4f4);
        fVar14 = *(float *)(param_1 + 0x4fc);
        fVar13 = *(float *)(param_1 + 0x544);
        fVar15 = *(float *)(param_1 + 0x548);
        fVar1 = *(float *)(param_1 + 0x4ec);
        fVar2 = *(float *)(param_1 + 0x54c);
        fVar3 = *(float *)(param_1 + 0x4f0);
        pfVar7 = (float *)FUN_142c48330(param_1 + 0x488,&local_98);
        fVar13 = *pfVar7 - (fVar14 * fVar13 + fVar1);
        fVar15 = pfVar7[1] - (fVar14 * fVar15 + fVar3);
        fVar12 = pfVar7[2] - (fVar2 * fVar14 + fVar12);
        fVar12 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar12 * fVar12);
        pfVar7 = (float *)(lVar10 + 0x2e8);
        if (*pfVar7 <= fVar12 && fVar12 != *pfVar7) {
          *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_1 + 0x4fc);
          *(undefined1 *)(param_1 + 0x520) = 1;
          puVar8 = (undefined8 *)FUN_142c48330(param_1 + 0x488,&local_98);
          *(undefined8 *)(param_1 + 0x524) = *puVar8;
          *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(puVar8 + 1);
          puVar8 = (undefined8 *)
                   (**(code **)(**(longlong **)(param_1 + 0x470) + 0x308))
                             (*(longlong **)(param_1 + 0x470),&local_98);
          *(undefined8 *)(param_1 + 0x530) = *puVar8;
          *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(puVar8 + 1);
          FUN_142c76980(param_1);
        }
      }
    }
    else {
      fVar12 = *(float *)(param_1 + 0x4fc) - *(float *)(param_1 + 0x53c);
      local_b0 = fVar12 * *(float *)(param_1 + 0x538) + *(float *)(param_1 + 0x52c);
      local_b8 = CONCAT44(fVar12 * *(float *)(param_1 + 0x534) + *(float *)(param_1 + 0x528),
                          fVar12 * *(float *)(param_1 + 0x530) + *(float *)(param_1 + 0x524));
      FUN_142c4a760(param_1 + 0x488,0,&local_b8);
    }
    if (*(char *)(param_1 + 0x540) != '\0') {
      *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_1 + 0x51c);
    }
    plVar9 = (longlong *)FUN_142c6f130(param_1);
    if ((plVar9 != (longlong *)0x0) &&
       (lVar10 = (**(code **)(*plVar9 + 0x148))(plVar9), lVar10 != 0)) {
      fVar12 = param_2 * *(float *)(*(longlong *)(param_1 + 0x10) + 0x280) +
               *(float *)(param_1 + 0x4fc);
      if (0.0 <= fVar12) {
        fVar14 = *(float *)(param_1 + 0x51c);
        if (fVar12 <= *(float *)(param_1 + 0x51c)) {
          fVar14 = fVar12;
        }
      }
      else {
        fVar14 = 0.0;
      }
      *(float *)(param_1 + 0x4fc) = fVar14;
      cVar5 = FUN_1424ca840(param_1 + 0x500);
      if (cVar5 != '\0') {
        lVar10 = plVar9[0x2d];
        if (lVar10 == 0) {
          local_a8 = _DAT_1468b5d90;
          local_a0 = DAT_1468b5d98;
        }
        else {
          local_a8 = *(undefined8 *)(lVar10 + 0x220);
          local_a0 = *(float *)(lVar10 + 0x228);
        }
        local_b8 = local_a8;
        local_b0 = local_a0;
        FUN_1424be5e0(param_1 + 0x500,&local_98,*(undefined4 *)(param_1 + 0x4fc));
        pfVar7 = (float *)FUN_142c48330(param_1 + 0x488,local_88);
        local_a0 = (pfVar7[2] - *(float *)(param_1 + 0x4f4)) + local_90;
        local_a8 = CONCAT44((pfVar7[1] - *(float *)(param_1 + 0x4f0)) + local_98._4_4_,
                            (*pfVar7 - *(float *)(param_1 + 0x4ec)) + (float)local_98);
        FUN_14223c850(plVar9,&local_a8,0,0,in_stack_ffffffffffffff38 & 0xffffffffffffff00);
        if ((0.0 < param_2) && (lVar10 = *(longlong *)(param_1 + 0x468), lVar10 != 0)) {
          lVar4 = plVar9[0x2d];
          if (lVar4 == 0) {
            local_98 = _DAT_1468b5d90;
            local_90 = DAT_1468b5d98;
          }
          else {
            local_98 = *(undefined8 *)(lVar4 + 0x220);
            local_90 = *(float *)(lVar4 + 0x228);
          }
          local_a8 = local_98;
          param_2 = 1.0 / param_2;
          local_a0 = (local_90 - local_b0) * param_2;
          *(ulonglong *)(lVar10 + 0x18c) =
               CONCAT44(((float)((ulonglong)local_98 >> 0x20) - local_b8._4_4_) * param_2,
                        ((float)local_98 - (float)local_b8) * param_2);
          *(float *)(lVar10 + 0x194) = local_a0;
        }
      }
    }
    if ((((char)plVar6[0x25] == '\x03') && (0.0 < *(float *)(param_1 + 0x53c))) &&
       (lVar10 = (**(code **)(*plVar6 + 0x148))(plVar6), lVar10 != 0)) {
      lVar10 = plVar6[0x2d];
      local_res1c = 0;
      local_res18 = 1;
      if (lVar10 == 0) {
        local_98 = _DAT_1468b5d90;
        local_90 = DAT_1468b5d98;
      }
      else {
        local_98 = *(undefined8 *)(lVar10 + 0x220);
        local_90 = *(float *)(lVar10 + 0x228);
      }
      local_a8 = local_98;
      local_a0 = local_90;
      uVar11 = FUN_142c728d0(param_1);
      cVar5 = UWorld::OverlapAnyTestByObjectType
                        (uVar11,&local_a8,&DAT_1464aa810,&local_res18,param_1 + 0x550,&DAT_146aefe90
                        );
      if (cVar5 != '\0') {
        *(undefined1 *)(param_1 + 0x540) = 1;
        FUN_142c76980(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1406fc3a0 FUN_1406fc3a0 body=615 status=ok
// SIG undefined FUN_1406fc3a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406fc3a0(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float local_68;
  float fStack_64;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [48];
  
  plVar4 = (longlong *)FUN_142c6f130();
  if ((plVar4 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar4 + 0x148))(plVar4), lVar5 != 0)) {
    fVar7 = param_2 * *(float *)(*(longlong *)(param_1 + 0x10) + 0x280) +
            *(float *)(param_1 + 0x4fc);
    if (0.0 <= fVar7) {
      fVar8 = *(float *)(param_1 + 0x51c);
      if (fVar7 <= *(float *)(param_1 + 0x51c)) {
        fVar8 = fVar7;
      }
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0x4fc) = fVar8;
    cVar3 = FUN_1424ca840(param_1 + 0x500);
    if (cVar3 != '\0') {
      lVar5 = plVar4[0x2d];
      if (lVar5 == 0) {
        local_58 = _DAT_1468b5d90;
        local_50 = DAT_1468b5d98;
      }
      else {
        local_58 = *(undefined8 *)(lVar5 + 0x220);
        local_50 = *(float *)(lVar5 + 0x228);
      }
      fVar7 = local_50;
      uVar2 = local_58;
      FUN_1424be5e0(param_1 + 0x500,&local_48,*(undefined4 *)(param_1 + 0x4fc));
      pfVar6 = (float *)FUN_142c48330(param_1 + 0x488,local_38);
      local_50 = (pfVar6[2] - *(float *)(param_1 + 0x4f4)) + local_40;
      local_58 = CONCAT44((pfVar6[1] - *(float *)(param_1 + 0x4f0)) + local_48._4_4_,
                          (*pfVar6 - *(float *)(param_1 + 0x4ec)) + (float)local_48);
      FUN_14223c850(plVar4,&local_58,0,0,0);
      if ((0.0 < param_2) && (lVar5 = *(longlong *)(param_1 + 0x468), lVar5 != 0)) {
        lVar1 = plVar4[0x2d];
        if (lVar1 == 0) {
          local_48 = _DAT_1468b5d90;
          local_40 = DAT_1468b5d98;
        }
        else {
          local_48 = *(undefined8 *)(lVar1 + 0x220);
          local_40 = *(float *)(lVar1 + 0x228);
        }
        local_68 = (float)uVar2;
        param_2 = 1.0 / param_2;
        fStack_64 = (float)((ulonglong)uVar2 >> 0x20);
        *(ulonglong *)(lVar5 + 0x18c) =
             CONCAT44(((float)((ulonglong)local_48 >> 0x20) - fStack_64) * param_2,
                      ((float)local_48 - local_68) * param_2);
        *(float *)(lVar5 + 0x194) = (local_40 - fVar7) * param_2;
      }
    }
  }
  return;
}



// FUNCTION 1406fc610 FUN_1406fc610 body=1006 status=ok
// SIG undefined FUN_1406fc610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406fc610(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  undefined1 auStack_358 [32];
  int local_338;
  uint uStack_334;
  uint *puStack_330;
  int local_328;
  int iStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  int iStack_310;
  uint uStack_30c;
  uint *local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined **local_2e8 [5];
  byte local_2bf;
  byte local_2be;
  undefined1 *local_258;
  longlong *local_250;
  undefined1 local_248;
  undefined1 *local_238;
  undefined8 uStack_230;
  uint *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 local_210 [384];
  undefined8 local_90;
  undefined8 local_88;
  uint local_80 [2];
  uint *local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  puVar6 = (undefined1 *)CONCAT44(local_318._4_4_,(undefined4)local_318);
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  cVar2 = *(char *)((longlong)param_1 + 0x141);
  if (cVar2 == '\0') {
    local_90 = 0;
    local_88 = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_64 = 0;
    local_40 = 0;
    local_38 = 0;
    local_68 = 0xffffffff;
    FArchive::FArchive(local_2e8);
    local_2be = local_2be | 8;
    local_2e8[0] = &PTR_FUN_1440609f0;
    local_258 = local_210;
    local_248 = 0;
    local_250 = param_1;
    FArchive::SetIsPersistent(local_2e8,0);
    local_2bf = local_2bf & 0xdf;
    (**(code **)(*param_1 + 0xa8))(param_1,local_2e8);
    FArchive::~FArchive(local_2e8);
    plVar1 = param_1 + 0x26;
    *(undefined4 *)(param_1 + 0x27) = 0;
    if (*(int *)((longlong)param_1 + 0x13c) < (int)local_88 - local_64) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
    }
    iVar7 = (int)local_70;
    puStack_330 = local_80;
    local_338 = 0;
    uStack_334 = 1;
    iStack_324 = 0;
    iStack_320 = 0;
    if ((int)local_70 != 0) {
      puVar10 = local_80;
      if (local_78 != (uint *)0x0) {
        puVar10 = local_78;
      }
      uVar3 = *puVar10;
      iStack_320 = 0;
      local_338 = 0;
      while (uVar3 == 0) {
        iStack_320 = iStack_320 + 0x20;
        if ((int)((int)local_70 + -1 + ((int)local_70 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_338) {
          iStack_324 = (int)local_70;
          local_338 = local_338 + 1;
          goto LAB_1406fc7fb;
        }
        uVar3 = puVar10[(longlong)local_338 + 1];
        local_338 = local_338 + 1;
      }
      uStack_334 = uVar3 - 1 & uVar3 ^ uVar3;
      iVar8 = 0x1f;
      if (uStack_334 != 0) {
        for (; uStack_334 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_334 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_324 = (iStack_320 - iVar8) + 0x1f;
      if ((int)local_70 < iStack_324) {
        iStack_324 = (int)local_70;
      }
    }
LAB_1406fc7fb:
    uStack_300 = CONCAT44(iStack_324,0xffffffff);
    local_2f8 = CONCAT44(uStack_31c,iStack_320);
    local_238 = local_210;
    iStack_324 = (int)local_70;
    uStack_230 = CONCAT44(uStack_334,local_338);
    local_328 = -1 << ((byte)local_70 & 0x1f);
    iStack_310 = local_338;
    uStack_30c = uStack_334;
    local_308 = puStack_330;
    puStack_228 = puStack_330;
    uStack_220 = uStack_300;
    uStack_218 = local_2f8;
    local_318 = local_238;
    while( true ) {
      if ((uStack_300._4_4_ == iVar7) && (local_308 == local_80)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((bVar5) && (local_318 == local_210)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) break;
      lVar4 = *(longlong *)
               (((ulonglong)local_318 & (ulonglong)(*(ulonglong *)(local_318 + 0x180) != 0) - 1 |
                *(ulonglong *)(local_318 + 0x180)) + 8 + (longlong)uStack_300._4_4_ * 0x18);
      if (lVar4 != 0) {
        lVar9 = USafeZone::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          iVar8 = (int)param_1[0x27];
          *(int *)(param_1 + 0x27) = iVar8 + 1;
          if (*(int *)((longlong)param_1 + 0x13c) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
          }
          *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar4;
        }
      }
      uStack_300 = CONCAT44(uStack_300._4_4_,(uint)uStack_300 & ~uStack_30c);
      FUN_1406e9690();
    }
    local_38 = 0;
    if (local_40 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
    ::
    ~TSparseArray<TSetElement<TTuple<unsigned___int64,unsigned___int64>_>,TInlineSparseArrayAllocator<16,TSparseArrayAllocator<FDefaultAllocator,FDefaultAllocator>_>_>
              (local_210);
  }
  else {
    local_318 = (undefined1 *)CONCAT44(local_318._4_4_,(undefined4)local_318);
    if ((cVar2 != '\x01') && (local_318 = puVar6, cVar2 != '\x03')) goto LAB_1406fc9d8;
  }
  puVar6 = local_318;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    FArchive::FArchive(local_2e8);
    local_2be = local_2be | 8;
    local_2e8[0] = &PTR_FUN_144060540;
    local_248 = 1;
    local_250 = param_1;
    FArchive::SetIsPersistent(local_2e8,0);
    local_2bf = local_2bf & 0xdf;
    (**(code **)(*param_1 + 0xa8))(param_1,local_2e8);
    FArchive::~FArchive(local_2e8);
    puVar6 = local_318;
  }
LAB_1406fc9d8:
  local_318 = puVar6;
  (**(code **)(*param_1 + 0x398))(param_1);
  return;
}



// FUNCTION 1406fcac0 FUN_1406fcac0 body=280 status=ok
// SIG undefined FUN_1406fcac0(void)

void FUN_1406fcac0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xec);
  if (uVar1 == 0xffffffff) {
    uVar1 = (uint)*(byte *)(param_1 + 0xf98);
  }
  else {
    *(char *)(param_1 + 0xf98) = (char)uVar1;
  }
  switch((char)uVar1 + '\x01') {
  case '\x01':
    FUN_1406e8280(param_1);
  case '\x02':
    if ((byte)(*(char *)(param_1 + 0x45b) - 1U) < 2) {
      *(undefined1 *)(param_1 + 0x45b) = 0;
      *(float *)(param_1 + 0x45c) = *(float *)(param_1 + 0x460) + *(float *)(param_1 + 0x45c);
    }
  case '\x03':
    if (*(char *)(param_1 + 0x9d9) == '\0') {
      *(undefined1 *)(param_1 + 0x719) = *(undefined1 *)(param_1 + 0x9d2);
      *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(param_1 + 0x954);
      *(undefined1 *)(param_1 + 0x726) = *(undefined1 *)(param_1 + 0x9d1);
      *(undefined1 *)(param_1 + 0x9d9) = 1;
      if (*(char *)(param_1 + 0x9d3) == '\0') {
        *(undefined1 *)(param_1 + 0x710) = 0;
      }
      else if (*(float *)(param_1 + 0x9d4) <= 0.0) {
        *(undefined1 *)(param_1 + 0x710) = 1;
      }
      else {
        *(float *)(param_1 + 0x714) = *(float *)(param_1 + 0x9d4);
        *(undefined1 *)(param_1 + 0x718) = 1;
      }
    }
  case '\x04':
  case '\x05':
    *(undefined1 *)(param_1 + 0x949) = 0;
  case '\x06':
    FUN_14070b380(param_1 + 0x3d8);
  case '\a':
    FUN_14070b3d0(param_1 + 0x3d8);
  default:
    FUN_140722700(param_1);
    return;
  }
}



// FUNCTION 1406fcc60 FUN_1406fcc60 body=495 status=ok
// SIG undefined FUN_1406fcc60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406fcc60(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_78;
  undefined1 **ppuStack_70;
  undefined1 *local_68;
  undefined1 local_60 [32];
  undefined1 *local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar2 = *(uint *)(param_1 + 0xec);
  if (uVar2 == 0xffffffff) {
    uVar2 = (uint)*(byte *)(param_1 + 0x11b8);
  }
  else {
    *(char *)(param_1 + 0x11b8) = (char)uVar2;
  }
  if ((char)uVar2 == '\0') {
    plVar6 = *(longlong **)(param_1 + 0x1190);
    puVar3 = (undefined1 *)0x0;
    local_40 = (undefined1 *)0x0;
    local_38 = 0;
    local_34 = 0;
    puVar8 = (undefined1 *)((longlong)*(int *)(param_1 + 0x1198) & 0x1fffffffffffffff);
    if (plVar6 + *(int *)(param_1 + 0x1198) < plVar6) {
      puVar8 = puVar3;
    }
    puVar4 = puVar3;
    puVar5 = puVar3;
    puVar7 = puVar3;
    if (puVar8 != (undefined1 *)0x0) {
      do {
        if (*plVar6 != 0) {
          uVar1 = *(undefined8 *)(*plVar6 + 0x18);
          local_38 = (int)puVar7 + 1;
          if ((int)puVar3 < (int)local_38) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (local_60,puVar7);
            puVar4 = local_40;
          }
          puVar3 = local_60;
          if (puVar4 != (undefined1 *)0x0) {
            puVar3 = puVar4;
          }
          *(undefined8 *)(puVar3 + (longlong)(int)puVar7 * 8) = uVar1;
          puVar3 = (undefined1 *)(ulonglong)local_34;
          puVar7 = (undefined1 *)(ulonglong)local_38;
          puVar4 = local_40;
        }
        plVar6 = plVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar8);
    }
    local_68 = local_60;
    ppuStack_70 = &local_68;
    local_88 = 0;
    local_78 = &LAB_1406ddf30;
    FUN_1417a4830(*(undefined8 *)(param_1 + 0x20),&local_78,1,0);
    if (local_40 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  uVar2 = *(uint *)(param_1 + 0xec);
  if (uVar2 == 0xffffffff) {
    uVar2 = (uint)*(byte *)(param_1 + 0x171);
  }
  else {
    *(char *)(param_1 + 0x171) = (char)uVar2;
  }
  if ((char)uVar2 == '\0') {
    if (*(char *)(param_1 + 0x170) == '\0') {
      uVar9 = 0;
    }
    else {
      uVar9 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x8ec) = uVar9;
  }
  FUN_140722700(param_1);
  return;
}



// FUNCTION 1406fce70 FUN_1406fce70 body=717 status=ok
// SIG undefined FUN_1406fce70(void)

void FUN_1406fce70(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 local_88 [128];
  
  uVar6 = *(uint *)(param_1 + 0xec);
  if (uVar6 == 0xffffffff) {
    uVar6 = (uint)*(byte *)(param_1 + 0x1c11);
  }
  else {
    *(char *)(param_1 + 0x1c11) = (char)uVar6;
  }
  if ((char)uVar6 == '\0') {
    *(undefined8 *)(param_1 + 0x1740) = *(undefined8 *)(param_1 + 0x1738);
    *(undefined8 *)(param_1 + 0x1738) = 0;
    *(undefined1 *)(param_1 + 0x1778) = *(undefined1 *)(param_1 + 0x1b10);
    *(undefined1 *)(param_1 + 0x1779) = *(undefined1 *)(param_1 + 0x1b11);
    *(undefined1 *)(param_1 + 0x177a) = *(undefined1 *)(param_1 + 0x1b12);
    *(undefined1 *)(param_1 + 0x177b) = *(undefined1 *)(param_1 + 0x1b13);
    *(undefined8 *)(param_1 + 0x177c) = *(undefined8 *)(param_1 + 0x1b14);
    *(undefined8 *)(param_1 + 0x1788) = *(undefined8 *)(param_1 + 0x1b20);
    *(undefined8 *)(param_1 + 0x1790) = *(undefined8 *)(param_1 + 0x1b28);
    *(undefined8 *)(param_1 + 0x1798) = *(undefined8 *)(param_1 + 0x1b30);
    *(undefined8 *)(param_1 + 0x17a0) = *(undefined8 *)(param_1 + 0x1b38);
    *(undefined8 *)(param_1 + 0x17a8) = *(undefined8 *)(param_1 + 0x1b40);
    *(undefined8 *)(param_1 + 0x17b0) = *(undefined8 *)(param_1 + 0x1b48);
    *(undefined8 *)(param_1 + 0x17b8) = *(undefined8 *)(param_1 + 0x1b50);
    *(undefined8 *)(param_1 + 0x17c0) = *(undefined8 *)(param_1 + 7000);
    *(undefined8 *)(param_1 + 0x17c8) = *(undefined8 *)(param_1 + 0x1b60);
    *(undefined8 *)(param_1 + 0x17d0) = *(undefined8 *)(param_1 + 0x1b68);
    *(undefined8 *)(param_1 + 0x17d8) = *(undefined8 *)(param_1 + 0x1b70);
    *(undefined8 *)(param_1 + 0x17e0) = *(undefined8 *)(param_1 + 0x1b78);
    *(undefined4 *)(param_1 + 0x17e8) = *(undefined4 *)(param_1 + 0x1b80);
    *(undefined4 *)(param_1 + 0x17ec) = *(undefined4 *)(param_1 + 0x1b84);
    *(undefined4 *)(param_1 + 0x17f0) = *(undefined4 *)(param_1 + 0x1b88);
    *(undefined1 *)(param_1 + 0x18f8) = *(undefined1 *)(param_1 + 0x1b90);
    *(undefined1 *)(param_1 + 0x18f9) = *(undefined1 *)(param_1 + 0x1b91);
    *(undefined1 *)(param_1 + 0x18fa) = *(undefined1 *)(param_1 + 0x1b92);
    *(undefined1 *)(param_1 + 0x18fb) = *(undefined1 *)(param_1 + 0x1b93);
    *(undefined8 *)(param_1 + 0x18fc) = *(undefined8 *)(param_1 + 0x1b94);
    *(undefined8 *)(param_1 + 0x1908) = *(undefined8 *)(param_1 + 0x1ba0);
    *(undefined8 *)(param_1 + 0x1910) = *(undefined8 *)(param_1 + 0x1ba8);
    *(undefined8 *)(param_1 + 0x1918) = *(undefined8 *)(param_1 + 0x1bb0);
    *(undefined8 *)(param_1 + 0x1920) = *(undefined8 *)(param_1 + 0x1bb8);
    *(undefined8 *)(param_1 + 0x1928) = *(undefined8 *)(param_1 + 0x1bc0);
    *(undefined8 *)(param_1 + 0x1930) = *(undefined8 *)(param_1 + 0x1bc8);
    *(undefined8 *)(param_1 + 0x1938) = *(undefined8 *)(param_1 + 0x1bd0);
    *(undefined8 *)(param_1 + 0x1940) = *(undefined8 *)(param_1 + 0x1bd8);
    *(undefined8 *)(param_1 + 0x1948) = *(undefined8 *)(param_1 + 0x1be0);
    *(undefined4 *)(param_1 + 0x1950) = *(undefined4 *)(param_1 + 0x1be8);
    *(undefined4 *)(param_1 + 0x1954) = *(undefined4 *)(param_1 + 0x1bec);
    *(undefined4 *)(param_1 + 0x1958) = *(undefined4 *)(param_1 + 0x1bf0);
    *(undefined4 *)(param_1 + 0x195c) = *(undefined4 *)(param_1 + 0x1bf4);
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x1bf8);
    *(undefined4 *)(param_1 + 0x1968) = *(undefined4 *)(param_1 + 0x1c00);
    *(undefined4 *)(param_1 + 0x196c) = *(undefined4 *)(param_1 + 0x1c04);
    *(undefined4 *)(param_1 + 0x1970) = *(undefined4 *)(param_1 + 0x1c08);
    puVar7 = (undefined1 *)FUN_142de2f30(local_88,*(undefined1 *)(param_1 + 0x1c10),1);
    *(undefined1 *)(param_1 + 0x17f8) = *puVar7;
    *(undefined1 *)(param_1 + 0x17f9) = puVar7[1];
    *(undefined1 *)(param_1 + 0x17fa) = puVar7[2];
    *(undefined1 *)(param_1 + 0x17fb) = puVar7[3];
    *(undefined8 *)(param_1 + 0x17fc) = *(undefined8 *)(puVar7 + 4);
    *(undefined8 *)(param_1 + 0x1808) = *(undefined8 *)(puVar7 + 0x10);
    *(undefined8 *)(param_1 + 0x1810) = *(undefined8 *)(puVar7 + 0x18);
    uVar4 = *(undefined8 *)(puVar7 + 0x28);
    *(undefined8 *)(param_1 + 0x1818) = *(undefined8 *)(puVar7 + 0x20);
    *(undefined8 *)(param_1 + 0x1820) = uVar4;
    uVar4 = *(undefined8 *)(puVar7 + 0x38);
    *(undefined8 *)(param_1 + 0x1828) = *(undefined8 *)(puVar7 + 0x30);
    *(undefined8 *)(param_1 + 0x1830) = uVar4;
    uVar4 = *(undefined8 *)(puVar7 + 0x48);
    *(undefined8 *)(param_1 + 0x1838) = *(undefined8 *)(puVar7 + 0x40);
    *(undefined8 *)(param_1 + 0x1840) = uVar4;
    *(undefined8 *)(param_1 + 0x1848) = *(undefined8 *)(puVar7 + 0x50);
    uVar1 = *(undefined4 *)(puVar7 + 0x5c);
    uVar2 = *(undefined4 *)(puVar7 + 0x60);
    uVar3 = *(undefined4 *)(puVar7 + 100);
    *(undefined4 *)(param_1 + 0x1850) = *(undefined4 *)(puVar7 + 0x58);
    *(undefined4 *)(param_1 + 0x1854) = uVar1;
    *(undefined4 *)(param_1 + 0x1858) = uVar2;
    *(undefined4 *)(param_1 + 0x185c) = uVar3;
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(puVar7 + 0x68);
    *(undefined4 *)(param_1 + 0x1868) = *(undefined4 *)(puVar7 + 0x70);
    *(undefined4 *)(param_1 + 0x186c) = *(undefined4 *)(puVar7 + 0x74);
    *(undefined4 *)(param_1 + 0x1870) = *(undefined4 *)(puVar7 + 0x78);
  }
  if (*(int *)(param_1 + 0xec) == -1) {
    cVar5 = *(char *)(param_1 + 0x1731);
  }
  else {
    cVar5 = (char)*(int *)(param_1 + 0xec) + -2;
    *(char *)(param_1 + 0x1731) = cVar5;
  }
  if (cVar5 == '\0') {
    if ((byte)(*(char *)(param_1 + 0x45b) - 1U) < 2) {
      *(undefined1 *)(param_1 + 0x45b) = 0;
      *(float *)(param_1 + 0x45c) = *(float *)(param_1 + 0x460) + *(float *)(param_1 + 0x45c);
    }
  }
  else if (cVar5 != '\x01') {
    FUN_1406fcac0();
    return;
  }
  if (*(byte *)(param_1 + 0xfdb) < 3) {
    *(bool *)(param_1 + 0x11d8) = 1.0 < *(float *)(param_1 + 0xfdc) - *(float *)(param_1 + 0xfe0);
    FUN_1406fcac0();
    return;
  }
  *(undefined1 *)(param_1 + 0x11d8) = 1;
  FUN_1406fcac0();
  return;
}



// FUNCTION 1406fd140 FUN_1406fd140 body=265 status=ok
// SIG undefined FUN_1406fd140(void)

void FUN_1406fd140(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 local_res8 [32];
  undefined1 *local_18;
  undefined1 *puStack_10;
  
  uVar2 = *(uint *)(param_1 + 0xec);
  if (uVar2 == 0xffffffff) {
    uVar2 = (uint)*(byte *)(param_1 + 0x1b20);
  }
  else {
    *(char *)(param_1 + 0x1b20) = (char)uVar2;
  }
  if ((char)uVar2 == '\0') {
    puStack_10 = local_res8;
    local_18 = &LAB_1406ddf20;
    FUN_1417a4830(*(undefined8 *)(param_1 + 0x20),&local_18,1,0,0);
  }
  if (*(int *)(param_1 + 0xec) == -1) {
    cVar1 = *(char *)(param_1 + 0x1731);
  }
  else {
    cVar1 = (char)*(int *)(param_1 + 0xec) + -2;
    *(char *)(param_1 + 0x1731) = cVar1;
  }
  if (cVar1 == '\0') {
    if ((byte)(*(char *)(param_1 + 0x45b) - 1U) < 2) {
      *(undefined1 *)(param_1 + 0x45b) = 0;
      *(float *)(param_1 + 0x45c) = *(float *)(param_1 + 0x460) + *(float *)(param_1 + 0x45c);
    }
  }
  else if (cVar1 != '\x01') {
    FUN_1406fcac0();
    return;
  }
  if (*(byte *)(param_1 + 0xfdb) < 3) {
    *(bool *)(param_1 + 0x11d8) = 1.0 < *(float *)(param_1 + 0xfdc) - *(float *)(param_1 + 0xfe0);
    FUN_1406fcac0();
    return;
  }
  *(undefined1 *)(param_1 + 0x11d8) = 1;
  FUN_1406fcac0();
  return;
}



// FUNCTION 1406fd230 FUN_1406fd230 body=156 status=ok
// SIG undefined FUN_1406fd230(void)

void FUN_1406fd230(longlong param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xec);
  if (uVar2 == 0xffffffff) {
    uVar2 = (uint)*(byte *)(param_1 + 0x11b8);
  }
  else {
    *(char *)(param_1 + 0x11b8) = (char)uVar2;
  }
  cVar1 = (char)uVar2;
  if ((cVar1 == '\0') || (cVar1 == '\x01')) {
    FUN_1406da240(param_1 + 0x200,param_1 + 0x1100);
  }
  else if (cVar1 != '\x02') {
    if (cVar1 != '\x03') {
      FUN_140722700(param_1);
      return;
    }
    goto LAB_1406fd29f;
  }
  FUN_1406da240(param_1 + 0x2c0,param_1 + 0x200);
LAB_1406fd29f:
  *(undefined1 *)(param_1 + 0x1090) = *(undefined1 *)(param_1 + 0x2b8);
  FUN_1406d91a0(param_1 + 0xcf0,param_1 + 0x2c0);
  FUN_140722700(param_1);
  return;
}



// FUNCTION 1406fd2d0 FUN_1406fd2d0 body=165 status=ok
// SIG undefined FUN_1406fd2d0(void)

void FUN_1406fd2d0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xec) == -1) {
    cVar1 = *(char *)(param_1 + 0x13f9);
  }
  else {
    cVar1 = (char)*(int *)(param_1 + 0xec) + -2;
    *(char *)(param_1 + 0x13f9) = cVar1;
  }
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 4000) == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x12f4) = uVar2;
  }
  else if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      FUN_1406fcac0(param_1);
      return;
    }
    goto LAB_1406fd33c;
  }
  FUN_1406e8280(param_1);
LAB_1406fd33c:
  if ((byte)(*(char *)(param_1 + 0x45b) - 1U) < 2) {
    *(undefined1 *)(param_1 + 0x45b) = 0;
    *(float *)(param_1 + 0x45c) = *(float *)(param_1 + 0x460) + *(float *)(param_1 + 0x45c);
  }
  FUN_1406fcac0(param_1);
  return;
}



// FUNCTION 1406fd380 FUN_1406fd380 body=396 status=ok
// SIG undefined FUN_1406fd380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1406fd380(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  undefined4 local_180;
  undefined4 *local_178;
  undefined1 *local_170;
  undefined *local_168;
  undefined1 local_158 [4];
  float local_154;
  float local_150 [2];
  undefined4 local_148;
  float local_144;
  float local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [12];
  undefined4 local_11c;
  undefined1 local_98 [72];
  longlong local_50;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar2 = FUN_1406ef970();
  if ((char)uVar2 != '\0') {
    puVar3 = (undefined8 *)FName::FName(local_138,L"FNavJumpParams",1);
    local_188 = (undefined4 *)0x0;
    FUN_1422ffb20(local_98,*puVar3,local_158,0);
    FCollisionQueryParams::AddIgnoredActor(local_98,*param_1);
    (**(code **)(*(longlong *)*param_1 + 0x578))((longlong *)*param_1,&local_154,local_150);
    _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
    local_11c = 0x3f800000;
    local_144 = *(float *)((longlong)param_1 + 0x2c) * local_154;
    local_148 = 3;
    local_140 = *(float *)((longlong)param_1 + 0x2c) * local_150[0];
    uVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    local_168 = &DAT_146aefe68;
    local_170 = local_98;
    local_178 = &local_148;
    local_180 = 3;
    local_188 = &DAT_1464aa810;
    bVar1 = FUN_1424d60f0(param_2,local_128,uVar4,*(undefined4 *)(param_1 + 6));
    if (local_30 != 0) {
      FMemory::Free();
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
    uVar2 = (ulonglong)bVar1;
  }
  return uVar2;
}



// FUNCTION 1406fd510 FUN_1406fd510 body=292 status=ok
// SIG undefined FUN_1406fd510(void)

ulonglong FUN_1406fd510(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  uVar2 = FUN_1406ef970();
  if ((char)uVar2 != '\0') {
    plVar1 = (longlong *)*param_1;
    uVar3 = FUN_142fc0410();
    lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
    uVar2 = 0;
    if (lVar4 != 0) {
      FUN_142f89a30(&local_a8);
      uVar3 = (**(code **)(*(longlong *)*param_1 + 0x148))();
      local_38 = FUN_142f9cfb0(uVar3,0);
      puVar5 = (undefined8 *)FUN_1424be5e0(param_2,local_28,*(undefined4 *)(param_2 + 0x1c));
      local_a8 = *puVar5;
      local_98 = *(undefined4 *)(lVar4 + 0x27b8);
      fStack_94 = *(float *)(lVar4 + 0x27bc);
      uStack_90 = *(undefined4 *)(lVar4 + 0x27c0);
      uStack_8c = *(undefined4 *)(lVar4 + 0x27c4);
      local_88 = *(undefined8 *)(lVar4 + 0x27c8);
      uStack_80 = *(undefined8 *)(lVar4 + 0x27d0);
      local_78 = *(undefined8 *)(lVar4 + 0x27d8);
      uStack_70 = *(undefined8 *)(lVar4 + 0x27e0);
      local_68 = *(undefined8 *)(lVar4 + 0x27e8);
      uStack_60 = *(undefined8 *)(lVar4 + 0x27f0);
      local_58 = *(undefined4 *)(lVar4 + 0x27f8);
      uStack_54 = *(undefined4 *)(lVar4 + 0x27fc);
      uStack_50 = *(undefined4 *)(lVar4 + 0x2800);
      uStack_4c = *(undefined4 *)(lVar4 + 0x2804);
      local_48 = *(undefined8 *)(lVar4 + 0x2808);
      uStack_40 = *(undefined8 *)(lVar4 + 0x2810);
      local_a0 = *(float *)(puVar5 + 1) - fStack_94;
      uVar2 = FUN_142fae610(&local_a8,local_18,0);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1406fd640 FUN_1406fd640 body=929 status=ok
// SIG undefined FUN_1406fd640(void)

ulonglong FUN_1406fd640(longlong param_1,ulonglong *param_2,undefined8 param_3,float param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c [12];
  undefined1 local_90 [24];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  lVar1 = *(longlong *)(*param_2 + 0x488);
  if ((lVar1 == 0) || (*(longlong *)(param_1 + 0x100) == 0)) {
    return *param_2 & 0xffffffffffffff00;
  }
  lVar5 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  lVar1 = *(longlong *)(lVar1 + 0x168);
  if (lVar1 == 0) {
    uVar18 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_b0 = DAT_1468b5d98;
  }
  else {
    uVar18 = *(undefined8 *)(lVar1 + 0x220);
    local_b0 = *(float *)(lVar1 + 0x228);
  }
  fVar13 = *(float *)(lVar5 + 0x4c) - (float)uVar18;
  fVar15 = *(float *)(lVar5 + 0x50) - (float)((ulonglong)uVar18 >> 0x20);
  fVar17 = *(float *)(lVar5 + 0x54) - local_b0;
  fVar8 = fVar15 * fVar15 + fVar13 * fVar13;
  if (fVar8 == 1.0) {
    fVar14 = fVar13;
    fVar16 = fVar15;
    if (fVar17 == 0.0) goto LAB_1406fd7e0;
  }
  else {
    fVar14 = DAT_1468b5d90;
    fVar16 = DAT_1468b5d94;
    fVar17 = DAT_1468b5d98;
    if (fVar8 < 1e-08) goto LAB_1406fd7e0;
    auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar17 = auVar10._0_4_;
    fVar17 = fVar17 + fVar17 * (0.5 - fVar8 * 0.5 * fVar17 * fVar17);
    param_4 = fVar8 * 0.5 * fVar17 * fVar17;
    fVar17 = fVar17 + fVar17 * (0.5 - param_4);
    fVar13 = fVar13 * fVar17;
    fVar15 = fVar15 * fVar17;
  }
  fVar14 = fVar13;
  fVar16 = fVar15;
  fVar17 = 0.0;
LAB_1406fd7e0:
  if (lVar1 == 0) {
    uVar6 = (undefined4)DAT_1468b5da0;
    uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_a0 = DAT_1468b5da8;
  }
  else {
    local_78 = *(float *)(lVar1 + 0x210);
    fStack_74 = *(float *)(lVar1 + 0x214);
    fStack_70 = *(float *)(lVar1 + 0x218);
    fStack_6c = *(float *)(lVar1 + 0x21c);
    auVar10._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_74);
    auVar10._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_78);
    auVar10._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_70);
    auVar10._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_6c);
    iVar2 = movmskps(local_b0,auVar10);
    if (iVar2 != 0) {
      *(float *)(lVar1 + 0x250) = local_78;
      *(float *)(lVar1 + 0x254) = fStack_74;
      *(float *)(lVar1 + 600) = fStack_70;
      *(float *)(lVar1 + 0x25c) = fStack_6c;
      puVar3 = (undefined8 *)FQuat::Rotator(&local_78,local_9c,lVar5,param_4,uVar18);
      *(undefined8 *)(lVar1 + 0x260) = *puVar3;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar3 + 1);
    }
    uVar6 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    local_a0 = *(undefined4 *)(lVar1 + 0x268);
  }
  local_a8 = CONCAT44(uVar7,uVar6);
  pfVar4 = (float *)FRotator::Vector(&local_a8,local_90);
  fVar8 = pfVar4[1];
  fVar13 = *pfVar4;
  fVar15 = fVar13 * fVar13 + fVar8 * fVar8;
  if (fVar15 == 1.0) {
    fVar9 = fVar8;
    fVar11 = fVar13;
    fVar12 = 0.0;
    if (pfVar4[2] == 0.0) {
      fVar9 = (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20);
      fVar11 = (float)*(undefined8 *)pfVar4;
      fVar12 = pfVar4[2];
    }
  }
  else {
    fVar9 = DAT_1468b5d94;
    fVar11 = DAT_1468b5d90;
    fVar12 = DAT_1468b5d98;
    if (1e-08 <= fVar15) {
      auVar10 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
      fVar9 = auVar10._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar15 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar15 * 0.5 * fVar9 * fVar9);
      fVar11 = fVar13 * fVar9;
      fVar9 = fVar8 * fVar9;
      fVar12 = 0.0;
    }
  }
  fVar8 = fVar11 * fVar14 + fVar9 * fVar16 + fVar12 * fVar17;
  fVar17 = -1.0;
  if ((-1.0 <= fVar8) && (fVar17 = fVar8, 1.0 <= fVar8)) {
    fVar17 = 1.0;
  }
  fVar17 = _guard_xfg_dispatch_icall_nop(fVar17);
  pfVar4 = (float *)(*(longlong *)(param_1 + 0x100) + 0x70);
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x100) >> 8),
                  fVar17 * 57.295776 < *pfVar4 || fVar17 * 57.295776 == *pfVar4);
}



// FUNCTION 1406fd9f0 FUN_1406fd9f0 body=192 status=ok
// SIG undefined FUN_1406fd9f0(void)

ulonglong FUN_1406fd9f0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar1 = *(uint *)(param_1 + 0x11);
  plVar4 = (longlong *)param_1[0x10];
  if ((longlong *)param_1[0x10] == (longlong *)0x0) {
    plVar4 = param_1;
  }
  if (plVar4 != plVar4 + (int)uVar1) {
    plVar2 = plVar4;
    do {
      if (*plVar2 == *param_2) {
        uVar3 = (longlong)plVar2 - (longlong)plVar4 >> 3;
        if ((int)uVar3 != -1) {
          return uVar3;
        }
        break;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar4 + (int)uVar1);
  }
  *(uint *)(param_1 + 0x11) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x8c) < (int)(uVar1 + 1)) {
    TArray<FName,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_1,uVar1);
  }
  plVar4 = (longlong *)param_1[0x10];
  if ((longlong *)param_1[0x10] == (longlong *)0x0) {
    plVar4 = param_1;
  }
  plVar4[(int)uVar1] = *param_2;
  return (ulonglong)uVar1;
}



// FUNCTION 1406fdab0 FUN_1406fdab0 body=179 status=ok
// SIG undefined FUN_1406fdab0(void)

ulonglong FUN_1406fdab0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar1 = *(uint *)(param_1 + 5);
  plVar4 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar4 = param_1;
  }
  if (plVar4 != plVar4 + (int)uVar1) {
    plVar2 = plVar4;
    do {
      if (*plVar2 == *param_2) {
        uVar3 = (longlong)plVar2 - (longlong)plVar4 >> 3;
        if ((int)uVar3 != -1) {
          return uVar3;
        }
        break;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar4 + (int)uVar1);
  }
  *(uint *)(param_1 + 5) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)(uVar1 + 1)) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (param_1,uVar1);
  }
  plVar4 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar4 = param_1;
  }
  plVar4[(int)uVar1] = *param_2;
  return (ulonglong)uVar1;
}



// FUNCTION 1406fdb70 FUN_1406fdb70 body=925 status=ok
// SIG undefined FUN_1406fdb70(void)

undefined8 FUN_1406fdb70(float param_1,undefined4 *param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 local_res10 [4];
  char local_res20;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148 [2];
  undefined4 *local_138;
  undefined4 *local_130;
  longlong local_128;
  undefined4 *local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [12];
  undefined1 local_bc [132];
  
  local_res20 = param_4;
  cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_2,param_2 + 2);
  if (cVar5 != '\0') {
    return 0;
  }
  cVar5 = FUN_140761890(param_2);
  if (cVar5 == '\0') {
    FUN_140755570();
    return 1;
  }
  local_198 = *param_2;
  local_194 = param_2[1];
  cVar5 = FWeakObjectPtr::IsValid(param_2);
  if (cVar5 != '\0') {
    while (cVar5 = FWeakObjectPtr::IsValid(param_2 + 2), cVar5 != '\0') {
      fVar15 = (float)param_2[0x16] + param_1;
      if (((float)param_2[0x16] <= (float)param_2[0x15] - param_1) &&
         (fVar15 <= (float)param_2[0x15] + (float)param_2[0x14])) {
LAB_1406fdcfe:
        lVar10 = FWeakObjectPtr::Get(param_2 + 2);
        fVar13 = *(float *)(lVar10 + 0x704) + (float)param_2[0x15];
        if (fVar15 <= fVar13) {
          fVar13 = fVar15;
        }
        param_2[0x16] = fVar13;
        lVar1 = *param_3;
        lVar2 = param_3[1];
        lVar12 = *(longlong *)(lVar1 + 0xd8) + *(longlong *)(lVar2 + 8);
        lVar10 = lVar12 + 0x138;
        local_1a8 = FUN_140765330(lVar10);
        FUN_140752400(lVar10,local_d8);
        local_1a4 = *(undefined4 *)(lVar12 + 0x204);
        uVar6 = FUN_140757de0(lVar12 + 0x218,local_c8);
        local_1a0 = FUN_140757d40(lVar12 + 0x148,uVar6);
        local_138 = &local_1a8;
        local_130 = &local_1a4;
        local_19c = 0;
        local_128 = lVar1 + 0x124;
        local_res10[0] = 0;
        local_120 = &local_1a0;
        local_118 = lVar1 + 0x13c;
        local_f8 = &local_19c;
        local_f0 = local_res10;
        local_110 = lVar10;
        local_108 = lVar2;
        local_100 = lVar12;
        FUN_140701ae0(&local_138,1);
        FUN_140701ae0(&local_138,0);
        uVar14 = local_res10[0];
        FUN_140752400(param_2,&local_190);
        FUN_140757d80(param_2,&local_180,uVar14);
        uVar14 = FUN_140753140(param_2);
        local_168 = local_180;
        local_160 = local_178;
        cVar5 = FUN_140707b20(*param_3,param_3[1],&local_168,local_148,uVar14);
        if (cVar5 == '\0') {
          local_158 = local_190;
          local_150 = local_188;
          cVar5 = FUN_140707b20(*param_3,param_3[1],&local_158,local_148,uVar14);
          if (cVar5 == '\0') {
            if ((local_res20 != '\0') &&
               (cVar5 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                                  (&local_198,param_2), cVar5 != '\0')) {
              return 0;
            }
            goto LAB_1406fdead;
          }
          puVar11 = &local_190;
        }
        else {
          puVar11 = local_148;
        }
        FUN_14076b860(param_2,puVar11);
        break;
      }
      cVar5 = FWeakObjectPtr::IsValid(param_2);
      if (cVar5 != '\0') {
        uVar6 = FWeakObjectPtr::Get(param_2);
        uVar7 = FWeakObjectPtr::Get(param_2 + 2);
        uVar6 = FUN_140711be0(*param_3,param_3[1],uVar6,uVar7);
        uVar8 = FUN_140757de0(param_2,local_e8);
        puVar9 = (undefined4 *)FUN_140756220(local_bc,uVar7,uVar6,uVar8);
        *param_2 = *puVar9;
        param_2[1] = puVar9[1];
        param_2[2] = puVar9[2];
        param_2[3] = puVar9[3];
        uVar6 = *(undefined8 *)(puVar9 + 6);
        *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar9 + 4);
        *(undefined8 *)(param_2 + 6) = uVar6;
        uVar6 = *(undefined8 *)(puVar9 + 10);
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar9 + 8);
        *(undefined8 *)(param_2 + 10) = uVar6;
        uVar6 = *(undefined8 *)(puVar9 + 0xe);
        *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(puVar9 + 0xc);
        *(undefined8 *)(param_2 + 0xe) = uVar6;
        uVar14 = puVar9[0x11];
        uVar3 = puVar9[0x12];
        uVar4 = puVar9[0x13];
        param_2[0x10] = puVar9[0x10];
        param_2[0x11] = uVar14;
        param_2[0x12] = uVar3;
        param_2[0x13] = uVar4;
        *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(puVar9 + 0x14);
        param_2[0x16] = puVar9[0x16];
        param_2[0x17] = puVar9[0x17];
        cVar5 = FSkeletonRemapping::IsValid(param_2);
        if (cVar5 != '\0') {
          fVar15 = param_1 + (float)param_2[0x16];
          goto LAB_1406fdcfe;
        }
      }
LAB_1406fdead:
      cVar5 = FWeakObjectPtr::IsValid(param_2);
      if (cVar5 == '\0') {
        uVar6 = FWeakObjectPtr::IsValid(param_2 + 2);
        return uVar6;
      }
    }
  }
  uVar6 = FWeakObjectPtr::IsValid(param_2 + 2);
  return uVar6;
}



// FUNCTION 1406fdf10 FUN_1406fdf10 body=948 status=ok
// SIG undefined FUN_1406fdf10(void)

undefined8 FUN_1406fdf10(float param_1,undefined4 *param_2,longlong *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  ulonglong local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  ulonglong local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138 [3];
  undefined4 local_120;
  undefined4 local_110;
  undefined1 local_108 [12];
  undefined1 local_fc [212];
  
  cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_2,param_2 + 2);
  if (cVar1 == '\0') {
    cVar1 = FUN_140761890(param_2);
    if (cVar1 == '\0') {
      FUN_140755570();
      uVar3 = 1;
    }
    else {
      local_res10 = *param_2;
      local_res14 = param_2[1];
      cVar1 = FWeakObjectPtr::IsValid(param_2);
      if (cVar1 == '\0') {
LAB_1406fe278:
        uVar3 = FWeakObjectPtr::IsValid(param_2 + 2);
      }
      else {
        do {
          cVar1 = FWeakObjectPtr::IsValid(param_2 + 2);
          if (cVar1 == '\0') goto LAB_1406fe278;
          fVar13 = (float)param_2[0x16] + param_1;
          if (((float)param_2[0x15] - param_1 < (float)param_2[0x16]) ||
             ((float)param_2[0x15] + (float)param_2[0x14] < fVar13)) {
            cVar1 = FWeakObjectPtr::IsValid(param_2);
            if (cVar1 != '\0') {
              uVar3 = FWeakObjectPtr::Get(param_2);
              uVar4 = FWeakObjectPtr::Get(param_2 + 2);
              uVar3 = FUN_14076ad50(uVar4,uVar3);
              uVar5 = FUN_140757de0(param_2,local_108);
              puVar6 = (undefined4 *)FUN_140756220(local_fc,uVar4,uVar3,uVar5);
              *param_2 = *puVar6;
              param_2[1] = puVar6[1];
              param_2[2] = puVar6[2];
              param_2[3] = puVar6[3];
              uVar3 = *(undefined8 *)(puVar6 + 6);
              *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar6 + 4);
              *(undefined8 *)(param_2 + 6) = uVar3;
              uVar3 = *(undefined8 *)(puVar6 + 10);
              *(undefined8 *)(param_2 + 8) = *(undefined8 *)(puVar6 + 8);
              *(undefined8 *)(param_2 + 10) = uVar3;
              uVar3 = *(undefined8 *)(puVar6 + 0xe);
              *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(puVar6 + 0xc);
              *(undefined8 *)(param_2 + 0xe) = uVar3;
              uVar3 = *(undefined8 *)(puVar6 + 0x12);
              *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(puVar6 + 0x10);
              *(undefined8 *)(param_2 + 0x12) = uVar3;
              *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(puVar6 + 0x14);
              param_2[0x16] = puVar6[0x16];
              param_2[0x17] = puVar6[0x17];
              cVar1 = FSkeletonRemapping::IsValid(param_2);
              if (cVar1 != '\0') {
                fVar13 = param_1 + (float)param_2[0x16];
                goto LAB_1406fe0c7;
              }
            }
          }
          else {
LAB_1406fe0c7:
            lVar7 = FWeakObjectPtr::Get(param_2 + 2);
            fVar10 = *(float *)(lVar7 + 0x704) + (float)param_2[0x15];
            if (fVar13 <= fVar10) {
              fVar10 = fVar13;
            }
            param_2[0x16] = fVar10;
            lVar7 = *param_3;
            lVar9 = *(longlong *)(param_3[1] + 8) + *(longlong *)(lVar7 + 0xd8);
            fVar10 = (float)FUN_140765330(lVar9 + 0x50);
            iVar2 = rand();
            fVar12 = ((float)iVar2 * 6.103702e-05 - 1.0) * *(float *)(lVar7 + 0x114) +
                     *(float *)(lVar9 + 0xac);
            fVar13 = -fVar10;
            if ((-fVar10 <= fVar12) && (fVar13 = fVar12, fVar10 <= fVar12)) {
              fVar13 = fVar10;
            }
            FUN_140752400(param_2,&local_198);
            FUN_140757d80(param_2,&local_188,fVar13);
            uVar11 = FUN_140753140(param_2);
            local_160 = local_180;
            local_168 = local_188;
            lVar7 = *(longlong *)(*(longlong *)param_3[1] + 0x628);
            if (lVar7 != 0) {
              local_178 = (ulonglong)*(uint *)(lVar7 + 0x6e8);
              local_170 = uVar11;
              local_120 = uVar11;
              cVar1 = FUN_142f95a50(lVar7 + 0x9e8,&local_168,local_138,&local_178);
              if (cVar1 == '\0') goto LAB_1406fe1cf;
              puVar8 = local_138;
LAB_1406fe270:
              FUN_14076b860(param_2,puVar8);
              goto LAB_1406fe278;
            }
LAB_1406fe1cf:
            local_140 = local_190;
            local_148 = local_198;
            lVar7 = *(longlong *)(*(longlong *)param_3[1] + 0x628);
            if (lVar7 != 0) {
              local_158 = (ulonglong)*(uint *)(lVar7 + 0x6e8);
              local_150 = uVar11;
              local_110 = uVar11;
              cVar1 = FUN_142f95a50(lVar7 + 0x9e8,&local_148,local_138,&local_158);
              if (cVar1 != '\0') {
                puVar8 = &local_198;
                goto LAB_1406fe270;
              }
            }
            if ((param_4 != '\0') &&
               (cVar1 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                                  (&local_res10,param_2), cVar1 != '\0')) goto LAB_1406fe283;
          }
          cVar1 = FWeakObjectPtr::IsValid(param_2);
        } while (cVar1 != '\0');
        uVar3 = FWeakObjectPtr::IsValid(param_2 + 2);
      }
    }
  }
  else {
LAB_1406fe283:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1406fe2d0 FUN_1406fe2d0 body=176 status=ok
// SIG undefined FUN_1406fe2d0(void)

undefined8 *
FUN_1406fe2d0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar9 = *(undefined8 *)(param_4 + 2);
  uVar3 = *(undefined8 *)(param_4 + 4);
  puVar8 = (undefined8 *)operator_new(0x40,param_1);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &PTR_FUN_144060920;
    FWeakObjectPtr::operator=(puVar8 + 1,param_2);
    *(undefined4 *)(puVar8 + 2) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0x14) = uVar5;
    *(undefined4 *)(puVar8 + 3) = uVar6;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar7;
    *(undefined4 *)(puVar8 + 4) = uVar1;
    *(undefined4 *)((longlong)puVar8 + 0x24) = uVar2;
    puVar8[5] = uVar9;
    puVar8[6] = uVar3;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[7] = uVar9;
  }
  return param_1;
}



// FUNCTION 1406fe380 FUN_1406fe380 body=397 status=ok
// SIG undefined FUN_1406fe380(void)

int FUN_1406fe380(char *param_1,char *param_2)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  byte bVar11;
  
  iVar1 = *(int *)(param_1 + 0x58);
  lVar4 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar10 = 0;
  pcVar9 = *(char **)(param_1 + 0x50);
  if (*(char **)(param_1 + 0x50) == (char *)0x0) {
    pcVar9 = param_1;
  }
  if ((pcVar9[1] == '\0') || (*pcVar9 != *param_2)) {
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
  lVar5 = 0;
  iVar6 = 0;
  do {
    lVar5 = lVar5 + 1;
    iVar7 = iVar6 + 1;
    if (lVar5 < lVar4) {
      pcVar9 = *(char **)(param_1 + 0x50);
      if (*(char **)(param_1 + 0x50) == (char *)0x0) {
        pcVar9 = param_1;
      }
      lVar3 = lVar5 * 0x28;
      do {
        if ((pcVar9[lVar3 + 1] == '\0') || (pcVar9[lVar3] != *param_2)) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        if (bVar11 != bVar2) break;
        iVar7 = iVar7 + 1;
        lVar5 = lVar5 + 1;
        lVar3 = lVar3 + 0x28;
      } while (lVar5 < lVar4);
    }
    iVar8 = iVar7 - iVar6;
    if (bVar11 == 0) {
      pcVar9 = *(char **)(param_1 + 0x50);
      if (*(char **)(param_1 + 0x50) == (char *)0x0) {
        pcVar9 = param_1;
      }
      if (iVar8 != 0) {
        pcVar9 = pcVar9 + (longlong)iVar6 * 0x28 + 0x10;
        do {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(pcVar9);
          pcVar9 = pcVar9 + 0x28;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      if (iVar10 != iVar6) {
        pcVar9 = *(char **)(param_1 + 0x50);
        if (*(char **)(param_1 + 0x50) == (char *)0x0) {
          pcVar9 = param_1;
        }
        _guard_xfg_dispatch_icall_nop
                  (pcVar9 + (longlong)iVar10 * 0x28,pcVar9 + (longlong)iVar6 * 0x28,
                   (longlong)iVar8 * 0x28);
      }
      iVar10 = iVar10 + iVar8;
    }
    bVar11 = bVar11 ^ 1;
    iVar6 = iVar7;
    if (lVar4 <= lVar5) {
      *(int *)(param_1 + 0x58) = iVar10;
      return iVar1 - iVar10;
    }
  } while( true );
}



// FUNCTION 1406fe510 FUN_1406fe510 body=134 status=ok
// SIG undefined FUN_1406fe510(void)

longlong FUN_1406fe510(longlong param_1)

{
  FUN_142de2d20(param_1,0x42c80000,0);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x40;
  FUN_142de2d20(param_1 + 0x88,0,0);
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(byte *)(param_1 + 0x89) = *(byte *)(param_1 + 0x89) | 0x40;
  FUN_142de2d20(param_1 + 0x110,0,0);
  *(undefined1 *)(param_1 + 400) = 0;
  *(byte *)(param_1 + 0x111) = *(byte *)(param_1 + 0x111) | 0x40;
  *(undefined2 *)(param_1 + 0x198) = 1;
  *(undefined1 *)(param_1 + 0x19a) = 0;
  return param_1;
}



// FUNCTION 1406fe5a0 FUN_1406fe5a0 body=66 status=ok
// SIG undefined FUN_1406fe5a0(void)

undefined8 * FUN_1406fe5a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LeadTarget",1);
  *param_1 = *puVar1;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  *(undefined2 *)(param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x40400000;
  return param_1;
}



// FUNCTION 1406fe5f0 FUN_1406fe5f0 body=31 status=ok
// SIG undefined FUN_1406fe5f0(void)

undefined4 * FUN_1406fe5f0(undefined4 *param_1)

{
  param_1[3] = 0x3f800000;
  param_1[2] = 0x437a0000;
  param_1[1] = 0x437a0000;
  *param_1 = 0x453b8000;
  return param_1;
}



// FUNCTION 1406fe610 FUN_1406fe610 body=119 status=ok
// SIG undefined FUN_1406fe610(void)

undefined8 * FUN_1406fe610(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"FollowActor",1);
  *param_1 = *puVar1;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  *(undefined4 *)(param_1 + 2) = 0x443b8000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x437a0000;
  *(undefined4 *)(param_1 + 3) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x40a00000;
  *(undefined4 *)(param_1 + 5) = 0x40400000;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 6) = 0x459c4000;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0x100;
  return param_1;
}



// FUNCTION 1406fe690 FUN_1406fe690 body=130 status=ok
// SIG undefined FUN_1406fe690(void)

undefined8 * FUN_1406fe690(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0xff00;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_142de2c00(param_1 + 7,1,2);
  FUN_142de2f30(param_1 + 0x17,0,1);
  FUN_142de2f30(param_1 + 0x27,0,1);
  FUN_142de2d20(param_1 + 0x37,0x3f800000,0);
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 1;
  *(byte *)((longlong)param_1 + 0x1ba) = *(byte *)((longlong)param_1 + 0x1ba) | 1;
  return param_1;
}



// FUNCTION 1406fe720 FUN_1406fe720 body=90 status=ok
// SIG undefined FUN_1406fe720(void)

undefined8 * FUN_1406fe720(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GroupLocation",1);
  *param_1 = *puVar1;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  FUN_142de2d20(param_1 + 2,0x447a0000,0);
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x94) = 1;
  return param_1;
}



// FUNCTION 1406fe780 FUN_1406fe780 body=231 status=ok
// SIG undefined FUN_1406fe780(void)

undefined8 * FUN_1406fe780(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TargetActorInfo",1);
  *param_1 = *puVar1;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_142de2d20(param_1 + 3,0x42c80000,0);
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) | 0x40;
  FUN_142de2d20(param_1 + 0x14,0x42c80000,0);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(byte *)((longlong)param_1 + 0xa1) = *(byte *)((longlong)param_1 + 0xa1) | 0x40;
  FUN_142de2d20(param_1 + 0x25,0,0);
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(byte *)((longlong)param_1 + 0x129) = *(byte *)((longlong)param_1 + 0x129) | 0x40;
  FUN_142de2d20(param_1 + 0x36,0,0);
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(byte *)((longlong)param_1 + 0x1b1) = *(byte *)((longlong)param_1 + 0x1b1) | 0x40;
  *(undefined2 *)(param_1 + 0x47) = 1;
  *(undefined1 *)((longlong)param_1 + 0x23a) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1406fe870 FUN_1406fe870 body=37 status=ok
// SIG undefined FUN_1406fe870(void)

longlong FUN_1406fe870(longlong param_1,undefined8 param_2)

{
  FUN_142de2d20(param_1,param_2,0);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x40;
  return param_1;
}



// FUNCTION 1406fe8a0 FUN_1406fe8a0 body=162 status=ok
// SIG undefined FUN_1406fe8a0(void)

undefined8 * FUN_1406fe8a0(undefined8 *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  undefined6 uStack_e;
  
  uVar2 = (ulonglong)_tls_index;
  *param_1 = 0;
  pvVar1 = ThreadLocalStoragePointer;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  *(undefined1 *)(param_1 + 2) = 2;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x38) < DAT_146858a38) {
    _Init_thread_header(&DAT_146858a38);
    if (DAT_146858a38 == -1) {
      FName::FName(&DAT_146858a30,L"TargetActorInfo",1);
      _Init_thread_footer(&DAT_146858a38);
    }
  }
  *param_1 = DAT_146858a30;
  param_1[1] = CONCAT62(uStack_e,0xff00);
  return param_1;
}



// FUNCTION 1406fe950 FUN_1406fe950 body=24 status=ok
// SIG undefined FUN_1406fe950(void)

undefined4 * FUN_1406fe950(undefined4 *param_1)

{
  param_1[2] = 0x3f800000;
  param_1[1] = 0x437a0000;
  *param_1 = 0x453b8000;
  return param_1;
}



// FUNCTION 1406fe970 FUN_1406fe970 body=165 status=ok
// SIG undefined FUN_1406fe970(void)

undefined8 * FUN_1406fe970(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LeadActor",1);
  *param_1 = *puVar1;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DestAINode",1);
  param_1[2] = *puVar1;
  *(undefined2 *)(param_1 + 3) = 0xff00;
  *(undefined4 *)(param_1 + 4) = 0x443b8000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x43160000;
  *(undefined4 *)(param_1 + 5) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x44480000;
  *(undefined4 *)(param_1 + 6) = 0x43960000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 7) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x43160000;
  *(undefined4 *)(param_1 + 8) = 0x457a0000;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0x101;
  *(undefined4 *)(param_1 + 9) = 0x43fa0000;
  return param_1;
}



// FUNCTION 1406fea20 FUN_1406fea20 body=56 status=ok
// SIG undefined FUN_1406fea20(void)

undefined8 * FUN_1406fea20(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = DAT_146858970;
  *(undefined2 *)(param_1 + 2) = 0xff00;
  param_1[6] = 0;
  *(undefined2 *)((longlong)param_1 + 0x44) = 1;
  *(undefined1 *)((longlong)param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 9) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f000000;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 1406fea60 FUN_1406fea60 body=143 status=ok
// SIG undefined FUN_1406fea60(void)

undefined8 * FUN_1406fea60(undefined8 *param_1)

{
  *param_1 = DAT_146858978;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  *(undefined1 *)(param_1 + 2) = 2;
  FUN_142de2d20(param_1 + 3,0x40a00000,0);
  FUN_142d2e580(param_1 + 0x13);
  FUN_142de2d20(param_1 + 0x2a,0x3e800000,0);
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x3b) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0x103;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  return param_1;
}



// FUNCTION 1406feaf0 FUN_1406feaf0 body=101 status=ok
// SIG undefined FUN_1406feaf0(void)

longlong FUN_1406feaf0(longlong param_1)

{
  FUN_142de2f30(param_1,0,1);
  *(undefined1 *)(param_1 + 0x80) = 0;
  FUN_142de2c00(param_1 + 0x88,3,2);
  *(undefined1 *)(param_1 + 0x108) = 0;
  FUN_142de2d20(param_1 + 0x110,0x40400000,0);
  *(undefined2 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x192) = 0;
  return param_1;
}



// FUNCTION 1406feb60 FUN_1406feb60 body=17 status=ok
// SIG undefined FUN_1406feb60(void)

undefined4 * FUN_1406feb60(undefined4 *param_1)

{
  *param_1 = 0x40a00000;
  param_1[1] = 0x100;
  return param_1;
}



// FUNCTION 1406feb80 FUN_1406feb80 body=546 status=ok
// SIG undefined FUN_1406feb80(void)

undefined8 * FUN_1406feb80(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [128];
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  FUN_142de2eb0(param_1 + 2);
  FUN_142de2eb0(param_1 + 0x12);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146858af8) {
    _Init_thread_header(&DAT_146858af8);
    if (DAT_146858af8 == -1) {
      FName::FName(&DAT_146858af0,L"TargetActorInfo",1);
      _Init_thread_footer(&DAT_146858af8);
    }
  }
  uStack_90 = CONCAT22(uStack_90._2_2_,0xff00);
  local_98 = (undefined4)DAT_146858af0;
  uStack_94 = (undefined4)((ulonglong)DAT_146858af0 >> 0x20);
  *(undefined4 *)param_1 = local_98;
  *(undefined4 *)((longlong)param_1 + 4) = uStack_94;
  *(undefined4 *)(param_1 + 1) = uStack_90;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_8c;
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x44fa0000,0);
  *(undefined1 *)(param_1 + 2) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x11) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x12) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x13) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)(puVar5 + 4);
  param_1[4] = *(undefined8 *)(puVar5 + 0x10);
  param_1[5] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[6] = *(undefined8 *)(puVar5 + 0x20);
  param_1[7] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[8] = *(undefined8 *)(puVar5 + 0x30);
  param_1[9] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[10] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0xb] = uVar4;
  param_1[0xc] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0xe) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
  param_1[0xf] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x11) = *(byte *)((longlong)param_1 + 0x11) | 0x42;
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x447a0000,0);
  *(undefined1 *)(param_1 + 0x12) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x91) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x92) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x93) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)(puVar5 + 4);
  param_1[0x14] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x15] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x16] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x17] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x18] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x19] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x1a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x1b] = uVar4;
  param_1[0x1c] = *(undefined8 *)(puVar5 + 0x50);
  uVar4 = *(undefined8 *)(puVar5 + 0x60);
  param_1[0x1d] = *(undefined8 *)(puVar5 + 0x58);
  param_1[0x1e] = uVar4;
  param_1[0x1f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x40;
  *(byte *)((longlong)param_1 + 0x11) = *(byte *)((longlong)param_1 + 0x11) | 2;
  *(undefined4 *)(param_1 + 0x22) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x23) = 0x3f000000;
  return param_1;
}



// FUNCTION 1406fedb0 FUN_1406fedb0 body=295 status=ok
// SIG undefined FUN_1406fedb0(void)

undefined1 * FUN_1406fedb0(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_88 [128];
  
  FUN_142de2eb0();
  FUN_142de2eb0(param_1 + 0x80);
  FUN_142f89420(param_1 + 0x10c);
  param_1[0x134] = 1;
  *(undefined4 *)(param_1 + 0x84) = 0x41700000;
  param_1[0x81] = param_1[0x81] | 0x46;
  puVar2 = (undefined1 *)FUN_142de2d20(local_88,0x42c80000,0);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  param_1[3] = puVar2[3];
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar2 + 4);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(puVar2 + 0x18);
  uVar1 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(puVar2 + 0x50);
  uVar1 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(puVar2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(puVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(puVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(puVar2 + 0x78);
  param_1[1] = param_1[1] | 0x40;
  *(undefined2 *)(param_1 + 0x100) = 1;
  param_1[0x104] = 1;
  param_1[0x106] = 1;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x102] = 0;
  *(undefined2 *)(param_1 + 0x138) = 1;
  param_1[0x13c] = 1;
  param_1[0x13e] = 1;
  param_1[0x13a] = 0;
  return param_1;
}



// FUNCTION 1406feee0 FUN_1406feee0 body=917 status=ok
// SIG undefined FUN_1406feee0(void)

undefined8 * FUN_1406feee0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [128];
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  FUN_142de2eb0(param_1 + 2);
  FUN_142de2eb0(param_1 + 0x12);
  FUN_142de2eb0(param_1 + 0x22);
  FUN_142de2eb0(param_1 + 0x32);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146858b08) {
    _Init_thread_header(&DAT_146858b08);
    if (DAT_146858b08 == -1) {
      FName::FName(&DAT_146858b00,L"TargetActorInfo",1);
      _Init_thread_footer(&DAT_146858b08);
    }
  }
  uStack_90 = CONCAT22(uStack_90._2_2_,0xff00);
  local_98 = (undefined4)DAT_146858b00;
  uStack_94 = (undefined4)((ulonglong)DAT_146858b00 >> 0x20);
  *(undefined4 *)param_1 = local_98;
  *(undefined4 *)((longlong)param_1 + 4) = uStack_94;
  *(undefined4 *)(param_1 + 1) = uStack_90;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_8c;
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x43fa0000,0);
  *(undefined1 *)(param_1 + 2) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x11) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x12) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x13) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)(puVar5 + 4);
  param_1[4] = *(undefined8 *)(puVar5 + 0x10);
  param_1[5] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[6] = *(undefined8 *)(puVar5 + 0x20);
  param_1[7] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[8] = *(undefined8 *)(puVar5 + 0x30);
  param_1[9] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[10] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0xb] = uVar4;
  param_1[0xc] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0xe) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
  param_1[0xf] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x447a0000,0);
  *(undefined1 *)(param_1 + 0x12) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x91) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x92) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x93) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)(puVar5 + 4);
  param_1[0x14] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x15] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x16] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x17] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x18] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x19] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x1a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x1b] = uVar4;
  param_1[0x1c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar1;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar3;
  param_1[0x1f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x43340000,0);
  *(undefined1 *)(param_1 + 0x22) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x111) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x112) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x113) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x114) = *(undefined8 *)(puVar5 + 4);
  param_1[0x24] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x25] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x26] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x27] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x28] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x29] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x2a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x2b] = uVar4;
  param_1[0x2c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar1;
  *(undefined4 *)(param_1 + 0x2e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x174) = uVar3;
  param_1[0x2f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x42340000,0);
  *(undefined1 *)(param_1 + 0x32) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x191) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x192) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x193) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x194) = *(undefined8 *)(puVar5 + 4);
  param_1[0x34] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x35] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x36] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x37] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x38] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x39] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x3a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x3b] = uVar4;
  param_1[0x3c] = *(undefined8 *)(puVar5 + 0x50);
  uVar4 = *(undefined8 *)(puVar5 + 0x60);
  param_1[0x3d] = *(undefined8 *)(puVar5 + 0x58);
  param_1[0x3e] = uVar4;
  param_1[0x3f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(puVar5 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x43fa0000;
  *(undefined1 *)(param_1 + 0x42) = 2;
  *(byte *)((longlong)param_1 + 0x11) = *(byte *)((longlong)param_1 + 0x11) | 0x40;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x40;
  *(byte *)((longlong)param_1 + 0x111) = *(byte *)((longlong)param_1 + 0x111) | 0x40;
  *(byte *)((longlong)param_1 + 0x191) = *(byte *)((longlong)param_1 + 0x191) | 0x40;
  return param_1;
}



// FUNCTION 1406ff280 FUN_1406ff280 body=94 status=ok
// SIG undefined FUN_1406ff280(void)

undefined2 * FUN_1406ff280(undefined2 *param_1)

{
  *param_1 = 0x100;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 3;
  FUN_1406ff2e0(param_1 + 8);
  *(undefined1 *)(param_1 + 0xe4) = 1;
  FUN_1406ff2e0(param_1 + 0xe8);
  *(undefined1 *)(param_1 + 0x1c4) = 0;
  FUN_1406ff2e0(param_1 + 0x1c8);
  param_1[0x2a4] = 1;
  return param_1;
}



// FUNCTION 1406ff2e0 FUN_1406ff2e0 body=142 status=ok
// SIG undefined FUN_1406ff2e0(void)

undefined8 * FUN_1406ff2e0(undefined8 *param_1)

{
  *param_1 = DAT_1468589b0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_142de2d20(param_1 + 4,0x40a00000,0);
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_142de2d20(param_1 + 0x15,0x43340000,0);
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_142de2f30(param_1 + 0x26,0,1);
  *(byte *)((longlong)param_1 + 0x21) = *(byte *)((longlong)param_1 + 0x21) | 6;
  *(byte *)((longlong)param_1 + 0xa9) = *(byte *)((longlong)param_1 + 0xa9) | 6;
  *(byte *)((longlong)param_1 + 0x131) = *(byte *)((longlong)param_1 + 0x131) | 7;
  *(undefined1 *)((longlong)param_1 + 0x133) = 6;
  return param_1;
}



// FUNCTION 1406ff370 FUN_1406ff370 body=49 status=ok
// SIG undefined FUN_1406ff370(void)

undefined8 * FUN_1406ff370(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  *(undefined4 *)(param_1 + 2) = 0x443b8000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x41a00000;
  *(undefined4 *)(param_1 + 3) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x41f00000;
  *(undefined2 *)(param_1 + 4) = 1;
  return param_1;
}



// FUNCTION 1406ff3b0 FUN_1406ff3b0 body=15 status=ok
// SIG undefined FUN_1406ff3b0(void)

undefined8 * FUN_1406ff3b0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 1406ff3c0 FUN_1406ff3c0 body=394 status=ok
// SIG undefined FUN_1406ff3c0(void)

undefined8 * FUN_1406ff3c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [128];
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  FUN_142de2eb0(param_1 + 2);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146858b18) {
    _Init_thread_header(&DAT_146858b18);
    if (DAT_146858b18 == -1) {
      FName::FName(&DAT_146858b10,L"TargetActorInfo",1);
      _Init_thread_footer(&DAT_146858b18);
    }
  }
  uStack_90 = CONCAT22(uStack_90._2_2_,0xff00);
  local_98 = (undefined4)DAT_146858b10;
  uStack_94 = (undefined4)((ulonglong)DAT_146858b10 >> 0x20);
  *(undefined4 *)param_1 = local_98;
  *(undefined4 *)((longlong)param_1 + 4) = uStack_94;
  *(undefined4 *)(param_1 + 1) = uStack_90;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_8c;
  puVar2 = (undefined1 *)FUN_142de2d20(local_88,0x43fa0000,0);
  *(undefined1 *)(param_1 + 2) = *puVar2;
  *(undefined1 *)((longlong)param_1 + 0x11) = puVar2[1];
  *(undefined1 *)((longlong)param_1 + 0x12) = puVar2[2];
  *(undefined1 *)((longlong)param_1 + 0x13) = puVar2[3];
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)(puVar2 + 4);
  param_1[4] = *(undefined8 *)(puVar2 + 0x10);
  param_1[5] = *(undefined8 *)(puVar2 + 0x18);
  uVar1 = *(undefined8 *)(puVar2 + 0x28);
  param_1[6] = *(undefined8 *)(puVar2 + 0x20);
  param_1[7] = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x38);
  param_1[8] = *(undefined8 *)(puVar2 + 0x30);
  param_1[9] = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x48);
  param_1[10] = *(undefined8 *)(puVar2 + 0x40);
  param_1[0xb] = uVar1;
  param_1[0xc] = *(undefined8 *)(puVar2 + 0x50);
  uVar1 = *(undefined8 *)(puVar2 + 0x60);
  param_1[0xd] = *(undefined8 *)(puVar2 + 0x58);
  param_1[0xe] = uVar1;
  param_1[0xf] = *(undefined8 *)(puVar2 + 0x68);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(puVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(puVar2 + 0x78);
  *(byte *)((longlong)param_1 + 0x11) = *(byte *)((longlong)param_1 + 0x11) | 0x40;
  *(undefined4 *)(param_1 + 0x12) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x43340000;
  *(undefined4 *)(param_1 + 0x13) = 0x42340000;
  *(undefined4 *)(param_1 + 0x14) = 0x43fa0000;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 2;
  return param_1;
}



// FUNCTION 1406ff550 FUN_1406ff550 body=1290 status=ok
// SIG undefined FUN_1406ff550(void)

undefined8 * FUN_1406ff550(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [128];
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  FUN_142de2eb0(param_1 + 2);
  FUN_142de2eb0(param_1 + 0x12);
  FUN_142de2eb0(param_1 + 0x22);
  FUN_142de2eb0(param_1 + 0x32);
  FUN_142de2eb0(param_1 + 0x42);
  FUN_142de2eb0(param_1 + 0x52);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146858b28) {
    _Init_thread_header(&DAT_146858b28);
    if (DAT_146858b28 == -1) {
      FName::FName(&DAT_146858b20,L"TargetActorInfo",1);
      _Init_thread_footer(&DAT_146858b28);
    }
  }
  uStack_a0 = CONCAT22(uStack_a0._2_2_,0xff00);
  local_a8 = (undefined4)DAT_146858b20;
  uStack_a4 = (undefined4)((ulonglong)DAT_146858b20 >> 0x20);
  *(undefined4 *)param_1 = local_a8;
  *(undefined4 *)((longlong)param_1 + 4) = uStack_a4;
  *(undefined4 *)(param_1 + 1) = uStack_a0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_9c;
  puVar5 = (undefined1 *)FUN_142de2d20(local_98,0x44fa0000,0);
  *(undefined1 *)(param_1 + 2) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x11) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x12) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x13) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)(puVar5 + 4);
  param_1[4] = *(undefined8 *)(puVar5 + 0x10);
  param_1[5] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[6] = *(undefined8 *)(puVar5 + 0x20);
  param_1[7] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[8] = *(undefined8 *)(puVar5 + 0x30);
  param_1[9] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[10] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0xb] = uVar4;
  param_1[0xc] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0xe) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
  param_1[0xf] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_98,0x447a0000,0);
  *(undefined1 *)(param_1 + 0x12) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x91) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x92) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x93) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)(puVar5 + 4);
  param_1[0x14] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x15] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x16] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x17] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x18] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x19] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x1a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x1b] = uVar4;
  param_1[0x1c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar1;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar3;
  param_1[0x1f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_98,0x437a0000,0);
  *(undefined1 *)(param_1 + 0x22) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x111) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x112) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x113) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x114) = *(undefined8 *)(puVar5 + 4);
  param_1[0x24] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x25] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x26] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x27] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x28] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x29] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x2a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x2b] = uVar4;
  param_1[0x2c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar1;
  *(undefined4 *)(param_1 + 0x2e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x174) = uVar3;
  param_1[0x2f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_98,0x437a0000,0);
  *(undefined1 *)(param_1 + 0x32) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x191) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x192) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x193) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x194) = *(undefined8 *)(puVar5 + 4);
  param_1[0x34] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x35] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x36] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x37] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x38] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x39] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x3a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x3b] = uVar4;
  param_1[0x3c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1ec) = uVar1;
  *(undefined4 *)(param_1 + 0x3e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 500) = uVar3;
  param_1[0x3f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_98,0x43fa0000,0);
  *(undefined1 *)(param_1 + 0x42) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x211) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x212) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x213) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x214) = *(undefined8 *)(puVar5 + 4);
  param_1[0x44] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x45] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x46] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x47] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x48] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x49] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x4a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x4b] = uVar4;
  param_1[0x4c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x4d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x26c) = uVar1;
  *(undefined4 *)(param_1 + 0x4e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x274) = uVar3;
  param_1[0x4f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x284) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_98,0x43fa0000,0);
  *(undefined1 *)(param_1 + 0x52) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x291) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x292) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x293) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x294) = *(undefined8 *)(puVar5 + 4);
  param_1[0x54] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x55] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x56] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x57] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x58] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x59] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x5a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x5b] = uVar4;
  param_1[0x5c] = *(undefined8 *)(puVar5 + 0x50);
  uVar4 = *(undefined8 *)(puVar5 + 0x60);
  param_1[0x5d] = *(undefined8 *)(puVar5 + 0x58);
  param_1[0x5e] = uVar4;
  param_1[0x5f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x40;
  *(byte *)((longlong)param_1 + 0x11) = *(byte *)((longlong)param_1 + 0x11) | 0x40;
  *(byte *)((longlong)param_1 + 0x191) = *(byte *)((longlong)param_1 + 0x191) | 0x40;
  *(byte *)((longlong)param_1 + 0x111) = *(byte *)((longlong)param_1 + 0x111) | 0x40;
  *(byte *)((longlong)param_1 + 0x291) = *(byte *)((longlong)param_1 + 0x291) | 0x40;
  *(byte *)((longlong)param_1 + 0x211) = *(byte *)((longlong)param_1 + 0x211) | 0x40;
  *(undefined4 *)(param_1 + 0x62) = 0x43fa0000;
  *(undefined4 *)(param_1 + 99) = 0x3f000000;
  return param_1;
}



// FUNCTION 1406ffa60 FUN_1406ffa60 body=179 status=ok
// SIG undefined FUN_1406ffa60(void)

undefined8 * FUN_1406ffa60(undefined8 *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0xff00;
  FUN_142de2d20(param_1 + 5,0,0);
  FUN_142de2eb0(param_1 + 0x16);
  pvVar1 = ThreadLocalStoragePointer;
  uVar2 = (ulonglong)_tls_index;
  *(undefined4 *)(param_1 + 2) = 0x1010101;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x38) < DAT_146858b58) {
    _Init_thread_header(&DAT_146858b58);
    if (DAT_146858b58 == -1) {
      FName::FName(&DAT_146858b50,L"TargetActorInfo",1);
      _Init_thread_footer(&DAT_146858b58);
    }
  }
  param_1[3] = DAT_146858b50;
  return param_1;
}



// FUNCTION 1406ffb20 FUN_1406ffb20 body=100 status=ok
// SIG undefined FUN_1406ffb20(void)

undefined2 * FUN_1406ffb20(undefined2 *param_1)

{
  *param_1 = 0;
  FUN_142de2c00(param_1 + 4,1,2);
  FUN_142de2d20(param_1 + 0x44,0,0);
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  param_1[0x8c] = 0xff00;
  *(undefined4 *)(param_1 + 0x90) = 0x1010100;
  *(undefined1 *)(param_1 + 0x92) = 1;
  return param_1;
}



// FUNCTION 1406ffb90 FUN_1406ffb90 body=66 status=ok
// SIG undefined FUN_1406ffb90(void)

longlong FUN_1406ffb90(longlong param_1)

{
  FUN_142de2d20(param_1,0x40000000,0);
  FUN_142de2d20(param_1 + 0x80,0x40000000,0);
  *(undefined2 *)(param_1 + 0x100) = 0x100;
  return param_1;
}


