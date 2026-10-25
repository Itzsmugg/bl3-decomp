// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142695840 FUN_142695840 body=99 status=ok
// SIG undefined FUN_142695840(void)

void FUN_142695840(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x790))(param_1,local_18);
  *param_2 = *puVar1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x798))(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1426958b0 FUN_1426958b0 body=99 status=ok
// SIG undefined FUN_1426958b0(void)

void FUN_1426958b0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x790))(param_1,local_18);
  *param_2 = *puVar1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x788))(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142695920 FUN_142695920 body=60 status=ok
// SIG undefined FUN_142695920(void)

undefined8 FUN_142695920(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x92];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x828))(plVar1);
    return param_2;
  }
  (**(code **)(*param_1 + 0x798))();
  return param_2;
}



// FUNCTION 142695960 FUN_142695960 body=224 status=ok
// SIG undefined FUN_142695960(void)

int FUN_142695960(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  if (*(longlong **)(param_1 + 0x110) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 200))();
    iVar2 = (int)param_2[1] + iVar1;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
    }
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0xd0))
              (*(longlong **)(param_1 + 0x110),*param_2,iVar1,0);
  }
  if ((*(longlong **)(param_1 + 0x118) != (longlong *)0x0) && ((*(byte *)(param_1 + 0x13) & 8) == 0)
     ) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 200))();
    iVar3 = (int)param_2[1] + iVar2;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
    }
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0xd0))
              (*(longlong **)(param_1 + 0x118),*param_2 + (longlong)iVar1 * 8,iVar2,0);
  }
  return iVar1;
}



// FUNCTION 142695a40 FUN_142695a40 body=118 status=ok
// SIG undefined FUN_142695a40(void)

void FUN_142695a40(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = iVar1;
  iVar4 = iVar1;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    iVar3 = *(int *)(param_1 + 0x128) * *(int *)(param_1 + 0x124);
    iVar4 = *(int *)(param_1 + 0x130) * *(int *)(param_1 + 0x124);
  }
  iVar2 = iVar1;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    iVar1 = *(int *)(param_1 + 0x130) * 2;
    iVar2 = *(int *)(param_1 + 0x128) * 2;
  }
  *param_2 = iVar3 + 0x2a0 + iVar2;
  *param_3 = iVar4 + 0x2a0 + iVar1;
  return;
}



// FUNCTION 142695ac0 FUN_142695ac0 body=118 status=ok
// SIG undefined FUN_142695ac0(void)

void FUN_142695ac0(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar3 = iVar1;
  iVar4 = iVar1;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    iVar3 = *(int *)(param_1 + 0x128) * *(int *)(param_1 + 0x124);
    iVar4 = *(int *)(param_1 + 0x130) * *(int *)(param_1 + 0x124);
  }
  iVar2 = iVar1;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    iVar1 = *(int *)(param_1 + 0x130) * 2;
    iVar2 = *(int *)(param_1 + 0x128) * 2;
  }
  *param_2 = iVar3 + 0x3c0 + iVar2;
  *param_3 = iVar4 + 0x3c0 + iVar1;
  return;
}



// FUNCTION 142695b40 FUN_142695b40 body=89 status=ok
// SIG undefined FUN_142695b40(void)

longlong FUN_142695b40(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x490);
  if (lVar1 != 0) {
    lVar3 = FUN_1429e18b0();
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



// FUNCTION 142695ba0 FUN_142695ba0 body=325 status=ok
// SIG undefined FUN_142695ba0(void)

float * FUN_142695ba0(longlong *param_1,float *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 in_EAX;
  int iVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if ((param_1[0x92] != 0) && (in_EAX = (**(code **)(*param_1 + 0x7a0))(), (char)in_EAX == '\0')) {
    (**(code **)(*(longlong *)param_1[0x92] + 0x830))((longlong *)param_1[0x92],local_28,param_2);
    return param_2;
  }
  lVar1 = param_1[0x2d];
  fVar4 = DAT_1468b5da8;
  uVar2 = DAT_1468b5da0;
  if (lVar1 != 0) {
    local_18 = *(float *)(lVar1 + 0x210);
    fStack_14 = *(float *)(lVar1 + 0x214);
    fStack_10 = *(float *)(lVar1 + 0x218);
    fStack_c = *(float *)(lVar1 + 0x21c);
    auVar6._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
    auVar6._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
    auVar6._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
    auVar6._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
    iVar3 = movmskps(in_EAX,auVar6);
    if (iVar3 != 0) {
      *(float *)(lVar1 + 0x250) = local_18;
      *(float *)(lVar1 + 0x254) = fStack_14;
      *(float *)(lVar1 + 600) = fStack_10;
      *(float *)(lVar1 + 0x25c) = fStack_c;
      puVar5 = (undefined8 *)FQuat::Rotator(&local_18,local_38);
      *(undefined8 *)(lVar1 + 0x260) = *puVar5;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
    }
    fVar4 = *(float *)(lVar1 + 0x268);
    uVar2 = *(undefined8 *)(lVar1 + 0x260);
  }
  *(undefined8 *)param_2 = uVar2;
  param_2[2] = fVar4;
  if (ABS(*param_2) <= 1e-08) {
    if (*(float *)((longlong)param_1 + 0x484) != 0.0) {
      *param_2 = *(float *)((longlong)param_1 + 0x484);
      return param_2;
    }
    *param_2 = (float)*(byte *)(param_1 + 0x90) * 1.4117647;
  }
  return param_2;
}



// FUNCTION 142695cf0 FUN_142695cf0 body=256 status=ok
// SIG undefined FUN_142695cf0(void)

undefined8 * FUN_142695cf0(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  plVar2 = *(longlong **)(param_1 + 0x110);
  plVar3 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar3 != (longlong *)0x0) {
    if (plVar3 == plVar2) {
      sVar1 = *(short *)(param_1 + 6);
    }
    else {
      sVar1 = *(short *)(param_1 + 8);
    }
    plVar2 = (longlong *)FUN_1426e2550((int)sVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x348))
                (plVar2,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xb8
                );
    }
    (**(code **)(*plVar3 + 0x48))(plVar3,&local_28,0x3f8147ae);
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(local_18,local_1c);
    *(undefined4 *)((longlong)param_2 + 0x14) = local_14;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x350))(plVar2);
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142695df0 FUN_142695df0 body=796 status=ok
// SIG undefined FUN_142695df0(void)

longlong * FUN_142695df0(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  size_t _Size;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  void *_Src;
  void *local_res8;
  void *local_58;
  int local_50;
  int local_4c;
  void *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x138);
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)UObjectBaseUtility::GetPathName(plVar5,&local_48,0);
    if (param_2 != plVar6) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar6;
      *plVar6 = 0;
      *(int *)(param_2 + 1) = (int)plVar6[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar6 + 0xc);
      plVar6[1] = 0;
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
    lVar7 = (**(code **)(*plVar5 + 0x3a0))(plVar5);
    if (lVar7 != 0) {
      iVar10 = (int)param_2[1];
      iVar9 = (2 - (uint)(iVar10 != 0)) + iVar10;
      *(int *)(param_2 + 1) = iVar9;
      if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
      }
      puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      *puVar1 = 0x20;
      puVar1[1] = 0;
      local_res8 = *(void **)(lVar7 + 0x18);
      FName::AppendString(&local_res8,param_2);
    }
  }
  cVar3 = FUN_14044af00(param_1 + 0x140,0);
  if (cVar3 != '\0') {
    local_res8 = (void *)0x0;
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x140);
    if (*(longlong *)(lVar7 + 0x90) != 0) {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x140);
      local_48 = (void *)0x0;
      local_40 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      pvVar11 = local_48;
      FGenericPlatformString::Memcpy(local_48,L" Bone: ",0x10);
      puVar8 = (undefined8 *)FName::ToString(lVar7 + 0x90,local_38);
      if ((int)local_40 < 2) {
        _Src = (void *)*puVar8;
        *puVar8 = 0;
        iVar9 = *(int *)(puVar8 + 1);
        puVar8[1] = 0;
      }
      else {
        iVar10 = *(int *)(puVar8 + 1) + -1;
        if (*(int *)(puVar8 + 1) == 0) {
          iVar10 = 0;
        }
        if (((int)local_40 != 0) || (iVar9 = 1, iVar10 == 0)) {
          iVar9 = 0;
        }
        local_58 = pvVar11;
        local_50 = (int)local_40;
        local_4c = local_40._4_4_;
        pvVar11 = (void *)0x0;
        if (local_40._4_4_ < iVar9 + (int)local_40 + iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
        }
        iVar4 = local_50;
        local_res8 = (void *)*puVar8;
        _Src = local_58;
        iVar9 = local_50;
        if (iVar10 != 0) {
          lVar7 = (longlong)local_50;
          local_50 = local_50 + (uint)(local_50 == 0) + iVar10;
          if (local_4c < local_50) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar4);
          }
          iVar9 = local_50;
          _Src = local_58;
          pvVar2 = (void *)((longlong)local_58 + (lVar7 - (ulonglong)(iVar4 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar2,local_res8,(longlong)iVar10 * 2);
          *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar2) = 0;
        }
      }
      if ((iVar9 != 0) && (iVar9 + -1 != 0)) {
        iVar10 = (int)param_2[1];
        iVar4 = (uint)(iVar10 == 0) + iVar9 + -1 + iVar10;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
        }
        pvVar2 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
        _Size = (longlong)iVar9 * 2 - 2;
        _guard_xfg_dispatch_icall_nop(pvVar2,_Src,_Size);
        *(undefined2 *)(_Size + (longlong)pvVar2) = 0;
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
      if (pvVar11 != (void *)0x0) {
        FMemory::Free(pvVar11);
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return param_2;
}



// FUNCTION 142696110 FUN_142696110 body=255 status=ok
// SIG undefined FUN_142696110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142696110(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_1c [20];
  
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  plVar4 = *(longlong **)(param_1 + 0x110);
  plVar7 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar7 != (longlong *)0x0) {
    if (plVar7 == plVar4) {
      sVar3 = *(short *)(param_1 + 6);
    }
    else {
      sVar3 = *(short *)(param_1 + 8);
    }
    plVar4 = (longlong *)FUN_1426e2550((int)sVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x348))
                (plVar4,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xd6
                );
    }
    cVar2 = (**(code **)(*plVar7 + 0x20))(plVar7,"PxRigidBody");
    plVar6 = (longlong *)0x0;
    if (cVar2 != '\0') {
      plVar6 = plVar7;
    }
    if (plVar6 != (longlong *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x118))(plVar6,local_1c);
      uVar1 = *(undefined4 *)(puVar5 + 1);
      *param_2 = *puVar5;
      *(undefined4 *)(param_2 + 1) = uVar1;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x350))(plVar4);
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142696210 FUN_142696210 body=89 status=ok
// SIG undefined FUN_142696210(void)

void FUN_142696210(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar1 = GetPhysxObjectSize(*(longlong *)(param_1 + 0x110),*DAT_146b08468);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + lVar1;
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar1 = GetPhysxObjectSize(*(longlong *)(param_1 + 0x118),*DAT_146b08468);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + lVar1;
  }
  return;
}



// FUNCTION 142696270 FUN_142696270 body=199 status=ok
// SIG undefined FUN_142696270(void)

undefined8 FUN_142696270(longlong param_1)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x110);
  uVar6 = 0;
  plVar5 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar5 != (longlong *)0x0) {
    if (plVar5 == plVar3) {
      sVar2 = *(short *)(param_1 + 6);
    }
    else {
      sVar2 = *(short *)(param_1 + 8);
    }
    plVar3 = (longlong *)FUN_1426e2550((int)sVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x348))
                (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xd6
                );
    }
    cVar1 = (**(code **)(*plVar5 + 0x20))(plVar5,"PxRigidBody");
    plVar4 = (longlong *)0x0;
    if (cVar1 != '\0') {
      plVar4 = plVar5;
    }
    if (plVar4 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar4 + 0x100))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x350))(plVar3);
    }
    return uVar6;
  }
  return 0;
}



// FUNCTION 142696340 FUN_142696340 body=65 status=ok
// SIG undefined FUN_142696340(void)

undefined1 FUN_142696340(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x138);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x118);
  }
  if ((lVar2 != 0) && (-1 < *(char *)(lVar2 + 0x93))) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0xc);
}



// FUNCTION 142696390 FUN_142696390 body=51 status=ok
// SIG undefined FUN_142696390(void)

undefined8 * FUN_142696390(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x60,1);
  if (lVar1 != 0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x160);
  }
  return param_2;
}



// FUNCTION 1426963d0 FUN_1426963d0 body=322 status=ok
// SIG undefined FUN_1426963d0(void)

longlong * FUN_1426963d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 local_res10;
  undefined4 local_res14;
  
  uVar6 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_res10 = *(undefined4 *)(param_1 + 0x138);
  local_res14 = *(undefined4 *)(param_1 + 0x13c);
  plVar3 = (longlong *)FWeakObjectPtr::Get(&local_res10);
  if (plVar3 == (longlong *)0x0) {
    return param_2;
  }
  iVar2 = (**(code **)(*plVar3 + 0x6c8))(plVar3);
  iVar1 = (int)param_2[1];
  if (iVar1 < iVar2) {
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_2 + (longlong)iVar1 * 8),0,(longlong)(iVar2 - iVar1) << 3);
  }
  else if ((iVar2 < iVar1) && (iVar2 != iVar1)) {
    *(int *)(param_2 + 1) = iVar2;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2);
  }
  uVar7 = uVar6;
  if (0 < iVar2) {
    do {
      lVar5 = *(longlong *)(DAT_146b17150 + 0x6c8);
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x560))(plVar3,uVar6);
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
      }
      if (((param_1 != 0) && (*(longlong *)(param_1 + 0xe0) != 0)) &&
         (lVar5 == *(longlong *)(DAT_146b17150 + 0x6c8))) {
        lVar5 = *(longlong *)(param_1 + 0xe0);
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      *(longlong *)(*param_2 + uVar7 * 8) = lVar5;
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)iVar2);
  }
  return param_2;
}



// FUNCTION 142696520 FUN_142696520 body=89 status=ok
// SIG undefined FUN_142696520(void)

undefined8 * FUN_142696520(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar2 = *(longlong **)(param_1 + 0x490);
  if (plVar2 == (longlong *)0x0) {
    local_10 = DAT_1468b5da8;
    puVar3 = &local_18;
    local_18 = DAT_1468b5da0;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x720))(plVar2,&local_18);
  }
  uVar1 = *(undefined4 *)(puVar3 + 1);
  *param_2 = *puVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142696580 FUN_142696580 body=93 status=ok
// SIG undefined FUN_142696580(void)

longlong * FUN_142696580(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x1b0);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x2f0))(plVar2,2);
    if (cVar1 != '\0') {
      *(longlong **)(param_1 + 0x1b0) = plVar2;
      return plVar2;
    }
  }
  plVar2 = (longlong *)UMaterial::GetDefaultMaterial(0);
  *(longlong **)(param_1 + 0x1b0) = plVar2;
  return plVar2;
}



// FUNCTION 142696610 FUN_142696610 body=182 status=ok
// SIG undefined FUN_142696610(void)

undefined4 FUN_142696610(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  plVar1 = *(longlong **)(lVar2 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4b8))(plVar1);
    (**(code **)(*plVar1 + 0x4b0))(plVar1,local_res10,local_res8);
    return local_res8[0];
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar3 = (longlong *)plVar1[0x1f];
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    plVar3 = (longlong *)plVar1[0x1f];
  }
  (**(code **)(*plVar3 + 0x578))(plVar3,local_res10,local_res8);
  return local_res8[0];
}



// FUNCTION 1426966d0 FUN_1426966d0 body=299 status=ok
// SIG undefined FUN_1426966d0(void)

undefined8
FUN_1426966d0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong lVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  float local_res18 [2];
  char local_res20 [8];
  longlong local_68;
  longlong *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  longlong local_40;
  char *local_38;
  float *local_30;
  undefined8 *local_28;
  
  *param_3 = *param_2;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 1);
  local_res18[0] = 3.4e+38;
  local_68 = param_1;
  if (*(longlong *)(param_1 + 200) != 0) {
    local_68 = *(longlong *)(param_1 + 200);
  }
  local_res20[0] = '\0';
  local_60 = &local_68;
  local_res8[0] = 1;
  local_58 = local_res8;
  local_48 = local_res10;
  local_38 = local_res20;
  local_30 = local_res18;
  lVar1 = *(longlong *)(local_68 + 0x110);
  lVar4 = lVar1;
  if (lVar1 == 0) {
    lVar4 = *(longlong *)(local_68 + 0x118);
  }
  if (lVar4 != 0) {
    if (lVar4 == lVar1) {
      sVar2 = *(short *)(local_68 + 6);
    }
    else {
      sVar2 = *(short *)(local_68 + 8);
    }
    local_res10[0] = param_4;
    local_50 = param_2;
    local_40 = param_1;
    local_28 = param_3;
    plVar3 = (longlong *)FUN_1426e2550((int)sVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x348))
                (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xb8
                );
    }
    FUN_142687720(&local_60,lVar4);
    uVar5 = extraout_XMM0_Db;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x350))(plVar3);
      uVar5 = extraout_XMM0_Db_00;
    }
    if (local_res20[0] != '\0') {
      return CONCAT44(uVar5,SQRT(local_res18[0]));
    }
  }
  return 0xbf800000;
}



// FUNCTION 142696800 FUN_142696800 body=345 status=ok
// SIG undefined FUN_142696800(void)

longlong * FUN_142696800(longlong *param_1,undefined1 param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  
  lVar3 = UParticleEmitter::GetLODLevel(param_1[2],0);
  cVar2 = (**(code **)(*param_1 + 0x118))(param_1,lVar3);
  if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x1e) & 1) != 0)) {
    plVar4 = (longlong *)FUN_14261b0a0(0x250);
    if (plVar4 != (longlong *)0x0) {
      FUN_1425f9970(plVar4,*(undefined8 *)(lVar3 + 0x30));
      *plVar4 = (longlong)&PTR_FUN_145131c68;
      FUN_142619420(plVar4 + 0x2c);
      *(undefined4 *)(plVar4 + 0x48) = 0xffffffff;
      plVar4[0x2c] = (longlong)&PTR__scalar_deleting_destructor__145131b08;
      plVar4[0x46] = 0;
      plVar4[0x47] = 0;
      *(undefined4 *)((longlong)plVar4 + 0x244) = 0;
      *(undefined4 *)(plVar4 + 0x49) = 1;
      *(undefined4 *)((longlong)plVar4 + 0x24c) = 1;
    }
    uVar1 = *(uint *)((longlong)plVar4 + 0x44);
    uVar5 = uVar1 & 0xffffffe3;
    *(uint *)((longlong)plVar4 + 0x44) = uVar5 | 3;
    uVar5 = uVar5 | 0x23;
    if (*(float *)(param_1[0x4d] + 0x3c) <= 0.0) {
      uVar5 = uVar1 & 0xffffffc3 | 3;
    }
    *(uint *)((longlong)plVar4 + 0x44) = uVar5;
    cVar2 = (**(code **)(*param_1 + 0x238))(param_1,plVar4 + 0x2c);
    if (cVar2 == '\0') {
      (**(code **)*plVar4)(plVar4,1);
      plVar4 = (longlong *)0x0;
    }
    else {
      (*(code *)((undefined8 *)*plVar4)[0x10])(plVar4,param_2);
    }
    return plVar4;
  }
  return (longlong *)0x0;
}



// FUNCTION 142696960 FUN_142696960 body=505 status=ok
// SIG undefined FUN_142696960(void)

longlong * FUN_142696960(longlong *param_1,undefined1 param_2)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  
  lVar4 = UParticleEmitter::GetLODLevel(param_1[2],0);
  cVar3 = (**(code **)(*param_1 + 0x118))(param_1,lVar4);
  if ((cVar3 != '\0') && ((*(byte *)(param_1 + 0x1e) & 1) != 0)) {
    plVar5 = (longlong *)FUN_14261b0a0(0x260);
    if (plVar5 != (longlong *)0x0) {
      FUN_1425f9970(plVar5,*(undefined8 *)(lVar4 + 0x30));
      *plVar5 = (longlong)&PTR_FUN_145131bc8;
      FUN_142619420(plVar5 + 0x2c);
      *(undefined4 *)(plVar5 + 0x48) = 0xffffffff;
      plVar5[0x46] = 0;
      plVar5[0x47] = 0;
      *(undefined4 *)((longlong)plVar5 + 0x244) = 0;
      plVar5[0x2c] = (longlong)&PTR__scalar_deleting_destructor__145131b18;
      *(undefined4 *)(plVar5 + 0x49) = 1;
      *(undefined8 *)((longlong)plVar5 + 0x24c) = 1;
    }
    *(uint *)((longlong)plVar5 + 0x44) =
         *(uint *)((longlong)plVar5 + 0x44) ^
         (*(uint *)(param_1[0x4d] + 0x48) >> 2 ^ *(uint *)((longlong)plVar5 + 0x44)) & 1;
    uVar6 = (*(int *)(param_1[0x4d] + 0x54) * 2 ^ *(uint *)((longlong)plVar5 + 0x44)) & 2 ^
            *(uint *)((longlong)plVar5 + 0x44);
    *(uint *)((longlong)plVar5 + 0x44) = uVar6;
    uVar6 = (*(int *)(param_1[0x4d] + 0x54) * 2 ^ uVar6) & 4 ^ uVar6;
    *(uint *)((longlong)plVar5 + 0x44) = uVar6;
    uVar6 = (*(int *)(param_1[0x4d] + 0x54) * 2 ^ uVar6) & 8 ^ uVar6;
    *(uint *)((longlong)plVar5 + 0x44) = uVar6;
    uVar6 = (*(int *)(param_1[0x4d] + 0x54) * 2 ^ uVar6) & 0x10 ^ uVar6;
    *(uint *)((longlong)plVar5 + 0x44) = uVar6;
    *(undefined4 *)(plVar5 + 9) = *(undefined4 *)(param_1[0x4d] + 0x5c);
    *(undefined4 *)((longlong)plVar5 + 0x4c) = *(undefined4 *)(param_1[0x4d] + 100);
    *(uint *)(plVar5 + 0x4b) =
         *(uint *)(plVar5 + 0x4b) ^
         ((uint)*(byte *)(param_1[0x4d] + 0x4c) ^ *(uint *)(plVar5 + 0x4b)) & 3;
    fVar1 = *(float *)(param_1[0x4d] + 0x58);
    *(float *)(plVar5 + 10) = fVar1;
    uVar2 = uVar6 | 0x20;
    if (fVar1 <= 0.0) {
      uVar2 = uVar6 & 0xffffffdf;
    }
    *(uint *)((longlong)plVar5 + 0x44) = uVar2;
    cVar3 = (**(code **)(*param_1 + 0x238))(param_1,plVar5 + 0x2c);
    if (cVar3 == '\0') {
      (**(code **)*plVar5)(plVar5,1);
      plVar5 = (longlong *)0x0;
    }
    else {
      (*(code *)((undefined8 *)*plVar5)[0x10])(plVar5,param_2);
    }
    return plVar5;
  }
  return (longlong *)0x0;
}



// FUNCTION 142696b60 FUN_142696b60 body=936 status=ok
// SIG undefined FUN_142696b60(void)

void FUN_142696b60(ushort *param_1,char *param_2,char param_3)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  char *pcVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  byte bVar18;
  char local_res20 [8];
  undefined1 local_b7;
  byte local_b6;
  undefined4 local_a8;
  undefined4 uStack_a4;
  ulonglong uStack_a0;
  uint uStack_8c;
  ulonglong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60 [40];
  
  if ((*(longlong *)(param_1 + 0x88) == 0) && (*(longlong *)(param_1 + 0x8c) == 0)) {
    return;
  }
  puVar1 = param_1 + 0xa0;
  cVar7 = FWeakObjectPtr::IsValid(puVar1);
  if (cVar7 == '\0') {
    return;
  }
  plVar10 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x9c);
  lVar12 = 0;
  local_88 = 0;
  lVar3 = lVar12;
  if (plVar10 == (longlong *)0x0) {
LAB_142696c19:
    bVar6 = true;
  }
  else {
    lVar3 = plVar10[0x23];
    cVar7 = (**(code **)(*plVar10 + 0x4e0))(plVar10);
    bVar6 = false;
    if (cVar7 != '\0') goto LAB_142696c19;
  }
  lVar11 = FWeakObjectPtr::Get(param_1 + 0x9c);
  if (lVar11 != 0) {
    lVar12 = *(longlong *)(lVar11 + 0x118);
  }
  if ((lVar12 == 0) || (*(char *)(lVar12 + 0x93) < '\0')) {
    cVar7 = (char)param_1[6];
  }
  else {
    cVar7 = '\0';
  }
  *param_2 = cVar7;
  local_b6 = (byte)param_1[8];
  local_80 = *(undefined4 *)(param_1 + 0x14);
  uStack_7c = *(undefined4 *)(param_1 + 0x16);
  uStack_78 = *(undefined4 *)(param_1 + 0x18);
  uStack_74 = *(undefined4 *)(param_1 + 0x1a);
  local_70 = *(undefined8 *)(param_1 + 0x1c);
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  bVar18 = local_b6 >> 1 & 1;
  if (plVar10 != (longlong *)0x0) {
    lVar12 = FUN_142a07000();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
        lVar12 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (lVar3 != 0) {
        if (*(char *)(lVar3 + 0x93) < '\0') {
          *param_2 = *(char *)((longlong)plVar10 + 0x3bc);
        }
        else {
          *param_2 = '\0';
        }
      }
      uVar8 = (**(code **)(*plVar10 + 0x4f8))(plVar10);
      *(undefined1 *)(param_1 + 5) = uVar8;
      lVar12 = FWeakObjectPtr::Get(puVar1);
      if (*(char *)(lVar12 + 0x9b) == '\0') {
        uVar16 = 2;
LAB_142696d10:
        FUN_1426ea8d0(&local_80,uVar16,0);
      }
      else {
        lVar12 = FWeakObjectPtr::Get(puVar1);
        if (*(char *)(lVar12 + 0x9b) == '\x01') {
          uVar16 = 0;
          goto LAB_142696d10;
        }
      }
      puVar13 = (undefined4 *)FUN_1426db3d0(local_60,&local_80,plVar10 + 0x7b);
      local_80 = *puVar13;
      uStack_7c = puVar13[1];
      uStack_78 = puVar13[2];
      uStack_74 = puVar13[3];
      local_70 = *(undefined8 *)(puVar13 + 4);
      uStack_68 = *(undefined8 *)(puVar13 + 6);
      if ((bVar18 == 0) || ((*(byte *)(plVar10 + 0x78) & 2) == 0)) {
        bVar18 = 0;
      }
      else {
        bVar18 = 1;
      }
    }
  }
  if (param_3 == '\0') {
    uVar16 = FWeakObjectPtr::Get(puVar1);
    pcVar14 = (char *)FUN_1426c5d50(uVar16,local_res20);
    if (*pcVar14 != '\x03') goto LAB_142696d7d;
    bVar4 = true;
LAB_142696d86:
    uVar16 = FWeakObjectPtr::Get(puVar1);
    pcVar14 = (char *)FUN_1426c5d50(uVar16,local_res20);
    local_res20[0] = '\0';
    if (*pcVar14 != '\x02') goto LAB_142696da7;
  }
  else {
LAB_142696d7d:
    bVar4 = false;
    if (param_3 == '\0') goto LAB_142696d86;
  }
  local_res20[0] = '\x01';
LAB_142696da7:
  if (((*(longlong *)(param_1 + 0x88) != 0) || (*(longlong *)(param_1 + 0x8c) != 0)) &&
     (*param_2 != '\0')) {
    if (lVar3 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined4 *)(lVar3 + 0xc);
    }
    if (plVar10 != (longlong *)0x0) {
      local_88 = (ulonglong)*(uint *)((longlong)plVar10 + 0xc);
    }
    if (((param_1[8] & 1) == 0) || (bVar6)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    local_b7 = (undefined1)param_1[5];
    uVar2 = *param_1;
    FUN_1422ffde0(&local_a8,&local_b7,*(undefined1 *)((longlong)param_1 + 0xb),&local_80);
    if (bVar5) {
      uStack_a0._0_4_ = (uint)uStack_a0 | 4;
    }
    if (bVar18 != 0) {
      uStack_a0._0_4_ = (uint)uStack_a0 | 8;
    }
    if (bVar6) {
      uStack_a0._0_4_ = (uint)uStack_a0 | 0x10;
    }
    uVar15 = (uint)uStack_a0;
    if ((local_b6 & 4) != 0) {
      uVar15 = (uint)uStack_a0 | 0x20;
    }
    uStack_8c = uVar15 | 1;
    *(ulonglong *)(param_2 + 4) = CONCAT44(local_a8,(uint)uVar2);
    *(ulonglong *)(param_2 + 0xc) = CONCAT44(uVar15,(int)local_88);
    if (local_res20[0] != '\0') {
      uStack_8c = uVar15 | 3;
    }
    uVar9 = uVar15 | 2;
    uStack_a0 = CONCAT44(uVar15,uStack_a4) | 0x200000000;
    if (bVar4) {
      uVar9 = uVar15 | 3;
      uStack_a0 = CONCAT44(uVar15,uStack_a4) | 0x300000000;
    }
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x400) & 4) != 0)) {
      uStack_8c = uStack_8c | 0x80;
      uStack_a0 = CONCAT44(uVar9,(uint)uStack_a0) | 0x8000000000;
    }
    *(ulonglong *)(param_2 + 0x14) = CONCAT44(local_a8,uVar17);
    *(ulonglong *)(param_2 + 0x1c) = CONCAT44(uStack_8c,uStack_a4);
    *(ulonglong *)(param_2 + 0x24) = CONCAT44(local_a8,uVar17);
    *(ulonglong *)(param_2 + 0x2c) = uStack_a0;
  }
  return;
}



// FUNCTION 142696f10 FUN_142696f10 body=9 status=ok
// SIG undefined FUN_142696f10(void)

undefined4 FUN_142696f10(void)

{
  return DAT_1464aaa98;
}



// FUNCTION 142696f20 GetHitchToNonHitchRatio body=48 status=ok
// SIG undefined GetHitchToNonHitchRatio(void)

float FEnginePerformanceTargets::GetHitchToNonHitchRatio(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *DAT_146b077b0;
  fVar2 = 1.0;
  if ((1.0 <= fVar1) &&
     (fVar2 = DAT_1464aaa98 / *DAT_146b07770, fVar1 <= DAT_1464aaa98 / *DAT_146b07770)) {
    fVar2 = fVar1;
  }
  return fVar2;
}



// FUNCTION 142696f50 FUN_142696f50 body=164 status=ok
// SIG undefined FUN_142696f50(void)

undefined8 * FUN_142696f50(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong local_28 [2];
  longlong local_18 [2];
  
  bVar2 = *(longlong *)(param_1 + 0x478) == 0;
  if (bVar2) {
    puVar1 = (undefined8 *)UClass::GetDesc(param_1,local_28);
  }
  else {
    puVar1 = (undefined8 *)FUN_14270d290(*(longlong *)(param_1 + 0x478),local_18);
  }
  *param_2 = 0;
  *param_2 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  if (bVar2) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar2) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142697000 FUN_142697000 body=115 status=ok
// SIG undefined FUN_142697000(void)

float FUN_142697000(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  if ((param_1[0x8f] != 0) && (fVar3 = *(float *)(param_1[0x8f] + 0x498), 0.0 < fVar3)) {
    fVar3 = fVar3 * 0.001;
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if (lVar2 != 0) {
      cVar1 = FUN_1428cfa70(lVar2,fVar3);
      if (cVar1 != '\0') {
        return fVar3;
      }
    }
  }
  return 0.0;
}



// FUNCTION 142697080 FUN_142697080 body=25 status=ok
// SIG undefined FUN_142697080(void)

undefined8 * FUN_142697080(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x4b0);
  *param_2 = *(undefined8 *)(param_1 + 0x4a8);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1426970a0 FUN_1426970a0 body=613 status=ok
// SIG undefined FUN_1426970a0(void)

void FUN_1426970a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b078a0) && (_Init_thread_header(&DAT_146b078a0), DAT_146b078a0 == -1)) {
    uVar1 = FUN_1429d7ab0();
    FUN_1429d7ab0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PlayerState",1);
    DAT_146b07898 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b078a0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b07898 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b07898 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b07898 + 0x30));
  }
  if ((*piVar5 < DAT_146b078b0) && (_Init_thread_header(&DAT_146b078b0), DAT_146b078b0 == -1)) {
    uVar1 = FUN_1429d7ab0();
    FUN_1429d7ab0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Controller",1);
    DAT_146b078a8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b078b0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b078a8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b078a8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b078a8 + 0x30));
  }
  if ((*piVar5 < DAT_146b078c0) && (_Init_thread_header(&DAT_146b078c0), DAT_146b078c0 == -1)) {
    uVar1 = FUN_1429d7ab0();
    FUN_1429d7ab0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RemoteViewPitch",1);
    DAT_146b078b8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b078c0);
  }
  if (0 < *(int *)(DAT_146b078b8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b078b8 + 0x40) + (short)iVar4;
      local_14 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b078b8 + 0x30));
  }
  return;
}



// FUNCTION 142697310 FUN_142697310 body=207 status=ok
// SIG undefined FUN_142697310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142697310(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_18;
  undefined8 *local_10;
  
  uVar2 = uRam00000001468b5b78;
  *param_2 = _DAT_1468b5b70;
  param_2[1] = uVar2;
  uVar5 = uRam00000001468b5b8c;
  uVar4 = uRam00000001468b5b88;
  uVar3 = uRam00000001468b5b84;
  *(undefined4 *)(param_2 + 2) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
  *(undefined4 *)(param_2 + 3) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
  uVar5 = uRam00000001468b5b9c;
  uVar4 = uRam00000001468b5b98;
  uVar3 = uRam00000001468b5b94;
  *(undefined4 *)(param_2 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar3;
  *(undefined4 *)(param_2 + 5) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar5;
  lVar1 = *(longlong *)(param_1 + 0x110);
  lVar8 = lVar1;
  if (lVar1 == 0) {
    lVar8 = *(longlong *)(param_1 + 0x118);
  }
  if (lVar8 != 0) {
    if (lVar8 == lVar1) {
      sVar6 = *(short *)(param_1 + 6);
    }
    else {
      sVar6 = *(short *)(param_1 + 8);
    }
    local_18 = param_1;
    local_10 = param_2;
    plVar7 = (longlong *)FUN_1426e2550((int)sVar6);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x348))
                (plVar7,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xb8
                );
    }
    FUN_1426879e0(&local_18,lVar8);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x350))(plVar7);
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 1426973e0 FUN_1426973e0 body=12 status=ok
// SIG undefined FUN_1426973e0(void)

undefined4 FUN_1426973e0(void)

{
  return *DAT_146b07798;
}



// FUNCTION 1426973f0 FUN_1426973f0 body=61 status=ok
// SIG undefined FUN_1426973f0(void)

undefined8 FUN_1426973f0(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x6f0))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x6f0))(param_1);
      return *(undefined8 *)(lVar1 + 0x118);
    }
  }
  return 0;
}



// FUNCTION 142697430 FUN_142697430 body=35 status=ok
// SIG undefined FUN_142697430(void)

void FUN_142697430(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1429d7b60();
                    /* WARNING: Could not recover jumptable at 0x00014269744c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  return;
}



// FUNCTION 142697460 FUN_142697460 body=48 status=ok
// SIG undefined FUN_142697460(void)

undefined4 * FUN_142697460(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x458) + 0x6e8))();
  if (lVar1 != 0) {
    return (undefined4 *)(lVar1 + 0x1c0);
  }
  return &DAT_1465318f0;
}



// FUNCTION 142697490 FUN_142697490 body=33 status=ok
// SIG undefined FUN_142697490(void)

void FUN_142697490(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x490) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426974a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0x4a8))();
    return;
  }
  FUN_1422325c0(param_1);
  return;
}



// FUNCTION 1426974c0 FUN_1426974c0 body=112 status=ok
// SIG undefined FUN_1426974c0(void)

undefined8 FUN_1426974c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(char *)(param_1 + 0x128) != '\x03') || (lVar1 = *(longlong *)(param_1 + 0x490), lVar1 == 0)
     ) {
    uVar4 = FUN_142232640();
    return uVar4;
  }
  lVar3 = FUN_1429e18b0();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return *(undefined8 *)(lVar1 + 0x508);
  }
  return 0;
}



// FUNCTION 142697530 FUN_142697530 body=147 status=ok
// SIG undefined FUN_142697530(void)

longlong FUN_142697530(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int local_res8 [2];
  
  if (*(longlong *)(param_1 + 200) != 0) {
    param_1 = *(longlong *)(param_1 + 200);
  }
  plVar1 = *(longlong **)(param_1 + 0x180);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    FUN_142694030(plVar1,local_res8);
    if (local_res8[0] == -1) {
      plVar1 = (longlong *)0x0;
    }
    else {
      lVar2 = (longlong)local_res8[0] * 0x60 + *plVar1;
      plVar1 = (longlong *)(lVar2 + 0x10);
      if (lVar2 == 0) {
        plVar1 = (longlong *)0x0;
      }
    }
  }
  if (plVar1 != (longlong *)0x0) {
    return *plVar1;
  }
  return param_1;
}



// FUNCTION 1426975e0 FUN_1426975e0 body=443 status=ok
// SIG undefined FUN_1426975e0(void)

void FUN_1426975e0(longlong param_1,int param_2,longlong param_3,char param_4,undefined4 *param_5,
                  undefined4 *param_6,undefined4 *param_7)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  lVar7 = (longlong)param_2;
  if (param_4 == '\x01') {
    iVar5 = 0;
    lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
    if (0 < *(int *)(lVar1 + 0x78)) {
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar6 + *(longlong *)(lVar1 + 0x70));
        if (plVar2 != (longlong *)0x0) {
          lVar4 = FUN_1429c82e0();
          if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
              != lVar4 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            fVar8 = (float)(**(code **)(*plVar2 + 0x388))
                                     (plVar2,param_1,lVar4 + 0x88,*(undefined8 *)(param_1 + 0x18));
            if ((0.0 < fVar8) && (fVar8 = 1.0 / fVar8, fVar8 != 0.0)) goto LAB_1426976c6;
            break;
          }
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (iVar5 < *(int *)(lVar1 + 0x78));
    }
    fVar8 = 1.0;
LAB_1426976c6:
    if (1.0 / fVar8 < 0.001) {
      fVar8 = 999.99994;
    }
    *(float *)(*(longlong *)(param_1 + 0x380) + lVar7 * 4) = fVar8;
    *(undefined4 *)(*(longlong *)(param_1 + 0x390) + lVar7 * 4) = *(undefined4 *)(param_3 + 0x5c);
    *(undefined4 *)(*(longlong *)(param_1 + 0x3a0) + lVar7 * 4) = *(undefined4 *)(param_3 + 0x4c);
  }
  *param_5 = *(undefined4 *)(*(longlong *)(param_1 + 0x380) + lVar7 * 4);
  if (*(char *)(param_1 + 0x3b5) == '\0') {
    *param_6 = *(undefined4 *)(*(longlong *)(param_1 + 0x390) + lVar7 * 4);
    *param_7 = *(undefined4 *)(*(longlong *)(param_1 + 0x3a0) + lVar7 * 4);
    return;
  }
  *param_6 = *(undefined4 *)(param_3 + 0x5c);
  *param_7 = *(undefined4 *)(param_3 + 0x4c);
  return;
}



// FUNCTION 1426977a0 FUN_1426977a0 body=186 status=ok
// SIG undefined FUN_1426977a0(void)

/* WARNING: Removing unreachable block (ram,0x000142697840) */

void FUN_1426977a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x38) == '\x02') {
    puVar3 = (undefined8 *)FName::ToString(param_1 + 0x40,local_18);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_28,L"TrailSource: Actor: %s\n",puVar4);
    lVar1 = param_2[1];
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
    }
    puVar3 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + *param_2);
    *puVar3 = 0;
    *puVar3 = local_28;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142697860 FUN_142697860 body=79 status=ok
// SIG undefined FUN_142697860(void)

void FUN_142697860(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_1429d7270();
  lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
  if ((lVar3 == 0) && (plVar1 = (longlong *)param_1[0x92], plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_1429d7270();
                    /* WARNING: Could not recover jumptable at 0x0001426978a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 1426978b0 FUN_1426978b0 body=88 status=ok
// SIG undefined FUN_1426978b0(void)

void FUN_1426978b0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x6e8))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426978d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x440))(plVar1);
    return;
  }
  if (param_1[0x2d] != 0) {
    FUN_14238cd00();
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_1428cb8d0(uVar2);
  return;
}



// FUNCTION 142697910 FUN_142697910 body=134 status=ok
// SIG undefined FUN_142697910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_142697910(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  longlong lVar2;
  undefined8 local_18;
  float local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x168);
  fVar1 = *(float *)(param_1 + 0x464);
  if (lVar2 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar2 + 0x220);
    local_10 = *(float *)(lVar2 + 0x228);
  }
  *param_2 = (int)local_18;
  param_2[1] = (int)((ulonglong)local_18 >> 0x20);
  param_2[2] = fVar1 + local_10;
  return param_2;
}



// FUNCTION 1426979a0 FUN_1426979a0 body=25 status=ok
// SIG undefined FUN_1426979a0(void)

undefined8 * FUN_1426979a0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x4a4);
  *param_2 = *(undefined8 *)(param_1 + 0x49c);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1426979c0 GetPxRigidActor body=44 status=ok
// SIG undefined GetPxRigidActor(void)

longlong FBodyInstance::GetPxRigidActor(longlong param_1,int param_2)

{
  if (param_2 < 0) {
    if (*(longlong *)(param_1 + 0x110) != 0) {
      return *(longlong *)(param_1 + 0x110);
    }
  }
  else {
    if (2 < param_2) {
      return 0;
    }
    if (param_2 == 0) {
      return *(longlong *)(param_1 + 0x110);
    }
  }
  return *(longlong *)(param_1 + 0x118);
}



// FUNCTION 1426979f0 FUN_1426979f0 body=73 status=ok
// SIG undefined FUN_1426979f0(void)

longlong * FUN_1426979f0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x110);
  if ((plVar3 == (longlong *)0x0) &&
     (plVar3 = *(longlong **)(param_1 + 0x118), plVar3 == (longlong *)0x0)) {
    return (longlong *)0x0;
  }
  cVar1 = (**(code **)(*plVar3 + 0x20))(plVar3,"PxRigidBody");
  plVar2 = (longlong *)0x0;
  if (cVar1 != '\0') {
    plVar2 = plVar3;
  }
  return plVar2;
}



// FUNCTION 142697a40 FUN_142697a40 body=44 status=ok
// SIG undefined FUN_142697a40(void)

longlong FUN_142697a40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  if ((lVar1 == 0) && (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 == 0)) {
    return 0;
  }
  lVar2 = 0;
  if (*(short *)(lVar1 + 8) == 6) {
    lVar2 = lVar1;
  }
  return lVar2;
}



// FUNCTION 142697a70 GetPxTransform_AssumesLocked body=553 status=ok
// SIG undefined GetPxTransform_AssumesLocked(void)

undefined4 * GetPxTransform_AssumesLocked(undefined4 *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 local_98 [144];
  
  plVar4 = (longlong *)0x0;
  if ((short)param_3[1] == 6) {
    plVar4 = param_3;
  }
  if (plVar4 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar4 + 0x1b8))(plVar4,&local_b8);
    if (cVar1 != '\0') {
      local_d8 = local_b8;
      uStack_d0 = uStack_b0;
      local_c8 = local_a8;
      local_c0 = local_a0;
      local_c4 = local_a4;
      goto LAB_142697b0f;
    }
  }
  (**(code **)(*param_3 + 0xa0))(param_3,&local_d8);
LAB_142697b0f:
  lVar2 = (**(code **)(*param_2 + 0x90))(param_2,local_98);
  fVar10 = *(float *)(lVar2 + 0x10) + *(float *)(lVar2 + 0x10);
  fVar6 = *(float *)(lVar2 + 0x14) + *(float *)(lVar2 + 0x14);
  fVar8 = *(float *)(lVar2 + 0x18) + *(float *)(lVar2 + 0x18);
  fVar7 = uStack_d0._4_4_ * uStack_d0._4_4_ - 0.5;
  fVar5 = local_d8._4_4_ * fVar6 + (float)local_d8 * fVar10 + (float)uStack_d0 * fVar8;
  fVar9 = (local_d8._4_4_ * fVar8 - (float)uStack_d0 * fVar6) * uStack_d0._4_4_ + fVar7 * fVar10 +
          (float)local_d8 * fVar5 + local_c8;
  fVar11 = ((float)local_d8 * fVar6 - local_d8._4_4_ * fVar10) * uStack_d0._4_4_ + fVar7 * fVar8 +
           (float)uStack_d0 * fVar5 + local_c0;
  fVar5 = ((float)uStack_d0 * fVar10 - (float)local_d8 * fVar8) * uStack_d0._4_4_ + fVar7 * fVar6 +
          local_d8._4_4_ * fVar5 + local_c4;
  puVar3 = (undefined4 *)physx::PxQuat::operator*(&local_d8,local_e8,lVar2);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  param_1[3] = puVar3[3];
  param_1[5] = fVar5;
  param_1[4] = fVar9;
  param_1[6] = fVar11;
  return param_1;
}



// FUNCTION 142697ca0 FUN_142697ca0 body=139 status=ok
// SIG undefined FUN_142697ca0(void)

longlong FUN_142697ca0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int local_res8 [2];
  
  if (*(longlong *)(param_1 + 200) != 0) {
    param_1 = *(longlong *)(param_1 + 200);
  }
  plVar2 = *(longlong **)(param_1 + 0x180);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    FUN_142694030(plVar2,local_res8,param_2);
    if (local_res8[0] == -1) {
      plVar2 = (longlong *)0x0;
    }
    else {
      lVar1 = (longlong)local_res8[0] * 0x60 + *plVar2;
      plVar2 = (longlong *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        plVar2 = (longlong *)0x0;
      }
    }
  }
  if ((plVar2 == (longlong *)0x0) || (lVar1 = *plVar2, (*(byte *)(*plVar2 + 0x12) & 0x40) != 0)) {
    lVar1 = param_1;
  }
  return lVar1;
}



// FUNCTION 142697d30 FUN_142697d30 body=125 status=ok
// SIG undefined FUN_142697d30(void)

undefined8 * FUN_142697d30(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((0 < (int)param_1[0x25]) && ((*(byte *)(param_1 + 0x1e) & 1) != 0)) {
    lVar2 = operator_new(0xf0);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (undefined8 *)FDynamicTrailsEmitterReplayData::FDynamicTrailsEmitterReplayData(lVar2)
      ;
    }
    cVar1 = (**(code **)(*param_1 + 0x238))(param_1,puVar3);
    if (cVar1 != '\0') {
      return puVar3;
    }
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142697db0 FUN_142697db0 body=125 status=ok
// SIG undefined FUN_142697db0(void)

undefined8 * FUN_142697db0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((0 < (int)param_1[0x25]) && ((*(byte *)(param_1 + 0x1e) & 1) != 0)) {
    lVar2 = operator_new(0xf8);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (undefined8 *)FDynamicRibbonEmitterReplayData::FDynamicRibbonEmitterReplayData(lVar2)
      ;
    }
    cVar1 = (**(code **)(*param_1 + 0x238))(param_1,puVar3);
    if (cVar1 != '\0') {
      return puVar3;
    }
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142697f40 FUN_142697f40 body=931 status=ok
// SIG undefined FUN_142697f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142697f40(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  float local_b0;
  undefined1 local_ac [4];
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (((*(byte *)(param_1 + 0x10) & 8) != 0) &&
     (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x140), cVar1 != '\0')) {
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x140);
    pcVar4 = (char *)FUN_1426c5d50(uVar3,local_ac);
    if ((*pcVar4 != '\x03') &&
       ((*(longlong *)(param_1 + 0x110) != 0 || (*(longlong *)(param_1 + 0x118) != 0)))) {
      FUN_142699110(param_1,&local_98,1,0);
      fVar15 = 0.0;
      local_b8 = 0;
      *param_2 = local_88;
      param_2[1] = uStack_84;
      param_2[4] = local_98;
      param_2[5] = uStack_94;
      param_2[6] = uStack_90;
      param_2[7] = uStack_8c;
      param_2[2] = uStack_80;
      plVar5 = *(longlong **)(param_1 + 0x110);
      local_b0 = 0.0;
      plVar9 = plVar5;
      if (plVar5 == (longlong *)0x0) {
        plVar9 = *(longlong **)(param_1 + 0x118);
      }
      plVar10 = (longlong *)0x0;
      if (plVar9 == (longlong *)0x0) {
        fVar12 = 0.0;
        uVar11 = 0;
        uVar13 = 0;
      }
      else {
        if (plVar9 == plVar5) {
          sVar2 = *(short *)(param_1 + 6);
        }
        else {
          sVar2 = *(short *)(param_1 + 8);
        }
        plVar5 = (longlong *)FUN_1426e2550((int)sVar2);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x348))
                    (plVar5,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                     0xd6);
        }
        cVar1 = (**(code **)(*plVar9 + 0x20))(plVar9,"PxRigidBody");
        plVar8 = plVar10;
        if (cVar1 != '\0') {
          plVar8 = plVar9;
        }
        if (plVar8 == (longlong *)0x0) {
          uVar11 = (undefined4)local_b8;
          uVar13 = (undefined4)((ulonglong)local_b8 >> 0x20);
        }
        else {
          puVar6 = (undefined4 *)(**(code **)(*plVar8 + 0x128))(plVar8,local_a8);
          uVar13 = puVar6[1];
          local_b0 = (float)puVar6[2];
          uVar11 = *puVar6;
        }
        fVar12 = local_b0;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x350))(plVar5);
        }
      }
      *(ulonglong *)(param_2 + 8) = CONCAT44(uVar13,uVar11);
      fVar14 = 0.0;
      param_2[10] = fVar12;
      fVar12 = 0.0;
      plVar5 = *(longlong **)(param_1 + 0x110);
      plVar9 = plVar5;
      if (plVar5 == (longlong *)0x0) {
        plVar9 = *(longlong **)(param_1 + 0x118);
      }
      if (plVar9 != (longlong *)0x0) {
        if (plVar9 == plVar5) {
          sVar2 = *(short *)(param_1 + 6);
        }
        else {
          sVar2 = *(short *)(param_1 + 8);
        }
        plVar5 = (longlong *)FUN_1426e2550((int)sVar2);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x348))
                    (plVar5,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                     0xd6);
        }
        cVar1 = (**(code **)(*plVar9 + 0x20))(plVar9,"PxRigidBody");
        plVar8 = plVar10;
        if (cVar1 != '\0') {
          plVar8 = plVar9;
        }
        if (plVar8 != (longlong *)0x0) {
          puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x138))(plVar8,local_a8);
          fVar12 = *(float *)(puVar7 + 1);
          fVar14 = *(float *)((longlong)puVar7 + 4);
          local_b8 = *puVar7;
          fVar15 = (float)local_b8;
          local_b0 = fVar12;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x350))(plVar5);
        }
      }
      cVar1 = '\0';
      local_b0 = fVar12 * 57.295776;
      *(ulonglong *)(param_2 + 0xb) = CONCAT44(fVar14 * 57.295776,fVar15 * 57.295776);
      param_2[0xd] = local_b0;
      plVar5 = *(longlong **)(param_1 + 0x110);
      plVar9 = plVar5;
      if (plVar5 == (longlong *)0x0) {
        plVar9 = *(longlong **)(param_1 + 0x118);
      }
      if (plVar9 != (longlong *)0x0) {
        if (plVar9 == plVar5) {
          sVar2 = *(short *)(param_1 + 6);
        }
        else {
          sVar2 = *(short *)(param_1 + 8);
        }
        plVar5 = (longlong *)FUN_1426e2550((int)sVar2);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x348))
                    (plVar5,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                     0x116);
        }
        if ((short)plVar9[1] == 6) {
          plVar10 = plVar9;
        }
        if (plVar10 != (longlong *)0x0) {
          cVar1 = (**(code **)(*plVar10 + 0x1f0))(plVar10);
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x350))(plVar5);
        }
      }
      *(bool *)(param_2 + 0xe) = cVar1 != '\0';
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1426982f0 FUN_1426982f0 body=41 status=ok
// SIG undefined FUN_1426982f0(void)

int FUN_1426982f0(longlong param_1,int param_2)

{
  if (param_2 < 0) {
    if (*(longlong *)(param_1 + 0x110) != 0) {
LAB_14269830d:
      return (int)*(short *)(param_1 + 6);
    }
  }
  else {
    if (2 < param_2) {
      return -1;
    }
    if (param_2 == 0) goto LAB_14269830d;
  }
  return (int)*(short *)(param_1 + 8);
}



// FUNCTION 142698320 FUN_142698320 body=577 status=ok
// SIG undefined FUN_142698320(void)

void FUN_142698320(longlong param_1,byte *param_2,byte *param_3,char param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  longlong *plVar10;
  
  *param_2 = *param_3;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x36] = param_2[0x36] | 8;
  param_2[0x37] = param_2[0x37] | 8;
  bVar8 = *param_3;
  if (bVar8 == 0) {
    return;
  }
  if ((bVar8 == 2) || (bVar8 == 3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x138);
  if ((plVar6 == (longlong *)0x0) || (cVar5 = (**(code **)(*plVar6 + 0x4e0))(plVar6), cVar5 != '\0')
     ) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar8 - 1 & 0xfffffffd) == 0) {
    if ((param_2[0x34] & 4) == 0) {
      param_2[0x34] = param_2[0x34] | 2;
    }
    if ((!bVar2) && ((param_2[0x35] & 4) == 0)) {
      param_2[0x35] = param_2[0x35] | 2;
    }
  }
  if (bVar3) {
    if ((param_2[0x36] & 4) == 0) {
      param_2[0x36] = param_2[0x36] | 1;
    }
    if ((param_4 != '\0') && ((param_2[0x37] & 4) == 0)) {
      param_2[0x37] = param_2[0x37] | 1;
    }
  }
  if (plVar6 == (longlong *)0x0) {
LAB_142698451:
    if ((param_2[0x37] & 4) == 0) {
      param_2[0x37] = param_2[0x37] & 0xf7;
    }
  }
  else {
    lVar7 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_142698451;
  }
  if (!bVar3) {
    return;
  }
  if (bVar2) {
    return;
  }
  plVar6 = *(longlong **)(param_1 + 0x110);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + 0x118);
  }
  cVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,"PxRigidBody");
  plVar10 = (longlong *)0x0;
  if (cVar5 != '\0') {
    plVar10 = plVar6;
  }
  if (plVar10 == (longlong *)0x0) {
    return;
  }
  cVar5 = FUN_1426aaac0(param_1);
  bVar8 = param_2[0x38];
  if (cVar5 == '\0') {
    if ((bVar8 & 4) == 0) {
      bVar8 = bVar8 | 1;
    }
    else {
      bVar8 = bVar8 & 0xfb | 0x21;
    }
LAB_1426984ef:
    param_2[0x38] = bVar8;
    if (cVar5 == '\0') {
      bVar8 = param_2[0x39];
      if ((bVar8 & 4) == 0) {
        bVar8 = bVar8 | 1;
      }
      else {
        bVar8 = bVar8 & 0xfb | 0x21;
      }
      goto LAB_14269850a;
    }
  }
  else {
    if ((bVar8 & 0x20) == 0) {
      bVar8 = bVar8 & 0xfe;
      goto LAB_1426984ef;
    }
    param_2[0x38] = bVar8 & 0xde | 4;
  }
  bVar8 = param_2[0x39];
  if ((bVar8 & 0x20) == 0) {
    bVar8 = bVar8 & 0xfe;
  }
  else {
    bVar8 = bVar8 & 0xde | 4;
  }
LAB_14269850a:
  param_2[0x39] = bVar8;
  bVar8 = param_2[0x38] & 0xdb;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    if ((param_2[0x38] & 1) == 0) {
      bVar8 = bVar8 | 4;
    }
    else {
      bVar8 = bVar8 | 0x20;
    }
  }
  param_2[0x38] = bVar8;
  bVar8 = param_2[0x39];
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar9 = bVar8 & 0xdb;
  param_2[0x39] = bVar9;
  if ((bVar1 & 1) != 0) {
    if ((bVar8 & 1) == 0) {
      bVar9 = bVar9 | 4;
    }
    else {
      bVar9 = bVar9 | 0x20;
    }
  }
  param_2[0x39] = bVar9;
  return;
}



// FUNCTION 142698570 FUN_142698570 body=328 status=ok
// SIG undefined FUN_142698570(void)

longlong FUN_142698570(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 0x140);
  local_res14 = *(undefined4 *)(param_1 + 0x144);
  local_res8 = *(undefined4 *)(param_1 + 0x138);
  local_resc = *(undefined4 *)(param_1 + 0x13c);
  if ((DAT_146b17150 == 0) || (*(longlong *)(DAT_146b17150 + 0x6c8) == 0)) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    return *(longlong *)(param_1 + 0xe0);
  }
  plVar2 = (longlong *)FWeakObjectPtr::Get(&local_res8);
  if ((plVar2 != (longlong *)0x0) && (plVar2[0x92] != 0)) {
    lVar3 = FWeakObjectPtr::Get(&local_res8);
    return *(longlong *)(lVar3 + 0x490);
  }
  lVar3 = FWeakObjectPtr::Get(&local_res10);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xa0) != 0)) {
    lVar3 = FWeakObjectPtr::Get(&local_res10);
    return *(longlong *)(lVar3 + 0xa0);
  }
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1429bed90();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) &&
        (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x560))(plVar2,0), plVar2 != (longlong *)0x0))
       && (lVar3 = (**(code **)(*plVar2 + 0x2b0))(plVar2), lVar3 != 0)) {
      return lVar3;
    }
  }
  return *(longlong *)(DAT_146b17150 + 0x6c8);
}



// FUNCTION 1426986c0 FUN_1426986c0 body=211 status=ok
// SIG undefined FUN_1426986c0(void)

void FUN_1426986c0(longlong param_1,longlong param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = false;
  if (param_1 == 0) {
    bVar3 = *(char *)(param_2 + 0x98) == '\x02';
    goto LAB_14269874a;
  }
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x4e8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x118);
  }
  if (((lVar2 != 0) && (-1 < *(char *)(lVar2 + 0x93))) ||
     (1 < (byte)(*(char *)(param_1 + 0x3bc) - 2U))) goto LAB_142698764;
  if (*(char *)(param_2 + 0x98) == '\x02') {
LAB_14269873c:
    bVar3 = true;
  }
  else if (*(char *)(param_2 + 0x98) == '\0') {
    if ((*(byte *)(param_1 + 0x3c0) & 8) != 0) goto LAB_14269873c;
    bVar3 = false;
  }
LAB_14269874a:
  if (bVar3) {
    *param_4 = 1;
    if (*(char *)(param_2 + 0x98) != '\x02') {
      return;
    }
    *param_3 = 0x3f800000;
    return;
  }
LAB_142698764:
  *param_4 = 0;
  if (*(char *)(param_2 + 0x98) == '\x02') {
    *param_3 = 0;
  }
  return;
}



// FUNCTION 1426987a0 FUN_1426987a0 body=39 status=ok
// SIG undefined FUN_1426987a0(void)

undefined4 FUN_1426987a0(longlong param_1)

{
  if (*(char *)(param_1 + 0xe) == '\x01') {
    return 0x3d4ccccd;
  }
  if (*(char *)(param_1 + 0xe) == '\x02') {
    return *(undefined4 *)(param_1 + 0xec);
  }
  return 0x3f800000;
}



// FUNCTION 1426987d0 FUN_1426987d0 body=1559 status=ok
// SIG undefined FUN_1426987d0(void)

ulonglong FUN_1426987d0(longlong param_1,float param_2,int param_3,int *param_4,float *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 in_RDX;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_e0;
  
  lVar8 = (longlong)param_3;
  lVar7 = *(longlong *)(param_1 + 0x270);
  if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x28) & 0x80) == 0)) goto LAB_142698dd3;
  if (*(char *)(lVar7 + 0x80) != '\0') {
    lVar7 = *(longlong *)(param_1 + 0x2d8);
    lVar2 = *(longlong *)(param_1 + 0x288);
    if (((*(float *)(lVar7 + lVar8 * 0xc) != *(float *)(lVar2 + lVar8 * 0xc)) ||
        (*(float *)(lVar7 + 4 + lVar8 * 0xc) != *(float *)(lVar2 + 4 + lVar8 * 0xc))) ||
       (iVar5 = 0, *(float *)(lVar7 + 8 + lVar8 * 0xc) != *(float *)(lVar2 + 8 + lVar8 * 0xc))) {
      iVar5 = 1;
    }
    *param_4 = iVar5;
    *param_5 = 0.0;
    return (ulonglong)param_5 & 0xffffffffffffff00;
  }
  bVar4 = false;
  lVar2 = *(longlong *)(param_1 + 0x270);
  fVar9 = (float)FUN_1424116d0(lVar7 + 0x48,in_RDX,*(undefined8 *)(param_1 + 0x18),0);
  fVar9 = fVar9 / *(float *)(lVar2 + 0x40);
  if (fVar9 < 0.0) {
LAB_142698d60:
    *param_4 = 0;
    *param_5 = 0.0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x2d8);
    fVar16 = *(float *)(*(longlong *)(param_1 + 0x230) + lVar8 * 4);
    lVar3 = *(longlong *)(param_1 + 0x288);
    fVar17 = *(float *)(lVar3 + lVar8 * 0xc) - *(float *)(lVar7 + lVar8 * 0xc);
    fVar19 = *(float *)(lVar3 + 4 + lVar8 * 0xc) - *(float *)(lVar7 + 4 + lVar8 * 0xc);
    fVar18 = *(float *)(lVar3 + 8 + lVar8 * 0xc) - *(float *)(lVar7 + 8 + lVar8 * 0xc);
    fVar15 = SQRT(fVar19 * fVar19 + fVar17 * fVar17 + fVar18 * fVar18);
    if (((0.0 < *(float *)(lVar2 + 0x8c)) && (*(float *)(lVar2 + 0x8c) < fVar15)) ||
       ((1048576.0 < fVar15 ||
        ((0.0 < *(float *)(lVar2 + 0x90) && (fVar15 < *(float *)(lVar2 + 0x90))))))) {
      fVar15 = 0.0;
      puVar6 = (undefined4 *)FUN_142627a50(param_1,lVar2);
      *puVar6 = 0;
      lVar7 = *(longlong *)(param_1 + 0x288);
      lVar2 = *(longlong *)(param_1 + 0x2d8);
      *(undefined8 *)(lVar2 + lVar8 * 0xc) = *(undefined8 *)(lVar7 + lVar8 * 0xc);
      *(undefined4 *)(lVar2 + 8 + lVar8 * 0xc) = *(undefined4 *)(lVar7 + 8 + lVar8 * 0xc);
    }
    fVar14 = 0.0;
    if (0.0 < *(float *)(*(longlong *)(param_1 + 0x268) + 0x50)) {
      fVar14 = *(float *)(param_1 + 0x200);
      if (*(int *)(param_1 + 0x128) == 0) {
        if (fVar14 == 0.0) {
          fVar14 = 0.0001;
        }
        lVar7 = *(longlong *)(param_1 + 0x288);
        lVar2 = *(longlong *)(param_1 + 0x2d8);
        fVar10 = 1.0 / fVar14;
        fVar12 = *(float *)(lVar7 + 8 + lVar8 * 0xc);
        fVar11 = *(float *)(lVar2 + 8 + lVar8 * 0xc);
        lVar3 = *(longlong *)(param_1 + 0x308);
        *(ulonglong *)(lVar3 + lVar8 * 0xc) =
             CONCAT44((*(float *)(lVar7 + 4 + lVar8 * 0xc) - *(float *)(lVar2 + 4 + lVar8 * 0xc)) *
                      fVar10,(*(float *)(lVar7 + lVar8 * 0xc) - *(float *)(lVar2 + lVar8 * 0xc)) *
                             fVar10);
        *(float *)(lVar3 + 8 + lVar8 * 0xc) = (fVar12 - fVar11) * fVar10;
      }
      fVar14 = fVar14 - *(float *)(*(longlong *)(param_1 + 0x210) + lVar8 * 4);
      if (fVar14 == 0.0) {
        fVar14 = 0.0001;
      }
      fVar14 = 1.0 / fVar14;
      fVar17 = fVar17 * fVar14;
      fVar18 = fVar18 * fVar14;
      fVar19 = fVar19 * fVar14;
      fVar14 = fVar17 * fVar17 + fVar19 * fVar19 + fVar18 * fVar18;
      if (1e-08 < fVar14) {
        auVar13 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar12 = auVar13._0_4_;
        fVar12 = fVar12 + fVar12 * (0.5 - fVar14 * 0.5 * fVar12 * fVar12);
        fVar12 = fVar12 + fVar12 * (0.5 - fVar14 * 0.5 * fVar12 * fVar12);
        fVar17 = fVar17 * fVar12;
        fVar19 = fVar12 * fVar19;
        fVar18 = fVar12 * fVar18;
      }
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x308) + lVar8 * 0xc);
      fVar14 = *(float *)(*(longlong *)(param_1 + 0x308) + 8 + lVar8 * 0xc);
      fVar12 = (float)((ulonglong)uVar1 >> 0x20);
      local_e0 = (float)uVar1;
      fVar11 = fVar12 * fVar12 + local_e0 * local_e0 + fVar14 * fVar14;
      if (1e-08 < fVar11) {
        auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
        fVar10 = auVar13._0_4_;
        fVar10 = fVar10 + fVar10 * (0.5 - fVar11 * 0.5 * fVar10 * fVar10);
        fVar10 = fVar10 + fVar10 * (0.5 - fVar11 * 0.5 * fVar10 * fVar10);
        local_e0 = local_e0 * fVar10;
        fVar12 = fVar12 * fVar10;
        fVar14 = fVar14 * fVar10;
      }
      fVar14 = ((fVar19 * fVar12 + fVar17 * local_e0 + fVar18 * fVar14) - 1.0) * -0.5;
    }
    if (fVar15 <= 0.0) goto LAB_142698d60;
    fVar16 = fVar15 + fVar16;
    bVar4 = *(float *)(*(longlong *)(param_1 + 0x270) + 0x88) *
            *(float *)(*(longlong *)(param_1 + 0x270) + 0x40) < fVar15;
    fVar9 = fVar16 * fVar9 + fVar14 * *(float *)(*(longlong *)(param_1 + 0x268) + 0x50);
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    else {
      param_2 = 1.0 / param_2;
    }
    if ((((*(byte *)(*(longlong *)(param_1 + 0x268) + 0x48) & 0x20) == 0) ||
        (*(int *)(param_1 + 0x128) != 0)) || (1.0 <= fVar9)) {
      iVar5 = (int)ROUND((fVar9 + fVar9) - 0.5) >> 1;
    }
    else {
      iVar5 = 1;
    }
    *param_4 = iVar5;
    *param_5 = (float)iVar5 * param_2;
    fVar16 = fVar16 - (float)*param_4 * *(float *)(*(longlong *)(param_1 + 0x270) + 0x40);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    *(float *)(*(longlong *)(param_1 + 0x230) + lVar8 * 4) = fVar16;
  }
  lVar7 = *(longlong *)(param_1 + 0x270);
  if ((*(byte *)(lVar7 + 0x84) & 1) != 0) {
    return CONCAT71((int7)((ulonglong)lVar7 >> 8),!bVar4);
  }
LAB_142698dd3:
  return (ulonglong)(*(byte *)(lVar7 + 0x38) & 1);
}



// FUNCTION 142698df0 FUN_142698df0 body=295 status=ok
// SIG undefined FUN_142698df0(void)

ulonglong FUN_142698df0(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4
                       )

{
  short sVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte local_res8 [8];
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  longlong local_68;
  longlong *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  longlong local_40;
  byte *local_38;
  undefined4 *local_30;
  undefined8 *local_28;
  
  *param_4 = *param_2;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_2 + 1);
  local_res20[0] = 0x7f7fc99e;
  local_res8[0] = 0;
  local_68 = param_1;
  if (*(longlong *)(param_1 + 200) != 0) {
    local_68 = *(longlong *)(param_1 + 200);
  }
  local_res10[0] = 1;
  local_60 = &local_68;
  local_58 = local_res10;
  local_48 = &stack0x00000028;
  local_38 = local_res8;
  local_30 = local_res20;
  uVar3 = *(ulonglong *)(local_68 + 0x110);
  uVar4 = uVar3;
  if (uVar3 == 0) {
    uVar4 = *(ulonglong *)(local_68 + 0x118);
  }
  if (uVar4 == 0) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    if (uVar4 == uVar3) {
      sVar1 = *(short *)(local_68 + 6);
    }
    else {
      sVar1 = *(short *)(local_68 + 8);
    }
    local_50 = param_2;
    local_40 = param_1;
    local_28 = param_4;
    plVar2 = (longlong *)FUN_1426e2550((int)sVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x348))
                (plVar2,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xb8
                );
    }
    FUN_142687720(&local_60,uVar4);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x350))(plVar2);
    }
    uVar3 = (ulonglong)local_res8[0];
    if (local_res8[0] != 0) {
      *param_3 = local_res20[0];
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 142698f20 FUN_142698f20 body=12 status=ok
// SIG undefined FUN_142698f20(void)

undefined4 FUN_142698f20(void)

{
  return *DAT_146b07770;
}



// FUNCTION 142698f40 FUN_142698f40 body=12 status=ok
// SIG undefined FUN_142698f40(void)

undefined4 FUN_142698f40(void)

{
  return *DAT_146b07568;
}



// FUNCTION 142698f50 FUN_142698f50 body=261 status=ok
// SIG undefined FUN_142698f50(void)

undefined8 * FUN_142698f50(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_1c [20];
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  plVar4 = *(longlong **)(param_1 + 0x110);
  plVar7 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar7 != (longlong *)0x0) {
    if (plVar7 == plVar4) {
      sVar3 = *(short *)(param_1 + 6);
    }
    else {
      sVar3 = *(short *)(param_1 + 8);
    }
    plVar4 = (longlong *)FUN_1426e2550((int)sVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x348))
                (plVar4,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xd6
                );
    }
    cVar2 = (**(code **)(*plVar7 + 0x20))(plVar7,"PxRigidBody");
    plVar6 = (longlong *)0x0;
    if (cVar2 != '\0') {
      plVar6 = plVar7;
    }
    if (plVar6 != (longlong *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x138))(plVar6,local_1c);
      uVar1 = *(undefined4 *)(puVar5 + 1);
      *param_2 = *puVar5;
      *(undefined4 *)(param_2 + 1) = uVar1;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x350))(plVar4);
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142699060 FUN_142699060 body=173 status=ok
// SIG undefined FUN_142699060(void)

undefined8 * FUN_142699060(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_1c [20];
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  plVar6 = *(longlong **)(param_1 + 0x110);
  plVar5 = plVar6;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar5 != (longlong *)0x0) {
    if (plVar5 == plVar6) {
      sVar3 = *(short *)(param_1 + 6);
    }
    else {
      sVar3 = *(short *)(param_1 + 8);
    }
    FUN_1426e2550((int)sVar3);
    cVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,"PxRigidBody");
    plVar6 = (longlong *)0x0;
    if (cVar2 != '\0') {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*plVar6 + 0x138))(plVar6,local_1c);
      uVar1 = *(undefined4 *)(puVar4 + 1);
      *param_2 = *puVar4;
      *(undefined4 *)(param_2 + 1) = uVar1;
    }
  }
  return param_2;
}



// FUNCTION 142699110 FUN_142699110 body=396 status=ok
// SIG undefined FUN_142699110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142699110(longlong param_1,undefined8 *param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_38;
  
  uVar4 = uRam00000001468b5b78;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  *param_2 = _DAT_1468b5b70;
  param_2[1] = uVar4;
  uVar3 = uRam00000001468b5b8c;
  uVar2 = uRam00000001468b5b88;
  uVar1 = uRam00000001468b5b84;
  *(undefined4 *)(param_2 + 2) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  uVar3 = uRam00000001468b5b9c;
  uVar2 = uRam00000001468b5b98;
  uVar1 = uRam00000001468b5b94;
  *(undefined4 *)(param_2 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar1;
  *(undefined4 *)(param_2 + 5) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  plVar9 = *(longlong **)(param_1 + 0x110);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar9 == (longlong *)0x0) {
    return param_2;
  }
  plVar6 = (longlong *)FUN_1426e2550();
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x348))
              (plVar6,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xb8);
  }
  if (param_4 == '\0') {
    plVar8 = (longlong *)0x0;
    if ((short)plVar9[1] == 6) {
      plVar8 = plVar9;
    }
    if ((plVar8 != (longlong *)0x0) &&
       (cVar5 = (**(code **)(*plVar8 + 0x1b8))(plVar8,&local_68), cVar5 != '\0')) {
      local_88 = local_68;
      uStack_80 = uStack_60;
      local_78 = local_58;
      local_70 = local_50;
      local_74 = local_54;
      goto LAB_142699223;
    }
  }
  (**(code **)(*plVar9 + 0xa0))(plVar9,&local_88);
LAB_142699223:
  puVar7 = (undefined8 *)P2UTransform(&local_68,&local_88);
  uVar4 = puVar7[1];
  *param_2 = *puVar7;
  param_2[1] = uVar4;
  uVar1 = *(undefined4 *)((longlong)puVar7 + 0x14);
  uVar2 = *(undefined4 *)(puVar7 + 3);
  uVar3 = *(undefined4 *)((longlong)puVar7 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar7 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar7 + 0x24);
  uVar2 = *(undefined4 *)(puVar7 + 5);
  uVar3 = *(undefined4 *)((longlong)puVar7 + 0x2c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar7 + 4);
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar1;
  *(undefined4 *)(param_2 + 5) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  if (param_3 != '\0') {
    FUN_1404cb7e0(param_1 + 0x148,param_1,param_2);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x350))(plVar6);
  }
  return param_2;
}



// FUNCTION 1426992a0 FUN_1426992a0 body=340 status=ok
// SIG undefined FUN_1426992a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1426992a0(longlong param_1,undefined8 *param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_28;
  
  uVar4 = uRam00000001468b5b78;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *param_2 = _DAT_1468b5b70;
  param_2[1] = uVar4;
  uVar3 = uRam00000001468b5b8c;
  uVar2 = uRam00000001468b5b88;
  uVar1 = uRam00000001468b5b84;
  *(undefined4 *)(param_2 + 2) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  uVar3 = uRam00000001468b5b9c;
  uVar2 = uRam00000001468b5b98;
  uVar1 = uRam00000001468b5b94;
  *(undefined4 *)(param_2 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar1;
  *(undefined4 *)(param_2 + 5) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  plVar8 = *(longlong **)(param_1 + 0x110);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar8 == (longlong *)0x0) {
    return param_2;
  }
  FUN_1426e2550();
  if (param_4 == '\0') {
    plVar7 = (longlong *)0x0;
    if ((short)plVar8[1] == 6) {
      plVar7 = plVar8;
    }
    if ((plVar7 != (longlong *)0x0) &&
       (cVar5 = (**(code **)(*plVar7 + 0x1b8))(plVar7,&local_58), cVar5 != '\0')) {
      local_78 = local_58;
      uStack_70 = uStack_50;
      local_68 = local_48;
      local_60 = local_40;
      local_64 = local_44;
      goto LAB_142699390;
    }
  }
  (**(code **)(*plVar8 + 0xa0))(plVar8,&local_78);
LAB_142699390:
  puVar6 = (undefined8 *)P2UTransform(&local_58,&local_78);
  uVar4 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar4;
  uVar1 = *(undefined4 *)((longlong)puVar6 + 0x14);
  uVar2 = *(undefined4 *)(puVar6 + 3);
  uVar3 = *(undefined4 *)((longlong)puVar6 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar6 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar6 + 0x24);
  uVar2 = *(undefined4 *)(puVar6 + 5);
  uVar3 = *(undefined4 *)((longlong)puVar6 + 0x2c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar6 + 4);
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar1;
  *(undefined4 *)(param_2 + 5) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar3;
  if (param_3 != '\0') {
    FUN_1404cb7e0(param_1 + 0x148,param_1,param_2);
  }
  return param_2;
}



// FUNCTION 142699400 FUN_142699400 body=261 status=ok
// SIG undefined FUN_142699400(void)

undefined8 * FUN_142699400(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_1c [20];
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  plVar4 = *(longlong **)(param_1 + 0x110);
  plVar7 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar7 != (longlong *)0x0) {
    if (plVar7 == plVar4) {
      sVar3 = *(short *)(param_1 + 6);
    }
    else {
      sVar3 = *(short *)(param_1 + 8);
    }
    plVar4 = (longlong *)FUN_1426e2550((int)sVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x348))
                (plVar4,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xd6
                );
    }
    cVar2 = (**(code **)(*plVar7 + 0x20))(plVar7,"PxRigidBody");
    plVar6 = (longlong *)0x0;
    if (cVar2 != '\0') {
      plVar6 = plVar7;
    }
    if (plVar6 != (longlong *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x128))(plVar6,local_1c);
      uVar1 = *(undefined4 *)(puVar5 + 1);
      *param_2 = *puVar5;
      *(undefined4 *)(param_2 + 1) = uVar1;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x350))(plVar4);
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142699510 FUN_142699510 body=295 status=ok
// SIG undefined FUN_142699510(void)

undefined8 * FUN_142699510(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_20;
  undefined1 local_1c [20];
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  plVar3 = *(longlong **)(param_1 + 0x110);
  plVar6 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar6 != (longlong *)0x0) {
    if (plVar6 == plVar3) {
      sVar2 = *(short *)(param_1 + 6);
    }
    else {
      sVar2 = *(short *)(param_1 + 8);
    }
    plVar3 = (longlong *)FUN_1426e2550((int)sVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x348))
                (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xd6
                );
    }
    cVar1 = (**(code **)(*plVar6 + 0x20))(plVar6,"PxRigidBody");
    plVar5 = (longlong *)0x0;
    if (cVar1 != '\0') {
      plVar5 = plVar6;
    }
    if (plVar5 != (longlong *)0x0) {
      local_38 = *param_3;
      local_34 = param_3[1];
      local_30 = param_3[2];
      puVar4 = (undefined8 *)physx::PxRigidBodyExt::getVelocityAtPos(local_1c,plVar5,&local_38);
      local_20 = *(undefined4 *)(puVar4 + 1);
      *param_2 = *puVar4;
      *(undefined4 *)(param_2 + 1) = local_20;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x350))(plVar3);
    }
  }
  return param_2;
}



// FUNCTION 142699640 FUN_142699640 body=224 status=ok
// SIG undefined FUN_142699640(void)

undefined8 * FUN_142699640(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_1c [20];
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  plVar5 = *(longlong **)(param_1 + 0x110);
  plVar6 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar6 != (longlong *)0x0) {
    if (plVar6 == plVar5) {
      sVar3 = *(short *)(param_1 + 6);
    }
    else {
      sVar3 = *(short *)(param_1 + 8);
    }
    FUN_1426e2550((int)sVar3);
    cVar2 = (**(code **)(*plVar6 + 0x20))(plVar6,"PxRigidBody");
    plVar5 = (longlong *)0x0;
    if (cVar2 != '\0') {
      plVar5 = plVar6;
    }
    if (plVar5 != (longlong *)0x0) {
      local_38 = *param_3;
      local_34 = param_3[1];
      local_30 = param_3[2];
      puVar4 = (undefined8 *)physx::PxRigidBodyExt::getVelocityAtPos(local_1c,plVar5,&local_38);
      uVar1 = *(undefined4 *)(puVar4 + 1);
      *param_2 = *puVar4;
      *(undefined4 *)(param_2 + 1) = uVar1;
    }
  }
  return param_2;
}



// FUNCTION 142699720 FUN_142699720 body=173 status=ok
// SIG undefined FUN_142699720(void)

undefined8 * FUN_142699720(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_1c [20];
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  plVar6 = *(longlong **)(param_1 + 0x110);
  plVar5 = plVar6;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar5 != (longlong *)0x0) {
    if (plVar5 == plVar6) {
      sVar3 = *(short *)(param_1 + 6);
    }
    else {
      sVar3 = *(short *)(param_1 + 8);
    }
    FUN_1426e2550((int)sVar3);
    cVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,"PxRigidBody");
    plVar6 = (longlong *)0x0;
    if (cVar2 != '\0') {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*plVar6 + 0x128))(plVar6,local_1c);
      uVar1 = *(undefined4 *)(puVar4 + 1);
      *param_2 = *puVar4;
      *(undefined4 *)(param_2 + 1) = uVar1;
    }
  }
  return param_2;
}



// FUNCTION 1426997d0 FUN_1426997d0 body=146 status=ok
// SIG undefined FUN_1426997d0(void)

undefined8 * FUN_1426997d0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)param_1[0x2d];
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x400))(plVar1,0);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)param_1[0x2d] + 0x458))((longlong *)param_1[0x2d],param_2);
      return param_2;
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x6e8))(param_1);
  if (lVar3 == 0) {
    puVar4 = (undefined8 *)&DAT_1468b5d90;
  }
  else {
    puVar4 = (undefined8 *)(lVar3 + 0x18c);
  }
  *param_2 = *puVar4;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar4 + 1);
  return param_2;
}



// FUNCTION 142699870 FUN_142699870 body=348 status=ok
// SIG undefined FUN_142699870(void)

undefined8 * FUN_142699870(longlong *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *local_28;
  int local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if ((longlong *)param_1[0x92] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x92] + 0x720))();
    return param_2;
  }
  if (*(byte *)(param_1 + 0x25) < 3) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar4,&local_28);
    for (; (in_EAX = local_20, -1 < local_20 && (local_20 < (int)local_28[1]));
        local_20 = local_20 + 1) {
      lVar5 = FWeakObjectPtr::Get(*local_28 + (longlong)local_20 * 8);
      if (lVar5 != 0) {
        plVar6 = (longlong *)FUN_1426e2c20(*(undefined8 *)(lVar5 + 0x528));
        if (plVar6 == param_1) {
          *param_2 = *(undefined8 *)(lVar5 + 0x548);
          uVar3 = *(undefined4 *)(lVar5 + 0x550);
          goto LAB_1426999b6;
        }
      }
    }
  }
  lVar5 = param_1[0x2d];
  if (lVar5 == 0) {
    uVar8 = (undefined4)DAT_1468b5da0;
    uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    uVar3 = DAT_1468b5da8;
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
    iVar2 = movmskps(in_EAX,auVar1);
    if (iVar2 != 0) {
      *(float *)(lVar5 + 0x250) = local_18;
      *(float *)(lVar5 + 0x254) = fStack_14;
      *(float *)(lVar5 + 600) = fStack_10;
      *(float *)(lVar5 + 0x25c) = fStack_c;
      puVar7 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
      *(undefined8 *)(lVar5 + 0x260) = *puVar7;
      *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar7 + 1);
    }
    uVar8 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
    uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
    uVar3 = *(undefined4 *)(lVar5 + 0x268);
  }
  *param_2 = CONCAT44(uVar9,uVar8);
LAB_1426999b6:
  *(undefined4 *)(param_2 + 1) = uVar3;
  return param_2;
}



// FUNCTION 1426999d0 FUN_1426999d0 body=82 status=ok
// SIG undefined FUN_1426999d0(void)

longlong FUN_1426999d0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x140);
    if (cVar1 != '\0') {
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x140);
      return lVar2 + 0xa8;
    }
  }
  return param_1 + 0xd0;
}



// FUNCTION 142699a50 FUN_142699a50 body=113 status=ok
// SIG undefined FUN_142699a50(void)

undefined8 FUN_142699a50(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x490);
  if (lVar1 != 0) {
    lVar4 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong **)(lVar1 + 0x528) != (longlong *)0x0)) {
      cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x528) + 0x8b0))();
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142699ad0 FUN_142699ad0 body=32 status=ok
// SIG undefined FUN_142699ad0(void)

void FUN_142699ad0(longlong *param_1)

{
  FUN_142629320();
                    /* WARNING: Could not recover jumptable at 0x000142699ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 142699af0 FUN_142699af0 body=387 status=ok
// SIG undefined FUN_142699af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142699af0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  FUN_142699c80();
  puVar11 = *(undefined8 **)*param_1;
  puVar1 = puVar11 + (int)((longlong *)*param_1)[1];
  iVar7 = DAT_146534738;
  for (; puVar11 != puVar1; puVar11 = puVar11 + 1) {
    uVar2 = *puVar11;
    DAT_146534744 = DAT_146534744 + 1;
    bVar4 = false;
    lVar9 = (longlong)(iVar7 + -1);
    iVar6 = iVar7;
    if (-1 < iVar7 + -1) {
      lVar10 = lVar9 << 4;
      bVar4 = false;
      do {
        if (((*(int *)(lVar10 + 8 + DAT_146534730) == 0) ||
            (plVar3 = *(longlong **)(lVar10 + DAT_146534730), plVar3 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar2,0), cVar5 == '\0')) {
          bVar4 = true;
        }
        lVar10 = lVar10 + -0x10;
        lVar9 = lVar9 + -1;
        iVar6 = DAT_146534738;
      } while (-1 < lVar9);
    }
    DAT_146534744 = DAT_146534744 + -1;
    iVar7 = iVar6;
    if ((bVar4) && (DAT_146534744 < 1)) {
      iVar8 = 0;
      if (0 < iVar6) {
        lVar9 = 0;
        do {
          if (((*(int *)(lVar9 + 8 + DAT_146534730) == 0) ||
              (*(longlong **)(lVar9 + DAT_146534730) == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(**(longlong **)(lVar9 + DAT_146534730) + 0x10))(), cVar5 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146534730,iVar8,1,1);
          }
          else {
            iVar8 = iVar8 + 1;
            lVar9 = lVar9 + 0x10;
          }
          iVar7 = DAT_146534738;
        } while (iVar8 < DAT_146534738);
      }
      _DAT_146534740 = iVar7 * 2;
      if (_DAT_146534740 < 3) {
        _DAT_146534740 = 2;
      }
      if ((_DAT_146534740 < iVar6) && (DAT_14653473c != iVar7)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146534730);
        iVar7 = DAT_146534738;
      }
    }
  }
  return;
}



// FUNCTION 142699c80 FUN_142699c80 body=493 status=ok
// SIG undefined FUN_142699c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142699c80(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined1 local_res10 [8];
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar4 < DAT_146b07980) {
    _Init_thread_header(&DAT_146b07980);
    if (DAT_146b07980 == -1) {
      DAT_146b07970 = 0;
      _DAT_146b07978 = 0;
      atexit((_func_5014 *)&LAB_143eb65b0);
      _Init_thread_footer(&DAT_146b07980);
    }
  }
  if (*piVar4 < DAT_146b07998) {
    _Init_thread_header(&DAT_146b07998);
    if (DAT_146b07998 == -1) {
      DAT_146b07988 = 0;
      _DAT_146b07990 = 0;
      atexit((_func_5014 *)&LAB_143eb6530);
      _Init_thread_footer(&DAT_146b07998);
    }
  }
  if (*piVar4 < DAT_146b079b0) {
    _Init_thread_header(&DAT_146b079b0);
    if (DAT_146b079b0 == -1) {
      DAT_146b079a0 = 0;
      _DAT_146b079a8 = 0;
      atexit((_func_5014 *)&LAB_143eb6570);
      _Init_thread_footer(&DAT_146b079b0);
    }
  }
  local_res10[0] = 0;
  cVar3 = FUN_142690e50(param_1,&DAT_146b07970,&DAT_146b07988,&DAT_146b079a0,1,local_res10);
  if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_1426e1610(*(longlong *)(param_1 + 0x20),0);
    if (**(char **)(param_1 + 0x20) != '\0') {
      FUN_1426e1610(*(char **)(param_1 + 0x20),2);
    }
  }
  lVar1 = _DAT_146b07978;
  uVar2 = DAT_146b0797c;
  _DAT_146b07978 = (ulonglong)DAT_146b0797c << 0x20;
  if ((lVar1 < 0) && (uVar2 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b07970,0);
  }
  lVar1 = _DAT_146b07990;
  uVar2 = DAT_146b07994;
  _DAT_146b07990 = (ulonglong)DAT_146b07994 << 0x20;
  if ((lVar1 < 0) && (uVar2 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b07988,0);
  }
  lVar1 = _DAT_146b079a8;
  uVar2 = DAT_146b079ac;
  _DAT_146b079a8 = (ulonglong)DAT_146b079ac << 0x20;
  if ((lVar1 < 0) && (uVar2 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b079a0,0);
  }
  return;
}



// FUNCTION 142699e70 FUN_142699e70 body=852 status=ok
// SIG undefined FUN_142699e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142699e70(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  longlong *plVar11;
  char local_res8 [8];
  
  lVar10 = 0;
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar9 < DAT_146b07938) && (_Init_thread_header(&DAT_146b07938), DAT_146b07938 == -1)) {
    DAT_146b07928 = 0;
    _DAT_146b07930 = 0;
    atexit((_func_5014 *)&LAB_143eb65d0);
    _Init_thread_footer(&DAT_146b07938);
  }
  if ((*piVar9 < DAT_146b07950) && (_Init_thread_header(&DAT_146b07950), DAT_146b07950 == -1)) {
    DAT_146b07940 = 0;
    _DAT_146b07948 = 0;
    atexit((_func_5014 *)&LAB_143eb6550);
    _Init_thread_footer(&DAT_146b07950);
  }
  if ((*piVar9 < DAT_146b07968) && (_Init_thread_header(&DAT_146b07968), DAT_146b07968 == -1)) {
    DAT_146b07958 = 0;
    _DAT_146b07960 = 0;
    atexit((_func_5014 *)&LAB_143eb6590);
    _Init_thread_footer(&DAT_146b07968);
  }
  lVar7 = param_1[10];
  local_res8[0] = '\0';
  cVar6 = FUN_142691570(param_1,&DAT_146b07928,&DAT_146b07940,&DAT_146b07958,(char)lVar7 != '\0',
                        local_res8);
  cVar5 = local_res8[0];
  if (cVar6 != '\0') {
    if ((char)lVar7 == '\0') {
      if (((DAT_146b07930 == 0) && ((DAT_146b07960 == 0 || (local_res8[0] != '\0')))) ||
         (param_1[0xe] == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((DAT_146b07948 == 0) && ((DAT_146b07960 == 0 || (local_res8[0] == '\0')))) ||
         (param_1[0xf] == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar2) {
        plVar11 = (longlong *)param_1[0xe];
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x358))
                    (plVar11,
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                     ,0x72c);
        }
      }
      else {
        plVar11 = (longlong *)0x0;
      }
      if (bVar3) {
        plVar8 = (longlong *)param_1[0xf];
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x358))
                    (plVar8,
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                     ,0x72d);
        }
      }
      else {
        plVar8 = (longlong *)0x0;
      }
      if (param_1[4] != 0) {
        if (cVar5 == '\0') {
          lVar7 = param_1[0xe];
        }
        else {
          lVar7 = param_1[0xf];
        }
        FUN_14268dd90(param_1,&DAT_146b07928,&DAT_146b07940,&DAT_146b07958,lVar7);
      }
      if (((char)param_1[10] == '\0') && (iVar1 = *(int *)(*param_1 + 8), 0 < (longlong)iVar1)) {
        do {
          FUN_14269a620(*(undefined8 *)(*(longlong *)*param_1 + lVar10 * 8));
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar1);
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))(plVar8);
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x360))(plVar11);
      }
    }
    else if (param_1[4] != 0) {
      FUN_1426e1610(param_1[4],0);
      if (*(char *)param_1[4] != '\0') {
        FUN_1426e1610((char *)param_1[4],2);
      }
    }
  }
  lVar10 = _DAT_146b07930;
  uVar4 = DAT_146b07934;
  _DAT_146b07930 = (ulonglong)DAT_146b07934 << 0x20;
  if ((lVar10 < 0) && (uVar4 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b07928,0);
  }
  lVar10 = _DAT_146b07948;
  uVar4 = DAT_146b0794c;
  _DAT_146b07948 = (ulonglong)DAT_146b0794c << 0x20;
  if ((lVar10 < 0) && (uVar4 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b07940,0);
  }
  lVar10 = _DAT_146b07960;
  uVar4 = DAT_146b07964;
  _DAT_146b07960 = (ulonglong)DAT_146b07964 << 0x20;
  if ((lVar10 < 0) && (uVar4 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b07958,0);
    return;
  }
  return;
}



// FUNCTION 14269a1d0 FUN_14269a1d0 body=1093 status=ok
// SIG undefined FUN_14269a1d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14269a1d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,char *param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong *local_128 [6];
  longlong local_f8;
  longlong *local_e0;
  undefined1 local_a8 [48];
  longlong local_78;
  longlong *local_60;
  
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar12 < DAT_146b078d8) && (_Init_thread_header(&DAT_146b078d8), DAT_146b078d8 == -1)) {
    atexit((_func_5014 *)&LAB_143eb6080);
    _Init_thread_footer(&DAT_146b078d8);
  }
  if ((*piVar12 < DAT_146b078f0) && (_Init_thread_header(&DAT_146b078f0), DAT_146b078f0 == -1)) {
    atexit((_func_5014 *)&LAB_143eb6690);
    _Init_thread_footer(&DAT_146b078f0);
  }
  iVar11 = DAT_146b078d0;
  lVar13 = (longlong)DAT_146b078d0;
  DAT_146b078d0 = DAT_146b078d0 + 1;
  if (DAT_146b078d4 < DAT_146b078d0) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b078c8,iVar11);
  }
  *(undefined8 *)(DAT_146b078c8 + lVar13 * 8) = param_1;
  iVar11 = DAT_146b078e8;
  lVar13 = (longlong)DAT_146b078e8;
  DAT_146b078e8 = DAT_146b078e8 + 1;
  if (DAT_146b078ec < DAT_146b078e8) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_146b078e0,iVar11);
  }
  uVar2 = param_3[1];
  puVar9 = (undefined8 *)(lVar13 * 0x30 + DAT_146b078e0);
  *puVar9 = *param_3;
  puVar9[1] = uVar2;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 3);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)puVar9 + 0x14) = uVar4;
  *(undefined4 *)(puVar9 + 3) = uVar5;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar5 = *(undefined4 *)(param_3 + 5);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)puVar9 + 0x24) = uVar4;
  *(undefined4 *)(puVar9 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar6;
  if (*param_6 == '\0') {
    FUN_142684e40(local_128,&DAT_146b078c8,&DAT_146b078e0,param_2,param_4,param_5,param_6,
                  *(undefined8 *)(param_6 + 8));
    FUN_142699e70(local_128);
    puVar17 = (undefined8 *)*local_128[0];
    puVar9 = puVar17 + (int)local_128[0][1];
    iVar11 = DAT_146534738;
    plVar3 = local_e0;
    for (; local_e0 = plVar3, puVar17 != puVar9; puVar17 = puVar17 + 1) {
      uVar2 = *puVar17;
      DAT_146534744 = DAT_146534744 + 1;
      bVar7 = false;
      lVar13 = (longlong)(iVar11 + -1);
      iVar10 = iVar11;
      if (-1 < iVar11 + -1) {
        lVar15 = lVar13 << 4;
        bVar7 = false;
        do {
          if (((*(int *)(lVar15 + 8 + DAT_146534730) == 0) ||
              (plVar3 = *(longlong **)(lVar15 + DAT_146534730), plVar3 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar2,0), cVar8 == '\0')) {
            bVar7 = true;
          }
          lVar15 = lVar15 + -0x10;
          lVar13 = lVar13 + -1;
          iVar10 = DAT_146534738;
        } while (-1 < lVar13);
      }
      DAT_146534744 = DAT_146534744 + -1;
      iVar11 = iVar10;
      if ((bVar7) && (DAT_146534744 < 1)) {
        uVar14 = 0;
        uVar16 = 0;
        if (0 < iVar10) {
          do {
            if (((*(int *)(uVar16 + 8 + DAT_146534730) == 0) ||
                (*(longlong **)(uVar16 + DAT_146534730) == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(**(longlong **)(uVar16 + DAT_146534730) + 0x10))(),
               cVar8 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146534730,uVar14,1,1);
            }
            else {
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar16 = uVar16 + 0x10;
            }
            iVar11 = DAT_146534738;
          } while ((int)uVar14 < DAT_146534738);
        }
        _DAT_146534740 = iVar11 * 2;
        if (_DAT_146534740 < 3) {
          _DAT_146534740 = 2;
        }
        if ((_DAT_146534740 < iVar10) && (DAT_14653473c != iVar11)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146534730);
          iVar11 = DAT_146534738;
        }
      }
      plVar3 = local_e0;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar12 = (int *)((longlong)plVar3 + 0xc);
        iVar11 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
  }
  else {
    FUN_142684c90(local_a8);
    FUN_142699af0(local_a8);
    plVar3 = local_60;
    local_f8 = local_78;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar12 = (int *)((longlong)plVar3 + 0xc);
        iVar11 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        local_f8 = local_78;
        if (iVar11 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
          local_f8 = local_78;
        }
      }
    }
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  DAT_146b078d0 = 0;
  if ((DAT_146b078d4 < 0) && (DAT_146b078d4 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b078c8,0);
  }
  DAT_146b078e8 = 0;
  if ((DAT_146b078ec < 0) && (DAT_146b078ec != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(&DAT_146b078e0,0);
  }
  FUN_1426b01e0(param_1);
  return;
}



// FUNCTION 14269a620 FUN_14269a620 body=1158 status=ok
// SIG undefined FUN_14269a620(void)

void FUN_14269a620(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_res8 [8];
  undefined8 local_78;
  float local_70;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x140);
  if (cVar3 == '\0') {
    return;
  }
  plVar7 = *(longlong **)(param_1 + 0x110);
  if ((plVar7 == (longlong *)0x0) &&
     (plVar7 = *(longlong **)(param_1 + 0x118), plVar7 == (longlong *)0x0)) {
    return;
  }
  plVar15 = (longlong *)0x0;
  plVar14 = plVar15;
  if ((short)plVar7[1] == 6) {
    plVar14 = plVar7;
  }
  if (plVar14 == (longlong *)0x0) {
    return;
  }
  uVar5 = FWeakObjectPtr::Get(param_1 + 0x140);
  pcVar6 = (char *)FUN_1426c5d50(uVar5,local_res8);
  if (*pcVar6 == '\x03') goto LAB_14269a898;
  FUN_1426b0300(param_1);
  FUN_1426b0110(param_1);
  if ((*(byte *)(param_1 + 0x12) & 4) == 0) {
    plVar7 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar8 = plVar7[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      lVar8 = plVar7[0x1f];
    }
    fVar16 = *(float *)(lVar8 + 0x94);
  }
  else {
    fVar16 = *(float *)(param_1 + 0xe8);
  }
  plVar7 = *(longlong **)(param_1 + 0x110);
  fVar17 = fVar16 * 0.017453292 * 57.295776;
  plVar12 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    plVar12 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar12 == (longlong *)0x0) {
LAB_14269a7ce:
    *(float *)(param_1 + 0xe8) = fVar17;
  }
  else {
    if (plVar12 == plVar7) {
      sVar4 = *(short *)(param_1 + 6);
    }
    else {
      sVar4 = *(short *)(param_1 + 8);
    }
    plVar7 = (longlong *)FUN_1426e2550((int)sVar4);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x358))
                (plVar7,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                 0x136);
    }
    plVar10 = plVar15;
    if ((short)plVar12[1] == 6) {
      plVar10 = plVar12;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x1e0))(plVar10,fVar16 * 0.017453292);
      *(float *)(param_1 + 0xe8) = fVar17;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))(plVar7);
    }
    if (plVar10 == (longlong *)0x0) goto LAB_14269a7ce;
  }
  if (*(char *)(param_1 + 0x12) < '\0') {
    fVar16 = *(float *)(param_1 + 0x58);
  }
  else {
    lVar8 = GetDefault<UAudioSettings>();
    fVar16 = *(float *)(lVar8 + 0x98);
  }
  *(float *)(param_1 + 0x58) = fVar16;
  if (fVar16 == 0.0) {
    fVar16 = 3.4028235e+38;
  }
  plVar7 = *(longlong **)(param_1 + 0x110);
  plVar12 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    plVar12 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar12 != (longlong *)0x0) {
    if (plVar12 == plVar7) {
      sVar4 = *(short *)(param_1 + 6);
    }
    else {
      sVar4 = *(short *)(param_1 + 8);
    }
    plVar7 = (longlong *)FUN_1426e2550((int)sVar4);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x358))
                (plVar7,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xf6
                );
    }
    cVar3 = (**(code **)(*plVar12 + 0x20))(plVar12,"PxRigidBody");
    plVar10 = plVar15;
    if (cVar3 != '\0') {
      plVar10 = plVar12;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 400))(plVar10,fVar16);
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))(plVar7);
    }
  }
LAB_14269a898:
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x138);
  if (lVar8 != 0) {
    plVar15 = *(longlong **)(lVar8 + 0x118);
  }
  fVar18 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  bVar2 = false;
  if (plVar15 != (longlong *)0x0) {
    puVar9 = (undefined8 *)(**(code **)(*plVar15 + 0x308))(plVar15,&local_78);
    local_78 = *puVar9;
    fVar16 = *(float *)(puVar9 + 1);
    fVar18 = (float)((ulonglong)local_78 >> 0x20);
    fVar17 = (float)local_78;
    local_70 = fVar16;
    bVar2 = false;
    if (9.999999e-09 < fVar18 * fVar18 + (float)local_78 * (float)local_78 + fVar16 * fVar16) {
      bVar2 = true;
    }
  }
  if (((*(byte *)(param_1 + 0x10) & 8) != 0) &&
     (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x140), cVar3 != '\0')) {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x140);
    pcVar6 = (char *)FUN_1426c5d50(uVar5,local_res8);
    if (*pcVar6 != '\x03') {
      local_78 = CONCAT44(fVar18,fVar17);
      local_70 = fVar16;
      (**(code **)(*plVar14 + 0x130))(plVar14,&local_78,1);
    }
  }
  fVar16 = (float)(**(code **)(*plVar14 + 0x200))(plVar14);
  if (*(char *)(param_1 + 0xe) == '\x01') {
    fVar17 = 0.05;
  }
  else if (*(char *)(param_1 + 0xe) == '\x02') {
    fVar17 = *(float *)(param_1 + 0xec);
  }
  else {
    fVar17 = 1.0;
  }
  (**(code **)(*plVar14 + 0x1f8))(plVar14,fVar17 * fVar16);
  fVar16 = (float)(**(code **)(*plVar14 + 0x210))(plVar14);
  (**(code **)(*plVar14 + 0x208))(plVar14,fVar16 * *(float *)(param_1 + 0xf0));
  iVar1 = *(int *)(param_1 + 0xf8);
  if (iVar1 < 1) {
    iVar11 = 1;
  }
  else {
    iVar11 = 0xff;
    if (iVar1 < 0xff) {
      iVar11 = iVar1;
    }
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  iVar13 = 1;
  if ((0 < iVar1) && (iVar13 = 0xff, iVar1 < 0xff)) {
    iVar13 = iVar1;
  }
  (**(code **)(*plVar14 + 0x250))(plVar14,iVar11,iVar13);
  FUN_142690580(param_1);
  cVar3 = IsRigidBodyKinematic_AssumesLocked(plVar14);
  if (((cVar3 == '\0') && (-1 < *(char *)(param_1 + 0x10))) && (!bVar2)) {
    (**(code **)(*plVar14 + 0x230))(plVar14,0);
    (**(code **)(*plVar14 + 0x248))(plVar14);
  }
  return;
}



// FUNCTION 14269aab0 FUN_14269aab0 body=996 status=ok
// SIG undefined FUN_14269aab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14269aab0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (DAT_146af37f0 == '\0') {
    uVar10 = 0;
    cVar6 = FUN_14286ab60(DAT_146b17150,param_1,0x11b,0x11a);
    if (cVar6 != '\0') {
      uVar7 = FUN_142873c60(DAT_146b17150,param_1,0x11b);
      *(undefined8 *)(param_1 + 0x30) = uVar7;
    }
    plVar13 = *(longlong **)(param_1 + 0x30);
    if (plVar13 == (longlong *)0x0) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (&local_78,L"Error creating network driver.",L"Engine",L"NetworkDriverInit")
      ;
      uVar7 = FText::ToString(uVar7);
      FString::operator=(param_1 + 0xb8,uVar7);
      plVar13 = (longlong *)CONCAT44(uStack_6c,uStack_70);
    }
    else {
      cVar6 = (**(code **)(*plVar13 + 0x288))(plVar13,param_1 + 0x28,param_1 + 0x40,param_1 + 0xb8);
      if (cVar6 != '\0') {
        DAT_146533e04 = DAT_146533e04 + 1;
        bVar4 = false;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x90);
        lVar9 = (longlong)(DAT_146533df8 + -1);
        if (-1 < DAT_146533df8 + -1) {
          lVar11 = lVar9 << 4;
          bVar4 = false;
          do {
            if (((*(int *)(DAT_146533df0 + 8 + lVar11) == 0) ||
                (plVar13 = *(longlong **)(DAT_146533df0 + lVar11), plVar13 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar13 + 0x40))(plVar13,param_1), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar11 = lVar11 + -0x10;
            lVar9 = lVar9 + -1;
          } while (-1 < lVar9);
        }
        iVar3 = DAT_146533df8;
        DAT_146533e04 = DAT_146533e04 + -1;
        if ((bVar4) && (DAT_146533e04 < 1)) {
          uVar12 = uVar10;
          if (0 < DAT_146533df8) {
            do {
              if (((*(int *)(DAT_146533df0 + 8 + uVar12) == 0) ||
                  (*(longlong **)(DAT_146533df0 + uVar12) == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(**(longlong **)(DAT_146533df0 + uVar12) + 0x10))(),
                 cVar6 != '\0')) {
                TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146533df0,uVar10,1,1);
              }
              else {
                uVar10 = (ulonglong)((int)uVar10 + 1);
                uVar12 = uVar12 + 0x10;
              }
            } while ((int)uVar10 < DAT_146533df8);
          }
          _DAT_146533e00 = DAT_146533df8 * 2;
          if (_DAT_146533e00 < 3) {
            _DAT_146533e00 = 2;
          }
          if ((_DAT_146533e00 < iVar3) && (DAT_146533dfc != DAT_146533df8)) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146533df0);
          }
        }
        if (*(longlong *)(lVar5 + 0x138) != 0) {
          uStack_70 = 0;
          local_78 = FUN_1426a8190;
          local_88 = 0;
          local_80 = 0;
          puVar8 = (undefined8 *)operator_new(0x30,&local_88);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = &PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(puVar8 + 1,param_1);
            *(undefined4 *)(puVar8 + 2) = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar8 + 0x14) = local_78._4_4_;
            *(undefined4 *)(puVar8 + 3) = uStack_70;
            *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_6c;
            uVar7 = FDelegateHandle::GenerateNewID();
            puVar8[5] = uVar7;
            *puVar8 = &PTR_FUN_143f77bd0;
          }
          FUN_1421e1490(*(undefined8 *)(lVar5 + 0x138),&local_88);
          return;
        }
        FUN_1426a8190(param_1);
        return;
      }
      FUN_14286cb80(DAT_146b17150,param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x120));
      *(undefined8 *)(param_1 + 0x30) = 0;
      if ((*(int *)(param_1 + 0xc0) != 0) && (*(int *)(param_1 + 0xc0) != 1)) {
        return;
      }
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_60,L"Error initializing network layer.",L"Engine",L"NetworkInit");
      uVar7 = FText::ToString(uVar7);
      FString::operator=(param_1 + 0xb8,uVar7);
      plVar13 = local_58;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar13 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    return;
  }
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,
                     L"Console commands were used which are disallowed in netplay.  You must restart the game to create a match."
                     ,L"Engine",L"UsedCheatCommands");
  uVar7 = FText::ToString(uVar7);
  FString::operator=(param_1 + 0xb8,uVar7);
  if (local_40 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar13 = local_40 + 1;
  lVar5 = *plVar13;
  *(int *)plVar13 = (int)*plVar13 + -1;
  UNLOCK();
  if ((int)lVar5 != 1) {
    return;
  }
  (**(code **)*local_40)(local_40);
  LOCK();
  piVar2 = (int *)((longlong)local_40 + 0xc);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return;
  }
  (**(code **)(*local_40 + 8))(local_40,1);
  return;
}



// FUNCTION 14269aea0 FUN_14269aea0 body=385 status=ok
// SIG undefined FUN_14269aea0(void)

void FUN_14269aea0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  FParticleEmitterInstance::InitParameters();
  *(uint *)(param_1 + 0x250) = *(uint *)(param_1 + 0x250) | 1;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  lVar3 = UParticleEmitter::GetLODLevel(param_2);
  plVar1 = (longlong *)(param_1 + 0x210);
  iVar4 = 0;
  lVar3 = *(longlong *)(lVar3 + 0x48);
  *(longlong *)(param_1 + 0x268) = lVar3;
  *(uint *)(param_1 + 0x208) =
       *(uint *)(param_1 + 0x208) ^ (*(uint *)(lVar3 + 0x38) ^ *(uint *)(param_1 + 0x208)) & 1;
  *(undefined4 *)(param_1 + 0x218) = 0;
  iVar5 = iVar4;
  if (*(int *)(param_1 + 0x21c) != 1) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar5 = *(int *)(param_1 + 0x218);
  }
  *(int *)(param_1 + 0x218) = iVar5 + 1;
  if (*(int *)(param_1 + 0x21c) < iVar5 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  plVar2 = (longlong *)(param_1 + 0x230);
  *(undefined4 *)(*plVar1 + (longlong)iVar5 * 4) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  iVar5 = iVar4;
  if (*(int *)(param_1 + 0x23c) != 1) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar2);
    iVar5 = *(int *)(param_1 + 0x238);
  }
  *(int *)(param_1 + 0x238) = iVar5 + 1;
  if (*(int *)(param_1 + 0x23c) < iVar5 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2);
  }
  plVar1 = (longlong *)(param_1 + 0x240);
  *(undefined4 *)(*plVar2 + (longlong)iVar5 * 4) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  if (*(int *)(param_1 + 0x24c) != 1) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar4 = *(int *)(param_1 + 0x248);
  }
  *(int *)(param_1 + 0x248) = iVar4 + 1;
  if (*(int *)(param_1 + 0x24c) < iVar4 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar4 * 4) = 0;
  lVar3 = FUN_142627a50(param_1,*(undefined8 *)(param_1 + 600));
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)(*(longlong *)(param_1 + 600) + 0x40);
    *(undefined4 *)(lVar3 + 0x30) = 0;
    if (*(int *)(lVar3 + 0x34) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(lVar3 + 0x28,0);
    }
    *(undefined4 *)(lVar3 + 0x78) = 0;
  }
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  return;
}



// FUNCTION 14269b030 FUN_14269b030 body=2099 status=ok
// SIG undefined FUN_14269b030(void)

void FUN_14269b030(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  FParticleEmitterInstance::InitParameters();
  *(uint *)(param_1 + 0x250) = *(uint *)(param_1 + 0x250) | 1;
  iVar6 = 0;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  lVar5 = UParticleEmitter::GetLODLevel(param_2,0);
  lVar5 = *(longlong *)(lVar5 + 0x48);
  *(longlong *)(param_1 + 0x268) = lVar5;
  if (*(int *)(lVar5 + 0x40) < 1) {
    *(undefined4 *)(lVar5 + 0x40) = 1;
    lVar5 = *(longlong *)(param_1 + 0x268);
  }
  plVar1 = (longlong *)(param_1 + 0x210);
  *(uint *)(param_1 + 0x208) =
       *(uint *)(param_1 + 0x208) ^ (*(uint *)(lVar5 + 0x48) ^ *(uint *)(param_1 + 0x208)) & 1;
  iVar4 = *(int *)(lVar5 + 0x40);
  *(int *)(param_1 + 0x1fc) = iVar4;
  *(undefined4 *)(param_1 + 0x218) = 0;
  iVar3 = iVar7;
  if (*(int *)(param_1 + 0x21c) != iVar4) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar3 = *(int *)(param_1 + 0x218);
  }
  iVar4 = *(int *)(param_1 + 0x1fc);
  iVar2 = iVar3 + iVar4;
  *(int *)(param_1 + 0x218) = iVar2;
  if (*(int *)(param_1 + 0x21c) < iVar2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar3 * 4),0,(longlong)iVar4 << 2);
  plVar1 = (longlong *)(param_1 + 0x288);
  *(undefined4 *)(param_1 + 0x290) = 0;
  if (*(int *)(param_1 + 0x294) != *(int *)(param_1 + 0x1fc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1);
    iVar7 = *(int *)(param_1 + 0x290);
  }
  iVar4 = *(int *)(param_1 + 0x1fc);
  iVar3 = iVar7 + iVar4;
  *(int *)(param_1 + 0x290) = iVar3;
  if (*(int *)(param_1 + 0x294) < iVar3) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 0xc),0,(longlong)iVar4 * 0xc);
  plVar1 = (longlong *)(param_1 + 0x298);
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  iVar7 = iVar4;
  if (*(int *)(param_1 + 0x2a4) != *(int *)(param_1 + 0x1fc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1);
    iVar7 = *(int *)(param_1 + 0x2a0);
  }
  iVar3 = *(int *)(param_1 + 0x1fc);
  iVar2 = iVar7 + iVar3;
  *(int *)(param_1 + 0x2a0) = iVar2;
  if (*(int *)(param_1 + 0x2a4) < iVar2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar7 * 0x10 + *plVar1),0,(longlong)iVar3 << 4);
  plVar1 = (longlong *)(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  iVar7 = iVar4;
  if (*(int *)(param_1 + 0x2b4) != *(int *)(param_1 + 0x1fc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1);
    iVar7 = *(int *)(param_1 + 0x2b0);
  }
  iVar3 = *(int *)(param_1 + 0x1fc);
  iVar2 = iVar7 + iVar3;
  *(int *)(param_1 + 0x2b0) = iVar2;
  if (*(int *)(param_1 + 0x2b4) < iVar2) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 0xc),0,(longlong)iVar3 * 0xc);
  plVar1 = (longlong *)(param_1 + 0x2b8);
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  iVar7 = iVar6;
  if (*(int *)(param_1 + 0x2c4) != *(int *)(param_1 + 0x1fc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1);
    iVar7 = *(int *)(param_1 + 0x2c0);
  }
  iVar3 = *(int *)(param_1 + 0x1fc);
  iVar2 = iVar3 + iVar7;
  *(int *)(param_1 + 0x2c0) = iVar2;
  if (*(int *)(param_1 + 0x2c4) < iVar2) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 0xc),0,(longlong)iVar3 * 0xc);
  plVar1 = (longlong *)(param_1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  iVar7 = iVar4;
  if (*(int *)(param_1 + 0x2d4) != *(int *)(param_1 + 0x1fc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar7 = *(int *)(param_1 + 0x2d0);
  }
  iVar3 = *(int *)(param_1 + 0x1fc);
  iVar2 = iVar7 + iVar3;
  *(int *)(param_1 + 0x2d0) = iVar2;
  if (*(int *)(param_1 + 0x2d4) < iVar2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 4),0,(longlong)iVar3 << 2);
  plVar1 = (longlong *)(param_1 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  iVar7 = iVar6;
  if (*(int *)(param_1 + 0x2e4) != *(int *)(param_1 + 0x1fc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1);
    iVar7 = *(int *)(param_1 + 0x2e0);
  }
  iVar3 = *(int *)(param_1 + 0x1fc);
  iVar2 = iVar3 + iVar7;
  *(int *)(param_1 + 0x2e0) = iVar2;
  if (*(int *)(param_1 + 0x2e4) < iVar2) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 0xc),0,(longlong)iVar3 * 0xc);
  plVar1 = (longlong *)(param_1 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  iVar7 = iVar6;
  if (*(int *)(param_1 + 0x2f4) != *(int *)(param_1 + 0x1fc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1);
    iVar7 = *(int *)(param_1 + 0x2f0);
  }
  iVar3 = *(int *)(param_1 + 0x1fc);
  iVar2 = iVar3 + iVar7;
  *(int *)(param_1 + 0x2f0) = iVar2;
  if (*(int *)(param_1 + 0x2f4) < iVar2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar7 * 0x10 + *plVar1),0,(longlong)iVar3 << 4);
  plVar1 = (longlong *)(param_1 + 0x2f8);
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (*(int *)(param_1 + 0x304) != *(int *)(param_1 + 0x1fc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1);
    iVar4 = *(int *)(param_1 + 0x300);
  }
  iVar7 = *(int *)(param_1 + 0x1fc);
  iVar3 = iVar4 + iVar7;
  *(int *)(param_1 + 0x300) = iVar3;
  if (*(int *)(param_1 + 0x304) < iVar3) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar4 * 0xc),0,(longlong)iVar7 * 0xc);
  plVar1 = (longlong *)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0x310) = 0;
  iVar7 = iVar6;
  if (*(int *)(param_1 + 0x314) != *(int *)(param_1 + 0x1fc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1);
    iVar7 = *(int *)(param_1 + 0x310);
  }
  iVar4 = *(int *)(param_1 + 0x1fc);
  iVar3 = iVar4 + iVar7;
  *(int *)(param_1 + 0x310) = iVar3;
  if (*(int *)(param_1 + 0x314) < iVar3) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 0xc),0,(longlong)iVar4 * 0xc);
  plVar1 = (longlong *)(param_1 + 0x318);
  *(undefined4 *)(param_1 + 800) = 0;
  iVar7 = iVar6;
  if (*(int *)(param_1 + 0x324) != *(int *)(param_1 + 0x1fc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar7 = *(int *)(param_1 + 800);
  }
  iVar4 = *(int *)(param_1 + 0x1fc);
  iVar3 = iVar4 + iVar7;
  *(int *)(param_1 + 800) = iVar3;
  if (*(int *)(param_1 + 0x324) < iVar3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 4),0,(longlong)iVar4 << 2);
  plVar1 = (longlong *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x238) = 0;
  iVar7 = iVar6;
  if (*(int *)(param_1 + 0x23c) != *(int *)(param_1 + 0x1fc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar7 = *(int *)(param_1 + 0x238);
  }
  iVar4 = *(int *)(param_1 + 0x1fc);
  iVar3 = iVar4 + iVar7;
  *(int *)(param_1 + 0x238) = iVar3;
  if (*(int *)(param_1 + 0x23c) < iVar3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 4),0,(longlong)iVar4 << 2);
  plVar1 = (longlong *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x248) = 0;
  iVar7 = iVar6;
  if (*(int *)(param_1 + 0x24c) != *(int *)(param_1 + 0x1fc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar7 = *(int *)(param_1 + 0x248);
  }
  iVar4 = *(int *)(param_1 + 0x1fc);
  iVar3 = iVar4 + iVar7;
  *(int *)(param_1 + 0x248) = iVar3;
  if (*(int *)(param_1 + 0x24c) < iVar3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 4),0,(longlong)iVar4 << 2);
  plVar1 = (longlong *)(param_1 + 0x330);
  *(undefined4 *)(param_1 + 0x338) = 0;
  iVar7 = iVar6;
  if (*(int *)(param_1 + 0x33c) != *(int *)(param_1 + 0x1fc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1);
    iVar7 = *(int *)(param_1 + 0x338);
  }
  iVar4 = *(int *)(param_1 + 0x1fc);
  iVar3 = iVar4 + iVar7;
  *(int *)(param_1 + 0x338) = iVar3;
  if (*(int *)(param_1 + 0x33c) < iVar3) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 0xc),0,(longlong)iVar4 * 0xc);
  plVar1 = (longlong *)(param_1 + 0x350);
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  iVar7 = iVar4;
  if (*(int *)(param_1 + 0x35c) != *(int *)(param_1 + 0x1fc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar7 = *(int *)(param_1 + 0x358);
  }
  iVar3 = *(int *)(param_1 + 0x1fc);
  iVar2 = iVar7 + iVar3;
  *(int *)(param_1 + 0x358) = iVar2;
  if (*(int *)(param_1 + 0x35c) < iVar2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 4),0,(longlong)iVar3 << 2);
  _guard_xfg_dispatch_icall_nop((void *)*plVar1,0xff,(longlong)*(int *)(param_1 + 0x1fc) << 2);
  plVar1 = (longlong *)(param_1 + 0x360);
  *(undefined4 *)(param_1 + 0x368) = 0;
  iVar7 = iVar6;
  if (*(int *)(param_1 + 0x36c) != *(int *)(param_1 + 0x1fc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar7 = *(int *)(param_1 + 0x368);
  }
  iVar3 = *(int *)(param_1 + 0x1fc);
  iVar2 = iVar3 + iVar7;
  *(int *)(param_1 + 0x368) = iVar2;
  if (*(int *)(param_1 + 0x36c) < iVar2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 4),0,(longlong)iVar3 << 2);
  plVar1 = (longlong *)(param_1 + 0x370);
  *(undefined4 *)(param_1 + 0x378) = 0;
  iVar7 = iVar4;
  if (*(int *)(param_1 + 0x37c) != *(int *)(param_1 + 0x1fc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar7 = *(int *)(param_1 + 0x378);
  }
  iVar3 = *(int *)(param_1 + 0x1fc);
  iVar2 = iVar7 + iVar3;
  *(int *)(param_1 + 0x378) = iVar2;
  if (*(int *)(param_1 + 0x37c) < iVar2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 4),0,(longlong)iVar3 << 2);
  plVar1 = (longlong *)(param_1 + 0x380);
  *(undefined4 *)(param_1 + 0x388) = 0;
  iVar7 = iVar6;
  if (*(int *)(param_1 + 0x38c) != *(int *)(param_1 + 0x1fc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar7 = *(int *)(param_1 + 0x388);
  }
  iVar3 = *(int *)(param_1 + 0x1fc);
  iVar2 = iVar3 + iVar7;
  *(int *)(param_1 + 0x388) = iVar2;
  if (*(int *)(param_1 + 0x38c) < iVar2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 4),0,(longlong)iVar3 << 2);
  plVar1 = (longlong *)(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x398) = 0;
  if (*(int *)(param_1 + 0x39c) != *(int *)(param_1 + 0x1fc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar4 = *(int *)(param_1 + 0x398);
  }
  iVar7 = *(int *)(param_1 + 0x1fc);
  iVar3 = iVar4 + iVar7;
  *(int *)(param_1 + 0x398) = iVar3;
  if (*(int *)(param_1 + 0x39c) < iVar3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar4 * 4),0,(longlong)iVar7 << 2);
  plVar1 = (longlong *)(param_1 + 0x3a0);
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  if (*(int *)(param_1 + 0x3ac) != *(int *)(param_1 + 0x1fc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar6 = *(int *)(param_1 + 0x3a8);
  }
  iVar7 = *(int *)(param_1 + 0x1fc);
  iVar4 = iVar7 + iVar6;
  *(int *)(param_1 + 0x3a8) = iVar4;
  if (*(int *)(param_1 + 0x3ac) < iVar4) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar6 * 4),0,(longlong)iVar7 << 2);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(*(longlong *)(param_1 + 0x268) + 0x68);
  *(byte *)(param_1 + 0x3b5) = *(byte *)(*(longlong *)(param_1 + 0x268) + 0x6c) & 1;
  FUN_1426a6b20(param_1);
  return;
}



// FUNCTION 14269b870 FUN_14269b870 body=42 status=ok
// SIG undefined FUN_14269b870(void)

void FUN_14269b870(longlong param_1)

{
  FParticleEmitterInstance::InitParameters();
  *(uint *)(param_1 + 0x250) = *(uint *)(param_1 + 0x250) | 1;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  return;
}



// FUNCTION 14269b8a0 FUN_14269b8a0 body=211 status=ok
// SIG undefined FUN_14269b8a0(void)

void FUN_14269b8a0(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  
  if ((param_1[0x26] != 0) && (lVar2 = param_1[0x92], lVar2 != 0)) {
    lVar5 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      param_1[0x97] = *(longlong *)(lVar2 + 0x18);
      (**(code **)(*param_1 + 0x7e0))(param_1,param_1[0x26]);
      FUN_14234b150(param_1[0x26]);
      cVar4 = UInputDelegateBinding::SupportsInputDelegate(param_1[2]);
      if (cVar4 != '\0') {
        pbVar1 = (byte *)(param_1[0x26] + 0x1fc);
        *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)param_1 + 0x91) >> 5 ^
                            *(byte *)(param_1[0x26] + 0x1fc)) & 1;
        FUN_1424e5130(param_1[2],param_1[0x26]);
      }
    }
  }
  return;
}



// FUNCTION 14269b980 FUN_14269b980 body=361 status=ok
// SIG undefined FUN_14269b980(void)

void FUN_14269b980(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  puVar5 = (undefined8 *)0x0;
  uVar7 = 0;
  if (DAT_1464c9c6c != '\0') {
    iVar3 = *(int *)(param_1 + 0x330);
    *(int *)(param_1 + 0x330) = iVar3 + 1;
    if (*(int *)(param_1 + 0x334) < iVar3 + 1) {
      TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(param_1 + 0x30,iVar3);
    }
    puVar2 = (undefined8 *)(param_1 + 0x30 + (longlong)iVar3 * 0x18);
    puVar4 = puVar5;
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined2 *)(puVar2 + 2) = 0;
      puVar4 = puVar2;
    }
    puVar4[1] = 8;
    *puVar4 = &PTR_PTR_1465345d0;
  }
  lVar1 = param_1 + 0x30;
  iVar3 = *(int *)(param_1 + 0x330);
  *(int *)(param_1 + 0x330) = iVar3 + 1;
  if (*(int *)(param_1 + 0x334) < iVar3 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(lVar1,iVar3);
  }
  puVar2 = (undefined8 *)(lVar1 + (longlong)iVar3 * 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined2 *)(puVar2 + 2) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x330);
  *(int *)(param_1 + 0x330) = iVar3 + 1;
  if (*(int *)(param_1 + 0x334) < iVar3 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(lVar1,iVar3);
  }
  puVar2 = (undefined8 *)(lVar1 + (longlong)iVar3 * 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined2 *)(puVar2 + 2) = 0;
    puVar5 = puVar2;
  }
  if (*(char *)(param_1 + 0x699) != '\0') {
    uVar7 = *(undefined4 *)(param_1 + 0x69c);
  }
  *(undefined4 *)(puVar5 + 1) = uVar7;
  if (*(char *)(param_1 + 0x699) == '\0') {
    uVar6 = DAT_146534830;
    if (DAT_1464c9c6c != '\0') {
      uVar6 = DAT_1465347f0;
    }
  }
  else {
    uVar6 = DAT_1465348b0;
    if (DAT_1464c9c6c != '\0') {
      uVar6 = DAT_146534870;
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x648,uVar6);
  return;
}



// FUNCTION 14269baf0 FUN_14269baf0 body=686 status=ok
// SIG undefined FUN_14269baf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ******* FUN_14269baf0(longlong param_1)

{
  undefined8 **ppuVar1;
  int *piVar2;
  undefined8 ******ppppppuVar3;
  int iVar4;
  uint uVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *puVar7;
  undefined8 ******ppppppuVar8;
  char cVar9;
  undefined8 *******pppppppuVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 *local_a0;
  undefined8 ******local_98;
  undefined **local_90;
  undefined8 *****local_88;
  int local_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  pppppppuVar6 = *(undefined8 ********)(param_1 + 0x38);
  local_80 = *(int *)(pppppppuVar6 + 1) << 3;
  if (local_80 == 0) {
    return pppppppuVar6;
  }
  local_88 = *pppppppuVar6;
  local_b0 = &local_78;
  local_90 = &PTR_GetBoundProgramCounterForTimerManager_145000428;
  local_70 = &local_90;
  local_68 = 1;
  local_78 = 0;
  local_64 = _DAT_1468b5d78;
  uStack_60 = uRam00000001468b5d7c;
  uStack_5c = uRam00000001468b5d80;
  uStack_58 = uRam00000001468b5d84;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_b8 = 0x201;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_a0,&DAT_146ab6e78);
  ppuVar1 = (undefined8 **)(param_1 + 0x30);
  if (ppuVar1 != &local_a0) {
    puVar7 = *ppuVar1;
    *ppuVar1 = local_a0;
    local_a0 = (undefined8 *)0x0;
    if (puVar7 == (undefined8 *)0x0) goto LAB_14269bc76;
    LOCK();
    piVar2 = (int *)(puVar7 + 1);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      if ((*(char *)(puVar7 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(), cVar9 == '\0')))
         ) {
        LOCK();
        bVar11 = *(int *)((longlong)puVar7 + 0xc) == 0;
        if (bVar11) {
          *(int *)((longlong)puVar7 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar11) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar7);
        }
      }
      else {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  puVar7 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_a0 + 1);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      if ((*(char *)(local_a0 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(), cVar9 == '\0')))
         ) {
        LOCK();
        bVar11 = *(int *)((longlong)puVar7 + 0xc) == 0;
        if (bVar11) {
          *(int *)((longlong)puVar7 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar11) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar7);
        }
      }
      else {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
LAB_14269bc76:
  local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,0x11);
  local_b8 = 8;
  (**(code **)(*DAT_146ab6358 + 0x4a8))(DAT_146ab6358,&local_98,&DAT_146ab6e78,*ppuVar1);
  ppppppuVar3 = local_98;
  pppppppuVar6 = (undefined8 *******)(param_1 + 0x40);
  pppppppuVar10 = &local_98;
  if (pppppppuVar6 != pppppppuVar10) {
    ppppppuVar8 = *pppppppuVar6;
    *pppppppuVar6 = local_98;
    local_98 = (undefined8 *******)0x0;
    if (ppppppuVar8 == (undefined8 ******)0x0) {
      return (undefined8 *******)ppppppuVar3;
    }
    LOCK();
    ppppppuVar3 = ppppppuVar8 + 1;
    uVar5 = *(uint *)ppppppuVar3;
    pppppppuVar10 = (undefined8 *******)(ulonglong)uVar5;
    *(uint *)ppppppuVar3 = *(uint *)ppppppuVar3 - 1;
    UNLOCK();
    if (uVar5 == 1) {
      if ((*(char *)(ppppppuVar8 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(), cVar9 == '\0')))
         ) {
        pppppppuVar10 = (undefined8 *******)0x0;
        LOCK();
        uVar5 = *(uint *)((longlong)ppppppuVar8 + 0xc);
        if (uVar5 == 0) {
          *(uint *)((longlong)ppppppuVar8 + 0xc) = 1;
        }
        else {
          pppppppuVar10 = (undefined8 *******)(ulonglong)uVar5;
        }
        UNLOCK();
        if (uVar5 == 0) {
          pppppppuVar10 =
               (undefined8 *******)
               TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppppppuVar8);
        }
      }
      else {
        pppppppuVar10 = (undefined8 *******)(*(code *)**ppppppuVar8)(ppppppuVar8,1);
      }
    }
  }
  ppppppuVar3 = local_98;
  if ((undefined8 *******)local_98 != (undefined8 *******)0x0) {
    LOCK();
    pppppppuVar6 = (undefined8 *******)(local_98 + 1);
    iVar4 = *(int *)pppppppuVar6;
    *(int *)pppppppuVar6 = *(int *)pppppppuVar6 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      if ((*(char *)(local_98 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar9 = FOutputDevice::CanBeUsedOnAnyThread(), cVar9 == '\0')))
         ) {
        pppppppuVar10 = (undefined8 *******)0x0;
        LOCK();
        uVar5 = *(uint *)((longlong)ppppppuVar3 + 0xc);
        if (uVar5 == 0) {
          *(uint *)((longlong)ppppppuVar3 + 0xc) = 1;
        }
        else {
          pppppppuVar10 = (undefined8 *******)(ulonglong)uVar5;
        }
        UNLOCK();
        if (uVar5 == 0) {
          pppppppuVar10 =
               (undefined8 *******)
               TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,ppppppuVar3);
        }
      }
      else {
        pppppppuVar10 = (undefined8 *******)(*(code *)**ppppppuVar3)(ppppppuVar3,1);
      }
    }
  }
  return pppppppuVar10;
}



// FUNCTION 14269bda0 FUN_14269bda0 body=742 status=ok
// SIG undefined FUN_14269bda0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14269bda0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 local_b8;
  ushort local_b7;
  undefined1 local_b5;
  undefined8 local_b0;
  undefined1 local_a8 [48];
  longlong local_78;
  longlong *local_60;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar6 < DAT_146b07908) {
    _Init_thread_header(&DAT_146b07908);
    if (DAT_146b07908 == -1) {
      atexit((_func_5014 *)&LAB_143eb60a0);
      _Init_thread_footer(&DAT_146b07908);
    }
  }
  if (*piVar6 < DAT_146b07920) {
    _Init_thread_header(&DAT_146b07920);
    if (DAT_146b07920 == -1) {
      atexit((_func_5014 *)&LAB_143eb66b0);
      _Init_thread_footer(&DAT_146b07920);
    }
  }
  if ((void **)param_1 != &DAT_146b078f8) {
    _DAT_146b07900 = *(int *)(param_1 + 1);
    lVar7 = (longlong)_DAT_146b07900;
    pvVar3 = (void *)*param_1;
    if ((_DAT_146b07900 == 0) && (DAT_146b07904 == 0)) {
      DAT_146b07904 = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (&DAT_146b078f8,_DAT_146b07900);
      _guard_xfg_dispatch_icall_nop(DAT_146b078f8,pvVar3,lVar7 << 3);
    }
  }
  if ((void **)param_2 != &DAT_146b07910) {
    _DAT_146b07918 = *(int *)(param_2 + 1);
    lVar7 = (longlong)_DAT_146b07918;
    pvVar3 = (void *)*param_2;
    if ((_DAT_146b07918 == 0) && (DAT_146b0791c == 0)) {
      DAT_146b0791c = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&DAT_146b07910,_DAT_146b07918);
      _guard_xfg_dispatch_icall_nop(DAT_146b07910,pvVar3,lVar7 * 0x30);
    }
  }
  if ((param_4 == 0) || (local_b8 = 0, *(char *)(param_4 + 0x24e) != '\x02')) {
    local_b8 = 1;
  }
  local_b5 = 0;
  local_b0 = 0;
  if (param_4 != 0) {
    lVar7 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_b7 = CONCAT11(~(*(byte *)(param_4 + 0xb1c) >> 1),1) & 0x1ff;
      goto LAB_14269bf27;
    }
  }
  local_b7 = 0x100;
LAB_14269bf27:
  FUN_142684c90(local_a8,&DAT_146b078f8,&DAT_146b07910,param_3,param_4,param_5,&local_b8,0);
  FUN_142699af0(local_a8);
  _DAT_146b07900 = 0;
  if ((DAT_146b07904 < 0) && (DAT_146b07904 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b078f8,0);
  }
  _DAT_146b07918 = 0;
  if ((DAT_146b0791c < 0) && (DAT_146b0791c != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(&DAT_146b07910,0);
  }
  plVar5 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar6 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14269c090 Initialize body=246 status=ok
// SIG undefined Initialize(void)

void UPendingNetGame::Initialize(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  FString::operator=(param_1 + 0x40);
  FString::operator=(param_1 + 0x50,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x20);
  FString::operator=(param_1 + 0x68,param_2 + 0x28);
  FString::operator=(param_1 + 0x78,param_2 + 0x38);
  puVar1 = (undefined8 *)(param_1 + 0x88);
  if (puVar1 != (undefined8 *)(param_2 + 0x48)) {
    plVar2 = (longlong *)*puVar1;
    for (iVar3 = *(int *)(param_1 + 0x90); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
              (puVar1,*(undefined8 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x50),
               *(undefined4 *)(param_1 + 0x94),0);
  }
  FString::operator=(param_1 + 0x98,param_2 + 0x58);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x68);
  *(undefined2 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 14269c190 FUN_14269c190 body=1458 status=ok
// SIG undefined FUN_14269c190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14269c190(longlong param_1,undefined8 param_2,float *param_3,float *param_4,longlong param_5,
             char param_6,longlong *param_7)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_3b8 [32];
  longlong *local_398;
  float *local_390;
  float *local_388;
  undefined2 *local_380;
  undefined8 *local_378;
  undefined1 local_370;
  undefined1 local_368;
  undefined2 local_358 [4];
  longlong local_350 [2];
  float local_340;
  float local_33c;
  float local_338;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  longlong local_2d0;
  float *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  undefined4 local_2a8;
  undefined2 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined8 local_278;
  undefined8 uStack_270;
  float local_268;
  float local_264;
  float local_260;
  undefined1 local_258 [12];
  uint local_24c;
  undefined1 local_248 [16];
  undefined1 local_238 [256];
  undefined1 *local_138;
  undefined8 local_130;
  undefined1 local_128 [48];
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  fVar12 = *param_4 - *param_3;
  fVar13 = param_4[1] - param_3[1];
  fVar14 = param_4[2] - param_3[2];
  local_350[0] = param_5;
  fVar19 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14);
  if (0.0001 < fVar19) {
    local_2c8 = param_4;
    local_2c0 = param_2;
    local_2d0 = FWeakObjectPtr::Get(param_1 + 0x138);
    local_2f0 = *(undefined8 *)(param_5 + 0x20);
    uStack_2e8 = *(undefined8 *)(param_5 + 0x28);
    local_2dc = param_3[1];
    local_2e0 = *param_3;
    local_2d8 = param_3[2];
    U2PTransform(&local_330,local_2d0 + 0x210);
    lVar11 = 0;
    local_338 = 1.0 / fVar19;
    local_2a8 = 0xffffffff;
    local_2a0 = 0;
    local_29c = 0;
    local_288 = 0;
    local_138 = (undefined1 *)0x0;
    local_130 = 0;
    local_340 = local_338 * fVar12;
    local_33c = local_338 * fVar13;
    local_338 = local_338 * fVar14;
    local_284 = 0x7f7fffff;
    local_2b8 = 0;
    plStack_2b0 = (longlong *)0x0;
    local_298 = 0;
    uStack_290 = 0;
    iVar5 = (**(code **)(*param_7 + 200))(param_7);
    iVar9 = (int)local_130 + iVar5;
    local_130 = CONCAT44(local_130._4_4_,iVar9);
    if (local_130._4_4_ < iVar9) {
      FUN_14157a330(local_238);
    }
    puVar10 = local_238;
    if (local_138 != (undefined1 *)0x0) {
      puVar10 = local_138;
    }
    (**(code **)(*param_7 + 0xd0))(param_7,puVar10,iVar5,0);
    puVar10 = local_138;
    if (0 < iVar5) {
      do {
        puVar6 = local_238;
        if (puVar10 != (undefined1 *)0x0) {
          puVar6 = puVar10;
        }
        plVar1 = *(longlong **)(puVar6 + lVar11 * 8);
        lVar7 = FUN_142697530(param_1,plVar1);
        if (lVar7 == param_1) {
          (**(code **)(*plVar1 + 0xb0))(plVar1,local_258);
          uVar3 = local_24c;
          if (param_6 != '\0') {
            uVar3 = local_24c >> 1;
          }
          puVar10 = local_138;
          if ((uVar3 & 1) != 0) {
            lVar7 = (**(code **)(*plVar1 + 0x90))(plVar1,&local_278);
            fVar17 = *(float *)(lVar7 + 0x10) + *(float *)(lVar7 + 0x10);
            fVar13 = *(float *)(lVar7 + 0x14) + *(float *)(lVar7 + 0x14);
            fVar16 = *(float *)(lVar7 + 0x18) + *(float *)(lVar7 + 0x18);
            fVar14 = local_324 * local_324 - 0.5;
            fVar12 = local_32c * fVar13 + local_330 * fVar17 + local_328 * fVar16;
            fVar15 = (local_32c * fVar16 - local_328 * fVar13) * local_324 + fVar14 * fVar17 +
                     local_330 * fVar12 + local_320;
            fVar18 = (local_330 * fVar13 - local_32c * fVar17) * local_324 + fVar14 * fVar16 +
                     local_328 * fVar12 + local_318;
            fVar12 = (local_328 * fVar17 - local_330 * fVar16) * local_324 + fVar14 * fVar13 +
                     local_32c * fVar12 + local_31c;
            puVar8 = (undefined4 *)physx::PxQuat::operator*(&local_330,local_248,lVar7);
            local_310 = *puVar8;
            local_30c = puVar8[1];
            local_308 = puVar8[2];
            local_304 = puVar8[3];
            uVar2 = *(undefined8 *)(local_350[0] + 0x18);
            local_358[0] = 0x607;
            local_300 = fVar15;
            local_2fc = fVar12;
            local_2f8 = fVar18;
            local_398 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,local_128);
            local_378 = (undefined8 *)((ulonglong)local_378 & 0xffffffff00000000);
            local_380 = local_358;
            local_390 = (float *)&local_310;
            local_388 = (float *)&local_2b8;
            bVar4 = physx::PxGeometryQuery::sweep(&local_340,fVar19,uVar2,&local_2f0);
            puVar10 = local_138;
            if (bVar4) {
              local_350[1] = 0xfffff;
              local_350[0] = 0;
              plStack_2b0 = plVar1;
              if ((*(byte *)(param_1 + 0x13) & 8) == 0) {
                local_2b8 = (**(code **)(*plVar1 + 0x80))(plVar1);
              }
              else {
                local_2b8 = *(undefined8 *)(param_1 + 0x110);
              }
              local_264 = param_3[1];
              local_278 = 0;
              uStack_270 = 0x3f80000000000000;
              local_268 = *param_3;
              local_260 = param_3[2];
              local_2a8 = FindFaceIndex(&local_2b8,&local_340);
              lVar11 = *(longlong *)(local_2d0 + 0x120);
              if (lVar11 == 0) {
                lVar11 = FUN_1423407b0();
              }
              local_378 = &local_278;
              local_368 = 0;
              local_370 = 0;
              local_380 = (undefined2 *)0x0;
              local_388 = local_2c8;
              local_398 = local_350;
              local_390 = param_3;
              FUN_142309120(lVar11,&local_2b8,local_2c0,fVar19);
              if (local_138 != (undefined1 *)0x0) {
                FMemory::Free();
              }
              return 1;
            }
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar5);
    }
    if (puVar10 != (undefined1 *)0x0) {
      FMemory::Free(puVar10);
    }
  }
  return 0;
}



// FUNCTION 14269c750 FUN_14269c750 body=107 status=ok
// SIG undefined FUN_14269c750(void)

void FUN_14269c750(longlong *param_1,float *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  
  if ((param_3 == '\0') && (cVar3 = (**(code **)(*param_1 + 0x810))(), cVar3 != '\0')) {
    return;
  }
  fVar1 = param_2[1];
  *(float *)((longlong)param_1 + 0x49c) = *(float *)((longlong)param_1 + 0x49c) + *param_2;
  fVar2 = param_2[2];
  *(float *)(param_1 + 0x94) = fVar1 + *(float *)(param_1 + 0x94);
  *(float *)((longlong)param_1 + 0x4a4) = fVar2 + *(float *)((longlong)param_1 + 0x4a4);
  return;
}



// FUNCTION 14269c7c0 FUN_14269c7c0 body=81 status=ok
// SIG undefined FUN_14269c7c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14269c7c0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(param_1 + 0x49c);
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined8 *)(param_1 + 0x49c) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x4a4) = DAT_1468b5d98;
  uVar1 = *(undefined4 *)(param_1 + 0x4b0);
  *param_2 = *(undefined8 *)(param_1 + 0x4a8);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 14269c820 FUN_14269c820 body=56 status=ok
// SIG undefined FUN_14269c820(void)

void FUN_14269c820(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(undefined8 *)(param_1 + 0x20) = DAT_146aefc50;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x60) = local_res8;
  *(undefined4 *)(param_1 + 100) = local_resc;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfb;
  return;
}



// FUNCTION 14269c860 FUN_14269c860 body=81 status=ok
// SIG undefined FUN_14269c860(void)

undefined8 FUN_14269c860(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x6f0))();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x118);
  }
  if ((lVar2 != 0) && (lVar2 == param_2)) {
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  uVar3 = FUN_1422357b0(param_1,param_2);
  return uVar3;
}



// FUNCTION 14269c8c0 FUN_14269c8c0 body=86 status=ok
// SIG undefined FUN_14269c8c0(void)

bool FUN_14269c8c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x490);
  if (lVar3 != 0) {
    lVar2 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14269c90a;
  }
  lVar3 = 0;
LAB_14269c90a:
  return lVar3 != 0;
}



// FUNCTION 14269c920 FUN_14269c920 body=43 status=ok
// SIG undefined FUN_14269c920(void)

undefined1 FUN_14269c920(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14262b990();
  if ((cVar1 == '\x01') && (*(int *)(param_1 + 0x128) < 2)) {
    return 0;
  }
  return 1;
}



// FUNCTION 14269c970 FUN_14269c970 body=168 status=ok
// SIG undefined FUN_14269c970(void)

bool FUN_14269c970(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x110);
  cVar1 = '\0';
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar4 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_1426e2550();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x348))
                (plVar2,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                 0x116);
    }
    plVar3 = (longlong *)0x0;
    if ((short)plVar4[1] == 6) {
      plVar3 = plVar4;
    }
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x1f0))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x350))(plVar2);
    }
  }
  return cVar1 == '\0';
}



// FUNCTION 14269ca20 FUN_14269ca20 body=43 status=ok
// SIG undefined FUN_14269ca20(void)

undefined8 FUN_14269ca20(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x490) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x490) + 0x768))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14269ca50 FUN_14269ca50 body=43 status=ok
// SIG undefined FUN_14269ca50(void)

undefined8 FUN_14269ca50(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x490) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x490) + 2000))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14269ca80 FUN_14269ca80 body=504 status=ok
// SIG undefined FUN_14269ca80(void)

undefined1 FUN_14269ca80(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (((*(byte *)(param_1 + 0x12) & 8) != 0) ||
     (plVar9 = param_1, param_2 == (longlong *)param_1[0x92])) {
    return 1;
  }
  do {
    if (plVar9 == param_3) {
      return 1;
    }
    plVar1 = plVar9 + 0x23;
    plVar6 = param_1;
    plVar9 = (longlong *)*plVar1;
  } while ((longlong *)*plVar1 != (longlong *)0x0);
  do {
    if (plVar6 == param_2) {
      return 1;
    }
    plVar9 = plVar6 + 0x23;
    plVar6 = (longlong *)*plVar9;
  } while ((longlong *)*plVar9 != (longlong *)0x0);
  if (param_1 == param_3) {
    return 1;
  }
  if (param_3 == (longlong *)param_1[0x2a]) {
    return 1;
  }
  cVar3 = (**(code **)(*param_1 + 0x520))(param_1,param_3);
  if (cVar3 != '\0') {
    return 1;
  }
  if ((param_3 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*param_3 + 0x520))(param_3,param_1), cVar3 != '\0')) {
    return 1;
  }
  if ((((*(byte *)(param_1 + 0x10) & 1) != 0) || ((*(byte *)(param_1 + 0x12) & 4) != 0)) &&
     (((longlong *)param_1[0x2d] == (longlong *)0x0 ||
      (iVar5 = (**(code **)(*(longlong *)param_1[0x2d] + 0x4e8))(), iVar5 == 0)))) {
    return 0;
  }
  lVar7 = (**(code **)(*param_1 + 0x6f0))(param_1);
  if (((lVar7 != 0) && (plVar9 = *(longlong **)(lVar7 + 0x118), plVar9 != (longlong *)0x0)) &&
     (lVar8 = (**(code **)(*param_1 + 0x6e8))(param_1), lVar8 != 0)) {
    lVar8 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) || (plVar9 == (longlong *)param_1[0x23])) {
      uVar4 = (**(code **)(*plVar9 + 0x468))(plVar9,param_2,param_3,param_4);
      return uVar4;
    }
  }
  plVar9 = (longlong *)FUN_14293b120();
  lVar7 = plVar9[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar7 = plVar9[0x1f];
  }
  if ((*(char *)(lVar7 + 0x4d5) != '\0') && (cVar3 = FUN_142235f70(param_1,param_4), cVar3 == '\0'))
  {
    return 0;
  }
  return 1;
}



// FUNCTION 14269cc80 IsNonKinematic body=10 status=ok
// SIG undefined IsNonKinematic(void)

byte FBodyInstance::IsNonKinematic(longlong param_1)

{
  return *(byte *)(param_1 + 0x10) >> 3 & 1;
}



// FUNCTION 14269cc90 FUN_14269cc90 body=27 status=ok
// SIG undefined FUN_14269cc90(void)

longlong FUN_14269cc90(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x478);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x484) & 4) == 0)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 14269ccb0 IsReadyForFinishDestroy body=23 status=ok
// SIG undefined IsReadyForFinishDestroy(void)

bool USubUVAnimation::IsReadyForFinishDestroy(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x50);
  return cVar1 != '\0';
}



// FUNCTION 14269ccd0 IsShapeBoundToBody body=26 status=ok
// SIG undefined IsShapeBoundToBody(void)

bool FBodyInstance::IsShapeBoundToBody(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_142697530();
  return lVar1 == param_1;
}



// FUNCTION 14269ccf0 FUN_14269ccf0 body=71 status=ok
// SIG undefined FUN_14269ccf0(void)

undefined8 FUN_14269ccf0(longlong *param_1)

{
  byte *pbVar1;
  undefined1 local_res8 [32];
  undefined1 local_18 [12];
  uint local_c;
  
  (**(code **)(*param_1 + 0xa0))(param_1,local_18);
  pbVar1 = (byte *)(**(code **)(*param_1 + 0x108))(param_1,local_res8);
  if (((*pbVar1 & 4) == 0) && ((local_c & 0x100) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 14269cd40 IsValidBodyInstance body=26 status=ok
// SIG undefined IsValidBodyInstance(void)

undefined8 FBodyInstance::IsValidBodyInstance(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  bVar2 = false;
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x118);
    bVar2 = lVar1 == 0;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),!bVar2);
}



// FUNCTION 14269cd60 IsValidCollisionProfileName body=24 status=ok
// SIG undefined IsValidCollisionProfileName(void)

undefined8 FBodyInstance::IsValidCollisionProfileName(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (param_1 != DAT_146aefc50)) {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 14269cd80 FUN_14269cd80 body=313 status=ok
// SIG undefined FUN_14269cd80(void)

void FUN_14269cd80(longlong *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ushort *puVar7;
  
  iVar5 = (int)param_1[0x25];
  if (iVar5 == 0) {
    return;
  }
  uVar6 = 0;
  if (iVar5 < 1) {
    return;
  }
  puVar7 = (ushort *)param_1[0x21];
  uVar4 = uVar6;
  while( true ) {
    lVar3 = (longlong)(int)((uint)*puVar7 * *(int *)((longlong)param_1 + 0x124)) + param_1[0x20];
    puVar2 = (uint *)((int)param_1[6] + lVar3);
    if (((*(uint *)((int)param_1[6] + lVar3) & 0xf0000000) == 0x80000000) && (puVar2[1] == param_2))
    break;
    uVar4 = uVar4 + 1;
    puVar7 = puVar7 + 1;
    if ((longlong)iVar5 <= (longlong)uVar4) {
      return;
    }
  }
  if (lVar3 == 0) {
    return;
  }
  if (puVar2[1] != param_2) {
    return;
  }
  while (iVar5 = (int)uVar6, iVar5 < param_3) {
    *(undefined4 *)(lVar3 + 0xc) = 0x3f8ccccd;
    uVar6 = (ulonglong)(iVar5 + 1);
    uVar1 = (int)*puVar2 >> 0xe & 0x3fff;
    if (uVar1 != 0x3fff) {
      lVar3 = (longlong)(int)(uVar1 * *(int *)((longlong)param_1 + 0x124)) + param_1[0x20];
      puVar2 = (uint *)((int)param_1[6] + lVar3);
      if ((*puVar2 & 0xf0000000) == 0x40000000) goto LAB_14269ce85;
      if ((*puVar2 & 0xf0000000) == 0x10000000) {
        puVar2[2] = 0;
        puVar2[7] = 1;
      }
    }
  }
  if (puVar2 == (uint *)0x0) {
LAB_14269ce85:
    iVar5 = param_3;
  }
  if (0 < iVar5) {
    (**(code **)(*param_1 + 0xe0))(param_1);
  }
  return;
}



// FUNCTION 14269cec0 FUN_14269cec0 body=971 status=ok
// SIG undefined FUN_14269cec0(void)

void FUN_14269cec0(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  
  if (0 < *(int *)(param_1 + 0x128)) {
    fVar13 = 0.0;
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       ((*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x120) != 0 ||
        (lVar6 = FUN_1423407b0(), lVar6 != 0)))) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x120);
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0();
      }
      fVar13 = *(float *)(lVar6 + 0x790);
    }
    bVar3 = false;
    iVar4 = *(int *)(param_1 + 0x128) + -1;
    lVar6 = (longlong)iVar4;
    if (-1 < iVar4) {
      do {
        iVar4 = *(int *)(param_1 + 0x124);
        lVar2 = *(longlong *)(param_1 + 0x100);
        lVar10 = (longlong)*(int *)(param_1 + 0x30);
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x108) + lVar6 * 2);
        lVar12 = (int)((uint)uVar1 * iVar4) + lVar2;
        if ((1.0 < *(float *)(lVar12 + 0xc)) ||
           (((((*(byte *)(param_1 + 0x250) & 2) != 0 && (fVar13 != 0.0)) &&
             (1.0 / *(float *)(lVar12 + 0x1c) < fVar13 - *(float *)(param_1 + 0x204))) ||
            ((*(byte *)(param_1 + 0x1e8) & 2) != 0)))) {
          uVar5 = *(uint *)(lVar10 + lVar12);
          uVar9 = uVar5 & 0xf0000000;
          if ((uVar9 == 0x40000000) || (uVar9 == 0x10000000)) {
            if ((uVar5 & 0x3fff) != 0x3fff) {
              lVar11 = (int)((uVar5 & 0x3fff) * iVar4) + lVar10;
              uVar5 = *(uint *)(lVar11 + lVar2);
              if ((uVar5 & 0xf0000000) == 0x80000000) {
                if (uVar9 == 0x40000000) {
                  uVar7 = uVar5 & 0xfffffff | 0x40000000;
                }
                else {
                  uVar7 = uVar5;
                  if (uVar9 == 0x10000000) {
                    uVar7 = uVar5 & 0xfffffff | 0x10000000;
                  }
                }
              }
              else {
                uVar7 = uVar5 & 0xfffffff | 0x10000000;
                if (uVar9 == 0x40000000) {
                  uVar7 = uVar5 & 0xfffffff | 0x40000000;
                }
              }
              *(uint *)(lVar11 + lVar2) = uVar7 | 0xfffc000;
            }
          }
          else if (uVar9 == 0x80000000) {
            uVar5 = (int)uVar5 >> 0xe & 0x3fff;
            if (uVar5 != 0x3fff) {
              puVar8 = (uint *)((int)(uVar5 * iVar4) + lVar10 + lVar2);
              uVar5 = *puVar8;
              if ((uVar5 & 0xf0000000) == 0x40000000) {
                *puVar8 = uVar5 | 0x3fff;
              }
              else if ((uVar5 & 0xf0000000) == 0x10000000) {
                puVar8[2] = 0;
                *puVar8 = uVar5 | 0x3fff;
                puVar8[7] = 1;
              }
              else {
                *puVar8 = uVar5 & 0xfffffff | 0x80003fff;
              }
            }
          }
          else if (uVar9 == 0x20000000) {
            uVar9 = (int)uVar5 >> 0xe & 0x3fff;
            uVar5 = uVar5 & 0x3fff;
            if (uVar9 != 0x3fff) {
              puVar8 = (uint *)((int)(uVar9 * iVar4) + lVar10 + lVar2);
              uVar9 = *puVar8;
              if ((uVar9 & 0xf0000000) != 0x40000000) {
                if ((uVar9 & 0xf0000000) == 0x10000000) {
                  puVar8[2] = 0;
                  puVar8[7] = 1;
                }
                else {
                  uVar9 = uVar9 & 0xfffffff | 0x80000000;
                }
              }
              *puVar8 = uVar9 | 0x3fff;
            }
            if (uVar5 != 0x3fff) {
              bVar3 = true;
              do {
                puVar8 = (uint *)((longlong)(int)(*(int *)(param_1 + 0x124) * uVar5) +
                                  (longlong)*(int *)(param_1 + 0x30) +
                                 *(longlong *)(param_1 + 0x100));
                *puVar8 = *puVar8 & 0xfffffff;
                uVar5 = *puVar8 & 0x3fff;
              } while (uVar5 != 0x3fff);
            }
          }
          *(uint *)(lVar10 + lVar12) = *(uint *)(lVar10 + lVar12) | 0xfffffff;
          *(undefined2 *)(*(longlong *)(param_1 + 0x108) + lVar6 * 2) =
               *(undefined2 *)
                (*(longlong *)(param_1 + 0x108) + -2 + (longlong)*(int *)(param_1 + 0x128) * 2);
          *(ushort *)(*(longlong *)(param_1 + 0x108) + -2 + (longlong)*(int *)(param_1 + 0x128) * 2)
               = uVar1;
          *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
        }
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
      if ((bVar3) && (iVar4 = *(int *)(param_1 + 0x128) + -1, lVar6 = (longlong)iVar4, -1 < iVar4))
      {
        do {
          uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x108) + lVar6 * 2);
          puVar8 = (uint *)((longlong)(int)((uint)uVar1 * *(int *)(param_1 + 0x124)) +
                            (longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x100));
          uVar5 = *puVar8;
          if ((uVar5 & 0xf0000000) == 0) {
            *puVar8 = uVar5 | 0xfffffff;
            *(undefined2 *)(*(longlong *)(param_1 + 0x108) + lVar6 * 2) =
                 *(undefined2 *)
                  (*(longlong *)(param_1 + 0x108) + -2 + (longlong)*(int *)(param_1 + 0x128) * 2);
            *(ushort *)
             (*(longlong *)(param_1 + 0x108) + -2 + (longlong)*(int *)(param_1 + 0x128) * 2) = uVar1
            ;
            *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
          }
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
    }
  }
  *(uint *)(param_1 + 0x1e8) = *(uint *)(param_1 + 0x1e8) & 0xfffffffd;
  return;
}



// FUNCTION 14269d290 FUN_14269d290 body=160 status=ok
// SIG undefined FUN_14269d290(void)

void FUN_14269d290(longlong *param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_10 = *(undefined4 *)(param_2 + 1);
      local_18 = *param_2;
      (**(code **)(*param_1 + 0x8a0))(param_1,&local_18,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 14269d330 FUN_14269d330 body=83 status=ok
// SIG undefined FUN_14269d330(void)

wchar_t * FUN_14269d330(undefined1 param_1)

{
  switch(param_1) {
  case 0:
    return L"Failure";
  case 1:
    return L"Success";
  case 2:
    return L"InvalidToken";
  case 3:
    return L"NoKey";
  case 4:
    return L"SessionIdMismatch";
  case 5:
    return L"InvalidParams";
  default:
    return L"";
  }
}



// FUNCTION 14269d3a0 FUN_14269d3a0 body=343 status=ok
// SIG undefined FUN_14269d3a0(void)

ulonglong FUN_14269d3a0(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  byte local_res10 [8];
  float local_res18 [4];
  float local_68;
  float local_64;
  float local_60;
  longlong local_58;
  undefined1 *local_50;
  float *local_48;
  float *local_40;
  float *local_38;
  longlong local_30;
  float *local_28;
  undefined1 *local_20;
  byte *local_18;
  
  fVar1 = param_3[2];
  *(undefined8 *)(param_2 + 0x44) = *(undefined8 *)param_3;
  *(float *)(param_2 + 0x4c) = fVar1;
  fVar1 = param_4[2];
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)param_4;
  *(float *)(param_2 + 0x58) = fVar1;
  local_60 = param_4[2] - param_3[2];
  local_68 = *param_4 - *param_3;
  local_64 = param_4[1] - param_3[1];
  local_res10[0] = 0;
  local_res18[0] = SQRT(local_64 * local_64 + local_68 * local_68 + local_60 * local_60);
  if (0.0001 < local_res18[0]) {
    local_50 = &stack0x00000028;
    local_40 = &local_68;
    local_38 = local_res18;
    local_20 = &stack0x00000030;
    local_18 = local_res10;
    lVar4 = param_1;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar4 = *(longlong *)(param_1 + 200);
    }
    if (*(longlong *)(lVar4 + 0x110) == 0) {
      sVar2 = *(short *)(lVar4 + 8);
    }
    else {
      sVar2 = *(short *)(lVar4 + 6);
    }
    local_58 = param_1;
    local_48 = param_3;
    local_30 = param_2;
    local_28 = param_4;
    plVar3 = (longlong *)FUN_1426e2550((int)sVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x348))
                (plVar3,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                 ,0xcd2);
    }
    thunk_FUN_14268d350(&local_58);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x350))(plVar3);
    }
    return (ulonglong)local_res10[0];
  }
  return (ulonglong)(uint3)((uint)fVar1 >> 8) << 8;
}



// FUNCTION 14269d500 FUN_14269d500 body=356 status=ok
// SIG undefined FUN_14269d500(void)

void FUN_14269d500(undefined8 param_1,longlong *param_2,longlong param_3,char param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  wint_t wVar6;
  wint_t wVar7;
  int iVar8;
  int iVar9;
  wint_t *pwVar10;
  longlong lVar11;
  undefined2 *puVar12;
  longlong lVar13;
  
  if (param_4 != '\0') {
    if (*(int *)(param_5 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*param_5;
    }
    pwVar10 = &DAT_14515653c;
    do {
      wVar6 = *(wint_t *)((longlong)(puVar12 + -0xa28ab29e) + (longlong)pwVar10);
      if ((wVar6 == 0) && (*pwVar10 == 0)) goto LAB_14269d57b;
      if (wVar6 != *pwVar10) {
        wVar6 = towlower(wVar6);
        wVar7 = towlower(*pwVar10);
        if (wVar6 != wVar7) goto LAB_14269d571;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
LAB_14269d5c1:
  FUN_1428670d0(param_2,param_3);
  uVar1 = *(undefined8 *)(param_3 + 0x288);
  *(int *)((longlong)param_2 + 0x9e4) = *(int *)((longlong)param_2 + 0x9e4) + 1;
  bVar4 = false;
  iVar9 = *(int *)((longlong)param_2 + 0x9e4);
  iVar8 = (int)param_2[0x13b] + -1;
  lVar13 = (longlong)iVar8;
  if (-1 < iVar8) {
    lVar11 = lVar13 << 4;
    bVar4 = false;
    do {
      lVar2 = param_2[0x13a];
      if ((*(int *)(lVar11 + 8 + lVar2) == 0) ||
         (plVar3 = *(longlong **)(lVar11 + lVar2), plVar3 == (longlong *)0x0)) {
LAB_14269d629:
        bVar4 = true;
      }
      else {
        cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar1,1,param_5);
        if (cVar5 == '\0') goto LAB_14269d629;
      }
      lVar11 = lVar11 + -0x10;
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
    iVar9 = *(int *)((longlong)param_2 + 0x9e4);
  }
  *(int *)((longlong)param_2 + 0x9e4) = iVar9 + -1;
  if (bVar4) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_2 + 0x13a,0);
  }
  return;
LAB_14269d571:
  if (wVar6 == wVar7) {
LAB_14269d57b:
    *(undefined1 *)(param_2 + 0x113) = 4;
    (**(code **)(*param_2 + 0x458))(param_2,0);
    (**(code **)(**(longlong **)(param_3 + 0x1c8) + 0x288))();
    *(undefined8 *)(*(longlong *)(param_3 + 0x1c8) + 0x30) = 0;
    return;
  }
  goto LAB_14269d5c1;
}



// FUNCTION 14269d670 FUN_14269d670 body=576 status=ok
// SIG undefined FUN_14269d670(void)

void FUN_14269d670(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  longlong local_res18;
  undefined1 local_78 [24];
  longlong local_60;
  longlong local_50;
  
  local_res18 = *(longlong *)(param_1 + 0x20);
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x60,1);
  if (lVar2 != 0) {
    local_res18 = *(longlong *)(lVar2 + 0x160);
  }
  local_res8 = 0;
  if (param_2 == '\0') {
    if ((local_res18 != 0) && (local_res18 != DAT_146aefc50)) {
      uVar3 = UCollisionProfile::Get();
      cVar1 = FUN_142319e90(uVar3,local_res18,param_1);
      if (cVar1 == '\0') {
        *(longlong *)(param_1 + 0x20) = DAT_146aefc50;
        FWeakObjectPtr::operator=(&local_res8,0);
        *(undefined4 *)(param_1 + 0x60) = (undefined4)local_res8;
        *(undefined4 *)(param_1 + 100) = local_res8._4_4_;
        *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfb;
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x60,1);
    if (lVar4 != 0) {
      lVar2 = *(longlong *)(lVar4 + 0x160);
    }
    local_res8 = 0;
    if ((lVar2 == 0) || (lVar2 == DAT_146aefc50)) {
      cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x60,1,0);
      if (cVar1 == '\0') {
        FCollisionResponse::UpdateResponseContainerFromArray(param_1 + 0x28);
      }
      else {
        lVar2 = FWeakObjectPtr::Get(param_1 + 0x60,1);
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar2 + 0x160);
        *(undefined1 *)(param_1 + 10) = *(undefined1 *)(lVar2 + 0x14a);
        *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(lVar2 + 0x14c);
        FUN_1426db040(param_1 + 0x28,lVar2 + 0x168);
        FCollisionResponse::UpdateArrayFromResponseContainer(param_1 + 0x28);
      }
    }
  }
  else if ((local_res18 != 0) && (local_res18 != DAT_146aefc50)) {
    FCollisionResponseTemplate::FCollisionResponseTemplate(local_78);
    uVar3 = UCollisionProfile::Get();
    cVar1 = UCollisionProfile::GetProfileTemplate(uVar3,local_res18,local_78);
    if (cVar1 == '\0') {
      *(longlong *)(param_1 + 0x20) = DAT_146aefc50;
      FWeakObjectPtr::operator=(&local_res8,0);
      *(undefined4 *)(param_1 + 0x60) = (undefined4)local_res8;
      *(undefined4 *)(param_1 + 100) = local_res8._4_4_;
      *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfb;
    }
    else {
      local_res10[0] = *(undefined1 *)(param_1 + 10);
      local_res8 = CONCAT71(local_res8._1_7_,*(undefined1 *)(param_1 + 0xc));
      cVar1 = FCollisionResponseTemplate::IsEqual(local_78,&local_res8,local_res10,param_1 + 0x28);
      if (cVar1 == '\0') {
        FUN_14269c820(param_1);
      }
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14269d8b0 FUN_14269d8b0 body=314 status=ok
// SIG undefined FUN_14269d8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14269d8b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_c8 [32];
  undefined2 local_a8;
  longlong local_98 [2];
  undefined4 local_88;
  longlong local_80 [2];
  longlong local_70 [3];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x138);
  bVar4 = lVar1 == 0;
  if (bVar4) {
    local_98[0] = 0;
    local_98[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
    local_a8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_98[0],5,&DAT_145158cc4);
    plVar2 = local_98;
  }
  else {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x138);
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x398))(plVar2,local_80);
  }
  lVar1 = *plVar2;
  *plVar2 = 0;
  plVar2[1] = 0;
  if (bVar4) {
    if (local_98[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar4) && (local_80[0] != 0)) {
    FMemory::Free();
  }
  uVar3 = P2UTransform(local_58,param_3);
  FTransform::ToString(uVar3,local_70);
  DAT_146b08464 = 0;
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 14269d9f0 FUN_14269d9f0 body=217 status=ok
// SIG undefined FUN_14269d9f0(void)

void FUN_14269d9f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res18 [16];
  longlong local_38 [4];
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404a3a40(param_3,L"PARTICLE_FACTORY",&DAT_143f591f0);
  local_38[3] = 2;
  local_38[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],&DAT_145157a2c,4);
  local_38[0] = 0;
  local_38[1] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"PARTICLE_SPRITE_FACTORY",0x30);
  local_18 = local_38;
  local_10 = local_38 + 2;
  FUN_140497620(param_3 + 0x200,local_res18,&local_18,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14269dad0 FUN_14269dad0 body=105 status=ok
// SIG undefined FUN_14269dad0(void)

void FUN_14269dad0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    lVar4 = FUN_1429f11d0();
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_14238f290(lVar1,param_2,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
    }
  }
  return;
}



// FUNCTION 14269db40 FUN_14269db40 body=105 status=ok
// SIG undefined FUN_14269db40(void)

void FUN_14269db40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    lVar3 = FUN_1429f11d0();
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
      FUN_14238f290(lVar1,param_2,0);
    }
  }
  return;
}



// FUNCTION 14269dbb0 FUN_14269dbb0 body=3276 status=ok
// SIG undefined FUN_14269dbb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14269dbb0(longlong param_1,longlong *param_2,char param_3,char param_4,
                       longlong *param_5,int *param_6,int *param_7,undefined4 *param_8,
                       longlong param_9)

{
  uint *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  float *pfVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  PxGeometry *pPVar16;
  PxTransform *pPVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  PxGeometry *pPVar20;
  undefined1 *puVar21;
  longlong lVar22;
  longlong lVar23;
  byte bVar24;
  PxGeometry *pPVar25;
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
  undefined1 auStack_488 [32];
  char local_468;
  byte local_467;
  char local_466;
  char local_465;
  uint local_464;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float local_444;
  float local_440;
  longlong *local_438;
  undefined8 local_428;
  undefined8 uStack_420;
  longlong local_418;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  longlong local_400;
  longlong *local_3f8;
  longlong local_3f0;
  longlong *local_3e8;
  undefined1 local_3e0 [12];
  uint local_3d4;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined1 local_370 [16];
  byte local_360;
  undefined8 *local_358;
  float local_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  int local_338;
  int iStack_334;
  int iStack_330;
  uint uStack_32c;
  PxGeometry local_308 [256];
  PxGeometry *local_208;
  undefined8 local_200;
  undefined1 local_1f8 [256];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [48];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  local_3f8 = param_5;
  local_467 = 0;
  if (param_1 == 0) {
LAB_14269e8f4:
    return (ulonglong)param_5 & 0xffffffffffffff00;
  }
  param_5 = *(longlong **)(param_1 + 0x120);
  local_466 = param_4;
  local_465 = param_3;
  local_3f0 = param_1;
  local_3e8 = param_2;
  if (param_5 == (longlong *)0x0) {
    param_5 = (longlong *)FUN_1423407b0();
  }
  pPVar16 = (PxGeometry *)0x0;
  pPVar20 = pPVar16;
  if (param_5 != (longlong *)0x0) {
    pPVar20 = (PxGeometry *)param_5[0x43];
  }
  if (pPVar20 == (PxGeometry *)0x0) goto LAB_14269e8f4;
  plVar11 = (longlong *)FUN_1426e2530(pPVar20,0);
  param_5 = (longlong *)0x0;
  if (plVar11 == (longlong *)0x0) goto LAB_14269e8f4;
  local_438 = plVar11;
  (**(code **)(*plVar11 + 0x348))
            (plVar11,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
             ,0x195f);
  local_360 = 0xff;
  local_350 = 0.0;
  fStack_34c = 0.0;
  fStack_348 = 0.0;
  fStack_344 = 1.0;
  local_358 = (undefined8 *)0x0;
  U2PTransform(&local_458,param_7);
  pPVar20 = *(PxGeometry **)(param_6 + 4);
  if (pPVar20 == (PxGeometry *)0x0) {
LAB_14269e28f:
    pPVar20 = pPVar16;
LAB_14269e292:
    switch(*(undefined4 *)pPVar20) {
    case 0:
      local_3d0 = *(undefined8 *)pPVar20;
      break;
    case 1:
      local_3d0 = CONCAT44(local_3d0._4_4_,1);
      break;
    case 2:
      local_3d0 = *(undefined8 *)pPVar20;
      uStack_3c8 = CONCAT44(uStack_3c8._4_4_,*(undefined4 *)(pPVar20 + 8));
      break;
    case 3:
      local_3d0 = CONCAT44(*(undefined4 *)(pPVar20 + 4),3);
      uStack_3c8 = *(undefined8 *)(pPVar20 + 8);
      break;
    case 4:
      local_3d0 = CONCAT44(*(undefined4 *)(pPVar20 + 4),4);
      uStack_3c8 = *(undefined8 *)(pPVar20 + 8);
      local_3c0 = *(undefined4 *)(pPVar20 + 0x10);
      uStack_3bc = *(undefined4 *)(pPVar20 + 0x14);
      uStack_3b8 = *(undefined4 *)(pPVar20 + 0x18);
      uStack_3b4 = *(undefined4 *)(pPVar20 + 0x1c);
      local_3b0 = *(undefined8 *)(pPVar20 + 0x20);
      uStack_3a8 = CONCAT44(uStack_3a8._4_4_,*(undefined4 *)(pPVar20 + 0x28));
      break;
    case 5:
      local_3d0 = CONCAT44(*(undefined4 *)(pPVar20 + 4),5);
      uStack_3c8 = *(undefined8 *)(pPVar20 + 8);
      local_3c0 = *(undefined4 *)(pPVar20 + 0x10);
      uStack_3bc = *(undefined4 *)(pPVar20 + 0x14);
      uStack_3b8 = *(undefined4 *)(pPVar20 + 0x18);
      uStack_3b4 = *(undefined4 *)(pPVar20 + 0x1c);
      local_3b0 = CONCAT44(local_3b0._4_4_,*(undefined4 *)(pPVar20 + 0x20));
      uStack_3a8 = *(undefined8 *)(pPVar20 + 0x28);
      break;
    case 6:
      local_3d0 = CONCAT44(local_3d0._4_4_,6);
      uStack_3c8 = *(undefined8 *)(pPVar20 + 8);
      local_3c0 = *(undefined4 *)(pPVar20 + 0x10);
      uStack_3bc = *(undefined4 *)(pPVar20 + 0x14);
      uStack_3b8 = *(undefined4 *)(pPVar20 + 0x18);
      uStack_3b4 = *(undefined4 *)(pPVar20 + 0x1c);
    }
  }
  else {
    iVar9 = *param_6;
    if (iVar9 == 1) {
      local_338 = *param_7;
      iStack_334 = param_7[1];
      iStack_330 = param_7[2];
      uStack_32c = param_7[3];
      FUN_14231cca0(local_370,&local_338,pPVar20);
      switch(*(undefined4 *)local_358) {
      case 0:
        local_3d0 = *local_358;
        local_458 = local_350;
        fStack_454 = fStack_34c;
        fStack_450 = fStack_348;
        fStack_44c = fStack_344;
        break;
      case 1:
        local_3d0 = CONCAT44(local_3d0._4_4_,1);
        local_458 = local_350;
        fStack_454 = fStack_34c;
        fStack_450 = fStack_348;
        fStack_44c = fStack_344;
        break;
      case 2:
        local_3d0 = *local_358;
        uStack_3c8 = CONCAT44(uStack_3c8._4_4_,*(undefined4 *)(local_358 + 1));
        local_458 = local_350;
        fStack_454 = fStack_34c;
        fStack_450 = fStack_348;
        fStack_44c = fStack_344;
        break;
      case 3:
        local_3d0 = CONCAT44(*(undefined4 *)((longlong)local_358 + 4),3);
        uStack_3c8 = local_358[1];
        local_458 = local_350;
        fStack_454 = fStack_34c;
        fStack_450 = fStack_348;
        fStack_44c = fStack_344;
        break;
      case 4:
        local_3d0 = CONCAT44(*(undefined4 *)((longlong)local_358 + 4),4);
        uStack_3c8 = local_358[1];
        local_3c0 = *(undefined4 *)(local_358 + 2);
        uStack_3bc = *(undefined4 *)((longlong)local_358 + 0x14);
        uStack_3b8 = *(undefined4 *)(local_358 + 3);
        uStack_3b4 = *(undefined4 *)((longlong)local_358 + 0x1c);
        local_3b0 = local_358[4];
        uStack_3a8 = CONCAT44(uStack_3a8._4_4_,*(undefined4 *)(local_358 + 5));
        local_458 = local_350;
        fStack_454 = fStack_34c;
        fStack_450 = fStack_348;
        fStack_44c = fStack_344;
        break;
      case 5:
        local_3d0 = CONCAT44(*(undefined4 *)((longlong)local_358 + 4),5);
        uStack_3c8 = local_358[1];
        local_3c0 = *(undefined4 *)(local_358 + 2);
        uStack_3bc = *(undefined4 *)((longlong)local_358 + 0x14);
        uStack_3b8 = *(undefined4 *)(local_358 + 3);
        uStack_3b4 = *(undefined4 *)((longlong)local_358 + 0x1c);
        local_3b0 = CONCAT44(local_3b0._4_4_,*(undefined4 *)(local_358 + 4));
        uStack_3a8 = local_358[5];
        local_458 = local_350;
        fStack_454 = fStack_34c;
        fStack_450 = fStack_348;
        fStack_44c = fStack_344;
        break;
      case 6:
        local_3d0 = CONCAT44(local_3d0._4_4_,6);
        uStack_3c8 = local_358[1];
        local_3c0 = *(undefined4 *)(local_358 + 2);
        uStack_3bc = *(undefined4 *)((longlong)local_358 + 0x14);
        uStack_3b8 = *(undefined4 *)(local_358 + 3);
        uStack_3b4 = *(undefined4 *)((longlong)local_358 + 0x1c);
      default:
        local_458 = local_350;
        fStack_454 = fStack_34c;
        fStack_450 = fStack_348;
        fStack_44c = fStack_344;
      }
    }
    else {
      if (iVar9 != 2) {
        if (iVar9 != 3) goto LAB_14269e28f;
        goto LAB_14269e292;
      }
      lVar22 = *(longlong *)(pPVar20 + 0x110);
      if ((lVar22 != 0) || (lVar22 = *(longlong *)(pPVar20 + 0x118), lVar22 != 0)) {
        local_f8 = (undefined1 *)0x0;
        local_f0 = 0;
        iVar8 = FillInlinePxShapeArray_AssumesLocked(local_1f8,lVar22);
        iVar9 = param_6[2];
        if ((-1 < iVar9) && (iVar9 < iVar8)) {
          puVar21 = local_1f8;
          if (local_f8 != (undefined1 *)0x0) {
            puVar21 = local_f8;
          }
          plVar3 = *(longlong **)(puVar21 + (longlong)iVar9 * 8);
          iVar9 = (**(code **)(*plVar3 + 0x30))(plVar3);
          if (1 < iVar9 - 5U) {
            puVar12 = (undefined8 *)(**(code **)(*plVar3 + 0x40))(plVar3,&local_338);
            switch(*(undefined4 *)puVar12) {
            case 0:
              local_3a0 = (undefined4)*puVar12;
              uStack_39c = (undefined4)((ulonglong)*puVar12 >> 0x20);
              break;
            case 1:
              local_3a0 = 1;
              break;
            case 2:
              uStack_398 = *(undefined4 *)(puVar12 + 1);
              local_3a0 = (undefined4)*puVar12;
              uStack_39c = (undefined4)((ulonglong)*puVar12 >> 0x20);
              break;
            case 3:
              uStack_39c = *(undefined4 *)((longlong)puVar12 + 4);
              uStack_398 = *(undefined4 *)(puVar12 + 1);
              uStack_394 = *(undefined4 *)((longlong)puVar12 + 0xc);
              local_3a0 = 3;
              break;
            case 4:
              local_380 = puVar12[4];
              uStack_388 = *(undefined4 *)(puVar12 + 3);
              uStack_39c = (undefined4)*(undefined8 *)((longlong)puVar12 + 4);
              uStack_398 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar12 + 4) >> 0x20);
              uStack_394 = (undefined4)*(undefined8 *)((longlong)puVar12 + 0xc);
              local_390 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar12 + 0xc) >> 0x20);
              uStack_38c = *(undefined4 *)((longlong)puVar12 + 0x14);
              uStack_384 = *(undefined4 *)((longlong)puVar12 + 0x1c);
              uStack_378 = CONCAT44(uStack_378._4_4_,*(undefined4 *)(puVar12 + 5));
              local_3a0 = 4;
              break;
            case 5:
              uStack_388 = *(undefined4 *)(puVar12 + 3);
              uStack_39c = (undefined4)*(undefined8 *)((longlong)puVar12 + 4);
              uStack_398 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar12 + 4) >> 0x20);
              uStack_394 = (undefined4)*(undefined8 *)((longlong)puVar12 + 0xc);
              local_390 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar12 + 0xc) >> 0x20);
              local_380 = CONCAT44(local_380._4_4_,*(undefined4 *)(puVar12 + 4));
              uStack_38c = *(undefined4 *)((longlong)puVar12 + 0x14);
              uStack_378 = puVar12[5];
              uStack_384 = *(undefined4 *)((longlong)puVar12 + 0x1c);
              local_3a0 = 5;
              break;
            case 6:
              local_390 = *(undefined4 *)(puVar12 + 2);
              uStack_38c = *(undefined4 *)((longlong)puVar12 + 0x14);
              uStack_398 = (undefined4)puVar12[1];
              uStack_394 = (undefined4)((ulonglong)puVar12[1] >> 0x20);
              uStack_384 = *(undefined4 *)((longlong)puVar12 + 0x1c);
              uStack_388 = *(undefined4 *)(puVar12 + 3);
              local_3a0 = 6;
            }
            local_3d0 = CONCAT44(uStack_39c,local_3a0);
            uStack_3c8 = CONCAT44(uStack_394,uStack_398);
            local_3c0 = local_390;
            uStack_3bc = uStack_38c;
            uStack_3b8 = uStack_388;
            uStack_3b4 = uStack_384;
            local_3b0 = local_380;
            uStack_3a8 = uStack_378;
            lVar22 = (**(code **)(*plVar3 + 0x90))(plVar3,&local_338);
            fVar32 = *(float *)(lVar22 + 0x18) + *(float *)(lVar22 + 0x18);
            fVar33 = *(float *)(lVar22 + 0x10) + *(float *)(lVar22 + 0x10);
            fVar34 = *(float *)(lVar22 + 0x14) + *(float *)(lVar22 + 0x14);
            fVar30 = fStack_44c * fStack_44c - 0.5;
            fVar29 = fVar34 * fStack_454 + fVar33 * local_458 + fVar32 * fStack_450;
            fVar31 = (fVar32 * fStack_454 - fVar34 * fStack_450) * fStack_44c;
            fVar26 = fVar29 * local_458;
            fVar28 = (fVar33 * fStack_450 - fVar32 * local_458) * fStack_44c;
            fVar27 = fVar29 * fStack_454;
            fVar29 = fVar29 * fStack_450;
            fVar35 = (fVar34 * local_458 - fVar33 * fStack_454) * fStack_44c;
            pfVar13 = (float *)physx::PxQuat::operator*(&local_458,local_3e0,lVar22);
            local_458 = *pfVar13;
            fStack_454 = pfVar13[1];
            fStack_450 = pfVar13[2];
            fStack_44c = pfVar13[3];
            local_448 = fVar31 + fVar30 * fVar33 + fVar26 + local_448;
            local_444 = fVar28 + fVar30 * fVar34 + fVar27 + local_444;
            local_440 = fVar35 + fVar30 * fVar32 + fVar29 + local_440;
          }
        }
        if (local_f8 != (undefined1 *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  if ((int)local_3d0 == 0) {
    cVar6 = FUN_1426b13f0(&local_3d0);
  }
  else if ((int)local_3d0 == 2) {
    cVar6 = physx::PxCapsuleGeometry::isValid(&local_3d0);
  }
  else if ((int)local_3d0 == 3) {
    cVar6 = physx::PxBoxGeometry::isValid(&local_3d0);
  }
  else {
    if ((int)local_3d0 != 4) goto LAB_14269e465;
    cVar6 = FUN_1426b1340(&local_3d0);
  }
  if (cVar6 != '\0') {
    cVar6 = '\0';
    local_200 = 0;
    uStack_420 = 0;
    local_428 = 0;
    local_410 = *param_8;
    local_40c = param_8[1];
    local_408 = param_8[2];
    local_404 = param_8[3];
    local_208 = (PxGeometry *)0x0;
    local_468 = '\0';
    local_464 = 0;
    bVar24 = 0;
    if (0 < (int)param_2[1]) {
      local_418 = 0;
      pPVar20 = pPVar16;
      pPVar25 = pPVar16;
      do {
        lVar22 = local_418;
        uVar10 = (uint)pPVar20;
        puVar2 = *(undefined4 **)(local_418 + *param_2);
        cVar5 = cVar6;
        if (puVar2 != (undefined4 *)0x0) {
          lVar23 = *(longlong *)(puVar2 + 0x32);
          if (lVar23 == 0) {
            plVar11 = *(longlong **)(puVar2 + 0x44);
            if (plVar11 == (longlong *)0x0) {
              plVar11 = *(longlong **)(puVar2 + 0x46);
              goto LAB_14269e514;
            }
          }
          else {
            plVar11 = *(longlong **)(lVar23 + 0x110);
            if (plVar11 == (longlong *)0x0) {
              plVar11 = *(longlong **)(lVar23 + 0x118);
LAB_14269e514:
              if (plVar11 == (longlong *)0x0) goto LAB_14269e7a0;
            }
          }
          iVar9 = (**(code **)(*plVar11 + 200))(plVar11);
          pPVar16 = local_208;
          cVar5 = local_468;
          if (iVar9 != 0) {
            uVar10 = local_200._4_4_;
            if (local_200 < 0) {
              local_200 = (ulonglong)local_200._4_4_ << 0x20;
              if (uVar10 != 0) {
                TArray<FSkeletalMeshSkinningData_*,TInlineAllocator<32,TSizedDefaultAllocator<32>_>_>
                ::ResizeTo(local_308,0);
              }
            }
            else {
              local_200 = (ulonglong)local_200._4_4_ << 0x20;
            }
            lVar23 = 0;
            iVar9 = FillInlinePxShapeArray_AssumesLocked(local_308);
            local_400 = (longlong)iVar9;
            pPVar16 = local_208;
            cVar5 = local_468;
            uVar10 = local_464;
            if (0 < local_400) {
              do {
                pPVar16 = local_308;
                if (local_208 != (PxGeometry *)0x0) {
                  pPVar16 = local_208;
                }
                plVar3 = *(longlong **)(pPVar16 + lVar23 * 8);
                (**(code **)(*plVar3 + 0xa0))(plVar3,local_3e0);
                pbVar14 = (byte *)(**(code **)(*plVar3 + 0x108))(plVar3);
                if ((((*pbVar14 & 4) == 0) && ((local_3d4 & 0x100) == 0)) &&
                   (puVar15 = (undefined4 *)FUN_142697530(puVar2), puVar15 == puVar2)) {
                  (**(code **)(*plVar3 + 0xb0))(plVar3);
                  if (((local_338 == (int)local_428) && (iStack_334 == local_428._4_4_)) &&
                     ((iStack_330 == (int)uStack_420 && (uStack_32c == uStack_420._4_4_)))) {
                    if (cVar6 != '\0') {
LAB_14269e695:
                      pPVar16 = (PxGeometry *)(**(code **)(*plVar3 + 0x40))(plVar3,local_e8);
                      pPVar17 = (PxTransform *)
                                GetPxTransform_AssumesLocked(&local_3a0,plVar3,plVar11);
                      bVar7 = physx::PxGeometryQuery::overlap
                                        ((PxGeometry *)&local_3d0,(PxTransform *)&local_458,pPVar16,
                                         pPVar17);
                      plVar3 = local_3f8;
                      cVar6 = local_468;
                      if (bVar7) {
                        local_467 = 1;
                        if (local_466 != '\0') {
                          iVar9 = (int)local_3f8[1];
                          lVar22 = (longlong)iVar9;
                          *(int *)(local_3f8 + 1) = iVar9 + 1;
                          if (*(int *)((longlong)local_3f8 + 0xc) < iVar9 + 1) {
                            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                            ::ResizeGrow(local_3f8,iVar9);
                          }
                          lVar4 = local_3f0;
                          lVar23 = *plVar3;
                          *(undefined8 *)(lVar23 + lVar22 * 0x18) = 0;
                          *(undefined8 *)(lVar23 + 8 + lVar22 * 0x18) = 0;
                          *(undefined8 *)(lVar23 + 0x10 + lVar22 * 0x18) = 0;
                          FWeakObjectPtr::operator=(*plVar3 + 8 + lVar22 * 0x18,local_3f0);
                          FWeakObjectPtr::operator=
                                    (*plVar3 + lVar22 * 0x18,*(undefined8 *)(lVar4 + 0x118));
                          if (local_465 == '\0') {
                            uVar19 = 0xffffffff;
                          }
                          else {
                            uVar19 = *puVar2;
                          }
                          *(undefined4 *)(*plVar3 + 0x10 + lVar22 * 0x18) = uVar19;
                          lVar23 = *plVar3;
                          puVar1 = (uint *)(lVar23 + 0x14 + lVar22 * 0x18);
                          *puVar1 = *puVar1 & 0xfffffffe;
                          puVar1 = (uint *)(lVar23 + 0x14 + lVar22 * 0x18);
                          *puVar1 = *puVar1 | (uint)((int)pPVar25 == 2);
                          pPVar16 = local_208;
                          lVar22 = local_418;
                          cVar5 = local_468;
                          uVar10 = local_464;
                          if (local_465 != '\0') break;
                        }
                        uVar18 = 1;
                        plVar11 = local_438;
                        if (local_208 != (PxGeometry *)0x0) {
                          FMemory::Free();
                          plVar11 = local_438;
                        }
                        goto LAB_14269e814;
                      }
                    }
                  }
                  else {
                    cVar6 = '\0';
                    local_428 = CONCAT44(iStack_334,local_338);
                    uStack_420 = CONCAT44(uStack_32c,iStack_330);
                    local_468 = '\0';
                    uVar10 = uStack_32c;
                    if (*(char *)(param_9 + 0x11) != '\0') {
                      uVar10 = uStack_32c >> 1;
                    }
                    if ((uVar10 & 1) != 0) {
                      uVar10 = FUN_142306800(&local_410,&local_338,1);
                      pPVar25 = (PxGeometry *)(ulonglong)uVar10;
                      if (((uVar10 != 0) && ((*(char *)(param_9 + 0x16) == '\0' || (uVar10 != 1))))
                         && ((*(char *)(param_9 + 0x15) == '\0' || (uVar10 != 2)))) {
                        local_468 = '\x01';
                        goto LAB_14269e695;
                      }
                    }
                  }
                }
                lVar23 = lVar23 + 1;
                pPVar16 = local_208;
                lVar22 = local_418;
                cVar5 = local_468;
                uVar10 = local_464;
              } while (lVar23 < local_400);
            }
          }
        }
LAB_14269e7a0:
        cVar6 = cVar5;
        local_464 = uVar10 + 1;
        pPVar20 = (PxGeometry *)(ulonglong)local_464;
        local_418 = lVar22 + 8;
        param_2 = local_3e8;
      } while ((int)local_464 < (int)local_3e8[1]);
      plVar11 = local_438;
      bVar24 = local_467;
      if (pPVar16 != (PxGeometry *)0x0) {
        FMemory::Free();
        plVar11 = local_438;
        bVar24 = local_467;
      }
    }
    if (5 < local_360) {
      (**(code **)(*plVar11 + 0x350))(plVar11);
      return (ulonglong)bVar24;
    }
    uVar18 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                       *(uint *)(&UNK_14269e94c + (ulonglong)local_360 * 4)))
                       (IMAGE_DOS_HEADER_140000000.e_magic +
                        *(uint *)(&UNK_14269e94c + (ulonglong)local_360 * 4));
    return uVar18;
  }
LAB_14269e465:
  uVar18 = 0;
LAB_14269e814:
  if (5 < local_360) {
    (**(code **)(*plVar11 + 0x350))(plVar11);
    return uVar18;
  }
  uVar18 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                     *(uint *)(&UNK_14269e964 + (ulonglong)local_360 * 4)))
                     (IMAGE_DOS_HEADER_140000000.e_magic +
                      *(uint *)(&UNK_14269e964 + (ulonglong)local_360 * 4));
  return uVar18;
}



// FUNCTION 14269e980 FUN_14269e980 body=6700 status=ok
// SIG undefined FUN_14269e980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14269e980(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                       float *param_5,float *param_6,float *param_7,undefined8 *param_8,int *param_9
                       ,int *param_10,longlong param_11,char param_12)

{
  float *pfVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  float *pfVar12;
  int iVar13;
  byte *pbVar14;
  int *piVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_628 [32];
  float *local_608;
  float *local_600;
  float *local_5f8;
  int *local_5f0;
  float *local_5e8;
  char local_5e0;
  undefined1 local_5d8;
  char local_5c8;
  byte local_5c7;
  undefined2 local_5c6;
  byte local_5c4;
  char local_5c3;
  uint local_5c0;
  float *local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  float local_5a0;
  float local_59c;
  float local_598;
  float local_590;
  int local_58c;
  undefined4 local_588;
  int local_584;
  undefined4 local_580;
  float local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  float local_564;
  float local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  longlong *local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  int local_520;
  int local_518;
  int local_514;
  int local_510;
  uint local_50c;
  int local_508;
  int iStack_504;
  int iStack_500;
  uint uStack_4fc;
  longlong *local_4f8;
  float local_4f0;
  float local_4ec;
  float local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  longlong local_4d0;
  undefined8 local_4c8;
  longlong *local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  longlong *plStack_490;
  undefined8 local_488;
  undefined2 local_480;
  undefined4 local_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  float local_464;
  undefined4 local_460;
  float local_458;
  float local_454;
  float local_450;
  float local_44c;
  float local_448;
  float local_444;
  float local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined2 local_420;
  undefined4 local_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  float local_404;
  undefined4 local_400;
  float *local_3f0;
  float *local_3e8;
  longlong local_3e0;
  undefined1 local_3d8 [16];
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 local_368 [16];
  byte local_358;
  undefined8 *local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  byte local_338 [4];
  undefined4 local_334;
  uint local_330;
  float local_32c;
  undefined4 local_328;
  undefined8 local_324;
  undefined4 local_31c;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_30c;
  undefined4 local_304;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f4;
  float local_2ec;
  undefined8 local_2e8;
  float local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  byte *local_238;
  undefined8 local_230;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float local_214;
  float local_210;
  undefined1 local_1f8 [256];
  undefined1 *local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_628;
  piVar15 = *(int **)(param_9 + 4);
  local_5c3 = (char)param_3;
  local_5b8 = param_5;
  local_3f0 = param_6;
  local_3e8 = param_7;
  local_540 = param_4;
  local_4f8 = param_2;
  local_3e0 = param_1;
  if ((piVar15 == (int *)0x0) || (*param_9 != 1)) {
    piVar15 = (int *)0x0;
  }
  else {
    iVar6 = *piVar15;
    if (iVar6 == 1) {
      if ((0.0001 < (float)piVar15[1]) || (0.0001 < (float)piVar15[2])) goto LAB_14269ea5b;
      fVar21 = (float)piVar15[3];
    }
    else {
      if ((iVar6 != 2) && (iVar6 != 3)) goto LAB_14269eb09;
      fVar21 = (float)piVar15[1];
    }
    if (fVar21 <= 0.0001) {
LAB_14269eb09:
      local_5e0 = param_12;
      local_5e8 = (float *)param_11;
      local_5f0 = param_10;
      local_5f8 = param_7;
      local_600 = param_6;
      local_608 = param_5;
      uVar9 = FUN_1426a0490(param_1,param_2,param_3,param_4);
      return uVar9;
    }
  }
LAB_14269ea5b:
  lVar20 = 0;
  fVar39 = *param_7 - *param_6;
  fVar40 = param_7[1] - param_6[1];
  fVar41 = param_7[2] - param_6[2];
  local_5c4 = 0;
  fVar21 = SQRT(fVar40 * fVar40 + fVar39 * fVar39 + fVar41 * fVar41);
  if (fVar21 <= 0.0001) {
    return 0;
  }
  if (param_1 != 0) {
    lVar20 = *(longlong *)(param_1 + 0x218);
  }
  if (lVar20 == 0) {
    return 0;
  }
  local_590 = fVar21;
  local_4c0 = (longlong *)FUN_1426e2530(fVar39 * fVar39,0);
  if (local_4c0 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*local_4c0 + 0x348))
            (local_4c0,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
             ,0x17d1);
  local_59c = param_6[1];
  uVar9 = 0xff;
  local_358 = 0xff;
  local_350 = (undefined8 *)0x0;
  local_348 = 0;
  uStack_340 = 0x3f80000000000000;
  local_5b0 = *param_8;
  uStack_5a8 = param_8[1];
  local_5a0 = *param_6;
  local_598 = param_6[2];
  if (piVar15 == (int *)0x0) {
    puVar8 = *(undefined8 **)(param_9 + 4);
    if (puVar8 == (undefined8 *)0x0) {
LAB_14269f2da:
      puVar8 = (undefined8 *)0x0;
    }
    else {
      if (*param_9 == 2) {
        lVar20 = puVar8[0x22];
        if ((lVar20 != 0) || (lVar20 = puVar8[0x23], lVar20 != 0)) {
          local_238 = (byte *)0x0;
          local_230 = 0;
          iVar5 = FillInlinePxShapeArray_AssumesLocked(local_338,lVar20);
          iVar6 = param_9[2];
          if ((-1 < iVar6) && (iVar6 < iVar5)) {
            pbVar14 = local_338;
            if (local_238 != (byte *)0x0) {
              pbVar14 = local_238;
            }
            plVar17 = *(longlong **)(pbVar14 + (longlong)iVar6 * 8);
            iVar6 = (**(code **)(*plVar17 + 0x30))(plVar17);
            if (1 < iVar6 - 5U) {
              puVar8 = (undefined8 *)(**(code **)(*plVar17 + 0x40))(plVar17,&local_228);
              switch(*(undefined4 *)puVar8) {
              case 0:
                local_398 = (undefined4)*puVar8;
                uStack_394 = (undefined4)((ulonglong)*puVar8 >> 0x20);
                break;
              case 1:
                local_398 = 1;
                break;
              case 2:
                uStack_390 = *(undefined4 *)(puVar8 + 1);
                local_398 = (undefined4)*puVar8;
                uStack_394 = (undefined4)((ulonglong)*puVar8 >> 0x20);
                break;
              case 3:
                uStack_394 = *(undefined4 *)((longlong)puVar8 + 4);
                uStack_390 = *(undefined4 *)(puVar8 + 1);
                uStack_38c = *(undefined4 *)((longlong)puVar8 + 0xc);
                local_398 = 3;
                break;
              case 4:
                local_378 = puVar8[4];
                uStack_380 = *(undefined4 *)(puVar8 + 3);
                uStack_394 = (undefined4)*(undefined8 *)((longlong)puVar8 + 4);
                uStack_390 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar8 + 4) >> 0x20);
                uStack_38c = (undefined4)*(undefined8 *)((longlong)puVar8 + 0xc);
                local_388 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar8 + 0xc) >> 0x20)
                ;
                uStack_384 = *(undefined4 *)((longlong)puVar8 + 0x14);
                uStack_37c = *(undefined4 *)((longlong)puVar8 + 0x1c);
                uStack_370 = CONCAT44(uStack_370._4_4_,*(undefined4 *)(puVar8 + 5));
                local_398 = 4;
                break;
              case 5:
                uStack_380 = *(undefined4 *)(puVar8 + 3);
                uStack_394 = (undefined4)*(undefined8 *)((longlong)puVar8 + 4);
                uStack_390 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar8 + 4) >> 0x20);
                uStack_38c = (undefined4)*(undefined8 *)((longlong)puVar8 + 0xc);
                local_388 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar8 + 0xc) >> 0x20)
                ;
                local_378 = CONCAT44(local_378._4_4_,*(undefined4 *)(puVar8 + 4));
                uStack_384 = *(undefined4 *)((longlong)puVar8 + 0x14);
                uStack_370 = puVar8[5];
                uStack_37c = *(undefined4 *)((longlong)puVar8 + 0x1c);
                local_398 = 5;
                break;
              case 6:
                local_388 = *(undefined4 *)(puVar8 + 2);
                uStack_384 = *(undefined4 *)((longlong)puVar8 + 0x14);
                uStack_390 = (undefined4)puVar8[1];
                uStack_38c = (undefined4)((ulonglong)puVar8[1] >> 0x20);
                uStack_37c = *(undefined4 *)((longlong)puVar8 + 0x1c);
                uStack_380 = *(undefined4 *)(puVar8 + 3);
                local_398 = 6;
              }
              local_3c8 = CONCAT44(uStack_394,local_398);
              uStack_3c0 = CONCAT44(uStack_38c,uStack_390);
              local_3b8 = local_388;
              uStack_3b4 = uStack_384;
              uStack_3b0 = uStack_380;
              uStack_3ac = uStack_37c;
              local_3a8 = local_378;
              uStack_3a0 = uStack_370;
              lVar20 = (**(code **)(*plVar17 + 0x90))(plVar17,&local_228);
              fVar37 = *(float *)(lVar20 + 0x18) + *(float *)(lVar20 + 0x18);
              fVar31 = *(float *)(lVar20 + 0x10) + *(float *)(lVar20 + 0x10);
              fVar35 = *(float *)(lVar20 + 0x14) + *(float *)(lVar20 + 0x14);
              fVar29 = uStack_5a8._4_4_ * uStack_5a8._4_4_ - 0.5;
              fVar21 = fVar35 * local_5b0._4_4_ + fVar31 * (float)local_5b0 +
                       fVar37 * (float)uStack_5a8;
              fVar33 = (fVar37 * local_5b0._4_4_ - fVar35 * (float)uStack_5a8) * uStack_5a8._4_4_ +
                       fVar29 * fVar31 + fVar21 * (float)local_5b0 + local_5a0;
              fVar26 = (fVar31 * (float)uStack_5a8 - fVar37 * (float)local_5b0) * uStack_5a8._4_4_ +
                       fVar29 * fVar35 + fVar21 * local_5b0._4_4_ + local_59c;
              fVar29 = (fVar35 * (float)local_5b0 - fVar31 * local_5b0._4_4_) * uStack_5a8._4_4_ +
                       fVar29 * fVar37 + fVar21 * (float)uStack_5a8 + local_598;
              puVar8 = (undefined8 *)physx::PxQuat::operator*(&local_5b0,&local_508,lVar20);
              local_5b0 = *puVar8;
              uStack_5a8 = puVar8[1];
              fVar21 = local_590;
              local_5a0 = fVar33;
              local_59c = fVar26;
              local_598 = fVar29;
            }
          }
          if (local_238 != (byte *)0x0) {
            FMemory::Free();
          }
          uVar9 = (ulonglong)local_358;
        }
        goto switchD_14269f2f4_default;
      }
      if (*param_9 != 3) goto LAB_14269f2da;
    }
    switch(*(undefined4 *)puVar8) {
    case 0:
      local_3c8 = *puVar8;
      break;
    case 1:
      local_3c8 = CONCAT44(local_3c8._4_4_,1);
      break;
    case 2:
      local_3c8 = *puVar8;
      uStack_3c0 = CONCAT44(uStack_3c0._4_4_,*(undefined4 *)(puVar8 + 1));
      break;
    case 3:
      local_3c8 = CONCAT44(*(undefined4 *)((longlong)puVar8 + 4),3);
      uStack_3c0 = puVar8[1];
      break;
    case 4:
      local_3c8 = CONCAT44(*(undefined4 *)((longlong)puVar8 + 4),4);
      uStack_3c0 = puVar8[1];
      local_3b8 = *(undefined4 *)(puVar8 + 2);
      uStack_3b4 = *(undefined4 *)((longlong)puVar8 + 0x14);
      uStack_3b0 = *(undefined4 *)(puVar8 + 3);
      uStack_3ac = *(undefined4 *)((longlong)puVar8 + 0x1c);
      local_3a8 = puVar8[4];
      uStack_3a0 = CONCAT44(uStack_3a0._4_4_,*(undefined4 *)(puVar8 + 5));
      break;
    case 5:
      local_3c8 = CONCAT44(*(undefined4 *)((longlong)puVar8 + 4),5);
      uStack_3c0 = puVar8[1];
      local_3b8 = *(undefined4 *)(puVar8 + 2);
      uStack_3b4 = *(undefined4 *)((longlong)puVar8 + 0x14);
      uStack_3b0 = *(undefined4 *)(puVar8 + 3);
      uStack_3ac = *(undefined4 *)((longlong)puVar8 + 0x1c);
      local_3a8 = CONCAT44(local_3a8._4_4_,*(undefined4 *)(puVar8 + 4));
      uStack_3a0 = puVar8[5];
      break;
    case 6:
      local_3c8 = CONCAT44(local_3c8._4_4_,6);
      uStack_3c0 = puVar8[1];
      local_3b8 = *(undefined4 *)(puVar8 + 2);
      uStack_3b4 = *(undefined4 *)((longlong)puVar8 + 0x14);
      uStack_3b0 = *(undefined4 *)(puVar8 + 3);
      uStack_3ac = *(undefined4 *)((longlong)puVar8 + 0x1c);
    }
  }
  else {
    FUN_14231cca0(local_368,param_8,piVar15);
    switch(*(undefined4 *)local_350) {
    case 0:
      local_3c8 = *local_350;
      uVar9 = (ulonglong)local_358;
      local_5b0 = local_348;
      uStack_5a8 = uStack_340;
      break;
    case 1:
      uVar9 = (ulonglong)local_358;
      local_3c8 = CONCAT44(local_3c8._4_4_,1);
      local_5b0 = local_348;
      uStack_5a8 = uStack_340;
      break;
    case 2:
      local_3c8 = *local_350;
      uVar9 = (ulonglong)local_358;
      uStack_3c0 = CONCAT44(uStack_3c0._4_4_,*(undefined4 *)(local_350 + 1));
      local_5b0 = local_348;
      uStack_5a8 = uStack_340;
      break;
    case 3:
      uVar9 = (ulonglong)local_358;
      local_3c8 = CONCAT44(*(undefined4 *)((longlong)local_350 + 4),3);
      uStack_3c0 = local_350[1];
      local_5b0 = local_348;
      uStack_5a8 = uStack_340;
      break;
    case 4:
      uVar9 = (ulonglong)local_358;
      local_3c8 = CONCAT44(*(undefined4 *)((longlong)local_350 + 4),4);
      uStack_3c0 = local_350[1];
      local_3b8 = *(undefined4 *)(local_350 + 2);
      uStack_3b4 = *(undefined4 *)((longlong)local_350 + 0x14);
      uStack_3b0 = *(undefined4 *)(local_350 + 3);
      uStack_3ac = *(undefined4 *)((longlong)local_350 + 0x1c);
      local_3a8 = local_350[4];
      uStack_3a0 = CONCAT44(uStack_3a0._4_4_,*(undefined4 *)(local_350 + 5));
      local_5b0 = local_348;
      uStack_5a8 = uStack_340;
      break;
    case 5:
      uVar9 = (ulonglong)local_358;
      local_3c8 = CONCAT44(*(undefined4 *)((longlong)local_350 + 4),5);
      uStack_3c0 = local_350[1];
      local_3b8 = *(undefined4 *)(local_350 + 2);
      uStack_3b4 = *(undefined4 *)((longlong)local_350 + 0x14);
      uStack_3b0 = *(undefined4 *)(local_350 + 3);
      uStack_3ac = *(undefined4 *)((longlong)local_350 + 0x1c);
      local_3a8 = CONCAT44(local_3a8._4_4_,*(undefined4 *)(local_350 + 4));
      uStack_3a0 = local_350[5];
      local_5b0 = local_348;
      uStack_5a8 = uStack_340;
      break;
    case 6:
      local_3c8 = CONCAT44(local_3c8._4_4_,6);
      uStack_3c0 = local_350[1];
      local_3b8 = *(undefined4 *)(local_350 + 2);
      uStack_3b4 = *(undefined4 *)((longlong)local_350 + 0x14);
      uStack_3b0 = *(undefined4 *)(local_350 + 3);
      uStack_3ac = *(undefined4 *)((longlong)local_350 + 0x1c);
    default:
      uVar9 = (ulonglong)local_358;
      local_5b0 = local_348;
      uStack_5a8 = uStack_340;
    }
  }
switchD_14269f2f4_default:
  if ((int)local_3c8 == 0) {
    cVar3 = FUN_1426b13f0(&local_3c8);
  }
  else if ((int)local_3c8 == 2) {
    cVar3 = physx::PxCapsuleGeometry::isValid(&local_3c8);
  }
  else if ((int)local_3c8 == 3) {
    cVar3 = physx::PxBoxGeometry::isValid(&local_3c8);
  }
  else {
    if ((int)local_3c8 != 4) goto LAB_14269f540;
    cVar3 = FUN_1426b1340(&local_3c8);
  }
  if (cVar3 != '\0') {
    local_518 = *param_10;
    iVar6 = 0;
    local_4e8 = 1.0 / fVar21;
    cVar3 = '\0';
    local_514 = param_10[1];
    local_510 = param_10[2];
    local_50c = param_10[3];
    uStack_530 = 0;
    local_538 = 0;
    local_5c6 = (ushort)local_5c6._1_1_ << 8;
    local_5c8 = '\0';
    local_4f0 = local_4e8 * fVar39;
    local_4ec = local_4e8 * fVar40;
    local_4e8 = local_4e8 * fVar41;
    _guard_xfg_dispatch_icall_nop(local_338,0,0x90);
    local_520 = (int)param_4[1];
    fVar39 = 3.4e+38;
    local_57c = *local_5b8;
    local_498 = 0;
    plStack_490 = (longlong *)0x0;
    uStack_478 = 0;
    uStack_474 = 0;
    uStack_470 = 0;
    uStack_46c = 0;
    uStack_418 = 0;
    uStack_414 = 0;
    uStack_410 = 0;
    uStack_40c = 0;
    local_f8 = (undefined1 *)0x0;
    local_f0 = 0;
    local_488 = CONCAT44(local_488._4_4_,0xffffffff);
    local_480 = 0;
    local_47c = 0;
    local_468 = 0;
    local_464 = 3.4028235e+38;
    local_438 = 0;
    uStack_430 = 0;
    local_428 = 0xffffffff;
    local_420 = 0;
    local_41c = 0;
    local_408 = 0;
    local_404 = 3.4028235e+38;
    local_58c = 0;
    local_584 = 0;
    if (0 < (int)local_4f8[1]) {
      uVar23 = (undefined4)local_2e8;
      uVar24 = (undefined4)((ulonglong)local_2e8 >> 0x20);
      uVar25 = (undefined4)local_2f4;
      uVar27 = (undefined4)((ulonglong)local_2f4 >> 0x20);
      uVar28 = (undefined4)local_300;
      uVar30 = (undefined4)((ulonglong)local_300 >> 0x20);
      uVar32 = (undefined4)local_30c;
      uVar34 = (undefined4)((ulonglong)local_30c >> 0x20);
      uVar36 = (undefined4)local_318;
      uVar38 = (undefined4)((ulonglong)local_318 >> 0x20);
      local_544 = local_2c0;
      local_54c = local_2c8;
      local_554 = local_2d0;
      local_55c = local_2d8;
      local_560 = local_2e0;
      local_564 = local_2ec;
      local_568 = local_2f8;
      local_56c = local_304;
      local_570 = local_310;
      local_548 = local_2c4;
      local_574 = local_31c;
      local_550 = local_2cc;
      local_5c0 = local_330;
      local_4d0 = 0;
      local_558 = local_2d4;
      local_5c7 = local_338[0];
      local_588 = local_2dc;
      local_578 = local_328;
      local_528 = local_2b0;
      local_4d8 = local_2b8;
      local_4e0 = local_2e8;
      local_4a0 = local_2f4;
      local_4a8 = local_300;
      local_4b0 = local_30c;
      local_4b8 = local_318;
      local_4c8 = local_324;
      local_580 = local_334;
      pfVar12 = local_5b8;
      uVar16 = local_2b0;
      uVar18 = local_2b8;
      uVar22 = local_2dc;
      do {
        lVar20 = *(longlong *)(local_4d0 + *local_4f8);
        if (lVar20 != 0) {
          lVar19 = *(longlong *)(lVar20 + 200);
          if (lVar19 == 0) {
            plVar17 = *(longlong **)(lVar20 + 0x110);
            if (plVar17 == (longlong *)0x0) {
              plVar17 = *(longlong **)(lVar20 + 0x118);
              goto LAB_14269f8e8;
            }
          }
          else {
            plVar17 = *(longlong **)(lVar19 + 0x110);
            if (plVar17 == (longlong *)0x0) {
              plVar17 = *(longlong **)(lVar19 + 0x118);
LAB_14269f8e8:
              cVar3 = local_5c8;
              if (plVar17 == (longlong *)0x0) goto LAB_1426a0014;
            }
          }
          iVar5 = (**(code **)(*plVar17 + 200))(plVar17);
          pfVar12 = local_5b8;
          cVar3 = local_5c8;
          if (iVar5 != 0) {
            (**(code **)(*plVar17 + 0xa0))(plVar17,&local_458);
            uVar2 = local_f0._4_4_;
            if (local_f0 < 0) {
              local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
              if (uVar2 != 0) {
                TArray<FSkeletalMeshSkinningData_*,TInlineAllocator<32,TSizedDefaultAllocator<32>_>_>
                ::ResizeTo(local_1f8,0);
              }
            }
            else {
              local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
            }
            lVar19 = 0;
            iVar5 = FillInlinePxShapeArray_AssumesLocked(local_1f8,plVar17);
            if (0 < (longlong)iVar5) {
              cVar3 = (char)local_5c6;
              do {
                puVar10 = local_1f8;
                if (local_f8 != (undefined1 *)0x0) {
                  puVar10 = local_f8;
                }
                plVar17 = *(longlong **)(puVar10 + lVar19 * 8);
                lVar11 = FUN_142697530(lVar20,plVar17);
                if (lVar11 == lVar20) {
                  (**(code **)(*plVar17 + 0xb0))(plVar17,&local_508);
                  if ((((local_508 == (int)local_538) && (iStack_504 == local_538._4_4_)) &&
                      (iStack_500 == (int)uStack_530)) && (uStack_4fc == uStack_530._4_4_)) {
                    if (cVar3 != '\0') {
LAB_14269fa41:
                      lVar11 = (**(code **)(*plVar17 + 0x90))(plVar17,&local_398);
                      fVar33 = *(float *)(lVar11 + 0x10) + *(float *)(lVar11 + 0x10);
                      fVar40 = *(float *)(lVar11 + 0x14) + *(float *)(lVar11 + 0x14);
                      fVar29 = *(float *)(lVar11 + 0x18) + *(float *)(lVar11 + 0x18);
                      fVar41 = local_44c * local_44c - 0.5;
                      fVar21 = local_454 * fVar40 + local_458 * fVar33 + local_450 * fVar29;
                      fVar26 = (local_454 * fVar29 - local_450 * fVar40) * local_44c +
                               fVar41 * fVar33 + local_458 * fVar21 + local_448;
                      fVar37 = (local_458 * fVar40 - local_454 * fVar33) * local_44c +
                               fVar41 * fVar29 + local_450 * fVar21 + local_440;
                      fVar21 = (local_450 * fVar33 - local_458 * fVar29) * local_44c +
                               fVar41 * fVar40 + local_454 * fVar21 + local_444;
                      pfVar12 = (float *)physx::PxQuat::operator*(&local_458,local_3d8,lVar11);
                      local_228 = *pfVar12;
                      fStack_224 = pfVar12[1];
                      fStack_220 = pfVar12[2];
                      fStack_21c = pfVar12[3];
                      local_5c6 = 0x607;
                      local_218 = fVar26;
                      local_214 = fVar21;
                      local_210 = fVar37;
                      local_608 = (float *)(**(code **)(*plVar17 + 0x40))(plVar17,&local_398);
                      fVar21 = local_590;
                      local_5f0 = (int *)&local_5c6;
                      local_5e8 = (float *)((ulonglong)local_5e8 & 0xffffffff00000000);
                      local_5f8 = (float *)&local_438;
                      local_600 = &local_228;
                      bVar4 = physx::PxGeometryQuery::sweep
                                        (&local_4f0,local_590,&local_3c8,&local_5b0);
                      fVar40 = local_404;
                      if ((bVar4) && (local_404 < fVar39)) {
                        local_488 = CONCAT44(uStack_424,local_428);
                        local_498 = local_438;
                        local_480 = local_420;
                        local_47c = local_41c;
                        uStack_478 = uStack_418;
                        uStack_474 = uStack_414;
                        uStack_470 = uStack_410;
                        local_460 = local_400;
                        uStack_46c = uStack_40c;
                        local_468 = local_408;
                        local_464 = local_404;
                        local_58c = iVar6;
                        plStack_490 = plVar17;
                        if ((*(byte *)(lVar20 + 0x13) & 8) == 0) {
                          local_498 = (**(code **)(*plVar17 + 0x80))(plVar17);
                        }
                        else {
                          local_498 = *(undefined8 *)(lVar20 + 0x110);
                        }
                        fVar39 = fVar40;
                        if (param_12 != '\0') break;
                      }
                    }
                  }
                  else {
                    local_538 = CONCAT44(iStack_504,local_508);
                    uStack_530 = CONCAT44(uStack_4fc,iStack_500);
                    uVar2 = uStack_4fc;
                    if (*(char *)(param_11 + 0x11) != '\0') {
                      uVar2 = uStack_4fc >> 1;
                    }
                    cVar3 = '\0';
                    if (((((uVar2 & 1) != 0) &&
                         (iVar6 = FUN_142306800(&local_518,&local_508,1), iVar6 != 0)) &&
                        ((cVar3 = '\0', *(char *)(param_11 + 0x16) == '\0' || (iVar6 != 1)))) &&
                       ((*(char *)(param_11 + 0x15) == '\0' || (iVar6 != 2)))) {
                      cVar3 = '\x01';
                      goto LAB_14269fa41;
                    }
                  }
                }
                lVar19 = lVar19 + 1;
              } while (lVar19 < iVar5);
              uVar23 = (undefined4)local_4e0;
              uVar24 = (undefined4)((ulonglong)local_4e0 >> 0x20);
              uVar25 = (undefined4)local_4a0;
              uVar27 = (undefined4)((ulonglong)local_4a0 >> 0x20);
              uVar28 = (undefined4)local_4a8;
              uVar30 = (undefined4)((ulonglong)local_4a8 >> 0x20);
              uVar32 = (undefined4)local_4b0;
              uVar34 = (undefined4)((ulonglong)local_4b0 >> 0x20);
              uVar36 = (undefined4)local_4b8;
              uVar38 = (undefined4)((ulonglong)local_4b8 >> 0x20);
              local_5c6 = CONCAT11(local_5c6._1_1_,cVar3);
              uVar16 = local_528;
              uVar18 = local_4d8;
              uVar22 = local_588;
            }
            pfVar1 = local_3f0;
            pfVar12 = local_5b8;
            param_4 = local_540;
            cVar3 = local_5c8;
            if (fVar39 < 3.4e+38) {
              local_228 = 0.0;
              fStack_224 = 0.0;
              fStack_220 = 0.0;
              fStack_21c = 1.0;
              local_218 = *local_3f0;
              local_214 = local_3f0[1];
              local_210 = local_3f0[2];
              uVar7 = FindFaceIndex(&local_498);
              local_488 = CONCAT44(local_488._4_4_,uVar7);
              _guard_xfg_dispatch_icall_nop(local_338,0,0x90);
              local_2ec = pfVar1[2];
              local_2f4 = *(undefined8 *)pfVar1;
              local_2e0 = local_3e8[2];
              local_5d8 = *(undefined1 *)(param_11 + 0x14);
              local_5e0 = *(undefined1 *)(param_11 + 0x13);
              local_5e8 = &local_228;
              local_5f0 = (int *)0x0;
              local_608 = (float *)&local_518;
              local_5f8 = local_3e8;
              local_2e8 = *(undefined8 *)local_3e8;
              local_600 = pfVar1;
              local_32c = 1.0;
              iVar5 = FUN_142309120(local_3e0,&local_498,local_338,fVar21);
              param_4 = local_540;
              pfVar12 = local_5b8;
              cVar3 = local_5c8;
              if (iVar5 != 1) {
                if (((((local_338[0] & 1) != 0) && (local_58c == 1)) && (local_518 == 0)) &&
                   ((local_50c & 0xf800000) == 0x800000)) {
                  local_338[0] = local_338[0] & 0xfe;
                }
                if (local_32c < *local_5b8) {
                  local_5c4 = 1;
                  if ((local_5c3 == '\0') && ((local_338[0] & 1) == 0)) {
                    iVar5 = (int)local_540[1];
                    *(int *)(local_540 + 1) = iVar5 + 1;
                    if (*(int *)((longlong)local_540 + 0xc) < iVar5 + 1) {
                      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                                (local_540,iVar5);
                    }
                    pbVar14 = (byte *)((longlong)iVar5 * 0x90 + *param_4);
                    *pbVar14 = *pbVar14 ^ (*pbVar14 ^ local_338[0]) & 1;
                    *pbVar14 = *pbVar14 ^ (local_338[0] ^ *pbVar14) & 2;
                    *(undefined4 *)(pbVar14 + 4) = local_334;
                    *(uint *)(pbVar14 + 8) =
                         *(uint *)(pbVar14 + 8) ^ (local_330 ^ *(uint *)(pbVar14 + 8)) & 1;
                    *(float *)(pbVar14 + 0xc) = local_32c;
                    *(undefined4 *)(pbVar14 + 0x10) = local_328;
                    *(undefined8 *)(pbVar14 + 0x14) = local_324;
                    *(undefined4 *)(pbVar14 + 0x1c) = local_31c;
                    *(undefined8 *)(pbVar14 + 0x20) = local_318;
                    *(undefined4 *)(pbVar14 + 0x28) = local_310;
                    *(undefined8 *)(pbVar14 + 0x2c) = local_30c;
                    *(undefined4 *)(pbVar14 + 0x34) = local_304;
                    *(undefined8 *)(pbVar14 + 0x38) = local_300;
                    *(undefined4 *)(pbVar14 + 0x40) = local_2f8;
                    *(undefined8 *)(pbVar14 + 0x44) = local_2f4;
                    *(float *)(pbVar14 + 0x4c) = local_2ec;
                    *(undefined8 *)(pbVar14 + 0x50) = local_2e8;
                    *(float *)(pbVar14 + 0x58) = local_2e0;
                    *(undefined4 *)(pbVar14 + 0x5c) = local_2dc;
                    *(undefined4 *)(pbVar14 + 0x60) = local_2d8;
                    *(undefined4 *)(pbVar14 + 100) = local_2d4;
                    *(undefined4 *)(pbVar14 + 0x68) = local_2d0;
                    *(undefined4 *)(pbVar14 + 0x6c) = local_2cc;
                    *(undefined4 *)(pbVar14 + 0x70) = local_2c8;
                    *(undefined4 *)(pbVar14 + 0x74) = local_2c4;
                    *(undefined4 *)(pbVar14 + 0x78) = local_2c0;
                    *(undefined8 *)(pbVar14 + 0x80) = local_2b8;
                    *(undefined8 *)(pbVar14 + 0x88) = local_2b0;
                    pfVar12 = local_5b8;
                    cVar3 = local_5c8;
                  }
                  else {
                    local_578 = local_328;
                    local_4b8 = local_318;
                    uVar36 = (undefined4)local_318;
                    uVar38 = (undefined4)((ulonglong)local_318 >> 0x20);
                    local_4b0 = local_30c;
                    uVar32 = (undefined4)local_30c;
                    uVar34 = (undefined4)((ulonglong)local_30c >> 0x20);
                    local_5c7 = local_5c7 ^ (local_5c7 ^ local_338[0]) & 3;
                    local_580 = local_334;
                    local_4a8 = local_300;
                    uVar28 = (undefined4)local_300;
                    uVar30 = (undefined4)((ulonglong)local_300 >> 0x20);
                    local_4a0 = local_2f4;
                    uVar25 = (undefined4)local_2f4;
                    uVar27 = (undefined4)((ulonglong)local_2f4 >> 0x20);
                    local_4e0 = local_2e8;
                    uVar23 = (undefined4)local_2e8;
                    uVar24 = (undefined4)((ulonglong)local_2e8 >> 0x20);
                    local_588 = local_2dc;
                    local_4d8 = local_2b8;
                    local_528 = local_2b0;
                    local_550 = local_2cc;
                    local_54c = local_2c8;
                    local_548 = local_2c4;
                    *local_5b8 = local_32c;
                    local_5c0 = local_5c0 ^ (local_5c0 ^ local_330) & 1;
                    local_574 = local_31c;
                    local_4c8 = local_324;
                    local_570 = local_310;
                    local_56c = local_304;
                    local_568 = local_2f8;
                    local_564 = local_2ec;
                    local_560 = local_2e0;
                    local_55c = local_2d8;
                    local_558 = local_2d4;
                    local_554 = local_2d0;
                    local_544 = local_2c0;
                    local_5c8 = '\x01';
                    uVar16 = local_2b0;
                    uVar18 = local_2b8;
                    uVar22 = local_2dc;
                    cVar3 = '\x01';
                    local_57c = local_32c;
                  }
                }
              }
            }
          }
        }
LAB_1426a0014:
        local_584 = local_584 + 1;
        local_4d0 = local_4d0 + 8;
      } while (local_584 < (int)local_4f8[1]);
      if (cVar3 != '\0') {
        iVar6 = (int)param_4[1];
        if (local_520 < iVar6) {
          iVar5 = iVar6 + -1;
          lVar20 = (longlong)iVar5;
          if (local_520 <= lVar20) {
            lVar19 = lVar20 * 0x90;
            lVar20 = (lVar20 - local_520) + 1;
            do {
              lVar11 = *param_4;
              pfVar1 = (float *)(lVar19 + 0xc + lVar11);
              if (*pfVar12 < *pfVar1 || *pfVar12 == *pfVar1) {
                iVar6 = (int)param_4[1];
                iVar13 = (iVar6 - iVar5) + -1;
                if (0 < iVar13) {
                  iVar13 = 1;
                }
                if (iVar13 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)iVar5 * 0x90 + lVar11),
                             (void *)((longlong)(iVar6 - iVar13) * 0x90 + lVar11),
                             (longlong)iVar13 * 0x90);
                  iVar6 = (int)param_4[1];
                }
                *(int *)(param_4 + 1) = iVar6 + -1;
                TArray<HAPI_ParmInfo,FDefaultAllocator>::ResizeShrink(param_4);
                pfVar12 = local_5b8;
              }
              iVar5 = iVar5 + -1;
              lVar19 = lVar19 + -0x90;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            iVar6 = (int)param_4[1];
            uVar16 = local_528;
          }
        }
        *(int *)(param_4 + 1) = iVar6 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar6 + 1) {
          TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_4,iVar6)
          ;
        }
        pbVar14 = (byte *)((longlong)iVar6 * 0x90 + *param_4);
        *pbVar14 = *pbVar14 & 0xfc;
        *pbVar14 = *pbVar14 | local_5c7 & 3;
        *(uint *)(pbVar14 + 8) = *(uint *)(pbVar14 + 8) & 0xfffffffe;
        *(undefined4 *)(pbVar14 + 4) = local_580;
        *(uint *)(pbVar14 + 8) = *(uint *)(pbVar14 + 8) | local_5c0 & 1;
        *(float *)(pbVar14 + 0xc) = local_57c;
        *(undefined8 *)(pbVar14 + 0x14) = local_4c8;
        *(undefined4 *)(pbVar14 + 0x1c) = local_574;
        *(ulonglong *)(pbVar14 + 0x20) = CONCAT44(uVar38,uVar36);
        *(undefined4 *)(pbVar14 + 0x28) = local_570;
        *(ulonglong *)(pbVar14 + 0x2c) = CONCAT44(uVar34,uVar32);
        *(undefined4 *)(pbVar14 + 0x34) = local_56c;
        *(ulonglong *)(pbVar14 + 0x38) = CONCAT44(uVar30,uVar28);
        *(undefined4 *)(pbVar14 + 0x40) = local_568;
        *(ulonglong *)(pbVar14 + 0x44) = CONCAT44(uVar27,uVar25);
        *(float *)(pbVar14 + 0x4c) = local_564;
        *(ulonglong *)(pbVar14 + 0x50) = CONCAT44(uVar24,uVar23);
        *(float *)(pbVar14 + 0x58) = local_560;
        *(undefined4 *)(pbVar14 + 0x60) = local_55c;
        *(undefined4 *)(pbVar14 + 0x10) = local_578;
        *(undefined4 *)(pbVar14 + 0x5c) = uVar22;
        *(undefined4 *)(pbVar14 + 0x68) = local_554;
        *(undefined4 *)(pbVar14 + 100) = local_558;
        *(undefined4 *)(pbVar14 + 0x70) = local_54c;
        *(undefined4 *)(pbVar14 + 0x6c) = local_550;
        *(undefined4 *)(pbVar14 + 0x78) = local_544;
        *(undefined4 *)(pbVar14 + 0x74) = local_548;
        *(undefined8 *)(pbVar14 + 0x80) = uVar18;
        *(undefined8 *)(pbVar14 + 0x88) = uVar16;
      }
      if (local_f8 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
    switch(local_358) {
    case 0:
      if (local_358 == 0) {
        local_358 = 0xff;
      }
      break;
    case 1:
      if (local_358 == 1) {
        local_358 = 0xff;
      }
      break;
    case 2:
      if (local_358 == 2) {
        local_358 = 0xff;
      }
      break;
    case 3:
    case 4:
      if (local_358 == 3) {
        local_358 = 0xff;
      }
      break;
    case 5:
      if (local_358 == 3) {
        local_358 = 0xff;
      }
    }
    (**(code **)(*local_4c0 + 0x350))();
    return (ulonglong)local_5c4;
  }
  uVar9 = (ulonglong)local_358;
LAB_14269f540:
  if ((uint)uVar9 < 6) {
    uVar9 = (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&UNK_1426a0454 + uVar9 * 4)))
                      (IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&UNK_1426a0454 + uVar9 * 4));
    return uVar9;
  }
  uVar9 = (**(code **)(*local_4c0 + 0x350))();
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 1426a0490 FUN_1426a0490 body=3392 status=ok
// SIG undefined FUN_1426a0490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1426a0490(longlong param_1,longlong *param_2,char param_3,longlong *param_4,
                       float *param_5,float *param_6,float *param_7,int *param_8,longlong param_9,
                       char param_10)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  byte *pbVar9;
  float *pfVar10;
  char cVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  byte bVar16;
  longlong lVar17;
  longlong *plVar18;
  bool bVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStack_4e8 [32];
  int *local_4c8;
  float *local_4c0;
  float *local_4b8;
  undefined8 *local_4b0;
  undefined8 *local_4a8;
  undefined1 local_4a0;
  undefined1 local_498;
  char local_488;
  char local_487;
  byte local_486;
  byte local_485;
  char local_484;
  undefined4 local_480;
  float local_47c;
  longlong *local_478;
  uint local_470;
  float *local_468;
  float local_460;
  int local_45c;
  undefined4 local_458;
  float local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  float local_440;
  float local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  longlong *local_418;
  longlong local_410;
  byte local_408 [4];
  undefined4 local_404;
  uint local_400;
  float local_3fc;
  undefined4 local_3f8;
  undefined8 local_3f4;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3dc;
  undefined4 local_3d4;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c4;
  float local_3bc;
  undefined8 local_3b8;
  float local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined8 local_388;
  undefined8 local_380;
  float local_378;
  float local_374;
  float local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  int local_358;
  longlong local_350;
  int local_348;
  int local_344;
  int local_340;
  uint local_33c;
  undefined8 local_338;
  int local_328;
  int iStack_324;
  int iStack_320;
  uint uStack_31c;
  undefined8 local_318;
  longlong *local_310;
  undefined8 local_308;
  longlong *plStack_300;
  undefined8 local_2f8;
  undefined2 local_2f0;
  undefined4 local_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float *local_2b8;
  float *local_2b0;
  longlong *local_2a8;
  longlong local_298;
  longlong local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  float local_278;
  float local_274;
  float local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined2 local_250;
  undefined4 local_24c;
  undefined1 auStack_248 [8];
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [256];
  undefined1 *local_128;
  undefined8 local_120;
  undefined1 local_118 [48];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_4e8;
  local_468 = param_5;
  fVar20 = *param_7 - *param_6;
  fVar22 = param_7[1] - param_6[1];
  fVar23 = param_7[2] - param_6[2];
  local_2b8 = param_6;
  local_2b0 = param_7;
  local_410 = param_9;
  local_485 = 0;
  fVar25 = SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar23 * fVar23);
  if (0.0001 < fVar25) {
    lVar17 = 0;
    if (param_1 != 0) {
      lVar17 = *(longlong *)(param_1 + 0x218);
    }
    if (lVar17 != 0) {
      local_484 = param_3;
      local_478 = param_4;
      local_310 = param_2;
      local_298 = param_1;
      local_2a8 = (longlong *)FUN_1426e2530(fVar20 * fVar20,0);
      param_7 = (float *)0x0;
      if (local_2a8 != (longlong *)0x0) {
        (**(code **)(*local_2a8 + 0x348))
                  (local_2a8,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x1646);
        local_378 = *param_6;
        local_374 = param_6[1];
        local_348 = *param_8;
        local_2c0 = 1.0 / fVar25;
        local_344 = param_8[1];
        local_340 = param_8[2];
        local_33c = param_8[3];
        uStack_360 = 0;
        local_368 = 0;
        local_487 = '\0';
        local_47c = 0.0;
        local_370 = param_6[2];
        cVar11 = '\0';
        local_2c8 = local_2c0 * fVar20;
        local_488 = '\0';
        local_2c4 = local_2c0 * fVar22;
        local_2c0 = local_2c0 * fVar23;
        _guard_xfg_dispatch_icall_nop(local_408,0,0x90);
        local_358 = (int)param_4[1];
        uStack_2e8 = 0;
        uStack_2e4 = 0;
        uStack_2e0 = 0;
        uStack_2dc = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_454 = *local_468;
        local_308 = 0;
        plStack_300 = (longlong *)0x0;
        local_2d8 = 0x7f7fffff00000000;
        uStack_2d0 = 0;
        auStack_248 = (undefined1  [8])0x0;
        uStack_240 = 0;
        local_2f8 = CONCAT44(local_2f8._4_4_,0xffffffff);
        local_2f0 = 0;
        local_2ec = 0;
        local_258 = 0xffffffff;
        local_250 = 0;
        local_24c = 0;
        local_238 = 0x7f7fffff00000000;
        uStack_230 = 0;
        local_128 = (undefined1 *)0x0;
        local_120 = 0;
        local_45c = 0;
        bVar16 = 0;
        if (0 < (int)param_2[1]) {
          local_420 = local_390;
          local_428 = local_398;
          local_430 = local_3a0;
          local_438 = local_3a8;
          local_43c = local_3b0;
          local_440 = local_3bc;
          uVar26 = (undefined4)local_3b8;
          uVar27 = (undefined4)((ulonglong)local_3b8 >> 0x20);
          local_444 = local_3c8;
          uVar28 = (undefined4)local_3c4;
          uVar29 = (undefined4)((ulonglong)local_3c4 >> 0x20);
          local_448 = local_3d4;
          uVar30 = (undefined4)local_3d0;
          uVar31 = (undefined4)((ulonglong)local_3d0 >> 0x20);
          local_44c = local_3e0;
          local_424 = local_394;
          uVar32 = (undefined4)local_3dc;
          uVar33 = (undefined4)((ulonglong)local_3dc >> 0x20);
          local_450 = local_3ec;
          local_42c = local_39c;
          uVar34 = (undefined4)local_3e8;
          uVar35 = (undefined4)((ulonglong)local_3e8 >> 0x20);
          local_470 = local_400;
          local_434 = local_3a4;
          uVar36 = (undefined4)local_3f4;
          uVar37 = (undefined4)((ulonglong)local_3f4 >> 0x20);
          local_486 = local_408[0];
          local_480 = local_3f8;
          local_350 = 0;
          local_338 = local_380;
          local_318 = local_388;
          local_458 = local_404;
          pfVar10 = local_468;
          uVar7 = local_380;
          uVar14 = local_388;
          uVar21 = local_3f8;
          uVar24 = local_3ac;
          do {
            lVar17 = *(longlong *)(*local_310 + local_350);
            lVar6 = param_9;
            plVar15 = local_478;
            if (lVar17 != 0) {
              lVar13 = *(longlong *)(lVar17 + 200);
              if (lVar13 == 0) {
                local_418 = *(longlong **)(lVar17 + 0x110);
                if (local_418 == (longlong *)0x0) {
                  local_418 = *(longlong **)(lVar17 + 0x118);
                  goto LAB_1426a088a;
                }
              }
              else {
                local_418 = *(longlong **)(lVar13 + 0x110);
                if (local_418 == (longlong *)0x0) {
                  local_418 = *(longlong **)(lVar13 + 0x118);
LAB_1426a088a:
                  if (local_418 == (longlong *)0x0) goto LAB_1426a0f3a;
                }
              }
              plVar18 = local_418;
              bVar19 = (longlong)local_120 < 0;
              local_120 = local_120 & 0xffffffff00000000;
              if (bVar19) {
                TArray<FSkeletalMeshSkinningData_*,TInlineAllocator<32,TSizedDefaultAllocator<32>_>_>
                ::ResizeTo(local_228,0);
              }
              iVar2 = (**(code **)(*plVar18 + 200))(plVar18);
              iVar3 = (int)local_120 + iVar2;
              local_120 = CONCAT44(local_120._4_4_,iVar3);
              if (local_120._4_4_ < iVar3) {
                FUN_14157a330(local_228);
              }
              puVar5 = local_228;
              if (local_128 != (undefined1 *)0x0) {
                puVar5 = local_128;
              }
              (**(code **)(*plVar18 + 0xd0))(plVar18,puVar5,iVar2);
              lVar13 = 0;
              pfVar10 = local_468;
              plVar15 = local_478;
              cVar11 = local_488;
              if (iVar2 != 0) {
                fVar20 = 3.4e+38;
                local_460 = 0.0;
                fVar22 = local_47c;
                local_290 = (longlong)iVar2;
                if (0 < iVar2) {
                  do {
                    puVar5 = local_228;
                    if (local_128 != (undefined1 *)0x0) {
                      puVar5 = local_128;
                    }
                    plVar15 = *(longlong **)(puVar5 + lVar13 * 8);
                    lVar6 = FUN_142697530(lVar17);
                    if (lVar6 == lVar17) {
                      (**(code **)(*plVar15 + 0xb0))(plVar15);
                      if ((((local_328 == (int)local_368) && (iStack_324 == local_368._4_4_)) &&
                          (iStack_320 == (int)uStack_360)) && (uStack_31c == uStack_360._4_4_)) {
                        if (local_487 != '\0') {
LAB_1426a0a3f:
                          local_47c = (float)CONCAT22(local_47c._2_2_,0x407);
                          uVar7 = (**(code **)(*plVar15 + 0x40))(plVar15,local_118);
                          GetPxTransform_AssumesLocked(&local_288,plVar15,plVar18);
                          local_4b0 = &local_268;
                          local_4c0 = &local_47c;
                          local_4b8 = (float *)CONCAT44(local_4b8._4_4_,1);
                          local_4c8 = (int *)CONCAT44(local_4c8._4_4_,fVar25);
                          uVar4 = physx::PxGeometryQuery::raycast(&local_378,&local_2c8,uVar7);
                          lVar6 = (longlong)(int)uVar4;
                          param_9 = local_410;
                          if (uVar4 < 2) {
                            if (0 < (int)uVar4) {
                              puVar12 = (undefined8 *)(auStack_248 + 4);
                              do {
                                fVar23 = *(float *)(puVar12 + 2);
                                if (fVar23 < fVar20) {
                                  local_308 = *(undefined8 *)((longlong)puVar12 + -0x24);
                                  local_2f0 = *(undefined2 *)((longlong)puVar12 + -0xc);
                                  local_2f8 = *(undefined8 *)((longlong)puVar12 + -0x14);
                                  local_2ec = (undefined4)puVar12[-1];
                                  uStack_2e8 = (undefined4)((ulonglong)puVar12[-1] >> 0x20);
                                  uStack_2e4 = (undefined4)*puVar12;
                                  uStack_2e0 = (undefined4)((ulonglong)*puVar12 >> 0x20);
                                  uStack_2dc = *(undefined4 *)(puVar12 + 1);
                                  uStack_2d0 = *(undefined8 *)((longlong)puVar12 + 0x14);
                                  local_2d8 = CONCAT44(fVar23,*(undefined4 *)
                                                               ((longlong)puVar12 + 0xc));
                                  fVar20 = fVar23;
                                  local_460 = fVar22;
                                  plStack_300 = plVar15;
                                  if ((*(byte *)(lVar17 + 0x13) & 8) == 0) {
                                    local_308 = (**(code **)(*plVar15 + 0x80))(plVar15);
                                  }
                                  else {
                                    local_308 = *(undefined8 *)(lVar17 + 0x110);
                                  }
                                }
                                puVar12 = puVar12 + 8;
                                lVar6 = lVar6 + -1;
                              } while (lVar6 != 0);
                            }
                            param_9 = local_410;
                            plVar18 = local_418;
                            if ((param_10 != '\0') &&
                               (uVar7 = local_338, uVar14 = local_318, lVar6 = local_410,
                               0 < (int)uVar4)) break;
                          }
                        }
                      }
                      else {
                        local_487 = '\0';
                        local_368 = CONCAT44(iStack_324,local_328);
                        uStack_360 = CONCAT44(uStack_31c,iStack_320);
                        uVar4 = uStack_31c;
                        if (*(char *)(param_9 + 0x11) != '\0') {
                          uVar4 = uStack_31c >> 1;
                        }
                        if (((((uVar4 & 1) != 0) &&
                             (fVar22 = (float)FUN_142306800(&local_348,&local_328,1), fVar22 != 0.0)
                             ) && ((*(char *)(param_9 + 0x16) == '\0' || (fVar22 != 1.4013e-45))))
                           && ((*(char *)(param_9 + 0x15) == '\0' || (fVar22 != 2.8026e-45)))) {
                          local_487 = '\x01';
                          goto LAB_1426a0a3f;
                        }
                      }
                    }
                    lVar13 = lVar13 + 1;
                    uVar7 = local_338;
                    uVar14 = local_318;
                    lVar6 = local_410;
                  } while (lVar13 < local_290);
                }
                local_47c = fVar22;
                fVar22 = local_460;
                pfVar10 = local_468;
                plVar15 = local_478;
                uVar21 = local_480;
                cVar11 = local_488;
                if (fVar20 < 3.4e+38) {
                  local_288 = 0;
                  uStack_280 = 0x3f80000000000000;
                  local_278 = local_378;
                  local_270 = local_370;
                  local_274 = local_374;
                  _guard_xfg_dispatch_icall_nop(local_408,0,0x90);
                  local_3fc = 1.0;
                  local_3bc = local_2b8[2];
                  local_3c4 = *(undefined8 *)local_2b8;
                  local_3b0 = local_2b0[2];
                  local_498 = *(undefined1 *)(lVar6 + 0x14);
                  local_4a0 = *(undefined1 *)(lVar6 + 0x13);
                  local_4a8 = &local_288;
                  local_4c8 = &local_348;
                  local_4b0 = (undefined8 *)0x0;
                  local_3b8 = *(undefined8 *)local_2b0;
                  local_4b8 = local_2b0;
                  local_4c0 = local_2b8;
                  iVar2 = FUN_142309120(local_298,&local_308,local_408,fVar25);
                  plVar15 = local_478;
                  pfVar10 = local_468;
                  uVar21 = local_480;
                  cVar11 = local_488;
                  if (iVar2 != 1) {
                    if (((((local_408[0] & 1) != 0) && (fVar22 == 1.4013e-45)) && (local_348 == 0))
                       && ((local_33c & 0xf800000) == 0x800000)) {
                      local_408[0] = local_408[0] & 0xfe;
                    }
                    if (local_3fc < *local_468) {
                      local_485 = 1;
                      if ((local_484 == '\0') && ((local_408[0] & 1) == 0)) {
                        iVar2 = (int)local_478[1];
                        *(int *)(local_478 + 1) = iVar2 + 1;
                        if (*(int *)((longlong)local_478 + 0xc) < iVar2 + 1) {
                          TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::
                          ResizeGrow(local_478,iVar2);
                        }
                        pbVar9 = (byte *)((longlong)iVar2 * 0x90 + *plVar15);
                        *pbVar9 = *pbVar9 ^ (*pbVar9 ^ local_408[0]) & 1;
                        *pbVar9 = *pbVar9 ^ (*pbVar9 ^ local_408[0]) & 2;
                        *(undefined4 *)(pbVar9 + 4) = local_404;
                        *(uint *)(pbVar9 + 8) =
                             *(uint *)(pbVar9 + 8) ^ (local_400 ^ *(uint *)(pbVar9 + 8)) & 1;
                        *(float *)(pbVar9 + 0xc) = local_3fc;
                        *(undefined4 *)(pbVar9 + 0x10) = local_3f8;
                        *(undefined8 *)(pbVar9 + 0x14) = local_3f4;
                        *(undefined4 *)(pbVar9 + 0x1c) = local_3ec;
                        *(undefined8 *)(pbVar9 + 0x20) = local_3e8;
                        *(undefined4 *)(pbVar9 + 0x28) = local_3e0;
                        *(undefined8 *)(pbVar9 + 0x2c) = local_3dc;
                        *(undefined4 *)(pbVar9 + 0x34) = local_3d4;
                        *(undefined8 *)(pbVar9 + 0x38) = local_3d0;
                        *(undefined4 *)(pbVar9 + 0x40) = local_3c8;
                        *(undefined8 *)(pbVar9 + 0x44) = local_3c4;
                        *(float *)(pbVar9 + 0x4c) = local_3bc;
                        *(undefined8 *)(pbVar9 + 0x50) = local_3b8;
                        *(float *)(pbVar9 + 0x58) = local_3b0;
                        *(undefined4 *)(pbVar9 + 0x5c) = local_3ac;
                        *(undefined4 *)(pbVar9 + 0x60) = local_3a8;
                        *(undefined4 *)(pbVar9 + 100) = local_3a4;
                        *(undefined4 *)(pbVar9 + 0x68) = local_3a0;
                        *(undefined4 *)(pbVar9 + 0x6c) = local_39c;
                        *(undefined4 *)(pbVar9 + 0x70) = local_398;
                        *(undefined4 *)(pbVar9 + 0x74) = local_394;
                        *(undefined4 *)(pbVar9 + 0x78) = local_390;
                        *(undefined8 *)(pbVar9 + 0x80) = local_388;
                        *(undefined8 *)(pbVar9 + 0x88) = local_380;
                        pfVar10 = local_468;
                        uVar21 = local_480;
                        cVar11 = local_488;
                      }
                      else {
                        local_486 = local_486 ^ (local_486 ^ local_408[0]) & 3;
                        uVar36 = (undefined4)local_3f4;
                        uVar37 = (undefined4)((ulonglong)local_3f4 >> 0x20);
                        uVar34 = (undefined4)local_3e8;
                        uVar35 = (undefined4)((ulonglong)local_3e8 >> 0x20);
                        uVar32 = (undefined4)local_3dc;
                        uVar33 = (undefined4)((ulonglong)local_3dc >> 0x20);
                        uVar30 = (undefined4)local_3d0;
                        uVar31 = (undefined4)((ulonglong)local_3d0 >> 0x20);
                        uVar28 = (undefined4)local_3c4;
                        uVar29 = (undefined4)((ulonglong)local_3c4 >> 0x20);
                        uVar26 = (undefined4)local_3b8;
                        uVar27 = (undefined4)((ulonglong)local_3b8 >> 0x20);
                        local_458 = local_404;
                        local_470 = local_470 ^ (local_470 ^ local_400) & 1;
                        local_450 = local_3ec;
                        local_44c = local_3e0;
                        local_448 = local_3d4;
                        local_444 = local_3c8;
                        local_440 = local_3bc;
                        local_43c = local_3b0;
                        local_424 = local_394;
                        local_438 = local_3a8;
                        *local_468 = local_3fc;
                        local_454 = local_3fc;
                        local_480 = local_3f8;
                        local_488 = '\x01';
                        local_434 = local_3a4;
                        local_430 = local_3a0;
                        local_42c = local_39c;
                        local_428 = local_398;
                        local_420 = local_390;
                        local_318 = local_388;
                        local_338 = local_380;
                        uVar7 = local_380;
                        uVar14 = local_388;
                        uVar21 = local_3f8;
                        uVar24 = local_3ac;
                        cVar11 = '\x01';
                      }
                    }
                  }
                }
              }
            }
LAB_1426a0f3a:
            local_45c = local_45c + 1;
            local_350 = local_350 + 8;
            param_9 = lVar6;
          } while (local_45c < (int)local_310[1]);
          if (cVar11 != '\0') {
            iVar2 = (int)plVar15[1];
            if (local_358 < iVar2) {
              iVar3 = iVar2 + -1;
              lVar17 = (longlong)iVar3;
              if (local_358 <= lVar17) {
                lVar6 = lVar17 * 0x90;
                lVar17 = (lVar17 - local_358) + 1;
                do {
                  lVar13 = *plVar15;
                  pfVar1 = (float *)(lVar6 + 0xc + lVar13);
                  if (*pfVar10 < *pfVar1 || *pfVar10 == *pfVar1) {
                    iVar2 = (int)plVar15[1];
                    iVar8 = (iVar2 - iVar3) + -1;
                    if (0 < iVar8) {
                      iVar8 = 1;
                    }
                    if (iVar8 != 0) {
                      _guard_xfg_dispatch_icall_nop
                                ((void *)((longlong)iVar3 * 0x90 + lVar13),
                                 (void *)((longlong)(iVar2 - iVar8) * 0x90 + lVar13),
                                 (longlong)iVar8 * 0x90);
                      iVar2 = (int)plVar15[1];
                    }
                    *(int *)(plVar15 + 1) = iVar2 + -1;
                    TArray<HAPI_ParmInfo,FDefaultAllocator>::ResizeShrink(plVar15);
                    pfVar10 = local_468;
                  }
                  iVar3 = iVar3 + -1;
                  lVar6 = lVar6 + -0x90;
                  lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
                iVar2 = (int)plVar15[1];
                uVar7 = local_338;
              }
            }
            *(int *)(plVar15 + 1) = iVar2 + 1;
            if (*(int *)((longlong)plVar15 + 0xc) < iVar2 + 1) {
              TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                        (plVar15,iVar2);
            }
            pbVar9 = (byte *)((longlong)iVar2 * 0x90 + *plVar15);
            *pbVar9 = *pbVar9 & 0xfc;
            *pbVar9 = *pbVar9 | local_486 & 3;
            *(uint *)(pbVar9 + 8) = *(uint *)(pbVar9 + 8) & 0xfffffffe;
            *(undefined4 *)(pbVar9 + 4) = local_458;
            *(uint *)(pbVar9 + 8) = *(uint *)(pbVar9 + 8) | local_470 & 1;
            *(ulonglong *)(pbVar9 + 0x14) = CONCAT44(uVar37,uVar36);
            *(undefined4 *)(pbVar9 + 0x1c) = local_450;
            *(ulonglong *)(pbVar9 + 0x20) = CONCAT44(uVar35,uVar34);
            *(undefined4 *)(pbVar9 + 0x28) = local_44c;
            *(ulonglong *)(pbVar9 + 0x2c) = CONCAT44(uVar33,uVar32);
            *(undefined4 *)(pbVar9 + 0x34) = local_448;
            *(ulonglong *)(pbVar9 + 0x38) = CONCAT44(uVar31,uVar30);
            *(undefined4 *)(pbVar9 + 0x40) = local_444;
            *(ulonglong *)(pbVar9 + 0x44) = CONCAT44(uVar29,uVar28);
            *(float *)(pbVar9 + 0x4c) = local_440;
            *(ulonglong *)(pbVar9 + 0x50) = CONCAT44(uVar27,uVar26);
            *(float *)(pbVar9 + 0x58) = local_43c;
            *(undefined4 *)(pbVar9 + 0x60) = local_438;
            *(float *)(pbVar9 + 0xc) = local_454;
            *(undefined4 *)(pbVar9 + 0x10) = uVar21;
            *(undefined4 *)(pbVar9 + 0x5c) = uVar24;
            *(undefined4 *)(pbVar9 + 0x68) = local_430;
            *(undefined4 *)(pbVar9 + 100) = local_434;
            *(undefined4 *)(pbVar9 + 0x70) = local_428;
            *(undefined4 *)(pbVar9 + 0x6c) = local_42c;
            *(undefined4 *)(pbVar9 + 0x78) = local_420;
            *(undefined4 *)(pbVar9 + 0x74) = local_424;
            *(undefined8 *)(pbVar9 + 0x80) = uVar14;
            *(undefined8 *)(pbVar9 + 0x88) = uVar7;
          }
          bVar16 = local_485;
          if (local_128 != (undefined1 *)0x0) {
            FMemory::Free();
            bVar16 = local_485;
          }
        }
        (**(code **)(*local_2a8 + 0x350))();
        return (ulonglong)bVar16;
      }
    }
  }
  return (ulonglong)param_7 & 0xffffffffffffff00;
}



// FUNCTION 1426a11e0 FUN_1426a11e0 body=1247 status=ok
// SIG undefined FUN_1426a11e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1426a11e0(longlong param_1,longlong *param_2,undefined8 *param_3,float param_4,
                       longlong *param_5,char param_6)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  int local_270;
  int local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined8 local_258;
  longlong local_250;
  longlong *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined8 *local_230;
  longlong local_228;
  longlong local_220;
  longlong *local_218;
  undefined4 local_208;
  undefined1 local_200 [8];
  PxTransform local_1f8 [32];
  PxGeometry local_1d8 [48];
  undefined1 local_1a8 [256];
  undefined1 *local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  
  uVar6 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (param_1 != 0) {
    local_26c = (int)param_5[1];
    local_248 = param_2;
    local_230 = param_3;
    local_228 = param_1;
    local_98 = uVar6;
    lVar7 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar6 = *(ulonglong *)(param_1 + 0x120);
    local_220 = param_1;
    if (!bVar1) {
      local_220 = 0;
    }
    if ((uVar6 == 0) && (uVar6 = FUN_1423407b0(param_1), uVar6 == 0)) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(uVar6 + 0x218);
    }
    if (lVar7 != 0) {
      local_218 = (longlong *)FUN_1426e2530(lVar7,0);
      uVar6 = 0;
      if (local_218 != (longlong *)0x0) {
        local_240 = *(undefined4 *)param_3;
        local_23c = *(undefined4 *)((longlong)param_3 + 4);
        local_238 = *(undefined4 *)(param_3 + 1);
        (**(code **)(*local_218 + 0x348))
                  (local_218,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0x1a22);
        if (param_4 < 0.0) {
          param_4 = 3.4028235e+38;
        }
        else {
          param_4 = param_4 * param_4;
        }
        local_a8 = (undefined1 *)0x0;
        local_a0 = 0;
        local_270 = 0;
        if (0 < (int)param_2[1]) {
          local_250 = 0;
          local_278 = local_260;
          uVar18 = local_268;
          uVar19 = uStack_264;
          do {
            lVar15 = 0;
            lVar7 = *(longlong *)(local_250 + *local_248);
            if ((lVar7 != 0) && (*(char *)(lVar7 + 0xc) != '\0')) {
              plVar14 = *(longlong **)(lVar7 + 0x110);
              plVar8 = plVar14;
              if (plVar14 == (longlong *)0x0) {
                plVar8 = *(longlong **)(lVar7 + 0x118);
              }
              if (plVar8 != (longlong *)0x0) {
                lVar10 = *(longlong *)(lVar7 + 200);
                if (lVar10 == 0) {
                  if (plVar14 == (longlong *)0x0) {
                    plVar14 = *(longlong **)(lVar7 + 0x118);
                    goto LAB_1426a140c;
                  }
                }
                else {
                  plVar14 = *(longlong **)(lVar10 + 0x110);
                  if (plVar14 == (longlong *)0x0) {
                    plVar14 = *(longlong **)(lVar10 + 0x118);
LAB_1426a140c:
                    if (plVar14 == (longlong *)0x0) goto LAB_1426a1612;
                  }
                }
                iVar4 = (**(code **)(*plVar14 + 200))(plVar14);
                lVar10 = local_a0;
                if (iVar4 != 0) {
                  uVar2 = local_a0._4_4_;
                  bVar1 = false;
                  local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
                  fVar17 = 3.4e+38;
                  if ((lVar10 < 0) && (uVar2 != 0)) {
                    TArray<FSkeletalMeshSkinningData_*,TInlineAllocator<32,TSizedDefaultAllocator<32>_>_>
                    ::ResizeTo(local_1a8,0);
                  }
                  iVar4 = FillInlinePxShapeArray_AssumesLocked(local_1a8);
                  if (0 < iVar4) {
                    do {
                      puVar12 = local_1a8;
                      if (local_a8 != (undefined1 *)0x0) {
                        puVar12 = local_a8;
                      }
                      plVar8 = *(longlong **)(puVar12 + lVar15 * 8);
                      cVar3 = FUN_14269ccf0(plVar8);
                      if ((cVar3 == '\0') &&
                         (((param_6 == '\0' ||
                           (pbVar9 = (byte *)(**(code **)(*plVar8 + 0x108))(plVar8),
                           (*pbVar9 & 2) != 0)) && (lVar10 = FUN_142697530(lVar7), lVar10 == lVar7))
                         )) {
                        (**(code **)(*plVar8 + 0x40))(plVar8,local_1d8);
                        GetPxTransform_AssumesLocked(local_1f8,plVar8,plVar14);
                        iVar5 = (**(code **)(*plVar8 + 0x30))(plVar8);
                        if (iVar5 != 5) {
                          fVar16 = physx::PxGeometryQuery::pointDistance
                                             ((PxVec3 *)&local_240,local_1d8,local_1f8,
                                              (PxVec3 *)&local_268);
                          if ((fVar16 <= 0.0) || (fVar17 <= fVar16)) {
                            if (fVar16 == 0.0) {
                              fVar17 = 0.0;
                              local_278 = *(undefined4 *)(local_230 + 1);
                              uVar18 = (undefined4)*local_230;
                              uVar19 = (undefined4)((ulonglong)*local_230 >> 0x20);
                              goto LAB_1426a1583;
                            }
                          }
                          else if (fVar16 <= param_4) {
                            bVar1 = true;
                            local_208 = local_260;
                            local_278 = local_260;
                            fVar17 = fVar16;
                            uVar18 = local_268;
                            uVar19 = uStack_264;
                          }
                        }
                      }
                      lVar15 = lVar15 + 1;
                    } while (lVar15 < iVar4);
                    if (bVar1) {
LAB_1426a1583:
                      iVar4 = (int)param_5[1];
                      *(int *)(param_5 + 1) = iVar4 + 1;
                      if (*(int *)((longlong)param_5 + 0xc) < iVar4 + 1) {
                        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                        ::ResizeGrow(param_5,iVar4);
                      }
                      puVar13 = (undefined8 *)((longlong)iVar4 * 0x20 + *param_5);
                      *puVar13 = CONCAT44(uVar19,uVar18);
                      *(undefined4 *)(puVar13 + 1) = local_278;
                      if (fVar17 <= 0.0) {
                        fVar17 = 0.0;
                      }
                      else {
                        fVar17 = SQRT(fVar17);
                      }
                      *(float *)((longlong)puVar13 + 0xc) = fVar17;
                      FWeakObjectPtr::operator=();
                      if ((local_220 == 0) || (*(short *)(lVar7 + 4) == -1)) {
                        puVar11 = &local_258;
                        local_258 = 0;
                      }
                      else {
                        puVar11 = (undefined8 *)
                                  FUN_1423acf90(local_220,local_200,(int)*(short *)(lVar7 + 4));
                      }
                      puVar13[3] = *puVar11;
                    }
                  }
                }
              }
            }
LAB_1426a1612:
            local_270 = local_270 + 1;
            local_250 = local_250 + 8;
          } while (local_270 < (int)local_248[1]);
          if (local_a8 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
        (**(code **)(*local_218 + 0x350))();
        return (ulonglong)CONCAT31((int3)((uint)local_26c >> 8),local_26c < (int)param_5[1]);
      }
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1426a16c0 FUN_1426a16c0 body=5820 status=ok
// SIG undefined FUN_1426a16c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426a16c0(longlong param_1,longlong *param_2,uint param_3,longlong *param_4)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *_Src;
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  wint_t wVar9;
  wint_t wVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  wint_t *pwVar21;
  undefined8 *puVar22;
  undefined2 *puVar23;
  ushort *puVar24;
  wchar_t *pwVar25;
  wchar_t *pwVar26;
  undefined1 auStack_ab8 [32];
  longlong local_a98;
  undefined1 local_a88;
  undefined1 local_a87;
  undefined1 local_a86;
  undefined1 local_a85;
  undefined1 local_a84;
  undefined1 local_a83 [3];
  int local_a80 [2];
  ulonglong local_a78;
  ulonglong local_a70;
  ulonglong local_a68;
  longlong local_a60;
  longlong *local_a58;
  undefined4 local_a50 [2];
  longlong *local_a48;
  longlong local_a40;
  longlong *plStack_a38;
  undefined8 local_a30;
  longlong local_a28;
  undefined8 local_a20;
  wchar_t *local_a18;
  int local_a10;
  undefined4 local_a0c;
  longlong local_a08;
  undefined8 local_a00;
  longlong local_9f8 [6];
  undefined8 local_9c8;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  longlong local_9b8 [3];
  undefined4 local_9a0;
  longlong local_998;
  int local_990;
  undefined2 *local_988;
  int local_980;
  ushort *local_978;
  int local_970;
  undefined2 *local_968;
  int local_960;
  undefined2 *local_958;
  int local_950;
  undefined2 *local_948;
  int local_940;
  longlong local_938;
  int local_930;
  undefined1 local_928 [16];
  undefined *local_918;
  uint local_910;
  int local_90c;
  undefined4 local_908;
  undefined1 local_900 [16];
  undefined1 local_8f0 [16];
  undefined8 *local_8e0;
  int local_8d8;
  undefined4 local_8d4;
  undefined1 local_8d0 [16];
  undefined4 local_8c0;
  longlong local_8b8 [2];
  longlong local_8a8 [2];
  longlong local_898 [2];
  longlong local_888 [2];
  undefined1 local_878 [8];
  undefined1 local_870 [8];
  undefined1 local_868 [8];
  undefined1 local_860 [8];
  undefined1 local_858 [8];
  undefined1 local_850 [8];
  undefined4 local_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined1 local_838 [8];
  undefined1 local_830 [8];
  longlong *local_828;
  undefined1 local_818 [8];
  longlong *local_810;
  undefined1 local_800 [8];
  longlong *local_7f8;
  undefined1 local_7e8 [8];
  longlong *local_7e0;
  longlong local_7c8;
  longlong *local_7c0;
  byte local_79f;
  longlong local_738;
  longlong local_6d8;
  longlong local_6c8;
  longlong local_6b8;
  longlong *local_6b0;
  byte local_68f;
  longlong local_628;
  longlong local_5c8;
  longlong local_5b8;
  longlong local_5a8;
  longlong *local_5a0;
  byte local_57f;
  longlong local_518;
  longlong local_4b8;
  longlong local_4a8;
  undefined1 local_498 [48];
  longlong local_468;
  longlong *local_460;
  longlong local_3d8;
  longlong local_378;
  longlong local_368;
  undefined1 local_358 [40];
  undefined1 local_330 [32];
  undefined8 *local_310;
  int local_308;
  longlong local_2e8;
  longlong *local_2e0;
  longlong local_258;
  longlong local_1f8;
  longlong local_1e8;
  longlong local_1d8;
  longlong *local_1d0;
  longlong local_148;
  longlong local_e8;
  longlong local_d8;
  undefined1 local_c8 [112];
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_ab8;
  uVar11 = (param_3 & 0xff) - 1;
  if (uVar11 < 0x1f) {
    uVar11 = (&switchD_1426a1735::switchdataD_1426a2d7c)
             [(&switchD_1426a1735::switchdataD_1426a2da8)[(int)uVar11]];
    local_a60 = param_1;
    local_a48 = param_2;
    switch(param_3 & 0xff) {
    case 1:
      local_a08 = 0;
      local_a00 = 0;
      local_9f8[2] = 0;
      local_9f8[3] = 0;
      FUN_14158ce90(param_4,param_1 + 0x40);
      FUN_14158ce90(param_4,&local_a08);
      FUN_14158ce90(param_4,local_9f8 + 2);
      if ((char)param_4[5] < '\0') {
        *(undefined4 *)(param_1 + 0x48) = 0;
        if (*(int *)(param_1 + 0x4c) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
        }
      }
      else {
        FURL::FURL(local_c8,0);
        if (*(int *)(param_1 + 0x48) == 0) {
          puVar23 = &DAT_143f3eda8;
        }
        else {
          puVar23 = *(undefined2 **)(param_1 + 0x40);
        }
        FUN_14289aca0(local_358,local_c8,puVar23,1);
        FString::operator=(param_1 + 0x40,local_330);
        FString::operator=(param_1 + 0x50,local_9f8 + 2);
        local_a78 = CONCAT44(local_a78._4_4_,local_308);
        if (local_308 != 0) {
          iVar19 = *(int *)(param_1 + 0x68);
          if (*(int *)(param_1 + 0x6c) < iVar19 + local_308) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0x60));
            iVar19 = *(int *)(param_1 + 0x68);
          }
          puVar22 = (undefined8 *)((longlong)iVar19 * 0x10 + *(longlong *)(param_1 + 0x60));
          puVar16 = local_310;
          iVar19 = local_308;
          do {
            *puVar22 = 0;
            iVar12 = *(int *)(puVar16 + 1);
            local_a58 = (longlong *)*puVar16;
            *(int *)(puVar22 + 1) = iVar12;
            if (iVar12 == 0) {
              *(undefined4 *)((longlong)puVar22 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar22,iVar12,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar22,local_a58,(longlong)iVar12 * 2);
            }
            puVar22 = puVar22 + 2;
            puVar16 = puVar16 + 2;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
          *(int *)(local_a60 + 0x68) = *(int *)(local_a60 + 0x68) + (int)local_a78;
          param_1 = local_a60;
        }
        FURL::~FURL(local_358);
        FURL::~FURL(local_c8);
        if (((int)local_a00 != 0) && (0 < (int)local_a00 + -1)) {
          FString::PrintfImpl(&local_988,L"game=%s",local_a08);
          puVar23 = &DAT_143f3eda8;
          if (local_980 != 0) {
            puVar23 = local_988;
          }
          FURL::AddOption(param_1 + 0x18,puVar23);
          if (local_988 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        plVar13 = (longlong *)UOnlineEngineInterface::Get();
        (**(code **)(*plVar13 + 0x3f0))(plVar13,&local_9c8);
        lVar17 = *(longlong *)param_2[0x2b0];
        if ((lVar17 != 0) && ((*(byte *)(lVar17 + 0x30) & 2) == 0)) {
          FControlChannelOutBunch::FControlChannelOutBunch(&local_2e8,lVar17,0);
          local_a84 = 0x22;
          if ((undefined1 *)local_2e0[1] < (undefined1 *)*local_2e0 + 1) {
            (**(code **)(local_2e8 + 0x50))(&local_2e8,&local_a84,1);
          }
          else {
            local_a84 = *(undefined1 *)*local_2e0;
            *local_2e0 = *local_2e0 + 1;
          }
          FUN_14158ce90(&local_2e8,&local_9c8);
          (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                    (*(longlong **)param_2[0x2b0],local_858,&local_2e8,1);
          if (local_1e8 != 0) {
            FMemory::Free();
          }
          if (local_1f8 != 0) {
            FMemory::Free();
          }
          if (local_258 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_2e8);
          lVar17 = *(longlong *)param_2[0x2b0];
        }
        if ((lVar17 != 0) && ((*(byte *)(lVar17 + 0x30) & 2) == 0)) {
          FControlChannelOutBunch::FControlChannelOutBunch(&local_5a8,lVar17,0);
          local_a83[0] = 4;
          if ((undefined1 *)local_5a0[1] < (undefined1 *)*local_5a0 + 1) {
            (**(code **)(local_5a8 + 0x50))(&local_5a8,local_a83,1);
          }
          else {
            local_a83[0] = *(undefined1 *)*local_5a0;
            *local_5a0 = *local_5a0 + 1;
          }
          if ((undefined4 *)local_5a0[1] < (undefined4 *)*local_5a0 + 1) {
            (**(code **)(local_5a8 + 0x50))(&local_5a8,param_2 + 7,4);
            if ((local_57f & 0x10) != 0) {
              FArchive::ByteSwap(&local_5a8,param_2 + 7,4);
            }
          }
          else {
            *(undefined4 *)(param_2 + 7) = *(undefined4 *)*local_5a0;
            *local_5a0 = *local_5a0 + 4;
          }
          (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                    (*(longlong **)param_2[0x2b0],local_850,&local_5a8,1);
          if (local_4a8 != 0) {
            FMemory::Free();
          }
          if (local_4b8 != 0) {
            FMemory::Free();
          }
          if (local_518 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_5a8);
        }
        *(undefined1 *)(param_1 + 0x88) = 1;
        if (local_9c8 != (code *)0x0) {
          FMemory::Free();
        }
      }
      if (local_9f8[2] != 0) {
        FMemory::Free();
      }
      if (local_a08 != 0) {
        FMemory::Free();
      }
      break;
    case 2:
      plVar13 = (longlong *)param_4[1];
      if ((undefined4 *)plVar13[1] < (undefined4 *)*plVar13 + 1) {
        (**(code **)(*param_4 + 0x50))(param_4,local_a50,4);
        if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_4,local_a50,4);
        }
      }
      else {
        local_a50[0] = *(undefined4 *)*plVar13;
        *plVar13 = *plVar13 + 4;
      }
      if (-1 < (char)param_4[5]) {
        uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_800,
                            L"The match you are trying to join is running an incompatible version of the game.  Please try upgrading your game version."
                            ,L"Engine",L"ClientOutdated");
        uVar14 = FText::ToString(uVar14);
        FString::operator=(param_1 + 0x90,uVar14);
        if (local_7f8 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_7f8 + 1;
          lVar17 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*local_7f8)(local_7f8);
            LOCK();
            piVar1 = (int *)((longlong)local_7f8 + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*local_7f8 + 8))(local_7f8,1);
            }
          }
        }
        lVar17 = DAT_146b17150;
        uVar14 = *(undefined8 *)(param_1 + 8);
        plVar13 = (longlong *)(DAT_146b17150 + 0x9e8);
        bVar6 = false;
        *(int *)(DAT_146b17150 + 0x9fc) = *(int *)(DAT_146b17150 + 0x9fc) + 1;
        iVar19 = *(int *)(lVar17 + 0x9fc);
        iVar12 = *(int *)(lVar17 + 0x9f0) + -1;
        lVar15 = (longlong)iVar12;
        if (-1 < iVar12) {
          lVar20 = lVar15 << 4;
          bVar6 = false;
          do {
            lVar3 = *plVar13;
            if (((*(int *)(lVar20 + 8 + lVar3) == 0) ||
                (plVar4 = *(longlong **)(lVar20 + lVar3), plVar4 == (longlong *)0x0)) ||
               (local_a98 = param_1 + 0x90, cVar8 = (**(code **)(*plVar4 + 0x40))(plVar4,0,uVar14,6)
               , cVar8 == '\0')) {
              bVar6 = true;
            }
            lVar20 = lVar20 + -0x10;
            lVar15 = lVar15 + -1;
          } while (-1 < lVar15);
          iVar19 = *(int *)(lVar17 + 0x9fc);
        }
        *(int *)(lVar17 + 0x9fc) = iVar19 + -1;
        if (bVar6) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar13,0);
        }
      }
      break;
    case 3:
      FUN_14158ce90(param_4,param_2 + 0x31);
      if ((char)param_4[5] < '\0') {
        *(undefined4 *)(param_2 + 0x32) = 0;
        if (*(int *)((longlong)param_2 + 0x194) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 0x31,0);
        }
      }
      else {
        FString::FString(local_928,param_1 + 0x18);
        FString::FString(&local_918,param_1 + 0x28);
        local_908 = *(undefined4 *)(param_1 + 0x38);
        FString::FString(local_900,param_1 + 0x40);
        FString::FString(local_8f0,param_1 + 0x50);
        iVar19 = *(int *)(param_1 + 0x68);
        iVar12 = 0;
        puVar16 = *(undefined8 **)(param_1 + 0x60);
        local_8e0 = (undefined8 *)0x0;
        local_8d8 = iVar19;
        if (iVar19 == 0) {
          local_8d4 = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_8e0,iVar19,0);
          puVar22 = local_8e0;
          do {
            *puVar22 = 0;
            iVar18 = *(int *)(puVar16 + 1);
            local_a58 = (longlong *)*puVar16;
            *(int *)(puVar22 + 1) = iVar18;
            if (iVar18 == 0) {
              *(undefined4 *)((longlong)puVar22 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar22,iVar18,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar22,local_a58,(longlong)iVar18 * 2);
            }
            puVar22 = puVar22 + 2;
            puVar16 = puVar16 + 2;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
        FString::FString(local_8d0,param_1 + 0x70);
        local_8c0 = *(undefined4 *)(param_1 + 0x80);
        if (local_918 != &DAT_145156eec) {
          local_910 = 0;
          pwVar26 = (wchar_t *)0x0;
          if (local_90c != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_918);
            pwVar26 = (wchar_t *)(ulonglong)local_910;
          }
          if (local_90c < (int)pwVar26) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_918);
          }
        }
        lVar17 = local_a60;
        local_908 = DAT_146b18930;
        local_a80[0] = *(int *)(local_a60 + 0x68) + -1;
        if (-1 < local_a80[0]) {
          local_a70 = (longlong)local_a80[0] << 4;
          plVar13 = (longlong *)(local_a60 + 0x60);
          local_a78 = (longlong)*(int *)(local_a60 + 0x68) << 4;
          local_a68 = local_a70;
LAB_1426a21e0:
          iVar19 = *(int *)(local_a70 + 8 + *plVar13);
          if (iVar19 == 0) {
            pwVar26 = L"";
          }
          else {
            pwVar26 = *(wchar_t **)(local_a70 + *plVar13);
          }
          local_a18 = (wchar_t *)0x0;
          local_a0c = 0;
          iVar18 = iVar19 + -1;
          if (iVar19 == 0) {
            iVar18 = iVar12;
          }
          if (5 < iVar18) {
            iVar18 = 5;
          }
          iVar19 = iVar18 + 1;
          if (iVar18 == 0) {
            iVar19 = iVar12;
          }
          pwVar25 = (wchar_t *)0x0;
          local_a10 = iVar19;
          if ((0 < iVar19) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a18,0), iVar19 = local_a10,
             pwVar25 = local_a18, 0 < local_a10)) {
            wcsncpy(local_a18,pwVar26,(longlong)iVar18);
            pwVar25[iVar18] = L'\0';
          }
          pwVar26 = L"";
          if (iVar19 != 0) {
            pwVar26 = pwVar25;
          }
          pwVar21 = &DAT_1451594e0;
          do {
            wVar9 = *(wint_t *)((longlong)(pwVar26 + -0xa28aca70) + (longlong)pwVar21);
            if ((wVar9 == 0) && (*pwVar21 == 0)) {
              iVar19 = 0;
              goto LAB_1426a229d;
            }
            if (wVar9 != *pwVar21) {
              wVar9 = towlower(wVar9);
              wVar10 = towlower(*pwVar21);
              if (wVar9 != wVar10) goto LAB_1426a2295;
            }
            pwVar21 = pwVar21 + 1;
          } while( true );
        }
LAB_1426a2347:
        lVar17 = local_a60;
        plVar13 = (longlong *)FUN_142874880(DAT_146b17150,local_a60 + -0x28);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x2c0))(plVar13,&local_998);
          if ((local_990 != 0) && (0 < local_990 + -1)) {
            FString::PrintfImpl(&local_968,L"Name=%s",local_998);
            puVar23 = &DAT_143f3eda8;
            if (local_960 != 0) {
              puVar23 = local_968;
            }
            FURL::AddOption(local_928,puVar23);
            if (local_968 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          uVar14 = FUN_14169f840();
          FString::PrintfImpl(&local_958,L"Hardware=%s",uVar14);
          puVar23 = &DAT_143f3eda8;
          if (local_950 != 0) {
            puVar23 = local_958;
          }
          FURL::AddOption(local_928,puVar23);
          if (local_958 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          (**(code **)(*plVar13 + 0x2c8))(plVar13,&local_938);
          if ((local_930 != 0) && (0 < local_930 + -1)) {
            FString::PrintfImpl(&local_948,&DAT_145157434,local_938);
            puVar23 = &DAT_143f3eda8;
            if (local_940 != 0) {
              puVar23 = local_948;
            }
            FURL::AddOption(local_928,puVar23);
            if (local_948 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          plVar13 = (longlong *)FUN_142547b50(plVar13,local_498);
          if (plVar13 != param_2 + 0x2b) {
            lVar15 = plVar13[1];
            plVar4 = param_2 + 0x2c;
            plVar5 = (longlong *)plVar13[2];
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            local_a40 = lVar15;
            plStack_a38 = plVar5;
            if (&local_a40 != plVar4) {
              local_a40 = *plVar4;
              plStack_a38 = (longlong *)param_2[0x2d];
              *plVar4 = lVar15;
              param_2[0x2d] = (longlong)plVar5;
              local_58 = lVar15;
              plStack_50 = plVar5;
            }
            plVar4 = plStack_a38;
            if (plStack_a38 != (longlong *)0x0) {
              LOCK();
              plVar5 = plStack_a38 + 1;
              lVar15 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              lVar17 = local_a60;
              if ((int)lVar15 == 1) {
                (**(code **)*plStack_a38)(plStack_a38);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar19 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                lVar17 = local_a60;
                if (iVar19 == 1) {
                  (**(code **)(*plStack_a38 + 8))(plStack_a38,1);
                  lVar17 = local_a60;
                }
              }
            }
          }
          plVar4 = param_2 + 0x2e;
          if (plVar4 != plVar13 + 3) {
            iVar19 = (int)plVar13[4];
            _Src = (void *)plVar13[3];
            *(int *)(param_2 + 0x2f) = iVar19;
            if ((iVar19 == 0) && (*(int *)((longlong)param_2 + 0x17c) == 0)) {
              *(undefined4 *)((longlong)param_2 + 0x17c) = 0;
            }
            else {
              TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar4,iVar19);
              _guard_xfg_dispatch_icall_nop((void *)*plVar4,_Src,(longlong)iVar19);
            }
          }
          FUN_1404bf980(local_498);
          if (local_938 != 0) {
            FMemory::Free();
          }
          if (local_998 != 0) {
            FMemory::Free();
          }
        }
        local_a30 = 0;
        lVar15 = FUN_142876150(DAT_146b17150,lVar17 + -0x28);
        if ((lVar15 != 0) && (plVar13 = *(longlong **)(lVar15 + 0x240), plVar13 != (longlong *)0x0))
        {
          puVar16 = (undefined8 *)(**(code **)(*plVar13 + 0x338))(plVar13,local_868);
          local_a30 = *puVar16;
        }
        plVar13 = param_2 + 0x33;
        if ((undefined4 *)*plVar13 != &DAT_14515710c) {
          *(undefined4 *)(param_2 + 0x34) = 0;
          if (*(int *)((longlong)param_2 + 0x1a4) != 2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar13,2);
            iVar12 = (int)param_2[0x34];
          }
          *(int *)(param_2 + 0x34) = iVar12 + 2;
          if (*(int *)((longlong)param_2 + 0x1a4) < iVar12 + 2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar13,iVar12);
          }
          *(undefined4 *)*plVar13 = 0x30;
        }
        FUN_1428bd910(local_928,local_888,0);
        FName::ToString(&local_a30,local_898);
        lVar15 = *(longlong *)param_2[0x2b0];
        if ((lVar15 != 0) && ((*(byte *)(lVar15 + 0x30) & 2) == 0)) {
          FControlChannelOutBunch::FControlChannelOutBunch(&local_468,lVar15,0);
          local_a85 = 5;
          if ((undefined1 *)local_460[1] < (undefined1 *)*local_460 + 1) {
            (**(code **)(local_468 + 0x50))(&local_468,&local_a85,1);
          }
          else {
            local_a85 = *(undefined1 *)*local_460;
            *local_460 = *local_460 + 1;
          }
          FUN_14158ce90(&local_468,plVar13);
          FUN_14158ce90(&local_468,local_888);
          FUN_1425da060(&local_468,param_2 + 0x2b);
          FUN_14158ce90(&local_468,local_898);
          (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                    (*(longlong **)param_2[0x2b0],local_860,&local_468,1);
          if (local_368 != 0) {
            FMemory::Free();
          }
          if (local_378 != 0) {
            FMemory::Free();
          }
          if (local_3d8 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_468);
        }
        plVar13 = *(longlong **)(*(longlong *)(lVar17 + 8) + 0x90);
        (**(code **)(*plVar13 + 0x2c8))(plVar13,0);
        if (local_898[0] != 0) {
          FMemory::Free();
        }
        if (local_888[0] != 0) {
          FMemory::Free();
        }
        FURL::~FURL(local_928);
      }
      break;
    case 6:
      local_a28 = 0;
      local_a20 = 0;
      FUN_14158ce90(param_4,&local_a28);
      if (-1 < (char)param_4[5]) {
        if ((int)local_a20 < 2) {
          uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_7e8,L"Pending Connection Failed.",L"NetworkErrors",
                              L"GenericPendingConnectionFailed");
          uVar14 = FText::ToString(uVar14);
          FString::operator=(&local_a28,uVar14);
          if (local_7e0 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_7e0 + 1;
            lVar17 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*local_7e0)(local_7e0);
              LOCK();
              piVar1 = (int *)((longlong)local_7e0 + 0xc);
              iVar19 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar19 == 1) {
                (**(code **)(*local_7e0 + 8))(local_7e0,1);
              }
            }
          }
        }
        FString::operator=(param_1 + 0x90,&local_a28);
        (**(code **)(*param_2 + 0x2f8))(param_2);
      }
      if (local_a28 != 0) {
        FMemory::Free();
      }
      break;
    case 0x12:
      local_a78 = local_a78 & 0xffffffff00000000;
      local_9f8[4] = 0;
      local_9f8[5] = 0;
      (**(code **)(*param_4 + 0x68))(param_4,&local_a78);
      FUN_14158ce90(param_4,local_9f8 + 4);
      if (-1 < (char)param_4[5]) {
        plVar13 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 0x68);
        (**(code **)(*plVar13 + 0x290))(plVar13,&local_a78,local_9f8 + 4);
      }
      if (local_9f8[4] != 0) {
        FMemory::Free();
      }
      break;
    case 0x15:
      if (((DAT_146aff4f8 == 0) || (DAT_146aff4f0 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*DAT_146aff4f0 + 0x18))(), cVar8 == '\0')) {
        plVar13 = (longlong *)(param_1 + 0x90);
        if ((wchar_t *)*plVar13 != L"No encryption ack handler") {
          iVar19 = 0;
          *(undefined4 *)(param_1 + 0x98) = 0;
          if (*(int *)(param_1 + 0x9c) != 0x1a) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar13,0x1a);
            iVar19 = *(int *)(param_1 + 0x98);
          }
          *(int *)(param_1 + 0x98) = iVar19 + 0x1a;
          if (*(int *)(param_1 + 0x9c) < iVar19 + 0x1a) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar13,iVar19);
          }
          builtin_wcsncpy((wchar_t *)*plVar13,L"No encryption ack handler",0x1a);
        }
        (**(code **)(*param_2 + 0x2f8))(param_2);
      }
      else {
        FWeakObjectPtr::operator=(&local_a48,param_2);
        plVar13 = local_a48;
        local_9c8 = FUN_142693c50;
        uStack_9c0 = 0;
        local_9b8[2] = 0;
        local_9a0 = 0;
        lVar17 = operator_new(0x30,local_9b8 + 2);
        if (lVar17 != 0) {
          local_848 = (undefined4)local_9c8;
          uStack_844 = local_9c8._4_4_;
          uStack_840 = uStack_9c0;
          uStack_83c = uStack_9bc;
          local_a58 = plVar13;
          FUN_142685040(lVar17,param_1 + -0x28,&local_848,&local_a58);
        }
        plVar13 = (longlong *)0x0;
        if (DAT_146aff4f8 != 0) {
          plVar13 = DAT_146aff4f0;
        }
        (**(code **)(*plVar13 + 0x38))(plVar13,local_9b8 + 2);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(local_9b8 + 2);
      }
      break;
    case 0x17:
      plVar13 = (longlong *)param_4[1];
      if ((undefined4 *)plVar13[1] < (undefined4 *)*plVar13 + 1) {
        (**(code **)(*param_4 + 0x50))(param_4,&local_a70,4);
        if ((*(byte *)((longlong)param_4 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_4,&local_a70,4);
        }
      }
      else {
        local_a70 = CONCAT44(local_a70._4_4_,*(undefined4 *)*plVar13);
        *plVar13 = *plVar13 + 4;
      }
      if (*(char *)((longlong)param_2 + 0x193c) != '\0') {
        *(char *)((longlong)param_2 + 0x193d) = (char)(local_a70 >> 0x18);
        *(char *)((longlong)param_2 + 0x193f) = (char)(local_a70 >> 8);
        *(char *)((longlong)param_2 + 0x193e) = (char)(local_a70 >> 0x10);
        *(undefined4 *)((longlong)param_2 + 0x1934) = 1;
        (**(code **)(*param_2 + 0x2c8))(param_2,0);
      }
      FString::PrintfImpl(&local_978,L"895fcf626f55798667e4e94cb7a636af %u",local_a70 & 0xffffffff);
      uVar11 = 0xffffffff;
      puVar24 = &DAT_143f3eda8;
      if (local_970 != 0) {
        puVar24 = local_978;
      }
      uVar2 = *puVar24;
      while (puVar24 = puVar24 + 1, uVar2 != 0) {
        uVar11 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(byte)((byte)uVar11 ^ (byte)uVar2) * 4) ^
                 uVar11 >> 8;
        uVar11 = *(uint *)(&DAT_1464aaab0 + (ulonglong)((uVar2 >> 8 ^ uVar11) & 0xff) * 4) ^
                 uVar11 >> 8;
        uVar11 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar11 & 0xff) * 4) ^ uVar11 >> 8;
        uVar11 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar11 & 0xff) * 4) ^ uVar11 >> 8;
        uVar2 = *puVar24;
      }
      local_a68 = CONCAT44(local_a68._4_4_,~uVar11);
      lVar17 = *(longlong *)param_2[0x2b0];
      if ((lVar17 != 0) && ((*(byte *)(lVar17 + 0x30) & 2) == 0)) {
        FControlChannelOutBunch::FControlChannelOutBunch(&local_6b8,lVar17,0);
        local_a88 = 0x18;
        if ((undefined1 *)local_6b0[1] < (undefined1 *)*local_6b0 + 1) {
          (**(code **)(local_6b8 + 0x50))(&local_6b8,&local_a88,1);
        }
        else {
          local_a88 = *(undefined1 *)*local_6b0;
          *local_6b0 = *local_6b0 + 1;
        }
        if ((undefined4 *)local_6b0[1] < (undefined4 *)*local_6b0 + 1) {
          (**(code **)(local_6b8 + 0x50))(&local_6b8,&local_a68,4);
          if ((local_68f & 0x10) != 0) {
            FArchive::ByteSwap(&local_6b8,&local_a68,4);
          }
        }
        else {
          local_a68 = CONCAT44(local_a68._4_4_,*(undefined4 *)*local_6b0);
          *local_6b0 = *local_6b0 + 4;
        }
        (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                  (*(longlong **)param_2[0x2b0],local_838,&local_6b8,1);
        if (local_5b8 != 0) {
          FMemory::Free();
        }
        if (local_5c8 != 0) {
          FMemory::Free();
        }
        if (local_628 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(&local_6b8);
      }
      (**(code **)(*param_2 + 0x2c8))(param_2,0);
      if (local_978 != (ushort *)0x0) {
        FMemory::Free();
      }
      break;
    case 0x19:
      if (*(char *)((longlong)param_2 + 0x193c) != '\0') {
        *(undefined4 *)((longlong)param_2 + 0x1934) = 2;
      }
      local_a80[0] = FUN_1416727f0(CONCAT71((int7)((ulonglong)
                                                   (IMAGE_DOS_HEADER_140000000.e_magic + uVar11) >>
                                                  8),1));
      plVar13 = (longlong *)UOnlineEngineInterface::Get();
      (**(code **)(*plVar13 + 0x3e0))(plVar13,local_8a8);
      plVar13 = (longlong *)UOnlineEngineInterface::Get();
      (**(code **)(*plVar13 + 1000))(plVar13,local_8b8);
      lVar17 = *(longlong *)param_2[0x2b0];
      if ((lVar17 != 0) && ((*(byte *)(lVar17 + 0x30) & 2) == 0)) {
        FControlChannelOutBunch::FControlChannelOutBunch(&local_7c8,lVar17,0);
        local_a87 = 0;
        if ((undefined1 *)local_7c0[1] < (undefined1 *)*local_7c0 + 1) {
          (**(code **)(local_7c8 + 0x50))(&local_7c8,&local_a87,1);
        }
        else {
          local_a87 = *(undefined1 *)*local_7c0;
          *local_7c0 = *local_7c0 + 1;
        }
        if ((int *)local_7c0[1] < (int *)*local_7c0 + 1) {
          (**(code **)(local_7c8 + 0x50))(&local_7c8,local_a80,4);
          if ((local_79f & 0x10) != 0) {
            FArchive::ByteSwap(&local_7c8,local_a80,4);
          }
        }
        else {
          local_a80[0] = *(int *)*local_7c0;
          *local_7c0 = *local_7c0 + 4;
        }
        FUN_14158ce90(&local_7c8,local_8a8);
        FUN_14158ce90(&local_7c8,local_8b8);
        (**(code **)(**(longlong **)param_2[0x2b0] + 0x2c8))
                  (*(longlong **)param_2[0x2b0],local_878,&local_7c8,1);
        if (local_6c8 != 0) {
          FMemory::Free();
        }
        if (local_6d8 != 0) {
          FMemory::Free();
        }
        if (local_738 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(&local_7c8);
      }
      (**(code **)(*param_2 + 0x2c8))(param_2,0);
      if (local_8b8[0] != 0) {
        FMemory::Free();
      }
      if (local_8a8[0] != 0) {
        FMemory::Free();
      }
      break;
    case 0x1e:
      local_9b8[0] = 0;
      local_9b8[1] = 0;
      FUN_14158ce90(param_4,local_9b8);
      uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_818,L"Pending Connection Failed.",L"NetworkErrors",
                          L"GenericPendingConnectionFailed");
      uVar14 = FText::ToString(uVar14);
      FString::operator=(param_1 + 0x90,uVar14);
      if (local_810 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_810 + 1;
        lVar17 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_810)(local_810);
          LOCK();
          piVar1 = (int *)((longlong)local_810 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_810 + 8))(local_810,1);
          }
        }
      }
      (**(code **)(*param_2 + 0x2f8))(param_2);
      if (local_9b8[0] != 0) {
        FMemory::Free();
      }
      break;
    case 0x1f:
      local_9f8[0] = 0;
      local_9f8[1] = 0;
      FUN_14158ce90(param_4,local_9f8);
      plVar13 = (longlong *)UOnlineEngineInterface::Get();
      cVar8 = (**(code **)(*plVar13 + 0x400))(plVar13,local_9f8);
      if (cVar8 == '\0') {
        uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_830,L"Pending Connection Failed.",L"NetworkErrors",
                            L"GenericPendingConnectionFailed");
        uVar14 = FText::ToString(uVar14);
        FString::operator=(param_1 + 0x90,uVar14);
        if (local_828 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_828 + 1;
          lVar17 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*local_828)(local_828);
            LOCK();
            piVar1 = (int *)((longlong)local_828 + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*local_828 + 8))(local_828,1);
            }
          }
        }
        (**(code **)(*param_2 + 0x2f8))(param_2);
      }
      else {
        lVar17 = *(longlong *)(param_1 + 8);
        lVar15 = *(longlong *)(lVar17 + 0x90);
        lVar20 = **(longlong **)(lVar15 + 0x1580);
        if ((lVar20 != 0) && ((*(byte *)(lVar20 + 0x30) & 2) == 0)) {
          FControlChannelOutBunch::FControlChannelOutBunch(&local_1d8,lVar20,0);
          local_a86 = 0x20;
          if ((undefined1 *)local_1d0[1] < (undefined1 *)*local_1d0 + 1) {
            (**(code **)(local_1d8 + 0x50))(&local_1d8,&local_a86,1);
          }
          else {
            local_a86 = *(undefined1 *)*local_1d0;
            *local_1d0 = *local_1d0 + 1;
          }
          plVar13 = (longlong *)**(undefined8 **)(lVar15 + 0x1580);
          (**(code **)(*plVar13 + 0x2c8))(plVar13,local_870,&local_1d8,1);
          if (local_d8 != 0) {
            FMemory::Free();
          }
          if (local_e8 != 0) {
            FMemory::Free();
          }
          if (local_148 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_1d8);
          lVar17 = *(longlong *)(param_1 + 8);
        }
        (**(code **)(**(longlong **)(lVar17 + 0x90) + 0x2c8))(*(longlong **)(lVar17 + 0x90),0);
      }
      if (local_9f8[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
LAB_1426a2295:
  iVar19 = (uint)wVar9 - (uint)wVar10;
LAB_1426a229d:
  if (pwVar25 != (wchar_t *)0x0) {
    FMemory::Free(pwVar25);
  }
  uVar7 = local_a68;
  if (iVar19 == 0) {
    if (*(longlong *)(local_a68 + *plVar13) != 0) {
      FMemory::Free();
    }
    iVar19 = *(int *)(lVar17 + 0x68);
    iVar18 = (iVar19 - local_a80[0]) + -1;
    if (iVar18 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(uVar7 + *plVar13),(void *)(local_a78 + *plVar13),(longlong)iVar18 << 4);
      iVar19 = *(int *)(lVar17 + 0x68);
    }
    *(int *)(lVar17 + 0x68) = iVar19 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar13);
  }
  local_a68 = uVar7 - 0x10;
  local_a80[0] = local_a80[0] + -1;
  local_a78 = local_a78 - 0x10;
  local_a70 = local_a70 - 0x10;
  param_2 = local_a48;
  if (local_a80[0] < 0) goto LAB_1426a2347;
  goto LAB_1426a21e0;
}



// FUNCTION 1426a2e70 FUN_1426a2e70 body=220 status=ok
// SIG undefined FUN_1426a2e70(void)

void FUN_1426a2e70(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_1[0x26] != 0) &&
     ((param_1[0x92] == 0 || (*(longlong *)(param_1[0x92] + 0x18) != param_1[0x97])))) {
    (**(code **)(*param_1 + 0x7d8))();
  }
  lVar3 = param_1[0x92];
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x488) == 0)) {
    FUN_1423e0460(lVar3,param_1);
    plVar1 = (longlong *)param_1[0x92];
    if (plVar1 != (longlong *)0x0) {
      lVar3 = FUN_1429e18b0();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && ((char)plVar1[0xa7] != '\0')) &&
         (*(longlong *)(plVar1[0xa5] + 0x1190) == param_1[0x92])) {
        (**(code **)(*plVar1 + 0xe20))(plVar1,param_1);
      }
    }
  }
  return;
}



// FUNCTION 1426a2f50 FUN_1426a2f50 body=231 status=ok
// SIG undefined FUN_1426a2f50(void)

void FUN_1426a2f50(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  float fVar5;
  
  if ((char)*(uint *)(param_1 + 0x8c) < '\0') {
    return;
  }
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 0x80;
  if ((char)param_1[0x25] == '\x03') {
    lVar2 = param_1[0x92];
    if (lVar2 != 0) {
      lVar4 = FUN_1429e18b0();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_1426a2fd0;
    }
    FUN_142227350(param_1,0,1);
  }
  else {
LAB_1426a2fd0:
    (**(code **)(*param_1 + 0x7b8))(param_1);
    (**(code **)(*param_1 + 0x700))(param_1);
    (**(code **)(*param_1 + 0x310))(param_1,1);
    fVar1 = *(float *)((longlong)param_1 + 0xcc);
    fVar5 = 0.1;
    if ((0.1 <= fVar1) && (fVar5 = fVar1, 1.0 <= fVar1)) {
      fVar5 = 1.0;
    }
    (**(code **)(*param_1 + 0x3a0))(param_1,fVar5);
  }
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xffffff7f;
  return;
}



// FUNCTION 1426a3040 FUN_1426a3040 body=3106 status=ok
// SIG undefined FUN_1426a3040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1426a3040(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                       undefined1 (*param_5) [12],float *param_6,undefined8 param_7,
                       undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar24;
  float fVar27;
  undefined1 auVar19 [16];
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
  float fVar57;
  undefined8 local_res18 [2];
  undefined1 auStack_1f8 [32];
  byte local_1d8 [8];
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  longlong local_188 [2];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  byte *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8 [6];
  ulonglong local_c8;
  
  fVar24 = DAT_1464aa790;
  fVar21 = DAT_1464aa788._4_4_;
  fVar17 = (float)DAT_1464aa788;
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if (((*(longlong *)(param_1 + 0x110) == 0) && (*(longlong *)(param_1 + 0x118) == 0)) &&
     ((uVar1 = *(ulonglong *)(param_1 + 200), uVar1 == 0 ||
      ((*(longlong *)(uVar1 + 0x110) == 0 && (*(longlong *)(uVar1 + 0x118) == 0)))))) {
    return uVar1 & 0xffffffffffffff00;
  }
  fVar27 = *param_6;
  fVar44 = param_6[1];
  local_128 = *(undefined8 *)param_6;
  fVar25 = param_6[2];
  fVar43 = param_6[3];
  uStack_120 = *(undefined8 *)(param_6 + 2);
  local_1d8[0] = 0;
  fVar28 = *(float *)(*param_5 + 8);
  fVar35 = *(float *)(*param_5 + 4);
  fVar39 = *(float *)*param_5;
  local_res18[0] = param_3;
  if (param_4 == (float *)0x0) {
    fStack_10c = 0.0;
    _local_118 = *param_5;
    local_108._4_4_ = DAT_1464aa788._4_4_;
    local_108._0_4_ = (float)DAT_1464aa788;
    fStack_100 = DAT_1464aa790;
    fStack_fc = 0.0;
  }
  else {
    lVar11 = param_1;
    puVar9 = local_f8;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar11 = *(longlong *)(param_1 + 200);
      puVar9 = &local_178;
    }
    pfVar8 = (float *)FUN_142699110(lVar11,puVar9,CONCAT71((int7)((ulonglong)&local_178 >> 8),1),0);
    fVar7 = fRam0000000146b074cc;
    fVar6 = fRam0000000146b074c8;
    fVar5 = fRam0000000146b074c4;
    fVar4 = _DAT_146b074c0;
    fVar42 = fRam0000000146b07498;
    fVar38 = fRam0000000146b07494;
    fVar34 = _DAT_146b07490;
    auVar18 = *(undefined1 (*) [16])(param_4 + 8);
    auVar12 = *(undefined1 (*) [16])(pfVar8 + 8);
    local_108._0_4_ = auVar12._0_4_;
    local_108._4_4_ = auVar12._4_4_;
    fStack_100 = auVar12._8_4_;
    fStack_fc = auVar12._12_4_;
    fVar33 = *pfVar8;
    fVar37 = pfVar8[1];
    fVar41 = pfVar8[2];
    fVar16 = pfVar8[3];
    local_1a8 = pfVar8[4];
    fStack_1a4 = pfVar8[5];
    fStack_1a0 = pfVar8[6];
    auVar12 = minps(auVar18,auVar12);
    auVar13._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146b07844);
    auVar13._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146b07840);
    auVar13._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146b07848);
    auVar13._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146b0784c);
    iVar10 = movmskps((int)lVar11,auVar13);
    if (iVar10 == 0) {
      fVar34 = *param_4;
      fVar38 = param_4[1];
      fVar42 = param_4[2];
      fVar46 = param_4[3];
      fVar20 = param_4[4] * (float)local_108._0_4_;
      fVar22 = param_4[5] * (float)local_108._4_4_;
      fVar23 = param_4[6] * fStack_100;
      fVar29 = param_4[7] * fStack_fc;
      fVar26 = fVar33 * fVar46 * _DAT_146b07820 + fVar16 * fVar34 + fVar37 * fVar42 * _DAT_146b07810
               + fVar41 * fVar38 * _DAT_146b07800;
      fVar30 = fVar33 * fVar42 * fRam0000000146b07824 + fVar16 * fVar38 +
               fVar37 * fVar46 * fRam0000000146b07814 + fVar41 * fVar34 * fRam0000000146b07804;
      fVar31 = fVar33 * fVar38 * fRam0000000146b07828 + fVar16 * fVar42 +
               fVar37 * fVar34 * fRam0000000146b07818 + fVar41 * fVar46 * fRam0000000146b07808;
      fVar32 = fVar33 * fVar34 * fRam0000000146b0782c + fVar16 * fVar46 +
               fVar37 * fVar38 * fRam0000000146b0781c + fVar41 * fVar42 * fRam0000000146b0780c;
      fVar34 = fVar23 * fVar37 - fVar22 * fVar41;
      fVar38 = fVar20 * fVar41 - fVar23 * fVar33;
      fVar42 = fVar22 * fVar33 - fVar20 * fVar37;
      fVar46 = fVar29 * fVar16 - fVar29 * fVar16;
      fVar34 = fVar34 + fVar34;
      fVar38 = fVar38 + fVar38;
      fVar42 = fVar42 + fVar42;
      fVar46 = fVar46 + fVar46;
      local_108._0_4_ = auVar18._0_4_ * (float)local_108._0_4_;
      local_108._4_4_ = auVar18._4_4_ * (float)local_108._4_4_;
      fStack_100 = auVar18._8_4_ * fStack_100;
      fStack_fc = auVar18._12_4_ * fStack_fc;
      local_118._0_4_ = (fVar42 * fVar37 - fVar38 * fVar41) + fVar34 * fVar16 + fVar20 + pfVar8[4];
      local_118._4_4_ = (fVar34 * fVar41 - fVar42 * fVar33) + fVar38 * fVar16 + fVar22 + pfVar8[5];
      fStack_110 = (fVar38 * fVar33 - fVar34 * fVar37) + fVar42 * fVar16 + fVar23 + pfVar8[6];
      fStack_10c = (fVar46 * fVar16 - fVar46 * fVar16) + fVar46 * fVar16 + fVar29 + pfVar8[7];
    }
    else {
      fVar20 = fVar37 + fVar37;
      fVar22 = fVar41 + fVar41;
      fVar29 = fVar33 * (fVar33 + fVar33);
      fVar46 = fVar16 * (fVar33 + fVar33);
      fVar55 = (float)local_108._0_4_ * auVar18._0_4_;
      fVar56 = (float)local_108._4_4_ * auVar18._4_4_;
      fVar57 = fStack_100 * auVar18._8_4_;
      local_1b8 = (undefined1 *)CONCAT44(fVar56,fVar55);
      uStack_1b0 = (undefined8 *)CONCAT44(fStack_fc * auVar18._12_4_,fVar57);
      fVar52 = (fVar16 * fVar22 + fVar33 * fVar20) * (float)local_108._0_4_;
      fVar53 = (fVar46 + fVar37 * fVar22) * (float)local_108._4_4_;
      fVar54 = (fVar16 * fVar20 + fVar33 * fVar22) * fStack_100;
      fVar31 = (float)local_108._4_4_ * (fVar33 * fVar20 - fVar16 * fVar22);
      fVar36 = fStack_100 * (fVar37 * fVar22 - fVar46);
      fVar40 = (float)local_108._0_4_ * (fVar33 * fVar22 - fVar16 * fVar20);
      fVar46 = (float)((uint)((_DAT_146b07490 - (fVar41 * fVar22 + fVar37 * fVar20)) *
                             (float)local_108._0_4_) & _DAT_146b074a0);
      fVar22 = (float)((uint)((fRam0000000146b07494 - (fVar41 * fVar22 + fVar29)) *
                             (float)local_108._4_4_) & uRam0000000146b074a4);
      fVar23 = (float)((uint)((fRam0000000146b07498 - (fVar37 * fVar20 + fVar29)) * fStack_100) &
                      uRam0000000146b074a8);
      fVar26 = (float)((uint)((fRam0000000146b0749c - (fVar29 + fVar29)) * fStack_fc) &
                      uRam0000000146b074ac);
      fVar33 = *param_4;
      fVar37 = param_4[1];
      fVar41 = param_4[2];
      fVar16 = param_4[3];
      fVar29 = fVar37 + fVar37;
      fVar30 = fVar41 + fVar41;
      fStack_19c = fRam0000000146b0749c;
      fVar32 = fVar33 * (fVar33 + fVar33);
      fVar20 = (fVar33 + fVar33) * fVar16;
      fVar49 = (fVar30 * fVar16 + fVar29 * fVar33) * param_4[8];
      fVar50 = (fVar20 + fVar30 * fVar37) * param_4[9];
      fVar51 = (fVar29 * fVar16 + fVar30 * fVar33) * param_4[10];
      fVar45 = param_4[9] * (fVar29 * fVar33 - fVar30 * fVar16);
      fVar47 = param_4[10] * (fVar30 * fVar37 - fVar20);
      fVar48 = param_4[8] * (fVar30 * fVar33 - fVar29 * fVar16);
      fVar16 = (float)((uint)((_DAT_146b07490 - (fVar41 * fVar30 + fVar37 * fVar29)) * param_4[8]) &
                      _DAT_146b074a0);
      fVar20 = (float)((uint)((fRam0000000146b07494 - (fVar41 * fVar30 + fVar32)) * param_4[9]) &
                      uRam0000000146b074a4);
      fVar29 = (float)((uint)((fRam0000000146b07498 - (fVar37 * fVar29 + fVar32)) * param_4[10]) &
                      uRam0000000146b074a8);
      fVar30 = (float)((uint)((fRam0000000146b0749c - (fVar32 + fVar32)) * param_4[0xb]) &
                      uRam0000000146b074ac);
      fVar33 = param_4[4];
      fVar37 = param_4[5];
      fVar41 = param_4[6];
      local_178._0_4_ = fVar49 * fVar31 + fVar16 * fVar46 + fVar48 * fVar54 + fVar30 * local_1a8;
      local_178._4_4_ = fVar49 * fVar22 + fVar16 * fVar52 + fVar48 * fVar36 + fVar30 * fStack_1a4;
      uStack_170._0_4_ = fVar49 * fVar53 + fVar16 * fVar40 + fVar48 * fVar23 + fVar30 * fStack_1a0;
      uStack_170._4_4_ =
           fVar49 * fVar26 + fVar16 * fVar26 + fVar48 * fVar26 + fVar30 * fRam0000000146b0749c;
      local_168._0_4_ = fVar20 * fVar31 + fVar45 * fVar46 + fVar50 * fVar54 + fVar30 * local_1a8;
      local_168._4_4_ = fVar20 * fVar22 + fVar45 * fVar52 + fVar50 * fVar36 + fVar30 * fStack_1a4;
      uStack_160._0_4_ = fVar20 * fVar53 + fVar45 * fVar40 + fVar50 * fVar23 + fVar30 * fStack_1a0;
      uStack_160._4_4_ =
           fVar20 * fVar26 + fVar45 * fVar26 + fVar50 * fVar26 + fVar30 * fRam0000000146b0749c;
      local_158._0_4_ = fVar47 * fVar31 + fVar51 * fVar46 + fVar29 * fVar54 + fVar30 * local_1a8;
      local_158._4_4_ = fVar47 * fVar22 + fVar51 * fVar52 + fVar29 * fVar36 + fVar30 * fStack_1a4;
      uStack_150._0_4_ = fVar47 * fVar53 + fVar51 * fVar40 + fVar29 * fVar23 + fVar30 * fStack_1a0;
      uStack_150._4_4_ =
           fVar47 * fVar26 + fVar51 * fVar26 + fVar29 * fVar26 + fVar30 * fRam0000000146b0749c;
      local_148 = CONCAT44(fVar37 * fVar22 + fVar33 * fVar52 + fVar41 * fVar36 +
                           fRam0000000146b0749c * fStack_1a4,
                           fVar37 * fVar31 + fVar33 * fVar46 + fVar41 * fVar54 +
                           fRam0000000146b0749c * local_1a8);
      uStack_140 = CONCAT44(fVar37 * fVar26 + fVar33 * fVar26 + fVar41 * fVar26 +
                            fRam0000000146b0749c * fRam0000000146b0749c,
                            fVar37 * fVar53 + fVar33 * fVar40 + fVar41 * fVar23 +
                            fRam0000000146b0749c * fStack_1a0);
      FMatrix::RemoveScaling(&local_178);
      fVar33 = (float)(-(uint)(_DAT_146b07840 <= fVar55) & (_DAT_146b07830 ^ (uint)fVar34) ^
                      _DAT_146b07830);
      fVar37 = (float)(-(uint)(fRam0000000146b07844 <= fVar56) &
                       (uRam0000000146b07834 ^ (uint)fVar38) ^ uRam0000000146b07834);
      fVar41 = (float)(-(uint)(fRam0000000146b07848 <= fVar57) &
                       (uRam0000000146b07838 ^ (uint)fVar42) ^ uRam0000000146b07838);
      local_178 = (longlong *)CONCAT44(local_178._4_4_ * fVar33,(float)local_178 * fVar33);
      uStack_170 = CONCAT44(uStack_170._4_4_,(float)uStack_170 * fVar33);
      uStack_160 = (undefined8 *)CONCAT44(uStack_160._4_4_,(float)uStack_160 * fVar37);
      uStack_150 = CONCAT44(uStack_150._4_4_,(float)uStack_150 * fVar41);
      local_168 = (float *)CONCAT44(local_168._4_4_ * fVar37,(float)local_168 * fVar37);
      local_158 = (undefined1 *)CONCAT44(local_158._4_4_ * fVar41,(float)local_158 * fVar41);
      pfVar8 = (float *)FQuat::FQuat(&local_1c8,&local_178);
      local_1d0 = 0x322bcc77;
      auVar12._0_4_ = (float)local_1c8 * (float)local_1c8 + (float)uStack_1c0 * (float)uStack_1c0;
      auVar12._4_4_ = local_1c8._4_4_ * local_1c8._4_4_ + uStack_1c0._4_4_ * uStack_1c0._4_4_;
      auVar12._8_4_ = (float)uStack_1c0 * (float)uStack_1c0 + (float)local_1c8 * (float)local_1c8;
      auVar12._12_4_ = uStack_1c0._4_4_ * uStack_1c0._4_4_ + local_1c8._4_4_ * local_1c8._4_4_;
      fVar34 = auVar12._4_4_ + auVar12._0_4_;
      fVar38 = auVar12._8_4_ + auVar12._4_4_;
      fVar42 = auVar12._12_4_ + auVar12._8_4_;
      fVar46 = auVar12._0_4_ + auVar12._12_4_;
      auVar18._4_4_ = fVar38;
      auVar18._0_4_ = fVar34;
      auVar18._8_4_ = fVar42;
      auVar18._12_4_ = fVar46;
      auVar18 = rsqrtps(auVar12,auVar18);
      fVar33 = auVar18._0_4_;
      fVar37 = auVar18._4_4_;
      fVar41 = auVar18._8_4_;
      fVar16 = auVar18._12_4_;
      fVar33 = (fVar4 - fVar33 * fVar33 * fVar34 * fVar4) * fVar33 + fVar33;
      fVar37 = (fVar5 - fVar37 * fVar37 * fVar38 * fVar5) * fVar37 + fVar37;
      fVar41 = (fVar6 - fVar41 * fVar41 * fVar42 * fVar6) * fVar41 + fVar41;
      fVar16 = (fVar7 - fVar16 * fVar16 * fVar46 * fVar7) * fVar16 + fVar16;
      fStack_10c = 0.0;
      fVar26 = (float)(((uint)(((fVar4 - fVar33 * fVar33 * fVar34 * fVar4) * fVar33 + fVar33) *
                              (float)local_1c8) ^ _DAT_146b074b0) & -(uint)(1e-08 <= fVar34) ^
                      _DAT_146b074b0);
      fVar30 = (float)(((uint)(((fVar5 - fVar37 * fVar37 * fVar38 * fVar5) * fVar37 + fVar37) *
                              local_1c8._4_4_) ^ uRam0000000146b074b4) & -(uint)(1e-08 <= fVar38) ^
                      uRam0000000146b074b4);
      fVar31 = (float)(((uint)(((fVar6 - fVar41 * fVar41 * fVar42 * fVar6) * fVar41 + fVar41) *
                              (float)uStack_1c0) ^ uRam0000000146b074b8) & -(uint)(1e-08 <= fVar42)
                      ^ uRam0000000146b074b8);
      fVar32 = (float)(((uint)(((fVar7 - fVar16 * fVar16 * fVar46 * fVar7) * fVar16 + fVar16) *
                              uStack_1c0._4_4_) ^ uRam0000000146b074bc) & -(uint)(1e-08 <= fVar46) ^
                      uRam0000000146b074bc);
      local_108._0_4_ = (float)local_1b8;
      local_108._4_4_ = local_1b8._4_4_;
      fStack_100 = (float)uStack_1b0;
      fStack_fc = uStack_1b0._4_4_;
      local_118._0_4_ = (float)local_148;
      local_118._4_4_ = local_148._4_4_;
      fStack_110 = (float)uStack_140;
    }
    fVar41 = fRam0000000146b07498;
    fVar37 = fRam0000000146b07494;
    fVar33 = _DAT_146b07490;
    auVar14._4_4_ = fVar21;
    auVar14._0_4_ = fVar17;
    auVar14._8_4_ = fVar24;
    auVar14._12_4_ = 0;
    auVar3._4_4_ = local_108._4_4_;
    auVar3._0_4_ = local_108._0_4_;
    auVar3._8_4_ = fStack_100;
    auVar3._12_4_ = fStack_fc;
    auVar18 = minps(auVar14,auVar3);
    auVar15._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146b07844);
    auVar15._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146b07840);
    auVar15._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146b07848);
    auVar15._12_4_ = -(uint)(auVar18._12_4_ < fRam0000000146b0784c);
    iVar10 = movmskps((int)pfVar8,auVar15);
    local_1a8 = _DAT_146b07840;
    fStack_1a4 = fRam0000000146b07844;
    fStack_1a0 = fRam0000000146b07848;
    fStack_19c = fRam0000000146b0784c;
    if (iVar10 == 0) {
      fVar39 = fVar39 * (float)local_108._0_4_;
      fVar35 = fVar35 * (float)local_108._4_4_;
      fVar28 = fVar28 * fStack_100;
      fVar34 = fStack_fc * 0.0;
      fVar33 = fVar26 * fVar43 * _DAT_146b07820 + fVar32 * fVar27 + fVar30 * fVar25 * _DAT_146b07810
               + fVar31 * fVar44 * _DAT_146b07800;
      fVar37 = fVar26 * fVar25 * fRam0000000146b07824 + fVar32 * fVar44 +
               fVar30 * fVar43 * fRam0000000146b07814 + fVar31 * fVar27 * fRam0000000146b07804;
      fVar41 = fVar26 * fVar44 * fRam0000000146b07828 + fVar32 * fVar25 +
               fVar30 * fVar27 * fRam0000000146b07818 + fVar31 * fVar43 * fRam0000000146b07808;
      fVar16 = fVar26 * fVar27 * fRam0000000146b0782c + fVar32 * fVar43 +
               fVar30 * fVar44 * fRam0000000146b0781c + fVar31 * fVar25 * fRam0000000146b0780c;
      fVar27 = fVar28 * fVar30 - fVar35 * fVar31;
      fVar44 = fVar39 * fVar31 - fVar28 * fVar26;
      fVar25 = fVar35 * fVar26 - fVar39 * fVar30;
      fVar43 = fVar34 * fVar32 - fVar34 * fVar32;
      fVar27 = fVar27 + fVar27;
      fVar44 = fVar44 + fVar44;
      fVar25 = fVar25 + fVar25;
      fVar43 = fVar43 + fVar43;
      local_108._0_4_ = fVar17 * (float)local_108._0_4_;
      local_108._4_4_ = fVar21 * (float)local_108._4_4_;
      fStack_100 = fVar24 * fStack_100;
      fStack_fc = fStack_fc * 0.0;
      local_118._0_4_ =
           (fVar25 * fVar30 - fVar44 * fVar31) + fVar32 * fVar27 + fVar39 + (float)local_118._0_4_;
      local_118._4_4_ =
           (fVar27 * fVar31 - fVar25 * fVar26) + fVar32 * fVar44 + fVar35 + (float)local_118._4_4_;
      fStack_110 = (fVar44 * fVar26 - fVar27 * fVar30) + fVar32 * fVar25 + fVar28 + fStack_110;
      fStack_10c = (fVar43 * fVar32 - fVar43 * fVar32) + fVar32 * fVar43 + fVar34 + fStack_10c;
    }
    else {
      fVar38 = fVar30 + fVar30;
      fVar34 = fVar31 + fVar31;
      local_1c8 = (undefined1 *)
                  CONCAT44(fVar21 * (float)local_108._4_4_,fVar17 * (float)local_108._0_4_);
      uStack_1c0 = (undefined8 *)CONCAT44(fStack_fc * 0.0,fVar24 * fStack_100);
      fVar46 = (fVar26 + fVar26) * fVar26;
      fVar16 = (fVar26 + fVar26) * fVar32;
      fVar45 = (fVar34 * fVar32 + fVar38 * fVar26) * (float)local_108._0_4_;
      fVar47 = (fVar16 + fVar34 * fVar30) * (float)local_108._4_4_;
      fVar48 = (fVar38 * fVar32 + fVar34 * fVar26) * fStack_100;
      fVar23 = (float)local_108._4_4_ * (fVar38 * fVar26 - fVar34 * fVar32);
      fVar36 = fStack_100 * (fVar34 * fVar30 - fVar16);
      fVar32 = (float)local_108._0_4_ * (fVar34 * fVar26 - fVar38 * fVar32);
      fVar16 = (float)((uint)((_DAT_146b07490 - (fVar34 * fVar31 + fVar38 * fVar30)) *
                             (float)local_108._0_4_) & _DAT_146b074a0);
      fVar34 = (float)((uint)((fRam0000000146b07494 - (fVar34 * fVar31 + fVar46)) *
                             (float)local_108._4_4_) & uRam0000000146b074a4);
      fVar42 = (float)((uint)((fRam0000000146b07498 - (fVar38 * fVar30 + fVar46)) * fStack_100) &
                      uRam0000000146b074a8);
      fVar20 = (float)((uint)((fRam0000000146b0749c - (fVar46 + fVar46)) * fStack_fc) &
                      uRam0000000146b074ac);
      fVar38 = fVar44 + fVar44;
      fVar46 = fVar25 + fVar25;
      fVar22 = fVar27 * (fVar27 + fVar27);
      fVar26 = fVar43 * (fVar27 + fVar27);
      fVar30 = (fVar43 * fVar46 + fVar27 * fVar38) * fVar17;
      fVar31 = (fVar26 + fVar44 * fVar46) * fVar21;
      fVar40 = (fVar43 * fVar38 + fVar27 * fVar46) * fVar24;
      fVar29 = fVar21 * (fVar27 * fVar38 - fVar43 * fVar46);
      fVar26 = fVar24 * (fVar44 * fVar46 - fVar26);
      fVar43 = fVar17 * (fVar27 * fVar46 - fVar43 * fVar38);
      fVar17 = (float)((uint)((_DAT_146b07490 - (fVar25 * fVar46 + fVar44 * fVar38)) * fVar17) &
                      _DAT_146b074a0);
      fVar21 = (float)((uint)((fRam0000000146b07494 - (fVar25 * fVar46 + fVar22)) * fVar21) &
                      uRam0000000146b074a4);
      fVar24 = (float)((uint)((fRam0000000146b07498 - (fVar44 * fVar38 + fVar22)) * fVar24) &
                      uRam0000000146b074a8);
      fVar27 = (float)((uint)((fRam0000000146b0749c - (fVar22 + fVar22)) * 0.0) &
                      uRam0000000146b074ac);
      local_178._0_4_ =
           fVar30 * fVar23 + fVar17 * fVar16 + fVar43 * fVar48 + fVar27 * (float)local_118._0_4_;
      local_178._4_4_ =
           fVar30 * fVar34 + fVar17 * fVar45 + fVar43 * fVar36 + fVar27 * (float)local_118._4_4_;
      uStack_170._0_4_ = fVar30 * fVar47 + fVar17 * fVar32 + fVar43 * fVar42 + fVar27 * fStack_110;
      uStack_170._4_4_ =
           fVar30 * fVar20 + fVar17 * fVar20 + fVar43 * fVar20 + fVar27 * fRam0000000146b0749c;
      local_168._0_4_ =
           fVar21 * fVar23 + fVar29 * fVar16 + fVar31 * fVar48 + fVar27 * (float)local_118._0_4_;
      local_168._4_4_ =
           fVar21 * fVar34 + fVar29 * fVar45 + fVar31 * fVar36 + fVar27 * (float)local_118._4_4_;
      uStack_160._0_4_ = fVar21 * fVar47 + fVar29 * fVar32 + fVar31 * fVar42 + fVar27 * fStack_110;
      uStack_160._4_4_ =
           fVar21 * fVar20 + fVar29 * fVar20 + fVar31 * fVar20 + fVar27 * fRam0000000146b0749c;
      local_158._0_4_ =
           fVar26 * fVar23 + fVar40 * fVar16 + fVar24 * fVar48 + fVar27 * (float)local_118._0_4_;
      local_158._4_4_ =
           fVar26 * fVar34 + fVar40 * fVar45 + fVar24 * fVar36 + fVar27 * (float)local_118._4_4_;
      uStack_150._0_4_ = fVar26 * fVar47 + fVar40 * fVar32 + fVar24 * fVar42 + fVar27 * fStack_110;
      uStack_150._4_4_ =
           fVar26 * fVar20 + fVar40 * fVar20 + fVar24 * fVar20 + fVar27 * fRam0000000146b0749c;
      local_148 = CONCAT44(fVar35 * fVar34 + fVar39 * fVar45 + fVar28 * fVar36 +
                           fRam0000000146b0749c * (float)local_118._4_4_,
                           fVar35 * fVar23 + fVar39 * fVar16 + fVar28 * fVar48 +
                           fRam0000000146b0749c * (float)local_118._0_4_);
      uStack_140 = CONCAT44(fVar35 * fVar20 + fVar39 * fVar20 + fVar28 * fVar20 +
                            fRam0000000146b0749c * fRam0000000146b0749c,
                            fVar35 * fVar47 + fVar39 * fVar32 + fVar28 * fVar42 +
                            fRam0000000146b0749c * fStack_110);
      FMatrix::RemoveScaling(&local_178);
      fVar17 = (float)(-(uint)(local_1a8 <= (float)local_1c8) & (_DAT_146b07830 ^ (uint)fVar33) ^
                      _DAT_146b07830);
      fVar21 = (float)(-(uint)(fStack_1a4 <= local_1c8._4_4_) &
                       (uRam0000000146b07834 ^ (uint)fVar37) ^ uRam0000000146b07834);
      fVar24 = (float)(-(uint)(fStack_1a0 <= (float)uStack_1c0) &
                       (uRam0000000146b07838 ^ (uint)fVar41) ^ uRam0000000146b07838);
      local_178 = (longlong *)CONCAT44(local_178._4_4_ * fVar17,(float)local_178 * fVar17);
      uStack_170 = CONCAT44(uStack_170._4_4_,(float)uStack_170 * fVar17);
      uStack_160 = (undefined8 *)CONCAT44(uStack_160._4_4_,(float)uStack_160 * fVar21);
      uStack_150 = CONCAT44(uStack_150._4_4_,(float)uStack_150 * fVar24);
      local_168 = (float *)CONCAT44(local_168._4_4_ * fVar21,(float)local_168 * fVar21);
      local_158 = (undefined1 *)CONCAT44(local_158._4_4_ * fVar24,(float)local_158 * fVar24);
      FQuat::FQuat(&local_1b8,&local_178);
      local_1d0 = 0x322bcc77;
      auVar19._0_4_ = (float)local_1b8 * (float)local_1b8 + (float)uStack_1b0 * (float)uStack_1b0;
      auVar19._4_4_ = local_1b8._4_4_ * local_1b8._4_4_ + uStack_1b0._4_4_ * uStack_1b0._4_4_;
      auVar19._8_4_ = (float)uStack_1b0 * (float)uStack_1b0 + (float)local_1b8 * (float)local_1b8;
      auVar19._12_4_ = uStack_1b0._4_4_ * uStack_1b0._4_4_ + local_1b8._4_4_ * local_1b8._4_4_;
      fVar35 = auVar19._4_4_ + auVar19._0_4_;
      fVar39 = auVar19._8_4_ + auVar19._4_4_;
      fVar27 = auVar19._12_4_ + auVar19._8_4_;
      fVar44 = auVar19._0_4_ + auVar19._12_4_;
      auVar2._4_4_ = fVar39;
      auVar2._0_4_ = fVar35;
      auVar2._8_4_ = fVar27;
      auVar2._12_4_ = fVar44;
      auVar18 = rsqrtps(auVar19,auVar2);
      fVar17 = auVar18._0_4_;
      fVar21 = auVar18._4_4_;
      fVar24 = auVar18._8_4_;
      fVar28 = auVar18._12_4_;
      fVar17 = (fVar4 - fVar17 * fVar17 * fVar35 * fVar4) * fVar17 + fVar17;
      fVar21 = (fVar5 - fVar21 * fVar21 * fVar39 * fVar5) * fVar21 + fVar21;
      fVar24 = (fVar6 - fVar24 * fVar24 * fVar27 * fVar6) * fVar24 + fVar24;
      fVar28 = (fVar7 - fVar28 * fVar28 * fVar44 * fVar7) * fVar28 + fVar28;
      fStack_10c = 0.0;
      fVar33 = (float)(((uint)(((fVar4 - fVar17 * fVar17 * fVar35 * fVar4) * fVar17 + fVar17) *
                              (float)local_1b8) ^ _DAT_146b074b0) & -(uint)(1e-08 <= fVar35) ^
                      _DAT_146b074b0);
      fVar37 = (float)(((uint)(((fVar5 - fVar21 * fVar21 * fVar39 * fVar5) * fVar21 + fVar21) *
                              local_1b8._4_4_) ^ uRam0000000146b074b4) & -(uint)(1e-08 <= fVar39) ^
                      uRam0000000146b074b4);
      fVar41 = (float)(((uint)(((fVar6 - fVar24 * fVar24 * fVar27 * fVar6) * fVar24 + fVar24) *
                              (float)uStack_1b0) ^ uRam0000000146b074b8) & -(uint)(1e-08 <= fVar27)
                      ^ uRam0000000146b074b8);
      fVar16 = (float)(((uint)(((fVar7 - fVar28 * fVar28 * fVar44 * fVar7) * fVar28 + fVar28) *
                              uStack_1b0._4_4_) ^ uRam0000000146b074bc) & -(uint)(1e-08 <= fVar44) ^
                      uRam0000000146b074bc);
      local_118._0_4_ = (float)local_148;
      local_118._4_4_ = local_148._4_4_;
      fStack_110 = (float)uStack_140;
      local_108._0_4_ = (float)local_1c8;
      local_108._4_4_ = local_1c8._4_4_;
      fStack_100 = (float)uStack_1c0;
      fStack_fc = uStack_1c0._4_4_;
    }
    local_128 = CONCAT44(fVar37,fVar33);
    uStack_120 = CONCAT44(fVar16,fVar41);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    puVar9 = (undefined8 *)FUN_1426a79f0(&local_178,param_1,&local_128);
    lVar11 = *(longlong *)(param_1 + 200);
    local_128 = *puVar9;
    uStack_120 = puVar9[1];
    _local_118 = *(undefined1 (*) [16])(puVar9 + 2);
    _local_108 = *(undefined1 (*) [16])(puVar9 + 4);
    if (lVar11 != 0) {
      local_188[0] = *(longlong *)(lVar11 + 0x110);
      if (local_188[0] == 0) {
        local_188[0] = *(longlong *)(lVar11 + 0x118);
      }
      goto LAB_1426a3b9b;
    }
  }
  local_188[0] = *(longlong *)(param_1 + 0x110);
  if (local_188[0] == 0) {
    local_188[0] = *(longlong *)(param_1 + 0x118);
  }
LAB_1426a3b9b:
  if (local_188[0] != 0) {
    U2PTransform(&local_1a8,&local_128);
    local_178 = local_188;
    local_168 = &local_1a8;
    uStack_160 = local_res18;
    local_158 = (undefined1 *)&param_7;
    uStack_150 = param_8;
    local_148 = param_9;
    uStack_140 = param_10;
    local_138 = local_1d8;
    uStack_1c0 = &local_178;
    local_1c8 = &LAB_14268f710;
    local_1b8 = &LAB_14268f710;
    uStack_1b0 = uStack_1c0;
    uStack_170 = param_1;
    local_130 = param_2;
    FUN_1426936b0(param_1,&local_1b8);
  }
  return (ulonglong)local_1d8[0];
}



// FUNCTION 1426a3c70 FUN_1426a3c70 body=756 status=ok
// SIG undefined FUN_1426a3c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1426a3c70(longlong param_1,PxGeometry *param_2,PxTransform *param_3,
                       undefined8 *param_4)

{
  longlong *plVar1;
  PxTransform *pPVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  PxGeometry *pPVar9;
  PxTransform *pPVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStackY_218 [32];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8 [2];
  PxGeometry *local_1d0;
  PxTransform *local_1c8;
  float local_1c0;
  undefined1 local_1b8 [32];
  undefined1 local_198 [256];
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 local_88 [48];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStackY_218;
  uVar6 = *(ulonglong *)(param_1 + 200);
  if (uVar6 == 0) {
    plVar12 = *(longlong **)(param_1 + 0x110);
    if (plVar12 == (longlong *)0x0) {
      plVar12 = *(longlong **)(param_1 + 0x118);
      goto LAB_1426a3ce4;
    }
  }
  else {
    plVar12 = *(longlong **)(uVar6 + 0x110);
    if (plVar12 == (longlong *)0x0) {
      plVar12 = *(longlong **)(uVar6 + 0x118);
LAB_1426a3ce4:
      if (plVar12 == (longlong *)0x0) goto LAB_1426a3f42;
    }
  }
  local_1d0 = param_2;
  local_1c8 = param_3;
  uVar6 = (**(code **)(*plVar12 + 200))(plVar12);
  if ((int)uVar6 != 0) {
    local_98 = (undefined1 *)0x0;
    local_90 = 0;
    iVar4 = (**(code **)(*plVar12 + 200))(plVar12);
    iVar11 = (int)local_90 + iVar4;
    local_90 = CONCAT44(local_90._4_4_,iVar11);
    if (local_90._4_4_ < iVar11) {
      FUN_14157a330(local_198);
    }
    puVar7 = local_198;
    if (local_98 != (undefined1 *)0x0) {
      puVar7 = local_98;
    }
    (**(code **)(*plVar12 + 0xd0))(plVar12,puVar7,iVar4,0);
    if (0 < iVar4) {
      lVar13 = 0;
      do {
        puVar7 = local_198;
        if (local_98 != (undefined1 *)0x0) {
          puVar7 = local_98;
        }
        plVar1 = *(longlong **)(puVar7 + lVar13 * 8);
        lVar8 = FUN_142697530(param_1);
        param_2 = local_1d0;
        if (lVar8 == param_1) {
          pPVar9 = (PxGeometry *)(**(code **)(*plVar1 + 0x40))(plVar1,local_88);
          pPVar10 = (PxTransform *)GetPxTransform_AssumesLocked(local_1b8,plVar1,plVar12);
          pPVar2 = local_1c8;
          param_2 = local_1d0;
          if (param_4 == (undefined8 *)0x0) {
            bVar3 = physx::PxGeometryQuery::overlap(local_1d0,local_1c8,pPVar9,pPVar10);
            if (bVar3) goto LAB_1426a3efa;
          }
          else {
            bVar3 = physx::PxGeometryQuery::computePenetration
                              ((PxVec3 *)&local_1e8,local_1d8,local_1d0,local_1c8,pPVar9,pPVar10);
            if (bVar3) {
              uVar5 = _fpclass((double)local_1e8);
              if ((((uVar5 & 0x207) != 0) ||
                  (uVar5 = _fpclass((double)local_1e4), (uVar5 & 0x207) != 0)) ||
                 (uVar5 = _fpclass((double)local_1e0), (uVar5 & 0x207) != 0)) {
                local_1e8 = 0.0;
                local_1e4 = 0.0;
                local_1e0 = 0.0;
              }
              *param_4 = CONCAT44(local_1e4,local_1e8);
              *(float *)((longlong)param_4 + 0xc) = ABS(local_1d8[0]);
              *(float *)(param_4 + 1) = local_1e0;
              local_1c0 = local_1e0;
              if (DAT_146b08464 != '\0') {
                FUN_14269d8b0(param_1,param_2,pPVar2);
              }
LAB_1426a3efa:
              uVar6 = 1;
              goto LAB_1426a3f1c;
            }
          }
        }
        lVar13 = lVar13 + 1;
        param_3 = local_1c8;
      } while (lVar13 < iVar4);
    }
    if (DAT_146b08464 != '\0') {
      FUN_14269d8b0(param_1,param_2,param_3);
    }
    uVar6 = 0;
LAB_1426a3f1c:
    if (local_98 == (undefined1 *)0x0) {
      return uVar6;
    }
    FMemory::Free();
    return uVar6;
  }
LAB_1426a3f42:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1426a3f70 FUN_1426a3f70 body=393 status=ok
// SIG undefined FUN_1426a3f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_1426a3f70(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  short sVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_58 [16];
  char local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x110);
  lVar4 = lVar1;
  if (lVar1 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x118);
  }
  uVar2 = 0;
  if (lVar4 != 0) {
    if (lVar4 == lVar1) {
      sVar3 = *(short *)(param_1 + 6);
    }
    else {
      sVar3 = *(short *)(param_1 + 8);
    }
    plVar5 = (longlong *)FUN_1426e2550((int)sVar3);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x348))
                (plVar5,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xb8
                );
    }
    local_48 = -1;
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0x3f800000;
    FUN_14231cca0(local_58,param_3,param_4);
    local_78 = CONCAT44(uStack_34,local_38);
    uStack_70 = CONCAT44(uStack_2c,uStack_30);
    local_64 = param_2[1];
    local_68 = *param_2;
    local_60 = param_2[2];
    uVar2 = FUN_1426a3c70(param_1,local_40,&local_78,param_5);
    switch(local_48) {
    case '\0':
      if (local_48 == '\0') {
        local_48 = -1;
      }
      break;
    case '\x01':
      if (local_48 == '\x01') {
        local_48 = -1;
      }
      break;
    case '\x02':
      if (local_48 == '\x02') {
        local_48 = -1;
      }
      break;
    case '\x03':
    case '\x04':
      if (local_48 == '\x03') {
        local_48 = -1;
      }
      break;
    case '\x05':
      if (local_48 == '\x03') {
        local_48 = -1;
      }
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x350))(plVar5);
    }
  }
  return uVar2;
}



// FUNCTION 1426a4120 FUN_1426a4120 body=409 status=ok
// SIG undefined FUN_1426a4120(void)

void FUN_1426a4120(longlong *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  (**(code **)(*param_1 + 0x708))();
  plVar2 = (longlong *)param_1[0x92];
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar5 = FUN_1429e18b0();
  if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  cVar4 = (**(code **)(*plVar2 + 0x768))(plVar2);
  if (cVar4 == '\0') {
    return;
  }
  if ((char)plVar2[0xa7] != '\0') {
    (**(code **)(*plVar2 + 0xe20))(plVar2,param_1);
  }
  if ((char)param_1[0x25] != '\x03') {
    if (param_1[0x26] == 0) goto LAB_1426a41e6;
    if (plVar2[3] != param_1[0x97]) {
      (**(code **)(*param_1 + 0x7d8))(param_1);
    }
  }
  if (param_1[0x26] != 0) {
    return;
  }
LAB_1426a41e6:
  lVar5 = (**(code **)(*param_1 + 2000))(param_1);
  param_1[0x26] = lVar5;
  if ((lVar5 != 0) && (lVar5 = param_1[0x92], lVar5 != 0)) {
    lVar6 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      param_1[0x97] = *(longlong *)(lVar5 + 0x18);
      (**(code **)(*param_1 + 0x7e0))(param_1,param_1[0x26]);
      FUN_14234b150(param_1[0x26]);
      cVar4 = UInputDelegateBinding::SupportsInputDelegate(param_1[2]);
      if (cVar4 != '\0') {
        pbVar1 = (byte *)(param_1[0x26] + 0x1fc);
        *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)param_1 + 0x91) >> 5 ^
                            *(byte *)(param_1[0x26] + 0x1fc)) & 1;
        FUN_1424e5130(param_1[2],param_1[0x26]);
      }
    }
  }
  return;
}



// FUNCTION 1426a42c0 FUN_1426a42c0 body=216 status=ok
// SIG undefined FUN_1426a42c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426a42c0(longlong param_1,undefined4 param_2,undefined8 *param_3,char param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = param_1;
  if (param_5 != 0) {
    lVar1 = param_5;
  }
  if (param_4 == '\0') {
    local_28 = *param_3;
    local_20 = *(undefined4 *)(param_3 + 1);
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x168);
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
    if (lVar1 != 0) {
      local_28 = *(undefined8 *)(lVar1 + 0x220);
      local_20 = *(undefined4 *)(lVar1 + 0x228);
    }
  }
  local_18 = local_28;
  local_10 = local_20;
  FUN_1422369f0(0,param_2,param_1,&local_28,0,0);
  return;
}



// FUNCTION 1426a43a0 FUN_1426a43a0 body=261 status=ok
// SIG undefined FUN_1426a43a0(void)

void FUN_1426a43a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = param_1[0x92];
  param_1[0x92] = param_2;
  (**(code **)(*param_1 + 0x600))();
  lVar6 = param_1[0x92];
  if (*(longlong *)(lVar6 + 0x460) != 0) {
    param_1[0x8f] = *(longlong *)(lVar6 + 0x460);
  }
  if (lVar6 != 0) {
    lVar4 = FUN_1429e18b0();
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
      iVar3 = FUN_142235230(param_1);
      if (iVar3 != 0) {
        FUN_14223ef90(param_1,1);
        FUN_14223d640(param_1,1);
      }
      goto LAB_1426a447c;
    }
  }
  plVar5 = (longlong *)FUN_1429d7ab0();
  lVar6 = plVar5[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar6 = plVar5[0x1f];
  }
  FUN_142225f80(param_1,lVar6);
LAB_1426a447c:
  if (lVar1 != param_2) {
    FUN_1429d7d90(param_1,param_1[0x92]);
  }
  return;
}



// FUNCTION 1426a44b0 FUN_1426a44b0 body=180 status=ok
// SIG undefined FUN_1426a44b0(void)

void FUN_1426a44b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 0x48);
    if (cVar3 == '\0') {
      plVar1 = (longlong *)FName::FName(local_res10,L"DistributionSourceStrength",1);
      lVar4 = *plVar1;
      if (lVar4 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar2 = UDistributionFloatConstant::GetPrivateStaticClass();
      lVar4 = FUN_1417985e0(uVar2,param_1,lVar4,0,0,0,0,0,0);
      *(undefined4 *)(lVar4 + 0x38) = 0x42c80000;
      *(longlong *)(param_1 + 0x78) = lVar4;
    }
  }
  return;
}



// FUNCTION 1426a4570 PostInitProperties body=108 status=ok
// SIG undefined PostInitProperties(void)

undefined8 * USubUVAnimation::PostInitProperties(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  
  FUN_1417931d0();
  uVar1 = *(uint *)(param_1 + 8) >> 4;
  puVar2 = (undefined8 *)(ulonglong)uVar1;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)operator_new();
    puVar2 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 1) = 4;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 5) = 0;
      puVar3[6] = 0;
      *puVar3 = &PTR__scalar_deleting_destructor__1451469c8;
      puVar3[8] = 0;
      puVar3[7] = param_1 + 0x40;
      *(undefined8 **)(param_1 + 0x58) = puVar3;
      return puVar3;
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return puVar2;
}



// FUNCTION 1426a45e0 FUN_1426a45e0 body=291 status=ok
// SIG undefined FUN_1426a45e0(void)

void FUN_1426a45e0(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  
  FUN_142238430();
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  if (iVar3 < (int)DAT_1469e91c4) {
    uVar6 = iVar3 >> 0x1f & 0xffff;
    uVar2 = iVar3 + uVar6;
    lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
  }
  else {
    lVar5 = 0;
  }
  if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0) {
    return;
  }
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::AddPawn(uVar4,param_1);
  if (((((char)param_1[0x8d] != '\0') || (*(char *)((longlong)param_1 + 0x469) == '\0')) ||
      (param_1[0x92] != 0)) || (iVar3 = FUN_142235230(param_1), iVar3 == 3)) goto LAB_1426a46bb;
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  cVar1 = *(char *)((longlong)param_1 + 0x469);
  uVar2 = *(uint *)(lVar5 + 0x830) >> 9;
  if (cVar1 != '\x03') {
    if (cVar1 == '\x01') {
      if ((uVar2 & 1) == 0) goto LAB_1426a46bb;
    }
    else if ((cVar1 != '\x02') || ((uVar2 & 1) != 0)) goto LAB_1426a46bb;
  }
  (**(code **)(*param_1 + 0x7c0))(param_1);
LAB_1426a46bb:
  lVar5 = (**(code **)(*param_1 + 0x6e8))(param_1);
  if ((((longlong *)param_1[0x2d] != (longlong *)0x0) && (lVar5 != 0)) &&
     ((*(byte *)(lVar5 + 500) & 1) != 0)) {
    (**(code **)(*(longlong *)param_1[0x2d] + 0x4b8))();
    FUN_14237ba80(lVar5,param_1);
  }
  return;
}



// FUNCTION 1426a4710 FUN_1426a4710 body=27 status=ok
// SIG undefined FUN_1426a4710(void)

void FUN_1426a4710(longlong param_1)

{
  FUN_1422384a0();
  *(undefined1 *)(param_1 + 299) = 0;
  return;
}



// FUNCTION 1426a4730 PostLoad body=43 status=ok
// SIG undefined PostLoad(void)

void USubUVAnimation::PostLoad(longlong param_1)

{
  UObject::PostLoad();
  if (DAT_1464c9c6c != '\0') {
    FUN_141edf270(*(undefined8 *)(param_1 + 0x58));
    return;
  }
  return;
}



// FUNCTION 1426a4760 FUN_1426a4760 body=799 status=ok
// SIG undefined FUN_1426a4760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426a4760(longlong *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  lVar5 = param_1[0x2d];
  if (lVar5 == 0) {
    local_68 = _DAT_1468b5d90;
    local_60 = DAT_1468b5d98;
  }
  else {
    local_68 = *(undefined8 *)(lVar5 + 0x220);
    local_60 = *(float *)(lVar5 + 0x228);
  }
  uVar6 = local_68;
  fVar8 = (float)local_68;
  pfVar3 = (float *)FUN_142436ac0(&local_38,param_1 + 0x16,param_1);
  if (((fVar8 == *pfVar3) && (local_68._4_4_ = SUB84(uVar6,4), local_68._4_4_ == pfVar3[1])) &&
     (local_60 == pfVar3[2])) {
    lVar5 = param_1[0x2d];
    if (lVar5 == 0) {
      fVar8 = (float)DAT_1468b5da0;
      fVar9 = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_60 = DAT_1468b5da8;
    }
    else {
      local_28 = *(float *)(lVar5 + 0x210);
      fStack_24 = *(float *)(lVar5 + 0x214);
      fStack_20 = *(float *)(lVar5 + 0x218);
      fStack_1c = *(float *)(lVar5 + 0x21c);
      auVar1._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_24);
      auVar1._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_28);
      auVar1._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_20);
      auVar1._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_1c);
      iVar2 = movmskps((int)pfVar3,auVar1);
      if (iVar2 != 0) {
        *(float *)(lVar5 + 0x250) = local_28;
        *(float *)(lVar5 + 0x254) = fStack_24;
        *(float *)(lVar5 + 600) = fStack_20;
        *(float *)(lVar5 + 0x25c) = fStack_1c;
        local_68 = uVar6;
        puVar4 = (undefined8 *)FQuat::Rotator(&local_28,&local_38);
        *(undefined8 *)(lVar5 + 0x260) = *puVar4;
        *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar4 + 1);
      }
      fVar8 = (float)*(undefined8 *)(lVar5 + 0x260);
      fVar9 = (float)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
      local_60 = *(float *)(lVar5 + 0x268);
    }
    local_68 = CONCAT44(fVar9,fVar8);
    if (((fVar8 == *(float *)((longlong)param_1 + 0xbc)) && (fVar9 == *(float *)(param_1 + 0x18)))
       && ((local_60 == *(float *)((longlong)param_1 + 0xc4) &&
           (lVar5 = (**(code **)(*param_1 + 0x148))(param_1),
           *(float *)(lVar5 + 0x790) != *(float *)((longlong)param_1 + 0xd4))))) {
      return;
    }
  }
  if ((char)param_1[0x25] == '\x01') {
    lVar5 = param_1[0x2d];
    *(float *)(param_1 + 0x17) = *(float *)(param_1 + 0x17) + 0.01;
    if (lVar5 == 0) {
      local_68 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      local_68 = *(undefined8 *)(lVar5 + 0x220);
      local_60 = *(float *)(lVar5 + 0x228);
    }
    local_38 = local_68;
    local_30 = local_60;
    if (lVar5 == 0) {
      fStack_1c = 1.0;
      local_28 = 0.0;
      fStack_24 = 0.0;
      fStack_20 = 0.0;
    }
    else {
      local_28 = *(float *)(lVar5 + 0x210);
      fStack_24 = *(float *)(lVar5 + 0x214);
      fStack_20 = *(float *)(lVar5 + 0x218);
      fStack_1c = *(float *)(lVar5 + 0x21c);
    }
    FUN_142436ac0(&local_68,param_1 + 0x16,param_1);
    local_58 = *(undefined8 *)((longlong)param_1 + 0xbc);
    local_50 = *(undefined4 *)((longlong)param_1 + 0xc4);
    local_48 = local_68;
    local_40 = local_60;
    FUN_14223ca30(param_1,&local_48,&local_58,0,0,0);
    lVar5 = (**(code **)(*param_1 + 0x6e8))(param_1);
    if (lVar5 != 0) {
      uVar6 = UNetworkPredictionInterface::GetPrivateStaticClass();
      plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
      if (plVar7 != (longlong *)0x0) {
        lVar5 = *plVar7;
        uVar6 = FRotator::Quaternion((undefined8 *)((longlong)param_1 + 0xbc),&local_48);
        (**(code **)(lVar5 + 0x20))(plVar7,&local_38,&local_28,&local_68,uVar6);
      }
    }
  }
  return;
}



// FUNCTION 1426a4a80 FUN_1426a4a80 body=59 status=ok
// SIG undefined FUN_1426a4a80(void)

void FUN_1426a4a80(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if ((char)param_1[0x25] == '\x01') {
    lVar1 = (**(code **)(*param_1 + 0x6e8))();
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x18c) = *param_2;
      *(undefined4 *)(lVar1 + 0x194) = *(undefined4 *)(param_2 + 1);
    }
  }
  return;
}



// FUNCTION 1426a4ac0 FUN_1426a4ac0 body=90 status=ok
// SIG undefined FUN_1426a4ac0(void)

void FUN_1426a4ac0(longlong *param_1)

{
  longlong lVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = (**(code **)(*param_1 + 0x6e8))(param_1);
  if ((((longlong *)param_1[0x2d] != (longlong *)0x0) && (lVar1 != 0)) &&
     ((*(byte *)(lVar1 + 500) & 1) != 0)) {
    (**(code **)(*(longlong *)param_1[0x2d] + 0x4b8))();
    FUN_14237ba80(lVar1,param_1);
  }
  return;
}



// FUNCTION 1426a4b50 FUN_1426a4b50 body=150 status=ok
// SIG undefined FUN_1426a4b50(void)

void FUN_1426a4b50(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_142239650();
  if (param_1[0x2a] == 0) {
    param_1[0x2a] = (longlong)param_1;
  }
  if (((char)param_1[0x8d] != '\0') && (iVar2 = FUN_142235230(param_1), iVar2 != 3)) {
    bVar1 = *(byte *)(param_1 + 0x8d);
    plVar3 = (longlong *)UGameplayStatics::GetPlayerController(param_1,bVar1 - 1);
    if (plVar3 == (longlong *)0x0) {
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_142534df0(*(undefined8 *)(lVar4 + 0x30),param_1,bVar1 - 1);
    }
    else {
      (**(code **)(*plVar3 + 0x778))(plVar3,param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001426a4bdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x750))(param_1);
  return;
}



// FUNCTION 1426a4bf0 FUN_1426a4bf0 body=168 status=ok
// SIG undefined FUN_1426a4bf0(void)

void FUN_1426a4bf0(longlong param_1)

{
  longlong *plVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined1 local_18 [16];
  
  FUN_1422396f0();
  if ((*(char *)(param_1 + 0x128) == '\x03') &&
     (plVar1 = *(longlong **)(param_1 + 0x490), plVar1 != (longlong *)0x0)) {
    pfVar2 = (float *)(**(code **)(*plVar1 + 0x720))(plVar1,local_18);
    fVar3 = *pfVar2;
    if ((*(byte *)(param_1 + 0x460) & 0x20) != 0) {
      fVar4 = (float)(int)(fVar3 * 0.0027777778) * 360.0;
      if (ABS(fVar3) < ABS(fVar4)) {
        fVar4 = fVar3;
      }
      fVar3 = fVar3 - fVar4;
      if (fVar3 < 0.0) {
        fVar3 = fVar3 + 360.0;
      }
      *(char *)(param_1 + 0x480) = (char)(int)(fVar3 * 0.7083333);
    }
  }
  return;
}



// FUNCTION 1426a4ca0 FUN_1426a4ca0 body=121 status=ok
// SIG undefined FUN_1426a4ca0(void)

void FUN_1426a4ca0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)param_1[0x25]) {
    lVar2 = 0;
    do {
      lVar1 = (longlong)
              (int)((uint)*(ushort *)(param_1[0x21] + lVar2) * *(int *)((longlong)param_1 + 0x124))
              + param_1[0x20];
      (**(code **)(*param_1 + 0x270))
                (param_1,lVar1,(int)param_1[6] + lVar1,*(ushort *)(param_1[0x21] + lVar2),0xffffffff
                );
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 2;
    } while (iVar3 < (int)param_1[0x25]);
  }
  return;
}



// FUNCTION 1426a4d20 FUN_1426a4d20 body=525 status=ok
// SIG undefined FUN_1426a4d20(void)

void FUN_1426a4d20(longlong *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint local_res10;
  longlong local_res20;
  longlong local_68;
  uint local_60;
  uint local_5c;
  ulonglong local_58;
  uint local_50;
  uint local_4c;
  
  if (0 < (int)param_1[0x25]) {
    uVar4 = 0;
    local_res10 = 0;
    local_res20 = 0;
    local_58 = 0;
    local_4c = 0;
    local_68 = 0;
    local_5c = 0;
    uVar5 = uVar4;
    uVar7 = uVar4;
    uVar9 = uVar4;
    uVar10 = uVar4;
    uVar11 = uVar4;
    do {
      uVar2 = *(ushort *)(local_res20 + param_1[0x21]);
      uVar13 = (uint)uVar2;
      lVar8 = (longlong)(int)(*(int *)((longlong)param_1 + 0x124) * (uint)uVar2) + param_1[0x20];
      puVar12 = (uint *)((int)param_1[6] + lVar8);
      if (((*puVar12 & 0xf0000000) == 0x40000000) ||
         (uVar3 = (uint)uVar4, (*puVar12 & 0xf0000000) == 0x10000000)) {
        local_60 = (int)uVar5 + 1;
        if ((int)uVar9 < (int)local_60) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_68,uVar5);
        }
        uVar3 = local_60;
        *(uint *)(local_68 + (longlong)(int)uVar5 * 4) = (uint)uVar2;
        iVar1 = local_60 - 1;
        while( true ) {
          iVar6 = (int)uVar7;
          local_50 = iVar6 + 1;
          if ((int)uVar11 < (int)local_50) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_58,uVar7);
            uVar11 = (ulonglong)local_4c;
            uVar10 = local_58;
          }
          uVar7 = (ulonglong)local_50;
          *(uint *)(uVar10 + (longlong)iVar6 * 4) = uVar13;
          (**(code **)(*param_1 + 0x270))(param_1,lVar8,puVar12,uVar13,iVar1);
          uVar13 = *puVar12 & 0x3fff;
          if (uVar13 == 0x3fff) break;
          lVar8 = (longlong)(int)(*(int *)((longlong)param_1 + 0x124) * uVar13) + param_1[0x20];
          puVar12 = (uint *)((int)param_1[6] + lVar8);
        }
        uVar5 = (ulonglong)uVar3;
        uVar9 = (ulonglong)local_5c;
        uVar3 = local_res10;
      }
      local_res10 = uVar3 + 1;
      uVar4 = (ulonglong)local_res10;
      local_res20 = local_res20 + 2;
    } while ((int)local_res10 < (int)param_1[0x25]);
    if ((int)uVar7 != (int)param_1[0x25]) {
      (**(code **)(*param_1 + 0x278))(param_1);
    }
    if (local_68 != 0) {
      FMemory::Free(local_68);
    }
    if (uVar10 != 0) {
      FMemory::Free(uVar10);
    }
  }
  return;
}



// FUNCTION 1426a4f30 FUN_1426a4f30 body=177 status=ok
// SIG undefined FUN_1426a4f30(void)

void FUN_1426a4f30(longlong param_1)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x110);
  plVar4 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar4 != (longlong *)0x0) {
    if (plVar4 == plVar3) {
      sVar2 = *(short *)(param_1 + 6);
    }
    else {
      sVar2 = *(short *)(param_1 + 8);
    }
    plVar3 = (longlong *)FUN_1426e2550((int)sVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x358))
                (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                 0x136);
    }
    plVar5 = (longlong *)0x0;
    if ((short)plVar4[1] == 6) {
      plVar5 = plVar4;
    }
    if ((plVar5 != (longlong *)0x0) &&
       (cVar1 = IsRigidBodyKinematic_AssumesLocked(plVar5), cVar1 == '\0')) {
      (**(code **)(*plVar5 + 0x248))(plVar5);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x360))(plVar3);
    }
  }
  return;
}



// FUNCTION 1426a4ff0 FUN_1426a4ff0 body=359 status=ok
// SIG undefined FUN_1426a4ff0(void)

ulonglong FUN_1426a4ff0(longlong param_1,longlong param_2,float *param_3,float *param_4,
                       undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  byte local_res10 [8];
  float local_res18 [4];
  float local_68;
  float local_64;
  float local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  float *local_40;
  float *local_38;
  float *local_30;
  undefined1 *local_28;
  byte *local_20;
  longlong local_18;
  float *local_10;
  
  fVar1 = param_3[2];
  *(undefined8 *)(param_2 + 0x44) = *(undefined8 *)param_3;
  *(float *)(param_2 + 0x4c) = fVar1;
  fVar1 = param_4[2];
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)param_4;
  *(float *)(param_2 + 0x58) = fVar1;
  local_60 = param_4[2] - param_3[2];
  local_68 = *param_4 - *param_3;
  local_64 = param_4[1] - param_3[1];
  local_res10[0] = 0;
  local_res18[0] = SQRT(local_64 * local_64 + local_68 * local_68 + local_60 * local_60);
  if (0.0001 < local_res18[0]) {
    local_50 = param_5;
    local_48 = param_6;
    local_38 = &local_68;
    local_30 = local_res18;
    local_28 = &stack0x00000038;
    local_20 = local_res10;
    lVar4 = param_1;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar4 = *(longlong *)(param_1 + 200);
    }
    if (*(longlong *)(lVar4 + 0x110) == 0) {
      sVar2 = *(short *)(lVar4 + 8);
    }
    else {
      sVar2 = *(short *)(lVar4 + 6);
    }
    local_58 = param_1;
    local_40 = param_3;
    local_18 = param_2;
    local_10 = param_4;
    plVar3 = (longlong *)FUN_1426e2550((int)sVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x348))
                (plVar3,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                 ,0xcd2);
    }
    thunk_FUN_14268b950(&local_58);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x350))(plVar3);
    }
    return (ulonglong)local_res10[0];
  }
  return (ulonglong)(uint3)((uint)fVar1 >> 8) << 8;
}



// FUNCTION 1426a5160 FUN_1426a5160 body=593 status=ok
// SIG undefined FUN_1426a5160(void)

longlong FUN_1426a5160(longlong param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 *puVar5;
  uint7 uVar7;
  longlong lVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [80];
  
  plVar1 = *(longlong **)(param_1 + 0x490);
  if (plVar1 == (longlong *)0x0) {
    lVar6 = *(longlong *)(param_1 + 0x168);
    if (lVar6 == 0) {
      uVar8 = (undefined4)DAT_1468b5da0;
      uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      fStack_70 = (float)DAT_1468b5da8;
    }
    else {
      fVar11 = *(float *)(lVar6 + 0x210);
      local_78 = *(undefined8 *)(lVar6 + 0x210);
      fStack_70 = *(float *)(lVar6 + 0x218);
      fStack_6c = *(float *)(lVar6 + 0x21c);
      auVar3._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != *(float *)(lVar6 + 0x214));
      auVar3._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != fVar11);
      auVar3._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_70);
      auVar3._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_6c);
      iVar4 = movmskps((int)&stack0x00000000,auVar3);
      if (iVar4 != 0) {
        *(float *)(lVar6 + 0x250) = fVar11;
        *(float *)(lVar6 + 0x254) = *(float *)(lVar6 + 0x214);
        *(float *)(lVar6 + 600) = fStack_70;
        *(float *)(lVar6 + 0x25c) = fStack_6c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_78,&local_68);
        *(undefined8 *)(lVar6 + 0x260) = *puVar5;
        *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      uVar8 = (undefined4)*(undefined8 *)(lVar6 + 0x260);
      uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x260) >> 0x20);
      fStack_70 = (float)*(undefined4 *)(lVar6 + 0x268);
    }
    local_78 = CONCAT44(uVar9,uVar8);
    fStack_60 = fStack_70;
    puVar5 = &local_68;
    local_68 = local_78;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x760))(plVar1,local_58);
  }
  fVar10 = (float)((ulonglong)*puVar5 >> 0x20);
  fVar11 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
  if (ABS(fVar10) < ABS(fVar11)) {
    fVar11 = fVar10;
  }
  fVar11 = fVar10 - fVar11;
  if (fVar11 < 0.0) {
    fVar11 = fVar11 + 360.0;
  }
  lVar6 = *(longlong *)(param_1 + 0x168);
  if (lVar6 == 0) {
    fVar10 = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
  }
  else {
    fVar12 = *(float *)(lVar6 + 0x210);
    local_68 = *(undefined8 *)(lVar6 + 0x210);
    fStack_60 = *(float *)(lVar6 + 0x218);
    fStack_5c = *(float *)(lVar6 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != *(float *)(lVar6 + 0x214));
    auVar2._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != fVar12);
    auVar2._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_60);
    auVar2._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_5c);
    iVar4 = movmskps((int)(fVar10 * 0.0027777778),auVar2);
    if (iVar4 != 0) {
      *(float *)(lVar6 + 0x250) = fVar12;
      *(float *)(lVar6 + 0x254) = *(float *)(lVar6 + 0x214);
      *(float *)(lVar6 + 600) = fStack_60;
      *(float *)(lVar6 + 0x25c) = fStack_5c;
      puVar5 = (undefined8 *)FQuat::Rotator(&local_68,local_58);
      *(undefined8 *)(lVar6 + 0x260) = *puVar5;
      *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar5 + 1);
    }
    fVar10 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x260) >> 0x20);
  }
  fVar12 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
  if (ABS(fVar10) < ABS(fVar12)) {
    fVar12 = fVar10;
  }
  fVar12 = fVar10 - fVar12;
  if (fVar12 < 0.0) {
    fVar12 = fVar12 + 360.0;
  }
  uVar7 = (uint7)(uint3)((uint)(int)(fVar10 * 0.0027777778) >> 8);
  if ((ABS(fVar11 - fVar12) < *(float *)(param_1 + 0x498)) ||
     (360.0 - *(float *)(param_1 + 0x498) < ABS(fVar11 - fVar12))) {
    lVar6 = CONCAT71(uVar7,1);
  }
  else {
    lVar6 = (ulonglong)uVar7 << 8;
  }
  return lVar6;
}



// FUNCTION 1426a53c0 FUN_1426a53c0 body=94 status=ok
// SIG undefined FUN_1426a53c0(void)

void FUN_1426a53c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1[0x1f] == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(plVar1[0x1f] + 0x464);
    return;
  }
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(plVar1[0x1f] + 0x464);
  return;
}



// FUNCTION 1426a5420 RecalculateTangentAndInterpolationParam body=718 status=ok
// SIG undefined RecalculateTangentAndInterpolationParam(void)

void FParticleAnimTrailEmitterInstance::RecalculateTangentAndInterpolationParam
               (undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
               longlong param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  
  if (param_2 == 0) {
    local_58 = *(float *)(param_4 + 0x10) - *(float *)(param_6 + 0x10);
    uStack_54 = *(float *)(param_4 + 0x14) - *(float *)(param_6 + 0x14);
    local_50 = *(float *)(param_4 + 0x18) - *(float *)(param_6 + 0x18);
    fVar4 = SQRT(uStack_54 * uStack_54 + local_58 * local_58 + local_50 * local_50);
    if (fVar4 <= 1e-08) {
      local_58 = DAT_1468b5d90;
      local_50 = DAT_1468b5d98;
      uStack_54 = DAT_1468b5d94;
    }
    else {
      fVar1 = 1.0 / fVar4;
      local_58 = local_58 * fVar1;
      uStack_54 = uStack_54 * fVar1;
      local_50 = local_50 * fVar1;
    }
  }
  else {
    local_58 = *(float *)(param_2 + 0x10) - *(float *)(param_4 + 0x10);
    uStack_54 = *(float *)(param_2 + 0x14) - *(float *)(param_4 + 0x14);
    local_50 = *(float *)(param_2 + 0x18) - *(float *)(param_4 + 0x18);
    fVar4 = SQRT(uStack_54 * uStack_54 + local_58 * local_58 + local_50 * local_50);
    if (fVar4 <= 1e-08) {
      local_58 = DAT_1468b5d90;
      local_50 = DAT_1468b5d98;
      uStack_54 = DAT_1468b5d94;
    }
    else {
      fVar1 = 1.0 / fVar4;
      local_58 = local_58 * fVar1;
      uStack_54 = uStack_54 * fVar1;
      local_50 = local_50 * fVar1;
    }
    if (param_6 != 0) {
      local_58 = *(float *)(param_2 + 0x10) - *(float *)(param_6 + 0x10);
      uStack_54 = *(float *)(param_2 + 0x14) - *(float *)(param_6 + 0x14);
      local_50 = *(float *)(param_2 + 0x18) - *(float *)(param_6 + 0x18);
      if ((((0.0001 < ABS(local_58)) || (0.0001 < ABS(uStack_54))) || (0.0001 < ABS(local_50))) &&
         (fVar1 = uStack_54 * uStack_54 + local_58 * local_58 + local_50 * local_50, 1e-08 < fVar1))
      {
        auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
        fVar2 = auVar3._0_4_;
        fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
        fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
        local_58 = local_58 * fVar2;
        uStack_54 = uStack_54 * fVar2;
        local_50 = local_50 * fVar2;
      }
    }
  }
  *(float *)(param_5 + 0x44) = SQRT(fVar4);
  *(ulonglong *)(param_5 + 0x34) = CONCAT44(uStack_54,local_58);
  *(float *)(param_5 + 0x3c) = local_50;
  return;
}



// FUNCTION 1426a56f0 FUN_1426a56f0 body=467 status=ok
// SIG undefined FUN_1426a56f0(void)

void FUN_1426a56f0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 local_38;
  undefined4 local_30;
  longlong *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((DAT_146534714 != 0) && ((int)param_1[1] < *(int *)(param_2[0xde] + 0xe4))) {
    *(byte *)((longlong)param_2 + 0x719) = *(byte *)((longlong)param_2 + 0x719) & 0xfb;
    (**(code **)(*param_2 + 0x418))(param_2,&DAT_146532190);
    uStack_20 = 0x3f800000;
    local_30 = 0x3f800000;
    local_38 = 0x3f8000003f800000;
    (**(code **)(*param_2 + 0x3f8))(param_2,&local_38);
    FUN_142397000(param_2,0,0,0);
    FUN_142359580(param_2);
    FUN_1423970c0(param_2,0);
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
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
                (param_2 + 0xe4,0);
    }
    FUN_1423971c0(param_2,0x7f7fffff);
    *(byte *)(param_2 + 0x5e) = *(byte *)(param_2 + 0x5e) & 0x9f;
    *(byte *)((longlong)param_2 + 0x24c) = *(byte *)((longlong)param_2 + 0x24c) & 0xbf;
    FUN_142398ea0(param_2,0);
    FUN_142398e60(param_2,0,0);
    UActorComponent::SetTickableWhenPaused(param_2,0);
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + 1;
    local_28 = param_2;
    uStack_20 = param_3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 0x10);
    *puVar1 = local_28;
    puVar1[1] = CONCAT44(uStack_1c,uStack_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001426a58bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x3b0))(param_2,0);
  return;
}



// FUNCTION 1426a58d0 FUN_1426a58d0 body=643 status=ok
// SIG undefined FUN_1426a58d0(void)

void FUN_1426a58d0(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  uVar3 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar15 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar4 = *puVar15;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar13 = local_98 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar13;
      if (bVar6) goto LAB_1426a599e;
      uVar4 = puVar15[lVar8 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar13 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_84 = (iStack_80 - iVar13) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1426a599e:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar14 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_1;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar15 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar9 = puVar15[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar13 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_1426a5a62;
      uVar9 = puVar15[(longlong)iVar13 + 1];
      iVar13 = iVar13 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar13 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_84 = (uVar14 - iVar13) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1426a5a62:
      uStack_84 = uVar3;
    }
  }
  while ((lVar8 = (longlong)(int)uStack_5c, uStack_5c != uStack_84 || (local_68 != puVar1))) {
    lVar5 = *param_1;
    plVar10 = *(longlong **)(lVar5 + 0x18 + lVar8 * 0x48);
    lVar2 = lVar5 + lVar8 * 0x48;
    uVar7 = (ulonglong)*(int *)(lVar5 + 0x20 + lVar8 * 0x48);
    uVar12 = 0;
    uVar11 = uVar7 & 0x1fffffffffffffff;
    if (plVar10 + uVar7 < plVar10) {
      uVar11 = uVar12;
    }
    if (uVar11 != 0) {
      do {
        if (*plVar10 != 0) {
          FUN_1425ff3e0();
        }
        plVar10 = plVar10 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar11);
    }
    uVar12 = 0;
    uVar7 = (ulonglong)*(int *)(lVar2 + 0x30);
    plVar10 = *(longlong **)(lVar2 + 0x28);
    uVar11 = uVar7 & 0x1fffffffffffffff;
    if (plVar10 + uVar7 < plVar10) {
      uVar11 = uVar12;
    }
    if (uVar11 != 0) {
      do {
        if (*plVar10 != 0) {
          FUN_1425ff3e0();
        }
        plVar10 = plVar10 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar11);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1426a5b60 FUN_1426a5b60 body=1046 status=ok
// SIG undefined FUN_1426a5b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426a5b60(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint *puVar16;
  longlong *plVar17;
  float fVar18;
  longlong *local_res10;
  longlong *local_res18 [2];
  uint local_c8;
  uint uStack_c4;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a0;
  uint uStack_9c;
  uint *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  uVar9 = 0;
  uVar6 = uVar9;
  if (iVar5 < (int)DAT_1469e91c4) {
    uVar11 = iVar5 >> 0x1f & 0xffff;
    uVar4 = iVar5 + uVar11;
    uVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar11) * 0x18;
  }
  if ((*(uint *)(uVar6 + 8) >> 0x1d & 1) == 0) {
    local_res10 = param_2;
    if (DAT_146534714 != 0) {
      lVar7 = param_2[0x24];
      if (lVar7 == 0) {
        lVar7 = FUN_1423407b0(param_2);
      }
      fVar2 = *(float *)(lVar7 + 0x790);
      if (_DAT_146534718 < fVar2 - *(float *)(param_1 + 10)) {
        local_98 = (uint *)(param_1 + 2);
        *(float *)(param_1 + 10) = fVar2;
        uVar4 = *(uint *)(param_1 + 5);
        local_c8 = 0;
        uStack_c4 = 1;
        uStack_b4 = 0;
        uStack_b0 = 0;
        if (uVar4 != 0) {
          puVar16 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar16 = local_98;
          }
          uVar11 = *puVar16;
          uVar6 = uVar9;
          while (uVar11 == 0) {
            iVar5 = (int)uVar9;
            uStack_b0 = (int)uVar6 + 0x20;
            uVar6 = (ulonglong)uStack_b0;
            local_c8 = iVar5 + 1;
            uVar9 = (ulonglong)local_c8;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
            goto LAB_1426a5cec;
            uVar11 = puVar16[(longlong)iVar5 + 1];
          }
          uStack_c4 = -uVar11 & uVar11;
          iVar5 = 0x1f;
          if (uStack_c4 != 0) {
            for (; uStack_c4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (uStack_c4 == 0) {
            iVar5 = 0x20;
          }
          else {
            iVar5 = 0x1f - iVar5;
          }
          uStack_b4 = (uStack_b0 - iVar5) + 0x1f;
          if ((int)uVar4 < (int)uStack_b4) {
LAB_1426a5cec:
            uStack_b4 = uVar4;
          }
        }
        uVar11 = *(uint *)(param_1 + 5);
        uStack_90 = CONCAT44(uStack_b4,0xffffffff);
        local_88 = CONCAT44(uStack_ac,uStack_b0);
        uStack_78 = CONCAT44(uStack_c4,local_c8);
        uVar15 = uVar11 & 0xffffffe0;
        uStack_a0 = local_c8;
        uStack_9c = uStack_c4;
        uStack_b4 = uVar11;
        if (uVar11 != uVar4) {
          puVar16 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar16 = local_98;
          }
          uVar12 = puVar16[(int)uVar11 >> 5] & -1 << ((byte)uVar11 & 0x1f);
          iVar5 = (int)uVar11 >> 5;
          while (uVar12 == 0) {
            uVar15 = uVar15 + 0x20;
            if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
            goto LAB_1426a5db2;
            uVar12 = puVar16[(longlong)iVar5 + 1];
            iVar5 = iVar5 + 1;
          }
          uVar12 = -uVar12 & uVar12;
          iVar5 = 0x1f;
          if (uVar12 != 0) {
            for (; uVar12 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (uVar12 == 0) {
            iVar5 = 0x20;
          }
          else {
            iVar5 = 0x1f - iVar5;
          }
          uStack_b4 = (uVar15 - iVar5) + 0x1f;
          if ((int)uVar4 < (int)uStack_b4) {
LAB_1426a5db2:
            uStack_b4 = uVar4;
          }
        }
        plVar17 = (longlong *)(ulonglong)uStack_b4;
        local_res18[0] = plVar17;
        local_80 = param_1;
        puStack_70 = local_98;
        uStack_68 = uStack_90;
        uStack_60 = local_88;
        while( true ) {
          lVar7 = (longlong)uStack_90._4_4_;
          if ((uStack_90._4_4_ == (int)plVar17) &&
             (param_2 = local_res10, local_98 == (uint *)(param_1 + 2))) break;
          lVar3 = *param_1;
          iVar5 = *(int *)(lVar3 + 0x10 + lVar7 * 0x48);
          lVar10 = lVar3 + lVar7 * 0x48;
          iVar13 = 0;
          fVar18 = fVar2 - _DAT_146534710;
          if (0 < iVar5) {
            lVar14 = 0;
            do {
              pfVar1 = (float *)(lVar14 + 8 + *(longlong *)(lVar10 + 8));
              if (fVar18 < *pfVar1 || fVar18 == *pfVar1) {
                iVar13 = iVar13 + 1;
                lVar14 = lVar14 + 0x10;
              }
              else {
                plVar17 = *(longlong **)(lVar14 + *(longlong *)(lVar10 + 8));
                if (plVar17 != (longlong *)0x0) {
                  (**(code **)(*plVar17 + 0x3b0))(plVar17,0);
                  iVar5 = *(int *)(lVar10 + 0x10);
                }
                iVar8 = (iVar5 - iVar13) + -1;
                if (0 < iVar8) {
                  iVar8 = 1;
                }
                if (iVar8 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)iVar13 * 0x10 + *(longlong *)(lVar10 + 8)),
                             (void *)((longlong)(iVar5 - iVar8) * 0x10 + *(longlong *)(lVar10 + 8)),
                             (longlong)iVar8 << 4);
                  iVar5 = *(int *)(lVar3 + 0x10 + lVar7 * 0x48);
                }
                iVar5 = iVar5 + -1;
                *(int *)(lVar10 + 0x10) = iVar5;
              }
              plVar17 = local_res18[0];
            } while (iVar13 < iVar5);
          }
          if (*(int *)(lVar10 + 0x14) != iVar5) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar10 + 8);
          }
          uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_9c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
        }
      }
      TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
      ::FindId(param_1,&local_res10,param_2[0xde]);
      lVar7 = 0;
      if ((int)local_res10 != -1) {
        lVar7 = *param_1 + (longlong)(int)local_res10 * 0x48;
      }
      lVar10 = lVar7 + 8;
      if (lVar7 == 0) {
        lVar10 = 0;
      }
      if (lVar10 == 0) {
        local_res18[0] = param_2 + 0xde;
        FUN_142683cb0(param_1,&local_res10,local_res18,0);
        lVar10 = *param_1 + ((longlong)(int)local_res10 * 9 + 1) * 8;
      }
      FUN_1426a56f0(lVar10,param_2,fVar2);
      return;
    }
    (**(code **)(*param_2 + 0x3b0))(param_2,0);
  }
  return;
}



// FUNCTION 1426a5f80 Rehash body=635 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_1426a60bf;
        uVar9 = puVar14[lVar4 + 1];
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
      if (iVar8 < iStack_44) {
LAB_1426a60bf:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x60 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x54) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 10) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1426a6200 Rehash body=635 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_1426a633f;
        uVar9 = puVar14[lVar4 + 1];
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
      if (iVar8 < iStack_44) {
LAB_1426a633f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x60 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x54) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 10) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1426a6480 Remove body=358 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData>,TDefaultMapHashableKeyFuncs<Audio::FMixerSourceVoice_*,Audio::FSubmixVoiceData,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar9 = (int)(param_2 >> 4);
  uVar7 = (longlong)(int)param_1[9] - 1;
  uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
  uVar5 = -(uVar8 + iVar9) ^ uVar8 >> 0xd;
  uVar10 = (iVar9 - uVar8) - uVar5 ^ uVar5 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 << 0x10;
  uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar10 = (uVar10 - uVar8) - uVar5 ^ uVar5 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 << 10;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar6 +
                  (((longlong)(int)((uVar5 - uVar8) - uVar10) ^ (ulonglong)(uVar8 >> 0xf)) & uVar7)
                  * 4);
  if (iVar9 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar9 * 0x60;
      if (*(ulonglong *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar9 * 0x60;
        uVar7 = (longlong)*(int *)(lVar3 + 0x54 + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001426a6596;
      }
      iVar9 = *(int *)(lVar3 + 0x50 + lVar2);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x0001426a6596:
  if (iVar1 == -1) {
LAB_1426a65bd:
    TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar9,1);
    return 1;
  }
  if (iVar1 == iVar9) {
    *piVar4 = *(int *)(lVar3 + 0x50 + lVar2);
    goto LAB_1426a65bd;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x60 + 0x50 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001426a6596;
}



// FUNCTION 1426a6600 FUN_1426a6600 body=68 status=ok
// SIG undefined FUN_1426a6600(void)

void FUN_1426a6600(longlong *param_1)

{
  if ((param_1[0x92] != 0) && (*(longlong *)(param_1[0x92] + 0x460) == 0)) {
    thunk_FUN_1428dfda0();
    return;
  }
  (**(code **)(*param_1 + 0x7b8))();
  FUN_142227350(param_1,0,1);
  return;
}



// FUNCTION 1426a6650 FUN_1426a6650 body=27 status=ok
// SIG undefined FUN_1426a6650(void)

void FUN_1426a6650(longlong param_1)

{
  FUN_14262e3c0();
  *(undefined1 *)(param_1 + 0x3b4) = 1;
  return;
}



// FUNCTION 1426a6670 FUN_1426a6670 body=1052 status=ok
// SIG undefined FUN_1426a6670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1426a6670(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  longlong lStack_70;
  float local_58;
  float fStack_54;
  float local_50;
  
  lVar7 = FWeakObjectPtr::Get((longlong)param_3 + 0xc);
  plVar1 = (longlong *)(param_1 + 0x18);
  if (((lVar7 == 0) || (lVar7 == *(longlong *)(*plVar1 + 0x118))) &&
     (*(char *)(*plVar1 + 0x2e4) != '\0')) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(undefined1 *)((longlong)param_3 + 0x3c) = uVar6;
  if ((*(char *)(param_1 + 0x3b4) == '\0') ||
     (*(float *)(param_1 + 0x13c) <= 0.0 && *(float *)(param_1 + 0x13c) != 0.0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  FUN_142606cc0(*plVar1,&local_58);
  if ((*(char *)((longlong)param_3 + 0x3d) == '\x03') && (local_98 = 0, param_3[3] != 0)) {
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(*plVar1 + 400);
      if (*(longlong *)(*plVar1 + 400) == 0) {
        return param_2;
      }
      do {
        lVar8 = lVar7;
        lVar7 = FUN_1429bed90();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
      } while ((!bVar5) && (lVar7 = *(longlong *)(lVar8 + 400), *(longlong *)(lVar8 + 400) != 0));
    }
    else {
      lVar8 = APostProcessVolume::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar8 = *(longlong *)(lVar7 + 0x4c0);
      }
      else {
        lVar8 = *(longlong *)(lVar7 + 0x168);
      }
    }
    if (lVar8 != 0) {
      FUN_14238d6f0(lVar8,param_3[3],param_3,&local_88);
      puVar9 = (undefined8 *)FRotator::Quaternion(&local_88,&local_78);
      uVar3 = puVar9[1];
      *param_2 = *puVar9;
      param_2[1] = uVar3;
    }
  }
  else if ((*(char *)((longlong)param_3 + 0x3d) == '\x04') &&
          (lVar8 = FWeakObjectPtr::Get(param_3 + 4), lVar8 != 0)) {
    lVar7 = FWeakObjectPtr::Get(param_3 + 4);
    uVar10 = *(undefined4 *)(lVar7 + 0x224);
    uVar11 = *(undefined4 *)(lVar7 + 0x228);
    *(undefined4 *)param_3 = *(undefined4 *)(lVar7 + 0x220);
    *(undefined4 *)((longlong)param_3 + 4) = uVar10;
    *(undefined4 *)(param_3 + 1) = uVar11;
    uVar3 = *(undefined8 *)(lVar7 + 0x218);
    *param_2 = *(undefined8 *)(lVar7 + 0x210);
    param_2[1] = uVar3;
  }
  else if (*(char *)((longlong)param_3 + 0x3d) == '\x02') {
    lVar8 = *plVar1;
    uVar10 = *(undefined4 *)(lVar8 + 0x220);
    uVar11 = *(undefined4 *)(lVar8 + 0x224);
    local_90 = *(undefined4 *)(lVar8 + 0x228);
    lVar2 = *(longlong *)(lVar8 + 0x118);
    local_78 = *(undefined8 *)(lVar8 + 0x210);
    lVar4 = *(longlong *)(lVar8 + 0x218);
    local_98 = *(undefined8 *)(lVar8 + 0x220);
    if (lVar7 == 0) {
      if (lVar2 != 0) {
        lVar8 = *(longlong *)(lVar2 + 0x168);
        if (lVar8 == 0) {
          uVar10 = (undefined4)_DAT_1468b5d90;
          uVar11 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
          local_90 = DAT_1468b5d98;
        }
        else {
          uVar10 = *(undefined4 *)(lVar8 + 0x220);
          uVar11 = *(undefined4 *)(lVar8 + 0x224);
          local_98 = *(undefined8 *)(lVar8 + 0x220);
          local_90 = *(undefined4 *)(lVar8 + 0x228);
        }
      }
      lStack_80 = CONCAT44(lStack_80._4_4_,local_90);
      puVar9 = &local_88;
      local_88 = CONCAT44(uVar11,uVar10);
    }
    else {
      lVar8 = *(longlong *)(lVar7 + 0x168);
      if (lVar8 == 0) {
        local_90 = DAT_1468b5d98;
        puVar9 = &local_98;
        local_98 = _DAT_1468b5d90;
      }
      else {
        puVar9 = &local_98;
        local_90 = *(undefined4 *)(lVar8 + 0x228);
        local_98 = *(undefined8 *)(lVar8 + 0x220);
      }
    }
    uVar10 = *(undefined4 *)(puVar9 + 1);
    *param_3 = *puVar9;
    *(undefined4 *)(param_3 + 1) = uVar10;
    if (lVar7 == 0) {
      local_88 = local_78;
      lStack_80 = lVar4;
      if (lVar2 != 0) {
        lVar7 = *(longlong *)(lVar2 + 0x168);
        if (lVar7 == 0) {
          local_88 = 0;
          lStack_80 = (ulonglong)uRam0000000146b0749c << 0x20;
        }
        else {
          local_88 = *(undefined8 *)(lVar7 + 0x210);
          lStack_80 = *(longlong *)(lVar7 + 0x218);
        }
      }
      *param_2 = local_88;
      param_2[1] = lStack_80;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x168);
      if (lVar7 == 0) {
        lStack_70 = (ulonglong)uRam0000000146b0749c << 0x20;
        *param_2 = 0;
        param_2[1] = lStack_70;
      }
      else {
        uVar3 = *(undefined8 *)(lVar7 + 0x218);
        *param_2 = *(undefined8 *)(lVar7 + 0x210);
        param_2[1] = uVar3;
      }
    }
  }
  else if (bVar5) {
    if (((local_58 == 0.0) && (fStack_54 == 0.0)) && (local_50 == 0.0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) {
      *param_3 = CONCAT44(fStack_54,local_58);
      *(float *)(param_3 + 1) = local_50;
      *(undefined1 *)((longlong)param_3 + 0x3d) = 1;
    }
  }
  return param_2;
}



// FUNCTION 1426a6a90 FUN_1426a6a90 body=140 status=ok
// SIG undefined FUN_1426a6a90(void)

/* WARNING: Removing unreachable block (ram,0x0001426a6af0) */

int FUN_1426a6a90(int param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    return param_1;
  }
  plVar3 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  cVar1 = *(char *)(lVar4 + 0x89);
  iVar2 = 4;
  if (cVar1 != '\x03') {
    iVar2 = 0;
  }
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      iVar2 = 2;
    }
    if (cVar1 == '\0') {
      iVar2 = 1;
    }
    return iVar2;
  }
  return 3;
}



// FUNCTION 1426a6b20 FUN_1426a6b20 body=1224 status=ok
// SIG undefined FUN_1426a6b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426a6b20(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  undefined4 uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar16;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 local_f0;
  wchar_t *local_e8;
  int local_e0;
  undefined8 local_d8;
  char local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  ulonglong uVar15;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar3 = *(longlong *)(param_1 + 0x278);
  if (lVar3 == 0) {
    return;
  }
  uVar12 = 0;
  local_f8 = 0;
  if (*(longlong *)(lVar3 + 0x40) == 0) {
    return;
  }
  if (*(char *)(lVar3 + 0x38) == '\x01') {
    if (*(longlong *)(param_1 + 0x340) != 0) {
      return;
    }
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x928);
    if (iVar6 < 1) {
      return;
    }
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x920);
    while ((lVar16 = *plVar10, lVar16 == 0 ||
           (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x28) != *(longlong *)(lVar3 + 0x40)))) {
      uVar14 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar14;
      plVar10 = plVar10 + 1;
      if (iVar6 <= (int)uVar14) {
        return;
      }
    }
    *(longlong *)(param_1 + 0x340) = lVar16;
    return;
  }
  if (*(char *)(lVar3 + 0x38) != '\x02') {
    return;
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  if ((((*(byte *)(lVar3 + 0x71b) & 4) == 0) &&
      (cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 == '\0')) && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar16 = 0x8b8;
    if (DVar5 != DAT_1468c21c0) goto LAB_1426a6be0;
  }
  lVar16 = 0x720;
LAB_1426a6be0:
  if (0 < *(int *)(lVar16 + 8 + lVar3)) {
    uVar13 = uVar12;
    uVar15 = uVar12;
    do {
      if (*(longlong *)(uVar13 + *(longlong *)(lVar16 + lVar3)) ==
          *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x40)) {
        *(undefined8 *)(param_1 + 0x328) =
             *(undefined8 *)(uVar13 + 0x30 + *(longlong *)(lVar16 + lVar3));
        break;
      }
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      uVar13 = uVar13 + 0x90;
    } while ((int)uVar14 < *(int *)(lVar16 + 8 + lVar3));
  }
  if ((0 < *(int *)(*(longlong *)(param_1 + 0x278) + 0x84)) &&
     (uVar13 = uVar12, 0 < *(int *)(lVar16 + 8 + lVar3))) {
    do {
      lVar11 = *(longlong *)(lVar16 + lVar3);
      local_d8 = *(undefined8 *)(uVar13 + lVar11);
      local_d0 = *(char *)(uVar13 + 8 + lVar11);
      local_cc = *(uint *)(uVar13 + 0xc + lVar11);
      local_c8 = *(undefined4 *)(uVar13 + 0x10 + lVar11);
      uVar2 = *(undefined8 *)(uVar13 + 0x14 + lVar11);
      uStack_c4 = (undefined4)uVar2;
      uStack_c0 = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_bc = *(undefined4 *)(uVar13 + 0x1c + lVar11);
      local_b8 = *(undefined8 *)(uVar13 + 0x20 + lVar11);
      _local_b0 = CONCAT44(*(undefined4 *)(uVar13 + 0x2c + lVar11),
                           *(undefined4 *)(uVar13 + 0x28 + lVar11));
      local_a8 = *(undefined8 *)(uVar13 + 0x30 + lVar11);
      uStack_a0 = *(undefined8 *)(uVar13 + 0x38 + lVar11);
      local_98 = *(undefined8 *)(uVar13 + 0x40 + lVar11);
      puVar1 = (undefined8 *)(uVar13 + 0x50 + lVar11);
      local_88 = *puVar1;
      uStack_80 = puVar1[1];
      puVar1 = (undefined8 *)(uVar13 + 0x60 + lVar11);
      local_78 = *puVar1;
      uStack_70 = puVar1[1];
      puVar1 = (undefined8 *)(uVar13 + 0x70 + lVar11);
      local_68 = *puVar1;
      uStack_60 = puVar1[1];
      local_58 = *(undefined8 *)(uVar13 + 0x80 + lVar11);
      local_50 = *(undefined4 *)(uVar13 + 0x88 + lVar11);
      local_4c = *(undefined1 *)(uVar13 + 0x8c + lVar11);
      FName::ToString(&local_d8,&local_e8);
      pwVar8 = L"";
      if (local_e0 != 0) {
        pwVar8 = local_e8;
      }
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar8,L"TrailSourceOffset");
      if (pwVar8 != (wchar_t *)0x0) {
        iVar6 = _wtoi(pwVar8);
        lVar11 = (longlong)iVar6;
        if (-1 < iVar6) {
          if (local_d0 == '\x03') {
            TArray<FParticleReplayTrackKey,FDefaultAllocator>::InsertUninitialized
                      (param_1 + 0x330,iVar6,1);
            lVar9 = *(longlong *)(param_1 + 0x330);
            *(ulonglong *)(lVar9 + lVar11 * 0xc) = CONCAT44(uStack_c0,uStack_c4);
            uVar7 = uStack_bc;
          }
          else {
            if (local_d0 != '\x01') goto LAB_1426a6f28;
            TArray<FParticleReplayTrackKey,FDefaultAllocator>::InsertUninitialized
                      (param_1 + 0x330,iVar6,1);
            lVar9 = *(longlong *)(param_1 + 0x330);
            local_f0 = 0;
            *(undefined8 *)(lVar9 + lVar11 * 0xc) = 0;
            *(undefined4 *)(lVar9 + 8 + lVar11 * 0xc) = 0;
            lVar9 = *(longlong *)(param_1 + 0x330);
            uVar7 = 0;
            *(ulonglong *)(lVar9 + lVar11 * 0xc) = (ulonglong)local_cc;
          }
          *(undefined4 *)(lVar9 + 8 + lVar11 * 0xc) = uVar7;
        }
      }
LAB_1426a6f28:
      if (local_e8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      uVar14 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar14;
      uVar13 = uVar13 + 0x90;
    } while ((int)uVar14 < *(int *)(lVar16 + 8 + lVar3));
  }
  return;
}



// FUNCTION 1426a6ff0 FUN_1426a6ff0 body=2477 status=ok
// SIG undefined FUN_1426a6ff0(void)

ulonglong FUN_1426a6ff0(longlong param_1,int param_2,float *param_3,undefined8 *param_4,
                       undefined8 *param_5,float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint *puVar12;
  float *pfVar13;
  longlong *plVar14;
  byte bVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  uint *puVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_88;
  float local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  pfVar18 = (float *)(longlong)param_2;
  if ((((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x71b) & 4) == 0) &&
      (cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 == '\0')) && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  lVar11 = *(longlong *)(param_1 + 0x278);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x38) == '\x01') {
      plVar14 = *(longlong **)(param_1 + 0x340);
      if (plVar14 == (longlong *)0x0) {
        FUN_1426a6b20(param_1);
        plVar14 = *(longlong **)(param_1 + 0x340);
        if (plVar14 == (longlong *)0x0) goto LAB_1426a76fc;
      }
      if ((plVar14[0x21] != 0) && (0 < (int)plVar14[0x25])) {
        if ((*(int *)(*(longlong *)(param_1 + 0x350) + (longlong)pfVar18 * 4) != -1) &&
           ((lVar11 = (**(code **)(*plVar14 + 0x110))(), lVar11 == 0 ||
            (1.0 < *(float *)(lVar11 + 0xc))))) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x350) + (longlong)pfVar18 * 4) = 0xffffffff;
        }
        puVar12 = *(uint **)(param_1 + 0x350);
        pfVar17 = (float *)0x0;
        iVar9 = 0;
        if ((puVar12[(longlong)pfVar18] == 0xffffffff) &&
           (lVar11 = *(longlong *)(param_1 + 0x340), 0 < *(int *)(lVar11 + 0x128))) {
          cVar7 = *(char *)(*(longlong *)(param_1 + 0x278) + 0x98);
          if (cVar7 == '\0') {
            iVar9 = rand();
            lVar11 = *(longlong *)(param_1 + 0x340);
            iVar9 = (int)((float)*(int *)(lVar11 + 0x128) * (float)iVar9 * 3.051851e-05);
LAB_1426a73be:
            if (iVar9 != -1) goto LAB_1426a73c3;
            uVar16 = 0xffffffff;
          }
          else {
            if (cVar7 == '\x01') {
              *(int *)(param_1 + 0x348) = *(int *)(param_1 + 0x348) + 1;
              iVar9 = *(int *)(param_1 + 0x348);
              if (*(int *)(lVar11 + 0x128) <= iVar9) {
                iVar9 = -1;
              }
              *(int *)(param_1 + 0x348) = iVar9;
              do {
                bVar6 = false;
                bVar5 = false;
                pfVar13 = pfVar17;
                puVar19 = puVar12;
                uVar20 = (ulonglong)*(uint *)(param_1 + 0x1fc);
                if ((int)*(uint *)(param_1 + 0x1fc) < 1) {
LAB_1426a7359:
                  iVar9 = *(int *)(param_1 + 0x348);
                  if (!bVar5) {
                    iVar8 = *(int *)(lVar11 + 0x128);
                    break;
                  }
                }
                else {
                  do {
                    if ((pfVar13 != pfVar18) &&
                       (bVar5 = bVar6,
                       *puVar19 ==
                       (uint)*(ushort *)
                              (*(longlong *)(lVar11 + 0x108) +
                              (longlong)*(int *)(param_1 + 0x348) * 2))) {
                      bVar6 = true;
                      bVar5 = true;
                    }
                    uVar20 = uVar20 - 1;
                    pfVar13 = (float *)((longlong)pfVar13 + 1);
                    puVar19 = puVar19 + 1;
                  } while (uVar20 != 0);
                  if (!bVar5) goto LAB_1426a7359;
                  *(int *)(param_1 + 0x348) = *(int *)(param_1 + 0x348) + 1;
                  iVar9 = *(int *)(param_1 + 0x348);
                }
                iVar8 = *(int *)(lVar11 + 0x128);
              } while (iVar9 < iVar8);
              if (iVar8 <= iVar9) {
                *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
                iVar9 = -1;
              }
              goto LAB_1426a73be;
            }
LAB_1426a73c3:
            uVar16 = (uint)*(ushort *)(*(longlong *)(lVar11 + 0x108) + (longlong)iVar9 * 2);
          }
          *(uint *)(*(longlong *)(param_1 + 0x350) + (longlong)pfVar18 * 4) = uVar16;
          puVar12 = *(uint **)(param_1 + 0x350);
        }
        pfVar13 = pfVar17;
        if (-1 < (int)puVar12[(longlong)pfVar18]) {
          pfVar13 = (float *)(**(code **)(**(longlong **)(param_1 + 0x340) + 0x110))();
        }
        lVar11 = *(longlong *)(param_1 + 0x340);
        if (pfVar13 == (float *)0x0) {
          lVar11 = *(longlong *)(lVar11 + 0x18);
          bVar15 = 1;
          fVar27 = *(float *)(lVar11 + 0x224);
          fVar1 = *(float *)(lVar11 + 0x228);
          *param_3 = *(float *)(lVar11 + 0x220);
          param_3[1] = fVar27;
          param_3[2] = fVar1;
          lVar11 = *(longlong *)(param_1 + 0x18);
          *(undefined8 *)param_6 = *(undefined8 *)(lVar11 + 0x77c);
          param_6[2] = *(float *)(lVar11 + 0x784);
          *(undefined4 *)(*(longlong *)(param_1 + 0x360) + (longlong)pfVar18 * 4) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x350) + (longlong)pfVar18 * 4) = 0xffffffff;
        }
        else {
          fVar27 = *(float *)(lVar11 + 0xe0);
          fVar1 = *(float *)(lVar11 + 0xe8);
          fVar2 = *(float *)(lVar11 + 0xe4);
          iVar9 = _finite((double)pfVar13[4]);
          if ((((((iVar9 == 0) || (iVar9 = _finite((double)pfVar13[5]), iVar9 == 0)) ||
                (iVar9 = _finite((double)pfVar13[6]), iVar9 == 0)) ||
               ((iVar9 = _finite((double)*pfVar13), iVar9 == 0 ||
                (iVar9 = _finite((double)pfVar13[1]), iVar9 == 0)))) ||
              ((iVar9 = _finite((double)pfVar13[2]), iVar9 == 0 ||
               ((iVar9 = _finite((double)fVar27), iVar9 == 0 ||
                (iVar9 = _finite((double)fVar2), iVar9 == 0)))))) ||
             (iVar9 = _finite((double)fVar1), iVar9 == 0)) {
            if (0 < *(int *)(*(longlong *)(param_1 + 0x340) + 0x128)) {
              do {
                (**(code **)(**(longlong **)(param_1 + 0x340) + 0x110))();
                uVar16 = (int)pfVar17 + 1;
                pfVar17 = (float *)(ulonglong)uVar16;
              } while ((int)uVar16 < *(int *)(*(longlong *)(param_1 + 0x340) + 0x128));
            }
            bVar15 = 0;
          }
          else {
            fVar3 = pfVar13[6];
            bVar15 = 1;
            *(ulonglong *)param_3 = CONCAT44(fVar2 + pfVar13[5],fVar27 + pfVar13[4]);
            param_3[2] = fVar1 + fVar3;
            fVar27 = pfVar13[6];
            fVar1 = pfVar13[2];
            *(ulonglong *)param_6 = CONCAT44(pfVar13[5] - pfVar13[1],pfVar13[4] - *pfVar13);
            param_6[2] = fVar27 - fVar1;
            *(float *)(*(longlong *)(param_1 + 0x360) + (longlong)pfVar18 * 4) = pfVar13[3];
          }
        }
        *param_7 = *param_6 * *param_6 + param_6[1] * param_6[1] + param_6[2] * param_6[2];
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x340) + 0x18);
        fVar21 = *(float *)(lVar11 + 0x230) * 0.0;
        fVar23 = *(float *)(lVar11 + 0x234) * 0.0;
        fVar24 = *(float *)(lVar11 + 0x238) * 1.0;
        fVar27 = *(float *)(lVar11 + 0x210);
        fVar1 = *(float *)(lVar11 + 0x214);
        fVar2 = *(float *)(lVar11 + 0x218);
        fVar3 = *(float *)(lVar11 + 0x21c);
        fVar22 = fVar24 * fVar1 - fVar23 * fVar2;
        fVar25 = fVar21 * fVar2 - fVar24 * fVar27;
        fVar26 = fVar23 * fVar27 - fVar21 * fVar1;
        fVar22 = fVar22 + fVar22;
        fVar25 = fVar25 + fVar25;
        fVar26 = fVar26 + fVar26;
        local_80 = (fVar25 * fVar27 - fVar22 * fVar1) + fVar3 * fVar26 + fVar24;
        *param_5 = CONCAT44((fVar22 * fVar2 - fVar26 * fVar27) + fVar3 * fVar25 + fVar23,
                            (fVar26 * fVar1 - fVar25 * fVar2) + fVar3 * fVar22 + fVar21);
        *(float *)(param_5 + 1) = local_80;
        *param_4 = 0;
        param_4[1] = 0x3f80000000000000;
        if (bVar15 != 0) {
          return (ulonglong)bVar15;
        }
      }
    }
    else if ((*(char *)(lVar11 + 0x38) == '\x02') && (*(longlong *)(lVar11 + 0x40) != 0)) {
      lVar11 = *(longlong *)(param_1 + 0x328);
      if (lVar11 == 0) {
        FUN_1426a6b20(param_1);
        lVar11 = *(longlong *)(param_1 + 0x328);
        if (lVar11 == 0) goto LAB_1426a76fc;
      }
      if (*(longlong *)(lVar11 + 0x168) == 0) {
        pfVar18 = (float *)&DAT_1468b5b70;
      }
      else {
        pfVar18 = (float *)(*(longlong *)(lVar11 + 0x168) + 0x210);
      }
      local_80 = (float)*(undefined8 *)(pfVar18 + 6);
      fVar1 = *pfVar18;
      fVar2 = pfVar18[1];
      fVar3 = pfVar18[2];
      fVar22 = pfVar18[3];
      fVar25 = pfVar18[8];
      fVar26 = pfVar18[9];
      fVar27 = pfVar18[10];
      *(undefined8 *)param_3 = *(undefined8 *)(pfVar18 + 4);
      param_3[2] = local_80;
      local_78 = fVar1;
      fStack_74 = fVar2;
      fStack_70 = fVar3;
      fStack_6c = fVar22;
      FQuat::Rotator(&local_78,&local_88);
      puVar10 = (undefined8 *)FRotator::Quaternion(&local_88,&local_78);
      uVar4 = puVar10[1];
      *param_4 = *puVar10;
      param_4[1] = uVar4;
      puVar10 = (undefined8 *)
                (**(code **)(**(longlong **)(param_1 + 0x328) + 0x308))
                          (*(longlong **)(param_1 + 0x328),&local_78);
      fVar25 = fVar25 * 0.0;
      fVar26 = fVar26 * 0.0;
      fVar27 = fVar27 * 1.0;
      *(undefined8 *)param_6 = *puVar10;
      param_6[2] = *(float *)(puVar10 + 1);
      *param_7 = *param_6 * *param_6 + param_6[1] * param_6[1] + param_6[2] * param_6[2];
      fVar21 = fVar27 * fVar2 - fVar26 * fVar3;
      fVar23 = fVar25 * fVar3 - fVar27 * fVar1;
      fVar24 = fVar26 * fVar1 - fVar25 * fVar2;
      fVar21 = fVar21 + fVar21;
      fVar23 = fVar23 + fVar23;
      fVar24 = fVar24 + fVar24;
      fVar27 = (fVar23 * fVar1 - fVar21 * fVar2) + fVar22 * fVar24 + fVar27;
      *param_5 = CONCAT44((fVar21 * fVar3 - fVar24 * fVar1) + fVar22 * fVar23 + fVar26,
                          (fVar24 * fVar2 - fVar23 * fVar3) + fVar22 * fVar21 + fVar25);
      *(float *)(param_5 + 1) = fVar27;
      goto LAB_1426a7970;
    }
  }
LAB_1426a76fc:
  if (((*(byte *)(param_1 + 0x250) & 1) == 0) ||
     (((pfVar18 = (float *)FUN_142606cc0(*(undefined8 *)(param_1 + 0x18),&local_78), *pfVar18 == 0.0
       && (pfVar18[1] == 0.0)) && (pfVar18[2] == 0.0)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  lVar11 = *(longlong *)(param_1 + 0x18);
  if (bVar5) {
    puVar10 = (undefined8 *)FUN_142606cc0(lVar11,&local_78);
  }
  else {
    puVar10 = &local_88;
    local_80 = (float)*(undefined4 *)(lVar11 + 0x228);
    local_88 = *(undefined8 *)(lVar11 + 0x220);
  }
  *(undefined8 *)param_3 = *puVar10;
  param_3[2] = *(float *)(puVar10 + 1);
  lVar11 = *(longlong *)(param_1 + 0x278);
  if (((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x84))) && (param_2 < *(int *)(lVar11 + 0x90))) {
    uVar4 = *(undefined8 *)(*(longlong *)(lVar11 + 0x88) + (longlong)param_2 * 0xc);
    fVar27 = *(float *)(*(longlong *)(lVar11 + 0x88) + 8 + (longlong)param_2 * 0xc);
    local_88._0_4_ = (float)uVar4;
    local_88._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    if ((*(longlong *)(param_1 + 0x28) != 0) &&
       ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + 100) & 1) == 0)) {
      lVar11 = *(longlong *)(param_1 + 0x18);
      fVar1 = *(float *)(lVar11 + 0x210);
      fVar2 = *(float *)(lVar11 + 0x214);
      fVar3 = *(float *)(lVar11 + 0x218);
      fVar22 = *(float *)(lVar11 + 0x21c);
      local_88._0_4_ = (float)local_88 * *(float *)(lVar11 + 0x230);
      local_88._4_4_ = local_88._4_4_ * *(float *)(lVar11 + 0x234);
      fVar27 = fVar27 * *(float *)(lVar11 + 0x238);
      fVar25 = fVar27 * fVar2 - local_88._4_4_ * fVar3;
      fVar26 = (float)local_88 * fVar3 - fVar27 * fVar1;
      fVar21 = local_88._4_4_ * fVar1 - (float)local_88 * fVar2;
      fVar25 = fVar25 + fVar25;
      fVar26 = fVar26 + fVar26;
      fVar21 = fVar21 + fVar21;
      local_88._0_4_ = (fVar21 * fVar2 - fVar26 * fVar3) + fVar22 * fVar25 + (float)local_88;
      local_88._4_4_ = (fVar25 * fVar3 - fVar21 * fVar1) + fVar22 * fVar26 + local_88._4_4_;
      fVar27 = (fVar26 * fVar1 - fVar25 * fVar2) + fVar22 * fVar21 + fVar27;
    }
    *param_3 = (float)local_88 + *param_3;
    param_3[1] = local_88._4_4_ + param_3[1];
    param_3[2] = fVar27 + param_3[2];
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x218);
  *param_4 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x210);
  param_4[1] = uVar4;
  lVar11 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)param_6 = *(undefined8 *)(lVar11 + 0x77c);
  param_6[2] = *(float *)(lVar11 + 0x784);
  *param_7 = *param_6 * *param_6 + param_6[1] * param_6[1] + param_6[2] * param_6[2];
  lVar11 = *(longlong *)(param_1 + 0x18);
  fVar23 = *(float *)(lVar11 + 0x230) * 0.0;
  fVar24 = *(float *)(lVar11 + 0x234) * 0.0;
  fVar27 = *(float *)(lVar11 + 0x238) * 1.0;
  fVar1 = *(float *)(lVar11 + 0x210);
  fVar2 = *(float *)(lVar11 + 0x214);
  fVar3 = *(float *)(lVar11 + 0x218);
  fVar22 = *(float *)(lVar11 + 0x21c);
  fVar25 = fVar27 * fVar2 - fVar24 * fVar3;
  fVar26 = fVar23 * fVar3 - fVar27 * fVar1;
  fVar21 = fVar24 * fVar1 - fVar23 * fVar2;
  fVar25 = fVar25 + fVar25;
  fVar26 = fVar26 + fVar26;
  fVar21 = fVar21 + fVar21;
  fVar27 = (fVar26 * fVar1 - fVar25 * fVar2) + fVar22 * fVar21 + fVar27;
  *param_5 = CONCAT44((fVar25 * fVar3 - fVar21 * fVar1) + fVar22 * fVar26 + fVar24,
                      (fVar21 * fVar2 - fVar26 * fVar3) + fVar22 * fVar25 + fVar23);
  *(float *)(param_5 + 1) = fVar27;
LAB_1426a7970:
  return CONCAT71((uint7)(uint3)((uint)fVar27 >> 8),1);
}



// FUNCTION 1426a79a0 FUN_1426a79a0 body=70 status=ok
// SIG undefined FUN_1426a79a0(void)

void FUN_1426a79a0(longlong *param_1)

{
  longlong *plVar1;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x6e8))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x430))(plVar1);
  }
  (**(code **)(*param_1 + 0x7f0))(param_1,local_18);
                    /* WARNING: Could not recover jumptable at 0x0001426a79df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x768))(param_1);
  return;
}



// FUNCTION 1426a79f0 FUN_1426a79f0 body=1837 status=ok
// SIG undefined FUN_1426a79f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1426a79f0(float *param_1,longlong param_2,float *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  float fVar16;
  undefined1 auVar13 [16];
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar24;
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar21 [16];
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
  undefined1 auStack_148 [48];
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
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((*(longlong *)(param_2 + 200) == 0) ||
     (lVar11 = FWeakObjectPtr::Get(param_2 + 0x138), lVar11 == 0)) {
    uVar5 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 2) = uVar5;
    uVar5 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 6) = uVar5;
    uVar5 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 10) = uVar5;
  }
  else {
    pfVar12 = (float *)FUN_14238d0c0(lVar11,&local_108);
    uVar9 = uRam0000000146b074ac;
    uVar8 = uRam0000000146b074a8;
    uVar7 = uRam0000000146b074a4;
    uVar6 = _DAT_146b074a0;
    fVar16 = fRam0000000146b0749c;
    auVar20 = *(undefined1 (*) [16])(pfVar12 + 8);
    fVar29 = auVar20._0_4_;
    fVar32 = auVar20._4_4_;
    fVar33 = auVar20._8_4_;
    fVar34 = auVar20._12_4_;
    auVar13._4_4_ = -(uint)(fRam0000000146b07854 < (float)((uint)fVar32 & uRam0000000146b07864));
    auVar13._0_4_ = -(uint)(_DAT_146b07850 < (float)((uint)fVar29 & _DAT_146b07860));
    auVar13._8_4_ = -(uint)(fRam0000000146b07858 < (float)((uint)fVar33 & uRam0000000146b07868));
    auVar13._12_4_ = -(uint)(fRam0000000146b0785c < (float)((uint)fVar34 & uRam0000000146b0786c));
    iVar10 = movmskps((int)pfVar12,auVar13);
    fVar18 = _DAT_1468b5b80;
    fVar22 = fRam00000001468b5b84;
    fVar24 = fRam00000001468b5b88;
    fVar25 = fRam00000001468b5b8c;
    fVar46 = _DAT_1468b5b70;
    fVar47 = fRam00000001468b5b74;
    fVar49 = fRam00000001468b5b78;
    fVar50 = fRam00000001468b5b7c;
    fVar51 = _DAT_1468b5b90;
    fVar52 = fRam00000001468b5b94;
    fVar53 = fRam00000001468b5b98;
    fVar54 = fRam00000001468b5b9c;
    if (iVar10 != 0) {
      fVar46 = _DAT_146b077d0 * *pfVar12;
      fVar47 = fRam0000000146b077d4 * pfVar12[1];
      fVar49 = fRam0000000146b077d8 * pfVar12[2];
      fVar50 = fRam0000000146b077dc * pfVar12[3];
      auVar20 = rcpps(in_XMM1,auVar20);
      fVar18 = auVar20._0_4_;
      fVar22 = auVar20._4_4_;
      fVar24 = auVar20._8_4_;
      fVar25 = auVar20._12_4_;
      fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar29;
      fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar32;
      fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar33;
      fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar34;
      fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar29;
      fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar32;
      fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar33;
      fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar34;
      fVar51 = (float)(((uint)fVar18 &
                        -(uint)((float)((uint)fVar29 & _DAT_146b07860) <= _DAT_146b07850) ^
                       (uint)fVar18) & _DAT_146b074a0);
      fVar52 = (float)(((uint)fVar22 &
                        -(uint)((float)((uint)fVar32 & uRam0000000146b07864) <= fRam0000000146b07854
                               ) ^ (uint)fVar22) & uRam0000000146b074a4);
      fVar53 = (float)(((uint)fVar24 &
                        -(uint)((float)((uint)fVar33 & uRam0000000146b07868) <= fRam0000000146b07858
                               ) ^ (uint)fVar24) & uRam0000000146b074a8);
      fVar54 = (float)(((uint)fVar25 &
                        -(uint)((float)((uint)fVar34 & uRam0000000146b0786c) <= fRam0000000146b0785c
                               ) ^ (uint)fVar25) & uRam0000000146b074ac);
      fVar18 = pfVar12[4] * fVar51;
      fVar22 = pfVar12[5] * fVar52;
      fVar24 = pfVar12[6] * fVar53;
      fVar25 = pfVar12[7] * fVar54;
      fVar29 = fVar24 * fVar47 - fVar22 * fVar49;
      fVar32 = fVar18 * fVar49 - fVar24 * fVar46;
      fVar33 = fVar22 * fVar46 - fVar18 * fVar47;
      fVar34 = fVar25 * fVar50 - fVar25 * fVar50;
      fVar29 = fVar29 + fVar29;
      fVar32 = fVar32 + fVar32;
      fVar33 = fVar33 + fVar33;
      fVar34 = fVar34 + fVar34;
      fVar18 = (float)((uint)(0.0 - ((fVar33 * fVar47 - fVar32 * fVar49) + fVar50 * fVar29 + fVar18)
                             ) & _DAT_146b074a0);
      fVar22 = (float)((uint)(0.0 - ((fVar29 * fVar49 - fVar33 * fVar46) + fVar50 * fVar32 + fVar22)
                             ) & uRam0000000146b074a4);
      fVar24 = (float)((uint)(0.0 - ((fVar32 * fVar46 - fVar29 * fVar47) + fVar50 * fVar33 + fVar24)
                             ) & uRam0000000146b074a8);
      fVar25 = (float)((uint)(0.0 - ((fVar34 * fVar50 - fVar34 * fVar50) + fVar50 * fVar34 + fVar25)
                             ) & uRam0000000146b074ac);
    }
    fVar29 = *(float *)(param_2 + 0x1c);
    fVar32 = *(float *)(param_2 + 0x18);
    fVar33 = *(float *)(param_2 + 0x14);
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = fVar16;
    fVar34 = (float)((uint)fRam0000000146b07494 & uVar7);
    fVar16 = (float)((uint)fRam0000000146b07498 & uVar8);
    fVar17 = (float)((uint)fRam0000000146b0749c & uVar9);
    fVar33 = fVar33 * fVar18;
    fVar32 = fVar32 * fVar22;
    fVar29 = fVar29 * fVar24;
    param_1[8] = (float)((uint)_DAT_146b07490 & uVar6);
    param_1[9] = fVar34;
    param_1[10] = fVar16;
    param_1[0xb] = fVar17;
    fVar4 = fRam0000000146b07498;
    fVar3 = fRam0000000146b07494;
    fVar2 = _DAT_146b07490;
    auVar14._4_4_ = fVar52;
    auVar14._0_4_ = fVar51;
    auVar14._8_4_ = fVar53;
    auVar14._12_4_ = fVar54;
    auVar20 = *(undefined1 (*) [16])(param_3 + 8);
    fVar34 = auVar20._0_4_;
    fVar16 = auVar20._4_4_;
    fVar18 = auVar20._8_4_;
    fVar22 = auVar20._12_4_;
    fVar24 = *param_3;
    fVar17 = param_3[1];
    fVar23 = param_3[2];
    fVar19 = param_3[3];
    auVar20 = minps(auVar14,auVar20);
    auVar15._4_4_ = -(uint)(auVar20._4_4_ < fRam0000000146b07844);
    auVar15._0_4_ = -(uint)(auVar20._0_4_ < _DAT_146b07840);
    auVar15._8_4_ = -(uint)(auVar20._8_4_ < fRam0000000146b07848);
    auVar15._12_4_ = -(uint)(auVar20._12_4_ < fRam0000000146b0784c);
    iVar10 = movmskps(iVar10,auVar15);
    if (iVar10 == 0) {
      fVar2 = param_3[4];
      fVar3 = param_3[5];
      fVar4 = param_3[6];
      fVar27 = param_3[7];
      fVar33 = fVar34 * fVar33;
      fVar32 = fVar16 * fVar32;
      fVar29 = fVar18 * fVar29;
      fVar35 = fVar22 * fVar25 * 0.0;
      fVar28 = fVar24 * fVar50 * _DAT_146b07820;
      fVar30 = fVar24 * fVar49 * fRam0000000146b07824;
      fVar26 = fVar24 * fVar47 * fRam0000000146b07828;
      fVar31 = fVar24 * fVar46 * fRam0000000146b0782c;
      param_1[8] = fVar51 * fVar34;
      param_1[9] = fVar52 * fVar16;
      param_1[10] = fVar53 * fVar18;
      param_1[0xb] = fVar54 * fVar22;
      fVar22 = fVar17 * fVar50 * fRam0000000146b07814;
      fVar25 = fVar17 * fVar46 * fRam0000000146b07818;
      fVar51 = fVar17 * fVar47 * fRam0000000146b0781c;
      fVar34 = fVar23 * fVar46 * fRam0000000146b07804;
      fVar16 = fVar23 * fVar50 * fRam0000000146b07808;
      fVar18 = fVar23 * fVar49 * fRam0000000146b0780c;
      *param_1 = fVar28 + fVar19 * fVar46 + fVar17 * fVar49 * _DAT_146b07810 +
                 fVar23 * fVar47 * _DAT_146b07800;
      param_1[1] = fVar30 + fVar19 * fVar47 + fVar22 + fVar34;
      param_1[2] = fVar26 + fVar19 * fVar49 + fVar25 + fVar16;
      param_1[3] = fVar31 + fVar19 * fVar50 + fVar51 + fVar18;
      fVar34 = fVar29 * fVar17 - fVar32 * fVar23;
      fVar16 = fVar33 * fVar23 - fVar29 * fVar24;
      fVar18 = fVar32 * fVar24 - fVar33 * fVar17;
      fVar22 = fVar35 * fVar19 - fVar35 * fVar19;
      fVar34 = fVar34 + fVar34;
      fVar16 = fVar16 + fVar16;
      fVar18 = fVar18 + fVar18;
      fVar22 = fVar22 + fVar22;
      param_1[4] = (fVar18 * fVar17 - fVar16 * fVar23) + fVar34 * fVar19 + fVar33 + fVar2;
      param_1[5] = (fVar34 * fVar23 - fVar18 * fVar24) + fVar16 * fVar19 + fVar32 + fVar3;
      param_1[6] = (fVar16 * fVar24 - fVar34 * fVar17) + fVar18 * fVar19 + fVar29 + fVar4;
      param_1[7] = (fVar22 * fVar19 - fVar22 * fVar19) + fVar22 * fVar19 + fVar35 + fVar27;
    }
    else {
      fVar25 = fVar17 + fVar17;
      fVar28 = fVar23 + fVar23;
      fVar30 = (fVar24 + fVar24) * fVar24;
      fVar27 = (fVar24 + fVar24) * fVar19;
      fVar43 = (fVar28 * fVar19 + fVar25 * fVar24) * fVar34;
      fVar44 = (fVar27 + fVar28 * fVar17) * fVar16;
      fVar45 = (fVar25 * fVar19 + fVar28 * fVar24) * fVar18;
      fVar35 = fVar16 * (fVar25 * fVar24 - fVar28 * fVar19);
      fVar37 = fVar18 * (fVar28 * fVar17 - fVar27);
      fVar38 = fVar34 * (fVar28 * fVar24 - fVar25 * fVar19);
      fVar19 = (float)((uint)((_DAT_146b07490 - (fVar28 * fVar23 + fVar25 * fVar17)) * fVar34) &
                      uVar6);
      fVar23 = (float)((uint)((fRam0000000146b07494 - (fVar28 * fVar23 + fVar30)) * fVar16) & uVar7)
      ;
      fVar28 = (float)((uint)((fRam0000000146b07498 - (fVar25 * fVar17 + fVar30)) * fVar18) & uVar8)
      ;
      fVar26 = (float)((uint)((fRam0000000146b0749c - (fVar30 + fVar30)) * fVar22) & uVar9);
      fVar24 = param_3[4];
      fVar25 = param_3[5];
      fVar17 = param_3[6];
      fVar27 = fVar47 + fVar47;
      fVar30 = fVar49 + fVar49;
      fVar31 = (fVar46 + fVar46) * fVar46;
      fVar48 = fVar50 * (fVar46 + fVar46);
      fVar40 = (fVar50 * fVar30 + fVar46 * fVar27) * fVar51;
      fVar41 = (fVar48 + fVar47 * fVar30) * fVar52;
      fVar42 = (fVar50 * fVar27 + fVar46 * fVar30) * fVar53;
      fVar36 = fVar52 * (fVar46 * fVar27 - fVar50 * fVar30);
      fVar48 = fVar53 * (fVar47 * fVar30 - fVar48);
      fVar39 = fVar51 * (fVar46 * fVar30 - fVar50 * fVar27);
      fVar46 = (float)((uint)((_DAT_146b07490 - (fVar30 * fVar49 + fVar27 * fVar47)) * fVar51) &
                      _DAT_146b074a0);
      fVar49 = (float)((uint)((fRam0000000146b07494 - (fVar30 * fVar49 + fVar31)) * fVar52) &
                      uRam0000000146b074a4);
      fVar47 = (float)((uint)((fRam0000000146b07498 - (fVar27 * fVar47 + fVar31)) * fVar53) &
                      uRam0000000146b074a8);
      fVar50 = (float)((uint)((fRam0000000146b0749c - (fVar31 + fVar31)) * fVar54) &
                      uRam0000000146b074ac);
      local_108 = fVar40 * fVar35 + fVar46 * fVar19 + fVar39 * fVar45 + fVar50 * fVar24;
      fStack_104 = fVar40 * fVar23 + fVar46 * fVar43 + fVar39 * fVar37 + fVar50 * fVar25;
      fStack_100 = fVar40 * fVar44 + fVar46 * fVar38 + fVar39 * fVar28 + fVar50 * fVar17;
      fStack_fc = fVar40 * fVar26 + fVar46 * fVar26 + fVar39 * fVar26 +
                  fVar50 * fRam0000000146b0749c;
      local_f8 = fVar49 * fVar35 + fVar36 * fVar19 + fVar41 * fVar45 + fVar50 * fVar24;
      fStack_f4 = fVar49 * fVar23 + fVar36 * fVar43 + fVar41 * fVar37 + fVar50 * fVar25;
      fStack_f0 = fVar49 * fVar44 + fVar36 * fVar38 + fVar41 * fVar28 + fVar50 * fVar17;
      fStack_ec = fVar49 * fVar26 + fVar36 * fVar26 + fVar41 * fVar26 +
                  fVar50 * fRam0000000146b0749c;
      local_e8 = fVar48 * fVar35 + fVar42 * fVar19 + fVar47 * fVar45 + fVar50 * fVar24;
      fStack_e4 = fVar48 * fVar23 + fVar42 * fVar43 + fVar47 * fVar37 + fVar50 * fVar25;
      fStack_e0 = fVar48 * fVar44 + fVar42 * fVar38 + fVar47 * fVar28 + fVar50 * fVar17;
      fStack_dc = fVar48 * fVar26 + fVar42 * fVar26 + fVar47 * fVar26 +
                  fVar50 * fRam0000000146b0749c;
      local_d8 = fVar32 * fVar35 + fVar33 * fVar19 + fVar29 * fVar45 + fRam0000000146b0749c * fVar24
      ;
      fStack_d4 = fVar32 * fVar23 + fVar33 * fVar43 + fVar29 * fVar37 +
                  fRam0000000146b0749c * fVar25;
      fStack_d0 = fVar32 * fVar44 + fVar33 * fVar38 + fVar29 * fVar28 +
                  fRam0000000146b0749c * fVar17;
      fStack_cc = fVar32 * fVar26 + fVar33 * fVar26 + fVar29 * fVar26 +
                  fRam0000000146b0749c * fRam0000000146b0749c;
      FMatrix::RemoveScaling(&local_108);
      fVar29 = (float)(-(uint)(_DAT_146b07840 <= fVar51 * fVar34) & (_DAT_146b07830 ^ (uint)fVar2) ^
                      _DAT_146b07830);
      fVar32 = (float)(-(uint)(fRam0000000146b07844 <= fVar52 * fVar16) &
                       (uRam0000000146b07834 ^ (uint)fVar3) ^ uRam0000000146b07834);
      fVar33 = (float)(-(uint)(fRam0000000146b07848 <= fVar53 * fVar18) &
                       (uRam0000000146b07838 ^ (uint)fVar4) ^ uRam0000000146b07838);
      local_108 = local_108 * fVar29;
      fStack_104 = fStack_104 * fVar29;
      fStack_100 = fStack_100 * fVar29;
      fStack_f0 = fStack_f0 * fVar32;
      fStack_f4 = fStack_f4 * fVar32;
      local_f8 = local_f8 * fVar32;
      fStack_e0 = fStack_e0 * fVar33;
      local_e8 = local_e8 * fVar33;
      fStack_e4 = fStack_e4 * fVar33;
      FQuat::FQuat(&local_118,&local_108);
      auVar21._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
      auVar21._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
      auVar21._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
      auVar21._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
      fVar25 = auVar21._4_4_ + auVar21._0_4_;
      fVar46 = auVar21._8_4_ + auVar21._4_4_;
      fVar47 = auVar21._12_4_ + auVar21._8_4_;
      fVar49 = auVar21._0_4_ + auVar21._12_4_;
      auVar1._4_4_ = fVar46;
      auVar1._0_4_ = fVar25;
      auVar1._8_4_ = fVar47;
      auVar1._12_4_ = fVar49;
      auVar20 = rsqrtps(auVar21,auVar1);
      fVar29 = auVar20._0_4_;
      fVar32 = auVar20._4_4_;
      fVar33 = auVar20._8_4_;
      fVar24 = auVar20._12_4_;
      fVar29 = (_DAT_146b074c0 - fVar29 * fVar29 * fVar25 * _DAT_146b074c0) * fVar29 + fVar29;
      fVar32 = (fRam0000000146b074c4 - fVar32 * fVar32 * fVar46 * fRam0000000146b074c4) * fVar32 +
               fVar32;
      fVar33 = (fRam0000000146b074c8 - fVar33 * fVar33 * fVar47 * fRam0000000146b074c8) * fVar33 +
               fVar33;
      fVar24 = (fRam0000000146b074cc - fVar24 * fVar24 * fVar49 * fRam0000000146b074cc) * fVar24 +
               fVar24;
      auVar20._4_4_ = fStack_d4;
      auVar20._0_4_ = local_d8;
      auVar20._8_4_ = fStack_d0;
      fVar29 = (float)(((uint)(((_DAT_146b074c0 - fVar29 * fVar29 * fVar25 * _DAT_146b074c0) *
                                fVar29 + fVar29) * local_118) ^ _DAT_146b074b0) &
                       -(uint)(1e-08 <= fVar25) ^ _DAT_146b074b0);
      fVar32 = (float)(((uint)(((fRam0000000146b074c4 -
                                fVar32 * fVar32 * fVar46 * fRam0000000146b074c4) * fVar32 + fVar32)
                              * fStack_114) ^ uRam0000000146b074b4) & -(uint)(1e-08 <= fVar46) ^
                      uRam0000000146b074b4);
      fVar33 = (float)(((uint)(((fRam0000000146b074c8 -
                                fVar33 * fVar33 * fVar47 * fRam0000000146b074c8) * fVar33 + fVar33)
                              * fStack_110) ^ uRam0000000146b074b8) & -(uint)(1e-08 <= fVar47) ^
                      uRam0000000146b074b8);
      fVar24 = (float)(((uint)(((fRam0000000146b074cc -
                                fVar24 * fVar24 * fVar49 * fRam0000000146b074cc) * fVar24 + fVar24)
                              * fStack_10c) ^ uRam0000000146b074bc) & -(uint)(1e-08 <= fVar49) ^
                      uRam0000000146b074bc);
      param_1[8] = fVar51 * fVar34;
      param_1[9] = fVar52 * fVar16;
      param_1[10] = fVar53 * fVar18;
      param_1[0xb] = fVar54 * fVar22;
      auVar20._12_4_ = 0;
      *(undefined1 (*) [16])(param_1 + 4) = auVar20;
      *param_1 = fVar29;
      param_1[1] = fVar32;
      param_1[2] = fVar33;
      param_1[3] = fVar24;
    }
  }
  return param_1;
}



// FUNCTION 1426a8120 FUN_1426a8120 body=110 status=ok
// SIG undefined FUN_1426a8120(void)

void FUN_1426a8120(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x490);
  if (lVar1 != 0) {
    lVar3 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x528), lVar1 != 0)) &&
       ((char)*(uint *)(lVar1 + 0x2c40) < '\0')) {
      *(uint *)(lVar1 + 0x2c40) = *(uint *)(lVar1 + 0x2c40) | 0x200;
    }
  }
  return;
}



// FUNCTION 1426a8190 FUN_1426a8190 body=338 status=ok
// SIG undefined FUN_1426a8190(void)

void FUN_1426a8190(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong local_118;
  longlong *local_110;
  longlong local_88;
  longlong local_28;
  longlong local_18;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x90), plVar1 != (longlong *)0x0)) {
    local_res10[0] = 1;
    lVar2 = *(longlong *)plVar1[0x2b0];
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
      FControlChannelOutBunch::FControlChannelOutBunch(&local_118,lVar2,0);
      local_res8[0] = 0x16;
      if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
        (**(code **)(local_118 + 0x50))(&local_118,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*local_110;
        *local_110 = *local_110 + 1;
      }
      if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
        (**(code **)(local_118 + 0x50))(&local_118,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*local_110;
        *local_110 = *local_110 + 1;
      }
      (**(code **)(**(longlong **)plVar1[0x2b0] + 0x2c8))
                (*(longlong **)plVar1[0x2b0],local_res18,&local_118,1);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(&local_118);
    }
    (**(code **)(*plVar1 + 0x2c8))(plVar1,0);
  }
  return;
}



// FUNCTION 1426a82f0 FUN_1426a82f0 body=282 status=ok
// SIG undefined FUN_1426a82f0(void)

void FUN_1426a82f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_118;
  longlong *local_110;
  longlong local_88;
  longlong local_28;
  longlong local_18;
  
  *(undefined1 *)(param_1 + 0xb1) = 1;
  lVar4 = *(longlong *)(param_1 + 0x30);
  lVar1 = *(longlong *)(lVar4 + 0x90);
  lVar2 = **(longlong **)(lVar1 + 0x1580);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FControlChannelOutBunch::FControlChannelOutBunch(&local_118,lVar2,0);
    local_res8[0] = 9;
    if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
      (**(code **)(local_118 + 0x50))(&local_118,local_res8,1);
    }
    else {
      local_res8[0] = *(undefined1 *)*local_110;
      *local_110 = *local_110 + 1;
    }
    plVar3 = (longlong *)**(undefined8 **)(lVar1 + 0x1580);
    (**(code **)(*plVar3 + 0x2c8))(plVar3,local_res10,&local_118,1);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_118);
    lVar4 = *(longlong *)(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x0001426a8403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar4 + 0x90) + 0x2c8))(*(longlong **)(lVar4 + 0x90),1);
  return;
}



// FUNCTION 1426a8410 FUN_1426a8410 body=74 status=ok
// SIG undefined FUN_1426a8410(void)

void FUN_1426a8410(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 8);
  FUN_1419e0a40(param_2,param_1 + 0xc);
  FUN_1419e0a40(param_2,param_1 + 0x18);
  FUN_1419e0b60(param_2,param_1 + 0x1e);
  return;
}



// FUNCTION 1426a8460 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_1421e3710(param_2,param_1);
  return;
}



// FUNCTION 1426a8470 FUN_1426a8470 body=51 status=ok
// SIG undefined FUN_1426a8470(void)

void FUN_1426a8470(longlong param_1,longlong *param_2)

{
  FUN_141763960();
  if ((*(byte *)(param_2 + 5) & 3) == 0) {
    (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x30);
  }
  return;
}



// FUNCTION 1426a84b0 FUN_1426a84b0 body=277 status=ok
// SIG undefined FUN_1426a84b0(void)

void FUN_1426a84b0(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  char local_res10 [8];
  undefined8 local_res18;
  undefined2 *local_18;
  int local_10;
  
  FUN_141763960();
  local_res10[0] = param_2[0xe] != 0;
  (**(code **)(*param_2 + 8))(param_2,local_res10);
  if (local_res10[0] == '\0') {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      return;
    }
    local_res18 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_res18,&local_18);
    puVar1 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar1 = local_18;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x51,
               L"This platform requires cooked packages, and this SubUV animation does not contain cooked data %s."
               ,puVar1);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res18 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_res18,&local_18);
    puVar1 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar1 = local_18;
    }
    FDebug::AssertFailed
              (&DAT_145157a5f,"Unknown",0x51,
               L"This platform requires cooked packages, and this SubUV animation does not contain cooked data %s."
               ,puVar1);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_res10[0] == '\0') {
      return;
    }
  }
  FUN_1421e3710(param_2,param_1 + 0x40);
  return;
}



// FUNCTION 1426a85d0 FUN_1426a85d0 body=30 status=ok
// SIG undefined FUN_1426a85d0(void)

void FUN_1426a85d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1426ea8d0(param_1,param_2,0);
  FCollisionResponse::UpdateArrayFromResponseContainer(param_1);
  return;
}



// FUNCTION 1426a85f0 FUN_1426a85f0 body=344 status=ok
// SIG undefined FUN_1426a85f0(void)

void FUN_1426a85f0(longlong param_1,float *param_2,char param_3)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  plVar3 = *(longlong **)(param_1 + 0x110);
  plVar5 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar5 != (longlong *)0x0) {
    if (plVar5 == plVar3) {
      sVar2 = *(short *)(param_1 + 6);
    }
    else {
      sVar2 = *(short *)(param_1 + 8);
    }
    plVar3 = (longlong *)FUN_1426e2550((int)sVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x358))
                (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xf6
                );
    }
    cVar1 = (**(code **)(*plVar5 + 0x20))(plVar5,"PxRigidBody");
    plVar4 = (longlong *)0x0;
    if (cVar1 != '\0') {
      plVar4 = plVar5;
    }
    if ((plVar4 != (longlong *)0x0) &&
       (cVar1 = IsRigidBodyKinematic_AssumesLocked(plVar4), cVar1 == '\0')) {
      local_28 = *param_2;
      local_24 = param_2[1];
      local_20 = param_2[2];
      if (param_3 != '\0') {
        (**(code **)(*plVar4 + 0x138))(plVar4,&local_18);
        local_28 = local_28 + local_18;
        local_24 = local_24 + local_14;
        local_20 = local_20 + local_10;
      }
      (**(code **)(*plVar4 + 0x140))(plVar4,&local_28,1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x360))(plVar3);
    }
  }
  return;
}



// FUNCTION 1426a8750 FUN_1426a8750 body=127 status=ok
// SIG undefined FUN_1426a8750(void)

void FUN_1426a8750(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_142627a50(param_1,*(undefined8 *)(param_1 + 600));
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x75) = param_2;
    FWeakObjectPtr::operator=(lVar1 + 0x44,param_3);
    FWeakObjectPtr::operator=(lVar1 + 0x58,param_4);
    *(undefined8 *)(lVar1 + 0x50) = param_5;
    *(undefined8 *)(lVar1 + 0x38) = *param_6;
    *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_6 + 1);
  }
  return;
}



// FUNCTION 1426a87d0 FUN_1426a87d0 body=44 status=ok
// SIG undefined FUN_1426a87d0(void)

void FUN_1426a87d0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x1b0))(param_1,1,0,0,0,param_2);
  return;
}



// FUNCTION 1426a8800 FUN_1426a8800 body=48 status=ok
// SIG undefined FUN_1426a8800(void)

void FUN_1426a8800(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142627a50(param_1,*(undefined8 *)(param_1 + 600));
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x70) = param_2;
    *(undefined1 *)(lVar1 + 0x77) = 1;
  }
  return;
}



// FUNCTION 1426a8830 FUN_1426a8830 body=51 status=ok
// SIG undefined FUN_1426a8830(void)

void FUN_1426a8830(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142627a50(param_1,*(undefined8 *)(param_1 + 600));
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar2 + 100) = *param_2;
    *(undefined4 *)(lVar2 + 0x6c) = uVar1;
    *(undefined1 *)(lVar2 + 0x76) = 1;
  }
  return;
}



// FUNCTION 1426a8870 FUN_1426a8870 body=145 status=ok
// SIG undefined FUN_1426a8870(void)

void FUN_1426a8870(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_142627a50(param_1,*(undefined8 *)(param_1 + 600));
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xbd) = param_2;
    FWeakObjectPtr::operator=(lVar1 + 0x8c,param_3);
    FWeakObjectPtr::operator=(lVar1 + 0xa0,param_4);
    *(undefined8 *)(lVar1 + 0x98) = param_5;
    *(undefined8 *)(lVar1 + 0x80) = *param_6;
    *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(param_6 + 1);
  }
  return;
}



// FUNCTION 1426a8910 FUN_1426a8910 body=44 status=ok
// SIG undefined FUN_1426a8910(void)

void FUN_1426a8910(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x1b8))(param_1,1,0,0,0,param_2);
  return;
}



// FUNCTION 1426a8940 FUN_1426a8940 body=54 status=ok
// SIG undefined FUN_1426a8940(void)

void FUN_1426a8940(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142627a50(param_1,*(undefined8 *)(param_1 + 600));
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0xb8) = param_2;
    *(undefined1 *)(lVar1 + 0xbf) = 1;
  }
  return;
}



// FUNCTION 1426a8980 FUN_1426a8980 body=60 status=ok
// SIG undefined FUN_1426a8980(void)

void FUN_1426a8980(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_142627a50(param_1,*(undefined8 *)(param_1 + 600));
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar2 + 0xac) = *param_2;
    *(undefined4 *)(lVar2 + 0xb4) = uVar1;
    *(undefined1 *)(lVar2 + 0xbe) = 1;
  }
  return;
}



// FUNCTION 1426a89c0 FUN_1426a89c0 body=462 status=ok
// SIG undefined FUN_1426a89c0(void)

void FUN_1426a89c0(undefined1 *param_1,longlong param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined1 *local_88;
  undefined1 **ppuStack_80;
  undefined1 *local_78;
  undefined1 **ppuStack_70;
  undefined1 *local_68;
  undefined1 **local_60;
  undefined8 local_58;
  float local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  longlong local_30;
  undefined1 **local_28;
  longlong *local_20;
  
  local_res18[0] = param_3;
  cVar2 = FUN_140618120(param_2);
  if (cVar2 != '\0') {
    return;
  }
  cVar2 = FUN_140618120(param_2 + 0x10);
  if (cVar2 != '\0') {
    return;
  }
  cVar2 = FUN_140618120(param_2 + 0x20);
  if (cVar2 != '\0') {
    return;
  }
  local_res20 = *(longlong *)(param_1 + 0x110);
  if (local_res20 == 0) {
    local_res20 = *(longlong *)(param_1 + 0x118);
  }
  if (local_res20 == 0) {
    puVar1 = *(undefined1 **)(param_1 + 200);
    if (puVar1 != (undefined1 *)0x0) {
      local_60 = &local_88;
      local_58 = local_res10;
      local_res10[0] = 0;
      ppuStack_70 = &local_68;
      local_78 = &LAB_14268f6f0;
      local_88 = param_1;
      local_68 = puVar1;
      FUN_142693730(puVar1,&local_78);
      FUN_1426b01e0(puVar1);
      FUN_1426b1090(puVar1,param_1,param_2);
    }
  }
  else {
    U2PTransform(&local_68,param_2);
    uVar3 = _fpclass((double)(float)local_58);
    if ((uVar3 & 0x207) != 0) {
      return;
    }
    uVar3 = _fpclass((double)local_58._4_4_);
    if ((uVar3 & 0x207) != 0) {
      return;
    }
    uVar3 = _fpclass((double)local_50);
    if ((uVar3 & 0x207) != 0) {
      return;
    }
    cVar2 = physx::PxQuat::isFinite(&local_68);
    if (cVar2 == '\0') {
      return;
    }
    cVar2 = physx::PxQuat::isUnit(&local_68);
    if (cVar2 == '\0') {
      return;
    }
    local_40 = local_res10;
    local_res10[0] = 0;
    local_38 = local_res18;
    local_28 = &local_68;
    local_20 = &local_res20;
    ppuStack_80 = &local_48;
    local_88 = &LAB_14268f790;
    local_78 = &LAB_14268f790;
    ppuStack_70 = ppuStack_80;
    local_48 = param_1;
    local_30 = param_2;
    FUN_142693730(param_1,&local_78);
  }
  TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(&DAT_146534730,param_1,3);
  return;
}



// FUNCTION 1426a8b90 FUN_1426a8b90 body=89 status=ok
// SIG undefined FUN_1426a8b90(void)

void FUN_1426a8b90(longlong *param_1,byte param_2,char param_3)

{
  if (((*(uint *)(param_1 + 0x8c) >> 3 & 1) == (uint)param_2) && (param_3 == '\0')) {
    return;
  }
  *(uint *)(param_1 + 0x8c) = (uint)param_2 * 8 | *(uint *)(param_1 + 0x8c) & 0xfffffff7;
  (**(code **)(*param_1 + 0x750))(param_1);
  FUN_142252c90(param_1,1);
  return;
}



// FUNCTION 1426a8bf0 FUN_1426a8bf0 body=170 status=ok
// SIG undefined FUN_1426a8bf0(void)

void FUN_1426a8bf0(longlong param_1,uint param_2,char param_3,char param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  if (bVar1 != param_2) {
    *(undefined8 *)(param_1 + 0x20) = DAT_146aefc50;
    FWeakObjectPtr::operator=(&local_res8,0);
    *(undefined4 *)(param_1 + 0x60) = local_res8;
    *(undefined4 *)(param_1 + 100) = local_resc;
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfb;
    *(char *)(param_1 + 0xc) = (char)param_2;
    if (param_3 != '\0') {
      FUN_1426b0480(param_1);
    }
    if (((byte)(bVar1 - 2) < 2 != param_2 - 2 < 2) && (param_4 != '\0')) {
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x138);
      if (lVar2 != 0) {
        FUN_14234b040(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 1426a8ca0 FUN_1426a8ca0 body=155 status=ok
// SIG undefined FUN_1426a8ca0(void)

void FUN_1426a8ca0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((*(byte *)(param_1 + 0x13) & 4) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x60,1);
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x160);
    }
    if (lVar2 == param_2) goto LAB_1426a8d11;
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x60) = local_res8;
  *(undefined4 *)(param_1 + 100) = local_resc;
  *(longlong *)(param_1 + 0x20) = param_2;
  FUN_14269d670(param_1,0);
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfb;
LAB_1426a8d11:
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x60) = local_res8;
  *(undefined4 *)(param_1 + 100) = local_resc;
  return;
}



// FUNCTION 1426a8d40 FUN_1426a8d40 body=49 status=ok
// SIG undefined FUN_1426a8d40(void)

void FUN_1426a8d40(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x60) = local_res8;
  *(undefined4 *)(param_1 + 100) = local_resc;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 4;
  return;
}



// FUNCTION 1426a8d80 FUN_1426a8d80 body=56 status=ok
// SIG undefined FUN_1426a8d80(void)

void FUN_1426a8d80(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 != '\0') {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    FCollisionResponse::UpdateArrayFromResponseContainer();
    return;
  }
  FUN_1426db040();
  FCollisionResponse::UpdateArrayFromResponseContainer(param_1);
  return;
}



// FUNCTION 1426a8dc0 FUN_1426a8dc0 body=38 status=ok
// SIG undefined FUN_1426a8dc0(void)

void FUN_1426a8dc0(longlong param_1,byte param_2)

{
  if (param_2 != (*(byte *)(param_1 + 0x10) >> 2 & 1)) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfb | param_2 << 2;
    FUN_1426b0480();
    return;
  }
  return;
}



// FUNCTION 1426a8df0 SetDOFLock body=8 status=ok
// SIG undefined SetDOFLock(void)

void FBodyInstance::SetDOFLock(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf) = param_2;
  FUN_142690580();
  return;
}



// FUNCTION 1426a8e00 SetDynamicParameterBuffer body=44 status=ok
// SIG undefined SetDynamicParameterBuffer(void)

void FParticleSpriteVertexFactory::SetDynamicParameterBuffer
               (longlong param_1,undefined **param_2,undefined4 param_3,undefined8 param_4,
               byte param_5)

{
  if (param_2 == (undefined **)0x0) {
    param_2 = &PTR_PTR_146534748;
    param_3 = 0;
  }
  *(undefined ***)(param_1 + ((ulonglong)param_5 + 3) * 0x18) = param_2;
  *(undefined4 *)(param_1 + 0xc + ((ulonglong)param_5 + 3) * 0x18) = param_3;
  return;
}



// FUNCTION 1426a8e30 FUN_1426a8e30 body=458 status=ok
// SIG undefined FUN_1426a8e30(void)

void FUN_1426a8e30(longlong param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte local_res8 [8];
  byte local_res10 [8];
  
  if ((*(byte *)(param_1 + 0x10) >> 5 & 1) != param_2) {
    plVar4 = *(longlong **)(param_1 + 0x110);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xdf | param_2 << 5;
    plVar6 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      plVar6 = *(longlong **)(param_1 + 0x118);
    }
    if (plVar6 != (longlong *)0x0) {
      if (plVar6 == plVar4) {
        sVar3 = *(short *)(param_1 + 6);
      }
      else {
        sVar3 = *(short *)(param_1 + 8);
      }
      plVar4 = (longlong *)FUN_1426e2550((int)sVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x358))
                  (plVar4,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0xf6);
      }
      cVar2 = (**(code **)(*plVar6 + 0x20))(plVar6,"PxRigidBody");
      plVar7 = (longlong *)0x0;
      if (cVar2 != '\0') {
        plVar7 = plVar6;
      }
      if (plVar7 != (longlong *)0x0) {
        bVar1 = *(byte *)(param_1 + 0x10);
        (**(code **)(*plVar7 + 0x60))(plVar7,local_res10);
        if ((~(bVar1 >> 5) & 1) == 0) {
          local_res8[0] = local_res10[0] & 0xfd;
        }
        else {
          local_res8[0] = local_res10[0] | 2;
        }
        local_res10[0] = local_res8[0];
        (**(code **)(*plVar7 + 0x58))(plVar7,local_res8);
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x360))(plVar4);
      }
    }
    if ((*(byte *)(param_1 + 0x10) & 0x20) != 0) {
      plVar4 = *(longlong **)(param_1 + 0x110);
      plVar6 = plVar4;
      if (plVar4 == (longlong *)0x0) {
        plVar6 = *(longlong **)(param_1 + 0x118);
      }
      if (plVar6 != (longlong *)0x0) {
        if (plVar6 == plVar4) {
          sVar3 = *(short *)(param_1 + 6);
        }
        else {
          sVar3 = *(short *)(param_1 + 8);
        }
        plVar4 = (longlong *)FUN_1426e2550((int)sVar3);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x358))
                    (plVar4,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                     0x136);
        }
        plVar7 = (longlong *)0x0;
        if ((short)plVar6[1] == 6) {
          plVar7 = plVar6;
        }
        if (((plVar7 != (longlong *)0x0) &&
            (lVar5 = (**(code **)(*plVar7 + 0x30))(plVar7), lVar5 != 0)) &&
           (cVar2 = IsRigidBodyKinematic_AssumesLocked(plVar7), cVar2 == '\0')) {
          (**(code **)(*plVar7 + 0x240))(plVar7);
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x360))(plVar4);
        }
      }
    }
  }
  return;
}



// FUNCTION 1426a9000 FUN_1426a9000 body=265 status=ok
// SIG undefined FUN_1426a9000(void)

void FUN_1426a9000(longlong param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  byte local_res8 [8];
  byte local_res10 [8];
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if ((bVar1 & 1) != param_2) {
    *(byte *)(param_1 + 0x11) = (bVar1 ^ param_2) & 1 ^ bVar1;
    plVar4 = *(longlong **)(param_1 + 0x110);
    plVar6 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      plVar6 = *(longlong **)(param_1 + 0x118);
    }
    if (plVar6 != (longlong *)0x0) {
      if (plVar6 == plVar4) {
        sVar3 = *(short *)(param_1 + 6);
      }
      else {
        sVar3 = *(short *)(param_1 + 8);
      }
      plVar4 = (longlong *)FUN_1426e2550((int)sVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x358))
                  (plVar4,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0xf6);
      }
      cVar2 = (**(code **)(*plVar6 + 0x20))(plVar6,"PxRigidBody");
      plVar5 = (longlong *)0x0;
      if (cVar2 != '\0') {
        plVar5 = plVar6;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x60))(plVar5,local_res10);
        if (param_2 == 0) {
          local_res8[0] = local_res10[0] & 0xfb;
        }
        else {
          local_res8[0] = local_res10[0] | 4;
        }
        local_res10[0] = local_res8[0];
        (**(code **)(*plVar5 + 0x58))(plVar5,local_res8);
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x360))(plVar4);
      }
    }
  }
  return;
}



// FUNCTION 1426a9110 SetInstanceBuffer body=28 status=ok
// SIG undefined SetInstanceBuffer(void)

void FParticleSpriteVertexFactory::SetInstanceBuffer
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               byte param_5)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)param_5 + 2;
  *(undefined8 *)(param_1 + lVar1 * 0x18) = param_2;
  *(undefined4 *)(param_1 + 8 + lVar1 * 0x18) = param_4;
  *(undefined4 *)(param_1 + 0xc + lVar1 * 0x18) = param_3;
  return;
}



// FUNCTION 1426a9130 SetInstanceNotifyRBCollision body=14 status=ok
// SIG undefined SetInstanceNotifyRBCollision(void)

void FBodyInstance::SetInstanceNotifyRBCollision(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | param_2 * '\x02';
  FUN_1426b0480();
  return;
}



// FUNCTION 1426a9140 FUN_1426a9140 body=736 status=ok
// SIG undefined FUN_1426a9140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426a9140(longlong param_1,char param_2,char param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  uint uVar8;
  byte bVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined1 auStack_b8 [32];
  char local_98;
  byte local_97;
  undefined1 local_96 [6];
  longlong local_90;
  undefined8 local_88;
  char *local_80;
  byte *local_78;
  longlong local_70;
  undefined1 local_68 [48];
  ulonglong local_38;
  ulonglong uVar9;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar9 = 0;
  if (((param_2 != '\0') &&
      (plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x138), plVar2 != (longlong *)0x0)) &&
     ((*(byte *)(plVar2 + 0x17) & 1) != 0)) {
    local_90 = 0;
    lVar3 = (**(code **)(*plVar2 + 0x6d0))(plVar2,0,1);
    if ((lVar3 == param_1) || (cVar1 = FUN_142390bd0(plVar2), cVar1 != '\0')) {
      if ((plVar2[0x32] != 0) && (*(char *)(param_1 + 0x191) == '\0')) {
        (**(code **)(*plVar2 + 0x418))(plVar2,&DAT_146532190);
      }
      if (((*(byte *)(param_1 + 0x10) & 8) == 0) &&
         (plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x138), plVar2 != (longlong *)0x0)) {
        local_90 = 0;
        local_88 = 0;
        local_80 = (char *)0x0;
        local_78 = (byte *)0x0;
        (**(code **)(*plVar2 + 0x720))(plVar2,&local_90,&local_80,1);
        uVar11 = uVar9;
        if (0 < (int)local_88) {
          do {
            lVar3 = *(longlong *)(uVar11 + local_90);
            if (lVar3 != param_1) {
              lVar4 = FWeakObjectPtr::Get(lVar3 + 0x138);
              lVar5 = 0;
              if (lVar4 != 0) {
                lVar5 = *(longlong *)(lVar4 + 0x118);
              }
              if ((((lVar5 == 0) || (*(char *)(lVar5 + 0x93) < '\0')) &&
                  ((byte)(*(char *)(lVar3 + 0xc) - 2U) < 2)) &&
                 (plVar2 = (longlong *)FWeakObjectPtr::Get(lVar3 + 0x138), plVar2 != (longlong *)0x0
                 )) {
                uVar6 = (**(code **)(*plVar2 + 0x420))
                                  (plVar2,local_68,
                                   *(undefined8 *)(local_80 + (longlong)(int)uVar9 * 8),0);
                FUN_1426b1090(param_1,lVar3,uVar6);
              }
            }
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
            uVar11 = uVar11 + 8;
          } while ((int)uVar8 < (int)local_88);
        }
        if (local_80 != (char *)0x0) {
          FMemory::Free();
        }
        if (local_90 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  bVar10 = param_2 << 3;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf7 | bVar10;
  if (param_3 == '\0') {
    if ((bVar10 & 8) == 0) {
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
    }
  }
  if (((bVar10 & 8) != 0) && (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x140), cVar1 != '\0')) {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x140);
    pcVar7 = (char *)FUN_1426c5d50(uVar6,local_96);
    if ((*pcVar7 != '\x03') &&
       ((*(longlong *)(param_1 + 0x110) != 0 || (*(longlong *)(param_1 + 0x118) != 0)))) {
      local_97 = 1;
      goto LAB_1426a93ac;
    }
  }
  local_97 = 0;
LAB_1426a93ac:
  local_80 = &local_98;
  local_98 = '\0';
  local_78 = &local_97;
  local_70 = param_1;
  FUN_1426846e0(param_1,&local_80);
  if (local_98 != '\0') {
    if (local_97 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0xf4) = uVar12;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf7;
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | (local_97 & 1) << 3;
  }
  return;
}



// FUNCTION 1426a9420 FUN_1426a9420 body=344 status=ok
// SIG undefined FUN_1426a9420(void)

void FUN_1426a9420(longlong param_1,float *param_2,char param_3)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  plVar3 = *(longlong **)(param_1 + 0x110);
  plVar5 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar5 != (longlong *)0x0) {
    if (plVar5 == plVar3) {
      sVar2 = *(short *)(param_1 + 6);
    }
    else {
      sVar2 = *(short *)(param_1 + 8);
    }
    plVar3 = (longlong *)FUN_1426e2550((int)sVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x358))
                (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",0xf6
                );
    }
    cVar1 = (**(code **)(*plVar5 + 0x20))(plVar5,"PxRigidBody");
    plVar4 = (longlong *)0x0;
    if (cVar1 != '\0') {
      plVar4 = plVar5;
    }
    if ((plVar4 != (longlong *)0x0) &&
       (cVar1 = IsRigidBodyKinematic_AssumesLocked(plVar4), cVar1 == '\0')) {
      local_28 = *param_2;
      local_24 = param_2[1];
      local_20 = param_2[2];
      if (param_3 != '\0') {
        (**(code **)(*plVar4 + 0x128))(plVar4,&local_18);
        local_28 = local_28 + local_18;
        local_24 = local_24 + local_14;
        local_20 = local_20 + local_10;
      }
      (**(code **)(*plVar4 + 0x130))(plVar4,&local_28,1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x360))(plVar3);
    }
  }
  return;
}



// FUNCTION 1426a9580 FUN_1426a9580 body=85 status=ok
// SIG undefined FUN_1426a9580(void)

void FUN_1426a9580(longlong param_1,char param_2)

{
  char local_res10 [24];
  longlong local_28;
  char *local_20;
  undefined1 *local_18;
  longlong *plStack_10;
  
  if (*(char *)(param_1 + 0xb) != param_2) {
    local_20 = local_res10;
    plStack_10 = &local_28;
    local_18 = &LAB_14268f780;
    local_res10[0] = param_2;
    local_28 = param_1;
    FUN_142693730(0x4268f780,&local_18);
    *(char *)(param_1 + 0xb) = local_res10[0];
  }
  return;
}



// FUNCTION 1426a95e0 SetMassOverride body=18 status=ok
// SIG undefined SetMassOverride(void)

void FBodyInstance::SetMassOverride(longlong param_1,undefined4 param_2,char param_3)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xef;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | param_3 << 4;
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}



// FUNCTION 1426a9600 SetMassScale body=13 status=ok
// SIG undefined SetMassScale(void)

void FBodyInstance::SetMassScale(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x88) = param_2;
  FUN_1426b0300();
  return;
}



// FUNCTION 1426a9610 FUN_1426a9610 body=322 status=ok
// SIG undefined FUN_1426a9610(void)

void FUN_1426a9610(longlong param_1,float param_2,char param_3,char param_4)

{
  bool bVar1;
  short sVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x110);
  bVar1 = false;
  fVar7 = param_2 * 57.295776;
  plVar4 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar4 != (longlong *)0x0) {
    if (plVar4 == plVar3) {
      sVar2 = *(short *)(param_1 + 6);
    }
    else {
      sVar2 = *(short *)(param_1 + 8);
    }
    plVar3 = (longlong *)FUN_1426e2550((int)sVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x358))
                (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                 0x136);
    }
    plVar5 = (longlong *)0x0;
    if ((short)plVar4[1] == 6) {
      plVar5 = plVar4;
    }
    if (plVar5 != (longlong *)0x0) {
      if (param_3 != '\0') {
        fVar6 = (float)(**(code **)(*plVar5 + 0x1e8))(plVar5);
        param_2 = param_2 + fVar6;
        fVar7 = fVar7 + fVar6 * 57.295776;
      }
      (**(code **)(*plVar5 + 0x1e0))(plVar5,param_2);
      *(float *)(param_1 + 0xe8) = fVar7;
      bVar1 = true;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x360))(plVar3);
    }
    if (bVar1) goto LAB_1426a9725;
  }
  *(float *)(param_1 + 0xe8) = fVar7;
LAB_1426a9725:
  if (param_4 != '\0') {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 4;
  }
  return;
}



// FUNCTION 1426a9760 FUN_1426a9760 body=444 status=ok
// SIG undefined FUN_1426a9760(void)

void FUN_1426a9760(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  ulonglong _Size;
  
  lVar3 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  uVar6 = (**(code **)(**(longlong **)
                         (*(longlong *)(CONCAT44(param_5._4_4_,(undefined4)param_5) + 0x10) + 0x20)
                      + 0x2e0))();
  if (*(short *)(param_1 + 10) != 0) {
    uVar1 = *(ushort *)(param_1 + 8);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d8e600;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  param_5._0_4_ = *(undefined4 *)(param_4 + 0x6a0);
  uVar5 = (uint)*(ushort *)(param_1 + 0x10);
  if (3 < *(ushort *)(param_1 + 0x10)) {
    uVar5 = 4;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar2 = *(ushort *)(param_1 + 0xc);
    uVar7 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,&param_5,_Size);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar1;
    *puVar9 = &PTR_LAB_143f594b0;
    puVar9[2] = uVar4;
    puVar9[3] = _Dst;
    *(uint *)(puVar9 + 4) = (uint)uVar2;
    *(uint *)(puVar9 + 5) = uVar5;
  }
  return;
}



// FUNCTION 1426a9920 FUN_1426a9920 body=439 status=ok
// SIG undefined FUN_1426a9920(void)

void FUN_1426a9920(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  
  lVar6 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar2 = *(undefined8 *)(lVar6 + 0x38);
  local_res8[0] = *(undefined4 *)(param_4 + 0x688);
  FUN_1404986d0(param_2,uVar2,param_1 + 0x18,local_res8,0);
  lVar6 = DAT_1465347b8;
  if (*(longlong *)(param_4 + 0x690) != 0) {
    lVar6 = *(longlong *)(param_4 + 0x690);
  }
  if (*(short *)(param_1 + 0x20) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1e);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144165218;
    puVar5[2] = uVar2;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = lVar6;
  }
  uVar4 = (**(code **)(**(longlong **)
                         (*(longlong *)(CONCAT44(param_5._4_4_,(undefined4)param_5) + 0x10) + 0x20)
                      + 0x2e0))();
  if (*(short *)(param_1 + 10) != 0) {
    uVar1 = *(ushort *)(param_1 + 8);
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar5 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar5 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar3;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar5;
    *(undefined8 **)(param_2 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144165218;
    puVar5[2] = uVar2;
    *(uint *)(puVar5 + 3) = (uint)uVar1;
    puVar5[4] = uVar4;
  }
  param_5._0_4_ = *(undefined4 *)(param_4 + 0x6a0);
  FUN_1404986d0(param_2,uVar2,param_1 + 0xc,&param_5,0);
  return;
}



// FUNCTION 1426a9ae0 FUN_1426a9ae0 body=77 status=ok
// SIG undefined FUN_1426a9ae0(void)

void FUN_1426a9ae0(longlong param_1,undefined1 param_2)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(undefined8 *)(param_1 + 0x20) = DAT_146aefc50;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x60) = local_res8;
  *(undefined4 *)(param_1 + 100) = local_resc;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfb;
  *(undefined1 *)(param_1 + 10) = param_2;
  FUN_1426b0480(param_1);
  return;
}



// FUNCTION 1426a9b30 FUN_1426a9b30 body=167 status=ok
// SIG undefined FUN_1426a9b30(void)

void FUN_1426a9b30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res8;
  undefined1 *local_48;
  longlong *plStack_40;
  longlong local_38 [2];
  longlong local_28;
  undefined8 *local_20;
  longlong *local_18;
  
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  lVar1 = FUN_142698570();
  FUN_1426963d0(param_1,local_38);
  if (lVar1 == 0) {
    local_res8 = 0;
  }
  else {
    local_res8 = FUN_1426c86a0(lVar1);
  }
  local_20 = &local_res8;
  local_18 = local_38;
  plStack_40 = &local_28;
  local_48 = &LAB_14268f700;
  local_28 = param_1;
  FUN_142693730(param_1,&local_48);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  FUN_1426b0300(param_1);
  return;
}



// FUNCTION 1426a9be0 FUN_1426a9be0 body=109 status=ok
// SIG undefined FUN_1426a9be0(void)

void FUN_1426a9be0(longlong param_1,float param_2)

{
  float fVar1;
  
  if ((*(byte *)(param_1 + 0x460) & 0x20) != 0) {
    fVar1 = (float)(int)(param_2 * 0.0027777778) * 360.0;
    if (ABS(param_2) < ABS(fVar1)) {
      fVar1 = param_2;
    }
    param_2 = param_2 - fVar1;
    if (param_2 < 0.0) {
      param_2 = param_2 + 360.0;
    }
    *(char *)(param_1 + 0x480) = (char)(int)(param_2 * 0.7083333);
  }
  return;
}



// FUNCTION 1426a9c50 SetResponse body=356 status=ok
// SIG undefined SetResponse(void)

void FCollisionResponse::SetResponse(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong local_res8;
  
  if ((byte)(&DAT_146aefe48)[param_2] == param_3) {
    uVar4 = UCollisionProfile::Get();
    UCollisionProfile::ReturnChannelNameFromContainerIndex(uVar4,&local_res8,param_2);
    iVar6 = 0;
    while( true ) {
      if ((iVar6 < 0) || (iVar1 = *(int *)(param_1 + 0x28), iVar1 <= iVar6)) goto LAB_1426a9d98;
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (local_res8 == *(longlong *)(lVar2 + (longlong)iVar6 * 0x10)) break;
      iVar6 = iVar6 + 1;
    }
    iVar3 = (iVar1 - iVar6) + -1;
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar6 * 0x10 + lVar2),
                 (void *)((longlong)(iVar6 + 1) * 0x10 + lVar2),(longlong)iVar3 << 4);
      iVar1 = *(int *)(param_1 + 0x28);
    }
    *(int *)(param_1 + 0x28) = iVar1 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x20);
  }
  else {
    uVar4 = UCollisionProfile::Get();
    UCollisionProfile::ReturnChannelNameFromContainerIndex(uVar4,&local_res8,param_2);
    for (iVar6 = 0; (-1 < iVar6 && (iVar6 < *(int *)(param_1 + 0x28))); iVar6 = iVar6 + 1) {
      if (local_res8 == *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x10)) {
        *(char *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)iVar6 * 0x10) = (char)param_3;
        goto LAB_1426a9d98;
      }
    }
    iVar6 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar6 + 1;
    if (*(int *)(param_1 + 0x2c) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x20,iVar6);
    }
    plVar5 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x20));
    *plVar5 = local_res8;
    *(char *)(plVar5 + 1) = (char)param_3;
  }
LAB_1426a9d98:
  FCollisionResponseContainer::SetResponse(param_1,param_2,param_3);
  return;
}



// FUNCTION 1426a9dc0 FUN_1426a9dc0 body=107 status=ok
// SIG undefined FUN_1426a9dc0(void)

void FUN_1426a9dc0(longlong param_1,undefined4 param_2)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(undefined8 *)(param_1 + 0x20) = DAT_146aefc50;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x60) = local_res8;
  *(undefined4 *)(param_1 + 100) = local_resc;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfb;
  FUN_1426ea8d0(param_1 + 0x28,param_2,0);
  FCollisionResponse::UpdateArrayFromResponseContainer(param_1 + 0x28);
  FUN_1426b0480(param_1);
  return;
}



// FUNCTION 1426a9e30 FUN_1426a9e30 body=101 status=ok
// SIG undefined FUN_1426a9e30(void)

void FUN_1426a9e30(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(undefined8 *)(param_1 + 0x20) = DAT_146aefc50;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x60) = local_res8;
  *(undefined4 *)(param_1 + 100) = local_resc;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfb;
  FCollisionResponse::SetResponse(param_1 + 0x28,param_2,param_3);
  FUN_1426b0480(param_1);
  return;
}



// FUNCTION 1426a9ea0 FUN_1426a9ea0 body=142 status=ok
// SIG undefined FUN_1426a9ea0(void)

void FUN_1426a9ea0(longlong param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(undefined8 *)(param_1 + 0x20) = DAT_146aefc50;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x60) = local_res8;
  *(undefined4 *)(param_1 + 100) = local_resc;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfb;
  if (param_3 == '\0') {
    FUN_1426db040(param_1 + 0x28,param_2);
  }
  else {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(param_1 + 0x28) = *param_2;
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    uVar4 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
  }
  FCollisionResponse::UpdateArrayFromResponseContainer(param_1 + 0x28);
  FUN_1426b0480(param_1);
  return;
}



// FUNCTION 1426a9f30 FUN_1426a9f30 body=778 status=ok
// SIG undefined FUN_1426a9f30(void)

void FUN_1426a9f30(longlong param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  byte local_res10 [16];
  byte local_res20 [8];
  byte local_48 [8];
  undefined1 local_40 [12];
  uint local_34;
  
  (**(code **)(**(longlong **)(param_2 + 0x10) + 0x108))(*(longlong **)(param_2 + 0x10),local_res10)
  ;
  plVar2 = *(longlong **)(param_2 + 0x10);
  (**(code **)(*plVar2 + 0xa0))(plVar2,local_40);
  pbVar7 = (byte *)(**(code **)(*plVar2 + 0x108))(plVar2,local_res20);
  if (((*pbVar7 & 4) == 0) && ((local_34 & 0x100) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    local_res10[0] = local_res10[0] & 0xfd;
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      return;
    }
    plVar2 = *(longlong **)(param_2 + 0x18);
    cVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,"PxRigidBody");
    plVar9 = (longlong *)0x0;
    if (cVar5 != '\0') {
      plVar9 = plVar2;
    }
    if (plVar9 == (longlong *)0x0) {
      return;
    }
    pbVar7 = (byte *)(**(code **)(*plVar9 + 0x178))(plVar9,local_res20);
    bVar1 = *pbVar7;
    (**(code **)(*plVar9 + 0x168))(plVar9,4,bVar1 & 1 ^ 1);
    (**(code **)(*plVar9 + 0x168))(plVar9,0x20,bVar1 & 1);
    return;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    bVar1 = local_res10[0];
    if (((local_res10[0] & 4) == 0) && (bVar1 = local_res10[0] & 0xfe, (local_res10[0] & 4) == 0)) {
      bVar1 = local_res10[0] & 0xfc;
    }
  }
  else {
    if ((bVar1 == 2) || (bVar1 == 3)) {
      bVar10 = 1;
    }
    else {
      bVar10 = 0;
    }
    if (((bVar1 - 1 & 0xfffffffd) == 0) && ((param_2[1] == 0 || (param_2[2] != 0)))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((local_res10[0] & 4) == 0) {
      if (bVar4) {
        local_res10[0] = local_res10[0] | 2;
      }
      else {
        local_res10[0] = local_res10[0] & 0xfd;
      }
    }
    iVar6 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))();
    if (iVar6 == 5) {
      if ((bVar10 == 0) || (param_2[3] == 0)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((local_res10[0] & 4) == 0) {
        if (bVar4) {
          local_res10[0] = local_res10[0] | 1;
        }
        else {
          local_res10[0] = local_res10[0] & 0xfe;
        }
      }
      if (*(longlong *)(param_2 + 8) != 0) {
        lVar8 = UMovieScene3DTransformSection::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x10) + 0x90) <
             *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        bVar1 = local_res10[0];
        if (bVar4) goto LAB_1426aa1c2;
      }
      bVar1 = local_res10[0];
      if ((local_res10[0] & 4) == 0) {
        bVar1 = local_res10[0] & 0xf7;
      }
    }
    else {
      if (((local_res10[0] & 1) != bVar10) && (*param_3 = 1, (local_res10[0] & 4) == 0)) {
        if (bVar10 == 0) {
          local_res10[0] = local_res10[0] & 0xfe;
        }
        else {
          local_res10[0] = local_res10[0] | 1;
        }
      }
      plVar2 = *(longlong **)(param_2 + 0x18);
      cVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,"PxRigidBody");
      plVar9 = (longlong *)0x0;
      if (cVar5 != '\0') {
        plVar9 = plVar2;
      }
      bVar1 = local_res10[0];
      if (plVar9 != (longlong *)0x0) {
        if (((bVar10 == 0) || (param_2[1] != 0)) || ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        (**(code **)(*plVar9 + 0x178))(plVar9,local_res20);
        local_48[0] = local_res20[0] & 0xdb;
        if (bVar4) {
          if ((local_res20[0] & 1) == 0) {
            local_48[0] = local_48[0] | 4;
          }
          else {
            local_48[0] = local_48[0] | 0x20;
          }
        }
        local_res20[0] = local_48[0];
        (**(code **)(*plVar9 + 0x170))(plVar9,local_48);
        bVar1 = local_res10[0];
      }
    }
  }
LAB_1426aa1c2:
  local_res10[0] = bVar1;
  plVar2 = *(longlong **)(param_2 + 0x10);
  piVar3 = (int *)plVar2[2];
  if (((piVar3 != (int *)0x0) && (*piVar3 == 6)) && (*(longlong *)(piVar3 + 2) != 0)) {
    cVar5 = *(char *)(*(longlong *)(piVar3 + 2) + 0x30);
    if (cVar5 == '\x02') {
      if ((byte)(*param_2 - 2) < 2) {
        local_res10[0] = 1;
      }
      else {
        local_res10[0] = local_res10[0] & 0xfc;
      }
    }
    else if (cVar5 == '\x01') {
      if ((*param_2 - 1 & 0xfd) == 0) {
        local_res10[0] = 2;
      }
      else {
        local_res10[0] = local_res10[0] & 0xfd;
      }
      local_res10[0] = local_res10[0] & 0xfe;
    }
  }
  local_res20[0] = local_res10[0];
  (**(code **)(*plVar2 + 0x100))(plVar2,local_res20);
  return;
}



// FUNCTION 1426aa270 FUN_1426aa270 body=11 status=ok
// SIG undefined FUN_1426aa270(void)

void FUN_1426aa270(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf7;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | param_2 << 3;
  return;
}



// FUNCTION 1426aa280 FUN_1426aa280 body=79 status=ok
// SIG undefined FUN_1426aa280(void)

void FUN_1426aa280(longlong param_1,byte param_2)

{
  byte bVar1;
  byte local_res10 [24];
  longlong local_18;
  byte *local_10;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) != param_2) {
    *(byte *)(param_1 + 0x10) = (bVar1 ^ param_2) & 1 ^ bVar1;
    local_res10[0] = param_2;
    FUN_1426b0480(param_1);
    local_10 = local_res10;
    local_18 = param_1;
    FUN_142684520(param_1,&local_18);
  }
  return;
}



// FUNCTION 1426aa2d0 FUN_1426aa2d0 body=41 status=ok
// SIG undefined FUN_1426aa2d0(void)

void FUN_1426aa2d0(longlong param_1,undefined1 *param_2)

{
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 1;
  *(undefined1 *)(param_1 + 0xd0) = *param_2;
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xc);
  return;
}



// FUNCTION 1426aa300 FUN_1426aa300 body=596 status=ok
// SIG undefined FUN_1426aa300(void)

void FUN_1426aa300(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_res10;
  
  lVar5 = UParticleEmitter::GetLODLevel(*(undefined8 *)(param_1 + 0x10),0);
  iVar9 = 0;
  if (0 < *(int *)(lVar5 + 0x40)) {
    local_res10 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + local_res10);
      if (lVar2 != 0) {
        lVar6 = FUN_1429ce530();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          *(longlong *)(param_1 + 0x270) = lVar2;
          iVar8 = *(int *)(lVar5 + 0x88) + -1;
          if (-1 < iVar8) {
            lVar6 = (longlong)iVar8 * 8;
            lVar10 = (longlong)*(int *)(lVar5 + 0x88) << 3;
            lVar11 = lVar6;
            do {
              lVar3 = *(longlong *)(lVar5 + 0x80);
              if (*(longlong *)(lVar6 + lVar3) == lVar2) {
                iVar1 = *(int *)(lVar5 + 0x88);
                iVar7 = (iVar1 - iVar8) + -1;
                if (iVar7 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar11 + lVar3),(void *)(lVar10 + lVar3),(longlong)iVar7 << 3)
                  ;
                  iVar1 = *(int *)(lVar5 + 0x88);
                }
                *(int *)(lVar5 + 0x88) = iVar1 + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar5 + 0x80);
              }
              lVar10 = lVar10 + -8;
              lVar11 = lVar11 + -8;
              lVar6 = lVar6 + -8;
              iVar8 = iVar8 + -1;
            } while (-1 < iVar8);
          }
          iVar8 = *(int *)(lVar5 + 0x78) + -1;
          if (-1 < iVar8) {
            lVar6 = (longlong)iVar8 * 8;
            lVar10 = (longlong)*(int *)(lVar5 + 0x78) << 3;
            lVar11 = lVar6;
            do {
              lVar3 = *(longlong *)(lVar5 + 0x70);
              if (*(longlong *)(lVar6 + lVar3) == lVar2) {
                iVar1 = *(int *)(lVar5 + 0x78);
                iVar7 = (iVar1 - iVar8) + -1;
                if (iVar7 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar11 + lVar3),(void *)(lVar10 + lVar3),(longlong)iVar7 << 3)
                  ;
                  iVar1 = *(int *)(lVar5 + 0x78);
                }
                *(int *)(lVar5 + 0x78) = iVar1 + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar5 + 0x70);
              }
              lVar10 = lVar10 + -8;
              lVar11 = lVar11 + -8;
              lVar6 = lVar6 + -8;
              iVar8 = iVar8 + -1;
            } while (-1 < iVar8);
          }
          iVar8 = *(int *)(lVar5 + 0x68) + -1;
          if (-1 < iVar8) {
            lVar6 = (longlong)iVar8 * 8;
            lVar10 = (longlong)*(int *)(lVar5 + 0x68) << 3;
            lVar11 = lVar6;
            do {
              lVar3 = *(longlong *)(lVar5 + 0x60);
              if (*(longlong *)(lVar6 + lVar3) == lVar2) {
                iVar1 = *(int *)(lVar5 + 0x68);
                iVar7 = (iVar1 - iVar8) + -1;
                if (iVar7 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(lVar11 + lVar3),(void *)(lVar10 + lVar3),(longlong)iVar7 << 3)
                  ;
                  iVar1 = *(int *)(lVar5 + 0x68);
                }
                *(int *)(lVar5 + 0x68) = iVar1 + -1;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar5 + 0x60);
              }
              lVar10 = lVar10 + -8;
              lVar11 = lVar11 + -8;
              lVar6 = lVar6 + -8;
              iVar8 = iVar8 + -1;
            } while (-1 < iVar8);
          }
        }
      }
      iVar9 = iVar9 + 1;
      local_res10 = local_res10 + 8;
    } while (iVar9 < *(int *)(lVar5 + 0x40));
  }
  return;
}



// FUNCTION 1426aa560 FUN_1426aa560 body=1303 status=ok
// SIG undefined FUN_1426aa560(void)

void FUN_1426aa560(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  int iVar14;
  longlong lVar15;
  int local_res10;
  int local_res18 [2];
  longlong local_res20;
  longlong local_68;
  
  lVar6 = UParticleEmitter::GetLODLevel(*(undefined8 *)(param_1 + 0x10),0);
  lVar2 = *(longlong *)(param_1 + 600);
  iVar14 = 0;
  local_res20 = lVar6;
  if (0 < *(int *)(lVar6 + 0x40)) {
    lVar15 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + lVar15);
      if (lVar9 != 0) {
        lVar7 = FUN_1429c5c30();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          *(longlong *)(param_1 + 600) = lVar9;
          break;
        }
      }
      iVar14 = iVar14 + 1;
      lVar15 = lVar15 + 8;
    } while (iVar14 < *(int *)(lVar6 + 0x40));
  }
  plVar8 = (longlong *)FUN_142627a50(param_1);
  local_res10 = 0;
  if (0 < *(int *)(lVar6 + 0x40)) {
    local_68 = 0;
    do {
      bVar3 = false;
      lVar15 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + local_68);
      if (lVar15 == 0) {
LAB_1426aa698:
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_1429ce530();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        lVar6 = lVar15;
        if (!bVar4) goto LAB_1426aa698;
      }
      if (lVar15 == 0) {
LAB_1426aa6da:
        lVar9 = 0;
      }
      else {
        lVar9 = UParticleModuleLocationSkelVertSurface::StaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        lVar9 = lVar15;
        if (!bVar4) goto LAB_1426aa6da;
      }
      if (lVar15 == 0) {
LAB_1426aa71d:
        lVar7 = 0;
      }
      else {
        lVar7 = ULevelStreamingAlwaysLoaded::StaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        lVar7 = lVar15;
        if (!bVar4) goto LAB_1426aa71d;
      }
      if (lVar15 == 0) {
LAB_1426aa760:
        lVar10 = 0;
      }
      else {
        lVar10 = ULevelStreamingAlwaysLoaded::StaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        lVar10 = lVar15;
        if (!bVar4) goto LAB_1426aa760;
      }
      if (lVar15 == 0) {
LAB_1426aa7a3:
        lVar11 = 0;
      }
      else {
        lVar11 = UEnvQueryTest_Random::StaticClass();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        lVar11 = lVar15;
        if (!bVar4) goto LAB_1426aa7a3;
      }
      if (lVar15 == 0) {
LAB_1426aa7e5:
        lVar12 = 0;
      }
      else {
        lVar12 = FUN_1429c8b80();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        lVar12 = lVar15;
        if (!bVar4) goto LAB_1426aa7e5;
      }
      if (lVar6 == 0) {
        if (lVar9 != 0) {
          lVar6 = *(longlong *)(param_1 + 0x10);
          *(longlong *)(param_1 + 0x278) = lVar9;
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(lVar6 + 0xb8,local_res18,lVar9);
          if (((local_res18[0] != -1) &&
              (lVar6 = *(longlong *)(lVar6 + 0xb8) + (longlong)local_res18[0] * 0x18, lVar6 != 0))
             && (puVar13 = (undefined4 *)(lVar6 + 8), puVar13 != (undefined4 *)0x0)) {
            *(undefined4 *)(param_1 + 0x280) = *puVar13;
          }
          goto LAB_1426aa85c;
        }
      }
      else {
        *(longlong *)(param_1 + 0x270) = lVar6;
LAB_1426aa85c:
        bVar3 = true;
      }
      lVar6 = local_res20;
      if ((lVar2 == 0) && (plVar8 != (longlong *)0x0)) {
        if (lVar7 == 0) {
          if (lVar10 == 0) {
            if (lVar11 == 0) {
              if (lVar12 != 0) {
                plVar8[3] = lVar12;
              }
            }
            else {
              plVar8[2] = lVar11;
            }
          }
          else {
            plVar8[1] = lVar10;
          }
        }
        else {
          *plVar8 = lVar7;
        }
      }
      if (bVar3) {
        iVar14 = *(int *)(local_res20 + 0x88) + -1;
        if (-1 < iVar14) {
          lVar9 = (longlong)iVar14 * 8;
          lVar10 = (longlong)*(int *)(local_res20 + 0x88) << 3;
          lVar7 = lVar9;
          do {
            lVar11 = *(longlong *)(lVar6 + 0x80);
            if (*(longlong *)(lVar11 + lVar9) == lVar15) {
              iVar1 = *(int *)(lVar6 + 0x88);
              iVar5 = (iVar1 - iVar14) + -1;
              if (iVar5 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar11 + lVar7),(void *)(lVar11 + lVar10),(longlong)iVar5 << 3);
                iVar1 = *(int *)(lVar6 + 0x88);
              }
              *(int *)(lVar6 + 0x88) = iVar1 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar6 + 0x80);
            }
            lVar10 = lVar10 + -8;
            lVar7 = lVar7 + -8;
            lVar9 = lVar9 + -8;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
        }
        iVar14 = *(int *)(lVar6 + 0x78) + -1;
        if (-1 < iVar14) {
          lVar9 = (longlong)iVar14 * 8;
          lVar10 = (longlong)*(int *)(lVar6 + 0x78) << 3;
          lVar7 = lVar9;
          do {
            lVar11 = *(longlong *)(lVar6 + 0x70);
            if (*(longlong *)(lVar11 + lVar9) == lVar15) {
              iVar1 = *(int *)(lVar6 + 0x78);
              iVar5 = (iVar1 - iVar14) + -1;
              if (iVar5 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar11 + lVar7),(void *)(lVar11 + lVar10),(longlong)iVar5 << 3);
                iVar1 = *(int *)(lVar6 + 0x78);
              }
              *(int *)(lVar6 + 0x78) = iVar1 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar6 + 0x70);
            }
            lVar10 = lVar10 + -8;
            lVar7 = lVar7 + -8;
            lVar9 = lVar9 + -8;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
        }
        iVar14 = *(int *)(lVar6 + 0x68) + -1;
        if (-1 < iVar14) {
          lVar9 = (longlong)iVar14 * 8;
          lVar10 = (longlong)*(int *)(lVar6 + 0x68) << 3;
          lVar7 = lVar9;
          do {
            lVar11 = *(longlong *)(lVar6 + 0x60);
            if (*(longlong *)(lVar11 + lVar9) == lVar15) {
              iVar1 = *(int *)(lVar6 + 0x68);
              iVar5 = (iVar1 - iVar14) + -1;
              if (iVar5 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar11 + lVar7),(void *)(lVar10 + lVar11),(longlong)iVar5 << 3);
                iVar1 = *(int *)(lVar6 + 0x68);
              }
              *(int *)(lVar6 + 0x68) = iVar1 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar6 + 0x60);
            }
            lVar10 = lVar10 + -8;
            lVar7 = lVar7 + -8;
            lVar9 = lVar9 + -8;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
        }
      }
      local_res10 = local_res10 + 1;
      local_68 = local_68 + 8;
    } while (local_res10 < *(int *)(lVar6 + 0x40));
  }
  return;
}



// FUNCTION 1426aaa80 ShouldCompilePermutation body=55 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined1
FParticleSpriteVertexFactory::ShouldCompilePermutation(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0xe8))(param_2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 200))(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1426aaac0 FUN_1426aaac0 body=73 status=ok
// SIG undefined FUN_1426aaac0(void)

undefined1 FUN_1426aaac0(longlong param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char cVar3;
  undefined1 local_res8 [32];
  
  if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x140);
    if (cVar3 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x140);
      pcVar2 = (char *)FUN_1426c5d50(uVar1,local_res8);
      if (*pcVar2 != '\x03') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1426aab10 FUN_1426aab10 body=81 status=ok
// SIG undefined FUN_1426aab10(void)

undefined8 FUN_1426aab10(longlong *param_1,float param_2)

{
  longlong lVar1;
  
  if ((2 < *(byte *)(param_1 + 0x25)) && ((*(byte *)((longlong)param_1 + 0x91) & 0x40) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if ((*(longlong *)(lVar1 + 0x140) != 0) && (param_2 != 0.0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1426aab70 FUN_1426aab70 body=104 status=ok
// SIG undefined FUN_1426aab70(void)

ulonglong FUN_1426aab70(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (**(code **)(*param_1 + 0x778))();
  if (((char)uVar3 != '\0') && (lVar2 = param_1[0x92], lVar2 != 0)) {
    lVar4 = FUN_1429e18b0();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar4 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(lVar2 + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(lVar2 + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)uVar3 != '\0') {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1426aabe0 FUN_1426aabe0 body=735 status=ok
// SIG undefined FUN_1426aabe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426aabe0(longlong *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  ushort *puVar14;
  uint local_res8 [2];
  float local_res10;
  undefined4 local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_2c;
  ulonglong uVar10;
  
  fVar2 = *(float *)((longlong)param_1 + 0x134);
  iVar5 = (int)ROUND((fVar2 + fVar2) - 0.5) >> 1;
  iVar1 = iVar5 + 1;
  *(float *)((longlong)param_1 + 0x134) = fVar2 - (float)iVar5;
  iVar7 = (int)param_1[0x25] + iVar1;
  local_res10 = param_2;
  if (((int)param_1[0x26] <= iVar7) &&
     (cVar4 = (**(code **)(*param_1 + 0x18))
                        (param_1,iVar7 + 1 + (int)SQRT((float)iVar7),param_2 < 0.25), cVar4 == '\0')
     ) {
    return;
  }
  uVar13 = 0;
  local_res8[0] = 0xffffffff;
  uVar12 = local_res8[0];
  if (0 < (int)param_1[0x25]) {
    puVar14 = (ushort *)param_1[0x21];
    uVar10 = uVar13;
    do {
      lVar8 = (longlong)(int)(*(int *)((longlong)param_1 + 0x124) * (uint)*puVar14) + param_1[0x20];
      if (((*(uint *)((int)param_1[6] + lVar8) & 0xf0000000) == 0x40000000) &&
         (uVar12 = (uint)*puVar14, *(int *)((longlong)(int)param_1[6] + 4 + lVar8) == 0)) break;
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      puVar14 = puVar14 + 1;
      uVar12 = local_res8[0];
    } while ((int)uVar9 < (int)param_1[0x25]);
  }
  local_res8[0] = uVar12;
  fVar2 = *(float *)(param_1[0x4d] + 0x3c);
  lVar8 = *(longlong *)(param_1[3] + 400);
  if (lVar8 != 0) {
    lVar6 = FUN_1429bed90();
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (0 < iVar1)) && (*(char *)((longlong)param_1 + 0x299) != '\0')) {
      local_48 = (undefined4)param_1[0x25];
      local_40 = (int)(1.0 / (float)iVar1);
      local_38 = *(float *)(param_1 + 0x40);
      local_3c = local_res10;
      local_34 = *(float *)param_1[0x42];
      local_30 = local_38 - local_34;
      local_44 = iVar5;
      local_2c = 1e-08 < ABS(fVar2);
      FUN_1426ac0c0(param_1,local_res8,&local_48);
    }
  }
  *(int *)param_1[0x42] = (int)param_1[0x40];
  if ((char)param_1[0x53] == '\x01') {
    uVar10 = uVar13;
    if (0 < (int)param_1[0x25]) {
      do {
        puVar11 = (uint *)((longlong)
                           (int)((uint)*(ushort *)(param_1[0x21] + uVar10) *
                                *(int *)((longlong)param_1 + 0x124)) + (longlong)(int)param_1[6] +
                          param_1[0x20]);
        if ((puVar11[1] == 0) && ((*puVar11 & 0xf0000000) == 0x40000000)) {
          *puVar11 = *puVar11 & 0xfffffff | 0x10000000;
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar10 = uVar10 + 2;
      } while ((int)uVar12 < (int)param_1[0x25]);
    }
    *(undefined1 *)(param_1 + 0x53) = 0;
  }
  _DAT_146b07870 = _DAT_146b07870 + 1;
  return;
}



// FUNCTION 1426aaec0 FUN_1426aaec0 body=4050 status=ok
// SIG undefined FUN_1426aaec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426aaec0(longlong *param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong *plVar3;
  ushort uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  DWORD DVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  byte *pbVar19;
  ushort *puVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint *puVar26;
  uint *puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  undefined1 auVar35 [16];
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  bool local_res18;
  ulonglong in_stack_fffffffffffffe28;
  int local_1b8;
  uint local_1b4;
  uint *local_1b0;
  float local_1a8;
  float local_1a0;
  uint *local_198;
  undefined8 local_190;
  float local_188;
  byte *local_180;
  float local_178;
  float local_174;
  float local_170;
  longlong local_168;
  uint local_160;
  uint local_15c;
  float local_158;
  float local_14c;
  float local_140;
  float local_134;
  float local_128;
  float local_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  uint uStack_10c;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  
  cVar8 = FUN_1426ac7b0();
  if (cVar8 == '\0') {
    return;
  }
  lVar25 = **(longlong **)(param_1[2] + 0x40);
  fVar38 = *(float *)((longlong)param_1 + 0x134);
  local_168 = lVar25;
  FUN_1424116d0(*(longlong *)(lVar25 + 0x50) + 0x78,*(undefined4 *)((longlong)param_1 + 0x13c),
                param_1[3],0);
  FUN_1426710e0(*(undefined8 *)(lVar25 + 0x50));
  fVar28 = (float)FUN_1426072c0(param_1[2]);
  if (0.0 <= fVar28) {
    if (1.0 <= fVar28) {
      fVar28 = 1.0;
    }
  }
  else {
    fVar28 = 0.0;
  }
  fVar29 = (float)FUN_1424116d0(*(longlong *)(lVar25 + 0x50) + 0x40,
                                *(undefined4 *)((longlong)param_1 + 0x13c),param_1[3],0);
  fVar29 = fVar29 * fVar28;
  iVar15 = *(int *)(param_1[0x4d] + 0x44);
  fVar28 = fVar29 * param_2 + fVar38;
  local_1b8 = (int)ROUND((fVar28 + fVar28) - 0.5) >> 1;
  *(float *)((longlong)param_1 + 0x134) = fVar28 - (float)local_1b8;
  plVar11 = (longlong *)FUN_142627a50(param_1,param_1[0x4b]);
  local_190 = plVar11;
  if (param_1[0x4b] != 0) {
    if (*(char *)((longlong)param_1 + 0x3b4) == '\0') {
      local_1b8 = 0;
    }
    else {
      lVar25 = param_1[3];
      *(undefined4 *)(param_1 + 0x25) = 0;
      local_1b8 = *(int *)(param_1[0x4b] + 0x4c);
      *(undefined1 *)((longlong)param_1 + 0x3b4) = 0;
      if ((((*(byte *)(lVar25 + 0x71b) & 4) == 0) &&
          (cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 == '\0')) && (DAT_1468c21ae != '\0')) {
        DVar9 = GetCurrentThreadId();
        lVar12 = 0x930;
        if (DVar9 == DAT_1468c21c0) goto LAB_1426ab0ed;
      }
      else {
LAB_1426ab0ed:
        lVar12 = 0x210;
      }
      pfVar1 = (float *)(lVar12 + lVar25);
      fVar28 = *pfVar1;
      fVar29 = pfVar1[1];
      fVar30 = pfVar1[2];
      fVar31 = fVar29 + fVar29;
      fVar32 = fVar30 + fVar30;
      fVar33 = (fVar28 + fVar28) * fVar28;
      pfVar2 = (float *)(lVar12 + 0x20 + lVar25);
      fVar34 = *pfVar2;
      fVar37 = (fVar32 * pfVar1[3] + fVar31 * fVar28) * fVar34;
      fVar36 = fVar34 * (fVar32 * fVar28 - fVar31 * pfVar1[3]);
      fVar28 = (float)((uint)((_DAT_146b07490 - (fVar32 * fVar30 + fVar31 * fVar29)) * fVar34) &
                      _DAT_146b074a0);
      uStack_10c = (uint)((fRam0000000146b0749c - (fVar33 + fVar33)) * pfVar2[3]) &
                   uRam0000000146b074ac;
      plVar3 = (longlong *)(lVar12 + 0x10 + lVar25);
      local_e8 = (undefined4)*plVar3;
      uStack_e4 = *(undefined4 *)((longlong)plVar3 + 4);
      uStack_e0 = (undefined4)plVar3[1];
      fStack_dc = fRam0000000146b0749c;
      if (*plVar11 == 0) {
        plVar11[7] = *plVar3;
        *(undefined4 *)(plVar11 + 8) = uStack_e0;
        *(ulonglong *)((longlong)plVar11 + 100) = CONCAT44(fVar37,fVar28);
        *(float *)((longlong)plVar11 + 0x6c) = fVar36;
        *(undefined4 *)(plVar11 + 0xe) = 0x3f800000;
        local_1a8 = fVar36;
      }
      local_118 = fVar28;
      fStack_114 = fVar37;
      fStack_110 = fVar36;
      if ((plVar11[1] == 0) && (plVar11[3] == 0)) {
        lVar25 = param_1[0x4b];
LAB_1426ab20b:
        fVar29 = (float)FUN_1424116d0(lVar25 + 0x68,*(undefined4 *)((longlong)param_1 + 0x13c),
                                      param_1[3],0);
        fVar30 = fVar28 * fVar28 + fVar37 * fVar37 + fVar36 * fVar36;
        if (1e-08 < fVar30) {
          auVar35 = rsqrtss(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30));
          fVar34 = auVar35._0_4_;
          fVar34 = fVar34 + fVar34 * (0.5 - fVar30 * 0.5 * fVar34 * fVar34);
          fVar34 = fVar34 + fVar34 * (0.5 - fVar30 * 0.5 * fVar34 * fVar34);
          fVar28 = fVar34 * fVar28;
          fVar37 = fVar34 * fVar37;
          fVar36 = fVar36 * fVar34;
        }
        *(undefined4 *)(plVar11 + 0x17) = 0x3f800000;
        local_1a8 = -fVar36;
        plVar11[0x10] =
             CONCAT44(fVar37 * fVar29 + *(float *)((longlong)plVar11 + 0x3c),
                      fVar28 * fVar29 + *(float *)(plVar11 + 7));
        *(float *)(plVar11 + 0x11) = fVar36 * fVar29 + *(float *)(plVar11 + 8);
        *(ulonglong *)((longlong)plVar11 + 0xac) = CONCAT44(fVar37,fVar28) ^ 0x8000000080000000;
        *(float *)((longlong)plVar11 + 0xb4) = local_1a8;
        lVar25 = param_1[0x4b];
      }
      else {
        lVar25 = param_1[0x4b];
        if (*(char *)(lVar25 + 0x40) == '\0') goto LAB_1426ab20b;
      }
      lVar12 = *(longlong *)(lVar25 + 0x50);
      puVar5 = (undefined8 *)plVar11[0x2f];
      lVar25 = (longlong)*(int *)(lVar25 + 0x58) * 0x50 + lVar12;
      for (; lVar12 != lVar25; lVar12 = lVar12 + 0x50) {
        in_stack_fffffffffffffe28 = in_stack_fffffffffffffe28 & 0xffffffff00000000;
        FUN_1424118e0(lVar12,&local_1b0,*(undefined4 *)((longlong)param_1 + 0x13c),param_1[3],
                      in_stack_fffffffffffffe28,0);
        *puVar5 = local_1b0;
        *(float *)(puVar5 + 1) = local_1a8;
        puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
      }
    }
    fVar29 = 0.0;
  }
  iVar7 = local_1b8;
  if (0 < iVar15) {
    if (0 < ((int)param_1[0x25] - iVar15) + local_1b8) {
      (**(code **)(*param_1 + 600))(param_1,0);
    }
    iVar7 = iVar15;
    if (local_1b8 <= iVar15) {
      iVar7 = local_1b8;
    }
  }
  local_1b8 = iVar7;
  iVar15 = (int)param_1[0x25] + local_1b8;
  if (((int)param_1[0x26] <= iVar15) &&
     (cVar8 = (**(code **)(*param_1 + 0x18))
                        (param_1,(int)SQRT((float)iVar15) + 1 + iVar15,param_2 < 0.25),
     cVar8 == '\0')) {
    return;
  }
  lVar25 = local_168;
  iVar15 = 0;
  local_198 = (uint *)0x0;
  local_1b4 = 0xffffffff;
  local_1b0 = (uint *)0x0;
  uVar21 = local_1b4;
  puVar26 = local_1b0;
  puVar16 = local_198;
  if (0 < (int)param_1[0x25]) {
    puVar20 = (ushort *)param_1[0x21];
    do {
      puVar16 = (uint *)((longlong)(int)(*(int *)((longlong)param_1 + 0x124) * (uint)*puVar20) +
                        param_1[0x20]);
      puVar26 = (uint *)((longlong)puVar16 + (longlong)(int)param_1[6]);
      if (((*(uint *)((longlong)puVar16 + (longlong)(int)param_1[6]) & 0xf0000000) == 0x40000000) &&
         (uVar21 = (uint)*puVar20, puVar26[1] == 0)) break;
      iVar15 = iVar15 + 1;
      puVar20 = puVar20 + 1;
      uVar21 = local_1b4;
      puVar26 = local_1b0;
      puVar16 = local_198;
    } while (iVar15 < (int)param_1[0x25]);
  }
  local_198 = puVar16;
  local_1b0 = puVar26;
  local_1b4 = uVar21;
  pbVar19 = (byte *)0x0;
  local_res18 = local_198 == (uint *)0x0;
  local_180 = (byte *)0x0;
  fVar28 = *(float *)(param_1[0x4d] + 0x58);
  if (((*(longlong *)(local_168 + 0x58) != 0) &&
      (local_180 = (byte *)FUN_142627a50(param_1), local_180 != (byte *)0x0)) &&
     ((*local_180 & 0x19) == 0)) {
    local_180 = pbVar19;
  }
  local_178 = *(float *)(param_1 + 0x40);
  if (local_1b8 < 1) {
    return;
  }
  if (fVar29 <= 0.0) {
    local_170 = 0.0;
  }
  else {
    local_170 = 1.0 / fVar29;
  }
  local_174 = (local_170 * fVar38 + param_2) - local_170;
  if (*(char *)(param_1[0x4d] + 0x4c) == '\x01') {
    uVar40 = *(undefined4 *)((longlong)param_1 + 0x94);
    uVar39 = (undefined4)param_1[0x12];
    local_14c = *(float *)(param_1 + 0x13);
  }
  else {
    uVar39 = 0;
    local_14c = 1.0;
    uVar40 = 0;
  }
  local_1a0 = local_14c;
  local_158 = 1.0 / (float)local_1b8;
  if (0 < local_1b8) {
    do {
      uVar22 = 0;
      uVar4 = *(ushort *)(param_1[0x21] + (longlong)(int)param_1[0x25] * 2);
      local_160 = (uint)uVar4;
      fVar30 = (float)(int)pbVar19 * local_170;
      fVar38 = local_174 - fVar30;
      puVar16 = (uint *)((longlong)(int)(*(int *)((longlong)param_1 + 0x124) * local_160) +
                        param_1[0x20]);
      puVar26 = (uint *)((longlong)(int)param_1[6] + (longlong)puVar16);
      local_15c = (int)pbVar19 + 1;
      fVar29 = (float)(int)local_15c * local_158;
      if (0.0 <= fVar29) {
        fVar34 = fVar29;
        if (1.0 <= fVar29) {
          fVar34 = 1.0;
        }
      }
      else {
        fVar34 = 0.0;
      }
      (**(code **)(*param_1 + 200))(param_1,puVar16,(longlong)param_1 + 0x5c,&DAT_1468b5d90);
      plVar11 = *(longlong **)(lVar25 + 0x48);
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x280))(plVar11,param_1,(int)param_1[6],fVar38,puVar16);
      }
      uVar24 = uVar22;
      uVar21 = (uint)uVar4;
      if (0 < *(int *)(lVar25 + 0x78)) {
        do {
          plVar11 = *(longlong **)(uVar22 + *(longlong *)(lVar25 + 0x70));
          if ((*(byte *)(plVar11 + 5) & 0x80) != 0) {
            lVar25 = *plVar11;
            uVar10 = FUN_1426279f0(param_1,plVar11);
            (**(code **)(lVar25 + 0x280))(plVar11,param_1,uVar10,fVar38,puVar16);
            lVar25 = local_168;
          }
          uVar23 = (int)uVar24 + 1;
          uVar22 = uVar22 + 8;
          uVar24 = (ulonglong)uVar23;
          uVar21 = local_160;
        } while ((int)uVar23 < *(int *)(lVar25 + 0x78));
      }
      (**(code **)(*param_1 + 0xd0))(param_1,puVar16,1.0 - fVar29,fVar38);
      FUN_1426975e0(param_1,0,puVar16,local_res18,puVar16 + 7,puVar16 + 0x17,puVar16 + 0x13);
      lVar25 = local_168;
      uVar23 = puVar16[0x17];
      puVar16[3] = (uint)(fVar38 * (float)puVar16[7]);
      puVar16[0x18] = uVar23;
      puVar16[0x19] = uVar23;
      if (local_180 != (byte *)0x0) {
        (**(code **)(**(longlong **)(local_168 + 0x58) + 0x380))();
      }
      lVar12 = param_1[0x4b];
      pfVar1 = (float *)(puVar26 + 3);
      fVar38 = fVar34 * param_2 + local_178;
      puVar26[1] = 0;
      if (lVar12 == 0) {
        *puVar26 = *puVar26 | 0xfffffff;
        fVar29 = (float)puVar16[0xf];
        fVar34 = (float)puVar16[0x10];
        local_14c = -(param_2 * (float)puVar16[0x11]);
        puVar26[9] = puVar26[9] & 0xfffffffc;
        *(ulonglong *)(puVar26 + 0xd) = CONCAT44(uVar40,uVar39);
        *(ulonglong *)(puVar26 + 10) =
             CONCAT44(param_2 * fVar34,-(param_2 * fVar29)) ^ 0x8000000000000000;
        puVar26[0xc] = (uint)local_14c;
        puVar26[0xf] = (uint)local_1a0;
        *pfVar1 = fVar38;
        puVar26[4] = (uint)fVar30;
        puVar26[6] = 1;
        if (local_res18 != false) {
          *puVar26 = 0x4fffffff;
          *(undefined4 *)param_1[0x48] = 0;
          local_res18 = false;
          puVar26[5] = 0;
          goto LAB_1426ab978;
        }
        if (local_198 != (uint *)0x0) {
          puVar26[1] = 0;
          uVar23 = *local_1b0;
          if (((uVar23 & 0xf0000000) == 0x40000000) && ((uVar23 & 0x3fff) == 0x3fff)) {
            uVar23 = (uVar21 & 0x3fff) << 0xe | 0x80003fff;
          }
          else {
            uVar23 = (uVar21 & 0x3fff | 0x8000) << 0xe | uVar23 & 0x3fff;
          }
          *local_1b0 = uVar23;
          *puVar26 = local_1b4 & 0x3fff | *puVar26 & 0xfffc000 | 0x4fffc000;
          goto LAB_1426ab978;
        }
      }
      else {
        local_res18 = false;
        fVar29 = (float)puVar16[0xf];
        fVar34 = (float)puVar16[0x11];
        fVar31 = (float)puVar16[0x10];
        puVar26[9] = puVar26[9] & 0xfffffffc;
        local_140 = -(param_2 * fVar34);
        *(ulonglong *)(puVar26 + 0xd) = CONCAT44(uVar40,uVar39);
        *(ulonglong *)(puVar26 + 10) =
             CONCAT44(param_2 * fVar31,-(param_2 * fVar29)) ^ 0x8000000000000000;
        puVar26[0xc] = (uint)local_140;
        puVar26[0xf] = (uint)local_1a0;
        *pfVar1 = fVar38;
        puVar26[4] = (uint)fVar30;
        puVar26[6] = 1;
LAB_1426ab978:
        if (1e-08 < ABS(fVar28)) {
          if (local_198 == (uint *)0x0) {
            puVar26[5] = 0;
          }
          else {
            *(float *)param_1[0x48] =
                 SQRT(((float)puVar16[5] - (float)local_198[5]) *
                      ((float)puVar16[5] - (float)local_198[5]) +
                      ((float)puVar16[4] - (float)local_198[4]) *
                      ((float)puVar16[4] - (float)local_198[4]) +
                      ((float)puVar16[6] - (float)local_198[6]) *
                      ((float)puVar16[6] - (float)local_198[6])) + *(float *)param_1[0x48];
            puVar26[5] = (uint)(*(float *)param_1[0x48] / *(float *)(param_1[0x4d] + 0x58));
          }
        }
        *(int *)(param_1 + 0x25) = (int)param_1[0x25] + 1;
        if (((ABS((float)puVar26[10]) <= 0.0001) && (ABS((float)puVar26[0xb]) <= 0.0001)) &&
           (ABS((float)puVar26[0xc]) <= 0.0001)) {
          bVar6 = false;
          puVar13 = puVar26;
          puVar17 = puVar16;
          while (((!bVar6 || ((puVar13[9] & 1) != 0)) &&
                 (uVar23 = *puVar13, puVar17 = (uint *)0x0, puVar13 = (uint *)0x0,
                 (uVar23 & 0x3fff) != 0x3fff))) {
            bVar6 = true;
            puVar17 = (uint *)((longlong)
                               (int)(*(int *)((longlong)param_1 + 0x124) * (uVar23 & 0x3fff)) +
                              param_1[0x20]);
            puVar13 = (uint *)((longlong)(int)param_1[6] + (longlong)puVar17);
          }
          if (puVar17 != (uint *)0x0) {
            fVar38 = 1.0 / (*pfVar1 - (float)puVar13[3]);
            local_134 = ((float)puVar16[6] - (float)puVar17[6]) * fVar38;
            *(ulonglong *)(puVar26 + 10) =
                 CONCAT44(((float)puVar16[5] - (float)puVar17[5]) * fVar38,
                          ((float)puVar16[4] - (float)puVar17[4]) * fVar38);
            puVar26[0xc] = (uint)local_134;
          }
        }
        puVar13 = (uint *)0x0;
        if (((*(uint *)(param_1[0x4d] + 0x48) & 8) != 0) &&
           ((*(uint *)(param_1[0x4d] + 0x48) & 0x10) == 0)) {
          bVar6 = false;
          puVar17 = puVar16;
          puVar27 = puVar26;
          while (((!bVar6 || ((puVar27[9] & 1) != 0)) &&
                 (uVar23 = *puVar27, puVar27 = puVar13, puVar17 = puVar13,
                 (uVar23 & 0x3fff) != 0x3fff))) {
            bVar6 = true;
            puVar17 = (uint *)((longlong)
                               (int)(*(int *)((longlong)param_1 + 0x124) * (uVar23 & 0x3fff)) +
                              param_1[0x20]);
            puVar27 = (uint *)((longlong)(int)param_1[6] + (longlong)puVar17);
          }
          if (puVar17 != (uint *)0x0) {
            puVar18 = puVar13;
            puVar14 = (uint *)0x0;
            if (puVar27 != (uint *)0x0) {
              bVar6 = false;
              puVar14 = puVar27;
              puVar18 = puVar17;
              while (((!bVar6 || ((puVar14[9] & 1) != 0)) &&
                     (uVar23 = *puVar14, puVar18 = puVar13, puVar14 = (uint *)0x0,
                     (uVar23 & 0x3fff) != 0x3fff))) {
                bVar6 = true;
                puVar18 = (uint *)((longlong)
                                   (int)(*(int *)((longlong)param_1 + 0x124) * (uVar23 & 0x3fff)) +
                                  param_1[0x20]);
                puVar14 = (uint *)((longlong)(int)param_1[6] + (longlong)puVar18);
              }
            }
            if (puVar18 == (uint *)0x0) {
              fVar38 = (float)puVar17[4];
              fVar29 = (float)puVar17[5];
              fVar34 = 1.0 / (*pfVar1 - (float)puVar27[3]);
              fVar30 = ((float)puVar16[6] - (float)puVar17[6]) * fVar34;
              local_11c = fVar30;
            }
            else {
              fVar38 = (float)puVar18[4];
              fVar29 = (float)puVar18[5];
              fVar34 = 1.0 / (*pfVar1 - (float)puVar14[3]);
              fVar30 = ((float)puVar16[6] - (float)puVar18[6]) * fVar34;
              local_128 = fVar30;
            }
            *(ulonglong *)(puVar27 + 10) =
                 CONCAT44(((float)puVar16[5] - fVar29) * fVar34,
                          ((float)puVar16[4] - fVar38) * fVar34);
            puVar27[0xc] = (uint)fVar30;
          }
        }
        *(float *)param_1[0x42] = *pfVar1;
        local_1b4 = uVar21;
        local_1b0 = puVar26;
        local_198 = puVar16;
      }
      pbVar19 = (byte *)(ulonglong)local_15c;
      plVar11 = local_190;
    } while ((int)local_15c < local_1b8);
  }
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  if (plVar11[3] == 0) {
    return;
  }
  if (local_180 == (byte *)0x0) {
    return;
  }
  if ((*local_180 & 0x10) == 0) {
    return;
  }
  if ((*(byte *)(plVar11 + 0x1c) & 1) == 0) {
    return;
  }
  fVar28 = *(float *)(plVar11 + 0x26) - *(float *)((longlong)plVar11 + 0x124);
  fVar29 = *(float *)((longlong)plVar11 + 0x134) - *(float *)(plVar11 + 0x25);
  local_188 = *(float *)(plVar11 + 0x27) - *(float *)((longlong)plVar11 + 300);
  fVar38 = fVar29 * fVar29 + fVar28 * fVar28 + local_188 * local_188;
  if (fVar38 != 1.0) {
    if (fVar38 < 1e-08) {
      local_188 = DAT_1468b5d98;
      local_190 = (longlong *)CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_1426abdc8;
    }
    auVar35 = rsqrtss(ZEXT416((uint)fVar38),ZEXT416((uint)fVar38));
    fVar30 = auVar35._0_4_;
    fVar30 = fVar30 + fVar30 * (0.5 - fVar38 * 0.5 * fVar30 * fVar30);
    fVar30 = fVar30 + fVar30 * (0.5 - fVar38 * 0.5 * fVar30 * fVar30);
    fVar28 = fVar28 * fVar30;
    fVar29 = fVar29 * fVar30;
    local_188 = local_188 * fVar30;
  }
  local_190 = (longlong *)CONCAT44(fVar29,fVar28);
LAB_1426abdc8:
  (**(code **)(**(longlong **)(param_1[5] + 0x58) + 0x390))
            (*(longlong **)(param_1[5] + 0x58),param_1,local_180,0,plVar11 + 0x1c,0,&local_190,1);
  return;
}



// FUNCTION 1426abea0 FUN_1426abea0 body=534 status=ok
// SIG undefined FUN_1426abea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426abea0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54 [12];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [24];
  longlong local_20;
  undefined8 local_18;
  undefined1 local_10;
  ushort local_e;
  uint local_c;
  
  if (((param_1[0x92] == 0) && (iVar3 = FUN_142235230(), iVar3 != 3)) && (param_1[0x8e] != 0)) {
    lVar4 = FUN_14291fb80();
    lVar9 = param_1[0x8e];
    lVar8 = lVar9;
    if (lVar9 != 0) {
      while (lVar8 != lVar4) {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        if (lVar8 == 0) {
          return;
        }
      }
      if (lVar9 != 0) {
        FActorSpawnParameters::FActorSpawnParameters(local_38);
        local_20 = param_1[0x2a];
        local_10 = 1;
        local_18 = AActor::GetLevel(param_1);
        lVar9 = param_1[0x2d];
        local_c = local_c | 0x800040;
        local_e = local_e | 8;
        if (lVar9 == 0) {
          uVar10 = (undefined4)DAT_1468b5da0;
          uVar11 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
          local_64 = DAT_1468b5da8;
        }
        else {
          local_48 = *(float *)(lVar9 + 0x210);
          fStack_44 = *(float *)(lVar9 + 0x214);
          fStack_40 = *(float *)(lVar9 + 0x218);
          fStack_3c = *(float *)(lVar9 + 0x21c);
          auVar2._4_4_ = -(uint)(*(float *)(lVar9 + 0x254) != fStack_44);
          auVar2._0_4_ = -(uint)(*(float *)(lVar9 + 0x250) != local_48);
          auVar2._8_4_ = -(uint)(*(float *)(lVar9 + 600) != fStack_40);
          auVar2._12_4_ = -(uint)(*(float *)(lVar9 + 0x25c) != fStack_3c);
          iVar3 = movmskps((int)local_18,auVar2);
          lVar8 = lVar9;
          if (iVar3 != 0) {
            *(float *)(lVar9 + 0x250) = local_48;
            *(float *)(lVar9 + 0x254) = fStack_44;
            *(float *)(lVar9 + 600) = fStack_40;
            *(float *)(lVar9 + 0x25c) = fStack_3c;
            puVar5 = (undefined8 *)FQuat::Rotator(&local_48,local_54);
            *(undefined8 *)(lVar9 + 0x260) = *puVar5;
            *(undefined4 *)(lVar9 + 0x268) = *(undefined4 *)(puVar5 + 1);
            lVar8 = param_1[0x2d];
          }
          uVar10 = (undefined4)*(undefined8 *)(lVar9 + 0x260);
          uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x260) >> 0x20);
          puVar1 = (undefined4 *)(lVar9 + 0x268);
          lVar9 = lVar8;
          local_64 = *puVar1;
        }
        local_6c = CONCAT44(uVar11,uVar10);
        if (lVar9 == 0) {
          local_78 = _DAT_1468b5d90;
          local_70 = DAT_1468b5d98;
        }
        else {
          local_78 = *(undefined8 *)(lVar9 + 0x220);
          local_70 = *(undefined4 *)(lVar9 + 0x228);
        }
        local_60 = local_78;
        local_58 = local_70;
        if (param_1[0x8e] != 0) {
          lVar4 = FUN_14291fb80();
          lVar9 = param_1[0x8e];
          for (lVar8 = lVar9; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
            if (lVar8 == lVar4) goto LAB_1426ac060;
          }
        }
        lVar9 = 0;
LAB_1426ac060:
        uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        plVar7 = (longlong *)UWorld::SpawnActor(uVar6,lVar9,&local_60,&local_6c,local_38);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x778))(plVar7,param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1426ac0c0 FUN_1426ac0c0 body=1772 status=ok
// SIG undefined FUN_1426ac0c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426ac0c0(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_1a8 [32];
  uint *local_188;
  undefined8 *local_180;
  uint *local_178;
  undefined8 local_168;
  float local_160;
  uint local_158;
  undefined8 local_150;
  float local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined1 local_128 [16];
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar5 = **(longlong **)(param_1[2] + 0x40);
  iVar1 = param_3[3];
  fVar17 = (float)param_3[6];
  local_138 = (undefined8 *)0x0;
  local_158 = (uint)*(ushort *)(param_1[0x21] + (longlong)(*param_3 + param_3[1]) * 2);
  puVar16 = (undefined8 *)
            ((longlong)(int)(*(int *)((longlong)param_1 + 0x124) * local_158) + param_1[0x20]);
  puVar15 = (uint *)((longlong)(int)param_1[6] + (longlong)puVar16);
  local_168 = param_3;
  local_150 = param_2;
  local_140 = lVar5;
  (**(code **)(*param_1 + 200))(param_1,puVar16,(longlong)param_1 + 0x5c,&DAT_1468b5d90);
  iVar14 = 0;
  puVar10 = (undefined8 *)0x0;
  if (0 < *(int *)(lVar5 + 0x78)) {
    lVar13 = 0;
    do {
      plVar8 = *(longlong **)(lVar13 + *(longlong *)(lVar5 + 0x70));
      if ((plVar8 != (longlong *)0x0) && ((*(byte *)(plVar8 + 5) & 0x80) != 0)) {
        lVar5 = *plVar8;
        uVar4 = FUN_1426279f0(param_1,plVar8);
        local_188 = (uint *)puVar16;
        (**(code **)(lVar5 + 0x280))(plVar8,param_1,uVar4,iVar1);
        lVar5 = local_140;
      }
      iVar14 = iVar14 + 1;
      lVar13 = lVar13 + 8;
      puVar10 = local_138;
      param_2 = local_150;
    } while (iVar14 < *(int *)(lVar5 + 0x78));
  }
  if (1.0 / *(float *)((longlong)puVar16 + 0x1c) < 0.001) {
    *(undefined4 *)((longlong)puVar16 + 0x1c) = 0x4479ffff;
  }
  plVar8 = *(longlong **)(lVar5 + 0x48);
  if (plVar8 != (longlong *)0x0) {
    local_188 = (uint *)puVar16;
    (**(code **)(*plVar8 + 0x280))(plVar8,param_1,(int)param_1[6],iVar1);
  }
  (**(code **)(*param_1 + 0xd0))(param_1,puVar16,0x3f800000,iVar1);
  plVar8 = *(longlong **)(param_1[3] + 400);
  if (plVar8 == (longlong *)0x0) {
LAB_1426ac2a2:
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar5 = FUN_1429bed90();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1426ac2a2;
  }
  (**(code **)(*plVar8 + 0x420))(plVar8,local_128,param_1[0x4f],0);
  (**(code **)(*plVar8 + 0x420))(plVar8,local_f8,param_1[0x50],0);
  piVar3 = local_168;
  *puVar15 = *puVar15 | 0xfffffff;
  puVar15[1] = 0;
  puVar15[3] = (uint)(fVar17 + (float)local_168[5]);
  iVar1 = local_168[1];
  fVar18 = local_e8 - local_118;
  puVar15[9] = puVar15[9] & 0xfffffffe;
  puVar15[6] = 1;
  fVar19 = fStack_e4 - fStack_114;
  puVar15[4] = (uint)(float)iVar1;
  fVar21 = fStack_e0 - fStack_110;
  local_168 = (int *)CONCAT44(fStack_114,local_118);
  local_160 = fStack_110;
  fVar22 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar21 * fVar21);
  fVar17 = DAT_1468b5d90;
  fVar20 = DAT_1468b5d94;
  local_148 = DAT_1468b5d98;
  if (1e-08 < fVar22) {
    fVar23 = 1.0 / fVar22;
    fVar17 = fVar18 * fVar23;
    fVar20 = fVar19 * fVar23;
    local_148 = fVar21 * fVar23;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x28c);
  local_150 = (uint *)CONCAT44(fVar20,fVar17);
  if (iVar1 == 0) {
    fVar18 = fVar22 * 0.5;
    fVar22 = fVar18 * *(float *)(param_1 + 0x51);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar22 = fVar22 * *(float *)(param_1 + 0x51) * 0.5;
        local_160 = fStack_e0 - local_148 * fVar22;
        local_168 = (int *)CONCAT44(fStack_e4 - fVar20 * fVar22,local_e8 - fVar17 * fVar22);
      }
      else {
        LowLevelFatalErrorHandler("Unknown",0xe50,L"Invalid Width Mode for trail: %u");
        local_188 = (uint *)CONCAT44(local_188._4_4_,*(undefined4 *)((longlong)param_1 + 0x28c));
        FDebug::AssertFailed(&DAT_145156bd4,"Unknown",0xe50,L"Invalid Width Mode for trail: %u");
      }
      goto LAB_1426ac4eb;
    }
    fVar22 = fVar22 * *(float *)(param_1 + 0x51) * 0.5;
    fVar18 = fVar22;
  }
  local_160 = fStack_110 + local_148 * fVar18;
  local_168 = (int *)CONCAT44(fStack_114 + fVar20 * fVar18,local_118 + fVar17 * fVar18);
LAB_1426ac4eb:
  puVar16[2] = local_168;
  puVar16[4] = local_168;
  *puVar16 = local_168;
  *(float *)(puVar16 + 3) = local_160;
  *(float *)(puVar16 + 5) = local_160;
  *(float *)(puVar16 + 1) = local_160;
  *(uint **)(puVar15 + 10) = local_150;
  puVar15[0xc] = (uint)local_148;
  puVar15[0x10] = (uint)fVar22;
  if (*param_2 == 0xffffffff) {
    *puVar15 = *puVar15 & 0xfffffff;
    *puVar15 = *puVar15 | 0x40000000;
    *(undefined4 *)param_1[0x48] = 0;
    puVar15[5] = 0;
    puVar15[0x11] = 0;
  }
  else {
    puVar10 = (undefined8 *)
              ((longlong)(int)(*(int *)((longlong)param_1 + 0x124) * *param_2) + param_1[0x20]);
    puVar9 = (uint *)((longlong)(int)param_1[6] + (longlong)puVar10);
    uVar6 = *puVar9;
    local_188 = puVar15;
    local_180 = puVar10;
    local_178 = puVar9;
    if (((uVar6 & 0xf0000000) == 0x40000000) && ((uVar6 & 0x3fff) == 0x3fff)) {
      *puVar9 = (local_158 & 0x3fff) << 0xe | 0x80003fff;
      *puVar15 = *puVar15 | 0xfffc000;
      *puVar15 = (*param_2 | 0xffffc000) & 0xfffffff | 0x40000000;
      (**(code **)(*param_1 + 0x288))(param_1,0,0,puVar16);
      local_178 = (uint *)0x0;
      local_180 = (undefined8 *)0x0;
      puVar7 = puVar16;
      puVar11 = puVar15;
      puVar12 = puVar10;
      local_188 = puVar9;
    }
    else {
      uVar6 = uVar6 & 0xfffffff | 0x20000000;
      *puVar9 = (local_158 << 0xe ^ uVar6) & 0xfffc000 ^ uVar6;
      puVar11 = (uint *)0x0;
      *puVar15 = *puVar15 | 0xfffc000;
      *puVar15 = (*param_2 | 0xffffc000) & 0xfffffff | 0x40000000;
      puVar7 = (undefined8 *)0x0;
      puVar12 = puVar16;
    }
    (**(code **)(*param_1 + 0x288))(param_1,puVar7,puVar11,puVar12);
    if (((byte)*(undefined4 *)(param_1[0x4d] + 0x38) & 6) == 2) {
      local_180 = (undefined8 *)0x0;
      local_178 = (uint *)0x0;
      if ((*puVar9 & 0x3fff) != 0x3fff) {
        local_180 = (undefined8 *)
                    ((longlong)(int)(*(int *)((longlong)param_1 + 0x124) * (*puVar9 & 0x3fff)) +
                    param_1[0x20]);
        local_178 = (uint *)((longlong)(int)param_1[6] + (longlong)local_180);
      }
      local_188 = puVar9;
      (**(code **)(*param_1 + 0x288))(param_1,puVar16,puVar15,puVar10);
      *(undefined8 *)(puVar15 + 0xd) = *(undefined8 *)(puVar9 + 0xd);
      puVar15[0xf] = puVar9[0xf];
    }
  }
  if ((char)piVar3[7] == '\x01') {
    if (*param_2 == 0xffffffff) {
      puVar15[5] = 0;
    }
    else {
      fVar17 = *(float *)((longlong)puVar16 + 0x14) - *(float *)((longlong)puVar10 + 0x14);
      *(float *)param_1[0x48] =
           SQRT(fVar17 * fVar17 +
                (*(float *)(puVar16 + 2) - *(float *)(puVar10 + 2)) *
                (*(float *)(puVar16 + 2) - *(float *)(puVar10 + 2)) +
                (*(float *)(puVar16 + 3) - *(float *)(puVar10 + 3)) *
                (*(float *)(puVar16 + 3) - *(float *)(puVar10 + 3))) + *(float *)param_1[0x48];
      puVar15[5] = (uint)(*(float *)param_1[0x48] / *(float *)(param_1[0x4d] + 0x3c));
    }
  }
  *param_2 = local_158;
  *(int *)(param_1 + 0x25) = (int)param_1[0x25] + 1;
  return;
}



// FUNCTION 1426ac7b0 FUN_1426ac7b0 body=5377 status=ok
// SIG undefined FUN_1426ac7b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1426ac7b0(longlong *param_1,float param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  char cVar16;
  undefined4 uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  float *pfVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 *puVar27;
  uint *puVar28;
  int *piVar29;
  ushort *puVar30;
  bool bVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
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
  float fVar57;
  float fVar58;
  float fVar59;
  uint local_244;
  int local_238;
  uint local_234;
  uint local_230;
  undefined8 local_208;
  float local_200;
  uint *local_1e8;
  longlong local_1d8;
  longlong local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  int local_1b8;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  longlong local_198;
  longlong local_190;
  float local_180;
  float local_170;
  float local_160;
  float local_150;
  float local_144;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [184];
  
  uVar15 = 1;
  local_244 = 0;
  lVar6 = **(longlong **)(param_1[2] + 0x40);
  iVar5 = *(int *)(param_1[0x4d] + 0x44);
  if (*(int *)((longlong)param_1 + 0x1fc) < 1) {
    uVar15 = 1;
  }
  else {
    local_1d8 = 0;
    do {
      if ((param_1[0x4e] != 0) && ((*(byte *)(param_1[0x4e] + 0x28) & 0x80) != 0)) {
        uVar15 = (**(code **)(*param_1 + 0x288))(param_1);
      }
      local_234 = 0;
      if (0 < iVar5) {
        iVar22 = (int)param_1[0x25];
        if (0 < iVar22 - iVar5) {
          (**(code **)(*param_1 + 600))(param_1,local_244);
          iVar22 = (int)param_1[0x25];
        }
        if ((iVar5 < iVar22) && (local_234 = iVar5 - iVar22, iVar5 - iVar22 < 0)) {
          local_234 = 0;
        }
      }
      iVar22 = (int)param_1[0x25] + local_234;
      if ((iVar22 < (int)param_1[0x26]) ||
         (cVar16 = (**(code **)(*param_1 + 0x18))
                             (param_1,(int)SQRT((float)iVar22) + 1 + iVar22,param_2 < 0.25),
         cVar16 != '\0')) {
        iVar22 = 0;
        local_1d0 = 0;
        local_1e8 = (uint *)0x0;
        local_230 = 0xffffffff;
        uVar23 = local_230;
        puVar28 = local_1e8;
        lVar24 = local_1d0;
        if (0 < (int)param_1[0x25]) {
          puVar30 = (ushort *)param_1[0x21];
          do {
            lVar24 = (longlong)(int)(*(int *)((longlong)param_1 + 0x124) * (uint)*puVar30) +
                     param_1[0x20];
            puVar28 = (uint *)((int)param_1[6] + lVar24);
            if ((puVar28[1] == local_244) &&
               (uVar23 = (uint)*puVar30, (*puVar28 & 0xf0000000) == 0x40000000)) break;
            iVar22 = iVar22 + 1;
            puVar30 = puVar30 + 1;
            uVar23 = local_230;
            puVar28 = local_1e8;
            lVar24 = local_1d0;
          } while (iVar22 < (int)param_1[0x25]);
        }
        local_1d0 = lVar24;
        local_1e8 = puVar28;
        local_230 = uVar23;
        if (((*(byte *)(param_1[0x4d] + 0x48) & 2) == 0) ||
           (*(float *)(param_1[0x6e] + local_1d8 * 4) <= *(float *)(param_1[0x6c] + local_1d8 * 4)))
        {
          fVar2 = *(float *)(param_1[0x4d] + 0x58);
          bVar31 = local_1d0 == 0;
          if (*(longlong *)(lVar6 + 0x58) != 0) {
            FUN_142627a50(param_1);
          }
          fVar3 = *(float *)(param_1 + 0x40);
          if (((param_1[0x4e] == 0) || ((int)param_1[0x25] != 0)) || (local_234 != 0)) {
            if (0 < (int)local_234) goto LAB_1426acbbe;
          }
          else {
            lVar24 = param_1[3];
            if (100.0 < *(float *)(lVar24 + 0x77c) * *(float *)(lVar24 + 0x77c) +
                        *(float *)(lVar24 + 0x780) * *(float *)(lVar24 + 0x780) +
                        *(float *)(lVar24 + 0x784) * *(float *)(lVar24 + 0x784)) {
              local_234 = 1;
LAB_1426acbbe:
              if (fVar3 < *(float *)(param_1[0x42] + local_1d8 * 4)) {
                lVar24 = param_1[0x51];
                lVar26 = param_1[0x5b];
                fVar38 = 1.0 / fVar3;
                lVar25 = param_1[0x61];
                local_170 = (*(float *)(lVar24 + 8 + local_1d8 * 0xc) -
                            *(float *)(lVar26 + 8 + local_1d8 * 0xc)) * fVar38;
                *(ulonglong *)(lVar25 + local_1d8 * 0xc) =
                     CONCAT44((*(float *)(lVar24 + 4 + local_1d8 * 0xc) -
                              *(float *)(lVar26 + 4 + local_1d8 * 0xc)) * fVar38,
                              (*(float *)(lVar24 + local_1d8 * 0xc) -
                              *(float *)(lVar26 + local_1d8 * 0xc)) * fVar38);
                *(float *)(lVar25 + 8 + local_1d8 * 0xc) = local_170;
              }
              if (((*(uint *)(param_1[0x4d] + 0x48) & 8) != 0) &&
                 ((*(uint *)(param_1[0x4d] + 0x48) & 0x10) == 0)) {
                lVar26 = 0;
                puVar20 = (uint *)0x0;
                lVar24 = lVar26;
                puVar28 = puVar20;
                if ((local_1d0 != 0) &&
                   (puVar19 = local_1e8, lVar25 = local_1d0, local_1e8 != (uint *)0x0)) {
                  while ((lVar24 = lVar25, puVar28 = puVar19, (puVar19[9] & 1) != 0 &&
                         (lVar24 = lVar26, puVar28 = puVar20, (*puVar19 & 0x3fff) != 0x3fff))) {
                    lVar25 = (longlong)
                             (int)((*puVar19 & 0x3fff) * *(int *)((longlong)param_1 + 0x124)) +
                             param_1[0x20];
                    puVar19 = (uint *)((int)param_1[6] + lVar25);
                  }
                }
                if (lVar24 != 0) {
                  puVar20 = (uint *)0x0;
                  lVar26 = 0;
                  if (puVar28 != (uint *)0x0) {
                    bVar12 = false;
                    puVar20 = puVar28;
                    lVar26 = lVar24;
                    while (((!bVar12 || ((puVar20[9] & 1) != 0)) &&
                           (uVar23 = *puVar20, puVar20 = (uint *)0x0, lVar26 = 0,
                           (uVar23 & 0x3fff) != 0x3fff))) {
                      bVar12 = true;
                      lVar26 = (longlong)
                               (int)((uVar23 & 0x3fff) * *(int *)((longlong)param_1 + 0x124)) +
                               param_1[0x20];
                      puVar20 = (uint *)((int)param_1[6] + lVar26);
                    }
                  }
                  if (lVar26 != 0) {
                    lVar25 = param_1[0x51];
                    fVar34 = fVar3 - (float)puVar20[3];
                    fVar38 = DAT_1468b5d90;
                    fVar41 = DAT_1468b5d94;
                    fVar32 = DAT_1468b5d98;
                    if (1e-08 < fVar34) {
                      fVar34 = 1.0 / fVar34;
                      fVar38 = ((*(float *)(lVar25 + local_1d8 * 0xc) - *(float *)(param_1 + 0x37))
                               - *(float *)(lVar26 + 0x10)) * fVar34;
                      fVar41 = ((*(float *)(lVar25 + 4 + local_1d8 * 0xc) -
                                *(float *)((longlong)param_1 + 0x1bc)) - *(float *)(lVar26 + 0x14))
                               * fVar34;
                      fVar32 = ((*(float *)(lVar25 + 8 + local_1d8 * 0xc) -
                                *(float *)(param_1 + 0x38)) - *(float *)(lVar26 + 0x18)) * fVar34;
                    }
                    if (0 < (int)puVar28[6]) {
                      fVar34 = (float)puVar28[3] - (float)puVar20[3];
                      iVar22 = 1;
                      puVar27 = (undefined8 *)
                                ((longlong)
                                 (int)(((int)*puVar20 >> 0xe & 0x3fffU) *
                                      *(int *)((longlong)param_1 + 0x124)) + param_1[0x20]);
                      fVar48 = 1.0 / (float)(int)puVar28[6];
                      piVar29 = (int *)((longlong)(int)param_1[6] + (longlong)puVar27);
                      fVar35 = fVar34 + fVar34;
                      do {
                        fVar52 = *(float *)(lVar24 + 0x10);
                        fVar53 = (float)puVar20[0xc];
                        fVar54 = *(float *)(lVar26 + 0x14);
                        fVar55 = *(float *)(lVar26 + 0x18);
                        fVar58 = (float)iVar22 * fVar48;
                        fVar51 = fVar58 * fVar58;
                        fVar46 = fVar51 * fVar58;
                        fVar57 = (float)puVar20[0xb];
                        fVar39 = fVar46 - fVar51;
                        fVar42 = (float)puVar20[10];
                        fVar45 = fVar51 * 3.0 - (fVar46 + fVar46);
                        fVar47 = (fVar46 - (fVar51 + fVar51)) + fVar58;
                        fVar49 = ((fVar46 + fVar46) - fVar51 * 3.0) + 1.0;
                        fVar46 = *(float *)(lVar26 + 0x10);
                        fVar43 = *(float *)(lVar24 + 0x14);
                        local_160 = fVar49 * fVar55 + fVar47 * fVar53 + fVar39 * fVar32 * fVar34 +
                                    fVar45 * *(float *)(lVar24 + 0x18);
                        fVar56 = fVar52 * 6.0;
                        fVar50 = *(float *)(lVar24 + 0x14) * 6.0;
                        fVar40 = *(float *)(lVar24 + 0x18) * 6.0;
                        local_180 = (float)puVar20[0xc];
                        uVar4 = *(undefined8 *)(puVar20 + 10);
                        fVar44 = (float)puVar20[0xb];
                        *puVar27 = puVar27[2];
                        *(undefined4 *)(puVar27 + 1) = *(undefined4 *)(puVar27 + 3);
                        uVar33 = CONCAT44(fVar49 * fVar54 + fVar47 * fVar57 +
                                          fVar39 * fVar41 * fVar34 + fVar45 * fVar43,
                                          fVar49 * fVar46 + fVar47 * fVar42 +
                                          fVar39 * fVar38 * fVar34 + fVar45 * fVar52);
                        puVar27[2] = uVar33;
                        puVar27[4] = uVar33;
                        *(float *)(puVar27 + 3) = local_160;
                        *(float *)(puVar27 + 5) = local_160;
                        local_150 = (local_180 +
                                    (fVar40 + ((fVar55 * -6.0 - fVar53 * 4.0) - fVar32 * fVar35)) *
                                    fVar58 + fVar51 * (((fVar32 * fVar34 + fVar53) * 3.0 +
                                                       fVar55 * 6.0) - fVar40)) * fVar48;
                        *(ulonglong *)(piVar29 + 10) =
                             CONCAT44((fVar44 + (fVar50 + ((fVar54 * -6.0 - fVar57 * 4.0) -
                                                          fVar41 * fVar35)) * fVar58 +
                                                fVar51 * (((fVar57 + fVar41 * fVar34) * 3.0 +
                                                          fVar54 * 6.0) - fVar50)) * fVar48,
                                      ((float)uVar4 +
                                      (fVar56 + ((fVar46 * -6.0 - fVar42 * 4.0) - fVar38 * fVar35))
                                      * fVar58 +
                                      fVar51 * (((fVar38 * fVar34 + fVar42) * 3.0 + fVar46 * 6.0) -
                                               fVar56)) * fVar48);
                        piVar29[0xc] = (int)local_150;
                        if (iVar22 < (int)puVar28[6]) {
                          puVar27 = (undefined8 *)
                                    ((longlong)
                                     (int)((*piVar29 >> 0xe & 0x3fffU) *
                                          *(int *)((longlong)param_1 + 0x124)) + param_1[0x20]);
                          piVar29 = (int *)((longlong)(int)param_1[6] + (longlong)puVar27);
                        }
                        iVar22 = iVar22 + 1;
                      } while (iVar22 <= (int)puVar28[6]);
                    }
                    lVar24 = param_1[0x61];
                    *(ulonglong *)(lVar24 + local_1d8 * 0xc) = CONCAT44(fVar41,fVar38);
                    *(float *)(lVar24 + 8 + local_1d8 * 0xc) = fVar32;
                  }
                }
              }
              local_208 = 0;
              local_200 = 1.0;
              local_238 = 0;
              fVar41 = fVar3 - *(float *)(param_1[0x42] + local_1d8 * 4);
              lVar24 = param_1[3];
              fVar38 = 1.0 / (float)(int)local_234;
              local_128 = *(undefined8 *)(lVar24 + 0x210);
              uStack_120 = *(undefined8 *)(lVar24 + 0x218);
              local_118 = *(undefined8 *)(lVar24 + 0x220);
              uStack_110 = *(undefined8 *)(lVar24 + 0x228);
              local_108 = *(undefined8 *)(lVar24 + 0x230);
              uStack_100 = *(undefined8 *)(lVar24 + 0x238);
              if (0 < (int)local_234) {
                local_190 = local_1d8 * 3;
                local_198 = (longlong)(int)local_244 << 4;
                local_1b8 = local_234 - 1;
                fVar32 = fVar38;
                do {
                  lVar24 = local_190;
                  fVar34 = 0.0;
                  if ((0.0 <= fVar32) && (fVar34 = fVar32, 1.0 <= fVar32)) {
                    fVar34 = 1.0;
                  }
                  lVar26 = param_1[0x61];
                  lVar25 = param_1[0x57];
                  lVar7 = param_1[0x51];
                  lVar8 = param_1[0x5b];
                  fVar59 = fVar34 * fVar34;
                  fVar48 = fVar34 * fVar59;
                  fVar35 = fVar48 - fVar59;
                  fVar53 = fVar59 * 3.0 - (fVar48 + fVar48);
                  fVar52 = (fVar48 - (fVar59 + fVar59)) + fVar34;
                  fVar48 = ((fVar48 + fVar48) - fVar59 * 3.0) + 1.0;
                  local_1c8 = fVar41 * *(float *)(lVar26 + local_190 * 4) * fVar52 +
                              fVar48 * *(float *)(lVar8 + local_190 * 4) +
                              fVar41 * *(float *)(lVar25 + local_190 * 4) * fVar35 +
                              fVar53 * *(float *)(lVar7 + local_190 * 4);
                  local_1c4 = fVar41 * *(float *)(lVar26 + 4 + local_190 * 4) * fVar52 +
                              fVar48 * *(float *)(lVar8 + 4 + local_190 * 4) +
                              *(float *)(lVar25 + 4 + local_190 * 4) * fVar41 * fVar35 +
                              *(float *)(lVar7 + 4 + local_190 * 4) * fVar53;
                  local_1c0 = fVar41 * *(float *)(lVar26 + 8 + local_190 * 4) * fVar52 +
                              fVar48 * *(float *)(lVar8 + 8 + local_190 * 4) +
                              *(float *)(lVar25 + 8 + local_190 * 4) * fVar41 * fVar35 +
                              fVar53 * *(float *)(lVar7 + 8 + local_190 * 4);
                  pfVar21 = (float *)FQuat::Slerp_NotNormalized
                                               (local_f8,param_1[0x5d] + local_198,
                                                param_1[0x53] + local_198,fVar34);
                  uVar14 = DAT_1464aa790;
                  uVar13 = DAT_1464aa788._4_4_;
                  uVar17 = (undefined4)DAT_1464aa788;
                  fVar53 = *pfVar21;
                  fVar54 = pfVar21[1];
                  fVar55 = pfVar21[2];
                  fVar57 = pfVar21[3];
                  lVar26 = param_1[0x57];
                  lVar25 = param_1[0x5b];
                  fVar58 = fVar41 * *(float *)(lVar26 + lVar24 * 4);
                  fVar56 = fVar41 * *(float *)(lVar26 + 4 + lVar24 * 4);
                  fVar51 = fVar41 * *(float *)(lVar26 + 8 + lVar24 * 4);
                  lVar26 = param_1[0x61];
                  auVar36._0_4_ = fVar53 * fVar53 + fVar55 * fVar55;
                  auVar36._4_4_ = fVar54 * fVar54 + fVar57 * fVar57;
                  auVar36._8_4_ = fVar55 * fVar55 + fVar53 * fVar53;
                  auVar36._12_4_ = fVar57 * fVar57 + fVar54 * fVar54;
                  fVar45 = auVar36._4_4_ + auVar36._0_4_;
                  fVar47 = auVar36._8_4_ + auVar36._4_4_;
                  fVar49 = auVar36._12_4_ + auVar36._8_4_;
                  fVar50 = auVar36._0_4_ + auVar36._12_4_;
                  auVar37._4_4_ = fVar47;
                  auVar37._0_4_ = fVar45;
                  auVar37._8_4_ = fVar49;
                  auVar37._12_4_ = fVar50;
                  auVar37 = rsqrtps(auVar36,auVar37);
                  fVar42 = auVar37._0_4_;
                  fVar46 = auVar37._4_4_;
                  fVar43 = auVar37._8_4_;
                  fVar44 = auVar37._12_4_;
                  fVar42 = (_DAT_146b074c0 - fVar42 * fVar42 * fVar45 * _DAT_146b074c0) * fVar42 +
                           fVar42;
                  fVar46 = (fRam0000000146b074c4 - fVar46 * fVar46 * fVar47 * fRam0000000146b074c4)
                           * fVar46 + fVar46;
                  fVar43 = (fRam0000000146b074c8 - fVar43 * fVar43 * fVar49 * fRam0000000146b074c8)
                           * fVar43 + fVar43;
                  fVar44 = (fRam0000000146b074cc - fVar44 * fVar44 * fVar50 * fRam0000000146b074cc)
                           * fVar44 + fVar44;
                  fVar40 = fVar41 * *(float *)(lVar26 + lVar24 * 4);
                  fVar35 = *(float *)(lVar25 + 4 + lVar24 * 4);
                  fVar48 = *(float *)(lVar25 + 8 + lVar24 * 4);
                  fVar39 = fVar41 * *(float *)(lVar26 + 8 + lVar24 * 4);
                  fVar52 = *(float *)(lVar25 + lVar24 * 4);
                  local_1a8 = ((uint)(((_DAT_146b074c0 - fVar42 * fVar42 * fVar45 * _DAT_146b074c0)
                                       * fVar42 + fVar42) * fVar53) ^ _DAT_146b074b0) &
                              -(uint)(1e-08 <= fVar45) ^ _DAT_146b074b0;
                  uStack_1a4 = ((uint)(((fRam0000000146b074c4 -
                                        fVar46 * fVar46 * fVar47 * fRam0000000146b074c4) * fVar46 +
                                       fVar46) * fVar54) ^ uRam0000000146b074b4) &
                               -(uint)(1e-08 <= fVar47) ^ uRam0000000146b074b4;
                  uStack_1a0 = ((uint)(((fRam0000000146b074c8 -
                                        fVar43 * fVar43 * fVar49 * fRam0000000146b074c8) * fVar43 +
                                       fVar43) * fVar55) ^ uRam0000000146b074b8) &
                               -(uint)(1e-08 <= fVar49) ^ uRam0000000146b074b8;
                  uStack_19c = ((uint)(((fRam0000000146b074cc -
                                        fVar44 * fVar44 * fVar50 * fRam0000000146b074cc) * fVar44 +
                                       fVar44) * fVar57) ^ uRam0000000146b074bc) &
                               -(uint)(1e-08 <= fVar50) ^ uRam0000000146b074bc;
                  fVar53 = fVar41 * *(float *)(lVar26 + 4 + lVar24 * 4);
                  lVar26 = param_1[0x51];
                  fVar57 = *(float *)(lVar26 + lVar24 * 4) * 6.0;
                  fVar55 = *(float *)(lVar26 + 4 + lVar24 * 4) * 6.0;
                  fVar54 = *(float *)(lVar26 + 8 + lVar24 * 4) * 6.0;
                  if (*(char *)(param_1[0x4d] + 0x4c) == '\x01') {
                    lVar26 = param_1[0x5f];
                    lVar25 = param_1[0x55];
                    local_200 = (*(float *)(lVar25 + 8 + lVar24 * 4) -
                                *(float *)(lVar26 + 8 + lVar24 * 4)) * fVar34 +
                                *(float *)(lVar26 + 8 + lVar24 * 4);
                    local_208 = CONCAT44((*(float *)(lVar25 + 4 + lVar24 * 4) -
                                         *(float *)(lVar26 + 4 + lVar24 * 4)) * fVar34 +
                                         *(float *)(lVar26 + 4 + lVar24 * 4),
                                         (*(float *)(lVar25 + lVar24 * 4) -
                                         *(float *)(lVar26 + lVar24 * 4)) * fVar34 +
                                         *(float *)(lVar26 + lVar24 * 4));
                  }
                  else if (*(char *)(param_1[0x4d] + 0x4c) == '\x02') {
                    local_208 = 0;
                    local_200 = 1.0;
                  }
                  auVar11._4_4_ = local_1c4;
                  auVar11._0_4_ = local_1c8;
                  uVar23 = (uint)*(ushort *)(param_1[0x21] + (longlong)(int)param_1[0x25] * 2);
                  lVar26 = (longlong)(int)(*(int *)((longlong)param_1 + 0x124) * uVar23) +
                           param_1[0x20];
                  lVar24 = param_1[3];
                  puVar28 = (uint *)((int)param_1[6] + lVar26);
                  fVar42 = param_2 - (float)local_238 * fVar38 * param_2;
                  *(byte *)(lVar24 + 0x24c) = *(byte *)(lVar24 + 0x24c) | 1;
                  auVar10._4_4_ = uVar13;
                  auVar10._0_4_ = uVar17;
                  auVar10._8_4_ = uVar14;
                  auVar10._12_4_ = 0;
                  *(undefined1 (*) [16])(lVar24 + 0x230) = auVar10;
                  *(ulonglong *)(lVar24 + 0x210) = CONCAT44(uStack_1a4,local_1a8);
                  *(ulonglong *)(lVar24 + 0x218) = CONCAT44(uStack_19c,uStack_1a0);
                  auVar11._8_4_ = local_1c0;
                  auVar11._12_4_ = 0;
                  *(undefined1 (*) [16])(lVar24 + 0x220) = auVar11;
                  local_138 = local_1a8;
                  uStack_134 = uStack_1a4;
                  uStack_130 = uStack_1a0;
                  uStack_12c = uStack_19c;
                  (**(code **)(*param_1 + 200))(param_1,lVar26,&local_1c8,&DAT_1468b5d90);
                  iVar22 = 0;
                  if (0 < *(int *)(lVar6 + 0x78)) {
                    lVar24 = 0;
                    do {
                      plVar9 = *(longlong **)(lVar24 + *(longlong *)(lVar6 + 0x70));
                      if ((plVar9 != (longlong *)0x0) && ((*(byte *)(plVar9 + 5) & 0x80) != 0)) {
                        lVar25 = *plVar9;
                        uVar17 = FUN_1426279f0(param_1,plVar9);
                        (**(code **)(lVar25 + 0x280))(plVar9,param_1,uVar17,fVar42,lVar26);
                      }
                      iVar22 = iVar22 + 1;
                      lVar24 = lVar24 + 8;
                    } while (iVar22 < *(int *)(lVar6 + 0x78));
                  }
                  plVar9 = *(longlong **)(lVar6 + 0x48);
                  if (plVar9 != (longlong *)0x0) {
                    (**(code **)(*plVar9 + 0x280))(plVar9,param_1,(int)param_1[6],fVar42,lVar26);
                  }
                  (**(code **)(*param_1 + 0xd0))(param_1,lVar26,0,fVar42);
                  puVar27 = (undefined8 *)(lVar26 + 0x5c);
                  FUN_1426975e0(param_1,local_244,lVar26,bVar31,(float *)(lVar26 + 0x1c),puVar27,
                                (undefined8 *)(lVar26 + 0x4c));
                  *(undefined4 *)(lVar26 + 0x60) = *(undefined4 *)puVar27;
                  *(undefined8 *)(lVar26 + 0x4c) = *puVar27;
                  *(undefined4 *)(lVar26 + 0x54) = *(undefined4 *)(lVar26 + 100);
                  *(float *)(lVar26 + 0xc) = fVar42 * *(float *)(lVar26 + 0x1c);
                  lVar24 = param_1[3];
                  *(byte *)(lVar24 + 0x24c) = *(byte *)(lVar24 + 0x24c) | 1;
                  *(undefined8 *)(lVar24 + 0x210) = local_128;
                  *(undefined8 *)(lVar24 + 0x218) = uStack_120;
                  *(undefined8 *)(lVar24 + 0x220) = local_118;
                  *(undefined8 *)(lVar24 + 0x228) = uStack_110;
                  *(undefined8 *)(lVar24 + 0x230) = local_108;
                  *(undefined8 *)(lVar24 + 0x238) = uStack_100;
                  *puVar28 = *puVar28 | 0xfffffff;
                  puVar28[1] = local_244;
                  local_144 = (fVar39 + (fVar54 + ((fVar48 * -6.0 - fVar39 * 4.0) -
                                                  (fVar51 + fVar51))) * fVar34 +
                                        (((fVar39 + fVar51) * 3.0 + fVar48 * 6.0) - fVar54) * fVar59
                              ) * fVar38;
                  puVar28[6] = local_234;
                  *(ulonglong *)(puVar28 + 10) =
                       CONCAT44((fVar53 + (fVar55 + ((fVar35 * -6.0 - fVar53 * 4.0) -
                                                    (fVar56 + fVar56))) * fVar34 +
                                          (((fVar56 + fVar53) * 3.0 + fVar35 * 6.0) - fVar55) *
                                          fVar59) * fVar38,
                                (fVar40 + (fVar57 + ((fVar52 * -6.0 - fVar40 * 4.0) -
                                                    (fVar58 + fVar58))) * fVar34 +
                                          (((fVar58 + fVar40) * 3.0 + fVar52 * 6.0) - fVar57) *
                                          fVar59) * fVar38);
                  puVar28[0xc] = (uint)local_144;
                  puVar28[4] = (uint)(fVar34 * fVar41);
                  puVar28[3] = (uint)(fVar3 - (1.0 - fVar34) * fVar41);
                  *(undefined8 *)(puVar28 + 0xd) = local_208;
                  puVar28[0xf] = (uint)local_200;
                  uVar18 = puVar28[9] & 0xfffffffe | 2;
                  if (local_238 != local_1b8) {
                    uVar18 = puVar28[9] | 3;
                  }
                  puVar28[9] = uVar18;
                  if (bVar31 == false) {
                    if (local_1d0 != 0) {
                      uVar18 = *local_1e8;
                      if (((uVar18 & 0xf0000000) == 0x40000000) && ((uVar18 & 0x3fff) == 0x3fff)) {
                        uVar18 = (uVar23 & 0x3fff) << 0xe | 0x80003fff;
                      }
                      else {
                        uVar18 = (uVar23 & 0x3fff | 0x8000) << 0xe | uVar18 & 0x3fff;
                      }
                      *local_1e8 = uVar18;
                      *puVar28 = *puVar28 & 0xfffc000 | local_230 & 0x3fff | 0x4fffc000;
                      goto LAB_1426ad9e3;
                    }
                  }
                  else {
                    *puVar28 = *puVar28 & 0xfffffff;
                    *puVar28 = *puVar28 | 0x40000000;
                    bVar31 = false;
                    *(undefined4 *)(param_1[0x48] + local_1d8 * 4) = 0;
                    puVar28[5] = 0;
LAB_1426ad9e3:
                    FUN_14268f050(param_1,lVar26,puVar28);
                    if (1e-08 < ABS(fVar2)) {
                      if (local_1d0 == 0) {
                        puVar28[5] = 0;
                      }
                      else {
                        fVar34 = *(float *)(lVar26 + 0x18) - *(float *)(local_1d0 + 0x18);
                        fVar48 = *(float *)(lVar26 + 0x14) - *(float *)(local_1d0 + 0x14);
                        fVar35 = *(float *)(lVar26 + 0x10) - *(float *)(local_1d0 + 0x10);
                        *(float *)(param_1[0x48] + local_1d8 * 4) =
                             SQRT(fVar48 * fVar48 + fVar35 * fVar35 + fVar34 * fVar34) +
                             *(float *)(param_1[0x48] + local_1d8 * 4);
                        puVar28[5] = (uint)(*(float *)(param_1[0x48] + local_1d8 * 4) /
                                           *(float *)(param_1[0x4d] + 0x58));
                      }
                    }
                    *(int *)(param_1 + 0x25) = (int)param_1[0x25] + 1;
                    local_230 = uVar23;
                    local_1e8 = puVar28;
                    local_1d0 = lVar26;
                  }
                  fVar32 = fVar32 + fVar38;
                  local_238 = local_238 + 1;
                } while (local_238 < (int)local_234);
              }
              lVar24 = param_1[0x51];
              lVar26 = param_1[0x5b];
              *(undefined8 *)(lVar26 + local_1d8 * 0xc) = *(undefined8 *)(lVar24 + local_1d8 * 0xc);
              *(undefined4 *)(lVar26 + 8 + local_1d8 * 0xc) =
                   *(undefined4 *)(lVar24 + 8 + local_1d8 * 0xc);
              puVar27 = (undefined8 *)(param_1[0x53] + local_1d8 * 0x10);
              uVar4 = puVar27[1];
              puVar1 = (undefined8 *)(param_1[0x5d] + local_1d8 * 0x10);
              *puVar1 = *puVar27;
              puVar1[1] = uVar4;
              lVar24 = param_1[0x57];
              lVar26 = param_1[0x61];
              *(undefined8 *)(lVar26 + local_1d8 * 0xc) = *(undefined8 *)(lVar24 + local_1d8 * 0xc);
              *(undefined4 *)(lVar26 + 8 + local_1d8 * 0xc) =
                   *(undefined4 *)(lVar24 + 8 + local_1d8 * 0xc);
              lVar24 = param_1[0x55];
              lVar26 = param_1[0x5f];
              *(undefined8 *)(lVar26 + local_1d8 * 0xc) = *(undefined8 *)(lVar24 + local_1d8 * 0xc);
              *(undefined4 *)(lVar26 + 8 + local_1d8 * 0xc) =
                   *(undefined4 *)(lVar24 + 8 + local_1d8 * 0xc);
              *(float *)(param_1[0x42] + local_1d8 * 4) = fVar3;
              *(undefined4 *)(param_1[0x6e] + local_1d8 * 4) =
                   *(undefined4 *)(param_1[0x6c] + local_1d8 * 4);
              if (((param_1[0x4f] != 0) && (*(char *)(param_1[0x4f] + 0x38) == '\x01')) &&
                 (1.0 < *(float *)(param_1[0x6c] + local_1d8 * 4))) {
                *local_1e8 = *local_1e8 & 0xfffffff;
                *local_1e8 = *local_1e8 | 0x10000000;
                *(undefined4 *)(param_1[0x6a] + local_1d8 * 4) = 0xffffffff;
              }
            }
          }
        }
        else {
          if (local_1e8 != (uint *)0x0) {
            *local_1e8 = *local_1e8 & 0xfffffff;
            *local_1e8 = *local_1e8 | 0x10000000;
          }
          lVar24 = param_1[0x51];
          lVar26 = param_1[0x5b];
          *(undefined8 *)(lVar26 + local_1d8 * 0xc) = *(undefined8 *)(lVar24 + local_1d8 * 0xc);
          *(undefined4 *)(lVar26 + 8 + local_1d8 * 0xc) =
               *(undefined4 *)(lVar24 + 8 + local_1d8 * 0xc);
          puVar27 = (undefined8 *)(param_1[0x53] + local_1d8 * 0x10);
          uVar4 = puVar27[1];
          puVar1 = (undefined8 *)(param_1[0x5d] + local_1d8 * 0x10);
          *puVar1 = *puVar27;
          puVar1[1] = uVar4;
          lVar24 = param_1[0x57];
          lVar26 = param_1[0x61];
          *(undefined8 *)(lVar26 + local_1d8 * 0xc) = *(undefined8 *)(lVar24 + local_1d8 * 0xc);
          *(undefined4 *)(lVar26 + 8 + local_1d8 * 0xc) =
               *(undefined4 *)(lVar24 + 8 + local_1d8 * 0xc);
          lVar24 = param_1[0x55];
          lVar26 = param_1[0x5f];
          *(undefined8 *)(lVar26 + local_1d8 * 0xc) = *(undefined8 *)(lVar24 + local_1d8 * 0xc);
          *(undefined4 *)(lVar26 + 8 + local_1d8 * 0xc) =
               *(undefined4 *)(lVar24 + 8 + local_1d8 * 0xc);
          *(undefined4 *)(param_1[0x6e] + local_1d8 * 4) =
               *(undefined4 *)(param_1[0x6c] + local_1d8 * 4);
          *(undefined4 *)(param_1[0x6a] + local_1d8 * 4) = 0xffffffff;
        }
      }
      local_244 = local_244 + 1;
      local_1d8 = local_1d8 + 1;
    } while ((int)local_244 < *(int *)((longlong)param_1 + 0x1fc));
  }
  return uVar15;
}



// FUNCTION 1426adcc0 FUN_1426adcc0 body=584 status=ok
// SIG undefined FUN_1426adcc0(void)

undefined1
FUN_1426adcc0(longlong param_1,float *param_2,float *param_3,float *param_4,undefined1 *param_5,
             float *param_6,undefined1 param_7)

{
  float fVar1;
  bool bVar2;
  short sVar3;
  longlong *plVar4;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  float local_68 [2];
  float local_60;
  float local_5c;
  float local_58;
  longlong local_50;
  undefined1 *local_48;
  float *local_40;
  float *local_38;
  float *local_30;
  float *local_28;
  float *local_20;
  undefined1 *local_18;
  undefined8 *local_10;
  
  local_40 = param_6;
  fVar1 = *param_6;
  local_50 = param_1;
  local_20 = param_4;
  if (fVar1 == 1.4013e-45) {
    if (((0.0001 < param_6[1]) || (0.0001 < param_6[2])) || (0.0001 < param_6[3])) {
      bVar2 = false;
      goto LAB_1426add18;
    }
  }
  else {
    if ((fVar1 == 2.8026e-45) || (fVar1 == 4.2039e-45)) {
      bVar2 = param_6[1] <= 0.0001;
    }
    else {
      bVar2 = true;
    }
LAB_1426add18:
    if (!bVar2) {
      fVar1 = param_3[2];
      *(undefined8 *)(param_2 + 0x11) = *(undefined8 *)param_3;
      param_2[0x13] = fVar1;
      fVar1 = param_4[2];
      *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)param_4;
      param_2[0x16] = fVar1;
      local_48 = param_5;
      local_38 = (float *)&param_6;
      local_18 = &param_7;
      param_6._0_1_ = 0;
      if (*(longlong *)(param_1 + 200) != 0) {
        param_1 = *(longlong *)(param_1 + 200);
      }
      if (*(longlong *)(param_1 + 0x110) == 0) {
        sVar3 = *(short *)(param_1 + 8);
      }
      else {
        sVar3 = *(short *)(param_1 + 6);
      }
      local_30 = param_2;
      local_28 = param_3;
      plVar4 = (longlong *)FUN_1426e2550((int)sVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x348))
                  (plVar4,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
                   ,0xcd2);
      }
      thunk_FUN_142689710(&local_50);
      goto LAB_1426adee2;
    }
  }
  local_78[0] = param_7;
  fVar1 = param_3[2];
  *(undefined8 *)(param_2 + 0x11) = *(undefined8 *)param_3;
  param_2[0x13] = fVar1;
  fVar1 = param_4[2];
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)param_4;
  param_2[0x16] = fVar1;
  local_58 = param_4[2] - param_3[2];
  local_60 = *param_4 - *param_3;
  local_5c = param_4[1] - param_3[1];
  local_70[0] = 0;
  param_6._0_1_ = 0;
  local_68[0] = SQRT(local_5c * local_5c + local_60 * local_60 + local_58 * local_58);
  if (local_68[0] <= 0.0001) {
    return 0;
  }
  local_48 = local_78;
  local_38 = &local_60;
  local_30 = local_68;
  local_18 = local_70;
  local_10 = &param_6;
  if (*(longlong *)(param_1 + 200) != 0) {
    param_1 = *(longlong *)(param_1 + 200);
  }
  if (*(longlong *)(param_1 + 0x110) == 0) {
    sVar3 = *(short *)(param_1 + 8);
  }
  else {
    sVar3 = *(short *)(param_1 + 6);
  }
  local_40 = param_3;
  local_28 = param_2;
  plVar4 = (longlong *)FUN_1426e2550((int)sVar3);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x348))
              (plVar4,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
               ,0xcd2);
  }
  thunk_FUN_14268d350(&local_50);
LAB_1426adee2:
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x350))(plVar4);
  }
  return param_6._0_1_;
}



// FUNCTION 1426adf10 FUN_1426adf10 body=142 status=ok
// SIG undefined FUN_1426adf10(void)

undefined8
FUN_1426adf10(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x758))();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14223fb00(param_1,param_2,param_3,param_4,param_5);
    if ((((float)uVar2 != 0.0) && (param_4 != 0)) && (param_4 != param_1[0x92])) {
      param_1[0x91] = param_4;
    }
  }
  return uVar2;
}



// FUNCTION 1426adfa0 FUN_1426adfa0 body=44 status=ok
// SIG undefined FUN_1426adfa0(void)

void FUN_1426adfa0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  
  if (param_2 == '\0') {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x6e8))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426adfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x510))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1426adfd0 FUN_1426adfd0 body=271 status=ok
// SIG undefined FUN_1426adfd0(void)

void FUN_1426adfd0(longlong param_1)

{
  longlong *plVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(&DAT_146534730,param_1,1);
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x138);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x718))(plVar1);
  }
  FUN_1426ae0e0(param_1 + 6,param_1 + 0x110,param_1);
  FUN_1426ae0e0(param_1 + 8,param_1 + 0x118,param_1);
  if (*(undefined8 **)(param_1 + 0x120) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x120))();
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x140) = local_res8;
  *(undefined4 *)(param_1 + 0x144) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x138) = local_res8;
  *(undefined4 *)(param_1 + 0x13c) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x60) = local_res8;
  *(undefined4 *)(param_1 + 100) = local_resc;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1426ce340();
    FConstraintInstance::Free(*(undefined8 *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 1426ae0e0 FUN_1426ae0e0 body=748 status=ok
// SIG undefined FUN_1426ae0e0(void)

void FUN_1426ae0e0(short *param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint local_res20 [2];
  byte local_68 [8];
  longlong *local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  if (*param_1 == 0) {
    if (*param_2 != 0) {
      *param_2 = 0;
    }
    return;
  }
  plVar3 = (longlong *)FUN_1426e2550((int)*param_1);
  uVar8 = 0;
  if (plVar3 != (longlong *)0x0) {
    local_60 = plVar3;
    (**(code **)(*plVar3 + 0x358))
              (plVar3,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\BodyInstance.cpp"
               ,0x7f4);
    puVar12 = (undefined8 *)*param_2;
    if (puVar12 != (undefined8 *)0x0) {
      piVar1 = (int *)plVar3[1];
      if (((piVar1 == (int *)0x0) || (*piVar1 != 3)) ||
         (lVar10 = *(longlong *)(piVar1 + 2), local_58 = lVar10, lVar10 == 0)) {
        (**(code **)*puVar12)(puVar12);
      }
      else {
        FUN_1426ee480(lVar10,param_3);
        plVar4 = (longlong *)FUN_1426e2530(lVar10,0);
        uVar7 = 2;
        if (plVar4 == plVar3) {
          uVar7 = uVar8;
        }
        local_50 = uVar7;
        if (*(char *)(uVar7 + 0x66 + lVar10) == '\0') {
          local_res20[0] = 0;
          lVar5 = (**(code **)(*plVar3 + 0xa8))(plVar3,local_res20,0);
          if ((lVar5 != 0) && (local_res20[0] != 0)) {
            uVar11 = uVar8;
            do {
              if (*(longlong *)(lVar5 + uVar11 * 8) == *param_2) {
                *(undefined8 *)(lVar5 + uVar11 * 8) = 0;
                break;
              }
              uVar6 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar6;
            } while (uVar6 < local_res20[0]);
          }
        }
        if (*(char *)(uVar7 + 0x69 + lVar10) == '\0') {
          (*(code *)**(undefined8 **)*param_2)();
        }
        else {
          local_48 = (undefined8 *)0x0;
          local_40 = 0;
          FUN_142695960(param_3,&local_48);
          if (0 < (int)local_40) {
            uVar11 = local_40 & 0xffffffff;
            puVar12 = local_48;
            do {
              plVar3 = (longlong *)*puVar12;
              bVar9 = *(byte *)(param_3 + 0x13) & 8;
              plVar4 = plVar3;
              if (bVar9 != 0) {
                plVar4 = (longlong *)ClonePhysXShape_AssumesLocked(plVar3);
                (**(code **)(**(longlong **)(param_3 + 0x110) + 0xc0))
                          (*(longlong **)(param_3 + 0x110),plVar3,0);
                (**(code **)(**(longlong **)(param_3 + 0x118) + 0xc0))
                          (*(longlong **)(param_3 + 0x118),plVar3);
              }
              (**(code **)(*plVar4 + 0x108))(plVar4,local_res20);
              uVar6 = local_res20[0];
              bVar2 = (byte)local_res20[0];
              local_68[0] = (byte)local_res20[0];
              if ((local_res20[0] & 4) == 0) {
                local_68[0] = (byte)local_res20[0] & 0xfe;
                local_res20[0] = local_res20[0] & 0xfffffffe;
                if ((uVar6 & 4) == 0) {
                  local_68[0] = bVar2 & 0xfc;
                  local_res20[0] = CONCAT31(local_res20[0]._1_3_,bVar2) & 0xfffffffc;
                }
              }
              (**(code **)(*plVar4 + 0x100))(plVar4,local_68);
              if (bVar9 != 0) {
                (**(code **)(**(longlong **)(param_3 + 0x110) + 0xb8))
                          (*(longlong **)(param_3 + 0x110),plVar4);
                (**(code **)(**(longlong **)(param_3 + 0x118) + 0xb8))
                          (*(longlong **)(param_3 + 0x118),plVar4);
                (**(code **)*plVar4)(plVar4);
              }
              puVar12 = puVar12 + 1;
              uVar11 = uVar11 - 1;
              plVar3 = local_60;
              lVar10 = local_58;
              uVar7 = local_50;
            } while (uVar11 != 0);
          }
          puVar12 = local_48;
          lVar5 = *param_2;
          piVar1 = *(int **)(lVar5 + 0x10);
          if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
            uVar8 = *(ulonglong *)(piVar1 + 2);
          }
          if (uVar8 == param_3) {
            *(undefined8 *)(lVar5 + 0x10) = 0;
            lVar5 = *param_2;
          }
          FUN_1426dbd90(lVar10,param_3,lVar5,uVar7 & 0xffffffff);
          if (puVar12 != (undefined8 *)0x0) {
            FMemory::Free(puVar12);
          }
        }
      }
      *param_2 = 0;
    }
    (**(code **)(*plVar3 + 0x360))(plVar3);
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1426ae3d0 FUN_1426ae3d0 body=543 status=ok
// SIG undefined FUN_1426ae3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426ae3d0(longlong *param_1,float param_2,undefined1 param_3)

{
  byte bVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  
  if (param_1[3] == 0) {
    *(uint *)(param_1 + 0x4a) = *(uint *)(param_1 + 0x4a) & 0xfffffffe;
    *(undefined4 *)((longlong)param_1 + 0x204) = 0;
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x4a);
  uVar6 = 0;
  if (param_2 == 0.0) {
    param_2 = 0.01;
  }
  lVar2 = param_1[5];
  if ((param_1[0x4b] == 0) && ((*(byte *)(param_1[3] + 0x71a) & 8) != 0)) {
    fVar5 = *(float *)((longlong)param_1 + 0x5c) - *(float *)((longlong)param_1 + 0x144);
    fVar3 = *(float *)((longlong)param_1 + 100) - *(float *)((longlong)param_1 + 0x14c);
    fVar3 = fVar3 * fVar3;
    if (1.0 < (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x29)) *
              (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x29)) + fVar5 * fVar5 + fVar3) {
      (**(code **)(*param_1 + 0xf0))(fVar3,0);
    }
  }
  (**(code **)(*param_1 + 0xe0))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_2,lVar2,param_3,bVar1 & 1);
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar4;
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  (**(code **)(*param_1 + 0x38))(param_1,param_2,lVar2);
  (**(code **)(*param_1 + 0x40))(param_1,param_2,lVar2);
  (**(code **)(*param_1 + 0x68))(param_1,param_2);
  (**(code **)(*param_1 + 0x48))(param_1,param_2,lVar2);
  (**(code **)(*param_1 + 0x250))(param_1,param_2,lVar2);
  param_1[0x36] = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x38);
  *(float *)((longlong)param_1 + 0x13c) =
       *(float *)(param_1 + 0x34) + *(float *)((longlong)param_1 + 0x13c);
  *(float *)(param_1 + 0x40) = param_2 + *(float *)(param_1 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x184) = 1;
  if (*(longlong *)(param_1[3] + 0x120) == 0) {
    lVar2 = FUN_1423407b0();
    if (lVar2 == 0) goto LAB_1426ae58e;
  }
  lVar2 = *(longlong *)(param_1[3] + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  uVar6 = *(undefined4 *)(lVar2 + 0x790);
LAB_1426ae58e:
  *(undefined4 *)((longlong)param_1 + 0x204) = uVar6;
  param_1[0x37] = _DAT_1468b5d90;
  uVar6 = DAT_1468b5d98;
  *(uint *)(param_1 + 0x4a) = *(uint *)(param_1 + 0x4a) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  return;
}



// FUNCTION 1426ae5f0 FUN_1426ae5f0 body=505 status=ok
// SIG undefined FUN_1426ae5f0(void)

void FUN_1426ae5f0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  wint_t wVar5;
  wint_t wVar6;
  undefined8 uVar7;
  wint_t *pwVar8;
  undefined2 *puVar9;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  if ((*(longlong *)(param_1 + 0x30) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x90), lVar3 == 0)) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Your connection to the host has been lost.",L"Engine",
                       L"ConnectionFailed");
    uVar7 = FText::ToString(uVar7);
    FString::operator=(param_1 + 0xb8,uVar7);
    if (local_38 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar4 = local_38 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 != 1) {
      return;
    }
    (**(code **)*local_38)(local_38);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return;
    }
    (**(code **)(*local_38 + 8))(local_38,1);
    return;
  }
  if (*(int *)(lVar3 + 300) == 1) {
    if (*(int *)(param_1 + 0xc0) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(param_1 + 0xb8);
    }
    pwVar8 = &DAT_1451579dc;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar9 + -0xa28abcee) + (longlong)pwVar8);
      if ((wVar5 == 0) && (*pwVar8 == 0)) goto LAB_1426ae69e;
      if (wVar5 != *pwVar8) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar8);
        if (wVar5 != wVar6) goto LAB_1426ae690;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
LAB_1426ae729:
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2f0))(*(longlong **)(param_1 + 0x30),param_2);
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2f8))(plVar4,param_2);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x300))();
    }
  }
  return;
LAB_1426ae690:
  if (wVar5 == wVar6) {
LAB_1426ae69e:
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Your connection to the host has been lost.",L"Engine",
                       L"ConnectionFailed");
    uVar7 = FText::ToString(uVar7);
    FString::operator=(param_1 + 0xb8,uVar7);
    if (local_50 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar4 = local_50 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 != 1) {
      return;
    }
    (**(code **)*local_50)(local_50);
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return;
    }
    (**(code **)(*local_50 + 8))(local_50,1);
    return;
  }
  goto LAB_1426ae729;
}



// FUNCTION 1426ae7f0 FUN_1426ae7f0 body=76 status=ok
// SIG undefined FUN_1426ae7f0(void)

void FUN_1426ae7f0(longlong *param_1,undefined4 param_2)

{
  FUN_1426370c0();
  (**(code **)(*param_1 + 0x28))(param_1,param_2,param_1[5]);
                    /* WARNING: Could not recover jumptable at 0x0001426ae835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x268))(param_1,param_2,*(byte *)(param_1 + 0x4a) & 1);
  return;
}



// FUNCTION 1426ae840 FUN_1426ae840 body=450 status=ok
// SIG undefined FUN_1426ae840(void)

void FUN_1426ae840(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  ushort *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  
  if (((*(byte *)(param_1[0x4d] + 0x38) & 4) != 0) && (0 < (int)param_1[0x25])) {
    puVar7 = (ushort *)param_1[0x21];
    lVar8 = (longlong)(int)param_1[6];
    lVar5 = 0;
    do {
      lVar11 = (longlong)(int)((uint)*puVar7 * *(int *)((longlong)param_1 + 0x124)) + param_1[0x20];
      puVar1 = (uint *)(lVar8 + lVar11);
      if (((*(uint *)(lVar8 + lVar11) & 0xf0000000) == 0x40000000) && (puVar1[1] == 0)) {
        if (lVar11 == 0) {
          return;
        }
        if ((*(uint *)(lVar8 + lVar11) & 0x3fff) == 0x3fff) {
          return;
        }
        bVar3 = false;
        lVar5 = lVar11;
        puVar6 = puVar1;
        while ((!bVar3 &&
               (uVar2 = *puVar6, puVar6 = (uint *)0x0, lVar5 = 0, (uVar2 & 0x3fff) != 0x3fff))) {
          bVar3 = true;
          lVar5 = (longlong)(int)(*(int *)((longlong)param_1 + 0x124) * (uVar2 & 0x3fff)) +
                  param_1[0x20];
          puVar6 = (uint *)(lVar8 + lVar5);
        }
        while (lVar5 != 0) {
          lVar9 = 0;
          puVar10 = (uint *)0x0;
          lVar8 = lVar9;
          puVar4 = puVar10;
          if ((lVar5 != 0) && (puVar6 != (uint *)0x0)) {
            bVar3 = false;
            puVar4 = puVar6;
            lVar8 = lVar5;
            while ((!bVar3 &&
                   (uVar2 = *puVar4, lVar8 = lVar9, puVar4 = puVar10, (uVar2 & 0x3fff) != 0x3fff)))
            {
              bVar3 = true;
              lVar8 = (longlong)(int)((uVar2 & 0x3fff) * *(int *)((longlong)param_1 + 0x124)) +
                      param_1[0x20];
              puVar4 = (uint *)((int)param_1[6] + lVar8);
            }
          }
          (**(code **)(*param_1 + 0x288))(param_1,lVar11,puVar1,lVar5,puVar6,lVar8,puVar4);
          lVar11 = lVar5;
          puVar1 = puVar6;
          puVar6 = puVar4;
          lVar5 = lVar8;
        }
        return;
      }
      lVar5 = lVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar5 < (int)param_1[0x25]);
  }
  return;
}



// FUNCTION 1426aea10 FUN_1426aea10 body=555 status=ok
// SIG undefined FUN_1426aea10(void)

void FUN_1426aea10(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  longlong lVar4;
  ushort *puVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  float fVar13;
  
  if (((*(byte *)(*(longlong *)(param_1 + 0x268) + 0x48) & 0x10) != 0) &&
     (uVar11 = 0, 0 < *(int *)(param_1 + 0x1fc))) {
    do {
      lVar4 = 0;
      if (0 < *(int *)(param_1 + 0x128)) {
        lVar7 = (longlong)*(int *)(param_1 + 0x30);
        puVar5 = *(ushort **)(param_1 + 0x108);
        do {
          lVar10 = (longlong)(int)((uint)*puVar5 * *(int *)(param_1 + 0x124)) +
                   *(longlong *)(param_1 + 0x100);
          puVar12 = (uint *)(lVar7 + lVar10);
          if (((*(uint *)(lVar7 + lVar10) & 0xf0000000) == 0x40000000) && (puVar12[1] == uVar11)) {
            if ((lVar10 != 0) && ((*(uint *)(lVar7 + lVar10) & 0x3fff) != 0x3fff)) {
              bVar2 = false;
              lVar4 = lVar10;
              puVar3 = puVar12;
              while ((!bVar2 &&
                     (uVar1 = *puVar3, puVar3 = (uint *)0x0, lVar4 = 0, (uVar1 & 0x3fff) != 0x3fff))
                    ) {
                bVar2 = true;
                lVar4 = (longlong)(int)(*(int *)(param_1 + 0x124) * (uVar1 & 0x3fff)) +
                        *(longlong *)(param_1 + 0x100);
                puVar3 = (uint *)(lVar7 + lVar4);
              }
              if (lVar4 != 0) {
                TrailsBase_CalculateTangent
                          (lVar10,puVar12,lVar4,puVar3,(float)puVar12[3] - (float)puVar3[3],puVar12)
                ;
                do {
                  puVar9 = puVar3;
                  lVar8 = 0;
                  puVar6 = (uint *)0x0;
                  puVar3 = puVar6;
                  lVar7 = lVar8;
                  if ((lVar4 != 0) && (puVar9 != (uint *)0x0)) {
                    bVar2 = false;
                    puVar3 = puVar9;
                    lVar7 = lVar4;
                    while ((!bVar2 &&
                           (uVar1 = *puVar3, puVar3 = puVar6, lVar7 = lVar8,
                           (uVar1 & 0x3fff) != 0x3fff))) {
                      bVar2 = true;
                      lVar7 = (longlong)(int)(*(int *)(param_1 + 0x124) * (uVar1 & 0x3fff)) +
                              *(longlong *)(param_1 + 0x100);
                      puVar3 = (uint *)(*(int *)(param_1 + 0x30) + lVar7);
                    }
                  }
                  if (lVar7 == 0) {
                    fVar13 = (float)puVar12[3] - (float)puVar9[3];
                    lVar8 = lVar4;
                    puVar6 = puVar9;
                  }
                  else {
                    fVar13 = (float)puVar9[3] - (float)puVar3[3];
                    lVar8 = lVar7;
                    puVar6 = puVar3;
                  }
                  TrailsBase_CalculateTangent(lVar10,puVar12,lVar8,puVar6,fVar13,puVar9);
                  lVar10 = lVar4;
                  lVar4 = lVar7;
                  puVar12 = puVar9;
                } while (lVar7 != 0);
              }
            }
            break;
          }
          lVar4 = lVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar4 < *(int *)(param_1 + 0x128));
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < *(int *)(param_1 + 0x1fc));
  }
  return;
}



// FUNCTION 1426aec40 TrailsBase_CalculateTangent body=195 status=ok
// SIG undefined TrailsBase_CalculateTangent(void)

void TrailsBase_CalculateTangent
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_2 + 0xc) - *(float *)(param_4 + 0xc);
  fVar1 = *(float *)(param_1 + 0x18);
  fVar2 = *(float *)(param_3 + 0x18);
  if (fVar3 == 0.0) {
    fVar3 = 0.0032;
  }
  else {
    fVar3 = ABS(fVar3);
  }
  fVar3 = 1.0 / fVar3;
  fVar4 = (float)*(int *)(param_6 + 0x18);
  *(ulonglong *)(param_6 + 0x28) =
       CONCAT44((fVar3 * (*(float *)(param_1 + 0x14) - *(float *)(param_3 + 0x14)) * param_5) /
                fVar4,(fVar3 * (*(float *)(param_1 + 0x10) - *(float *)(param_3 + 0x10)) * param_5)
                      / fVar4);
  *(float *)(param_6 + 0x30) = (fVar3 * (fVar1 - fVar2) * param_5) / fVar4;
  return;
}



// FUNCTION 1426aed10 FUN_1426aed10 body=104 status=ok
// SIG undefined FUN_1426aed10(void)

void FUN_1426aed10(longlong *param_1)

{
  longlong *plVar1;
  
  if ((char)param_1[0x25] == '\x03') {
    FUN_14223ef90(param_1,1);
  }
  FUN_14223c460(param_1,0);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x6e8))(param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x430))(plVar1);
    (**(code **)(*plVar1 + 0x358))(plVar1,0);
  }
  FUN_142227b80(param_1);
  return;
}



// FUNCTION 1426aed80 FUN_1426aed80 body=150 status=ok
// SIG undefined FUN_1426aed80(void)

void FUN_1426aed80(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 local_18 [16];
  
  lVar1 = param_1[0x92];
  (**(code **)(*param_1 + 0x600))();
  param_1[0x8f] = 0;
  if ((*(byte *)(param_1 + 0x8c) & 0x10) != 0) {
    (**(code **)(*param_1 + 0x448))(param_1,0);
  }
  param_1[0x92] = 0;
  iVar2 = FUN_142235230(param_1);
  if (iVar2 != 0) {
    FUN_14222cb50(param_1);
  }
  (**(code **)(*param_1 + 0x7d8))(param_1);
  if (lVar1 != 0) {
    FUN_1429d7dd0(param_1,lVar1);
  }
  (**(code **)(*param_1 + 0x7f0))(param_1,local_18);
  return;
}



// FUNCTION 1426aee20 FUN_1426aee20 body=93 status=ok
// SIG undefined FUN_1426aee20(void)

void FUN_1426aee20(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  undefined8 local_res10 [3];
  undefined1 *local_38;
  undefined8 *puStack_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined1 *local_18;
  
  local_20 = local_res10;
  local_res8[0] = 0;
  local_18 = local_res8;
  puStack_30 = &local_28;
  local_38 = &LAB_14268f6f0;
  local_res10[0] = param_2;
  local_28 = param_1;
  FUN_142693730(0x4268f6f0,&local_38);
  FUN_1426b01e0(param_1);
  return;
}



// FUNCTION 1426aee80 UpdateArrayFromResponseContainer body=212 status=ok
// SIG undefined UpdateArrayFromResponseContainer(void)

void FCollisionResponse::UpdateArrayFromResponseContainer(char *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  char *pcVar8;
  longlong local_res10;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  if (*(int *)(param_1 + 0x2c) != 0x20) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1,0x20);
  }
  uVar5 = UCollisionProfile::Get();
  uVar7 = 0;
  pcVar8 = param_1;
  do {
    if (*pcVar8 != pcVar8[(longlong)&DAT_146aefe48 - (longlong)param_1]) {
      UCollisionProfile::ReturnChannelNameFromContainerIndex(uVar5,&local_res10,uVar7);
      lVar4 = local_res10;
      if (local_res10 != 0) {
        iVar3 = *(int *)(param_1 + 0x28);
        cVar2 = *pcVar8;
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        if (*(int *)(param_1 + 0x2c) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
        }
        plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *plVar1);
        *plVar6 = lVar4;
        *(char *)(plVar6 + 1) = cVar2;
      }
    }
    uVar7 = uVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (uVar7 < 0x20);
  return;
}



// FUNCTION 1426aef60 FUN_1426aef60 body=310 status=ok
// SIG undefined FUN_1426aef60(void)

ulonglong FUN_1426aef60(longlong param_1,float *param_2,char param_3)

{
  ulonglong uVar1;
  byte local_res8 [24];
  undefined4 local_res20 [2];
  undefined1 *local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong *plStack_40;
  longlong local_38;
  undefined4 *local_30;
  float *local_28;
  byte *local_20;
  undefined1 **local_18;
  
  uVar1 = *(ulonglong *)(param_1 + 0x110);
  if (((uVar1 != 0) || (uVar1 = *(ulonglong *)(param_1 + 0x118), uVar1 != 0)) &&
     ((0.0001 < ABS(*(float *)(param_1 + 0x14) - *param_2) ||
      (((0.0001 < ABS(*(float *)(param_1 + 0x18) - param_2[1]) ||
        (0.0001 < ABS(*(float *)(param_1 + 0x1c) - param_2[2]))) || (param_3 != '\0')))))) {
    local_30 = local_res20;
    local_20 = local_res8;
    local_res8[0] = 0;
    local_18 = &local_58;
    plStack_50 = &local_38;
    local_58 = &LAB_14268f760;
    local_48 = 0x4268f760;
    uStack_44 = 1;
    local_res20[0] = 0;
    local_38 = param_1;
    local_28 = param_2;
    plStack_40 = plStack_50;
    FUN_142693730(0x4268f760,&local_48);
    TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(&DAT_146534730,param_1,2);
    if (local_res8[0] != 0) {
      *(undefined1 **)(param_1 + 0x14) = local_58;
      *(undefined4 *)(param_1 + 0x1c) = plStack_50._0_4_;
      if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
        FUN_1426b0300(param_1);
      }
    }
    return (ulonglong)local_res8[0];
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1426af0a0 FUN_1426af0a0 body=2035 status=ok
// SIG undefined FUN_1426af0a0(void)

void FUN_1426af0a0(longlong param_1,float param_2)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
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
  float local_108;
  float fStack_104;
  float local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined1 local_d8 [192];
  
  lVar13 = *(longlong *)(param_1 + 0x18);
  if (lVar13 != 0) {
    if (((*(char *)(lVar13 + 0x719) < '\0') || (*(longlong *)(lVar13 + 0x6f0) == 0)) ||
       ((*(byte *)(*(longlong *)(lVar13 + 0x6f0) + 0x98) & 1) != 0)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    lVar6 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
    if (bVar10) {
      if ((*(byte *)(*(longlong *)(lVar6 + 0x30) + 100) & 1) == 0) {
        uVar7 = *(undefined4 *)(lVar13 + 0x224);
        uVar8 = *(undefined4 *)(lVar13 + 0x228);
        *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(lVar13 + 0x220);
        *(undefined4 *)(param_1 + 0x160) = uVar7;
        *(undefined4 *)(param_1 + 0x164) = uVar8;
        uVar7 = *(undefined4 *)(lVar13 + 0x224);
        fVar23 = *(float *)(lVar13 + 0x228);
        *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar13 + 0x220);
        *(undefined4 *)(param_1 + 0x154) = uVar7;
      }
      else {
        *(ulonglong *)(param_1 + 0x15c) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        *(float *)(param_1 + 0x164) = DAT_1468b5d98;
        *(ulonglong *)(param_1 + 0x150) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        fVar23 = DAT_1468b5d98;
      }
      *(float *)(param_1 + 0x158) = fVar23;
    }
    iVar3 = *(int *)(param_1 + 0x128);
    *(undefined1 *)(param_1 + 0x168) = 1;
    if (0 < iVar3) {
      fVar24 = -3.4028235e+38;
      fVar28 = 3.4028235e+38;
      fVar26 = -3.4028235e+38;
      fVar23 = 3.4028235e+38;
      fVar27 = 3.4028235e+38;
      fVar25 = -3.4028235e+38;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0xb0);
      local_108 = 3.4028235e+38;
      fStack_104 = 3.4028235e+38;
      local_100 = 3.4028235e+38;
      lVar13 = (longlong)(int)((uint)**(ushort **)(param_1 + 0x108) * *(int *)(param_1 + 0x124)) +
               *(longlong *)(param_1 + 0x100);
      local_f8 = -3.4028235e+38;
      fStack_f4 = -3.4028235e+38;
      local_f0 = -3.4028235e+38;
      local_e0 = *(float *)(lVar13 + 0x18);
      local_e8 = *(undefined8 *)(lVar13 + 0x10);
      if (0 < iVar3) {
        lVar15 = 0;
        fVar17 = *(float *)((longlong)*(int *)(param_1 + 0x30) + 0x40 + lVar13);
        do {
          iVar4 = *(int *)(param_1 + 0x30);
          puVar14 = (undefined8 *)
                    ((longlong)
                     (int)((uint)*(ushort *)(*(longlong *)(param_1 + 0x108) + lVar15 * 2) *
                          *(int *)(param_1 + 0x124)) + *(longlong *)(param_1 + 0x100));
          uVar5 = *(uint *)(puVar14 + 0xd);
          *(uint *)(puVar14 + 0xd) = uVar5 & 0xfdffffff;
          if (((uVar5 >> 0x19 & 1) == 0) || ((~bVar2 & 1) == 0)) {
            fVar29 = param_2 * *(float *)(puVar14 + 8);
            bVar11 = false;
            fVar21 = param_2 * *(float *)((longlong)puVar14 + 0x44);
            fVar16 = param_2 * *(float *)((longlong)puVar14 + 0x3c);
          }
          else {
            bVar11 = true;
            fVar16 = DAT_1468b5d90;
            fVar21 = DAT_1468b5d98;
            fVar29 = DAT_1468b5d94;
          }
          *(float *)(puVar14 + 4) = fVar16 + *(float *)(puVar14 + 4);
          *(float *)((longlong)puVar14 + 0x24) = fVar29 + *(float *)((longlong)puVar14 + 0x24);
          *(float *)(puVar14 + 5) = fVar21 + *(float *)(puVar14 + 5);
          fVar16 = DAT_1468b5d90;
          fVar21 = DAT_1468b5d98;
          fVar29 = DAT_1468b5d94;
          if (!bVar11) {
            fVar16 = param_2 * *(float *)((longlong)puVar14 + 0x3c);
            fVar21 = param_2 * *(float *)((longlong)puVar14 + 0x44);
            fVar29 = param_2 * *(float *)(puVar14 + 8);
          }
          fVar22 = *(float *)(puVar14 + 3);
          *(float *)(puVar14 + 2) = fVar16 + *(float *)(puVar14 + 2);
          *(float *)((longlong)puVar14 + 0x14) = fVar29 + *(float *)((longlong)puVar14 + 0x14);
          *(float *)(puVar14 + 3) = fVar21 + fVar22;
          if (bVar11) {
            fVar16 = 0.0;
          }
          else {
            fVar16 = param_2 * *(float *)(puVar14 + 0xb);
          }
          *(float *)(puVar14 + 7) = fVar16 + *(float *)(puVar14 + 7);
          *(float *)(puVar14 + 4) = *(float *)(param_1 + 0x1b8) + *(float *)(puVar14 + 4);
          *(float *)((longlong)puVar14 + 0x24) =
               *(float *)(param_1 + 0x1bc) + *(float *)((longlong)puVar14 + 0x24);
          *(float *)(puVar14 + 5) = *(float *)(puVar14 + 5) + *(float *)(param_1 + 0x1c0);
          *(float *)(puVar14 + 2) = *(float *)(puVar14 + 2) + *(float *)(param_1 + 0x1b8);
          *(float *)((longlong)puVar14 + 0x14) =
               *(float *)((longlong)puVar14 + 0x14) + *(float *)(param_1 + 0x1bc);
          *(float *)(puVar14 + 3) = fVar21 + fVar22 + *(float *)(param_1 + 0x1c0);
          fVar21 = *(float *)(puVar14 + 3);
          *puVar14 = puVar14[2];
          *(float *)(puVar14 + 1) = fVar21;
          fVar16 = fVar17;
          if (bVar10) {
            fVar29 = *(float *)(puVar14 + 2);
            fVar22 = *(float *)((longlong)puVar14 + 0x14);
            fVar18 = fVar29 - (float)local_e8;
            fVar1 = *(float *)(puVar14 + 3);
            fVar19 = fVar22 - local_e8._4_4_;
            fVar16 = *(float *)((longlong)iVar4 + 0x40 + (longlong)puVar14);
            local_e8 = puVar14[2];
            fVar18 = (SQRT(fVar19 * fVar19 + fVar18 * fVar18 +
                           (fVar1 - local_e0) * (fVar1 - local_e0)) + (fVar16 - fVar17)) * 0.25 +
                     fVar16;
            fVar20 = fVar29 - fVar18;
            fVar29 = fVar18 + fVar29;
            fVar17 = fVar22 - fVar18;
            fVar19 = fVar1 - fVar18;
            fVar22 = fVar18 + fVar22;
            fVar18 = fVar18 + fVar1;
            if (fVar20 <= fVar28) {
              fVar28 = fVar20;
              local_108 = fVar20;
            }
            if (fVar17 <= fVar23) {
              fVar23 = fVar17;
              fStack_104 = fVar17;
            }
            if (fVar19 <= fVar27) {
              fVar27 = fVar19;
              local_100 = fVar19;
            }
            if (fVar24 <= fVar20) {
              fVar24 = fVar20;
              local_f8 = fVar20;
            }
            if (fVar26 <= fVar17) {
              fVar26 = fVar17;
              fStack_f4 = fVar17;
            }
            if (fVar25 <= fVar19) {
              fVar25 = fVar19;
              local_f0 = fVar19;
            }
            if (fVar29 <= fVar28) {
              fVar28 = fVar29;
              local_108 = fVar29;
            }
            if (fVar22 <= fVar23) {
              fVar23 = fVar22;
              fStack_104 = fVar22;
            }
            if (fVar18 <= fVar27) {
              fVar27 = fVar18;
              local_100 = fVar18;
            }
            if (fVar24 <= fVar29) {
              fVar24 = fVar29;
              local_f8 = fVar29;
            }
            if (fVar26 <= fVar22) {
              fVar26 = fVar22;
              fStack_f4 = fVar22;
            }
            local_e0 = fVar21;
            if (fVar25 <= fVar18) {
              fVar25 = fVar18;
              local_f0 = fVar18;
            }
          }
          fVar17 = *(float *)(puVar14 + 7);
          fVar21 = (float)(int)(fVar17 * 0.15915494) * 6.2831855;
          if (ABS(fVar17) < ABS(fVar21)) {
            fVar21 = fVar17;
          }
          lVar15 = lVar15 + 1;
          *(float *)(puVar14 + 7) = fVar17 - fVar21;
          fVar17 = fVar16;
        } while (lVar15 < iVar3);
      }
      if (!bVar10) {
        return;
      }
      cVar12 = *(char *)(param_1 + 0x168);
      if (cVar12 == '\0') {
        *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fStack_104,local_108);
        *(ulonglong *)(param_1 + 0x150) = CONCAT44(fStack_104,local_108);
        *(float *)(param_1 + 0x164) = local_100;
        *(float *)(param_1 + 0x158) = local_100;
        cVar12 = '\x01';
        *(undefined1 *)(param_1 + 0x168) = 1;
      }
      else {
        fVar17 = *(float *)(param_1 + 0x150);
        if (fVar28 <= *(float *)(param_1 + 0x150)) {
          fVar17 = fVar28;
        }
        fVar16 = *(float *)(param_1 + 0x154);
        if (fVar23 <= *(float *)(param_1 + 0x154)) {
          fVar16 = fVar23;
        }
        if (fVar23 <= *(float *)(param_1 + 0x160)) {
          fVar23 = *(float *)(param_1 + 0x160);
        }
        *(float *)(param_1 + 0x150) = fVar17;
        fVar17 = *(float *)(param_1 + 0x158);
        if (fVar27 <= *(float *)(param_1 + 0x158)) {
          fVar17 = fVar27;
        }
        *(float *)(param_1 + 0x154) = fVar16;
        fVar16 = *(float *)(param_1 + 0x15c);
        if (*(float *)(param_1 + 0x15c) <= fVar28) {
          fVar16 = fVar28;
        }
        *(float *)(param_1 + 0x160) = fVar23;
        *(float *)(param_1 + 0x158) = fVar17;
        fVar23 = *(float *)(param_1 + 0x164);
        if (*(float *)(param_1 + 0x164) <= fVar27) {
          fVar23 = fVar27;
        }
        *(float *)(param_1 + 0x15c) = fVar16;
        *(float *)(param_1 + 0x164) = fVar23;
      }
      if (cVar12 == '\0') {
        *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fStack_f4,local_f8);
        *(ulonglong *)(param_1 + 0x150) = CONCAT44(fStack_f4,local_f8);
        *(float *)(param_1 + 0x164) = local_f0;
        *(float *)(param_1 + 0x158) = local_f0;
        *(undefined1 *)(param_1 + 0x168) = 1;
      }
      else {
        fVar23 = *(float *)(param_1 + 0x150);
        if (fVar24 <= *(float *)(param_1 + 0x150)) {
          fVar23 = fVar24;
        }
        fVar27 = *(float *)(param_1 + 0x154);
        if (fVar26 <= *(float *)(param_1 + 0x154)) {
          fVar27 = fVar26;
        }
        *(float *)(param_1 + 0x150) = fVar23;
        fVar23 = fVar25;
        if (*(float *)(param_1 + 0x158) <= fVar25) {
          fVar23 = *(float *)(param_1 + 0x158);
        }
        *(float *)(param_1 + 0x154) = fVar27;
        fVar27 = *(float *)(param_1 + 0x15c);
        if (*(float *)(param_1 + 0x15c) <= fVar24) {
          fVar27 = fVar24;
        }
        *(float *)(param_1 + 0x158) = fVar23;
        fVar23 = *(float *)(param_1 + 0x160);
        if (*(float *)(param_1 + 0x160) <= fVar26) {
          fVar23 = fVar26;
        }
        *(float *)(param_1 + 0x15c) = fVar27;
        fVar24 = *(float *)(param_1 + 0x164);
        if (*(float *)(param_1 + 0x164) <= fVar25) {
          fVar24 = fVar25;
        }
        *(float *)(param_1 + 0x160) = fVar23;
        *(float *)(param_1 + 0x164) = fVar24;
      }
    }
    if ((bVar10) && ((*(byte *)(*(longlong *)(lVar6 + 0x30) + 100) & 1) != 0)) {
      puVar14 = (undefined8 *)
                FBox::TransformBy(param_1 + 0x150,local_d8,*(longlong *)(param_1 + 0x18) + 0x210);
      uVar9 = puVar14[1];
      *(undefined8 *)(param_1 + 0x150) = *puVar14;
      *(undefined8 *)(param_1 + 0x158) = uVar9;
      *(undefined8 *)(param_1 + 0x160) = puVar14[2];
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(puVar14 + 3);
    }
  }
  return;
}



// FUNCTION 1426af8a0 FUN_1426af8a0 body=2157 status=ok
// SIG undefined FUN_1426af8a0(void)

void FUN_1426af8a0(longlong param_1,float param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
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
  float local_118;
  float fStack_114;
  float local_110;
  float local_108;
  float fStack_104;
  float local_100;
  float local_f8;
  float fStack_f4;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  
  lVar13 = *(longlong *)(param_1 + 0x18);
  if (lVar13 != 0) {
    if (((*(char *)(lVar13 + 0x719) < '\0') || (*(longlong *)(lVar13 + 0x6f0) == 0)) ||
       ((*(byte *)(*(longlong *)(lVar13 + 0x6f0) + 0x98) & 1) != 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    lVar4 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
    if (bVar8) {
      if ((*(byte *)(*(longlong *)(lVar4 + 0x30) + 100) & 1) == 0) {
        uVar5 = *(undefined4 *)(lVar13 + 0x224);
        uVar6 = *(undefined4 *)(lVar13 + 0x228);
        *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(lVar13 + 0x220);
        *(undefined4 *)(param_1 + 0x160) = uVar5;
        *(undefined4 *)(param_1 + 0x164) = uVar6;
        uVar5 = *(undefined4 *)(lVar13 + 0x224);
        fVar17 = *(float *)(lVar13 + 0x228);
        *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar13 + 0x220);
        *(undefined4 *)(param_1 + 0x154) = uVar5;
      }
      else {
        *(ulonglong *)(param_1 + 0x15c) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        *(float *)(param_1 + 0x164) = DAT_1468b5d98;
        *(ulonglong *)(param_1 + 0x150) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        fVar17 = DAT_1468b5d98;
      }
      *(float *)(param_1 + 0x158) = fVar17;
    }
    iVar2 = *(int *)(param_1 + 0x128);
    *(undefined1 *)(param_1 + 0x168) = 1;
    local_e8 = *(float *)(lVar13 + 0x230);
    fStack_e4 = *(float *)(lVar13 + 0x234);
    fStack_e0 = *(float *)(lVar13 + 0x238);
    uStack_dc = *(undefined4 *)(lVar13 + 0x23c);
    if (0 < iVar2) {
      fVar25 = 3.4028235e+38;
      fVar27 = -3.4028235e+38;
      fVar19 = 3.4028235e+38;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0xb0);
      fVar17 = -3.4028235e+38;
      local_118 = 3.4028235e+38;
      fStack_114 = 3.4028235e+38;
      fVar20 = 3.4028235e+38;
      local_110 = 3.4028235e+38;
      fVar26 = -3.4028235e+38;
      local_108 = -3.4028235e+38;
      fStack_104 = -3.4028235e+38;
      local_100 = -3.4028235e+38;
      if (0 < iVar2) {
        lVar13 = 0;
        do {
          puVar12 = (undefined8 *)
                    ((longlong)
                     (int)((uint)*(ushort *)(*(longlong *)(param_1 + 0x108) + lVar13 * 2) *
                          *(int *)(param_1 + 0x124)) + *(longlong *)(param_1 + 0x100));
          uVar3 = *(uint *)(puVar12 + 0xd);
          fVar22 = local_e8 * *(float *)((longlong)puVar12 + 0x5c);
          fVar14 = fStack_e0 * *(float *)((longlong)puVar12 + 100);
          *(uint *)(puVar12 + 0xd) = uVar3 & 0xfdffffff;
          if (((uVar3 >> 0x19 & 1) == 0) || ((~bVar1 & 1) == 0)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          fVar24 = *(float *)((longlong)puVar12 + 0x44);
          lVar11 = (longlong)*(int *)(param_1 + 0x58);
          local_f8 = (float)*(undefined8 *)((longlong)puVar12 + 0x3c);
          fStack_f4 = (float)((ulonglong)*(undefined8 *)((longlong)puVar12 + 0x3c) >> 0x20);
          if (*(int *)(param_1 + 0x58) != 0) {
            fVar17 = *(float *)(lVar11 + 0x14 + (longlong)puVar12);
            fVar19 = *(float *)(lVar11 + 0x18 + (longlong)puVar12);
            fVar20 = *(float *)(lVar11 + 0x10 + (longlong)puVar12);
            fVar16 = *(float *)(lVar11 + 0x1c + (longlong)puVar12);
            fVar21 = fVar24 * fVar17 - fStack_f4 * fVar19;
            fVar23 = local_f8 * fVar19 - fVar24 * fVar20;
            fVar21 = fVar21 + fVar21;
            fVar18 = fStack_f4 * fVar20 - local_f8 * fVar17;
            fVar23 = fVar23 + fVar23;
            fVar18 = fVar18 + fVar18;
            local_f8 = (fVar18 * fVar17 - fVar23 * fVar19) + fVar21 * fVar16 + local_f8;
            fVar24 = (fVar23 * fVar20 - fVar21 * fVar17) + fVar18 * fVar16 + fVar24;
            fStack_f4 = (fVar21 * fVar19 - fVar18 * fVar20) + fVar23 * fVar16 + fStack_f4;
            fVar17 = local_100;
            fVar19 = fStack_114;
            fVar20 = local_110;
          }
          fVar18 = DAT_1468b5d90;
          fVar21 = DAT_1468b5d94;
          fVar16 = DAT_1468b5d98;
          if (!bVar9) {
            fVar18 = local_f8 * param_2;
            fVar21 = fStack_f4 * param_2;
            fVar16 = fVar24 * param_2;
          }
          *(float *)(puVar12 + 4) = fVar18 + *(float *)(puVar12 + 4);
          *(float *)((longlong)puVar12 + 0x24) = fVar21 + *(float *)((longlong)puVar12 + 0x24);
          *(float *)(puVar12 + 5) = fVar16 + *(float *)(puVar12 + 5);
          fVar16 = DAT_1468b5d94;
          fVar18 = DAT_1468b5d98;
          fVar21 = DAT_1468b5d90;
          if (!bVar9) {
            fVar16 = fStack_f4 * param_2;
            fVar18 = fVar24 * param_2;
            fVar21 = local_f8 * param_2;
          }
          fVar24 = *(float *)(puVar12 + 2);
          fVar16 = fVar16 + *(float *)((longlong)puVar12 + 0x14);
          fVar23 = *(float *)(puVar12 + 3);
          *(float *)(puVar12 + 2) = fVar21 + fVar24;
          *(float *)((longlong)puVar12 + 0x14) = fVar16;
          *(float *)(puVar12 + 3) = fVar18 + fVar23;
          if (bVar9) {
            fVar15 = 0.0;
          }
          else {
            fVar15 = param_2 * *(float *)(puVar12 + 0xb);
          }
          *(float *)(puVar12 + 7) = fVar15 + *(float *)(puVar12 + 7);
          *(float *)(puVar12 + 2) = fVar21 + fVar24 + *(float *)(param_1 + 0x1b8);
          fVar16 = *(float *)(param_1 + 0x1bc) + fVar16;
          *(float *)((longlong)puVar12 + 0x14) = fVar16;
          *(float *)(puVar12 + 3) = *(float *)(param_1 + 0x1c0) + fVar18 + fVar23;
          *puVar12 = puVar12[2];
          *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar12 + 3);
          if (bVar8) {
            fVar24 = fVar16 - fStack_e4 * *(float *)(puVar12 + 0xc);
            fVar16 = fVar16 + fStack_e4 * *(float *)(puVar12 + 0xc);
            fVar21 = *(float *)(puVar12 + 2) - fVar22;
            fVar18 = *(float *)(puVar12 + 3) - fVar14;
            fVar14 = *(float *)(puVar12 + 3) + fVar14;
            fVar22 = *(float *)(puVar12 + 2) + fVar22;
            if (fVar21 <= fVar25) {
              fVar25 = fVar21;
              local_118 = fVar21;
            }
            if (fVar24 <= fVar19) {
              fVar19 = fVar24;
              fStack_114 = fVar24;
            }
            if (fVar18 <= fVar20) {
              fVar20 = fVar18;
              local_110 = fVar18;
            }
            if (fVar27 <= fVar21) {
              fVar27 = fVar21;
              local_108 = fVar21;
            }
            if (fVar26 <= fVar24) {
              fVar26 = fVar24;
              fStack_104 = fVar24;
            }
            if (fVar17 <= fVar18) {
              fVar17 = fVar18;
              local_100 = fVar18;
            }
            if (fVar22 <= fVar25) {
              fVar25 = fVar22;
              local_118 = fVar22;
            }
            if (fVar16 <= fVar19) {
              fVar19 = fVar16;
              fStack_114 = fVar16;
            }
            if (fVar14 <= fVar20) {
              fVar20 = fVar14;
              local_110 = fVar14;
            }
            if (fVar27 <= fVar22) {
              fVar27 = fVar22;
              local_108 = fVar22;
            }
            if (fVar26 <= fVar16) {
              fVar26 = fVar16;
              fStack_104 = fVar16;
            }
            if (fVar17 <= fVar14) {
              fVar17 = fVar14;
              local_100 = fVar14;
            }
          }
          fVar14 = *(float *)(puVar12 + 7);
          fVar22 = (float)(int)(fVar14 * 0.15915494) * 6.2831855;
          if (ABS(fVar14) < ABS(fVar22)) {
            fVar22 = fVar14;
          }
          lVar13 = lVar13 + 1;
          *(float *)(puVar12 + 7) = fVar14 - fVar22;
        } while (lVar13 < iVar2);
      }
      if (!bVar8) {
        return;
      }
      cVar10 = *(char *)(param_1 + 0x168);
      if (cVar10 == '\0') {
        *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fStack_114,local_118);
        *(ulonglong *)(param_1 + 0x150) = CONCAT44(fStack_114,local_118);
        *(float *)(param_1 + 0x164) = local_110;
        *(float *)(param_1 + 0x158) = local_110;
        cVar10 = '\x01';
        *(undefined1 *)(param_1 + 0x168) = 1;
      }
      else {
        fVar14 = *(float *)(param_1 + 0x150);
        if (fVar25 <= *(float *)(param_1 + 0x150)) {
          fVar14 = fVar25;
        }
        if (fVar25 <= *(float *)(param_1 + 0x15c)) {
          fVar25 = *(float *)(param_1 + 0x15c);
        }
        fVar22 = *(float *)(param_1 + 0x154);
        if (fVar19 <= *(float *)(param_1 + 0x154)) {
          fVar22 = fVar19;
        }
        *(float *)(param_1 + 0x150) = fVar14;
        fVar14 = fVar20;
        if (*(float *)(param_1 + 0x158) <= fVar20) {
          fVar14 = *(float *)(param_1 + 0x158);
        }
        *(float *)(param_1 + 0x154) = fVar22;
        fVar22 = *(float *)(param_1 + 0x164);
        if (*(float *)(param_1 + 0x164) <= fVar20) {
          fVar22 = fVar20;
        }
        *(float *)(param_1 + 0x15c) = fVar25;
        *(float *)(param_1 + 0x158) = fVar14;
        fVar20 = *(float *)(param_1 + 0x160);
        if (*(float *)(param_1 + 0x160) <= fVar19) {
          fVar20 = fVar19;
        }
        *(float *)(param_1 + 0x164) = fVar22;
        *(float *)(param_1 + 0x160) = fVar20;
      }
      if (cVar10 == '\0') {
        *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fStack_104,local_108);
        *(ulonglong *)(param_1 + 0x150) = CONCAT44(fStack_104,local_108);
        *(float *)(param_1 + 0x164) = local_100;
        *(float *)(param_1 + 0x158) = local_100;
        *(undefined1 *)(param_1 + 0x168) = 1;
      }
      else {
        fVar19 = *(float *)(param_1 + 0x150);
        if (fVar27 <= *(float *)(param_1 + 0x150)) {
          fVar19 = fVar27;
        }
        fVar20 = *(float *)(param_1 + 0x154);
        if (fVar26 <= *(float *)(param_1 + 0x154)) {
          fVar20 = fVar26;
        }
        if (fVar26 <= *(float *)(param_1 + 0x160)) {
          fVar26 = *(float *)(param_1 + 0x160);
        }
        *(float *)(param_1 + 0x150) = fVar19;
        fVar19 = *(float *)(param_1 + 0x158);
        if (fVar17 <= *(float *)(param_1 + 0x158)) {
          fVar19 = fVar17;
        }
        *(float *)(param_1 + 0x154) = fVar20;
        fVar20 = *(float *)(param_1 + 0x15c);
        if (*(float *)(param_1 + 0x15c) <= fVar27) {
          fVar20 = fVar27;
        }
        *(float *)(param_1 + 0x160) = fVar26;
        *(float *)(param_1 + 0x158) = fVar19;
        fVar19 = *(float *)(param_1 + 0x164);
        if (*(float *)(param_1 + 0x164) <= fVar17) {
          fVar19 = fVar17;
        }
        *(float *)(param_1 + 0x15c) = fVar20;
        *(float *)(param_1 + 0x164) = fVar19;
      }
    }
    if ((bVar8) && ((*(byte *)(*(longlong *)(lVar4 + 0x30) + 100) & 1) != 0)) {
      puVar12 = (undefined8 *)
                FBox::TransformBy(param_1 + 0x150,&local_e8,*(longlong *)(param_1 + 0x18) + 0x210);
      uVar7 = puVar12[1];
      *(undefined8 *)(param_1 + 0x150) = *puVar12;
      *(undefined8 *)(param_1 + 0x158) = uVar7;
      *(undefined8 *)(param_1 + 0x160) = puVar12[2];
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(puVar12 + 3);
    }
  }
  return;
}



// FUNCTION 1426b0110 FUN_1426b0110 body=200 status=ok
// SIG undefined FUN_1426b0110(void)

void FUN_1426b0110(longlong param_1)

{
  short sVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x110);
  plVar3 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar3 != (longlong *)0x0) {
    if (plVar3 == plVar2) {
      sVar1 = *(short *)(param_1 + 6);
    }
    else {
      sVar1 = *(short *)(param_1 + 8);
    }
    plVar2 = (longlong *)FUN_1426e2550((int)sVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x358))
                (plVar2,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                 0x136);
    }
    plVar4 = (longlong *)0x0;
    if ((short)plVar3[1] == 6) {
      plVar4 = plVar3;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x1c0))(plVar4,*(undefined4 *)(param_1 + 0x68));
      (**(code **)(*plVar4 + 0x1d0))(plVar4,*(undefined4 *)(param_1 + 0x6c));
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))(plVar2);
    }
  }
  return;
}



// FUNCTION 1426b01e0 FUN_1426b01e0 body=277 status=ok
// SIG undefined FUN_1426b01e0(void)

void FUN_1426b01e0(longlong param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar4 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar5 = plVar4[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar5 = plVar4[0x1f];
  }
  if (*(char *)(lVar5 + 0xb8) == '\0') {
    return;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x138);
  lVar5 = 0;
  if (cVar1 == '\0') {
LAB_1426b027a:
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x138);
    if (lVar6 != 0) {
      lVar5 = *(longlong *)(lVar6 + 0x118);
    }
    if ((lVar5 == 0) || (*(char *)(lVar5 + 0x93) < '\0')) {
      uVar3 = (uint)*(byte *)(param_1 + 0xc);
      goto LAB_1426b02a4;
    }
  }
  else {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x138);
    lVar6 = (**(code **)(*plVar4 + 0x6d0))(plVar4,0,1);
    if (lVar6 == param_1) goto LAB_1426b027a;
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x138);
    uVar3 = (**(code **)(*plVar4 + 0x4e8))(plVar4);
LAB_1426b02a4:
    if (uVar3 - 2 < 2) {
      bVar2 = 2;
      goto LAB_1426b02b2;
    }
  }
  bVar2 = 0;
LAB_1426b02b2:
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfd;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | bVar2;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1426b01e0();
    bVar2 = *(byte *)(param_1 + 0x13);
    *(byte *)(param_1 + 0x13) =
         ((*(byte *)(*(longlong *)(param_1 + 200) + 0x13) | bVar2) ^ bVar2) & 2 ^ bVar2;
  }
  return;
}



// FUNCTION 1426b0300 FUN_1426b0300 body=214 status=ok
// SIG undefined FUN_1426b0300(void)

void FUN_1426b0300(longlong param_1)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_res8;
  
  FUN_142698570();
  if (*(char *)(param_1 + 0x192) == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x110);
    plVar5 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x118);
    }
    local_res8 = param_1;
    if (plVar5 != (longlong *)0x0) {
      if (plVar5 == plVar3) {
        sVar2 = *(short *)(param_1 + 6);
      }
      else {
        sVar2 = *(short *)(param_1 + 8);
      }
      plVar3 = (longlong *)FUN_1426e2550((int)sVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x358))
                  (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                   0xf6);
      }
      cVar1 = (**(code **)(*plVar5 + 0x20))(plVar5);
      plVar4 = (longlong *)0x0;
      if (cVar1 != '\0') {
        plVar4 = plVar5;
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_142689810(&local_res8);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x360))(plVar3);
      }
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x158,param_1);
  }
  return;
}



// FUNCTION 1426b03e0 UpdatePhysicalMaterials body=153 status=ok
// SIG undefined UpdatePhysicalMaterials(void)

void FBodyInstance::UpdatePhysicalMaterials(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_res8;
  undefined1 *local_48;
  undefined8 *puStack_40;
  longlong local_38 [2];
  undefined8 local_28;
  undefined8 *local_20;
  longlong *local_18;
  
  lVar1 = FUN_142698570();
  FUN_1426963d0(param_1,local_38);
  if (lVar1 == 0) {
    local_res8 = 0;
  }
  else {
    local_res8 = FUN_1426c86a0(lVar1);
  }
  local_20 = &local_res8;
  local_18 = local_38;
  puStack_40 = &local_28;
  local_48 = &LAB_14268f700;
  local_28 = param_1;
  FUN_142693730(param_1,&local_48);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426b0480 FUN_1426b0480 body=930 status=ok
// SIG undefined FUN_1426b0480(void)

void FUN_1426b0480(byte *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  byte bVar10;
  byte *pbVar11;
  bool bVar12;
  byte local_res8 [8];
  byte local_res10 [8];
  byte local_res18 [8];
  undefined4 local_res20 [2];
  byte *local_e8;
  byte **ppbStack_e0;
  byte *local_d8;
  byte *local_d0;
  byte *local_c8 [2];
  undefined1 *local_b8;
  byte **ppbStack_b0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  byte *local_78;
  byte **local_70;
  byte **local_68;
  byte **local_60;
  undefined4 *local_58;
  byte *local_50;
  
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1426b0480();
    return;
  }
  if ((*(longlong *)(param_1 + 0x110) == 0) && (*(longlong *)(param_1 + 0x118) == 0)) {
    return;
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x140);
  if (cVar3 == '\0') {
    return;
  }
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x138);
  if (plVar5 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
LAB_1426b0549:
    bVar10 = 1;
  }
  else {
    plVar9 = (longlong *)plVar5[0x23];
    cVar3 = (**(code **)(*plVar5 + 0x4e0))(plVar5);
    if (cVar3 != '\0') goto LAB_1426b0549;
    bVar10 = 0;
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x138);
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = *(longlong *)(lVar6 + 0x118);
  }
  if ((lVar7 == 0) || (*(char *)(lVar7 + 0x93) < '\0')) {
    local_res8[0] = param_1[0xc];
  }
  else {
    local_res8[0] = 0;
  }
  local_98 = *(undefined4 *)(param_1 + 0x28);
  uStack_94 = *(undefined4 *)(param_1 + 0x2c);
  uStack_90 = *(undefined4 *)(param_1 + 0x30);
  uStack_8c = *(undefined4 *)(param_1 + 0x34);
  bVar2 = false;
  bVar12 = false;
  local_88 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = *(undefined8 *)(param_1 + 0x40);
  local_res10[0] = param_1[0x10] >> 1 & 1;
  if (plVar5 == (longlong *)0x0) goto LAB_1426b06db;
  lVar7 = FUN_142a07000();
  if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) || (param_1[400] != 0)) goto LAB_1426b06db;
  if (plVar9 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar9 + 0x93) < '\0') {
      local_res8[0] = *(byte *)((longlong)plVar5 + 0x3bc);
    }
    else {
      local_res8[0] = 0;
    }
  }
  bVar4 = (**(code **)(*plVar5 + 0x4f8))(plVar5);
  param_1[10] = bVar4;
  if ((*DAT_146b077c8 == 0) || ((param_1[0x12] & 0x10) == 0)) {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x140);
    if (*(char *)(lVar7 + 0x9b) == '\0') {
      FUN_1426ea8d0(&local_98,2);
    }
    else {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x140);
      if (*(char *)(lVar7 + 0x9b) == '\x01') goto LAB_1426b0668;
    }
  }
  else {
LAB_1426b0668:
    FUN_1426ea8d0(&local_98,0,0);
    local_res8[0] = 2;
  }
  puVar8 = (undefined4 *)FUN_1426db3d0(&local_b8,&local_98,plVar5 + 0x7b);
  local_98 = *puVar8;
  uStack_94 = puVar8[1];
  uStack_90 = puVar8[2];
  uStack_8c = puVar8[3];
  local_88 = *(undefined8 *)(puVar8 + 4);
  uStack_80 = *(undefined8 *)(puVar8 + 6);
  if ((local_res10[0] == 0) || ((*(byte *)(plVar5 + 0x78) & 2) == 0)) {
    local_res10[0] = 0;
  }
  else {
    local_res10[0] = 1;
  }
  bVar12 = true;
  bVar2 = true;
  if (*DAT_146b077c8 != 0) {
    bVar12 = (param_1[0x12] & 0x20) == 0;
    bVar2 = true;
  }
LAB_1426b06db:
  pbVar11 = (byte *)0x0;
  if (((param_1[0xb] == 0) && (plVar9 != (longlong *)0x0)) &&
     (local_res18[0] = (**(code **)(*plVar9 + 0x6b8))(plVar9), param_1[0xb] != local_res18[0])) {
    local_d0 = local_res18;
    ppbStack_e0 = &local_d8;
    local_e8 = &LAB_14268f780;
    local_b8 = &LAB_14268f780;
    local_d8 = param_1;
    ppbStack_b0 = ppbStack_e0;
    FUN_142693730(param_1,&local_b8);
    param_1[0xb] = local_res18[0];
  }
  if (plVar5 == (longlong *)0x0) {
    local_res20[0] = 0xffffffff;
  }
  else {
    local_res20[0] = *(undefined4 *)((longlong)plVar5 + 0xc);
  }
  local_d8 = local_res10;
  if (!bVar2) {
    local_d8 = pbVar11;
  }
  local_e8 = (byte *)&local_98;
  if (!bVar12) {
    local_e8 = pbVar11;
  }
  local_c8[0] = local_res8;
  if (!bVar2) {
    local_c8[0] = pbVar11;
  }
  local_70 = local_c8;
  local_68 = &local_e8;
  local_60 = &local_d8;
  local_58 = local_res20;
  local_50 = local_res18;
  ppbStack_b0 = &local_78;
  local_b8 = &LAB_14268f740;
  local_res18[0] = bVar10;
  local_78 = param_1;
  FUN_142693730(param_1,&local_b8);
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x198,param_1);
  FUN_1426b01e0(param_1);
  return;
}



// FUNCTION 1426b0830 UpdateResponseContainerFromArray body=225 status=ok
// SIG undefined UpdateResponseContainerFromArray(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FCollisionResponse::UpdateResponseContainerFromArray(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  uVar3 = uRam0000000146aefe54;
  uVar2 = uRam0000000146aefe50;
  uVar1 = uRam0000000146aefe4c;
  iVar7 = 0;
  *param_1 = _DAT_146aefe48;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar5 = uRam0000000146aefe60;
  iVar9 = 1;
  *(undefined8 *)(param_1 + 4) = _DAT_146aefe58;
  *(undefined8 *)(param_1 + 6) = uVar5;
  while ((-1 < iVar7 && (iVar7 < (int)param_1[10]))) {
    lVar8 = *(longlong *)(param_1 + 8) + (longlong)iVar7 * 0x10;
    uVar5 = UCollisionProfile::Get();
    iVar4 = UCollisionProfile::ReturnContainerIndexFromChannelName(uVar5,lVar8);
    if (iVar4 == -1) {
      iVar4 = param_1[10];
      iVar6 = (iVar4 - iVar7) + -1;
      if (iVar6 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 8)),
                   (void *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 8)),
                   (longlong)iVar6 << 4);
        iVar4 = param_1[10];
      }
      param_1[10] = iVar4 + -1;
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 8);
    }
    else {
      FCollisionResponseContainer::SetResponse(param_1,iVar4,*(undefined1 *)(lVar8 + 8));
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 1;
    }
  }
  return;
}



// FUNCTION 1426b0920 FUN_1426b0920 body=1355 status=ok
// SIG undefined FUN_1426b0920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426b0920(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  char cVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_res8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_90;
  undefined4 local_84;
  undefined8 local_78;
  undefined8 uStack_70;
  
  fVar4 = *(float *)(param_1 + 0x200);
  if ((*(longlong *)(param_1 + 0x278) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x278) + 0x38) != '\x01')) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  iVar19 = 0;
  if (0 < *(int *)(param_1 + 0x1fc)) {
    lVar17 = 0;
    lVar16 = 0;
    lVar14 = 0;
    do {
      iVar5 = *(int *)(lVar14 + *(longlong *)(param_1 + 0x350));
      cVar12 = FUN_1426a6ff0(param_1,iVar19,&local_c8,&local_78,&local_b8,&local_a8,&local_res8);
      if (cVar12 == '\x01') {
        if ((*(int *)(lVar14 + *(longlong *)(param_1 + 0x350)) == -1) && (bVar11)) {
          lVar6 = *(longlong *)(param_1 + 0x2d8);
          *(undefined8 *)(lVar6 + lVar16) = local_c8;
          *(undefined4 *)(lVar6 + 8 + lVar16) = local_c0;
          lVar6 = *(longlong *)(param_1 + 0x308);
          *(undefined8 *)(lVar6 + lVar16) = local_a8;
          *(undefined4 *)(lVar6 + 8 + lVar16) = local_a0;
          *(undefined4 *)(lVar14 + *(longlong *)(param_1 + 0x318)) = (undefined4)local_res8;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x2e8) + lVar17);
          *puVar1 = local_78;
          puVar1[1] = uStack_70;
          lVar6 = *(longlong *)(param_1 + 0x2f8);
          *(undefined8 *)(lVar6 + lVar16) = local_b8;
          *(undefined4 *)(lVar6 + 8 + lVar16) = local_b0;
          lVar6 = *(longlong *)(param_1 + 0x288);
          *(undefined8 *)(lVar6 + lVar16) = local_c8;
          *(undefined4 *)(lVar6 + 8 + lVar16) = local_c0;
          lVar6 = *(longlong *)(param_1 + 0x2b8);
          *(undefined8 *)(lVar6 + lVar16) = local_a8;
          *(undefined4 *)(lVar6 + 8 + lVar16) = local_a0;
          *(undefined4 *)(lVar14 + *(longlong *)(param_1 + 0x2c8)) = (undefined4)local_res8;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x298) + lVar17);
          *puVar1 = local_78;
          puVar1[1] = uStack_70;
          lVar6 = *(longlong *)(param_1 + 0x2a8);
          *(undefined8 *)(lVar6 + lVar16) = local_b8;
          *(undefined4 *)(lVar6 + 8 + lVar16) = local_b0;
          *(undefined4 *)(lVar14 + *(longlong *)(param_1 + 0x210)) = 0;
        }
        else {
          if ((param_3 == '\x01') || ((iVar5 == -1 && (bVar11)))) {
            lVar6 = *(longlong *)(param_1 + 0x2d8);
            *(undefined8 *)(lVar6 + lVar16) = local_c8;
            *(undefined4 *)(lVar6 + 8 + lVar16) = local_c0;
            lVar6 = *(longlong *)(param_1 + 0x308);
            *(undefined8 *)(lVar6 + lVar16) = _DAT_1468b5d90;
            *(undefined4 *)(lVar6 + 8 + lVar16) = DAT_1468b5d98;
            *(undefined4 *)(lVar14 + *(longlong *)(param_1 + 0x318)) = (undefined4)local_res8;
            lVar6 = *(longlong *)(param_1 + 0x2f8);
            *(undefined8 *)(lVar6 + lVar16) = local_b8;
            *(undefined4 *)(lVar6 + 8 + lVar16) = local_b0;
            *(undefined4 *)(lVar14 + *(longlong *)(param_1 + 0x210)) =
                 *(undefined4 *)(param_1 + 0x200);
          }
          lVar6 = *(longlong *)(param_1 + 0x288);
          *(undefined8 *)(lVar16 + lVar6) = local_c8;
          *(undefined4 *)(lVar16 + 8 + lVar6) = local_c0;
          puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x298) + lVar17);
          *puVar1 = local_78;
          puVar1[1] = uStack_70;
          fVar21 = fVar4 - *(float *)(*(longlong *)(param_1 + 0x210) + lVar14);
          if (fVar21 == 0.0) {
            fVar22 = 1.0;
            local_84 = 0;
            fVar20 = 0.0;
            fVar21 = 0.0;
          }
          else {
            lVar6 = *(longlong *)(param_1 + 0x288);
            lVar7 = *(longlong *)(param_1 + 0x2d8);
            fVar21 = 1.0 / fVar21;
            fVar20 = (*(float *)(lVar16 + 8 + lVar6) - *(float *)(lVar16 + 8 + lVar7)) * fVar21;
            fVar22 = (*(float *)(lVar16 + lVar6) - *(float *)(lVar16 + lVar7)) * fVar21;
            fVar21 = (*(float *)(lVar16 + 4 + lVar6) - *(float *)(lVar16 + 4 + lVar7)) * fVar21;
            local_90 = fVar20;
          }
          lVar6 = *(longlong *)(param_1 + 0x2b8);
          *(ulonglong *)(lVar6 + lVar16) = CONCAT44(fVar21,fVar22);
          *(float *)(lVar6 + 8 + lVar16) = fVar20;
          *(undefined4 *)(lVar14 + *(longlong *)(param_1 + 0x2c8)) = (undefined4)local_res8;
          lVar6 = *(longlong *)(param_1 + 0x2a8);
          *(undefined8 *)(lVar6 + lVar16) = local_b8;
          *(undefined4 *)(lVar6 + 8 + lVar16) = local_b0;
          if (param_3 == '\x01') {
            puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x298) + lVar17);
            uVar8 = puVar2[1];
            uVar9 = puVar2[2];
            uVar10 = puVar2[3];
            puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x2e8) + lVar17);
            *puVar3 = *puVar2;
            puVar3[1] = uVar8;
            puVar3[2] = uVar9;
            puVar3[3] = uVar10;
          }
        }
      }
      iVar19 = iVar19 + 1;
      lVar14 = lVar14 + 4;
      lVar16 = lVar16 + 0xc;
      lVar17 = lVar17 + 0x10;
    } while (iVar19 < *(int *)(param_1 + 0x1fc));
  }
  plVar13 = (longlong *)FUN_142627a50(param_1,*(undefined8 *)(param_1 + 600));
  if (plVar13 != (longlong *)0x0) {
    lVar14 = *plVar13;
    if ((*(char *)(param_1 + 0x3b4) == '\0') ||
       (*(float *)(param_1 + 0x13c) <= 0.0 && *(float *)(param_1 + 0x13c) != 0.0)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if ((lVar14 != 0) &&
       (((bVar11 || ((*(byte *)(lVar14 + 0x138) & 2) != 0)) && (*(char *)(lVar14 + 0x38) == '\x04'))
       )) {
      plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x720);
      plVar18 = plVar15 + (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x728) * 0x12;
      for (; plVar15 != plVar18; plVar15 = plVar15 + 0x12) {
        if (*plVar15 == *(longlong *)(lVar14 + 0x40)) {
          FWeakObjectPtr::operator=((longlong)plVar13 + 0x44,plVar15[6]);
          local_res8 = 0;
          if (plVar15[8] == 0) {
            *(undefined1 *)((longlong)plVar13 + 0x75) = 2;
          }
          else {
            plVar13[10] = plVar15[8];
            *(undefined1 *)((longlong)plVar13 + 0x75) = 3;
          }
        }
      }
    }
    lVar16 = plVar13[1];
    if (((lVar16 != 0) && ((bVar11 || ((*(byte *)(lVar16 + 0x138) & 1) != 0)))) &&
       (*(char *)(lVar16 + 0x38) == '\x04')) {
      plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x720);
      plVar18 = plVar15 + (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x728) * 0x12;
      for (; plVar15 != plVar18; plVar15 = plVar15 + 0x12) {
        if (*plVar15 == *(longlong *)(lVar16 + 0x40)) {
          FWeakObjectPtr::operator=((longlong)plVar13 + 0x8c,plVar15[6]);
          local_res8 = 0;
          if (plVar15[8] == 0) {
            *(undefined1 *)((longlong)plVar13 + 0xbd) = 2;
          }
          else {
            plVar13[0x13] = plVar15[8];
            *(undefined1 *)((longlong)plVar13 + 0xbd) = 3;
          }
        }
      }
    }
    FUN_1426a6670(param_1,&local_78,plVar13 + 7);
    FUN_1426a6670(param_1,&local_78,plVar13 + 0x10);
    if ((lVar14 != 0) && ((bVar11 || ((*(byte *)(lVar14 + 0x138) & 2) != 0)))) {
      FUN_14262edc0(lVar14,param_1);
    }
    if ((lVar16 != 0) && ((bVar11 || ((*(byte *)(lVar16 + 0x138) & 1) != 0)))) {
      FUN_14262eea0(lVar16,param_1);
    }
    lVar14 = plVar13[3];
    if ((lVar14 != 0) && ((bVar11 || ((*(byte *)(lVar14 + 0xa0) & 1) != 0)))) {
      FUN_14264a430(lVar14,param_1);
    }
  }
  return;
}



// FUNCTION 1426b0e70 UpdateTriMeshVertices body=99 status=ok
// SIG undefined UpdateTriMeshVertices(void)

void FBodyInstance::UpdateTriMeshVertices(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong local_28;
  undefined8 local_20;
  undefined1 *local_18;
  longlong *plStack_10;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x140);
  if (cVar1 != '\0') {
    plStack_10 = &local_28;
    local_18 = &LAB_14268f6e0;
    local_28 = param_1;
    local_20 = param_2;
    FUN_142693730(param_1,&local_18);
  }
  return;
}



// FUNCTION 1426b0ee0 UseAsyncScene body=26 status=ok
// SIG undefined UseAsyncScene(void)

longlong FBodyInstance::UseAsyncScene(longlong param_1,char *param_2)

{
  char cVar1;
  undefined8 in_RAX;
  uint7 uVar2;
  
  uVar2 = (uint7)((ulonglong)in_RAX >> 8);
  cVar1 = '\x01';
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    uVar2 = 0;
  }
  if (((*(byte *)(param_1 + 0x12) & 8) != 0) && (cVar1 != '\0')) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 1426b0f00 FUN_1426b0f00 body=37 status=ok
// SIG undefined FUN_1426b0f00(void)

void FUN_1426b0f00(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x60);
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xfb;
  FUN_14269d670(param_1,0);
  return;
}



// FUNCTION 1426b0f30 FUN_1426b0f30 body=149 status=ok
// SIG undefined FUN_1426b0f30(void)

undefined1 FUN_1426b0f30(longlong param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  
  if ((((0.0001 < ABS(*(float *)(param_1 + 0x20))) || (0.0001 < ABS(*(float *)(param_1 + 0x24)))) ||
      (0.0001 < ABS(*(float *)(param_1 + 0x28)))) &&
     (((fVar1 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x28)
       , 0.0 <= fVar1 || ((*(byte *)(param_3 + 0x99) & 0x40) != 0)) &&
      ((fVar1 <= 0.0 || ((*(byte *)(param_3 + 0x99) & 0x10) != 0)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1426b0fd0 FUN_1426b0fd0 body=191 status=ok
// SIG undefined FUN_1426b0fd0(void)

void FUN_1426b0fd0(longlong param_1)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x110);
  plVar6 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar6 != (longlong *)0x0) {
    if (plVar6 == plVar3) {
      sVar2 = *(short *)(param_1 + 6);
    }
    else {
      sVar2 = *(short *)(param_1 + 8);
    }
    plVar3 = (longlong *)FUN_1426e2550((int)sVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x358))
                (plVar3,"D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Public\\PhysXPublic.h",
                 0x136);
    }
    plVar5 = (longlong *)0x0;
    if ((short)plVar6[1] == 6) {
      plVar5 = plVar6;
    }
    if (((plVar5 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5), lVar4 != 0))
       && (cVar1 = IsRigidBodyKinematic_AssumesLocked(plVar5), cVar1 == '\0')) {
      (**(code **)(*plVar5 + 0x240))(plVar5);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x360))(plVar3);
    }
  }
  return;
}


